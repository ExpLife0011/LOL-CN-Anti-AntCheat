#include <AntiCheatBypass.h>

//tcjҪ�����
//NtSetInformationThread
//RtlMoveMemory
//NtQueryInformationProcess
//NtOpenProcess
//NtCreateThreadEx

AntiCheatBypass::AntiCheatBypass()
{
}


AntiCheatBypass::~AntiCheatBypass()
= default;

void AntiCheatBypass::EnableDebug()
{
	//RtlDispatchAPC dllע�� ntdll.dll
	//DbgUiRemoteBreakin �������ж� ntdll.dll
	//NtTerminateProcess Nt��ֹ���� ntdll.dll
	//ZwTerminateProcess Zw��ֹ���� ntdll.dll
	//SetUnhandledExceptionFilter UEF�ص���� Kernel32.dll
}
