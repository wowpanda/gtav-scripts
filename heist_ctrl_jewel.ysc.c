#region Local Var
	var uLocal_0 = 0;
	var uLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	int iLocal_4 = 0;
	int iLocal_5 = 0;
	int iLocal_6 = 0;
	int iLocal_7 = 0;
	int iLocal_8 = 0;
	int iLocal_9 = 0;
	int iLocal_10 = 0;
	int iLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	int iLocal_17 = 0;
	char* sLocal_18 = NULL;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	struct<485> Local_46 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
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
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	int iLocal_245 = 0;
	int iLocal_246 = 0;
	int iLocal_247 = 0;
	int iLocal_248 = 0;
	int iLocal_249 = 0;
	int iLocal_250 = 0;
	int iLocal_251 = 0;
	int iLocal_252 = 0;
	int iLocal_253 = 0;
	int iLocal_254 = 0;
	int iLocal_255 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = 4294967295;
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_36 = 202;
	iLocal_37 = 201;
	iLocal_38 = 24;
	iLocal_39 = 202;
	iLocal_40 = 25;
	iLocal_43 = 4294967295;
	iLocal_45 = 4294967295;
	iLocal_254 = 4294967295;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_236();
	}
	func_235(3);
	func_224(&(Local_46.f_1), func_234(Global_15D0C[1 /*19*/], Global_15D0C[2 /*19*/]));
	func_223(&Local_46, 0);
	while (!func_222(4))
	{
		if (!Global_11732)
		{
			if (!func_221(86) && !func_220(14))
			{
				func_209(&Local_46, 32f, 35f);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_46.f_1C1, 0))
			{
				func_207(&Local_46);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_46.f_1C1, 0))
			{
				if (func_206() == 86)
				{
					while (!func_207(&Local_46))
					{
						SYSTEM::WAIT(0);
					}
				}
			}
			func_204(&Local_46);
			func_195();
			func_146();
			if (func_144(0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_46.f_1C1, 2))
			{
				func_67(&Local_46);
				func_4(&Local_46);
				func_3(&Local_46);
			}
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) > 0)
		{
			func_2();
		}
		SYSTEM::WAIT(0);
	}
	func_1(3);
	func_236();
}

int func_1(int iParam0)//Position - 0x185
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iVar0], iVar1))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2361.f_63.f_DB[iVar0]), iVar1);
		return 1;
	}
	return 0;
}

void func_2()//Position - 0x1DF
{
	int iVar0;
	
	if (Global_11729)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return;
	}
	iVar0 = SYSTEM::ROUND((1f + (1000f * SYSTEM::TIMESTEP())));
	Global_15DCB.f_8 = (Global_15DCB.f_8 + iVar0);
}

void func_3(var uParam0)//Position - 0x221
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15CF7, *uParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 1))
		{
			MISC::SET_BIT(&(uParam0->f_1C1), 15);
			MISC::SET_BIT(&(uParam0->f_1C1), 16);
			MISC::SET_BIT(&(uParam0->f_1C1), 14);
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_15CF7, *uParam0);
		}
	}
}

void func_4(var uParam0)//Position - 0x270
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_66(*uParam0));
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return;
	}
	iVar1 = iVar0;
	if ((iVar1 != uParam0->f_1D0 && !(iVar1 == 2 && uParam0->f_1D0 == 4)) && !((*uParam0 == 1 && iVar1 == 3) && uParam0->f_1D0 == 4))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 2))
		{
			func_5(uParam0, iVar1, 0);
		}
		else
		{
			uParam0->f_1D0 = iVar1;
		}
	}
}

void func_5(var uParam0, int iParam1, int iParam2)//Position - 0x2FE
{
	if (iParam1 != uParam0->f_1D0)
	{
		if (uParam0->f_2A8 == 0)
		{
			func_64(uParam0);
			uParam0->f_1D0 = iParam1;
			func_6(uParam0, iParam1, iParam2);
		}
	}
}

void func_6(var uParam0, int iParam1, int iParam2)//Position - 0x330
{
	switch (iParam1)
	{
		case 0:
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 4);
			break;
		
		case 1:
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 4);
			uParam0->f_1C4 = 4294967295;
			break;
		
		case 2:
			func_35(uParam0, uParam0->f_1A1, iParam2);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
		
		case 3:
			func_17(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 4);
			MISC::SET_BIT(&(uParam0->f_1C1), 9);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
		
		case 4:
			func_13(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
			func_13(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
			Global_19E56.f_1.f_6[*uParam0] = 1;
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			func_11(uParam0, 0);
			func_63(uParam0);
			MISC::SET_BIT(&(uParam0->f_1C1), 5);
			MISC::SET_BIT(&(uParam0->f_1C1), 4);
			uParam0->f_1C9 = MISC::GET_GAME_TIMER();
			break;
	}
	func_7(uParam0);
}

void func_7(var uParam0)//Position - 0x45D
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	bool bVar6;
	
	sVar0 = PAD::_0x80C2FD58D720C801(2, 13, true);
	sVar1 = PAD::_0x80C2FD58D720C801(2, 11, true);
	sVar2 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(0, 32, true);
	sVar3 = PAD::_0x80C2FD58D720C801(0, 1, true);
	sVar4 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 201, true);
	sVar5 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		sVar0 = PAD::_0x80C2FD58D720C801(2, 6, true);
		sVar1 = PAD::_0x80C2FD58D720C801(2, 7, true);
		sVar2 = PAD::_0x80C2FD58D720C801(0, 29, true);
	}
	bVar6 = func_10(1, *uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_MAX_WIDTH");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.6f);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	switch (uParam0->f_1D0)
	{
		case 0:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 2))
			{
				if (bVar6)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					func_9(sVar2);
					func_8("PB_H_ZOOM");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					func_9(sVar5);
					func_8("PB_H_EXIT");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SET_SEETHROUGH(false);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SET_SEETHROUGH(false);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			break;
		
		case 2:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				if (*uParam0 == 2)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(3);
					func_9(sVar0);
					func_8("PB_H_SELCT");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					func_9(sVar5);
					func_8("PB_H_UNDO");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SET_SEETHROUGH(false);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			break;
		
		case 3:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 2))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 9))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
					func_9(sVar1);
					func_8("PB_H_SELCT");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
					func_9(sVar3);
					func_8("PB_H_LOOK");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
					func_9(sVar4);
					func_8("PB_H_TRIG");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SET_SEETHROUGH(false);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			break;
		
		case 4:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 2))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT_EMPTY");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(3);
				func_9(sVar2);
				func_8("PB_H_ZOOM");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
				func_9(sVar3);
				func_8("PB_H_LOOK");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
				func_9(sVar5);
				func_8("PB_H_UNDO");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "SET_DATA_SLOT");
				GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
				func_9(sVar4);
				func_8("PB_H_CONF");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SET_SEETHROUGH(false);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			break;
	}
}

void func_8(char* sParam0)//Position - 0x939
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_9(char* sParam0)//Position - 0x94B
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

bool func_10(int iParam0, int iParam1)//Position - 0x959
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == 4294967295)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iParam0], iParam1);
	return bVar0;
}

void func_11(var uParam0, bool bParam1)//Position - 0x9A6
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_1C1), 18);
		if (((!func_12(&(uParam0->f_1.f_14[0 /*4*/])) && !func_12(&(uParam0->f_1.f_14[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_6C[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/])))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
		}
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 18);
	}
}

int func_12(char* sParam0)//Position - 0xA1B
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_13(char* sParam0, int iParam1)//Position - 0xA2E
{
	int iVar0;
	int iVar1;
	
	if (Global_19906 && iParam1)
	{
		if (func_12(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_19E56.f_4F9E[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_19E56.f_4F9E.f_91 - 2))
			{
				func_16(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_15((Global_19E56.f_4F9E.f_91 - 1));
			Global_19E56.f_4F9E.f_91 = (Global_19E56.f_4F9E.f_91 - 1);
			func_14();
			return;
		}
		iVar0++;
	}
}

void func_14()//Position - 0xADB
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_19E56.f_4F9E.f_92[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 0))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[0])
			{
				Global_19E56.f_4F9E.f_92[0] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 1))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[1])
			{
				Global_19E56.f_4F9E.f_92[1] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E[iVar0 /*16*/].f_B, 2))
		{
			if (Global_19E56.f_4F9E[iVar0 /*16*/].f_C > Global_19E56.f_4F9E.f_92[2])
			{
				Global_19E56.f_4F9E.f_92[2] = Global_19E56.f_4F9E[iVar0 /*16*/].f_C;
			}
		}
		iVar0++;
	}
}

void func_15(int iParam0)//Position - 0xBFB
{
	StringCopy(&(Global_19E56.f_4F9E[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_19E56.f_4F9E[iParam0 /*16*/].f_4), "", 16);
	Global_19E56.f_4F9E[iParam0 /*16*/].f_8 = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_9 = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_B = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_A = 4294967295;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_C = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_D = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_E = 0;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_F = 0;
}

void func_16(int iParam0, int iParam1)//Position - 0xC95
{
	Global_19E56.f_4F9E[iParam0 /*16*/] = { Global_19E56.f_4F9E[iParam1 /*16*/] };
	Global_19E56.f_4F9E[iParam0 /*16*/].f_4 = { Global_19E56.f_4F9E[iParam1 /*16*/].f_4 };
	Global_19E56.f_4F9E[iParam0 /*16*/].f_8 = Global_19E56.f_4F9E[iParam1 /*16*/].f_8;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_A = Global_19E56.f_4F9E[iParam1 /*16*/].f_A;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_9 = Global_19E56.f_4F9E[iParam1 /*16*/].f_9;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_B = Global_19E56.f_4F9E[iParam1 /*16*/].f_B;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_C = Global_19E56.f_4F9E[iParam1 /*16*/].f_C;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_D = Global_19E56.f_4F9E[iParam1 /*16*/].f_D;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_E = Global_19E56.f_4F9E[iParam1 /*16*/].f_E;
	Global_19E56.f_4F9E[iParam0 /*16*/].f_F = Global_19E56.f_4F9E[iParam1 /*16*/].f_F;
}

void func_17(var uParam0)//Position - 0xDA5
{
	int iVar0;
	struct<2> Var1;
	
	func_34(uParam0);
	func_31(uParam0);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		if (iVar0 == func_29(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
	}
	Var1 = (uParam0->f_1.f_10 + uParam0->f_1.f_12);
	Var1.f_1 = (uParam0->f_1.f_10.f_1 + uParam0->f_1.f_12.f_1);
	func_25(uParam0, &Var1, uParam0->f_1.f_A);
	func_23(uParam0, 1, 1);
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_18(var uParam0)//Position - 0xE78
{
	int iVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 7))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 18))
		{
			switch (uParam0->f_1D0)
			{
				case 3:
					if (!Global_19E56.f_1[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_14[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_14[0 /*4*/]), 3, 0, 4294967295, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_14[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_14[1 /*4*/]), 3, 1000, 4294967295, 10000, 7, 0, 0, 0);
						}
						Global_19E56.f_1[*uParam0] = 1;
					}
					else if (func_20() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 11) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0)
						{
							HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_CHOICE");
							HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, false, 4294967295);
						}
					}
					break;
				
				case 2:
					if (!Global_19E56.f_1.f_6[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_6C[0 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_6C[0 /*4*/]), 3, 0, 4294967295, 10000, 7, 0, 0, 0);
						}
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_6C[1 /*4*/]), ""))
						{
							func_21(&(uParam0->f_1.f_6C[1 /*4*/]), 3, 1000, 4294967295, 10000, 7, 0, 0, 0);
						}
						Global_19E56.f_1.f_6[*uParam0] = 1;
					}
					else if (func_20() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 10))
						{
							if ((!func_12("PB_H_GUNM") && !func_12("PB_H_HACK")) && !func_12("PB_H_DRIV"))
							{
								iVar0 = func_65(func_30(*uParam0));
								if (uParam0->f_1A1 < 5)
								{
									if (((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 11) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0)
									{
										switch (Global_15D0C[iVar0 /*19*/].f_1[uParam0->f_1A1])
										{
											case 1:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_GUNM");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, false, 4294967295);
												break;
											
											case 2:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_HACK");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, false, 4294967295);
												break;
											
											case 3:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP("PB_H_DRIV");
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, false, 4294967295);
												break;
											}
										}
									}
								}
							}
					}
					break;
				}
			}
	}
}

int func_19()//Position - 0x10ED
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_20()//Position - 0x110F
{
	if (Global_19E56.f_4F9E.f_91 > 0)
	{
		return 0;
	}
	return 1;
}

void func_21(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)//Position - 0x112C
{
	func_22(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_22(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)//Position - 0x114D
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != 4294967295)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != 4294967295)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_19E56.f_4F9E[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_19E56.f_4F9E.f_91 < 9)
	{
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/]), sParam0, 16);
		StringCopy(&(Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_4), sParam1, 16);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_9 = iParam5;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_B = iParam6;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_C = uParam2;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_D = iParam7;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_E = iParam8;
		Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_F = uParam9;
		if (iParam4 != 4294967295)
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_19E56.f_4F9E[Global_19E56.f_4F9E.f_91 /*16*/].f_A = 4294967295;
		}
		Global_19E56.f_4F9E.f_91++;
		func_14();
	}
}

void func_23(var uParam0, int iParam1, int iParam2)//Position - 0x1320
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1.f_12F, iParam1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_118[iParam1 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[iParam1 /*2*/], iParam2);
			MISC::SET_BIT(&(uParam0->f_1.f_12F), iParam1);
		}
	}
}

void func_24(var uParam0, struct<2> Param1, struct<2> Param2, int iParam3)//Position - 0x137A
{
	if (uParam0->f_1E3 == 3)
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Param2))
	{
		uParam0->f_1D3[uParam0->f_1E3 /*5*/] = { Param1 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_2 = { Param2 };
		uParam0->f_1D3[uParam0->f_1E3 /*5*/].f_4 = iParam3;
		uParam0->f_1E3++;
	}
}

void func_25(var uParam0, var uParam1, float fParam2)//Position - 0x13DA
{
	vector3 vVar0;
	
	uParam0->f_19B = *uParam1;
	uParam0->f_19B.f_1 = uParam1->f_1;
	uParam0->f_1C6 = MISC::GET_GAME_TIMER() + 1000;
	vVar0 = { func_27(uParam0, &(uParam0->f_19B)) };
	func_26(&(uParam0->f_289), vVar0, fParam2);
}

void func_26(var uParam0, vector3 vParam1, float fParam2)//Position - 0x141F
{
	uParam0->f_B = { vParam1 };
	if (fParam2 != -1f)
	{
		uParam0->f_7 = fParam2;
	}
}

Vector3 func_27(var uParam0, var uParam1)//Position - 0x143E
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	vVar7 = { uParam0->f_191 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	fVar8 = fVar4;
	fVar9 = MISC::ATAN((fVar8 / uParam0->f_1.f_8));
	fVar10 = (uParam0->f_191.f_2 - uParam0->f_289.f_1.f_2);
	fVar11 = (vVar7.z - uParam0->f_289.f_1.f_2);
	fVar12 = (fVar11 - fVar10);
	fVar13 = MISC::ATAN((fVar12 / uParam0->f_1.f_8));
	fVar14 = ((fVar9 * 3f) / 18f);
	return (fVar13 * 0.95f), fVar14, (-fVar9 * 0.85f);
}

void func_28(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1523
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0->f_1.f_2;
	iVar1 = uParam0->f_1.f_3;
	if (*uParam1 < 0 || *uParam1 > iVar0)
	{
		return;
	}
	if (uParam1->f_1 < 0 || uParam1->f_1 > iVar1)
	{
		return;
	}
	*uParam2 = (SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(iVar0));
	*uParam3 = (SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(iVar1));
}

int func_29(int iParam0, int iParam1)//Position - 0x158E
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				default:
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
					break;
				
				case 1:
					return 4;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
					break;
				
				default:
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
					break;
				
				case 1:
					return 7;
					break;
				
				default:
					break;
			}
			break;
		
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
					break;
				
				case 1:
					return 9;
					break;
				
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)//Position - 0x1674
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 7;
			break;
		
		case 1:
			iVar0 = 8;
			break;
		
		case 2:
			iVar0 = 9;
			break;
		
		case 3:
			iVar0 = 10;
			break;
		
		case 4:
			iVar0 = 11;
			break;
	}
	return iVar0;
}

void func_31(var uParam0)//Position - 0x16C5
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_10));
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_10.f_1));
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_33(uParam0);
	switch (*uParam0)
	{
		case 0:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(3);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			break;
		
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(6);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(7);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			break;
		
		case 4:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			break;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
	GRAPHICS::SET_SEETHROUGH(func_32(*uParam0, uParam0->f_1.f_1D));
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	iVar0 = func_65(func_30(*uParam0));
	if (iVar0 != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		if (iVar0 == func_29(*uParam0, 0))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		else if (iVar0 == func_29(*uParam0, 1))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(99);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

bool func_32(int iParam0, int iParam1)//Position - 0x1932
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_78[iParam0], iParam1);
}

void func_33(var uParam0)//Position - 0x194C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_LABELS");
	func_8("H_CRW_NAME");
	func_8("H_CRW_TYPE");
	func_8("H_CRW_SKILLS");
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_JWL");
			break;
		
		case 1:
			func_8("H_LBL_DOC");
			break;
		
		case 2:
			func_8("H_LBL_RUR");
			break;
		
		case 3:
			func_8("H_LBL_AGN");
			break;
		
		case 4:
			func_8("H_LBL_FA");
			func_8("H_LBL_FB");
			break;
	}
	if (*uParam0 != 1)
	{
		func_8("H_LBL_CRW");
	}
	func_8("H_LBL_TODO");
	if (*uParam0 != 2)
	{
		func_8("H_LBL_APP");
	}
	switch (*uParam0)
	{
		case 0:
			func_8("H_LBL_J1");
			func_8("H_LBL_J2");
			func_8("H_LBL_J3");
			func_8("H_LBL_J4");
			func_8("HC_J_IMPACT");
			func_8("HC_J_STEALTH");
			break;
		
		case 1:
			func_8("HC_D_BLOW_UP");
			func_8("HC_D_DEEP_SEA");
			break;
		
		case 2:
			func_8("H_LBL_R1");
			func_8("H_LBL_R2");
			func_8("H_LBL_R3");
			func_8("H_LBL_R4");
			func_8("H_LBL_R5");
			func_8("H_LBL_R6");
			func_8("H_LBL_R7");
			func_8("H_LBL_R8");
			func_8("H_LBL_R9");
			func_8("H_LBL_R10");
			func_8("H_LBL_R11");
			func_8("H_LBL_R12");
			break;
		
		case 3:
			func_8("H_LBL_A1");
			func_8("H_LBL_A2");
			func_8("H_LBL_A3");
			func_8("H_LBL_A4");
			func_8("H_LBL_A5");
			func_8("HC_A_FIRETRUCK");
			func_8("HC_A_HELICOPTER");
			break;
		
		case 4:
			func_8("H_LBL_F1");
			func_8("H_LBL_F2");
			func_8("H_LBL_F3");
			func_8("H_LBL_F4");
			func_8("H_LBL_F5");
			func_8("HC_F_TRAFFCONT");
			func_8("HC_F_HELI");
			break;
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_34(var uParam0)//Position - 0x1B4E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_35(var uParam0, int iParam1, int iParam2)//Position - 0x1B70
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_60)
	{
		return;
	}
	func_23(uParam0, 2, 1);
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = Global_15D0C[iVar0 /*19*/].f_1[iParam1];
	switch (iVar1)
	{
		case 1:
			func_62(uParam0, iVar0, 1);
			break;
		
		case 2:
			func_62(uParam0, iVar0, 3);
			break;
		
		case 3:
			func_62(uParam0, iVar0, 2);
			break;
	}
	func_61(uParam0, uParam0->f_1A1);
	func_36(uParam0, uParam0->f_1A1);
	uParam0->f_1C2 = iParam1;
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::SET_SEETHROUGH(true);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_25(uParam0, &(uParam0->f_1.f_61[iParam1 /*2*/]), uParam0->f_1.f_A);
	if (iParam2 != 0)
	{
		iVar2 = 0;
		while (uParam0->f_1A2[iVar2] != iParam2)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			iVar2++;
			if (iVar2 > 7)
			{
				return;
			}
		}
	}
	func_11(uParam0, 0);
	func_18(uParam0);
}

void func_36(var uParam0, int iParam1)//Position - 0x1CA6
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_30(*uParam0);
	iVar1 = func_65(iVar0);
	iVar2 = Global_15D0C[iVar1 /*19*/].f_1[iParam1];
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/]));
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_61[iParam1 /*2*/].f_1));
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_33(uParam0);
	iVar3 = 0;
	if (Global_19E56.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		iVar4 = Global_19E56.f_1.f_C[iVar1 /*6*/][iParam1];
		func_41(uParam0->f_19D, iVar4, iParam1, iVar3, iVar4);
	}
	else
	{
		iVar5 = 0;
		while (iVar5 < 14)
		{
			iVar6 = iVar5;
			if (func_40(iVar6) == iVar2)
			{
				if (func_39(iVar6))
				{
					if (!func_38(iVar6))
					{
						if (!func_37(uParam0, iVar6))
						{
							if (!(iVar6 == 11 && *uParam0 == 3))
							{
								func_41(uParam0->f_19D, iVar6, iParam1, iVar3, iVar5);
								uParam0->f_1A2[iVar3] = iVar6;
								iVar3++;
							}
						}
					}
				}
			}
			iVar5++;
		}
	}
	if (Global_19E56.f_1.f_C[iVar1 /*6*/][iParam1] != 0)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::SET_SEETHROUGH(true);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
		GRAPHICS::SET_SEETHROUGH(false);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_37(var uParam0, int iParam1)//Position - 0x1E30
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_65(func_30(*uParam0));
	iVar1 = 0;
	while (iVar1 < uParam0->f_1A1)
	{
		if (Global_19E56.f_1.f_C[iVar0 /*6*/][iVar1] == iParam1)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

bool func_38(int iParam0)//Position - 0x1E75
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_76, iParam0);
}

