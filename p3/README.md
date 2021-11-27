主要考点：滑动窗口和哈希容器（无需容器）  
滑动窗口：滑动窗口算法在一个特定大小的字符串或数组上进行操作，而不在整个字符串和数组上操作，这样就降低了问题的复杂度，从而也达到降低了循环的嵌套深度。  
  
哈希容器：底层实现采用的是哈希表的存储结构。无序容器内部存储的键值对是无序的，各键值对的存储位置取决于该键值对中的键，
无序容器擅长通过指定键查找对应的值（平均时间复杂度为 O(1)）；但对于使用迭代器遍历容器中存储的元素，无序容器的执行效率则不如关联式容器。  
无序容器具体包括unordered_map、unordered_multimap、unordered_set 以及 unordered_multiset。有multi前缀的，支持元素有重复键值。