#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define VIRTUAL_MEMORY_SIZE 1024
#define PAGE_SIZE 4
#define PHYSICAL_MEMORY_SIZE 16

int virtualMemory[VIRTUAL_MEMORY_SIZE];
int physicalMemory[PHYSICAL_MEMORY_SIZE];

void initializeMemory() { int i;
    for(i = 0; i < VIRTUAL_MEMORY_SIZE; ++i) {
        virtualMemory[i] = rand() % 100;  // Random values for virtual memory
    }

    for(i = 0; i < PHYSICAL_MEMORY_SIZE; ++i) {
        physicalMemory[i] = -1;  // Initialize physical memory as empty
    }
}

int getPage(int pageNumber) {
    if (pageNumber < 0 || pageNumber >= VIRTUAL_MEMORY_SIZE / PAGE_SIZE) {
        printf("Invalid page number\n");
        return -1;
    }

    return pageNumber * PAGE_SIZE;
}

int readMemory(int address) {
    int pageNumber = address / PAGE_SIZE;
    int offset = address % PAGE_SIZE;

    int frame = getPage(pageNumber);

    if (frame == -1) {
        printf("Page fault: Page not in memory\n");
        return -1;
    }

    int physicalAddress = frame + offset;
    return physicalMemory[physicalAddress];
}

void loadPage(int pageNumber) { int i;
    int frame = getPage(pageNumber);

    if (frame == -1) {
        printf("Invalid page number\n");
        return;
    }

    // Simulate page replacement by randomly selecting a frame in physical memory
    int replaceFrame = rand() % PHYSICAL_MEMORY_SIZE;

    // Copy page from virtual memory to physical memory
    for (i = 0; i < PAGE_SIZE; ++i) {
        physicalMemory[replaceFrame + i] = virtualMemory[frame + i];
    }

    printf("Page %d loaded into frame %d\n", pageNumber, replaceFrame / PAGE_SIZE);
}

int main() { int i;
    srand(time(NULL));

    initializeMemory();

    // Simulate memory reads
    for (i = 0; i < 20; ++i) {
        int address = rand() % VIRTUAL_MEMORY_SIZE;
        int value = readMemory(address);
        if (value != -1) {
            printf("Read value at address %d: %d\n", address, value);
        } else {
            loadPage(address / PAGE_SIZE);
        }
    }

    return 0;
}
