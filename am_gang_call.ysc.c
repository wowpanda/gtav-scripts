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
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	char* sLocal_20 = NULL;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	int iLocal_36 = 0;
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
	var uLocal_61 = 10;
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
	var uLocal_72 = 2;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 8;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 8;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	float fLocal_94 = 0f;
	struct<55> Local_95 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_96 = 0;
	struct<5> Local_97[32];
	int iLocal_98 = 0;
	int iLocal_99[3] = { 0, 0, 0 };
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	vector3 vLocal_105 = { 0f, 0f, 0f };
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 16;
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
	var uLocal_245 = 0;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_285 = 0;
	int iLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	struct<21> Local_289 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	
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
	sLocal_20 = "NULL";
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	iLocal_101 = 4294967295;
	iLocal_104 = 4294967295;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_538(ScriptParam_289);
	}
	while (true)
	{
		func_537();
		if (func_527())
		{
			func_524();
		}
		iLocal_106 = HUD::_0x13C4B962653A5280();
		func_515();
		func_512();
		func_507();
		func_506();
		switch (func_505(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_504() == 1)
				{
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 1;
				}
				else if (func_504() == 4)
				{
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_504() == 1)
				{
					func_498();
				}
				else if (func_504() == 0)
				{
					func_492();
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
				}
				else if (func_504() == 4)
				{
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_467();
				func_465(&(Local_95.f_36));
				if (func_464(&(Local_95.f_36)))
				{
					iVar0 = 0;
					while (iVar0 < func_463(iLocal_101))
					{
						func_467();
						iVar0++;
					}
					Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
			
			case 4:
				func_254();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_252();
			func_251();
			func_250();
			switch (func_504())
			{
				case 0:
					func_249();
					if (func_245())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_103), 0))
						{
							func_243(PLAYER::GET_PLAYER_PED(iLocal_103));
						}
						else
						{
							Local_95.f_24 = { vLocal_105 };
						}
						GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_2), 6);
						Local_95 = 1;
					}
					break;
				
				case 1:
					if (func_60())
					{
						func_59();
						func_58();
					}
					func_40();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()//Position - 0x235
{
	int iVar0;
	
	if (func_504() < 4)
	{
		if (func_22())
		{
			iLocal_107 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_463(iLocal_101) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_95 = 4;
		}
	}
}

void func_2()//Position - 0x271
{
	var uVar0;
	struct<14> Var1;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iLocal_107 /*7*/].f_2, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iLocal_107 /*7*/].f_2, 6))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iLocal_107 /*7*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_95.f_A[iLocal_107 /*7*/])))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_95.f_A[iLocal_107 /*7*/]), 0))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iLocal_107 /*7*/].f_2, 6))
					{
						if (iLocal_101 == 0)
						{
							Local_95.f_30++;
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 12))
							{
								if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_95.f_A[iLocal_107 /*7*/], &uVar0) == iLocal_103)
								{
									MISC::SET_BIT(&(Local_95.f_2), 12);
								}
							}
							if ((Local_95.f_2A == iLocal_107 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 5)) || Local_95.f_30 == func_463(iLocal_101))
							{
								Var1.f_2 = 4246814833;
								Var1.f_A = iLocal_103;
								Var1.f_B = iLocal_102;
								if (func_463(iLocal_101) > 1)
								{
									Var1.f_C = PLAYER::INT_TO_PLAYERINDEX(1);
								}
								else
								{
									Var1.f_C = PLAYER::INT_TO_PLAYERINDEX(0);
								}
								Var1.f_3 = Local_95.f_2B;
								func_20(Var1, func_21(1));
								if (Local_95.f_2A == iLocal_107)
								{
									MISC::SET_BIT(&(Local_95.f_2), 5);
								}
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 5))
							{
								Var1.f_2 = 2522996185;
								Var1.f_B = iLocal_102;
								func_20(Var1, func_21(1));
							}
						}
						MISC::SET_BIT(&(Local_95.f_A[iLocal_107 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iLocal_107 /*7*/].f_2, 5))
					{
						MISC::SET_BIT(&iLocal_98, 2);
					}
					MISC::SET_BIT(&iLocal_98, 1);
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_98, 1);
		MISC::SET_BIT(&iLocal_98, 2);
	}
	func_3(iLocal_107);
	iLocal_107++;
	if (iLocal_107 >= func_463(iLocal_101))
	{
		iLocal_107 = 0;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 1))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 1))
				{
					MISC::SET_BIT(&(Local_95.f_1), 1);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 2))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 9))
				{
					MISC::SET_BIT(&(Local_95.f_1), 9);
				}
			}
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 1);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 2);
	}
}

void func_3(int iParam0)//Position - 0x4B3
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iParam0 /*7*/]))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_95.f_A[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_19(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_95.f_A[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 7))
							{
								if ((((BRAIN::GET_NAVMESH_ROUTE_RESULT(iVar0) == 2 || (Global_24FBF9[iLocal_103 /*413*/].f_EC != 4294967295 && func_18(Global_24FBF9[iLocal_103 /*413*/].f_EC) == 4)) || Global_1841F3[iLocal_103 /*790*/].f_297) || func_16(iLocal_103, 0)) || func_9(iLocal_103))
								{
									Local_95.f_A[iParam0 /*7*/].f_3 = iLocal_106;
									MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((BRAIN::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2 && Global_24FBF9[iLocal_103 /*413*/].f_EC == 4294967295) && !Global_1841F3[iLocal_103 /*790*/].f_297) && !func_16(iLocal_103, 0)) && !func_9(iLocal_103))
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_A[iParam0 /*7*/].f_2), 7);
							}
							else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_A[iParam0 /*7*/].f_3) > 10000 || BRAIN::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2)
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 10))
								{
									MISC::SET_BIT(&(Local_95.f_2), 10);
									Local_95.f_27 = { func_8(iLocal_103) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_463(iLocal_101))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 3))
								{
									if (BRAIN::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) == 3f && !PED::GET_PED_CONFIG_FLAG(iVar0, 118, 1))
									{
										MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
						{
							MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(unk_0x8000C77B5F336760(iVar0, 1), unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iLocal_103), 1), 25f) || !func_5(unk_0x8000C77B5F336760(iVar0, 1), unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iLocal_103), 1), 625f))
								{
									MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(unk_0x8000C77B5F336760(iVar0, 1), unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iLocal_103), 1)) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
						{
							MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_103, 1, 1))
						{
							if (!func_4(unk_0x8000C77B5F336760(iVar0, 1), unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iLocal_103), 1)) && !(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 4))
							{
								if (PED::GET_PED_CONFIG_FLAG(iVar0, 118, 1))
								{
									MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(vector3 vParam0, vector3 vParam1)//Position - 0x8B7
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (MISC::ABSF((vParam1.z - vParam0.z)) < 2f)
	{
		vVar0.x = vParam0.x;
		vVar0.y = vParam0.y;
		vVar1.x = vParam1.x;
		vVar1.y = vParam1.y;
		if (func_5(vVar0, vVar1, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x8FE
{
	if (SYSTEM::VDIST2(vParam0, vParam1) < fParam2)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)//Position - 0x91D
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

void func_7(int iParam0, int iParam1)//Position - 0x967
{
	Local_95.f_A[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)//Position - 0x97B
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_9(int iParam0)//Position - 0x98E
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (func_14(iParam0, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			iVar1 = func_11(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, 0))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x9E2
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)//Position - 0xA25
{
	if (func_14(iParam0, 1))
	{
		return Global_26862F.f_1313.f_D8[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)//Position - 0xA4C
{
	if (iParam0 != func_13())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_13();
}

int func_13()//Position - 0xA6F
{
	return 4294967295;
}

bool func_14(int iParam0, bool bParam1)//Position - 0xA78
{
	if (!bParam1)
	{
		if (func_15(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_13();
}

int func_15(int iParam0)//Position - 0xAA3
{
	if (iParam0 != func_13())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_13())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_16(int iParam0, int iParam1)//Position - 0xAD8
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, iParam1))
		{
			if (func_17(PED::GET_VEHICLE_PED_IS_IN(iVar0, iParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)//Position - 0xB13
{
	if (Global_11625)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0)//Position - 0xB51
{
	switch (iParam0)
	{
		case 4294967295:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
	}
	return 6;
}

int func_19(int iParam0, int iParam1)//Position - 0xDF8
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AttributeDamage", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage"), iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_20(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xE2E
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_21(int iParam0)//Position - 0xE5B
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != CAM::_0xDC9DA9E8789F5246() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_22()//Position - 0xEB8
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
	{
		if (iLocal_101 == 1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 4))
			{
				MISC::SET_BIT(&(Local_95.f_3), 11);
				return 1;
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 1))
		{
			MISC::SET_BIT(&(Local_95.f_3), 0);
			return 1;
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 2))
	{
		MISC::SET_BIT(&(Local_95.f_3), 1);
		MISC::SET_BIT(&Global_191DFE, iLocal_101);
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 12))
	{
		return 1;
	}
	if (iLocal_101 == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 2))
		{
			MISC::SET_BIT(&(Local_95.f_3), 2);
			return 1;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 8))
		{
			MISC::SET_BIT(&(Local_95.f_3), 8);
			return 1;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 5))
		{
			MISC::SET_BIT(&(Local_95.f_3), 3);
			return 1;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 9))
		{
			MISC::SET_BIT(&(Local_95.f_3), 9);
			return 1;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 15))
		{
			MISC::SET_BIT(&(Local_95.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_103, 0, 1))
	{
		if (iLocal_101 != 0 || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
		{
			MISC::SET_BIT(&(Local_95.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_38(iLocal_103, 129))
		{
			MISC::SET_BIT(&(Local_95.f_2), 13);
			MISC::SET_BIT(&(Local_95.f_3), 8);
			return 1;
		}
		if (func_38(iLocal_103, 131) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iLocal_103 /*560*/].f_1, 11))
		{
			MISC::SET_BIT(&(Local_95.f_2), 13);
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(iLocal_103, 136) || (func_37(CAM::_0xDC9DA9E8789F5246(), 24) && func_36(iLocal_103)))
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_38(iLocal_103, 146))
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_35(CAM::_0xDC9DA9E8789F5246()) && ((func_33(CAM::_0xDC9DA9E8789F5246()) == 148 || func_33(CAM::_0xDC9DA9E8789F5246()) == 142) || func_33(CAM::_0xDC9DA9E8789F5246()) == 164))
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(CAM::_0xDC9DA9E8789F5246()) == 153)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(CAM::_0xDC9DA9E8789F5246()) && func_33(CAM::_0xDC9DA9E8789F5246()) == 170)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(CAM::_0xDC9DA9E8789F5246()) == 167)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_33(CAM::_0xDC9DA9E8789F5246()) == 168)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(CAM::_0xDC9DA9E8789F5246()) && func_33(CAM::_0xDC9DA9E8789F5246()) == 238)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (func_31(CAM::_0xDC9DA9E8789F5246()) && func_33(CAM::_0xDC9DA9E8789F5246()) == 249)
		{
			MISC::SET_BIT(&(Local_95.f_2), 8);
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_103), 0))
		{
			if (iLocal_101 == 1)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
				{
					MISC::SET_BIT(&(Local_95.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (iLocal_101 == 1)
			{
				if (func_38(iLocal_103, 146))
				{
					MISC::SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 16))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_9) > func_30())
					{
						MISC::SET_BIT(&(Local_95.f_3), 7);
						return 1;
					}
				}
				if (func_27())
				{
					MISC::SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
				if (func_23(iLocal_103, func_12(iLocal_102), 1))
				{
					MISC::SET_BIT(&(Local_95.f_3), 7);
					return 1;
				}
			}
			if (iLocal_104 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_103)))
			{
				MISC::SET_BIT(&(Local_95.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_23(int iParam0, int iParam1, bool bParam2)//Position - 0x1298
{
	return func_24(iParam0, iParam1, bParam2, 1);
}

int func_24(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x12AB
{
	if (iParam1 != func_13() && iParam0 != func_13())
	{
		if (!bParam2)
		{
			if (func_26(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_13())
		{
			if (iParam1 == Global_18CD5B[iParam0 /*560*/].f_B)
			{
				return func_25(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_25(int iParam0, int iParam1)//Position - 0x130E
{
	if (func_15(iParam0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1;
	}
	return 0;
}

int func_26(int iParam0, int iParam1, int iParam2)//Position - 0x1334
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B != func_13())
			{
				if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0)
				{
					if (Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_27()//Position - 0x138C
{
	if (((func_29(iLocal_103, 1, 0) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	return 0;
}

bool func_28(int iParam0)//Position - 0x13CE
{
	return Global_1841F3[iParam0 /*790*/].f_C4 != 0;
}

int func_29(int iParam0, bool bParam1, bool bParam2)//Position - 0x13E3
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
		{
			return 1;
		}
	}
	return 0;
}

int func_30()//Position - 0x144D
{
	if (Local_95.f_34)
	{
		return 300000;
	}
	return 120000;
}

int func_31(int iParam0)//Position - 0x1467
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return func_32(iParam0, 9);
	}
	return 0;
}

bool func_32(int iParam0, int iParam1)//Position - 0x1485
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_4, iParam1);
}

int func_33(int iParam0)//Position - 0x14A0
{
	if (func_34(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_34(int iParam0, int iParam1)//Position - 0x14C3
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_35(int iParam0)//Position - 0x14FE
{
	if (func_15(iParam0))
	{
		if (func_31(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_36(int iParam0)//Position - 0x151D
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_1, 4);
}

bool func_37(int iParam0, int iParam1)//Position - 0x1535
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

int func_38(int iParam0, int iParam1)//Position - 0x154E
{
	if (Global_18CD5B[iParam0 /*560*/] == iParam1)
	{
		return func_39(iParam0);
	}
	return 0;
}

int func_39(int iParam0)//Position - 0x156E
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iVar0 /*560*/].f_1, 0);
	}
	return 0;
}

void func_40()//Position - 0x1594
{
	func_51();
	if (iLocal_101 != 1)
	{
		func_2();
	}
	func_41();
}

void func_41()//Position - 0x15AF
{
	int iVar0;
	
	if (func_6(PLAYER::INT_TO_PLAYERINDEX(iLocal_108), 0, 1))
	{
		if (iLocal_101 == 1)
		{
			if (PLAYER::INT_TO_PLAYERINDEX(iLocal_108) == iLocal_103)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 16))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_108 /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_95.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 11))
			{
				if (func_47(PLAYER::INT_TO_PLAYERINDEX(iLocal_108)))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_4, iLocal_108))
					{
						MISC::SET_BIT(&(Local_95.f_1), 11);
						MISC::SET_BIT(&(Local_95.f_4), iLocal_108);
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_4, iLocal_108))
				{
					MISC::SET_BIT(&(Local_95.f_1), 11);
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_4), iLocal_108);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_108 /*5*/].f_1, 2))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_1), 11);
			}
			if (iLocal_101 == 0)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_108 /*5*/].f_1, 0))
				{
					if (Local_97[iLocal_108 /*5*/].f_2 != 4294967295)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
						{
							MISC::SET_BIT(&(Local_95.f_2), 1);
							Local_95.f_2A = Local_97[iLocal_108 /*5*/].f_2;
							Local_95.f_2B = Local_97[iLocal_108 /*5*/].f_3;
							if (!func_46())
							{
								func_45();
							}
						}
					}
					else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 9))
					{
						if (!func_46())
						{
							func_44();
						}
						iVar0 = 0;
						while (iVar0 < func_463(iLocal_101))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						MISC::SET_BIT(&(Local_95.f_2), 9);
						MISC::SET_BIT(&(Local_95.f_2), 1);
					}
				}
				if (func_46())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 17))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_108 /*5*/].f_1, 5))
						{
							func_45();
							MISC::SET_BIT(&iLocal_98, 17);
						}
						else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_108 /*5*/].f_1, 6))
						{
							func_44();
							MISC::SET_BIT(&iLocal_98, 17);
						}
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_108 /*5*/].f_1, 1))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 3))
					{
						MISC::SET_BIT(&iLocal_98, 3);
					}
				}
				else if (PLAYER::INT_TO_PLAYERINDEX(iLocal_108) == iLocal_103)
				{
					if (iLocal_101 == 0)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 6))
							{
								MISC::SET_BIT(&(Local_95.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	iLocal_108++;
	if (iLocal_108 >= 32)
	{
		iLocal_108 = 0;
		if (iLocal_101 == 0)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 3))
			{
				func_43();
			}
			else
			{
				func_42();
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 3);
		}
	}
}

void func_42()//Position - 0x1828
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 3))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_2), 3);
	}
}

void func_43()//Position - 0x1845
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 3))
	{
		Local_95.f_6 = iLocal_106;
		MISC::SET_BIT(&(Local_95.f_2), 3);
	}
}

void func_44()//Position - 0x186A
{
	struct<14> Var0;
	
	Var0.f_2 = 2925005673;
	Var0.f_A = iLocal_103;
	Var0.f_B = iLocal_102;
	func_20(Var0, func_21(1));
}

void func_45()//Position - 0x1897
{
	struct<14> Var0;
	
	Var0.f_2 = 4084479937;
	Var0.f_A = iLocal_103;
	Var0.f_B = iLocal_102;
	if (func_463(iLocal_101) > 1)
	{
		Var0.f_C = PLAYER::INT_TO_PLAYERINDEX(1);
	}
	else
	{
		Var0.f_C = PLAYER::INT_TO_PLAYERINDEX(0);
	}
	Var0.f_3 = Local_95.f_2B;
	func_20(Var0, func_21(1));
}

int func_46()//Position - 0x18EC
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

bool func_47(int iParam0)//Position - 0x1903
{
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		return func_50();
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E0B5.f_F1.f_88[func_49(10) /*33*/][iParam0], func_48(10));
}

int func_48(int iParam0)//Position - 0x1939
{
	return (iParam0 % 32);
}

int func_49(int iParam0)//Position - 0x1946
{
	return (iParam0 / 32);
}

var func_50()//Position - 0x1953
{
	return Global_1406A0;
}

void func_51()//Position - 0x195F
{
	int iVar0;
	
	if (iLocal_101 == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 3))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_6) > 10000)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
				{
					MISC::SET_BIT(&(Local_95.f_2), 2);
				}
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 8))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
			{
				if (func_55())
				{
					MISC::SET_BIT(&(Local_95.f_2), 6);
					func_54();
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
		{
			if (func_6(iLocal_103, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iLocal_103);
				if (func_53(iVar0))
				{
					func_243(iVar0);
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
		{
			if (!func_6(iLocal_103, 1, 1) || func_28(iLocal_103))
			{
				MISC::SET_BIT(&(Local_95.f_1), 15);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 5))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 4))
			{
				if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_5) > 600000)
				{
					MISC::SET_BIT(&(Local_95.f_1), 4);
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 12))
		{
			if (func_52())
			{
				MISC::SET_BIT(&(Local_95.f_3), 12);
			}
		}
	}
}

int func_52()//Position - 0x1A8F
{
	switch (Local_95.f_A[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28D == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_28D == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_53(int iParam0)//Position - 0x1AE4
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 17))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_95.f_24, unk_0x8000C77B5F336760(iParam0, 1), 625f))
	{
		return 1;
	}
	return 0;
}

void func_54()//Position - 0x1B2F
{
	func_492();
	Local_95 = 0;
}

int func_55()//Position - 0x1B3E
{
	if ((((((((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 6) || PLAYER::IS_PLAYER_DEAD(iLocal_103)) || func_29(iLocal_103, 1, 0)) || func_57(iLocal_103)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103)) || Global_24FBF9[iLocal_103 /*413*/].f_EE) || func_56(PLAYER::GET_PLAYER_PED(iLocal_103), joaat("TITAN")))
	{
		return 1;
	}
	if (iLocal_103 != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_56(int iParam0, int iParam1)//Position - 0x1BED
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_57(int iParam0)//Position - 0x1C33
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 14))
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 11))
	{
		return 1;
	}
	return 0;
}

void func_58()//Position - 0x1C72
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 5))
	{
		Local_95.f_5 = iLocal_106;
		MISC::SET_BIT(&(Local_95.f_1), 5);
	}
}

void func_59()//Position - 0x1C97
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 5))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_1), 5);
	}
}

int func_60()//Position - 0x1CB4
{
	bool bVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_245())
		{
			if (iLocal_101 == 1)
			{
				bVar0 = true;
			}
			else if (func_240())
			{
				if (func_237())
				{
					if (func_236())
					{
						bVar0 = true;
					}
					else if (func_234(func_235(iLocal_101)))
					{
						if (func_66())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_58();
			if (func_61())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_61()//Position - 0x1D2E
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (iLocal_101)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_463(iLocal_101))
					{
						if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iVar0 /*7*/]) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar0 /*7*/].f_2, 1)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar0 /*7*/].f_2, 6))
						{
							func_62(iVar0, func_65(iLocal_101), Local_95.f_20, Local_95.f_23);
						}
						iVar0++;
					}
					break;
			}
			if (iLocal_101 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_463(iLocal_101))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iVar0 /*7*/]))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			MISC::SET_BIT(&iLocal_98, 1);
			MISC::SET_BIT(&iLocal_98, 2);
			MISC::SET_BIT(&iLocal_98, 3);
			MISC::SET_BIT(&iLocal_98, 4);
			MISC::SET_BIT(&(Local_95.f_1), 0);
			MISC::SET_BIT(&Global_191DFF, iLocal_101);
			return 1;
		}
	}
	return 0;
}

void func_62(int iParam0, var uParam1, vector3 vParam2, float fParam3)//Position - 0x1E4C
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iParam0 /*7*/]))
		{
			if (NETWORK::_0xCB215C4B56A7FAE7(0) < NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_234(func_235(iLocal_101)))
					{
						if (func_64(&(Local_95.f_A[iParam0 /*7*/]), 7, func_235(iLocal_101), vParam2, fParam3, 1, 1, 1))
						{
							Local_95.f_A[iParam0 /*7*/].f_1 = iLocal_101;
							Local_95.f_A[iParam0 /*7*/].f_4 = uParam1;
							func_63(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_63(int iParam0)//Position - 0x1ECE
{
	char cVar0[16];
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 0))
		{
			if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), Global_180847);
				BRAIN::SET_PED_PATHS_WIDTH_PLANT(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 1);
				BRAIN::SET_PED_PATH_PREFER_TO_AVOID_WATER(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 0);
			}
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 0, 0, 0, 0, 0, 0, 1, 0);
			PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 13, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 41, 1);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 20, 1);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 132, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 118, false);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 311, true);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 300f, 10);
			PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 1);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			PED::SET_PED_NAME_DEBUG(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), &cVar0);
			switch (Local_95.f_A[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 2, 0);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 2);
					PED::SET_PED_COMBAT_RANGE(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 0);
					PED::SET_PED_USING_ACTION_MODE(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 0, 4294967295, 0);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 32, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 4, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 1024, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 128, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 256, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 16, true);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 0))
					{
						MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 2);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 17, 0);
					WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), joaat("weapon_knife"), 1, true, true);
					PED::SET_PED_MONEY(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 0);
					BRAIN::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), PLAYER::GET_PLAYER_PED(iLocal_103), 4294967295, 0, 2);
					NETWORK::_0x3FA36981311FA4FF(Local_95.f_A[iParam0 /*7*/], 1);
					break;
			}
			unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), SYSTEM::ROUND((Global_40001.f_99 * IntToFloat(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]))))), 0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 8))
			{
				MISC::SET_BIT(&(Local_95.f_1), 8);
			}
			MISC::SET_BIT(&(Local_95.f_A[iParam0 /*7*/].f_2), 1);
		}
	}
}

int func_64(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x225A
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, vParam3, fParam4, iParam6, bParam5);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, iParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
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

