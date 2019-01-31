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
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	float fLocal_25 = 0f;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
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
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	struct<22> Local_103 = { 0, 0, 0, -1, 0, -1, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	struct<14> Local_107 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_108[32] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	struct<2> Local_123 = { 0, 0 } ;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 16;
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
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	char* sLocal_295 = NULL;
	struct<21> Local_296 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_23 = 80f;
	fLocal_24 = 140f;
	fLocal_25 = 180f;
	iLocal_28 = 3;
	fLocal_29 = 0f;
	fLocal_33 = -0.0375f;
	fLocal_34 = 0.17f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	func_378(ScriptParam_296);
	while (true)
	{
		func_377();
		if (func_367() || !func_366(CAM::_0xDC9DA9E8789F5246(), 0, 1))
		{
			func_364();
		}
		switch (func_363(NETSHOP::_NETWORK_SHOP_BASKET_START()))
		{
			case 0:
				if (func_362() == 2)
				{
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_1 = 2;
				}
				else if (func_362() == 6)
				{
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_362() == 2)
				{
					func_355();
					func_52();
				}
				else if (func_362() == 6)
				{
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_1 = 5;
				}
				if (((func_49(CAM::_0xDC9DA9E8789F5246(), 1) || func_46(CAM::_0xDC9DA9E8789F5246())) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 8)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 16))
				{
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_45(&(Local_103.f_13));
				if (func_44(&(Local_103.f_13)))
				{
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_1 = 6;
			
			case 6:
				func_364();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_362())
			{
				case 0:
					func_43(&(Local_103.f_11), 0, 0);
					Local_103.f_1 = 2;
					break;
				
				case 2:
					func_39();
					func_37();
					func_3();
					if (func_1())
					{
						Local_103.f_1 = 6;
					}
					break;
				
				case 6:
					break;
				}
		}
	}
}

int func_1()//Position - 0x1FB
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()//Position - 0x20F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 6);
}

void func_3()//Position - 0x21E
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_103.f_2)
		{
			case 0:
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 10))
				{
					if (func_36(&(Local_103.f_11), 300000, 0))
					{
						MISC::SET_BIT(&Local_103, 10);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 10))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 0))
					{
						Local_103.f_5 = func_35();
						Local_103.f_2 = 1;
						Local_103.f_4 = 0;
					}
				}
				break;
			
			case 1:
				if (func_6())
				{
					MISC::SET_BIT(&Local_103, 3);
					GRAPHICS::_0x35FB78DC42B7BD21(&Local_103, 13);
					func_43(&(Local_103.f_15), 0, 0);
					Local_103.f_2 = 2;
				}
				break;
			
			case 2:
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 4))
				{
					func_4(Local_103.f_5);
					Local_103.f_2 = 7;
				}
				break;
			
			case 7:
				func_4(Local_103.f_5);
				break;
			}
	}
}

void func_4(int iParam0)//Position - 0x2EA
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_103.f_9[0]));
			func_5(&(Local_103.f_C[0]));
			break;
	}
}

void func_5(var uParam0)//Position - 0x318
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_6()//Position - 0x33C
{
	if (Local_103.f_5 == 0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 1))
		{
			iLocal_119 = 0;
			iLocal_120 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			iLocal_106 = 0;
			Local_103.f_3 = 4294967295;
			Local_103.f_4 = 0;
			MISC::SET_BIT(&Local_103, 1);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 2))
		{
			if (func_34())
			{
				MISC::SET_BIT(&Local_103, 2);
			}
		}
		else if (func_7())
		{
			return 1;
		}
	}
	return 0;
}

int func_7()//Position - 0x39E
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	iVar0 = func_33();
	iVar1 = func_32();
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
	{
		if (Local_103.f_F == 0)
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
			Local_103.f_F = 1;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 13))
		{
			if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_31(1, 1, 1))
					{
						if (func_25(1, 1, 1))
						{
							MISC::SET_BIT(&Local_103, 13);
						}
					}
				}
			}
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 13))
		{
			if (func_24(iVar1))
			{
				if (func_24(iVar0))
				{
					if (func_12(&vVar2, &fVar3))
					{
						if (func_11(&(Local_103.f_C[0]), iVar1, vVar2, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							unk_0xF82197F205B9D8FD(NETWORK::NET_TO_VEH(Local_103.f_C[0]), 1);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_103.f_C[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_103.f_F = 1;
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
		{
			if (Local_103.f_10 == 0)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				Local_103.f_10 = 1;
			}
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (func_24(iVar0))
				{
					if (func_9(Local_103.f_C[0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_C[0]))
						{
							if (func_8(&(Local_103.f_9[0]), Local_103.f_C[0], 26, iVar0, 4294967295, 1, 1, 1))
							{
								unk_0xF82197F205B9D8FD(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1, 0);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103.f_9[0]), Global_180848);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1, 0);
								unk_0x65E471E4A2D56226(NETWORK::NET_TO_PED(Local_103.f_9[0]), SYSTEM::ROUND((200f * Global_40001.f_99)), 0);
								Local_103.f_10 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]) || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7)//Position - 0x59E
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

int func_9(var uParam0)//Position - 0x626
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return !func_10(NETWORK::NET_TO_VEH(uParam0));
	}
	return 0;
}

int func_10(int iParam0)//Position - 0x646
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

int func_11(var uParam0, int iParam1, vector3 vParam2, float fParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)//Position - 0x67F
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

int func_12(var uParam0, var uParam1)//Position - 0x779
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (!func_23(*uParam0, 0f, 0f, 0f, 0))
	{
		return 1;
	}
	switch (iLocal_120)
	{
		case 0:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1232.842f, -1095.003f, 2.2331f };
				vVar1 = { -1226.248f, -1089.819f, 10.1513f };
				vVar2 = { func_22(0, 0) };
				fVar3 = 19.7853f;
			}
			break;
		
		case 1:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -622.0966f, 250.3288f, 75.7075f };
				vVar1 = { -614.8635f, 255.2288f, 88.7755f };
				vVar2 = { func_22(0, 1) };
				fVar3 = 266.4686f;
			}
			break;
		
		case 2:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 794.4784f, -2034.339f, 25.2469f };
				vVar1 = { 798.8026f, -2026.004f, 33.2793f };
				vVar2 = { func_22(0, 2) };
				fVar3 = 355.9428f;
			}
			break;
		
		case 3:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1623.919f, 1249.831f, 135.2495f };
				vVar1 = { -1621.554f, 1257.98f, 145.2376f };
				vVar2 = { func_22(0, 3) };
				fVar3 = 353.7463f;
			}
			break;
		
		case 4:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 1118.077f, 1875.035f, 60.3776f };
				vVar1 = { 1127.638f, 1883.083f, 70.1053f };
				vVar2 = { func_22(0, 4) };
				fVar3 = 201.3967f;
			}
			break;
	}
	if (iLocal_120 < 5)
	{
		if (!func_23(vVar0, 0f, 0f, 0f, 0))
		{
			if (Local_103.f_3 == 4294967295)
			{
				Local_103.f_3 = NETWORK::NETWORK_ADD_ENTITY_AREA(vVar0, vVar1);
			}
			else if (NETWORK::_0xE64A3CA08DFA37A9(Local_103.f_3))
			{
				if (NETWORK::_0x4DF7CFFF471A7FB1(Local_103.f_3))
				{
					if (!NETWORK::_0x4A2D4E8BF4265B0F(Local_103.f_3))
					{
						if (!func_13(vVar2, 1084227584, 1, 1, 1123024896, 0, 4294967295, 0, 0))
						{
							*uParam0 = { vVar2 };
							*uParam1 = fVar3;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_103.f_3);
							return 1;
						}
						else
						{
							iLocal_120++;
							NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_103.f_3);
							Local_103.f_3 = 4294967295;
						}
					}
					else
					{
						iLocal_120++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_103.f_3);
						Local_103.f_3 = 4294967295;
					}
				}
			}
		}
		else
		{
			iLocal_120++;
		}
	}
	else
	{
		iLocal_120 = 0;
	}
	return 0;
}

int func_13(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)//Position - 0x9E4
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_366(CAM::_0xDC9DA9E8789F5246(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_18(CAM::_0xDC9DA9E8789F5246()), vParam0, 1) <= (fVar2 + fParam1))
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
		if (func_366(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != CAM::_0xDC9DA9E8789F5246()))
				{
					if ((func_14(iVar1) || !bParam8) && !Global_24FBF9[iVar1 /*413*/].f_103)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_18(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_18(iVar1), vParam0, 1) <= (fVar2 + fParam1))
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

int func_14(int iParam0)//Position - 0xB9C
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_24FBF9[iParam0 /*413*/].f_F5)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)//Position - 0xBC7
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_16(4294967295, 0) == 8;
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

int func_16(int iParam0, bool bParam1)//Position - 0xC12
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_17();
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

int func_17()//Position - 0xC53
{
	return Global_1407E0;
}

Vector3 func_18(int iParam0)//Position - 0xC5F
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_21() && Global_1841F3[iVar0 /*790*/].f_2F9) && !func_20(Global_1841F3[iVar0 /*790*/].f_2FA))
	{
		return Global_1841F3[iVar0 /*790*/].f_2FA;
	}
	return func_19(iParam0);
}

Vector3 func_19(int iParam0)//Position - 0xCB2
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_20(vector3 vParam0)//Position - 0xCC5
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_21()//Position - 0xCEF
{
	return Global_255C02.f_10;
}

Vector3 func_22(int iParam0, int iParam1)//Position - 0xCFD
{
	vector3 vVar0;
	
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				vVar0 = { -1228.99f, -1092.231f, 7.0465f };
			}
			else if (iParam1 == 1)
			{
				vVar0 = { -618.6293f, 252.6611f, 80.5897f };
			}
			else if (iParam1 == 2)
			{
				vVar0 = { 796.6768f, -2029.602f, 28.1346f };
			}
			else if (iParam1 == 3)
			{
				vVar0 = { -1622.881f, 1253.516f, 139.6713f };
			}
			else if (iParam1 == 4)
			{
				vVar0 = { 1123.27f, 1878.917f, 65.7957f };
			}
			break;
	}
	return vVar0;
}

bool func_23(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0xDA9
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_24(int iParam0)//Position - 0xDF0
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_25(int iParam0, bool bParam1, bool bParam2)//Position - 0xE0E
{
	return func_26(0, iParam0, 1, bParam1, bParam2);
}

int func_26(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0xE22
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_150F4B, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_30(iParam0) - func_29(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_29(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_30(iParam0) - func_28(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_29(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_30(iParam0) - func_29(iParam0, 1));
		}
		if (!bParam4 && Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/] != 3)
		{
			iVar1 = (iVar1 - func_27(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_27(int iParam0)//Position - 0xEEB
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

int func_28(int iParam0)//Position - 0xF25
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

int func_29(int iParam0, bool bParam1)//Position - 0xF6B
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

int func_30(int iParam0)//Position - 0x1008
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

bool func_31(int iParam0, bool bParam1, bool bParam2)//Position - 0x1048
{
	return func_26(1, iParam0, 1, bParam1, bParam2);
}

int func_32()//Position - 0x105C
{
	return joaat("CAVALCADE");
}

int func_33()//Position - 0x1069
{
	return joaat("a_m_y_business_03");
}

int func_34()//Position - 0x1076
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 1))
	{
		if (iLocal_106 >= vLocal_108.x)
		{
			if (iLocal_119 < 5)
			{
				iLocal_119++;
			}
			iLocal_106 = 0;
		}
		if (iLocal_106 == 0)
		{
			MISC::SET_BIT(&iLocal_111, 1);
		}
		if (iLocal_119 < 5)
		{
			iVar5 = iLocal_106;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar5)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar5));
				if (func_366(iVar0, 1, 1))
				{
					iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 1))
					{
						vVar2 = { func_22(Local_103.f_5, iLocal_119) };
						vVar3 = { unk_0x8000C77B5F336760(iVar1, 0) };
						fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar3, 1);
						if (fVar4 < 300f)
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 1);
						}
					}
				}
			}
			iLocal_106++;
			if (iLocal_106 == vLocal_108.x)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 1))
				{
					MISC::SET_BIT(&(Local_103.f_4), iLocal_119);
				}
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_35()//Position - 0x114E
{
	return 0;
}

int func_36(var uParam0, int iParam1, bool bParam2)//Position - 0x1157
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_43(uParam0, bParam2, 0);
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

