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

void __EntryFunction__()
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
	iLocal_17 = -1;
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
	func_372(ScriptParam_296);
	while (true)
	{
		func_371();
		if (func_361() || !func_360(PLAYER::PLAYER_ID(), 0, 1))
		{
			func_358();
		}
		switch (func_357(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if (func_356() == 2)
				{
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 2;
				}
				else if (func_356() == 6)
				{
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 5;
				}
				break;
			
			case 2:
				if (func_356() == 2)
				{
					func_349();
					func_52();
				}
				else if (func_356() == 6)
				{
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 5;
				}
				if (((func_49(PLAYER::PLAYER_ID(), 1) || func_46(PLAYER::PLAYER_ID())) || MISC::IS_BIT_SET(iLocal_111, 8)) || MISC::IS_BIT_SET(iLocal_111, 16))
				{
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
				}
				break;
			
			case 5:
				func_45(&(Local_103.f_19));
				if (func_44(&(Local_103.f_19)))
				{
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
				}
				break;
			
			case 3:
				vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_1 = 6;
			
			case 6:
				func_358();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_356())
			{
				case 0:
					func_43(&(Local_103.f_17), 0, 0);
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

int func_1()
{
	if (func_2())
	{
		return 1;
	}
	return 0;
}

bool func_2()
{
	return MISC::IS_BIT_SET(Local_103, 6);
}

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_103.f_2)
		{
			case 0:
				if (!MISC::IS_BIT_SET(Local_103, 10))
				{
					if (func_36(&(Local_103.f_17), 300000, 0))
					{
						MISC::SET_BIT(&Local_103, 10);
					}
				}
				if (!MISC::IS_BIT_SET(Local_103, 10))
				{
					if (MISC::IS_BIT_SET(Local_103, 0))
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
					MISC::CLEAR_BIT(&Local_103, 13);
					func_43(&(Local_103.f_21), 0, 0);
					Local_103.f_2 = 2;
				}
				break;
			
			case 2:
				if (MISC::IS_BIT_SET(Local_103, 4))
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

void func_4(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_5(&(Local_103.f_9[0]));
			func_5(&(Local_103.f_12[0]));
			break;
	}
}

void func_5(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_6()
{
	if (Local_103.f_5 == 0)
	{
		if (!MISC::IS_BIT_SET(Local_103, 1))
		{
			iLocal_119 = 0;
			iLocal_120 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
			iLocal_106 = 0;
			Local_103.f_3 = -1;
			Local_103.f_4 = 0;
			MISC::SET_BIT(&Local_103, 1);
		}
		if (!MISC::IS_BIT_SET(Local_103, 2))
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

int func_7()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar3;
	
	iVar0 = func_33();
	iVar1 = func_32();
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
	{
		if (Local_103.f_15 == 0)
		{
			NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
			Local_103.f_15 = 1;
		}
		if (!MISC::IS_BIT_SET(Local_103, 13))
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
		if (MISC::IS_BIT_SET(Local_103, 13))
		{
			if (func_24(iVar1))
			{
				if (func_24(iVar0))
				{
					if (func_12(&vVar2, &fVar3))
					{
						if (func_11(&(Local_103.f_12[0]), iVar1, vVar2, fVar3, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0))
						{
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_103.f_12[0]), true);
							if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
							{
								DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_103.f_12[0]), "Not_Allow_As_Saved_Veh", 1);
							}
							Local_103.f_15 = 1;
						}
					}
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
		{
			if (Local_103.f_16 == 0)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				Local_103.f_16 = 1;
			}
			if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
			{
				if (func_24(iVar0))
				{
					if (func_9(Local_103.f_12[0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_12[0]))
						{
							if (func_8(&(Local_103.f_9[0]), Local_103.f_12[0], 26, iVar0, -1, 1, 1, 1))
							{
								ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(NETWORK::NET_TO_PED(Local_103.f_9[0]), true);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1, 0);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_103.f_9[0]), true);
								PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_103.f_9[0]), Global_1574804);
								ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1, 0);
								ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_103.f_9[0]), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
								Local_103.f_16 = 1;
							}
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]) || !NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
	{
		return 0;
	}
	return 1;
}

int func_8(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		return 0;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(iParam1), 0))
	{
		return 0;
	}
	*uParam0 = NETWORK::PED_TO_NET(PED::CREATE_PED_INSIDE_VEHICLE(NETWORK::NET_TO_VEH(iParam1), iParam2, iParam3, iParam4, iParam6, bParam5));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_PED(*uParam0), bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(NETWORK::NET_TO_PED(*uParam0)))
		{
			if (bParam5)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
			}
		}
		return 1;
	}
	return 0;
}

int func_9(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_10(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_10(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, 0))
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

int func_11(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	
	if (!STREAMING::IS_MODEL_VALID(iParam1))
	{
		return 0;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return 0;
	}
	fVar0 = 1.5f;
	if (iParam1 == joaat("bombushka"))
	{
		fVar0 = 20f;
	}
	if (bParam9)
	{
		MISC::CLEAR_AREA_OF_VEHICLES(vParam2, fVar0, 0, 0, 0, 0, false, 0);
	}
	iVar1 = VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam3, bParam5, bParam4, bParam12);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(iVar1);
		Global_2519572.f_6112 = iVar1;
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam13)
			{
				NETWORK::_NETWORK_SET_ENTITY_VISIBLE_TO_NETWORK(iVar1, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(iVar1, bParam8);
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar1))
			{
				if (bParam6)
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 1);
				}
				else
				{
					NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, 0);
				}
				if (bParam11)
				{
					NETWORK::_SET_NETWORK_ID_SYNC_TO_PLAYER(*uParam0, PLAYER::PLAYER_ID(), 1);
				}
			}
			VEHICLE::SET_VEHICLE_IS_STOLEN(iVar1, bParam7);
			VEHICLE::_0xB2E0C0D6922D31F2(iVar1, 1);
			if (bParam10)
			{
				VEHICLE::_0xFC40CBF7B90CA77C(iVar1);
				VEHICLE::SET_VEHICLE_DOOR_CONTROL(iVar1, 5, 5, 1f);
			}
			return 1;
		}
	}
	return 0;
}

