#region Local Var
	int iLocal_0 = 0;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	int iLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	int iLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	char* sLocal_21 = NULL;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	int iLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	bool bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	bool bLocal_58 = 0;
	int iLocal_59 = 0;
	vector3 vLocal_60 = { 0f, 0f, 0f };
	vector3 vLocal_61 = { 0f, 0f, 0f };
	float fLocal_62 = 0f;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 16;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	int iLocal_234 = 0;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int iLocal_237 = 0;
	struct<57> Local_238 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_239 = 0;
	struct<5> Local_240[2];
	struct<21> Local_241 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_0 = 3;
	iLocal_3 = 1;
	iLocal_4 = 134;
	iLocal_5 = 134;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 1;
	iLocal_9 = 134;
	iLocal_10 = 1;
	iLocal_11 = 12;
	iLocal_12 = 12;
	fLocal_15 = 0.001f;
	iLocal_18 = 4294967295;
	sLocal_21 = "NULL";
	fLocal_24 = 80f;
	fLocal_25 = 140f;
	fLocal_26 = 180f;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_102(ScriptParam_241);
	}
	while (true)
	{
		func_101();
		if (func_91())
		{
			func_87();
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_86();
			switch (func_85(NETSHOP::_NETWORK_SHOP_BASKET_START()))
			{
				case 0:
					if (func_84() > 0)
					{
						Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_84() == 3)
					{
						Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_87();
					break;
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_84())
				{
					case 0:
						Local_238 = 2;
						break;
					
					case 2:
						func_1();
						break;
					
					case 3:
						break;
					}
				}
		}
	}
}

void func_1()//Position - 0x125
{
	switch (Local_238.f_1)
	{
		case 0:
			func_25();
			break;
		
		case 1:
			func_24();
			break;
	}
	if (Local_238.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_238 = 3;
	}
	func_17();
	if (Local_238.f_35 && Local_238.f_32 < 10)
	{
		func_12();
	}
	if (Local_238.f_32 >= 10)
	{
		if (!func_11(&uLocal_65))
		{
			func_10(&uLocal_65, 0, 0);
		}
		else if (func_9(&uLocal_65, 10000, 0))
		{
			Local_238 = 3;
		}
	}
	if (func_8())
	{
		Local_238 = 3;
	}
	if (Local_238.f_37 == 1)
	{
		if (!Local_238.f_38)
		{
			if (((!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() || func_7("AIRSTRIKE_1")) || func_7("AIRSTRIKE_2")) || func_7("AIRSTRIKE_4"))
			{
				func_6("AIRSTRIKE_3", 4294967295);
				Local_238.f_38 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_3(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			Local_238 = 3;
		}
	}
	else if (func_3(CAM::_0xDC9DA9E8789F5246(), 1) || func_2())
	{
		Local_238 = 3;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		Local_238 = 3;
	}
}

bool func_2()//Position - 0x240
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

int func_3(int iParam0, bool bParam1)//Position - 0x25C
{
	if (bParam1)
	{
		if (func_4(iParam0))
		{
			return 1;
		}
	}
	if (Global_1841F3[iParam0 /*790*/] == 4294967295)
	{
		return 0;
	}
	return 1;
}

bool func_4(int iParam0)//Position - 0x288
{
	return func_5(iParam0);
}

bool func_5(int iParam0)//Position - 0x296
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

void func_6(char* sParam0, int iParam1)//Position - 0x2B0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_7(char* sParam0)//Position - 0x2C7
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_8()//Position - 0x2DA
{
	return Global_1406A0;
}

int func_9(var uParam0, int iParam1, bool bParam2)//Position - 0x2E6
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_10(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_10(var uParam0, bool bParam1, bool bParam2)//Position - 0x344
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = HUD::_0x13C4B962653A5280();
			}
			else
			{
				*uParam0 = NETWORK::_0x89023FBBF9200E9F();
			}
		}
		else
		{
			*uParam0 = MISC::GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_11(var uParam0)//Position - 0x389
{
	return uParam0->f_1;
}

void func_12()//Position - 0x395
{
	vector3 vVar0;
	vector3 vVar1;
	int iVar2;
	
	iVar2 = 200;
	if (func_16(vLocal_61))
	{
		if (func_14(Local_238.f_2))
		{
			vLocal_61 = { unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_238.f_2), 1) };
			vLocal_61.z = (vLocal_61.z - 5f);
		}
	}
	switch (Local_238.f_32)
	{
		case 0:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), AUDIO::_0x0626A247D2405330(), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 1, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					iLocal_57 = 1;
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 750, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 1:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 2:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 3:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 750, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 4:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 5:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 750, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 6:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 7:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 8:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					func_10(&(Local_238.f_33), 0, 0);
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			else if (func_9(&(Local_238.f_33), 500, 0))
			{
				func_13(&(Local_238.f_33));
				Local_238.f_32++;
			}
			break;
		
		case 9:
			if (!func_11(&(Local_238.f_33)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_237, Local_238.f_32))
				{
					vVar0 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar0.z = vLocal_61.z;
					vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar1 = { vVar1 + Vector(0f, 0.1f, 0.1f) };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1 + Vector(10f, 0f, 0f), &(vVar1.f_2), 0, 0);
					vVar1.z = (vVar1.z - 25f);
					MISC::_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar1, iVar2, 1, joaat("weapon_airstrike_rocket"), NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1, 0, -1f, AUDIO::_0x0626A247D2405330(), 1, 0, 0, 0, 0, 0);
					Local_238.f_32++;
					iLocal_57 = 0;
					MISC::SET_BIT(&iLocal_237, Local_238.f_32);
				}
			}
			break;
	}
}