void func_37()//Position - 0x11B5
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_103.f_6)
		{
			case 0:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
				{
					Local_103.f_6 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
						{
							if (func_9(Local_103.f_C[0]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_C[0])))
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 7))
									{
										MISC::SET_BIT(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 14))
									{
										MISC::SET_BIT(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 19))
									{
										Local_103.f_6 = 3;
									}
								}
								else
								{
									Local_103.f_6 = 4;
								}
							}
							else
							{
								Local_103.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 2:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0])))
						{
							Local_103.f_6 = 4;
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
						{
							if (!func_9(Local_103.f_C[0]))
							{
								Local_103.f_6 = 3;
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 19))
							{
								Local_103.f_6 = 3;
							}
						}
					}
				}
				break;
			
			case 3:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0]), 0))
						{
							Local_103.f_6 = 4;
						}
					}
				}
				break;
			
			case 4:
				break;
			}
	}
}

int func_38(var uParam0)//Position - 0x136B
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0));
	}
	return 1;
}

void func_39()//Position - 0x138A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (iLocal_105 >= vLocal_108.x)
		{
			iLocal_105 = 0;
			iLocal_118 = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 0);
			MISC::SET_BIT(&iLocal_111, 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&Local_103, 5);
			GRAPHICS::_0x35FB78DC42B7BD21(&Local_103, 17);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 14);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 19);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 16))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 18))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 4))
					{
						MISC::SET_BIT(&Local_103, 16);
					}
				}
			}
			if (func_42(&(Local_103.f_15)))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 12))
				{
					if (func_36(&(Local_103.f_15), 360000, 0))
					{
						MISC::SET_BIT(&Local_103, 12);
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 15))
					{
						if (func_36(&(Local_103.f_15), 240000, 0))
						{
							MISC::SET_BIT(&Local_103, 15);
						}
					}
				}
				else
				{
					MISC::SET_BIT(&iLocal_111, 9);
				}
			}
		}
		iVar0 = iLocal_105;
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar2 = iVar3;
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 5))
			{
				if (vLocal_108[iVar0 /*3*/].f_2 < 7)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 5);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 0))
				{
					iLocal_118++;
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 2))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 17))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103.f_7, iVar2))
					{
						if (vLocal_108[iVar0 /*3*/].f_2 > 4)
						{
							MISC::SET_BIT(&(Local_103.f_7), iVar2);
							MISC::SET_BIT(&Local_103, 17);
						}
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 5))
				{
					MISC::SET_BIT(&Local_103, 5);
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 4))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 1))
					{
						Local_103.f_8 = iVar3;
						MISC::SET_BIT(&Local_103, 4);
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 15);
						GRAPHICS::_0x35FB78DC42B7BD21(&Local_103, 18);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 4))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 18))
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 7))
						{
							MISC::SET_BIT(&Local_103, 18);
						}
					}
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 9))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 5))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 9);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 14))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 6))
					{
						MISC::SET_BIT(&iLocal_111, 14);
					}
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 20))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 8))
					{
						MISC::SET_BIT(&iLocal_111, 20);
					}
				}
			}
		}
		iVar1 = 0;
		while (iVar1 <= 31)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				func_41(iVar1);
			}
			iVar1++;
		}
		iLocal_105++;
		if (iLocal_105 >= vLocal_108.x)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 16))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
				{
					if (func_38(Local_103.f_9[0]))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 4))
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 15))
							{
								if (!func_42(&uLocal_116))
								{
									func_43(&uLocal_116, 0, 0);
								}
								else if (func_36(&uLocal_116, 2000, 0))
								{
									MISC::SET_BIT(&Local_103, 16);
								}
							}
						}
					}
				}
			}
			MISC::SET_BIT(&iLocal_111, 0);
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 0))
			{
				if (iLocal_118 >= 1)
				{
					MISC::SET_BIT(&Local_103, 0);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 14))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 14))
				{
					MISC::SET_BIT(&Local_103, 14);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 19))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 20))
				{
					MISC::SET_BIT(&Local_103, 19);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 6))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 5))
				{
					if (Local_103.f_2 > 1 && Local_103.f_2 <= 7)
					{
						MISC::SET_BIT(&Local_103, 6);
					}
					else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 10))
					{
						MISC::SET_BIT(&Local_103, 6);
					}
				}
			}
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 17))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&Local_103, 17);
				GRAPHICS::_0x35FB78DC42B7BD21(&Local_103, 15);
				GRAPHICS::_0x35FB78DC42B7BD21(&Local_103, 12);
				func_40(&(Local_103.f_15));
				func_43(&(Local_103.f_15), 0, 0);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 11))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 12))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 9))
					{
						MISC::SET_BIT(&Local_103, 11);
					}
				}
			}
		}
	}
}

void func_40(var uParam0)//Position - 0x1778
{
	uParam0->f_1 = 0;
}

void func_41(int iParam0)//Position - 0x1785
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 7))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iParam0 /*3*/], 3))
			{
				MISC::SET_BIT(&Local_103, 7);
			}
		}
	}
}

bool func_42(var uParam0)//Position - 0x17B4
{
	return uParam0->f_1;
}

void func_43(var uParam0, bool bParam1, bool bParam2)//Position - 0x17C0
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

int func_44(var uParam0)//Position - 0x1805
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

void func_45(var uParam0)//Position - 0x182E
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_43(uParam0, 0, 0);
		}
	}
}

int func_46(int iParam0)//Position - 0x184D
{
	if (func_48(iParam0))
	{
		if (!func_47(iParam0, 11))
		{
			return 1;
		}
	}
	return 0;
}

bool func_47(int iParam0, int iParam1)//Position - 0x186F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[iParam0 /*413*/].f_D0, iParam1);
}

int func_48(int iParam0)//Position - 0x1888
{
	if (Global_24FBF9[iParam0 /*413*/].f_D0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0, bool bParam1)//Position - 0x18A4
{
	if (bParam1)
	{
		if (func_50(iParam0))
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

bool func_50(int iParam0)//Position - 0x18D0
{
	return func_51(iParam0);
}

bool func_51(int iParam0)//Position - 0x18DE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_D.f_1, 0);
}

void func_52()//Position - 0x18F8
{
	func_346();
	func_343();
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 10))
	{
		if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 < 6)
		{
			vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 4))
	{
		if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 <= 6)
		{
			vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 16))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 4))
		{
			if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 <= 6)
			{
				vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
				Local_107.f_2 = 723786828;
				func_341(Local_107, func_342(1));
			}
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 11))
	{
		if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 <= 6)
		{
			vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
			Local_107.f_2 = 723786828;
			func_341(Local_107, func_342(1));
		}
	}
	if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 > 0)
	{
		if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 < 6)
		{
			if ((((func_49(CAM::_0xDC9DA9E8789F5246(), 1) || func_340()) || func_339() > 0) || func_47(CAM::_0xDC9DA9E8789F5246(), 1)) || func_338())
			{
				vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
			}
		}
	}
	if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 > 0)
	{
		if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 < 6)
		{
			if (func_336(CAM::_0xDC9DA9E8789F5246()))
			{
				vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
			}
		}
	}
	switch (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2)
	{
		case 0:
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/], 0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 3))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 15))
					{
						MISC::SET_BIT(&(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/]), 2);
						func_335(11, 1);
						vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 3;
					}
					else
					{
						vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
						MISC::SET_BIT(&iLocal_111, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_334(Local_103.f_5))
			{
				func_333(Local_103.f_5);
				vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_332())
			{
				if (func_222())
				{
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 5;
					func_220(88, 1);
					func_219();
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 8))
				{
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
				}
			}
			else if (func_210())
			{
				vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 5;
			}
			else
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 8))
				{
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 15))
				{
					func_197(12, 116);
					vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 6;
					MISC::SET_BIT(&iLocal_111, 16);
				}
			}
			break;
		
		case 5:
			if (Local_103.f_5 == 0)
			{
				func_61();
			}
			break;
		
		case 6:
			vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 0;
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 3);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 4);
			iLocal_110 = 0;
			func_197(12, 116);
			if (HUD::DOES_BLIP_EXIST(Global_193EF6))
			{
				HUD::REMOVE_BLIP(&Global_193EF6);
			}
			func_60(&Local_123);
			func_53();
			func_335(11, 0);
			vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_103.f_2 == 0 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 10))
			{
				vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_53()//Position - 0x1C31
{
	if (!func_59())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_140740.f_9)
	{
		return;
	}
	func_54();
}

void func_54()//Position - 0x1C5E
{
	func_56();
	func_55(0);
}

void func_55(bool bParam0)//Position - 0x1C6F
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_140740 = 20;
	StringCopy(&(Global_140740.f_1), "", 32);
	Global_140740.f_9 = 0;
	if (bVar0)
	{
		Global_140740.f_A = HUD::_0x13C4B962653A5280();
		Global_140740.f_B = HUD::_0x13C4B962653A5280();
	}
	StringCopy(&(Global_140740.f_C), "", 16);
	StringCopy(&(Global_140740.f_10), "", 64);
	StringCopy(&(Global_140740.f_20), "", 64);
	Global_140740.f_34 = 0;
	Global_140740.f_35 = 0;
	Global_140740.f_36 = 0;
	Global_140740.f_37 = 4294967295;
	Global_140740.f_38 = 0;
	Global_140740.f_3B = 0;
	if (bParam0)
	{
		return;
	}
}

void func_56()//Position - 0x1D01
{
	if (!func_58())
	{
	}
	if (func_59())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_140740.f_C));
		func_57();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_57()//Position - 0x1D2A
{
	switch (Global_140740)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_34);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_140740.f_35);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_140740.f_10));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_39);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_20));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_10));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_10));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_140740.f_38);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_140740.f_30));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_140740.f_20));
			return;
		
		default:
	}
}

int func_58()//Position - 0x1F9C
{
	if (!func_59())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_140740.f_C));
	func_57();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_59()//Position - 0x1FC2
{
	if (Global_140740 == 20)
	{
		return 0;
	}
	return 1;
}

void func_60(int iParam0)//Position - 0x1FD8
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