int func_12(var uParam0, var uParam1)
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
			if (MISC::IS_BIT_SET(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1232.842f, -1095.003f, 2.2331f };
				vVar1 = { -1226.248f, -1089.819f, 10.1513f };
				vVar2 = { func_22(0, 0) };
				fVar3 = 19.7853f;
			}
			break;
		
		case 1:
			if (MISC::IS_BIT_SET(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -622.0966f, 250.3288f, 75.7075f };
				vVar1 = { -614.8635f, 255.2288f, 88.7755f };
				vVar2 = { func_22(0, 1) };
				fVar3 = 266.4686f;
			}
			break;
		
		case 2:
			if (MISC::IS_BIT_SET(Local_103.f_4, iLocal_120))
			{
				vVar0 = { 794.4784f, -2034.339f, 25.2469f };
				vVar1 = { 798.8026f, -2026.004f, 33.2793f };
				vVar2 = { func_22(0, 2) };
				fVar3 = 355.9428f;
			}
			break;
		
		case 3:
			if (MISC::IS_BIT_SET(Local_103.f_4, iLocal_120))
			{
				vVar0 = { -1623.919f, 1249.831f, 135.2495f };
				vVar1 = { -1621.554f, 1257.98f, 145.2376f };
				vVar2 = { func_22(0, 3) };
				fVar3 = 353.7463f;
			}
			break;
		
		case 4:
			if (MISC::IS_BIT_SET(Local_103.f_4, iLocal_120))
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
			if (Local_103.f_3 == -1)
			{
				Local_103.f_3 = NETWORK::NETWORK_ADD_ENTITY_AREA(vVar0, vVar1);
			}
			else if (NETWORK::_0xE64A3CA08DFA37A9(Local_103.f_3))
			{
				if (NETWORK::_0x4DF7CFFF471A7FB1(Local_103.f_3))
				{
					if (!NETWORK::_0x4A2D4E8BF4265B0F(Local_103.f_3))
					{
						if (!func_13(vVar2, 1084227584, 1, 1, 1123024896, 0, -1, 0, 0))
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
							Local_103.f_3 = -1;
						}
					}
					else
					{
						iLocal_120++;
						NETWORK::NETWORK_REMOVE_ENTITY_AREA(Local_103.f_3);
						Local_103.f_3 = -1;
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

int func_13(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_360(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_18(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_360(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_14(iVar1) || !bParam8) && !Global_2423644[iVar1 /*406*/].f_255)
					{
						fVar2 = fParam4;
						if (fParam7 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam7;
								}
							}
						}
						if (!bParam5)
						{
							if ((iParam3 || (iParam3 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_18(iVar1), vParam0, true) <= (fVar2 + fParam1))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, vParam0, fParam1))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam6 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_18(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_14(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2423644[iParam0 /*406*/].f_241)
	{
		return 1;
	}
	return 0;
}

bool func_15(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_16(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1589291[iParam0 /*770*/].f_211 == 8;
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

int func_16(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_17();
	}
	if (Global_1312834[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1312730[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_17()
{
	return Global_1312736;
}

Vector3 func_18(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_21() && Global_1589291[iVar0 /*770*/].f_746) && !func_20(Global_1589291[iVar0 /*770*/].f_747))
	{
		return Global_1589291[iVar0 /*770*/].f_747;
	}
	return func_19(iParam0);
}

Vector3 func_19(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_20(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

var func_21()
{
	return Global_2447942.f_16;
}

Vector3 func_22(int iParam0, int iParam1)
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

bool func_23(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_25(int iParam0, bool bParam1, bool bParam2)
{
	return func_26(0, iParam0, 1, bParam1, bParam2);
}

int func_26(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Global_1374943, 0))
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
		if (!bParam4 && Global_1589291[PLAYER::PLAYER_ID() /*770*/] != 3)
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

int func_27(int iParam0)
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

int func_28(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1374943.f_1;
			break;
		
		case 1:
			return Global_1374943.f_2;
			break;
		
		case 2:
			return Global_1374943.f_3;
			break;
	}
	return 0;
}

int func_29(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2423644[iVar0 /*406*/].f_205;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2423644[iVar0 /*406*/].f_206;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2423644[iVar0 /*406*/].f_207;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_30(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1374951;
			break;
		
		case 1:
			return Global_1374952;
			break;
		
		case 2:
			return Global_1374953;
			break;
	}
	return 0;
}

bool func_31(int iParam0, bool bParam1, bool bParam2)
{
	return func_26(1, iParam0, 1, bParam1, bParam2);
}

int func_32()
{
	return joaat("cavalcade");
}

int func_33()
{
	return joaat("a_m_y_business_03");
}

int func_34()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	int iVar5;
	
	if (MISC::IS_BIT_SET(Local_103, 1))
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
				if (func_360(iVar0, 1, 1))
				{
					iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
					if (MISC::IS_BIT_SET(iLocal_111, 1))
					{
						vVar2 = { func_22(Local_103.f_5, iLocal_119) };
						vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar1, 0) };
						fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, vVar3, true);
						if (fVar4 < 300f)
						{
							MISC::CLEAR_BIT(&iLocal_111, 1);
						}
					}
				}
			}
			iLocal_106++;
			if (iLocal_106 == vLocal_108.x)
			{
				if (MISC::IS_BIT_SET(iLocal_111, 1))
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

int func_35()
{
	return 0;
}

int func_36(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_43(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
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

void func_37()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_103.f_6)
		{
			case 0:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
				{
					Local_103.f_6 = 1;
				}
				break;
			
			case 1:
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
				{
					if (!func_38(Local_103.f_9[0]))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
						{
							if (func_9(Local_103.f_12[0]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_12[0])))
								{
									if (MISC::IS_BIT_SET(Local_103, 7))
									{
										MISC::SET_BIT(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (MISC::IS_BIT_SET(Local_103, 14))
									{
										MISC::SET_BIT(&Local_103, 9);
										Local_103.f_6 = 2;
									}
									else if (MISC::IS_BIT_SET(Local_103, 19))
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
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
						{
							if (!func_9(Local_103.f_12[0]))
							{
								Local_103.f_6 = 3;
							}
							else if (MISC::IS_BIT_SET(Local_103, 19))
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

int func_38(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_39()
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
			MISC::CLEAR_BIT(&iLocal_111, 0);
			MISC::SET_BIT(&iLocal_111, 5);
			MISC::CLEAR_BIT(&Local_103, 5);
			MISC::CLEAR_BIT(&Local_103, 17);
			MISC::CLEAR_BIT(&iLocal_111, 14);
			MISC::CLEAR_BIT(&iLocal_111, 19);
			if (!MISC::IS_BIT_SET(Local_103, 16))
			{
				if (MISC::IS_BIT_SET(Local_103, 18))
				{
					if (!MISC::IS_BIT_SET(Local_103, 4))
					{
						MISC::SET_BIT(&Local_103, 16);
					}
				}
			}
			if (func_42(&(Local_103.f_21)))
			{
				if (!MISC::IS_BIT_SET(Local_103, 12))
				{
					if (func_36(&(Local_103.f_21), 360000, 0))
					{
						MISC::SET_BIT(&Local_103, 12);
					}
					if (!MISC::IS_BIT_SET(Local_103, 15))
					{
						if (func_36(&(Local_103.f_21), 240000, 0))
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
			if (MISC::IS_BIT_SET(iLocal_111, 5))
			{
				if (vLocal_108[iVar0 /*3*/].f_2 < 7)
				{
					MISC::CLEAR_BIT(&iLocal_111, 5);
				}
			}
			if (!MISC::IS_BIT_SET(Local_103, 0))
			{
				if (MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 0))
				{
					iLocal_118++;
				}
			}
			else if (MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 2))
			{
				if (!MISC::IS_BIT_SET(Local_103, 17))
				{
					if (!MISC::IS_BIT_SET(Local_103.f_7, iVar2))
					{
						if (vLocal_108[iVar0 /*3*/].f_2 > 4)
						{
							MISC::SET_BIT(&(Local_103.f_7), iVar2);
							MISC::SET_BIT(&Local_103, 17);
						}
					}
				}
				if (!MISC::IS_BIT_SET(Local_103, 5))
				{
					MISC::SET_BIT(&Local_103, 5);
				}
				if (!MISC::IS_BIT_SET(Local_103, 4))
				{
					if (MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 1))
					{
						Local_103.f_8 = iVar3;
						MISC::SET_BIT(&Local_103, 4);
						MISC::CLEAR_BIT(&iLocal_111, 15);
						MISC::CLEAR_BIT(&Local_103, 18);
					}
				}
				if (!MISC::IS_BIT_SET(Local_103, 4))
				{
					if (!MISC::IS_BIT_SET(Local_103, 18))
					{
						if (MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 7))
						{
							MISC::SET_BIT(&Local_103, 18);
						}
					}
				}
				if (MISC::IS_BIT_SET(iLocal_111, 9))
				{
					if (MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 5))
					{
						MISC::CLEAR_BIT(&iLocal_111, 9);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_111, 14))
				{
					if (MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 6))
					{
						MISC::SET_BIT(&iLocal_111, 14);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_111, 20))
				{
					if (MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 8))
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
			if (!MISC::IS_BIT_SET(Local_103, 16))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
				{
					if (func_38(Local_103.f_9[0]))
					{
						if (!MISC::IS_BIT_SET(Local_103, 4))
						{
							if (MISC::IS_BIT_SET(iLocal_111, 15))
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
			if (!MISC::IS_BIT_SET(Local_103, 0))
			{
				if (iLocal_118 >= 1)
				{
					MISC::SET_BIT(&Local_103, 0);
				}
			}
			if (!MISC::IS_BIT_SET(Local_103, 14))
			{
				if (MISC::IS_BIT_SET(iLocal_111, 14))
				{
					MISC::SET_BIT(&Local_103, 14);
				}
			}
			if (!MISC::IS_BIT_SET(Local_103, 19))
			{
				if (MISC::IS_BIT_SET(iLocal_111, 20))
				{
					MISC::SET_BIT(&Local_103, 19);
				}
			}
			if (!MISC::IS_BIT_SET(Local_103, 6))
			{
				if (MISC::IS_BIT_SET(iLocal_111, 5))
				{
					if (Local_103.f_2 > 1 && Local_103.f_2 <= 7)
					{
						MISC::SET_BIT(&Local_103, 6);
					}
					else if (MISC::IS_BIT_SET(Local_103, 10))
					{
						MISC::SET_BIT(&Local_103, 6);
					}
				}
			}
			if (MISC::IS_BIT_SET(Local_103, 17))
			{
				MISC::CLEAR_BIT(&Local_103, 17);
				MISC::CLEAR_BIT(&Local_103, 15);
				MISC::CLEAR_BIT(&Local_103, 12);
				func_40(&(Local_103.f_21));
				func_43(&(Local_103.f_21), 0, 0);
			}
			if (!MISC::IS_BIT_SET(Local_103, 11))
			{
				if (MISC::IS_BIT_SET(Local_103, 12))
				{
					if (MISC::IS_BIT_SET(iLocal_111, 9))
					{
						MISC::SET_BIT(&Local_103, 11);
					}
				}
			}
		}
	}
}

void func_40(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_41(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!MISC::IS_BIT_SET(Local_103, 7))
		{
			if (MISC::IS_BIT_SET(vLocal_108[iParam0 /*3*/], 3))
			{
				MISC::SET_BIT(&Local_103, 7);
			}
		}
	}
}

bool func_42(var uParam0)
{
	return uParam0->f_1;
}

void func_43(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = NETWORK::GET_NETWORK_TIME();
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

int func_44(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_45(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_43(uParam0, 0, 0);
		}
	}
}

int func_46(int iParam0)
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

bool func_47(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_204, iParam1);
}

int func_48(int iParam0)
{
	if (Global_2423644[iParam0 /*406*/].f_204 == 0)
	{
		return 0;
	}
	return 1;
}

int func_49(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_50(iParam0))
		{
			return 1;
		}
	}
	if (Global_1589291[iParam0 /*770*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_50(int iParam0)
{
	return func_51(iParam0);
}

bool func_51(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_13.f_1, 0);
}

void func_52()
{
	func_340();
	func_337();
	if (MISC::IS_BIT_SET(Local_103, 10))
	{
		if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
		}
	}
	if (MISC::IS_BIT_SET(Local_103, 4))
	{
		if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
		{
			vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
		}
	}
	if (MISC::IS_BIT_SET(Local_103, 16))
	{
		if (!MISC::IS_BIT_SET(Local_103, 4))
		{
			if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
			{
				vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				Local_107.f_2 = 1974654884;
				func_335(Local_107, func_336(1));
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_103, 11))
	{
		if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 <= 6)
		{
			vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			Local_107.f_2 = 1974654884;
			func_335(Local_107, func_336(1));
		}
	}
	if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 0)
	{
		if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			if ((((func_49(PLAYER::PLAYER_ID(), 1) || func_334()) || func_333() > 0) || func_47(PLAYER::PLAYER_ID(), 1)) || func_332())
			{
				vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			}
		}
	}
	if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 0)
	{
		if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
		{
			if (func_330(PLAYER::PLAYER_ID()))
			{
				vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
			}
		}
	}
	switch (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2)
	{
		case 0:
			if (MISC::IS_BIT_SET(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 0))
			{
				if (MISC::IS_BIT_SET(Local_103, 3))
				{
					if (!MISC::IS_BIT_SET(Local_103, 15))
					{
						MISC::SET_BIT(&(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 2);
						func_329(11, 1);
						vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 3;
					}
					else
					{
						vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
						MISC::SET_BIT(&iLocal_111, 16);
					}
				}
			}
			break;
		
		case 3:
			if (func_328(Local_103.f_5))
			{
				func_327(Local_103.f_5);
				vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 4;
			}
			break;
		
		case 4:
			if (!func_326())
			{
				if (func_216())
				{
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
					func_214(88, 1);
					func_213();
				}
				else if (MISC::IS_BIT_SET(iLocal_111, 8))
				{
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				}
			}
			else if (func_204())
			{
				vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 5;
			}
			else
			{
				if (MISC::IS_BIT_SET(iLocal_111, 8))
				{
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
				}
				if (MISC::IS_BIT_SET(Local_103, 15))
				{
					func_191(12, 116);
					vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 6;
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
			vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
			MISC::CLEAR_BIT(&iLocal_111, 3);
			MISC::CLEAR_BIT(&iLocal_111, 4);
			iLocal_110 = 0;
			func_191(12, 116);
			if (HUD::DOES_BLIP_EXIST(Global_1653096))
			{
				HUD::REMOVE_BLIP(&Global_1653096);
			}
			func_60(&Local_123);
			func_53();
			func_329(11, 0);
			vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 7;
			break;
		
		case 7:
			if (Local_103.f_2 == 0 && !MISC::IS_BIT_SET(Local_103, 10))
			{
				vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 = 0;
			}
			break;
	}
}

void func_53()
{
	if (!func_59())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_54();
}

void func_54()
{
	func_56();
	func_55(0);
}

void func_55(bool bParam0)
{
	bool bVar0;
	
	bVar0 = NETWORK::NETWORK_IS_GAME_IN_PROGRESS();
	Global_1312576 = 20;
	StringCopy(&(Global_1312576.f_1), "", 32);
	Global_1312576.f_9 = 0;
	if (bVar0)
	{
		Global_1312576.f_10 = NETWORK::GET_NETWORK_TIME();
		Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
	}
	StringCopy(&(Global_1312576.f_12), "", 16);
	StringCopy(&(Global_1312576.f_16), "", 64);
	StringCopy(&(Global_1312576.f_32), "", 64);
	Global_1312576.f_52 = 0;
	Global_1312576.f_53 = 0;
	Global_1312576.f_54 = 0;
	Global_1312576.f_55 = -1;
	Global_1312576.f_56 = 0;
	Global_1312576.f_59 = 0;
	if (bParam0)
	{
		return;
	}
}

void func_56()
{
	if (!func_58())
	{
	}
	if (func_59())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_57();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_57()
{
	switch (Global_1312576)
	{
		case 20:
			return;
		
		case 0:
			return;
		
		case 1:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			return;
		
		case 2:
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_52);
			HUD::ADD_TEXT_COMPONENT_INTEGER(Global_1312576.f_53);
			return;
		
		case 3:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 4:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 5:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 6:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 7:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 8:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 9:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 10:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		case 12:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 13:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 11:
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&(Global_1312576.f_16));
			return;
		
		case 14:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 15:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_57);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_32));
			return;
		
		case 17:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			return;
		
		case 16:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			return;
		
		case 19:
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_16));
			return;
		
		case 18:
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_16));
			HUD::_SET_NOTIFICATION_COLOR_NEXT(Global_1312576.f_56);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_1312576.f_48));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_1312576.f_32));
			return;
		
		default:
	}
}

int func_58()
{
	if (!func_59())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_57();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_59()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
}

void func_60(int iParam0)
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
				HUD::_SET_PED_ENEMY_AI_BLIP(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_61()
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
			if (HUD::DOES_BLIP_EXIST(Global_1653096))
			{
				if (func_189() || func_188())
				{
					HUD::SET_BLIP_DISPLAY(Global_1653096, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Global_1653096, 4);
				}
			}
			else
			{
				Global_1653096 = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_PED(Local_103.f_9[0]));
				HUD::SET_BLIP_COLOUR(Global_1653096, 1);
				HUD::SET_BLIP_SCALE(Global_1653096, 0f);
			}
			if (HUD::DOES_BLIP_EXIST(Local_123))
			{
				if (func_189() || func_188())
				{
					HUD::SET_BLIP_DISPLAY(Local_123, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Local_123, 4);
				}
				if (!MISC::IS_BIT_SET(iLocal_111, 10))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_123, "FM_GDM_BLP");
					MISC::SET_BIT(&iLocal_111, 10);
				}
			}
			if (HUD::DOES_BLIP_EXIST(Local_123.f_1))
			{
				if (func_189() || func_188())
				{
					HUD::SET_BLIP_DISPLAY(Local_123.f_1, 0);
				}
				else
				{
					HUD::SET_BLIP_DISPLAY(Local_123.f_1, 4);
				}
				if (!MISC::IS_BIT_SET(iLocal_111, 12))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_123.f_1, "FM_GDM_BLP");
					MISC::SET_BIT(&iLocal_111, 12);
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_111, 6))
			{
				if (!MISC::IS_BIT_SET(Global_2359302, 7) && !func_176(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						if (!func_189())
						{
							func_170("FM_GDM_KIL", 0);
						}
						MISC::SET_BIT(&iLocal_111, 6);
					}
				}
			}
			else if (MISC::IS_BIT_SET(Global_2359302, 7))
			{
				func_53();
				MISC::CLEAR_BIT(&iLocal_111, 6);
			}
			else if (func_169())
			{
				func_53();
				MISC::CLEAR_BIT(&iLocal_111, 6);
			}
			else if (func_176(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
			{
				func_53();
				MISC::CLEAR_BIT(&iLocal_111, 6);
			}
		}
		else if (MISC::IS_BIT_SET(iLocal_111, 6))
		{
			func_53();
			MISC::CLEAR_BIT(&iLocal_111, 6);
		}
		if (!MISC::IS_BIT_SET(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 1))
		{
			iVar1 = NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_103.f_9[0], &uVar0);
			if (iVar1 == PLAYER::PLAYER_ID())
			{
				MISC::SET_BIT(&(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 1);
				iVar2 = func_166(func_168(PLAYER::PLAYER_ID(), 1), 1);
				if (iVar2 > 100)
				{
					iVar2 = 100;
				}
				iVar3 = iVar2 * 20;
				iVar3 = SYSTEM::ROUND((Global_262145.f_4228 * IntToFloat(iVar3)));
				func_123(2, "XPT_KAIE", -1859646258, 2131309714, iVar3, 1, -1, 0);
				if (Global_262145.f_2422 != 0f)
				{
					iVar4 = SYSTEM::ROUND(Global_262145.f_2422);
				}
				else
				{
					iVar4 = 2000;
				}
				if (Global_262145.f_2418 != 0f)
				{
					iVar5 = SYSTEM::ROUND(Global_262145.f_2418);
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
				iVar8 = func_122(iVar8, 1);
				if (iVar8 > iVar5)
				{
					iVar8 = iVar5;
				}
				func_74(&iVar8, 1);
				if (func_73())
				{
					if (iVar8 > 0)
					{
						func_64(-352356931, iVar8, &iVar9, 0, 0, 0);
						Global_4262188[iVar9 /*80*/].f_8 = -1146479277;
					}
				}
				else
				{
					NETCASH::NETWORK_EARN_FROM_AI_TARGET_KILL(iVar8, -1146479277);
				}
				func_63(5, iVar8);
			}
			else if (iVar1 != func_62())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (!MISC::IS_BIT_SET(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 7))
					{
						if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							MISC::SET_BIT(&(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 7);
						}
					}
				}
			}
		}
	}
}

int func_62()
{
	return -1;
}

void func_63(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22851 == 0 || Global_262145.f_22851 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_22851 == 1)
			{
				Global_2519572.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2519572.f_273 = iParam1;
				Global_2519572.f_274 = 0;
			}
		}
	}
}

