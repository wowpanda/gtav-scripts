void __EntryFunction__()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_1("main_install", 1424);
}

void func_1(void fParam0, int iParam1)
{
	SCRIPT::REQUEST_SCRIPT(fParam0);
	while (!SCRIPT::HAS_SCRIPT_LOADED(fParam0))
	{
		SYSTEM::WAIT(0);
		SCRIPT::REQUEST_SCRIPT(fParam0);
	}
	SYSTEM::START_NEW_SCRIPT(fParam0, iParam1);
}

