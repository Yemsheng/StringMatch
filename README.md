假设两个字符串中所含有的字符和个数都相同我们就叫这两个字符串匹配，
比如：abcda和adabc,由于出现的字符个数都是相同，只是顺序不同。


方法1：先排序然后比较，复杂度是O(nlog(n))

方法2：建立一个128大小int的数组。遍历第一串，对应数组位置++。然后遍历第二字符串，对应数组位置--，最后查看数组内容是否全为0。 O(n)