int func_65(int iParam0)//Position - 0x22B9
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_66()//Position - 0x22D6
{
	struct<6> Var0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (iLocal_101)
		{
			case 0:
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_103) && func_6(iLocal_103, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_D = 2;
					Var0.f_14 = 2;
					Var0.f_20 = 3212836864;
					Var0.f_22 = 1;
					Var0 = { unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iLocal_103), 1) };
					Var0.f_5 = 20f;
					if (func_67(Local_95.f_24, 40f, &(Local_95.f_20), &(Local_95.f_23), &Var0))
					{
						MISC::SET_BIT(&(Local_95.f_1), 3);
						return 1;
					}
				}
				else
				{
					NETWORK::_0xFB8F2A6F3DF08CBE();
					PED::_0xFEE4A5459472A9F8();
					if (Global_24B2CE.f_997)
					{
						PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
						Global_24B2CE.f_997 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_67(vector3 vParam0, float fParam1, var uParam2, var uParam3, var uParam4)//Position - 0x23A7
{
	struct<17> Var0;
	struct<18> Var1;
	vector3 vVar2;
	
	if (uParam4->f_5 > (fParam1 - 20f))
	{
		uParam4->f_5 = (fParam1 - 20f);
	}
	Var0 = 5;
	Var0.f_10 = 5;
	Var0.f_16 = 5;
	Var0.f_1C = 5;
	Var1.f_10 = 1;
	Var1.f_16 = 1;
	Var1.f_17 = 1;
	Var1.f_18 = 1;
	Var1 = { vParam0 };
	Var1.f_3 = uParam4->f_B;
	Var1.f_4 = fParam1;
	Var1.f_5 = 0;
	Var1.f_6 = 1;
	Var1.f_7 = 0;
	Var1.f_F = 0;
	Var1.f_10 = 1;
	Var1.f_11 = 0;
	if (func_68(&Var1, uParam4, &Var0))
	{
		if ((uParam4->f_C > 0f && uParam4->f_7) && uParam4->f_8)
		{
			vVar2 = { vParam0 - Var0[0 /*3*/] };
			if (vVar2.z > uParam4->f_C)
			{
				Var0[0 /*3*/] = { vParam0 };
				Var0.f_10[0] = uParam4->f_B;
			}
		}
		*uParam2 = { Var0[0 /*3*/] };
		*uParam3 = Var0.f_10[0];
		return 1;
	}
	return 0;
}

int func_68(var uParam0, var uParam1, var uParam2)//Position - 0x24A7
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	int iVar9;
	vector3 vVar10;
	vector3 vVar11;
	var uVar12;
	bool bVar13;
	struct<56> Var14;
	bool bVar15;
	
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_24B2CE.f_991 == *uParam0 || !Global_24B2CE.f_991.f_1 == uParam0->f_1) || !Global_24B2CE.f_991.f_2 == uParam0->f_2) || !Global_24B2CE.f_994 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		
		case 1:
			if (((((!Global_24B2CE.f_99F == uParam0->f_8 || !Global_24B2CE.f_99F.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99F.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A2 == uParam0->f_B) || !Global_24B2CE.f_9A2.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A2.f_2 == uParam0->f_B.f_2)
			{
				bVar13 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_24B2CE.f_99F == uParam0->f_8 || !Global_24B2CE.f_99F.f_1 == uParam0->f_8.f_1) || !Global_24B2CE.f_99F.f_2 == uParam0->f_8.f_2) || !Global_24B2CE.f_9A2 == uParam0->f_B) || !Global_24B2CE.f_9A2.f_1 == uParam0->f_B.f_1) || !Global_24B2CE.f_9A2.f_2 == uParam0->f_B.f_2) || !Global_24B2CE.f_9A5 == uParam0->f_E)
			{
				bVar13 = true;
			}
			break;
	}
	if (bVar13)
	{
		if (Global_24B2CE.f_98F == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_24B2CE.f_998))
			{
				if (Global_24B2CE.f_998 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) < func_233(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) < func_233(0))
				{
					return 0;
				}
			}
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_232();
		}
		Global_24B2CE.f_98F = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_995) > func_233(0))
	{
		Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
		func_226();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_B;
			}
			else
			{
				fVar2 = uParam0->f_B;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_B.f_1;
			}
			else
			{
				fVar3 = uParam0->f_B.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_B)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_B + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar2 = (uParam0->f_B - (0.5f * uParam0->f_E));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_E));
			}
			if (uParam0->f_8.f_1 < uParam0->f_B.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_B.f_1 + (0.5f * uParam0->f_E));
			}
			else
			{
				fVar3 = (uParam0->f_B.f_1 - (0.5f * uParam0->f_E));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_E));
			}
			break;
	}
	PATHFIND::_0x07FB139B592FA687(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		vVar6 = { *uParam0 };
	}
	else
	{
		vVar6 = { uParam0->f_8 + uParam0->f_B * Vector(0.5f, 0.5f, 0.5f) };
	}
	vVar7 = { vVar6 + Vector(-0.1f, -0.1f, -0.1f) };
	vVar8 = { vVar6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_24B2CE.f_98F)
	{
		NETWORK::_0xFB8F2A6F3DF08CBE();
		PED::_0xFEE4A5459472A9F8();
		func_232();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_225(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, 4294967295, 1, uParam1->f_5, uParam0->f_11, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_10[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::_0x3C67506996001F5E())
		{
			Global_24B2CE.f_9A6 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_24B2CE.f_991 = { *uParam0 };
					Global_24B2CE.f_994 = uParam0->f_4;
					break;
				
				case 1:
					Global_24B2CE.f_99F = { uParam0->f_8 };
					Global_24B2CE.f_9A2 = { uParam0->f_B };
					Global_24B2CE.f_9A5 = 0f;
					Global_24B2CE.f_991 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_24B2CE.f_99F = { uParam0->f_8 };
					Global_24B2CE.f_9A2 = { uParam0->f_B };
					Global_24B2CE.f_9A5 = uParam0->f_E;
					Global_24B2CE.f_991 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_224(vVar6.x, vVar6.y);
			}
			Global_24B2CE.f_990 = 1;
			Global_24B2CE.f_98F = 1;
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_995 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_998 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_24B2CE.f_98F)
	{
		if (Global_24B2CE.f_990 == 1)
		{
			if (PATHFIND::_0xF7B79A50B905A30D(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 5000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_15)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_12 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { vVar6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_A = 1;
					Var14.f_D = 1;
					Var14.f_F = 1;
					Var14.f_10 = 1;
					Var14.f_1F = 1;
					Var14.f_22 = joaat("TAILGATER");
					Var14.f_26 = 2;
					Var14.f_2D = 2;
					Var14.f_31 = 1123024896;
					Var14.f_35 = 999;
					Var14.f_36 = 1176256410;
					Var14.f_37 = 1;
					Var14.f_38 = 1;
					Var14.f_39 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_B = uParam1->f_9;
					Var14.f_12 = 1;
					if (uParam1->f_20 > 0f)
					{
						Var14.f_6 = uParam1->f_20;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_13 = { *uParam0 };
							Var14.f_19 = uParam0->f_4;
							break;
						
						case 1:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = 0f;
							break;
						
						case 2:
							Var14.f_13 = { uParam0->f_8 };
							Var14.f_16 = { uParam0->f_B };
							Var14.f_19 = uParam0->f_E;
							break;
					}
					Var14.f_1A = uParam0->f_7;
					Var14.f_C = uParam0->f_F;
					if (uParam0->f_15)
					{
						Var14.f_1E = 1;
						Var14.f_20 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_26[iVar9 /*3*/] = { uParam1->f_D[iVar9 /*3*/] };
						Var14.f_2D[iVar9] = uParam1->f_14[iVar9];
						iVar9++;
					}
					Var14.f_33 = uParam1->f_1E;
					Var14.f_37 = uParam0->f_10;
					if (uParam0->f_1A)
					{
						Var14.f_A = 0;
					}
					if (func_223(Global_440000.f_2559E))
					{
						Var14.f_9 = 1;
					}
					func_198(uParam2[0 /*3*/], &(uParam2->f_10[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_197(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_10[0] = uParam0->f_3;
						}
					}
					Global_24B2CE.f_990 = 9;
				}
				else
				{
					Global_24B2CE.f_990 = 2;
				}
			}
		}
		if (Global_24B2CE.f_990 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(vVar7, vVar8) || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 15000) || PATHFIND::_0x01708E8DD3FF8C65(vVar7, vVar8) == 0)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (uParam0->f_5 && !func_194(CAM::_0xDC9DA9E8789F5246(), 0))
				{
					Global_24B2CE.f_990 = 3;
				}
				else
				{
					Global_24B2CE.f_990 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_99A) > 7000)
			{
				func_193(vVar6.x, vVar6.y);
			}
		}
		if (Global_24B2CE.f_990 == 3)
		{
			if (func_192() || NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 10000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 4;
			}
		}
		if (Global_24B2CE.f_990 == 4)
		{
			if (PED::_0x3C67506996001F5E())
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
			}
			else
			{
				iVar0 = 0;
				func_226();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::_0x5A6FFA2433E2F14C(CAM::_0xDC9DA9E8789F5246(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
						
						case 1:
							func_191(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							if (NETWORK::_0x4BA92A18502BCA61(CAM::_0xDC9DA9E8789F5246(), vVar10, vVar11, uVar12, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::_0x4BA92A18502BCA61(CAM::_0xDC9DA9E8789F5246(), uParam0->f_8, uParam0->f_B, uParam0->f_E, *uParam1, iVar0))
							{
								Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
								Global_24B2CE.f_990 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_A)
					{
						iVar0 += 32;
					}
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					Global_24B2CE.f_990 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_191(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
							PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_24B2CE.f_990 == 5)
		{
			if (func_120(uParam2, uParam0, uParam1, 0))
			{
				if (Global_24B2CE.f_9AA.f_5)
				{
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					Global_24B2CE.f_990 = 6;
				}
				else
				{
					Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							vVar1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_10[0] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						}
					}
					Global_24B2CE.f_990 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 20000)
			{
				NETWORK::_0xFB8F2A6F3DF08CBE();
				PED::_0xFEE4A5459472A9F8();
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 8;
			}
		}
		if (Global_24B2CE.f_990 == 6)
		{
			iVar0 = 0;
			Global_24B2CE.f_9AA.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_119(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_118(uParam0->f_8, uParam0->f_B, uParam0->f_E))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_A)
			{
				iVar0 += 32;
			}
			if (uParam0->f_F)
			{
				iVar0 += 16;
			}
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_990 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::_0x2DF9038C90AD5264(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_191(uParam0->f_8, uParam0->f_B, &vVar10, &vVar11, &uVar12);
					PED::_0xB2AFF10216DEFA2F(vVar10, vVar11, uVar12, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::_0xB2AFF10216DEFA2F(uParam0->f_8, uParam0->f_B, uParam0->f_E, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_24B2CE.f_990 == 7)
		{
			if (func_120(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_24B2CE.f_A30[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_197(Global_24B2CE.f_A30[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									
									case 1:
										if (func_116(Global_24B2CE.f_A30[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_24B2CE.f_A30[iVar9 /*3*/], uParam0->f_8, uParam0->f_B, uParam0->f_E, 0, 1))
										{
											*(uParam2[0 /*3*/]) = { Global_24B2CE.f_A30[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								vVar1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								vVar1 = { uParam0->f_8 + uParam0->f_B / Vector(2f, 2f, 2f) };
								break;
						}
						func_71(&vVar1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { vVar1 };
					}
				}
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						vVar1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_10[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
						iVar9++;
					}
				}
				Global_24B2CE.f_990 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), Global_24B2CE.f_996) > 20000)
			{
				Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
				Global_24B2CE.f_990 = 8;
			}
		}
		if (Global_24B2CE.f_990 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_70(Global_24B2CE.f_1E3))
				{
				}
			}
			else if (Global_24B2CE.f_9AA.f_2)
			{
				func_69(uParam2, &(Global_24B2CE.f_9AA.f_6));
			}
			else
			{
				if (uParam0->f_F)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_24B2CE.f_991 };
				func_71(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_24B2CE.f_996 = HUD::_0x13C4B962653A5280();
			Global_24B2CE.f_990 = 9;
		}
		if (Global_24B2CE.f_990 == 9)
		{
			Global_24B2CE.f_98F = 0;
			NETWORK::_0xFB8F2A6F3DF08CBE();
			PED::_0xFEE4A5459472A9F8();
			func_232();
			return 1;
		}
		Global_24B2CE.f_995 = HUD::_0x13C4B962653A5280();
	}
	return 0;
}

void func_69(var uParam0, var uParam1)//Position - 0x3460
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_10[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_16[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_70(int iParam0)//Position - 0x34AA
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_71(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x34C9
{
	vector3 vVar0;
	var uVar1;
	struct<56> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	float fVar10;
	
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_A = 1;
	Var2.f_D = 1;
	Var2.f_F = 1;
	Var2.f_10 = 1;
	Var2.f_1F = 1;
	Var2.f_22 = joaat("TAILGATER");
	Var2.f_26 = 2;
	Var2.f_2D = 2;
	Var2.f_31 = 1123024896;
	Var2.f_35 = 999;
	Var2.f_36 = 1176256410;
	Var2.f_37 = 1;
	Var2.f_38 = 1;
	Var2.f_39 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_16)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						vVar7 = { *uParam5 };
						if (func_119(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 1:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_118(uParam5->f_8, uParam5->f_B, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					
					case 2:
						vVar7 = { uParam5->f_8 + uParam5->f_B * Vector(0.5f, 0.5f, 0.5f) };
						if (func_118(uParam5->f_8, uParam5->f_B, uParam5->f_E) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vVar7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_75(*uParam0, &vVar0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		vVar0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_A = 0;
		}
		else
		{
			Var2.f_A = 1;
		}
		Var2.f_D = uParam5->f_F;
		Var2.f_F = iParam3;
		if (uParam6->f_20 > 0f)
		{
			Var2.f_6 = uParam6->f_20;
		}
		if (bParam4)
		{
			Var2.f_12 = 1;
			Var2.f_1A = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_13 = { *uParam5 };
					Var2.f_19 = uParam5->f_4;
					break;
				
				case 1:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = 0f;
					break;
				
				case 2:
					Var2.f_13 = { uParam5->f_8 };
					Var2.f_16 = { uParam5->f_B };
					Var2.f_19 = uParam5->f_E;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_26[iVar4 /*3*/] = { uParam6->f_D[iVar4 /*3*/] };
			Var2.f_2D[iVar4] = uParam6->f_14[iVar4];
			iVar4++;
		}
		Var2.f_33 = uParam6->f_1E;
		Var2.f_37 = uParam5->f_10;
		if (func_73(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			Var2.f_9 = 1;
		}
		func_198(&vVar0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				vVar8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			
			case 1:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				break;
			
			case 2:
				vVar8 = { uParam5->f_8 };
				vVar9 = { uParam5->f_B };
				fVar10 = uParam5->f_E;
				break;
		}
		if (!func_72(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
		{
			if (func_75(*uParam0, &vVar0, iVar6, iParam3, 0))
			{
				if (!func_72(vVar0, uParam5->f_7, vVar8, vVar9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						vVar0 = { vVar8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
					{
						vVar0.z = uVar3;
					}
				}
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					vVar0 = { vVar8 + vVar9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					vVar0 = { vVar8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, 0, 0))
				{
					vVar0.z = uVar3;
				}
			}
		}
	}
	*uParam0 = { vVar0 };
	Global_24B2CE.f_292 = 1;
}

int func_72(vector3 vParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x3912
{
	switch (iParam1)
	{
		case 0:
			if (SYSTEM::VDIST(vParam0, vParam2) <= fParam4)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_116(vParam0, vParam2, vParam3, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam2, vParam3, fParam4, 0, 1);
			break;
	}
	return 0;
}

int func_73(int iParam0, bool bParam1)//Position - 0x397F
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TERBYTE"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_13())
			{
				return func_74(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_74(int iParam0)//Position - 0x3A0D
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
			break;
		
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
			break;
		
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
			break;
		
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
			return 3;
			break;
		
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
			break;
		
		case 101:
			return 10;
			break;
		
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
	}
	return 4294967295;
}

int func_75(vector3 vParam0, var uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x3D67
{
	if (func_115(vParam0, uParam1))
	{
		if (func_76(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(vParam0, 0, uParam1, iParam2))
	{
		if (func_76(vParam0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_76(vector3 vParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x3DC3
{
	float fVar0;
	var uVar1;
	var uVar2;
	
	fVar0 = SYSTEM::VDIST(vParam0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_96(Global_24B2CE.f_1FA, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!func_83(*uParam1, 1056964608))
			{
				if (!func_77(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_77(var uParam0, bool bParam1)//Position - 0x3E48
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { *uParam0 };
	iVar2 = func_82(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[iVar2])
	{
		if (func_81(vVar1, &(Global_24C681[iVar2 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_24C681[iVar2 /*127*/][iVar0 /*7*/], Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_3, Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[8])
	{
		if (func_81(vVar1, &(Global_24C681[8 /*127*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_78(&vVar1, Global_24C681[8 /*127*/][iVar0 /*7*/], Global_24C681[8 /*127*/][iVar0 /*7*/].f_3, Global_24C681[8 /*127*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_78(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x3F55
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar5;
	float fVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	vector3 vVar11;
	
	vVar0 = { vParam2 - vParam1 };
	vVar0.z = 0f;
	vVar1 = { *uParam0 - vParam1 };
	vVar1.z = 0f;
	vVar2 = { func_80(0f, 0f, 1f, vVar0) };
	vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
	fVar3 = (SYSTEM::VMAG(vVar1) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar0.x, vVar0.y, vVar1.x, vVar1.y)));
	if (fVar3 < (fParam3 * 0.5f))
	{
		if (!bParam5)
		{
			if (func_79(vVar2, vVar1) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar1) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fParam3 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fParam3 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar4 = { *uParam0 + vVar2 };
		fVar6 = SYSTEM::VDIST(vParam1.x, vParam1.y, 0f, vParam2.x, vParam2.y, 0f);
		vVar7 = { vParam1 + vParam2 / Vector(2f, 2f, 2f) };
		vVar7.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar0) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		vVar2 = { vVar2 * FtoV((fParam3 * 0.5f)) };
		vVar8 = { vVar7 - vVar2 };
		vVar9 = { vVar7 + vVar2 };
		vVar10 = { vVar9 - vVar8 };
		vVar10.z = 0f;
		vVar11 = { *uParam0 - vVar8 };
		vVar11.z = 0f;
		vVar2 = { func_80(0f, 0f, 1f, vVar10) };
		vVar2 = { vVar2 / FtoV(SYSTEM::VMAG(vVar2)) };
		fVar3 = (SYSTEM::VMAG(vVar11) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar10.x, vVar10.y, vVar11.x, vVar11.y)));
		if (!bParam5)
		{
			if (func_79(vVar2, vVar11) >= 0f)
			{
				vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) - fVar3) + fParam4)) };
			}
			else
			{
				vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) - fVar3) + fParam4) * -1f)) };
			}
		}
		else if (func_79(vVar2, vVar11) >= 0f)
		{
			vVar2 = { vVar2 * FtoV(((((fVar6 * 0.5f) + fVar3) + fParam4) * -1f)) };
		}
		else
		{
			vVar2 = { vVar2 * FtoV((((fVar6 * 0.5f) + fVar3) + fParam4)) };
		}
		vVar5 = { *uParam0 + vVar2 };
		if (SYSTEM::VDIST(vVar4, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(vVar5, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { vVar4 };
		}
		else
		{
			*uParam0 = { vVar5 };
		}
	}
}

float func_79(vector3 vParam0, vector3 vParam1)//Position - 0x4225
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

Vector3 func_80(vector3 vParam0, vector3 vParam1)//Position - 0x4246
{
	return ((vParam0.y * vParam1.z) - (vParam0.z * vParam1.y)), ((vParam0.z * vParam1.x) - (vParam0.x * vParam1.z)), ((vParam0.x * vParam1.y) - (vParam0.y * vParam1.x));
}

bool func_81(vector3 vParam0, var uParam1)//Position - 0x427F
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
}

int func_82(struct<2> Param0, var uParam1)//Position - 0x429F
{
	if (Param0.f_1 > Global_24CB03[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_24CB03[1])
	{
		if (Param0 < Global_24CB07[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_24CB03[2])
	{
		if (Param0 < Global_24CB07[1])
		{
			return 3;
		}
		else if (Param0 < Global_24CB07[2])
		{
			return 4;
		}
		else if (Param0 < Global_24CB07[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_83(vector3 vParam0, float fParam1)//Position - 0x433A
{
	int iVar0;
	
	if (func_93(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (Global_440000.f_E78A > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_E78A)
			{
				if (Global_440000.f_E78B[iVar0 /*80*/].f_7 != 0)
				{
					if (func_84(vParam0, Global_440000.f_E78B[iVar0 /*80*/], Global_440000.f_E78B[iVar0 /*80*/].f_6, Global_440000.f_E78B[iVar0 /*80*/].f_7, fParam1))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_D972 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_D972)
			{
				if (Global_440000.f_D975[iVar0 /*149*/].f_10 != 0)
				{
					if (func_84(vParam0, Global_440000.f_D975[iVar0 /*149*/], Global_440000.f_D975[iVar0 /*149*/].f_3, Global_440000.f_D975[iVar0 /*149*/].f_10, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_440000.f_136F4 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_440000.f_136F4)
			{
				if (Global_440000.f_136F8[iVar0 /*217*/].f_C != 0)
				{
					if (func_84(vParam0, Global_440000.f_136F8[iVar0 /*217*/], Global_440000.f_136F8[iVar0 /*217*/].f_3, Global_440000.f_136F8[iVar0 /*217*/].f_C, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_84(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3, float fParam4)//Position - 0x44C3
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	
	if (SYSTEM::VDIST(vParam0, vParam1) < func_92(iParam3, 1008981770))
	{
		func_85(vParam1, fParam2, iParam3, &vVar0, &vVar1, &fVar2, fParam4);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar0, vVar1, fVar2, 0, 1))
		{
			return 1;
		}
	}
	return 0;
}

void func_85(vector3 vParam0, float fParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6)//Position - 0x4516
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	
	vVar0 = { 0f, 1f, 0f };
	func_91(&vVar0, 0f, 0f, fParam1);
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	func_86(iParam2, &vVar1, &vVar2, 1086324736, 1080033280, 1077936128);
	vVar3 = { vParam0 + vVar0 * FtoV((vVar2.y + fParam6)) };
	vVar3.z = (vVar3.z - ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	vVar4 = { vParam0 - vVar0 * FtoV(((vVar1.y * -1f) + fParam6)) };
	vVar4.z = (vVar4.z + ((0.5f * MISC::ABSF((vVar2.z - vVar1.z))) + fParam6));
	*uParam3 = { vVar3 };
	*uParam4 = { vVar4 };
	*uParam5 = MISC::ABSF((vVar2.x - vVar1.x));
}

void func_86(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x45E2
{
	int iVar0;
	
	if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_89(iParam0);
		if (iVar0 != 0)
		{
			func_87(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_87(int iParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5)//Position - 0x46A1
{
	int iVar0;
	
	func_88(iParam0, &Global_1413D0);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(Global_1413D0[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1413D0[iVar0], &(Global_1413D4[iVar0 /*3*/]), &(Global_1413DB[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1413D4[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1413DB[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1413D4[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1413DB[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1413D4[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1413DB[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1413E2[iVar0] = (Global_1413DB[iVar0 /*3*/] - Global_1413D4[iVar0 /*3*/]);
		Global_1413E5[iVar0] = (Global_1413DB[iVar0 /*3*/].f_1 - Global_1413D4[iVar0 /*3*/].f_1);
		Global_1413E8[iVar0] = (Global_1413DB[iVar0 /*3*/].f_2 - Global_1413D4[iVar0 /*3*/].f_2);
		if (Global_1413E2[iVar0] > Global_1413EB)
		{
			Global_1413EB = Global_1413E2[iVar0];
		}
		if (Global_1413E8[iVar0] > Global_1413EC)
		{
			Global_1413EC = Global_1413E8[iVar0];
		}
		iVar0++;
	}
	Global_1413ED = (Global_1413EB * -0.5f);
	Global_1413F0 = (Global_1413EB * 0.5f);
	Global_1413ED.f_1 = ((((0.5f * Global_1413E5[0]) + Global_1413E5[1]) + Global_1413D0.f_3) * -1f);
	Global_1413F0.f_1 = (0.5f * Global_1413E5[0]);
	Global_1413ED.f_2 = (Global_1413E8[0] * -0.5f);
	Global_1413F0.f_2 = (Global_1413E8[0] * 0.5f);
	*uParam1 = { Global_1413ED };
	*uParam2 = { Global_1413F0 };
}

void func_88(int iParam0, var uParam1)//Position - 0x48AD
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("HAULER2");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("PHANTOM3");
			(*uParam1)[1] = joaat("TRAILERLARGE");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("NIGHTSHARK");
			(*uParam1)[1] = joaat("TRAILERSMALL2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_89(int iParam0)//Position - 0x492E
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_90(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_90(int iParam0)//Position - 0x495D
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

void func_91(var uParam0, vector3 vParam1)//Position - 0x496F
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	fVar0 = SYSTEM::COS(vParam1.x);
	fVar1 = SYSTEM::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.y = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.z = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.y);
	fVar1 = SYSTEM::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.y = uParam0->f_1;
	vVar2.z = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = SYSTEM::COS(vParam1.z);
	fVar1 = SYSTEM::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.y = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.z = uParam0->f_2;
	*uParam0 = { vVar2 };
}

float func_92(int iParam0, float fParam1)//Position - 0x4A46
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_86(iParam0, &vVar0, &vVar1, 1086324736, 1080033280, 1077936128);
	vVar2 = { vVar1 - vVar0 };
	fVar3 = (SYSTEM::SQRT(((((vVar2.x * 0.5f) * (vVar2.x * 0.5f)) + ((vVar2.y * 0.5f) * (vVar2.y * 0.5f))) + ((vVar2.z * 0.5f) * (vVar2.z * 0.5f)))) + fParam1);
	return fVar3;
}

int func_93(int iParam0, bool bParam1)//Position - 0x4AC6
{
	if (bParam1)
	{
		if (func_94(iParam0))
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

bool func_94(int iParam0)//Position - 0x4AF2
{
	return func_95(iParam0);
}

bool func_95(int iParam0)//Position - 0x4B00
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

int func_96(vector3 vParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x4B1A
{
	int iVar0;
	bool bVar1;
	
	if (func_109(vParam0))
	{
		if (func_108(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (func_99(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (func_98(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				func_97(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

void func_97(var uParam0, vector3 vParam1, float fParam2, float fParam3, bool bParam4, float fParam5)//Position - 0x4BD6
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { *uParam0 - vParam1 };
	vVar0.z = 0f;
	if (SYSTEM::VMAG(vVar0) > 0f)
	{
		vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	}
	else
	{
		vVar0 = { 0f, 1f, 0f };
		if (fParam5 == 0f)
		{
			func_91(&vVar0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_91(&vVar0, 0f, 0f, fParam5);
		}
	}
	vVar0 = { vVar0 * FtoV((fParam2 + fParam3)) };
	if (!bParam4)
	{
		vVar1 = { vParam1 + vVar0 };
	}
	else
	{
		vVar1 = { vParam1 - vVar0 };
	}
	*uParam0 = vVar1.x;
	uParam0->f_1 = vVar1.y;
}

int func_98(vector3 vParam0, float fParam1)//Position - 0x4C7E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(vParam0, Global_24B2CE.f_A9F[iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_99(var uParam0, bool bParam1, bool bParam2)//Position - 0x4CB9
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	
	if (func_104(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			vVar2 = { *uParam0 };
			func_101(&vVar2, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_104(vVar2, &uVar1) || func_100(vVar2))
			{
				vVar2 = { *uParam0 };
				func_101(&vVar2, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { vVar2 };
		}
		return 1;
	}
	return 0;
}

int func_100(vector3 vParam0)//Position - 0x4D3D
{
	float fVar0;
	
	if (Global_24B2CE.f_24B > 0f)
	{
		fVar0 = SYSTEM::VDIST(vParam0, Global_24B2CE.f_248);
		if (fVar0 < Global_24B2CE.f_24B)
		{
			return 1;
		}
	}
	return 0;
}

void func_101(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x4D76
{
	if (bParam4)
	{
		switch (uParam1->f_A)
		{
			case 0:
				*uParam0 = { func_103(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_103(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_103(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_A)
		{
			case 0:
				func_97(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_102(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_78(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_102(var uParam0, struct<2> Param1, var uParam2, struct<2> Param3, var uParam4, float fParam5, bool bParam6)//Position - 0x4E80
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	vVar0 = { *uParam0 };
	fVar1 = (*uParam0 - Param1);
	fVar2 = (*uParam0 - Param3);
	if (fVar1 < fVar2)
	{
		fVar3 = fVar1;
	}
	else
	{
		fVar3 = fVar2;
	}
	fVar4 = (uParam0->f_1 - Param1.f_1);
	fVar5 = (uParam0->f_1 - Param3.f_1);
	if (fVar4 < fVar5)
	{
		fVar6 = fVar4;
	}
	else
	{
		fVar6 = fVar5;
	}
	vVar0 = { *uParam0 };
	if (!bParam6)
	{
		if (fVar3 < fVar6)
		{
			if (fVar1 < fVar2)
			{
				vVar0.x = (Param1 - fParam5);
			}
			else
			{
				vVar0.x = (Param3 + fParam5);
			}
		}
		else if (fVar4 < fVar5)
		{
			vVar0.y = (Param1.f_1 - fParam5);
		}
		else
		{
			vVar0.y = (Param3.f_1 + fParam5);
		}
	}
	else if (fVar3 < fVar6)
	{
		if (fVar1 < fVar2)
		{
			vVar0.x = (Param3 + fParam5);
		}
		else
		{
			vVar0.x = (Param1 - fParam5);
		}
	}
	else if (fVar4 < fVar5)
	{
		vVar0.y = (Param3.f_1 + fParam5);
	}
	else
	{
		vVar0.y = (Param1.f_1 - fParam5);
	}
	*uParam0 = { vVar0 };
}

Vector3 func_103(vector3 vParam0, vector3 vParam1, vector3 vParam2, float fParam3, int iParam4, float fParam5, bool bParam6)//Position - 0x4F7F
{
	int iVar0;
	vector3 vVar1;
	
	switch (iParam4)
	{
		case 0:
			func_97(&vParam0, vParam1, fParam3, fParam5, bParam6, 0);
			break;
		
		case 1:
			func_102(&vParam0, vParam1, vParam2, fParam5, bParam6);
			break;
		
		case 2:
			func_78(&vParam0, vParam1, vParam2, fParam3, fParam5, bParam6);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(vParam0, iVar0 * 5, &vVar1, 1, 0f, 0f);
		switch (iParam4)
		{
			case 0:
				if (!func_197(vVar1, vParam1, fParam3, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 1:
				if (!func_116(vVar1, vParam1, vParam2, 0, 0))
				{
					return vVar1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar1, vParam1, vParam2, fParam3, 0, 1))
				{
					return vVar1;
				}
				break;
		}
		iVar0++;
	}
	return vParam0;
}

int func_104(vector3 vParam0, var uParam1)//Position - 0x5082
{
	int iVar0;
	int iVar1;
	
	if (func_107())
	{
		return 0;
	}
	iVar1 = func_106();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9 == 1)
		{
			if (func_105(vParam0, &(Global_24B2CE.f_16A[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam1 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_105(vector3 vParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x50E6
{
	switch (uParam1->f_A)
	{
		case 0:
			return func_197(vParam0, *uParam1, ((uParam1->f_6 + fParam2) + (IntToFloat(Global_24B2CE.f_A9D) * uParam1->f_8)), bParam3, bParam4);
			break;
		
		case 1:
			return func_116(vParam0, *uParam1 + Vector((fParam2 * -1f), (fParam2 * -1f), (fParam2 * -1f)), uParam1->f_3 + Vector(fParam2, fParam2, fParam2), bParam3, bParam4);
			break;
		
		case 2:
			if (bParam3 && bParam4)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0);
			}
			else if (bParam3)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z < uParam1->f_2 && vParam0.z < uParam1->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam4)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 0) && !(vParam0.z > uParam1->f_2 && vParam0.z > uParam1->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, *uParam1, uParam1->f_3, uParam1->f_6, 0, 1);
			}
			break;
	}
	return 0;
}

int func_106()//Position - 0x5247
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24B2CE.f_16A[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_107()//Position - 0x527A
{
	return Global_197632.f_1C;
}

int func_108(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x5288
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_24C5D6[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_24C5D6[iVar0 /*17*/].f_10))
			{
				if (func_105(*uParam0, &(Global_24C5D6[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_24C5D6[iVar0 /*17*/].f_C)
						{
							*uParam0 = { Global_24C5D6[iVar0 /*17*/].f_D };
						}
						else
						{
							vVar1 = { *uParam0 };
							func_101(&vVar1, &(Global_24C5D6[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_108(&vVar1, 0, 0, 0, 1))
							{
								vVar1 = { *uParam0 };
								func_101(&vVar1, &(Global_24C5D6[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { vVar1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_109(vector3 vParam0)//Position - 0x5363
{
	int iVar0;
	vector3 vVar1;
	
	if (!Global_24B2CE.f_1FD && !Global_24B2CE.f_1FE)
	{
		if (!Global_24B2CE.f_2C.f_13A)
		{
			if (!func_113(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 1;
			}
			if (!func_112(vParam0, 1008981770))
			{
				if (!func_108(&vParam0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_108(&vParam0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_111(vParam0, 1008981770);
				if (iVar0 > 4294967295)
				{
					vVar1 = { func_110(&(Global_24B2CE.f_2C[iVar0 /*12*/])) };
					if (!func_108(&vVar1, 0, 0, 0, 1))
					{
						if (!func_108(&vParam0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_110(var uParam0)//Position - 0x5423
{
	switch (uParam0->f_A)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_111(vector3 vParam0, float fParam1)//Position - 0x546C
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_105(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_112(vector3 vParam0, float fParam1)//Position - 0x54B4
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_24B2CE.f_2C[iVar0 /*12*/].f_9)
		{
			if (func_105(vParam0, &(Global_24B2CE.f_2C[iVar0 /*12*/]), fParam1, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_113(int iParam0, bool bParam1)//Position - 0x54FB
{
	if (Global_1406BF != 0)
	{
		return func_114(iParam0) != 0;
	}
	return func_93(iParam0, bParam1);
}

int func_114(int iParam0)//Position - 0x5521
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_24FBF9[iParam0 /*413*/].f_1;
	}
	return 0;
}

int func_115(vector3 vParam0, var uParam1)//Position - 0x5543
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = 4294967295;
	fVar2 = 999999.9f;
	if (Global_24B2CE.f_8C5 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C5)
		{
			fVar3 = SYSTEM::VDIST(Global_24B2CE.f_8C6[iVar0 /*4*/], vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == 4294967295)
		{
			*uParam1 = { Global_24B2CE.f_8C6[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_116(vector3 vParam0, vector3 vParam1, vector3 vParam2, bool bParam3, bool bParam4)//Position - 0x55BD
{
	func_117(&vParam1, &vParam2);
	if (((!vParam0.x >= vParam1.x || !vParam0.y >= vParam1.y) || !vParam0.x <= vParam2.x) || !vParam0.y <= vParam2.y)
	{
		return 0;
	}
	if (bParam3 && bParam4)
	{
		return 1;
	}
	else if (bParam3)
	{
		if (vParam0.z >= vParam1.z)
		{
			return 1;
		}
	}
	else if (bParam4)
	{
		if (vParam0.z <= vParam2.z)
		{
			return 1;
		}
	}
	else if (vParam0.z >= vParam1.z && vParam0.z <= vParam2.z)
	{
		return 1;
	}
	return 0;
}

void func_117(var uParam0, var uParam1)//Position - 0x5668
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_118(vector3 vParam0, vector3 vParam1, float fParam2)//Position - 0x56CA
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (vParam0.x > vParam1.x)
	{
		vVar1.x = vParam0.x;
		vVar0.x = vParam1.x;
	}
	else
	{
		vVar1.x = vParam1.x;
		vVar0.x = vParam0.x;
	}
	if (vParam0.y > vParam1.y)
	{
		vVar1.y = vParam0.y;
		vVar0.y = vParam1.y;
	}
	else
	{
		vVar1.y = vParam1.y;
		vVar0.y = vParam0.y;
	}
	if (vParam0.z > vParam1.z)
	{
		vVar1.z = vParam0.z;
		vVar0.z = vParam1.z;
	}
	else
	{
		vVar1.z = vParam1.z;
		vVar0.z = vParam0.z;
	}
	if (SYSTEM::VMAG(vVar1 - vVar0) > 100f)
	{
		return 1;
	}
	if (fParam2 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_119(float fParam0)//Position - 0x5775
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_120(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x578D
{
	vector3 vVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	
	if (Global_24B2CE.f_9AA.f_1 == 0 && Global_24B2CE.f_9AA == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::_0x3C891A251567DFCE(&(Global_24B2CE.f_9AA.f_1)))
			{
				case 0:
					func_189(uParam1, uParam2);
					if (!Global_24B2CE.f_9AA.f_2)
					{
						if (uParam2->f_7 && Global_24B2CE.f_225.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_10[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_15)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_12 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
							}
							if (uParam1->f_5 && func_70(Global_24B2CE.f_1E3))
							{
								if (!Global_24B2CE.f_9AA.f_5)
								{
									Global_24B2CE.f_9AA.f_5 = 1;
								}
								else
								{
									func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_71(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_189(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::_0x3C67506996001F5E())
		{
			if (!PED::_0xF445DE8DA80A1792())
			{
				if (PED::_0xA586FBEB32A53DBB())
				{
					func_189(uParam1, uParam2);
					Global_24B2CE.f_9AA.f_1 = PED::_0xA635C11B8C44AFC2();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::_0xFEE4A5459472A9F8();
				func_189(uParam1, uParam2);
				if (!Global_24B2CE.f_9AA.f_2)
				{
					Global_24B2CE.f_9AA.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_186(Global_24B2CE.f_225, &(Global_24B2CE.f_9AA.f_39), &(Global_24B2CE.f_9AA.f_5A));
	}
	if (uParam2->f_7 && !Global_24B2CE.f_9AA.f_4)
	{
		Global_24B2CE.f_9AA.f_4 = 1;
		func_128(*uParam1, uParam1->f_3, uParam1, uParam2, 1, 4294967295);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_24B2CE.f_9AA.f_1 > 0 || Global_24B2CE.f_9AA > 0)
	{
		if (uParam1->f_5 || PED::_0x3C67506996001F5E())
		{
			iVar2 = 0;
			while (iVar2 < Global_24B2CE.f_9AA.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_24B2CE.f_9AA.f_3)
					{
						iVar2 = Global_24B2CE.f_9AA.f_3 + 1;
					}
					if (iVar2 > (Global_24B2CE.f_9AA.f_1 - 1))
					{
						iVar2 = (Global_24B2CE.f_9AA.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &vVar0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::_0x280C7E3AC7F56E90(iVar2, &vVar0, &(vVar0.f_1), &(vVar0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::_0x6C34F1208B8923FD(iVar2);
					}
					else
					{
						PED::_0xB782F8238512BAD5(iVar2, &iVar3);
					}
					func_128(vVar0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_24B2CE.f_9AA.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_24B2CE.f_9AA.f_1;
		}
		if (Global_24B2CE.f_9AA.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_24B2CE.f_B37)
			{
				func_122(&(Global_24B2CE.f_9AA.f_6[0 /*10*/]), &(Global_24B2CE.f_9AA.f_6[1 /*10*/]), &(Global_24B2CE.f_9AA.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_70(Global_24B2CE.f_1E3))
			{
				if (Global_24B2CE.f_9AA.f_2)
				{
					func_69(uParam0, &(Global_24B2CE.f_9AA.f_6));
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
					func_71(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_24B2CE.f_9AA.f_2)
			{
				func_69(uParam0, &(Global_24B2CE.f_9AA.f_6));
				func_121(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24B2CE.f_9AA.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_10[0]));
				if (!func_77(uParam0[0 /*3*/], 0))
				{
					uParam0->f_10[0] = (uParam0->f_10[0] * 57.29578f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
					func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_121(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
				func_71(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_121(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_24B2CE.f_991 };
		if (uParam1->f_5 && func_70(Global_24B2CE.f_1E3))
		{
			if (!Global_24B2CE.f_9AA.f_5)
			{
				Global_24B2CE.f_9AA.f_5 = 1;
			}
			else
			{
				func_71(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_F)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_71(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_10[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_121(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_121(vector3 vParam0)//Position - 0x5D54
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_24B2CE.f_A30[(3 - iVar0) /*3*/] = { Global_24B2CE.f_A30[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_24B2CE.f_A30[0 /*3*/] = { vParam0 };
}

void func_122(var uParam0, var uParam1, var uParam2)//Position - 0x5DA4
{
	if (func_70(Global_24B2CE.f_1E3) && func_127() < 4096)
	{
		func_126(uParam0, 0f);
		func_126(uParam1, uParam0->f_2);
		func_126(uParam2, uParam1->f_2);
	}
	else
	{
		func_125(uParam0);
		func_124(uParam2, uParam0->f_4);
		func_123(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_123(var uParam0, vector3 vParam1, vector3 vParam2)//Position - 0x5E09
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam1);
			fVar3 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam2);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_24BE21[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_124(var uParam0, vector3 vParam1)//Position - 0x5EA8
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_24BE21[iVar0 /*10*/].f_4, vParam1);
			fVar2 = (fVar2 * Global_24BE21[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_125(var uParam0)//Position - 0x5F2A
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_24BE21[iVar0 /*10*/].f_1;
				Var2 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_126(var uParam0, float fParam1)//Position - 0x5F97
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_2 < fVar1 && Global_24BE21[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_24BE21[iVar0 /*10*/].f_2;
				Var2 = { Global_24BE21[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_127()//Position - 0x601A
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_24BE21[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_128(vector3 vParam0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x6051
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	bool bVar13;
	int iVar14;
	vector3 vVar15;
	vector3 vVar16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_24B2CE.f_1E3 == 1)
		{
			if (MISC::ABSF((Global_24B2CE.f_1FA.f_2 - vParam0.z)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (func_183(CAM::_0xDC9DA9E8789F5246()))
		{
			if (iParam5 == 4294967295)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == 4294967295)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!func_182(vParam0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::_0x68772DB2B2526F9F(AUDIO::_0x0626A247D2405330(), vParam0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::_0x68772DB2B2526F9F(AUDIO::_0x0626A247D2405330(), vParam0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!func_181(vParam0, uParam3->f_5, 1, 1, 1, 1, 1, 1))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_D[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(vParam0, uParam3->f_D[iVar11 /*3*/]) > uParam3->f_14[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_17) > 0f && SYSTEM::VMAG(uParam3->f_1A) > 0f) && uParam3->f_1D > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam3->f_17, uParam3->f_1A, uParam3->f_1D, 0, 1))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (func_175(vParam0, fParam1, uParam2->f_F, func_180(1), uParam2->f_10, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_24B2CE.f_3;
		}
	}
	else if (!func_172(vParam0, 25f, CAM::_0xDC9DA9E8789F5246(), 1, 1))
	{
		if (uParam2->f_F)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_168(vParam0, fVar1, 1, 1, 120f, 0, 4294967295, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_168(vParam0, fVar1, 1, 1, 60f, 0, 4294967295, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B2)
		{
			vVar12 = { Global_24B2CE.f_1FA };
			if (Global_24B2CE.f_1E3 == 26)
			{
				vVar12 = { Global_24B2CE.f_225.f_12 };
			}
			if (!func_98(vParam0, 0.5f))
			{
				if (func_109(vVar12))
				{
					if (!func_108(&vParam0, 0, 0, 0, 1) && !func_167(&vParam0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_167(&vParam0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_166(vParam0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(func_165(CAM::_0xDC9DA9E8789F5246()) && func_164(CAM::_0xDC9DA9E8789F5246())))
		{
			if (!func_163(&vParam0, &(Global_24B2CE.f_9AA.f_5A), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!func_164(CAM::_0xDC9DA9E8789F5246()))
		{
			if (!func_162(vParam0, &(Global_24B2CE.f_9AA.f_39), &(Global_24B2CE.f_9AA.f_5A), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_161(vParam0))
	{
		if (uParam2->f_5)
		{
			if (func_70(Global_24B2CE.f_1E3))
			{
				if (func_112(vParam0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (func_160(vParam0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_24B2CE.f_2C.f_37)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_24B2CE.f_2B2)
		{
			if (!func_99(&vParam0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_77(&vParam0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = func_111(vParam0, 1008981770);
		if (iVar14 > 4294967295)
		{
			func_159(vParam0, &vVar15, &vVar16, &fVar17);
			if (!func_154(&(Global_24B2CE.f_2C[iVar14 /*12*/]), vVar15, vVar16, fVar17))
			{
				iVar8 = 4294967295;
			}
		}
		else
		{
			iVar8 = 4294967295;
		}
	}
	if (func_83(vParam0, 1056964608))
	{
		iVar8 = 4294967295;
	}
	if (uParam3->f_21)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 0.3f))
		{
			iVar8 = 4294967295;
		}
	}
	if (uParam3->f_22)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0.x, vParam0.y, (vParam0.z + 1f), 1f))
		{
			iVar8 = 4294967295;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (func_153(vParam0, 1, 0, uParam2->f_F, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_24B2CE.f_B37 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_15)
			{
				fVar0 = func_145(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = func_145(vParam0, Global_24B2CE.f_991, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_70(Global_24B2CE.f_1E3) && iVar8 < 4096)
			{
				Var19.f_2 = func_143(vParam0);
			}
			uVar7 = func_134(vParam0, 1, 0, 0, 0);
			Var19.f_4 = { vParam0 };
			Var19.f_7 = fParam1;
			Var19 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = uVar7;
			func_133(Var19);
			Global_24B2CE.f_9AA.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_24B2CE.f_9AA.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_15)
						{
							fVar0 = func_145(vParam0, uParam2->f_12, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = func_145(vParam0, Global_24B2CE.f_991, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((func_70(Global_24B2CE.f_1E3) && iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = func_143(vParam0);
							bVar21 = true;
						}
						if (fVar2 < Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { vParam0 };
							Var19.f_7 = fParam1;
							Var19 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_132(Var19, iVar18);
							Global_24B2CE.f_9AA.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] && fVar0 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_1 = fVar0;
						func_132(Var19, iVar18);
						Global_24B2CE.f_9AA.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_F)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_130(vParam0, fVar1, 1, 1, 0, 4294967295, 1);
						fVar6 = func_134(vParam0, 1, 1, 1, 1);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_129(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_129(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] || (iVar8 == Global_24B2CE.f_9AA.f_6[iVar18 /*10*/] && fVar3 > Global_24B2CE.f_9AA.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { vParam0 };
						Var19.f_7 = fParam1;
						Var19 = iVar8;
						Var19.f_3 = fVar3;
						func_132(Var19, iVar18);
						Global_24B2CE.f_9AA.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

float func_129(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x6A0C
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_130(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)//Position - 0x6AAA
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam2 && !bParam4)
	{
		if (func_6(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(vParam0, fParam1))
				{
					fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_194(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_131(iVar1) || !bParam6)
					{
						if (!bParam4)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
								{
									fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), 0));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam5 || PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								fVar4 = SYSTEM::VDIST2(vParam0, unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iVar1), 0));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_131(int iParam0)//Position - 0x6C41
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

void func_132(struct<10> Param0, int iParam1)//Position - 0x6C6C
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_24B2CE.f_9AA.f_6[iParam1 /*10*/] };
	Global_24B2CE.f_9AA.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_132(Var0, iParam1 + 1);
	}
}

void func_133(struct<10> Param0)//Position - 0x6CBE
{
	int iVar0;
	struct<10> Var1;
	int iVar2;
	float fVar3;
	int iVar4;
	
	Var1.f_2 = 1176256410;
	iVar2 = func_127();
	if (Param0 > iVar2)
	{
		iVar2 = Param0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] < iVar2)
		{
			Global_24BE21[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0 < iVar2)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] == 0)
		{
			Global_24BE21[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar3 = 9999.9f;
	iVar4 = 4294967295;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_24BE21[iVar0 /*10*/] > 0)
		{
			if (Global_24BE21[iVar0 /*10*/].f_1 < fVar3)
			{
				fVar3 = Global_24BE21[iVar0 /*10*/].f_1;
				iVar4 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar4 > 4294967295)
	{
		Global_24BE21[iVar4 /*10*/] = { Param0 };
	}
}

float func_134(vector3 vParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)//Position - 0x6DB2
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar6;
	int iVar7;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar7 = iVar0;
		if (func_6(iVar7, 1, 1))
		{
			if (!iVar7 == CAM::_0xDC9DA9E8789F5246() || iParam3 == 1)
			{
				bVar4 = false;
				if (bParam1)
				{
					if (func_135(iVar7))
					{
						bVar4 = true;
					}
				}
				if (bParam2)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar7) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar7) == 4294967295 || !func_113(CAM::_0xDC9DA9E8789F5246(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar7) || !bParam4)
					{
						if (func_131(iVar7))
						{
							vVar5 = { func_8(iVar7) };
							if (!iVar7 == CAM::_0xDC9DA9E8789F5246())
							{
								vVar6 = { unk_0xCCA038CFFE1C48BC(PLAYER::GET_PLAYER_PED(iVar7)) };
							}
							else
							{
								vVar6 = { vVar5 };
							}
							if (!bParam4)
							{
								if (vVar5.z < -100f)
								{
									vVar5.z = vParam0.z;
								}
								if (vVar6.z < -100f)
								{
									vVar6.z = vParam0.z;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar5, 1);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar6, 1);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_135(int iParam0)//Position - 0x6EFE
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_141(iParam0))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
				{
					if (func_93(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_140(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()), 0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
				{
					if (!func_93(CAM::_0xDC9DA9E8789F5246(), 1))
					{
						if (!func_136(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_136(int iParam0)//Position - 0x6FA9
{
	if (func_139(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	Global_2633E1 = { func_138(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2633E1))
	{
		return 1;
	}
	if (func_137(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_137(int iParam0, int iParam1)//Position - 0x6FF0
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (!iVar0 == func_13())
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_138(int iParam0)//Position - 0x701B
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_139(int iParam0, int iParam1)//Position - 0x7032
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_138(iParam0) };
		Global_2633EE = { func_138(iParam1) };
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

int func_140(int iParam0, int iParam1, int iParam2)//Position - 0x709F
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > 4294967295 && iParam1 > 4294967295) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 0);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 1);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 2);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 4);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 5);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 6);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 8);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 9);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 10);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 12);
				
				case 1:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 13);
				
				case 2:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 14);
				
				case 3:
					return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_36, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_141(int iParam0)//Position - 0x726A
{
	if (func_194(iParam0, 0))
	{
		return 1;
	}
	if (func_142())
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

bool func_142()//Position - 0x72AC
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

float func_143(vector3 vParam0)//Position - 0x72BD
{
	var uVar0;
	
	return func_144(vParam0, &(Global_24B2CE.f_2C), &uVar0);
}

float func_144(vector3 vParam0, var uParam1, var uParam2)//Position - 0x72D5
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = 4294967295;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if ((uParam1[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam1[iVar0 /*12*/])->f_A)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam1[iVar0 /*12*/]), vParam0);
					fVar1 = (fVar1 - ((uParam1[iVar0 /*12*/])->f_6 + (IntToFloat(Global_24B2CE.f_A9D) * (uParam1[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (vParam0.x < (*uParam1)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam1)[iVar0 /*12*/] - vParam0.x));
					}
					else if (vParam0.x > (uParam1[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (vParam0.x - (uParam1[iVar0 /*12*/])->f_3));
					}
					if (vParam0.y < (uParam1[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_1 - vParam0.y));
					}
					else if (vParam0.y > (uParam1[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (vParam0.y - (uParam1[iVar0 /*12*/])->f_3.f_1));
					}
					if (vParam0.z < (uParam1[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam1[iVar0 /*12*/])->f_2 - vParam0.z));
					}
					else if (vParam0.z > (uParam1[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (vParam0.z - (uParam1[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam2 = iVar3;
	return fVar2;
}

float func_145(vector3 vParam0, vector3 vParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, var uParam6)//Position - 0x7451
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam5 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam5) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam2)
	{
		fVar0 = func_129(SYSTEM::VDIST(vParam0, vParam1), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam6 = 1E+07f;
	fVar4 = func_134(vParam0, 1, 0, 0, 1);
	fVar0 = func_129(fVar4, 0f, func_152(), func_150(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_148(vParam0);
	fVar0 = func_129(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && !func_113(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_147(vParam0, CAM::_0xDC9DA9E8789F5246(), 0);
	fVar0 = func_129(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam6)
	{
		fVar4 = fVar4;
	}
	if (bParam3)
	{
		if (func_146(vParam0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_129(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_129(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam4)
	{
		fVar0 = func_129(SYSTEM::VDIST(Global_24B2CE.f_1FA, vParam0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_146(vector3 vParam0, var uParam1, var uParam2)//Position - 0x7637
{
	vector3 vVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	iVar1 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(vParam0, 1, &uVar3, &uVar2, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar1))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar1, &vVar0);
		*uParam1 = SYSTEM::VDIST(vParam0.x, vParam0.y, 0f, vVar0.x, vVar0.y, 0f);
		*uParam2 = MISC::ABSF((vParam0.z - vVar0.z));
		return 1;
	}
	return 0;
}

float func_147(vector3 vParam0, int iParam1, int iParam2)//Position - 0x7690
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam1, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam1 == iVar2 || iParam2 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam1) || (PLAYER::GET_PLAYER_TEAM(iVar3) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295))
					{
						if (Global_24E392.f_105[iVar2])
						{
							fVar1 = SYSTEM::VDIST(Global_24E392.f_83[iVar2 /*3*/], vParam0);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

float func_148(vector3 vParam0)//Position - 0x773C
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	var uVar4[32];
	int iVar5;
	
	iVar5 = PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), &uVar4, 4294967295);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar4[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar4[iVar2], 0))
			{
				if (func_149(uVar4[iVar2]))
				{
					vVar3 = { unk_0x8000C77B5F336760(uVar4[iVar2], 1) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vVar3, 1);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	return fVar0;
}

int func_149(int iParam0)//Position - 0x77C9
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, 1862763509))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (unk_0x4EE7377FBE72B4BC(Global_180824[CAM::_0xDC9DA9E8789F5246()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_180824[CAM::_0xDC9DA9E8789F5246()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
		if (iVar1 > 4294967295 && iVar1 < 4)
		{
			if (unk_0x4EE7377FBE72B4BC(Global_180702[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_180702[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_150()//Position - 0x7894
{
	if (func_151())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B2CE.f_2C.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("RHINO"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_151()//Position - 0x78F0
{
	if (Global_24B2CE.f_2C.f_41 && !Global_24B2CE.f_2C.f_12D)
	{
		if (!func_141(CAM::_0xDC9DA9E8789F5246()))
		{
			return 1;
		}
	}
	return 0;
}

float func_152()//Position - 0x7926
{
	if (func_151())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_24B2CE.f_2C.f_43) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_24B2CE.f_2C.f_43)) || Global_24B2CE.f_2C.f_43 == joaat("RHINO"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_153(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5, float fParam6, float fParam7)//Position - 0x7982
{
	float fVar0;
	
	fVar0 = iParam4;
	if (bParam3)
	{
		fVar0 = fParam5;
	}
	if ((((fParam5 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, fParam5)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(vParam0, fVar0))) || ((iParam2 == 1 && fParam6 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam6, 0))) || ((iParam1 == 1 && fParam7 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(vParam0, fParam7, 1)))
	{
		return 1;
	}
	return 0;
}

int func_154(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3)//Position - 0x7A11
{
	switch (uParam0->f_A)
	{
		case 0:
			if (func_158(*uParam0, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_157(*uParam0, uParam0->f_3, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_155(*uParam0, uParam0->f_3, uParam0->f_6, vParam1, vParam2, fParam3))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_155(vector3 vParam0, vector3 vParam1, float fParam2, vector3 vParam3, vector3 vParam4, float fParam5)//Position - 0x7A9D
{
	vector3 vVar0[8];
	int iVar1;
	
	func_156(vParam0, vParam1, fParam2, &vVar0);
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam3, vParam4, fParam5, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_156(vector3 vParam0, vector3 vParam1, float fParam2, var uParam3)//Position - 0x7AEF
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	var uVar3;
	
	if (vParam0.z == vParam1.z)
	{
		vParam1.z = (vParam1.z + 0.01f);
	}
	vVar0 = { vParam0 - vParam1 };
	vVar1 = { func_80(vVar0, vVar0.x, vVar0.y, 0f) };
	vVar1 = { vVar1 / FtoV(SYSTEM::VMAG(vVar1)) };
	vVar1 = { vVar1 * FtoV((fParam2 * 0.5f)) };
	if (vParam0.z > vParam1.z)
	{
		uVar2 = vParam1.z;
		uVar3 = vParam0.z;
	}
	else
	{
		uVar2 = vParam0.z;
		uVar3 = vParam1.z;
	}
	*(uParam3[0 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[1 /*3*/]) = { Vector(uVar2, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[2 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) - vVar1 };
	*(uParam3[3 /*3*/]) = { Vector(uVar3, vParam0.y, vParam0.x) + vVar1 };
	*(uParam3[4 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) + vVar1 };
	*(uParam3[5 /*3*/]) = { Vector(uVar2, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[6 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) - vVar1 };
	*(uParam3[7 /*3*/]) = { Vector(uVar3, vParam1.y, vParam1.x) + vVar1 };
}

int func_157(vector3 vParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x7C1C
{
	vector3 vVar0[8];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0.x, vParam0.y, vParam0.z };
	vVar0[1 /*3*/] = { vParam0.x, vParam0.y, vParam1.z };
	vVar0[2 /*3*/] = { vParam0.x, vParam1.y, vParam1.z };
	vVar0[3 /*3*/] = { vParam0.x, vParam1.y, vParam0.z };
	vVar0[4 /*3*/] = { vParam1.x, vParam0.y, vParam0.z };
	vVar0[5 /*3*/] = { vParam1.x, vParam0.y, vParam1.z };
	vVar0[6 /*3*/] = { vParam1.x, vParam1.y, vParam1.z };
	vVar0[7 /*3*/] = { vParam1.x, vParam1.y, vParam0.z };
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_158(vector3 vParam0, float fParam1, vector3 vParam2, vector3 vParam3, float fParam4)//Position - 0x7CE6
{
	vector3 vVar0[4];
	int iVar1;
	
	vVar0[0 /*3*/] = { vParam0 + Vector(0f, fParam1, 0f) };
	vVar0[1 /*3*/] = { vParam0 + Vector(0f, (-1f * fParam1), 0f) };
	vVar0[2 /*3*/] = { vParam0 + Vector(0f, 0f, fParam1) };
	vVar0[3 /*3*/] = { vParam0 + Vector(0f, 0f, (-1f * fParam1)) };
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(vVar0[iVar1 /*3*/], vParam2, vParam3, fParam4, 0, 1))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

void func_159(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x7D6A
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	
	vVar1 = { vParam0 };
	iVar2 = func_82(vVar1);
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[iVar2])
	{
		if (func_81(vVar1, &(Global_24C681[iVar2 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C681[iVar2 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C681[iVar2 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CAF9[8])
	{
		if (func_81(vVar1, &(Global_24C681[8 /*127*/][iVar0 /*7*/])))
		{
			*uParam1 = { Global_24C681[8 /*127*/][iVar0 /*7*/] };
			*uParam2 = { Global_24C681[8 /*127*/][iVar0 /*7*/].f_3 };
			*uParam3 = Global_24C681[8 /*127*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_160(vector3 vParam0)//Position - 0x7E58
{
	int iVar0;
	int iVar1;
	
	if (Global_24B2CE.f_2C.f_37)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_24B2CE.f_2C.f_38))
		{
			if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_24B2CE.f_2C.f_39)
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
		}
	}
	return 1;
}

int func_161(vector3 vParam0)//Position - 0x7EC3
{
	switch (Global_24B2CE.f_9A6)
	{
		case 0:
			return func_197(vParam0, Global_24B2CE.f_991, Global_24B2CE.f_994, 0, 0);
			break;
		
		case 1:
			return func_116(vParam0, Global_24B2CE.f_99F, Global_24B2CE.f_9A2, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, Global_24B2CE.f_99F, Global_24B2CE.f_9A2, Global_24B2CE.f_9A5, 0, 1);
			break;
	}
	return 0;
}

int func_162(vector3 vParam0, var uParam1, var uParam2, float fParam3)//Position - 0x7F55
{
	float fVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		fVar0 = ((uParam1[iVar1 /*4*/])->f_3 + fParam3);
		if (SYSTEM::VDIST(*(uParam1[iVar1 /*4*/]), vParam0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	vVar2 = { 0f, 0f, 0f };
	vVar3 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		vVar2 = { *(uParam2[iVar1 /*10*/]) };
		vVar3 = { (uParam2[iVar1 /*10*/])->f_3 };
		fVar4 = (uParam2[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vVar2, vVar3, fVar4, 0, 1))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_163(var uParam0, var uParam1, bool bParam2, float fParam3)//Position - 0x8004
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				vVar1 = { *uParam0 };
				func_97(&vVar1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { vVar1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_164(int iParam0)//Position - 0x8077
{
	switch (Global_1406BF)
	{
		case 0:
			if (!func_28(iParam0))
			{
				if (Global_1841F3[iParam0 /*790*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x80AD
{
	if (func_93(iParam0, 1))
	{
		if (Global_1841F3[iParam0 /*790*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_166(vector3 vParam0, float fParam1, int iParam2)//Position - 0x80D1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (SYSTEM::VDIST2(Global_24B2CE.f_A30[iVar0 /*3*/], vParam0) < (fParam1 * fParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_167(var uParam0, bool bParam1)//Position - 0x810F
{
	var uVar0;
	vector3 vVar1;
	float fVar2;
	
	if (func_100(*uParam0))
	{
		if (bParam1)
		{
			vVar1 = { *uParam0 };
			fVar2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_97(&vVar1, Global_24B2CE.f_248, Global_24B2CE.f_24B, 1036831949, 0, fVar2);
			if (func_104(vVar1, &uVar0) || func_100(vVar1))
			{
				vVar1 = { *uParam0 };
				func_97(&vVar1, Global_24B2CE.f_248, Global_24B2CE.f_24B, 1036831949, 1, fVar2);
			}
			*uParam0 = { vVar1 };
		}
	}
	return 0;
}

int func_168(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x81A7
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_6(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_169(CAM::_0xDC9DA9E8789F5246()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_6(iVar1, 1, 1))
		{
			if (!func_194(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_131(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_169(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_169(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

Vector3 func_169(int iParam0)//Position - 0x835F
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_171() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_170(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_8(iParam0);
}

int func_170(vector3 vParam0)//Position - 0x83B2
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_171()//Position - 0x83DC
{
	return Global_255C02.f_10;
}

int func_172(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0x83EA
{
	if (func_174(vParam0, fParam1, iParam2, iParam3, 0) || func_173(vParam0, iParam2, iParam4))
	{
		return 1;
	}
	return 0;
}

int func_173(vector3 vParam0, int iParam1, int iParam2)//Position - 0x841B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam1 == iVar0 || iParam2 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_84(vParam0, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam1, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_174(vector3 vParam0, float fParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x84DD
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam2 == iVar0 || iParam3 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam4)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam2))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam2, 0, 1))
				{
					if (Global_24E392.f_105[iVar0])
					{
						if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_24E392.f_105[iVar0])
				{
					if (SYSTEM::VDIST(Global_24E392.f_83[iVar0 /*3*/], vParam0) < fParam1)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_8(iVar1), vParam0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_175(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, float fParam11, bool bParam12, bool bParam13)//Position - 0x85FA
{
	Global_24B2CE.f_3 = 0;
	if (!func_172(vParam0, 0.5f, CAM::_0xDC9DA9E8789F5246(), 0, 0))
	{
		Global_24B2CE.f_3++;
		if (bParam3)
		{
			if (func_225(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_179(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_83(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (!bParam2)
		{
			if (func_225(vParam0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
				if (!func_179(vParam0, fParam10))
				{
					Global_24B2CE.f_3++;
					if (!func_176(vParam0, fParam1, fParam7, fParam8, 1084227584))
					{
						Global_24B2CE.f_3++;
						if (!func_83(vParam0, 1056964608))
						{
							Global_24B2CE.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			}
		}
		else if (func_225(vParam0, 6f, 5f, 5f, 5f, 0, bParam4, iParam5, fParam6, bParam13, 4294967295, 1, 0, 0, fParam11, bParam12, 0))
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
			if (!func_179(vParam0, fParam10))
			{
				Global_24B2CE.f_3++;
				if (!func_176(vParam0, fParam1, fParam7, fParam8, fParam9))
				{
					Global_24B2CE.f_3++;
					if (!func_83(vParam0, 1056964608))
					{
						Global_24B2CE.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_24B2CE.f_3 = (Global_24B2CE.f_3 + Global_24B2CE.f_2);
		}
	}
	return 0;
}

int func_176(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4)//Position - 0x883A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!CAM::_0xDC9DA9E8789F5246() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_131(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (!func_178(CAM::_0xDC9DA9E8789F5246(), iVar1, 4294967294, 0))
				{
					if (func_177(func_8(iVar1), vParam0, fParam1, fParam2, fParam3, fParam4))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_177(vector3 vParam0, vector3 vParam1, float fParam2, float fParam3, float fParam4, float fParam5)//Position - 0x88B9
{
	vector3 vVar0;
	vector3 vVar1;
	
	fParam2 = (fParam2 * -1f);
	fParam2 = (fParam2 + 360f);
	vVar0.x = SYSTEM::SIN(fParam2);
	vVar0.y = SYSTEM::COS(fParam2);
	vVar0.z = 0f;
	vVar0 = { vVar0 / FtoV(SYSTEM::VMAG(vVar0)) };
	vVar0 = { vVar0 * Vector(fParam3, fParam3, fParam3) };
	vVar1 = { vParam1 + vVar0 };
	vVar1.z = vParam1.z;
	vVar1.z = (vVar1.z + fParam5);
	vParam1.z = (vParam1.z + fParam5);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, vParam1, vVar1, fParam4, 0, 1);
}

bool func_178(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8945
{
	if (iParam2 == 4294967294)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iParam1) == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == 4294967295 && iParam2 == 4294967295)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_179(vector3 vParam0, float fParam1)//Position - 0x89BD
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_131(iVar1)) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295) && !func_113(CAM::_0xDC9DA9E8789F5246(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && !CAM::_0xDC9DA9E8789F5246() == iVar1) || !func_178(CAM::_0xDC9DA9E8789F5246(), iVar1, 4294967294, 0))
			{
				if (SYSTEM::VDIST(vParam0, func_8(iVar1)) < fParam1)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_180(int iParam0)//Position - 0x8A79
{
	if ((Global_24B2CE.f_1E3 == 9 || Global_24B2CE.f_1E3 == 9) || (Global_24B2CE.f_1E3 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_181(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x8ABC
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam6 == 0)
		{
			if (func_6(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam7) && bParam4) && func_136(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), vParam0, 1) < fParam1)
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

int func_182(vector3 vParam0, float fParam1, int iParam2, float fParam3)//Position - 0x8BB8
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	if (!iVar3 == 4294967295)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_194(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1)) && iVar1 != CAM::_0xDC9DA9E8789F5246())
				{
					fVar2 = iParam2;
					if (fParam3 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == 4294967295)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()))
							{
								fVar2 = fParam3;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), vParam0, 1) <= (fVar2 + fParam1))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x8C7D
{
	if (((func_113(iParam0, 1) || func_185(iParam0)) || func_34(iParam0, 0)) || func_184(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_184(int iParam0)//Position - 0x8CB9
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1841F3[iParam0 /*790*/].f_23;
}

int func_185(int iParam0)//Position - 0x8CDC
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 4294967295)
	{
		return Global_18CD5B[iVar0 /*560*/] != 4294967295;
	}
	return 0;
}

void func_186(vector3 vParam0, var uParam1, var uParam2)//Position - 0x8CFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	vector3 vVar5;
	vector3 vVar6;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403FD)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_2401A9[iVar1 /*26*/].f_C, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2401A9[iVar1 /*26*/].f_3, vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_2401A9[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2401A9[iVar1 /*26*/].f_6.f_2;
					func_188(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 15)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_1739[iVar1 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
			{
				Var3 = { Global_40001.f_1739[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_188(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_40001.f_1767[iVar1 /*19*/][iVar2 /*3*/], vParam0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), vParam0))
				{
					Var3 = { Global_40001.f_1767[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_188(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1403DA)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			vVar5 = { Global_140131[iVar1 /*8*/].f_1 + Global_140131[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			vVar6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(vVar5, vParam0) < SYSTEM::VDIST(vVar6, vParam0))
			{
				Var4 = { Global_140131[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_140131[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_140131[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_240065[iVar1 /*3*/] };
				func_187(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_187(var uParam0, var uParam1, int iParam2)//Position - 0x9020
{
	Global_24CEE6 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_187(&Global_24CEE6, uParam1, iParam2 + 1);
	}
}

void func_188(var uParam0, var uParam1, int iParam2)//Position - 0x905E
{
	Global_24CEE2 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_188(&Global_24CEE2, uParam1, iParam2 + 1);
	}
}

void func_189(var uParam0, var uParam1)//Position - 0x9098
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	
	if (Global_24B2CE.f_8C5 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_8C5)
		{
			if (func_190(Global_24B2CE.f_8C6[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_24B2CE.f_8C6[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					vVar1 = { *uParam1 - Global_24B2CE.f_8C6[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(vVar1.x, vVar1.y);
				}
				func_128(Global_24B2CE.f_8C6[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, 4294967295);
				Global_24B2CE.f_9AA++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_24B2CE.f_B37)
	{
		func_122(&(Global_24B2CE.f_9AA.f_6[0 /*10*/]), &(Global_24B2CE.f_9AA.f_6[1 /*10*/]), &(Global_24B2CE.f_9AA.f_6[2 /*10*/]));
	}
}

int func_190(vector3 vParam0, var uParam1)//Position - 0x9185
{
	switch (uParam1->f_7)
	{
		case 0:
			return func_72(vParam0, uParam1->f_7, *uParam1, 0f, 0f, 0f, uParam1->f_4);
		
		case 1:
		case 2:
			return func_72(vParam0, uParam1->f_7, uParam1->f_8, uParam1->f_B, uParam1->f_E);
		
		default:
	}
	return 0;
}

void func_191(vector3 vParam0, vector3 vParam1, var uParam2, var uParam3, var uParam4)//Position - 0x91E2
{
	float fVar0;
	
	func_117(&vParam0, &vParam1);
	fVar0 = (vParam1.x - vParam0.x);
	*uParam2 = (vParam0.x + (fVar0 * 0.5f));
	uParam2->f_1 = vParam0.y;
	uParam2->f_2 = vParam0.z;
	*uParam3 = *uParam2;
	uParam3->f_1 = vParam1.y;
	uParam3->f_2 = vParam1.z;
	*uParam4 = (fVar0 * 0.5f);
}

var func_192()//Position - 0x9238
{
	return Global_14010B.f_4;
}

void func_193(var uParam0, var uParam1)//Position - 0x9246
{
	func_232();
	func_224(uParam0, uParam1);
}

bool func_194(int iParam0, int iParam1)//Position - 0x925A
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_195(4294967295, 0) == 8;
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

int func_195(int iParam0, bool bParam1)//Position - 0x92A5
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_196();
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

int func_196()//Position - 0x92E6
{
	return Global_1407E0;
}

bool func_197(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3, bool bParam4)//Position - 0x92F2
{
	if (bParam3 && bParam4)
	{
		vParam0.z = 0f;
		vParam1.z = 0f;
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam3)
	{
		if (vParam0.z > vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	else if (bParam4)
	{
		if (vParam0.z < vParam1.z)
		{
			vParam0.z = vParam1.z;
		}
		return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
	}
	return SYSTEM::VDIST(vParam0, vParam1) < (fParam2 + 0.01f);
}

void func_198(var uParam0, var uParam1, var uParam2)//Position - 0x93A5
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_24B2CE.f_6C9 > 0)
	{
		iVar0 = 0;
		while (func_220(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_21 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_199(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_199(var uParam0, var uParam1, var uParam2)//Position - 0x9414
{
	int iVar0;
	vector3 vVar1;
	float fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	vector3 vVar25;
	var uVar26;
	vector3 vVar27;
	float fVar28;
	bool bVar29;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
	{
		uParam2->f_23 = { *uParam0 };
	}
	if (uParam2->f_F)
	{
		if (func_96(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_33)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_30)
	{
		if (func_219(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	iVar8 = 1;
	if (uParam2->f_B)
	{
		iVar3 += 2;
		iVar3++;
		iVar8 = 0;
	}
	else if (uParam2->f_A == 0 || (uParam2->f_21 > 0 && uParam2->f_10))
	{
		iVar3++;
		iVar8 = 0;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_21)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_24CEF0.f_A2 = 0;
	Global_24CEF0.f_A3 = 0;
	Global_24CEF0.f_A4 = 4294967197;
	Global_24CEF0.f_A5 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_24CEF0[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_24CEF0.f_79[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (func_89(uParam2->f_22) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_12 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &vVar1);
			bVar10 = false;
			if (Global_24CEF0.f_A4 == iVar6)
			{
				bVar10 = true;
			}
			Global_24CEF0.f_A5 = { vVar1 };
			if (((uParam2->f_A || uParam2->f_21 > 0) || !PATHFIND::_GET_IS_SLOW_ROAD_FLAG(iVar6)) || PATHFIND::_GET_SUPPORTS_GPS_ROUTE_FLAG(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vVar1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(vVar1, uParam2->f_23) > uParam2->f_4)
				{
					if (!func_167(&vVar1, 0))
					{
						if ((uParam2->f_D || uVar5 & 64 == 0) || uParam2->f_21 == 1)
						{
							if (uParam2->f_E || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!func_218(vVar1))
									{
										vVar1 = { func_214(vVar1, &fVar2, iVar7, uParam2->f_9, *uParam2, iVar8, uParam2->f_B, uParam2->f_22, &bVar9, bVar10, 1, uParam2->f_33) };
										if (SYSTEM::VMAG(vVar1) > 0f)
										{
											if (!func_83(vVar1, 5f))
											{
												if (vVar1.z >= (uParam2->f_23.f_2 - uParam2->f_7) || uParam2->f_21 >= 2)
												{
													if (vVar1.z <= (uParam2->f_23.f_2 + uParam2->f_6) || uParam2->f_21 >= 2)
													{
														if (func_213(vVar1, uParam2))
														{
															if ((uParam2->f_30 && !func_219(&vVar1, 0)) || uParam2->f_30 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + 4294967295);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(vVar1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar1.x, vVar1.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_21 >= 2)
																	{
																		if ((uParam2->f_C && !func_209(vVar1, fVar2, uParam2->f_22, CAM::_0xDC9DA9E8789F5246(), 0, uParam2->f_38)) || !uParam2->f_C)
																		{
																			if (!uParam2->f_F || !func_96(uParam2->f_23, &vVar1, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_1F;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_31;
																					if (!uParam2->f_37)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_11)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_21 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_1C)
																						{
																							if (uParam2->f_21 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!func_208(vVar1, fVar2, uParam2->f_22))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_225(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 4294967295, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (func_225(vVar1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_3A, 4294967295, 1, 0f, 0, 0, 0, 0) && !func_206(vVar1, fVar2, uParam2->f_22, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_21 >= 2)
																					{
																						if (((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34) || uParam2->f_21 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_34)
																							{
																								iVar22 = func_205(vVar1, uParam2->f_36, &fVar23);
																							}
																							if (!uParam2->f_34 || (uParam2->f_34 && iVar22 <= uParam2->f_35))
																							{
																								if (uParam2->f_34)
																								{
																									if (iVar22 < uParam2->f_35)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEF0.f_A2)
																										{
																											Global_24CEF0[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_24CEF0.f_79[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_24CEF0.f_A2 = 0;
																										uParam2->f_35 = iVar22;
																									}
																								}
																								if (uParam2->f_1E)
																								{
																									if (Global_24CEF0.f_A2 == 0)
																									{
																										Global_24CEF0[0 /*3*/] = { vVar1 };
																										Global_24CEF0.f_79[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_24CEF0.f_A2 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(vVar1, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEF0[iVar14 /*3*/], uParam2->f_23))
																												{
																													func_204(vVar1, fVar2, iVar14);
																													iVar14 = Global_24CEF0.f_A2 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_24CEF0.f_A2++;
																									if (Global_24CEF0.f_A2 >= 5)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEF0.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_24CEF0[Global_24CEF0.f_A2 /*3*/] = { vVar1 };
																									Global_24CEF0.f_79[Global_24CEF0.f_A2] = fVar2;
																									Global_24CEF0.f_A2++;
																									if (func_213(vVar1, uParam2))
																									{
																										Global_24CEF0.f_A3++;
																									}
																									if (Global_24CEF0.f_A2 >= 10)
																									{
																										if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_24CEF0.f_A2 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { vVar1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { vVar1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_20)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_24CEF0.f_A2 > 0 && ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_21 >= 2))
				{
					if (uParam2->f_1E)
					{
						*uParam0 = { Global_24CEF0[0 /*3*/] };
						*uParam1 = Global_24CEF0.f_79[0];
						return 1;
					}
					else
					{
						if (Global_24CEF0.f_A3 > 0 && !Global_24CEF0.f_A3 == Global_24CEF0.f_A2)
						{
							func_202(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24CEF0.f_A2);
						if (uParam2->f_12 && uParam2->f_1E)
						{
							iVar24 = 0;
						}
						vVar25 = { Global_24CEF0[0 /*3*/] };
						uVar26 = Global_24CEF0.f_79[0];
						Global_24CEF0[0 /*3*/] = { Global_24CEF0[iVar24 /*3*/] };
						Global_24CEF0.f_79[0] = Global_24CEF0.f_79[iVar24];
						Global_24CEF0[iVar24 /*3*/] = { vVar25 };
						Global_24CEF0.f_79[iVar24] = uVar26;
						*uParam0 = { Global_24CEF0[0 /*3*/] };
						*uParam1 = Global_24CEF0.f_79[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_21++;
					if (uParam2->f_21 < 3)
					{
						return 0;
					}
					else
					{
						func_201(iVar13, *uParam0, &iVar0, &vVar1, &fVar2, uParam2, iVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						vVar27 = { vVar1 };
						fVar28 = fVar2;
						if (!uParam2->f_32)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_96(uParam2->f_23, &vVar27, &(uParam2->f_26), &(uParam2->f_2D), bVar29, 1) || func_219(&vVar27, bVar29))
						{
							if (!uParam2->f_32)
							{
								uParam2->f_21 = 0;
								uParam2->f_32 = 1;
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { vVar27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { vVar27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 3)
			{
				return 0;
			}
			else
			{
				func_200(&Global_14053D, uParam0, uParam1, *uParam0);
				if (uParam2->f_B)
				{
					uParam2->f_1B = 1;
				}
				return 1;
			}
		}
		Global_24CEF0.f_A4 = iVar6;
	}
	return 0;
}

void func_200(var uParam0, var uParam1, var uParam2, vector3 vParam3)//Position - 0x9E3E
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = 4294967295;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), vParam3);
		if (fVar1 < fVar0)
		{
			if (!func_172(*(uParam0[iVar2 /*4*/]), 5f, CAM::_0xDC9DA9E8789F5246(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == 4294967295)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_201(int iParam0, vector3 vParam1, int iParam2, var uParam3, float fParam4, var uParam5, int iParam6, int iParam7, int iParam8, float fParam9, float fParam10, bool bParam11)//Position - 0x9EC2
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam2 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(vParam1, *iParam2, uParam3, fParam4, &iParam7, iParam8, fParam9, fParam10);
		*uParam3 = { func_214(*uParam3, fParam4, iParam7, uParam5->f_9, *uParam5, iParam6, uParam5->f_B, uParam5->f_22, &bParam11, 0, 0, uParam5->f_33) };
		if (!func_218(*uParam3))
		{
			iVar0 = 999;
			return;
		}
		iVar0++;
	}
}

void func_202(int iParam0, var uParam1)//Position - 0x9F46
{
	if (!func_213(Global_24CEF0[iParam0 /*3*/], uParam1))
	{
		Global_24CEF0.f_A2 = (Global_24CEF0.f_A2 - 1);
		func_203(iParam0);
		if (Global_24CEF0.f_A2 > Global_24CEF0.f_A3)
		{
			func_202(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_202(iParam0 + 1, uParam1);
	}
}

void func_203(int iParam0)//Position - 0x9FA1
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_24CEF0[iParam0 /*3*/] = { Global_24CEF0[iParam0 + 1 /*3*/] };
			Global_24CEF0.f_79[iParam0] = Global_24CEF0.f_79[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_204(vector3 vParam0, float fParam1, int iParam2)//Position - 0x9FEC
{
	vector3 vVar0;
	var uVar1;
	
	vVar0 = { Global_24CEF0[iParam2 /*3*/] };
	uVar1 = Global_24CEF0.f_79[iParam2];
	Global_24CEF0[iParam2 /*3*/] = { vParam0 };
	Global_24CEF0.f_79[iParam2] = fParam1;
	if (iParam2 <= Global_24CEF0.f_A2 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(vVar0) > 0f)
		{
			func_204(vVar0, uVar1, iParam2 + 1);
		}
	}
}

int func_205(vector3 vParam0, float fParam1, float fParam2)//Position - 0xA059
{
	int iVar0;
	vector3 vVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	
	fVar4 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = iVar0;
		if (func_135(iVar3))
		{
			vVar1 = { func_8(iVar3) };
			fVar5 = SYSTEM::VDIST(vParam0, vVar1);
			if (fVar5 < fParam1)
			{
				if (fVar5 < fVar4)
				{
					fVar4 = fVar5;
				}
				iVar2++;
			}
		}
		iVar0++;
	}
	*fParam2 = fVar4;
	return iVar2;
}

int func_206(vector3 vParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xA0C1
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	vector3 vVar5;
	float fVar6;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam7 == 1 && CAM::_0xDC9DA9E8789F5246() != iVar1) || iParam7 == 0)
		{
			if (func_6(iVar1, bParam3, bParam4))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
				{
					if (!bParam6 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_131(iVar1)))
					{
						if ((!bParam5 || (bParam5 == 1 && PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295)
						{
							if (((PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246()) == 4294967295 && iParam8) && bParam5) && func_136(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), 0))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), 0);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, 0))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										vVar5 = { unk_0x8000C77B5F336760(iVar3, 0) };
										fVar6 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_207(vParam0, fParam1, iParam2, vVar5, fVar6, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, fVar2))
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

int func_207(vector3 vParam0, float fParam1, int iParam2, vector3 vParam3, float fParam4, int iParam5, bool bParam6)//Position - 0xA234
{
	int iVar0;
	vector3 vVar1[4];
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	
	if (func_84(vParam0, vParam3, fParam4, iParam5, 1036831949))
	{
		return 1;
	}
	func_86(iParam2, &vVar2, &vVar3, 1086324736, 1080033280, 1077936128);
	vVar4 = { 0f, vVar3.y, 0f };
	func_91(&vVar4, 0f, 0f, fParam1);
	vVar5 = { 0f, vVar2.y, 0f };
	func_91(&vVar5, 0f, 0f, fParam1);
	vVar6 = { (MISC::ABSF((vVar3.x - vVar2.x)) * 0.5f), 0f, 0f };
	func_91(&vVar6, 0f, 0f, fParam1);
	vVar1[0 /*3*/] = { vParam0 + vVar4 + vVar6 };
	vVar1[0 /*3*/].f_2 = (vVar1[0 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[1 /*3*/] = { vParam0 + vVar4 - vVar6 };
	vVar1[1 /*3*/].f_2 = (vVar1[1 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[2 /*3*/] = { vParam0 + vVar5 + vVar6 };
	vVar1[2 /*3*/].f_2 = (vVar1[2 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	vVar1[3 /*3*/] = { vParam0 + vVar5 - vVar6 };
	vVar1[3 /*3*/].f_2 = (vVar1[3 /*3*/].f_2 + (0.5f * MISC::ABSF((vVar3.z - vVar2.z))));
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_84(vVar1[iVar0 /*3*/], vParam3, fParam4, iParam5, 1036831949))
		{
			return 1;
		}
		iVar0++;
	}
	if (!bParam6)
	{
		if (func_207(vParam3, fParam4, iParam5, vParam0, fParam1, iParam2, 1))
		{
			return 1;
		}
	}
	return 0;
}

int func_208(vector3 vParam0, float fParam1, int iParam2)//Position - 0xA3EE
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	float fVar4;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { unk_0x8000C77B5F336760(iVar1, 0) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_207(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(vParam0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		vVar3 = { unk_0x8000C77B5F336760(iVar1, 0) };
		fVar4 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_207(vParam0, fParam1, iParam2, vVar3, fVar4, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_209(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0xA4FA
{
	if (func_212(vParam0, fParam1, iParam2, iParam3, iParam4) || func_210(vParam0, fParam1, iParam2, iParam3, iParam5))
	{
		return 1;
	}
	return 0;
}

int func_210(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA530
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_211(vParam0, iParam2, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_207(vParam0, fParam1, iParam2, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/], Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_24E392.f_1AB[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_211(vector3 vParam0, int iParam1, vector3 vParam2, int iParam3)//Position - 0xA60A
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_92(iParam1, 1008981770);
	fVar1 = func_92(iParam3, 1008981770);
	fVar2 = SYSTEM::VDIST(vParam0, vParam2);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_212(vector3 vParam0, float fParam1, int iParam2, int iParam3, int iParam4)//Position - 0xA64A
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam3, 0, 1))
			{
				if (Global_24E392.f_105[iVar0])
				{
					if (func_84(Global_24E392.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
				else if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_24E392.f_105[iVar0])
			{
				if (func_84(Global_24E392.f_83[iVar0 /*3*/], vParam0, fParam1, iParam2, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_84(func_8(iVar1), vParam0, fParam1, iParam2, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_213(vector3 vParam0, var uParam1)//Position - 0xA759
{
	if (uParam1->f_12)
	{
		switch (uParam1->f_1A)
		{
			case 0:
				if (func_197(vParam0, uParam1->f_13, uParam1->f_19, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_116(vParam0, uParam1->f_13, uParam1->f_16, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, uParam1->f_13, uParam1->f_16, uParam1->f_19, 0, 1))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_214(vector3 vParam0, float fParam1, int iParam2, bool bParam3, vector3 vParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, bool bParam10, bool bParam11)//Position - 0xA7EA
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	bool bVar9;
	float fVar10;
	vector3 vVar11;
	vector3 vVar12;
	vector3 vVar13;
	
	if (bParam11)
	{
		if (SYSTEM::VMAG(vParam4) > 0f)
		{
			if (!func_217(vParam0, *fParam1, vParam4))
			{
				*fParam1 = (*fParam1 + 180f);
			}
		}
		return vParam0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(vParam0, &uVar1, &uVar2);
	if (uVar2 & 1024 == 0 && !bParam6)
	{
		PATHFIND::GET_CLOSEST_ROAD(vParam0, 1f, 1, &uVar3, &uVar3, &iVar4, &iVar5, &fVar6, iParam5);
		if (iVar4 == iVar5)
		{
			*uParam8 = 1;
		}
		if (bParam10)
		{
			if (!uVar2 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar2 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar4 + iVar5) != iParam2)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam7) && func_216(vParam0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam9 && *uParam8)
		{
			*fParam1 = (*fParam1 + 180f);
			if (*fParam1 > 360f)
			{
				*fParam1 = (*fParam1 + -360f);
			}
		}
		if (*fParam1 <= 90f || *fParam1 > 270f)
		{
			bVar8 = true;
		}
		else
		{
			bVar8 = false;
		}
		bVar9 = false;
		if (bVar8)
		{
			if (iVar4 == 0)
			{
				if (bParam10)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam2 == iVar4)
			{
				bVar9 = true;
			}
		}
		else if (iVar5 == 0)
		{
			if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam2 == iVar5)
		{
			bVar9 = true;
		}
		if (fVar6 < 0f)
		{
			fVar7 = 0f;
		}
		else
		{
			if (bVar8)
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar4) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar4));
				}
				if (bVar9)
				{
					if (iVar4 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar4 - 2)) * 1f));
					}
				}
				else if (iVar4 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar4 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar9)
				{
					fVar7 = (4.2f * (SYSTEM::TO_FLOAT(iVar5) * 0.5f));
				}
				else
				{
					fVar7 = (4.2f * SYSTEM::TO_FLOAT(iVar5));
				}
				if (bVar9)
				{
					if (iVar5 > 2)
					{
						fVar7 = (fVar7 + (IntToFloat((iVar5 - 2)) * 1f));
					}
				}
				else if (iVar5 > 1)
				{
					fVar7 = (fVar7 + (IntToFloat((iVar5 - 1)) * 1f));
				}
			}
			if (!uVar2 & 64 == 0)
			{
				fVar7 = (fVar7 + (0.95f * fVar6));
			}
			if (!uVar2 & 4 == 0 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -0.5f);
			}
			if ((!uVar2 & 32 == 0 && uVar2 & 4 == 0) && uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + -1f);
			}
			if (!bParam3 || !uVar2 & 8 == 0)
			{
				fVar7 = (fVar7 + (4.2f * -0.5f));
			}
			if (!iParam7 == 0)
			{
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_215(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_215(iParam7, 1.5f);
				}
				if (fVar10 > 1.8f)
				{
					fVar7 = (fVar7 + ((fVar10 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(vParam4) > 0f)
	{
		if (!func_217(vParam0, *fParam1, vParam4))
		{
			if (bParam3 || ((uVar2 & 1024 != 0 || vParam0.z == 0f) && bParam6))
			{
				*fParam1 = (*fParam1 + 180f);
			}
			else if (bParam10)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar7 < 0f)
	{
		fVar7 = 0f;
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vParam0, *fParam1, fVar7, 0f, 0f) };
	if (bParam3)
	{
		if (unk_0x4264B2362A7E120F(vParam0, *fParam1, &vVar11))
		{
			vVar12 = { vVar11 - vParam0 };
			if (!iParam7 == 0)
			{
				vVar13 = { vVar12 / FtoV(SYSTEM::VMAG(vVar12)) };
				if (uVar2 & 8 != 0)
				{
					fVar10 = func_215(iParam7, 3.5f);
				}
				else
				{
					fVar10 = func_215(iParam7, 1.5f);
				}
				vVar13 = { vVar13 * FtoV((fVar10 * 0.5f)) };
				vVar12 = { vVar12 - vVar13 };
				vVar11 = { vParam0 + vVar12 };
			}
			vVar13 = { vVar0 - vVar11 };
			vVar0 = { vVar11 };
		}
	}
	return vVar0;
}

float func_215(int iParam0, float fParam1)//Position - 0xAC31
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	func_86(iParam0, &fVar0, &fVar1, 1086324736, 1080033280, 1077936128);
	fVar2 = (fVar1 - fVar0);
	if (fVar2 < fParam1)
	{
		return fParam1;
	}
	return fVar2;
}

int func_216(vector3 vParam0)//Position - 0xAC68
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0.x, vParam0.y, (vParam0.z + 500f), &fVar0, 0, 0))
	{
		fVar0 = (fVar0 - vParam0.z);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_217(vector3 vParam0, float fParam1, vector3 vParam2)//Position - 0xACA0
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar0 = { 0f, 1f, 0f };
	func_91(&vVar0, 0f, 0f, fParam1);
	vVar1 = { vParam2 - vParam0 };
	if (func_79(vVar1, vVar0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_218(vector3 vParam0)//Position - 0xACDC
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_82(vParam0);
	iVar0 = 0;
	while (iVar0 < Global_24CDCB[iVar1])
	{
		if (func_81(vParam0, &(Global_24CB0C[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_24CDCB[8])
	{
		if (func_81(vParam0, &(Global_24CB0C[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_219(var uParam0, bool bParam1)//Position - 0xAD57
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_24B2CE.f_1A.f_11)
	{
		switch (Global_24B2CE.f_1A.f_10)
		{
			case 0:
				if (func_197(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_F, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_116(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, 0, 1))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_103(*uParam0, Global_24B2CE.f_1A.f_9, Global_24B2CE.f_1A.f_C, Global_24B2CE.f_1A.f_F, Global_24B2CE.f_1A.f_10, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_220(var uParam0, var uParam1, var uParam2)//Position - 0xAE49
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	int iVar12;
	vector3 vVar13;
	var uVar14;
	
	if (Global_24B2CE.f_6C9 > 0)
	{
		iVar0 = 0;
		iVar1 = 0;
		if (!SYSTEM::VMAG(uParam2->f_23) > 0f)
		{
			uParam2->f_23 = { *uParam0 };
		}
		if (uParam2->f_F)
		{
			if (func_96(uParam2->f_23, uParam0, &(uParam2->f_26), &(uParam2->f_2D), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_30)
		{
			if (func_219(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_24CEF0.f_A2 = 0;
		Global_24CEF0.f_A3 = 0;
		iVar4 = 0;
		while (iVar4 < 40)
		{
			Global_24CEF0[iVar4 /*3*/] = { 0f, 0f, 0f };
			Global_24CEF0.f_79[iVar4] = 0f;
			iVar4++;
		}
		func_221(*uParam0);
		iVar0 = 0;
		while (iVar0 < Global_24B2CE.f_6C9)
		{
			iVar1 = Global_24B2CE.f_85F[iVar0];
			if (iVar1 > 4294967295 && iVar1 < 101)
			{
				vVar2 = { Global_24B2CE.f_6CA[iVar1 /*4*/] };
				fVar3 = Global_24B2CE.f_6CA[iVar1 /*4*/].f_3;
				if (SYSTEM::VMAG(vVar2) > 0f)
				{
					if ((uParam2->f_39 && SYSTEM::VDIST(vVar2, uParam2->f_23) > uParam2->f_4) || uParam2->f_39 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(vVar2.x, vVar2.y, 0f, uParam2->f_23, uParam2->f_23.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_C && !func_209(vVar2, fVar3, uParam2->f_22, CAM::_0xDC9DA9E8789F5246(), 0, uParam2->f_38)) || !uParam2->f_C)
							{
								if (!uParam2->f_F || !func_96(uParam2->f_23, &vVar2, &(uParam2->f_26), &(uParam2->f_2D), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar5 = uParam2->f_1F;
										bVar6 = true;
										iVar7 = 1;
										fVar8 = uParam2->f_31;
										if (!uParam2->f_37)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											fVar8 = 1f;
										}
										else if (uParam2->f_11)
										{
											iVar5 = 0;
											bVar6 = false;
											iVar7 = 0;
											if (uParam2->f_21 == 1)
											{
												fVar8 = (fVar8 * 0.375f);
											}
										}
										else
										{
											bVar6 = true;
											iVar7 = 1;
											if (uParam2->f_1C)
											{
												if (uParam2->f_21 == 1)
												{
													fVar8 = (fVar8 * 0.375f);
												}
											}
										}
										bVar9 = false;
										if (!func_208(vVar2, fVar3, uParam2->f_22))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_225(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 4294967295, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar9 = true;
												}
											}
											else if (func_225(vVar2, 6f, 1f, 1f, 5f, iVar5, bVar6, iVar7, fVar8, uParam2->f_3A, 4294967295, 1, 0f, 0, 0, 0, 0) && !func_206(vVar2, fVar3, uParam2->f_22, 1, 1, 0, 0, uParam2->f_3A, 0))
											{
												bVar9 = true;
											}
										}
										if (bVar9)
										{
											if ((uParam2->f_1D || uParam2->f_1E) || uParam2->f_34)
											{
												fVar11 = 0f;
												if (uParam2->f_34)
												{
													iVar10 = func_205(vVar2, uParam2->f_36, &fVar11);
												}
												if (!uParam2->f_34 || (uParam2->f_34 && iVar10 <= uParam2->f_35))
												{
													if (uParam2->f_34)
													{
														if (iVar10 < uParam2->f_35)
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEF0.f_A2)
															{
																Global_24CEF0[iVar4 /*3*/] = { 0f, 0f, 0f };
																Global_24CEF0.f_79[iVar4] = 0f;
																iVar4++;
															}
															Global_24CEF0.f_A2 = 0;
															uParam2->f_35 = iVar10;
														}
													}
													if (uParam2->f_1E)
													{
														if (Global_24CEF0.f_A2 == 0)
														{
															Global_24CEF0[0 /*3*/] = { vVar2 };
															Global_24CEF0.f_79[0] = fVar3;
														}
														else
														{
															iVar4 = 0;
															while (iVar4 < Global_24CEF0.f_A2 + 1)
															{
																if (iVar4 < 40)
																{
																	if (SYSTEM::VDIST2(vVar2, uParam2->f_23) < SYSTEM::VDIST2(Global_24CEF0[iVar4 /*3*/], uParam2->f_23))
																	{
																		func_204(vVar2, fVar3, iVar4);
																		iVar4 = Global_24CEF0.f_A2 + 1;
																	}
																}
																iVar4++;
															}
														}
														Global_24CEF0.f_A2++;
														if (Global_24CEF0.f_A2 >= 5)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
															else if (Global_24CEF0.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
														}
													}
													else
													{
														Global_24CEF0[Global_24CEF0.f_A2 /*3*/] = { vVar2 };
														Global_24CEF0.f_79[Global_24CEF0.f_A2] = fVar3;
														Global_24CEF0.f_A2++;
														if (Global_24CEF0.f_A2 >= 10)
														{
															if ((uParam2->f_34 && uParam2->f_35 == 0) || uParam2->f_34 == 0)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
															else if (Global_24CEF0.f_A2 == 40)
															{
																iVar0 = Global_24B2CE.f_6C9;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { vVar2 };
												*uParam1 = fVar3;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { vVar2 };
										*uParam1 = fVar3;
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
		if (Global_24CEF0.f_A2 > 0)
		{
			if (uParam2->f_1E)
			{
				*uParam0 = { Global_24CEF0[0 /*3*/] };
				*uParam1 = Global_24CEF0.f_79[0];
				return 1;
			}
			else
			{
				if (Global_24CEF0.f_A3 > 0 && !Global_24CEF0.f_A3 == Global_24CEF0.f_A2)
				{
					func_202(0, uParam2);
				}
				iVar12 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_24CEF0.f_A2);
				vVar13 = { Global_24CEF0[0 /*3*/] };
				uVar14 = Global_24CEF0.f_79[0];
				Global_24CEF0[0 /*3*/] = { Global_24CEF0[iVar12 /*3*/] };
				Global_24CEF0.f_79[0] = Global_24CEF0.f_79[iVar12];
				Global_24CEF0[iVar12 /*3*/] = { vVar13 };
				Global_24CEF0.f_79[iVar12] = uVar14;
				*uParam0 = { Global_24CEF0[0 /*3*/] };
				*uParam1 = Global_24CEF0.f_79[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_21++;
			if (uParam2->f_21 < 2)
			{
				return 0;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_221(vector3 vParam0)//Position - 0xB481
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_24B2CE.f_6C9)
	{
		uVar1 = func_222(vParam0, fVar0, &fVar0);
		Global_24B2CE.f_85F[iVar2] = uVar1;
		iVar2++;
	}
}

int func_222(vector3 vParam0, float fParam1, float fParam2)//Position - 0xB4BC
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = 4294967295;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_24B2CE.f_6C9)
	{
		fVar2 = SYSTEM::VDIST2(vParam0, Global_24B2CE.f_6CA[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam1)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam2 = fVar1;
	return iVar0;
}

bool func_223(int iParam0)//Position - 0xB51E
{
	return iParam0 == 50;
}

void func_224(var uParam0, var uParam1)//Position - 0xB52B
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(uParam0, uParam1, 0.1f);
	Global_24B2CE.f_999 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_24B2CE.f_997 = 1;
	Global_24B2CE.f_99A = HUD::_0x13C4B962653A5280();
}

int func_225(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)//Position - 0xB55E
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
		if (func_181(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_24B2CE.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_168(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_24B2CE.f_2++;
	return 1;
}

void func_226()//Position - 0xB66F
{
	func_231();
	func_230();
	func_229();
	func_228();
	func_227();
}

void func_227()//Position - 0xB68B
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 128)
	{
		Global_24BE21[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_228()//Position - 0xB6C3
{
	struct<10> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 4)
	{
		Global_24B2CE.f_9AA.f_5A[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_229()//Position - 0xB6F2
{
	struct<4> Var0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 8)
	{
		Global_24B2CE.f_9AA.f_39[iVar1 /*4*/] = { Var0 };
		iVar1++;
	}
}

void func_230()//Position - 0xB720
{
	struct<10> Var0;
	int iVar1;
	
	Var0.f_2 = 1176256410;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Global_24B2CE.f_9AA.f_6[iVar1 /*10*/] = { Var0 };
		iVar1++;
	}
}

void func_231()//Position - 0xB75C
{
	struct<6> Var0;
	
	Var0.f_3 = 4294967295;
	Global_24B2CE.f_9AA = { Var0 };
}

void func_232()//Position - 0xB77A
{
	if (Global_24B2CE.f_997)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_24B2CE.f_999)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_24B2CE.f_997 = 0;
	}
}

int func_233(bool bParam0)//Position - 0xB7AD
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_234(int iParam0)//Position - 0xB7D0
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_235(int iParam0)//Position - 0xB7EE
{
	switch (iParam0)
	{
		case 0:
			return Local_95.f_31;
			break;
	}
	return 0;
}

int func_236()//Position - 0xB80E
{
	if (iLocal_101 == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_237()//Position - 0xB82E
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 0))
	{
		MISC::SET_BIT(&(Local_95.f_2), 0);
		if (iLocal_101 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_103, 1, 1))
		{
			if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) - NETWORK::_0xCB215C4B56A7FAE7(0)) >= func_463(iLocal_101)
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_463(iLocal_101)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = PLAYER::GET_PLAYER_PED(iLocal_103);
					iVar3 = PED::GET_PED_NEARBY_PEDS(iVar2, &uLocal_284, 4294967295);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = 4294967295;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_463(iLocal_101))
							{
								if (iVar5 == 4294967295)
								{
									if (((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iVar1 /*7*/]) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar1 /*7*/].f_2, 1)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar1 /*7*/].f_2, 6)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != 4294967295)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_284[iVar0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_284[iVar0], 0))
									{
										if (!PED::IS_PED_A_PLAYER(uLocal_284[iVar0]))
										{
											if (func_239(ENTITY::GET_ENTITY_MODEL(uLocal_284[iVar0])))
											{
												if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_284[iVar0]))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_284[iVar0], 0))
													{
														if (func_5(unk_0x8000C77B5F336760(uLocal_284[iVar0], 1), unk_0x8000C77B5F336760(iVar2, 1), 625f))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_284[iVar0], 1, 0);
															Local_95.f_A[iVar5 /*7*/].f_6 = iVar0;
															MISC::SET_BIT(&(Local_95.f_A[iVar5 /*7*/].f_2), 8);
															if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 12))
															{
																Local_95.f_8 = iLocal_106;
																MISC::SET_BIT(&(Local_95.f_1), 12);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_463(iLocal_101))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar6 /*7*/].f_2, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar6 /*7*/].f_2, 8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6], 0))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6]))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6], 1);
							Local_95.f_A[iVar6 /*7*/] = NETWORK::PED_TO_NET(uLocal_284[Local_95.f_A[iVar6 /*7*/].f_6]);
							unk_0xF2A50F5F6E7737D8(Local_95.f_A[iVar6 /*7*/], 1);
							MISC::SET_BIT(&(Local_95.f_A[iVar6 /*7*/].f_2), 0);
							Local_95.f_A[iVar6 /*7*/].f_1 = iLocal_101;
							Local_95.f_A[iVar6 /*7*/].f_4 = func_65(iLocal_101);
							func_63(iVar6);
							GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_A[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_8) > 5000)
		{
			if (iVar7 >= func_463(iLocal_101))
			{
				MISC::SET_BIT(&(Local_95.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_284[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_463(iLocal_101))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar6 /*7*/].f_2, 8))
				{
					func_238(&(Local_95.f_A[iVar6 /*7*/]));
					GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_A[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_238(var uParam0)//Position - 0xBC0D
{
	var uVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		uVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
	}
}

int func_239(int iParam0)//Position - 0xBC31
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01"))
	{
		return 0;
	}
	return 1;
}

int func_240()//Position - 0xBF2F
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 6))
	{
		return 1;
	}
	else if (iLocal_101 == 0)
	{
		Local_95.f_31 = func_241(Local_95.f_24, 1);
		MISC::SET_BIT(&(Local_95.f_1), 6);
		return 1;
	}
	else
	{
		MISC::SET_BIT(&(Local_95.f_1), 6);
		return 1;
	}
	return 0;
}

int func_241(vector3 vParam0, int iParam1)//Position - 0xBF7E
{
	int iVar0;
	
	if (func_242(vParam0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_242(vParam0, 1100f, -196f, 300f, 350f, 0) || func_242(vParam0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_242(vParam0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_242(vParam0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_242(vParam0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_242(vParam0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_242(vParam0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam1 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (vParam0.y > 800f)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_242(vector3 vParam0, vector3 vParam1, float fParam2, int iParam3)//Position - 0xC13C
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, vParam1, iParam3) <= fParam2;
}

void func_243(int iParam0)//Position - 0xC155
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	Local_95.f_24 = { unk_0x8000C77B5F336760(iParam0, 1) };
	if (func_244(iParam0, 0))
	{
		MISC::SET_BIT(&(Local_95.f_1), 17);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_1), 17);
	}
}

int func_244(int iParam0, int iParam1)//Position - 0xC194
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_245()//Position - 0xC1D5
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (iLocal_101)
			{
				case 0:
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 11))
					{
						if (func_6(iLocal_103, 1, 1))
						{
							if (SYSTEM::VDIST2(func_8(iLocal_103), Local_95.f_27) > 625f)
							{
								GRAPHICS::_0x35FB78DC42B7BD21(&(Local_95.f_2), 11);
								GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_103, 1, 1))
						{
							bVar0 = true;
							if (func_248())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_58();
						}
						else
						{
							func_59();
						}
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 5))
						{
							if (func_247())
							{
								func_59();
								MISC::SET_BIT(&(Local_95.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_103, 1, 1))
					{
						bVar0 = true;
						if (func_246())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_58();
					}
					else
					{
						func_59();
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 5))
					{
						if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_5) > 30000)
						{
							func_59();
							MISC::SET_BIT(&(Local_95.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_246()//Position - 0xC2FA
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_103);
	if (((((ENTITY::IS_ENTITY_IN_AIR(iVar0) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_29(iLocal_103, 1, 0)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103))
	{
		return 1;
	}
	if (func_113(iLocal_103, 1))
	{
		if (iLocal_103 > 4294967295)
		{
			if (Global_1841F3[iLocal_103 /*790*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_247()//Position - 0xC381
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 18))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_5) > 5000)
		{
			MISC::SET_BIT(&(Local_95.f_1), 18);
			return 1;
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_248()//Position - 0xC3D0
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_103);
	if (((((((((ENTITY::GET_ENTITY_SPEED(iVar0) > 10f || ENTITY::IS_ENTITY_IN_AIR(iVar0)) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_29(iLocal_103, 1, 0)) || func_57(iLocal_103)) || func_37(iLocal_103, 0)) || func_37(iLocal_103, 7)) || func_28(iLocal_103)) || Global_24FBF9[iLocal_103 /*413*/].f_EE) || func_56(PLAYER::GET_PLAYER_PED(iLocal_103), joaat("TITAN")))
	{
		return 1;
	}
	if (func_113(iLocal_103, 1))
	{
		if (iLocal_103 > 4294967295)
		{
			if (Global_1841F3[iLocal_103 /*790*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_103 != 4294967295)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_103 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_249()//Position - 0xC4BA
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 14))
	{
		Local_95.f_9 = iLocal_106;
		MISC::SET_BIT(&(Local_95.f_1), 14);
	}
}

void func_250()//Position - 0xC4E1
{
	if (Local_95.f_2C != Local_97[iLocal_102 /*5*/].f_4)
	{
		Local_95.f_2C = Local_97[iLocal_102 /*5*/].f_4;
	}
}

void func_251()//Position - 0xC506
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 10))
	{
		Local_95.f_2D = func_463(iLocal_101);
		Local_95.f_2E = 0;
		Local_95.f_2F = 0;
		MISC::SET_BIT(&(Local_95.f_1), 10);
	}
}

void func_252()//Position - 0xC53B
{
	func_253();
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 8))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 7))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_106, Local_95.f_7) > 300000)
			{
				MISC::SET_BIT(&(Local_95.f_2), 8);
			}
		}
	}
}

void func_253()//Position - 0xC57D
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 7))
	{
		Local_95.f_7 = iLocal_106;
		MISC::SET_BIT(&(Local_95.f_2), 7);
	}
}

void func_254()//Position - 0xC5A2
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	MISC::SET_BIT(&iLocal_98, 7);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 1))
	{
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 2))
	{
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 3))
	{
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 9))
	{
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 4))
	{
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 5))
	{
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 11))
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 7);
			if (Local_95.f_32 || Local_95.f_34)
			{
				MISC::SET_BIT(&iLocal_98, 7);
			}
			else if (func_365("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_98, 7);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 6))
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 7);
			if (Local_95.f_32 || Local_95.f_34)
			{
				MISC::SET_BIT(&iLocal_98, 7);
			}
			else if (func_365("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_98, 7);
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 7))
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 7);
			if (func_333())
			{
				if (!Local_95.f_32)
				{
					if (Local_95.f_34)
					{
						iLocal_285 = func_332(Local_95.f_35);
					}
					else
					{
						iLocal_285 = func_328(12);
					}
					if (iLocal_285 > 0)
					{
						func_326(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, 4, 1, 1);
					}
					MISC::SET_BIT(&iLocal_98, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 0))
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 7);
				if (func_365("MPCT_mugfail", "LAMAR", 19))
				{
					MISC::SET_BIT(&iLocal_98, 7);
				}
			}
		}
		else if (CAM::_0xDC9DA9E8789F5246() == iLocal_103)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 12))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_40001.f_1983) * Global_40001.f_10C5));
					func_270(0, "XPT_MEDIUMT", 2435321038, 757237446, iVar0, 1, 4294967295, 0);
					func_256(47, 1);
				}
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 8))
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 7);
			if (func_333())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_328(2) * func_463(iLocal_101));
					iVar1 = 3;
				}
				else
				{
					if (Local_95.f_34)
					{
						iLocal_285 = func_332(Local_95.f_35);
					}
					else
					{
						iLocal_285 = func_328(12);
					}
					iVar1 = 4;
				}
				if (!Local_95.f_32)
				{
					if (iLocal_285 > 0)
					{
						func_326(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, iVar1, 1, 0);
					}
					MISC::SET_BIT(&iLocal_98, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 10))
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 7);
			if (func_333())
			{
				if (iLocal_101 == 0)
				{
					iLocal_285 = (func_328(2) * func_463(iLocal_101));
					iVar2 = 3;
				}
				else
				{
					if (Local_95.f_34)
					{
						iLocal_285 = func_332(Local_95.f_35);
					}
					else
					{
						iLocal_285 = func_328(12);
					}
					iVar2 = 4;
				}
				if (!Local_95.f_32)
				{
					if (iLocal_285 > 0)
					{
						func_326(iLocal_285, 1, 0, 0f);
						func_311(iLocal_285, iVar2, 1, 0);
					}
					MISC::SET_BIT(&iLocal_98, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_98, 7);
				}
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 7))
	{
		func_255();
	}
}

void func_255()//Position - 0xC8FA
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1841F3[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*790*/].f_8F), iLocal_101);
	Global_1841F3[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*790*/].f_90 = 4294967295;
	if (iLocal_101 == 1)
	{
		if (MISC::IS_INCIDENT_VALID(uLocal_283))
		{
			MISC::DELETE_INCIDENT(uLocal_283);
		}
	}
	func_492();
	func_524();
}

int func_256(int iParam0, int iParam1)//Position - 0xC944
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_257(iParam0, iParam1);
}

int func_257(int iParam0, int iParam1)//Position - 0xC95F
{
	if (func_269(14) && !func_268(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_646A != 0 && !Global_11625)
	{
		return 0;
	}
	if (func_267(&Global_412216))
	{
		if (func_265(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_258(&Global_412216, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_258(var uParam0, int iParam1)//Position - 0xC9FC
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_269(14) && !func_268(iParam1))
	{
		return 0;
	}
	if (func_265(uParam0, iParam1))
	{
		return 0;
	}
	if (func_264(uParam0) < 0f)
	{
		func_263(uParam0, 0);
	}
	func_261(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_259(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_259(var uParam0, int iParam1)//Position - 0xCAAD
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_269(14) && !func_268(iParam1))
	{
		return 0;
	}
	if (func_265(uParam0, iParam1))
	{
		return 0;
	}
	if (func_264(uParam0) < 0f)
	{
		func_263(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_260(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_260(var uParam0, int iParam1)//Position - 0xCB28
{
	return (*uParam0)[iParam1] == 78;
}

void func_261(var uParam0)//Position - 0xCB39
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_262(uParam0, iVar0);
		iVar0++;
	}
	func_263(uParam0, (Global_412215 - 0.5f));
}

void func_262(var uParam0, int iParam1)//Position - 0xCB6D
{
	(*uParam0)[iParam1] = 78;
}

void func_263(var uParam0, float fParam1)//Position - 0xCB7D
{
	if (fParam1 == 0f)
	{
		uParam0->f_50 = 0f;
	}
	else
	{
		uParam0->f_50 = fParam1;
	}
}

float func_264(var uParam0)//Position - 0xCB9A
{
	return uParam0->f_50;
}

bool func_265(var uParam0, int iParam1)//Position - 0xCBA6
{
	return func_266(uParam0, iParam1) != 4294967295;
}

int func_266(var uParam0, int iParam1)//Position - 0xCBB8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

bool func_267(var uParam0)//Position - 0xCBE5
{
	return uParam0->f_4F == 1;
}

int func_268(int iParam0)//Position - 0xCBF3
{
	switch (iParam0)
	{
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
		
		default:
	}
	return 0;
}

bool func_269(int iParam0)//Position - 0xCC43
{
	return Global_8D15 == iParam0;
}

var func_270(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xCC51
{
	return func_271(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_271(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0xCC6D
{
	var uVar0;
	
	uVar0 = func_272(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_272(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xCC90
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_310(CAM::_0xDC9DA9E8789F5246()) || func_309(CAM::_0xDC9DA9E8789F5246()))
	{
		if (Global_40001.f_2532 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_2532;
		}
	}
	else if (func_307() || func_305(CAM::_0xDC9DA9E8789F5246()))
	{
		if (Global_40001.f_5870 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_40001.f_5870;
		}
	}
	else if (Global_40001.f_197C > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_40001.f_197C;
	}
	if (func_304(sParam2))
	{
	}
	if (func_303())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_301(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_300(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_298(0, &iVar1);
					break;
				
				case 3:
					func_298(1, &iVar1);
					break;
				
				case 1:
					func_296(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_199937)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_293(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_282((func_292(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_293(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_277(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == 4294967295)
			{
				func_273((func_275(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_273((func_275(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_273(int iParam0)//Position - 0xCE8E
{
	if (func_303())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_274(joaat("mpply_globalxp"), iParam0);
	}
}

void func_274(int iParam0, int iParam1)//Position - 0xCEB9
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_275(int iParam0)//Position - 0xCED5
{
	if (iParam0 > 4294967295)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_276(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_276(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_276(int iParam0)//Position - 0xCF26
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_277(int iParam0)//Position - 0xCF44
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_138(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_280(func_281(&Var0));
			if (iVar1 == 0)
			{
				func_279(&Global_150A08, iParam0);
				func_278(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_279(&Global_150A09, iParam0);
				func_278(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_279(&Global_150A0A, iParam0);
				func_278(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_279(&Global_150A0B, iParam0);
				func_278(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_279(&Global_150A0C, iParam0);
				func_278(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_278(int iParam0, int iParam1)//Position - 0xD018
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
	switch (iParam0)
	{
		case joaat("mpply_crew_0_id"):
			Global_150A03 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_150A05 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_150A05 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_150A06 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_150A07 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_150A08 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_150A09 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_150A0A = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_150A0B = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_150A0C = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_150A0D = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_150A0E = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_150A0F = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_150A10 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_150A11 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_150A12 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_150A13 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_279(var uParam0, int iParam1)//Position - 0xD13D
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_280(int iParam0)//Position - 0xD14E
{
	if (iParam0 == Global_150A03)
	{
		return 0;
	}
	else if (iParam0 == Global_150A04)
	{
		return 1;
	}
	else if (iParam0 == Global_150A05)
	{
		return 2;
	}
	else if (iParam0 == Global_150A06)
	{
		return 3;
	}
	else if (iParam0 == Global_150A07)
	{
		return 4;
	}
	else
	{
		return 4294967295;
	}
	return 4294967295;
}

int func_281(var uParam0)//Position - 0xD1AB
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_258207;
		}
	}
	return Global_258207;
}

void func_282(int iParam0, int iParam1, int iParam2)//Position - 0xD1CE
{
	if (func_303())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_291(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_291(4294967295)])
				{
					return;
				}
			}
		}
		if (Global_40001.f_2511 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, 3136273443, 2949543449);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_40001.f_2511 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, 2708045899, iParam1);
				return;
			}
		}
		if (func_290(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_288(iParam0, 1);
		}
		func_287(639, iParam0, 4294967295, 1);
		func_286(640, func_288(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_291(4294967295)] = iParam0;
		func_283(7, 0);
	}
}

void func_283(int iParam0, int iParam1)//Position - 0xD2EF
{
	int iVar0;
	
	if (func_285(iParam0, iParam1))
	{
		iVar0 = func_284();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_284()//Position - 0xD312
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2581E6[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_285(int iParam0, var uParam1)//Position - 0xD347
{
	if (Global_14084D)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_140859) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_286(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xD3CD
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_291(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_287(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD3FD
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_291(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_291(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_291(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_291(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_291(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_291(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_291(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_291(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_291(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_291(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_291(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_291(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_291(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_291(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_291(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_291(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_291(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_291(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_291(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_291(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_291(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_291(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_291(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_291(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_291(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_291(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_291(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_291(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_291(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_291(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_291(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_291(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_291(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_291(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_288(int iParam0, bool bParam1)//Position - 0xDC08
{
	if (bParam1)
	{
	}
	return func_289(iParam0, 0);
}

int func_289(int iParam0, int iParam1)//Position - 0xDC1C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (Global_4646A[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_4646A[iVar3] < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_290(int iParam0)//Position - 0xDCDB
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_252F9E.f_1, iParam0);
	}
	return 1;
}

int func_291(int iParam0)//Position - 0xDD00
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_196();
		if (iVar1 > 4294967295)
		{
			Global_26AF40 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_26AF40 = 1;
		}
	}
	return iVar0;
}

int func_292(int iParam0)//Position - 0xDD34
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_291(4294967295)];
			}
			else if (func_290(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_291(4294967295)];
	}
	return 0;
}

void func_293(int iParam0, int iParam1, int iParam2)//Position - 0xDD91
{
	int iVar0;
	
	iVar0 = func_295(iParam0, func_291(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_294(iParam0))
	{
		func_286(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_287(iParam0, iVar0, iParam2, 1);
	}
}

int func_294(int iParam0)//Position - 0xDDD3
{
	if (Global_150A02)
	{
		switch (iParam0)
		{
			case 787:
			case 788:
			case 789:
			case 790:
			case 777:
			case 778:
			case 779:
			case 780:
			case 767:
			case 768:
			case 769:
			case 770:
			case 757:
			case 758:
			case 759:
			case 760:
			case 1303:
			case 7233:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2929:
			case 3058:
			case 8527:
			case 3053:
			case 3054:
			case 3055:
			case 3056:
			case 3057:
			case 3232:
			case 3234:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3227:
			case 3221:
			case 3663:
			case 3664:
			case 3665:
			case 3666:
			case 3667:
			case 3668:
			case 3689:
			case 3230:
			case 3229:
			case 4020:
			case 4019:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 6110:
			case 6109:
			case 6168:
			case 6167:
			case 6533:
			case 6532:
			case 6546:
			case 6545:
			case 6559:
			case 6558:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 7283:
			case 7285:
			case 7287:
				return 1;
				break;
			}
	}
	return 0;
}

int func_295(int iParam0, int iParam1, int iParam2)//Position - 0xDFDD
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_291(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_296(int iParam0)//Position - 0xE00F
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(CAM::_0xDC9DA9E8789F5246());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != 4294967295)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_140(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_139(CAM::_0xDC9DA9E8789F5246(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_297(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_297(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_297(int iParam0, int iParam1)//Position - 0xE0FA
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_298(bool bParam0, int iParam1)//Position - 0xE11B
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_139(CAM::_0xDC9DA9E8789F5246(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_299(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_139(CAM::_0xDC9DA9E8789F5246(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_297(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_297(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_299(int iParam0, int iParam1)//Position - 0xE233
{
	return SYSTEM::VDIST(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_300(int iParam0)//Position - 0xE24F
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_297(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_301(int iParam0)//Position - 0xE286
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_292(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_292(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_302(8000, 0, 0) > 0)
	{
		if (func_302(8000, 0, 0) < (iParam0 + func_292(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_302(8000, 0, 0) - func_292(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_302(int iParam0, bool bParam1, int iParam2)//Position - 0xE2EA
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return Global_4646A[iParam0];
}

int func_303()//Position - 0xE312
{
	return 1;
}

int func_304(char* sParam0)//Position - 0xE31B
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0)//Position - 0xE353
{
	return func_306(func_33(iParam0));
}

int func_306(int iParam0)//Position - 0xE365
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_307()//Position - 0xE37F
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_171();
	}
	return func_308(Global_440000.f_1FEDE);
}

int func_308(int iParam0)//Position - 0xE3A3
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_40001.f_138A[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_309(int iParam0)//Position - 0xE3DD
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_310(int iParam0)//Position - 0xE3F2
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

void func_311(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xE407
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	StringCopy(&Var0, func_325(iParam1), 16);
	StringCopy(&Var1, func_324(iParam2), 16);
	switch (iParam1)
	{
		case 0:
			iVar2 = 1287308202;
			break;
		
		case 1:
			iVar2 = 691372038;
			break;
		
		case 2:
			iVar2 = 1480707108;
			break;
		
		case 3:
			iVar2 = 1512499951;
			break;
		
		case 4:
			iVar2 = 562283735;
			break;
		
		case 5:
			iVar2 = 4140234963;
			break;
		
		case 6:
			iVar2 = 2932306805;
			break;
		
		case 7:
			iVar2 = 645708827;
			break;
		
		case 8:
			iVar2 = 767907967;
			break;
		
		case 9:
			iVar2 = 2324815990;
			break;
		
		case 10:
			iVar2 = 718859568;
			break;
		
		case 11:
			iVar2 = 2339402525;
			break;
		
		case 12:
			iVar2 = 892388724;
			break;
		
		case 13:
			iVar2 = 2868046458;
			break;
		
		case 14:
			iVar2 = 3630369731;
			break;
		
		case 15:
			iVar2 = 1864522104;
			break;
		
		case 16:
			iVar2 = 215608230;
			break;
		
		case 17:
			iVar2 = 3194003497;
			break;
	}
	if (func_46())
	{
		func_312(iVar2, iParam0, &iVar3, bParam3, bParam3, 0);
		Global_410C0F[iVar3 /*80*/].f_D.f_28 = { Var0 };
		Global_410C0F[iVar3 /*80*/].f_D.f_2C = { Var1 };
	}
	else
	{
		NETWORKCASH::NETWORK_REFUND_CASH(iParam0, &Var0, &Var1, bParam3);
	}
}

void func_312(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0xE593
{
	int iVar0;
	
	if (!func_46())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case 2649738075:
		case 3709248901:
		case 2935592169:
		case 454359403:
		case 3312573245:
		case 1643659499:
		case 2222677642:
		case 650665123:
		case 1654961868:
		case 3418119454:
		case 68030260:
		case 2172668013:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case 3778748250:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case 2905739390:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case 3395164992:
		case 3631022961:
		case 1208553146:
		case 3681746286:
		case 3623904420:
		case 3887766060:
		case 3540943093:
		case 2409522409:
		case 1931729587:
		case 1064954035:
		case 4114826223:
		case 2131324797:
		case 1612072658:
		case 3777519894:
		case 1948102096:
		case 1108628223:
		case 2460920732:
		case 3055958484:
		case 4072603454:
		case 3018288428:
		case 1564537328:
		case 4198373795:
		case 742499889:
		case 2050093329:
		case 2542479227:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case 2964212290:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case 3958163446:
		case 2882274531:
		case 618167454:
		case 980623936:
		case 437291904:
		case 4159154248:
		case 3364862819:
		case 2874057976:
		case 2561569253:
		case 2402207034:
		case 2749230248:
		case 2039302543:
		case 402505853:
		case 3151457114:
		case 1678112166:
		case 837955913:
		case 2762500152:
		case 1815541181:
			if (iParam1 > 0)
			{
				func_313(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 4263810419:
		case 3267748665:
		case 2896648878:
		case 1652884147:
		case 4237099040:
		case 3078478004:
		case 4248344981:
		case 3942610365:
		case 3304681061:
		case 563463121:
		case 1734805203:
		case 941287179:
		case 3108887451:
		case 2309817038:
		case 3167945912:
		case 4185766010:
		case 312105838:
		case 1982688246:
		case 3633936878:
		case 1301046174:
		case 2708796979:
		case 393059668:
		case 23796958:
		case 3217811126:
		case 1780666425:
		case 2251272238:
		case 2372412947:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case 4140234963:
		case 2932306805:
		case 645708827:
		case 767907967:
		case 2324815990:
		case 718859568:
		case 2339402525:
		case 892388724:
		case 2868046458:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case 4235299214:
		case 1736933716:
		case 2826443171:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case 3360501964:
		case 3100714174:
		case 4082360211:
		case 3479420741:
		case 1048226110:
		case 569170531:
		case 3438960429:
		case 848090538:
		case 4247420391:
		case 4001907056:
		case 463142405:
		case 1550217370:
		case 4193659516:
		case 3630369731:
		case 599804707:
		case 3967048882:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case 2164767625:
		case 3067312758:
		case 1864522104:
		case 215608230:
		case 3418954532:
		case 3572072971:
		case 1407278493:
		case 2715572802:
		case 4267523385:
		case 1179783540:
		case 923419301:
		case 3986141121:
		case 603298940:
		case 4282347442:
		case 3983854621:
		case 870439158:
		case 3320678556:
		case 4290828642:
		case 3114013174:
		case 2376916280:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case 3122066507:
		case 2279567963:
		case 2720171655:
		case 3333932415:
		case 1135468152:
		case 1265272476:
		case 3660240660:
		case 696556762:
		case 403506509:
		case 3411090882:
		case 3230816581:
		case 2907714241:
		case 3578004144:
		case 1138089938:
		case 3733955243:
			func_313(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_313(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_313(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_313(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xEB00
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_196()) || unk_0x64BE694244417BDA())
		{
			Global_410E36 = 1;
			return 0;
		}
		if (Global_2586D5)
		{
			if (iParam3 == 1067618600 || iParam3 == 2991135598)
			{
				Global_410E37 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_410C0F[iVar2 /*80*/].f_3D.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 5;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || unk_0xEC103C948D1D3BEF(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0x93EA4BE98F3F425A(iVar4))
		{
			*uParam0 = func_320(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != 4294967295)
				{
					Global_410C0F[*uParam0 /*80*/].f_3D.f_8 = 1;
					Global_410C0F[*uParam0 /*80*/].f_3D.f_C = 1;
				}
			}
			Global_410E28 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_410E35 = 1;
			Global_410E38 = iParam4;
			Global_410E3A = iParam3;
			Global_410E3B = 1;
			Global_410E39 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_410E38 = iParam4;
			Global_410E3A = iParam3;
			Global_410E3B = 1;
			Global_410E39 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_319(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_314(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_314(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0xECAB
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_315(iParam0);
	}
}

void func_315(int iParam0)//Position - 0xECE3
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_46())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_318(iParam0))
		{
			if (!bVar0)
			{
				unk_0x220FA7ABD5D740BF();
			}
		}
		else if (!bVar0)
		{
			unk_0xBDAA2C842F5C47BF(Global_410C0F[iParam0 /*80*/].f_3D);
		}
		func_316(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_316(var uParam0)//Position - 0xED37
{
	uParam0->f_3D = 0;
	uParam0->f_3D = 2147483647;
	uParam0->f_3D.f_1 = 0;
	uParam0->f_3D.f_2 = 0;
	uParam0->f_3D.f_3 = 2701847856;
	uParam0->f_3D.f_4 = 2209654107;
	uParam0->f_3D.f_5 = 0;
	uParam0->f_3D.f_6 = 1227573907;
	uParam0->f_3D.f_7 = 3133133477;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_317(&(uParam0->f_D));
	func_317(&(uParam0->f_D.f_D));
	StringCopy(&(uParam0->f_D.f_1A), "", 32);
	StringCopy(&(uParam0->f_D.f_22), "", 24);
	StringCopy(&(uParam0->f_D.f_28), "", 16);
	StringCopy(&(uParam0->f_D.f_2C), "", 16);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_3D.f_8 = 0;
	uParam0->f_3D.f_9 = 0;
	uParam0->f_3D.f_A = 0;
	uParam0->f_3D.f_B = 0;
	uParam0->f_3D.f_D = 0;
	uParam0->f_3D.f_C = 0;
	uParam0->f_3D.f_E = 0;
	uParam0->f_3D.f_F = 0;
	uParam0->f_3D.f_10 = 0;
	uParam0->f_3D.f_12 = 0;
}

void func_317(var uParam0)//Position - 0xEE3E
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 0;
}

int func_318(int iParam0)//Position - 0xEE86
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_319(int iParam0, int iParam1)//Position - 0xEEB0
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_320(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0xEEC4
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_46())
			{
				iParam0 = iVar0 + 900;
			}
			Global_410C0F[iVar0 /*80*/].f_3D.f_2 = 1;
			Global_410C0F[iVar0 /*80*/].f_3D.f_1 = iParam5;
			Global_410C0F[iVar0 /*80*/].f_3D.f_3 = iParam1;
			Global_410C0F[iVar0 /*80*/].f_3D.f_4 = iParam2;
			Global_410C0F[iVar0 /*80*/].f_3D.f_7 = iParam3;
			Global_410C0F[iVar0 /*80*/].f_3D.f_5 = 0;
			Global_410C0F[iVar0 /*80*/].f_3D = iParam0;
			Global_410C0F[iVar0 /*80*/].f_3D.f_6 = iParam4;
			Global_410C0F[iVar0 /*80*/].f_3D.f_B = uParam8;
			Global_410C0F[iVar0 /*80*/].f_3D.f_A = iParam7;
			Global_410C0F[iVar0 /*80*/].f_3D.f_D = iParam9;
			Global_410C0F[iVar0 /*80*/].f_3D.f_C = 0;
			Global_410C0F[iVar0 /*80*/].f_3D.f_E = MISC::GET_FRAME_COUNT();
			Global_410C0F[iVar0 /*80*/].f_3D.f_12 = 0;
			Global_410E28 = 0;
			if (bParam6)
			{
				Global_410C0F[iVar0 /*80*/].f_3D.f_5 = 1;
			}
			if (iParam1 == 3159588365 && iParam10)
			{
				func_321(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_321(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0xF000
{
	vector3 vVar0;
	int iVar1;
	
	if (iParam19 < 0)
	{
		return;
	}
	vVar0.f_2 = 2147483647;
	vVar0.x = 3981691983;
	vVar0.y = CAM::_0xDC9DA9E8789F5246();
	vVar0.f_2 = { Param0.f_3D };
	vVar0.f_2.f_20 = iParam19;
	iVar1 = func_323(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_322();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_322()//Position - 0xF092
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_323(int iParam0)//Position - 0xF0A1
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

char* func_324(int iParam0)//Position - 0xF0B3
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_325(int iParam0)//Position - 0xF13D
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_326(int iParam0, int iParam1, int iParam2, float fParam3)//Position - 0xF22B
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_4 = iVar1;
	Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_3 = (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_327(iVar1, 0);
	}
}

void func_327(int iParam0, bool bParam1)//Position - 0xF2AE
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_328(int iParam0)//Position - 0xF2BF
{
	int iVar0;
	
	iVar0 = 0;
	if (func_331(iParam0) >= 0)
	{
		iVar0 = func_331(iParam0);
	}
	else
	{
		iVar0 = func_329(iParam0);
	}
	return iVar0;
}

int func_329(int iParam0)//Position - 0xF2E9
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_330())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 1)
			{
				return 200;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 2)
			{
				return 400;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 3)
			{
				return 600;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 4)
			{
				return 800;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_330()//Position - 0xF4FB
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_295(6424, 4294967295, 0), 19);
}

int func_331(int iParam0)//Position - 0xF512
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_1986;
			break;
		
		case 10:
			return Global_40001.f_1015;
			break;
		
		case 11:
			return Global_40001.f_1016;
			break;
		
		case 8:
			return Global_40001.f_1013;
			break;
		
		case 0:
			return Global_40001.f_1005;
			break;
		
		case 9:
			return Global_40001.f_1014;
			break;
		
		case 13:
			return Global_40001.f_1018;
			break;
		
		case 12:
			return Global_40001.f_1017;
			break;
		
		case 2:
			return Global_40001.f_100F;
			break;
		
		case 14:
			return Global_40001.f_1019;
			break;
		
		case 20:
			if (func_330())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 1)
			{
				return Global_40001.f_198D;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 2)
			{
				return Global_40001.f_198E;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 3)
			{
				return Global_40001.f_198F;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 4)
			{
				return Global_40001.f_1990;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 5)
			{
				return Global_40001.f_1991;
			}
			break;
		
		case 6:
			return Global_40001.f_1012;
			break;
		
		case 22:
			return Global_40001.f_101F;
			break;
		
		case 23:
			return Global_40001.f_1020;
			break;
		
		case 24:
			return Global_40001.f_1021;
			break;
		
		case 25:
			return Global_40001.f_1022;
			break;
		
		case 26:
			return Global_40001.f_1023;
			break;
		
		case 35:
			return Global_40001.f_1BC6;
			break;
		
		case 15:
			return Global_40001.f_1987;
			break;
		
		case 17:
			return Global_40001.f_1987;
			break;
		
		case 18:
			return Global_40001.f_1987;
			break;
		
		case 19:
			return Global_40001.f_1987;
			break;
		
		case 21:
			return Global_40001.f_1987;
			break;
		
		case 36:
			return Global_40001.f_1D97;
			break;
		
		case 39:
			return 4294967295;
			break;
		
		case 40:
			return Global_40001.f_31D7;
			break;
		
		case 41:
			return Global_40001.f_31D8;
			break;
		
		case 42:
			return Global_40001.f_31D9;
			break;
		
		case 43:
			return Global_40001.f_3BC6;
			break;
		
		case 44:
			return Global_40001.f_3BC8;
			break;
		
		case 57:
			return Global_40001.f_1021;
			break;
		
		case 58:
			return Global_40001.f_6072;
			break;
	}
	return 0;
}

int func_332(int iParam0)//Position - 0xF7F7
{
	switch (iParam0)
	{
		case 1:
			return Global_40001.f_5B13;
		
		case 2:
			return Global_40001.f_5B14;
		
		case 3:
			return Global_40001.f_5B15;
		
		default:
	}
	return 9999999;
}

int func_333()//Position - 0xF83A
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_95.f_32 || Local_95.f_34)
	{
		if (!Local_95.f_33)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 7))
			{
				func_334("HS_UNABLE", iLocal_103, 0, 0, 0, 1, 1, 0);
			}
		}
		return 1;
	}
	switch (iLocal_101)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_365(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_334(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xF8C8
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = 4294967295;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam1) || iParam3)
	{
		if (!bParam2)
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		if ((iVar1 != 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_440000.f_1EBA3[iVar1] != 4294967295)
			{
				HUD::_SET_NOTIFICATION_COLOR_NEXT(func_363(iVar1, iParam1, 0));
			}
			else
			{
				HUD::_SET_NOTIFICATION_COLOR_NEXT(func_342(iParam1, 4294967294, 1, 0, 0));
			}
		}
		else
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(func_342(iParam1, 4294967294, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_340(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2633E1 = { func_138(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_26339B, 35, &Global_2633E1))
			{
				iVar3 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_26339B.f_16), "Leader") && Global_26339B.f_1E == 0)
				{
					iVar3 = 1;
				}
				if (Global_26339B.f_15 > 0)
				{
					iVar4 = 0;
				}
				else
				{
					iVar4 = 1;
				}
				if (bParam6)
				{
					if (bParam7)
					{
						Var2 = { func_339(&Var2) };
					}
					iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar4, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar3, 0, Global_26339B, &Var2, Global_140CDE, Global_140CDF, Global_140CE0);
				}
				else
				{
					iVar0 = HUD::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar4, NETWORK::_0x7543BB439F63792B(&Global_26339B, 35), &(Global_26339B.f_11), Global_26339B.f_1E, iVar3, 0, Global_26339B, Global_140CDE, Global_140CDF, Global_140CE0);
				}
			}
			else
			{
				iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_335(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_335(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0xFA88
{
	int iVar0;
	
	if ((!func_338() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_194(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_336(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_196195.f_5[iVar0 /*53*/] = iParam0;
		Global_196195.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_196195.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_196195.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_196195.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_196195.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_196195.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_C), sParam3, 64);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_196195.f_5[iVar0 /*53*/].f_1C[2 /*6*/]), sParam11, 24);
	}
}

int func_336(int iParam0)//Position - 0xFB90
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_337(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_196195++;
	if (Global_196195 > 5)
	{
		Global_196195 = 5;
		return Global_196195;
	}
	return (Global_196195 - 1);
}

void func_337(int iParam0)//Position - 0xFBF2
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_338()//Position - 0xFC2B
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

struct<16> func_339(char* sParam0)//Position - 0xFC3C
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_340(char* sParam0)//Position - 0xFC67
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_341(&cVar0);
}

var func_341(char[4] cParam0)//Position - 0xFC8B
{
	return cParam0;
}

int func_342(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xFC95
{
	int iVar0;
	int iVar1;
	
	if (func_141(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > 4294967295 && iVar0 < 4)
		{
			if (Global_440000.f_1EBA3[iVar0] != 4294967295)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_141(CAM::_0xDC9DA9E8789F5246()) || (func_362() && func_361())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_360();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_6(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_363(iParam1, iParam0, 0);
							}
							else
							{
								return func_352(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_352(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_363(iParam1, iParam0, 0);
				}
				else
				{
					return func_343(0, 4294967295, 0);
				}
			}
			else
			{
				return func_343(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_363(iParam1, iParam0, 0);
		}
		else
		{
			return func_352(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_352(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_343(bool bParam0, int iParam1, bool bParam2)//Position - 0xFE75
{
	return func_344(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_344(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xFE8B
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_350() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_349(iParam2, iVar0);
		}
		else
		{
			return func_349(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_140(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_348(1);
				}
				else
				{
					return func_348(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_345(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_345(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_348(1);
	}
	return func_348(0);
}

int func_345(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0xFF7F
{
	int iVar0;
	
	iVar0 = func_347(iParam0, iParam1, iParam3);
	if (func_346(Global_440000.f_1FEDE, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_346(int iParam0, bool bParam1)//Position - 0x100E5
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_440000.f_2559E == 65)
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_40001.f_22CA[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_347(int iParam0, int iParam1, int iParam2)//Position - 0x10136
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_140(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_348(bool bParam0)//Position - 0x1017D
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_349(int iParam0, int iParam1)//Position - 0x10194
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_347(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_350()//Position - 0x101E2
{
	if (func_351() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_351()//Position - 0x101FF
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_352(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x10217
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == 4294967294)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > 4294967295)
	{
		if (Global_1841F3[iVar2 /*790*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != 4294967295)
		{
			if (func_357(1))
			{
				iVar3 = func_356(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_354(iVar3);
				}
			}
			if ((func_178(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_140(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_348(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_353(1);
			}
			else
			{
				return func_344(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_348(1);
			}
			else
			{
				return func_344(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_356(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_354(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_353(bool bParam0)//Position - 0x103BB
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_354(int iParam0)//Position - 0x103D2
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_355(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_355(int iParam0)//Position - 0x10495
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_356(int iParam0)//Position - 0x104AC
{
	if (!iParam0 == func_13())
	{
		if (func_14(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_12(iParam0)];
		}
	}
	return 4294967295;
}

int func_357(int iParam0)//Position - 0x104DE
{
	if ((func_359() || func_358()) || (func_171() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_358()//Position - 0x1050D
{
	return Global_255C02.f_F;
}

var func_359()//Position - 0x1051B
{
	return Global_255C02.f_E;
}

var func_360()//Position - 0x10529
{
	return Global_240006.f_2;
}

bool func_361()//Position - 0x10537
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_362()//Position - 0x10548
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

int func_363(int iParam0, int iParam1, bool bParam2)//Position - 0x10565
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_357(1))
	{
		iVar2 = func_356(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_354(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_13())
	{
		if (Global_440000.f_1EBA3[iParam0] != 4294967295 && Global_440000.f_1EBA3[iParam0] <= 4)
		{
			if (Global_440000.f_1EBA3[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_440000.f_1EBA3[iParam0] == 4)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_440000.f_1EBA3[iParam0];
			}
		}
		else
		{
			iVar0 = func_344(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_364(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_140(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_353(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_364(int iParam0)//Position - 0x106F3
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_440000.f_255C9;
			break;
		
		case 1:
			iVar0 = Global_440000.f_255CA;
			break;
		
		case 2:
			iVar0 = Global_440000.f_255CB;
			break;
		
		case 3:
			iVar0 = Global_440000.f_255CC;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_365(char* sParam0, char* sParam1, int iParam2)//Position - 0x107C8
{
	if (!MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_100, 0))
		{
			func_462(&uLocal_118, 3, 0, sParam1, 0, 1);
			if (func_367(&uLocal_118, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				MISC::SET_BIT(&iLocal_100, 0);
			}
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_100, 1))
		{
			if (func_366(0))
			{
				MISC::SET_BIT(&iLocal_100, 1);
			}
		}
		else if (!func_366(0))
		{
			iLocal_100 = 0;
			return 1;
		}
	}
	return 0;
}

int func_366(int iParam0)//Position - 0x10845
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

int func_367(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1089F
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_460())
	{
		return 0;
	}
	if (func_459())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = 4294967197;
	return func_368(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, 4294967295);
}

int func_368(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x108E4
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_458(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_457(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_452(iParam6))
	{
		return 0;
	}
	if (func_449(iVar0, iVar1, iVar2))
	{
		if (func_448())
		{
			return 0;
		}
		func_447();
		return func_375(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_374(iParam4))
	{
		return 0;
	}
	func_369(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_369(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x109C9
{
	Global_14C73C.f_28.f_1 = iParam0;
	Global_14C73C.f_28.f_2 = iParam1;
	Global_14C73C.f_28.f_3 = iParam2;
	StringCopy(&(Global_14C73C.f_28.f_4), sParam3, 16);
	Global_14C73C.f_28.f_8 = iParam4;
	Global_14C73C.f_28.f_9 = iParam5;
	Global_14C73C.f_28.f_E = iParam6;
	func_370(iParam4);
	func_447();
	Global_14C73C.f_28.f_D = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 7000);
}

void func_370(int iParam0)//Position - 0x10A36
{
	if (func_373(iParam0))
	{
		func_372();
		return;
	}
	func_371();
}

void func_371()//Position - 0x10A52
{
	Global_14C73C.f_28.f_A = 0;
}

void func_372()//Position - 0x10A63
{
	Global_14C73C.f_28.f_A = 1;
}

int func_373(int iParam0)//Position - 0x10A74
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_374(int iParam0)//Position - 0x10ABC
{
	return iParam0 > Global_14C73C.f_28.f_8;
}

int func_375(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x10ACF
{
	struct<2> Var0;
	
	func_446();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_443(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_440(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_443(uParam0, sParam3, sParam4);
		}
		return func_423(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_422(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_412(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_411(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_376(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_376(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x10BC9
{
	bool bVar0;
	
	func_410();
	bVar0 = true;
	if (func_378(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_377(120000);
		return 1;
	}
	return 0;
}

void func_377(int iParam0)//Position - 0x10C00
{
	Global_14C73C.f_28.f_B = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam0);
	Global_14C73C.f_28.f_C = 1;
}

int func_378(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x10C23
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_404(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(HUD::_0x13C4B962653A5280(), Global_14C73C.f_28.f_D))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_403(sParam5, bParam6, &iVar3);
	uVar5 = func_401(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_400(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_382(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 0))
	{
		func_381();
	}
	func_410();
	func_380();
	func_379();
	return 1;
}

void func_379()//Position - 0x10D75
{
	Global_14C73C.f_39 = 0;
	Global_14C73C.f_39.f_1 = 0;
}

void func_380()//Position - 0x10D8D
{
	Global_14C73C.f_28 = 3;
}

void func_381()//Position - 0x10D9C
{
	MISC::SET_BIT(&Global_94F, 8);
}

int func_382(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x10DAD
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = 4294967197;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_383(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_C12 = iParam6;
			MISC::SET_BIT(&Global_41212A, 0);
		}
		return 1;
	}
	return 0;
}

int func_383(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x10E19
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_394();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_38B1 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_38B1 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_38B1 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
			{
				return 0;
			}
		}
		if (Global_41211B == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_393() == 0)
	{
		func_391();
		return 0;
	}
	func_390(Global_41211A);
	StringCopy(&(Global_411C39[Global_41211A /*104*/]), sParam1, 64);
	Global_411C39[Global_41211A /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_411C39[Global_41211A /*104*/].f_18 = iParam2;
	}
	Global_411C39[Global_41211A /*104*/].f_19 = iParam7;
	Global_411C39[Global_41211A /*104*/].f_1A = uParam8;
	Global_411C39[Global_41211A /*104*/].f_1D = uParam9;
	Global_411C39[Global_41211A /*104*/].f_1E = uParam12;
	Global_411C39[Global_41211A /*104*/].f_1F = uParam11;
	Global_411C39[Global_41211A /*104*/].f_1C = 0;
	Global_411C39[Global_41211A /*104*/].f_20 = iParam3;
	StringCopy(&(Global_411C39[Global_41211A /*104*/].f_21), sParam4, 64);
	Global_411C39[Global_41211A /*104*/].f_31 = iParam6;
	StringCopy(&(Global_411C39[Global_41211A /*104*/].f_32), sParam5, 64);
	Global_411C39[Global_41211A /*104*/].f_42 = iParam13;
	StringCopy(&(Global_411C39[Global_41211A /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_411C39[Global_41211A /*104*/].f_53), sParam15, 64);
	func_394();
	switch (iParam16)
	{
		case 3:
			Global_411C39[Global_41211A /*104*/].f_63[Global_38B1] = 1;
			break;
		
		case 0:
			Global_411C39[Global_41211A /*104*/].f_63[0] = 1;
			break;
		
		case 2:
			Global_411C39[Global_41211A /*104*/].f_63[2] = 1;
			break;
		
		case 1:
			Global_411C39[Global_41211A /*104*/].f_63[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_38B1)
		{
			case 0:
				func_389(0);
				break;
			
			case 1:
				func_389(1);
				break;
			
			case 2:
				func_389(2);
				break;
			
			case 3:
				func_389(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_41211B = 1;
				break;
			
			case 0:
				Global_41211B = 1;
				break;
			
			case 2:
				Global_41211B = 1;
				break;
			
			case 1:
				Global_41211B = 1;
				break;
			}
	}
	Global_41FB[Global_41211A] = 0;
	if (bParam10)
	{
		func_394();
		if (Global_3878)
		{
			StringCopy(&Global_38A6, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_38B1)
			{
				case 0:
					StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_388())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Text_Arrive_Tone", &Global_38A6, 1);
			}
		}
	}
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_387(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_384(1);
			func_387(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
	return 1;
}

void func_384(int iParam0)//Position - 0x111DC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	Global_41FA = 0;
	Global_BAC = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_B88[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_269(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar2 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar2 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_386(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_385(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_956[iVar1 /*15*/].f_B)
				{
					if (iVar0 == Global_956[iVar1 /*15*/].f_4)
					{
						if (Global_B88[iVar0] == 0)
						{
							Global_B64[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_19E56.f_3721[iVar3 /*104*/].f_18 != 0)
									{
										if (Global_19E56.f_3721[iVar3 /*104*/].f_1C == 0)
										{
											if (Global_19E56.f_3721[iVar3 /*104*/].f_63[Global_38B1] == 1)
											{
												Global_41FA++;
											}
										}
									}
									iVar3++;
								}
								func_385(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_11625)
								{
									iVar4 = 0;
									iVar4 = Global_411C38;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_411C39[iVar5 /*104*/].f_18 != 0)
										{
											if (Global_411C39[iVar5 /*104*/].f_1C == 0)
											{
												if (Global_411C39[iVar5 /*104*/].f_63[Global_38B1] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_385(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_38B1)
									{
										case 0:
											iVar6 = Global_919C;
											break;
										
										case 1:
											iVar6 = Global_919D;
											break;
										
										case 2:
											iVar6 = Global_919E;
											break;
										
										default:
											break;
									}
									func_385(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_385(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_386(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_955);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 2)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_386(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 3)
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 3))
								{
									iVar8 = 42;
									Global_395D = 1;
								}
								else
								{
									iVar8 = 255;
									Global_395D = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_386(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar8);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_386(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_956[iVar1 /*15*/]), "CELL_BENWEB")) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_950, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_386(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_385(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_385(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_B88[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_385(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x11782
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_386(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_386(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_386(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_386(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_386(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_386(char* sParam0)//Position - 0x11835
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

void func_387(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x11847
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, sParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(SYSTEM::ROUND(fParam6));
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

bool func_388()//Position - 0x118AA
{
	return Global_140859;
}

void func_389(int iParam0)//Position - 0x118B6
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19E56.f_36C7[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_390(int iParam0)//Position - 0x118D5
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_411C39[iParam0 /*104*/].f_12 = iVar0;
	Global_411C39[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_411C39[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_411C39[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_411C39[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_411C39[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_391()//Position - 0x11955
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_41211A = 11;
	Global_411C39[Global_41211A /*104*/].f_12 = 4294967295;
	Global_411C39[Global_41211A /*104*/].f_12.f_1 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_2 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_3 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_392(Global_411C39[iVar2 /*104*/].f_12, Global_411C39[Global_41211A /*104*/].f_12))
		{
			Global_41211A = iVar2;
		}
		iVar2++;
	}
	Global_411C39[Global_41211A /*104*/].f_18 = 1;
}

int func_392(struct<6> Param0, struct<6> Param1)//Position - 0x119FF
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_393()//Position - 0x11AEA
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_411C39[iVar2 /*104*/].f_18 == 0)
		{
			Global_41211A = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41211A = 11;
	Global_411C39[Global_41211A /*104*/].f_12 = 4294967295;
	Global_411C39[Global_41211A /*104*/].f_12.f_1 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_2 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_3 = 0;
	Global_411C39[Global_41211A /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_411C39[iVar2 /*104*/].f_18 == 0 || Global_411C39[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_392(Global_411C39[iVar2 /*104*/].f_12, Global_411C39[Global_41211A /*104*/].f_12))
			{
				Global_41211A = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_41211A == 11)
	{
		return 0;
	}
	Global_411C39[Global_41211A /*104*/].f_63[0] = 0;
	Global_411C39[Global_41211A /*104*/].f_63[1] = 0;
	Global_411C39[Global_41211A /*104*/].f_63[2] = 0;
	return 1;
}

void func_394()//Position - 0x11C15
{
	if (func_269(14))
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
		Global_38B1 = func_395();
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

var func_395()//Position - 0x11CB7
{
	func_396();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_396()//Position - 0x11CD0
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_399(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_398(AUDIO::_0x0626A247D2405330());
			if (func_397(iVar0) && (!func_269(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_397(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_397(int iParam0)//Position - 0x11DCD
{
	return iParam0 < 3;
}

int func_398(int iParam0)//Position - 0x11DD9
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_399(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_399(int iParam0)//Position - 0x11E16
{
	if (func_397(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_400(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x11E40
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_383(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_C12 = iParam10;
			MISC::SET_BIT(&Global_41212A, 0);
		}
		return 1;
	}
	return 0;
}

int func_401(int iParam0, int iParam1)//Position - 0x11EC2
{
	if (iParam0 == 4294967197)
	{
		return 4294967197;
	}
	func_402(2, iParam1);
	return iParam0;
}

void func_402(int iParam0, var uParam1)//Position - 0x11EE1
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_403(char* sParam0, bool bParam1, int iParam2)//Position - 0x11F92
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_20;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_20))
	{
		return sLocal_20;
	}
	func_402(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_404(int iParam0)//Position - 0x11FCF
{
	int iVar0;
	
	iVar0 = func_407(iParam0);
	if (iVar0 == 4294967295)
	{
		func_405(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_405(int iParam0, bool bParam1)//Position - 0x12005
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_407(iParam0) != 4294967295)
	{
		return;
	}
	if (Global_150F14)
	{
		if (iParam0 == Global_150F14.f_1)
		{
			return;
		}
	}
	if (func_406(iParam0))
	{
		return;
	}
	if (Global_150F3A >= 32)
	{
		return;
	}
	Global_150F19[Global_150F3A] = iParam0;
	Global_150F3A++;
	if (bParam1)
	{
	}
}

int func_406(int iParam0)//Position - 0x12071
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F3A)
	{
		if (Global_150F19[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_407(int iParam0)//Position - 0x120A3
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return 4294967295;
	}
	if (Global_150F12 == 0)
	{
		return 4294967295;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_150F12)
	{
		if (Global_150E71[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_150E71[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_408(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_408(int iParam0)//Position - 0x12122
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_150F12)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_150E71[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_150E71[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_150E71[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_150E71[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_150F12)
	{
		Global_150E71[iVar2 /*5*/] = { Global_150E71[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_409(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_409(var uParam0)//Position - 0x121D8
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

void func_410()//Position - 0x12205
{
	Global_14C73C.f_28.f_9 = 4;
}

int func_411(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x12216
{
	bool bVar0;
	
	func_410();
	bVar0 = false;
	return func_378(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_412(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x1223D
{
	bool bVar0;
	
	bVar0 = false;
	return func_413(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_413(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x12260
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_404(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(HUD::_0x13C4B962653A5280(), Global_14C73C.f_28.f_D))
			{
				return 0;
			}
		}
		Global_41F3 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_403(sParam5, bParam6, &iVar3);
	uVar5 = func_401(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_421(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_415(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 0))
	{
		func_381();
	}
	func_414();
	func_380();
	func_379();
	return 1;
}

void func_414()//Position - 0x123B7
{
	Global_14C73C.f_28.f_9 = 3;
}

int func_415(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x123C8
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = 4294967197;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_416(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_C12 = iParam6;
			Global_BB1[3 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
			Global_BFE = iParam0;
			MISC::SET_BIT(&Global_94F, 1);
			MISC::SET_BIT(&Global_94F, 7);
		}
		return 1;
	}
	return 0;
}

int func_416(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x12460
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_394();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_38B1 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_38B1 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_38B1 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
			{
				return 0;
			}
		}
		if (Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 == 1)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_420() == 0)
	{
		func_418();
		return 0;
	}
	func_417(Global_41F9);
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/]), sParam1, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_11 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = iParam2;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_19 = iParam7;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1A = uParam8;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1D = uParam9;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1E = uParam12;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1F = uParam11;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_1C = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_20 = iParam3;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_21), sParam4, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_31 = iParam6;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_32), sParam5, 64);
	Global_19E56.f_3721[Global_41F9 /*104*/].f_42 = iParam13;
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_43), sParam14, 64);
	StringCopy(&(Global_19E56.f_3721[Global_41F9 /*104*/].f_53), sParam15, 64);
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 10))
	{
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 1;
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 1;
		Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 1;
		Global_C11 = 4;
		func_389(0);
		func_389(2);
		func_389(1);
	}
	else
	{
		func_394();
		switch (iParam16)
		{
			case 3:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[Global_38B1] = 1;
				break;
			
			case 0:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 1;
				break;
			
			case 2:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 1;
				break;
			
			case 1:
				Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_38B1)
			{
				case 0:
					func_389(0);
					Global_C11 = 0;
					break;
				
				case 1:
					func_389(1);
					Global_C11 = 1;
					break;
				
				case 2:
					func_389(2);
					Global_C11 = 2;
					break;
				
				case 3:
					func_389(3);
					Global_C11 = 3;
					break;
				
				default:
					Global_C11 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_94F, 10))
		{
			Global_19E56.f_36C7[0 /*20*/].f_11 = 1;
			Global_19E56.f_36C7[1 /*20*/].f_11 = 1;
			Global_19E56.f_36C7[2 /*20*/].f_11 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_19E56.f_36C7[Global_38B1 /*20*/].f_11 = 1;
					break;
				
				case 0:
					Global_19E56.f_36C7[0 /*20*/].f_11 = 1;
					break;
				
				case 2:
					Global_19E56.f_36C7[2 /*20*/].f_11 = 1;
					break;
				
				case 1:
					Global_19E56.f_36C7[1 /*20*/].f_11 = 1;
					break;
				}
			}
	}
	Global_41FB[Global_41F9] = 0;
	if (bParam10)
	{
		func_394();
		if (Global_3878)
		{
			StringCopy(&Global_38A6, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_38B1)
			{
				case 0:
					StringCopy(&Global_38A6, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_38A6, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_38A6, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_38A6, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_C74[Global_38B1 /*2811*/][0 /*281*/].f_103 == 1)
		{
			if (!func_388())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Text_Arrive_Tone", &Global_38A6, 1);
			}
		}
	}
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_387(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_384(1);
			func_387(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
	return 1;
}

void func_417(int iParam0)//Position - 0x12917
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_19E56.f_3721[iParam0 /*104*/].f_12 = iVar0;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_1 = iVar1;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_2 = iVar2;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_3 = iVar3;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_4 = uVar4;
	Global_19E56.f_3721[iParam0 /*104*/].f_12.f_5 = iVar5;
}

void func_418()//Position - 0x129A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_41F9 = 34;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12 = 4294967295;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_1 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_2 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_3 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_419(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
		{
			Global_41F9 = iVar2;
		}
		iVar2++;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = 1;
}

int func_419(struct<6> Param0, struct<6> Param1)//Position - 0x12A74
{
	struct<4> Var0;
	struct<4> Var1;
	int iVar2;
	int iVar3;
	
	if (Param0.f_5 < Param1.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param1.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param1.f_5)
	{
		if (Param0.f_4 < Param1.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param1.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param1.f_4)
		{
			Var0 = Param0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar2 = (((Var0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var1 = Param1;
			Var1.f_1 = Param1.f_1 * 60;
			Var1.f_2 = Param1.f_2 * 3600;
			Var1.f_3 = (Param1.f_3 * 86400);
			iVar3 = (((Var1 + Var1.f_1) + Var1.f_2) + Var1.f_3);
			if (iVar2 > iVar3 || iVar2 == iVar3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_420()//Position - 0x12B5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_11625)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 0)
		{
			Global_41F9 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_41F9 = 34;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12 = 4294967295;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_1 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_2 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_3 = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_12.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 0 || Global_19E56.f_3721[iVar2 /*104*/].f_18 == 1)
		{
			if (!func_419(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
			{
				Global_41F9 = iVar2;
			}
		}
		if (Global_19E56.f_3721[iVar2 /*104*/].f_18 == 2)
		{
		}
		iVar2++;
	}
	if (Global_41F9 == 34)
	{
		return 0;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[0] = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[1] = 0;
	Global_19E56.f_3721[Global_41F9 /*104*/].f_63[2] = 0;
	return 1;
}

int func_421(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x12CC7
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 10);
	iVar0 = 3;
	if (func_416(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_C12 = iParam10;
			Global_BB1[3 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
			Global_BFE = iParam0;
			StringCopy(&Global_BFF, sParam5, 64);
			MISC::SET_BIT(&Global_94F, 1);
			MISC::SET_BIT(&Global_94F, 7);
		}
		return 1;
	}
	return 0;
}

int func_422(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x12D7C
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
	}
	if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	func_414();
	bVar0 = true;
	if (func_413(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_377(120000);
		return 1;
	}
	return 0;
}

int func_423(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x12DCE
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 4))
	{
		bVar0 = func_439(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_429(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 3))
		{
			func_428(1);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 5))
		{
			func_427(1);
		}
		func_426();
		func_380();
		func_425();
		func_424();
		return 1;
	}
	return 0;
}

void func_424()//Position - 0x12E71
{
	Global_26A91B = 0;
}

void func_425()//Position - 0x12E7E
{
	Global_14C73C.f_39 = 1;
	Global_14C73C.f_39.f_1 = 0;
}

void func_426()//Position - 0x12E96
{
	Global_14C73C.f_28.f_9 = 1;
}

void func_427(int iParam0)//Position - 0x12EA7
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_951, 0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_951, 0);
	}
}

void func_428(int iParam0)//Position - 0x12EC8
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_94F, 20);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 20);
	}
}

int func_429(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x12EEB
{
	func_438(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DFE = 0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 0;
	Global_3E04 = 0;
	Global_280001 = 0;
	return func_430(sParam3, iParam4, bParam7);
}

int func_430(char* sParam0, int iParam1, bool bParam2)//Position - 0x12F39
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
					func_437();
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
		if (func_436(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_435();
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
				func_394();
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
				if (func_434())
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
			if (func_433())
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
			func_432();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_431();
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
		func_437();
	}
	return 0;
}

void func_431()//Position - 0x13205
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

void func_432()//Position - 0x13236
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

int func_433()//Position - 0x132CB
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_434()//Position - 0x132F2
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

void func_435()//Position - 0x1338B
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

bool func_436(int iParam0, int iParam1)//Position - 0x133E2
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

void func_437()//Position - 0x1341D
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

void func_438(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x13474
{
	Global_3BAC = { *uParam0 };
	Global_6A3 = iParam1;
	StringCopy(&Global_3E14, sParam2, 24);
	Global_41AB = iParam5;
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

int func_439(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x134CA
{
	func_438(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_3DFE = 1;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 0;
	Global_3E04 = 0;
	Global_280001 = 0;
	return func_430(sParam3, iParam4, bParam7);
}

int func_440(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x13518
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
	}
	if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (func_442(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_441();
		func_426();
		func_380();
		func_425();
		func_424();
		return 1;
	}
	return 0;
}

void func_441()//Position - 0x1356A
{
	Global_41C8 = 0;
}

bool func_442(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x13576
{
	func_438(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_3DFE = 0;
	Global_3DD5 = 1;
	Global_3DDC = 0;
	Global_3DD7 = 1;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 0;
	Global_3DD3 = 0;
	Global_3E02 = 1;
	Global_3E04 = 0;
	StringCopy(&Global_3E62, sParam5, 24);
	Global_280001 = 0;
	return func_430(sParam3, iParam4, bParam8);
}

int func_443(var uParam0, char* sParam1, char* sParam2)//Position - 0x135CB
{
	if (func_445(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_444();
		func_380();
		func_425();
		return 1;
	}
	return 0;
}

void func_444()//Position - 0x135F6
{
	Global_14C73C.f_28.f_9 = 2;
}

bool func_445(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x13607
{
	func_438(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_430(sParam2, iParam3, 0);
}

void func_446()//Position - 0x13655
{
	Global_14C73C.f_37 = Global_14C73C.f_28.f_1;
	Global_14C73C.f_37.f_1 = Global_14C73C.f_28.f_A;
}

void func_447()//Position - 0x1367B
{
	Global_14C73C.f_28 = 1;
}

bool func_448()//Position - 0x1368A
{
	return Global_14C73C.f_28 == 1;
}

int func_449(int iParam0, int iParam1, int iParam2)//Position - 0x1369A
{
	if (!func_450(iParam0))
	{
		return 0;
	}
	if (Global_14C73C.f_28.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_14C73C.f_28.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_450(int iParam0)//Position - 0x136D9
{
	if (!func_451())
	{
		return 0;
	}
	if (!Global_14C73C.f_28.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_451()//Position - 0x13701
{
	if (Global_14C73C.f_28 == 0)
	{
		return 0;
	}
	return 1;
}

int func_452(int iParam0)//Position - 0x13718
{
	if (func_456())
	{
		return 0;
	}
	if (func_455())
	{
		return 0;
	}
	if (func_366(0))
	{
		return 0;
	}
	if (Global_1406D2.f_12 != 0)
	{
		return 0;
	}
	if (Global_193F0F || func_454())
	{
		return 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 6))
	{
		if (func_453())
		{
			return 0;
		}
	}
	return 1;
}

bool func_453()//Position - 0x1377C
{
	return NETWORK::IS_TIME_LESS_THAN(HUD::_0x13C4B962653A5280(), Global_15093F);
}

int func_454()//Position - 0x13790
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

bool func_455()//Position - 0x137A8
{
	return Global_14C73C.f_28 == 3;
}

bool func_456()//Position - 0x137B8
{
	return func_433();
}

int func_457(int iParam0, int iParam1, int iParam2)//Position - 0x137C4
{
	if (!func_455())
	{
		return 0;
	}
	return func_449(iParam0, iParam1, iParam2);
}

int func_458(char* sParam0, char* sParam1)//Position - 0x137E2
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_459()//Position - 0x137FC
{
	return Global_269E92.f_1;
}

int func_460()//Position - 0x1380A
{
	if (Global_14C7F8.f_2)
	{
		return 1;
	}
	return func_461();
}

bool func_461()//Position - 0x13823
{
	return func_456();
}

void func_462(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x1382F
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

int func_463(int iParam0)//Position - 0x138CA
{
	switch (iParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_464(var uParam0)//Position - 0x138E7
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(HUD::_0x13C4B962653A5280(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_465(var uParam0)//Position - 0x13910
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_466(uParam0, 0, 0);
		}
	}
}

void func_466(var uParam0, bool bParam1, bool bParam2)//Position - 0x1392F
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

void func_467()//Position - 0x13974
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_95.f_A[iLocal_109 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_95.f_A[iLocal_109 /*7*/]), 0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			if (func_5(unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_95.f_A[iLocal_109 /*7*/]), 1), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), 50625f))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 4))
				{
					MISC::SET_BIT(&iLocal_98, 4);
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 5))
			{
				if (Local_95.f_2A != 4294967295)
				{
					if (iLocal_109 == Local_95.f_2A)
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 5))
						{
							MISC::SET_BIT(&iLocal_98, 5);
						}
					}
				}
			}
		}
	}
	func_468(iLocal_109);
	iLocal_109++;
	if (iLocal_109 >= func_463(iLocal_101))
	{
		if ((!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 4) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 8)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 5))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
			{
				MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 1);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 4);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 5);
		iLocal_109 = 0;
	}
}

void func_468(int iParam0)//Position - 0x13AC0
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar2 = 0;
	vVar3 = { 0f, 0f, 0f };
	bVar4 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iParam0 /*7*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]);
		if (iLocal_101 == 0)
		{
			if (CAM::_0xDC9DA9E8789F5246() == iLocal_103)
			{
				if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_95.f_A[iParam0 /*7*/].f_5 == 2)
					{
						bVar4 = true;
					}
				}
			}
		}
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 1))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_99[iParam0], 0))
				{
					MISC::SET_BIT(&Global_1801DA, 0);
					MISC::SET_BIT(&(iLocal_99[iParam0]), 0);
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 9))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_99[iParam0], 1))
					{
						bVar4 = true;
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_99[iParam0], 1))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(iLocal_99[iParam0]), 1);
				}
			}
		}
		if (bVar4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iParam0 /*7*/]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_A[iParam0 /*7*/]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_95.f_A[iParam0 /*7*/]);
				}
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_A[iParam0 /*7*/]))
		{
			if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_99[iParam0], 1))
				{
					if (NETWORK::_0x0EDE326D47CD0F3E(iVar0, CAM::_0xDC9DA9E8789F5246()))
					{
						switch (Local_95.f_A[iParam0 /*7*/].f_1)
						{
							case 0:
								func_491(iVar0, 3);
								break;
						}
						MISC::SET_BIT(&(iLocal_99[iParam0]), 1);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0) && !PED::IS_PED_INJURED(iVar0))
			{
				switch (Local_95.f_A[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						PED::SET_PED_RESET_FLAG(iVar0, 187, 1);
						if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 2))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 3))
								{
									BRAIN::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
									ENTITY::SET_ENTITY_HEALTH(iVar0, 1);
									PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
								}
							}
						}
						if (CAM::_0xDC9DA9E8789F5246() == iLocal_103 && func_5(unk_0x8000C77B5F336760(iVar0, 1), unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iLocal_103), 1), 25f))
						{
							MISC::SET_BIT(&(Global_26862F.f_11DF), 0);
						}
						else
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DF), 0);
						}
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_RESPONDING_TO_EVENT(iVar0, 29))
							{
								if (func_6(iLocal_103, 1, 1))
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 13))
									{
										if (func_490(iLocal_103) && !unk_0x6BA46D5172404F26(PLAYER::GET_PLAYER_PED(iLocal_103)))
										{
											if (!func_489(iVar0, 2500551826))
											{
												if (func_488(iVar0))
												{
													iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_103), 0);
													if (ENTITY::DOES_ENTITY_EXIST(iVar1))
													{
														if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0))
														{
														}
														if (!VEHICLE::_0xF7F203E31F96F6A1(iVar1, func_487(PLAYER::GET_PLAYER_PED(iLocal_103), 0)))
														{
															BRAIN::TASK_ENTER_VEHICLE(iVar0, iVar1, 4294967295, func_486(PLAYER::GET_PLAYER_PED(iLocal_103), iVar1), func_485(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1))
										{
											if (func_489(iVar0, 2500551826))
											{
												NETWORK::_0x5E3AA4CA2B6FB0EE(iVar0);
											}
											if (!func_489(iVar0, 1227113341))
											{
												if (func_488(iVar0))
												{
													BRAIN::TASK_GO_TO_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(iLocal_103), 4294967295, 0f, func_485(iParam0), 1073741824, 0);
												}
											}
											else
											{
												PED::SET_PED_RESET_FLAG(iVar0, 151, 1);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (CAM::_0xDC9DA9E8789F5246() == iLocal_103 && func_5(unk_0x8000C77B5F336760(iVar0, 1), unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iLocal_103), 1), 25f))
						{
							MISC::SET_BIT(&(Global_26862F.f_11DF), 0);
						}
						else
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Global_26862F.f_11DF), 0);
						}
						if (CAM::_0xDC9DA9E8789F5246() == iLocal_103)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
								{
									if ((func_4(unk_0x8000C77B5F336760(iVar0, 1), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1)) && (PED::IS_PED_ON_FOOT(AUDIO::_0x0626A247D2405330()) || unk_0x6BA46D5172404F26(AUDIO::_0x0626A247D2405330()))) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == AUDIO::_0x0626A247D2405330()))
									{
										iVar2 = func_483(CAM::_0xDC9DA9E8789F5246());
										fVar5 = (SYSTEM::TO_FLOAT(Global_40001.f_198B) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar5));
										iVar6 = func_482(CAM::_0xDC9DA9E8789F5246());
										if (iVar6 > 100)
										{
											iVar6 = 100;
										}
										if (iVar2 > (iVar6 * Global_40001.f_198C))
										{
											iVar2 = (iVar6 * Global_40001.f_198C);
										}
										if (iVar2 > 0)
										{
											MISC::SET_BIT(&iLocal_98, 16);
										}
										BRAIN::SET_HIGH_FALL_TASK(AUDIO::_0x0626A247D2405330(), 5000, 10000, 4);
										if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)))
										{
											vVar3 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) - unk_0x8000C77B5F336760(iVar0, 1) };
											vVar3 = { func_481(vVar3) };
											vVar3.x = (vVar3.x * 3f);
											vVar3.y = (vVar3.y * 3f);
											vVar3.z = (vVar3.z * 3f);
											ENTITY::APPLY_FORCE_TO_ENTITY(AUDIO::_0x0626A247D2405330(), 1, vVar3, 0f, 0f, 0.5f, 0, 0, 1, 1, 0, 1);
										}
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, 1);
										if (((PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && func_479(iVar0)) && func_487(iVar0, 0) == 4294967295)
										{
											PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, 0);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 1);
										}
										else
										{
											NETWORK::_0x5E3AA4CA2B6FB0EE(iVar0);
											BRAIN::TASK_SMART_FLEE_PED(iVar0, AUDIO::_0x0626A247D2405330(), 10000f, 4294967295, 1, 0);
										}
										Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = 4294967295;
										}
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_18084C);
										MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 0);
										MISC::SET_BIT(&(Global_26862F.f_11DF), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (PED::GET_PED_RESET_FLAG(iVar0, 187))
						{
							PED::SET_PED_RESET_FLAG(iVar0, 187, 0);
						}
						if (Local_95.f_A[iParam0 /*7*/].f_4 == 0)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 4))
							{
								ENTITY::SET_ENTITY_HEALTH(iVar0, 0);
								PED::SET_PED_CONFIG_FLAG(iVar0, 118, true);
							}
						}
						if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_103)))
						{
							if (!PED::IS_PED_FLEEING(iVar0))
							{
								if (func_488(iVar0))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE(iVar0, 1) || PED::IS_PED_JACKING(iVar0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 10))
									{
										if (!func_489(iVar0, 4036695475) && !func_489(iVar0, 3021937204))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
											{
												iVar7 = PED::GET_VEHICLE_PED_IS_IN(iVar0, 1);
												iVar8 = ENTITY::GET_ENTITY_MODEL(iVar7);
												if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 13))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, 0);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar8))
												{
													BRAIN::TASK_HELI_MISSION(iVar0, iVar7, 0, AUDIO::_0x0626A247D2405330(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar8))
												{
													BRAIN::TASK_PLANE_MISSION(iVar0, iVar7, 0, AUDIO::_0x0626A247D2405330(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 80, 80, 1);
												}
												else if (ENTITY::GET_ENTITY_MODEL(iVar7) == joaat("TAXI"))
												{
													PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, 1);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, 0);
													BRAIN::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_103), 10000f, 4294967295, 1, 0);
												}
												else
												{
													BRAIN::TASK_VEHICLE_DRIVE_WANDER(iVar0, PED::GET_VEHICLE_PED_IS_IN(iVar0, 1), 60f, 786468);
												}
											}
										}
									}
									else if (!func_489(iVar0, 1805844857))
									{
										if (func_6(iLocal_103, 1, 1))
										{
											BRAIN::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_103), 10000f, 4294967295, 1, 0);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_477(Local_95.f_A[iParam0 /*7*/], 0);
						break;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 13))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 17, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 6, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_95.f_A[iParam0 /*7*/]), 1, 0);
				}
				func_469(iVar0);
			}
		}
	}
}

void func_469(int iParam0)//Position - 0x1432F
{
	int iVar0;
	int iVar1;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 16))
	{
		iVar0 = Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3;
		iVar1 = func_470(iVar0);
		if (iVar1 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 15);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 16);
			if (!func_46())
			{
				NETWORKCASH::NETWORK_SPENT_ROBBED_BY_MUGGER(iVar0, 0, 0);
			}
			if (iVar0 > Global_40001.f_1F0F)
			{
				iVar0 = Global_40001.f_1F0F;
			}
			PED::SET_PED_MONEY(iParam0, iVar0);
			MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 15);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_98, 16);
			MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_470(int iParam0)//Position - 0x143DB
{
	if (func_46())
	{
		if (func_473(iParam0))
		{
			if (func_472(iLocal_286) == 2)
			{
				unk_0x7D3EC9370CE8AE07(func_471(iLocal_286));
				NETWORKCASH::NETWORK_SPENT_ROBBED_BY_MUGGER(iParam0, 0, 0);
				func_315(iLocal_286);
				return 1;
			}
			else
			{
				func_315(iLocal_286);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return 4294967295;
}

int func_471(int iParam0)//Position - 0x14433
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D;
	}
	return 4294967295;
}

int func_472(int iParam0)//Position - 0x14459
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_2;
	}
	return 0;
}

int func_473(int iParam0)//Position - 0x14481
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 15))
	{
		func_313(&iLocal_286, 3159588365, 537254313, 1474183246, 1839532116, iParam0, 4, 3);
		func_476(&uLocal_287, 0, 0);
		MISC::SET_BIT(&iLocal_98, 15);
	}
	else if (func_475(iLocal_286) || func_474(&uLocal_287, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_474(var uParam0, int iParam1, bool bParam2)//Position - 0x144EB
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_466(uParam0, bParam2, 0);
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

int func_475(int iParam0)//Position - 0x14549
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_2 != 1;
	}
	return 0;
}

void func_476(var uParam0, bool bParam1, bool bParam2)//Position - 0x14573
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

void func_477(var uParam0, bool bParam1)//Position - 0x145B0
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0))
		{
			if (!func_478(uParam0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 13))
				{
					NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(uParam0));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 17, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 6, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 1, 0);
				}
				else
				{
					if (bParam1)
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(NETWORK::NET_TO_PED(uParam0));
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 6, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(uParam0), 1, 1);
				}
			}
		}
		func_238(&uParam0);
	}
}

int func_478(var uParam0)//Position - 0x14640
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

int func_479(int iParam0)//Position - 0x1465F
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
	}
	if (PED::IS_PED_JACKING(iParam0))
	{
		iVar0 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_490(iLocal_103))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_103), 1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_480(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iVar0))
			{
				return 0;
			}
		}
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("TRAILERSMALL2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_480(int iParam0)//Position - 0x146FD
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_481(vector3 vParam0)//Position - 0x14740
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

var func_482(int iParam0)//Position - 0x1477F
{
	return Global_1841F3[iParam0 /*790*/].f_D3.f_6;
}

int func_483(int iParam0)//Position - 0x14794
{
	var uVar0;
	
	uVar0 = func_484(iParam0);
	return uVar0;
}

int func_484(int iParam0)//Position - 0x147A6
{
	if (iParam0 > 4294967295)
	{
		if (iParam0 == CAM::_0xDC9DA9E8789F5246())
		{
			return unk_0xCCADB536D2A7894D(4294967295);
		}
		else if (func_290(iParam0))
		{
			return Global_1841F3[iParam0 /*790*/].f_D3.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_485(int iParam0)//Position - 0x147E9
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_486(int iParam0, int iParam1)//Position - 0x14809
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 4294967295, 0) == iParam0)
			{
				return 4294967295;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return 4294967294;
}

int func_487(int iParam0, int iParam1)//Position - 0x1487B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, iParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = 4294967295;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, 0))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, 0) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_488(int iParam0)//Position - 0x14900
{
	if ((!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !PED::IS_PED_RAGDOLL(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_489(int iParam0, int iParam1)//Position - 0x14930
{
	if (BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_490(int iParam0)//Position - 0x1495A
{
	if (PLAYER::_0x690A61A6D13583F6(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_491(int iParam0, int iParam1)//Position - 0x14981
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

void func_492()//Position - 0x149B7
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 6);
	bVar1 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 10);
	func_497();
	if (iLocal_101 != 1)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 12))
		{
			func_494();
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_110))
	{
		func_493(&iLocal_110);
	}
	iVar3 = 0;
	while (iVar3 < func_463(iLocal_101))
	{
		iLocal_99[iVar3] = 0;
		iVar3++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_95.f_2A = 4294967295;
		Local_95.f_5 = iLocal_106;
		Local_95.f_6 = iLocal_106;
		Local_95.f_7 = iLocal_106;
		Local_95.f_1 = 0;
		Local_95.f_4 = 0;
		Local_95.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_463(iLocal_101))
		{
			bVar2 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_A[iVar3 /*7*/].f_2, 6);
			Local_95.f_A[iVar3 /*7*/].f_2 = 0;
			Local_95.f_A[iVar3 /*7*/].f_6 = 4294967295;
			if (bVar2)
			{
				MISC::SET_BIT(&(Local_95.f_A[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1 = 0;
	Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = 4294967295;
	iLocal_98 = 0;
	if (bVar0)
	{
		MISC::SET_BIT(&(Local_95.f_2), 6);
	}
	if (bVar1)
	{
		MISC::SET_BIT(&(Local_95.f_2), 11);
		MISC::SET_BIT(&iLocal_98, 8);
	}
	MISC::SET_BIT(&iLocal_98, 4);
	MISC::SET_BIT(&iLocal_98, 11);
}

void func_493(int iParam0)//Position - 0x14AF7
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, 0))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::_SET_PED_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_494()//Position - 0x14B69
{
	switch (iLocal_101)
	{
		case 0:
			func_496(&(Global_180854[3]));
			break;
		
		case 1:
			func_495();
			break;
	}
}

void func_495()//Position - 0x14B9A
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_180824[iVar0], 2827152215);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 2827152215, Global_180824[iVar0]);
			iVar0++;
		}
	}
}

void func_496(var uParam0)//Position - 0x14BE0
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_180824[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_180824[iVar0]);
			iVar0++;
		}
	}
}

void func_497()//Position - 0x14C22
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_463(iLocal_101))
	{
		bVar1 = false;
		if (iLocal_101 == 0)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_477(Local_95.f_A[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_498()//Position - 0x14C6D
{
	func_499();
	if (iLocal_101 != 1)
	{
		func_467();
	}
}

void func_499()//Position - 0x14C84
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_463(iLocal_101))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_95.f_A[iVar0 /*7*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_95.f_A[iVar0 /*7*/]))
			{
				iVar1 = NETWORK::NET_TO_PED(Local_95.f_A[iVar0 /*7*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
				{
					PED::SET_PED_RESET_FLAG(iVar1, 151, 1);
				}
			}
		}
		iVar0++;
	}
	if (Global_26862F.f_69C)
	{
	}
	if (iLocal_101 == 1)
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_103)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
			{
				if (!MISC::IS_INCIDENT_VALID(uLocal_283))
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_32)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(15, PLAYER::GET_PLAYER_PED(iLocal_103), 4, 0f, &uLocal_283, 2827152215, 0);
						}
						else if (Local_95.f_34)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(16, PLAYER::GET_PLAYER_PED(iLocal_103), 4, 0f, &uLocal_283, 2827152215, Local_95.f_35);
						}
						else
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(14, PLAYER::GET_PLAYER_PED(iLocal_103), 4, 0f, &uLocal_283, 0, 0);
						}
					}
				}
				if (Global_26862F.f_69C)
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (iLocal_101 == 0)
	{
		if (Local_95.f_2A != 4294967295)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_95.f_A[Local_95.f_2A /*7*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_95.f_A[Local_95.f_2A /*7*/]), 0) && !func_503(NETWORK::NET_TO_PED(Local_95.f_A[Local_95.f_2A /*7*/])))
				{
					if (Local_95.f_A[Local_95.f_2A /*7*/].f_5 == 3)
					{
						func_500(Local_95.f_A[Local_95.f_2A /*7*/], &iLocal_110, 3212836864, 0, 1, 0, 0, 4294967295, 4294967295, 1);
						if (HUD::DOES_BLIP_EXIST(iLocal_110))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 6))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_110, "FM_MGR_BLP");
								MISC::SET_BIT(&iLocal_98, 6);
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_110))
				{
					func_493(&iLocal_110);
				}
			}
			if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 14))
				{
					if (func_365("MPCT_mugsuc", "LAMAR", 19))
					{
						MISC::SET_BIT(&iLocal_98, 14);
					}
				}
			}
		}
	}
}

void func_500(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0x14EA1
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_502())
		{
			Global_252F9E = CAM::_0xDC9DA9E8789F5246();
		}
		if (bParam3)
		{
			func_501(NETWORK::NET_TO_PED(uParam0), iParam1, 1, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_501(NETWORK::NET_TO_PED(uParam0), iParam1, 4294967295, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_493(iParam1);
	}
}

int func_501(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x14F1C
{
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			if (iParam8 == 4294967295)
			{
				HUD::_SET_PED_AI_BLIP(iParam0, 1);
			}
			else
			{
				unk_0x12CB6C9EAE68146D(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::_SET_AI_BLIP_TYPE(iParam0, iParam2);
			HUD::_SET_AI_BLIP_MAX_DISTANCE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == 4294967295)
		{
			unk_0x92AAB9588E601C23(iParam0, iParam9);
		}
		HUD::_IS_AI_BLIP_ALWAYS_SHOWN(iParam0, iParam4);
		HUD::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, iParam5);
		*uParam1 = HUD::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == 4294967295)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == 4294967295)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_GET_AI_BLIP(iParam0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == 4294967295)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_502()//Position - 0x150F3
{
	return Global_140842;
}

int func_503(int iParam0)//Position - 0x150FF
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar1 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_504()//Position - 0x15153
{
	return Local_95;
}

int func_505(int iParam0)//Position - 0x1515D
{
	return Local_97[iParam0 /*5*/];
}

void func_506()//Position - 0x1516B
{
	if (CAM::_0xDC9DA9E8789F5246() == iLocal_103)
	{
		if (Global_6409)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_108 /*5*/].f_1, 4))
			{
				MISC::SET_BIT(&(Local_97[iLocal_108 /*5*/].f_1), 4);
			}
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_97[iLocal_108 /*5*/].f_1), 4);
		}
	}
}

void func_507()//Position - 0x151B4
{
	bool bVar0;
	
	bVar0 = false;
	if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1801DA, 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_1801DA, 0);
			bVar0 = true;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_97[iLocal_102 /*5*/].f_1, 2))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 11))
			{
				MISC::SET_BIT(&(Local_97[iLocal_102 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 11))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Local_97[iLocal_102 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = func_511();
			func_508(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		}
	}
	else if (Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 != Local_95.f_2C)
	{
		Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = Local_95.f_2C;
		func_508(Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_508(int iParam0)//Position - 0x15284
{
	switch (iLocal_101)
	{
		case 0:
			func_510(&(Global_180854[3]), iParam0);
			break;
		
		case 1:
			func_509(iParam0);
			break;
	}
}

void func_509(int iParam0)//Position - 0x152B9
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180824[iVar0], 2827152215);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2827152215, Global_180824[iVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_180824[iVar0], 2827152215);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, 2827152215, Global_180824[iVar0]);
		}
		iVar0++;
	}
}

void func_510(var uParam0, int iParam1)//Position - 0x1532A
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam1, iVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_180824[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_180824[iVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_180824[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_180824[iVar0]);
		}
		iVar0++;
	}
}

int func_511()//Position - 0x15393
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iLocal_101 == 1 || iLocal_101 == 0)
		{
			if (iLocal_102 == PLAYER::INT_TO_PLAYERINDEX(iVar1))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		else if (CAM::_0xDC9DA9E8789F5246() == PLAYER::INT_TO_PLAYERINDEX(iVar1))
		{
			MISC::SET_BIT(&iVar0, iVar1);
		}
		else if (func_6(PLAYER::INT_TO_PLAYERINDEX(iVar1), 0, 1))
		{
			if (func_47(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
			{
				MISC::SET_BIT(&iVar0, iVar1);
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_512()//Position - 0x1541C
{
	switch (iLocal_101)
	{
		case 0:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 11))
			{
				if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						func_334("GC_TCK_60", iLocal_103, 0, 0, 0, 1, 1, 0);
						MISC::SET_BIT(&iLocal_98, 11);
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 12))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 8))
				{
					if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_334("GC_TCK_62", iLocal_103, 0, 0, 0, 1, 1, 0);
							MISC::SET_BIT(&iLocal_98, 12);
						}
					}
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 10))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 8))
				{
					if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
					{
						if (func_6(iLocal_103, 1, 1))
						{
							func_334("GC_TCK_65", iLocal_103, 0, 0, 0, 1, 1, 0);
							MISC::SET_BIT(&iLocal_98, 8);
						}
					}
				}
			}
			else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 13))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 11))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 8))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_2, 6))
						{
							if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
							{
								if (func_6(iLocal_103, 1, 1))
								{
									func_334("GC_TCK_63", iLocal_103, 0, 0, 0, 1, 1, 0);
									MISC::SET_BIT(&iLocal_98, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 11))
			{
				if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
				{
					if (func_6(iLocal_103, 1, 1))
					{
						if (Local_95.f_32)
						{
							func_334("HS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else if (Local_95.f_34)
						{
							func_334("GO_ASS_SUCC", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_334("GC_TCK_70", iLocal_103, 0, 0, 0, 1, 1, 0);
						}
						MISC::SET_BIT(&iLocal_98, 11);
					}
				}
				else if (CAM::_0xDC9DA9E8789F5246() == iLocal_103)
				{
					if (func_6(iLocal_102, 1, 1))
					{
						if (Local_95.f_32)
						{
							if (Local_95.f_33)
							{
								func_514("HS_A_SUCC", 1);
							}
							else
							{
								func_334("HS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
							}
						}
						else if (Local_95.f_34)
						{
							func_334("GO_ASS_SENT", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						else
						{
							func_334("GC_TCK_71", iLocal_102, 0, 0, 0, 1, 1, 0);
						}
						MISC::SET_BIT(&iLocal_98, 11);
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 10))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 6))
					{
						if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								func_513(4294967295);
								if (Local_95.f_32)
								{
									if (!Local_95.f_33)
									{
										func_334("HS_KILLED", iLocal_103, 0, 0, 0, 1, 1, 0);
									}
								}
								else if (Local_95.f_34)
								{
									func_334("GO_ASS_KILL", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_334("GC_TCK_73", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								MISC::SET_BIT(&iLocal_98, 10);
							}
						}
					}
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_98, 9))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_1, 0))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_95.f_3, 7))
					{
						if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
						{
							if (func_6(iLocal_103, 0, 1))
							{
								if (Local_95.f_32)
								{
									func_334("HS_ESCAPED", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else if (Local_95.f_34)
								{
									func_334("GO_ASS_ESC", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								else
								{
									func_334("GC_TCK_75", iLocal_103, 0, 0, 0, 1, 1, 0);
								}
								MISC::SET_BIT(&iLocal_98, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_513(int iParam0)//Position - 0x15799
{
	if (Global_1805F0)
	{
		if (Global_1805F4 && Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] != 148)
		{
			if (Global_1803FE.f_E == PLAYER::INT_TO_PLAYERINDEX(iParam0))
			{
				Global_18C6E8++;
			}
		}
		else
		{
			Global_18C6E8++;
		}
	}
}

int func_514(char* sParam0, int iParam1)//Position - 0x157E8
{
	int iVar0;
	
	iVar0 = 4294967295;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_335(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_515()//Position - 0x15814
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != Local_95.f_2D)
	{
		if (func_523(Local_95.f_2D, 0, 1))
		{
			if (NETWORK::_0xCB215C4B56A7FAE7(0) <= Local_95.f_2D)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_95.f_2D);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != Local_95.f_2E)
	{
		if (func_522(Local_95.f_2D, 0, 1))
		{
			if (unk_0x16EE8745DB04D52E(0) <= Local_95.f_2E)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_95.f_2E);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != Local_95.f_2F)
	{
		if (func_516(Local_95.f_2D, 0, 1))
		{
			if (NETWORK::_0x12B6281B6C6706C0(0) <= Local_95.f_2F)
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_95.f_2F);
			}
		}
	}
}

bool func_516(int iParam0, bool bParam1, bool bParam2)//Position - 0x158A6
{
	return func_517(2, iParam0, 1, bParam1, bParam2);
}

int func_517(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x158BA
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_150F4B, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_521(iParam0) - func_520(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_520(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_521(iParam0) - func_519(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_520(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_521(iParam0) - func_520(iParam0, 1));
		}
		if (!bParam4 && Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_518(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_518(int iParam0)//Position - 0x15983
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_519(int iParam0)//Position - 0x159BD
{
	switch (iParam0)
	{
		case 0:
			return Global_150F4B.f_1;
			break;
		
		case 1:
			return Global_150F4B.f_2;
			break;
		
		case 2:
			return Global_150F4B.f_3;
			break;
	}
	return 0;
}

int func_520(int iParam0, bool bParam1)//Position - 0x15A03
{
	int iVar0;
	
	iVar0 = CAM::_0xDC9DA9E8789F5246();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D1;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D2;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_24FBF9[iVar0 /*413*/].f_D3;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_521(int iParam0)//Position - 0x15AA0
{
	switch (iParam0)
	{
		case 0:
			return Global_150F53;
			break;
		
		case 1:
			return Global_150F54;
			break;
		
		case 2:
			return Global_150F55;
			break;
	}
	return 0;
}

bool func_522(int iParam0, bool bParam1, bool bParam2)//Position - 0x15AE0
{
	return func_517(1, iParam0, 1, bParam1, bParam2);
}

bool func_523(int iParam0, bool bParam1, bool bParam2)//Position - 0x15AF4
{
	return func_517(0, iParam0, 1, bParam1, bParam2);
}

void func_524()//Position - 0x15B08
{
	if (Local_95.f_32)
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			func_526(9);
		}
		else if (CAM::_0xDC9DA9E8789F5246() == iLocal_103)
		{
			func_526(13);
		}
	}
	else if (Local_95.f_34)
	{
	}
	func_525();
}

void func_525()//Position - 0x15B48
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_526(int iParam0)//Position - 0x15B54
{
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B.f_5), iParam0);
}

int func_527()//Position - 0x15B71
{
	var uVar0;
	
	func_534(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_533())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_532())
	{
		return 1;
	}
	if (func_531(157))
	{
		if (!func_530())
		{
			return 1;
		}
	}
	if (func_531(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_528() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_528()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_528()//Position - 0x15BFB
{
	switch (func_529())
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

int func_529()//Position - 0x15C2F
{
	return Global_6373;
}

bool func_530()//Position - 0x15C3A
{
	return Global_255C02.f_24B;
}

int func_531(int iParam0)//Position - 0x15C49
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_532()//Position - 0x15C60
{
	return Global_25824F;
}

bool func_533()//Position - 0x15C6C
{
	return Global_255C02.f_246;
}

void func_534(var uParam0)//Position - 0x15C7B
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
					func_535(iVar0);
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

void func_535(int iParam0)//Position - 0x15CEE
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_6(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_536(iVar2, &bVar3))
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

int func_536(int iParam0, var uParam1)//Position - 0x15D6F
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

void func_537()//Position - 0x15DCE
{
	SYSTEM::WAIT(0);
}

void func_538(struct<21> Param0)//Position - 0x15DDB
{
	func_544(32, Param0);
	func_543(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_95, 56);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_97, 161);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_542())
	{
		func_255();
	}
	iLocal_101 = Param0.f_10;
	iLocal_102 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_11);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_102))
	{
	}
	iLocal_103 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_12);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_103))
	{
		iLocal_104 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_103));
	}
	if (func_541(iLocal_102, 9) && iLocal_101 == 1)
	{
		Local_95.f_32 = 1;
		if (func_541(iLocal_103, 13))
		{
			Local_95.f_33 = 1;
		}
	}
	if (iLocal_101 == 1)
	{
		if (func_540(iLocal_102))
		{
			Local_95.f_34 = 1;
			Local_95.f_35 = func_539(iLocal_102);
		}
	}
	vLocal_105 = { Param0.f_A };
	if (iLocal_101 == 1)
	{
		if (CAM::_0xDC9DA9E8789F5246() == iLocal_102)
		{
			MISC::SET_BIT(&Global_1801DA, 0);
		}
	}
	Global_191DFE = 0;
	Global_191DFF = 0;
	if (iLocal_101 == 1)
	{
		Global_26862F.f_69C = 0;
	}
	Local_97[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
}

var func_539(int iParam0)//Position - 0x15EE9
{
	return Global_1841F3[iParam0 /*790*/].f_B7.f_4;
}

bool func_540(int iParam0)//Position - 0x15EFE
{
	return Global_1841F3[iParam0 /*790*/].f_B7 != func_13();
}

bool func_541(int iParam0, int iParam1)//Position - 0x15F16
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_18CD5B[iParam0 /*560*/].f_B.f_5, iParam1);
}

int func_542()//Position - 0x15F31
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
		if (func_533())
		{
			return 0;
		}
		if (func_531(155))
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

int func_543(int iParam0, int iParam1, bool bParam2)//Position - 0x15F8A
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_525();
			}
			else
			{
				return 0;
			}
		}
		if (!func_502())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_525();
					}
					else
					{
						return 0;
					}
				}
				if (func_533())
				{
					if (!bParam2)
					{
						func_525();
					}
					else
					{
						return 0;
					}
				}
				if (func_531(155))
				{
					if (!bParam2)
					{
						func_525();
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
					func_525();
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
				func_525();
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
			func_525();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_544(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0x1609F
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_525();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