void func_13(var uParam0)//Position - 0xD81
{
	uParam0->f_1 = 0;
}

int func_14(var uParam0)//Position - 0xD8E
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_15(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_15(int iParam0)//Position - 0xDAE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_16(vector3 vParam0)//Position - 0xDE7
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_17()//Position - 0xE11
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	
	if (func_14(Local_238.f_2))
	{
		iVar0 = NETWORK::NET_TO_VEH(Local_238.f_2);
		vVar2 = { unk_0x8000C77B5F336760(iVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_16(Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2))
		{
			vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 };
		}
		else if (func_23(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_14(Local_238.f_2))
			{
				if (!ENTITY::IS_ENTITY_AT_COORD(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_62 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar1, 0);
				}
				else
				{
					iLocal_59 = 1;
				}
			}
			else
			{
				iLocal_59 = 1;
			}
		}
		else
		{
			fLocal_62 = (fLocal_62 - 3.75f);
		}
		iVar3 = SYSTEM::FLOOR(fLocal_62);
		if (fLocal_62 <= 200f)
		{
			iVar4 = 6;
		}
		else
		{
			iVar4 = 1;
		}
		if (fLocal_62 >= 0f)
		{
			func_18(iVar3, "AIRSTRIKE_2", 4294967295, iVar4, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar4, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
		}
	}
}

void func_18(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)//Position - 0xF28
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_22(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_21(6, iVar0);
		Global_14E696.f_EC5[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_EC5.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_EC5.f_B7[iVar0] = iParam3;
		Global_14E696.f_EC5.f_AC[iVar0] = iParam2;
		Global_14E696.f_EC5.f_104[iVar0] = iParam4;
		Global_14E696.f_EC5.f_10F[iVar0] = iParam5;
		StringCopy(&(Global_14E696.f_EC5.f_11A[iVar0 /*16*/]), sParam6, 64);
		Global_14E696.f_EC5.f_1BB[iVar0] = iParam7;
		Global_14E696.f_EC5.f_1C6[iVar0] = fParam8;
		Global_14E696.f_EC5.f_1F1[iVar0] = iParam9;
		Global_14E696.f_EC5.f_1FC[iVar0] = iParam10;
		Global_14E696.f_EC5.f_CD[iVar0] = iParam11;
		Global_14E696.f_EC5.f_D8[iVar0] = iParam12;
		Global_14E696.f_EC5.f_E3[iVar0] = iParam13;
		Global_14E696.f_EC5.f_EE[iVar0] = iParam14;
		Global_14E696.f_EC5.f_F9[iVar0] = iParam15;
		Global_14E696.f_EC5.f_207[iVar0] = iParam16;
		Global_14E696.f_EC5.f_212[iVar0] = iParam17;
		Global_14E696.f_EC5.f_21D[iVar0] = iParam18;
		Global_14E696.f_EC5.f_228[iVar0] = iParam19;
		Global_14E696.f_EC5.f_233[iVar0] = iParam20;
		Global_14E696.f_EC5.f_23E[iVar0] = iParam21;
		Global_14E696.f_EC5.f_249[iVar0] = iParam22;
		Global_14E696.f_EC5.f_254[iVar0] = iParam23;
		Global_14E696.f_EC5.f_25F[iVar0] = iParam24;
		if (iParam15 == 5 && func_20())
		{
			Global_14E696.f_440 = 1;
		}
		if (MISC::IS_PC_VERSION())
		{
			iVar2 = 0;
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_14E696.f_444 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_14E696.f_443 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_14E696.f_440 = 1;
			}
			if (func_19())
			{
				Global_14E696.f_444 = 1;
			}
		}
	}
}

