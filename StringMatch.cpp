
#include <algorithm> 
using namespace std;

#include"StringMatch.h"
#include"stdio.h"
#include"assert.h"
#include"string.h"

const short g_ArraySize = 128;


bool StringMatch::StringMatch1(const char *firstStr, const char *secondStr)
{
	assert((firstStr!=NULL)&&(secondStr!=NULL));

	if(firstStr==secondStr)
	{
		return true;
	}

	int firstStrLen = strlen(firstStr);
	int secondStrLen = strlen(secondStr);
	if(firstStrLen!=secondStrLen)
	{
		return false;
	}

	int lenAll = (firstStrLen+1)*2;
	int lenHalf = firstStrLen+1;
	char *arrayToStoreChar = new char[lenAll];
	if(arrayToStoreChar==NULL){
		return false;
	}
	m_firstStr = arrayToStoreChar;
	strncpy(m_firstStr,firstStr,firstStrLen);
	m_firstStr[firstStrLen] = '\0';

	m_secondStr = arrayToStoreChar+lenHalf;
	strncpy(m_secondStr,secondStr,secondStrLen);
	m_secondStr[secondStrLen] = '\0';

	sort(m_firstStr,m_firstStr+firstStrLen);
	sort(m_secondStr, m_secondStr+secondStrLen);

	int i = 0;
	bool cmpFlag = true;
	for(i=0;i<firstStrLen;i++)
	{
		if(m_firstStr[i]!=m_secondStr[i]){
			cmpFlag = false;
			break;
		}

	}


	delete arrayToStoreChar;

	return cmpFlag;
}


bool StringMatch::StringMatch2(const char *firstStr, const char *secondStr)
{
	assert((firstStr!=NULL)&&(secondStr!=NULL));

	if(firstStr==secondStr)
	{
		return true;
	}

	int firstStrLen = strlen(firstStr);
	int secondStrLen = strlen(secondStr);
	if(firstStrLen!=secondStrLen)
	{
		return false;
	}

	int MarkArray[g_ArraySize];
	memset(MarkArray,0,sizeof(MarkArray));

	const char *p = firstStr;
	int i = 0;
	for(i=0;i<firstStrLen;i++)
	{
		MarkArray[p[i]]++;
	}
	p = secondStr;
	for(i=0;i<secondStrLen;i++)
	{
		MarkArray[p[i]]--;
	}

	bool cmpFlag = true;
	for(i=0;i<g_ArraySize;i++)
	{
		if(MarkArray[i]!=0){
			cmpFlag = false;
			break;
		}
	}
	
	return cmpFlag;
}