bool func_39(int iParam0)//Position - 0x1E8B
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_74, iParam0);
}

int func_40(int iParam0)//Position - 0x1EA1
{
	return Global_15C72[iParam0 /*5*/];
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1EB1
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam3);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam4);
	func_8(func_59(iParam1));
	func_8(func_58(iParam1));
	switch (func_40(iParam1))
	{
		case 1:
			func_8(func_57(0));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_54(iParam1, 0));
			func_8(func_57(1));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_54(iParam1, 1));
			func_8(func_57(2));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_54(iParam1, 2));
			func_8(func_57(3));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_54(iParam1, 3));
			break;
		
		case 2:
			func_8(func_53(0));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_50(iParam1, 0));
			func_8(func_53(1));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_50(iParam1, 1));
			func_8(func_53(2));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_50(iParam1, 2));
			break;
		
		case 3:
			func_8(func_48(0));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_43(iParam1, 0));
			func_8(func_48(1));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_43(iParam1, 1));
			func_8(func_48(2));
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_43(iParam1, 2));
			break;
	}
	func_8("H_CRW_CUT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(func_42(iParam1));
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

var func_42(int iParam0)//Position - 0x1FED
{
	return Global_15C72[iParam0 /*5*/].f_1;
}

int func_43(int iParam0, int iParam1)//Position - 0x1FFF
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_45(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_44(iParam1))) * 100f));
}

int func_44(int iParam0)//Position - 0x2028
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_45(int iParam0, int iParam1)//Position - 0x2062
{
	if (func_40(iParam0) != 3)
	{
		return 4294967295;
	}
	return func_46(iParam0, iParam1);
}

int func_46(int iParam0, int iParam1)//Position - 0x2080
{
	return func_47(iParam1, Global_19E56.f_1.f_49[iParam0 /*3*/].f_1, Global_19E56.f_1.f_49[iParam0 /*3*/].f_2);
}

int func_47(int iParam0, int iParam1, int iParam2)//Position - 0x20AA
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, (15 * iParam0)) & 32767;
			break;
		
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, (15 * (iParam0 - 2))) & 32767;
			break;
	}
	return 4294967295;
}

char* func_48(int iParam0)//Position - 0x20FE
{
	return func_49(3, iParam0);
}

char* func_49(int iParam0, int iParam1)//Position - 0x210D
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_G1";
					break;
				
				case 1:
					return "HC_STA_G2";
					break;
				
				case 2:
					return "HC_STA_G3";
					break;
				
				case 3:
					return "HC_STA_G4";
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_H1";
					break;
				
				case 1:
					return "HC_STA_H2";
					break;
				
				case 2:
					return "HC_STA_H3";
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return "HC_STA_D1";
					break;
				
				case 1:
					return "HC_STA_D2";
					break;
				
				case 2:
					return "HC_STA_D3";
					break;
			}
			break;
	}
	return "ERROR!";
}

int func_50(int iParam0, int iParam1)//Position - 0x21F0
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_52(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_51(iParam1))) * 100f));
}

int func_51(int iParam0)//Position - 0x2219
{
	switch (iParam0)
	{
		case 0:
			return 100;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
	}
	return 0;
}

int func_52(int iParam0, int iParam1)//Position - 0x2253
{
	if (func_40(iParam0) != 2)
	{
		return 4294967295;
	}
	return func_46(iParam0, iParam1);
}

char* func_53(int iParam0)//Position - 0x2271
{
	return func_49(2, iParam0);
}

int func_54(int iParam0, int iParam1)//Position - 0x2280
{
	return SYSTEM::ROUND(((SYSTEM::TO_FLOAT(func_56(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_55(iParam1))) * 100f));
}

int func_55(int iParam0)//Position - 0x22A9
{
	switch (iParam0)
	{
		case 0:
			return 1000;
			break;
		
		case 1:
			return 100;
			break;
		
		case 2:
			return 100;
			break;
		
		case 3:
			return 100;
			break;
	}
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x22F2
{
	if (func_40(iParam0) != 1)
	{
		return 4294967295;
	}
	return func_46(iParam0, iParam1);
}

char* func_57(int iParam0)//Position - 0x2310
{
	return func_49(1, iParam0);
}

char* func_58(int iParam0)//Position - 0x231F
{
	switch (Global_15C72[iParam0 /*5*/])
	{
		case 1:
			return "HC_TYPE_G";
			break;
		
		case 2:
			return "HC_TYPE_H";
			break;
		
		case 3:
			return "HC_TYPE_D";
			break;
	}
	return "ERROR!";
}

char* func_59(int iParam0)//Position - 0x2368
{
	return func_60(iParam0);
}

char* func_60(int iParam0)//Position - 0x2376
{
	switch (iParam0)
	{
		case 1:
			return "HC_N_GUS";
			break;
		
		case 2:
			return "HC_N_KAR";
			break;
		
		case 10:
			return "HC_N_PAC";
			break;
		
		case 11:
			return "HC_N_CHE";
			break;
		
		case 3:
			return "HC_N_HUG";
			break;
		
		case 4:
			return "HC_N_NOR";
			break;
		
		case 5:
			return "HC_N_DAR";
			break;
		
		case 6:
			return "HC_N_PAI";
			break;
		
		case 7:
			return "HC_N_CHR";
			break;
		
		case 12:
			return "HC_N_RIC";
			break;
		
		case 8:
			return "HC_N_EDD";
			break;
		
		case 13:
			return "HC_N_TAL";
			break;
		
		case 9:
			return "HC_N_KRM";
			break;
	}
	return "ERROR!";
}

void func_61(var uParam0, int iParam1)//Position - 0x2459
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_62(var uParam0, int iParam1, int iParam2)//Position - 0x2478
{
	int iVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15D0C[iParam1 /*19*/].f_12, iParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&(Global_15D0C[iParam1 /*19*/].f_7[iParam2 /*2*/]), ""))
		{
			func_24(uParam0, uParam0->f_1.f_114, Global_15D0C[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			MISC::SET_BIT(&(Global_15D0C[iParam1 /*19*/].f_12), iParam2);
			iVar0 = 0;
			while (iVar0 < 10)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_15D0C[iParam1 /*19*/].f_7[iParam2 /*2*/]), &(Global_15D0C[iVar0 /*19*/].f_7[iParam2 /*2*/])))
				{
					MISC::SET_BIT(&(Global_15D0C[iVar0 /*19*/].f_12), iParam2);
				}
				iVar0++;
			}
		}
	}
}

void func_63(var uParam0)//Position - 0x2523
{
	func_25(uParam0, &(uParam0->f_1.f_C), 45f);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(99);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_18(uParam0);
}

void func_64(var uParam0)//Position - 0x2559
{
	switch (uParam0->f_1D0)
	{
		case 1:
		case 2:
		case 3:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(99);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			break;
	}
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

int func_65(int iParam0)//Position - 0x259C
{
	if (iParam0 == 13 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_CD[iParam0];
}

int func_66(int iParam0)//Position - 0x25C9
{
	switch (iParam0)
	{
		case 0:
			return 2;
			break;
		
		case 1:
			return 3;
			break;
		
		case 2:
			return 4;
			break;
		
		case 3:
			return 5;
			break;
		
		case 4:
			return 6;
			break;
	}
	return 4294967295;
}

void func_67(var uParam0)//Position - 0x261A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 1))
	{
		func_68(uParam0);
	}
}

void func_68(var uParam0)//Position - 0x2635
{
	bool bVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 2))
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (!func_143(0))
			{
				if (func_134(8))
				{
					if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), uParam0->f_191) < 4f)
					{
						vVar1 = { uParam0->f_191 - unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
						fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						fVar3 = MISC::ABSF((uParam0->f_194 - fVar2));
						if (fVar3 <= 70f)
						{
							bVar0 = true;
						}
						else
						{
							fVar4 = uParam0->f_194;
							if (fVar4 > 180f)
							{
								fVar4 = (fVar4 - 360f);
							}
							else if (fVar4 < -180f)
							{
								fVar4 = (fVar4 + 360f);
							}
							if ((fVar4 - fVar2) < fVar3)
							{
								fVar3 = MISC::ABSF((fVar4 - fVar2));
							}
							if (fVar3 <= 70f)
							{
								bVar0 = true;
							}
							else
							{
								if (fVar2 > 180f)
								{
									fVar2 = (fVar2 - 360f);
								}
								else if (fVar2 < -180f)
								{
									fVar2 = (fVar2 + 360f);
								}
								if ((uParam0->f_194 - fVar2) < fVar3)
								{
									fVar3 = MISC::ABSF((uParam0->f_194 - fVar2));
								}
								if (fVar3 <= 70f)
								{
									bVar0 = true;
								}
								else
								{
									if ((fVar4 - fVar2) < fVar3)
									{
										fVar3 = MISC::ABSF((fVar4 - fVar2));
									}
									if (fVar3 <= 70f)
									{
										bVar0 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar0)
		{
			if (uParam0->f_1C3 == 4294967295)
			{
				func_133(&(uParam0->f_1C3), 3, "PB_H_ENT", 0, 0, 0, 0);
			}
			else if (func_132(uParam0->f_1C3, 1))
			{
				func_130(&(uParam0->f_1C3));
				func_116(uParam0);
			}
		}
		else if (uParam0->f_1C3 != 4294967295)
		{
			func_130(&(uParam0->f_1C3));
		}
	}
	else
	{
		bVar5 = func_10(1, *uParam0);
		func_78(uParam0);
		if (((!bVar5 && uParam0->f_1C5 > 15) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(2, 238))) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 8))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 8);
			func_69(uParam0, 0);
		}
	}
}

void func_69(var uParam0, bool bParam1)//Position - 0x2854
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
		if (!bParam1)
		{
			vVar0 = { uParam0->f_191 };
			vVar0 = { vVar0 + Vector(0f, (1f * SYSTEM::COS((180f - uParam0->f_194))), (1f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
			ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar0, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), uParam0->f_194);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			PED::FORCE_PED_MOTION_STATE(AUDIO::_0x0626A247D2405330(), 2423432979, false, 0, 0);
			MISC::_0x1327E2FE9746BAEE(AUDIO::_0x0626A247D2405330(), 1, 0);
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 134);
	}
	HUD::DISPLAY_RADAR(true);
	func_72(0);
	func_71();
	HUD::_0xE1CD1E48E025E661();
	HUD::RESET_HUD_COMPONENT_VALUES(17);
	GRAPHICS::_0xD39D13C9FEBF0511(0);
	func_70(&(uParam0->f_289), 0, 1);
	func_13(&(uParam0->f_1.f_14[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_14[1 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_6C[0 /*4*/]), 1);
	func_13(&(uParam0->f_1.f_6C[1 /*4*/]), 1);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		SYSTEM::WAIT(0);
	}
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_191);
	if (iVar1 != 0)
	{
		INTERIOR::UNPIN_INTERIOR(iVar1);
	}
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_64(uParam0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 7);
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 2);
	Global_15CF6 = 0;
}

void func_70(var uParam0, int iParam1, bool bParam2)//Position - 0x29D9
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
		{
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, iParam1, 0);
		}
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			CAM::SET_CAM_ACTIVE(*uParam0, false);
		}
		CAM::DESTROY_CAM(*uParam0, iParam1);
	}
	if (uParam0->f_17)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_17 = 0;
	}
	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = 0f;
	uParam0->f_12 = 0f;
}

void func_71()//Position - 0x2A73
{
	Global_434C.f_5 = 0;
}

void func_72(bool bParam0)//Position - 0x2A81
{
	if (bParam0)
	{
		func_77();
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			MISC::SET_BIT(&Global_950, 16);
		}
		Global_38B1.f_1 = 1;
		if (func_143(0))
		{
			func_73(0);
		}
	}
	else if (Global_38B1.f_1 == 1)
	{
		if (!Global_38B1.f_1 == 0)
		{
			Global_38B1.f_1 = 3;
		}
	}
}

void func_73(int iParam0)//Position - 0x2AE4
{
	if (func_76())
	{
		return;
	}
	if (Global_3959)
	{
		func_75(0, 0);
	}
	if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
	{
		MISC::SET_BIT(&Global_950, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_3DCE = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 30);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 30);
	}
	if (!func_74())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_74()//Position - 0x2B5E
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_75(bool bParam0, bool bParam1)//Position - 0x2B85
{
	if (bParam0)
	{
		if (func_143(0))
		{
			Global_3959 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_3872);
			}
			Global_3869 = { Global_387B[Global_387A /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
	else if (Global_3959 == 1)
	{
		Global_3959 = 0;
		Global_3869 = { Global_3882[Global_387A /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3872);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_3869);
		}
	}
}

bool func_76()//Position - 0x2BF9
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

void func_77()//Position - 0x2C0B
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

void func_78(var uParam0)//Position - 0x2C34
{
	char* sVar0;
	bool bVar1;
	vector3 vVar2;
	
	sVar0 = PAD::_0x80C2FD58D720C801(0, 1, true);
	if (!MISC::ARE_STRINGS_EQUAL(sVar0, uParam0->f_1D2))
	{
		func_7(uParam0);
	}
	uParam0->f_1D2 = sVar0;
	func_114();
	func_102(uParam0);
	func_86(uParam0);
	if (uParam0->f_1D0 == 1)
	{
		func_83(uParam0);
	}
	if (func_20())
	{
		func_18(uParam0);
	}
	bVar1 = uParam0->f_1C6 > MISC::GET_GAME_TIMER();
	func_79(&(uParam0->f_289), INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 4), (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 5) && !bVar1), 1, 0, 1045220557, 1, 1065353216, 0);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 7))
	{
		if ((!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN()) && !HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (uParam0->f_1D0 != 1)
			{
				if (uParam0->f_1D0 == 0 || (((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 11) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 10)) && !func_19()) && uParam0->f_1E3 == 0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 18) || uParam0->f_1D0 == 2)
					{
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_19E, 255, 255, 255, 0, 0);
					}
				}
			}
		}
	}
	HUD::DISPLAY_RADAR(false);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
	HUD::_0x25F87B30C382FCA7();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		PAD::SET_INPUT_EXCLUSIVE(2, 201);
	}
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			vVar2 = { uParam0->f_191 };
			vVar2 = { vVar2 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar2, &(vVar2.f_2), 0, 0);
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 134);
			BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
			unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
			ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar2, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), uParam0->f_194);
			MISC::SET_BIT(&(uParam0->f_1C1), 7);
		}
	}
}

void func_79(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, float fParam7, bool bParam8)//Position - 0x2E86
{
	int iVar0[4];
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	int iVar7;
	int iVar8;
	
	PAD::_DISABLE_INPUT_GROUP(2);
	func_82(&(iVar0[0]), &(iVar0[1]), &(iVar0[2]), &(iVar0[3]), 0, 0);
	if (PAD::IS_LOOK_INVERTED())
	{
		iVar0[3] = (iVar0[3] * 4294967295);
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		fVar1 = PAD::_0x5B84D09CEC5209C5(2, 239);
		fVar2 = PAD::_0x5B84D09CEC5209C5(2, 240);
		fVar3 = (fVar1 - uParam0->f_1D);
		fVar4 = (fVar2 - uParam0->f_1E);
		uParam0->f_1D = fVar1;
		uParam0->f_1E = fVar2;
		if (bParam4)
		{
			iVar0[2] = -SYSTEM::ROUND(((fVar3 * fParam5) * 127f));
			iVar0[3] = -SYSTEM::ROUND(((fVar4 * fParam5) * 127f));
		}
		else
		{
			iVar0[2] = SYSTEM::ROUND(((PAD::_0x5B84D09CEC5209C5(2, 290) * fParam5) * 127f));
			iVar0[3] = SYSTEM::ROUND(((PAD::_0x5B84D09CEC5209C5(2, 291) * fParam5) * 127f));
		}
		iVar0[2] = func_81((iVar0[2] + uParam0->f_18), 4294967169, 127);
		iVar0[3] = func_81((iVar0[3] + uParam0->f_19), 4294967169, 127);
	}
	if (uParam0->f_18 == iVar0[2] && uParam0->f_19 == iVar0[3])
	{
		if (uParam0->f_1B < MISC::GET_GAME_TIMER())
		{
			uParam0->f_18 = 0;
			uParam0->f_19 = 0;
			if (PAD::_IS_INPUT_DISABLED(2))
			{
				iVar0[2] = 0;
				iVar0[3] = 0;
				uParam0->f_1C = 1;
			}
		}
	}
	else
	{
		uParam0->f_18 = iVar0[2];
		uParam0->f_19 = iVar0[3];
		uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_1C = 0;
	}
	if (bParam2)
	{
		uParam0->f_8.f_2 = (-(SYSTEM::TO_FLOAT(iVar0[2]) / 127f) * IntToFloat(uParam0->f_14));
		uParam0->f_8.f_1 = ((-uParam0->f_8.f_2 * IntToFloat(uParam0->f_16)) / IntToFloat(uParam0->f_14));
		uParam0->f_8 = (-(SYSTEM::TO_FLOAT(iVar0[3]) / 127f) * IntToFloat(uParam0->f_15));
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_18 = 0;
		uParam0->f_19 = 0;
	}
	fVar5 = (30f * SYSTEM::TIMESTEP());
	vVar6 = { uParam0->f_8 + uParam0->f_B };
	if ((PAD::_IS_INPUT_DISABLED(2) && bParam2) && !uParam0->f_1C)
	{
		uParam0->f_E = vVar6.x;
		uParam0->f_E.f_1 = vVar6.y;
		uParam0->f_E.f_2 = vVar6.z;
	}
	else
	{
		uParam0->f_E = (uParam0->f_E + func_80(((((vVar6.x - uParam0->f_E) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_1 = (uParam0->f_E.f_1 + func_80(((((vVar6.y - uParam0->f_E.f_1) * 0.05f) * fVar5) * fParam7), -3f, 3f));
		uParam0->f_E.f_2 = (uParam0->f_E.f_2 + func_80(((((vVar6.z - uParam0->f_E.f_2) * 0.05f) * fVar5) * fParam7), -3f, 3f));
	}
	if (uParam0->f_1A)
	{
		uParam0->f_E = func_80(uParam0->f_E, SYSTEM::TO_FLOAT(-uParam0->f_15), SYSTEM::TO_FLOAT(uParam0->f_15));
		uParam0->f_E.f_1 = func_80(uParam0->f_E.f_1, SYSTEM::TO_FLOAT(-uParam0->f_16), SYSTEM::TO_FLOAT(uParam0->f_16));
		uParam0->f_E.f_2 = func_80(uParam0->f_E.f_2, SYSTEM::TO_FLOAT(-uParam0->f_14), SYSTEM::TO_FLOAT(uParam0->f_14));
	}
	if (PAD::_IS_INPUT_DISABLED(0) && bParam1)
	{
		if (uParam0->f_1C)
		{
			uParam0->f_11 = uParam0->f_7;
		}
	}
	else
	{
		uParam0->f_11 = uParam0->f_7;
	}
	if (bParam1)
	{
		if (PAD::_IS_INPUT_DISABLED(0))
		{
			iVar7 = 40;
			iVar8 = 41;
			if (bParam6)
			{
				iVar7 = 241;
				iVar8 = 242;
			}
			if (NETWORK::_0x5C497525F803486B(0, iVar7))
			{
				uParam0->f_11 = (uParam0->f_11 - 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			else if (NETWORK::_0x5C497525F803486B(0, iVar8))
			{
				uParam0->f_11 = (uParam0->f_11 + 5f);
				uParam0->f_1B = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_1C = 0;
			}
			if (bParam3)
			{
				uParam0->f_11 = func_80(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), uParam0->f_7);
			}
			else
			{
				uParam0->f_11 = func_80(uParam0->f_11, (uParam0->f_7 - uParam0->f_13), (uParam0->f_7 + uParam0->f_13));
			}
		}
		else if (bParam8)
		{
			iVar0[1] = PAD::GET_CONTROL_VALUE(2, 207);
			iVar0[3] = PAD::GET_CONTROL_VALUE(2, 208);
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(iVar0[3]) > 127f)
				{
					uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * (uParam0->f_13 / 2f)))));
				}
			}
			else
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
				uParam0->f_11 = (uParam0->f_11 - IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[3]) / 128f) * uParam0->f_13))));
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(iVar0[1]) < 0f)
			{
				uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
			}
		}
		else
		{
			uParam0->f_11 = (uParam0->f_11 + IntToFloat(SYSTEM::ROUND(((SYSTEM::TO_FLOAT(iVar0[1]) / 128f) * uParam0->f_13))));
		}
	}
	uParam0->f_12 = (uParam0->f_12 + (((uParam0->f_11 - uParam0->f_12) * 0.06f) * fVar5));
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_E, uParam0->f_12, 0, 1, 1, 2);
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (CAM::IS_CAM_ACTIVE(*uParam0))
		{
			if (CAM::IS_CAM_RENDERING(*uParam0))
			{
				RECORDING::_0xAF66DCEE6609B148();
			}
		}
	}
}

float func_80(float fParam0, float fParam1, float fParam2)//Position - 0x33DA
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

int func_81(int iParam0, int iParam1, int iParam2)//Position - 0x3401
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_82(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x3426
{
	*uParam0 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::_0x5B84D09CEC5209C5(2, 221) * 127f));
	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(2, 218))
		{
			*uParam0 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 218) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 219))
		{
			*uParam1 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 219) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 220))
		{
			*uParam2 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 220) * 127f));
		}
		if (!PAD::IS_CONTROL_ENABLED(2, 221))
		{
			*uParam3 = SYSTEM::FLOOR((PAD::_0x4F8A26A890FD62FB(2, 221) * 127f));
		}
	}
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
			{
				*uParam3 = (*uParam3 * 4294967295);
			}
			if (PAD::_0xE1615EC03B3BB4FD())
			{
				*uParam3 = (*uParam3 * 4294967295);
			}
		}
	}
}