int func_19()//Position - 0x118A
{
	int iVar0;
	var uVar1;
	
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_20()//Position - 0x11AE
{
	if (((UNK::_GET_CURRENT_LANGUAGE_ID() == 8 || UNK::_GET_CURRENT_LANGUAGE_ID() == 9) || UNK::_GET_CURRENT_LANGUAGE_ID() == 10) || UNK::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_21(int iParam0, int iParam1)//Position - 0x11EC
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_22(int iParam0, int iParam1)//Position - 0x1205
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

int func_23(int iParam0, bool bParam1, bool bParam2)//Position - 0x121E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_252F9E.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_24()//Position - 0x1268
{
}

void func_25()//Position - 0x1270
{
	vector3 vVar0;
	bool bVar1;
	
	func_82();
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (!iLocal_56)
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) <= 0)
				{
					bVar1 = !func_81();
					WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_flare"), 1, bVar1, bVar1);
					WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_flare"), bVar1);
					iLocal_56 = 1;
				}
			}
			else if (MISC::_GET_PROJECTILE_NEAR_PED_COORDS(AUDIO::_0x0626A247D2405330(), joaat("weapon_flare"), 100f, &(Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2), 1))
			{
				if (func_80(Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 = { vVar0 };
				}
				if (func_7("AIRSTRIKE_1"))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				}
				if (!iLocal_55)
				{
					if (!func_79(Local_238.f_2.f_3))
					{
						if (func_14(Local_238.f_2))
						{
							func_78();
							NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_238.f_2.f_3));
							BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_238.f_2.f_3), uLocal_49);
							VEHICLE::_SET_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_238.f_2), SYSTEM::ROUND(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_77(AUDIO::_0x0626A247D2405330()))
					{
						func_6("AIRSTRIKE_4", 4294967295);
					}
					else
					{
						func_6("AIRSTRIKE_1", 4294967295);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_49();
	func_26();
}

void func_26()//Position - 0x13BF
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_48();
			break;
		
		case 1:
			func_48();
			break;
		
		case 2:
			if (func_14(Local_238.f_2))
			{
				bLocal_58 = true;
				iVar0 = NETWORK::NET_TO_VEH(Local_238.f_2);
				if (!HUD::DOES_BLIP_EXIST(iLocal_47))
				{
					iLocal_47 = HUD::ADD_BLIP_FOR_ENTITY(iVar0);
					HUD::SET_BLIP_SPRITE(iLocal_47, 16);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_47, "AIRSTRIKE_5");
					HUD::_0x75A16C3DA34F1245(iLocal_47, 0);
				}
				else
				{
					HUD::SET_BLIP_ROTATION(iLocal_47, SYSTEM::CEIL(ENTITY::GET_ENTITY_HEADING(iVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_16(Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2))
					{
						vVar3 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 };
					}
					else
					{
						vVar3 = { vLocal_60 };
					}
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, unk_0x8000C77B5F336760(iVar0, 1), 1) <= (60f * 5f))
					{
						AUDIO::PLAY_STREAM_FROM_VEHICLE(NETWORK::NET_TO_VEH(Local_238.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_235)
				{
					if (!Local_238.f_36)
					{
						if (!func_79(Local_238.f_2.f_3))
						{
							if (!func_16(Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(CAM::_0xDC9DA9E8789F5246()), unk_0x8000C77B5F336760(NETWORK::NET_TO_VEH(Local_238.f_2.f_3), 1), 0) <= 250f)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, unk_0x8000C77B5F336760(iVar0, 1), 1) >= (60f * 2.5f))
									{
										func_30(&uLocal_69, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_235 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_238.f_32 < 10)
				{
					if (!Local_238.f_35)
					{
						if (!func_16(Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2))
						{
							if (func_29() == 2)
							{
								if (!func_11(&uLocal_63))
								{
									func_10(&uLocal_63, 0, 0);
								}
								else if (func_9(&uLocal_63, 7500, 0))
								{
									Local_238.f_35 = 1;
								}
								vVar1 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								vVar2 = { Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								vVar1.z = -200f;
								vVar2.z = 1500f;
								if (ENTITY::IS_ENTITY_AT_COORD(iVar0, Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && MISC::IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar2, joaat("weapon_flare"), 0))
								{
									Local_238.f_35 = 1;
								}
							}
							else if (func_29() == 1)
							{
								Local_238.f_35 = 1;
								Local_238.f_32 = 100;
							}
						}
						else if (ENTITY::IS_ENTITY_AT_COORD(iVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_238.f_35 = 1;
							Local_238.f_32 = 100;
							Local_238.f_36 = 1;
							if (!iLocal_236)
							{
								func_30(&uLocal_69, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_236 = 1;
							}
						}
					}
				}
			}
			if (!func_14(Local_238.f_2) || func_79(Local_238.f_2.f_3))
			{
				func_27();
			}
			break;
		
		case 3:
			func_48();
			break;
	}
}

void func_27()//Position - 0x16B2
{
	int iVar0;
	
	if (!func_79(Local_238.f_2.f_3))
	{
		if (func_28(Local_238.f_2.f_3))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_238.f_2.f_3))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_238.f_2.f_3);
				unk_0x65E471E4A2D56226(iVar0, 0, 0);
			}
		}
	}
}

