int buttonWithLongestTime(int** events, int eventsSize, int* eventsColSize) {
    int index = 0;
    int longIndex = events[0][0];
    int longCost = events[0][1];

    printf("buttonWithLongestTime eventsSize %d eventsColSize %d\n", eventsSize, *eventsColSize);

    for (index = 1; index < eventsSize; index++) {
        if (events[index][1]-events[index-1][1] > longCost) {
            printf("Compare cost %d index %d, events[%d] = %d-%d\n", longCost, longIndex, events[index][0], events[index][1], events[index-1][1]);
            longCost = events[index][1]-events[index-1][1];
            longIndex = events[index][0];
            printf("Find small cost %d index %d\n", longCost, longIndex);
        } else if (events[index][1]-events[index-1][1] == longCost) {
            printf("Compare cost %d index %d, events[%d] = %d-%d\n", longCost, longIndex, events[index][0], events[index][1], events[index-1][1]);
            if (longIndex > events[index][0]) {
                longIndex = events[index][0];
            }
            printf("Find small cost %d index %d\n", longCost, longIndex);
        }
    }
    return longIndex;
}