void func_83(var uParam0)//Position - 0x352A
{
	bool bVar0;
	int iVar1;
	
	if (!func_10(3, *uParam0))
	{
		if (uParam0->f_1E3 == 0 && uParam0->f_1C7 > 3)
		{
			if (uParam0->f_1C4 == 4294967295)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 19))
				{
					uParam0->f_1C4 = MISC::GET_GAME_TIMER() + 500;
				}
				else
				{
					uParam0->f_1C4 = MISC::GET_GAME_TIMER();
				}
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_1C4)
			{
				bVar0 = false;
				iVar1 = 0;
				while (iVar1 < uParam0->f_1.f_171)
				{
					if (!bVar0)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1.f_12F, iVar1 + 4))
						{
							func_85(uParam0, iVar1);
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1.f_172, iVar1))
							{
								MISC::SET_BIT(&(uParam0->f_1C1), 19);
							}
							else
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 19);
							}
							bVar0 = true;
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_84(3, *uParam0, 1);
				}
			}
		}
	}
}

void func_84(int iParam0, int iParam1, bool bParam2)//Position - 0x3609
{
	bool bVar0;
	
	if (iParam0 == 11 || iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return;
	}
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iParam0], iParam1);
	if (bVar0 == bParam2)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_2361.f_63.f_DB[iParam0]), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_2361.f_63.f_DB[iParam0]), iParam1);
	}
}

void func_85(var uParam0, int iParam1)//Position - 0x368E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(99);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	func_25(uParam0, &(uParam0->f_1.f_173[iParam1 /*2*/]), uParam0->f_1.f_B);
	func_23(uParam0, iParam1 + 4, 1);
	uParam0->f_1C4 = 4294967295;
}

void func_86(var uParam0)//Position - 0x36D5
{
	int iVar0;
	int iVar1;
	
	if ((!func_19() && CAM::IS_SCREEN_FADED_IN()) && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (uParam0->f_1E3 > 0)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 13))
			{
				if (func_87(&(uParam0->f_1E4), &(uParam0->f_1D3[0 /*5*/]), &(uParam0->f_1D3[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_1C7 = 0;
					if (uParam0->f_1D3[0 /*5*/].f_4)
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 11);
					}
					else
					{
						MISC::SET_BIT(&(uParam0->f_1C1), 11);
					}
					iVar0 = 0;
					while (iVar0 < 2)
					{
						uParam0->f_1D3[iVar0 /*5*/] = { uParam0->f_1D3[iVar0 + 1 /*5*/] };
						uParam0->f_1D3[iVar0 /*5*/].f_2 = { uParam0->f_1D3[iVar0 + 1 /*5*/].f_2 };
						uParam0->f_1D3[iVar0 /*5*/].f_4 = uParam0->f_1D3[iVar0 + 1 /*5*/].f_4;
						iVar0++;
					}
					uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				}
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					uParam0->f_1D3[iVar1 /*5*/] = { uParam0->f_1D3[iVar1 + 1 /*5*/] };
					uParam0->f_1D3[iVar1 /*5*/].f_2 = { uParam0->f_1D3[iVar1 + 1 /*5*/].f_2 };
					uParam0->f_1D3[iVar1 /*5*/].f_4 = uParam0->f_1D3[iVar1 + 1 /*5*/].f_4;
					iVar1++;
				}
				uParam0->f_1E3 = (uParam0->f_1E3 - 1);
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 13);
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 11);
			}
		}
		else
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 11))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 11);
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 13))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 13);
			}
			uParam0->f_1C7++;
		}
	}
}

bool func_87(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x388C
{
	func_101(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_280001 = 0;
	return func_88(sParam2, iParam3, 0);
}

int func_88(char* sParam0, int iParam1, bool bParam2)//Position - 0x38DA
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
					func_100();
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
		if (func_99(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_98();
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
				func_92();
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
				if (func_91())
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
			if (func_74())
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
			func_90();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_89();
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
		func_100();
	}
	return 0;
}

void func_89()//Position - 0x3BA6
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

void func_90()//Position - 0x3BD7
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

int func_91()//Position - 0x3C6C
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

void func_92()//Position - 0x3D05
{
	if (func_220(14))
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
		Global_38B1 = func_93();
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

var func_93()//Position - 0x3DA7
{
	func_94();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_94()//Position - 0x3DC0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_97(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_96(AUDIO::_0x0626A247D2405330());
			if (func_95(iVar0) && (!func_220(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_95(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_95(int iParam0)//Position - 0x3EBD
{
	return iParam0 < 3;
}

int func_96(int iParam0)//Position - 0x3EC9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_97(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_97(int iParam0)//Position - 0x3F06
{
	if (func_95(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_98()//Position - 0x3F30
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

bool func_99(int iParam0, int iParam1)//Position - 0x3F87
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

void func_100()//Position - 0x3FC2
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

void func_101(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x401B
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

void func_102(var uParam0)//Position - 0x4071
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	
	uParam0->f_1C5++;
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		func_7(uParam0);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 11))
	{
		if ((PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39)) || (PAD::_IS_INPUT_DISABLED(2) && (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38) || PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_40))))
		{
			func_112();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 12))
			{
				MISC::SET_BIT(&(uParam0->f_1C1), 13);
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 11);
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 10);
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 12);
		}
	}
	func_82(&(uParam0->f_1CA[0]), &(uParam0->f_1CA[1]), &(uParam0->f_1CA[2]), &(uParam0->f_1CA[3]), 0, 0);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		uParam0->f_1CA[2] = (uParam0->f_1CA[2] / 10);
		uParam0->f_1CA[3] = (uParam0->f_1CA[3] / 10);
		uParam0->f_1CA[2] = func_81((uParam0->f_1CA[2] + uParam0->f_289.f_18), 4294967169, 127);
		uParam0->f_1CA[3] = func_81((uParam0->f_1CA[3] + uParam0->f_289.f_19), 4294967169, 127);
	}
	uParam0->f_289.f_18 = uParam0->f_1CA[2];
	uParam0->f_289.f_19 = uParam0->f_1CA[3];
	if (PAD::IS_LOOK_INVERTED())
	{
		uParam0->f_1CA[3] = -uParam0->f_1CA[3];
	}
	if (uParam0->f_1C6 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_1CA[2] = 0;
		uParam0->f_1CA[3] = 0;
	}
	if (uParam0->f_1D0 == 0 || uParam0->f_1D0 == 4)
	{
		if (uParam0->f_1C5 > 15)
		{
			MISC::SET_BIT(&(uParam0->f_1C1), 4);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 4);
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 10))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 11))
		{
			if ((MISC::GET_GAME_TIMER() - uParam0->f_1C8) > 200)
			{
				if ((uParam0->f_1D0 == 2 || uParam0->f_1D0 == 3) || uParam0->f_1D0 == 4)
				{
					if ((MISC::GET_GAME_TIMER() - uParam0->f_1C9) > 25000)
					{
						func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_118[3 /*2*/], 1);
						uParam0->f_1C9 = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000));
					}
				}
				if (uParam0->f_1D0 == 2)
				{
					if ((((uParam0->f_1CA[1] < 4294967211 || uParam0->f_1CA[0] < 4294967211) || PAD::IS_CONTROL_PRESSED(2, 188)) || PAD::IS_CONTROL_PRESSED(2, 189)) || (PAD::_IS_INPUT_DISABLED(2) && NETWORK::_0x5C497525F803486B(2, 241)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
						CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((((uParam0->f_1CA[1] > 85 || uParam0->f_1CA[0] > 85) || PAD::IS_CONTROL_PRESSED(2, 187)) || PAD::IS_CONTROL_PRESSED(2, 190)) || (PAD::_IS_INPUT_DISABLED(2) && NETWORK::_0x5C497525F803486B(0, 242)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
						CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
						uParam0->f_2AA = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (uParam0->f_1D0 == 3)
				{
					if ((uParam0->f_1CA[1] < 4294967211 || PAD::IS_CONTROL_PRESSED(2, 188)) || (PAD::_IS_INPUT_DISABLED(2) && NETWORK::_0x5C497525F803486B(0, 40)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(8);
						CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						if (uParam0->f_1A0 != 0)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_1A0 = 0;
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 9))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 9);
							func_7(uParam0);
						}
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
					else if ((uParam0->f_1CA[1] > 85 || PAD::IS_CONTROL_PRESSED(2, 187)) || (PAD::_IS_INPUT_DISABLED(2) && NETWORK::_0x5C497525F803486B(0, 41)))
					{
						GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_INPUT_EVENT");
						GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
						CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
						if (uParam0->f_1A0 != 1)
						{
							unk_0x1190AB7024CBD8CB(4294967295, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
						}
						uParam0->f_1A0 = 1;
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 9))
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 9);
							func_7(uParam0);
						}
						uParam0->f_1C8 = MISC::GET_GAME_TIMER();
						uParam0->f_1C9 = uParam0->f_1C8;
					}
				}
				if (!func_19() || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_37) || (PAD::_IS_INPUT_DISABLED(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_38)))
					{
						switch (uParam0->f_1D0)
						{
							case 3:
								if (!func_19())
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 9))
									{
										uParam0->f_1C8 = MISC::GET_GAME_TIMER();
										iVar0 = func_30(*uParam0);
										if (iVar0 != 4294967295)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
											uParam0->f_2A8 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
											func_11(uParam0, 1);
											func_13(&(uParam0->f_1.f_14[0 /*4*/]), 1);
											func_13(&(uParam0->f_1.f_14[1 /*4*/]), 1);
											Global_19E56.f_1[*uParam0] = 1;
											GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
										}
									}
								}
								break;
							
							case 2:
								if (!func_10(4, *uParam0))
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									if (uParam0->f_1C2 < Global_15D0C[iVar1 /*19*/])
									{
										GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "GET_CURRENT_SELECTION");
										uParam0->f_2A9 = GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
										func_11(uParam0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									func_84(4, *uParam0, 1);
									if (!func_111(0))
									{
										func_109(*uParam0);
									}
								}
								else
								{
									func_84(5, *uParam0, 1);
								}
								unk_0x1190AB7024CBD8CB(4294967295, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								iVar2 = 0;
								while (iVar2 < Global_15D0C[iVar1 /*19*/])
								{
									if (Global_19E56.f_1.f_C[iVar1 /*6*/][iVar2] == 0 || func_40(Global_19E56.f_1.f_C[iVar1 /*6*/][iVar2]) != Global_15D0C[iVar1 /*19*/].f_1[iVar2])
									{
										bVar4 = false;
										iVar5 = 0;
										while (iVar5 < 14)
										{
											if (!bVar4)
											{
												bVar4 = true;
												iVar3 = iVar5;
												if (iVar3 != 0)
												{
													if (Global_15C72[iVar3 /*5*/] != Global_15D0C[iVar1 /*19*/].f_1[iVar2])
													{
														bVar4 = false;
													}
													if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_74, iVar3))
													{
														bVar4 = false;
													}
													if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_76, iVar3))
													{
														bVar4 = false;
													}
													if (iVar3 == 11 && *uParam0 == 3)
													{
														bVar4 = false;
													}
													if (func_37(uParam0, iVar3))
													{
														bVar4 = false;
													}
												}
												else
												{
													bVar4 = false;
												}
											}
											iVar5++;
										}
										Global_19E56.f_1.f_C[iVar1 /*6*/][iVar2] = iVar3;
									}
									iVar2++;
								}
								func_11(uParam0, 1);
								func_62(uParam0, iVar1, 4);
								break;
						}
						uParam0->f_1AB = 0;
					}
					if (PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_39) || (PAD::_IS_INPUT_DISABLED(2) && PAD::IS_CONTROL_JUST_PRESSED(2, iLocal_40)))
					{
						switch (uParam0->f_1D0)
						{
							case 2:
								iVar0 = func_30(*uParam0);
								iVar1 = func_65(iVar0);
								if (uParam0->f_1C2 > 0)
								{
									func_11(uParam0, 1);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar6 = Global_19E56.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_19E56.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_15D0C[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_35(uParam0, uParam0->f_1C2, iVar6);
									unk_0x1190AB7024CBD8CB(4294967295, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_1AB = 0;
									uParam0->f_1C8 = MISC::GET_GAME_TIMER();
								}
								else if (!func_222(0))
								{
									if (*uParam0 != 2)
									{
										iVar7 = 0;
										while (iVar7 < uParam0->f_1.f_60)
										{
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
											CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
											GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
											GRAPHICS::SET_SEETHROUGH(true);
											CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
											iVar7++;
										}
										unk_0x1190AB7024CBD8CB(4294967295, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
										iVar7 = 0;
										while (iVar7 < 2)
										{
											if (uParam0->f_1.f_1E[iVar7] != 13)
											{
												func_108(*uParam0, uParam0->f_1.f_1E[iVar7], 0);
											}
											iVar7++;
										}
										uParam0->f_1AB = 0;
										func_11(uParam0, 1);
										uParam0->f_1C8 = MISC::GET_GAME_TIMER();
										uParam0->f_1D1 = 0;
										func_107(0, 1);
									}
								}
								break;
							
							case 4:
								if (*uParam0 != 1)
								{
									iVar0 = func_30(*uParam0);
									iVar1 = func_65(iVar0);
									uParam0->f_1C2 = (uParam0->f_1C2 - 1);
									uParam0->f_1A1 = uParam0->f_1C2;
									iVar8 = Global_19E56.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
									Global_19E56.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
									uParam0->f_1D1 = Global_15D0C[iVar1 /*19*/].f_1[uParam0->f_1C2];
									func_5(uParam0, 2, iVar8);
								}
								else
								{
									iVar9 = 0;
									while (iVar9 < 2)
									{
										if (uParam0->f_1.f_1E[iVar9] != 13)
										{
											func_108(*uParam0, uParam0->f_1.f_1E[iVar9], 0);
										}
										iVar9++;
									}
									func_106(8, 0);
									func_84(5, 1, 0);
									uParam0->f_1AB = 0;
									func_11(uParam0, 1);
									uParam0->f_1C8 = MISC::GET_GAME_TIMER();
									func_5(uParam0, 3, 0);
								}
								unk_0x1190AB7024CBD8CB(4294967295, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
							}
						}
					}
				}
		}
	}
	else if (uParam0->f_1C7 > 5)
	{
		iVar0 = func_30(*uParam0);
		iVar1 = func_65(iVar0);
		if (uParam0->f_1C2 >= Global_15D0C[iVar1 /*19*/] || (*uParam0 == 1 && uParam0->f_1C2 > uParam0->f_19F))
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(99);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			func_23(uParam0, 0, 1);
			func_5(uParam0, 4, 0);
		}
		else
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 17))
			{
				iVar10 = Global_19E56.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
				Global_19E56.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = 0;
				uParam0->f_1D1 = Global_15D0C[iVar1 /*19*/].f_1[uParam0->f_1C2];
				func_35(uParam0, uParam0->f_1C2, iVar10);
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 17);
		}
		uParam0->f_1C9 = MISC::GET_GAME_TIMER();
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (((!func_12(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/]))) && !func_12(&(uParam0->f_1.f_14[0 /*4*/]))) && !func_12(&(uParam0->f_1.f_14[1 /*4*/])))
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
	if (uParam0->f_2A8 != 0)
	{
		if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uParam0->f_2A8))
		{
			iVar11 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uParam0->f_2A8);
			iVar1 = func_29(*uParam0, iVar11);
			iVar0 = func_30(*uParam0);
			func_106(iVar0, iVar1);
			if (!func_111(0))
			{
				func_105(*uParam0);
			}
			unk_0x1190AB7024CBD8CB(4294967295, "SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_62(uParam0, iVar1, 0);
			if (uParam0->f_1.f_1E[iVar11] != 13)
			{
				func_108(*uParam0, uParam0->f_1.f_1E[iVar11], 1);
			}
			iVar12 = 0;
			while (iVar12 < uParam0->f_1.f_60)
			{
				func_61(uParam0, iVar12);
				if (iVar12 < Global_15D0C[iVar1 /*19*/])
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar12);
					GRAPHICS::SET_SEETHROUGH(true);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar12);
					GRAPHICS::SET_SEETHROUGH(false);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				iVar12++;
			}
			if (*uParam0 != 1)
			{
				func_84(5, *uParam0, 1);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_1C1), 10);
				uParam0->f_1C2++;
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			uParam0->f_2A8 = 0;
		}
	}
	if (uParam0->f_2A9 != 0)
	{
		if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uParam0->f_2A9))
		{
			iVar13 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uParam0->f_2A9);
			iVar0 = func_30(*uParam0);
			iVar1 = func_65(iVar0);
			Global_19E56.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2] = uParam0->f_1A2[iVar13];
			iVar14 = Global_19E56.f_1.f_C[iVar1 /*6*/][uParam0->f_1C2];
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "UPDATE_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_1C2);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar13);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar14);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "FOCUS_VIEW");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(99);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			unk_0x1190AB7024CBD8CB(4294967295, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 17);
			func_104(uParam0, iVar14);
			uParam0->f_1C2++;
			uParam0->f_1A1 = uParam0->f_1C2;
			uParam0->f_1C8 = MISC::GET_GAME_TIMER();
			uParam0->f_1C9 = uParam0->f_1C8;
			MISC::SET_BIT(&(uParam0->f_1C1), 10);
			if (!func_12(&(uParam0->f_1.f_6C[0 /*4*/])) && !func_12(&(uParam0->f_1.f_6C[1 /*4*/])))
			{
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
			}
			uParam0->f_2A9 = 0;
		}
	}
	if (uParam0->f_2AA != 0)
	{
		if (GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_BOOL(uParam0->f_2AA))
		{
			iVar15 = GRAPHICS::_GET_SCALEFORM_MOVIE_FUNCTION_RETURN_INT(uParam0->f_2AA);
			if (iVar15 != 4294967295)
			{
				iVar16 = uParam0->f_1A2[iVar15];
				if (iVar16 != uParam0->f_1AB)
				{
					unk_0x1190AB7024CBD8CB(4294967295, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
				}
				uParam0->f_1AB = iVar16;
			}
			uParam0->f_2AA = 0;
		}
	}
	if (uParam0->f_1AB != 0)
	{
		func_103(uParam0, uParam0->f_1AB);
	}
}

void func_103(var uParam0, int iParam1)//Position - 0x4E3A
{
	if (!func_19())
	{
		if (uParam0->f_1E3 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_77, 14))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[14 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[14 /*2*/], 1);
							GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 14);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 13:
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_77, 16))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[16 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[16 /*2*/], 1);
							GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 16);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 12:
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_77, 15))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[15 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[15 /*2*/], 1);
							GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 15);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				
				case 11:
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_77, 17))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[17 /*2*/]), ""))
						{
							MISC::SET_BIT(&(uParam0->f_1C1), 10);
							MISC::SET_BIT(&(uParam0->f_1C1), 17);
							func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[17 /*2*/], 1);
							GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 17);
							MISC::SET_BIT(&(uParam0->f_1C1), 12);
							return;
						}
					}
					break;
				}
			}
	}
}

void func_104(var uParam0, int iParam1)//Position - 0x5056
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1CF, iParam1))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_77, iParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_1.f_130[iParam1 /*2*/]), ""))
			{
				func_24(uParam0, uParam0->f_1.f_116, uParam0->f_1.f_130[iParam1 /*2*/], 1);
				MISC::SET_BIT(&(Global_19E56.f_1.f_77), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 0))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 10:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 1))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 3:
					switch (iParam1)
					{
						case 12:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 3))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
							}
							break;
						
						case 9:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 6))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
							}
							break;
						
						case 1:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 0))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 7))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 7))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 10:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 1))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 8))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[21 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
								}
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 8))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[19 /*2*/], 1);
							}
							break;
						
						case 6:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 4))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 7:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 2))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
						
						case 8:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 5))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[18 /*2*/], 1);
							}
							break;
					}
					break;
				
				case 4:
					switch (iParam1)
					{
						case 12:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 15))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 3))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[25 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[24 /*2*/], 1);
								}
							}
							break;
						
						case 7:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 2))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 14))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[30 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[28 /*2*/], 1);
								}
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 14))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[29 /*2*/], 1);
							}
							break;
						
						case 9:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 18))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 6))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[27 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[26 /*2*/], 1);
								}
							}
							break;
						
						case 4:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 17))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 5:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 12))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[31 /*2*/], 1);
							}
							break;
						
						case 1:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 10))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 0))
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 7))
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 10:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 11))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 1))
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 8))
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[23 /*2*/], 1);
									}
									else
									{
										func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
									}
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 3:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 13))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
						
						case 6:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 19))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 4))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 8:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 16))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 5))
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[22 /*2*/], 1);
								}
								else
								{
									func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
								}
							}
							break;
						
						case 13:
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_75, 20))
							{
								func_24(uParam0, uParam0->f_1.f_114, uParam0->f_1.f_130[20 /*2*/], 1);
							}
							break;
					}
					break;
				}
		}
		MISC::SET_BIT(&(uParam0->f_1CF), iParam1);
	}
}

void func_105(int iParam0)//Position - 0x57ED
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_19E56.f_2361.f_63.f_CD[7];
			if (iVar0 == 1)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_jewel_stealth"), 0, 1);
			}
			break;
		
		case 1:
			iVar0 = Global_19E56.f_2361.f_63.f_CD[8];
			if (iVar0 == 3)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_docks_sink_ship"), 0, 1);
			}
			break;
		
		case 3:
			iVar0 = Global_19E56.f_2361.f_63.f_CD[10];
			if (iVar0 == 6)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bureau_firecrew"), 0, 1);
			}
			break;
		
		case 4:
			iVar0 = Global_19E56.f_2361.f_63.f_CD[11];
			if (iVar0 == 8)
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), 1, 1);
			}
			else
			{
				STATS::STAT_SET_BOOL(joaat("sp_heist_chose_bigs_traffic"), 0, 1);
			}
			break;
	}
}