void func_61()//Position - 0x204A
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
	{
		if (!func_38(Local_103.f_9[0]))
		{
			if (HUD::DOES_BLIP_EXIST(Global_193EF6))
			{
				if (func_195() || func_194())
				{
					HUD::SET_BLIP_DISPLAY(Global_193EF6, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Global_193EF6, 4);
				}
			}
			else
			{
				Global_193EF6 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_103.f_9[0]));
				HUD::SET_BLIP_COLOUR(Global_193EF6, 1);
				HUD::SET_BLIP_SCALE(Global_193EF6, 0f);
			}
			if (HUD::DOES_BLIP_EXIST(Local_123))
			{
				if (func_195() || func_194())
				{
					HUD::SET_BLIP_DISPLAY(Local_123, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Local_123, 4);
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 10))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_123, "FM_GDM_BLP");
					MISC::SET_BIT(&iLocal_111, 10);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_123.f_1))
			{
				if (func_195() || func_194())
				{
					HUD::SET_BLIP_DISPLAY(Local_123.f_1, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Local_123.f_1, 4);
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 12))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_123.f_1, "FM_GDM_BLP");
					MISC::SET_BIT(&iLocal_111, 12);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 6))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 7) && !func_181(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
					{
						if (!func_195())
						{
							func_175("FM_GDM_KIL", 0);
						}
						MISC::SET_BIT(&iLocal_111, 6);
					}
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 7))
			{
				func_53();
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 6);
			}
			else if (func_174())
			{
				func_53();
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 6);
			}
			else if (func_181(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				func_53();
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 6);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 6))
		{
			func_53();
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 6);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/], 1))
		{
			iVar1 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_103.f_9[0], &uVar0);
			if (iVar1 == CAM::_0xDC9DA9E8789F5246())
			{
				MISC::SET_BIT(&(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/]), 1);
				iVar2 = func_171(func_173(CAM::_0xDC9DA9E8789F5246(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = SYSTEM::ROUND((Global_40001.f_1084 * IntToFloat(iVar3)));
				func_128(2, "XPT_KAIE", 2435321038, 2131309714, iVar3, 1, 4294967295, 0);
				if (Global_40001.f_976 != 0f)
				{
					iVar4 = SYSTEM::ROUND(Global_40001.f_976);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_40001.f_972 != 0f)
				{
					iVar5 = SYSTEM::ROUND(Global_40001.f_972);
				}
				else
				{
					iVar5 = 8000;
				}
				if (iVar4 >= 100)
				{
					iVar6 = (iVar4 / 100);
				}
				if (iVar5 >= 100)
				{
					iVar7 = (iVar5 / 100);
				}
				iVar8 = MISC::GET_RANDOM_INT_IN_RANGE(iVar6, iVar7 + 1) * 100;
				iVar8 = func_127(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_77(&iVar8, 1);
				if (func_76())
				{
					if (iVar8 > 0)
					{
						func_64(3942610365, iVar8, &iVar9, 0, 0, 0);
						Global_410C0F[iVar9 /*80*/] = 3148488019;
					}
				}
				else
				{
					NETWORKCASH::NETWORK_EARN_FROM_AI_TARGET_KILL(iVar8, 3148488019);
				}
				func_63(5, iVar8);
			}
			else if (iVar1 != func_62())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/], 7))
					{
						if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							MISC::SET_BIT(&(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_62()//Position - 0x23A3
{
	return 4294967295;
}

void func_63(int iParam0, int iParam1)//Position - 0x23AC
{
	if (iParam1 > 0)
	{
		if (Global_40001.f_5B34 == 0 || Global_40001.f_5B34 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_40001.f_5B34 == 1)
			{
				Global_26862F.f_110 = iParam0;
				if (iParam1 > Global_40001.f_1949)
				{
					iParam1 = Global_40001.f_1949;
				}
				Global_26862F.f_111 = iParam1;
				Global_26862F.f_112 = 0;
			}
		}
	}
}

void func_64(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x241E
{
	int iVar0;
	
	if (!func_76())
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
				func_65(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_65(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case 2952902635:
		case 3696988851:
			if (iParam1 > 0)
			{
				func_65(uParam2, 3159588365, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case 1240683675:
		case 1241904665:
		case 3194003497:
			func_65(uParam2, 3159588365, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_65(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x298B
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_76())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0xE46667979780116E(func_17()) || unk_0x64BE694244417BDA())
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
			*uParam0 = func_72(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
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
			func_71(1, iParam4);
			Global_410E35 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_66(4294967295, iParam4, iParam6, iParam5, 4294967295);
		}
	}
	return 0;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x2B36
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_7A.f_47), 0);
			break;
	}
	if (iParam0 != 4294967295)
	{
		func_67(iParam0);
	}
}

void func_67(int iParam0)//Position - 0x2B6E
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_76())
	{
		bVar0 = true;
	}
	if (iParam0 != 4294967295)
	{
		if (func_70(iParam0))
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
		func_68(&(Global_410C0F[iParam0 /*80*/]));
	}
}

void func_68(var uParam0)//Position - 0x2BC2
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
	func_69(&(uParam0->f_D));
	func_69(&(uParam0->f_D.f_D));
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

void func_69(var uParam0)//Position - 0x2CC9
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

int func_70(int iParam0)//Position - 0x2D11
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_410C0F[iParam0 /*80*/].f_3D.f_5 == 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)//Position - 0x2D3B
{
	Global_258B69 = iParam1;
	Global_258B68 = iParam0;
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)//Position - 0x2D4F
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_410C0F[iVar0 /*80*/].f_3D.f_2 == 0)
		{
			if (!func_76())
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
				func_73(Global_410C0F[iVar0 /*80*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_73(struct<62> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)//Position - 0x2E8B
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
	iVar1 = func_75(vVar0.y);
	if ((Global_40001.f_5B83 && !Global_40001.f_5B84) && !Global_40001.f_5B85)
	{
		return;
	}
	if (!iVar1 == 0)
	{
		func_74();
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &vVar0, 35, iVar1);
	}
}

void func_74()//Position - 0x2F1D
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
}

var func_75(int iParam0)//Position - 0x2F2C
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

int func_76()//Position - 0x2F3E
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

void func_77(int iParam0, int iParam1)//Position - 0x2F55
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_126())
		{
			if (func_125(0))
			{
				if (!func_121(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_120()))
					{
						if (func_119() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_119());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_117(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_82("GB_BCUT_TICK1", func_120(), iVar0, 0, 0, 1, 1);
						}
						func_81(20);
						func_78(func_120(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_78(int iParam0, int iParam1, int iParam2)//Position - 0x2FF5
{
	struct<8> Var0;
	
	if (func_366(iParam0, 0, 1))
	{
		Var0 = 2084031113;
		Var0.f_1 = CAM::_0xDC9DA9E8789F5246();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_80(iParam0);
		func_79(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 8, func_75(iParam0));
	}
}

void func_79(var uParam0, var uParam1)//Position - 0x304B
{
	*uParam0 = Global_19135D.f_9;
	*uParam1 = Global_19135D.f_A;
}

var func_80(int iParam0)//Position - 0x3065
{
	return Global_18CD5B[iParam0 /*560*/].f_1EB;
}

void func_81(int iParam0)//Position - 0x3079
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_26862F.f_1313.f_7[iVar0]), iVar1);
}

