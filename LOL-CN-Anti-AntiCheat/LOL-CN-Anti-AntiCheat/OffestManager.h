#pragma once
#include "framework.h"
#include <LOLClient.h>

class OffestManager
{
public:
	OffestManager();
	~OffestManager();
	void Init();

	uintptr_t GetSelfExceptionTrigThreadEntryAddr() const;
	uintptr_t GetGlobalGameHashThreadEntryAddr() const;



public:
	bool IsGameMainModified() const;

private:
	void SetUserGameVersion();
	[[nodiscard]] auto GetCurrentGameVersion() const->std::wstring;
	[[nodiscard]] auto GetUserGameVersion() const->std::wstring;

private:
	//��Ϸ�汾
	std::wstring _current_game_version_;
	std::wstring _user_game_version_;
	
	//TP League of Legends.exe ѭ���쳣���� �߳����
	uintptr_t lol_base_self_exception_trig_thread_entry_offest;
	//TP League of Legends.exe �����.text code hash �߳����
	uintptr_t _ter_safe_game_code_hash_thread_entry_offest;

};