void func_106(int iParam0, int iParam1)//Position - 0x58E8
{
	if (iParam0 == 13 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_19E56.f_2361.f_63.f_CD[iParam0] == iParam1)
	{
		return;
	}
	Global_19E56.f_2361.f_63.f_CD[iParam0] = iParam1;
}

void func_107(int iParam0, int iParam1)//Position - 0x592D
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return;
	}
	if (Global_19E56.f_2361.f_63.f_3A[iParam0] == iParam1)
	{
		return;
	}
	Global_19E56.f_2361.f_63.f_3A[iParam0] = iParam1;
}

void func_108(int iParam0, int iParam1, bool bParam2)//Position - 0x5972
{
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_1.f_78[iParam0]), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_78[iParam0]), iParam1);
	}
	MISC::SET_BIT(&Global_15CF7, iParam0);
}

void func_109(int iParam0)//Position - 0x59B0
{
	int iVar0;
	int iVar1;
	
	func_110(iParam0);
	switch (iParam0)
	{
		case 0:
			iVar1 = Global_19E56.f_2361.f_63.f_CD[7];
			iVar0 = 0;
			while (iVar0 < Global_15D0C[iVar1 /*19*/])
			{
				switch (Global_19E56.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 0);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 1);
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 14);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 2);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 3);
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 4);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 5);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 6);
						break;
				}
				MISC::SET_BIT(&(Global_19E56.f_1.f_77), Global_19E56.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 2:
			iVar1 = Global_19E56.f_2361.f_63.f_CD[9];
			iVar0 = 0;
			while (iVar0 < Global_15D0C[iVar1 /*19*/])
			{
				switch (Global_19E56.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 7);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 8);
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 14);
						break;
					
					case 11:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 9);
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 17);
						break;
				}
				MISC::SET_BIT(&(Global_19E56.f_1.f_77), Global_19E56.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
		
		case 3:
			iVar1 = Global_19E56.f_2361.f_63.f_CD[10];
			iVar0 = 0;
			while (iVar0 < Global_15D0C[iVar1 /*19*/])
			{
				switch (Global_19E56.f_1.f_C[iVar1 /*6*/][iVar0])
				{
					case 1:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 10);
						break;
					
					case 10:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 11);
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 14);
						break;
					
					case 5:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 12);
						break;
					
					case 3:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 13);
						break;
					
					case 4:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 17);
						break;
					
					case 7:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 14);
						break;
					
					case 12:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 15);
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 15);
						break;
					
					case 6:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 19);
						break;
					
					case 8:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 16);
						break;
					
					case 9:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 18);
						break;
					
					case 13:
						MISC::SET_BIT(&(Global_19E56.f_1.f_75), 20);
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_77), 16);
						break;
				}
				MISC::SET_BIT(&(Global_19E56.f_1.f_77), Global_19E56.f_1.f_C[iVar1 /*6*/][iVar0]);
				iVar0++;
			}
			break;
	}
}

void func_110(int iParam0)//Position - 0x5D2D
{
	switch (iParam0)
	{
		case 0:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 2);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 3);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 4);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 6);
			break;
		
		case 2:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 7);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 8);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 9);
			break;
		
		case 3:
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 10);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 11);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 12);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 13);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 14);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 15);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 16);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 18);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 19);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_1.f_75), 20);
			break;
	}
}

bool func_111(bool bParam0)//Position - 0x5E75
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

void func_112()//Position - 0x5EA0
{
	Global_3960 = 0;
	func_113();
}

void func_113()//Position - 0x5EB0
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_114()//Position - 0x5ED1
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_115();
}

void func_115()//Position - 0x5EE1
{
	Global_434C.f_86 = 1;
}

void func_116(var uParam0)//Position - 0x5EEF
{
	vector3 vVar0;
	int iVar1;
	
	uParam0->f_1C5 = 0;
	uParam0->f_1CF = 0;
	MISC::SET_BIT(&(uParam0->f_1C1), 9);
	func_11(uParam0, 0);
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (Global_9197 == 1)
			{
				func_121(AUDIO::_0x0626A247D2405330());
			}
			vVar0 = { uParam0->f_191 };
			vVar0 = { vVar0 + Vector(0.5f, (2.9f * SYSTEM::COS((180f - uParam0->f_194))), (2.9f * SYSTEM::SIN((180f - uParam0->f_194)))) };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), 0, 0);
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 134);
			ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar0, 1, false, 0, 1);
			ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), uParam0->f_194);
			BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
			unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
		}
		MISC::SET_BIT(&(uParam0->f_1C1), 7);
	}
	HUD::DISPLAY_RADAR(false);
	func_72(1);
	func_120();
	HUD::_0xFDB423997FA30340();
	MISC::CLEAR_AREA(uParam0->f_191, 5f, 1, 1, 0, false);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_191, 5f);
	GRAPHICS::_0xD39D13C9FEBF0511(1);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(17, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_119(&(uParam0->f_289), uParam0->f_195, uParam0->f_198, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, 3212836864, 0);
	iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_191);
	if (iVar1 != 0)
	{
		INTERIOR::_LOAD_INTERIOR(iVar1);
	}
	INTERIOR::_0xAF348AFCB575A441(&(Global_15CB9[uParam0->f_1.f_1 /*15*/].f_7));
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		INTERIOR::_0x405DC2AEF6AF95B9(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(AUDIO::_0x0626A247D2405330()));
	}
	func_118(0);
	func_117();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19E, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SET_SEETHROUGH(false);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	uParam0->f_1D2 = PAD::_0x80C2FD58D720C801(2, 10, true);
	MISC::SET_BIT(&(uParam0->f_1C1), 2);
	Global_15CF6 = 1;
	func_6(uParam0, uParam0->f_1D0, 0);
}

void func_117()//Position - 0x60E1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_19E56.f_4F9E.f_91)
	{
		func_15(iVar0);
		iVar0++;
	}
	Global_19E56.f_4F9E.f_91 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_19E56.f_4F9E.f_92[iVar0] = 0;
		iVar0++;
	}
	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	}
}

void func_118(bool bParam0)//Position - 0x613F
{
	if (!bParam0)
	{
		Global_19908 = MISC::GET_GAME_TIMER() + 250;
	}
	Global_19905 = bParam0;
}

void func_119(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, float fParam10, bool bParam11)//Position - 0x615D
{
	uParam0->f_1 = { vParam1 };
	uParam0->f_4 = { vParam2 };
	uParam0->f_7 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_B = { 0f, 0f, 0f };
	uParam0->f_E = { 0f, 0f, 0f };
	uParam0->f_11 = fParam3;
	uParam0->f_12 = fParam3;
	uParam0->f_17 = iParam8;
	uParam0->f_13 = uParam7;
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);
	if (!bParam11)
	{
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
	if (fParam10 > 0f)
	{
		CAM::SET_CAM_NEAR_CLIP(*uParam0, fParam10);
	}
	if (uParam0->f_17)
	{
		HUD::LOCK_MINIMAP_ANGLE(iParam9);
	}
	uParam0->f_18 = 0;
	uParam0->f_19 = 0;
	uParam0->f_1D = 0f;
	uParam0->f_1E = 0f;
	uParam0->f_1A = 0;
	uParam0->f_1C = 0;
	uParam0->f_1B = 0;
}

void func_120()//Position - 0x6255
{
	Global_434C.f_5 = 1;
}

void func_121(int iParam0)//Position - 0x6263
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_129(iParam0);
	if (!iVar0 == 4294967295)
	{
		iVar1 = Global_90C2[iVar0 /*5*/];
		func_124(1, iVar1, 1);
		return;
	}
	iVar2 = func_123(iParam0);
	if (iVar2 == 4294967295)
	{
		return;
	}
	func_122(iVar2);
}

void func_122(int iParam0)//Position - 0x62BC
{
	if (iParam0 < 0 || iParam0 >= 5)
	{
		return;
	}
	if (!Global_90A8[iParam0 /*5*/].f_1 == 0)
	{
		if (Global_90A8[iParam0 /*5*/].f_1 == AUDIO::_0x0626A247D2405330())
		{
			Global_9195 = 0;
		}
	}
	Global_90A8[iParam0 /*5*/] = 13;
	Global_90A8[iParam0 /*5*/].f_1 = 0;
	Global_90A8[iParam0 /*5*/].f_2 = 0;
	Global_90A8[iParam0 /*5*/].f_3 = 0;
	Global_90A8[iParam0 /*5*/].f_4 = 0;
	Global_90A7 = (Global_90A7 - 1);
	if (Global_90A7 < 0)
	{
		Global_90A7 = 0;
	}
}

int func_123(int iParam0)//Position - 0x633F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_90A8[iVar0 /*5*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_124(int iParam0, int iParam1, int iParam2)//Position - 0x6370
{
	func_125(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_125(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6385
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (iParam1 == 4294967295)
	{
		return;
	}
	if (iParam2 == 6)
	{
		return;
	}
	if (func_127(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_126();
	if (iVar0 == 4294967295)
	{
		return;
	}
	Global_9113[iVar0 /*6*/] = iParam0;
	Global_9113[iVar0 /*6*/].f_1 = iParam1;
	Global_9113[iVar0 /*6*/].f_2 = iParam2;
	Global_9113[iVar0 /*6*/].f_3 = iParam3;
	Global_9113[iVar0 /*6*/].f_4 = iParam4;
	Global_9113[iVar0 /*6*/].f_5 = iParam5;
}

int func_126()//Position - 0x6407
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_9113[iVar0 /*6*/].f_2 == 6)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_127(int iParam0, int iParam1, int iParam2)//Position - 0x6438
{
	if (func_128(iParam0, iParam1, iParam2) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_128(int iParam0, int iParam1, int iParam2)//Position - 0x6453
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (iParam2 == Global_9113[iVar0 /*6*/].f_2)
		{
			if (iParam0 == Global_9113[iVar0 /*6*/])
			{
				if (iParam1 == Global_9113[iVar0 /*6*/].f_1)
				{
					return iVar0;
				}
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_129(int iParam0)//Position - 0x649F
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!Global_90C2[iVar0 /*5*/] == 4294967295)
		{
			if (iParam0 == Global_90C2[iVar0 /*5*/].f_1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_130(var uParam0)//Position - 0x64E8
{
	int iVar0;
	
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = func_131(*uParam0);
	if (iVar0 == 4294967295)
	{
		*uParam0 = 4294967295;
		return;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/].f_7 = 1;
			*uParam0 = 4294967295;
			return;
		}
	}
	*uParam0 = 4294967295;
}

int func_131(int iParam0)//Position - 0x653F
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/].f_1 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_132(int iParam0, bool bParam1)//Position - 0x657A
{
	int iVar0;
	
	iVar0 = func_131(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		return 0;
	}
	if (func_143(0))
	{
		return 0;
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	if (iVar0 > 4294967295 && iVar0 < 6)
	{
		if (Global_8FDB[iVar0 /*32*/] == 1 && Global_8FDB[iVar0 /*32*/].f_4 == 1)
		{
			if (bParam1)
			{
				if (Global_8FDB[iVar0 /*32*/].f_1D)
				{
					return 0;
				}
			}
			Global_8FDB[iVar0 /*32*/].f_5 = 1;
			Global_8FDB[iVar0 /*32*/].f_1D = 1;
			return 1;
		}
		else
		{
			if (Global_8FDB[iVar0 /*32*/] == 0)
			{
			}
			if (Global_8FDB[iVar0 /*32*/].f_7)
			{
			}
		}
	}
	return 0;
}

void func_133(var uParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, int iParam6)//Position - 0x6632
{
	int iVar0;
	
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("context_controller")) < 1)
	{
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == 4294967295)
		{
			func_130(uParam0);
		}
		return;
	}
	if (!*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!Global_8FDB[iVar0 /*32*/])
		{
			Global_8FDB[iVar0 /*32*/] = 1;
			Global_8FDB[iVar0 /*32*/].f_1 = Global_90A4;
			Global_90A4++;
			Global_8FDB[iVar0 /*32*/].f_4 = 0;
			Global_8FDB[iVar0 /*32*/].f_1D = 0;
			Global_8FDB[iVar0 /*32*/].f_5 = 0;
			Global_8FDB[iVar0 /*32*/].f_2 = iParam1;
			StringCopy(&(Global_8FDB[iVar0 /*32*/].f_8), sParam2, 16);
			Global_8FDB[iVar0 /*32*/].f_6 = iParam3;
			Global_8FDB[iVar0 /*32*/].f_1F = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_8FDB[iVar0 /*32*/].f_7 = 0;
			Global_8FDB[iVar0 /*32*/].f_3 = iParam5;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_8FDB[iVar0 /*32*/].f_C = 1;
				StringCopy(&(Global_8FDB[iVar0 /*32*/].f_D), sParam4, 64);
				Global_8FDB[iVar0 /*32*/].f_1E = iParam6;
			}
			else
			{
				Global_8FDB[iVar0 /*32*/].f_C = 0;
				Global_8FDB[iVar0 /*32*/].f_1E = 0;
			}
			*uParam0 = Global_8FDB[iVar0 /*32*/].f_1;
			return;
		}
		iVar0++;
	}
}

int func_134(int iParam0)//Position - 0x675D
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				iVar0 = func_93();
				if (!func_95(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_142()) || Global_19A9D) || Global_6375) || func_141()) || func_99(8, 4294967295)) || func_140()) || func_139()) || func_138()) || func_137()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1) || func_142()) || Global_6375) || func_141()) || func_99(8, 4294967295)) || func_138()) || func_140()) || func_139()) || func_137()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_142()) || Global_19A9D) || Global_6375) || func_141()) || func_99(8, 4294967295)) || func_138()) || func_140()) || func_139()) || func_137()) || Global_19E56.f_1DEC.f_397[iVar0] == 5) || Global_8F38 != 4294967295)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0)) || func_142()) || Global_19A9D) || Global_6375) || func_141()) || func_99(8, 4294967295)) || func_140()) || func_139()) || func_137()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_142() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || func_99(8, 4294967295)) || func_137()) || func_136()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_99(8, 4294967295) || func_140()) || func_139()) || func_136()) || func_135())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_142()) || Global_6375) || func_141()) || func_99(8, 4294967295)) || func_139()) || func_138()) || func_137()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || func_142()) || func_139()) || Global_19A9D) || Global_6375) || func_141()) || Global_9197) || func_99(8, 4294967295)) || func_138()) || func_136()) || func_137()) || Global_19E56.f_1DEC.f_397[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(AUDIO::_0x0626A247D2405330(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1)) || PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_FALLING(AUDIO::_0x0626A247D2405330())) || PED::IS_PED_SWIMMING(AUDIO::_0x0626A247D2405330())) || PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1)) || PLAYER::IS_PLAYER_CLIMBING(CAM::_0xDC9DA9E8789F5246())) || func_142()) || Global_19A9D) || Global_6375) || func_141()) || func_99(8, 4294967295)) || func_138()) || func_136()) || func_140()) || func_139()) || func_137())
						{
							return 0;
						}
						break;
				}
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

var func_135()//Position - 0x6E7A
{
	return Global_16C57.f_1;
}

int func_136()//Position - 0x6E88
{
	if (Global_16089 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[Global_16089 /*34*/].f_F, 13);
	}
	return 0;
}

int func_137()//Position - 0x6EAE
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_138()//Position - 0x6EC8
{
	if (Global_11729)
	{
		return 1;
	}
	else if (Global_DB6F && !Global_DB75)
	{
		return 1;
	}
	return 0;
}

bool func_139()//Position - 0x6EF2
{
	return Global_16C64.f_148 > 0;
}

bool func_140()//Position - 0x6F03
{
	return Global_16C64.f_147 > 0;
}

var func_141()//Position - 0x6F14
{
	return Global_140859;
}

int func_142()//Position - 0x6F20
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_162B5.f_2C == 1;
	}
	return 0;
}

int func_143(int iParam0)//Position - 0x6F3C
{
	if (iParam0 == 1)
	{
		if (Global_38B1.f_1 > 3)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_38B1.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_144(int iParam0)//Position - 0x6F96
{
	return func_145(iParam0, Global_8D15);
}

int func_145(int iParam0, int iParam1)//Position - 0x6FA7
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
			}
			break;
		
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

void func_146()//Position - 0x7188
{
	int iVar0;
	vector3 vVar1;
	
	if (func_222(17))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 11))
		{
			CUTSCENE::REQUEST_CUTSCENE("JH_1_MCS_4P2", 8);
			SCRIPT::REQUEST_SCRIPT("lesterHandler");
			HUD::REQUEST_ADDITIONAL_TEXT("JHS1AUD", 6);
			MISC::SET_BIT(&iLocal_41, 11);
		}
		else if (CUTSCENE::_0xB56BBBCC2955D9CB())
		{
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
		}
	}
	if (func_222(18))
	{
		if (func_222(17))
		{
			if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2") && SCRIPT::HAS_SCRIPT_LOADED("lesterHandler")) && HUD::HAS_ADDITIONAL_TEXT_LOADED(6))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_245, 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_245, "Lester", 0, joaat("cs_lestercrest"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_245, "Lester", 2, joaat("cs_lestercrest"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_248))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iLocal_248))
					{
						ENTITY::DETACH_ENTITY(iLocal_248, 1, 1);
					}
				}
				if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(AUDIO::_0x0626A247D2405330(), "Michael", 0, joaat("player_zero"), 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_248))
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_248, "WalkingStick_Lester", 1, joaat("prop_cs_walking_stick"), 0);
				}
				else
				{
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
				}
				STREAMING::REQUEST_MODEL(joaat("prop_cs_walking_stick"));
				STREAMING::REQUEST_MODEL(joaat("prop_laptop_lester2"));
				func_72(1);
				func_118(1);
				func_186(1, 1, 1, 0, 0);
				iLocal_43 = 4294967295;
				CUTSCENE::START_CUTSCENE(0);
				if (func_111(0))
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
				}
				func_107(17, 0);
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_114();
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 7))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_248))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_248, true, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_246))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_246, true, 0);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
				{
					ENTITY::SET_ENTITY_VISIBLE(iLocal_245, true, 0);
				}
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 7);
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
			{
				if (!PED::IS_PED_INJURED(iLocal_245))
				{
					iVar0 = iLocal_245;
					SYSTEM::START_NEW_SCRIPT_WITH_ARGS("lesterHandler", &iVar0, 1, 1424);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("lesterHandler");
					iLocal_255 = MISC::GET_GAME_TIMER();
					MISC::SET_BIT(&iLocal_41, 18);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
			{
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					vVar1 = { 709.3766f, -964.2602f, 29.3954f };
					MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &(vVar1.f_2), 0, 0);
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar1, 1, false, 0, 1);
						ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), 261.7831f);
						if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
						{
							PLAYER::SIMULATE_PLAYER_INPUT_GAIT(CAM::_0xDC9DA9E8789F5246(), 1f, 2000, 0, 1, 0);
						}
						PED::FORCE_PED_MOTION_STATE(AUDIO::_0x0626A247D2405330(), 3626484699, false, 0, 0);
					}
					MISC::_0x1327E2FE9746BAEE(AUDIO::_0x0626A247D2405330(), 0, 0);
				}
			}
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
			}
		}
		else if (iLocal_43 == 4294967295 && !func_111(0))
		{
			iLocal_43 = MISC::GET_GAME_TIMER() + 1500;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_43 || func_111(0))
		{
			if (func_111(0))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_DB75 = 0;
				Global_16C57 = 0;
				func_185();
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_walking_stick"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_laptop_lester2"));
			func_72(0);
			func_186(0, 1, 1, 0, 0);
			func_183(&(Global_19E56.f_933.f_21B), 86);
			func_155(&(Global_19E56.f_933.f_21B), 86);
			func_154(&iLocal_45);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 1);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_249, 0);
			if (iLocal_254 != 4294967295)
			{
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_254))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_254);
				}
			}
			unk_0x02DD9F29D9655E48();
			PATHFIND::SET_PED_PATHS_IN_AREA(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, true, 0);
			HUD::_0x14621BB1DF14E2B2(5);
			func_107(18, 0);
			func_147(0, 0);
		}
	}
	else if (!func_222(17))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 18))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 26, 1);
		if (MISC::GET_GAME_TIMER() > iLocal_255 + 1000)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 18);
		}
	}
}

void func_147(int iParam0, bool bParam1)//Position - 0x7587
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		iVar1 = iVar0;
		if (func_39(iVar1) || func_38(iVar1))
		{
			if (!(iVar1 == 11 && iParam0 == 3))
			{
				switch (iVar1)
				{
					case 1:
						func_151(4, 1);
						break;
					
					case 4:
						func_151(8, 1);
						break;
					
					case 6:
						func_151(10, 1);
						break;
					
					case 7:
						func_151(1, 1);
						break;
					
					case 8:
						func_151(3, 1);
						break;
					
					case 9:
						func_151(6, 1);
						break;
					
					case 10:
						func_151(9, 1);
						break;
					
					case 12:
						func_151(11, 1);
						break;
					
					case 13:
						func_151(12, 1);
						break;
					
					case 11:
						if (func_150(91))
						{
							func_151(0, 1);
						}
						break;
					
					case 5:
						if (func_150(91))
						{
							func_151(2, 1);
						}
						break;
					
					case 3:
						if (func_150(67))
						{
							func_151(5, 1);
						}
						break;
					
					case 2:
						if (func_150(77))
						{
							func_151(7, 1);
						}
						break;
					}
				}
		}
		iVar0++;
	}
	if (!func_39(10) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_8[4], 0))
	{
		func_151(9, 1);
	}
	if (!func_39(13) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6187.f_8[16], 0))
	{
		func_151(12, 1);
	}
	if (!func_39(12))
	{
		if (iParam0 == 4)
		{
			func_151(11, 1);
		}
	}
	if (!bParam1)
	{
		if (!func_149(69))
		{
			func_21("DI_HLP_HST", 2, 0, 20000, 10000, 7, 0, 209, 0);
		}
		func_148("DI_FEED_HST");
	}
}

