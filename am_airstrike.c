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
	var uLocal_47 = 0;
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
	vector3 vLocal_63 = { 0f, 0f, 0f };
	float fLocal_66 = 0f;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 16;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	int iLocal_238 = 0;
	int iLocal_239 = 0;
	int iLocal_240 = 0;
	var uLocal_241 = 0;
	struct<57> Local_242 = { 0, 0, 0, -1281684762, 0, 0, -163714847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_299 = 0;
	struct<5> Local_300[2];
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
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
	iLocal_18 = -1;
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
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_106(ScriptParam_0);
	}
	while (true)
	{
		func_105();
		if (func_94())
		{
			func_90();
		}
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_89();
			switch (func_88(PARTICIPANT_ID_TO_INT()))
			{
				case 0:
					if (func_87() > 0)
					{
						Local_300[PARTICIPANT_ID_TO_INT() /*5*/] = 2;
					}
					break;
				
				case 2:
					if (func_87() == 3)
					{
						Local_300[PARTICIPANT_ID_TO_INT() /*5*/] = 3;
					}
					break;
				
				case 3:
					func_90();
					break;
			}
			if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (func_87())
				{
					case 0:
						Local_242 = 2;
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

void func_1()
{
	switch (Local_242.f_1)
	{
		case 0:
			func_26();
			break;
		
		case 1:
			func_25();
			break;
	}
	if (Local_242.f_2.f_2 == 3 && iLocal_57 == 0)
	{
		Local_242 = 3;
	}
	func_18();
	if (Local_242.f_53 && Local_242.f_50 < 10)
	{
		func_13();
	}
	if (Local_242.f_50 >= 10)
	{
		if (!func_12(&uLocal_69))
		{
			func_11(&uLocal_69, 0, 0);
		}
		else if (func_10(&uLocal_69, 10000, 0))
		{
			Local_242 = 3;
		}
	}
	if (func_9())
	{
		Local_242 = 3;
	}
	if (Local_242.f_55 == 1)
	{
		if (!Local_242.f_56)
		{
			if (((!IS_HELP_MESSAGE_BEING_DISPLAYED() || func_8("AIRSTRIKE_1")) || func_8("AIRSTRIKE_2")) || func_8("AIRSTRIKE_4"))
			{
				func_7("AIRSTRIKE_3", -1);
				Local_242.f_56 = 1;
			}
		}
	}
	if (bLocal_52)
	{
		if (!func_4(PLAYER_ID(), 1))
		{
			Local_242 = 3;
		}
	}
	else if (func_4(PLAYER_ID(), 1) || func_3())
	{
		Local_242 = 3;
	}
	if (IS_CUTSCENE_PLAYING())
	{
		Local_242 = 3;
	}
	if (Global_2506344.f_170 || func_2(PLAYER_ID()))
	{
		Local_242 = 3;
	}
}

int func_2(int iParam0)
{
	int iVar0;
	
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER_ID())
	{
		return Global_2506343;
	}
	else
	{
		iVar0 = GET_ENTITY_MODEL(GET_PLAYER_PED(iParam0));
		if (iVar0 == joaat("mp_m_freemode_01") || iVar0 == joaat("mp_f_freemode_01"))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_39.f_18, 0);
}

int func_4(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_5(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589819[iParam0 /*818*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_5(int iParam0)
{
	return func_6(iParam0);
}

var func_6(int iParam0)
{
	return IS_BIT_SET(Global_1589819[iParam0 /*818*/].f_13.f_1, 0);
}

void func_7(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

bool func_8(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

bool func_9()
{
	return Global_1312417;
}

int func_10(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_11(uParam0, bParam2, 0);
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (ABSI(GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (ABSI(GET_TIME_DIFFERENCE(GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_12(var uParam0)
{
	return uParam0->f_1;
}

void func_13()
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	
	iVar6 = 200;
	if (func_17(vLocal_63))
	{
		if (func_15(Local_242.f_2))
		{
			vLocal_63 = { GET_ENTITY_COORDS(NET_TO_VEH(Local_242.f_2), 1) };
			vLocal_63.z = (vLocal_63.z - 5f);
		}
	}
	switch (Local_242.f_50)
	{
		case 0:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), PLAYER_PED_ID(), 1, 0, -1f, PLAYER_PED_ID(), 1, 1, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					iLocal_57 = 1;
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 1:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 5f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 2:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, -5f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 3:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, -5f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 4:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -5f, 5f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 5:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 5f, 10f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 750, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 6:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, 10f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 7:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, -10f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 8:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, 10f, -10f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					func_11(&(Local_242.f_51), 0, 0);
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			else if (func_10(&(Local_242.f_51), 500, 0))
			{
				func_14(&(Local_242.f_51));
				Local_242.f_50++;
			}
			break;
		
		case 9:
			if (!func_12(&(Local_242.f_51)))
			{
				if (!IS_BIT_SET(uLocal_241, Local_242.f_50))
				{
					vVar0 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar0.z = vLocal_63.z;
					vVar3 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0f, -10f, 10f) };
					vVar3 = { vVar3 + Vector(0f, 0.1f, 0.1f) };
					GET_GROUND_Z_FOR_3D_COORD(vVar3 + Vector(10f, 0f, 0f), &(vVar3.f_2), 0, 0);
					vVar3.z = (vVar3.z - 25f);
					_SHOOT_SINGLE_BULLET_BETWEEN_COORDS_WITH_EXTRA_PARAMS(vVar0, vVar3, iVar6, 1, joaat("weapon_airstrike_rocket"), NET_TO_PED(Local_242.f_2.f_3), 1, 0, -1f, PLAYER_PED_ID(), 1, 0, 0, 0, 0, 0);
					Local_242.f_50++;
					iLocal_57 = 0;
					SET_BIT(&uLocal_241, Local_242.f_50);
				}
			}
			break;
	}
}

void func_14(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_15(var uParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_16(NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_16(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(uParam0, 0))
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

int func_17(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_18()
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	
	if (func_15(Local_242.f_2))
	{
		uVar0 = NET_TO_VEH(Local_242.f_2);
		vVar4 = { GET_ENTITY_COORDS(uVar0, 1) };
	}
	if (!iLocal_59)
	{
		if (!func_17(Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2))
		{
			vVar1 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
		}
		else if (func_24(PLAYER_ID(), 1, 1))
		{
			vVar1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
		}
	}
	if (bLocal_58)
	{
		if (!iLocal_59)
		{
			if (func_15(Local_242.f_2))
			{
				if (!IS_ENTITY_AT_COORD(uVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
				{
					fLocal_66 = GET_DISTANCE_BETWEEN_COORDS(vVar4, vVar1, 0);
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
			fLocal_66 = (fLocal_66 - 3.75f);
		}
		iVar7 = FLOOR(fLocal_66);
		if (fLocal_66 <= 200f)
		{
			iVar8 = 6;
		}
		else
		{
			iVar8 = 1;
		}
		if (fLocal_66 >= 0f)
		{
			func_19(iVar7, "AIRSTRIKE_2", -1, iVar8, 2, 0, "AIRSTRIKE_6", 0, 0f, 0, 0, iVar8, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1, -1);
		}
	}
}

void func_19(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_23(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_22(6, iVar0);
		Global_1373453.f_3835[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_3835.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_3835.f_183[iVar0] = iParam3;
		Global_1373453.f_3835.f_172[iVar0] = iParam2;
		Global_1373453.f_3835.f_260[iVar0] = iParam4;
		Global_1373453.f_3835.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1373453.f_3835.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1373453.f_3835.f_443[iVar0] = iParam7;
		Global_1373453.f_3835.f_454[iVar0] = fParam8;
		Global_1373453.f_3835.f_497[iVar0] = iParam9;
		Global_1373453.f_3835.f_508[iVar0] = iParam10;
		Global_1373453.f_3835.f_205[iVar0] = iParam11;
		Global_1373453.f_3835.f_216[iVar0] = iParam12;
		Global_1373453.f_3835.f_227[iVar0] = iParam13;
		Global_1373453.f_3835.f_238[iVar0] = iParam14;
		Global_1373453.f_3835.f_249[iVar0] = iParam15;
		Global_1373453.f_3835.f_519[iVar0] = iParam16;
		Global_1373453.f_3835.f_530[iVar0] = iParam17;
		Global_1373453.f_3835.f_541[iVar0] = iParam18;
		Global_1373453.f_3835.f_552[iVar0] = iParam19;
		Global_1373453.f_3835.f_563[iVar0] = iParam20;
		Global_1373453.f_3835.f_574[iVar0] = iParam21;
		Global_1373453.f_3835.f_585[iVar0] = iParam22;
		Global_1373453.f_3835.f_596[iVar0] = iParam23;
		Global_1373453.f_3835.f_607[iVar0] = iParam24;
		Global_1373453.f_3835.f_194[iVar0] = iParam25;
		if (iParam15 == 5 && func_21())
		{
			Global_1373453.f_1109 = 1;
		}
		if (IS_PC_VERSION())
		{
			iVar2 = 0;
			_GET_ACTIVE_SCREEN_RESOLUTION(&iVar3, &iVar4);
			if (iVar3 == 1280 && iVar4 >= 960)
			{
				iVar2 = 1;
			}
			if (iParam0 > 99999999)
			{
				Global_1373453.f_1113 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1373453.f_1112 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1373453.f_1109 = 1;
			}
			if (func_20())
			{
				Global_1373453.f_1113 = 1;
			}
		}
	}
}

int func_20()
{
	int iVar0;
	var uVar1;
	
	if (IS_PC_VERSION())
	{
		_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
		if (iVar0 <= 1024)
		{
			return 1;
		}
	}
	return 0;
}

int func_21()
{
	if (((unk_0x83D607D7994DEF3A() == 8 || unk_0x83D607D7994DEF3A() == 9) || unk_0x83D607D7994DEF3A() == 10) || unk_0x83D607D7994DEF3A() == 12)
	{
		return 1;
	}
	return 0;
}

void func_22(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

int func_23(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

int func_24(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (!Global_2437364.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_25()
{
}

void func_26()
{
	vector3 vVar0;
	bool bVar3;
	
	func_85();
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (!iLocal_56)
			{
				if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) <= 0)
				{
					bVar3 = !func_84();
					GIVE_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_flare"), 1, bVar3, bVar3);
					SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_flare"), bVar3);
					iLocal_56 = 1;
				}
			}
			else if (_GET_PROJECTILE_NEAR_PED_COORDS(PLAYER_PED_ID(), joaat("weapon_flare"), 100f, &(Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2), 1))
			{
				if (func_83(Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2, 0f, 0f, 0f, 0))
				{
					Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 = { vVar0 };
				}
				if (func_8("AIRSTRIKE_1"))
				{
					CLEAR_HELP(1);
				}
				if (!iLocal_55)
				{
					if (!func_82(Local_242.f_2.f_3))
					{
						if (func_15(Local_242.f_2))
						{
							func_81();
							CLEAR_PED_TASKS(NET_TO_PED(Local_242.f_2.f_3));
							TASK_PERFORM_SEQUENCE(NET_TO_PED(Local_242.f_2.f_3), uLocal_49);
							_SET_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NET_TO_VEH(Local_242.f_2), ROUND(50f));
							iLocal_55 = 1;
						}
					}
				}
			}
			else if (!iLocal_54)
			{
				if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					if (func_80(PLAYER_PED_ID()))
					{
						func_7("AIRSTRIKE_4", -1);
					}
					else
					{
						func_7("AIRSTRIKE_1", -1);
					}
					iLocal_54 = 1;
				}
			}
		}
	}
	func_50();
	func_27();
}

void func_27()
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_49();
			break;
		
		case 1:
			func_49();
			break;
		
		case 2:
			if (func_15(Local_242.f_2))
			{
				bLocal_58 = true;
				uVar0 = NET_TO_VEH(Local_242.f_2);
				if (!DOES_BLIP_EXIST(uLocal_47))
				{
					uLocal_47 = ADD_BLIP_FOR_ENTITY(uVar0);
					SET_BLIP_SPRITE(uLocal_47, 16);
					SET_BLIP_NAME_FROM_TEXT_FILE(uLocal_47, "AIRSTRIKE_5");
					_0x75A16C3DA34F1245(uLocal_47, 0);
				}
				else
				{
					SET_BLIP_ROTATION(uLocal_47, CEIL(GET_ENTITY_HEADING(uVar0)));
				}
				if (!iLocal_53)
				{
					if (!func_17(Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2))
					{
						vVar7 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 };
					}
					else
					{
						vVar7 = { vLocal_60 };
					}
					if (GET_DISTANCE_BETWEEN_COORDS(vVar7, GET_ENTITY_COORDS(uVar0, 1), 1) <= (60f * 5f))
					{
						PLAY_STREAM_FROM_VEHICLE(NET_TO_VEH(Local_242.f_2));
						iLocal_53 = 1;
					}
				}
				if (!iLocal_239)
				{
					if (!Local_242.f_54)
					{
						if (!func_82(Local_242.f_2.f_3))
						{
							if (!func_17(Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2))
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_48(PLAYER_ID()), GET_ENTITY_COORDS(NET_TO_VEH(Local_242.f_2.f_3), 1), 0) <= 250f)
								{
									if (GET_DISTANCE_BETWEEN_COORDS(vVar7, GET_ENTITY_COORDS(uVar0, 1), 1) >= (60f * 2.5f))
									{
										func_31(&uLocal_73, "CT_AUD", "MPCT_ASarr", 12, 0, 0, 0);
										iLocal_239 = 1;
									}
								}
							}
						}
					}
				}
				if (Local_242.f_50 < 10)
				{
					if (!Local_242.f_53)
					{
						if (!func_17(Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2))
						{
							if (func_30() == 2)
							{
								if (!func_12(&uLocal_67))
								{
									func_11(&uLocal_67, 0, 0);
								}
								else if (func_10(&uLocal_67, 7500, 0))
								{
									Local_242.f_53 = 1;
								}
								vVar1 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 - Vector(1000f, 25f, 25f) };
								vVar4 = { Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(1000f, 25f, 25f) };
								vVar1.z = -200f;
								vVar4.z = 1500f;
								if (IS_ENTITY_AT_COORD(uVar0, Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2, 75f, 75f, 1000f, 0, 1, 0) && IS_PROJECTILE_TYPE_IN_AREA(vVar1, vVar4, joaat("weapon_flare"), 0))
								{
									Local_242.f_53 = 1;
								}
							}
							else if (func_30() == 1)
							{
								Local_242.f_53 = 1;
								Local_242.f_50 = 100;
							}
						}
						else if (IS_ENTITY_AT_COORD(uVar0, vLocal_60, 75f, 75f, 1000f, 0, 1, 0))
						{
							Local_242.f_53 = 1;
							Local_242.f_50 = 100;
							Local_242.f_54 = 1;
							if (!iLocal_240)
							{
								func_31(&uLocal_73, "CT_AUD", "MPCT_ASflr", 12, 0, 0, 0);
								iLocal_240 = 1;
							}
						}
					}
				}
			}
			if (!func_15(Local_242.f_2) || func_82(Local_242.f_2.f_3))
			{
				func_28();
			}
			break;
		
		case 3:
			func_49();
			break;
	}
}

void func_28()
{
	var uVar0;
	
	if (!func_82(Local_242.f_2.f_3))
	{
		if (func_29(Local_242.f_2.f_3))
		{
			if (NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_242.f_2.f_3))
			{
				uVar0 = NET_TO_PED(Local_242.f_2.f_3);
				SET_ENTITY_HEALTH(uVar0, 0, 0);
			}
		}
	}
}

int func_29(var uParam0)
{
	if (_NETWORK_CAN_NETWORK_ID_BE_SEEN(uParam0))
	{
		return 1;
	}
	if (NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_30()
{
	if (Local_242.f_55 == 1)
	{
		return Local_242.f_55;
	}
	else if (Local_242.f_55 == 2)
	{
		return Local_242.f_55;
	}
	if (!_ARE_COORDS_COLLIDING_WITH_EXTERIOR(Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector(0.5f, 0f, 0f)))
	{
		Local_242.f_55 = 1;
		return Local_242.f_55;
	}
	Local_242.f_55 = 2;
	return Local_242.f_55;
}

int func_31(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_47(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15873 = 0;
	Global_15875 = 0;
	Global_15880 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 0;
	Global_2621441 = 1;
	return func_32(sParam2, iParam3, 0);
}

int func_32(char* sParam0, int iParam1, bool bParam2)
{
	Global_15867 = 0;
	if (Global_15866 == 0 || Global_15868 == 2)
	{
		if (Global_15866 != 0)
		{
			if (iParam1 > Global_15868)
			{
				if (Global_15873 == 0)
				{
					STOP_SCRIPTED_CONVERSATION(0);
					Global_14553.f_1 = 3;
					Global_15866 = 0;
					Global_15867 = 1;
					Global_15919 = 0;
					Global_15862 = 0;
					Global_15863 = 0;
					Global_15877 = 0;
					Global_15876 = 0;
					Global_14552 = 0;
				}
				else
				{
					func_46();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_45(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_44();
		Global_15155 = { Global_15320 };
		Global_15872 = Global_15873;
		Global_15879 = Global_15880;
		Global_2621442 = Global_2621441;
		Global_15881 = { Global_15897 };
		Global_15874 = Global_15875;
		Global_16856 = Global_16857;
		Global_16864 = { Global_16870 };
		Global_16858 = Global_16859;
		Global_16860 = Global_16861;
		Global_16862 = Global_16863;
		Global_15485.f_370 = Global_16855;
		Global_15485.f_368 = Global_16853;
		Global_15485.f_369 = Global_16854;
		Global_15862 = Global_15863;
		if (Global_15872)
		{
			CLEAR_BIT(&Global_2423, 20);
			CLEAR_BIT(&Global_2424, 17);
			CLEAR_BIT(&Global_2425, 0);
			if (bParam2)
			{
				func_37();
				if (Global_3228[Global_14553 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14553.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14519 == 1)
			{
				return 0;
			}
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				if (IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_36())
				{
					return 0;
				}
				if (IS_PED_SPRINTING(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_RAGDOLL(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER_PED_ID()))
				{
					return 0;
				}
				if (GET_IS_PED_GADGET_EQUIPPED(PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_71590)
				{
					if (IS_ENTITY_IN_WATER(PLAYER_PED_ID()))
					{
						return 0;
					}
					if (IS_PLAYER_CLIMBING(PLAYER_ID()))
					{
						return 0;
					}
					if (IS_PED_PLANTING_BOMB(PLAYER_PED_ID()))
					{
						return 0;
					}
					if (IS_SPECIAL_ABILITY_ACTIVE(PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_35())
			{
				return 0;
			}
			else
			{
				switch (Global_14553.f_1)
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
				if (IS_BIT_SET(Global_2423, 9))
				{
					return 0;
				}
			}
			func_34();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_33();
		return 1;
	}
	if (Global_15866 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15868 || iParam1 == Global_15868)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_46();
	}
	return 0;
}

void func_33()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14734[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	STOP_SCRIPTED_CONVERSATION(0);
	Global_15866 = 1;
}

void func_34()
{
	Global_15919 = Global_15918;
	Global_15913 = Global_15914;
	Global_15960 = { Global_15948 };
	Global_15966 = { Global_15954 };
	Global_15921 = Global_15920;
	Global_15990 = { Global_15972 };
	Global_15996 = { Global_15978 };
	Global_16002 = { Global_15984 };
	Global_16008 = { Global_16014 };
	Global_1738 = Global_1739;
	Global_1740 = Global_1741;
	Global_15877 = Global_15878;
	Global_15879 = Global_15880;
	Global_15881 = { Global_15897 };
	Global_15870 = Global_15871;
	Global_16882 = 0;
	Global_15915 = 0;
	Global_15916 = 0;
	CLEAR_BIT(&Global_2424, 16);
}

int func_35()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_36()
{
	int iVar0;
	int iVar1;
	
	if (Global_71590)
	{
		iVar0 = 0;
		GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iVar1, 1);
		if (IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (GET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 78, 1))
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

void func_37()
{
	if (func_43(14))
	{
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[0 /*29*/])
			{
				Global_14553 = 0;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[1 /*29*/])
			{
				Global_14553 = 1;
			}
			else if (GET_ENTITY_MODEL(PLAYER_PED_ID()) == Global_106565.f_28044[2 /*29*/])
			{
				Global_14553 = 2;
			}
			else
			{
				Global_14553 = 0;
			}
		}
	}
	else
	{
		Global_14553 = func_38();
		if (Global_14553 == 145)
		{
			Global_14553 = 3;
		}
		if (Global_71590)
		{
			Global_14553 = 3;
		}
		if (Global_14553 > 3)
		{
			Global_14553 = 3;
		}
	}
}

var func_38()
{
	func_39();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_39()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_42(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_41(PLAYER_PED_ID());
			if (func_40(iVar0) && (!func_43(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_40(Global_106565.f_2357.f_539.f_4321))
				{
					Global_106565.f_2357.f_539.f_4322 = Global_106565.f_2357.f_539.f_4321;
				}
				Global_106565.f_2357.f_539.f_4323 = iVar0;
				Global_106565.f_2357.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_106565.f_2357.f_539.f_4321 != 145)
			{
				Global_106565.f_2357.f_539.f_4323 = Global_106565.f_2357.f_539.f_4321;
			}
			return;
		}
	}
	Global_106565.f_2357.f_539.f_4321 = 145;
}

bool func_40(int iParam0)
{
	return iParam0 < 3;
}

int func_41(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_42(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_42(int iParam0)
{
	if (func_40(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_43(int iParam0)
{
	return Global_36425 == iParam0;
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15155[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15155[iVar0 /*10*/].f_1), "", 24);
		Global_15155[iVar0 /*10*/].f_7 = 0;
		Global_15155[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15155.f_161 = -99;
	Global_15155.f_162 = { 0f, 0f, 0f };
}

bool func_45(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1371947.f_203[iParam1];
			}
			break;
	}
	return IS_BIT_SET(Global_1371947.f_1048, iParam0);
}

void func_46()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if ((IS_MOBILE_PHONE_CALL_ONGOING() || Global_14553.f_1 == 9) || Global_14552 == 1)
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
		Global_14553.f_1 = 3;
		return;
	}
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

void func_47(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
	if (iParam3 == 0)
	{
		Global_16853 = 1;
		Global_16851 = 0;
	}
	else
	{
		Global_16853 = 0;
		Global_16851 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16854 = 1;
		Global_16852 = 0;
	}
	else
	{
		Global_16854 = 0;
		Global_16852 = 1;
	}
}

Vector3 func_48(int iParam0)
{
	return GET_ENTITY_COORDS(GET_PLAYER_PED(iParam0), 0);
}

void func_49()
{
	if (DOES_BLIP_EXIST(uLocal_47))
	{
		REMOVE_BLIP(&uLocal_47);
	}
}

void func_50()
{
	switch (Local_242.f_2.f_2)
	{
		case 0:
			func_79(1);
			break;
		
		case 1:
			if (func_51())
			{
				func_79(2);
			}
			break;
		
		case 2:
			if (!func_15(Local_242.f_2))
			{
				if (func_82(Local_242.f_2.f_3))
				{
					func_79(3);
				}
			}
			else if (func_82(Local_242.f_2.f_3))
			{
				func_79(3);
			}
			break;
		
		case 3:
			break;
	}
}

int func_51()
{
	if (!func_12(&uLocal_71))
	{
		func_11(&uLocal_71, 0, 0);
	}
	else if (func_78(Local_242.f_2.f_1) && func_78(Local_242.f_2.f_3.f_1))
	{
		if (func_10(&uLocal_71, 3000, 0))
		{
			if (func_55() && func_52())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_52()
{
	if ((!NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2.f_3) && func_78(Local_242.f_2.f_3.f_1)) && NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2))
	{
		if (func_15(Local_242.f_2))
		{
			if (func_54(&(Local_242.f_2.f_3), Local_242.f_2, 22, Local_242.f_2.f_3.f_1, -1, 1, 1, 1))
			{
				SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NET_TO_PED(Local_242.f_2.f_3), 1);
				SET_PED_RELATIONSHIP_GROUP_HASH(NET_TO_PED(Local_242.f_2.f_3), Global_1574987);
				SET_PED_RANDOM_COMPONENT_VARIATION(NET_TO_PED(Local_242.f_2.f_3), 0);
				SET_PED_KEEP_TASK(NET_TO_PED(Local_242.f_2.f_3), 1);
				func_53();
				TASK_PERFORM_SEQUENCE(NET_TO_PED(Local_242.f_2.f_3), uLocal_48);
				_SET_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NET_TO_VEH(Local_242.f_2), ROUND(50f));
			}
		}
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2.f_3))
	{
		return 0;
	}
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_242.f_2.f_3.f_1);
	return 1;
}

void func_53()
{
	if (!iLocal_50)
	{
		if (func_15(Local_242.f_2))
		{
			OPEN_SEQUENCE_TASK(&uLocal_48);
			TASK_PLANE_MISSION(0, NET_TO_VEH(Local_242.f_2), 0, 0, vLocal_60 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, CEIL((50f + 5f)), 20, 1);
			TASK_PLANE_MISSION(0, NET_TO_VEH(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, CEIL((50f + 5f)), 20, 1);
			CLOSE_SEQUENCE_TASK(uLocal_48);
			iLocal_50 = 1;
		}
	}
}

int func_54(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK_DOES_NETWORK_ID_EXIST(uParam1))
	{
		return 0;
	}
	if (!IS_VEHICLE_DRIVEABLE(NET_TO_VEH(uParam1), 0))
	{
		return 0;
	}
	*uParam0 = PED_TO_NET(CREATE_PED_INSIDE_VEHICLE(NET_TO_VEH(uParam1), iParam2, uParam3, iParam4, iParam6, bParam5));
	if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		_SET_ENTITY_SOMETHING(NET_TO_PED(*uParam0), iParam7);
		if (NETWORK_GET_ENTITY_IS_NETWORKED(NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_55()
{
	vector3 vVar0;
	var uVar3;
	
	if (!NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2))
	{
		if (func_78(Local_242.f_2.f_1))
		{
			if (LOAD_STREAM("AIRSTRIKE_FLYOVER", 0))
			{
				func_74(&vVar0, &uVar3);
				if (func_59(vVar0, 6f, 1f, 1f, 5f, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_56(&(Local_242.f_2), Local_242.f_2.f_1, vVar0, uVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
					{
						Local_242.f_2.f_14 = { vVar0 * Vector(0f, -1f, -1f) };
						SET_VEHICLE_DOORS_LOCKED(NET_TO_VEH(Local_242.f_2), 2);
						FREEZE_ENTITY_POSITION(NET_TO_VEH(Local_242.f_2), 0);
						SET_ENTITY_DYNAMIC(NET_TO_VEH(Local_242.f_2), 1);
						ACTIVATE_PHYSICS(NET_TO_VEH(Local_242.f_2));
						SET_VEHICLE_FORWARD_SPEED(NET_TO_VEH(Local_242.f_2), 60f);
						SET_VEHICLE_ENGINE_ON(NET_TO_VEH(Local_242.f_2), 1, 1, 0);
						_0x79DF7E806202CE01(NET_TO_VEH(Local_242.f_2), 1000);
						_SET_ENTITY_SOMETHING(NET_TO_VEH(Local_242.f_2), 0);
						CONTROL_LANDING_GEAR(NET_TO_VEH(Local_242.f_2), 3);
						OPEN_BOMB_BAY_DOORS(NET_TO_VEH(Local_242.f_2));
						SET_MODEL_AS_NO_LONGER_NEEDED(Local_242.f_2.f_1);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_56(var uParam0, int iParam1, vector3 vParam2, var uParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13, int iParam14, bool bParam15)
{
	float fVar0;
	int iVar1;
	
	if (!IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam11)
	{
		CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, 0, 0);
	}
	iVar1 = CREATE_VEHICLE(iParam1, vParam2, uParam5, iParam7, iParam6, iParam14);
	if (DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = VEH_TO_NET(iVar1);
		Global_2528542.f_6212 = iVar1;
		if (NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam15)
			{
				_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iVar1, 1);
			}
			_SET_ENTITY_SOMETHING(iVar1, iParam10);
			if (NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam8)
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam13)
				{
					_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER_ID(), 1);
				}
			}
			SET_VEHICLE_IS_STOLEN(iVar1, iParam9);
			_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam12)
			{
				SET_CAR_BOOT_OPEN(iVar1);
				SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			func_57(vParam2, uParam5, iParam1, iVar1);
			return 1;
		}
	}
	return 0;
}

void func_57(vector3 vParam0, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	
	if (func_58(PLAYER_ID(), vParam0, iParam4) > -1)
	{
		if ((Global_2405071.f_2908[1 /*6*/].f_5 == iParam5 && Global_2405071.f_2908[1 /*6*/].f_4 == iParam4) && VDIST(Global_2405071.f_2908[1 /*6*/], vParam0) < 0.5f)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (iVar0 < 1)
			{
				Global_2405071.f_2908[iVar0 /*6*/] = { Global_2405071.f_2908[iVar0 + 1 /*6*/] };
			}
			iVar0++;
		}
		Global_2405071.f_2908[1 /*6*/] = { vParam0 };
		Global_2405071.f_2908[1 /*6*/].f_3 = uParam3;
		Global_2405071.f_2908[1 /*6*/].f_4 = iParam4;
		Global_2405071.f_2908[1 /*6*/].f_5 = iParam5;
	}
}

int func_58(var uParam0, vector3 vParam1, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	
	iVar0 = uParam0;
	if (iVar0 > -1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == iParam4)
			{
				vVar2 = { vParam1 };
				if (ABSF((Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2 - vVar2.z)) < 2f)
				{
					vVar2.z = Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/].f_2;
				}
				if (VDIST(Global_2417757.f_461[iVar0 /*11*/][iVar1 /*5*/], vVar2) < 0.5f)
				{
					return iVar1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_59(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, int iParam18)
{
	Global_2405071.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), fParam4) || IS_ANY_PED_NEAR_POINT(vParam0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam5, iParam18))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam13)
	{
		if (GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (fParam14 > 0f)
	{
		if (func_67(vParam0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15))
		{
			return 0;
		}
	}
	Global_2405071.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_60(vParam0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2405071.f_2++;
	return 1;
}

int func_60(vector3 vParam0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_24(PLAYER_ID(), 1, 1))
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (GET_DISTANCE_BETWEEN_COORDS(func_65(PLAYER_ID()), vParam0, 1) <= (fVar2 + fParam3))
				{
					if (IS_SPHERE_VISIBLE(vParam0, fParam3))
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
		if (func_24(iVar1, 1, 1))
		{
			if (!func_62(iVar1, 0) && _NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER_ID()))
				{
					if ((func_61(iVar1) || !bParam10) && !Global_2424047[iVar1 /*416*/].f_259)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GET_PLAYER_TEAM(iVar1) == GET_PLAYER_TEAM(PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && GET_PLAYER_TEAM(iVar1) != GET_PLAYER_TEAM(PLAYER_ID()))) || GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_65(iVar1), vParam0, 1) <= (fVar2 + fParam3))
								{
									if (IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (GET_PLAYER_TEAM(iVar1) != iParam8 || GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (GET_DISTANCE_BETWEEN_COORDS(func_65(iVar1), vParam0, 1) <= (fVar2 + fParam3))
							{
								if (IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam3))
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

int func_61(int iParam0)
{
	if (IS_ENTITY_VISIBLE_TO_SCRIPT(GET_PLAYER_PED(iParam0)) || Global_2424047[iParam0 /*416*/].f_245)
	{
		return 1;
	}
	return 0;
}

bool func_62(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_63(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589819[iParam0 /*818*/].f_211 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_63(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_64();
	}
	if (Global_1312847[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312739[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_64()
{
	return Global_1312745;
}

Vector3 func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_66() && Global_1589819[iVar0 /*818*/].f_789) && !func_17(Global_1589819[iVar0 /*818*/].f_790))
	{
		return Global_1589819[iVar0 /*818*/].f_790;
	}
	return func_48(iParam0);
}

var func_66()
{
	return Global_2448756.f_16;
}

int func_67(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, var uParam9)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_24(iVar1, bParam4, bParam5))
			{
				if (_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!IS_PED_INJURED(GET_PLAYER_PED(iVar1)) && func_61(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && GET_PLAYER_TEAM(PLAYER_ID()) != GET_PLAYER_TEAM(iVar1))) || GET_PLAYER_TEAM(PLAYER_ID()) == -1)
						{
							if (((GET_PLAYER_TEAM(PLAYER_ID()) == -1 && uParam9) && bParam6) && func_68(iVar1))
							{
							}
							else if (DOES_ENTITY_EXIST(GET_PLAYER_PED(iVar1)))
							{
								if (GET_DISTANCE_BETWEEN_COORDS(func_48(iVar1), vParam0, 1) < fParam3)
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

int func_68(int iParam0)
{
	if (func_73(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2505680 = { func_72(iParam0) };
	if (NETWORK_IS_FRIEND(&Global_2505680))
	{
		return 1;
	}
	if (func_69(PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_69(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_71(iParam0);
	if (!iVar0 == func_70())
	{
		if (iVar0 == func_71(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_70()
{
	return -1;
}

int func_71(int iParam0)
{
	if (iParam0 != func_70())
	{
		return Global_1626536[iParam0 /*603*/].f_11;
	}
	return func_70();
}

struct<13> func_72(var uParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

int func_73(var uParam0, var uParam1)
{
	if (_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2505680 = { func_72(uParam0) };
		Global_2505693 = { func_72(uParam1) };
		if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505680))
		{
			if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2505693))
			{
				NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505610, 35, &Global_2505680);
				NETWORK_CLAN_PLAYER_GET_DESC(&Global_2505645, 35, &Global_2505693);
				if (Global_2505610 == Global_2505645)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_74(var uParam0, var uParam1)
{
	float fVar0;
	
	*uParam0 = { func_76(vLocal_60 + Vector(200f, 0f, 0f), 600f, 600f, (200f / 2f)) };
	fVar0 = _0x8ABE8608576D9CE3((*uParam0 - 600f), (uParam0->f_1 - 600f), (*uParam0 + 600f), (uParam0->f_1 + 600f));
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	*uParam1 = func_75(*uParam0, vLocal_60);
}

var func_75(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_76(vector3 vParam0, float fParam3, float fParam4, float fParam5)
{
	vector3 vVar0;
	float fVar3;
	
	vVar0 = { GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam5 / 2f);
	vVar0 = { func_77(vVar0, GET_RANDOM_FLOAT_IN_RANGE(fParam3, fParam4)) };
	vVar0.z = GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

Vector3 func_77(vector3 vParam0, float fParam3)
{
	float fVar0;
	
	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_78(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	REQUEST_MODEL(iParam0);
	return HAS_MODEL_LOADED(iParam0);
}

void func_79(int iParam0)
{
	Local_242.f_2.f_2 = iParam0;
}

int func_80(int iParam0)
{
	var uVar0;
	
	if (IS_PED_IN_ANY_HELI(iParam0))
	{
		uVar0 = GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
		{
			if (GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) == iParam0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_81()
{
	if (!iLocal_51)
	{
		if (func_15(Local_242.f_2))
		{
			OPEN_SEQUENCE_TASK(&uLocal_49);
			TASK_PLANE_MISSION(0, NET_TO_VEH(Local_242.f_2), 0, 0, Local_300[PARTICIPANT_ID_TO_INT() /*5*/].f_2 + Vector((50f + 5f), 0f, 0f), 4, 60f, 15f, -1f, CEIL((50f + 5f)), 20, 1);
			TASK_PLANE_MISSION(0, NET_TO_VEH(Local_242.f_2), 0, 0, Local_242.f_2.f_14, 4, 60f, 25f, -1f, CEIL((50f + 5f)), 20, 1);
			CLOSE_SEQUENCE_TASK(uLocal_49);
			iLocal_51 = 1;
		}
	}
}

int func_82(var uParam0)
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return IS_PED_INJURED(NET_TO_PED(uParam0));
	}
	return 1;
}

bool func_83(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_84()
{
	return Global_93734.f_339 > 0;
}

void func_85()
{
	if (!iLocal_238)
	{
		if (!func_82(Local_242.f_2.f_3))
		{
			func_86(&uLocal_73, 3, NET_TO_PED(Local_242.f_2.f_3), "FM_Pilot_Air", 1, 1);
			iLocal_238 = 1;
		}
	}
}

void func_86(var uParam0, int iParam1, var uParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = uParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam2, 1);
			}
		}
		if (!IS_PED_INJURED(uParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(uParam2, 1);
			}
		}
	}
}

int func_87()
{
	return Local_242;
}

int func_88(int iParam0)
{
	return Local_300[iParam0 /*5*/];
}

void func_89()
{
}

void func_90()
{
	if (NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2.f_3) && NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2))
	{
		if (func_15(Local_242.f_2) && !func_82(Local_242.f_2.f_3))
		{
			TASK_PLANE_MISSION(NET_TO_PED(Local_242.f_2.f_3), NET_TO_VEH(Local_242.f_2), 0, PLAYER_PED_ID(), 1f, 1f, 1f, 8, 60f, 1000f, -1f, 400, 400, 1);
		}
	}
	func_92(func_93(1, 1), 11, func_70());
	func_91();
}

void func_91()
{
	TERMINATE_THIS_THREAD();
}

void func_92(int iParam0, int iParam1, var uParam2)
{
	struct<4> Var0;
	
	Var0 = -418126478;
	Var0.f_1 = PLAYER_ID();
	Var0.f_3 = iParam1;
	Var0.f_2 = uParam2;
	if (!iParam0 == 0)
	{
		_0xA40CC53DF8E50837(1, &Var0, 6, iParam0);
	}
}

int func_93(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = INT_TO_PLAYERINDEX(iVar1);
		if (func_24(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					SET_BIT(&uVar0, iVar1);
				}
				else if (!func_62(iVar2, 0))
				{
					SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_94()
{
	var uVar0;
	
	func_102(&uVar0);
	if (Global_1312844 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_101())
	{
		return 1;
	}
	if (Global_2460852)
	{
		return 1;
	}
	if (func_100())
	{
		return 1;
	}
	if (func_99(157))
	{
		if (!func_98())
		{
			return 1;
		}
	}
	if (func_99(155))
	{
		return 1;
	}
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_95() != 0)
	{
		if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_95()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_95()
{
	switch (func_97())
	{
		case 0:
			return func_96();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_96()
{
	switch (Global_2460954)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

int func_97()
{
	return Global_25765;
}

bool func_98()
{
	return Global_2448756.f_586;
}

int func_99(int iParam0)
{
	if (GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_100()
{
	return Global_2458613;
}

bool func_101()
{
	return Global_2448756.f_581;
}

void func_102(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = GET_EVENT_AT_INDEX(1, iVar0);
		if (iVar1 == 171)
		{
			GET_EVENT_DATA(1, iVar0, &iVar2, 2);
			switch (iVar2)
			{
				case -275425152:
					func_103(iVar0);
					break;
				
				case -42615386:
					GET_EVENT_DATA(1, iVar0, &vVar4, 4);
					if (vVar4.z == 1267052711)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_103(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	bool bVar5;
	
	if (GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_24(vVar0.y, 1, 1))
		{
			uVar3 = GET_PLAYER_PED(vVar0.y);
			if (DOES_ENTITY_EXIST(uVar3))
			{
				if (IS_PED_IN_ANY_VEHICLE(uVar3, 0))
				{
					uVar4 = GET_VEHICLE_PED_IS_IN(uVar3, 0);
					if (IS_VEHICLE_WINDOW_INTACT(uVar4, vVar0.z) && NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_104(uVar4, &bVar5))
						{
							REMOVE_VEHICLE_WINDOW(uVar4, vVar0.z);
						}
						if (bVar5)
						{
							SET_VEHICLE_AS_NO_LONGER_NEEDED(&uVar4);
						}
					}
				}
			}
		}
	}
}

int func_104(var uParam0, var uParam1)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (!IS_ENTITY_A_MISSION_ENTITY(uParam0))
		{
			if (NETWORK_GET_ENTITY_IS_LOCAL(uParam0))
			{
				if (!IS_THIS_MODEL_A_TRAIN(GET_ENTITY_MODEL(uParam0)))
				{
					SET_ENTITY_AS_MISSION_ENTITY(uParam0, 0, 1);
					*uParam1 = 1;
				}
			}
		}
		if (DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0, 0))
		{
			if (NETWORK_HAS_CONTROL_OF_ENTITY(uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_105()
{
	WAIT(0);
}

void func_106(struct<21> Param0)
{
	func_112(func_113(Param0), Param0);
	RESERVE_NETWORK_MISSION_PEDS(1);
	RESERVE_NETWORK_MISSION_VEHICLES(1);
	func_110(0, -1, 0);
	NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_242, 58);
	NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_300, 11);
	SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_109())
	{
		func_90();
	}
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		vLocal_60 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 0) };
	}
	if (func_4(PLAYER_ID(), 1))
	{
		bLocal_52 = true;
	}
	func_107(64, 1);
	Local_300[PARTICIPANT_ID_TO_INT() /*5*/] = 0;
}

void func_107(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = -1;
	}
	switch (iParam0)
	{
		case 59:
			Global_2097152[func_108() /*10778*/].f_6165.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_108() /*10778*/].f_6165.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_108() /*10778*/].f_6165.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_108() /*10778*/].f_6165.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_108() /*10778*/].f_6165.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_108() /*10778*/].f_6165.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_108() /*10778*/].f_6165.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_108() /*10778*/].f_6165.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_108() /*10778*/].f_6165.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_108() /*10778*/].f_6165.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_108() /*10778*/].f_6165.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_108() /*10778*/].f_6165.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_108() /*10778*/].f_6165.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_108() /*10778*/].f_6165.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_108() /*10778*/].f_6165.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_108() /*10778*/].f_6165.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_108() /*10778*/].f_6165.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_108() /*10778*/].f_6165.f_30 = iVar0;
			break;
	}
}

int func_108()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_109()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (_0x5D10B3795F3FC886())
		{
			return 1;
		}
		if (func_101())
		{
			return 0;
		}
		if (func_99(155))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		WAIT(0);
	}
	return 0;
}

int func_110(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_91();
			}
			else
			{
				return 0;
			}
		}
		if (!func_111())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_91();
					}
					else
					{
						return 0;
					}
				}
				if (func_101())
				{
					if (!bParam2)
					{
						func_91();
					}
					else
					{
						return 0;
					}
				}
				if (func_99(155))
				{
					if (!bParam2)
					{
						func_91();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_91();
				}
				else
				{
					return 0;
				}
			}
		}
		WAIT(0);
		iVar0 = NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1312501 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_91();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_91();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

bool func_111()
{
	return Global_1312844;
}

void func_112(var uParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_91();
	}
	NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(uParam0, 0, Param1.f_16);
}

int func_113(int iParam0)
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
		
		case 124:
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
		
		case 125:
			return 32;
		
		case 126:
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
		
		case 137:
			return 32;
		
		case 138:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 132:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 32;
		
		case 135:
			return 32;
		
		case 136:
			return 32;
		
		case 133:
			return 32;
		
		case 134:
			return 32;
		
		case 139:
			return 32;
		
		case 140:
			return 32;
		
		case 141:
			return 32;
		
		case 142:
			return 32;
		
		case 143:
			return 2;
		
		case 148:
			return 1;
		
		case 144:
			return 2;
		
		case 145:
			return 4;
		
		case 146:
			return 2;
		
		case 147:
			return 2;
		
		case 129:
			return 1;
		
		case 149:
			return 2;
		
		case 150:
		case 151:
		case 152:
		case 153:
		case 154:
		case 155:
			return 0;
		
		case 163:
			return 1;
		
		case 156:
			return 4;
		
		case 159:
			return 4;
		
		case 160:
			return 1;
		
		case 161:
			return 8;
		
		case 162:
			return 8;
		
		case 157:
			return 16;
		
		case 158:
			return 32;
		
		default:
	}
	return 0;
}