int func_82(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)//Position - 0x30A2
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 4294967295;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(CAM::_0xDC9DA9E8789F5246(), iParam1) || iParam5)
	{
		if (!bParam4)
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		else
		{
			StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(iParam1), 64);
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
		{
		}
		HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_89(iParam1, 4294967294, 1, 0, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_87(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_83(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_83(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x313A
{
	int iVar0;
	
	if ((!func_86() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_15(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return;
	}
	iVar0 = func_84(iParam2);
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

int func_84(int iParam0)//Position - 0x3242
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_196195 - 1))
	{
		if (iParam0 > Global_196195.f_5[iVar0 /*53*/].f_1)
		{
			func_85(iVar0);
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

void func_85(int iParam0)//Position - 0x32A4
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_196195.f_5[iVar0 /*53*/] = { Global_196195.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + 4294967295);
	}
}

bool func_86()//Position - 0x32DD
{
	return DLC::IS_DLC_PRESENT(2532323046);
}

var func_87(char* sParam0)//Position - 0x32EE
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_88(&cVar0);
}

var func_88(char[4] cParam0)//Position - 0x3310
{
	return cParam0;
}

int func_89(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x331A
{
	int iVar0;
	int iVar1;
	
	if (func_336(iParam0) && !bParam4)
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
	if (((func_336(CAM::_0xDC9DA9E8789F5246()) || (func_116() && func_115())) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_26862F.f_11E1, 31)) && !bParam4)
	{
		iVar1 = func_114();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != 4294967295)
				{
					if (func_366(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_440000.f_1EBA3[iParam1] != 4294967295)
							{
								return func_112(iParam1, iParam0, 0);
							}
							else
							{
								return func_100(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_100(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_440000.f_1EBA3[iParam1] != 4294967295)
				{
					return func_112(iParam1, iParam0, 0);
				}
				else
				{
					return func_90(0, 4294967295, 0);
				}
			}
			else
			{
				return func_90(0, 4294967295, 0);
			}
		}
	}
	if ((iParam1 > 4294967295 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_440000.f_1EBA3[iParam1] != 4294967295)
		{
			return func_112(iParam1, iParam0, 0);
		}
		else
		{
			return func_100(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
		}
	}
	return func_100(iParam0, CAM::_0xDC9DA9E8789F5246(), iParam1, bParam2, bParam3);
}

int func_90(bool bParam0, int iParam1, bool bParam2)//Position - 0x34FA
{
	return func_91(CAM::_0xDC9DA9E8789F5246(), bParam0, iParam1, bParam2);
}

int func_91(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x3510
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_98() && Global_150AAC.f_1)
	{
		if (bParam1)
		{
			return func_97(iParam2, iVar0);
		}
		else
		{
			return func_97(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > 4294967295)
		{
			if (func_96(iVar0, iParam2, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_95(1);
				}
				else
				{
					return func_95(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_4, 20))
			{
				return func_92(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_92(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == 4294967295)
	{
		return func_95(1);
	}
	return func_95(0);
}

int func_92(int iParam0, int iParam1, bool bParam2, int iParam3)//Position - 0x3604
{
	int iVar0;
	
	iVar0 = func_94(iParam0, iParam1, iParam3);
	if (func_93(Global_440000.f_1FEDE, 1))
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

int func_93(int iParam0, bool bParam1)//Position - 0x371C
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

int func_94(int iParam0, int iParam1, int iParam2)//Position - 0x376D
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
			if (!func_96(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_95(bool bParam0)//Position - 0x37B4
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_96(int iParam0, int iParam1, int iParam2)//Position - 0x37CB
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

int func_97(int iParam0, int iParam1)//Position - 0x3996
{
	if (iParam0 == 4294967295)
	{
		iParam0 = func_94(iParam1, iParam0, 4);
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

int func_98()//Position - 0x39E4
{
	if (func_99() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_99()//Position - 0x3A01
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

int func_100(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x3A19
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
			if (func_109(1))
			{
				iVar3 = func_105(iParam0);
				if (!iVar3 == 4294967295)
				{
					return func_103(iVar3);
				}
			}
			if ((func_102(iParam1, iParam0, iVar0, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)) || ((func_96(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 23)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 18)))
			{
				return func_95(1);
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26))
			{
				return func_101(1);
			}
			else
			{
				return func_91(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1805F9 || Global_1805F0) || Global_1841F3[iParam0 /*790*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1805F9 == 1 && Global_180603 == 0))
			{
				return func_95(1);
			}
			else
			{
				return func_91(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1805F4 && Global_1803FE.f_E == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_105(iParam0);
	if (!iVar4 == 4294967295)
	{
		return func_103(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_101(bool bParam0)//Position - 0x3BBD
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_102(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3BD4
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

int func_103(int iParam0)//Position - 0x3C4C
{
	int iVar0;
	
	if (iParam0 > 4294967295)
	{
		iVar0 = func_104(iParam0);
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

var func_104(int iParam0)//Position - 0x3D0F
{
	return Global_24E392.f_817.f_2C[iParam0 /*2*/].f_1;
}

int func_105(int iParam0)//Position - 0x3D26
{
	if (!iParam0 == func_62())
	{
		if (func_107(iParam0, 1))
		{
			return Global_24E392.f_817.f_B[func_106(iParam0)];
		}
	}
	return 4294967295;
}

int func_106(int iParam0)//Position - 0x3D58
{
	if (iParam0 != func_62())
	{
		return Global_18CD5B[iParam0 /*560*/].f_B;
	}
	return func_62();
}

bool func_107(int iParam0, bool bParam1)//Position - 0x3D7B
{
	if (!bParam1)
	{
		if (func_108(iParam0))
		{
			return 0;
		}
	}
	return Global_18CD5B[iParam0 /*560*/].f_B != func_62();
}

int func_108(int iParam0)//Position - 0x3DA6
{
	if (iParam0 != func_62())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_62())
		{
			return Global_18CD5B[iParam0 /*560*/].f_B == iParam0;
		}
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x3DDB
{
	if ((func_111() || func_110()) || (func_21() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_110()//Position - 0x3E0A
{
	return Global_255C02.f_F;
}

var func_111()//Position - 0x3E18
{
	return Global_255C02.f_E;
}

int func_112(int iParam0, int iParam1, bool bParam2)//Position - 0x3E26
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_EC93F.f_D[iParam0];
	if (func_109(1))
	{
		iVar2 = func_105(iParam1);
		if (!iVar2 == 4294967295)
		{
			return func_103(iVar2);
		}
	}
	if (iVar1 > 4294967295 && iVar1 < 17)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_68[iParam0 /*10693*/].f_159C[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > 4294967295 && iParam1 != func_62())
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
			iVar0 = func_91(iParam1, !bParam2, iParam0, 0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_15, 13))
		{
			iVar0 = func_113(iParam0);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_18, 29))
		{
			iVar0 = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_F, 26) && !func_96(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0))
		{
			iVar0 = func_101(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_113(int iParam0)//Position - 0x3FB4
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

var func_114()//Position - 0x408A
{
	return Global_240006.f_2;
}

bool func_115()//Position - 0x4098
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 4);
}

bool func_116()//Position - 0x40A9
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

void func_117(int iParam0, bool bParam1)//Position - 0x40C6
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_118(1);
	}
	else
	{
		iVar1 = func_118(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_118(bool bParam0)//Position - 0x40F8
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_40001.f_2FF5;
}

int func_119()//Position - 0x411E
{
	return Global_40001.f_2FF4;
}

int func_120()//Position - 0x412D
{
	return Global_18CD5B[CAM::_0xDC9DA9E8789F5246() /*560*/].f_B;
}

bool func_121(bool bParam0)//Position - 0x4142
{
	return func_122(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

int func_122(int iParam0, bool bParam1)//Position - 0x4154
{
	return func_123(iParam0, bParam1, 1);
}

int func_123(int iParam0, bool bParam1, int iParam2)//Position - 0x4165
{
	int iVar0;
	
	if (iParam0 == func_62())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_124(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_18CD5B[iParam0 /*560*/].f_B;
	if (iVar0 != func_62() && Global_18CD5B[iVar0 /*560*/].f_B.f_199 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_124(int iParam0, int iParam1)//Position - 0x41C1
{
	if (iParam0 != func_62())
	{
		if (Global_18CD5B[iParam0 /*560*/].f_B != func_62())
		{
			if (Global_18CD5B[iParam0 /*560*/].f_B == iParam0 && Global_18CD5B[iParam0 /*560*/].f_B.f_199 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_125(bool bParam0)//Position - 0x4210
{
	return func_107(CAM::_0xDC9DA9E8789F5246(), bParam0);
}

bool func_126()//Position - 0x4222
{
	return func_108(CAM::_0xDC9DA9E8789F5246());
}

int func_127(int iParam0, int iParam1)//Position - 0x4232
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_40001);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_128(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x4273
{
	return func_129(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_129(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x428F
{
	var uVar0;
	
	uVar0 = func_130(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_130(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x42B2
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_170(CAM::_0xDC9DA9E8789F5246()) || func_169(CAM::_0xDC9DA9E8789F5246()))
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
	else if (func_167() || func_163(CAM::_0xDC9DA9E8789F5246()))
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
	if (func_162(sParam2))
	{
	}
	if (func_161())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_159(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_40001.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_158(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_156(0, &iVar1);
					break;
				
				case 3:
					func_156(1, &iVar1);
					break;
				
				case 1:
					func_153(&iVar1);
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
			func_150(1164, iVar1, 4294967295);
			if (iParam1 == 0)
			{
				func_141((func_149(CAM::_0xDC9DA9E8789F5246()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_2 != 4294967295)
				{
					func_150(1165, iVar1, 4294967295);
				}
				if (iParam1 == 0)
				{
					func_135(iVar1);
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
				func_131((func_133(CAM::_0xDC9DA9E8789F5246()) + iVar1));
			}
			else
			{
				func_131((func_133(CAM::_0xDC9DA9E8789F5246()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_131(int iParam0)//Position - 0x44B0
{
	if (func_161())
	{
		Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_5 = iParam0;
		func_132(joaat("mpply_globalxp"), iParam0);
	}
}

void func_132(int iParam0, int iParam1)//Position - 0x44DB
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_133(int iParam0)//Position - 0x44F7
{
	if (iParam0 > 4294967295)
	{
		if (func_366(iParam0, 0, 1))
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return func_134(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_5;
			}
		}
		else
		{
			return func_134(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_134(int iParam0)//Position - 0x4548
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

void func_135(int iParam0)//Position - 0x4566
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_140(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_138(func_139(&Var0));
			if (iVar1 == 0)
			{
				func_137(&Global_150A08, iParam0);
				func_136(joaat("mpply_crew_local_xp_0"), Global_150A08);
			}
			else if (iVar1 == 1)
			{
				func_137(&Global_150A09, iParam0);
				func_136(joaat("mpply_crew_local_xp_1"), Global_150A09);
			}
			else if (iVar1 == 2)
			{
				func_137(&Global_150A0A, iParam0);
				func_136(joaat("mpply_crew_local_xp_2"), Global_150A0A);
			}
			else if (iVar1 == 3)
			{
				func_137(&Global_150A0B, iParam0);
				func_136(joaat("mpply_crew_local_xp_3"), Global_150A0B);
			}
			else if (iVar1 == 4)
			{
				func_137(&Global_150A0C, iParam0);
				func_136(joaat("mpply_crew_local_xp_4"), Global_150A0C);
			}
		}
	}
}

void func_136(int iParam0, int iParam1)//Position - 0x463A
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

void func_137(var uParam0, int iParam1)//Position - 0x475F
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_138(int iParam0)//Position - 0x4770
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

int func_139(var uParam0)//Position - 0x47CD
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

struct<13> func_140(int iParam0)//Position - 0x47F0
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_141(int iParam0, int iParam1, int iParam2)//Position - 0x4807
{
	if (func_161())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_40001.f_2512 == 0 && iParam1 != 3218036588)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_150A81[func_148(4294967295)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, 3771058946, iParam1);
					return;
				}
				else if (iParam0 == Global_150A81[func_148(4294967295)])
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
		if (func_147(CAM::_0xDC9DA9E8789F5246()))
		{
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_1 = iParam0;
			Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_D3.f_6 = func_171(iParam0, 1);
		}
		func_146(639, iParam0, 4294967295, 1);
		func_145(640, func_171(iParam0, 1), 4294967295, 1, 0);
		Global_150A81[func_148(4294967295)] = iParam0;
		func_142(7, 0);
	}
}

void func_142(int iParam0, int iParam1)//Position - 0x4928
{
	int iVar0;
	
	if (func_144(iParam0, iParam1))
	{
		iVar0 = func_143();
		Global_2581E6[iVar0] = iParam0;
	}
}

int func_143()//Position - 0x494B
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

int func_144(int iParam0, var uParam1)//Position - 0x4980
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

void func_145(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x4A06
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_146(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x4A36
{
	int iVar0;
	
	iVar0 = Global_26B05F[iParam0 /*3*/][func_148(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_150A45[func_148(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_150A4B[func_148(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_150A51[func_148(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_150A57[func_148(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_150A2D[func_148(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_150A33[func_148(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_150A39[func_148(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_150A3F[func_148(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_150A15[func_148(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_150A1B[func_148(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_150A21[func_148(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_150A27[func_148(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_150A5D[func_148(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_150A63[func_148(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_150A69[func_148(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_150A6F[func_148(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_150A75[func_148(iParam2)] = iParam1;
			break;
		
		case 7233:
			Global_150A7B[func_148(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_150A81[func_148(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_150A87[func_148(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_272FA8[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_272FA8[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 2929:
			Global_272FA8[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3058:
			Global_272FA8[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 8527:
			Global_273025[func_148(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_150A8D[func_148(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_150A93[func_148(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_150A99[func_148(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_150A9F[func_148(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_272FE5[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_272FE5[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3055:
			Global_272FE5[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3056:
			Global_272FE5[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3057:
			Global_272FE5[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_273028[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_273028[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_273028[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_273028[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_273028[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_273038[0 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3642:
			Global_273038[1 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3643:
			Global_273038[2 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3644:
			Global_273038[3 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3645:
			Global_273038[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_272FE5[5 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3227:
			Global_272FA8[4 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_273048[func_148(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_273051[func_148(iParam2)] = iParam1;
			break;
		
		case 3665:
			Global_27304B[func_148(iParam2)] = iParam1;
			break;
		
		case 3666:
			Global_273054[func_148(iParam2)] = iParam1;
			break;
		
		case 3667:
			Global_27304E[func_148(iParam2)] = iParam1;
			break;
		
		case 3668:
			Global_273057[func_148(iParam2)] = iParam1;
			break;
		
		case 3689:
			Global_27305A[func_148(iParam2)] = iParam1;
			break;
		
		case 3229:
			Global_272FE5[6 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_272FA8[5 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3234:
			Global_272FE5[7 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 3232:
			Global_272FA8[6 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_272FE5[8 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4020:
			Global_272FA8[7 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_272FE5[9 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4023:
			Global_272FA8[8 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_272FE5[10 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4026:
			Global_272FA8[9 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4028:
			Global_272FE5[11 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 4029:
			Global_272FA8[10 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6109:
			Global_272FE5[12 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6110:
			Global_272FA8[11 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6167:
			Global_272FE5[13 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6168:
			Global_272FA8[12 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6545:
			Global_272FE5[14 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6546:
			Global_272FA8[13 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_272FE5[15 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6559:
			Global_272FA8[14 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_272FE5[16 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6562:
			Global_272FA8[15 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6564:
			Global_272FE5[17 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 6565:
			Global_272FA8[16 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7283:
			Global_272FA8[17 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7285:
			Global_272FA8[18 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		case 7287:
			Global_272FA8[19 /*3*/][func_148(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_147(int iParam0)//Position - 0x5241
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

int func_148(int iParam0)//Position - 0x5266
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_17();
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

int func_149(int iParam0)//Position - 0x529A
{
	if (Global_1406D2.f_9 == 0)
	{
		if (iParam0 > 4294967295)
		{
			if (iParam0 == CAM::_0xDC9DA9E8789F5246())
			{
				return Global_150A81[func_148(4294967295)];
			}
			else if (func_147(iParam0))
			{
				return Global_1841F3[iParam0 /*790*/].f_D3.f_1;
			}
		}
	}
	else
	{
		return Global_150A81[func_148(4294967295)];
	}
	return 0;
}

void func_150(int iParam0, int iParam1, int iParam2)//Position - 0x52F7
{
	int iVar0;
	
	iVar0 = func_152(iParam0, func_148(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_151(iParam0))
	{
		func_145(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_146(iParam0, iVar0, iParam2, 1);
	}
}

int func_151(int iParam0)//Position - 0x5339
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

int func_152(int iParam0, int iParam1, int iParam2)//Position - 0x5543
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_148(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_153(int iParam0)//Position - 0x5575
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_96(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != CAM::_0xDC9DA9E8789F5246())
					{
						if (func_155(CAM::_0xDC9DA9E8789F5246(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_154(*iParam0, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_154(*iParam0, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_154(int iParam0, int iParam1)//Position - 0x5660
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_155(int iParam0, int iParam1)//Position - 0x5681
{
	if (GRAPHICS::_DRAW_SHOWROOM())
	{
		Global_2633E1 = { func_140(iParam0) };
		Global_2633EE = { func_140(iParam1) };
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

void func_156(bool bParam0, int iParam1)//Position - 0x56EE
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
				if (func_366(iVar4, 0, 1))
				{
					if (iVar4 != CAM::_0xDC9DA9E8789F5246())
					{
						iVar1++;
						if (func_155(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
			if (func_366(iVar4, 1, 1))
			{
				if (iVar4 != CAM::_0xDC9DA9E8789F5246())
				{
					if (func_157(CAM::_0xDC9DA9E8789F5246(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_155(CAM::_0xDC9DA9E8789F5246(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_154(*iParam1, 100) * (10f * Global_40001.f_1079)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_154(*iParam1, 100) * (20f * Global_40001.f_1072)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_157(int iParam0, int iParam1)//Position - 0x5806
{
	return SYSTEM::VDIST(func_19(iParam0), func_19(iParam1));
	return 0f;
}

int func_158(int iParam0)//Position - 0x5822
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_154(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_159(int iParam0)//Position - 0x5859
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_149(CAM::_0xDC9DA9E8789F5246()))
		{
			iParam0 = -func_149(CAM::_0xDC9DA9E8789F5246());
		}
	}
	if (func_160(8000, 0, 0) > 0)
	{
		if (func_160(8000, 0, 0) < (iParam0 + func_149(CAM::_0xDC9DA9E8789F5246())))
		{
			iParam0 = (func_160(8000, 0, 0) - func_149(CAM::_0xDC9DA9E8789F5246()));
		}
	}
	return iParam0;
}

int func_160(int iParam0, bool bParam1, int iParam2)//Position - 0x58BD
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

int func_161()//Position - 0x58E5
{
	return 1;
}

int func_162(char* sParam0)//Position - 0x58EE
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

int func_163(int iParam0)//Position - 0x5926
{
	return func_164(func_165(iParam0));
}

int func_164(int iParam0)//Position - 0x5938
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_165(int iParam0)//Position - 0x5952
{
	if (func_166(iParam0, 0))
	{
		return Global_18CD5B[iParam0 /*560*/].f_B.f_21;
	}
	return 4294967295;
}

int func_166(int iParam0, int iParam1)//Position - 0x5975
{
	if (Global_18CD5B[iParam0 /*560*/].f_B.f_21 != 4294967295 || (iParam1 && Global_18CD5B[iParam0 /*560*/].f_B.f_20 != 4294967295))
	{
		return 1;
	}
	return 0;
}

int func_167()//Position - 0x59B0
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_21();
	}
	return func_168(Global_440000.f_1FEDE);
}

int func_168(int iParam0)//Position - 0x59D4
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

bool func_169(int iParam0)//Position - 0x5A0E
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 2;
}

bool func_170(int iParam0)//Position - 0x5A23
{
	return Global_24FBF9[iParam0 /*413*/].f_73 == 7;
}

int func_171(int iParam0, bool bParam1)//Position - 0x5A38
{
	if (bParam1)
	{
	}
	return func_172(iParam0, 0);
}

int func_172(int iParam0, int iParam1)//Position - 0x5A4C
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

int func_173(int iParam0, bool bParam1)//Position - 0x5B0B
{
	if (bParam1)
	{
	}
	return func_149(iParam0);
}

bool func_174()//Position - 0x5B1E
{
	return Global_10B8E;
}

void func_175(char* sParam0, bool bParam1)//Position - 0x5B2A
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_179(sParam0))
	{
		return;
	}
	func_54();
	Global_140740 = 0;
	StringCopy(&(Global_140740.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_140740.f_9 = MISC::GET_HASH_KEY(&(Global_140740.f_1));
	StringCopy(&(Global_140740.f_C), sParam0, 16);
	func_178();
	func_177(bParam1);
	func_176();
}

void func_176()//Position - 0x5B95
{
	MISC::SET_BIT(&(Global_140740.f_3B), 1);
}

void func_177(bool bParam0)//Position - 0x5BA8
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_140740.f_3B), 0);
		return;
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_140740.f_3B), 0);
}

void func_178()//Position - 0x5BCE
{
	Global_140740.f_A = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 86400000);
	Global_140740.f_B = HUD::_0x13C4B962653A5280();
}

bool func_179(char* sParam0)//Position - 0x5BF3
{
	if (!func_59())
	{
		return 0;
	}
	if (Global_140740 == 11)
	{
		return func_180(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_C));
}

bool func_180(char* sParam0)//Position - 0x5C37
{
	if (!func_59())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_140740.f_10));
}

int func_181(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)//Position - 0x5C69
{
	if (Global_1841F3[iParam0 /*790*/].f_111.f_18 > 0)
	{
		if (bParam1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_16, 0))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	if (!bParam2)
	{
		if (func_193(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_192(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_191(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_190(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_189(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_188(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_187(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_186(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_185(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_184(iParam0, 0))
		{
			return 1;
		}
	}
	if (!bParam12)
	{
		if (func_182(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_182(int iParam0)//Position - 0x5D7C
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_183(int iParam0)//Position - 0x5DC3
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

int func_184(int iParam0, bool bParam1)//Position - 0x611D
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
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_62())
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 12;
			}
		}
	}
	return 0;
}

int func_185(int iParam0)//Position - 0x61AB
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)//Position - 0x61F2
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 11;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)//Position - 0x6239
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295 && Global_24FBF9[iParam0 /*413*/].f_135.f_7 != func_62())
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 8;
			}
		}
	}
	return 0;
}

int func_188(int iParam0)//Position - 0x6299
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 9;
			}
		}
	}
	return 0;
}

int func_189(int iParam0)//Position - 0x62E0
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 7;
			}
		}
	}
	return 0;
}

int func_190(int iParam0)//Position - 0x6326
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 4;
			}
		}
	}
	return 0;
}

int func_191(int iParam0)//Position - 0x636C
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 1;
			}
		}
	}
	return 0;
}

int func_192(int iParam0)//Position - 0x63B2
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 2;
			}
		}
	}
	return 0;
}

int func_193(int iParam0)//Position - 0x63F8
{
	if (iParam0 != func_62())
	{
		if (func_366(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_183(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 0;
			}
		}
	}
	return 0;
}

var func_194()//Position - 0x643E
{
	return Global_24DCF5.f_699;
}

int func_195()//Position - 0x644D
{
	if (func_196(18))
	{
		return 1;
	}
	if (func_196(0))
	{
		return 1;
	}
	return 0;
}

bool func_196(int iParam0)//Position - 0x646F
{
	int iVar0;
	
	iVar0 = func_152(2480, 4294967295, 0);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, iParam0);
}

void func_197(int iParam0, int iParam1)//Position - 0x648A
{
	int iVar0;
	
	iVar0 = func_209(iParam0);
	if (iVar0 == 4294967295)
	{
		return;
	}
	if (!iParam1 == Global_248844[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_248844[iVar0 /*46*/].f_4 && Global_248844[iVar0 /*46*/])
	{
		Global_248844[iVar0 /*46*/].f_4 = 1;
		func_201();
	}
	func_198(iVar0);
}

void func_198(int iParam0)//Position - 0x64E7
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_15095A)
	{
		return;
	}
	if (Global_248844[iParam0 /*46*/].f_1A != 4294967295)
	{
		HUD::_REMOVE_NOTIFICATION(Global_248844[iParam0 /*46*/].f_1A);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_15095A)
	{
		Global_248844[iVar0 /*46*/] = { Global_248844[iVar1 /*46*/] };
		Global_248844[iVar0 /*46*/] = { Global_248844[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_200(iVar0);
	Global_15095A = (Global_15095A - 1);
	if (Global_15093D)
	{
		if (Global_15093B > 0)
		{
			func_199();
		}
	}
}

void func_199()//Position - 0x6588
{
	Global_15093D = 0;
}

void func_200(int iParam0)//Position - 0x6595
{
	Global_248844[iParam0 /*46*/] = 0;
	Global_248844[iParam0 /*46*/].f_2 = 0;
	Global_248844[iParam0 /*46*/].f_3 = 0;
	Global_248844[iParam0 /*46*/].f_4 = 0;
	Global_248844[iParam0 /*46*/].f_5 = func_62();
	Global_248844[iParam0 /*46*/].f_6 = 145;
	Global_248844[iParam0 /*46*/].f_7 = 1;
	Global_248844[iParam0 /*46*/].f_8 = 4294967295;
	Global_248844[iParam0 /*46*/].f_9 = 4294967295;
	StringCopy(&(Global_248844[iParam0 /*46*/].f_A), "", 64);
	Global_248844[iParam0 /*46*/].f_1A = 4294967295;
	StringCopy(&(Global_248844[iParam0 /*46*/].f_1B), "", 32);
	Global_248844[iParam0 /*46*/].f_23 = 4294967295;
	Global_248844[iParam0 /*46*/].f_24 = 4294967295;
	Global_248844[iParam0 /*46*/].f_25 = 0;
	Global_248844[iParam0 /*46*/].f_27 = 0;
	Global_248844[iParam0 /*46*/].f_28 = 4294967295;
	Global_248844[iParam0 /*46*/].f_29 = 0;
	Global_248844[iParam0 /*46*/].f_2A = 0;
	Global_248844[iParam0 /*46*/].f_2B = 0;
	Global_248844[iParam0 /*46*/].f_2D = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_248844[iParam0 /*46*/].f_26 = HUD::_0x13C4B962653A5280();
	}
}

void func_201()//Position - 0x66A3
{
	Global_41F5 = (Global_41F5 - 1);
	if (Global_41F5 < 0)
	{
		func_208("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_202();
}

void func_202()//Position - 0x66C5
{
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_207(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_203(1);
			func_207(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
}

void func_203(int iParam0)//Position - 0x6722
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
		if (func_206(14))
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
								func_205(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar2);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							if (Global_25824A)
							{
								if (iVar1 == 14)
								{
									func_204(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
								func_204(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41FA), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_204(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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
									func_204(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_204(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(Global_41F5), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_389E, "SET_DATA_SLOT");
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar0);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(Global_956[iVar1 /*15*/].f_A);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
								func_205(&(Global_956[iVar1 /*15*/]));
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
								func_205(&(Global_956[iVar1 /*15*/]));
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
								func_205(&(Global_956[iVar1 /*15*/]));
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
								func_205(&(Global_956[iVar1 /*15*/]));
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
								func_205(&(Global_956[iVar1 /*15*/]));
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(42);
								CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
							}
							else if (Global_956[iVar1 /*15*/].f_A == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_18C80F.f_1;
								func_204(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_204(Global_389E, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_956[iVar1 /*15*/].f_A), SYSTEM::TO_FLOAT(0), -1f, &(Global_956[iVar1 /*15*/]), 0, 0, 0, 0);
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

void func_204(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)//Position - 0x6CBA
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
		func_205(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_205(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_205(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_205(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_205(sParam11);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_205(char* sParam0)//Position - 0x6D6D
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

bool func_206(int iParam0)//Position - 0x6D7F
{
	return Global_8D15 == iParam0;
}

void func_207(var uParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)//Position - 0x6D8D
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

void func_208(char* sParam0)//Position - 0x6DF0
{
	if (Global_41F5 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_41F5 = 0;
	}
}

int func_209(int iParam0)//Position - 0x6E0D
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_15095A)
	{
		if (!Global_248844[iVar0 /*46*/].f_7)
		{
			if (Global_248844[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

int func_210()//Position - 0x6E50
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 17))
	{
		func_212(12, 116, "", 1, 0, 1, 0);
		MISC::SET_BIT(&iLocal_111, 17);
	}
	else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 18))
	{
		if (func_211(12, 116))
		{
			MISC::SET_BIT(&iLocal_111, 18);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_211(int iParam0, int iParam1)//Position - 0x6EA2
{
	int iVar0;
	
	iVar0 = func_209(iParam0);
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	if (!iParam1 == Global_248844[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_248844[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_198(iVar0);
	Global_248CD1 = MISC::GET_GAME_TIMER() + 1500;
	return 1;
}

void func_212(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)//Position - 0x6EF5
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_209(iParam0);
	if (bParam5)
	{
		if (iVar0 != 4294967295)
		{
			func_198(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_213(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, 4294967295, 4294967295, 4294967295, iParam4, iParam6);
}

void func_213(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)//Position - 0x6F3B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<46> Var5;
	bool bVar6;
	struct<13> Var7;
	int iVar8;
	
	iVar0 = func_62();
	iVar1 = 145;
	if (bParam2)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	}
	else
	{
		iVar1 = iParam1;
	}
	if (bParam2)
	{
		if (func_218())
		{
			return;
		}
	}
	iVar2 = Global_15095A;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_248844[iVar2 /*46*/] = { Global_248844[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_15095A++;
	if (Global_15095A > 12)
	{
		Global_15095A = 12;
	}
	iVar4 = 0;
	if (Global_248844[1 /*46*/].f_1)
	{
		Global_248844[0 /*46*/] = { Global_248844[1 /*46*/] };
		Global_248844[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_248844[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_248844[iVar4 /*46*/].f_1 = 0;
	}
	Global_248844[iVar4 /*46*/] = 0;
	Global_248844[iVar4 /*46*/].f_2 = 0;
	Global_248844[iVar4 /*46*/].f_3 = 0;
	Global_248844[iVar4 /*46*/].f_4 = 0;
	Global_248844[iVar4 /*46*/].f_5 = iVar0;
	Global_248844[iVar4 /*46*/].f_6 = iVar1;
	Global_248844[iVar4 /*46*/].f_7 = bParam2;
	Global_248844[iVar4 /*46*/].f_8 = iParam0;
	Global_248844[iVar4 /*46*/].f_9 = 4294967295;
	StringCopy(&(Global_248844[iVar4 /*46*/].f_A), sParam3, 64);
	Global_248844[iVar4 /*46*/].f_1A = 4294967295;
	StringCopy(&(Global_248844[iVar4 /*46*/].f_1B), sParam4, 32);
	Global_248844[iVar4 /*46*/].f_23 = iParam6;
	Global_248844[iVar4 /*46*/].f_24 = iParam7;
	Global_248844[iVar4 /*46*/].f_25 = 0;
	Global_248844[iVar4 /*46*/].f_26 = HUD::_0x13C4B962653A5280();
	Global_248844[iVar4 /*46*/].f_27 = uParam5;
	Global_248844[iVar4 /*46*/].f_28 = Global_248CD0;
	Global_248844[iVar4 /*46*/].f_2C = iParam8;
	Global_248844[iVar4 /*46*/].f_2D = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_248844[iVar4 /*46*/].f_9 = func_215();
	}
	Global_248CD0++;
	func_214();
	Global_248844[iVar4 /*46*/].f_29 = 0;
	Global_248844[iVar4 /*46*/].f_2A = 0;
	Global_248844[iVar4 /*46*/].f_2B = 0;
	if (MISC::IS_DURANGO_VERSION())
	{
		if (bParam2)
		{
			bVar6 = true;
			if (bVar6)
			{
				Var7 = { func_140(iVar0) };
				iVar8 = NETWORK::_0x36391F397731595D(&Var7);
				if (iVar8 != 4294967295)
				{
					Global_248844[iVar4 /*46*/].f_29 = iVar8;
					Global_248844[iVar4 /*46*/].f_2A = 1;
					Global_248844[iVar4 /*46*/].f_2B = 0;
				}
			}
		}
	}
}

void func_214()//Position - 0x71B0
{
	Global_15093F = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 30000);
}

int func_215()//Position - 0x71C7
{
	vector3 vVar0[24];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_217() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) || MISC::ARE_STRINGS_EQUAL(".", &cVar0))
	{
		return 4294967295;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		switch (iVar1)
		{
			case 0:
				StringCopy(&cVar0, func_216(53, 4294967295), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_216(54, 4294967295), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_216(55, 4294967295), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_216(56, 4294967295), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_216(57, 4294967295), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_216(58, 4294967295), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_216(59, 4294967295), 24);
				break;
			
			default:
				StringCopy(&cVar0, "", 24);
				break;
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) && !MISC::ARE_STRINGS_EQUAL(".", &cVar0))
		{
			iVar2++;
		}
		iVar1++;
	}
	if (iVar2 == 0)
	{
		return 4294967295;
	}
	iVar3 = func_152(8044, 4294967295, 0);
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar4 = iVar1 * 3;
		if (iVar4 != 4294967295)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, iVar4))
			{
				return 7;
			}
		}
		iVar1++;
	}
	return 1;
}

var func_216(int iParam0, int iParam1)//Position - 0x7318
{
	var uVar0;
	
	uVar0 = Global_272BE3[iParam0 /*3*/][func_148(iParam1)];
	return STATS::STAT_GET_STRING(uVar0, 4294967295);
}

struct<6> func_217()//Position - 0x7339
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1956AE.f_A)))
	{
		iVar2 = func_152(8045, 4294967295, 0);
		if (iVar2 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 1218)
			{
				if ((Global_C2055.f_4[iVar1 /*88*/].f_41 == 0 && Global_C2055.f_4[iVar1 /*88*/].f_44 == 1) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_C2055.f_4[iVar1 /*88*/].f_4C, 13))
				{
					if (Global_C2055.f_1A2B5[iVar1 /*13*/].f_1 == iVar2)
					{
						Var0 = { Global_C2055.f_1E09D[Global_C2055.f_1A2B5[iVar1 /*13*/].f_A /*6*/] };
						iVar1 = 1218;
					}
				}
				iVar1++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
			}
		}
		Global_1956AE.f_A = { Var0 };
		return Var0;
	}
	return Global_1956AE.f_A;
}

bool func_218()//Position - 0x7419
{
	return Global_140831 == 10;
}

void func_219()//Position - 0x7428
{
	int iVar0;
	
	iVar0 = Global_150A75[func_148(4294967295)];
	MISC::SET_BIT(&iVar0, 8);
	func_146(1303, iVar0, 4294967295, 1);
}

void func_220(int iParam0, bool bParam1)//Position - 0x7450
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
			Global_200000[func_221() /*12745*/].f_1FF2.f_13 = iVar0;
			break;
		
		case 19:
			Global_200000[func_221() /*12745*/].f_1FF2.f_12 = iVar0;
			break;
		
		case 74:
			Global_200000[func_221() /*12745*/].f_1FF2.f_C = iVar0;
			break;
		
		case 29:
			Global_200000[func_221() /*12745*/].f_1FF2.f_E = iVar0;
			break;
		
		case 8:
			Global_200000[func_221() /*12745*/].f_1FF2.f_F = iVar0;
			break;
		
		case 31:
			Global_200000[func_221() /*12745*/].f_1FF2.f_10 = iVar0;
			break;
		
		case 3:
			Global_200000[func_221() /*12745*/].f_1FF2.f_14 = iVar0;
			break;
		
		case 6:
			Global_200000[func_221() /*12745*/].f_1FF2.f_11 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_200000[func_221() /*12745*/].f_1FF2.f_17 = iVar0;
			break;
		
		case 76:
			Global_200000[func_221() /*12745*/].f_1FF2.f_18 = iVar0;
			break;
		
		case 93:
			Global_200000[func_221() /*12745*/].f_1FF2.f_19 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_200000[func_221() /*12745*/].f_1FF2.f_1A = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_200000[func_221() /*12745*/].f_1FF2.f_1B = iVar0;
			break;
			break;
		
		case 97:
			Global_200000[func_221() /*12745*/].f_1FF2.f_1D = iVar0;
			break;
		
		case 88:
			Global_200000[func_221() /*12745*/].f_1FF2.f_1C = iVar0;
			break;
		
		case 100:
			Global_200000[func_221() /*12745*/].f_1FF2.f_1F = iVar0;
			break;
		
		case 106:
			Global_200000[func_221() /*12745*/].f_1FF2.f_20 = iVar0;
			break;
		
		case 99:
			Global_200000[func_221() /*12745*/].f_1FF2.f_1E = iVar0;
			break;
	}
}

int func_221()//Position - 0x768F
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_222()//Position - 0x769C
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 4))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 8) || (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 8) && func_36(&uLocal_114, 600000, 0)))
		{
			if (func_228(Local_103.f_5))
			{
				MISC::SET_BIT(&iLocal_111, 4);
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 8);
			}
		}
	}
	else if (!func_227())
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 19))
		{
			if (func_226())
			{
				MISC::SET_BIT(&iLocal_111, 19);
			}
			else if (!func_225() && !func_223())
			{
				MISC::SET_BIT(&iLocal_111, 8);
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 4);
				func_43(&uLocal_114, 0, 0);
				iLocal_110 = 0;
			}
		}
		else if (!func_223())
		{
			if (func_225())
			{
				return 1;
			}
			else
			{
				return 1;
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_111, 8);
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 4);
		func_43(&uLocal_114, 0, 0);
		iLocal_110 = 0;
	}
	return 0;
}

bool func_223()//Position - 0x7783
{
	return func_224();
}

bool func_224()//Position - 0x778F
{
	return Global_14C73C.f_28 == 3;
}

bool func_225()//Position - 0x779F
{
	return Global_14C73C.f_39.f_1;
}

int func_226()//Position - 0x77AF
{
	if (Global_3DCE == 4)
	{
		if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_227()//Position - 0x77D4
{
	if (Global_41C6)
	{
		return 1;
	}
	return 0;
}

int func_228(int iParam0)//Position - 0x77EA
{
	int iVar0;
	
	switch (iLocal_110)
	{
		case 0:
			if (func_326(0, 1, 1, 1))
			{
				if (!func_325(12, 4294967295))
				{
					func_321(iParam0);
					iLocal_110++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_320(iParam0);
			func_319(iParam0);
			if (func_229(&uLocal_130, iVar0, "FM_1AU", sLocal_295, 0, 0))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 11);
				iLocal_110++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_229(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x786C
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_317())
	{
		return 0;
	}
	if (func_316())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = 4294967197;
	return func_230(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, 4294967295);
}

int func_230(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)//Position - 0x78B1
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
	iVar1 = func_315(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_314(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_309(iParam6))
	{
		return 0;
	}
	if (func_306(iVar0, iVar1, iVar2))
	{
		if (func_305())
		{
			return 0;
		}
		func_304();
		return func_237(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_236(iParam4))
	{
		return 0;
	}
	func_231(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_231(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x7996
{
	Global_14C73C.f_28.f_1 = iParam0;
	Global_14C73C.f_28.f_2 = iParam1;
	Global_14C73C.f_28.f_3 = iParam2;
	StringCopy(&(Global_14C73C.f_28.f_4), sParam3, 16);
	Global_14C73C.f_28.f_8 = iParam4;
	Global_14C73C.f_28.f_9 = iParam5;
	Global_14C73C.f_28.f_E = iParam6;
	func_232(iParam4);
	func_304();
	Global_14C73C.f_28.f_D = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), 7000);
}

void func_232(int iParam0)//Position - 0x7A03
{
	if (func_235(iParam0))
	{
		func_234();
		return;
	}
	func_233();
}

void func_233()//Position - 0x7A1F
{
	Global_14C73C.f_28.f_A = 0;
}

void func_234()//Position - 0x7A30
{
	Global_14C73C.f_28.f_A = 1;
}

int func_235(int iParam0)//Position - 0x7A41
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

bool func_236(int iParam0)//Position - 0x7A89
{
	return iParam0 > Global_14C73C.f_28.f_8;
}

int func_237(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)//Position - 0x7A9C
{
	struct<2> Var0;
	
	func_303();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_300(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_297(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_300(uParam0, sParam3, sParam4);
		}
		return func_281(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_280(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_270(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_269(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_238(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_238(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x7B96
{
	bool bVar0;
	
	func_268();
	bVar0 = true;
	if (func_240(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_239(120000);
		return 1;
	}
	return 0;
}

void func_239(int iParam0)//Position - 0x7BCD
{
	Global_14C73C.f_28.f_B = NETWORK::GET_TIME_OFFSET(HUD::_0x13C4B962653A5280(), iParam0);
	Global_14C73C.f_28.f_C = 1;
}

int func_240(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x7BF0
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
	
	iVar0 = func_62();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_262(iVar0);
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
	sVar4 = func_261(sParam5, bParam6, &iVar3);
	uVar5 = func_259(iParam7, &iVar3);
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
		bVar12 = func_258(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_244(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 0))
	{
		func_243();
	}
	func_268();
	func_242();
	func_241();
	return 1;
}

void func_241()//Position - 0x7D42
{
	Global_14C73C.f_39 = 0;
	Global_14C73C.f_39.f_1 = 0;
}

void func_242()//Position - 0x7D5A
{
	Global_14C73C.f_28 = 3;
}

void func_243()//Position - 0x7D69
{
	MISC::SET_BIT(&Global_94F, 8);
}

int func_244(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x7D7A
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
	if (func_245(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_245(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x7DE6
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_252();
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
	if (func_251() == 0)
	{
		func_249();
		return 0;
	}
	func_248(Global_41211A);
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
	func_252();
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
				func_247(0);
				break;
			
			case 1:
				func_247(1);
				break;
			
			case 2:
				func_247(2);
				break;
			
			case 3:
				func_247(3);
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
		func_252();
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
			if (!func_246())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Text_Arrive_Tone", &Global_38A6, 1);
			}
		}
	}
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_207(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_203(1);
			func_207(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
	return 1;
}

bool func_246()//Position - 0x81A7
{
	return Global_140859;
}

void func_247(int iParam0)//Position - 0x81B3
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_19E56.f_36C7[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_248(int iParam0)//Position - 0x81D2
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

void func_249()//Position - 0x8252
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
		if (!func_250(Global_411C39[iVar2 /*104*/].f_12, Global_411C39[Global_41211A /*104*/].f_12))
		{
			Global_41211A = iVar2;
		}
		iVar2++;
	}
	Global_411C39[Global_41211A /*104*/].f_18 = 1;
}

int func_250(struct<6> Param0, struct<6> Param1)//Position - 0x82FC
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

int func_251()//Position - 0x83E7
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
			if (!func_250(Global_411C39[iVar2 /*104*/].f_12, Global_411C39[Global_41211A /*104*/].f_12))
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

void func_252()//Position - 0x8512
{
	if (func_206(14))
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
		Global_38B1 = func_253();
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

var func_253()//Position - 0x85B4
{
	func_254();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_254()//Position - 0x85CD
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_257(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_256(AUDIO::_0x0626A247D2405330());
			if (func_255(iVar0) && (!func_206(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_255(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_255(int iParam0)//Position - 0x86CA
{
	return iParam0 < 3;
}

int func_256(int iParam0)//Position - 0x86D6
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_257(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_257(int iParam0)//Position - 0x8713
{
	if (func_255(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_258(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x873D
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
	if (func_245(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_259(int iParam0, int iParam1)//Position - 0x87BF
{
	if (iParam0 == 4294967197)
	{
		return 4294967197;
	}
	func_260(2, iParam1);
	return iParam0;
}

void func_260(int iParam0, var uParam1)//Position - 0x87DE
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

char* func_261(char* sParam0, bool bParam1, int iParam2)//Position - 0x888F
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_260(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_262(int iParam0)//Position - 0x88CC
{
	int iVar0;
	
	iVar0 = func_265(iParam0);
	if (iVar0 == 4294967295)
	{
		func_263(iParam0, 1);
		return 0;
	}
	Global_150E71[iVar0 /*5*/].f_4 = 1;
	return Global_150E71[iVar0 /*5*/].f_2;
}

void func_263(int iParam0, bool bParam1)//Position - 0x8902
{
	if (!func_366(iParam0, 0, 1))
	{
		return;
	}
	if (func_265(iParam0) != 4294967295)
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
	if (func_264(iParam0))
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

int func_264(int iParam0)//Position - 0x896E
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

int func_265(int iParam0)//Position - 0x89A0
{
	int iVar0;
	
	if (!func_366(iParam0, 0, 1))
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
			func_266(iVar0);
			return 4294967295;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_266(int iParam0)//Position - 0x8A1F
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
	func_267(&(Global_150E71[iVar2 /*5*/]));
	Global_150F12 = (Global_150F12 - 1);
}

void func_267(var uParam0)//Position - 0x8AD5
{
	*uParam0 = 0;
	uParam0->f_1 = func_62();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = HUD::_0x13C4B962653A5280();
	}
}

void func_268()//Position - 0x8B02
{
	Global_14C73C.f_28.f_9 = 4;
}

int func_269(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x8B13
{
	bool bVar0;
	
	func_268();
	bVar0 = false;
	return func_240(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_270(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x8B3A
{
	bool bVar0;
	
	bVar0 = false;
	return func_271(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_271(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)//Position - 0x8B5D
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
	
	iVar0 = func_62();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_262(iVar0);
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
	sVar4 = func_261(sParam5, bParam6, &iVar3);
	uVar5 = func_259(iParam7, &iVar3);
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
		bVar12 = func_279(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_273(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 0))
	{
		func_243();
	}
	func_272();
	func_242();
	func_241();
	return 1;
}

void func_272()//Position - 0x8CB4
{
	Global_14C73C.f_28.f_9 = 3;
}

int func_273(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)//Position - 0x8CC5
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
	if (func_274(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
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

int func_274(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)//Position - 0x8D5D
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_252();
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
	if (func_278() == 0)
	{
		func_276();
		return 0;
	}
	func_275(Global_41F9);
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
		func_247(0);
		func_247(2);
		func_247(1);
	}
	else
	{
		func_252();
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
					func_247(0);
					Global_C11 = 0;
					break;
				
				case 1:
					func_247(1);
					Global_C11 = 1;
					break;
				
				case 2:
					func_247(2);
					Global_C11 = 2;
					break;
				
				case 3:
					func_247(3);
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
		func_252();
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
			if (!func_246())
			{
				unk_0x1190AB7024CBD8CB(4294967295, "Text_Arrive_Tone", &Global_38A6, 1);
			}
		}
	}
	if (!Global_395A)
	{
		if (Global_38B1.f_1 == 6)
		{
			func_207(Global_389E, "SET_DATA_SLOT_EMPTY", 1f, 3212836864, 3212836864, 3212836864, 3212836864);
			func_203(1);
			func_207(Global_389E, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_389D), 3212836864, 3212836864, 3212836864);
		}
	}
	return 1;
}

void func_275(int iParam0)//Position - 0x9212
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

void func_276()//Position - 0x92A4
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
		if (!func_277(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
		{
			Global_41F9 = iVar2;
		}
		iVar2++;
	}
	Global_19E56.f_3721[Global_41F9 /*104*/].f_18 = 1;
}

int func_277(struct<6> Param0, struct<6> Param1)//Position - 0x936F
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

int func_278()//Position - 0x945A
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
			if (!func_277(Global_19E56.f_3721[iVar2 /*104*/].f_12, Global_19E56.f_3721[Global_41F9 /*104*/].f_12))
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

int func_279(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)//Position - 0x95C2
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
	if (func_274(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
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

int func_280(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)//Position - 0x9677
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
	}
	if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	func_272();
	bVar0 = true;
	if (func_271(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_239(120000);
		return 1;
	}
	return 0;
}

int func_281(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)//Position - 0x96C9
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
		bVar0 = func_296(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_287(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 3))
		{
			func_286(1);
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam4, 5))
		{
			func_285(1);
		}
		func_284();
		func_242();
		func_283();
		func_282();
		return 1;
	}
	return 0;
}

void func_282()//Position - 0x976C
{
	Global_26A91B = 0;
}

void func_283()//Position - 0x9779
{
	Global_14C73C.f_39 = 1;
	Global_14C73C.f_39.f_1 = 0;
}

void func_284()//Position - 0x9791
{
	Global_14C73C.f_28.f_9 = 1;
}

void func_285(int iParam0)//Position - 0x97A2
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

void func_286(int iParam0)//Position - 0x97C3
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

int func_287(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x97E6
{
	func_295(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_288(sParam3, iParam4, bParam7);
}

int func_288(char* sParam0, int iParam1, bool bParam2)//Position - 0x9834
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
					func_294();
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
		if (func_325(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_293();
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
				func_252();
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
				if (func_292())
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
			if (func_291())
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
			func_290();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_289();
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
		func_294();
	}
	return 0;
}

void func_289()//Position - 0x9B00
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

void func_290()//Position - 0x9B31
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

int func_291()//Position - 0x9BC6
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_292()//Position - 0x9BED
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

void func_293()//Position - 0x9C86
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

void func_294()//Position - 0x9CDD
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

void func_295(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x9D34
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

int func_296(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)//Position - 0x9D8A
{
	func_295(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
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
	return func_288(sParam3, iParam4, bParam7);
}

int func_297(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)//Position - 0x9DD8
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
	}
	if (BRAIN::IS_PED_SPRINTING(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (func_299(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_298();
		func_284();
		func_242();
		func_283();
		func_282();
		return 1;
	}
	return 0;
}

void func_298()//Position - 0x9E2A
{
	Global_41C8 = 0;
}

bool func_299(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)//Position - 0x9E36
{
	func_295(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_288(sParam3, iParam4, bParam8);
}

int func_300(var uParam0, char* sParam1, char* sParam2)//Position - 0x9E8B
{
	if (func_302(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_301();
		func_242();
		func_283();
		return 1;
	}
	return 0;
}

void func_301()//Position - 0x9EB6
{
	Global_14C73C.f_28.f_9 = 2;
}

bool func_302(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x9EC7
{
	func_295(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_288(sParam2, iParam3, 0);
}

void func_303()//Position - 0x9F15
{
	Global_14C73C.f_37 = Global_14C73C.f_28.f_1;
	Global_14C73C.f_37.f_1 = Global_14C73C.f_28.f_A;
}

void func_304()//Position - 0x9F3B
{
	Global_14C73C.f_28 = 1;
}

bool func_305()//Position - 0x9F4A
{
	return Global_14C73C.f_28 == 1;
}

int func_306(int iParam0, int iParam1, int iParam2)//Position - 0x9F5A
{
	if (!func_307(iParam0))
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

int func_307(int iParam0)//Position - 0x9F99
{
	if (!func_308())
	{
		return 0;
	}
	if (!Global_14C73C.f_28.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_308()//Position - 0x9FC1
{
	if (Global_14C73C.f_28 == 0)
	{
		return 0;
	}
	return 1;
}

int func_309(int iParam0)//Position - 0x9FD8
{
	if (func_313())
	{
		return 0;
	}
	if (func_224())
	{
		return 0;
	}
	if (func_312(0))
	{
		return 0;
	}
	if (Global_1406D2.f_12 != 0)
	{
		return 0;
	}
	if (Global_193F0F || func_311())
	{
		return 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 6))
	{
		if (func_310())
		{
			return 0;
		}
	}
	return 1;
}

bool func_310()//Position - 0xA03C
{
	return NETWORK::IS_TIME_LESS_THAN(HUD::_0x13C4B962653A5280(), Global_15093F);
}

int func_311()//Position - 0xA050
{
	if (Global_40EAC7.f_31D > 4294967295)
	{
		return 1;
	}
	return 0;
}

int func_312(int iParam0)//Position - 0xA068
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

bool func_313()//Position - 0xA0C2
{
	return func_291();
}

int func_314(int iParam0, int iParam1, int iParam2)//Position - 0xA0CE
{
	if (!func_224())
	{
		return 0;
	}
	return func_306(iParam0, iParam1, iParam2);
}

int func_315(char* sParam0, char* sParam1)//Position - 0xA0EC
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_316()//Position - 0xA106
{
	return Global_269E92.f_1;
}

int func_317()//Position - 0xA114
{
	if (Global_14C7F8.f_2)
	{
		return 1;
	}
	return func_318();
}

bool func_318()//Position - 0xA12D
{
	return func_313();
}

void func_319(int iParam0)//Position - 0xA139
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 11))
	{
		switch (iParam0)
		{
			case 0:
				sLocal_295 = "FMA_KIL1";
				MISC::SET_BIT(&iLocal_111, 11);
				break;
			}
	}
}

int func_320(int iParam0)//Position - 0xA16C
{
	int iVar0;
	
	iVar0 = 144;
	switch (iParam0)
	{
		case 0:
			iVar0 = 12;
			break;
	}
	return iVar0;
}

void func_321(int iParam0)//Position - 0xA18E
{
	switch (iParam0)
	{
		case 0:
			func_323(12, 3, 0);
			func_322(&uLocal_130, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_322(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0xA1BD
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

void func_323(int iParam0, int iParam1, bool bParam2)//Position - 0xA258
{
	Global_BFD = iParam0;
	if (Global_75[iParam0 /*10*/].f_8 != 145)
	{
		func_252();
		if (iParam1 == 4)
		{
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[0] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[1] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[2] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[0] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[1] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[2] = 1;
		}
		else
		{
			if (Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] == 1 && Global_19E56.f_6D76[iParam0 /*29*/].f_18[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_19E56.f_6D76[iParam0 /*29*/].f_C[iParam1] = 1;
			Global_19E56.f_6D76[iParam0 /*29*/].f_18[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_11625)
			{
				if (iParam1 != 4)
				{
					if (Global_38B1 != iParam1)
					{
						Global_BE2[iParam1 /*4*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
						Global_BF3[iParam1] = 1;
						Global_BF8[iParam1] = iParam0;
					}
					else if (iParam0 == Global_38B1)
					{
					}
					else
					{
						Global_BB1[1 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
						Global_BB1[1 /*6*/].f_5 = iParam1;
						func_324();
					}
				}
				else
				{
					Global_BB1[1 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
					Global_BB1[1 /*6*/].f_5 = iParam1;
					func_324();
				}
			}
			else
			{
				Global_BB1[1 /*6*/] = { Global_19E56.f_6D76[iParam0 /*29*/].f_3 };
				Global_BB1[1 /*6*/].f_5 = iParam1;
				func_324();
			}
		}
	}
}

void func_324()//Position - 0xA402
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_19E56.f_6D76[Global_BFD /*29*/].f_7)), 64);
	if (Global_C10 == 0)
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_BB1[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_BB1[1 /*6*/]));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar0, &cVar0, 0, 3, "", 0);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&Global_94F, 0);
}

bool func_325(int iParam0, int iParam1)//Position - 0xA481
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

int func_326(bool bParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0xA4BC
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_331())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_330())
	{
		return 0;
	}
	if (func_340())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_49(CAM::_0xDC9DA9E8789F5246(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_48(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (func_329())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			return 0;
		}
	}
	if (Global_180517)
	{
		return 0;
	}
	if (func_328())
	{
		return 0;
	}
	if (func_327())
	{
		return 0;
	}
	if (func_338())
	{
		return 0;
	}
	if (Global_10B8E)
	{
		return 0;
	}
	if (Global_26AAFF)
	{
		return 0;
	}
	return 1;
}

bool func_327()//Position - 0xA5A9
{
	return Global_255C02.f_244;
}

bool func_328()//Position - 0xA5B8
{
	return Global_255C02.f_2DD;
}

bool func_329()//Position - 0xA5C7
{
	return Global_252F9E.f_BD4.f_242;
}

bool func_330()//Position - 0xA5D9
{
	return MISC::GET_GAME_TIMER() <= Global_43D7.f_16F1 + 100;
}

int func_331()//Position - 0xA5EE
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_332()//Position - 0xA610
{
	int iVar0;
	
	iVar0 = Global_150A75[func_148(4294967295)];
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_333(int iParam0)//Position - 0xA635
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
			{
				Global_252F9E.f_EA3.f_1[0] = NETWORK::NET_TO_VEH(Local_103.f_C[0]);
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				Global_252F9E.f_EA3.f_4[0] = NETWORK::NET_TO_PED(Local_103.f_9[0]);
			}
			break;
	}
}

int func_334(int iParam0)//Position - 0xA697
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_335(int iParam0, bool bParam1)//Position - 0xA6D2
{
	if (bParam1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0, iParam0))
		{
			MISC::SET_BIT(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0), iParam0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0, iParam0))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_D0), iParam0);
	}
}

int func_336(int iParam0)//Position - 0xA735
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_337())
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

bool func_337()//Position - 0xA777
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

bool func_338()//Position - 0xA788
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C4 != 0;
}

int func_339()//Position - 0xA79F
{
	return Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_C5;
}

bool func_340()//Position - 0xA7B4
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 0);
}

void func_341(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)//Position - 0xA7D0
{
	Param0 = 713068249;
	Param0.f_1 = CAM::_0xDC9DA9E8789F5246();
	if (!iParam13 == 0)
	{
		SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Param0, 14, iParam13);
	}
}

int func_342(int iParam0)//Position - 0xA7FD
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
			if (func_366(iVar2, 0, 0))
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

void func_343()//Position - 0xA85A
{
	if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 >= 5 && vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 < 6)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 4))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 3))
			{
				if (func_366(Local_103.f_8, 0, 1))
				{
					func_344("FM_TGDM_KIL", Local_103.f_8, 0, 0, 0, 1, 1, 0);
				}
				MISC::SET_BIT(&iLocal_111, 3);
			}
		}
	}
}

int func_344(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xA8BE
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
				HUD::_SET_NOTIFICATION_COLOR_NEXT(func_112(iVar1, iParam1, 0));
			}
			else
			{
				HUD::_SET_NOTIFICATION_COLOR_NEXT(func_89(iParam1, 4294967294, 1, 0, 0));
			}
		}
		else
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(func_89(iParam1, 4294967294, 1, 0, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_87(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2633E1 = { func_140(iParam1) };
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
						Var2 = { func_345(&Var2) };
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
		func_83(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_345(char* sParam0)//Position - 0xAA7E
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_346()//Position - 0xAAA8
{
	int iVar0;
	
	iVar0 = NETSHOP::_NETWORK_SHOP_BASKET_START();
	if (iLocal_121 != Local_103.f_F)
	{
		iLocal_121 = Local_103.f_F;
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_121);
	}
	if (iLocal_122 != Local_103.f_10)
	{
		iLocal_122 = Local_103.f_10;
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_122);
	}
	if (func_366(CAM::_0xDC9DA9E8789F5246(), 0, 1))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 0))
		{
			if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 == 0)
			{
				if (func_339() == 0)
				{
					MISC::SET_BIT(&(vLocal_108[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 0))
		{
			if ((func_49(CAM::_0xDC9DA9E8789F5246(), 1) || func_46(CAM::_0xDC9DA9E8789F5246())) || func_339() > 0)
			{
				func_40(&uLocal_112);
				GRAPHICS::_0x35FB78DC42B7BD21(&(vLocal_108[iVar0 /*3*/]), 0);
			}
			else if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 7))
					{
						MISC::SET_BIT(&iLocal_111, 7);
						func_354();
					}
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 7))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 7);
					if (!func_47(CAM::_0xDC9DA9E8789F5246(), 0))
					{
						func_352();
					}
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[iVar0 /*3*/], 3))
		{
			if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 > 3 && vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 < 6)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_252F9E.f_EA3, 1))
				{
					MISC::SET_BIT(&(vLocal_108[iVar0 /*3*/]), 3);
				}
			}
		}
		if (vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 > 3)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/], 5))
			{
				if (func_351(Local_103.f_5))
				{
					MISC::SET_BIT(&(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/]), 5);
				}
			}
			else if (!func_351(Local_103.f_5))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/]), 5);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/], 6))
			{
				if (func_348(Local_103.f_5))
				{
					MISC::SET_BIT(&(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/]), 6);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/], 8))
			{
				if (func_347())
				{
					MISC::SET_BIT(&(vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/]), 8);
				}
			}
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_111, 13))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1, 0);
					MISC::SET_BIT(&iLocal_111, 13);
				}
			}
		}
	}
}

int func_347()//Position - 0xACE9
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
	{
		if (func_9(Local_103.f_C[0]))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_103.f_C[0]), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_103.f_C[0]), 1, 40000))
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_348(int iParam0)//Position - 0xAD49
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (func_349(NETWORK::NET_TO_PED(Local_103.f_9[0])))
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

int func_349(int iParam0)//Position - 0xADA1
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(CAM::_0xDC9DA9E8789F5246(), iParam0))
	{
		return 1;
	}
	if (func_350())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(CAM::_0xDC9DA9E8789F5246(), &iVar0))
		{
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (!ENTITY::IS_ENTITY_DEAD(iVar1, 0))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
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

bool func_350()//Position - 0xAE13
{
	return Global_1805F3;
}

int func_351(int iParam0)//Position - 0xAE1F
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), unk_0x8000C77B5F336760(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1)) < 40000f)
						{
							return 1;
						}
					}
				}
			}
			break;
	}
	return 0;
}

void func_352()//Position - 0xAE8B
{
	if (!Global_140738)
	{
		return;
	}
	func_353();
}

void func_353()//Position - 0xAEA2
{
	Global_140738 = 0;
	StringCopy(&(Global_140738.f_1), "", 24);
	Global_140738.f_7 = 0;
}

void func_354()//Position - 0xAEC1
{
	Global_140738 = 1;
	StringCopy(&(Global_140738.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_140738.f_7 = MISC::GET_HASH_KEY(&(Global_140738.f_1));
}

void func_355()//Position - 0xAEEA
{
	switch (Local_103.f_6)
	{
		case 1:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
				{
					if (func_9(Local_103.f_C[0]))
					{
						if (!func_38(Local_103.f_9[0]))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_C[0])))
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 4036695475) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 4036695475) != 0)
								{
									BRAIN::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_C[0]), 20f, 786603);
								}
							}
						}
					}
				}
			}
			break;
		
		case 2:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_C[0]))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
					{
						if (func_9(Local_103.f_C[0]))
						{
							if (!func_38(Local_103.f_9[0]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_C[0])))
								{
									if ((BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 4036695475) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 4036695475) != 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 9))
									{
										BRAIN::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_C[0]), 30f, 786469);
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Local_103, 9))
										{
											GRAPHICS::_0x35FB78DC42B7BD21(&Local_103, 9);
										}
									}
								}
							}
						}
					}
				}
			}
			break;
		
		case 3:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 3466132403) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 3466132403) != 0)
					{
						if (func_359(Local_103.f_9[0]))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_9[0]))
							{
								BRAIN::TASK_LEAVE_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0]), 0, 0);
							}
						}
					}
				}
			}
			break;
		
		case 4:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1805844857) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1805844857) != 0)
						{
							if (func_359(Local_103.f_9[0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_9[0]))
								{
									BRAIN::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_103.f_9[0]), AUDIO::_0x0626A247D2405330(), 500f, 4294967295, 0, 1);
								}
							}
						}
					}
				}
			}
			break;
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
	{
		if ((vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 >= 5 && vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/].f_2 < 6) && !func_181(CAM::_0xDC9DA9E8789F5246(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_356(Local_103.f_9[0], &Local_123, 3212836864, 0, 1, 0, 0, 4294967295, 4294967295, 1);
		}
		else
		{
			func_60(&Local_123);
		}
	}
}

void func_356(var uParam0, int iParam1, float fParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)//Position - 0xB216
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		if (func_358())
		{
			Global_252F9E = CAM::_0xDC9DA9E8789F5246();
		}
		if (bParam3)
		{
			func_357(NETWORK::NET_TO_PED(uParam0), iParam1, 1, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_357(NETWORK::NET_TO_PED(uParam0), iParam1, 4294967295, Global_252F9E, iParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_60(iParam1);
	}
}

int func_357(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xB291
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

bool func_358()//Position - 0xB468
{
	return Global_140842;
}

int func_359(var uParam0)//Position - 0xB474
{
	if (unk_0xDD5EE7D9FC37FA16(uParam0))
	{
		return 1;
	}
	if (func_360(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_360(var uParam0)//Position - 0xB497
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0))
	{
		return 0;
	}
	if (func_361(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_361(var uParam0)//Position - 0xB4C7
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0);
	}
	return 0;
}

int func_362()//Position - 0xB4E9
{
	return Local_103.f_1;
}

int func_363(int iParam0)//Position - 0xB4F5
{
	return vLocal_108[iParam0 /*3*/].f_1;
}

void func_364()//Position - 0xB505
{
	func_53();
	func_335(11, 0);
	func_197(12, 116);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_252F9E.f_EA3), 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_252F9E.f_EA3), 1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETSHOP::_NETWORK_SHOP_BASKET_START() > 4294967295)
		{
			vLocal_108[NETSHOP::_NETWORK_SHOP_BASKET_START() /*3*/] = 0;
		}
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (NETWORK::_0xE64A3CA08DFA37A9(Local_103.f_3))
			{
				NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_103.f_3);
			}
			Local_103.f_3 = 4294967295;
		}
	}
	if (HUD::DOES_BLIP_EXIST(Global_193EF6))
	{
		HUD::REMOVE_BLIP(&Global_193EF6);
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 3);
	GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_111, 4);
	iLocal_110 = 0;
	if (HUD::DOES_BLIP_EXIST(Local_123))
	{
		HUD::REMOVE_BLIP(&Local_123);
	}
	func_365();
}

void func_365()//Position - 0xB5AD
{
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

int func_366(int iParam0, bool bParam1, bool bParam2)//Position - 0xB5B9
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

int func_367()//Position - 0xB603
{
	var uVar0;
	
	func_374(&uVar0);
	if (Global_140842 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_373())
	{
		return 1;
	}
	if (Global_258B0A)
	{
		return 1;
	}
	if (func_372())
	{
		return 1;
	}
	if (func_371(157))
	{
		if (!func_370())
		{
			return 1;
		}
	}
	if (func_371(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_368() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_368()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_368()//Position - 0xB68D
{
	switch (func_369())
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

int func_369()//Position - 0xB6C1
{
	return Global_6373;
}

bool func_370()//Position - 0xB6CC
{
	return Global_255C02.f_24B;
}

int func_371(int iParam0)//Position - 0xB6DB
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_372()//Position - 0xB6F2
{
	return Global_25824F;
}

bool func_373()//Position - 0xB6FE
{
	return Global_255C02.f_246;
}

void func_374(var uParam0)//Position - 0xB70D
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
					func_375(iVar0);
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

void func_375(int iParam0)//Position - 0xB780
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_366(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_376(iVar2, &bVar3))
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

int func_376(int iParam0, var uParam1)//Position - 0xB801
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
			{
				if (!VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, 1);
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

void func_377()//Position - 0xB860
{
	SYSTEM::WAIT(0);
}

void func_378(struct<21> Param0)//Position - 0xB86D
{
	func_381(func_382(Param0), Param0);
	func_380(0, 4294967295, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 23);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_108, 97);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_379())
	{
		func_364();
	}
	MISC::SET_BIT(&(Global_252F9E.f_EA3), 0);
	GRAPHICS::_0x35FB78DC42B7BD21(&(Global_252F9E.f_EA3), 1);
}

int func_379()//Position - 0xB8C5
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
		if (func_373())
		{
			return 0;
		}
		if (func_371(155))
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

int func_380(int iParam0, int iParam1, bool bParam2)//Position - 0xB91E
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_365();
			}
			else
			{
				return 0;
			}
		}
		if (!func_358())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_365();
					}
					else
					{
						return 0;
					}
				}
				if (func_373())
				{
					if (!bParam2)
					{
						func_365();
					}
					else
					{
						return 0;
					}
				}
				if (func_371(155))
				{
					if (!bParam2)
					{
						func_365();
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
					func_365();
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
				func_365();
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
			func_365();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_381(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)//Position - 0xBA33
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_365();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_10);
}

int func_382(int iParam0)//Position - 0xBA52
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