void func_148(char* sParam0)//Position - 0x7753
{
	HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
	HUD::_SET_NOTIFICATION_MESSAGE_3("CHAR_ACTING_UP", "CHAR_ACTING_UP", 0, 0, "DI_FEED_CHAR", sParam0);
}

int func_149(int iParam0)//Position - 0x7777
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_4F9E.f_96[iVar1], iVar0);
	}
	return 0;
}

int func_150(int iParam0)//Position - 0x77BA
{
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_14A[iParam0 /*6*/];
}

void func_151(int iParam0, bool bParam1)//Position - 0x77E6
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 <= 31)
	{
		if (!func_153(iParam0))
		{
			MISC::SET_BIT(&(Global_19E56.f_6726.f_1), iVar0);
			if (!bParam1)
			{
				func_148(func_152(iParam0));
			}
		}
	}
}

char* func_152(int iParam0)//Position - 0x782F
{
	switch (iParam0)
	{
		case 0:
			return "CM_HSTCHE";
			break;
		
		case 1:
			return "CM_HSTCHR";
			break;
		
		case 2:
			return "CM_HSTDAR";
			break;
		
		case 3:
			return "CM_HSTEDD";
			break;
		
		case 4:
			return "CM_HSTGUS";
			break;
		
		case 5:
			return "CM_HSTHUG";
			break;
		
		case 6:
			return "CM_HSTKRM";
			break;
		
		case 7:
			return "CM_HSTKAR";
			break;
		
		case 8:
			return "CM_HSTNOR";
			break;
		
		case 9:
			return "CM_HSTPAC";
			break;
		
		case 10:
			return "CM_HSTPAI";
			break;
		
		case 11:
			return "CM_HSTRIC";
			break;
		
		case 12:
			return "CM_HSTTAL";
			break;
	}
	return "ERROR!";
}

int func_153(int iParam0)//Position - 0x7912
{
	if (iParam0 != 4294967295 && iParam0 != 13)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_6726.f_1, iParam0);
	}
	return 0;
}

void func_154(int iParam0)//Position - 0x7941
{
	if (*iParam0 == 4294967295)
	{
		return;
	}
	if (!*iParam0 == Global_8CEF)
	{
		*iParam0 = 4294967295;
		return;
	}
	*iParam0 = 4294967295;
	Global_8CEE = 0;
	Global_8CF0 = 0;
	Global_8D15 = 15;
	Global_DB72 = 0;
	Global_DB73 = 0;
}

void func_155(var uParam0, int iParam1)//Position - 0x797E
{
	switch (iParam1)
	{
		case 17:
			func_156(uParam0, 0, 12);
			break;
		
		case 19:
			func_156(uParam0, 1, 13);
			break;
		
		case 29:
			func_156(uParam0, 1, 14);
			break;
		
		case 30:
			func_156(uParam0, 2, 15);
			func_156(uParam0, 1, 29);
			break;
		
		case 32:
			func_156(uParam0, 1, 16);
			func_156(uParam0, 0, 17);
			break;
		
		case 39:
			func_156(uParam0, 0, 21);
			func_156(uParam0, 1, 20);
			break;
		
		case 31:
			func_156(uParam0, 0, 18);
			break;
		
		case 20:
			func_156(uParam0, 2, 22);
			break;
		
		case 66:
			func_156(uParam0, 1, 23);
			break;
		
		case 68:
			func_156(uParam0, 1, 24);
			break;
		
		case 70:
			func_156(uParam0, 1, 67);
			break;
		
		case 8:
			func_156(uParam0, 1, 25);
			func_156(uParam0, 2, 26);
			break;
		
		case 67:
			func_156(uParam0, 1, 27);
			break;
		
		case 9:
			func_156(uParam0, 2, 28);
			break;
		
		case 38:
			func_156(uParam0, 2, 30);
			func_156(uParam0, 1, 19);
			break;
		
		case 83:
			func_156(uParam0, 2, 33);
			break;
		
		case 45:
			func_156(uParam0, 1, 35);
			break;
		
		case 64:
			func_156(uParam0, 0, 36);
			func_156(uParam0, 1, 37);
			break;
		
		case 91:
			func_156(uParam0, 0, 41);
			break;
		
		case 42:
			func_156(uParam0, 0, 58);
			Global_16A1D[0 /*98*/] = 0;
			func_156(uParam0, 2, 59);
			Global_16A1D[2 /*98*/] = 0;
			break;
		
		case 41:
			func_156(uParam0, 1, 42);
			func_156(uParam0, 2, 42);
			break;
		
		case 15:
			func_156(uParam0, 0, 46);
			func_156(uParam0, 1, 47);
			break;
		
		case 16:
			func_156(uParam0, 0, 48);
			break;
		
		case 48:
			func_156(uParam0, 1, 50);
			func_156(uParam0, 2, 51);
			break;
		
		case 74:
			func_156(uParam0, 0, 52);
			func_156(uParam0, 1, 66);
			break;
		
		case 76:
			func_156(uParam0, 1, 53);
			func_156(uParam0, 2, 54);
			func_156(uParam0, 0, 62);
			break;
		
		case 75:
			func_156(uParam0, 0, 61);
			func_156(uParam0, 1, 31);
			break;
		
		case 69:
			func_156(uParam0, 1, 63);
			break;
		
		case 84:
			func_156(uParam0, 0, 68);
			func_156(uParam0, 2, 69);
			break;
		
		case 85:
			func_156(uParam0, 0, 64);
			func_156(uParam0, 2, 65);
			break;
		
		case 93:
			func_156(uParam0, 1, 38);
			func_156(uParam0, 2, 39);
			break;
		
		case 11:
			func_156(uParam0, 2, 55);
			break;
		
		case 77:
			func_156(uParam0, 1, 56);
			func_156(uParam0, 2, 57);
			break;
		
		default:
			break;
	}
}

