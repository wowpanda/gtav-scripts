#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
	iLocal_0 = 4294967295;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	PED::IS_PED_VAULTING("prologue06_int");
	PED::IS_PED_VAULTING("prologue01");
	PED::IS_PED_VAULTING("prologue02");
	PED::IS_PED_VAULTING("prologue03");
	PED::IS_PED_VAULTING("prologue04");
	PED::IS_PED_VAULTING("prologue05");
	PED::IS_PED_VAULTING("prologue06");
	PED::IS_PED_VAULTING("prologuerd");
	PED::IS_PED_VAULTING("Prologue01c");
	PED::IS_PED_VAULTING("Prologue01d");
	PED::IS_PED_VAULTING("Prologue01e");
	PED::IS_PED_VAULTING("Prologue01f");
	PED::IS_PED_VAULTING("Prologue01g");
	PED::IS_PED_VAULTING("prologue01h");
	PED::IS_PED_VAULTING("prologue01i");
	PED::IS_PED_VAULTING("prologue01j");
	PED::IS_PED_VAULTING("prologue01k");
	PED::IS_PED_VAULTING("prologue01z");
	PED::IS_PED_VAULTING("prologue03b");
	PED::IS_PED_VAULTING("prologue04b");
	PED::IS_PED_VAULTING("prologue05b");
	PED::IS_PED_VAULTING("prologue06b");
	PED::IS_PED_VAULTING("prologuerdb");
	PED::IS_PED_VAULTING("prologue_occl");
	PED::IS_PED_VAULTING("DES_ProTree_start");
	PED::IS_PED_VAULTING("DES_ProTree_start_lod");
	PED::IS_PED_VAULTING("prologue04_cover");
	PED::IS_PED_VAULTING("prologue03_grv_fun");
	STREAMING::REMOVE_IPL("prologue03_grv_dug");
	STREAMING::REMOVE_IPL("prologue_grv_torch");
	STREAMING::_0xAF12610C644A35C9("prologue", 1);
	STREAMING::REQUEST_MODEL(joaat("csb_prolsec"));
	while (!STREAMING::HAS_MODEL_LOADED(joaat("csb_prolsec")))
	{
		SYSTEM::WAIT(0);
	}
	PLAYER::SET_PLAYER_MODEL(CAM::_0xDC9DA9E8789F5246(), joaat("csb_prolsec"));
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), 5313.8f, -5207.2f, 83.5f, 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), 169.2f);
	}
	HUD::DISPLAY_RADAR(false);
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = MISC::GET_GAME_TIMER() + 10000;
	while (!STREAMING::IS_NEW_LOAD_SCENE_LOADED() && MISC::GET_GAME_TIMER() < iVar0)
	{
		SYSTEM::WAIT(0);
	}
	unk_0x126E6B6CBE0FEACC();
	AUDIO::START_AUDIO_SCENE("MISSION_FAILED_SCENE");
	CAM::DO_SCREEN_FADE_IN(2500);
	BRAIN::ENABLE_SCRIPT_BRAIN_SET();
	HUD::REQUEST_ADDITIONAL_TEXT("NG_INSTALL", 0);
	while (true)
	{
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			CAM::DO_SCREEN_FADE_IN(0);
		}
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		GRAPHICS::DRAW_RECT(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		HUD::SET_TEXT_SCALE(0.5f, 0.5f);
		HUD::SET_TEXT_CENTRE(1);
		if (SYSTEM::TIMERA() > 10000 && HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			iLocal_0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				SYSTEM::SETTIMERA(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		if (MISC::_0x14832BF2ABA53FC5())
		{
			MISC::_0xC79AE21974B01FB2();
			return;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)//Position - 0x2F8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