int func_28(var uParam0)//Position - 0x16F6
{
	if (unk_0xDD5EE7D9FC37FA16(uParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_29()//Position - 0x171A
{
	if (Local_238.f_37 == 1)
	{
		return Local_238.f_37;
	}
	else if (Local_238.f_37 == 2)
	{
		return Local_238.f_37;
	}
	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_238.f_37 = 1;
		return Local_238.f_37;
	}
	Local_238.f_37 = 2;
	return Local_238.f_37;
}

int func_30(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1775
{
	func_46(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DD7 = 0;
	Global_3DDC = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_280001 = 1;
	return func_31(sParam2, iParam3, 0);
}

int func_31(char* sParam0, int iParam1, bool bParam2)//Position - 0x17C3
{
	Global_3DCF = 0;
	if (Global_3DCE == 0 || Global_3DD0 == 2)
	{
		if (Global_3DCE != 0)
		{
			if (iParam1 > Global_3DD0)
			{
				if (Global_3DD5 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_38B1.f_1 = 3;
					Global_3DCE = 0;
					Global_3DCF = 1;
					Global_3E03 = 0;
					Global_3DCA = 0;
					Global_3DCB = 0;
					Global_3DD9 = 0;
					Global_3DD8 = 0;
					Global_38B0 = 0;
				}
				else
				{
					func_45();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_44(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_43();
		Global_3B07 = { Global_3BAC };
		Global_3DD4 = Global_3DD5;
		Global_3DDB = Global_3DDC;
		Global_280002 = Global_280001;
		Global_3DDD = { Global_3DED };
		Global_3DD6 = Global_3DD7;
		Global_41AC = Global_41AD;
		Global_41B4 = { Global_41BA };
		Global_41AE = Global_41AF;
		Global_41B0 = Global_41B1;
		Global_41B2 = Global_41B3;
		Global_3C51.f_172 = Global_41AB;
		Global_3C51.f_170 = Global_41A9;
		Global_3C51.f_171 = Global_41AA;
		Global_3DCA = Global_3DCB;
		if (Global_3DD4)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
			if (bParam2)
			{
				func_36();
				if (Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_38B1.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_388F == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (func_35())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(AUDIO::_0x0626A247D2405330()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_11625)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(AUDIO::_0x0626A247D2405330()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
					{
						return 0;
					}
				}
			}
			if (func_34())
			{
				return 0;
			}
			else
			{
				switch (Global_38B1.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 9))
				{
					return 0;
				}
			}
			func_33();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_32();
		return 1;
	}
	if (Global_3DCE == 5)
	{
		return 0;
	}
	if (iParam1 < Global_3DD0 || iParam1 == Global_3DD0)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_45();
	}
	return 0;
}

void func_32()//Position - 0x1A8F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_3962[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_3DCE = 1;
}

void func_33()//Position - 0x1AC0
{
	Global_3E03 = Global_3E02;
	Global_3DFD = Global_3DFE;
	Global_3E2C = { Global_3E20 };
	Global_3E32 = { Global_3E26 };
	Global_3E05 = Global_3E04;
	Global_3E4A = { Global_3E38 };
	Global_3E50 = { Global_3E3E };
	Global_3E56 = { Global_3E44 };
	Global_3E5C = { Global_3E62 };
	Global_6A2 = Global_6A3;
	Global_6A4 = Global_6A5;
	Global_3DD9 = Global_3DDA;
	Global_3DDB = Global_3DDC;
	Global_3DDD = { Global_3DED };
	Global_3DD2 = Global_3DD3;
	Global_41C6 = 0;
	Global_3DFF = 0;
	Global_3E00 = 0;
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_950, 16);
}

int func_34()//Position - 0x1B55
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_35()//Position - 0x1B7C
{
	int iVar0;
	int iVar1;
	
	if (Global_11625)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (PED::GET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 78, 1))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_36()//Position - 0x1C15
{
	if (func_42(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[0 /*29*/])
			{
				Global_38B1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[1 /*29*/])
			{
				Global_38B1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()) == Global_19E56.f_6D76[2 /*29*/])
			{
				Global_38B1 = 2;
			}
			else
			{
				Global_38B1 = 0;
			}
		}
	}
	else
	{
		Global_38B1 = func_37();
		if (Global_38B1 == 145)
		{
			Global_38B1 = 3;
		}
		if (Global_11625)
		{
			Global_38B1 = 3;
		}
		if (Global_38B1 > 3)
		{
			Global_38B1 = 3;
		}
	}
}

var func_37()//Position - 0x1CB7
{
	func_38();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_38()//Position - 0x1CD0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_41(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_40(AUDIO::_0x0626A247D2405330());
			if (func_39(iVar0) && (!func_42(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_39(Global_19E56.f_933.f_21B.f_10CD))
				{
					Global_19E56.f_933.f_21B.f_10CE = Global_19E56.f_933.f_21B.f_10CD;
				}
				Global_19E56.f_933.f_21B.f_10CF = iVar0;
				Global_19E56.f_933.f_21B.f_10CD = iVar0;
				return;
			}
		}
		else
		{
			if (Global_19E56.f_933.f_21B.f_10CD != 145)
			{
				Global_19E56.f_933.f_21B.f_10CF = Global_19E56.f_933.f_21B.f_10CD;
			}
			return;
		}
	}
	Global_19E56.f_933.f_21B.f_10CD = 145;
}

bool func_39(int iParam0)//Position - 0x1DCD
{
	return iParam0 < 3;
}

int func_40(int iParam0)//Position - 0x1DD9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_41(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_41(int iParam0)//Position - 0x1E16
{
	if (func_39(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_42(int iParam0)//Position - 0x1E40
{
	return Global_8D15 == iParam0;
}

void func_43()//Position - 0x1E4E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_3B07[iVar0 /*10*/] = 0;
		StringCopy(&(Global_3B07[iVar0 /*10*/].f_1), "", 24);
		Global_3B07[iVar0 /*10*/].f_7 = 0;
		Global_3B07[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_3B07.f_A1 = 4294967197;
	Global_3B07.f_A2 = { 0f, 0f, 0f };
}

bool func_44(int iParam0, int iParam1)//Position - 0x1EA5
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				return Global_14E0B5.f_CB[iParam1];
			}
			break;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_418, iParam0);
}

void func_45()//Position - 0x1EE0
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_38B1.f_1 == 9) || Global_38B0 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
		Global_38B1.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

void func_46(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1F37
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = uParam5;
	if (iParam3 == 0)
	{
		Global_41A9 = 1;
		Global_41A7 = 0;
	}
	else
	{
		Global_41A9 = 0;
		Global_41A7 = 1;
	}
	if (iParam4 == 0)
	{
		Global_41AA = 1;
		Global_41A8 = 0;
	}
	else
	{
		Global_41AA = 0;
		Global_41A8 = 1;
	}
}

Vector3 func_47(int iParam0)//Position - 0x1F8D
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_48()//Position - 0x1FA0
{
	if (HUD::DOES_BLIP_EXIST(iLocal_47))
	{
		HUD::REMOVE_BLIP(&iLocal_47);
	}
}

void func_49()//Position - 0x1FB7
{
	switch (Local_238.f_2.f_2)
	{
		case 0:
			func_76(1);
			break;
		
		case 1:
			if (func_50())
			{
				func_76(2);
			}
			break;
		
		case 2:
			if (!func_14(Local_238.f_2))
			{
				if (func_79(Local_238.f_2.f_3))
				{
					func_76(3);
				}
			}
			else if (func_79(Local_238.f_2.f_3))
			{
				func_76(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_50()//Position - 0x2032
{
	if (!func_11(&uLocal_67))
	{
		func_10(&uLocal_67, 0, 0);
	}
	else if (func_75(Local_238.f_2.f_1) && func_75(Local_238.f_2.f_3.f_1))
	{
		if (func_9(&uLocal_67, 3000, 0))
		{
			if (func_54() && func_51())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_51()//Position - 0x208F
{
	if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3) && func_75(Local_238.f_2.f_3.f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (func_14(Local_238.f_2))
		{
			if (func_53(&(Local_238.f_2.f_3), Local_238.f_2, 22, Local_238.f_2.f_3.f_1, 4294967295, 1, 1, 1))
			{
				ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_238.f_2.f_3), Global_180845);
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), 0);
				PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_238.f_2.f_3), 1);
				func_52();
				BRAIN::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_238.f_2.f_3), uLocal_48);
				VEHICLE::_SET_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_238.f_2), SYSTEM::ROUND(50f));
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3))
	{
		return 0;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_238.f_2.f_3.f_1);
	return 1;
}