void func_64(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_73())
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
		case -1645229221:
		case -585718395:
		case -1359375127:
		case 454359403:
		case -982394051:
		case 1643659499:
		case -2072289654:
		case 650665123:
		case 1654961868:
		case -876847842:
		case 68030260:
		case -2122299283:
		case 366672791:
		case 283351220:
		case 291576838:
		case 1182673174:
		case -516219046:
		case 1036455748:
		case 277665518:
		case 2043854386:
		case 1839532116:
		case 1022400740:
		case 1940862352:
		case -1389227906:
		case 711665950:
		case 1704445500:
		case 1515774909:
		case 1173654533:
		case -899802304:
		case -663944335:
		case 1208553146:
		case -613221010:
		case -671062876:
		case -407201236:
		case -754024203:
		case -1885444887:
		case 1931729587:
		case 1064954035:
		case -180141073:
		case 2131324797:
		case 1612072658:
		case -517447402:
		case 1948102096:
		case 1108628223:
		case -1834046564:
		case -1239008812:
		case -222363842:
		case -1276678868:
		case 1564537328:
		case -96593501:
		case 742499889:
		case 2050093329:
		case -1752488069:
		case 634375935:
		case 1850983186:
		case 763367758:
		case 1941570214:
		case 665109499:
		case -1330755006:
		case 1976384368:
		case 268924934:
		case 1869490922:
		case -336803850:
		case -1412692765:
		case 618167454:
		case 980623936:
		case 437291904:
		case -135813048:
		case -930104477:
		case -1420909320:
		case -1733398043:
		case -1892760262:
		case -1545737048:
		case 2039302543:
		case 402505853:
		case -1143510182:
		case 1678112166:
			if (iParam1 > 0)
			{
				func_65(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case -31156877:
		case -1027218631:
		case -1398318418:
		case 1652884147:
		case -57868256:
		case -1216489292:
		case -46622315:
		case -352356931:
		case -990286235:
		case 563463121:
		case 1734805203:
		case 941287179:
		case -1186079845:
		case -1985150258:
		case -1127021384:
		case -109201286:
		case 312105838:
		case 1982688246:
		case -661030418:
		case 1301046174:
		case -1586170317:
		case 393059668:
		case 23796958:
		case -1077156170:
		case 1780666425:
		case -2043695058:
		case -1922554349:
		case 1287308202:
		case 691372038:
		case 1480707108:
		case 1512499951:
		case 562283735:
		case -154732333:
		case -1362660491:
		case 645708827:
		case 767907967:
		case -1970151306:
		case 718859568:
		case -1955564771:
		case 892388724:
		case -1426920838:
		case 1349151477:
		case 1620609399:
		case 1961641934:
		case 210955503:
		case -59668082:
		case 1736933716:
		case -1468524125:
		case 111573502:
		case 1525644423:
		case 968073639:
		case 1577781788:
		case -934465332:
		case -1194253122:
		case -212607085:
		case -815546555:
		case 1048226110:
		case 569170531:
		case -856006867:
		case 848090538:
		case -47546905:
		case -293060240:
		case 463142405:
		case 1550217370:
		case -101307780:
		case -664597565:
		case 599804707:
		case -327918414:
		case 550898518:
		case 835976347:
		case 1347433368:
		case 1052472386:
		case -2130199671:
		case -1227654538:
		case 1864522104:
		case 215608230:
		case -876012764:
		case -722894325:
		case 1407278493:
		case -1579394494:
		case -27443911:
		case 1179783540:
		case 923419301:
		case -308826175:
		case 603298940:
		case -12619854:
		case -311112675:
		case 870439158:
		case -974288740:
		case -4138654:
		case -1180954122:
		case -1918051016:
		case 844330594:
		case 1934825517:
		case 1852024236:
		case 2099238988:
		case 1952643559:
		case -1172900789:
		case -2015399333:
		case -1574795641:
		case -961034881:
		case 1135468152:
		case 1265272476:
		case -634726636:
		case 696556762:
			func_65(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_65(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_73())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!unk_0x060D652F887827B8(func_17()) || unk_0xEBA8BD5AE6FF01CA())
		{
			Global_4262738 = 1;
			return 0;
		}
		if (Global_2458855)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262739 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4262188[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || unk_0x4EB807D82D2F9433(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || unk_0xCEA9F48EB9CF0CC7(iVar4))
		{
			*uParam0 = func_72(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4262188[*uParam0 /*80*/].f_69 = 1;
					Global_4262188[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262725 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262737 = 1;
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262740 = iParam4;
			Global_4262742 = iParam3;
			Global_4262743 = 1;
			Global_4262741 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_71(1, iParam4);
			Global_4262737 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_66(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_66(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2423644[PLAYER::PLAYER_ID() /*406*/].f_118.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_67(iParam0);
	}
}

void func_67(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_73())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_70(iParam0))
		{
			if (!bVar0)
			{
				unk_0xC7150D5EF5AFC7C1();
			}
		}
		else if (!bVar0)
		{
			unk_0xA48F55B05F42FD2C(Global_4262188[iParam0 /*80*/]);
		}
		func_68(&(Global_4262188[iParam0 /*80*/]));
	}
}

void func_68(var uParam0)
{
	*uParam0 = 0;
	*uParam0 = 2147483647;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = -1593119440;
	uParam0->f_4 = -2085313189;
	uParam0->f_5 = 0;
	uParam0->f_6 = 1227573907;
	uParam0->f_7 = -1161833819;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	func_69(&(uParam0->f_8.f_3));
	func_69(&(uParam0->f_8.f_16));
	StringCopy(&(uParam0->f_8.f_29), "", 32);
	StringCopy(&(uParam0->f_8.f_37), "", 24);
	StringCopy(&(uParam0->f_8.f_43), "", 16);
	StringCopy(&(uParam0->f_8.f_47), "", 16);
	uParam0->f_8.f_51 = 0;
	uParam0->f_8.f_52 = 0;
	uParam0->f_8.f_53 = 0;
	uParam0->f_8.f_54 = 0;
	uParam0->f_8.f_55 = 0;
	uParam0->f_8.f_56 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 0;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_74 = 0;
	uParam0->f_73 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	uParam0->f_77 = 0;
	uParam0->f_79 = 0;
}

void func_69(var uParam0)
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
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_70(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4262188[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_71(int iParam0, int iParam1)
{
	Global_2460027 = iParam1;
	Global_2460026 = iParam0;
}

int func_72(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4262188[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_73())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4262188[iVar0 /*80*/].f_2 = 1;
			Global_4262188[iVar0 /*80*/].f_1 = iParam5;
			Global_4262188[iVar0 /*80*/].f_3 = uParam1;
			Global_4262188[iVar0 /*80*/].f_4 = iParam2;
			Global_4262188[iVar0 /*80*/].f_7 = iParam3;
			Global_4262188[iVar0 /*80*/].f_5 = 0;
			Global_4262188[iVar0 /*80*/] = iParam0;
			Global_4262188[iVar0 /*80*/].f_6 = iParam4;
			Global_4262188[iVar0 /*80*/].f_72 = uParam8;
			Global_4262188[iVar0 /*80*/].f_71 = iParam7;
			Global_4262188[iVar0 /*80*/].f_74 = iParam9;
			Global_4262188[iVar0 /*80*/].f_73 = 0;
			Global_4262188[iVar0 /*80*/].f_75 = MISC::GET_FRAME_COUNT();
			Global_4262188[iVar0 /*80*/].f_79 = 0;
			Global_4262725 = 0;
			if (bParam6)
			{
				Global_4262188[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_73()
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0xC9D803F7D7E10861();
	}
	return 0;
}

void func_74(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_121())
		{
			if (func_120(0))
			{
				if (!func_116(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_115()))
					{
						if (func_114() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_114());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_112(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_80("GB_BCUT_TICK1", func_115(), iVar0, 0, 0, 1, 1);
						}
						func_79(20);
						func_75(func_115(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_75(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_360(iParam0, 0, 1))
	{
		Var0 = 1838378015;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_78(iParam0);
		func_77(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_0xA40CC53DF8E50837(1, &Var0, 8, func_76(iParam0));
	}
}

var func_76(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_77(var uParam0, var uParam1)
{
	*uParam0 = Global_1641937.f_9;
	*uParam1 = Global_1641937.f_10;
}

var func_78(int iParam0)
{
	return Global_1624079[iParam0 /*558*/].f_491;
}

void func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2519572.f_4882.f_7[iVar0]), iVar1);
}

int func_80(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam5)
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_87(iParam1, -2, 1, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_85(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_81(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_81(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_84() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_82(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1661957.f_5[iVar0 /*53*/] = iParam0;
		Global_1661957.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1661957.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1661957.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1661957.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1661957.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1661957.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1661957.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_82(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1661957 - 1))
	{
		if (iParam0 > Global_1661957.f_5[iVar0 /*53*/].f_1)
		{
			func_83(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1661957++;
	if (Global_1661957 > 5)
	{
		Global_1661957 = 5;
		return Global_1661957;
	}
	return (Global_1661957 - 1);
}

void func_83(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1661957.f_5[iVar0 /*53*/] = { Global_1661957.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_84()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

var func_85(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_86(&cVar0);
}

var func_86(char[4] cParam0)
{
	return cParam0;
}

int func_87(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_330(iParam0))
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
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4456448.f_121853[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_330(PLAYER::PLAYER_ID()) || (func_111() && func_110())) && !MISC::IS_BIT_SET(Global_2519572.f_4576, 31))
	{
		iVar1 = func_109();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_360(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_121853[iParam1] != -1)
							{
								return func_107(iParam1, iParam0, 0);
							}
							else
							{
								return func_95(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_95(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_121853[iParam1] != -1)
				{
					return func_107(iParam1, iParam0, 0);
				}
				else
				{
					return func_88(0, -1, 0);
				}
			}
			else
			{
				return func_88(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_121853[iParam1] != -1)
		{
			return func_107(iParam1, iParam0, 0);
		}
		else
		{
			return func_95(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_95(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_88(bool bParam0, int iParam1, bool bParam2)
{
	return func_89(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_89(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_94(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_93(1);
				}
				else
				{
					return func_93(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_90(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_90(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_93(1);
	}
	return func_93(0);
}

int func_90(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_92(iParam0, iParam1, iParam3);
	if (func_91(Global_4456448.f_126776, 1))
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

int func_91(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4456448.f_148478 == 65)
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
		if (iParam0 == Global_262145.f_8408[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_92(int iParam0, int iParam1, int iParam2)
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
			if (!func_94(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_93(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_94(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_50, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_95(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1589291[PLAYER::PLAYER_ID() /*770*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1589291[iVar2 /*770*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_104(1))
			{
				iVar3 = func_100(iParam0);
				if (!iVar3 == -1)
				{
					return func_98(iVar3);
				}
			}
			if ((func_97(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_94(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_93(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_96(1);
			}
			else
			{
				return func_89(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574355 || Global_1574346) || Global_1589291[iParam0 /*770*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574355 == 1 && Global_1574365 == 0))
			{
				return func_93(1);
			}
			else
			{
				return func_89(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574350 && Global_1573884.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_100(iParam0);
	if (!iVar4 == -1)
	{
		return func_98(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_96(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_97(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
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
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_98(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_99(iParam0);
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

var func_99(int iParam0)
{
	return Global_2417501.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_100(int iParam0)
{
	if (!iParam0 == func_62())
	{
		if (func_102(iParam0, 1))
		{
			return Global_2417501.f_2071.f_11[func_101(iParam0)];
		}
	}
	return -1;
}

int func_101(int iParam0)
{
	if (iParam0 != func_62())
	{
		return Global_1624079[iParam0 /*558*/].f_11;
	}
	return func_62();
}

bool func_102(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_103(iParam0))
		{
			return 0;
		}
	}
	return Global_1624079[iParam0 /*558*/].f_11 != func_62();
}

int func_103(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_62())
		{
			return Global_1624079[iParam0 /*558*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_104(int iParam0)
{
	if ((func_106() || func_105()) || (func_21() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_105()
{
	return Global_2447942.f_15;
}

var func_106()
{
	return Global_2447942.f_14;
}

int func_107(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_104(1))
	{
		iVar2 = func_100(iParam1);
		if (!iVar2 == -1)
		{
			return func_98(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_98[iParam0 /*10231*/].f_5361[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_62())
	{
		if (Global_4456448.f_121853[iParam0] != -1 && Global_4456448.f_121853[iParam0] <= 4)
		{
			if (Global_4456448.f_121853[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_121853[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_121853[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_121853[iParam0] == 4)
			{
				if (MISC::IS_BIT_SET(Global_4456448.f_15, 29))
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
				iVar0 = Global_4456448.f_121853[iParam0];
			}
		}
		else
		{
			iVar0 = func_89(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_108(iParam0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_24, 29))
		{
			iVar0 = 0;
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_108(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_148521;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_148522;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_148523;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_148524;
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

var func_109()
{
	return Global_2359302.f_2;
}

bool func_110()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_111()
{
	return MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_18, 14);
}

void func_112(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_113(1);
	}
	else
	{
		iVar1 = func_113(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_113(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_11779;
}

int func_114()
{
	return Global_262145.f_11778;
}

int func_115()
{
	return Global_1624079[PLAYER::PLAYER_ID() /*558*/].f_11;
}

bool func_116(bool bParam0)
{
	return func_117(PLAYER::PLAYER_ID(), bParam0);
}

int func_117(int iParam0, bool bParam1)
{
	return func_118(iParam0, bParam1, 1);
}

int func_118(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_62())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_119(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1624079[iParam0 /*558*/].f_11;
	if (iVar0 != func_62() && Global_1624079[iVar0 /*558*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_119(int iParam0, int iParam1)
{
	if (iParam0 != func_62())
	{
		if (Global_1624079[iParam0 /*558*/].f_11 != func_62())
		{
			if (Global_1624079[iParam0 /*558*/].f_11 == iParam0 && Global_1624079[iParam0 /*558*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_120(bool bParam0)
{
	return func_102(PLAYER::PLAYER_ID(), bParam0);
}

bool func_121()
{
	return func_103(PLAYER::PLAYER_ID());
}

int func_122(int iParam0, int iParam1)
{
	float fVar0;
	
	switch (iParam1)
	{
		case 0:
			break;
		
		case 1:
			if (iParam0 > 0)
			{
				fVar0 = (SYSTEM::TO_FLOAT(iParam0) * Global_262145);
				iParam0 = SYSTEM::ROUND(fVar0);
			}
			break;
		
		default:
			break;
	}
	return iParam0;
}

var func_123(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_124(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_124(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_125(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_125(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_165(PLAYER::PLAYER_ID()) || func_164(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_9024 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_9024;
		}
	}
	else if (func_162() || func_158(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22143 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22143;
		}
	}
	else if (Global_262145.f_6026 > 10000)
	{
		iVar2 = 10000;
	}
	else
	{
		iVar2 = Global_262145.f_6026;
	}
	if (func_157(sParam2))
	{
	}
	if (func_156())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_154(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_153(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_151(0, &iVar1);
					break;
				
				case 3:
					func_151(1, &iVar1);
					break;
				
				case 1:
					func_148(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1676003)
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
			func_145(1164, iVar1, -1);
			if (iParam1 == 0)
			{
				func_136((func_144(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_2 != -1)
				{
					func_145(1165, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_130(iVar1);
				}
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_126((func_128(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_126((func_128(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_126(int iParam0)
{
	if (func_156())
	{
		Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_5 = iParam0;
		func_127(joaat("mpply_globalxp"), iParam0);
	}
}

void func_127(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_128(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_360(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_129(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_5;
			}
		}
		else
		{
			return func_129(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_129(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_130(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_135(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_133(func_134(&Var0));
			if (iVar1 == 0)
			{
				func_132(&Global_1373641, iParam0);
				func_131(joaat("mpply_crew_local_xp_0"), Global_1373641);
			}
			else if (iVar1 == 1)
			{
				func_132(&Global_1373642, iParam0);
				func_131(joaat("mpply_crew_local_xp_1"), Global_1373642);
			}
			else if (iVar1 == 2)
			{
				func_132(&Global_1373643, iParam0);
				func_131(joaat("mpply_crew_local_xp_2"), Global_1373643);
			}
			else if (iVar1 == 3)
			{
				func_132(&Global_1373644, iParam0);
				func_131(joaat("mpply_crew_local_xp_3"), Global_1373644);
			}
			else if (iVar1 == 4)
			{
				func_132(&Global_1373645, iParam0);
				func_131(joaat("mpply_crew_local_xp_4"), Global_1373645);
			}
		}
	}
}

void func_131(int iParam0, int iParam1)
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
			Global_1373636 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1373638 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1373638 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1373639 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1373640 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1373641 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1373642 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1373643 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1373644 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1373645 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1373646 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1373647 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1373648 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1373649 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1373650 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1373651 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1373652 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_132(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_133(int iParam0)
{
	if (iParam0 == Global_1373636)
	{
		return 0;
	}
	else if (iParam0 == Global_1373637)
	{
		return 1;
	}
	else if (iParam0 == Global_1373638)
	{
		return 2;
	}
	else if (iParam0 == Global_1373639)
	{
		return 3;
	}
	else if (iParam0 == Global_1373640)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_134(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2457627;
		}
	}
	return Global_2457627;
}

struct<13> func_135(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

void func_136(int iParam0, int iParam1, int iParam2)
{
	if (func_156())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8992 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1373762[func_143(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1373762[func_143(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_8991 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_142(PLAYER::PLAYER_ID()))
		{
			Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_1 = iParam0;
			Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_211.f_6 = func_166(iParam0, 1);
		}
		func_141(639, iParam0, -1, 1);
		func_140(640, func_166(iParam0, 1), -1, 1, 0);
		Global_1373762[func_143(-1)] = iParam0;
		func_137(7, 0);
	}
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_139(iParam0, iParam1))
	{
		iVar0 = func_138();
		Global_2457604[iVar0] = iParam0;
	}
}

int func_138()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2457604[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_139(int iParam0, var uParam1)
{
	if (Global_1312842)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1312854) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_140(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_143(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_141(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2530245[iParam0 /*3*/][func_143(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 787:
			Global_1373702[func_143(iParam2)] = iParam1;
			break;
		
		case 788:
			Global_1373708[func_143(iParam2)] = iParam1;
			break;
		
		case 789:
			Global_1373714[func_143(iParam2)] = iParam1;
			break;
		
		case 790:
			Global_1373720[func_143(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1373678[func_143(iParam2)] = iParam1;
			break;
		
		case 778:
			Global_1373684[func_143(iParam2)] = iParam1;
			break;
		
		case 779:
			Global_1373690[func_143(iParam2)] = iParam1;
			break;
		
		case 780:
			Global_1373696[func_143(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1373654[func_143(iParam2)] = iParam1;
			break;
		
		case 768:
			Global_1373660[func_143(iParam2)] = iParam1;
			break;
		
		case 769:
			Global_1373666[func_143(iParam2)] = iParam1;
			break;
		
		case 770:
			Global_1373672[func_143(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1373726[func_143(iParam2)] = iParam1;
			break;
		
		case 758:
			Global_1373732[func_143(iParam2)] = iParam1;
			break;
		
		case 759:
			Global_1373738[func_143(iParam2)] = iParam1;
			break;
		
		case 760:
			Global_1373744[func_143(iParam2)] = iParam1;
			break;
		
		case 1303:
			Global_1373750[func_143(iParam2)] = iParam1;
			break;
		
		case 7229:
			Global_1373756[func_143(iParam2)] = iParam1;
			break;
		
		case 639:
			Global_1373762[func_143(iParam2)] = iParam1;
			break;
		
		case 1278:
			Global_1373768[func_143(iParam2)] = iParam1;
			break;
		
		case 1876:
			Global_2559219[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 2267:
			Global_2559219[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 2925:
			Global_2559219[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3054:
			Global_2559219[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 7818:
			Global_2559326[func_143(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1373774[func_143(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1373780[func_143(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1373786[func_143(iParam2)] = iParam1;
			break;
		
		case 1236:
			Global_1373792[func_143(iParam2)] = iParam1;
			break;
		
		case 3049:
			Global_2559271[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3050:
			Global_2559271[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3051:
			Global_2559271[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3052:
			Global_2559271[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3053:
			Global_2559271[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2559329[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2559329[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2559329[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3635:
			Global_2559329[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3636:
			Global_2559329[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3637:
			Global_2559345[0 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3638:
			Global_2559345[1 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3639:
			Global_2559345[2 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3640:
			Global_2559345[3 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3641:
			Global_2559345[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3217:
			Global_2559271[5 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2559219[4 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3659:
			Global_2559361[func_143(iParam2)] = iParam1;
			break;
		
		case 3660:
			Global_2559370[func_143(iParam2)] = iParam1;
			break;
		
		case 3661:
			Global_2559364[func_143(iParam2)] = iParam1;
			break;
		
		case 3662:
			Global_2559373[func_143(iParam2)] = iParam1;
			break;
		
		case 3663:
			Global_2559367[func_143(iParam2)] = iParam1;
			break;
		
		case 3664:
			Global_2559376[func_143(iParam2)] = iParam1;
			break;
		
		case 3685:
			Global_2559379[func_143(iParam2)] = iParam1;
			break;
		
		case 3225:
			Global_2559271[6 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3226:
			Global_2559219[5 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3230:
			Global_2559271[7 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 3228:
			Global_2559219[6 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4015:
			Global_2559271[8 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4016:
			Global_2559219[7 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4018:
			Global_2559271[9 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4019:
			Global_2559219[8 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4021:
			Global_2559271[10 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4022:
			Global_2559219[9 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4024:
			Global_2559271[11 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 4025:
			Global_2559219[10 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6105:
			Global_2559271[12 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6106:
			Global_2559219[11 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6163:
			Global_2559271[13 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6164:
			Global_2559219[12 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6541:
			Global_2559271[14 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6542:
			Global_2559219[13 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6554:
			Global_2559271[15 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6555:
			Global_2559219[14 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6557:
			Global_2559271[16 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6558:
			Global_2559219[15 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6560:
			Global_2559271[17 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		case 6561:
			Global_2559219[16 /*3*/][func_143(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_142(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2436641.f_1, iParam0);
	}
	return 1;
}

int func_143(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2529958 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2529958 = 1;
		}
	}
	return iVar0;
}

int func_144(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1373762[func_143(-1)];
			}
			else if (func_142(iParam0))
			{
				return Global_1589291[iParam0 /*770*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1373762[func_143(-1)];
	}
	return 0;
}

void func_145(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_147(iParam0, func_143(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_146(iParam0))
	{
		func_140(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_141(iParam0, iVar0, iParam2, 1);
	}
}

int func_146(int iParam0)
{
	if (Global_1373635)
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
			case 7229:
			case 639:
			case 1278:
			case 764:
			case 765:
			case 766:
			case 1236:
			case 1876:
			case 2267:
			case 2925:
			case 3054:
			case 7818:
			case 3049:
			case 3050:
			case 3051:
			case 3052:
			case 3053:
			case 3228:
			case 3230:
			case 3632:
			case 3633:
			case 3634:
			case 3635:
			case 3636:
			case 3637:
			case 3638:
			case 3639:
			case 3640:
			case 3641:
			case 3223:
			case 3217:
			case 3659:
			case 3660:
			case 3661:
			case 3662:
			case 3663:
			case 3664:
			case 3685:
			case 3226:
			case 3225:
			case 4016:
			case 4015:
			case 4019:
			case 4018:
			case 4022:
			case 4021:
			case 4025:
			case 4024:
			case 6106:
			case 6105:
			case 6164:
			case 6163:
			case 6529:
			case 6528:
			case 6542:
			case 6541:
			case 6555:
			case 6554:
			case 6558:
			case 6557:
			case 6561:
			case 6560:
				return 1;
				break;
			}
	}
	return 0;
}

int func_147(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2530245[iParam0 /*3*/][func_143(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_148(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_94(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_150(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_149(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_149(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_149(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_150(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2498829 = { func_135(iParam0) };
		Global_2498842 = { func_135(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2498829))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2498842))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498759, 35, &Global_2498829);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498794, 35, &Global_2498842);
				if (Global_2498759 == Global_2498794)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_151(bool bParam0, int iParam1)
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
				if (func_360(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_150(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_360(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_152(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_150(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_149(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_149(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_152(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_19(iParam0), func_19(iParam1));
	return 0f;
}

int func_153(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_149(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_154(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_144(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_144(PLAYER::PLAYER_ID());
		}
	}
	if (func_155(8000, 0, 0) > 0)
	{
		if (func_155(8000, 0, 0) < (iParam0 + func_144(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_155(8000, 0, 0) - func_144(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_155(int iParam0, bool bParam1, int iParam2)
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
	return Global_286291[iParam0];
}

int func_156()
{
	return 1;
}

int func_157(char* sParam0)
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

int func_158(int iParam0)
{
	return func_159(func_160(iParam0));
}

int func_159(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_160(int iParam0)
{
	if (func_161(iParam0, 0))
	{
		return Global_1624079[iParam0 /*558*/].f_11.f_33;
	}
	return -1;
}

int func_161(int iParam0, int iParam1)
{
	if (Global_1624079[iParam0 /*558*/].f_11.f_33 != -1 || (iParam1 && Global_1624079[iParam0 /*558*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_162()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_21();
	}
	return func_163(Global_4456448.f_126776);
}

int func_163(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4997[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_164(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 2;
}

bool func_165(int iParam0)
{
	return Global_2423644[iParam0 /*406*/].f_111 == 7;
}

int func_166(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_167(iParam0, 0);
}

int func_167(int iParam0, int iParam1)
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
		if (Global_286291[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_286291[iVar3] < iParam0)
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

int func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_144(iParam0);
}

bool func_169()
{
	return Global_68280;
}

void func_170(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_174(sParam0))
	{
		return;
	}
	func_54();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = MISC::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_173();
	func_172(bParam1);
	func_171();
}

void func_171()
{
	MISC::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_172(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_173()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_174(char* sParam0)
{
	if (!func_59())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_175(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_175(char* sParam0)
{
	if (!func_59())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_176(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	if (Global_1589291[iParam0 /*770*/].f_273.f_21 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1589291[iParam0 /*770*/].f_273.f_19, 0))
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
		if (func_187(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_186(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_185(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_184(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_183(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_182(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_181(iParam0))
		{
			return 1;
		}
	}
	if (!bParam9)
	{
		if (func_180(iParam0))
		{
			return 1;
		}
	}
	if (!bParam10)
	{
		if (func_179(iParam0))
		{
			return 1;
		}
	}
	if (!bParam11)
	{
		if (func_177(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_177(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_62())
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 12;
			}
		}
	}
	return 0;
}

int func_178(int iParam0)
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
	}
	return -1;
}

int func_179(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_180(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 11;
			}
		}
	}
	return 0;
}

int func_181(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1 && Global_2423644[iParam0 /*406*/].f_305.f_4 != func_62())
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_182(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_183(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_184(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_185(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_186(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_187(int iParam0)
{
	if (iParam0 != func_62())
	{
		if (func_360(iParam0, 1, 1))
		{
			if (Global_2423644[iParam0 /*406*/].f_305.f_1 != -1)
			{
				return func_178(Global_2423644[iParam0 /*406*/].f_305.f_1) == 0;
			}
		}
	}
	return 0;
}

var func_188()
{
	return Global_2415808.f_1689;
}

int func_189()
{
	if (func_190(18))
	{
		return 1;
	}
	if (func_190(0))
	{
		return 1;
	}
	return 0;
}

bool func_190(int iParam0)
{
	int iVar0;
	
	iVar0 = func_147(2476, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

void func_191(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_203(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return;
	}
	if (!Global_2394180[iVar0 /*46*/].f_4 && Global_2394180[iVar0 /*46*/])
	{
		Global_2394180[iVar0 /*46*/].f_4 = 1;
		func_195();
	}
	func_192(iVar0);
}

void func_192(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 >= Global_1373467)
	{
		return;
	}
	if (Global_2394180[iParam0 /*46*/].f_26 != -1)
	{
		HUD::_REMOVE_NOTIFICATION(Global_2394180[iParam0 /*46*/].f_26);
	}
	iVar0 = iParam0;
	iVar1 = iVar0 + 1;
	while (iVar1 < Global_1373467)
	{
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		Global_2394180[iVar0 /*46*/] = { Global_2394180[iVar1 /*46*/] };
		iVar0++;
		iVar1++;
	}
	func_194(iVar0);
	Global_1373467 = (Global_1373467 - 1);
	if (Global_1373438)
	{
		if (Global_1373436 > 0)
		{
			func_193();
		}
	}
}

void func_193()
{
	Global_1373438 = 0;
}

void func_194(int iParam0)
{
	Global_2394180[iParam0 /*46*/] = 0;
	Global_2394180[iParam0 /*46*/].f_2 = 0;
	Global_2394180[iParam0 /*46*/].f_3 = 0;
	Global_2394180[iParam0 /*46*/].f_4 = 0;
	Global_2394180[iParam0 /*46*/].f_5 = func_62();
	Global_2394180[iParam0 /*46*/].f_6 = 145;
	Global_2394180[iParam0 /*46*/].f_7 = 1;
	Global_2394180[iParam0 /*46*/].f_8 = -1;
	Global_2394180[iParam0 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_10), "", 64);
	Global_2394180[iParam0 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iParam0 /*46*/].f_27), "", 32);
	Global_2394180[iParam0 /*46*/].f_35 = -1;
	Global_2394180[iParam0 /*46*/].f_36 = -1;
	Global_2394180[iParam0 /*46*/].f_37 = 0;
	Global_2394180[iParam0 /*46*/].f_39 = 0;
	Global_2394180[iParam0 /*46*/].f_40 = -1;
	Global_2394180[iParam0 /*46*/].f_41 = 0;
	Global_2394180[iParam0 /*46*/].f_42 = 0;
	Global_2394180[iParam0 /*46*/].f_43 = 0;
	Global_2394180[iParam0 /*46*/].f_45 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		Global_2394180[iParam0 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_195()
{
	Global_16863 = (Global_16863 - 1);
	if (Global_16863 < 0)
	{
		func_202("[MMM][NewJobInv][JobList] Calling Reset_New_Invites_Indicator from Decrement_New_Invites_Indicator");
	}
	func_196();
}

void func_196()
{
	if (!Global_14660)
	{
		if (Global_14493.f_1 == 6)
		{
			func_201(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_197(1);
			func_201(Global_14474, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14473), -1082130432, -1082130432, -1082130432);
		}
	}
}

void func_197(int iParam0)
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
	
	Global_16868 = 0;
	Global_2968 = iParam0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_2932[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_200(14))
		{
			while (iVar1 < 34)
			{
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2364, 3))
								{
									iVar2 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_14663 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_199(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar2);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							if (Global_2457694)
							{
								if (iVar1 == 14)
								{
									func_198(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_2932[iVar0] = 1;
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
				if (iParam0 == Global_2370[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_2370[iVar1 /*15*/].f_4)
					{
						if (Global_2932[iVar0] == 0)
						{
							Global_2896[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_105220.f_14112[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_105220.f_14112[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_105220.f_14112[iVar3 /*104*/].f_99[Global_14493] == 1)
											{
												Global_16868++;
											}
										}
									}
									iVar3++;
								}
								func_198(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16868), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_70978)
								{
									iVar4 = 0;
									iVar4 = Global_4266200;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4266201[iVar5 /*104*/].f_24 != 0)
										{
											if (Global_4266201[iVar5 /*104*/].f_28 == 0)
											{
												if (Global_4266201[iVar5 /*104*/].f_99[Global_14493] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_198(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_14493)
									{
										case 0:
											iVar6 = Global_37062;
											break;
										
										case 1:
											iVar6 = Global_37063;
											break;
										
										case 2:
											iVar6 = Global_37064;
											break;
										
										default:
											break;
									}
									func_198(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_198(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_16863), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_199(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2369);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 2)
							{
								if (MISC::IS_BIT_SET(Global_2364, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_199(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar7);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 3)
							{
								if (MISC::IS_BIT_SET(Global_2364, 3))
								{
									iVar8 = 42;
									Global_14663 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_14663 = 0;
								}
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_199(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar8);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_199(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if ((iVar1 == 23 && MISC::ARE_STRINGS_EQUAL(&(Global_2370[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_2364, 6))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_14474, "SET_DATA_SLOT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_2370[iVar1 /*15*/].f_10);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
								func_199(&(Global_2370[iVar1 /*15*/]));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(42);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else if (Global_2370[iVar1 /*15*/].f_10 == 57 && iVar1 == 23)
							{
								iVar9 = 0;
								iVar9 = Global_1622819.f_1;
								func_198(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_198(Global_14474, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_2370[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_2370[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_2932[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_198(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_199(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_199(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_199(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_199(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_199(sParam11);
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_199(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_200(int iParam0)
{
	return Global_35905 == iParam0;
}

void func_201(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iParam0, sParam1);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_202(char* sParam0)
{
	if (Global_16863 != 0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
		}
		Global_16863 = 0;
	}
}

int func_203(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1373467)
	{
		if (!Global_2394180[iVar0 /*46*/].f_7)
		{
			if (Global_2394180[iVar0 /*46*/].f_6 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_204()
{
	if (!MISC::IS_BIT_SET(iLocal_111, 17))
	{
		func_206(12, 116, "", 1, 0, 1, 0);
		MISC::SET_BIT(&iLocal_111, 17);
	}
	else if (!MISC::IS_BIT_SET(iLocal_111, 18))
	{
		if (func_205(12, 116))
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

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_203(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (!iParam1 == Global_2394180[iVar0 /*46*/].f_8)
	{
		return 0;
	}
	if (!Global_2394180[iVar0 /*46*/].f_2)
	{
		return 0;
	}
	func_192(iVar0);
	Global_2395345 = MISC::GET_GAME_TIMER() + 1500;
	return 1;
}

void func_206(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;
	
	iVar0 = func_203(iParam0);
	if (bParam5)
	{
		if (iVar0 != -1)
		{
			func_192(iVar0);
		}
	}
	iVar1 = iParam0;
	bVar2 = false;
	StringCopy(&Var3, "", 32);
	func_207(iParam1, iVar1, bVar2, sParam2, &Var3, iParam3, -1, -1, -1, iParam4, iParam6);
}

void func_207(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4, var uParam5, int iParam6, int iParam7, int iParam8, var uParam9, var uParam10)
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
		if (func_212())
		{
			return;
		}
	}
	iVar2 = Global_1373467;
	if (iVar2 >= 12)
	{
		iVar2 = (iVar2 - 1);
	}
	iVar3 = (iVar2 - 1);
	while (iVar3 >= 0)
	{
		Global_2394180[iVar2 /*46*/] = { Global_2394180[iVar3 /*46*/] };
		iVar2 = (iVar2 - 1);
		iVar3 = (iVar3 - 1);
	}
	Global_1373467++;
	if (Global_1373467 > 12)
	{
		Global_1373467 = 12;
	}
	iVar4 = 0;
	if (Global_2394180[1 /*46*/].f_1)
	{
		Global_2394180[0 /*46*/] = { Global_2394180[1 /*46*/] };
		Global_2394180[1 /*46*/] = { Var5 };
		iVar4 = 1;
	}
	if (iVar4 == 0)
	{
		Global_2394180[iVar4 /*46*/].f_1 = uParam10;
	}
	else
	{
		Global_2394180[iVar4 /*46*/].f_1 = 0;
	}
	Global_2394180[iVar4 /*46*/] = 0;
	Global_2394180[iVar4 /*46*/].f_2 = 0;
	Global_2394180[iVar4 /*46*/].f_3 = 0;
	Global_2394180[iVar4 /*46*/].f_4 = 0;
	Global_2394180[iVar4 /*46*/].f_5 = iVar0;
	Global_2394180[iVar4 /*46*/].f_6 = iVar1;
	Global_2394180[iVar4 /*46*/].f_7 = bParam2;
	Global_2394180[iVar4 /*46*/].f_8 = iParam0;
	Global_2394180[iVar4 /*46*/].f_9 = -1;
	StringCopy(&(Global_2394180[iVar4 /*46*/].f_10), sParam3, 64);
	Global_2394180[iVar4 /*46*/].f_26 = -1;
	StringCopy(&(Global_2394180[iVar4 /*46*/].f_27), sParam4, 32);
	Global_2394180[iVar4 /*46*/].f_35 = iParam6;
	Global_2394180[iVar4 /*46*/].f_36 = iParam7;
	Global_2394180[iVar4 /*46*/].f_37 = 0;
	Global_2394180[iVar4 /*46*/].f_38 = NETWORK::GET_NETWORK_TIME();
	Global_2394180[iVar4 /*46*/].f_39 = uParam5;
	Global_2394180[iVar4 /*46*/].f_40 = Global_2395344;
	Global_2394180[iVar4 /*46*/].f_44 = iParam8;
	Global_2394180[iVar4 /*46*/].f_45 = uParam9;
	if (iParam0 == 123 || iParam0 == 234)
	{
		Global_2394180[iVar4 /*46*/].f_9 = func_209();
	}
	Global_2395344++;
	func_208();
	Global_2394180[iVar4 /*46*/].f_41 = 0;
	Global_2394180[iVar4 /*46*/].f_42 = 0;
	Global_2394180[iVar4 /*46*/].f_43 = 0;
	if (MISC::IS_DURANGO_VERSION())
	{
		if (bParam2)
		{
			bVar6 = true;
			if (bVar6)
			{
				Var7 = { func_135(iVar0) };
				iVar8 = NETWORK::_0xDEB2B99A1AF1A2A6(&Var7);
				if (iVar8 != -1)
				{
					Global_2394180[iVar4 /*46*/].f_41 = iVar8;
					Global_2394180[iVar4 /*46*/].f_42 = 1;
					Global_2394180[iVar4 /*46*/].f_43 = 0;
				}
			}
		}
	}
}

void func_208()
{
	Global_1373440 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 30000);
}

int func_209()
{
	vector3 vVar0[24];
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	StringCopy(&cVar0, "", 24);
	cVar0 = { func_211() };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0) || MISC::ARE_STRINGS_EQUAL(".", &cVar0))
	{
		return -1;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		switch (iVar1)
		{
			case 0:
				StringCopy(&cVar0, func_210(53, -1), 24);
				break;
			
			case 1:
				StringCopy(&cVar0, func_210(54, -1), 24);
				break;
			
			case 2:
				StringCopy(&cVar0, func_210(55, -1), 24);
				break;
			
			case 3:
				StringCopy(&cVar0, func_210(56, -1), 24);
				break;
			
			case 4:
				StringCopy(&cVar0, func_210(57, -1), 24);
				break;
			
			case 5:
				StringCopy(&cVar0, func_210(58, -1), 24);
				break;
			
			case 6:
				StringCopy(&cVar0, func_210(59, -1), 24);
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
		return -1;
	}
	iVar3 = func_147(7335, -1, 0);
	iVar4 = 0;
	iVar1 = 0;
	while (iVar1 < iVar2)
	{
		iVar4 = iVar1 * 3;
		if (iVar4 != -1)
		{
			if (!MISC::IS_BIT_SET(iVar3, iVar4))
			{
				return 7;
			}
		}
		iVar1++;
	}
	return 1;
}

char* func_210(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_2558397[iParam0 /*3*/][func_143(iParam1)];
	return STATS::STAT_GET_STRING(uVar0, -1);
}

struct<6> func_211()
{
	struct<6> Var0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1659166.f_10)))
	{
		iVar2 = func_147(7336, -1, 0);
		if (iVar2 == 0)
		{
			StringCopy(&Var0, ".", 24);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 1118)
			{
				if ((Global_794709.f_4[iVar1 /*88*/].f_65 == 0 && Global_794709.f_4[iVar1 /*88*/].f_68 == 1) && MISC::IS_BIT_SET(Global_794709.f_4[iVar1 /*88*/].f_76, 13))
				{
					if (Global_794709.f_98389[iVar1 /*13*/].f_1 == iVar2)
					{
						Var0 = { Global_794709.f_112937[Global_794709.f_98389[iVar1 /*13*/].f_10 /*6*/] };
						iVar1 = 1118;
					}
				}
				iVar1++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
			}
		}
		Global_1659166.f_10 = { Var0 };
		return Var0;
	}
	return Global_1659166.f_10;
}

bool func_212()
{
	return Global_1312814 == 10;
}

void func_213()
{
	int iVar0;
	
	iVar0 = Global_1373750[func_143(-1)];
	MISC::SET_BIT(&iVar0, 8);
	func_141(1303, iVar0, -1, 1);
}

void func_214(int iParam0, bool bParam1)
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
			Global_2097152[func_215() /*12171*/].f_7688.f_19 = iVar0;
			break;
		
		case 19:
			Global_2097152[func_215() /*12171*/].f_7688.f_18 = iVar0;
			break;
		
		case 74:
			Global_2097152[func_215() /*12171*/].f_7688.f_12 = iVar0;
			break;
		
		case 29:
			Global_2097152[func_215() /*12171*/].f_7688.f_14 = iVar0;
			break;
		
		case 8:
			Global_2097152[func_215() /*12171*/].f_7688.f_15 = iVar0;
			break;
		
		case 31:
			Global_2097152[func_215() /*12171*/].f_7688.f_16 = iVar0;
			break;
		
		case 3:
			Global_2097152[func_215() /*12171*/].f_7688.f_20 = iVar0;
			break;
		
		case 6:
			Global_2097152[func_215() /*12171*/].f_7688.f_17 = iVar0;
			break;
		
		case 103:
		case 104:
		case 98:
		case 105:
			Global_2097152[func_215() /*12171*/].f_7688.f_23 = iVar0;
			break;
		
		case 76:
			Global_2097152[func_215() /*12171*/].f_7688.f_24 = iVar0;
			break;
		
		case 93:
			Global_2097152[func_215() /*12171*/].f_7688.f_25 = iVar0;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 77:
		case 81:
			Global_2097152[func_215() /*12171*/].f_7688.f_26 = iVar0;
			break;
		
		case 65:
		case 75:
		case 95:
			Global_2097152[func_215() /*12171*/].f_7688.f_27 = iVar0;
			break;
			break;
		
		case 97:
			Global_2097152[func_215() /*12171*/].f_7688.f_29 = iVar0;
			break;
		
		case 88:
			Global_2097152[func_215() /*12171*/].f_7688.f_28 = iVar0;
			break;
		
		case 100:
			Global_2097152[func_215() /*12171*/].f_7688.f_31 = iVar0;
			break;
		
		case 106:
			Global_2097152[func_215() /*12171*/].f_7688.f_32 = iVar0;
			break;
		
		case 99:
			Global_2097152[func_215() /*12171*/].f_7688.f_30 = iVar0;
			break;
	}
}

int func_215()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_216()
{
	if (!MISC::IS_BIT_SET(iLocal_111, 4))
	{
		if (!MISC::IS_BIT_SET(iLocal_111, 8) || (MISC::IS_BIT_SET(iLocal_111, 8) && func_36(&uLocal_114, 600000, 0)))
		{
			if (func_222(Local_103.f_5))
			{
				MISC::SET_BIT(&iLocal_111, 4);
				MISC::CLEAR_BIT(&iLocal_111, 8);
			}
		}
	}
	else if (!func_221())
	{
		if (!MISC::IS_BIT_SET(iLocal_111, 19))
		{
			if (func_220())
			{
				MISC::SET_BIT(&iLocal_111, 19);
			}
			else if (!func_219() && !func_217())
			{
				MISC::SET_BIT(&iLocal_111, 8);
				MISC::CLEAR_BIT(&iLocal_111, 4);
				func_43(&uLocal_114, 0, 0);
				iLocal_110 = 0;
			}
		}
		else if (!func_217())
		{
			if (func_219())
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
		MISC::CLEAR_BIT(&iLocal_111, 4);
		func_43(&uLocal_114, 0, 0);
		iLocal_110 = 0;
	}
	return 0;
}

bool func_217()
{
	return func_218();
}

bool func_218()
{
	return Global_1356553.f_40 == 3;
}

bool func_219()
{
	return Global_1356553.f_57.f_1;
}

int func_220()
{
	if (Global_15800 == 4)
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

int func_221()
{
	if (Global_16816)
	{
		return 1;
	}
	return 0;
}

int func_222(int iParam0)
{
	int iVar0;
	
	switch (iLocal_110)
	{
		case 0:
			if (func_320(0, 1, 1, 1))
			{
				if (!func_319(12, -1))
				{
					func_315(iParam0);
					iLocal_110++;
				}
			}
			break;
		
		case 1:
			iVar0 = func_314(iParam0);
			func_313(iParam0);
			if (func_223(&uLocal_130, iVar0, "FM_1AU", sLocal_295, 0, 0))
			{
				MISC::CLEAR_BIT(&iLocal_111, 11);
				iLocal_110++;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_223(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_311())
	{
		return 0;
	}
	if (func_310())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_224(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_224(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
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
	iVar1 = func_309(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_308(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_303(iParam6))
	{
		return 0;
	}
	if (func_300(iVar0, iVar1, iVar2))
	{
		if (func_299())
		{
			return 0;
		}
		func_298();
		return func_231(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, iParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_230(iParam4))
	{
		return 0;
	}
	func_225(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, iParam6);
	return 0;
}

void func_225(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	Global_1356553.f_40.f_1 = iParam0;
	Global_1356553.f_40.f_2 = iParam1;
	Global_1356553.f_40.f_3 = iParam2;
	StringCopy(&(Global_1356553.f_40.f_4), sParam3, 16);
	Global_1356553.f_40.f_8 = iParam4;
	Global_1356553.f_40.f_9 = iParam5;
	Global_1356553.f_40.f_14 = iParam6;
	func_226(iParam4);
	func_298();
	Global_1356553.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_226(int iParam0)
{
	if (func_229(iParam0))
	{
		func_228();
		return;
	}
	func_227();
}

void func_227()
{
	Global_1356553.f_40.f_10 = 0;
}

void func_228()
{
	Global_1356553.f_40.f_10 = 1;
}

int func_229(int iParam0)
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

bool func_230(int iParam0)
{
	return iParam0 > Global_1356553.f_40.f_8;
}

int func_231(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_297();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_294(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_291(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_294(uParam0, sParam3, sParam4);
		}
		return func_275(uParam0, iParam1, sParam3, sParam4, iParam7);
	}
	if (iParam5 == 5)
	{
		return func_274(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_264(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_263(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_232(iParam1, iParam2, sParam4, iParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_232(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_262();
	bVar0 = true;
	if (func_234(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_233(120000);
		return 1;
	}
	return 0;
}

void func_233(int iParam0)
{
	Global_1356553.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1356553.f_40.f_12 = 1;
}

int func_234(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		iVar1 = func_256(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1356553.f_40.f_13))
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
	sVar4 = func_255(sParam5, bParam6, &iVar3);
	uVar5 = func_253(iParam7, &iVar3);
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
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_252(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_238(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_237();
	}
	func_262();
	func_236();
	func_235();
	return 1;
}

void func_235()
{
	Global_1356553.f_57 = 0;
	Global_1356553.f_57.f_1 = 0;
}

void func_236()
{
	Global_1356553.f_40 = 3;
}

void func_237()
{
	MISC::SET_BIT(&Global_2363, 8);
}

int func_238(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
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
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_239(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3070 = iParam6;
			MISC::SET_BIT(&Global_4267466, 0);
		}
		return 1;
	}
	return 0;
}

int func_239(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_246();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14493 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14493 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14493 == 1)
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
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4267451 == 1)
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
	if (func_245() == 0)
	{
		func_243();
		return 0;
	}
	func_242(Global_4267450);
	StringCopy(&(Global_4266201[Global_4267450 /*104*/]), sParam1, 64);
	Global_4266201[Global_4267450 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4266201[Global_4267450 /*104*/].f_24 = iParam2;
	}
	Global_4266201[Global_4267450 /*104*/].f_25 = iParam7;
	Global_4266201[Global_4267450 /*104*/].f_26 = uParam8;
	Global_4266201[Global_4267450 /*104*/].f_29 = uParam9;
	Global_4266201[Global_4267450 /*104*/].f_30 = uParam12;
	Global_4266201[Global_4267450 /*104*/].f_31 = uParam11;
	Global_4266201[Global_4267450 /*104*/].f_28 = 0;
	Global_4266201[Global_4267450 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_4266201[Global_4267450 /*104*/].f_33), sParam4, 64);
	Global_4266201[Global_4267450 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_4266201[Global_4267450 /*104*/].f_50), sParam5, 64);
	Global_4266201[Global_4267450 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_4266201[Global_4267450 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_4266201[Global_4267450 /*104*/].f_83), sParam15, 64);
	func_246();
	switch (iParam16)
	{
		case 3:
			Global_4266201[Global_4267450 /*104*/].f_99[Global_14493] = 1;
			break;
		
		case 0:
			Global_4266201[Global_4267450 /*104*/].f_99[0] = 1;
			break;
		
		case 2:
			Global_4266201[Global_4267450 /*104*/].f_99[2] = 1;
			break;
		
		case 1:
			Global_4266201[Global_4267450 /*104*/].f_99[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_14493)
		{
			case 0:
				func_241(0);
				break;
			
			case 1:
				func_241(1);
				break;
			
			case 2:
				func_241(2);
				break;
			
			case 3:
				func_241(3);
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
				Global_4267451 = 1;
				break;
			
			case 0:
				Global_4267451 = 1;
				break;
			
			case 2:
				Global_4267451 = 1;
				break;
			
			case 1:
				Global_4267451 = 1;
				break;
			}
	}
	Global_16869[Global_4267450] = 0;
	if (bParam10)
	{
		func_246();
		if (Global_14436)
		{
			StringCopy(&Global_14482, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14493)
			{
				case 0:
					StringCopy(&Global_14482, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14482, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14482, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14482, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_240())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14482, true);
			}
		}
	}
	if (!Global_14660)
	{
		if (Global_14493.f_1 == 6)
		{
			func_201(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_197(1);
			func_201(Global_14474, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14473), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

bool func_240()
{
	return Global_1312854;
}

void func_241(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_105220.f_14022[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_242(int iParam0)
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
	Global_4266201[iParam0 /*104*/].f_18 = iVar0;
	Global_4266201[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_4266201[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_4266201[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_4266201[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_4266201[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_243()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4267450 = 11;
	Global_4266201[Global_4267450 /*104*/].f_18 = -1;
	Global_4266201[Global_4267450 /*104*/].f_18.f_1 = 0;
	Global_4266201[Global_4267450 /*104*/].f_18.f_2 = 0;
	Global_4266201[Global_4267450 /*104*/].f_18.f_3 = 0;
	Global_4266201[Global_4267450 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_244(Global_4266201[iVar2 /*104*/].f_18, Global_4266201[Global_4267450 /*104*/].f_18))
		{
			Global_4267450 = iVar2;
		}
		iVar2++;
	}
	Global_4266201[Global_4267450 /*104*/].f_24 = 1;
}

int func_244(struct<6> Param0, struct<6> Param1)
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

int func_245()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4266201[iVar2 /*104*/].f_24 == 0)
		{
			Global_4267450 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4267450 = 11;
	Global_4266201[Global_4267450 /*104*/].f_18 = -1;
	Global_4266201[Global_4267450 /*104*/].f_18.f_1 = 0;
	Global_4266201[Global_4267450 /*104*/].f_18.f_2 = 0;
	Global_4266201[Global_4267450 /*104*/].f_18.f_3 = 0;
	Global_4266201[Global_4267450 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4266201[iVar2 /*104*/].f_24 == 0 || Global_4266201[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_244(Global_4266201[iVar2 /*104*/].f_18, Global_4266201[Global_4267450 /*104*/].f_18))
			{
				Global_4267450 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4267450 == 11)
	{
		return 0;
	}
	Global_4266201[Global_4267450 /*104*/].f_99[0] = 0;
	Global_4266201[Global_4267450 /*104*/].f_99[1] = 0;
	Global_4266201[Global_4267450 /*104*/].f_99[2] = 0;
	return 1;
}

void func_246()
{
	if (func_200(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[0 /*29*/])
			{
				Global_14493 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[1 /*29*/])
			{
				Global_14493 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_105220.f_28021[2 /*29*/])
			{
				Global_14493 = 2;
			}
			else
			{
				Global_14493 = 0;
			}
		}
	}
	else
	{
		Global_14493 = func_247();
		if (Global_14493 == 145)
		{
			Global_14493 = 3;
		}
		if (Global_70978)
		{
			Global_14493 = 3;
		}
		if (Global_14493 > 3)
		{
			Global_14493 = 3;
		}
	}
}

var func_247()
{
	func_248();
	return Global_105220.f_2354.f_539.f_4301;
}

void func_248()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_251(Global_105220.f_2354.f_539.f_4301) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_250(PLAYER::PLAYER_PED_ID());
			if (func_249(iVar0) && (!func_200(14) || Global_104171))
			{
				if (Global_105220.f_2354.f_539.f_4301 != iVar0 && func_249(Global_105220.f_2354.f_539.f_4301))
				{
					Global_105220.f_2354.f_539.f_4302 = Global_105220.f_2354.f_539.f_4301;
				}
				Global_105220.f_2354.f_539.f_4303 = iVar0;
				Global_105220.f_2354.f_539.f_4301 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_105220.f_2354.f_539.f_4301 != 145)
			{
				Global_105220.f_2354.f_539.f_4303 = Global_105220.f_2354.f_539.f_4301;
			}
			return;
		}
	}
	Global_105220.f_2354.f_539.f_4301 = 145;
}

bool func_249(int iParam0)
{
	return iParam0 < 3;
}

int func_250(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_251(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_251(int iParam0)
{
	if (func_249(iParam0))
	{
		return Global_105220.f_28021[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_252(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	if (func_239(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3070 = iParam10;
			MISC::SET_BIT(&Global_4267466, 0);
		}
		return 1;
	}
	return 0;
}

int func_253(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_254(2, iParam1);
	return iParam0;
}

void func_254(int iParam0, var uParam1)
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

char* func_255(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_18;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_18))
	{
		return sLocal_18;
	}
	func_254(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::_GET_LABEL_TEXT(sParam0);
}

int func_256(int iParam0)
{
	int iVar0;
	
	iVar0 = func_259(iParam0);
	if (iVar0 == -1)
	{
		func_257(iParam0, 1);
		return 0;
	}
	Global_1374725[iVar0 /*5*/].f_4 = 1;
	return Global_1374725[iVar0 /*5*/].f_2;
}

void func_257(int iParam0, bool bParam1)
{
	if (!func_360(iParam0, 0, 1))
	{
		return;
	}
	if (func_259(iParam0) != -1)
	{
		return;
	}
	if (Global_1374888)
	{
		if (iParam0 == Global_1374888.f_1)
		{
			return;
		}
	}
	if (func_258(iParam0))
	{
		return;
	}
	if (Global_1374926 >= 32)
	{
		return;
	}
	Global_1374893[Global_1374926] = iParam0;
	Global_1374926++;
	if (bParam1)
	{
	}
}

int func_258(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1374926)
	{
		if (Global_1374893[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_259(int iParam0)
{
	int iVar0;
	
	if (!func_360(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1374886 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1374886)
	{
		if (Global_1374725[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1374725[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1374725[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_260(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_260(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1374886)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1374725[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1374725[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1374725[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1374725[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1374886)
	{
		Global_1374725[iVar2 /*5*/] = { Global_1374725[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_261(&(Global_1374725[iVar2 /*5*/]));
	Global_1374886 = (Global_1374886 - 1);
}

void func_261(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_62();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_262()
{
	Global_1356553.f_40.f_9 = 4;
}

int func_263(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_262();
	bVar0 = false;
	return func_234(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_264(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_265(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_265(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
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
		iVar1 = func_256(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1356553.f_40.f_13))
			{
				return 0;
			}
		}
		Global_16861 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_255(sParam5, bParam6, &iVar3);
	uVar5 = func_253(iParam7, &iVar3);
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
		if (MISC::IS_BIT_SET(iParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (MISC::IS_BIT_SET(iParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_273(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_267(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(iParam4, 0))
	{
		func_237();
	}
	func_266();
	func_236();
	func_235();
	return 1;
}

void func_266()
{
	Global_1356553.f_40.f_9 = 3;
}

int func_267(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_2363, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_268(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_3070 = iParam6;
			Global_2973[3 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
			Global_3050 = iParam0;
			MISC::SET_BIT(&Global_2363, 1);
			MISC::SET_BIT(&Global_2363, 7);
		}
		return 1;
	}
	return 0;
}

int func_268(var uParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_246();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_14493 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_14493 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_14493 == 1)
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
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_105220.f_14022[Global_14493 /*20*/].f_17 == 1)
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
	if (func_272() == 0)
	{
		func_270();
		return 0;
	}
	func_269(Global_16867);
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/]), sParam1, 64);
	Global_105220.f_14112[Global_16867 /*104*/].f_17 = uParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_105220.f_14112[Global_16867 /*104*/].f_24 = iParam2;
	}
	Global_105220.f_14112[Global_16867 /*104*/].f_25 = iParam7;
	Global_105220.f_14112[Global_16867 /*104*/].f_26 = uParam8;
	Global_105220.f_14112[Global_16867 /*104*/].f_29 = uParam9;
	Global_105220.f_14112[Global_16867 /*104*/].f_30 = uParam12;
	Global_105220.f_14112[Global_16867 /*104*/].f_31 = uParam11;
	Global_105220.f_14112[Global_16867 /*104*/].f_28 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/].f_33), sParam4, 64);
	Global_105220.f_14112[Global_16867 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/].f_50), sParam5, 64);
	Global_105220.f_14112[Global_16867 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_105220.f_14112[Global_16867 /*104*/].f_83), sParam15, 64);
	if (MISC::IS_BIT_SET(Global_2363, 10))
	{
		Global_105220.f_14112[Global_16867 /*104*/].f_99[0] = 1;
		Global_105220.f_14112[Global_16867 /*104*/].f_99[1] = 1;
		Global_105220.f_14112[Global_16867 /*104*/].f_99[2] = 1;
		Global_3069 = 4;
		func_241(0);
		func_241(2);
		func_241(1);
	}
	else
	{
		func_246();
		switch (iParam16)
		{
			case 3:
				Global_105220.f_14112[Global_16867 /*104*/].f_99[Global_14493] = 1;
				break;
			
			case 0:
				Global_105220.f_14112[Global_16867 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_105220.f_14112[Global_16867 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_105220.f_14112[Global_16867 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_14493)
			{
				case 0:
					func_241(0);
					Global_3069 = 0;
					break;
				
				case 1:
					func_241(1);
					Global_3069 = 1;
					break;
				
				case 2:
					func_241(2);
					Global_3069 = 2;
					break;
				
				case 3:
					func_241(3);
					Global_3069 = 3;
					break;
				
				default:
					Global_3069 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (MISC::IS_BIT_SET(Global_2363, 10))
		{
			Global_105220.f_14022[0 /*20*/].f_17 = 1;
			Global_105220.f_14022[1 /*20*/].f_17 = 1;
			Global_105220.f_14022[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_105220.f_14022[Global_14493 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_105220.f_14022[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_105220.f_14022[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_105220.f_14022[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_16869[Global_16867] = 0;
	if (bParam10)
	{
		func_246();
		if (Global_14436)
		{
			StringCopy(&Global_14482, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_14493)
			{
				case 0:
					StringCopy(&Global_14482, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_14482, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_14482, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_14482, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_240())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_14482, true);
			}
		}
	}
	if (!Global_14660)
	{
		if (Global_14493.f_1 == 6)
		{
			func_201(Global_14474, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_197(1);
			func_201(Global_14474, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_14473), -1082130432, -1082130432, -1082130432);
		}
	}
	return 1;
}

void func_269(int iParam0)
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
	Global_105220.f_14112[iParam0 /*104*/].f_18 = iVar0;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_105220.f_14112[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_270()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
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
	Global_16867 = 34;
	Global_105220.f_14112[Global_16867 /*104*/].f_18 = -1;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_1 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_2 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_3 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_271(Global_105220.f_14112[iVar2 /*104*/].f_18, Global_105220.f_14112[Global_16867 /*104*/].f_18))
		{
			Global_16867 = iVar2;
		}
		iVar2++;
	}
	Global_105220.f_14112[Global_16867 /*104*/].f_24 = 1;
}

int func_271(struct<6> Param0, struct<6> Param1)
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

int func_272()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_70978)
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
		if (Global_105220.f_14112[iVar2 /*104*/].f_24 == 0)
		{
			Global_16867 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_16867 = 34;
	Global_105220.f_14112[Global_16867 /*104*/].f_18 = -1;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_1 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_2 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_3 = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_105220.f_14112[iVar2 /*104*/].f_24 == 0 || Global_105220.f_14112[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_271(Global_105220.f_14112[iVar2 /*104*/].f_18, Global_105220.f_14112[Global_16867 /*104*/].f_18))
			{
				Global_16867 = iVar2;
			}
		}
		if (Global_105220.f_14112[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_16867 == 34)
	{
		return 0;
	}
	Global_105220.f_14112[Global_16867 /*104*/].f_99[0] = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_99[1] = 0;
	Global_105220.f_14112[Global_16867 /*104*/].f_99[2] = 0;
	return 1;
}

int func_273(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
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
	MISC::CLEAR_BIT(&Global_2363, 10);
	iVar0 = 3;
	if (func_268(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_3070 = iParam10;
			Global_2973[3 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
			Global_3050 = iParam0;
			StringCopy(&Global_3051, sParam5, 64);
			MISC::SET_BIT(&Global_2363, 1);
			MISC::SET_BIT(&Global_2363, 7);
		}
		return 1;
	}
	return 0;
}

int func_274(int iParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (BRAIN::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_266();
	bVar0 = true;
	if (func_265(iParam0, iParam1, sParam2, bVar0, iParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_233(120000);
		return 1;
	}
	return 0;
}

int func_275(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (BRAIN::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (MISC::IS_BIT_SET(iParam4, 7))
	{
		iVar1 = 9;
	}
	if (MISC::IS_BIT_SET(iParam4, 4))
	{
		bVar0 = func_290(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_281(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (MISC::IS_BIT_SET(iParam4, 3))
		{
			func_280(1);
		}
		if (MISC::IS_BIT_SET(iParam4, 5))
		{
			func_279(1);
		}
		func_278();
		func_236();
		func_277();
		func_276();
		return 1;
	}
	return 0;
}

void func_276()
{
	Global_2528385 = 0;
}

void func_277()
{
	Global_1356553.f_57 = 1;
	Global_1356553.f_57.f_1 = 0;
}

void func_278()
{
	Global_1356553.f_40.f_9 = 1;
}

void func_279(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2365, 0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2365, 0);
	}
}

void func_280(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_2363, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_2363, 20);
	}
}

int func_281(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_289(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15848 = 0;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_15805 = 0;
	Global_15852 = 0;
	Global_15854 = 0;
	Global_2621441 = 0;
	return func_282(sParam3, iParam4, bParam7);
}

int func_282(char* sParam0, int iParam1, bool bParam2)
{
	Global_15801 = 0;
	if (Global_15800 == 0 || Global_15802 == 2)
	{
		if (Global_15800 != 0)
		{
			if (iParam1 > Global_15802)
			{
				if (Global_15807 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14493.f_1 = 3;
					Global_15800 = 0;
					Global_15801 = 1;
					Global_15853 = 0;
					Global_15796 = 0;
					Global_15797 = 0;
					Global_15811 = 0;
					Global_15810 = 0;
					Global_14492 = 0;
				}
				else
				{
					func_288();
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
		if (func_319(8, -1))
		{
			return 0;
		}
		Global_15876 = { Global_15870 };
		func_287();
		Global_15089 = { Global_15254 };
		Global_15806 = Global_15807;
		Global_15813 = Global_15814;
		Global_2621442 = Global_2621441;
		Global_15815 = { Global_15831 };
		Global_15808 = Global_15809;
		Global_16790 = Global_16791;
		Global_16798 = { Global_16804 };
		Global_16792 = Global_16793;
		Global_16794 = Global_16795;
		Global_16796 = Global_16797;
		Global_15419.f_370 = Global_16789;
		Global_15419.f_368 = Global_16787;
		Global_15419.f_369 = Global_16788;
		Global_15796 = Global_15797;
		if (Global_15806)
		{
			MISC::CLEAR_BIT(&Global_2363, 20);
			MISC::CLEAR_BIT(&Global_2364, 17);
			MISC::CLEAR_BIT(&Global_2365, 0);
			if (bParam2)
			{
				func_246();
				if (Global_3168[Global_14493 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14493.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14459 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_286())
				{
					return 0;
				}
				if (BRAIN::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_70978)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
				}
			}
			if (func_285())
			{
				return 0;
			}
			else
			{
				switch (Global_14493.f_1)
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
				if (MISC::IS_BIT_SET(Global_2363, 9))
				{
					return 0;
				}
			}
			func_284();
			Global_15810 = bParam2;
		}
		Global_15802 = iParam1;
		StringCopy(&Global_15419, sParam0, 24);
		Global_14666 = 0;
		func_283();
		return 1;
	}
	if (Global_15800 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15802 || iParam1 == Global_15802)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_288();
	}
	return 0;
}

void func_283()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14668[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15800 = 1;
}

void func_284()
{
	Global_15853 = Global_15852;
	Global_15847 = Global_15848;
	Global_15894 = { Global_15882 };
	Global_15900 = { Global_15888 };
	Global_15855 = Global_15854;
	Global_15924 = { Global_15906 };
	Global_15930 = { Global_15912 };
	Global_15936 = { Global_15918 };
	Global_15942 = { Global_15948 };
	Global_1678 = Global_1679;
	Global_1680 = Global_1681;
	Global_15811 = Global_15812;
	Global_15813 = Global_15814;
	Global_15815 = { Global_15831 };
	Global_15804 = Global_15805;
	Global_16816 = 0;
	Global_15849 = 0;
	Global_15850 = 0;
	MISC::CLEAR_BIT(&Global_2364, 16);
}

int func_285()
{
	if (Global_14493.f_1 == 1 || Global_14493.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_286()
{
	int iVar0;
	int iVar1;
	
	if (Global_70978)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
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
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, 1))
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

void func_287()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15089[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15089[iVar0 /*10*/].f_1), "", 24);
		Global_15089[iVar0 /*10*/].f_7 = 0;
		Global_15089[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15089.f_161 = -99;
	Global_15089.f_162 = { 0f, 0f, 0f };
}

void func_288()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16811 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14493.f_1 == 9) || Global_14492 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15800 = 6;
		Global_14493.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15800 = 6;
		return;
	}
}

void func_289(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15254 = { *uParam0 };
	Global_1679 = iParam1;
	StringCopy(&Global_15870, sParam2, 24);
	Global_16789 = iParam5;
	if (iParam3 == 0)
	{
		Global_16787 = 1;
		Global_16785 = 0;
	}
	else
	{
		Global_16787 = 0;
		Global_16785 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16788 = 1;
		Global_16786 = 0;
	}
	else
	{
		Global_16788 = 0;
		Global_16786 = 1;
	}
}

int func_290(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_289(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_15848 = 1;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_15805 = 0;
	Global_15852 = 0;
	Global_15854 = 0;
	Global_2621441 = 0;
	return func_282(sParam3, iParam4, bParam7);
}

int func_291(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (BRAIN::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_293(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_292();
		func_278();
		func_236();
		func_277();
		func_276();
		return 1;
	}
	return 0;
}

void func_292()
{
	Global_16818 = 0;
}

bool func_293(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_289(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_15848 = 0;
	Global_15807 = 1;
	Global_15814 = 0;
	Global_15809 = 1;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_15805 = 0;
	Global_15852 = 1;
	Global_15854 = 0;
	StringCopy(&Global_15948, sParam5, 24);
	Global_2621441 = 0;
	return func_282(sParam3, iParam4, bParam8);
}

int func_294(var uParam0, char* sParam1, char* sParam2)
{
	if (func_296(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_295();
		func_236();
		func_277();
		return 1;
	}
	return 0;
}

void func_295()
{
	Global_1356553.f_40.f_9 = 2;
}

bool func_296(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_289(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15807 = 0;
	Global_15809 = 0;
	Global_15814 = 0;
	Global_16791 = 0;
	Global_16793 = 0;
	Global_16797 = 0;
	Global_2621441 = 0;
	return func_282(sParam2, iParam3, 0);
}

void func_297()
{
	Global_1356553.f_55 = Global_1356553.f_40.f_1;
	Global_1356553.f_55.f_1 = Global_1356553.f_40.f_10;
}

void func_298()
{
	Global_1356553.f_40 = 1;
}

bool func_299()
{
	return Global_1356553.f_40 == 1;
}

int func_300(int iParam0, int iParam1, int iParam2)
{
	if (!func_301(iParam0))
	{
		return 0;
	}
	if (Global_1356553.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1356553.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_301(int iParam0)
{
	if (!func_302())
	{
		return 0;
	}
	if (!Global_1356553.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_302()
{
	if (Global_1356553.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_303(int iParam0)
{
	if (func_307())
	{
		return 0;
	}
	if (func_218())
	{
		return 0;
	}
	if (func_306(0))
	{
		return 0;
	}
	if (Global_1312466.f_18 != 0)
	{
		return 0;
	}
	if (Global_1653121 || func_305())
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(iParam0, 6))
	{
		if (func_304())
		{
			return 0;
		}
	}
	return 1;
}

bool func_304()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1373440);
}

int func_305()
{
	if (Global_4253672.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

int func_306(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14493.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2363, 14))
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
	if (Global_14493.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_307()
{
	return func_285();
}

int func_308(int iParam0, int iParam1, int iParam2)
{
	if (!func_218())
	{
		return 0;
	}
	return func_300(iParam0, iParam1, iParam2);
}

int func_309(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_310()
{
	return Global_2525748.f_1;
}

int func_311()
{
	if (Global_1356741.f_2)
	{
		return 1;
	}
	return func_312();
}

bool func_312()
{
	return func_307();
}

void func_313(int iParam0)
{
	if (!MISC::IS_BIT_SET(iLocal_111, 11))
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

int func_314(int iParam0)
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

void func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_317(12, 3, 0);
			func_316(&uLocal_130, 1, 0, "Lester", 0, 1);
			break;
	}
}

void func_316(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70978)
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

void func_317(int iParam0, int iParam1, bool bParam2)
{
	Global_3049 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 144)
	{
		func_246();
		if (iParam1 == 4)
		{
			Global_105220.f_28021[iParam0 /*29*/].f_12[0] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_12[1] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_12[2] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_24[0] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_24[1] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_105220.f_28021[iParam0 /*29*/].f_12[iParam1] == 1 && Global_105220.f_28021[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_105220.f_28021[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_105220.f_28021[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70978)
			{
				if (iParam1 != 4)
				{
					if (Global_14493 != iParam1)
					{
						Global_3022[iParam1 /*4*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
						Global_3039[iParam1] = 1;
						Global_3044[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14493)
					{
					}
					else
					{
						Global_2973[1 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
						Global_2973[1 /*6*/].f_5 = iParam1;
						func_318();
					}
				}
				else
				{
					Global_2973[1 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
					Global_2973[1 /*6*/].f_5 = iParam1;
					func_318();
				}
			}
			else
			{
				Global_2973[1 /*6*/] = { Global_105220.f_28021[iParam0 /*29*/].f_3 };
				Global_2973[1 /*6*/].f_5 = iParam1;
				func_318();
			}
		}
	}
}

void func_318()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_105220.f_28021[Global_3049 /*29*/].f_7)), 64);
	if (Global_3068 == 0)
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_2973[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2973[1 /*6*/]));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_2363, 0);
}

bool func_319(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1363073.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1363073.f_1048, iParam0);
}

int func_320(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_325())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_324())
	{
		return 0;
	}
	if (func_334())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_49(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_48(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_323())
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (bParam3)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (Global_1574164)
	{
		return 0;
	}
	if (func_322())
	{
		return 0;
	}
	if (func_321())
	{
		return 0;
	}
	if (func_332())
	{
		return 0;
	}
	if (Global_68280)
	{
		return 0;
	}
	if (Global_2528869)
	{
		return 0;
	}
	return 1;
}

bool func_321()
{
	return Global_2447942.f_579;
}

bool func_322()
{
	return Global_2447942.f_731;
}

bool func_323()
{
	return Global_2436641.f_3027.f_578;
}

bool func_324()
{
	return MISC::GET_GAME_TIMER() <= Global_17345.f_5745 + 100;
}

int func_325()
{
	if (Global_15800 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_326()
{
	int iVar0;
	
	iVar0 = Global_1373750[func_143(-1)];
	if (MISC::IS_BIT_SET(iVar0, 8))
	{
		return 1;
	}
	return 0;
}

void func_327(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
			{
				Global_2436641.f_3746.f_1[0] = NETWORK::NET_TO_VEH(Local_103.f_12[0]);
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				Global_2436641.f_3746.f_4[0] = NETWORK::NET_TO_PED(Local_103.f_9[0]);
			}
			break;
	}
}

int func_328(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_329(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2423644[PLAYER::PLAYER_ID() /*406*/].f_204, iParam0))
		{
			MISC::SET_BIT(&(Global_2423644[PLAYER::PLAYER_ID() /*406*/].f_204), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2423644[PLAYER::PLAYER_ID() /*406*/].f_204, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2423644[PLAYER::PLAYER_ID() /*406*/].f_204), iParam0);
	}
}

int func_330(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_331())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2423644[iParam0 /*406*/].f_191, 2))
	{
		return 1;
	}
	return 0;
}

bool func_331()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

bool func_332()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_196 != 0;
}

int func_333()
{
	return Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_197;
}

bool func_334()
{
	return MISC::IS_BIT_SET(Global_1589291[PLAYER::PLAYER_ID() /*770*/].f_39.f_18, 0);
}

void func_335(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -471892217;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &Param0, 14, iParam13);
	}
}

int func_336(int iParam0)
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
			if (func_360(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

void func_337()
{
	if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 >= 5 && vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
	{
		if (MISC::IS_BIT_SET(Local_103, 4))
		{
			if (!MISC::IS_BIT_SET(iLocal_111, 3))
			{
				if (func_360(Local_103.f_8, 0, 1))
				{
					func_338("FM_TGDM_KIL", Local_103.f_8, 0, 0, 0, 1, 1, 0);
				}
				MISC::SET_BIT(&iLocal_111, 3);
			}
		}
	}
}

int func_338(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	int iVar3;
	int iVar4;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam3)
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
		if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
		{
			if (Global_4456448.f_121853[iVar1] != -1)
			{
				HUD::_SET_NOTIFICATION_COLOR_NEXT(func_107(iVar1, iParam1, 0));
			}
			else
			{
				HUD::_SET_NOTIFICATION_COLOR_NEXT(func_87(iParam1, -2, 1, 0));
			}
		}
		else
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(func_87(iParam1, -2, 1, 0));
		}
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_85(&Var2));
		if (!bParam4)
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2498829 = { func_135(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2498759, 35, &Global_2498829))
			{
				iVar3 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2498759.f_22), "Leader") && Global_2498759.f_30 == 0)
				{
					iVar3 = 1;
				}
				if (Global_2498759.f_21 > 0)
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
					iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar4, NETWORK::_0x7543BB439F63792B(&Global_2498759, 35), &(Global_2498759.f_17), Global_2498759.f_30, iVar3, 0, Global_2498759, &Var2, Global_1314011, Global_1314012, Global_1314013);
				}
				else
				{
					iVar0 = HUD::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar4, NETWORK::_0x7543BB439F63792B(&Global_2498759, 35), &(Global_2498759.f_17), Global_2498759.f_30, iVar3, 0, Global_2498759, Global_1314011, Global_1314012, Global_1314013);
				}
			}
			else
			{
				iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_81(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

struct<16> func_339(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

void func_340()
{
	int iVar0;
	
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (iLocal_121 != Local_103.f_15)
	{
		iLocal_121 = Local_103.f_15;
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(iLocal_121);
	}
	if (iLocal_122 != Local_103.f_16)
	{
		iLocal_122 = Local_103.f_16;
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(iLocal_122);
	}
	if (func_360(PLAYER::PLAYER_ID(), 0, 1))
	{
		if (!MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 0))
		{
			if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 == 0)
			{
				if (func_333() == 0)
				{
					MISC::SET_BIT(&(vLocal_108[iVar0 /*3*/]), 0);
				}
			}
		}
		else if (MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 0))
		{
			if ((func_49(PLAYER::PLAYER_ID(), 1) || func_46(PLAYER::PLAYER_ID())) || func_333() > 0)
			{
				func_40(&uLocal_112);
				MISC::CLEAR_BIT(&(vLocal_108[iVar0 /*3*/]), 0);
			}
			else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					if (!MISC::IS_BIT_SET(iLocal_111, 7))
					{
						MISC::SET_BIT(&iLocal_111, 7);
						func_348();
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_111, 7))
				{
					MISC::CLEAR_BIT(&iLocal_111, 7);
					if (!func_47(PLAYER::PLAYER_ID(), 0))
					{
						func_346();
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(vLocal_108[iVar0 /*3*/], 3))
		{
			if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 3 && vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6)
			{
				if (MISC::IS_BIT_SET(Global_2436641.f_3746, 1))
				{
					MISC::SET_BIT(&(vLocal_108[iVar0 /*3*/]), 3);
				}
			}
		}
		if (vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 > 3)
		{
			if (!MISC::IS_BIT_SET(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 5))
			{
				if (func_345(Local_103.f_5))
				{
					MISC::SET_BIT(&(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 5);
				}
			}
			else if (!func_345(Local_103.f_5))
			{
				MISC::CLEAR_BIT(&(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 5);
			}
			if (!MISC::IS_BIT_SET(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 6))
			{
				if (func_342(Local_103.f_5))
				{
					MISC::SET_BIT(&(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 6);
				}
			}
			if (!MISC::IS_BIT_SET(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/], 8))
			{
				if (func_341())
				{
					MISC::SET_BIT(&(vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/]), 8);
				}
			}
		}
		if (!MISC::IS_BIT_SET(iLocal_111, 13))
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

int func_341()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
	{
		if (func_9(Local_103.f_12[0]))
		{
			if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_103.f_12[0]), 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(NETWORK::NET_TO_VEH(Local_103.f_12[0]), 1, 40000))
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

int func_342(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_343(NETWORK::NET_TO_PED(Local_103.f_9[0])))
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

int func_343(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	if (func_344())
	{
		if (PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
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

bool func_344()
{
	return Global_1574349;
}

int func_345(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
			{
				if (!func_38(Local_103.f_9[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1)) < 40000f)
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

void func_346()
{
	if (!Global_1312568)
	{
		return;
	}
	func_347();
}

void func_347()
{
	Global_1312568 = 0;
	StringCopy(&(Global_1312568.f_1), "", 24);
	Global_1312568.f_7 = 0;
}

void func_348()
{
	Global_1312568 = 1;
	StringCopy(&(Global_1312568.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_1312568.f_7 = MISC::GET_HASH_KEY(&(Global_1312568.f_1));
}

void func_349()
{
	switch (Local_103.f_6)
	{
		case 1:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
				{
					if (func_9(Local_103.f_12[0]))
					{
						if (!func_38(Local_103.f_9[0]))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_12[0])))
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), -258271821) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), -258271821) != 0)
								{
									BRAIN::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_12[0]), 20f, 786603);
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
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_12[0]))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_103.f_9[0]))
					{
						if (func_9(Local_103.f_12[0]))
						{
							if (!func_38(Local_103.f_9[0]))
							{
								if (PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_12[0])))
								{
									if ((BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), -258271821) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), -258271821) != 0) || MISC::IS_BIT_SET(Local_103, 9))
									{
										BRAIN::TASK_VEHICLE_DRIVE_WANDER(NETWORK::NET_TO_PED(Local_103.f_9[0]), NETWORK::NET_TO_VEH(Local_103.f_12[0]), 30f, 786469);
										if (MISC::IS_BIT_SET(Local_103, 9))
										{
											MISC::CLEAR_BIT(&Local_103, 9);
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
					if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), -828834893) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), -828834893) != 0)
					{
						if (func_353(Local_103.f_9[0]))
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
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1805844857) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_103.f_9[0]), 1805844857) != 0)
						{
							if (func_353(Local_103.f_9[0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_103.f_9[0]))
								{
									BRAIN::TASK_SMART_FLEE_PED(NETWORK::NET_TO_PED(Local_103.f_9[0]), PLAYER::PLAYER_PED_ID(), 500f, -1, 0, 1);
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
		if ((vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 >= 5 && vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/].f_2 < 6) && !func_176(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0))
		{
			func_350(Local_103.f_9[0], &Local_123, -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_60(&Local_123);
		}
	}
}

void func_350(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_352())
		{
			Global_2436641 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_351(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2436641, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_351(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2436641, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_60(iParam1);
	}
}

int func_351(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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
			if (iParam8 == -1)
			{
				HUD::_SET_PED_ENEMY_AI_BLIP(iParam0, 1);
			}
			else
			{
				HUD::_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			HUD::_0xE52B8E7F85D39A08(iParam0, iParam2);
			HUD::_SET_AI_BLIP_MAX_DISTANCE(iParam0, fParam6);
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!iParam9 == -1)
		{
			HUD::_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		HUD::_0x0C4BBF625CA98C4E(iParam0, bParam4);
		HUD::HIDE_SPECIAL_ABILITY_LOCKON_OPERATION(iParam0, iParam5);
		*uParam1 = HUD::_0x7CD934010E115C2C(iParam0);
		if (!iParam9 == -1)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
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
		if (!MISC::IS_BIT_SET(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
		{
			uParam1->f_1 = HUD::_0x56176892826A4FE8(iParam0);
			if (!MISC::IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
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
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_352()
{
	return Global_1312831;
}

int func_353(int iParam0)
{
	if (NETWORK::_0xA1607996431332DF(iParam0))
	{
		return 1;
	}
	if (func_354(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_354(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_355(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_355(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_356()
{
	return Local_103.f_1;
}

int func_357(int iParam0)
{
	return vLocal_108[iParam0 /*3*/].f_1;
}

void func_358()
{
	func_53();
	func_329(11, 0);
	func_191(12, 116);
	MISC::CLEAR_BIT(&(Global_2436641.f_3746), 0);
	MISC::CLEAR_BIT(&(Global_2436641.f_3746), 1);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (NETWORK::PARTICIPANT_ID_TO_INT() > -1)
		{
			vLocal_108[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
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
			Local_103.f_3 = -1;
		}
	}
	if (HUD::DOES_BLIP_EXIST(Global_1653096))
	{
		HUD::REMOVE_BLIP(&Global_1653096);
	}
	MISC::CLEAR_BIT(&iLocal_111, 3);
	MISC::CLEAR_BIT(&iLocal_111, 4);
	iLocal_110 = 0;
	if (HUD::DOES_BLIP_EXIST(Local_123))
	{
		HUD::REMOVE_BLIP(&Local_123);
	}
	func_359();
}

void func_359()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_360(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
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
				if (!Global_2436641.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_361()
{
	var uVar0;
	
	func_368(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_367())
	{
		return 1;
	}
	if (Global_2459932)
	{
		return 1;
	}
	if (func_366())
	{
		return 1;
	}
	if (func_365(157))
	{
		if (!func_364())
		{
			return 1;
		}
	}
	if (func_365(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_362() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_362()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_362()
{
	switch (func_363())
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

int func_363()
{
	return Global_25277;
}

bool func_364()
{
	return Global_2447942.f_586;
}

int func_365(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_366()
{
	return Global_2457699;
}

bool func_367()
{
	return Global_2447942.f_581;
}

void func_368(var uParam0)
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
				case 1113296425:
					func_369(iVar0);
					break;
				
				case -319074860:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == -1987561915)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_369(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_360(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_370(iVar2, &bVar3))
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

int func_370(int iParam0, var uParam1)
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

void func_371()
{
	SYSTEM::WAIT(0);
}

void func_372(struct<21> Param0)
{
	func_375(func_376(Param0), Param0);
	func_374(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_103, 23);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&vLocal_108, 97);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
	if (!func_373())
	{
		func_358();
	}
	MISC::SET_BIT(&(Global_2436641.f_3746), 0);
	MISC::CLEAR_BIT(&(Global_2436641.f_3746), 1);
}

int func_373()
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
		if (func_367())
		{
			return 0;
		}
		if (func_365(155))
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

int func_374(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_359();
			}
			else
			{
				return 0;
			}
		}
		if (!func_352())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_359();
					}
					else
					{
						return 0;
					}
				}
				if (func_367())
				{
					if (!bParam2)
					{
						func_359();
					}
					else
					{
						return 0;
					}
				}
				if (func_365(155))
				{
					if (!bParam2)
					{
						func_359();
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
					func_359();
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
	if (iParam1 > -1)
	{
		Global_1312500 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_359();
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
			func_359();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_375(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_359();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_376(int iParam0)
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