int func_156(var uParam0, int iParam1, int iParam2)//Position - 0x7CC7
{
	int iVar0;
	struct<98> Var1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[0], 9))
	{
		iVar0 = Global_19E56.f_4849[iParam1];
		if (iVar0 == 11)
		{
			return 0;
		}
		if ((iVar0 == 8 || iVar0 == 9) || iVar0 == 10)
		{
			return 0;
		}
	}
	Global_19E56.f_4849[iParam1] = iParam2;
	uParam0->f_8E4[iParam1] = func_172();
	if (!func_171(iParam2, &(uParam0->f_8E8[iParam1 /*3*/]), &(uParam0->f_8F2[iParam1])))
	{
		return 0;
	}
	if (!func_170(uParam0->f_8E8[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_170(Global_16658[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_B = 12;
			Var1.f_1F = 49;
			Var1.f_51 = 2;
			if (func_157(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
			{
				Global_16A1D[iParam1 /*98*/] = { Var1 };
			}
		}
	}
	uParam0->f_8F6[iParam1] = 0;
	uParam0->f_8FA[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_904[iParam1] = 0;
	return 1;
}

int func_157(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x7DE7
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_54 = 255;
	uParam2->f_55 = 255;
	uParam2->f_56 = 255;
	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_16A1D[iParam0 /*98*/] };
			if (Global_16B44[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_16B4C[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, true))
				{
					if (Global_16B44[iParam0] == 1)
					{
						*uParam3 = { Global_16B4C[iParam0 /*3*/] - Global_19E56.f_933.f_21B.f_8E8[iParam0 /*3*/] };
						*uParam4 = (Global_16B56[iParam0] - Global_19E56.f_933.f_21B.f_8F2[iParam0]);
						if (SYSTEM::VMAG2(*uParam3) > (5f * 5f))
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return 0;
						}
					}
				}
				*uParam3 = { Global_16B4C[iParam0 /*3*/] - Global_19E56.f_933.f_21B.f_8E8[iParam0 /*3*/] };
				*uParam4 = (Global_16B56[iParam0] - Global_19E56.f_933.f_21B.f_8F2[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 6:
			*uParam2 = { Global_16A1D[iParam0 /*98*/] };
			if (Global_16B44[iParam0] != 2)
			{
				*uParam3 = { Global_16B4C[iParam0 /*3*/] - Global_19E56.f_933.f_21B.f_8E8[iParam0 /*3*/] };
				*uParam4 = (Global_16B56[iParam0] - Global_19E56.f_933.f_21B.f_8F2[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 7:
			*uParam2 = { Global_16A1D[iParam0 /*98*/] };
			if (Global_16B44[iParam0] != 2)
			{
				*uParam3 = { Global_16B4C[iParam0 /*3*/] - Global_19E56.f_933.f_21B.f_8E8[iParam0 /*3*/] };
				*uParam4 = (Global_16B56[iParam0] - Global_19E56.f_933.f_21B.f_8F2[iParam0]);
				if (SYSTEM::VMAG2(*uParam3) < (0.5f * 0.5f))
				{
					*uParam3 = { *uParam3 * Vector(1.5f, 1.5f, 1.5f) };
				}
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
			return 1;
			break;
		
		case 11:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return 1;
			break;
		
		case 8:
			uParam2->f_61 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(28.826f, -1277.56f, -90.961f) - Vector(28.3203f, -1324.195f, -90.0089f) };
			*uParam4 = (1.27f - 194.1887f);
			return 1;
			break;
		
		case 9:
			return func_157(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_157(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_159(iParam0, uParam2, 2);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 15:
			uParam2->f_61 = 0;
			*uParam2 = joaat("FROGGER");
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 55:
			uParam2->f_61 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 56:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 57:
			uParam2->f_61 = 0;
			*uParam2 = joaat("PENUMBRA");
			*uParam3 = { Vector(28.764f, -1431.464f, 66.028f) - Vector(28.2954f, -1351.52f, 37.5988f) };
			*uParam4 = (141.28f - 90.0339f);
			return 1;
			break;
		
		case 12:
			uParam2->f_61 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 16:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_157(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_159(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 22:
			uParam2->f_61 = 0;
			*uParam2 = joaat("PHANTOM");
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return 1;
			break;
		
		case 74:
			func_159(iParam0, uParam2, 1);
			uParam2->f_5B = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_159(iParam0, uParam2, 2);
			uParam2->f_5B = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return 1;
			break;
		
		case 25:
			uParam2->f_61 = 0;
			*uParam2 = joaat("BLISTA");
			*uParam3 = { Vector(29.17f, -1417.047f, 54.081f) - Vector(28.2915f, -1464.68f, 72.2278f) };
			*uParam4 = (0.72f - 156.8827f);
			return 1;
			break;
		
		case 27:
			uParam2->f_61 = 0;
			*uParam2 = joaat("SEMINOLE");
			*uParam3 = { Vector(24.9f, -938.8f, 792.3f) - Vector(24.2312f, -906f, 763f) };
			*uParam4 = (2.23f - 7.2736f);
			return 1;
			break;
		
		case 26:
			uParam2->f_61 = 0;
			*uParam2 = joaat("PEYOTE");
			*uParam3 = { Vector(28.701f, -1090.07f, 306.036f) - Vector(28.3684f, -1120.786f, 257.9167f) };
			*uParam4 = (-1f - 97.2736f);
			return 1;
			break;
		
		case 40:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 28:
			uParam2->f_61 = 0;
			*uParam2 = joaat("POLMAV");
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 234:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 42:
			uParam2->f_61 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(4.8006f, -2965.499f, 782.1644f) - Vector(4.0205f, -2975.341f, 798.4536f) };
			*uParam4 = (246.1684f - 90f);
			return 1;
			break;
		
		case 43:
			uParam2->f_61 = 0;
			*uParam2 = joaat("MESA");
			*uParam3 = { Vector(5.4446f, -2912.043f, 659.5297f) - Vector(5.0589f, -2916.479f, 709.0244f) };
			*uParam4 = (247.4806f - 355.326f);
			return 1;
			break;
		
		case 44:
			uParam2->f_61 = 0;
			*uParam2 = joaat("SADLER");
			*uParam3 = { Vector(5.1176f, -2936.843f, 656.9753f) - Vector(5.1337f, -2917.325f, 643.5248f) };
			*uParam4 = (253.776f - 334.1068f);
			return 1;
			break;
		
		case 45:
			uParam2->f_61 = 0;
			*uParam2 = joaat("MIXER");
			*uParam3 = { Vector(5.681f, -2769.795f, 593.033f) - Vector(5.0558f, -2819.085f, 594.4415f) };
			*uParam4 = (2.62f - 299.0519f);
			return 1;
			break;
		
		case 47:
			uParam2->f_61 = 0;
			*uParam2 = joaat("CAVALCADE");
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			StringCopy(&(uParam2->f_1B), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 49:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 51:
			uParam2->f_61 = 0;
			*uParam2 = joaat("STRETCH");
			*uParam3 = { Vector(28.1755f, -550.2679f, -1170.72f) - Vector(30.2361f, -526.9999f, -1257.5f) };
			*uParam4 = (310.4708f - 220.9554f);
			return 1;
			break;
		
		case 52:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 69:
			uParam2->f_61 = 0;
			*uParam2 = joaat("PRAIRIE");
			*uParam3 = { Vector(36.5734f, -85.1799f, -737.1358f) - Vector(54f, 111f, -852f) };
			*uParam4 = (64.1848f - 180f);
			return 1;
			break;
		
		case 65:
		case 54:
			uParam2->f_61 = 0;
			*uParam2 = joaat("FROGGER2");
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_B[0] = 1;
			uParam2->f_B[1] = 1;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 1;
			uParam2->f_B[4] = 1;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			uParam2->f_59 = 1;
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
			return 1;
			break;
		
		case 112:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_157(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 118:
			uParam2->f_61 = 0;
			*uParam2 = joaat("SCORCHER");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 119:
			if (func_157(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_157(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return 1;
			}
			break;
		
		case 173:
			uParam2->f_61 = 0;
			*uParam2 = joaat("CRUISER");
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 114:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_159(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_157(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_157(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_157(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_157(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_157(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return 1;
			break;
		
		case 133:
			uParam2->f_61 = 0;
			*uParam2 = joaat("TROPIC");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_B[0] = 0;
			uParam2->f_B[1] = 0;
			uParam2->f_B[2] = 1;
			uParam2->f_B[3] = 0;
			uParam2->f_B[4] = 0;
			uParam2->f_B[5] = 1;
			uParam2->f_B[6] = 1;
			uParam2->f_B[7] = 1;
			uParam2->f_B[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_157(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_157(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_157(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_157(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_157(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_159(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_157(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_157(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_157(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_157(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_157(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_157(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_159(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_157(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_157(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_158(iParam0, uParam2, 2);
			uParam2->f_5B = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_157(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return 1;
			break;
		
		case 215:
			uParam2->f_61 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { Vector(183.8081f, 578.5989f, 174.7651f) - Vector(176.086f, 551.7596f, 10.9694f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 196:
			uParam2->f_61 = 0;
			*uParam2 = joaat("TAXI");
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { Vector(29.4846f, -1457.915f, -17.4132f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam4 = (89.0026f - -1.5f);
			*uParam5 = { Vector(33.6125f, -1563.461f, -147.0307f) - Vector(31.1932f, -1441.182f, -14.8689f) };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 221:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_157(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_157(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_157(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_157(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_157(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_157(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_157(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_157(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_157(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_157(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_157(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_157(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("FAGGIO2");
				uParam2->f_5B = 0;
				return 1;
			}
			break;
		
		case 275:
			func_158(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_157(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_157(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 280:
			if (!Global_3)
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("TROPIC");
				uParam2->f_B[0] = 0;
				uParam2->f_B[1] = 0;
				uParam2->f_B[2] = 1;
				uParam2->f_B[3] = 0;
				uParam2->f_B[4] = 0;
				uParam2->f_B[5] = 1;
				uParam2->f_B[6] = 1;
				uParam2->f_B[7] = 1;
				uParam2->f_B[8] = 1;
			}
			else
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("DINGHY");
			}
			*uParam3 = { Vector(-0.6187f, -1440.421f, 2779.759f) - Vector(0.3109f, -1453.731f, 2789.845f) };
			uParam3->f_2 = (uParam3->f_2 + 0.5f);
			*uParam4 = (340.0835f - 4.44f);
			*uParam3 = { Vector(-0.7f, 16.55f, -3.3962f) + Vector(0.5f, 0.5f, -0.5f) };
			*uParam4 = (23.6441f + 90f);
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * Vector(1.1f, 1.1f, 1.1f) };
			return 1;
			break;
		
		case 247:
			uParam2->f_61 = 0;
			*uParam2 = joaat("SANCHEZ");
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = ((-114f - 43f) + 133f);
			return 1;
			break;
		
		case 288:
			uParam2->f_61 = 0;
			*uParam2 = joaat("SPEEDO");
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return 1;
			break;
		
		case 309:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return 1;
			break;
		
		case 255:
			uParam2->f_61 = 0;
			*uParam2 = joaat("ROMERO");
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return 1;
			break;
		
		case 265:
			uParam2->f_61 = 0;
			*uParam2 = joaat("BMX");
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return 1;
			break;
		
		case 285:
			uParam2->f_61 = 0;
			*uParam2 = joaat("GBURRITO");
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return 1;
			break;
		
		case 256:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.3025f, 6276.12f, -267.5488f) - Vector(30.5054f, 6250.9f, -301.4778f) };
			*uParam4 = (130.9896f - 10.247f);
			return 1;
			break;
		
		case 314:
			uParam2->f_61 = 0;
			*uParam2 = joaat("CUBAN800");
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return 1;
			break;
	}
	switch (iParam1)
	{
		case 110:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_159(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_158(int iParam0, var uParam1, int iParam2)//Position - 0xB44D
{
	int iVar0;
	
	uParam1->f_58 = 1;
	uParam1->f_54 = 255;
	uParam1->f_55 = 255;
	uParam1->f_56 = 255;
	uParam1->f_61 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("TAILGATER");
			if (Global_19E56.f_2361.f_63.f_3A[128] && !Global_19E56.f_2361.f_63.f_3A[131])
			{
				iVar0 = joaat("PREMIER");
			}
			switch (iVar0)
			{
				case joaat("TAILGATER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_B[0] = 1;
					StringCopy(&(uParam1->f_1B), "5MDS003", 16);
					break;
				
				case joaat("PREMIER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_1B), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("BODHI2");
			switch (iVar0)
			{
				case joaat("BODHI2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "BETTY 32", 16);
					if (Global_19E56.f_2361.f_63.f_3A[119])
					{
						uParam1->f_B[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("BUFFALO2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("BAGGER");
			}
			else if (Global_19E56.f_2361.f_63.f_3A[118])
			{
				iVar0 = joaat("BAGGER");
			}
			else
			{
				iVar0 = joaat("BUFFALO2");
			}
			switch (iVar0)
			{
				case joaat("BAGGER"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_1B), "FC88", 16);
					break;
				
				case joaat("BUFFALO2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_A = 1;
					StringCopy(&(uParam1->f_1B), "FC1988", 16);
					uParam1->f_B[0] = 1;
					uParam1->f_B[1] = 1;
					uParam1->f_B[2] = 1;
					uParam1->f_B[3] = 1;
					uParam1->f_B[4] = 1;
					uParam1->f_B[5] = 1;
					uParam1->f_B[6] = 1;
					uParam1->f_B[7] = 1;
					uParam1->f_B[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

int func_159(int iParam0, var uParam1, int iParam2)//Position - 0xB6A9
{
	if (Global_16A1D[iParam0 /*98*/] == 0)
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("BLIMP"))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (func_169(iParam0))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_16A1D[iParam0 /*98*/]))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_16A1D[iParam0 /*98*/]))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_16A1D[iParam0 /*98*/]))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_16A1D[iParam0 /*98*/]))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_16A1D[iParam0 /*98*/]))
		{
			func_158(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_16A1D[iParam0 /*98*/]))
		{
			func_158(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 1;
		}
	}
	if (!func_160(Global_16A1D[iParam0 /*98*/], 0))
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_158(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		if (Global_16A1D[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_16A1D[iParam0 /*98*/] };
			uParam1->f_5B = 0;
			return 0;
		}
	}
	else
	{
		func_158(iParam0, uParam1, 1);
		uParam1->f_5B = 1;
		if (Global_16A1D[iParam0 /*98*/] == *uParam1)
		{
			func_158(iParam0, uParam1, 1);
			uParam1->f_5B = 1;
			return 1;
		}
		func_158(iParam0, uParam1, 2);
		uParam1->f_5B = 2;
		if (Global_16A1D[iParam0 /*98*/] == *uParam1)
		{
			func_158(iParam0, uParam1, 2);
			uParam1->f_5B = 2;
			return 1;
		}
		*uParam1 = { Global_16A1D[iParam0 /*98*/] };
		uParam1->f_5B = 0;
		return 0;
	}
	func_158(iParam0, uParam1, iParam2);
	uParam1->f_5B = iParam2;
	return 1;
}

int func_160(int iParam0, bool bParam1)//Position - 0xB8E0
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!STREAMING::IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("BLIMP2")) || (iParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_168())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < FILE::GET_NUM_DLC_VEHICLES())
		{
			if (FILE::GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (FILE::_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("BLIMP"))
	{
		if ((((!func_167() && !func_166()) && !func_165()) && !func_164()) && !func_168())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_165())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_163(iParam0))
		{
			return 0;
		}
	}
	if (!func_161(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_161(int iParam0)//Position - 0xBA60
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_162())
	{
		return 1;
	}
	unk_0x0B2954993B98F51D(&iVar0, &uVar1);
	if (iVar0 == 4)
	{
		return 1;
	}
	switch (iParam0)
	{
		case joaat("DUNE4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("VOLTIC2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("RUINER2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("PHANTOM2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("TECHNICAL2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("BOXVILLE5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("WASTELANDER"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("BLAZER5"):
			StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64);
			break;
		
		default:
			return 1;
			break;
	}
	if (!unk_0x3B6DCE62F381F366(&cVar2))
	{
		return 0;
	}
	return 1;
}

int func_162()//Position - 0xBB2C
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_163(int iParam0)//Position - 0xBB43
{
	int iVar0;
	int iVar1;
	
	if (Global_263409)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = NETWORK::_GET_POSIX_TIME();
	if (iParam0 == joaat("BTYPE3"))
	{
		if ((!Global_40001.f_1958 && !Global_40001.f_31FD) && iVar1 < Global_40001.f_31FE)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("FACTION3"))
	{
		if (!Global_40001.f_370F && iVar1 < Global_40001.f_371B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIRGO3") || iParam0 == joaat("VIRGO2"))
	{
		if (!Global_40001.f_370B && iVar1 < Global_40001.f_3717)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SABREGT2"))
	{
		if (!Global_40001.f_370C && iVar1 < Global_40001.f_3718)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO5"))
	{
		if (!Global_40001.f_370D && iVar1 < Global_40001.f_3719)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MINIVAN2"))
	{
		if (!Global_40001.f_370E && iVar1 < Global_40001.f_371A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SLAMVAN3"))
	{
		if (!Global_40001.f_3710 && iVar1 < Global_40001.f_371C)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("PROTOTIPO"))
	{
		if (!Global_40001.f_3711 && iVar1 < Global_40001.f_3714)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEVEN70"))
	{
		if (!Global_40001.f_3712 && iVar1 < Global_40001.f_3715)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PFISTER811"))
	{
		if (!Global_40001.f_3713 && iVar1 < Global_40001.f_3716)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("BF400"))
	{
		if (!Global_40001.f_4157 && iVar1 < Global_40001.f_4133)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BRIOSO"))
	{
		if (!Global_40001.f_4152 && iVar1 < Global_40001.f_412E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIFFHANGER"))
	{
		if (!Global_40001.f_4156 && iVar1 < Global_40001.f_4132)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CONTENDER"))
	{
		if (!Global_40001.f_4155 && iVar1 < Global_40001.f_4131)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LE7B"))
	{
		if (!Global_40001.f_414F && iVar1 < Global_40001.f_412B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OMNIS"))
	{
		if (!Global_40001.f_4150 && iVar1 < Global_40001.f_412C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK"))
	{
		if (!Global_40001.f_4153 && iVar1 < Global_40001.f_412F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPHYTRUCK2"))
	{
		if (!Global_40001.f_4154 && iVar1 < Global_40001.f_4130)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TROPOS"))
	{
		if (!Global_40001.f_4151 && iVar1 < Global_40001.f_412D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GARGOYLE"))
	{
		if (!Global_40001.f_4159 && iVar1 < Global_40001.f_4135)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RALLYTRUCK"))
	{
		if (!Global_40001.f_415A && iVar1 < Global_40001.f_4136)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAMPA2"))
	{
		if (!Global_40001.f_414E && iVar1 < Global_40001.f_412A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRUS"))
	{
		if (!Global_40001.f_414D && iVar1 < Global_40001.f_4129)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHEAVA"))
	{
		if (!Global_40001.f_414C && iVar1 < Global_40001.f_4128)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("LYNX"))
	{
		if (!Global_40001.f_4158 && iVar1 < Global_40001.f_4134)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STALION2"))
	{
		if (!Global_40001.f_415B && iVar1 < Global_40001.f_4137)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GAUNTLET2"))
	{
		if (!Global_40001.f_415C && iVar1 < Global_40001.f_4138)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR2"))
	{
		if (!Global_40001.f_415D && iVar1 < Global_40001.f_4139)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BUFFALO3"))
	{
		if (!Global_40001.f_415E && iVar1 < Global_40001.f_413A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DEFILER"))
	{
		if (!Global_40001.f_41EF && iVar1 < Global_40001.f_4205)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTBLADE"))
	{
		if (!Global_40001.f_41F0 && iVar1 < Global_40001.f_4206)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEA"))
	{
		if (!Global_40001.f_41F1 && iVar1 < Global_40001.f_4207)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ESSKEY"))
	{
		if (!Global_40001.f_41F2 && iVar1 < Global_40001.f_4208)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AVARUS"))
	{
		if (!Global_40001.f_41F3 && iVar1 < Global_40001.f_4209)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ZOMBIEB"))
	{
		if (!Global_40001.f_41F4 && iVar1 < Global_40001.f_420A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAKUCHOU2"))
	{
		if (!Global_40001.f_41F6 && iVar1 < Global_40001.f_420B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VORTEX"))
	{
		if (!Global_40001.f_41F7 && iVar1 < Global_40001.f_420C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SHOTARO"))
	{
		if (!Global_40001.f_41F8 && iVar1 < Global_40001.f_420D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHIMERA"))
	{
		if (!Global_40001.f_41F9 && iVar1 < Global_40001.f_420E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPTOR"))
	{
		if (!Global_40001.f_41FA && iVar1 < Global_40001.f_420F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DAEMON2"))
	{
		if (!Global_40001.f_41FB && iVar1 < Global_40001.f_4210)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER4"))
	{
		if (!Global_40001.f_41FC && iVar1 < Global_40001.f_4211)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORNADO6"))
	{
		if (!Global_40001.f_4202 && iVar1 < Global_40001.f_4218)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOUGA2"))
	{
		if (!Global_40001.f_41FF && iVar1 < Global_40001.f_4214)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WOLFSBANE"))
	{
		if (!Global_40001.f_4200 && iVar1 < Global_40001.f_4215)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO3"))
	{
		if (!Global_40001.f_4201 && iVar1 < Global_40001.f_4216)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGGIO"))
	{
		if (!Global_40001.f_41F5 && iVar1 < Global_40001.f_4217)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BAGGER"))
	{
		if (!Global_40001.f_4203 && iVar1 < Global_40001.f_4219)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SANCTUS"))
	{
		if (!Global_40001.f_41FD && iVar1 < Global_40001.f_4212)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MANCHEZ"))
	{
		if (!Global_40001.f_41FE && iVar1 < Global_40001.f_4213)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RATBIKE"))
	{
		if (!Global_40001.f_4204 && iVar1 < Global_40001.f_421A)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("VOLTIC2"))
	{
		if (!Global_40001.f_4860 && iVar1 < Global_40001.f_48C1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUINER2"))
	{
		if (!Global_40001.f_4861 && iVar1 < Global_40001.f_48C2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE4"))
	{
		if (!Global_40001.f_4862 && iVar1 < Global_40001.f_48C3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DUNE5"))
	{
		if (!Global_40001.f_4863 && iVar1 < Global_40001.f_48C4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PHANTOM2"))
	{
		if (!Global_40001.f_4864 && iVar1 < Global_40001.f_48C5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TECHNICAL2"))
	{
		if (!Global_40001.f_4865 && iVar1 < Global_40001.f_48C6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOXVILLE5"))
	{
		if (!Global_40001.f_4866 && iVar1 < Global_40001.f_48C7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("WASTELANDER"))
	{
		if (!Global_40001.f_4867 && iVar1 < Global_40001.f_48C8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLAZER5"))
	{
		if (!Global_40001.f_4868 && iVar1 < Global_40001.f_48C9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET2"))
	{
		if (!Global_40001.f_4869 && iVar1 < Global_40001.f_48CA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET3"))
	{
		if (!Global_40001.f_486A && iVar1 < Global_40001.f_48CB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS"))
	{
		if (!Global_40001.f_486B && iVar1 < Global_40001.f_48CC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DIABLOUS2"))
	{
		if (!Global_40001.f_486C && iVar1 < Global_40001.f_48CD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY"))
	{
		if (!Global_40001.f_486D && iVar1 < Global_40001.f_48CE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELEGY2"))
	{
		if (!Global_40001.f_486E && iVar1 < Global_40001.f_48CF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR"))
	{
		if (!Global_40001.f_486F && iVar1 < Global_40001.f_48D0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FCR2"))
	{
		if (!Global_40001.f_4870 && iVar1 < Global_40001.f_48D1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB"))
	{
		if (!Global_40001.f_4871 && iVar1 < Global_40001.f_48D2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTB2"))
	{
		if (!Global_40001.f_4872 && iVar1 < Global_40001.f_48D3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO"))
	{
		if (!Global_40001.f_4873 && iVar1 < Global_40001.f_48D4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NERO2"))
	{
		if (!Global_40001.f_4874 && iVar1 < Global_40001.f_48D5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PENETRATOR"))
	{
		if (!Global_40001.f_4875 && iVar1 < Global_40001.f_48D6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER"))
	{
		if (!Global_40001.f_4876 && iVar1 < Global_40001.f_48D7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SPECTER2"))
	{
		if (!Global_40001.f_4877 && iVar1 < Global_40001.f_48D8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEMPESTA"))
	{
		if (!Global_40001.f_4878 && iVar1 < Global_40001.f_48D9)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GP1"))
	{
		if (!Global_40001.f_4C98 && iVar1 < Global_40001.f_4C94)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("INFERNUS2"))
	{
		if (!Global_40001.f_4C99 && iVar1 < Global_40001.f_4C95)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RUSTON"))
	{
		if (!Global_40001.f_4C9A && iVar1 < Global_40001.f_4C96)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TURISMO2"))
	{
		if (!Global_40001.f_4C9B && iVar1 < Global_40001.f_4C97)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("XA21"))
	{
		if (!Global_40001.f_5007 && iVar1 < Global_40001.f_500F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEETAH2"))
	{
		if (!Global_40001.f_5008 && iVar1 < Global_40001.f_5010)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TORERO"))
	{
		if (!Global_40001.f_5009 && iVar1 < Global_40001.f_5011)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAGNER"))
	{
		if (!Global_40001.f_500A && iVar1 < Global_40001.f_5012)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ARDENT"))
	{
		if (!Global_40001.f_500B && iVar1 < Global_40001.f_5013)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NIGHTSHARK"))
	{
		if (!Global_40001.f_500C && iVar1 < Global_40001.f_5014)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MICROLIGHT"))
	{
		if (!Global_40001.f_5310 && iVar1 < Global_40001.f_5324)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOGUL"))
	{
		if (!Global_40001.f_531C && iVar1 < Global_40001.f_5330)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ROGUE"))
	{
		if (!Global_40001.f_5313 && iVar1 < Global_40001.f_5327)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STARLING"))
	{
		if (!Global_40001.f_531D && iVar1 < Global_40001.f_5331)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEABREEZE"))
	{
		if (!Global_40001.f_5311 && iVar1 < Global_40001.f_5325)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULA"))
	{
		if (!Global_40001.f_5321 && iVar1 < Global_40001.f_5335)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PYRO"))
	{
		if (!Global_40001.f_531F && iVar1 < Global_40001.f_5333)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MOLOTOK"))
	{
		if (!Global_40001.f_5320 && iVar1 < Global_40001.f_5334)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("NOKOTA"))
	{
		if (!Global_40001.f_531B && iVar1 < Global_40001.f_532F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BOMBUSHKA"))
	{
		if (!Global_40001.f_5322 && iVar1 < Global_40001.f_5336)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUNTER"))
	{
		if (!Global_40001.f_531E && iVar1 < Global_40001.f_5332)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HAVOK"))
	{
		if (!Global_40001.f_531A && iVar1 < Global_40001.f_532E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOWARD"))
	{
		if (!Global_40001.f_5312 && iVar1 < Global_40001.f_5326)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ALPHAZ1"))
	{
		if (!Global_40001.f_5314 && iVar1 < Global_40001.f_5328)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CYCLONE"))
	{
		if (!Global_40001.f_5315 && iVar1 < Global_40001.f_5329)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISIONE"))
	{
		if (!Global_40001.f_5316 && iVar1 < Global_40001.f_532A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VIGILANTE"))
	{
		if (!Global_40001.f_5317 && iVar1 < Global_40001.f_532B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RETINUE"))
	{
		if (!Global_40001.f_5318 && iVar1 < Global_40001.f_532C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAPIDGT3"))
	{
		if (!Global_40001.f_5319 && iVar1 < Global_40001.f_532D)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("DELUXO"))
	{
		if (!Global_40001.f_56D1 && iVar1 < Global_40001.f_56ED)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STROMBERG"))
	{
		if (!Global_40001.f_56D2 && iVar1 < Global_40001.f_56EE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIOT2"))
	{
		if (!Global_40001.f_56D3 && iVar1 < Global_40001.f_56EF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHERNOBOG"))
	{
		if (!Global_40001.f_56D4 && iVar1 < Global_40001.f_56F0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KHANJALI"))
	{
		if (!Global_40001.f_56D5 && iVar1 < Global_40001.f_56F1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AKULA"))
	{
		if (!Global_40001.f_56D6 && iVar1 < Global_40001.f_56F2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("THRUSTER"))
	{
		if (!Global_40001.f_56D7 && iVar1 < Global_40001.f_56F3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BARRAGE"))
	{
		if (!Global_40001.f_56D8 && iVar1 < Global_40001.f_56F4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VOLATOL"))
	{
		if (!Global_40001.f_56D9 && iVar1 < Global_40001.f_56F5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET4"))
	{
		if (!Global_40001.f_56DA && iVar1 < Global_40001.f_56F6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 2445973230)
	{
		if (!Global_40001.f_56DB && iVar1 < Global_40001.f_56F7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1741861769)
	{
		if (!Global_40001.f_56DC && iVar1 < Global_40001.f_56F8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SENTINEL3"))
	{
		if (!Global_40001.f_56DD && iVar1 < Global_40001.f_56F9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("YOSEMITE"))
	{
		if (!Global_40001.f_56DE && iVar1 < Global_40001.f_56FA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SC1"))
	{
		if (!Global_40001.f_56DF && iVar1 < Global_40001.f_56FB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("AUTARCH"))
	{
		if (!Global_40001.f_56E0 && iVar1 < Global_40001.f_56FC)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("GT500"))
	{
		if (!Global_40001.f_56E1 && iVar1 < Global_40001.f_56FD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HUSTLER"))
	{
		if (!Global_40001.f_56E2 && iVar1 < Global_40001.f_56FE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("REVOLTER"))
	{
		if (!Global_40001.f_56E3 && iVar1 < Global_40001.f_56FF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PARIAH"))
	{
		if (!Global_40001.f_56E4 && iVar1 < Global_40001.f_5700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RAIDEN"))
	{
		if (!Global_40001.f_56E5 && iVar1 < Global_40001.f_5701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SAVESTRA"))
	{
		if (!Global_40001.f_56E6 && iVar1 < Global_40001.f_5702)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RIATA"))
	{
		if (!Global_40001.f_56E7 && iVar1 < Global_40001.f_5703)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HERMES"))
	{
		if (!Global_40001.f_56E8 && iVar1 < Global_40001.f_5704)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("COMET5"))
	{
		if (!Global_40001.f_56E9 && iVar1 < Global_40001.f_5705)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("Z190"))
	{
		if (!Global_40001.f_56EA && iVar1 < Global_40001.f_5706)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VISERIS"))
	{
		if (!Global_40001.f_56EB && iVar1 < Global_40001.f_5707)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("KAMACHO"))
	{
		if (!Global_40001.f_56EC && iVar1 < Global_40001.f_5708)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("GB200"))
	{
		if (!Global_40001.f_5B88 && iVar1 < Global_40001.f_5B98)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FAGALOA"))
	{
		if (!Global_40001.f_5B89 && iVar1 < Global_40001.f_5B99)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ELLIE"))
	{
		if (!Global_40001.f_5B8D && iVar1 < Global_40001.f_5B9D)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ISSI3"))
	{
		if (!Global_40001.f_5B90 && iVar1 < Global_40001.f_5BA0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MICHELLI"))
	{
		if (!Global_40001.f_5B95 && iVar1 < Global_40001.f_5BA5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FLASHGT"))
	{
		if (!Global_40001.f_5B8F && iVar1 < Global_40001.f_5B9F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("HOTRING"))
	{
		if (!Global_40001.f_5B87 && iVar1 < Global_40001.f_5B97)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TEZERACT"))
	{
		if (!Global_40001.f_5B8E && iVar1 < Global_40001.f_5B9E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TYRANT"))
	{
		if (!Global_40001.f_5B94 && iVar1 < Global_40001.f_5BA4)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DOMINATOR3"))
	{
		if (!Global_40001.f_5B93 && iVar1 < Global_40001.f_5BA3)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TAIPAN"))
	{
		if (!Global_40001.f_5B8A && iVar1 < Global_40001.f_5B9A)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ENTITY2"))
	{
		if (!Global_40001.f_5B8C && iVar1 < Global_40001.f_5B9C)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("JESTER3"))
	{
		if (!Global_40001.f_5B96 && iVar1 < Global_40001.f_5BA6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CHEBUREK"))
	{
		if (!Global_40001.f_5B92 && iVar1 < Global_40001.f_5BA2)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CARACARA"))
	{
		if (!Global_40001.f_5B8B && iVar1 < Global_40001.f_5B9B)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SEASPARROW"))
	{
		if (!Global_40001.f_5B91 && iVar1 < Global_40001.f_5BA1)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("TERBYTE"))
	{
		if (!Global_40001.f_5BE2 && iVar1 < Global_40001.f_5BD5)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PBUS2"))
	{
		if (!Global_40001.f_5BE3 && iVar1 < Global_40001.f_5BD6)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MULE4"))
	{
		if (!Global_40001.f_5BE8 && iVar1 < Global_40001.f_5BDB)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("POUNDER2"))
	{
		if (!Global_40001.f_5BE7 && iVar1 < Global_40001.f_5BDA)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SWINGER"))
	{
		if (!Global_40001.f_5BE5 && iVar1 < Global_40001.f_5BD8)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("MENACER"))
	{
		if (!Global_40001.f_5BEB && iVar1 < Global_40001.f_5BDE)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCRAMJET"))
	{
		if (!Global_40001.f_5BED && iVar1 < Global_40001.f_5BE0)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STRIKEFORCE"))
	{
		if (!Global_40001.f_5BEE && iVar1 < Global_40001.f_5BE1)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("OPPRESSOR2"))
	{
		if (!Global_40001.f_5BEC && iVar1 < Global_40001.f_5BDF)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("PATRIOT2"))
	{
		if (!Global_40001.f_5BE4 && iVar1 < Global_40001.f_5BD7)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("STAFFORD"))
	{
		if (!Global_40001.f_5BE6 && iVar1 < Global_40001.f_5BD9)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("FREECRAWLER"))
	{
		if (!Global_40001.f_5BEA && iVar1 < Global_40001.f_5BDD)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("BLIMP3"))
	{
		if (!Global_40001.f_5BE9 && iVar1 < Global_40001.f_5BDC)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("MONSTER3"))
	{
	}
	else if (iParam0 == joaat("CERBERUS"))
	{
	}
	else if (iParam0 == joaat("CERBERUS2"))
	{
	}
	else if (iParam0 == joaat("CERBERUS3"))
	{
	}
	else if (iParam0 == joaat("BRUTUS"))
	{
	}
	else if (iParam0 == joaat("BRUTUS2"))
	{
	}
	else if (iParam0 == joaat("BRUTUS3"))
	{
	}
	else if (iParam0 == joaat("SCARAB"))
	{
	}
	else if (iParam0 == joaat("SCARAB2"))
	{
	}
	else if (iParam0 == joaat("SCARAB3"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (iParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (iParam0 == joaat("ZR380"))
	{
	}
	else if (iParam0 == joaat("ZR3802"))
	{
	}
	else if (iParam0 == joaat("ZR3803"))
	{
	}
	else if (iParam0 == joaat("IMPALER"))
	{
	}
	else if (iParam0 == joaat("DEVESTE"))
	{
		if (!Global_40001.f_641C && iVar1 < Global_40001.f_641E)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TOROS"))
	{
		if (!Global_40001.f_606B && iVar1 < Global_40001.f_6064)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("CLIQUE"))
	{
		if (!Global_40001.f_606C && iVar1 < Global_40001.f_6065)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ITALIGTO"))
	{
		if (!Global_40001.f_606D && iVar1 < Global_40001.f_6066)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("DEVIANT"))
	{
		if (!Global_40001.f_606E && iVar1 < Global_40001.f_6067)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("VAMOS"))
	{
		if (!Global_40001.f_641D && iVar1 < Global_40001.f_641F)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("TULIP"))
	{
		if (!Global_40001.f_606F && iVar1 < Global_40001.f_6068)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_40001.f_6070 && iVar1 < Global_40001.f_6069)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("RCBANDITO"))
	{
		if (!Global_40001.f_6071 && iVar1 < Global_40001.f_606A)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_164()//Position - 0xD83E
{
	return 0;
}

int func_165()//Position - 0xD847
{
	return 1;
}

int func_166()//Position - 0xD850
{
	return 1;
}

int func_167()//Position - 0xD859
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_168()//Position - 0xD872
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, 4294967295);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_19, 2);
				MISC::SET_BIT(&Global_19, 4);
				MISC::SET_BIT(&Global_19, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, 0);
					STATS::_0xDAC073C7901F9E15(iVar0);
				}
				return 1;
			}
		}
	}
	if (Global_2357D == 2)
	{
		return 1;
	}
	else if (Global_2357D == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_169(int iParam0)//Position - 0xD92D
{
	if (Global_16A1D[iParam0 /*98*/] == joaat("BLIMP") || Global_16A1D[iParam0 /*98*/] == joaat("BLIMP2"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("SUBMERSIBLE") || Global_16A1D[iParam0 /*98*/] == joaat("SUBMERSIBLE2"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("FREIGHT"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("PACKER"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("ASEA2"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("BURRITO2") || Global_16A1D[iParam0 /*98*/] == joaat("FBI2"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("ENTITYXF") && !Global_19E56.f_2361.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("CHEETAH") && !Global_19E56.f_2361.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("POLICEB") && !Global_19E56.f_2361.f_14A[8 /*6*/])
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("ZTYPE") && !Global_19E56.f_2361.f_14A[9 /*6*/])
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("POLMAV") && !Global_19E56.f_2361.f_14A[9 /*6*/])
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("JB700") && !Global_19E56.f_2361.f_14A[10 /*6*/])
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("MONROE") && !Global_19E56.f_2361.f_14A[11 /*6*/])
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("FIRETRUK"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("HANDLER"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("MONROE"))
	{
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("PHANTOM"))
	{
		return 1;
	}
	if (((Global_16A1D[iParam0 /*98*/] == joaat("GAUNTLET") && !Global_19E56.f_2361.f_14A[80 /*6*/]) && !Global_19E56.f_2361.f_14A[81 /*6*/]) && !Global_19E56.f_2361.f_14A[82 /*6*/])
	{
		return 1;
	}
	return 0;
}

bool func_170(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xDBAD
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_171(int iParam0, var uParam1, float fParam2)//Position - 0xDBF4
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*fParam2 = 111f;
			return 1;
			break;
		
		case 8:
			*uParam1 = { -90.0089f, -1324.195f, 28.3203f };
			*fParam2 = 194.1887f;
			return 1;
			break;
		
		case 9:
			return func_171(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_171(8, uParam1, fParam2);
			break;
		
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*fParam2 = 201.6328f;
			return 1;
			break;
		
		case 14:
			*uParam1 = { 1432.34f, -1887.383f, 70.5768f };
			*fParam2 = 350.0509f;
			return 1;
			break;
		
		case 15:
			*uParam1 = { 1666.204f, 1967.25f, 143.3213f };
			*fParam2 = 0.7896f;
			return 1;
			break;
		
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*fParam2 = 42f;
			return 1;
			break;
		
		case 16:
			*uParam1 = { 135.055f, -1759.64f, 27.8957f };
			*fParam2 = -129f;
			return 1;
			break;
		
		case 17:
			*uParam1 = { 687.6992f, -1744.03f, 28.3624f };
			*fParam2 = 267.1409f;
			return 1;
			break;
		
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*fParam2 = 340.0526f;
			return 1;
			break;
		
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*fParam2 = 22.9566f;
			return 1;
			break;
		
		case 20:
			*uParam1 = { 1555.958f, 953.6136f, 77.2063f };
			*fParam2 = 152.8118f;
			return 1;
			break;
		
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*fParam2 = (250.4535f - 360f);
			return 1;
			break;
		
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*fParam2 = 119.603f;
			return 1;
			break;
		
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*fParam2 = 168f;
			return 1;
			break;
		
		case 24:
			*uParam1 = { (744.79f + 0.0186f), (-465.86f - 0.0114f), 36.6399f };
			*fParam2 = 51.7279f;
			return 1;
			break;
		
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*fParam2 = 151.2504f;
			return 1;
			break;
		
		case 25:
			*uParam1 = { 72.2278f, -1464.68f, 28.2915f };
			*fParam2 = 156.8827f;
			return 1;
			break;
		
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*fParam2 = 7.2736f;
			return 1;
			break;
		
		case 26:
			*uParam1 = { 257.9167f, -1120.786f, 28.3684f };
			*fParam2 = 97.2736f;
			return 1;
			break;
		
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*fParam2 = 4f;
			return 1;
			break;
		
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*fParam2 = 162.693f;
			return 1;
			break;
		
		case 59:
			*uParam1 = { -1771.802f, 794.4316f, 138.4211f };
			*fParam2 = 128.9946f;
			return 1;
			break;
		
		case 60:
			*uParam1 = { 1495.595f, -1848.821f, 70.2075f };
			*fParam2 = 32.2721f;
			return 1;
			break;
		
		case 38:
			*uParam1 = { 2897.554f, 4032.241f, 50.1419f };
			*fParam2 = 192.8091f;
			return 1;
			break;
		
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*fParam2 = 32f;
			return 1;
			break;
		
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*fParam2 = -3.7534f;
			return 1;
			break;
		
		case 42:
			*uParam1 = { Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f) };
			*fParam2 = 90f;
			return 1;
			break;
		
		case 43:
			*uParam1 = { 709.0244f, -2916.479f, 5.0589f };
			*fParam2 = 355.326f;
			return 1;
			break;
		
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*fParam2 = 334.1068f;
			return 1;
			break;
		
		case 45:
			*uParam1 = { 595.2742f, -2819.183f, 5.0559f };
			*fParam2 = 46.8853f;
			return 1;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*fParam2 = 165.9421f;
			return 1;
			break;
		
		case 49:
			*uParam1 = { 3321.537f, 4975.455f, 25.9097f };
			*fParam2 = 221.228f;
			return 1;
			break;
		
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*fParam2 = (42f + 180f);
			return 1;
			break;
		
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*fParam2 = 98.9764f;
			return 1;
			break;
		
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*fParam2 = 220.9554f;
			return 1;
			break;
		
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*fParam2 = 83.9922f;
			return 1;
			break;
		
		case 66:
			*uParam1 = { 262.5499f, -2540.15f, 4.8433f };
			*fParam2 = -64.1366f;
			return 1;
			break;
		
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*fParam2 = 127.7547f;
			return 1;
			break;
		
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*fParam2 = -63f;
			return 1;
			break;
		
		case 57:
			*uParam1 = { 37.5988f, -1351.52f, 28.2954f };
			*fParam2 = 90.0339f;
			return 1;
			break;
		
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*fParam2 = 84.6231f;
			return 1;
			break;
		
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*fParam2 = 99.6049f;
			return 1;
			break;
		
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*fParam2 = 120f;
			return 1;
			break;
		
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*fParam2 = 211.8223f;
			return 1;
			break;
		
		case 64:
			*uParam1 = { 2091.258f, 4714.852f, 40.1936f };
			*fParam2 = 136.0867f;
			return 1;
			break;
		
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*fParam2 = 27.0648f;
			return 1;
			break;
		
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*fParam2 = 0f;
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

var func_172()//Position - 0xE563
{
	var uVar0;
	
	func_182(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_181(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_180(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_175(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_174(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_173(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_173(var uParam0, int iParam1)//Position - 0xE5A9
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 = (*uParam0 || 2147483648);
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - (*uParam0 && 2147483648));
	}
}

void func_174(var uParam0, int iParam1)//Position - 0xE62F
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_175(var uParam0, int iParam1)//Position - 0xE662
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_179(*uParam0);
	iVar1 = func_177(*uParam0);
	if (iParam1 < 1 || iParam1 > func_176(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_176(int iParam0, int iParam1)//Position - 0xE6B3
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

var func_177(int iParam0)//Position - 0xE755
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_178(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_178(bool bParam0, int iParam1, int iParam2)//Position - 0xE77A
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_179(var uParam0)//Position - 0xE791
{
	return uParam0 & 15;
}

void func_180(var uParam0, int iParam1)//Position - 0xE79E
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_181(var uParam0, int iParam1)//Position - 0xE7D8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_182(var uParam0, int iParam1)//Position - 0xE813
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_183(var uParam0, int iParam1)//Position - 0xE84F
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam1 == 94)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = Global_19E56.f_4849[iVar0];
		if ((((iVar1 == 8 || iVar1 == 9) || iVar1 == 10) || (((iVar1 == 11 || iVar1 == 34) || iVar1 == 72) || iVar1 == 73)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[0], 9))
		{
		}
		else
		{
			vVar2 = { 0f, 0f, 0f };
			fVar3 = 0f;
			if (!func_171(Global_19E56.f_4849[iVar0], &vVar2, &fVar3))
			{
				Global_19E56.f_4849[iVar0] = 318;
				func_184(&(uParam0->f_8E4[iVar0]));
				uParam0->f_8E8[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_8F2[iVar0] = 0f;
				uParam0->f_8F6[iVar0] = 0;
				uParam0->f_8FA[iVar0 /*3*/] = { 0f, 0f, 0f };
				uParam0->f_904[iVar0] = 0;
				Global_1625D[iVar0 /*29*/] = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_9 = 0f;
				Global_1625D[iVar0 /*29*/].f_C = 0f;
				Global_1625D[iVar0 /*29*/].f_3 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_A = 0f;
				Global_1625D[iVar0 /*29*/].f_D = 0f;
				Global_1625D[iVar0 /*29*/].f_6 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_B = 0f;
				Global_1625D[iVar0 /*29*/].f_E = 0f;
				Global_1625D[iVar0 /*29*/].f_11 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_1A = 0f;
				Global_1625D[iVar0 /*29*/].f_14 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_1B = 0f;
				Global_1625D[iVar0 /*29*/].f_17 = { 0f, 0f, 0f };
				Global_1625D[iVar0 /*29*/].f_1C = 0f;
			}
		}
		iVar0++;
	}
}

void func_184(var uParam0)//Position - 0xEA18
{
	*uParam0 = 4294967281;
}

int func_185()//Position - 0xEA26
{
	if (func_111(0))
	{
		return 0;
	}
	if (Global_16C57.f_8)
	{
		if (Global_16C57.f_A > 0)
		{
			return 0;
		}
	}
	else if (Global_16C57.f_A > 1)
	{
		return 0;
	}
	Global_16C57.f_A++;
	return 1;
}

void func_186(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xEA71
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_194(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_74())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_193(1, iParam3, iParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_194(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_193(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_191(CAM::_0xDC9DA9E8789F5246())) && !func_188(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_187()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_191(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_187()//Position - 0xEB9A
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

bool func_188(int iParam0, int iParam1)//Position - 0xEBB7
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_189(4294967295, 0) == 8;
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

int func_189(int iParam0, bool bParam1)//Position - 0xEC02
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_190();
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

int func_190()//Position - 0xEC43
{
	return Global_1407E0;
}

int func_191(int iParam0)//Position - 0xEC4F
{
	if (func_188(iParam0, 0))
	{
		return 1;
	}
	if (func_192())
	{
		if (iParam0 == CAM::_0xDC9DA9E8789F5246())
		{
			return 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_C3, 2))
	{
		return 1;
	}
	return 0;
}

bool func_192()//Position - 0xEC91
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_193(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xECA2
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && iParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_194(int iParam0)//Position - 0xECD5
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 13);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 13);
	}
}

void func_195()//Position - 0xECF8
{
	INTERIOR::_HIDE_MAP_OBJECT_THIS_FRAME(2547114342);
	if (func_222(16))
	{
		if (!func_111(0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 10))
			{
				CUTSCENE::REQUEST_CUTSCENE("JH_1_MCS_4_P1_ALT1", 8);
				func_203();
				func_108(0, 0, 1);
				iLocal_249 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, 0, 1, 1, 1);
				iLocal_254 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Local_46.f_1.f_18A, Local_46.f_1.f_18D * Vector(1.5f, 1.5f, 1.5f), 0f, 0, 7);
				PED::SET_PED_NON_CREATION_AREA(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D);
				PATHFIND::SET_PED_PATHS_IN_AREA(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, false, 0);
				MISC::SET_BIT(&iLocal_41, 10);
			}
			else if (CUTSCENE::_0xB56BBBCC2955D9CB())
			{
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
			}
			if (func_150(86))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 1))
				{
					if (func_144(0))
					{
						if (func_200(&iLocal_45, 0, 0, 0, 0) == 1)
						{
							func_193(1, 0, 1, 0);
							if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
								HUD::_0x14621BB1DF14E2B2(0);
							}
							MISC::SET_BIT(&iLocal_41, 1);
							MISC::SET_BIT(&iLocal_41, 2);
						}
					}
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 2))
			{
				switch (iLocal_42)
				{
					case 0:
						if (CAM::DOES_CAM_EXIST(iLocal_250))
						{
							CAM::DESTROY_CAM(iLocal_250, 0);
						}
						if (CAM::DOES_CAM_EXIST(iLocal_251))
						{
							CAM::DESTROY_CAM(iLocal_251, 0);
						}
						iLocal_250 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 724.4682f, -992.0684f, 24.25137f, 5.259225f, 0.000715f, 25.88918f, 44.13121f, 0, 2);
						iLocal_251 = CAM::CREATE_CAMERA_WITH_PARAMS(26379945, 724.3727f, -991.3205f, 24.43304f, 31.49925f, 0.000715f, -4.206256f, 44.13121f, 0, 2);
						if (ENTITY::DOES_ENTITY_EXIST(Global_15EE0.f_9[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_15EE0.f_9[0], 0))
							{
								iLocal_245 = Global_15EE0.f_9[0];
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_245, false, 1);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(Global_15EE0[0]))
						{
							if (!ENTITY::IS_ENTITY_DEAD(Global_15EE0[0], 0))
							{
								iLocal_247 = Global_15EE0[0];
							}
						}
						iLocal_42++;
						break;
					
					case 1:
						func_186(1, 1, 0, 0, 0);
						HUD::DISPLAY_RADAR(false);
						unk_0x59B038076F830627(false);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_247))
						{
							if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_247, 0))
							{
								CAM::POINT_CAM_AT_ENTITY(iLocal_250, iLocal_247, 0f, 0f, 0f, 1);
							}
						}
						CAM::SET_CAM_ACTIVE_WITH_INTERP(iLocal_251, iLocal_250, 5000, 1, 1);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
						iLocal_43 = MISC::GET_GAME_TIMER();
						iLocal_42++;
						break;
					
					case 2:
						if ((MISC::GET_GAME_TIMER() - iLocal_43) > 1200)
						{
							if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
								{
									if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_247, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iLocal_247, 0))
										{
											BRAIN::OPEN_SEQUENCE_TASK(&iLocal_252);
											BRAIN::TASK_LEAVE_VEHICLE(0, iLocal_247, 0);
											BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											CUTSCENE::_0x8D9DF6ECA8768583(iLocal_252);
											NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
											BRAIN::TASK_PERFORM_SEQUENCE(AUDIO::_0x0626A247D2405330(), iLocal_252);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 3:
						if ((MISC::GET_GAME_TIMER() - iLocal_43) > 2400)
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_245, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_247))
								{
									if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_247, 0))
									{
										if (PED::IS_PED_IN_VEHICLE(iLocal_245, iLocal_247, 0))
										{
											BRAIN::OPEN_SEQUENCE_TASK(&iLocal_253);
											BRAIN::TASK_LEAVE_VEHICLE(0, iLocal_247, 0);
											BRAIN::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 718.1777f, -976.126f, 23.9148f, 1f, 20000, 1048576000, 0, 1193033728);
											CUTSCENE::_0x8D9DF6ECA8768583(iLocal_253);
											NETWORK::_0x5E3AA4CA2B6FB0EE(iLocal_245);
											BRAIN::TASK_PERFORM_SEQUENCE(iLocal_245, iLocal_253);
										}
									}
								}
							}
							iLocal_42++;
						}
						break;
					
					case 4:
						if ((MISC::GET_GAME_TIMER() - iLocal_43) > 5000)
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 2);
						}
						break;
					}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 2))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						iLocal_246 = AUDIO::_0x0626A247D2405330();
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_246, 0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_246, "Michael", 0, joaat("player_zero"), 0);
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_245, 0))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_245, "Lester", 2, joaat("ig_lestercrest"), 0);
						}
						MISC::SET_BIT(&iLocal_41, 9);
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_248, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
						MISC::SET_BIT(&iLocal_41, 8);
						func_199(&(Local_46.f_1E4), 0, 0, "MICHAEL", 1, 1);
						func_199(&(Local_46.f_1E4), 3, 0, "LESTER", 1, 1);
						func_72(1);
						iLocal_43 = MISC::GET_GAME_TIMER();
						CUTSCENE::START_CUTSCENE(2048);
					}
					else
					{
						func_114();
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 17))
						{
							if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
							{
								CAM::DO_SCREEN_FADE_IN(800);
							}
							MISC::SET_BIT(&iLocal_41, 17);
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							MISC::SET_BIT(&iLocal_41, 16);
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 16))
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 12))
								{
									func_108(0, 1, 1);
									MISC::SET_BIT(&iLocal_41, 12);
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 13))
								{
									func_108(0, 2, 1);
									MISC::SET_BIT(&iLocal_41, 13);
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 14))
								{
									func_108(0, 3, 1);
									MISC::SET_BIT(&iLocal_41, 14);
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 15))
								{
									func_108(0, 4, 1);
									MISC::SET_BIT(&iLocal_41, 15);
								}
								func_197(&Local_46);
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 0))
								{
									func_196();
									MISC::SET_BIT(&iLocal_41, 0);
								}
							}
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 5))
						{
							if (CAM::DOES_CAM_EXIST(iLocal_250))
							{
								CAM::SET_CAM_ACTIVE(iLocal_250, false);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_251))
							{
								CAM::SET_CAM_ACTIVE(iLocal_251, false);
							}
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
							if (CAM::DOES_CAM_EXIST(iLocal_251))
							{
								CAM::DESTROY_CAM(iLocal_251, 0);
							}
							if (CAM::DOES_CAM_EXIST(iLocal_251))
							{
								CAM::DESTROY_CAM(iLocal_251, 0);
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_245))
							{
								PED::DELETE_PED(&iLocal_245);
							}
							MISC::SET_BIT(&iLocal_41, 5);
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 6))
						{
							if (iLocal_44 > 0)
							{
								MISC::SET_BIT(&iLocal_41, 6);
							}
						}
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 12))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_43) > 14058)
							{
								func_108(0, 1, 1);
								MISC::SET_BIT(&iLocal_41, 12);
							}
						}
						else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 13))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_43) > 22887)
							{
								func_108(0, 2, 1);
								MISC::SET_BIT(&iLocal_41, 13);
							}
						}
						else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 14))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_43) > 27988)
							{
								func_108(0, 3, 1);
								func_197(&Local_46);
								MISC::SET_BIT(&iLocal_41, 14);
							}
						}
						else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 15))
						{
							if ((MISC::GET_GAME_TIMER() - iLocal_43) > 42084)
							{
								func_108(0, 4, 1);
								MISC::SET_BIT(&iLocal_41, 15);
							}
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 8))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", joaat("prop_cs_walking_stick"))))
							{
								iLocal_248 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("WalkingStick_Lester", joaat("prop_cs_walking_stick")));
								GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 8);
							}
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 9))
						{
							if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", joaat("ig_lestercrest"))))
							{
								iLocal_245 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Lester", joaat("ig_lestercrest")));
								GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 9);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_246, 0))
							{
								ENTITY::SET_ENTITY_HEALTH(iLocal_246, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_246, 208, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_246, 118, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_246, 213, false);
								BRAIN::TASK_GO_STRAIGHT_TO_COORD(iLocal_246, 708.8129f, -966.3621f, 29.3956f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Lester", 0))
						{
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_245, 0))
							{
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_248))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_248, iLocal_245, PED::GET_PED_BONE_INDEX(iLocal_245, 28422), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
								}
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_245, 0))
							{
								ENTITY::SET_ENTITY_HEALTH(iLocal_245, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_245, 208, true);
								PED::SET_PED_CONFIG_FLAG(iLocal_245, 118, false);
								PED::SET_PED_CONFIG_FLAG(iLocal_245, 213, false);
								BRAIN::TASK_GO_STRAIGHT_TO_COORD(iLocal_245, 708.3643f, -963.9194f, 29.4181f, 1f, 20000, 1193033728, 1056964608);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 0))
							{
								func_196();
								MISC::SET_BIT(&iLocal_41, 0);
							}
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 7))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_246, 0))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_246, false, 0);
								}
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_245, 0))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_245, false, 0);
								}
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_248))
								{
									ENTITY::SET_ENTITY_VISIBLE(iLocal_248, false, 0);
								}
								MISC::SET_BIT(&iLocal_41, 7);
							}
							func_107(16, 0);
						}
						iLocal_44++;
					}
				}
			}
		}
		else
		{
			func_199(&(Local_46.f_1E4), 0, 0, "MICHAEL", 1, 1);
			func_199(&(Local_46.f_1E4), 3, 0, "LESTER", 1, 1);
			if (func_144(0))
			{
				if (func_200(&iLocal_45, 0, 0, 0, 0) == 1)
				{
					MISC::SET_BIT(&iLocal_41, 1);
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 1))
			{
				func_196();
				func_107(16, 0);
			}
		}
	}
	else
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
		{
			CUTSCENE::REMOVE_CUTSCENE();
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 10))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 10);
		}
	}
}

void func_196()//Position - 0xF65B
{
	func_84(1, 0, 1);
	func_84(2, 0, 1);
	func_204(&Local_46);
	func_67(&Local_46);
}

void func_197(var uParam0)//Position - 0xF67D
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 1))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 2))
			{
				func_69(uParam0, 0);
			}
		}
		func_198(uParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 1);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_15CF8, *uParam0);
	}
}

void func_198(var uParam0)//Position - 0xF6C9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
		{
			OBJECT::DELETE_OBJECT(&(uParam0->f_1AC[iVar0]));
		}
		iVar0++;
	}
}

void func_199(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xF705
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

int func_200(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0xF7A0
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_162B5.f_2C == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_202(0))
		{
			return 0;
		}
		Global_8CF1++;
		*iParam0 = Global_8CF1;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), 0);
		Global_434C.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_8D15 = iParam2;
		Global_8CEF = *iParam0;
		Global_8CF0 = iParam4;
		Global_8CEE = 0;
		return 1;
	}
	if (*iParam0 != 4294967295)
	{
		if (Global_8CEE > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_8CEE)
			{
				if (Global_8CF4[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_8CEF == *iParam0)
		{
			return 1;
		}
		*iParam0 = 4294967295;
	}
	if (*iParam0 == 4294967295)
	{
		if (!func_144(iParam2))
		{
			return 0;
		}
		if (Global_8CEE == 8)
		{
			return 0;
		}
		Global_8CF1++;
		*iParam0 = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/] = Global_8CF1;
		Global_8CF4[Global_8CEE /*4*/].f_1 = iParam1;
		Global_8CF4[Global_8CEE /*4*/].f_2 = iParam2;
		Global_8CF4[Global_8CEE /*4*/].f_3 = 0;
		Global_8CEE++;
		if (iParam4 != 0)
		{
			func_201(iParam0, iParam4);
		}
	}
	return 2;
}

void func_201(var uParam0, int iParam1)//Position - 0xF8D7
{
	int iVar0;
	
	if (Global_8CEE == 0)
	{
		return;
	}
	if (*uParam0 == 4294967295)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_8CEE)
	{
		if (Global_8CF4[iVar0 /*4*/] == *uParam0)
		{
			Global_8CF4[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = 4294967295;
}

int func_202(int iParam0)//Position - 0xF926
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_144(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_203()//Position - 0xF948
{
	Global_16C57 = 1;
}

void func_204(var uParam0)//Position - 0xF955
{
	if (func_10(2, *uParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 1))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 2))
			{
				func_69(uParam0, func_205(*uParam0));
				func_84(2, *uParam0, 0);
			}
			else
			{
				func_116(uParam0);
				func_84(2, *uParam0, 0);
			}
		}
	}
}

int func_205(int iParam0)//Position - 0xF9AA
{
	switch (iParam0)
	{
		case 0:
			return func_222(18);
			break;
		
		case 1:
			return func_222(22);
			break;
		
		case 2:
			return func_222(40);
			break;
		
		case 3:
			return func_222(8);
			break;
		
		case 4:
			return func_222(26);
			break;
		
		default:
			break;
	}
	return 0;
}

int func_206()//Position - 0xFA17
{
	return Global_1172B;
}

int func_207(var uParam0)//Position - 0xFA23
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 1))
	{
		func_197(uParam0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 0))
	{
		func_208(uParam0);
	}
	return 1;
}

void func_208(var uParam0)//Position - 0xFA52
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_02"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_ld_planning_pin_03"));
	if (uParam0->f_19D != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_19D));
	}
	if (uParam0->f_19E != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_19E));
	}
	HUD::CLEAR_ADDITIONAL_TEXT(5, false);
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_15CF9, *uParam0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 0);
}

void func_209(var uParam0, float fParam1, float fParam2)//Position - 0xFABC
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		fVar0 = SYSTEM::VDIST2(uParam0->f_191, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true));
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 1))
		{
			func_217(uParam0);
		}
		else if (fVar0 < (fParam1 * fParam1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15CF8, *uParam0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 0))
			{
				if (func_216(uParam0))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15CF8, *uParam0))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15CFA, *uParam0))
						{
							func_211(uParam0);
						}
					}
					else
					{
						func_211(uParam0);
					}
				}
			}
			else
			{
				func_210(uParam0);
			}
		}
		if (fVar0 > (fParam2 * fParam2) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15CF8, *uParam0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 1))
				{
					func_197(uParam0);
				}
				func_208(uParam0);
			}
		}
	}
}

void func_210(var uParam0)//Position - 0xFBA5
{
	if (!AUDIO::_0x5B50ABB1FE3746F4())
	{
		return;
	}
	HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_110), 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, 4294967295);
	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_01"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_02"));
		STREAMING::REQUEST_MODEL(joaat("prop_ld_planning_pin_03"));
	}
	uParam0->f_19D = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_10C));
	uParam0->f_19E = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	MISC::SET_BIT(&Global_15CF7, *uParam0);
	MISC::SET_BIT(&(uParam0->f_1C1), 0);
}

void func_211(var uParam0)//Position - 0xFC23
{
	int iVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_60)
		{
			func_36(uParam0, iVar0);
			iVar0++;
		}
		func_33(uParam0);
		func_31(uParam0);
		func_215(uParam0);
		func_214(uParam0);
		func_212(uParam0);
		MISC::SET_BIT(&(uParam0->f_1C1), 1);
	}
}

void func_212(var uParam0)//Position - 0xFC80
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	vector3 vVar4;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_21)
	{
		if (func_32(*uParam0, uParam0->f_1.f_4B[iVar0]))
		{
			switch ((iVar0 % 3))
			{
				case 0:
					iVar1 = joaat("prop_ld_planning_pin_01");
					break;
				
				case 1:
					iVar1 = joaat("prop_ld_planning_pin_02");
					break;
				
				case 2:
					iVar1 = joaat("prop_ld_planning_pin_03");
					break;
			}
			fVar2 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			fVar3 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
			vVar4 = { func_213(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
			uParam0->f_1AC[iVar0] = OBJECT::CREATE_OBJECT(iVar1, vVar4, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_1AC[iVar0], fVar2, 0f, (uParam0->f_194 + fVar3), 2, 1);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1AC[iVar0], true, 0);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1AC[iVar0], true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_1AC[iVar0], false, 0);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_1AC[iVar0], 0);
			unk_0x346478B12F69D4E3(uParam0->f_1AC[iVar0], true);
		}
		iVar0++;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_15CFA, *uParam0);
}

Vector3 func_213(var uParam0, var uParam1)//Position - 0xFDB5
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	fVar0 = uParam0->f_1.f_4;
	fVar1 = uParam0->f_1.f_5;
	func_28(uParam0, uParam1, &fVar2, &fVar3);
	fVar4 = (fVar0 * (fVar2 - 0.5f));
	fVar5 = (-fVar1 * (fVar3 - 0.5f));
	fVar6 = uParam0->f_194;
	vVar7 = { uParam0->f_191 };
	vVar7 = { vVar7 + Vector(fVar5, (fVar4 * SYSTEM::COS((90f - fVar6))), (fVar4 * SYSTEM::SIN((90f - fVar6)))) };
	return vVar7;
}

void func_214(var uParam0)//Position - 0xFE33
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	iVar1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1.f_75)
	{
		iVar2 = uParam0->f_1.f_BA[iVar0];
		bVar3 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1.f_78[iVar1], iVar2);
		if (uParam0->f_1.f_8D[iVar0 /*2*/] == 0 && uParam0->f_1.f_8D[iVar0 /*2*/].f_1 == 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SET_SEETHROUGH(bVar3);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		else
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SET_SEETHROUGH(bVar3);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/]));
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_8D[iVar0 /*2*/].f_1));
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		iVar0++;
	}
}

void func_215(var uParam0)//Position - 0xFF13
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "CREATE_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F + 1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_E));
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_E.f_1));
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	iVar0 = *uParam0;
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 < uParam0->f_1.f_D1)
	{
		if (func_32(iVar0, uParam0->f_1.f_F8[iVar2]))
		{
			iVar3 = 0;
			if (func_32(iVar0, uParam0->f_1.f_102[iVar2]))
			{
				iVar3 = 1;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F + 1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar1);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar3);
			func_8(&(uParam0->f_1.f_D3[iVar2 /*4*/]));
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			iVar1++;
		}
		iVar2++;
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "DISPLAY_VIEW");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F + 1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	if (func_32(*uParam0, uParam0->f_1.f_D2))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F + 1);
		GRAPHICS::SET_SEETHROUGH(true);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	else
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_VIEW");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F + 1);
		GRAPHICS::SET_SEETHROUGH(false);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
}

int func_216(var uParam0)//Position - 0x10055
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_19D))
	{
		return 0;
	}
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_19E))
	{
		return 0;
	}
	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(5))
	{
		return 0;
	}
	if (AUDIO::_0x5B50ABB1FE3746F4())
	{
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, 4294967295))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (*uParam0 != 1)
	{
		if ((!STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_02"))) || !STREAMING::HAS_MODEL_LOADED(joaat("prop_ld_planning_pin_03")))
		{
			return 0;
		}
	}
	MISC::SET_BIT(&Global_15CF9, *uParam0);
	return 1;
}

void func_217(var uParam0)//Position - 0x100F0
{
	float fVar0;
	float fVar1;
	
	if (func_32(*uParam0, 0))
	{
		func_218(uParam0);
		fVar0 = (-uParam0->f_1.f_4 * 0.5f);
		fVar1 = (uParam0->f_1.f_5 * 0.5f);
		GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(uParam0->f_19D, uParam0->f_191 + Vector(fVar1, (fVar0 * SYSTEM::COS((90f - uParam0->f_194))), (fVar0 * SYSTEM::SIN((90f - uParam0->f_194)))), 180f, 0f, uParam0->f_194, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}
}

void func_218(var uParam0)//Position - 0x10179
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15CF7, *uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_1C1), 16);
		MISC::SET_BIT(&(uParam0->f_1C1), 15);
		MISC::SET_BIT(&(uParam0->f_1C1), 14);
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_15CF7, *uParam0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 16))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_75)
		{
			iVar1 = uParam0->f_1.f_BA[iVar0];
			bVar2 = func_32(*uParam0, iVar1);
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SHOW_HEIST_ASSET");
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_1.f_76[iVar0]);
			GRAPHICS::SET_SEETHROUGH(bVar2);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			iVar0++;
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 16);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 15))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_1.f_21)
		{
			if (func_32(*uParam0, uParam0->f_1.f_4B[iVar0]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
				{
					switch ((iVar0 % 3))
					{
						case 0:
							iVar3 = joaat("prop_ld_planning_pin_01");
							break;
						
						case 1:
							iVar3 = joaat("prop_ld_planning_pin_02");
							break;
						
						case 2:
							iVar3 = joaat("prop_ld_planning_pin_03");
							break;
					}
					fVar4 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					fVar5 = (SYSTEM::TO_FLOAT((MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767)) / 4000f);
					vVar6 = { func_213(uParam0, &(uParam0->f_1.f_22[iVar0 /*2*/])) };
					uParam0->f_1AC[iVar0] = OBJECT::CREATE_OBJECT(iVar3, vVar6, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_1AC[iVar0], fVar4, 0f, (uParam0->f_194 + fVar5), 2, 1);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_1AC[iVar0], true, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_1AC[iVar0], true);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_1AC[iVar0], false, 0);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_1AC[iVar0], 0);
					unk_0x346478B12F69D4E3(uParam0->f_1AC[iVar0], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1AC[iVar0]))
			{
				OBJECT::DELETE_OBJECT(&(uParam0->f_1AC[iVar0]));
			}
			iVar0++;
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 15);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_1C1, 14))
	{
		func_219(uParam0);
		func_33(uParam0);
		func_215(uParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 14);
	}
}

void func_219(var uParam0)//Position - 0x103C5
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_19D, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_19F + 1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

bool func_220(int iParam0)//Position - 0x103E9
{
	return Global_8D15 == iParam0;
}

int func_221(int iParam0)//Position - 0x103F7
{
	int iVar0;
	
	if (iParam0 == 94 || iParam0 == 4294967295)
	{
		return 0;
	}
	if (Global_15510[iParam0 /*2*/])
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < Global_1486F)
	{
		if (Global_1486F[iVar0 /*5*/] != 4294967295)
		{
			if (Global_11732.f_6D[Global_1486F[iVar0 /*5*/] /*4*/] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_222(int iParam0)//Position - 0x1045F
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

void func_223(var uParam0, int iParam1)//Position - 0x1048C
{
	vector3 vVar0;
	float fVar1;
	
	*uParam0 = iParam1;
	vVar0 = { Global_15CB9[uParam0->f_1.f_1 /*15*/].f_3 };
	fVar1 = Global_15CB9[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_191 = { vVar0 };
	uParam0->f_194 = fVar1;
	uParam0->f_195 = { vVar0 + Vector(0f, (-uParam0->f_1.f_8 * SYSTEM::COS((360f - fVar1))), (-uParam0->f_1.f_8 * SYSTEM::SIN((360f - fVar1)))) };
	uParam0->f_198 = { -0.85f, 0f, fVar1 };
	MISC::SET_BIT(&(uParam0->f_1C1), 4);
	uParam0->f_19F = uParam0->f_1.f_60;
	uParam0->f_1A0 = 4294967295;
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 1);
	GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_1C1), 2);
	uParam0->f_1D0 = 0;
	uParam0->f_1C3 = 4294967295;
}

void func_224(var uParam0, var uParam1)//Position - 0x10558
{
	func_233(uParam0, 1, "HEIST_JEWELLERY", "BOARD0", "JHFAUD", "CRWAUD", 2, 2, 7, 8, uParam1, 708.9957f, -965.256f, 31.39533f, 5.5f, 6.25f, 4f);
	func_232(uParam0, 750, 540, 2.1f, 1.47f, 3.6f, 2.05f, 2f, 375, 250, 116, 420, 248, 425, 380, 425, 510, 430, 0, 0, 650, 300, 0, 70, 684, 106);
	func_231(uParam0, 20f, 22f, 28f);
	func_230(uParam0, "BRD_H_01", "BRD_H_02", "BRD_H_03", "BRD_H_04", "JHFP1", "JHFP4", "JHP11", "JHHUR");
	func_229(uParam0, 1, "CRW_GM", "");
	func_229(uParam0, 4, "CRW_NR", "");
	func_229(uParam0, 6, "CRW_PH", "");
	func_229(uParam0, 7, "CRW_CF", "");
	func_229(uParam0, 8, "CRW_ET", "");
	func_229(uParam0, 9, "CRW_KD", "");
	func_229(uParam0, 10, "CRW_PM", "CRM_PM");
	func_229(uParam0, 12, "CRW_RL", "CRM_RL");
	func_228(uParam0, 0, 0, 0, 0);
	func_228(uParam0, 6, 0, 0, 0);
	func_228(uParam0, 1, 0, 0, 0);
	func_228(uParam0, 3, 1, 0, 0);
	func_228(uParam0, 11, 2, 0, 0);
	func_228(uParam0, 5, 3, 0, 0);
	func_228(uParam0, 9, 3, 0, 0);
	func_228(uParam0, 2, 4, 0, 0);
	func_228(uParam0, 7, 9, 0, 0);
	func_228(uParam0, 10, 10, 0, 0);
	func_227(uParam0, 2, 2, "H_TD_SEC");
	func_227(uParam0, 2, 2, "H_TD_PHOTO");
	func_227(uParam0, 2, 5, "H_TD_PLAN");
	func_227(uParam0, 2, 6, "H_TD_CREW");
	func_227(uParam0, 7, 11, "H_TD_CARB");
	func_227(uParam0, 8, 9, "H_TD_BUGS");
	func_227(uParam0, 8, 10, "H_TD_GAS");
	func_226(uParam0, 0, 203, 74);
	func_226(uParam0, 1, 368, 181);
	func_226(uParam0, 1, 556, 189);
	func_226(uParam0, 2, 690, 63);
	func_226(uParam0, 2, 673, 308);
	func_226(uParam0, 2, 671, 406);
	func_226(uParam0, 3, 245, 244);
	func_226(uParam0, 4, 70, 68);
	func_225(uParam0, 0, "JHP12", 214, 165, 1);
	func_225(uParam0, 0, "JHP13", 254, 46, 1);
	func_225(uParam0, 0, "JHP14", 70, 97, 1);
	func_225(uParam0, 0, "JHP15", 254, 275, 1);
	func_225(uParam0, 0, "JHP16", 457, 165, 1);
}

void func_225(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x107FE
{
	struct<2> Var0;
	
	if (uParam0->f_171 < 7)
	{
		StringCopy(&Var0, sParam2, 8);
		uParam0->f_182[uParam0->f_171] = iParam1;
		uParam0->f_173[uParam0->f_171 /*2*/] = iParam3;
		uParam0->f_173[uParam0->f_171 /*2*/].f_1 = iParam4;
		uParam0->f_118[uParam0->f_171 + 4 /*2*/] = { Var0 };
		if (bParam5)
		{
			MISC::SET_BIT(&(uParam0->f_172), uParam0->f_171);
		}
		uParam0->f_171++;
	}
}

void func_226(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10877
{
	if (uParam0->f_21 < 20)
	{
		uParam0->f_4B[uParam0->f_21] = iParam1;
		uParam0->f_22[uParam0->f_21 /*2*/] = iParam2;
		uParam0->f_22[uParam0->f_21 /*2*/].f_1 = iParam3;
		uParam0->f_21++;
	}
}

void func_227(var uParam0, int iParam1, int iParam2, char* sParam3)//Position - 0x108BB
{
	struct<8> Var0;
	
	if (uParam0->f_D1 < 9)
	{
		StringCopy(&Var0, sParam3, 32);
		uParam0->f_F8[uParam0->f_D1] = iParam1;
		uParam0->f_102[uParam0->f_D1] = iParam2;
		MemCopy(&(uParam0->f_D3[uParam0->f_D1 /*4*/]), {Var0}, 4);
		uParam0->f_D1++;
	}
}

void func_228(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x1090B
{
	if (uParam0->f_75 < 22)
	{
		uParam0->f_76[uParam0->f_75] = iParam1;
		uParam0->f_BA[uParam0->f_75] = iParam2;
		uParam0->f_8D[uParam0->f_75 /*2*/] = iParam3;
		uParam0->f_8D[uParam0->f_75 /*2*/].f_1 = iParam4;
		uParam0->f_75++;
	}
}

void func_229(var uParam0, int iParam1, char* sParam2, char* sParam3)//Position - 0x1095B
{
	struct<2> Var0;
	struct<2> Var1;
	
	StringCopy(&Var0, sParam2, 8);
	StringCopy(&Var1, sParam3, 8);
	uParam0->f_130[iParam1 /*2*/] = { Var0 };
	if (!MISC::ARE_STRINGS_EQUAL(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_130[14 /*2*/] = { Var1 };
				break;
			
			case 13:
				uParam0->f_130[16 /*2*/] = { Var1 };
				break;
			
			case 12:
				uParam0->f_130[15 /*2*/] = { Var1 };
				break;
			
			case 11:
				uParam0->f_130[17 /*2*/] = { Var1 };
				break;
			
			default:
				break;
			}
	}
}

void func_230(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8)//Position - 0x109F5
{
	struct<4> Var0;
	struct<4> Var1;
	struct<4> Var2;
	struct<4> Var3;
	struct<2> Var4;
	struct<2> Var5;
	struct<2> Var6;
	struct<2> Var7;
	
	StringCopy(&Var0, sParam1, 16);
	StringCopy(&Var1, sParam2, 16);
	StringCopy(&Var2, sParam3, 16);
	StringCopy(&Var3, sParam4, 16);
	StringCopy(&Var4, sParam5, 8);
	StringCopy(&Var5, sParam6, 8);
	StringCopy(&Var6, sParam7, 8);
	StringCopy(&Var7, sParam8, 8);
	uParam0->f_14[0 /*4*/] = { Var0 };
	uParam0->f_14[1 /*4*/] = { Var1 };
	uParam0->f_6C[0 /*4*/] = { Var2 };
	uParam0->f_6C[1 /*4*/] = { Var3 };
	uParam0->f_118[1 /*2*/] = { Var4 };
	uParam0->f_118[2 /*2*/] = { Var5 };
	uParam0->f_118[0 /*2*/] = { Var6 };
	uParam0->f_118[3 /*2*/] = { Var7 };
}

void func_231(var uParam0, float fParam1, float fParam2, float fParam3)//Position - 0x10A99
{
	uParam0->f_9 = fParam1;
	uParam0->f_A = fParam2;
	uParam0->f_B = fParam3;
}

void func_232(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25)//Position - 0x10AB3
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_C = iParam8;
	uParam0->f_C.f_1 = iParam9;
	uParam0->f_61[0 /*2*/] = iParam10;
	uParam0->f_61[0 /*2*/].f_1 = iParam11;
	uParam0->f_61[1 /*2*/] = iParam12;
	uParam0->f_61[1 /*2*/].f_1 = iParam13;
	uParam0->f_61[2 /*2*/] = iParam14;
	uParam0->f_61[2 /*2*/].f_1 = iParam15;
	uParam0->f_61[3 /*2*/] = iParam16;
	uParam0->f_61[3 /*2*/].f_1 = iParam17;
	uParam0->f_61[4 /*2*/] = iParam18;
	uParam0->f_61[4 /*2*/].f_1 = iParam19;
	uParam0->f_10 = iParam20;
	uParam0->f_10.f_1 = iParam21;
	uParam0->f_12 = iParam22;
	uParam0->f_12.f_1 = iParam23;
	uParam0->f_E = iParam24;
	uParam0->f_E.f_1 = iParam25;
}

void func_233(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, vector3 vParam11, vector3 vParam12)//Position - 0x10B81
{
	uParam0->f_1 = iParam1;
	StringCopy(&(uParam0->f_10C), sParam2, 16);
	StringCopy(&(uParam0->f_110), sParam3, 16);
	StringCopy(&(uParam0->f_114), sParam4, 8);
	StringCopy(&(uParam0->f_116), sParam5, 8);
	uParam0->f_1D = iParam6;
	uParam0->f_1E[0] = iParam8;
	uParam0->f_1E[1] = iParam9;
	uParam0->f_D2 = iParam7;
	uParam0->f_60 = uParam10;
	uParam0->f_18A = { vParam11 };
	uParam0->f_18D = { vParam12 };
}

int func_234(int iParam0, int iParam1)//Position - 0x10BED
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

int func_235(int iParam0)//Position - 0x10C03
{
	int iVar0;
	int iVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		iVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		iVar1 = (iParam0 - 32);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_63.f_DB[iVar0], iVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_19E56.f_2361.f_63.f_DB[iVar0]), iVar1);
	return 1;
}

void func_236()//Position - 0x10C5D
{
	if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4P2") || CUTSCENE::HAS_THIS_CUTSCENE_LOADED("JH_1_MCS_4_P1_ALT1"))
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	func_107(16, 0);
	func_107(17, 0);
	func_107(18, 0);
	func_84(1, 0, 0);
	func_84(2, 0, 0);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_249, 0);
	if (iLocal_254 != 4294967295)
	{
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_254))
		{
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_254);
		}
	}
	unk_0x02DD9F29D9655E48();
	PATHFIND::SET_PED_PATHS_IN_AREA(Local_46.f_1.f_18A - Local_46.f_1.f_18D, Local_46.f_1.f_18A + Local_46.f_1.f_18D, true, 0);
	HUD::_0x14621BB1DF14E2B2(5);
	if (iLocal_45 != 4294967295)
	{
		func_154(&iLocal_45);
	}
	while (!func_207(&Local_46))
	{
		SYSTEM::WAIT(0);
	}
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

