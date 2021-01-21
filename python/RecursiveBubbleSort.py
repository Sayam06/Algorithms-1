def bubblesort(l_elems, is_sorted, step):
    if step is 1 or is_sorted:
        # base case: l_elems is already sorted or we pass through the list len(l_elems) times
        return l_elems
    else:
        is_swapped = False
        for i in range(len(l_elems) - 1):
            # compares each pair of adjacent items and swaps them if they are in the wrong order
            if l_elems[i] > l_elems[i + 1]:
                is_swapped = True
                l_elems[i], l_elems[i + 1] = l_elems[i + 1], l_elems[i]
        # if is_swapped is True, the algorithm needs to pass through the list again
        return bubble(l_elems, not is_swapped, step - 1)

print(bubble(range(10,0,-1), False, len(range(10,0,-1))))