
#ifndef __STRING_MATCH_H__
#define __STRING_MATCH_H__

class StringMatch
{
public:
	//StringMatch();

	//������ ��ȥƥ�䣬O(nlogn)
	bool StringMatch1(const char*, const char*);

	//����һ��128��С�����飬�������ж������ֵ��O(n)
	bool StringMatch2(const char*, const char*);

private:
	char *m_firstStr;
	char *m_secondStr;

};
#endif //__STRING_MATCH_H__