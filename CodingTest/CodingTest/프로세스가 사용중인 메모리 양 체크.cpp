//#include "windows.h"
//#include "psapi.h"
//
//
//int main() 
//{
//	PROCESS_MEMORY_COUNTERS_EX pmc;
//	GetProcessMemoryInfo(GetCurrentProcess(), reinterpret_cast<PROCESS_MEMORY_COUNTERS*>(&pmc), sizeof(pmc));
//	//pmc�� �ڷ����� �Լ��� ���ڿ� ȣȯ�� �ȵż�, Ÿ��ĳ���� ���־���.
//
//	SIZE_T virtualMemUsedByMe = pmc.PrivateUsage; //����޸� üũ
//	SIZE_T physMemUsedByMe = pmc.WorkingSetSize; //�����޸� üũ
//
//	int* Arr = new int[100]();
//
//	GetProcessMemoryInfo(GetCurrentProcess(), reinterpret_cast<PROCESS_MEMORY_COUNTERS*>(&pmc), sizeof(pmc));
//
//	SIZE_T virtualMemUsedByMe1 = pmc.PrivateUsage; //����޸� üũ
//	SIZE_T physMemUsedByMe1 = pmc.WorkingSetSize; //�����޸� üũ
//
//	SIZE_T Data = physMemUsedByMe1 - physMemUsedByMe;
//
//	return 0;
//}