void func_52()//Position - 0x2174
{
	if (!iLocal_50)
	{
		if (func_14(Local_238.f_2))
		{
			BRAIN::OPEN_SEQUENCE_TASK(&uLocal_48);
			BRAIN::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, vLocal_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			BRAIN::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_238.f_2.f_E, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			CUTSCENE::_0x8D9DF6ECA8768583(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_53(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x2204
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(NETWORK::NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(uParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				unk_0xF2A50F5F6E7737D8(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_54()//Position - 0x228C
{
	vector3 vVar0;
	float fVar1;
	
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (func_75(Local_238.f_2.f_1))
		{
			if (AUDIO::LOAD_STREAM("AIRSTRIKE_FLYOVER", 0))
			{
				func_71(&vVar0, &fVar1);
				if (func_56(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, 4294967295, 1, 0, 0, 0, 0, 0))
				{
					if (func_55(&(Local_238.f_2), Local_238.f_2.f_1, vVar0, fVar1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_238.f_2.f_E = { vVar0 * Vector(0f, -1f, -1f) };
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_238.f_2), 2);
						unk_0x346478B12F69D4E3(NETWORK::NET_TO_VEH(Local_238.f_2), false);
						ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_238.f_2), 1);
						PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_238.f_2));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_238.f_2), 60f);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_238.f_2), 1, 1, 0);
						VEHICLE::_0x79DF7E806202CE01(NETWORK::NET_TO_VEH(Local_238.f_2), 1000);
						ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_238.f_2), 0);
						VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_238.f_2), 3);
						VEHICLE::OPEN_BOMB_BAY_DOORS(NETWORK::NET_TO_VEH(Local_238.f_2));
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_238.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_55(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x23AA
{
	float fVar0;
	int iVar1;
	
	if (!NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("BOMBUSHKA"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, iParam5, iParam4, iParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = unk_0xD3495809C4827891(iVar1);
		Global_26862F.f_1822 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				unk_0x03C1DBD85D4F7482(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, iParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 1);
				}
				else
				{
					unk_0xF2A50F5F6E7737D8(*uParam0, 0);
				}
				if (bParam11)
				{
					unk_0xE106CB3E79DC85D6(*uParam0, CAM::_0xDC9DA9E8789F5246(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			unk_0x9E9094D4A850A6F4(iVar1, 1);
			if (bParam10)
			{
				unk_0x64B0385195B407FC(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_56(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0x24A4
{
	Global_24B2CE.f_2 = 0;
	if (fParam1 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam1))
		{
			return 0;
		}
	}
	if (fParam2 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam2) || PED::IS_ANY_PED_NEAR_POINT(vParam0, fParam2))
		{
			return 0;
		}
	}
	if (fParam3 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam3, iParam16))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (fParam12 > 0f)
	{
		if (func_64(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_57(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

int func_57(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x25B5
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_23(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_62(CAM::_0xDC9DA9E8789F5246()), vParam0, 1) <= (fVar2 + fParam1))
				{
					if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_23(iVar1, 1, 1))
		{
			if (!func_59(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_58(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_62(iVar1), vParam0, 1) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_62(iVar1), vParam0, 1) <= (fVar2 + fParam1))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_58(int iParam0)//Position - 0x276D
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

bool func_59(int iParam0, int iParam1)//Position - 0x2798
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_60(4294967295, 0) == 8;
	}
	else
	{
		bVar0 = Global_1841F3[iParam0 /*790*/].f_D3 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_60(int iParam0, bool bParam1)//Position - 0x27E3
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_61();
	}
	if (Global_140845[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1407DA[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_61()//Position - 0x2824
{
	return Global_1407E0;
}

Vector3 func_62(int iParam0)//Position - 0x2830
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_63() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_16(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_47(iParam0);
}

var func_63()//Position - 0x2883
{
	return Global_255C02.f_10;
}

int func_64(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)//Position - 0x2891
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_23(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_58(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && uParam7) && bParam4) && func_65(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_47(iVar1), vParam0, 1) < fParam1)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_65(int iParam0)//Position - 0x298D
{
	if (func_70(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_69(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_66(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_66(int iParam0, int iParam1)//Position - 0x29D4
{
	int iVar0;
	
	iVar0 = func_68(iParam0);
	if (!iVar0 == func_67())
	{
		if (iVar0 == func_68(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_67()//Position - 0x29FF
{
	return 4294967295;
}

int func_68(int iParam0)//Position - 0x2A08
{
	if (iParam0 != func_67())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_67();
}

struct<13> func_69(int iParam0)//Position - 0x2A2B
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_70(int iParam0, int iParam1)//Position - 0x2A42
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_69(iParam0) };
		Global_2633EE = { func_69(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633E1))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2633EE))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2633BE, 35, &Global_2633EE);
				if (Global_26339B == Global_2633BE)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_71(var uParam0, var uParam1)//Position - 0x2AAF
{
	float fVar0;
	
	*uParam0 = { func_73(vLocal_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = PATHFIND::_0x8ABE8608576D9CE3((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_72(*uParam0, vLocal_60);
}

float func_72(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x2B27
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

Vector3 func_73(vector3 vParam0, float fParam1, float fParam2, float fParam3)//Position - 0x2B41
{
	vector3 vVar0;
	float fVar1;
	
	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar1 = (fParam3 / 2f);
	vVar0 = { func_74(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(fParam1, fParam2)) };
	vVar0.z = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar1, fVar1);
	return vParam0 + vVar0;
}

Vector3 func_74(vector3 vParam0, float fParam1)//Position - 0x2B8A
{
	float fVar0;
	
	if (fParam1 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam1 / fVar0));
	}
	return 0f, 0f, 0f;
}

bool func_75(int iParam0)//Position - 0x2BC1
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

void func_76(int iParam0)//Position - 0x2BDF
{
	Local_238.f_2.f_2 = iParam0;
}

int func_77(int iParam0)//Position - 0x2BEF
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_HELI(iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_78()//Position - 0x2C25
{
	if (!iLocal_51)
	{
		if (func_14(Local_238.f_2))
		{
			BRAIN::OPEN_SEQUENCE_TASK(&uLocal_49);
			BRAIN::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			BRAIN::TASK_PLANE_MISSION(0, NETWORK::NET_TO_VEH(Local_238.f_2), 0, 0, Local_238.f_2.f_E, 4, 60f, 25f, -1f, SYSTEM::CEIL((50f + 5f)), 20, 1);
			CUTSCENE::_0x8D9DF6ECA8768583(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_79(var uParam0)//Position - 0x2CBE
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

bool func_80(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x2CDD
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_81()//Position - 0x2D24
{
	return Global_16C64.f_147 > 0;
}

void func_82()//Position - 0x2D35
{
	if (!iLocal_234)
	{
		if (!func_79(Local_238.f_2.f_3))
		{
			func_83(&uLocal_69, 3, NETWORK::NET_TO_PED(Local_238.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_234 = 1;
		}
	}
}

void func_83(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2D6A
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_11625)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

int func_84()//Position - 0x2E05
{
	return Local_238;
}

int func_85(int iParam0)//Position - 0x2E0F
{
	return Local_240[iParam0 /*5*/];
}

void func_86()//Position - 0x2E1E
{
}

void func_87()//Position - 0x2E26
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2.f_3) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_238.f_2))
	{
		if (func_14(Local_238.f_2) && !func_79(Local_238.f_2.f_3))
		{
			BRAIN::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_238.f_2.f_3), NETWORK::NET_TO_VEH(Local_238.f_2), 0, AUDIO::_0x0626A247D2405330(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_89(func_90(1, 1), 11, func_67());
	func_88();
}

void func_88()//Position - 0x2EA9
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_89(int iParam0, int iParam1, var uParam2)//Position - 0x2EB5
{
	struct<4> Var0;
	
	Var0 = 1124974988;
	Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
	}
}

int func_90(int iParam0, bool bParam1)//Position - 0x2EED
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_23(iVar2, 0, 0))
		{
			if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_59(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_91()//Position - 0x2F52
{
	var uVar0;
	
	func_98(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_97())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_96())
	{
		return 1;
	}
	if (func_95(157))
	{
		if (!func_94())
		{
			return 1;
		}
	}
	if (func_95(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_92() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_92()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_92()//Position - 0x2FDC
{
	switch (func_93())
	{
		case 0:
			return joaat("freemode");
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_93()//Position - 0x3010
{
	return Global_6373;
}

bool func_94()//Position - 0x301B
{
	return Global_255C02.f_24B;
}

int func_95(int iParam0)//Position - 0x302A
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_96()//Position - 0x3041
{
	return Global_25824F;
}

bool func_97()//Position - 0x304D
{
	return Global_255C02.f_246;
}

void func_98(var uParam0)//Position - 0x305C
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			SCRIPT::GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case 3731680626:
					func_99(iVar0);
					break;
				
				case 566035618:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 2305239146)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_99(int iParam0)//Position - 0x30CF
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_23(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_100(iVar2, &bVar3))
						{
							VEHICLE::REMOVE_VEHICLE_WINDOW(iVar2, vVar0.z);
						}
						if (bVar3)
						{
							ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar2);
						}
					}
				}
			}
		}
	}
}

int func_100(int iParam0, var uParam1)//Position - 0x3150
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_101()//Position - 0x31AF
{
	SYSTEM::WAIT(0);
}

void func_102(struct<21> Param0)//Position - 0x31BC
{
	func_108(func_109(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_106(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_238, 58);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_240, 11);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_105())
	{
		func_87();
	}
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		vLocal_60 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0) };
	}
	if (func_3(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		bLocal_52 = true;
	}
	func_103(64, 1);
	Local_240[NETSHOP::_NETWORK_SHOP_BASKET_START() /*5*/] = 0;
}

void func_103(int iParam0, bool bParam1)//Position - 0x323F
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 4294967295;
	}
	switch (iParam0)
	{
		case 59:
			Global_200000[func_104() /*12745*/].f_1FF2.f_13 = iVar0;
			break;
		
		case 19:
			Global_200000[func_104() /*12745*/].f_1FF2.f_12 = iVar0;
			break;
		
		case 74:
			Global_200000[func_104() /*12745*/].f_1FF2.f_C = iVar0;
			break;
		
		case 29:
			Global_200000[func_104() /*12745*/].f_1FF2.f_E = iVar0;
			break;
		
		case 8:
			Global_200000[func_104() /*12745*/].f_1FF2.f_F = iVar0;
			break;
		
		case 31:
			Global_200000[func_104() /*12745*/].f_1FF2.f_10 = iVar0;
			break;
		
		case 3:
			Global_200000[func_104() /*12745*/].f_1FF2.f_14 = iVar0;
			break;
		
		case 6:
			Global_200000[func_104() /*12745*/].f_1FF2.f_11 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_200000[func_104() /*12745*/].f_1FF2.f_17 = iVar0;
			break;
		
		case 76:
			Global_200000[func_104() /*12745*/].f_1FF2.f_18 = iVar0;
			break;
		
		case 93:
			Global_200000[func_104() /*12745*/].f_1FF2.f_19 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_200000[func_104() /*12745*/].f_1FF2.f_1A = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_200000[func_104() /*12745*/].f_1FF2.f_1B = iVar0;
			break;
			break;
		
		case 97:
			Global_200000[func_104() /*12745*/].f_1FF2.f_1D = iVar0;
			break;
		
		case 88:
			Global_200000[func_104() /*12745*/].f_1FF2.f_1C = iVar0;
			break;
		
		case 100:
			Global_200000[func_104() /*12745*/].f_1FF2.f_1F = iVar0;
			break;
		
		case 106:
			Global_200000[func_104() /*12745*/].f_1FF2.f_20 = iVar0;
			break;
		
		case 99:
			Global_200000[func_104() /*12745*/].f_1FF2.f_1E = iVar0;
			break;
	}
}

int func_104()//Position - 0x347E
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_105()//Position - 0x348B
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_97())
		{
			return 0;
		}
		if (func_95(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_106(int iParam0, int iParam1, bool bParam2)//Position - 0x34E4
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
		if (!func_107())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_97())
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
				if (func_95(155))
				{
					if (!bParam2)
					{
						func_88();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_88();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > 4294967295)
	{
		Global_1406F4 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_88();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_88();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_107()//Position - 0x35F9
{
	return Global_140842;
}

void func_108(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x3605
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_88();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_109(int iParam0)//Position - 0x3624
{
	switch (iParam0)
	{
		case 3:
			return 2;
		
		case 1:
			return 32;
		
		case 32:
			return 32;
		
		case 33:
			return 32;
		
		case 34:
			return 32;
		
		case 35:
			return 32;
		
		case 36:
			return 32;
		
		case 37:
			return 32;
		
		case 38:
			return 32;
		
		case 39:
			return 32;
		
		case 40:
			return 32;
		
		case 41:
			return 32;
		
		case 42:
			return 32;
		
		case 43:
			return 32;
		
		case 44:
			return 32;
		
		case 45:
			return 32;
		
		case 46:
			return 32;
		
		case 47:
			return 32;
		
		case 48:
			return 32;
		
		case 49:
			return 32;
		
		case 50:
			return 4;
		
		case 51:
			return 32;
		
		case 52:
			return 32;
		
		case 53:
			return 32;
		
		case 54:
			return 32;
		
		case 55:
			return 32;
		
		case 56:
			return 32;
		
		case 57:
			return 32;
		
		case 58:
			return 32;
		
		case 59:
			return 32;
		
		case 60:
			return 32;
		
		case 61:
			return 32;
		
		case 62:
			return 32;
		
		case 63:
			return 32;
		
		case 64:
			return 4;
		
		case 65:
			return 32;
		
		case 66:
			return 4;
		
		case 67:
			return 4;
		
		case 68:
			return 32;
		
		case 69:
			return 32;
		
		case 70:
			return 4;
		
		case 71:
			return 32;
		
		case 72:
			return 32;
		
		case 73:
		case 74:
			return 4;
		
		case 75:
			return 32;
		
		case 76:
			return 32;
		
		case 77:
			return 32;
		
		case 78:
			return 32;
		
		case 79:
			return 32;
		
		case 80:
			return 32;
		
		case 81:
			return 32;
		
		case 82:
			return 32;
		
		case 84:
			return 32;
		
		case 83:
			return 32;
		
		case 85:
			return 32;
		
		case 86:
			return 32;
		
		case 87:
			return 32;
		
		case 88:
			return 32;
		
		case 89:
			return 32;
		
		case 90:
			return 8;
		
		case 91:
			return 32;
		
		case 92:
			return 8;
		
		case 93:
			return 8;
		
		case 101:
			return 8;
		
		case 94:
			return 8;
		
		case 95:
			return 32;
		
		case 96:
			return 32;
		
		case 97:
			return 32;
		
		case 98:
			return 8;
		
		case 99:
			return 32;
		
		case 100:
			return 32;
		
		case 102:
			return 32;
		
		case 103:
			return 32;
		
		case 104:
			return 32;
		
		case 105:
			return 8;
		
		case 106:
			return 8;
		
		case 107:
			return 8;
		
		case 108:
			return 8;
		
		case 109:
			return 8;
		
		case 110:
			return 8;
		
		case 111:
			return 8;
		
		case 112:
			return 8;
		
		case 113:
			return 32;
		
		case 114:
			return 8;
		
		case 115:
			return 8;
		
		case 116:
			return 8;
		
		case 117:
			return 8;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 120:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 8;
		
		case 123:
			return 8;
		
		case 12:
			return 32;
		
		case 4:
			return 16;
		
		case 13:
			return 32;
		
		case 5:
			return 16;
		
		case 6:
			return 2;
		
		case 8:
			return 2;
		
		case 9:
			return 2;
		
		case 7:
			return 16;
		
		case 10:
			return 2;
		
		case 11:
			return 4;
		
		case 15:
			return 32;
		
		case 16:
			return 32;
		
		case 27:
			return 2;
		
		case 25:
			return 2;
		
		case 26:
			return 2;
		
		case 18:
			return 32;
		
		case 28:
			return 32;
		
		case 29:
			return 2;
		
		case 30:
			return 32;
		
		case 31:
			return 32;
		
		case 17:
			return 2;
		
		case 124:
			return 32;
		
		case 125:
			return 32;
		
		case 19:
			return 32;
		
		case 22:
			return 32;
		
		case 23:
			return 32;
		
		case 24:
			return 32;
		
		case 20:
			return 2;
		
		case 0:
			return 0;
		
		case 21:
			return 32;
		
		case 136:
			return 32;
		
		case 137:
			return 32;
		
		case 126:
			return 32;
		
		case 127:
			return 32;
		
		case 131:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 134:
			return 32;
		
		case 135:
			return 32;
		
		case 132:
			return 32;
		
		case 133:
			return 32;
		
		case 138:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 2;
		
		case 147:
			return 1;
		
		case 143:
			return 2;
		
		case 144:
			return 4;
		
		case 145:
			return 2;
		
		case 146:
			return 2;
		
		case 128:
			return 1;
		
		case 148:
			return 2;
		
		case 149:
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
			return 0;
		
		case 158:
			return 1;
		
		case 155:
			return 4;
		
		case 156:
			return 16;
		
		case 157:
			return 32;
		
		default:
	}
	return 0;
}
