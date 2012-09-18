
#ifndef __STRING_MATCH_H__
#define __STRING_MATCH_H__

class StringMatch
{
public:
	//StringMatch();

	//先排序 再去匹配，O(nlogn)
	bool StringMatch1(const char*, const char*);

	//引用一个128大小的数组，计数，判断数组的值，O(n)
	bool StringMatch2(const char*, const char*);

private:
	char *m_firstStr;
	char *m_secondStr;

};
#endif //__STRING_MATCH_H__