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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = -1;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 1000;
	var uLocal_55 = 1000;
	var uLocal_56 = 0;
	int iLocal_57[6] = { 0, 0, 0, 0, 0, 0 };
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
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
	bool bLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	vector3 vLocal_83 = { 0f, 0f, 0f };
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	bool bLocal_94 = 0;
	float fLocal_95 = 0f;
	int iLocal_96 = 0;
	int iLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 1132396544;
	var uLocal_101 = 1132396544;
	var uLocal_102 = 1132396544;
	var uLocal_103 = 0;
	var uLocal_104 = -1082130432;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 8;
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
	var uLocal_164 = -1;
	var uLocal_165 = 1092616192;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	int iLocal_168 = 0;
	struct<21> Local_169 = { 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<10> Local_190[15];
	int iLocal_341 = 0;
	var uLocal_342 = 0;
	struct<2> Local_343 = { 0, 16 } ;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	struct<414> Local_409 = { 0, 0, 0, 0, 0, 0, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = -1;
	var uLocal_828 = -1;
	var uLocal_829 = -1;
	var uLocal_830 = -1;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	struct<33> Local_839 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 4;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	struct<38> Local_881 = { 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4 } ;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	int iLocal_924 = 0;
	vector3 vLocal_925[1] = {{ 0f, 0f, 0f } };
	int iLocal_929 = 0;
	int iLocal_930 = 0;
	int iLocal_931 = 0;
	int iLocal_932 = 0;
	int iLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935[3] = { 0, 0, 0 };
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941[2] = { 0, 0 };
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	int iLocal_950 = 0;
	int iLocal_951 = 0;
	int iLocal_952 = 0;
	int iLocal_953 = 0;
	int iLocal_954 = 0;
	int iLocal_955 = 0;
	int iLocal_956 = 0;
	int iLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	int iLocal_966 = 0;
	int iLocal_967 = 0;
	int iLocal_968 = 0;
	int iLocal_969 = 0;
	int iLocal_970 = 0;
	bool bLocal_971 = 0;
	int iLocal_972 = 0;
	bool bLocal_973 = 0;
	int iLocal_974 = 0;
	int iLocal_975 = 0;
	int iLocal_976 = 0;
	int iLocal_977 = 0;
	vector3 vLocal_978 = { 0f, 0f, 0f };
	vector3 vLocal_981 = { 0f, 0f, 0f };
	vector3 vLocal_984 = { 0f, 0f, 0f };
	vector3 vLocal_987 = { 0f, 0f, 0f };
	vector3 vLocal_990 = { 0f, 0f, 0f };
	vector3 vLocal_993 = { 0f, 0f, 0f };
	vector3 vLocal_996 = { 0f, 0f, 0f };
	vector3 vLocal_999 = { 0f, 0f, 0f };
	vector3 vLocal_1002 = { 0f, 0f, 0f };
	vector3 vLocal_1005 = { 0f, 0f, 0f };
	char* sLocal_1008 = NULL;
	vector3 vLocal_1009[24] = "";
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	vector3 vLocal_1015[24] = "";
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	struct<6> Local_1021 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	bool bLocal_1033 = 0;
	struct<28> Local_1034 = { -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 5;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 0;
	var uLocal_1073 = 0;
	var uLocal_1074 = 0;
	var uLocal_1075 = 0;
	var uLocal_1076 = 0;
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	var uLocal_1080 = 0;
	var uLocal_1081 = 0;
	var uLocal_1082 = 0;
	var uLocal_1083 = 0;
	var uLocal_1084 = 0;
	var uLocal_1085 = 0;
	var uLocal_1086 = 0;
	var uLocal_1087 = 0;
	var uLocal_1088 = 0;
	var uLocal_1089 = 0;
	var uLocal_1090 = 0;
	var uLocal_1091 = 0;
	var uLocal_1092 = 0;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	var uLocal_1101 = 0;
	var uLocal_1102 = 0;
	var uLocal_1103 = 0;
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 1097859072;
	var uLocal_1108 = 1500;
	var uLocal_1109 = 45;
	var uLocal_1110 = 1103626240;
	var uLocal_1111 = 5;
	var uLocal_1112 = 0;
	var uLocal_1113 = 0;
	var uLocal_1114 = 0;
	var uLocal_1115 = 0;
	var uLocal_1116 = 0;
	var uLocal_1117 = 0;
	var uLocal_1118 = 0;
	var uLocal_1119 = 0;
	var uLocal_1120 = 0;
	var uLocal_1121 = 0;
	int iLocal_1122 = 0;
	int iLocal_1123 = 0;
	int iLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_77 = _0x4A9923385BDB9DAD();
	uLocal_78 = _GET_BLIP_INFO_ID_ITERATOR();
	vLocal_83 = { 500f, 500f, 500f };
	iLocal_929 = joaat("a_m_m_farmer_01");
	iLocal_930 = -1322183878;
	iLocal_931 = -1515940233;
	iLocal_932 = -1344435013;
	iLocal_950 = 1;
	iLocal_954 = 112;
	vLocal_978 = { 11.8607f, -1123.48f, 27.6801f };
	vLocal_981 = { 11.8607f, -1123.48f, 27.6801f };
	vLocal_984 = { 144.3291f, -3352.773f, 3.6651f };
	vLocal_987 = { 311.9527f, -3305.613f, 10.6651f };
	vLocal_990 = { 206.636f, -3322.673f, 4.6339f };
	vLocal_993 = { 0f, 0f, 24f };
	vLocal_996 = { 208.786f, -3319.823f, 4.6339f };
	vLocal_999 = { 0f, 0f, 47f };
	vLocal_1002 = { 199.5188f, -3326.201f, 4.78716f };
	vLocal_1005 = { 232.9944f, -3327.825f, 4.79877f };
	sLocal_1008 = "oddjobs@taxi@argument";
	StringCopy(&cLocal_1009, "txm12_deal1_7", 24);
	StringCopy(&cLocal_1015, "txm12_deal1_7", 24);
	if (HAS_FORCE_CLEANUP_OCCURRED(67))
	{
		func_427(2);
		func_425();
	}
	SET_MISSION_FLAG(1);
	func_409();
	Local_409.f_102 = 1;
	while (true)
	{
		if (DOES_ENTITY_EXIST(Local_409.f_2))
		{
			func_8();
		}
		else
		{
			func_1(&Local_409);
		}
		WAIT(0);
	}
}

void func_1(var uParam0)
{
	uParam0->f_2 = PLAYER_PED_ID();
	func_6(&(uParam0->f_244));
	uParam0->f_428 = func_2();
}

int func_2()
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_3(PLAYER_PED_ID());
	if (iVar1 == 0)
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	else if (iVar1 == 2)
	{
		iVar0 = joaat("sp2_dist_driving_car");
	}
	else if (iVar1 == 1)
	{
		iVar0 = joaat("sp1_dist_driving_car");
	}
	else
	{
		iVar0 = joaat("sp0_dist_driving_car");
	}
	return iVar0;
}

int func_3(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_4(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_4(int iParam0)
{
	if (func_5(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_5(int iParam0)
{
	return iParam0 < 3;
}

void func_6(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_3(PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_7(uParam0, 0, PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_7(uParam0, 0, PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_7(uParam0, 0, PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_7(uParam0, 0, PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_7(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_7(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_71590)
	{
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, 1);
			}
		}
		if (!IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 0);
			}
			else
			{
				SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, 1);
			}
		}
	}
}

void func_8()
{
	if (func_408(&Local_409))
	{
		func_407(&Local_409);
		if (func_406(&Local_409, 0))
		{
			func_404();
		}
	}
	else
	{
		func_403(&Local_409);
		if (Local_409.f_410 >= 9)
		{
			SET_CINEMATIC_BUTTON_ACTIVE(0);
			func_401();
		}
		func_367(&Local_409, &uLocal_1105);
		if (Local_409.f_410 < 22)
		{
			func_366(&Local_409);
		}
		func_365(&Local_409, &uLocal_958, 0);
		if (Local_409.f_410 > 5 && !IS_BIT_SET(uLocal_959, 0))
		{
			Local_409.f_17 = { 189.7825f, -3325.684f, 4.6697f };
			SET_BIT(&uLocal_959, 0);
		}
		if (Local_409.f_410 > 2)
		{
			if (!func_364(&Local_409))
			{
				func_331();
			}
			else
			{
				func_322(&Local_409, "Taxi Not Driveable", func_330(&Local_409));
			}
		}
		if (Local_409.f_410 == 9)
		{
			func_298(&Local_409, 0, 1);
		}
		if (DOES_ENTITY_EXIST(Local_409.f_3))
		{
			if (IS_ENTITY_DEAD(Local_409.f_3, 0))
			{
				if (!func_297(&Local_409, 0))
				{
					func_296(&Local_409, 0);
				}
				if (Local_409.f_410 >= 22 || iLocal_933 >= 1)
				{
					iLocal_968 = 1;
				}
				func_295(&(Local_839.f_3));
				func_295(&(Local_881.f_3));
				func_294(&uLocal_941);
				func_322(&Local_409, "TX12_GYB - Walter has been killed", 15);
			}
		}
		switch (Local_409.f_410)
		{
			case 0:
				func_291();
				func_290(&Local_409, 16, 4f, 0);
				func_288(&Local_409, vLocal_978, vLocal_981, "TaxiWalter", iLocal_929, 202f, 35f);
				func_286(&Local_409);
				func_285(&Local_409, 1);
				break;
			
			case 1:
				if (func_283())
				{
					func_282();
					func_281(&(vLocal_925[0 /*3*/]), "TAXI_SC_BN_12", 200);
					func_280(&Local_409, &vLocal_925);
					func_260();
					func_259(&Local_409);
					func_285(&Local_409, 2);
				}
				break;
			
			case 2:
				Local_409.f_14 = { vLocal_978 };
				Local_409.f_17 = { Local_839 };
				func_285(&Local_409, 3);
				break;
			
			case 3:
				if (func_254(&Local_409, 1))
				{
					if (!IS_ENTITY_DEAD(Local_409.f_3, 0))
					{
						SET_PED_COMPONENT_VARIATION(Local_409.f_3, 3, 0, 0, 0);
						SET_PED_COMPONENT_VARIATION(Local_409.f_3, 4, 0, 2, 0);
						SET_PED_COMPONENT_VARIATION(Local_409.f_3, 0, 0, 2, 0);
					}
					func_253(&Local_409, 1, 0);
					SET_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_923, Local_409.f_413);
					SET_RELATIONSHIP_BETWEEN_GROUPS(1, Local_409.f_413, uLocal_923);
					SET_PED_CAN_BE_TARGETTED(Local_409.f_3, 0);
					func_285(&Local_409, 5);
				}
				break;
			
			case 5:
				if (func_227(&Local_409, 0, 1109393408))
				{
					func_285(&Local_409, 15);
				}
				break;
			
			case 15:
				if (func_226(&Local_409))
				{
					func_222(&Local_409, 9, 1, 0, 0);
					func_221(&Local_409);
					func_285(&Local_409, 7);
				}
				if (IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0))
				{
					if (!IS_PED_IN_VEHICLE(Local_409.f_2, Local_409.f_4, 0))
					{
						func_219(&Local_409);
						func_285(&Local_409, 5);
					}
				}
				break;
			
			case 7:
				if (IS_BIT_SET(uLocal_959, 0))
				{
					func_218();
					func_285(&Local_409, 9);
				}
				break;
			
			case 9:
				func_202();
				if ((func_201(Local_409.f_4, Local_409.f_17, 1) < 675f && !Local_409.f_140) && !iLocal_966)
				{
					SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_984, vLocal_987, 0, 1);
					SET_PED_NON_CREATION_AREA(vLocal_984, vLocal_987);
					uLocal_947 = ADD_SCENARIO_BLOCKING_AREA(vLocal_984, vLocal_987, 0, 1, 1, 1);
					CLEAR_AREA_OF_PEDS(195.16f, -3282.54f, 4.79f, 25f, 0);
					func_200(&Local_409);
					func_198(&uLocal_1064);
					func_197(&Local_1034, 3, 0);
					func_222(&Local_409, 97, 1, 0, 0);
					GIVE_WEAPON_TO_PED(Local_409.f_2, joaat("weapon_combatpistol"), 200, 1, 1);
					iLocal_966 = 1;
				}
				if (func_166(&Local_409, 16f, 1097859072, 1117782016))
				{
					REMOVE_BLIP(&(Local_409.f_9));
					func_165(&uLocal_1105, 4);
					func_165(&uLocal_1105, 8);
					SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					SETTIMERA(0);
					func_285(&Local_409, 22);
				}
				if (func_201(Local_409.f_4, Local_409.f_17, 1) < 10f && func_164(Local_409.f_4, Local_839.f_3[1], 1) < 10f)
				{
					if (func_160(&Local_409, 1, 1084227584))
					{
						REMOVE_BLIP(&(Local_409.f_9));
						func_158(1, 0);
						func_158(2, 0);
						func_158(3, 0);
						func_158(4, 0);
						func_158(5, 0);
						func_158(0, 1);
						SET_WANTED_LEVEL_MULTIPLIER(0.1f);
						SETTIMERA(0);
						func_285(&Local_409, 22);
					}
				}
				if (!iLocal_970)
				{
				}
				if (!iLocal_970)
				{
					if (bLocal_971)
					{
						if ((((((((((IS_PED_INJURED(Local_839.f_3[0]) || IS_PED_INJURED(Local_839.f_3[1])) || IS_PED_INJURED(Local_839.f_3[2])) || IS_PED_INJURED(Local_839.f_3[3])) || (!IS_ENTITY_DEAD(Local_839.f_3[0], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[0]))) || (!IS_ENTITY_DEAD(Local_839.f_3[1], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[1]))) || (!IS_ENTITY_DEAD(Local_839.f_3[2], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[2]))) || (!IS_ENTITY_DEAD(Local_839.f_3[0], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[0], 0, 2))) || (!IS_ENTITY_DEAD(Local_839.f_3[1], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[1], 0, 2))) || (!IS_ENTITY_DEAD(Local_839.f_3[2], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[2], 0, 2))) || func_164(PLAYER_PED_ID(), Local_839.f_3[1], 1) < 6f)
						{
							SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[0], uLocal_923);
							func_295(&(Local_839.f_3));
							func_294(&uLocal_941);
							func_322(&Local_409, "Aggro Heard Shot", 8);
							iLocal_970 = 1;
						}
					}
				}
				break;
			
			case 22:
				if (func_157(Local_409.f_3, 1) < 250f)
				{
					if (func_123())
					{
						func_121(&uLocal_1105, 1);
						func_121(&uLocal_1105, 16);
						func_121(&uLocal_1105, 32);
						func_222(&Local_409, 100, 1, 0, 0);
						if (!IS_PED_INJURED(Local_409.f_3) && !IS_PED_INJURED(Local_409.f_2))
						{
							CLEAR_PED_TASKS_IMMEDIATELY(Local_409.f_3);
							TASK_GO_TO_ENTITY(Local_409.f_3, Local_409.f_2, 20000, 6f, 1073741824, 1073741824, 0);
						}
						SETTIMERA(0);
						Local_409.f_114 = 0;
						func_285(&Local_409, 24);
					}
				}
				else
				{
					func_322(&Local_409, "Player abandoned passenger", 8);
				}
				break;
			
			case 24:
				if (func_157(Local_409.f_2, 1) < 7f && TIMERA() > 3000)
				{
					TASK_LOOK_AT_ENTITY(Local_409.f_3, Local_409.f_2, -1, 2048, 4);
					CLEAR_SEQUENCE_TASK(&uLocal_934);
					OPEN_SEQUENCE_TASK(&uLocal_934);
					TASK_TURN_PED_TO_FACE_ENTITY(0, Local_409.f_2, -1);
					CLOSE_SEQUENCE_TASK(uLocal_934);
					TASK_PERFORM_SEQUENCE(Local_409.f_3, uLocal_934);
					Local_409.f_56 = 50;
					func_119(&Local_409);
					func_115(&Local_409);
					func_114(&Local_409);
					if (iLocal_957 == 8)
					{
						func_113(&Local_409, 0);
					}
					func_285(&Local_409, 27);
				}
				else if (func_157(Local_409.f_3, 1) > 100f)
				{
					func_322(&Local_409, "Player abandoned passenger", 8);
				}
				break;
			
			case 27:
				if ((!func_112() && !IS_ENTITY_DEAD(Local_409.f_3, 0)) && func_110(&Local_409, 19) > 2f)
				{
					func_109(&Local_409, 19, 0);
					func_285(&Local_409, 29);
					if (CREATE_INCIDENT(5, vLocal_1005, 1, 0f, &uLocal_948, 0, 0))
					{
						_0xD261BA3E7E998072(uLocal_948, 200f);
						bLocal_973 = true;
					}
					if (CREATE_INCIDENT(7, vLocal_1005, 3, 0f, &uLocal_949, 0, 0))
					{
						bLocal_973 = true;
					}
				}
				break;
			
			case 29:
				if (func_75(&Local_409, &uLocal_1112))
				{
					if (DOES_ENTITY_EXIST(Local_409.f_3))
					{
						if (!IS_ENTITY_DEAD(Local_409.f_3, 0))
						{
							CLEAR_PED_TASKS(Local_409.f_3);
							CLEAR_SEQUENCE_TASK(&uLocal_934);
							OPEN_SEQUENCE_TASK(&uLocal_934);
							TASK_SMART_FLEE_COORD(0, Local_409.f_17, 500f, 30000, 0, 0);
							TASK_FOLLOW_NAV_MESH_TO_COORD(0, 261.0916f, -3089.062f, 4.79249f, 2f, -1, 1048576000, 0, 1193033728);
							TASK_FOLLOW_NAV_MESH_TO_COORD(0, 304.6327f, -2965.922f, 5.00012f, 2f, -1, 1048576000, 0, 1193033728);
							TASK_FOLLOW_NAV_MESH_TO_COORD(0, 309.8907f, -2870.473f, 5.15704f, 2f, -1, 1048576000, 0, 1193033728);
							TASK_WANDER_STANDARD(0, 1193033728, 0);
							CLOSE_SEQUENCE_TASK(uLocal_934);
							TASK_PERFORM_SEQUENCE(Local_409.f_3, uLocal_934);
							SET_PED_KEEP_TASK(Local_409.f_3, 1);
						}
					}
					func_10(1, &Local_409, 0);
					SETTIMERA(0);
					func_285(&Local_409, 30);
				}
				break;
			
			case 30:
				if (func_9(PLAYER_PED_ID(), 213.4579f, -3329.471f, 4.7971f, 1) > 40f)
				{
					func_425();
				}
				else if (bLocal_973)
				{
					uLocal_946 = GET_RANDOM_VEHICLE_IN_SPHERE(vLocal_1005, 40f, joaat("ambulance"), 0);
					if (IS_VEHICLE_DRIVEABLE(uLocal_946, 0))
					{
						iLocal_974 = 1;
					}
					uLocal_946 = GET_RANDOM_VEHICLE_IN_SPHERE(vLocal_1005, 40f, joaat("police"), 0);
					if (IS_VEHICLE_DRIVEABLE(uLocal_946, 0))
					{
						iLocal_974 = 1;
					}
					uLocal_944 = GET_RANDOM_PED_AT_COORD(vLocal_1005, 10f, 10f, 5f, -1);
					if (!IS_PED_INJURED(uLocal_944))
					{
						iLocal_974 = 1;
					}
					if (iLocal_974 || TIMERA() > 30000)
					{
						SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), 1, 0);
						SET_PLAYER_WANTED_LEVEL_NOW(PLAYER_ID(), 0);
						func_425();
					}
				}
				else
				{
					func_425();
				}
				break;
			}
	}
}

float func_9(var uParam0, vector3 vParam1, int iParam4)
{
	vector3 vVar0;
	
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 0) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, iParam4);
}

void func_10(bool bParam0, var uParam1, bool bParam2)
{
	if (bParam0)
	{
		func_51(uParam1);
		if (!IS_PED_INJURED(uParam1->f_3))
		{
			SET_PED_CONFIG_FLAG(uParam1->f_3, 317, 1);
		}
	}
	else
	{
		func_49(1, 0);
	}
	func_11(uParam1, bParam2);
}

void func_11(var uParam0, bool bParam1)
{
	func_407(uParam0);
	if (func_112())
	{
		func_47();
	}
	func_45();
	CLEAR_PRINTS();
	CLEAR_HELP(1);
	func_41(0);
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 0);
		REMOVE_VEHICLE_STUCK_CHECK(uParam0->f_4);
		REMOVE_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
	}
	func_38(uParam0->f_14, 1);
	func_36(uParam0->f_14, 1, 1114636288);
	func_35(&(uParam0->f_244), 3);
	SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 32, 1);
	if (func_32())
	{
		SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
	}
	_0xC61B86C9F61EB404(1);
	func_22(0, 1, 1, 0, 0, 0);
	DISPLAY_RADAR(1);
	DISPLAY_HUD(1);
	if (DOES_CAM_EXIST(*uParam0))
	{
		DESTROY_CAM(*uParam0, 0);
		RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
	if (func_21(Global_106565.f_19091, 4))
	{
		func_121(&(Global_106565.f_19091), 4);
		SET_VEHICLE_MODEL_IS_SUPPRESSED(func_20(), 0);
	}
	if (bParam1)
	{
		func_19(uParam0);
	}
	func_18(uParam0);
	REMOVE_ANIM_DICT("gestures@m@standing@casual");
	REMOVE_ANIM_DICT("oddjobs@taxi@");
	REMOVE_ANIM_DICT("oddjobs@towingcome_here");
	if (NETWORK_IS_SIGNED_ONLINE())
	{
		func_16(uParam0->f_411);
	}
	if (!IS_PLAYER_CONTROL_ON(GET_PLAYER_INDEX()))
	{
		SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 1, 0);
	}
	PLAYSTATS_ODDJOB_DONE(ROUND((func_12(&uLocal_90) * 1000f)), 12, 0);
}

float func_12(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

float func_13(bool bParam0)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = TO_FLOAT(GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		uVar2 = GET_NETWORK_TIME();
		fVar3 = TO_FLOAT(uVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (TO_FLOAT(GET_GAME_TIMER()) / 1000f);
}

bool func_14(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

bool func_15(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

void func_16(int iParam0)
{
	var uVar0;
	
	if (iLocal_57[0] != 0)
	{
		MemCopy(&uVar0, {func_17(iParam0)}, 6);
		if (!IS_STRING_NULL(&uVar0))
		{
		}
	}
}

struct<8> func_17(int iParam0)
{
	struct<8> Var0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "TAXI_SC_N_NE", 32);
			break;
		
		case 1:
			StringCopy(&Var0, "TAXI_SC_N_TE", 32);
			break;
		
		case 2:
			StringCopy(&Var0, "TAXI_SC_N_DL", 32);
			break;
		
		case 3:
			StringCopy(&Var0, "TAXI_SC_N_GB", 32);
			break;
		
		case 4:
			StringCopy(&Var0, "TAXI_SC_N_TB", 32);
			break;
		
		case 5:
			StringCopy(&Var0, "TAXI_SC_N_CY", 32);
			break;
		
		case 6:
			StringCopy(&Var0, "TAXI_SC_N_GN", 32);
			break;
		
		case 7:
			StringCopy(&Var0, "TAXI_SC_N_CC", 32);
			break;
		
		case 8:
			StringCopy(&Var0, "TAXI_SC_N_FC", 32);
			break;
		
		case 9:
			StringCopy(&Var0, "TAXI_BLIP_CAR", 32);
			break;
		
		default:
			StringCopy(&Var0, "InvalidEnum", 32);
			break;
	}
	return Var0;
}

void func_18(var uParam0)
{
	_REMOVE_SPEED_ZONE(uParam0->f_51[0]);
}

void func_19(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (!IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
			{
				RESET_PED_LAST_VEHICLE(uParam0->f_3);
			}
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
			SET_RELATIONSHIP_BETWEEN_GROUPS(255, uParam0->f_413, 1862763509);
			if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
			{
				STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
			}
			else if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
			{
				STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
			}
			if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
			{
				STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
			}
			if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", -1056964608);
			}
			SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_3));
		}
	}
}

int func_20()
{
	return joaat("taxi");
}

bool func_21(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_22(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER_ID());
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 1);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 1);
		func_31(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_30())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_29(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_31(0);
		_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 0);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 0);
		func_29(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_27(PLAYER_ID())) && !func_24(PLAYER_ID(), 0)) && !func_23()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
			}
		}
		else if (((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_27(PLAYER_ID())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_23()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_24(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_25(-1, 0) == 8;
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

int func_25(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_26();
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

int func_26()
{
	return Global_1312745;
}

int func_27(int iParam0)
{
	if (func_24(iParam0, 0))
	{
		return 1;
	}
	if (func_28())
	{
		if (iParam0 == PLAYER_ID())
		{
			return 1;
		}
	}
	if (IS_BIT_SET(Global_2424047[iParam0 /*416*/].f_195, 2))
	{
		return 1;
	}
	return 0;
}

bool func_28()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_29(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (IS_PC_VERSION())
	{
		if (_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			_0x20746F7B1032A3C7(iParam0, uParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

int func_30()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_31(int iParam0)
{
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 13);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 13);
	}
}

int func_32()
{
	if (!func_34() && !func_33())
	{
		if (!IS_PLAYER_SCRIPT_CONTROL_ON(GET_PLAYER_INDEX()))
		{
			return 1;
		}
	}
	return 0;
}

int func_33()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appcamera")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_34()
{
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_35(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_36(vector3 vParam0, bool bParam3, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	
	vVar0 = { func_37(vParam0, 1f, -fParam4, -fParam4, -fParam4) };
	vVar3 = { func_37(vParam0, 1f, fParam4, fParam4, fParam4) };
	vVar0.z = (vVar0.z - 22f);
	vVar3.z = (vVar3.z + 22f);
	if (!bParam3)
	{
		SET_ROADS_IN_AREA(vVar0, vVar3, 0, 1);
	}
	else
	{
		SET_ROADS_BACK_TO_ORIGINAL(vVar0, vVar3, 1);
		CLEAR_PED_NON_CREATION_AREA();
	}
}

Vector3 func_37(vector3 vParam0, float fParam3, struct<2> Param4, float fParam6)
{
	vector3 vVar0;
	var uVar3;
	float fVar4;
	float fVar5;
	vector3 vVar6;
	
	uVar3 = fParam3;
	fVar4 = COS(uVar3);
	fVar5 = SIN(uVar3);
	vVar0.x = ((Param4 * fVar4) + (Param4.f_1 * fVar5));
	vVar0.y = ((Param4.f_1 * fVar4) - (Param4 * fVar5));
	vVar6 = { vParam0 + vVar0 };
	return vVar6;
}

void func_38(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!func_39(vParam0, func_40(), 0))
	{
		vVar0 = { func_37(vParam0, 1f, -30f, -30f, -10f) };
		vVar3 = { func_37(vParam0, 1f, 30f, 30f, 10f) };
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vVar0, vVar3, iParam3, 1);
	}
}

bool func_39(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_40()
{
	vector3 vVar0;
	
	return vVar0;
}

void func_41(int iParam0)
{
	if (func_44())
	{
		return;
	}
	if (Global_14725)
	{
		func_42(0, 0);
	}
	if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
	{
		SET_BIT(&Global_2424, 16);
	}
	if (IS_MOBILE_PHONE_CALL_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
	}
	Global_15866 = 5;
	if (iParam0 == 1)
	{
		SET_BIT(&Global_2423, 30);
	}
	else
	{
		CLEAR_BIT(&Global_2423, 30);
	}
	if (!func_30())
	{
		Global_14553.f_1 = 3;
	}
}

void func_42(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_43(0))
		{
			Global_14725 = 1;
			if (bParam1)
			{
				GET_MOBILE_PHONE_POSITION(&Global_14490);
			}
			Global_14481 = { Global_14499[Global_14498 /*3*/] };
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
	else if (Global_14725 == 1)
	{
		Global_14725 = 0;
		Global_14481 = { Global_14506[Global_14498 /*3*/] };
		if (bParam1)
		{
			SET_MOBILE_PHONE_POSITION(Global_14490);
		}
		else
		{
			SET_MOBILE_PHONE_POSITION(Global_14481);
		}
	}
}

int func_43(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14553.f_1 > 3)
		{
			if (IS_BIT_SET(Global_2423, 14))
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
	if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_14553.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_44()
{
	return IS_BIT_SET(Global_1681628, 19);
}

void func_45()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_90645[iVar0 /*17*/] && !Global_90645[iVar0 /*17*/].f_1)
		{
			if (Global_90645[iVar0 /*17*/].f_3 == 0)
			{
				if ((Global_90645[iVar0 /*17*/].f_5 != 88 && Global_90645[iVar0 /*17*/].f_5 != 89) && Global_90645[iVar0 /*17*/].f_5 != 92)
				{
					func_46(Global_90645[iVar0 /*17*/].f_5, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_87697[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_87697[iParam0 /*2*/] = 0;
	}
}

void func_47()
{
	Global_14732 = 0;
	func_48();
}

void func_48()
{
	RESTART_SCRIPTED_CONVERSATION();
	Global_16877 = 0;
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		STOP_SCRIPTED_CONVERSATION(0);
		Global_15866 = 6;
	}
}

void func_49(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			Global_106565.f_19091.f_22[0]++;
			func_50("Fares Completed ++ = ", Global_106565.f_19091.f_22[0]);
			break;
		
		case 1:
			Global_106565.f_19091.f_22[1]++;
			func_50("Fares Failed ++ = ", Global_106565.f_19091.f_22[1]);
			break;
		
		case 2:
			Global_106565.f_19091.f_22[2]++;
			func_50("Fares Accepted ++ ", Global_106565.f_19091.f_22[2]);
			break;
		
		case 3:
			Global_106565.f_19091.f_22[3]++;
			func_50("Fares Expired ++ ", Global_106565.f_19091.f_22[3]);
			break;
		
		case 13:
			Global_106565.f_19091.f_22[13]++;
			func_50("Passengers run ++ = ", Global_106565.f_19091.f_22[13]);
			break;
		
		case 14:
			Global_106565.f_19091.f_22[14]++;
			func_50("Passenger Forced to Pay ++ = ", Global_106565.f_19091.f_22[14]);
			break;
		
		case 4:
			if (iParam1 != 0)
			{
				if (iParam1 > Global_106565.f_19091.f_22[4])
				{
					Global_106565.f_19091.f_22[4] = iParam1;
					func_50("This distance ", iParam1);
					func_50(" is longer than current best", Global_106565.f_19091.f_22[4]);
				}
				else
				{
					func_50("Longest Distance Not Beat ", Global_106565.f_19091.f_22[4]);
				}
			}
			break;
		
		case 5:
			Global_106565.f_19091.f_22[5] = (Global_106565.f_19091.f_22[5] + iParam1);
			func_50("Total Distance w/ Passenger = ", Global_106565.f_19091.f_22[5]);
			break;
		
		case 6:
			if (iParam1 == 0)
			{
				Global_106565.f_19091.f_22[6]++;
			}
			else
			{
				Global_106565.f_19091.f_22[6] = (Global_106565.f_19091.f_22[6] + iParam1);
			}
			func_50("Wanted Levels ++ = ", Global_106565.f_19091.f_22[6]);
			break;
		
		case 7:
			if (iParam1 > 0)
			{
				Global_106565.f_19091.f_22[7] = (Global_106565.f_19091.f_22[7] + iParam1);
			}
			else
			{
				Global_106565.f_19091.f_22[7]++;
			}
			func_50("Wanted Levels Lost = ", Global_106565.f_19091.f_22[7]);
			break;
		
		case 8:
			Global_106565.f_19091.f_22[8]++;
			func_50("Taxis wrecked ++ = ", Global_106565.f_19091.f_22[8]);
			break;
		
		case 9:
			Global_106565.f_19091.f_22[9]++;
			func_50("Horn Honked ++ = ", Global_106565.f_19091.f_22[9]);
			break;
		
		case 10:
			Global_106565.f_19091.f_22[10] = (Global_106565.f_19091.f_22[10] + iParam1);
			func_50("Total Money Earned = ", Global_106565.f_19091.f_22[10]);
			break;
		
		case 11:
			Global_106565.f_19091.f_22[11] = (Global_106565.f_19091.f_22[11] + iParam1);
			func_50("Total Tips Earned = ", Global_106565.f_19091.f_22[11]);
			break;
		
		case 12:
			if (iParam1 > Global_106565.f_19091.f_22[12])
			{
				Global_106565.f_19091.f_22[12] = iParam1;
				func_50("New Highest Tip = ", Global_106565.f_19091.f_22[12]);
			}
			else
			{
				func_50("Highest Tip Not Reached = ", Global_106565.f_19091.f_22[12]);
			}
			break;
	}
}

void func_50(char* sParam0, int iParam1)
{
}

void func_51(var uParam0)
{
	func_49(0, 0);
	if (uParam0->f_411 != 9)
	{
		func_427(1);
		func_61(15, 1);
	}
	func_165(&(Global_106565.f_19091), 1024);
	if (!func_21(Global_106565.f_19091, 64))
	{
		func_52(func_59(func_60(uParam0)), 0, 0);
	}
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_58((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_106565.f_10188[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_106565.f_10188[iParam0 /*12*/].f_6 == 11 || Global_106565.f_10188[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_106565.f_10188[iParam0 /*12*/].f_5 = 1;
		Global_106565.f_10188[iParam0 /*12*/].f_10 = iParam1;
		Global_106565.f_10188[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_53();
	}
}

void func_53()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_106301 = 0;
	Global_106302 = 0;
	Global_106303 = 0;
	Global_106304 = 0;
	Global_106305 = 0;
	Global_106306 = 0;
	Global_106307 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_106565.f_10188.f_3853;
	Global_106565.f_10188.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_106565.f_10188[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_106565.f_10188[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_106301++;
					fVar1 = (fVar1 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_106302++;
					fVar2 = (fVar2 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_106303++;
					fVar3 = (fVar3 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_106304++;
					fVar4 = (fVar4 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_106305++;
					fVar5 = (fVar5 + (Global_106565.f_10188[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_106306++;
					fVar6 = (fVar6 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_106307++;
					fVar7 = (fVar7 + Global_106565.f_10188[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_106284 > 0)
	{
		if (Global_106301 == Global_106284)
		{
			fVar1 = 55f;
		}
	}
	if (Global_106285 > 0)
	{
		if (Global_106302 == Global_106285)
		{
			fVar2 = 10f;
		}
	}
	if (Global_106286 > 0)
	{
		if (Global_106303 == Global_106286)
		{
			fVar3 = 0f;
		}
	}
	if (Global_106287 > 0)
	{
		if (Global_106304 == Global_106287)
		{
			fVar4 = 10f;
		}
	}
	if (Global_106288 > 0)
	{
		if (((Global_106305 == Global_106288 || (Global_106288 * 10 / Global_106305) < 41) || Global_106305 > Global_106291) || Global_106305 == Global_106291)
		{
			if (!IS_BIT_SET(Global_106565.f_10188.f_3856, 14))
			{
				if (Global_106305 == Global_106288)
				{
					_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_106288, 0);
					SET_BIT(&(Global_106565.f_10188.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_106289 > 0)
	{
		if (Global_106306 == Global_106289)
		{
			fVar6 = 15f;
		}
	}
	if (Global_106290 > 0)
	{
		if (Global_106307 == Global_106290)
		{
			fVar7 = 5f;
		}
	}
	Global_106565.f_10188.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_106305 > Global_106291 || Global_106305 == Global_106291)
	{
		iVar9 = Global_106291;
	}
	else
	{
		iVar9 = Global_106305;
	}
	STAT_SET_INT(joaat("num_missions_completed"), Global_106301, 1);
	STAT_SET_INT(joaat("num_missions_available"), Global_106284, 1);
	STAT_SET_INT(joaat("num_minigames_completed"), Global_106302, 1);
	STAT_SET_INT(joaat("num_minigames_available"), Global_106285, 1);
	STAT_SET_INT(joaat("num_oddjobs_completed"), Global_106303, 1);
	STAT_SET_INT(joaat("num_oddjobs_available"), Global_106286, 1);
	STAT_SET_INT(joaat("num_rndpeople_completed"), Global_106304, 1);
	STAT_SET_INT(joaat("num_rndpeople_available"), Global_106287, 1);
	STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STAT_SET_INT(joaat("num_rndevents_available"), Global_106291, 1);
	STAT_SET_INT(joaat("num_misc_completed"), (Global_106307 + Global_106306), 1);
	STAT_SET_INT(joaat("num_misc_available"), (Global_106290 + Global_106289), 1);
	Global_106308 = (Global_106301 * 100 / Global_106284);
	Global_106310 = ((Global_106303 + Global_106302) * 100 / (Global_106286 + Global_106285));
	Global_106309 = ((Global_106304 + iVar9) * 100 / (Global_106287 + Global_106291));
	Global_106311 = ((Global_106306 + Global_106307) * 100 / (Global_106289 + Global_106290));
	STAT_SET_FLOAT(joaat("total_progress_made"), Global_106565.f_10188.f_3853, 1);
	STAT_SET_INT(joaat("percent_story_missions"), Global_106308, 1);
	STAT_SET_INT(joaat("percent_ambient_missions"), Global_106309, 1);
	STAT_SET_INT(joaat("percent_oddjobs"), Global_106310, 1);
	if (fVar8 > 0f && FLOOR(fVar8) < FLOOR(Global_106565.f_10188.f_3853))
	{
		func_57(13, FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_56() == 2 == 0 && !NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_54();
				}
			}
		}
	}
}

int func_54()
{
	if (func_55(0))
	{
		return 0;
	}
	if (Global_93721.f_8)
	{
		if (Global_93721.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_93721.f_10 > 1)
	{
		return 0;
	}
	Global_93721.f_10++;
	return 1;
}

int func_55(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

int func_56()
{
	return Global_25765;
}

int func_57(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = _GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return _SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

int func_58(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	
	if (iParam2 == -1)
	{
		iParam2 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		uVar2 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar2, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		uVar3 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar3, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		uVar4 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar4, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		uVar5 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar5, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		uVar6 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar6, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		uVar7 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar7, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		uVar8 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar8, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		uVar9 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar9, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		uVar10 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar10, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		uVar11 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar11, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		uVar12 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar12, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		uVar13 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar13, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		uVar14 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar14, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		uVar15 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar15, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		uVar16 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar16, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		uVar17 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar17, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		uVar18 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar18, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		uVar19 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar19, iParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		uVar20 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam2, "_CASINOPSTAT_BOOL");
		iVar1 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
		iVar0 = STAT_SET_BOOL_MASKED(uVar20, iParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_59(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

int func_60(var uParam0)
{
	return uParam0->f_411;
}

int func_61(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_62(iParam0, iParam1);
}

int func_62(int iParam0, int iParam1)
{
	if (func_74(14) && !func_73(iParam0))
	{
		return 0;
	}
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_26012 != 0 && !Global_71590)
	{
		return 0;
	}
	if (func_72(&Global_4269608))
	{
		if (func_70(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_63(&Global_4269608, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_63(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_74(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	func_66(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_64(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_64(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_74(14) && !func_73(iParam1))
	{
		return 0;
	}
	if (func_70(uParam0, iParam1))
	{
		return 0;
	}
	if (func_69(uParam0) < 0f)
	{
		func_68(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_65(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_65(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_66(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_67(uParam0, iVar0);
		iVar0++;
	}
	func_68(uParam0, (Global_4269607 - 0.5f));
}

void func_67(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_68(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_69(var uParam0)
{
	return uParam0->f_80;
}

bool func_70(var uParam0, int iParam1)
{
	return func_71(uParam0, iParam1) != -1;
}

int func_71(var uParam0, int iParam1)
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
	return -1;
}

bool func_72(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_73(int iParam0)
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

bool func_74(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_75(var uParam0, var uParam1)
{
	switch (iLocal_168)
	{
		case 0:
			if (!func_112() && func_110(uParam0, 0) > 1f)
			{
				if (func_32())
				{
					SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
				}
				func_108(uParam0);
				func_121(&(Global_106565.f_19091), 4096);
				func_105(uParam1, "TAXI_FARE_TITLE", uParam0->f_50, uParam0->f_56, ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105), uParam0->f_105, func_107(uParam0), "TAXI_FARE_MID", 4000, 1);
				uParam1->f_1 = 4000;
				PLAY_SOUND_FRONTEND(-1, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", 0);
				func_104(1);
				iLocal_168 = 6;
			}
			break;
		
		case 6:
			if (!func_98(uParam1, 0))
			{
				func_76(uParam0);
				func_290(uParam0, 0, 0, 0);
				func_104(0);
				iLocal_168 = 7;
				return 1;
			}
			break;
	}
	return 0;
}

void func_76(var uParam0)
{
	int iVar0;
	
	iVar0 = ((uParam0->f_50 + uParam0->f_56) + uParam0->f_105);
	if (iVar0 > 0)
	{
		func_77(func_96(), 21, iVar0, 0, 0);
		func_49(10, iVar0);
		iLocal_57[0] = iVar0;
	}
}

void func_77(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 3)
	{
		return;
	}
	if (Global_106565.f_28044[iParam0 /*29*/].f_17 == 4)
	{
		return;
	}
	func_78(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (bParam3)
	{
		iVar0 = 0;
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_random_peds");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_random_peds");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_random_peds");
					break;
				
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					iVar1 = joaat("sp0_money_made_from_missions");
					break;
				
				case 1:
					iVar1 = joaat("sp1_money_made_from_missions");
					break;
				
				case 2:
					iVar1 = joaat("sp2_money_made_from_missions");
					break;
				
				default:
					return;
				}
		}
		STAT_GET_INT(iVar1, &iVar0, -1);
		iVar0 = (iVar0 + iParam2);
		STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_95();
	if (iParam3 < 1)
	{
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_94(99, 1);
					func_93(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_92(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_87(5))
					{
						fVar0 = 0.9f;
						iVar1 = 5;
					}
					break;
				
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_87(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_93(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_93(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_93(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_87(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_93(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_93(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_93(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_86(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_94(95, iParam3);
					break;
				
				case 1:
					func_94(97, iParam3);
					break;
				
				case 2:
					func_94(96, iParam3);
					break;
			}
			func_94(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = FLOOR((fVar0 * TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_81(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_81(iVar1);
	}
	iVar5 = (Global_53668[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53668[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53668[iVar2] = 2147483647;
				}
				else
				{
					Global_53668[iVar2] = (Global_53668[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_93(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_93(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_93(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53668[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53668[iVar2];
			Global_53668[iVar2] = (Global_53668[iVar2] - iParam3);
			if (bParam4)
			{
				iVar4 = iVar3;
			}
			break;
	}
	if (iParam2 == 1)
	{
		if (iVar4 > 20)
		{
		}
	}
	else
	{
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_2[Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_106565.f_20558.f_233[iVar2 /*69*/]++;
		Global_106565.f_20558.f_233[iVar2 /*69*/].f_1++;
		if (Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_106565.f_20558.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_80(iParam0);
	if (Global_36425 == 15)
	{
		func_79(0);
	}
	return 1;
}

void func_79(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 11)
		{
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_106565.f_20558.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53676[iVar0 /*3*/][0] = Global_106565.f_20558[iVar0];
		Global_53676.f_31[iVar0 /*3*/][0] = Global_106565.f_20558.f_11[iVar0];
		Global_53676.f_62[iVar0 /*3*/][0] = Global_106565.f_20558.f_22[iVar0];
		Global_53676.f_93[iVar0 /*3*/][0] = Global_106565.f_20558.f_33[iVar0];
		Global_53676.f_124[iVar0 /*3*/][0] = Global_106565.f_20558.f_44[iVar0];
		Global_53676.f_155[iVar0 /*3*/][0] = Global_106565.f_20558.f_55[iVar0];
		Global_53676.f_186[iVar0 /*3*/][0] = Global_106565.f_20558.f_66[iVar0];
		Global_53676.f_217[iVar0 /*3*/][0] = Global_106565.f_20558.f_77[iVar0];
		Global_53676.f_248[iVar0 /*3*/][0] = Global_106565.f_20558.f_88[iVar0];
		if (!bParam0)
		{
			Global_53676[iVar0 /*3*/][1] = Global_106565.f_20558[iVar0];
			Global_53676.f_31[iVar0 /*3*/][1] = Global_106565.f_20558.f_11[iVar0];
			Global_53676.f_62[iVar0 /*3*/][1] = Global_106565.f_20558.f_22[iVar0];
			Global_53676.f_93[iVar0 /*3*/][1] = Global_106565.f_20558.f_33[iVar0];
			Global_53676.f_124[iVar0 /*3*/][1] = Global_106565.f_20558.f_44[iVar0];
			Global_53676.f_155[iVar0 /*3*/][1] = Global_106565.f_20558.f_55[iVar0];
			Global_53676.f_186[iVar0 /*3*/][1] = Global_106565.f_20558.f_66[iVar0];
			Global_53676.f_217[iVar0 /*3*/][1] = Global_106565.f_20558.f_77[iVar0];
			Global_53676.f_248[iVar0 /*3*/][1] = Global_106565.f_20558.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_80(int iParam0)
{
	var uVar0;
	
	uVar0 = Global_53668[iParam0];
	switch (iParam0)
	{
		case 0:
			STAT_SET_INT(joaat("sp0_total_cash"), uVar0, 1);
			break;
		
		case 1:
			STAT_SET_INT(joaat("sp1_total_cash"), uVar0, 1);
			break;
		
		case 2:
			STAT_SET_INT(joaat("sp2_total_cash"), uVar0, 1);
			break;
	}
}

void func_81(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_58(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_58(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_58(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_58(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_84(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_84(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_84(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_84(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_84(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_84(8274, 0, -1, 1, 0);
		return;
	}
	bVar0 = false;
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_106565.f_20558.f_471, iParam0))
		{
			bVar0 = true;
			CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || IS_BIT_SET(Global_2097152[func_83() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		CLEAR_BIT(&(Global_2097152[func_83() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_82(iParam0));
		_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_82(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COUP_HAIRC";
		
		case 1:
			return "COUP_TATTOO";
		
		case 2:
			return "COUP_WARSTOCK";
		
		case 3:
			return "COUP_MOSPORT";
		
		case 4:
			return "COUP_ELITAS";
		
		case 5:
			return "COUP_MEDSPENS";
		
		case 6:
			return "COUP_SPRUNK";
		
		case 7:
			return "COUP_RESPRAY";
		
		case 8:
			return "COUP_XMAS2017";
		
		case 9:
			return "COUP_CAR_XMAS2018";
		
		case 10:
			return "COUP_HELI_XMAS2018";
		
		case 11:
			return "COUP_CAR2_XMAS2018";
		
		case 12:
			return "COUP_CAS_ELITAS";
		
		case 13:
			return "COUP_CAS_DOCKTEASE";
		
		case 14:
			return "COUP_CAS_MOSPORT";
		
		case 15:
			return "COUP_CAS_SSASA";
		
		case 16:
			return "COUP_CAS_WARSTOCK";
		
		case 17:
			return "COUP_CAS_PANDM";
		
		default:
	}
	return "";
}

int func_83()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_85(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_85(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_26();
		if (iVar1 > -1)
		{
			Global_2539215 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2539215 = 1;
		}
	}
	return iVar0;
}

void func_86(int iParam0)
{
	func_94(93, iParam0);
	func_94(29, iParam0);
	func_94(30, iParam0);
}

int func_87(int iParam0)
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
	int iVar10;
	int iVar11;
	
	if (iParam0 == 8)
	{
		return func_89(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_89(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_89(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_89(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = GET_CLOUD_TIME_AS_INT();
		iVar1 = func_88(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = GET_CLOUD_TIME_AS_INT();
		iVar3 = func_88(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = GET_CLOUD_TIME_AS_INT();
		iVar5 = func_88(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = GET_CLOUD_TIME_AS_INT();
		iVar7 = func_88(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = GET_CLOUD_TIME_AS_INT();
		iVar9 = func_88(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = GET_CLOUD_TIME_AS_INT();
		iVar11 = func_88(8274, -1, 0);
		if (iVar11 == 0 || iVar10 >= iVar11)
		{
			return 0;
		}
		return 1;
	}
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		return IS_BIT_SET(Global_106565.f_20558.f_471, iParam0);
	}
	return IS_BIT_SET(Global_2097152[func_83() /*10778*/].f_6165.f_10, iParam0);
}

int func_88(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_85(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_89(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar1 = func_91(iParam0, iParam1);
	uVar2 = func_90(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_90(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - _0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - _0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - _0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - _0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - _0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - _0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - _0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - _0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - _0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - _0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - _0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - _0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - _0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - _0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - _0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - _0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - _0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - _0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = ((iParam0 - 26810) - _0xF4D8E7AC2A27758C((iParam0 - 26810)) * 64);
	}
	return iVar0;
}

int func_91(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_26();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = _GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = _GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	else if (iParam0 >= 26810 && iParam0 < 27258)
	{
		iVar0 = _GET_NGSTAT_BOOL_HASH((iParam0 - 26810), 0, 1, iParam1, "_CASINOPSTAT_BOOL");
	}
	return iVar0;
}

int func_92(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_57(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_61(27, 1);
	return 1;
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	
	STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STAT_SET_INT(iParam0, iVar0, 1);
}

void func_94(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_52236[iParam0 /*7*/])
	{
		STAT_GET_INT(Global_52236[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STAT_SET_INT(Global_52236[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_95()
{
	int iVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53668[0] == iVar0)
		{
			Global_53668[0] = iVar0;
		}
		STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53668[1] == iVar0)
		{
			Global_53668[1] = iVar0;
		}
		STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53668[2] == iVar0)
		{
			Global_53668[2] = iVar0;
		}
	}
}

int func_96()
{
	func_97();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_97()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_4(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_3(PLAYER_PED_ID());
			if (func_5(iVar0) && (!func_74(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_5(Global_106565.f_2357.f_539.f_4321))
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

int func_98(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_2)))
	{
		func_102(&(uParam0->f_2));
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(14);
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	if (iParam1 || uParam0->f_8)
	{
		if (IS_CONTROL_JUST_PRESSED(2, 201) || uParam0->f_8)
		{
			if (!func_15(&(uParam0->f_5)))
			{
				func_102(&(uParam0->f_5));
				func_101(uParam0, 1051260355);
			}
		}
		if (func_15(&(uParam0->f_5)))
		{
			if (func_100(&(uParam0->f_5)) > 0.33f)
			{
				func_99(&(uParam0->f_5));
				return 0;
			}
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_100(&(uParam0->f_2)) * 1000f) > TO_FLOAT(uParam0->f_1)
	{
		if (!func_15(&(uParam0->f_5)))
		{
			func_102(&(uParam0->f_5));
			func_101(uParam0, 1051260355);
		}
		else if (func_100(&(uParam0->f_5)) > 0.33f)
		{
			func_99(&(uParam0->f_2));
			return 0;
		}
	}
	return 1;
}

void func_99(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

float func_100(var uParam0)
{
	if (func_15(uParam0))
	{
		if (func_14(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_13(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

void func_101(var uParam0, int iParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHARD_ANIM_OUT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_9);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_102(var uParam0)
{
	func_103(uParam0, 0f);
}

void func_103(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_13(IS_BIT_SET(*uParam0, 4)) - fParam1);
	SET_BIT(uParam0, 1);
	CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_104(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

void func_105(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, var uParam5, var uParam6, char* sParam7, int iParam8, int iParam9)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, func_106());
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
	_SET_NOTIFICATION_COLOR_NEXT(iParam9);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	END_TEXT_COMMAND_SCALEFORM_STRING();
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam7);
	ADD_TEXT_COMPONENT_INTEGER(uParam2);
	ADD_TEXT_COMPONENT_INTEGER(uParam3);
	ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam6);
	ADD_TEXT_COMPONENT_INTEGER(uParam5);
	ADD_TEXT_COMPONENT_INTEGER(iParam4);
	END_TEXT_COMMAND_SCALEFORM_STRING();
	END_SCALEFORM_MOVIE_METHOD();
	func_102(&(uParam0->f_2));
	uParam0->f_1 = iParam8;
	uParam0->f_9 = 1;
}

char* func_106()
{
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		return "SHOW_COND_SHARD_MESSAGE";
	}
	return "SHOW_SHARD_MIDSIZED_MESSAGE";
}

char* func_107(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TAXI_SC_BN_02";
			break;
		
		case 1:
			sVar0 = "TAXI_SC_BN_01";
			break;
		
		case 2:
			sVar0 = "TAXI_SC_BN_03";
			break;
		
		case 3:
			sVar0 = "TAXI_SC_BN_12";
			break;
		
		case 4:
			sVar0 = "TAXI_SC_BN_08";
			break;
		
		case 5:
			sVar0 = "TAXI_SC_BN_07";
			break;
		
		case 6:
			sVar0 = "TAXI_SC_KO";
			break;
		
		case 7:
			sVar0 = "TAXI_SC_BN_10";
			break;
		
		case 8:
			sVar0 = "TAXI_SC_BN_04";
			break;
	}
	return sVar0;
}

void func_108(var uParam0)
{
	int iVar0;
	
	Local_169.f_1 = TO_FLOAT(uParam0->f_50);
	Local_169.f_2 = TO_FLOAT(uParam0->f_56);
	func_49(11, uParam0->f_56);
	func_49(12, uParam0->f_56);
	iLocal_57[1] = uParam0->f_56;
	iLocal_57[2] = uParam0->f_56;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_60)
	{
		Local_169.f_4[iVar0 /*3*/] = { uParam0->f_60[iVar0 /*3*/] };
		if (IS_BIT_SET(Local_169.f_4[iVar0 /*3*/], 2))
		{
			Local_169.f_3 = (Local_169.f_3 + IntToFloat(uParam0->f_60[iVar0 /*3*/].f_1));
		}
		iVar0++;
	}
	Local_169 = uParam0->f_411;
	Local_169.f_20 = ((Local_169.f_1 + Local_169.f_2) + Local_169.f_3);
}

void func_109(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam1 == 14)
	{
	}
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			func_99(&(uParam0->f_146[iVar0 /*3*/]));
			iVar0++;
		}
	}
	else
	{
		func_99(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam2)
	{
	}
}

float func_110(var uParam0, int iParam1)
{
	if (!func_15(&(uParam0->f_146[iParam1 /*3*/])))
	{
		func_111(&(uParam0->f_146[iParam1 /*3*/]));
	}
	return func_100(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_111(var uParam0)
{
	if (!func_15(uParam0))
	{
		func_102(uParam0);
	}
}

int func_112()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_113(var uParam0, int iParam1)
{
	if (iParam1 < 5)
	{
		SET_BIT(&(uParam0->f_60[iParam1 /*3*/]), 2);
		uParam0->f_105 = (uParam0->f_105 + uParam0->f_60[iParam1 /*3*/].f_1);
	}
}

void func_114(var uParam0)
{
	if (uParam0->f_56 >= uParam0->f_59)
	{
		uParam0->f_56 = CEIL((IntToFloat(uParam0->f_50) * 0.4f));
	}
	else if (uParam0->f_56 < uParam0->f_59 && uParam0->f_56 >= uParam0->f_58)
	{
		uParam0->f_56 = CEIL((IntToFloat(uParam0->f_50) * 0.15f));
	}
	else
	{
		uParam0->f_56 = 0;
	}
	if (!func_21(uParam0->f_55, 1))
	{
		func_165(&(uParam0->f_55), 1);
	}
}

void func_115(var uParam0)
{
	func_117();
	CLEAR_PRINTS();
	if (uParam0->f_56 < uParam0->f_58)
	{
		if (uParam0->f_411 == 0)
		{
			func_222(uParam0, 105, 1, 0, 0);
		}
		else
		{
			func_222(uParam0, 103, 1, 0, 0);
		}
		func_116(1);
	}
	else if (uParam0->f_56 >= uParam0->f_59)
	{
		func_222(uParam0, 101, 1, 0, 0);
	}
	else
	{
		func_222(uParam0, 102, 1, 0, 0);
	}
	func_290(uParam0, 16, 4f, 0);
}

void func_116(int iParam0)
{
	Global_105275.f_221 = iParam0;
}

void func_117()
{
	Global_14732 = 0;
	func_118();
}

void func_118()
{
	if (IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		RESTART_SCRIPTED_CONVERSATION();
		Global_16877 = 0;
		STOP_SCRIPTED_CONVERSATION(1);
		Global_15866 = 6;
		return;
	}
}

void func_119(var uParam0)
{
	float fVar0;
	
	fVar0 = uParam0->f_41;
	fVar0 = func_120(fVar0);
	iLocal_57[4] = CEIL(fVar0);
	iLocal_57[5] = CEIL(fVar0);
	func_49(4, CEIL(fVar0));
	func_49(5, CEIL(fVar0));
	uParam0->f_50 = CEIL((fVar0 * 100f));
}

float func_120(float fParam0)
{
	return (fParam0 * 0.0006213712f);
}

void func_121(var uParam0, int iParam1)
{
	func_122(uParam0, iParam1);
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_123()
{
	int iVar0;
	
	if (iLocal_933 < 4 && ((((((((((IS_PED_INJURED(Local_839.f_3[0]) || IS_PED_INJURED(Local_839.f_3[1])) || IS_PED_INJURED(Local_839.f_3[2])) || (!IS_ENTITY_DEAD(Local_839.f_3[0], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[0]))) || (!IS_ENTITY_DEAD(Local_839.f_3[1], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[1]))) || (!IS_ENTITY_DEAD(Local_839.f_3[2], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Local_839.f_3[2]))) || (!IS_ENTITY_DEAD(Local_839.f_3[0], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[0], 0, 2))) || (!IS_ENTITY_DEAD(Local_839.f_3[1], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[1], 0, 2))) || (!IS_ENTITY_DEAD(Local_839.f_3[2], 0) && HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Local_839.f_3[2], 0, 2))) || func_164(PLAYER_PED_ID(), Local_839.f_3[1], 1) < 6f) || (IS_ENTITY_AT_COORD(PLAYER_PED_ID(), 204.0783f, -3331.305f, 6.040432f, 7.5f, 7.5f, 1.25f, 0, 1, 0) && ((((((!IS_ENTITY_DEAD(Local_839.f_3[0], 0) && IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), Local_839.f_3[0])) || (!IS_ENTITY_DEAD(Local_839.f_3[1], 0) && IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), Local_839.f_3[1]))) || (!IS_ENTITY_DEAD(Local_839.f_3[2], 0) && IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), Local_839.f_3[2]))) || (!IS_ENTITY_DEAD(Local_839.f_3[0], 0) && IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), Local_839.f_3[0]))) || (!IS_ENTITY_DEAD(Local_839.f_3[1], 0) && IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), Local_839.f_3[1]))) || (!IS_ENTITY_DEAD(Local_839.f_3[2], 0) && IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), Local_839.f_3[2]))))))
	{
		Local_409.f_114 = 1;
		iLocal_933 = 4;
	}
	switch (iLocal_933)
	{
		case 0:
			func_222(&Local_409, 90, 1, 0, 0);
			func_197(&Local_1034, -1, 1);
			func_156();
			CLEAR_BIT(&uLocal_959, 1);
			if (!IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_964))
			{
				if ((!IS_PED_INJURED(Local_839.f_3[0]) && !IS_PED_INJURED(Local_839.f_3[1])) && !IS_PED_INJURED(Local_839.f_3[2]))
				{
					uLocal_964 = CREATE_SYNCHRONIZED_SCENE(vLocal_996, vLocal_999, 2);
					SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_964, 1);
					TASK_SYNCHRONIZED_SCENE(Local_839.f_3[0], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
					TASK_SYNCHRONIZED_SCENE(Local_839.f_3[1], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
					TASK_SYNCHRONIZED_SCENE(Local_839.f_3[2], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1148846080, 0);
				}
			}
			iLocal_951 = GET_GAME_TIMER();
			iLocal_933 = 1;
			break;
		
		case 1:
			if (!func_112() && !IS_BIT_SET(uLocal_959, 10))
			{
				func_222(&Local_409, 91, 1, 0, 0);
				SET_BIT(&uLocal_959, 10);
				func_111(&uLocal_1027);
			}
			if ((GET_GAME_TIMER() - iLocal_951) > 4000)
			{
				if (!IS_PLAYER_CONTROL_ON(GET_PLAYER_INDEX()))
				{
					if (func_155(&Local_409))
					{
						func_154("TAXI_VIEW", -1);
					}
					iLocal_967 = 1;
					if ((!IS_PED_INJURED(Local_839.f_3[3]) && !IS_PED_INJURED(uLocal_941[0])) && !IS_PED_INJURED(uLocal_941[1]))
					{
						uLocal_961 = CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
						TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], uLocal_961, "oddjobs@taxi@argument", "bridge_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK_SYNCHRONIZED_SCENE(uLocal_941[0], uLocal_961, "oddjobs@taxi@argument", "bridge_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK_SYNCHRONIZED_SCENE(uLocal_941[1], uLocal_961, "oddjobs@taxi@argument", "bridge_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
					}
					SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 1, 0);
				}
			}
			if (func_153("TAXI_VIEW") && (IS_CONTROL_PRESSED(0, 80) || !IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0)))
			{
				CLEAR_HELP(1);
			}
			if (!IS_PED_INJURED(Local_409.f_3) && (!func_112() || func_12(&uLocal_1027) > 9f))
			{
				if ((IS_ENTITY_AT_COORD(Local_409.f_3, vLocal_1002, 1.5f, 1.5f, 2f, 0, 1, 0) && GET_SCRIPT_TASK_STATUS(Local_409.f_3, 242628503) == 7) && (IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_964) && GET_SYNCHRONIZED_SCENE_PHASE(uLocal_964) > 0.995f))
				{
					if ((!IS_PED_INJURED(Local_839.f_3[0]) && !IS_PED_INJURED(Local_839.f_3[1])) && !IS_PED_INJURED(Local_839.f_3[2]))
					{
						uLocal_965 = CREATE_SYNCHRONIZED_SCENE(vLocal_996, vLocal_999, 2);
						TASK_SYNCHRONIZED_SCENE(Local_839.f_3[0], uLocal_965, "oddjobs@taxi@argument", "stand_off_biker_a", 1000f, -4f, 0, 0, 1148846080, 0);
						TASK_SYNCHRONIZED_SCENE(Local_839.f_3[1], uLocal_965, "oddjobs@taxi@argument", "stand_off_biker_b", 1000f, -4f, 0, 0, 1148846080, 0);
						TASK_SYNCHRONIZED_SCENE(Local_839.f_3[2], uLocal_965, "oddjobs@taxi@argument", "stand_off_biker_c", 1000f, -4f, 0, 0, 1148846080, 0);
						_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_965, 1);
					}
					TASK_PLAY_ANIM(Local_409.f_3, "oddjobs@taxi@argument", "stand_off_passenger", 4f, -1056964608, -1, 0, 0, 0, 0, 0);
					iLocal_953 = GET_GAME_TIMER();
					iLocal_951 = GET_GAME_TIMER();
					iLocal_933 = 2;
				}
			}
			break;
		
		case 2:
			if ((GET_GAME_TIMER() - iLocal_951) > 2500 && !IS_BIT_SET(uLocal_959, 1))
			{
				func_222(&Local_409, 89, 1, 1, 0);
				SET_BIT(&uLocal_959, 1);
			}
			if (((GET_SYNCHRONIZED_SCENE_PHASE(uLocal_965) >= 0.838f && !IS_PED_INJURED(Local_409.f_3)) && !IS_PED_INJURED(Local_839.f_3[1])) && !IS_BIT_SET(uLocal_959, 6))
			{
				GIVE_WEAPON_TO_PED(Local_839.f_3[1], joaat("weapon_pistol"), -1, 1, 1);
				GIVE_WEAPON_TO_PED(Local_409.f_3, joaat("weapon_pistol"), -1, 1, 1);
				SET_BIT(&uLocal_959, 6);
			}
			if ((GET_SYNCHRONIZED_SCENE_PHASE(uLocal_965) >= 0.853f && !IS_PED_INJURED(Local_839.f_3[2])) && !IS_BIT_SET(uLocal_959, 7))
			{
				GIVE_WEAPON_TO_PED(Local_839.f_3[2], joaat("weapon_pistol"), -1, 1, 1);
				SET_BIT(&uLocal_959, 7);
			}
			if (!IS_BIT_SET(uLocal_959, 3))
			{
				if ((IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_961) && GET_SYNCHRONIZED_SCENE_PHASE(uLocal_961) == 1f) || !IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_961))
				{
					if ((!IS_PED_INJURED(Local_839.f_3[3]) && !IS_PED_INJURED(uLocal_941[0])) && !IS_PED_INJURED(uLocal_941[1]))
					{
						uLocal_962 = CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
						TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], uLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK_SYNCHRONIZED_SCENE(uLocal_941[0], uLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
						TASK_SYNCHRONIZED_SCENE(uLocal_941[1], uLocal_962, "oddjobs@taxi@argument", "hooker_loop_b_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
						SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_962, 1);
						SET_BIT(&uLocal_959, 3);
					}
				}
			}
			if (IS_BIT_SET(uLocal_959, 1))
			{
				Local_1021 = { func_152() };
				if (ARE_STRINGS_EQUAL(&cLocal_1009, &Local_1021) || ARE_STRINGS_EQUAL(&cLocal_1015, &Local_1021))
				{
					if ((!IS_PED_INJURED(Local_839.f_3[3]) && !IS_PED_INJURED(uLocal_941[0])) && !IS_PED_INJURED(uLocal_941[1]))
					{
						if (IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_962))
						{
							uLocal_963 = CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
							TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK_SYNCHRONIZED_SCENE(uLocal_941[0], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK_SYNCHRONIZED_SCENE(uLocal_941[1], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
							_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_963, 1);
							iLocal_952 = GET_GAME_TIMER();
							iLocal_933 = 3;
						}
						else
						{
							uLocal_963 = CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
							TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_biker_d", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK_SYNCHRONIZED_SCENE(uLocal_941[0], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
							TASK_SYNCHRONIZED_SCENE(uLocal_941[1], uLocal_963, "oddjobs@taxi@argument", "hooker_outro_hooker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
							_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(uLocal_963, 1);
							iLocal_952 = GET_GAME_TIMER();
							iLocal_933 = 3;
						}
					}
				}
			}
			break;
		
		case 3:
			switch (iLocal_955)
			{
				case 0:
					if (((GET_GAME_TIMER() - iLocal_952) > 850 && !IS_PED_INJURED(Local_839.f_3[3])) && !IS_BIT_SET(uLocal_959, 8))
					{
						GIVE_WEAPON_TO_PED(Local_839.f_3[3], joaat("weapon_pistol"), -1, 1, 1);
						SET_BIT(&uLocal_959, 8);
					}
					if (((!IS_PED_INJURED(Local_839.f_3[0]) && !IS_PED_INJURED(Local_839.f_3[1])) && !IS_PED_INJURED(Local_839.f_3[2])) && !IS_PED_INJURED(Local_409.f_3))
					{
						SET_PED_RESET_FLAG(Local_839.f_3[0], 156, 1);
						SET_PED_RESET_FLAG(Local_839.f_3[1], 156, 1);
						SET_PED_RESET_FLAG(Local_839.f_3[2], 156, 1);
						SET_PED_RESET_FLAG(Local_409.f_3, 156, 1);
						if (((IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_965) && GET_SYNCHRONIZED_SCENE_PHASE(uLocal_965) == 1f) || !IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_965)) || (GET_GAME_TIMER() - iLocal_953) > 27000)
						{
							if ((GET_GAME_TIMER() - iLocal_953) > 27000)
							{
							}
							iLocal_976 = 1;
							TASK_AIM_GUN_AT_ENTITY(Local_839.f_3[0], Local_409.f_3, -1, 0);
							TASK_AIM_GUN_AT_ENTITY(Local_839.f_3[1], Local_409.f_3, -1, 0);
							TASK_AIM_GUN_AT_ENTITY(Local_839.f_3[2], Local_409.f_3, -1, 0);
							TASK_AIM_GUN_AT_ENTITY(Local_409.f_3, Local_839.f_3[1], -1, 0);
							iLocal_951 = 0;
							iLocal_955++;
						}
					}
					break;
				
				case 1:
					if (((GET_GAME_TIMER() - iLocal_952) > 850 && !IS_PED_INJURED(Local_839.f_3[3])) && !IS_BIT_SET(uLocal_959, 8))
					{
						GIVE_WEAPON_TO_PED(Local_839.f_3[3], joaat("weapon_pistol"), -1, 1, 1);
						SET_BIT(&uLocal_959, 8);
					}
					if (!IS_PED_INJURED(Local_839.f_3[3]))
					{
						SET_PED_RESET_FLAG(Local_839.f_3[3], 156, 1);
					}
					if (!IS_BIT_SET(uLocal_959, 4))
					{
						if (!IS_SYNCHRONIZED_SCENE_RUNNING(uLocal_963) || GET_SYNCHRONIZED_SCENE_PHASE(uLocal_963) == 1f)
						{
							if (((!IS_PED_INJURED(Local_839.f_3[3]) && !IS_PED_INJURED(uLocal_941[0])) && !IS_PED_INJURED(uLocal_941[1])) && !IS_PED_INJURED(Local_409.f_3))
							{
								TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_941[0], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 1048576000, 0, 1193033728);
								TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_941[1], 299.3585f, -3204.905f, 4.7214f, 3f, 20000, 1048576000, 0, 1193033728);
								FORCE_PED_MOTION_STATE(uLocal_941[0], -1115154469, 0, 0, 0);
								FORCE_PED_MOTION_STATE(uLocal_941[1], -1115154469, 0, 0, 0);
								TASK_AIM_GUN_AT_ENTITY(Local_839.f_3[3], Local_409.f_3, -1, 1);
								SET_BIT(&uLocal_959, 4);
							}
						}
					}
					Local_1021 = { func_152() };
					if (ARE_STRINGS_EQUAL("txm12_deal1_7", &Local_1021) && iLocal_951 == 0)
					{
						iLocal_951 = GET_GAME_TIMER();
					}
					else if ((iLocal_951 > 0 && (GET_GAME_TIMER() - iLocal_951) > 1500) && !IS_BIT_SET(uLocal_959, 9))
					{
						func_151();
						func_150("TAXI_OBJ_GYB", 4000, 0);
						func_149(&(Local_839.f_3), &(Local_839.f_11));
						iLocal_967 = 0;
						DESTROY_CAM(Local_409, 0);
						RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
						iLocal_951 = GET_GAME_TIMER();
						iLocal_955 = 2;
						SET_BIT(&uLocal_959, 9);
					}
					else if (iLocal_951 > 0 && (GET_GAME_TIMER() - iLocal_951) > 1200)
					{
						if (func_148() && IS_CAM_ACTIVE(Local_409))
						{
							if (!iLocal_977)
							{
								_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
								PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_977 = 1;
							}
						}
					}
					break;
				
				case 2:
					if ((GET_GAME_TIMER() - iLocal_951) > 4000 && IS_BIT_SET(uLocal_959, 9))
					{
						func_138(&(Local_409.f_244), Local_409.f_144, "txm12_deal1", "txm12_deal1_9", 9, 0, 0);
						iLocal_951 = GET_GAME_TIMER();
						CLEAR_BIT(&uLocal_959, 9);
					}
					if ((((!IS_PED_INJURED(Local_409.f_3) && !IS_PED_INJURED(Local_839.f_3[0])) && !IS_PED_INJURED(Local_839.f_3[2])) && !IS_BIT_SET(uLocal_959, 9)) && (GET_GAME_TIMER() - iLocal_951) > 2000)
					{
						SET_ENTITY_HEALTH(Local_839.f_3[0], 115, 0);
						SET_ENTITY_HEALTH(Local_839.f_3[2], 115, 0);
						iLocal_951 = GET_GAME_TIMER();
						iLocal_955 = 8;
					}
					break;
				
				case 3:
					if (!func_112())
					{
						func_222(&Local_409, 12, 1, 0, 0);
						func_290(&Local_409, 19, 0, 0);
						iLocal_951 = GET_GAME_TIMER();
						iLocal_955++;
					}
					break;
				
				case 4:
					if (!IS_MESSAGE_BEING_DISPLAYED())
					{
						func_290(&Local_409, 19, 0, 0);
						func_222(&Local_409, 116, 1, 0, 0);
						iLocal_955++;
					}
					break;
				
				case 5:
				case 6:
				case 7:
					if (func_110(&Local_409, 19) > 2f)
					{
						func_290(&Local_409, 19, 0, 0);
						func_222(&Local_409, 116, 1, 0, 0);
						iLocal_955++;
					}
					break;
				
				case 8:
					if ((!IS_PED_INJURED(Local_839.f_3[0]) && !IS_PED_INJURED(Local_839.f_3[1])) && !IS_PED_INJURED(Local_839.f_3[2]))
					{
						CLEAR_RELATIONSHIP_BETWEEN_GROUPS(1, uLocal_923, Local_409.f_413);
						SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_923, Local_409.f_413);
						SET_PED_ACCURACY(Local_839.f_3[0], 100);
						SET_PED_ACCURACY(Local_839.f_3[2], 100);
						TASK_SHOOT_AT_ENTITY(Local_839.f_3[0], Local_409.f_3, 5000, -957453492);
						TASK_SHOOT_AT_ENTITY(Local_839.f_3[1], Local_409.f_3, 5000, -687903391);
						TASK_SHOOT_AT_ENTITY(Local_839.f_3[2], Local_409.f_3, 5000, -957453492);
						iLocal_951 = GET_GAME_TIMER();
						iLocal_955++;
					}
					break;
				
				case 9:
					if ((GET_GAME_TIMER() - iLocal_951) > 5000)
					{
						iLocal_933 = 4;
					}
					break;
			}
			break;
		
		case 4:
			if (!Local_409.f_114)
			{
				Local_409.f_114 = 1;
			}
			func_165(&uLocal_1105, 1);
			func_165(&uLocal_1105, 16);
			func_165(&uLocal_1105, 32);
			func_151();
			func_135();
			func_134();
			func_295(&(Local_839.f_3));
			func_149(&(Local_839.f_3), &(Local_839.f_11));
			func_294(&uLocal_941);
			iLocal_951 = GET_GAME_TIMER();
			iLocal_933 = 5;
			break;
		
		case 5:
			if (iLocal_956 >= 2 && !func_297(&Local_409, 8))
			{
				func_296(&Local_409, 8);
			}
			else if (func_297(&Local_409, 8) && func_110(&Local_409, 8) > 3f)
			{
				func_132();
				func_129();
				iLocal_951 = GET_GAME_TIMER();
				iLocal_933 = 6;
			}
			else
			{
				iLocal_956 = 0;
			}
			func_127(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11));
			break;
		
		case 6:
			if ((IS_PED_INJURED(Local_881.f_3[0]) && IS_VEHICLE_DRIVEABLE(Local_881.f_27[0], 0)) && IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881.f_27[0]))
			{
				STOP_PLAYBACK_RECORDED_VEHICLE(Local_881.f_27[0]);
			}
			if ((((IS_PED_INJURED(Local_881.f_3[2]) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_881.f_3[2], PLAYER_PED_ID(), 1)) || HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_881.f_3[2], Local_409.f_3, 1)) && IS_VEHICLE_DRIVEABLE(Local_881.f_27[1], 0)) && IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881.f_27[1]))
			{
				STOP_PLAYBACK_RECORDED_VEHICLE(Local_881.f_27[1]);
			}
			if (DOES_BLIP_EXIST(Local_881.f_37[0]) && !IS_VEHICLE_DRIVEABLE(Local_881.f_27[0], 0))
			{
				REMOVE_BLIP(&(Local_881.f_37[0]));
			}
			if (DOES_BLIP_EXIST(Local_881.f_37[1]) && !IS_VEHICLE_DRIVEABLE(Local_881.f_27[1], 0))
			{
				REMOVE_BLIP(&(Local_881.f_37[1]));
			}
			if (!iLocal_972 && ((IS_VEHICLE_DRIVEABLE(Local_881.f_27[0], 0) && !IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881.f_27[0])) || (IS_VEHICLE_DRIVEABLE(Local_881.f_27[1], 0) && !IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Local_881.f_27[1]))))
			{
				if (func_126(&(Local_881.f_3)))
				{
					func_149(&(Local_881.f_3), &(Local_881.f_11));
					func_125();
					iLocal_972 = 1;
				}
			}
			if (!IS_BIT_SET(uLocal_959, 2))
			{
				if ((GET_GAME_TIMER() - iLocal_951) > 5000)
				{
					func_295(&(Local_881.f_3));
					func_124(&(Local_839.f_3));
					SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_923, Local_409.f_413);
					SET_BIT(&uLocal_959, 2);
				}
			}
			else
			{
				iVar0 = 0;
				while (iVar0 < Local_881.f_3)
				{
					if (!IS_PED_INJURED(Local_881.f_3[iVar0]))
					{
						if (GET_SCRIPT_TASK_STATUS(Local_881.f_3[iVar0], -1442466670) != 1 && GET_SCRIPT_TASK_STATUS(Local_881.f_3[iVar0], -1442466670) != 0)
						{
							TASK_COMBAT_HATED_TARGETS_AROUND_PED(Local_881.f_3[iVar0], 1000f, 0);
						}
					}
					iVar0++;
				}
			}
			if (!IS_PED_INJURED(Local_409.f_3))
			{
				if (iLocal_975)
				{
					if (!func_112())
					{
						func_222(&Local_409, 140, 1, 0, 1);
					}
					iLocal_975 = 0;
				}
			}
			return func_127(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11));
			break;
	}
	return 0;
}

void func_124(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!IS_PED_INJURED((*uParam0)[iVar0]))
		{
			SET_PED_ACCURACY((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_125()
{
	if (DOES_BLIP_EXIST(Local_881.f_37[0]))
	{
		REMOVE_BLIP(&(Local_881.f_37[0]));
	}
	if (DOES_BLIP_EXIST(Local_881.f_37[1]))
	{
		REMOVE_BLIP(&(Local_881.f_37[1]));
	}
}

int func_126(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!IS_PED_IN_ANY_VEHICLE((*uParam0)[iVar0], 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_127(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 1;
	iLocal_957 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (IS_ENTITY_DEAD((*uParam0)[iVar0], 0))
		{
			if (DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				REMOVE_BLIP(uParam1[iVar0]);
			}
			if (func_128(&Local_409, (*uParam0)[iVar0], 1))
			{
				iLocal_957++;
			}
			iLocal_956++;
		}
		else
		{
			iLocal_957 = 0;
			iVar1 = 0;
		}
		if (IS_ENTITY_DEAD((*uParam2)[iVar0], 0))
		{
			if (DOES_BLIP_EXIST((*uParam3)[iVar0]))
			{
				REMOVE_BLIP(uParam3[iVar0]);
				iLocal_975 = 1;
			}
			if (func_128(&Local_409, (*uParam2)[iVar0], 1))
			{
				iLocal_957++;
			}
		}
		else
		{
			iLocal_957 = 0;
			iVar1 = 0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_128(var uParam0, var uParam1, bool bParam2)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (DOES_ENTITY_EXIST(uParam1))
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	if (bParam2)
	{
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			if (DOES_ENTITY_EXIST(uParam1))
			{
				if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1, PLAYER_PED_ID(), 1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_129()
{
	if (!DOES_BLIP_EXIST(Local_881.f_37[0]) && !DOES_BLIP_EXIST(Local_881.f_37[1]))
	{
		Local_881.f_37[0] = func_130(Local_881.f_27[0], 0, 0);
		Local_881.f_37[1] = func_130(Local_881.f_27[1], 0, 0);
	}
}

int func_130(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	uVar0 = ADD_BLIP_FOR_ENTITY(uParam0);
	if (IS_ENTITY_A_VEHICLE(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_131(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
		}
		else
		{
			SET_BLIP_COLOUR(uVar0, 2);
		}
	}
	else if (IS_ENTITY_A_PED(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_131(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		SET_BLIP_AS_FRIENDLY(uVar0, bParam1);
	}
	else if (IS_ENTITY_AN_OBJECT(uParam0))
	{
		SET_BLIP_SCALE(uVar0, func_131(NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return uVar0;
}

float func_131(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_132()
{
	if (IS_VEHICLE_DRIVEABLE(Local_881.f_27[0], 0))
	{
		START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_881.f_27[0], iLocal_954, func_133(0), 6, 1000, 786603);
		SET_PLAYBACK_SPEED(Local_881.f_27[0], 1f);
	}
	if (IS_VEHICLE_DRIVEABLE(Local_881.f_27[1], 0))
	{
		START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Local_881.f_27[1], iLocal_954, func_133(1), 6, 1000, 786603);
		SET_PLAYBACK_SPEED(Local_881.f_27[1], 1f);
	}
}

char* func_133(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 0:
			sVar0 = "txm12_s01_a";
			break;
		
		case 1:
			sVar0 = "txm12_s01_b";
			break;
	}
	return sVar0;
}

void func_134()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(Local_409.f_3))
	{
		if (!IS_PED_INJURED(Local_409.f_3))
		{
			if (!DOES_BLIP_EXIST(Local_409.f_8))
			{
				Local_409.f_8 = func_130(Local_409.f_3, 1, 0);
			}
			GET_CURRENT_PED_WEAPON(Local_409.f_3, &iVar0, 1);
			if (iVar0 == joaat("weapon_unarmed"))
			{
				GIVE_WEAPON_TO_PED(Local_409.f_3, joaat("weapon_combatpistol"), 100, 0, 1);
			}
			SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 3, 1);
			SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 13, 0);
			SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 12, 1);
			SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 0, 1);
			SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 24, 1);
			SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 34, 1);
			SET_PED_COMBAT_ATTRIBUTES(Local_409.f_3, 37, 1);
			SET_PED_SEEING_RANGE(Local_409.f_3, 300f);
			SET_PED_HEARING_RANGE(Local_409.f_3, 300f);
			SET_PED_ID_RANGE(Local_409.f_3, 300f);
			SET_PED_COMBAT_MOVEMENT(Local_409.f_3, 1);
			SET_PED_CAN_EVASIVE_DIVE(Local_409.f_3, 1);
			SET_PED_ACCURACY(Local_409.f_3, 80);
			SET_PED_COMBAT_RANGE(Local_409.f_3, 2);
			SET_PED_ANGLED_DEFENSIVE_AREA(Local_409.f_3, 203.7838f, -3326.701f, 4.7901f, 204.288f, -3334.846f, 6.883f, 5.5f, 0, 0);
			SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_923, Local_409.f_413);
			SET_RELATIONSHIP_BETWEEN_GROUPS(5, Local_409.f_413, uLocal_923);
			CLEAR_SEQUENCE_TASK(&uLocal_934);
			OPEN_SEQUENCE_TASK(&uLocal_934);
			TASK_SEEK_COVER_FROM_POS(0, 201.9434f, -3324.029f, 4.7888f, 5000, 1);
			TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 200f, 0);
			CLOSE_SEQUENCE_TASK(uLocal_934);
			TASK_PERFORM_SEQUENCE(Local_409.f_3, uLocal_934);
			SET_PED_KEEP_TASK(Local_409.f_3, 1);
		}
	}
}

void func_135()
{
	int iVar0;
	
	Local_881.f_27[0] = CREATE_VEHICLE(Local_881.f_32[0], func_137(1), func_136(1), 1, 1, 0);
	Local_881.f_27[1] = CREATE_VEHICLE(Local_881.f_32[1], func_137(2), func_136(2), 1, 1, 0);
	Local_881.f_3[0] = CREATE_PED_INSIDE_VEHICLE(Local_881.f_27[0], 26, Local_881.f_19[0], -1, 1, 1);
	Local_881.f_3[1] = CREATE_PED_INSIDE_VEHICLE(Local_881.f_27[0], 26, Local_881.f_19[0], 0, 1, 1);
	Local_881.f_3[2] = CREATE_PED_INSIDE_VEHICLE(Local_881.f_27[1], 26, Local_881.f_19[0], -1, 1, 1);
	Local_881.f_3[3] = CREATE_PED_INSIDE_VEHICLE(Local_881.f_27[1], 26, Local_881.f_19[0], 0, 1, 1);
	SET_VEHICLE_NUMBER_PLATE_TEXT(Local_881.f_27[1], "LuisLopz");
	func_7(&(Local_409.f_244), 6, Local_881.f_3[0], "TaxiBruce", 0, 1);
	SET_AMBIENT_VOICE_NAME(Local_881.f_3[0], "TaxiBruce");
	GIVE_WEAPON_TO_PED(Local_881.f_3[0], joaat("weapon_smg"), 100, 0, 1);
	GIVE_WEAPON_TO_PED(Local_881.f_3[1], joaat("weapon_pistol"), 100, 0, 1);
	GIVE_WEAPON_TO_PED(Local_881.f_3[2], joaat("weapon_smg"), 100, 0, 1);
	GIVE_WEAPON_TO_PED(Local_881.f_3[3], joaat("weapon_pistol"), 100, 1, 1);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		SET_PED_MONEY(Local_881.f_3[iVar0], GET_RANDOM_INT_IN_RANGE(50, 100));
		SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 2, 1);
		SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 13, 1);
		SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 1, 0);
		SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 3, 1);
		SET_PED_COMBAT_ATTRIBUTES(Local_881.f_3[iVar0], 37, 1);
		SET_PED_CONFIG_FLAG(Local_881.f_3[iVar0], 42, 1);
		SET_PED_SEEING_RANGE(Local_881.f_3[iVar0], 300f);
		SET_PED_HEARING_RANGE(Local_881.f_3[iVar0], 300f);
		SET_PED_ID_RANGE(Local_881.f_3[iVar0], 300f);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_881.f_3[iVar0], 1);
		SET_PED_RELATIONSHIP_GROUP_HASH(Local_881.f_3[iVar0], uLocal_923);
		SET_PED_ACCURACY(Local_881.f_3[iVar0], 50);
		iVar0++;
	}
}

float func_136(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 159.2139f;
			break;
		
		case 2:
			return 156.7733f;
			break;
	}
	return 0f;
}

Vector3 func_137(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 290.2584f, -3236.66f, 4.8352f;
			break;
		
		case 2:
			return 299.2215f, -3235.248f, 4.7762f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_138(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_147(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 1;
	Global_16859 = 0;
	Global_16863 = 0;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_139(sParam2, iParam4, 0);
}

int func_139(char* sParam0, int iParam1, bool bParam2)
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
					func_146();
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
		if (func_145(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_144();
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
				func_143();
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
				if (func_142())
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
			if (func_30())
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
			func_141();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_140();
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
		func_146();
	}
	return 0;
}

void func_140()
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

void func_141()
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

int func_142()
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

void func_143()
{
	if (func_74(14))
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
		Global_14553 = func_96();
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

void func_144()
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

bool func_145(int iParam0, int iParam1)
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

void func_146()
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

void func_147(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = iParam5;
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

int func_148()
{
	if (_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_149(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!IS_PED_INJURED((*uParam0)[iVar0]))
		{
			if (!DOES_BLIP_EXIST((*uParam1)[iVar0]))
			{
				(*uParam1)[iVar0] = func_130((*uParam0)[iVar0], 0, 0);
			}
		}
		iVar0++;
	}
}

void func_150(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	BEGIN_TEXT_COMMAND_PRINT(sParam0);
	END_TEXT_COMMAND_PRINT(iParam1, 1);
}

void func_151()
{
	Global_14732 = 0;
	func_146();
}

struct<6> func_152()
{
	struct<6> Var0;
	int iVar6;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar6 = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16876);
		if (iVar6 > -1)
		{
			return Global_14734[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

bool func_153(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_154(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

int func_155(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == PLAYER_PED_ID())
		{
			return 1;
		}
	}
	return 0;
}

void func_156()
{
	if (DOES_ENTITY_EXIST(Local_409.f_3))
	{
		if (!IS_PED_INJURED(Local_409.f_3))
		{
			SET_PED_RELATIONSHIP_GROUP_HASH(Local_409.f_3, Local_409.f_413);
			TASK_LOOK_AT_ENTITY(Local_409.f_3, Local_839.f_3[1], -1, 2048, 4);
			CLEAR_SEQUENCE_TASK(&uLocal_934);
			OPEN_SEQUENCE_TASK(&uLocal_934);
			TASK_LEAVE_ANY_VEHICLE(0, 0, 262144);
			TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_1002, 1f, 30000, 1048576000, 0, 1193033728);
			TASK_ACHIEVE_HEADING(0, -30.3f, 0);
			TASK_CLEAR_LOOK_AT(0);
			CLOSE_SEQUENCE_TASK(uLocal_934);
			TASK_PERFORM_SEQUENCE(Local_409.f_3, uLocal_934);
		}
	}
}

float func_157(var uParam0, int iParam1)
{
	return func_164(GET_PLAYER_PED(GET_PLAYER_INDEX()), uParam0, iParam1);
}

void func_158(int iParam0, bool bParam1)
{
	if (iParam0 < Local_343 && iParam0 >= 0)
	{
		if (bParam1)
		{
			func_159(&(Local_343.f_1[iParam0 /*4*/]), 2);
		}
		else
		{
			func_122(&(Local_343.f_1[iParam0 /*4*/]), 2);
		}
	}
}

void func_159(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_160(var uParam0, bool bParam1, int iParam2)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (func_43(1))
			{
				func_41(0);
			}
			if (func_32())
			{
				func_163();
				return 1;
			}
			else if (func_161(uParam0->f_4, iParam2, 1, 1056964608, 0, 1, 0))
			{
				if (bParam1)
				{
					SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 0, 256);
				}
				else
				{
					SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 0, 0);
				}
			}
			SET_VEHICLE_BRAKE_LIGHTS(uParam0->f_4, 1);
		}
	}
	return 0;
}

int func_161(var uParam0, var uParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)
{
	DISABLE_CONTROL_ACTION(0, 71, 1);
	DISABLE_CONTROL_ACTION(0, 72, 1);
	DISABLE_CONTROL_ACTION(0, 76, 1);
	DISABLE_CONTROL_ACTION(0, 73, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		DISABLE_CONTROL_ACTION(0, 69, 1);
		DISABLE_CONTROL_ACTION(0, 70, 1);
		DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	DISABLE_CONTROL_ACTION(0, 74, 1);
	DISABLE_CONTROL_ACTION(0, 86, 1);
	DISABLE_CONTROL_ACTION(0, 81, 1);
	DISABLE_CONTROL_ACTION(0, 82, 1);
	DISABLE_CONTROL_ACTION(0, 138, 1);
	DISABLE_CONTROL_ACTION(0, 136, 1);
	DISABLE_CONTROL_ACTION(0, 114, 1);
	DISABLE_CONTROL_ACTION(0, 107, 1);
	DISABLE_CONTROL_ACTION(0, 110, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 89, 1);
	DISABLE_CONTROL_ACTION(0, 87, 1);
	DISABLE_CONTROL_ACTION(0, 88, 1);
	DISABLE_CONTROL_ACTION(0, 113, 1);
	DISABLE_CONTROL_ACTION(0, 115, 1);
	DISABLE_CONTROL_ACTION(0, 116, 1);
	DISABLE_CONTROL_ACTION(0, 117, 1);
	DISABLE_CONTROL_ACTION(0, 118, 1);
	DISABLE_CONTROL_ACTION(0, 119, 1);
	DISABLE_CONTROL_ACTION(0, 131, 1);
	DISABLE_CONTROL_ACTION(0, 132, 1);
	DISABLE_CONTROL_ACTION(0, 123, 1);
	DISABLE_CONTROL_ACTION(0, 126, 1);
	DISABLE_CONTROL_ACTION(0, 129, 1);
	DISABLE_CONTROL_ACTION(0, 130, 1);
	DISABLE_CONTROL_ACTION(0, 133, 1);
	DISABLE_CONTROL_ACTION(0, 134, 1);
	_0x17FCA7199A530203();
	func_162(uParam0);
	if ((GET_GAME_TIMER() - Global_29) > 500)
	{
		_SET_VEHICLE_HALT(uParam0, uParam1, iParam2, iParam4);
	}
	Global_29 = GET_GAME_TIMER();
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		if (ABSF(GET_ENTITY_SPEED(uParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_162(var uParam0)
{
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		if (_HAS_VEHICLE_ROCKET_BOOST(uParam0))
		{
			if (_IS_VEHICLE_ROCKET_BOOST_ACTIVE(uParam0))
			{
				_SET_VEHICLE_ROCKET_BOOST_ACTIVE(uParam0, 0);
			}
		}
	}
}

void func_163()
{
	if (IS_SPECIAL_ABILITY_ACTIVE(PLAYER_ID()))
	{
		SPECIAL_ABILITY_DEACTIVATE(PLAYER_ID());
	}
}

float func_164(var uParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 1) };
	}
	else
	{
		vVar0 = { GET_ENTITY_COORDS(uParam0, 0) };
	}
	if (!IS_ENTITY_DEAD(uParam1, 0))
	{
		vVar3 = { GET_ENTITY_COORDS(uParam1, 1) };
	}
	else
	{
		vVar3 = { GET_ENTITY_COORDS(uParam1, 0) };
	}
	return GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar3, iParam2);
}

void func_165(var uParam0, int iParam1)
{
	func_159(uParam0, iParam1);
}

int func_166(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if ((((IS_SCREEN_FADED_IN() && !IS_SCREEN_FADING_IN()) && !IS_SCREEN_FADING_OUT()) && !IS_SCREEN_FADED_OUT()) && !uParam0->f_142)
	{
		if (func_183(uParam0))
		{
			func_182(uParam0, &(uParam0->f_43));
			func_177(uParam0);
			func_176(uParam0);
			func_173(uParam0);
			func_172(uParam0, fParam2, fParam3);
			func_169(uParam0);
			return func_167(uParam0, iParam1);
		}
	}
	return 0;
}

int func_167(var uParam0, int iParam1)
{
	if (func_60(uParam0) == 2)
	{
		if (IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0))
		{
		}
		if (((func_9(uParam0->f_4, uParam0->f_17, 1) <= (iParam1 + 1f) && GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()) < 1) && func_168(1, 1, 1)) && IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			return func_160(uParam0, 1, iParam1);
		}
	}
	else if (((IS_ENTITY_AT_COORD(uParam0->f_4, uParam0->f_17, (iParam1 + 1f), (iParam1 + 1f), 2f, !uParam0->f_140, 1, 0) && GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()) < 1) && func_168(1, 1, 1)) && IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
	{
		return func_160(uParam0, 1, iParam1);
	}
	return 0;
}

int func_168(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
	{
		if (!IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER_PED_ID()))
		{
			return 0;
		}
		iVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
		if (bParam0)
		{
			if (IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!IS_ENTITY_DEAD(iVar0, 0))
			{
				if (GET_PED_IN_VEHICLE_SEAT(iVar0, -1, 0) != PLAYER_PED_ID())
				{
					return 0;
				}
			}
		}
		if (!IS_ENTITY_DEAD(iVar0, 0))
		{
			if (GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!IS_PLAYER_READY_FOR_CUTSCENE(PLAYER_ID()))
	{
		return 0;
	}
	if (!CAN_PLAYER_START_MISSION(PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

void func_169(var uParam0)
{
	float fVar0;
	
	if ((func_171(uParam0) && func_21(uParam0->f_81, 67108864)) && GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) == 0)
	{
		if ((GET_GAME_TIMER() - iLocal_97) >= 10000)
		{
			fVar0 = func_170(uParam0->f_17, 1);
			if (fVar0 > fLocal_95)
			{
				iLocal_96++;
			}
			else
			{
				iLocal_96 = 0;
			}
			fLocal_95 = fVar0;
			iLocal_97 = GET_GAME_TIMER();
		}
		if (iLocal_96 >= 2 && !func_112())
		{
			func_222(uParam0, 136, 1, 0, 1);
			iLocal_96 = 0;
		}
		if ((GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	else
	{
		if ((GET_GAME_TIMER() % 4000) < 50)
		{
			if (!func_171(uParam0))
			{
			}
			if (!func_21(uParam0->f_81, 67108864))
			{
			}
		}
		if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0)
		{
			if (iLocal_96 > 0)
			{
				iLocal_96 = 0;
			}
		}
	}
}

float func_170(vector3 vParam0, int iParam3)
{
	return func_201(GET_PLAYER_PED(GET_PLAYER_INDEX()), vParam0, iParam3);
}

int func_171(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!IS_PED_INJURED(uParam0->f_3))
		{
			if (IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_172(var uParam0, float fParam1, float fParam2)
{
	if (func_171(uParam0) && func_21(uParam0->f_44, 4))
	{
		if ((IS_VEHICLE_STOPPED(uParam0->f_4) || GET_ENTITY_SPEED(uParam0->f_4) < 3f) && func_155(uParam0))
		{
			if (!func_297(uParam0, 2))
			{
				func_296(uParam0, 2);
			}
			else if (func_171(uParam0))
			{
				if (func_110(uParam0, 2) > fParam1 && !func_297(uParam0, 14))
				{
					if (func_34())
					{
						func_222(uParam0, 48, 1, 0, 0);
					}
					else
					{
						func_222(uParam0, 48, 1, 0, 0);
					}
					func_290(uParam0, 2, 0, 0);
					if (func_297(uParam0, 10))
					{
						func_290(uParam0, 10, 0, 0);
					}
				}
				if (!func_297(uParam0, 3))
				{
					func_290(uParam0, 3, 0, 0);
				}
				else if (func_110(uParam0, 3) >= fParam2)
				{
					func_109(uParam0, 3, 0);
					func_322(uParam0, "Car not moving", 20);
				}
			}
		}
		else
		{
			if (func_297(uParam0, 2))
			{
				func_109(uParam0, 2, 0);
			}
			if (func_297(uParam0, 3))
			{
				func_109(uParam0, 3, 0);
			}
		}
	}
}

void func_173(var uParam0)
{
	if (func_175(uParam0))
	{
		func_174(uParam0);
	}
}

void func_174(var uParam0)
{
	if (IS_RADIO_RETUNING() && uParam0->f_418.f_4 != 0)
	{
		uParam0->f_418.f_4 = 0;
	}
	switch (uParam0->f_418.f_4)
	{
		case 0:
			uParam0->f_418 = GET_PLAYER_RADIO_STATION_INDEX();
			func_109(uParam0, 20, 0);
			uParam0->f_418.f_4++;
			break;
		
		case 1:
			if (uParam0->f_418.f_8 && !uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (func_110(uParam0, 20) > 3f)
				{
					func_222(uParam0, 87, 1, 0, 0);
					uParam0->f_418.f_8 = 0;
					uParam0->f_418.f_4++;
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_1)
			{
				if (!func_21(uParam0->f_81, 262144) || !func_21(uParam0->f_81, 1048576))
				{
					if (func_110(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_5 = 1;
						func_222(uParam0, 84, 1, 0, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418 == uParam0->f_418.f_2)
			{
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (func_110(uParam0, 20) > 5f)
					{
						uParam0->f_418.f_6 = 1;
						uParam0->f_418.f_8 = 0;
						func_222(uParam0, 85, 1, 0, 0);
						func_109(uParam0, 22, 0);
						uParam0->f_418.f_4++;
					}
				}
			}
			else if (uParam0->f_418.f_7)
			{
				if (func_110(uParam0, 20) > 8f)
				{
					func_222(uParam0, 86, 1, 0, 0);
					uParam0->f_418.f_4++;
				}
			}
			break;
		
		case 2:
			if (func_21(uParam0->f_81, 262144) || func_21(uParam0->f_82, 67108864))
			{
				if (!func_297(uParam0, 22))
				{
					func_296(uParam0, 22);
				}
			}
			if (func_297(uParam0, 22) && func_110(uParam0, 22) > 15f)
			{
				if (uParam0->f_418 == uParam0->f_418.f_1)
				{
					if (!func_21(uParam0->f_81, 1048576))
					{
						func_222(uParam0, 84, 1, 0, 0);
						func_109(uParam0, 22, 0);
					}
				}
				else if (uParam0->f_418 == uParam0->f_418.f_2)
				{
					if (!func_21(uParam0->f_82, 134217728))
					{
						func_222(uParam0, 85, 1, 0, 0);
						func_109(uParam0, 22, 0);
					}
				}
			}
			break;
	}
}

bool func_175(var uParam0)
{
	return uParam0->f_120;
}

void func_176(var uParam0)
{
	if (IS_PLAYER_PRESSING_HORN(GET_PLAYER_INDEX()) && !func_21(uParam0->f_44, 2))
	{
		func_165(&(uParam0->f_44), 2);
	}
	else if (!IS_PLAYER_PRESSING_HORN(GET_PLAYER_INDEX()) && func_21(uParam0->f_44, 2))
	{
		func_121(&(uParam0->f_44), 2);
		uParam0->f_47++;
		func_49(9, 0);
	}
	if (uParam0->f_47 > 30)
	{
		func_222(uParam0, 47, 1, 0, 0);
		uParam0->f_47 = 0;
		uParam0->f_76 = (uParam0->f_76 + CEIL(5f));
	}
}

void func_177(var uParam0)
{
	if (!func_21(uParam0->f_44, 1))
	{
		switch (uParam0->f_412)
		{
			case 0:
				if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()) >= 1)
				{
					if (func_110(uParam0, 9) > 1f)
					{
						func_181(uParam0, GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()));
						if (uParam0->f_410 != 22)
						{
							func_222(uParam0, 50, 1, 1, 0);
						}
						func_290(uParam0, 9, 0, 0);
						if (DOES_BLIP_EXIST(uParam0->f_9))
						{
							SET_BLIP_ALPHA(uParam0->f_9, 0);
							SET_BLIP_ROUTE(uParam0->f_9, 0);
						}
						uParam0->f_140 = 1;
						uParam0->f_412 = 1;
					}
				}
				break;
			
			case 1:
				if (!func_112() && func_110(uParam0, 9) > 4f)
				{
					func_222(uParam0, 52, 1, 0, 0);
					uParam0->f_412 = 2;
				}
				break;
			
			case 2:
				if (func_180("TAXI_OBJ_POL", 0, 0))
				{
					if (uParam0->f_410 != 22)
					{
						func_222(uParam0, 51, 0, 0, 0);
					}
					uParam0->f_412 = 3;
				}
				else if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()) < 1)
				{
					uParam0->f_412 = 3;
				}
				break;
			
			case 3:
				if (IS_PLAYER_WANTED_LEVEL_GREATER(GET_PLAYER_INDEX(), func_179(uParam0)))
				{
					func_181(uParam0, GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()));
					func_49(6, 0);
				}
				if (!func_178(uParam0))
				{
					if (!IS_SCRIPTED_CONVERSATION_ONGOING())
					{
						if (func_110(uParam0, 16) > 10f)
						{
							if (uParam0->f_410 != 22)
							{
								func_222(uParam0, 51, 1, 0, 0);
							}
						}
					}
				}
				if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()) < 1)
				{
					if (func_180("TAXI_OBJ_POL", 0, 0))
					{
						CLEAR_PRINTS();
					}
					if (DOES_BLIP_EXIST(uParam0->f_9))
					{
						SET_BLIP_ALPHA(uParam0->f_9, 255);
						SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
					uParam0->f_140 = 0;
					uParam0->f_412 = 4;
				}
				break;
			
			case 4:
				if (!func_112())
				{
					if (uParam0->f_410 != 22)
					{
						func_222(uParam0, 53, 1, 0, 1);
					}
					func_49(7, func_179(uParam0));
					func_181(uParam0, 0);
					uParam0->f_412 = 5;
				}
				break;
			
			case 5:
				if (!func_112())
				{
					func_109(uParam0, 9, 0);
					func_290(uParam0, 11, 0, 0);
					uParam0->f_412 = 0;
				}
				break;
			}
	}
}

bool func_178(var uParam0)
{
	return uParam0->f_110;
}

int func_179(var uParam0)
{
	return uParam0->f_106;
}

bool func_180(char* sParam0, int iParam1, int iParam2)
{
	BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
	if (iParam1 == 1)
	{
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
	}
	return END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

void func_181(var uParam0, int iParam1)
{
	if (uParam0->f_106 != iParam1)
	{
		uParam0->f_106 = iParam1;
	}
}

void func_182(var uParam0, var uParam1)
{
	STAT_GET_FLOAT(uParam0->f_428, uParam1, -1);
	uParam0->f_41 = (*uParam1 - uParam0->f_42);
}

int func_183(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!IS_PED_INJURED(uParam0->f_3))
		{
			if (!IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1) && !IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3))
			{
				func_322(uParam0, "Passenger left car.", 9);
			}
			else if (func_193(uParam0))
			{
				if (func_180("TAXI_OBJ_PICKUP", 0, 0))
				{
					CLEAR_THIS_PRINT("TAXI_OBJ_PICKUP");
				}
				if (IS_SCREEN_FADED_IN())
				{
					return 1;
				}
			}
			else
			{
				if ((GET_GAME_TIMER() % 1000) < 50)
				{
				}
				func_184(uParam0, 1);
			}
		}
	}
	return 0;
}

void func_184(var uParam0, bool bParam1)
{
	func_192(uParam0, uParam0->f_3);
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if (!func_297(uParam0, 14))
			{
				if (func_112())
				{
					func_191(1);
				}
				func_190(uParam0, 11, 1);
				func_185(uParam0, 1);
				func_290(uParam0, 14, 0f, 1);
				if (uParam0->f_410 < 15)
				{
				}
			}
			else if (bParam1)
			{
				if (!func_171(uParam0))
				{
					if ((GET_GAME_TIMER() % 1000) < 50)
					{
					}
					if (IS_PED_IN_ANY_VEHICLE(uParam0->f_2, 0))
					{
						if (func_110(uParam0, 15) > 5f)
						{
							func_290(uParam0, 15, 0f, 1);
						}
					}
					if (func_110(uParam0, 14) > 20f)
					{
						func_322(uParam0, "Player not in taxi. - YELL RETURN", 8);
					}
				}
				else if (func_110(uParam0, 14) > 20f)
				{
					if (func_157(uParam0->f_4, 1) > 40f)
					{
						func_322(uParam0, "Player not in taxi.", 21);
					}
					else
					{
						func_322(uParam0, "Player not in taxi. - YELL RETURN 2", 8);
					}
				}
			}
		}
	}
}

void func_185(var uParam0, bool bParam1)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (bParam1)
		{
			if (DOES_BLIP_EXIST(uParam0->f_8))
			{
				SET_BLIP_ALPHA(uParam0->f_8, 0);
				SET_BLIP_ROUTE(uParam0->f_8, 0);
				func_189(uParam0, &(uParam0->f_98), 4, 3);
			}
			else if (DOES_BLIP_EXIST(uParam0->f_9))
			{
				SET_BLIP_ALPHA(uParam0->f_9, 0);
				SET_BLIP_ROUTE(uParam0->f_9, 0);
				CLEAR_PRINTS();
				if (func_171(uParam0))
				{
					func_222(uParam0, 2, 1, 0, 0);
				}
				else
				{
					func_189(uParam0, &(uParam0->f_98), 4, 3);
				}
			}
			func_186(uParam0, 0, 0);
		}
		else if (DOES_BLIP_EXIST(uParam0->f_10))
		{
			REMOVE_BLIP(&(uParam0->f_10));
			if (DOES_BLIP_EXIST(uParam0->f_8))
			{
				SET_BLIP_ALPHA(uParam0->f_8, 255);
				SET_BLIP_ROUTE(uParam0->f_8, 1);
			}
			else if (DOES_BLIP_EXIST(uParam0->f_9))
			{
				if (uParam0->f_411 == 5 && uParam0->f_410 == 17)
				{
					SET_BLIP_ALPHA(uParam0->f_9, 0);
					SET_BLIP_ROUTE(uParam0->f_9, 0);
				}
				else if (uParam0->f_411 != 4)
				{
					SET_BLIP_ALPHA(uParam0->f_9, 255);
					SET_BLIP_ROUTE(uParam0->f_9, 1);
				}
			}
			CLEAR_PRINTS();
		}
	}
}

void func_186(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		func_407(uParam0);
	}
	if (!DOES_BLIP_EXIST(uParam0->f_10))
	{
		uParam0->f_10 = func_130(uParam0->f_4, 1, 0);
		SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_10, "TAXI_BLIP_CAR");
		SET_BLIP_ROUTE(uParam0->f_10, 1);
		func_187(uParam0);
		if (bParam2)
		{
			CLEAR_PRINTS();
			func_222(uParam0, 3, 1, 0, 0);
		}
	}
}

void func_187(var uParam0)
{
	func_290(uParam0, 14, 0, 0);
	func_188();
}

void func_188()
{
	var uVar0;
	
	uVar0 = GET_PLAYERS_LAST_VEHICLE();
	if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", uVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_189(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_21(*uParam1, iParam2))
	{
		CLEAR_PRINTS();
		func_222(uParam0, iParam3, 1, 0, 0);
		func_165(uParam1, iParam2);
	}
}

void func_190(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_414 = iParam1;
	if (bParam2)
	{
	}
}

void func_191(int iParam0)
{
	Global_16877 = iParam0;
}

void func_192(var uParam0, var uParam1)
{
	if (DOES_ENTITY_EXIST(uParam1))
	{
		if (!IS_PED_INJURED(uParam1))
		{
			if (HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER_ID()))
			{
				if ((HAS_PED_BEEN_DAMAGED_BY_WEAPON(uParam1, joaat("weapon_stungun"), 0) || HAS_PED_BEEN_DAMAGED_BY_WEAPON(uParam1, 0, 2)) || HAS_PED_BEEN_DAMAGED_BY_WEAPON(uParam1, 0, 1))
				{
					func_322(uParam0, "Passenger injured by player with weapon.", 14);
				}
				CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER_ID());
			}
		}
	}
}

int func_193(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			if (func_297(uParam0, 14))
			{
				func_194(uParam0);
			}
			func_185(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

void func_194(var uParam0)
{
	func_109(uParam0, 14, 0);
	func_109(uParam0, 15, 0);
	func_196();
	if (func_195())
	{
		func_191(0);
	}
}

int func_195()
{
	if (Global_16877 == 1)
	{
		return 1;
	}
	return 0;
}

void func_196()
{
	var uVar0;
	
	uVar0 = GET_PLAYERS_LAST_VEHICLE();
	if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
	{
		PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", uVar0, "TAXI_SOUNDS", 0, 0);
	}
}

void func_197(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = 0;
	}
	else
	{
		*uParam0 = -1;
	}
	if (iParam1 > -1)
	{
		uParam0->f_27 = iParam1;
	}
}

void func_198(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		(uParam0[iVar0 /*8*/])->f_6 = 0;
		(uParam0[iVar0 /*8*/])->f_7 = 0;
		StringCopy(uParam0[iVar0 /*8*/], func_199(), 24);
		iVar0++;
	}
	CLEAR_PRINTS();
	func_47();
}

var func_199()
{
	var uVar0;
	
	return uVar0;
}

void func_200(var uParam0)
{
	uParam0->f_120 = 0;
}

float func_201(var uParam0, vector3 vParam1, int iParam4)
{
	if (IS_ENTITY_DEAD(uParam0, 0))
	{
		return -1f;
	}
	return GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(uParam0, 1), vParam1, iParam4);
}

void func_202()
{
	switch (iLocal_924)
	{
		case 0:
			if (IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0) && func_9(Local_409.f_4, Local_409.f_17, 1) < 300f)
			{
				func_217();
				iLocal_924 = 1;
			}
			break;
		
		case 1:
			if (func_215())
			{
				iLocal_924 = 2;
			}
			break;
		
		case 2:
			if (!bLocal_971)
			{
				func_212();
				func_211();
				func_207();
				func_206();
				func_205();
				func_204();
				iLocal_924 = 3;
				bLocal_971 = true;
			}
			break;
		
		case 3:
			if (IS_VEHICLE_DRIVEABLE(Local_409.f_4, 0) && func_9(Local_409.f_4, Local_409.f_17, 1) > 350f)
			{
				func_203();
				iLocal_924 = 0;
			}
			break;
	}
}

void func_203()
{
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_930);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_931);
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_932);
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_19[0]);
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_19[1]);
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_32[0]);
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_32[1]);
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_32[2]);
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_839.f_32[3]);
	SET_MODEL_AS_NO_LONGER_NEEDED(Local_881.f_32[1]);
	REMOVE_VEHICLE_RECORDING(iLocal_954, func_133(0));
	REMOVE_VEHICLE_RECORDING(iLocal_954, func_133(1));
	REMOVE_ANIM_DICT("random@countryside_gang_fight");
	REMOVE_ANIM_DICT(sLocal_1008);
}

void func_204()
{
	uLocal_935[0] = CREATE_OBJECT(iLocal_930, 204.8445f, -3333.998f, 4.795367f, 1, 1, 0);
	SET_ENTITY_COORDS(uLocal_935[0], 204.8445f, -3333.998f, 4.795367f, 1, 0, 0, 1);
	SET_ENTITY_ROTATION(uLocal_935[0], -0.036243f, -0.00124f, 91.56063f, 2, 1);
	uLocal_935[1] = CREATE_OBJECT(iLocal_930, 212.67f, -3328.77f, 4.79f, 1, 1, 0);
	SET_ENTITY_COORDS(uLocal_935[1], 212.67f, -3328.77f, 4.79f, 1, 0, 0, 1);
	SET_ENTITY_ROTATION(uLocal_935[1], -0.04f, -0.01f, 86.36f, 2, 1);
	uLocal_935[2] = CREATE_OBJECT(iLocal_930, 204.8248f, -3328.631f, 4.7915f, 1, 1, 0);
	SET_ENTITY_COORDS(uLocal_935[2], 204.8248f, -3328.631f, 4.7915f, 1, 0, 0, 1);
	SET_ENTITY_ROTATION(uLocal_935[2], -0.0027f, -0.0374f, 0.1414f, 2, 1);
	uLocal_940 = CREATE_OBJECT(iLocal_931, 214.2505f, -3314.673f, 4.7883f, 1, 1, 0);
	SET_ENTITY_COORDS(uLocal_940, 214.2505f, -3314.673f, 4.7883f, 1, 0, 0, 1);
	SET_ENTITY_ROTATION(uLocal_940, 0f, 0f, -17.399f, 2, 1);
	if (HAS_MODEL_LOADED(iLocal_932))
	{
		uLocal_939 = CREATE_OBJECT(iLocal_932, 220.7266f, -3320.001f, 5.2749f, 1, 1, 0);
		SET_ENTITY_COORDS(uLocal_939, 220.7266f, -3320.001f, 5.2749f, 1, 0, 0, 1);
		SET_ENTITY_ROTATION(uLocal_939, 0f, 0f, 0f, 2, 1);
	}
}

void func_205()
{
	if ((!IS_PED_INJURED(uLocal_941[0]) && !IS_PED_INJURED(uLocal_941[0])) && !IS_PED_INJURED(Local_839.f_3[3]))
	{
		uLocal_960 = CREATE_SYNCHRONIZED_SCENE(vLocal_990, vLocal_993, 2);
		SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_960, 1);
		TASK_SYNCHRONIZED_SCENE(Local_839.f_3[3], uLocal_960, sLocal_1008, "hooker_loop_a_biker_d", 1000f, -1000f, 64, 0, 1148846080, 0);
		TASK_SYNCHRONIZED_SCENE(uLocal_941[0], uLocal_960, sLocal_1008, "hooker_loop_a_hooker_a", 1000f, -1000f, 64, 0, 1148846080, 0);
		TASK_SYNCHRONIZED_SCENE(uLocal_941[1], uLocal_960, sLocal_1008, "hooker_loop_a_hooker_b", 1000f, -1000f, 64, 0, 1148846080, 0);
	}
	if ((!IS_PED_INJURED(Local_839.f_3[0]) && !IS_PED_INJURED(Local_839.f_3[1])) && !IS_PED_INJURED(Local_839.f_3[2]))
	{
		GIVE_WEAPON_TO_PED(Local_839.f_3[0], joaat("weapon_pistol"), -1, 1, 1);
		uLocal_964 = CREATE_SYNCHRONIZED_SCENE(vLocal_996, vLocal_999, 2);
		SET_SYNCHRONIZED_SCENE_LOOPED(uLocal_964, 1);
		TASK_SYNCHRONIZED_SCENE(Local_839.f_3[0], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_a", 1000f, -1000f, 0, 0, 1148846080, 0);
		TASK_SYNCHRONIZED_SCENE(Local_839.f_3[1], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_b", 1000f, -1000f, 0, 0, 1148846080, 0);
		TASK_SYNCHRONIZED_SCENE(Local_839.f_3[2], uLocal_964, "oddjobs@taxi@argument", "idle_a_biker_c", 1000f, -1000f, 0, 0, 1148846080, 0);
	}
}

void func_206()
{
	int iVar0;
	
	iVar0 = 0;
	func_7(&(Local_409.f_244), 4, Local_839.f_3[1], "TaxiDom", 0, 1);
	func_7(&(Local_409.f_244), 5, Local_839.f_3[3], "TaxiGangM", 0, 1);
	SET_AMBIENT_VOICE_NAME(Local_839.f_3[1], "TaxiDom");
	SET_AMBIENT_VOICE_NAME(Local_839.f_3[3], "TaxiGangM");
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		SET_PED_MONEY(Local_839.f_3[iVar0], GET_RANDOM_INT_IN_RANGE(20, 50));
		SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 2, 1);
		SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 13, 1);
		SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 1, 0);
		SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 3, 1);
		SET_PED_COMBAT_ATTRIBUTES(Local_839.f_3[iVar0], 37, 1);
		SET_PED_CONFIG_FLAG(Local_839.f_3[iVar0], 42, 1);
		SET_PED_SEEING_RANGE(Local_839.f_3[iVar0], 300f);
		SET_PED_HEARING_RANGE(Local_839.f_3[iVar0], 300f);
		SET_PED_ID_RANGE(Local_839.f_3[iVar0], 300f);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_839.f_3[iVar0], 0);
		SET_PED_ACCURACY(Local_839.f_3[iVar0], 1);
		iVar0++;
	}
	SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[0], uLocal_923);
	SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[1], uLocal_923);
	SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[2], uLocal_923);
	SET_PED_RELATIONSHIP_GROUP_HASH(Local_839.f_3[3], uLocal_923);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		SET_PED_CONFIG_FLAG(uLocal_941[iVar0], 42, 1);
		SET_PED_SEEING_RANGE(uLocal_941[iVar0], 100f);
		SET_PED_HEARING_RANGE(uLocal_941[iVar0], 100f);
		SET_PED_ID_RANGE(uLocal_941[iVar0], 100f);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_941[iVar0], 1);
		iVar0++;
	}
	func_7(&(Local_409.f_244), 7, uLocal_941[1], "TaxiGangGirl2", 0, 1);
	func_7(&(Local_409.f_244), 8, uLocal_941[0], "TaxiGangGirl1", 0, 1);
	SET_AMBIENT_VOICE_NAME(uLocal_941[1], "TaxiGangGirl2");
	SET_AMBIENT_VOICE_NAME(uLocal_941[0], "TaxiGangGirl1");
}

void func_207()
{
	Local_839.f_3[0] = CREATE_PED(26, Local_839.f_19[0], func_210(1), func_209(1), 1, 1);
	Local_839.f_3[1] = CREATE_PED(26, Local_839.f_19[0], func_208(2), 0f, 1, 1);
	Local_839.f_3[2] = CREATE_PED(26, Local_839.f_19[0], func_210(3), func_209(3), 1, 1);
	Local_839.f_3[3] = CREATE_PED(26, Local_839.f_19[0], func_210(4), func_209(4), 1, 1);
	SET_PED_CONFIG_FLAG(Local_839.f_3[1], 20, 1);
	uLocal_941[0] = CREATE_PED(26, Local_839.f_19[1], func_210(5), func_209(5), 1, 1);
	uLocal_941[1] = CREATE_PED(26, Local_839.f_19[1], func_210(6), func_209(6), 1, 1);
	SET_PED_CAN_BE_TARGETTED(uLocal_941[0], 0);
	SET_PED_CAN_BE_TARGETTED(uLocal_941[1], 0);
	if (!IS_ENTITY_DEAD(Local_839.f_3[0], 0))
	{
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[0], 0, 1, 1, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[0], 3, 0, 5, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[0], 4, 0, 2, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[0], 10, 0, 0, 0);
	}
	if (!IS_ENTITY_DEAD(Local_839.f_3[1], 0))
	{
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[1], 0, 0, 0, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[1], 3, 0, 0, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[1], 4, 1, 0, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[1], 10, 0, 1, 0);
	}
	if (!IS_ENTITY_DEAD(Local_839.f_3[2], 0))
	{
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[2], 0, 1, 0, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[2], 3, 1, 0, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[2], 4, 1, 2, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[2], 10, 1, 0, 0);
	}
	if (!IS_ENTITY_DEAD(Local_839.f_3[3], 0))
	{
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[3], 0, 0, 2, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[3], 3, 1, 1, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[3], 4, 0, 2, 0);
		SET_PED_COMPONENT_VARIATION(Local_839.f_3[3], 10, 1, 0, 0);
	}
}

Vector3 func_208(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 202.24f, -3322.48f, 5.79f;
			break;
		
		case 2:
			return 203.4f, -3323.22f, 5.79f;
			break;
		
		case 3:
			return 205.66f, -3322.41f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

float func_209(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 251.3766f;
			break;
		
		case 2:
			return -129.32f;
			break;
		
		case 3:
			return 39.53f;
			break;
		
		case 4:
			return -139.98f;
			break;
		
		case 5:
			return 147.25f;
			break;
		
		case 6:
			return 68.18f;
			break;
	}
	return 0f;
}

Vector3 func_210(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 202.35f, -3321.76f, 4.79f;
			break;
		
		case 2:
			return 204.27f, -3321.77f, 5.79f;
			break;
		
		case 3:
			return 204.93f, -3322.56f, 4.79f;
			break;
		
		case 4:
			return 218.19f, -3323.58f, 5.8f;
			break;
		
		case 5:
			return 219.52f, -3324f, 5.8f;
			break;
		
		case 6:
			return 220.14f, -3325.39f, 5.8f;
			break;
	}
	return 0f, 0f, 0f;
}

void func_211()
{
	SET_VEHICLE_DOOR_OPEN(Local_839.f_27[2], 5, 0, 0);
	SET_VEHICLE_DOOR_OPEN(Local_839.f_27[3], 5, 0, 0);
}

void func_212()
{
	Local_839.f_27[0] = CREATE_VEHICLE(Local_839.f_32[0], func_214(1), func_213(1), 1, 1, 0);
	Local_839.f_27[1] = CREATE_VEHICLE(Local_839.f_32[1], func_214(2), func_213(2), 1, 1, 0);
	Local_839.f_27[2] = CREATE_VEHICLE(Local_839.f_32[3], func_214(3), func_213(3), 1, 1, 0);
	Local_839.f_27[3] = CREATE_VEHICLE(Local_839.f_32[3], func_214(4), func_213(4), 1, 1, 0);
	uLocal_945 = CREATE_VEHICLE(Local_839.f_32[2], func_214(5), func_213(5), 1, 1, 0);
	SET_VEHICLE_NUMBER_PLATE_TEXT(Local_839.f_27[2], "NikoB");
	SET_VEHICLE_NUMBER_PLATE_TEXT(Local_839.f_27[3], "RomanB");
}

float func_213(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 301.96f;
			break;
		
		case 2:
			return 33.5561f;
			break;
		
		case 3:
			return 87.9127f;
			break;
		
		case 4:
			return 195.38f;
			break;
		
		case 5:
			return 35.3307f;
			break;
	}
	return 0f;
}

Vector3 func_214(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 208.8206f, -3319.28f, 4.7925f;
			break;
		
		case 2:
			return 202.0773f, -3320.393f, 4.7657f;
			break;
		
		case 3:
			return 216.1051f, -3318.837f, 4.7918f;
			break;
		
		case 4:
			return 221.6868f, -3324.747f, 5.3063f;
			break;
		
		case 5:
			return 200.1736f, -3320.666f, 4.7361f;
			break;
	}
	return 0f, 0f, 0f;
}

int func_215()
{
	if (!HAS_MODEL_LOADED(iLocal_930))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading PROP_BOXPILE_02C", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(iLocal_931))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading PROP_CARDBORDBOX_03A", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(Local_839.f_19[0]))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading Baddie driver model", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(Local_839.f_19[1]))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading Gangster girl model", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(Local_839.f_32[0]))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading modelName_Car1 model", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(Local_839.f_32[1]))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading modelName_Car2 model", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(Local_839.f_32[2]))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading modelName_Car3 model", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(Local_839.f_32[3]))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading modelName_Car4 model", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(Local_881.f_32[1]))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading modelName_Car5 model", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_954, func_133(0)))
	{
		func_216("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_A...", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_954, func_133(1)))
	{
		func_216("TAXI_ASSETS_STREAMING - Vehicle Recording Loading TXM12_S01_B...", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_ANIM_DICT_LOADED("random@countryside_gang_fight"))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading random@countryside_gang_fight ", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_ANIM_DICT_LOADED(sLocal_1008))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading sSyncSceneDict ", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_MODEL_LOADED(iLocal_932))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading PROP_BARREL_EXP_01A", &iLocal_950, 1000);
	}
	return 1;
}

void func_216(char* sParam0, int iParam1, int iParam2)
{
	if (GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = GET_GAME_TIMER();
}

void func_217()
{
	REQUEST_MODEL(iLocal_930);
	REQUEST_MODEL(iLocal_931);
	REQUEST_MODEL(iLocal_932);
	REQUEST_MODEL(Local_839.f_19[0]);
	REQUEST_MODEL(Local_839.f_19[1]);
	REQUEST_MODEL(Local_839.f_32[0]);
	REQUEST_MODEL(Local_839.f_32[1]);
	REQUEST_MODEL(Local_839.f_32[2]);
	REQUEST_MODEL(Local_839.f_32[3]);
	REQUEST_MODEL(Local_881.f_32[1]);
	REQUEST_VEHICLE_RECORDING(iLocal_954, func_133(0));
	REQUEST_VEHICLE_RECORDING(iLocal_954, func_133(1));
	REQUEST_ANIM_DICT("random@countryside_gang_fight");
	REQUEST_ANIM_DICT(sLocal_1008);
}

void func_218()
{
	func_165(&(Local_409.f_55), 2);
	func_165(&(Local_409.f_55), 4);
	func_165(&(Local_409.f_55), 16);
	func_165(&(Local_409.f_55), 64);
	func_165(&(Local_409.f_55), 256);
	func_165(&(Local_409.f_55), 512);
	func_165(&(Local_409.f_55), 1024);
	func_165(&(Local_409.f_55), 2048);
	func_165(&(Local_409.f_55), 4096);
	func_165(&(Local_409.f_55), 1073741824);
	func_165(&(Local_409.f_100), 8);
	func_165(&(Local_409.f_100), 2048);
	func_165(&(Local_409.f_100), 256);
	func_165(&uLocal_1105, 2);
}

void func_219(var uParam0)
{
	func_220(uParam0, 1000);
	if (!IS_ENTITY_DEAD(uParam0->f_3, 0) && !IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
		TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER_PED_ID(), 0);
	}
	func_151();
	func_194(uParam0);
}

void func_220(var uParam0, int iParam1)
{
	if (DOES_CAM_EXIST(*uParam0))
	{
		DESTROY_CAM(*uParam0, 0);
	}
	if (iParam1 > 0)
	{
		RENDER_SCRIPT_CAMS(0, 1, iParam1, 1, 0, 0);
	}
	else
	{
		RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	}
}

void func_221(var uParam0)
{
	CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER_ID());
	SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 1, 0);
	func_220(uParam0, 1000);
}

void func_222(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_416 = iParam1;
	if (bParam4)
	{
		func_290(uParam0, 16, 4f, 0);
		if (func_223(uParam0))
		{
			func_47();
		}
	}
	func_253(uParam0, iParam2, bParam3);
}

int func_223(var uParam0)
{
	vector3 vVar0;
	struct<6> Var6;
	
	StringCopy(&vVar0, uParam0->f_143, 24);
	if (func_112())
	{
		Var6 = { func_225() };
		if (!IS_STRING_NULL_OR_EMPTY(&Var6))
		{
			StringConCat(&vVar0, "_obj1", 24);
			if (ARE_STRINGS_EQUAL(&Var6, &vVar0))
			{
				return 1;
			}
			StringCopy(&vVar0, uParam0->f_143, 24);
			StringConCat(&vVar0, "_gret1", 24);
			func_224(&vVar0);
			if (ARE_STRINGS_EQUAL(&Var6, &vVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_224(char* sParam0)
{
	StringConCat(sParam0, "F", 24);
}

struct<6> func_225()
{
	struct<6> Var0;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		return Global_15485;
	}
	return Var0;
}

int func_226(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!IS_PED_INJURED(uParam0->f_3))
		{
			if ((IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) && (GET_GAME_TIMER() - iLocal_89) > 500) || IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_227(var uParam0, bool bParam1, float fParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
		{
			if ((GET_GAME_TIMER() % 1000) < 50)
			{
			}
			func_184(uParam0, 1);
			if (func_32())
			{
				SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 1, 0);
			}
			if (GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 1 || GET_SCRIPT_TASK_STATUS(uParam0->f_3, 2106541073) == 0)
			{
				CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
				uParam0->f_48 = 0;
				iLocal_87 = 0;
				TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER_PED_ID(), 0);
			}
		}
		else if (IS_PLAYER_WANTED_LEVEL_GREATER(GET_PLAYER_INDEX(), 0))
		{
			func_252(uParam0);
			if (uParam0->f_48 > 1)
			{
				CLEAR_SEQUENCE_TASK(&uVar3);
				OPEN_SEQUENCE_TASK(&uVar3);
				TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
				TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
				CLOSE_SEQUENCE_TASK(uVar3);
				TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar3);
				uParam0->f_48 = 0;
			}
		}
		else
		{
			if (func_297(uParam0, 14))
			{
				func_194(uParam0);
				func_185(uParam0, 0);
			}
			if (func_297(uParam0, 9))
			{
				func_109(uParam0, 9, 0);
				CLEAR_PRINTS();
				if (DOES_BLIP_EXIST(uParam0->f_8))
				{
					SET_BLIP_ALPHA(uParam0->f_8, 255);
					SET_BLIP_ROUTE(uParam0->f_8, 1);
				}
			}
			if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
			{
				fVar4 = ((GET_ENTITY_SPEED(uParam0->f_4) / 5f) + 4f);
				if (uParam0->f_141 && func_251(uParam0, uParam0->f_3) > 300f)
				{
					func_322(uParam0, "Left Passenger", 8);
				}
				switch (uParam0->f_48)
				{
					case 0:
						if (GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 || ((func_164(PLAYER_PED_ID(), uParam0->f_3, 1) < 20f && func_9(uParam0->f_3, uParam0->f_11, 1) <= 28f) && func_9(uParam0->f_4, uParam0->f_11, 1) <= 28f))
						{
							if (func_248(uParam0, fParam2))
							{
								uParam0->f_48++;
							}
						}
						break;
					
					case 1:
						if (func_247(uParam0, 0, 28f, fVar4, 4f))
						{
							uParam0->f_138 = 1;
							if (bLocal_94)
							{
								uParam0->f_7 = func_246(uParam0->f_4, uParam0->f_3);
								uVar0 = func_245(uParam0, &iVar1);
								if (!IS_ENTITY_DEAD(uVar0, 0))
								{
									if (iVar1 == uParam0->f_7)
									{
										if (uParam0->f_7 == 1)
										{
											iVar2 = 262144;
										}
										else if (uParam0->f_7 == 2)
										{
											iVar2 = 131072;
										}
										TASK_LEAVE_ANY_VEHICLE(uVar0, 0, iVar2);
									}
									else
									{
										TASK_LEAVE_ANY_VEHICLE(uVar0, 0, 0);
									}
								}
								if (uParam0->f_411 == 0)
								{
									if (_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 0, 0, 0))
									{
										if (uParam0->f_7 == 2)
										{
											uParam0->f_7 = 0;
											if (!IS_ENTITY_DEAD(uVar0, 0))
											{
												TASK_LEAVE_ANY_VEHICLE(uVar0, 0, 4096);
											}
										}
									}
								}
							}
							CLEAR_PED_TASKS(uParam0->f_3);
							TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
							uParam0->f_48++;
						}
						else
						{
							if (bParam1)
							{
								DRAW_DEBUG_SPHERE(GET_ENTITY_COORDS(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
							}
							if (!func_155(uParam0))
							{
								CLEAR_PED_TASKS(uParam0->f_3);
							}
							else if (((GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0) && GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 7) && func_251(uParam0, uParam0->f_3) > 8f)
							{
								CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
								OPEN_SEQUENCE_TASK(&(uParam0->f_243));
								TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
								if (uParam0->f_411 != 9)
								{
									TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								else
								{
									TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -8f, -1, 48, 0, 0, 0, 0);
								}
								CLOSE_SEQUENCE_TASK(uParam0->f_243);
								TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
							}
							if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
							{
								SET_ENTITY_ANIM_SPEED(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 1.75f);
							}
						}
						break;
					
					case 2:
						if (bLocal_94)
						{
							if (func_164(uParam0->f_4, uParam0->f_3, 1) < 3f)
							{
								if (!func_244(uParam0, 1))
								{
									CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_322(uParam0, "You had a dead body in your back seat.", 5);
								}
								else if (!func_243(uParam0->f_4))
								{
									CLEAR_PED_TASKS_IMMEDIATELY(uParam0->f_3);
									func_322(uParam0, "You had a dead body in your back seat.", 0);
								}
							}
						}
						func_241(uParam0);
						if (func_251(uParam0, uParam0->f_3) < fVar4 || func_32())
						{
							if (IS_PED_IN_VEHICLE(uParam0->f_2, uParam0->f_4, 0))
							{
								if (func_229(uParam0))
								{
									func_228(uParam0);
									iLocal_89 = GET_GAME_TIMER();
									SET_PED_CONFIG_FLAG(uParam0->f_3, 26, 1);
									func_109(uParam0, 5, 0);
									CLEAR_GPS_FLAGS();
									STAT_GET_FLOAT(uParam0->f_428, &(uParam0->f_42), -1);
									SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_3, 0);
									return 1;
								}
							}
						}
						else if (bParam1)
						{
							DRAW_DEBUG_SPHERE(GET_ENTITY_COORDS(uParam0->f_3, 1), fVar4, 0, 0, 255, 150);
						}
						break;
					}
				}
			}
	}
	return 0;
}

void func_228(var uParam0)
{
	if (DOES_BLIP_EXIST(uParam0->f_8))
	{
		SET_BLIP_ROUTE(uParam0->f_8, 0);
		REMOVE_BLIP(&(uParam0->f_8));
	}
}

int func_229(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	vector3 vVar13;
	
	func_216("UPDATE_PASSENGER_ENTER_CUTSCENE", &(uParam0->f_78), 1000);
	iVar12 = -1;
	if (!IS_ENTITY_DEAD(uParam0->f_3, 0) && !IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		func_240();
	}
	if (bLocal_94)
	{
		iLocal_86 = 10;
	}
	if ((iLocal_86 < 7 && iLocal_86 > 0) && !bLocal_94)
	{
		if (func_238(iLocal_88))
		{
			iLocal_86 = 7;
		}
	}
	switch (iLocal_86)
	{
		case 0:
			if (func_160(uParam0, 0, 1084227584) && func_168(1, 1, 1))
			{
				if (func_244(uParam0, 1))
				{
					iLocal_88 = GET_GAME_TIMER();
					SETTIMERA(0);
					iLocal_86 = 1;
				}
				else
				{
					func_322(uParam0, "You had a dead body in your back seat.", 5);
				}
			}
			break;
		
		case 1:
			if (TIMERA() > 500)
			{
				uParam0->f_7 = func_246(uParam0->f_4, uParam0->f_3);
				uVar9 = func_245(uParam0, &iVar10);
				if (!IS_ENTITY_DEAD(uVar9, 0))
				{
					if (iVar10 == uParam0->f_7)
					{
						if (uParam0->f_7 == 1)
						{
							iVar11 = 262144;
						}
						else
						{
							iVar11 = 131072;
						}
						TASK_LEAVE_ANY_VEHICLE(uVar9, 0, iVar11);
					}
					else
					{
						TASK_LEAVE_ANY_VEHICLE(uVar9, 0, 0);
					}
				}
				if (uParam0->f_411 == 0)
				{
					if (_0x639431E895B9AA57(uParam0->f_3, uParam0->f_4, 0, 0, 0))
					{
						uParam0->f_7 = 0;
						if (!IS_ENTITY_DEAD(uVar9, 0))
						{
							TASK_LEAVE_ANY_VEHICLE(uVar9, 0, 4096);
						}
					}
				}
				iLocal_86 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_7 == 0)
			{
				vVar6 = { 1.5f, 0f, -0.6422f };
				vVar0 = { -1.4309f, 3.958f, 3.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else if (uParam0->f_7 == 2)
			{
				vVar6 = { 1.5f, -1f, -0.6422f };
				vVar0 = { 1.4309f, 3.958f, 0.5037f };
				vVar3 = { 0.1017f, 1.3354f, -0.0925f };
			}
			else
			{
				vVar6 = { -1.5f, -1f, -0.6422f };
				vVar0 = { -1.4823f, 4.2333f, 0.5939f };
				vVar3 = { -0.4718f, 1.4282f, 0.3619f };
			}
			iVar12 = func_237(&(uParam0->f_409), GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0f, 2.2f, 0.275f), GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar0), 1);
			if (iVar12 == 1)
			{
				vVar0.z = (vVar0.z + 1.5f);
				if (uParam0->f_7 == 2)
				{
					vVar3 = { 0.7632f, 1.4884f, 0.4369f };
				}
			}
			if (iVar12 != -1)
			{
				func_236(0, 0, 1);
				CLEAR_AREA_OF_PEDS(GET_ENTITY_COORDS(uParam0->f_4, 1), 3f, 0);
				CLEAR_AREA_OF_OBJECTS(GET_ENTITY_COORDS(uParam0->f_4, 1), 25f, 0);
				CLEAR_HELP(1);
				CLEAR_PRINTS();
				func_117();
				func_253(uParam0, 0, 0);
				vVar13 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar6) };
				SET_ENTITY_COORDS(uParam0->f_3, vVar13, 1, 0, 0, 1);
				SET_ENTITY_HEADING(uParam0->f_3, func_234(uParam0));
				func_233(uParam0, 1f, 1f, 1f, 0f, 0f, 0f, 1112014848);
				SET_CAM_COORD(*uParam0, GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar0));
				POINT_CAM_AT_ENTITY(*uParam0, uParam0->f_4, vVar3, 1);
				SET_CAM_ACTIVE(*uParam0, 1);
				RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				_0x2208438012482A1A(uParam0->f_3, 0, 0);
				TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 3, 0);
				iLocal_86 = 5;
			}
			break;
		
		case 5:
			func_216("TAXI_PED_ENTER_CUT_WAIT", &(uParam0->f_78), 1000);
			if (TIMERA() > 3500)
			{
				iLocal_86 = 9;
			}
			break;
		
		case 6:
			break;
		
		case 7:
			if (!IS_ENTITY_DEAD(uParam0->f_3, 0) && !IS_ENTITY_DEAD(uParam0->f_4, 0))
			{
				if (!IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 0))
				{
					SET_PED_INTO_VEHICLE(uParam0->f_3, uParam0->f_4, uParam0->f_7);
					SET_VEHICLE_DOOR_SHUT(uParam0->f_4, func_232(uParam0->f_7), 1);
				}
				RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				DESTROY_CAM(*uParam0, 0);
				DESTROY_CAM(uParam0->f_1, 0);
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
				DO_SCREEN_FADE_IN(800);
				CLEAR_HELP(1);
				CLEAR_PRINTS();
				func_117();
				func_253(uParam0, 0, 0);
				iLocal_86 = 8;
			}
			break;
		
		case 8:
			if (IS_SCREEN_FADED_IN() && !IS_SCREEN_FADING_IN())
			{
				func_230(1, 1, 1);
				return 1;
			}
			break;
		
		case 9:
			RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
			DESTROY_CAM(*uParam0, 0);
			DESTROY_CAM(uParam0->f_1, 0);
			SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			func_230(1, 1, 1);
			return 1;
			break;
		
		case 10:
			if (!IS_ENTITY_DEAD(uParam0->f_3, 0) && !IS_ENTITY_DEAD(uParam0->f_4, 0))
			{
				if (IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_3) || IS_PED_IN_ANY_VEHICLE(uParam0->f_3, 1))
				{
					return 1;
				}
				else if (GET_SCRIPT_TASK_STATUS(PLAYER_PED_ID(), -1794415470) != 1 && GET_SCRIPT_TASK_STATUS(PLAYER_PED_ID(), -1794415470) != 0)
				{
					TASK_ENTER_VEHICLE(uParam0->f_3, uParam0->f_4, 20000, uParam0->f_7, uParam0->f_6, 1, 0);
				}
			}
			break;
	}
	return 0;
}

void func_230(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 1, 0);
	}
	_0xC61B86C9F61EB404(1);
	func_22(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		DISPLAY_RADAR(1);
		DISPLAY_HUD(1);
	}
	func_231(23, 0);
}

void func_231(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		SET_BIT(&Global_26010, iParam0);
	}
	else
	{
		CLEAR_BIT(&Global_26010, iParam0);
	}
}

int func_232(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		case 0:
			return 1;
		
		case -1:
			return 0;
		
		default:
	}
	return 2;
}

void func_233(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7)
{
	if (!DOES_CAM_EXIST(*uParam0))
	{
		*uParam0 = CREATE_CAMERA_WITH_PARAMS(26379945, vParam1, vParam4, iParam7, 0, 2);
	}
}

float func_234(var uParam0)
{
	float fVar0;
	vector3 vVar1;
	
	fVar0 = 0f;
	vVar1 = { func_40() };
	if (uParam0->f_7 == 2)
	{
		vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, 0.773f, -0.646f, -0.6422f) };
	}
	else
	{
		vVar1 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, -0.773f, -0.646f, -0.6422f) };
	}
	fVar0 = func_235(GET_ENTITY_COORDS(uParam0->f_3, 1), vVar1);
	return fVar0;
}

float func_235(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 0, iParam0);
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		STOP_FIRE_IN_RANGE(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), 15f);
	}
	_0xC61B86C9F61EB404(iParam1);
	func_41(0);
	func_22(1, 1, iParam2, 0, 0, 0);
	DISPLAY_RADAR(0);
	DISPLAY_HUD(0);
	func_231(23, 1);
}

int func_237(var uParam0, vector3 vParam1, vector3 vParam4, bool bParam7)
{
	var uVar0;
	var uVar3;
	int iVar6;
	var uVar7;
	int iVar8;
	
	if (*uParam0 == 0)
	{
		*uParam0 = START_SHAPE_TEST_LOS_PROBE(vParam1, vParam4, 511, 0, 7);
		if (bParam7)
		{
		}
	}
	else
	{
		iVar8 = GET_SHAPE_TEST_RESULT(*uParam0, &iVar6, &uVar0, &uVar3, &uVar7);
		if (iVar8 == 2)
		{
			if (bParam7)
			{
			}
			if (iVar6 == 0)
			{
				*uParam0 = 0;
				return iVar6;
			}
			else
			{
				if (bParam7)
				{
				}
				*uParam0 = 0;
				return iVar6;
			}
		}
		else if (iVar8 == 0)
		{
			if (bParam7)
			{
			}
			*uParam0 = 0;
		}
	}
	return -1;
}

int func_238(int iParam0)
{
	if (func_239() && GET_GAME_TIMER() >= iParam0 + 1000)
	{
		DO_SCREEN_FADE_OUT(500);
		while (!IS_SCREEN_FADED_OUT())
		{
			WAIT(0);
		}
		func_41(0);
		func_151();
		return 1;
	}
	return 0;
}

int func_239()
{
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (IS_CONTROL_JUST_PRESSED(0, 18) || IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_240()
{
	if (func_34())
	{
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appInternet");
	}
	if (func_33())
	{
		TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("appCamera");
	}
	if (func_43(1))
	{
		func_41(0);
	}
}

void func_241(var uParam0)
{
	var uVar0;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!IS_PED_INJURED(uParam0->f_3))
		{
			if (func_157(uParam0->f_3, 1) > 30f || func_242(uParam0))
			{
				if (GET_SCRIPT_TASK_STATUS(uParam0->f_3, -1794415470) == 1 || GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) == 1)
				{
					CLEAR_SEQUENCE_TASK(&uVar0);
					OPEN_SEQUENCE_TASK(&uVar0);
					TASK_TURN_PED_TO_FACE_ENTITY(0, uParam0->f_4, 0);
					TASK_PLAY_ANIM(0, "misscommon@response", "screw_you", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
					TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_11, uParam0->f_6, 20000, 1048576000, 0, 1193033728);
					CLOSE_SEQUENCE_TASK(uVar0);
					TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
					func_322(uParam0, "Player abandoned passenger on pickup.", 8);
				}
			}
		}
	}
}

int func_242(var uParam0)
{
	if ((GET_ENTITY_SPEED(uParam0->f_4) > 3f && func_110(uParam0, 5) > 15f) || IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
	{
		return 1;
	}
	return 0;
}

int func_243(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!IS_VEHICLE_TYRE_BURST(uParam0, 0, 0))
	{
		iVar0++;
	}
	if (!IS_VEHICLE_TYRE_BURST(uParam0, 1, 0))
	{
		iVar0++;
	}
	if (!IS_VEHICLE_TYRE_BURST(uParam0, 4, 0))
	{
		iVar0++;
	}
	if (!IS_VEHICLE_TYRE_BURST(uParam0, 5, 0))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (IS_THIS_MODEL_A_CAR(GET_ENTITY_MODEL(uParam0)))
	{
		iVar1 = 0;
		if (!IS_VEHICLE_DOOR_DAMAGED(uParam0, 0))
		{
			iVar1++;
		}
		if (!IS_VEHICLE_DOOR_DAMAGED(uParam0, 1))
		{
			iVar1++;
		}
		if (!IS_VEHICLE_DOOR_DAMAGED(uParam0, 2))
		{
			iVar1++;
		}
		if (!IS_VEHICLE_DOOR_DAMAGED(uParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_244(var uParam0, bool bParam1)
{
	var uVar0[3];
	int iVar4;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		uVar0[0] = GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, 0);
		uVar0[1] = GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, 0);
		uVar0[2] = GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, 0);
		iVar4 = 0;
		while (iVar4 < 3)
		{
			if (DOES_ENTITY_EXIST(uVar0[iVar4]))
			{
				if (IS_ENTITY_DEAD(uVar0[iVar4], 0))
				{
					if (iVar4 == 0)
					{
						uParam0->f_7 = 1;
						if (bParam1)
						{
						}
					}
					else if (iVar4 == 1)
					{
						uParam0->f_7 = 2;
						if (bParam1)
						{
						}
					}
					else
					{
						uParam0->f_7 = 0;
						if (bParam1)
						{
						}
					}
					if (bParam1)
					{
					}
					return 0;
				}
			}
			iVar4++;
		}
		if ((GET_GAME_TIMER() % 1000) < 50)
		{
		}
	}
	return 1;
}

int func_245(var uParam0, var uParam1)
{
	var uVar0;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		uVar0 = GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 1, 0);
		if (DOES_ENTITY_EXIST(uVar0))
		{
			*uParam1 = 1;
			return uVar0;
		}
		else
		{
			uVar0 = GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 2, 0);
			if (DOES_ENTITY_EXIST(uVar0))
			{
				*uParam1 = 2;
				return uVar0;
			}
			else
			{
				uVar0 = GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, 0, 0);
				if (DOES_ENTITY_EXIST(uVar0))
				{
					*uParam1 = 0;
					return uVar0;
				}
			}
		}
	}
	return 0;
}

int func_246(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	
	iVar4 = GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uParam0);
	vVar0 = { GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0, GET_ENTITY_COORDS(uParam1, 1)) };
	if (GET_ENTITY_MODEL(uParam0) != joaat("vacca"))
	{
	}
	if (GET_ENTITY_MODEL(uParam0) == joaat("sentinel2"))
	{
		iVar4 = 1;
	}
	if (iVar4 == 1)
	{
		iVar3 = 0;
	}
	else if (vVar0.x > 0f)
	{
		if (_0x639431E895B9AA57(uParam1, uParam0, 2, 0, 0))
		{
			iVar3 = 2;
		}
		else if (_0x639431E895B9AA57(uParam1, uParam0, 1, 0, 0))
		{
			iVar3 = 1;
		}
		else
		{
			iVar3 = -2;
		}
	}
	else if (_0x639431E895B9AA57(uParam1, uParam0, 1, 0, 0))
	{
		iVar3 = 1;
	}
	else if (_0x639431E895B9AA57(uParam1, uParam0, 2, 0, 0))
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = -2;
	}
	return iVar3;
}

int func_247(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4)
{
	if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (!IS_ENTITY_OCCLUDED(uParam0->f_3) && func_157(uParam0->f_3, 1) < fParam2)
		{
			if (!func_297(uParam0, 5))
			{
				func_290(uParam0, 5, 0, 0);
			}
		}
		else if (func_297(uParam0, 5))
		{
			func_109(uParam0, 5, 0);
		}
		if (((func_110(uParam0, 5) > IntToFloat(iParam1) && GET_ENTITY_SPEED(uParam0->f_4) < fParam4) && !IS_ENTITY_OCCLUDED(uParam0->f_3)) || func_157(uParam0->f_3, 1) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

int func_248(var uParam0, float fParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	var uVar9;
	var uVar12;
	int iVar15;
	var uVar16;
	int iVar17;
	int iVar18;
	
	iVar18 = GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen");
	if (iVar18 == -1)
	{
		iVar18 = GET_ENTITY_BONE_INDEX_BY_NAME(uParam0->f_4, "windscreen_f");
	}
	if (iVar18 != -1)
	{
		vVar6 = { GET_WORLD_POSITION_OF_ENTITY_BONE(uParam0->f_4, iVar18) };
		vVar6 = { GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam0->f_4, vVar6) };
		vVar6.y = (vVar6.y + 1f);
	}
	else
	{
		vVar6 = { 0f, 1f, 1f };
	}
	vVar0 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_4, vVar6) };
	vVar3 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_3, 0f, 0.25f, 0.9f) };
	DRAW_DEBUG_LINE(vVar0, vVar3, 0, 0, 255, 255);
	switch (iLocal_87)
	{
		case 0:
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 1);
			iLocal_87 = 1;
			break;
		
		case 1:
			if ((func_164(uParam0->f_4, uParam0->f_3, 0) <= fParam1 && !uParam0->f_142) && ABSF((vVar0.z - vVar3.z)) < 5f)
			{
				if (uParam0->f_409 == 0)
				{
					uParam0->f_409 = START_SHAPE_TEST_LOS_PROBE(vVar0, vVar3, 511, 0, 7);
				}
				else
				{
					iVar17 = GET_SHAPE_TEST_RESULT(uParam0->f_409, &iVar15, &uVar9, &uVar12, &uVar16);
					if (iVar17 == 2)
					{
						if (iVar15 == 0)
						{
							iLocal_87 = 2;
						}
						uParam0->f_409 = 0;
					}
					else if (iVar17 == 0)
					{
						uParam0->f_409 = 0;
					}
				}
			}
			else if (GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 1 && GET_SCRIPT_TASK_STATUS(uParam0->f_3, 242628503) != 0)
			{
				CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
				OPEN_SEQUENCE_TASK(&(uParam0->f_243));
				TASK_PLAY_ANIM(0, "oddjobs@taxi@", "idle_a", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
				SET_SEQUENCE_TO_REPEAT(uParam0->f_243, 1);
				CLOSE_SEQUENCE_TASK(uParam0->f_243);
				TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			}
			break;
		
		case 2:
			CLEAR_PRINTS();
			if (uParam0->f_411 != 9)
			{
				if (!func_21(uParam0->f_44, 128))
				{
					func_222(uParam0, 4, 1, 0, 1);
				}
			}
			else
			{
				func_249(uParam0->f_3, "TAXI_HAIL", uParam0->f_145, 4);
			}
			CLEAR_PED_TASKS(uParam0->f_3);
			TASK_LOOK_AT_ENTITY(uParam0->f_3, uParam0->f_4, -1, 2048, 4);
			CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			OPEN_SEQUENCE_TASK(&(uParam0->f_243));
			if (uParam0->f_411 != 9)
			{
				TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_nod_yes_hard", 8f, -8f, -1, 48, 0, 0, 0, 0);
			}
			else
			{
				TASK_PLAY_ANIM(0, "oddjobs@towingcome_here", "come_here_idle_c", 8f, -1.5f, -1, 48, 0, 0, 0, 0);
			}
			TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER_PED_ID(), 0);
			CLOSE_SEQUENCE_TASK(uParam0->f_243);
			TASK_PERFORM_SEQUENCE(uParam0->f_3, uParam0->f_243);
			CLEAR_SEQUENCE_TASK(&(uParam0->f_243));
			iLocal_87 = 3;
			break;
		
		case 3:
			iLocal_87 = 0;
			if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 3))
			{
				SET_ENTITY_ANIM_SPEED(uParam0->f_3, "gestures@m@standing@casual", "gesture_you_hard", 0.8f);
			}
			return 1;
			break;
	}
	return 0;
}

void func_249(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	_PLAY_AMBIENT_SPEECH_WITH_VOICE(uParam0, sParam1, uParam2, func_250(iParam3), 0);
}

int func_250(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
		
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
		
		case 2:
			return "SPEECH_PARAMS_BEAT";
		
		case 3:
			return "SPEECH_PARAMS_FORCE";
		
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
		
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
		
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
		
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
		
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
		
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
		
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
		
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
		
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
		
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
		
		case 14:
			return "SPEECH_PARAMS_HELI";
		
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
		
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
		
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
		
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
		
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
		
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
		
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
		
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
		
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
		
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
		
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
		
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
		
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
		
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
		
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
		
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
		
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
		
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
		
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
		
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
		
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
		
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
		
		default:
	}
	iVar0 = 0;
	return iVar0;
}

float func_251(var uParam0, var uParam1)
{
	if (!IS_ENTITY_DEAD(uParam1, 0))
	{
		if (func_155(uParam0))
		{
			return func_164(uParam0->f_4, uParam1, 1);
		}
	}
	return 0f;
}

void func_252(var uParam0)
{
	func_192(uParam0, uParam0->f_3);
	if (func_155(uParam0))
	{
		if (func_297(uParam0, 14))
		{
			func_194(uParam0);
			if (DOES_BLIP_EXIST(uParam0->f_10))
			{
				REMOVE_BLIP(&(uParam0->f_10));
			}
		}
	}
	if (!func_297(uParam0, 9))
	{
		if (DOES_BLIP_EXIST(uParam0->f_8))
		{
			SET_BLIP_ALPHA(uParam0->f_8, 0);
			SET_BLIP_ROUTE(uParam0->f_8, 0);
		}
		func_290(uParam0, 9, 0, 0);
		func_150("TAXI_OBJ_POL", 7500, 1);
	}
}

void func_253(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_110 = iParam1;
	if (bParam2)
	{
		func_47();
		func_290(uParam0, 16, 4f, 0);
		CLEAR_PRINTS();
	}
}

int func_254(var uParam0, int iParam1)
{
	if (!HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		return 0;
	}
	func_258(12);
	if (func_21(uParam0->f_44, 8))
	{
		if (!func_21(uParam0->f_44, 128))
		{
			if (IS_PED_JACKING(PLAYER_PED_ID()) && !func_21(uParam0->f_44, 256))
			{
				func_165(&(uParam0->f_44), 256);
			}
			if (func_21(uParam0->f_44, 256) && IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
			{
				func_222(uParam0, 135, 1, 0, 1);
				func_165(&(uParam0->f_44), 128);
			}
		}
	}
	if (!func_257(uParam0, iParam1))
	{
		if (func_157(uParam0->f_3, 1) < 35f)
		{
			if (!func_21(uParam0->f_44, 8))
			{
				TASK_TURN_PED_TO_FACE_ENTITY(uParam0->f_3, PLAYER_PED_ID(), 0);
				func_222(uParam0, 133, 1, 0, 1);
				func_165(&(uParam0->f_44), 8);
			}
		}
		if ((IS_PED_INJURED(uParam0->f_3) || IS_PED_FLEEING(uParam0->f_3)) || func_157(uParam0->f_3, 1) > 400f)
		{
			func_322(uParam0, "ped is fleeing or injured", 5);
		}
	}
	else
	{
		uParam0->f_4 = GET_VEHICLE_PED_IS_IN(uParam0->f_2, 0);
		SET_VEHICLE_HAS_STRONG_AXLES(uParam0->f_4, 1);
		if (GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == uParam0->f_2)
		{
			ADD_VEHICLE_UPSIDEDOWN_CHECK(uParam0->f_4);
			func_255(uParam0);
			func_49(2, 0);
			bLocal_94 = true;
			func_111(&uLocal_90);
			return 1;
		}
		else
		{
			func_322(uParam0, "No Taxi", 21);
			func_154("TAXI_DBG_NTAXI", -1);
		}
	}
	return 0;
}

void func_255(var uParam0)
{
	if (!IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (func_256())
		{
		}
	}
}

int func_256()
{
	if (IS_BIT_SET(GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_257(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
			if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				iVar1 = GET_ENTITY_MODEL(uVar0);
				bVar2 = func_243(uVar0);
				bVar3 = true;
				if (((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((iVar1 == joaat("rhino") || iVar1 == joaat("ratloader")) || iVar1 == joaat("surfer")) || iVar1 == joaat("surfer2")) || iVar1 == joaat("armytanker")) || iVar1 == joaat("barracks")) || iVar1 == joaat("barracks2")) || iVar1 == joaat("crusader")) || iVar1 == joaat("utillitruck")) || iVar1 == joaat("utillitruck2")) || iVar1 == joaat("utillitruck3")) || iVar1 == joaat("airtug")) || iVar1 == joaat("caddy")) || iVar1 == joaat("caddy2")) || iVar1 == joaat("dloader")) || iVar1 == joaat("docktug")) || iVar1 == joaat("flatbed")) || iVar1 == joaat("ripley")) || iVar1 == joaat("romero")) || iVar1 == joaat("towtruck")) || iVar1 == joaat("towtruck2")) || iVar1 == joaat("airbus")) || iVar1 == joaat("bus")) || iVar1 == joaat("coach")) || iVar1 == joaat("rentalbus")) || iVar1 == joaat("tourbus")) || iVar1 == joaat("riot")) || iVar1 == joaat("trash")) || iVar1 == joaat("benson")) || iVar1 == joaat("biff")) || iVar1 == joaat("hauler")) || iVar1 == joaat("packer")) || iVar1 == joaat("phantom")) || iVar1 == joaat("pounder")) || iVar1 == joaat("bulldozer")) || iVar1 == joaat("handler")) || iVar1 == joaat("tiptruck2")) || iVar1 == joaat("cutter")) || iVar1 == joaat("dump")) || iVar1 == joaat("mixer")) || iVar1 == joaat("mixer2")) || iVar1 == joaat("rubble")) || iVar1 == joaat("scrap")) || iVar1 == joaat("tiptruck")) || iVar1 == joaat("camper")) || iVar1 == joaat("taco")) || iVar1 == joaat("boxville")) || iVar1 == joaat("boxville2")) || iVar1 == joaat("boxville3")) || iVar1 == joaat("burrito")) || iVar1 == joaat("burrito2")) || iVar1 == joaat("burrito3")) || iVar1 == joaat("burrito4")) || iVar1 == joaat("gburrito")) || iVar1 == joaat("journey")) || iVar1 == joaat("mule")) || iVar1 == joaat("mule2")) || iVar1 == joaat("pony")) || iVar1 == joaat("rumpo")) || iVar1 == joaat("rumpo2")) || iVar1 == joaat("speedo")) || iVar1 == joaat("speedo2")) || iVar1 == joaat("youga")) || iVar1 == joaat("mower")) || iVar1 == joaat("tractor")) || iVar1 == joaat("tractor2")) || iVar1 == joaat("fbi")) || iVar1 == joaat("fbi2")) || iVar1 == joaat("pranger")) || iVar1 == joaat("ambulance")) || iVar1 == joaat("dilettante2")) || iVar1 == joaat("firetruk")) || iVar1 == joaat("lguard")) || iVar1 == joaat("dune")) || iVar1 == joaat("pbus")) || iVar1 == joaat("police")) || iVar1 == joaat("police2")) || iVar1 == joaat("police3")) || iVar1 == joaat("police4")) || iVar1 == joaat("policeb")) || iVar1 == joaat("policet")) || iVar1 == joaat("sheriff")) || iVar1 == joaat("sheriff2")) || iVar1 == joaat("stockade"))
				{
					bVar3 = false;
				}
				if (uParam0->f_411 == 7)
				{
					if (iVar1 == joaat("bodhi2"))
					{
						bVar3 = false;
					}
				}
				bVar4 = false;
				if (IS_THIS_MODEL_A_CAR(iVar1))
				{
					if (GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) == PLAYER_PED_ID())
					{
						bVar4 = true;
					}
				}
				bVar5 = true;
				if (GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(uVar0) < iParam1)
				{
					bVar5 = false;
				}
				if (!bVar2)
				{
					if (!func_21(uParam0->f_44, 64))
					{
						if (HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_154("TX_VIP_DMGD", -1);
							if (func_153("TX_VIP_DMGD"))
							{
								func_165(&(uParam0->f_44), 64);
							}
						}
					}
					return 0;
				}
				else if (!bVar4 || !bVar3)
				{
					if (!func_21(uParam0->f_44, 32))
					{
						if (HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_154("TX_VIP_CAR", -1);
							if (func_153("TX_VIP_CAR"))
							{
								func_165(&(uParam0->f_44), 32);
							}
						}
					}
					return 0;
				}
				else if (!bVar5)
				{
					if (!func_21(uParam0->f_44, 16))
					{
						if (HAS_ADDITIONAL_TEXT_LOADED(2))
						{
							func_154("TX_VIP_SMALL", -1);
							if (func_153("TX_VIP_SMALL"))
							{
								func_165(&(uParam0->f_44), 16);
							}
						}
					}
					return 0;
				}
				return 1;
			}
		}
		else
		{
			func_121(&(uParam0->f_44), 16);
			func_121(&(uParam0->f_44), 64);
			func_121(&(uParam0->f_44), 32);
		}
	}
	return 0;
}

void func_258(int iParam0)
{
	var uVar0;
	vector3 vVar1[24];
	
	if (IS_XBOX360_VERSION() || IS_DURANGO_VERSION())
	{
		uVar0 = iParam0;
		NETWORK_SET_RICH_PRESENCE(8, &uVar0, 1, 1);
	}
	else if (IS_PS3_VERSION() || IS_ORBIS_VERSION())
	{
		StringCopy(&cVar1, "SPMG_", 24);
		StringIntConCat(&cVar1, iParam0, 24);
		StringConCat(&cVar1, "_STR", 24);
		_NETWORK_SET_RICH_PRESENCE_2(8, &cVar1);
	}
}

void func_259(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		func_122(&(uParam0->f_100), iVar0);
		iVar0++;
	}
}

void func_260()
{
	Local_343 = 0;
	func_277(46975, 46950, 1);
	func_277(46711, 46688, 1);
	func_277(46626, 46601, 1);
	func_277(46529, 46505, 1);
	func_277(46395, 46374, 1);
	func_277(46321, 46296, 1);
	func_277(46154, 46131, 1);
}

int func_261(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_322(uParam0, "Taxi Not Driveable", 1);
	return 1;
}

int func_262(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_264(uParam0->f_4))
		{
			func_263(uParam0, 1);
			return 1;
		}
	}
	return 0;
}

void func_263(var uParam0, int iParam1)
{
	uParam0->f_117 = 1;
	uParam0->f_118 = iParam1;
}

int func_264(var uParam0)
{
	if (!IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		return 1;
	}
	if (GET_VEHICLE_ENGINE_HEALTH(uParam0) < -100f)
	{
		return 1;
	}
	else if (IS_VEHICLE_STUCK_TIMER_UP(uParam0, 0, 40000) || IS_VEHICLE_STUCK_TIMER_UP(uParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

int func_265(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_322(uParam0, "Didn't lose police in time.", 9);
	return 1;
}

int func_266(var uParam0)
{
	if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0)
	{
		if (func_267(uParam0->f_85, 32))
		{
			return 1;
		}
	}
	return 0;
}

bool func_267(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_268(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_263(uParam0, 11);
	return 1;
}

int func_269(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (IS_ENTITY_IN_WATER(uParam0->f_4) && !IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4))
		{
			if (!func_297(uParam0, 25))
			{
				func_290(uParam0, 25, 0, 0);
			}
			else if (func_110(uParam0, 25) > 2f)
			{
				return 1;
			}
		}
		else if (func_297(uParam0, 25))
		{
			func_109(uParam0, 25, 0);
		}
	}
	return 0;
}

int func_270(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_322(uParam0, "Taxi Is Flipped", 0);
	return 1;
}

int func_271(var uParam0)
{
	if (!IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(uParam0->f_4))
		{
			if (IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 0, 40000) || IS_VEHICLE_STUCK_TIMER_UP(uParam0->f_4, 1, 40000))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_272(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_322(uParam0, "Stayed stopped for too long.", 9);
	return 1;
}

int func_273(var uParam0)
{
	if (!IS_ENTITY_DEAD(uParam0->f_4, 0))
	{
		if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (IS_VEHICLE_STOPPED(uParam0->f_4))
			{
				if (func_267(uParam0->f_86, 8))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_274(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_322(uParam0, "Taxi Not Driveable", 0);
	return 1;
}

int func_275(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0->f_4))
	{
		if (func_276(uParam0->f_4))
		{
			func_263(uParam0, 0);
			return 1;
		}
	}
	return 0;
}

int func_276(var uParam0)
{
	if (!IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		return 1;
	}
	if (GET_VEHICLE_ENGINE_HEALTH(uParam0) == 0f)
	{
		if (!IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
		}
		return 1;
	}
	else if (IS_VEHICLE_STUCK_TIMER_UP(uParam0, 0, 40000) || IS_VEHICLE_STUCK_TIMER_UP(uParam0, 1, 40000))
	{
		return 1;
	}
	return 0;
}

void func_277(int iParam0, int iParam1, bool bParam2)
{
	if (Local_343 >= 16)
	{
		Local_343 = 16;
		return;
	}
	Local_343.f_1[Local_343 /*4*/] = 0;
	func_159(&(Local_343.f_1[Local_343 /*4*/]), 1);
	if (bParam2)
	{
		func_159(&(Local_343.f_1[Local_343 /*4*/]), 2);
	}
	Local_343.f_1[Local_343 /*4*/].f_2 = iParam0;
	Local_343.f_1[Local_343 /*4*/].f_3 = iParam1;
	Local_343++;
}

int func_278(var uParam0, var uParam1)
{
	uParam1 = uParam1;
	func_322(uParam0, "Passenger injured.", 15);
	return 1;
}

int func_279(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0->f_3))
	{
		if ((IS_PED_INJURED(uParam0->f_3) || IS_ENTITY_DEAD(uParam0->f_3, 0)) || IS_ENTITY_ON_FIRE(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

void func_280(var uParam0, var uParam1)
{
	int iVar0;
	
	if (*uParam1 <= 5)
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			iVar0++;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			uParam0->f_60[iVar0 /*3*/] = { *(uParam1[iVar0 /*3*/]) };
			SET_BIT(&(uParam0->f_60[iVar0 /*3*/]), 1);
			CLEAR_BIT(&(uParam0->f_60[iVar0 /*3*/]), 2);
			iVar0++;
		}
	}
}

void func_281(var uParam0, char* sParam1, int iParam2)
{
	*uParam0 = 0;
	uParam0->f_1 = iParam2;
	uParam0->f_2 = sParam1;
}

void func_282()
{
	Local_190[5 /*10*/] = 5;
	Local_190[5 /*10*/].f_1 = 0;
	Local_190[5 /*10*/].f_2 = "TX_SPEED_N";
	Local_190[5 /*10*/].f_9 = 78;
	Local_190[0 /*10*/] = 5;
	Local_190[0 /*10*/].f_1 = 0;
	Local_190[0 /*10*/].f_2 = "TX_AIR_N";
	Local_190[0 /*10*/].f_9 = 76;
	Local_190[2 /*10*/] = 5;
	Local_190[2 /*10*/].f_1 = 0;
	Local_190[2 /*10*/].f_2 = "TX_QSTOP_N";
	Local_190[2 /*10*/].f_9 = 21;
	Local_190[1 /*10*/] = 10;
	Local_190[1 /*10*/].f_1 = 0;
	Local_190[1 /*10*/].f_2 = "TX_DRIFT_N";
	Local_190[1 /*10*/].f_9 = 71;
	Local_190[4 /*10*/] = 10;
	Local_190[4 /*10*/].f_1 = 0;
	Local_190[4 /*10*/].f_2 = "TX_SIDEWALK_N";
	Local_190[4 /*10*/].f_9 = 79;
	Local_190[6 /*10*/] = 10;
	Local_190[6 /*10*/].f_1 = 0;
	Local_190[6 /*10*/].f_2 = "TX_ONCOMING_N";
	Local_190[6 /*10*/].f_9 = 80;
	Local_190[9 /*10*/] = 15;
	Local_190[9 /*10*/].f_1 = 0;
	Local_190[9 /*10*/].f_2 = "TX_HITRUN_N";
	Local_190[9 /*10*/].f_9 = 82;
	Local_190[8 /*10*/] = 15;
	Local_190[8 /*10*/].f_1 = 0;
	Local_190[8 /*10*/].f_2 = "TX_RECKLESS_N";
	Local_190[8 /*10*/].f_9 = 72;
	Local_190[7 /*10*/] = 15;
	Local_190[7 /*10*/].f_1 = 0;
	Local_190[7 /*10*/].f_2 = "TX_ROLL_N";
	Local_190[7 /*10*/].f_9 = 74;
	Local_190[11 /*10*/] = 5;
	Local_190[11 /*10*/].f_1 = 0;
	Local_190[11 /*10*/].f_2 = "TX_SWERVE_N";
	Local_190[11 /*10*/].f_9 = 70;
	Local_190[12 /*10*/] = 5;
	Local_190[12 /*10*/].f_1 = 0;
	Local_190[12 /*10*/].f_2 = "TX_REVERSE_N";
	Local_190[12 /*10*/].f_9 = 69;
	Local_190[13 /*10*/] = 10;
	Local_190[13 /*10*/].f_1 = 0;
	Local_190[13 /*10*/].f_2 = "TX_OFFROAD_N";
	Local_190[13 /*10*/].f_9 = 67;
	Local_190[14 /*10*/] = 10;
	Local_190[14 /*10*/].f_1 = 0;
	Local_190[14 /*10*/].f_2 = "TX_NEARMIS_N";
	Local_190[14 /*10*/].f_9 = 75;
}

int func_283()
{
	if (!HAS_MODEL_LOADED(iLocal_929))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading A_M_M_Farmer_01", &iLocal_950, 1000);
		return 0;
	}
	if (!HAS_SCALEFORM_MOVIE_LOADED(uLocal_1112))
	{
		return 0;
	}
	if (!func_284(&iLocal_950, 1))
	{
		func_216("TAXI_ASSETS_STREAMED - Loading shared assets", &iLocal_950, 1000);
		return 0;
	}
	return 1;
}

int func_284(int iParam0, bool bParam1)
{
	if (!HAS_MODEL_LOADED(func_20()))
	{
		func_216("TAXI_SHARED_ASSETS_STREAMED - TAXI MODEL Loading...", iParam0, 1000);
		return 0;
	}
	if (bParam1)
	{
		if (!HAS_ANIM_DICT_LOADED("gestures@m@standing@casual"))
		{
			func_216("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts gestures@m@standing@casual Loading...", iParam0, 1000);
			return 0;
		}
	}
	if (!HAS_ANIM_DICT_LOADED("oddjobs@taxi@"))
	{
		func_216("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@taxi@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HAS_ANIM_DICT_LOADED("oddjobs@towingcome_here"))
	{
		func_216("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts oddjobs@towingcome_here Loading...", iParam0, 1000);
		return 0;
	}
	if (!HAS_ANIM_DICT_LOADED("misscommon@response"))
	{
		func_216("TAXI_SHARED_ASSETS_STREAMED - Anim Dicts misscommon@ Loading...", iParam0, 1000);
		return 0;
	}
	if (!HAS_ADDITIONAL_TEXT_LOADED(2))
	{
		func_216("TAXI_SHARED_ASSETS_STREAMED - Mission Text Loading...", iParam0, 1000);
		return 0;
	}
	return 1;
}

void func_285(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			uParam0->f_123 = "TRS_STREAMING";
			break;
		
		case 2:
			uParam0->f_123 = " TRS_FINDING_LOCATION ";
			break;
		
		case 3:
			uParam0->f_123 = " TRS_SPAWNING ";
			break;
		
		case 4:
			uParam0->f_123 = " TRS_SPAWN_CAR ";
			break;
		
		case 5:
			uParam0->f_123 = " TRS_MANAGE_PICKUP ";
			break;
		
		case 6:
			uParam0->f_123 = " TRS_PASSENGER_ENTER ";
			break;
		
		case 7:
			uParam0->f_123 = " TRS_WAIT_FOR_TIME ";
			break;
		
		case 8:
			uParam0->f_123 = " TRS_WAIT_FOR_TAIL ";
			break;
		
		case 9:
			uParam0->f_123 = " TRS_DRIVING_PASSENGER ";
			break;
		
		case 10:
			uParam0->f_123 = " TRS_WAIT_FOR_FULL_STOP ";
			break;
		
		case 18:
			uParam0->f_123 = " TRS_PRE_CUTSCENE ";
			break;
		
		case 11:
			uParam0->f_123 = " TRS_SWITCH_JOB ";
			break;
		
		case 19:
			uParam0->f_123 = " TRS_CUTSCENE ";
			break;
		
		case 20:
			uParam0->f_123 = " TRS_CUTSCENE_02 ";
			break;
		
		case 13:
			uParam0->f_123 = " TRS_CHASE_DRIVER ";
			break;
		
		case 12:
			uParam0->f_123 = " TRS_SAVE_DAMSEL ";
			break;
		
		case 14:
			uParam0->f_123 = " TRS_REVEAL_DESTINATION ";
			break;
		
		case 15:
			uParam0->f_123 = " TRS_WAIT_PARK ";
			break;
		
		case 16:
			uParam0->f_123 = " TRS_SEND_TO_STORE ";
			break;
		
		case 17:
			uParam0->f_123 = " TRS_WAIT_1ST_STOP ";
			break;
		
		case 22:
			uParam0->f_123 = " TRS_DROPPING_OFF ";
			break;
		
		case 25:
			uParam0->f_123 = " TRS_ESCAPE_POLICE ";
			break;
		
		case 26:
			uParam0->f_123 = " TRS_POLICE_ESCAPED ";
			break;
		
		case 24:
			uParam0->f_123 = " TRS_TIE_UP_LOSE_ENDS ";
			break;
		
		case 27:
			uParam0->f_123 = " TRS_REGULAR_PAYMENT ";
			break;
		
		case 23:
			uParam0->f_123 = " TRS_ELIMATE_ALL_ENEMIES ";
			break;
		
		case 28:
			uParam0->f_123 = " TRS_SPECIAL_ENDING ";
			break;
		
		case 29:
			uParam0->f_123 = " TRS_SCORECARD_GRADE ";
			break;
		
		case 30:
			uParam0->f_123 = " TRS_CLEANUP ";
			break;
		
		case 21:
			uParam0->f_123 = " TRS_WAIT_FOR_PASSENGER ";
			break;
		
		default:
			uParam0->f_123 = " TRS IS UNIDENTIFIED - FIX THIS ";
			break;
	}
	uParam0->f_410 = iParam1;
}

int func_286(var uParam0)
{
	if (!IS_PED_INJURED(uParam0->f_3))
	{
		uParam0->f_8 = func_287(uParam0->f_3, 0, 0);
		SET_GPS_FLAGS(1, 0);
		SET_BLIP_ROUTE(uParam0->f_8, 1);
		SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_8, "TAXI_BLIP_PASS");
		TASK_LOOK_AT_ENTITY(uParam0->f_3, PLAYER_PED_ID(), -1, 2048, 4);
	}
	return 1;
}

int func_287(var uParam0, bool bParam1, bool bParam2)
{
	return func_130(uParam0, !bParam1, bParam2);
}

int func_288(var uParam0, vector3 vParam1, vector3 vParam4, char* sParam7, int iParam8, float fParam9, float fParam10)
{
	if (!DOES_ENTITY_EXIST(uParam0->f_3))
	{
		func_289(uParam0, uParam0->f_14);
		uParam0->f_11 = { vParam1 };
		uParam0->f_14 = { vParam4 };
		func_38(uParam0->f_14, 0);
		CLEAR_AREA_OF_PEDS(uParam0->f_14, 2f, 0);
		func_36(uParam0->f_14, 0, fParam10);
		if (iParam8 == 0)
		{
			uParam0->f_3 = CREATE_RANDOM_PED(uParam0->f_11);
		}
		else if (DOES_ENTITY_EXIST(Global_105275.f_225[0]))
		{
			uParam0->f_3 = Global_105275.f_225[0];
			SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3, 1, 1);
		}
		else
		{
			uParam0->f_3 = CREATE_PED(26, iParam8, uParam0->f_11, fParam9, 1, 1);
		}
		func_7(&(uParam0->f_244), 3, uParam0->f_3, sParam7, 0, 1);
		SET_AMBIENT_VOICE_NAME(uParam0->f_3, sParam7);
		SET_PED_RESET_FLAG(uParam0->f_3, 112, 1);
		if (!IS_PED_INJURED(uParam0->f_3))
		{
			SET_ENTITY_LOD_DIST(uParam0->f_3, 250);
			SET_PED_CONFIG_FLAG(uParam0->f_3, 32, 0);
			SET_PED_CONFIG_FLAG(uParam0->f_3, 104, 1);
			SET_PED_CONFIG_FLAG(uParam0->f_3, 177, 1);
			SET_PED_CONFIG_FLAG(uParam0->f_3, 116, 0);
			ADD_RELATIONSHIP_GROUP("TAXI_Passenger", &(uParam0->f_413));
			SET_RELATIONSHIP_BETWEEN_GROUPS(1, uParam0->f_413, 1862763509);
			SET_RELATIONSHIP_BETWEEN_GROUPS(2, uParam0->f_413, -1533126372);
			SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_3, uParam0->f_413);
			return 1;
		}
	}
	return 0;
}

void func_289(var uParam0, vector3 vParam1)
{
	uParam0->f_51[0] = _ADD_SPEED_ZONE_FOR_COORD(vParam1, 20f, 5f, 0);
}

void func_290(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 == 32)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (fParam2 > 0f)
			{
				func_103(&(uParam0->f_146[iVar0 /*3*/]), fParam2);
			}
			else
			{
				func_102(&(uParam0->f_146[iVar0 /*3*/]));
			}
			iVar0++;
		}
	}
	else if (fParam2 > 0f)
	{
		func_103(&(uParam0->f_146[iParam1 /*3*/]), fParam2);
	}
	else
	{
		func_102(&(uParam0->f_146[iParam1 /*3*/]));
	}
	if (bParam3)
	{
	}
}

void func_291()
{
	REQUEST_MODEL(iLocal_929);
	func_293(1);
	uLocal_1112 = func_292();
}

var func_292()
{
	return REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
}

void func_293(bool bParam0)
{
	REQUEST_MODEL(func_20());
	if (bParam0)
	{
		REQUEST_ANIM_DICT("gestures@m@standing@casual");
	}
	REQUEST_ANIM_DICT("oddjobs@taxi@");
	REQUEST_ANIM_DICT("oddjobs@towingcome_here");
	REQUEST_ANIM_DICT("misscommon@response");
	REQUEST_ADDITIONAL_TEXT("TAXI", 2);
	if (!func_21(Global_106565.f_19091, 128))
	{
		func_165(&(Global_106565.f_19091), 128);
	}
}

void func_294(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!IS_PED_INJURED((*uParam0)[iVar0]))
		{
			CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[iVar0]);
			SET_PED_FLEE_ATTRIBUTES((*uParam0)[iVar0], 13, 1);
			CLEAR_SEQUENCE_TASK(&uLocal_934);
			OPEN_SEQUENCE_TASK(&uLocal_934);
			TASK_STAND_STILL(0, GET_RANDOM_INT_IN_RANGE(1, 1000));
			TASK_SMART_FLEE_PED(0, Local_409.f_3, 4000f, -1, 0, 0);
			CLOSE_SEQUENCE_TASK(uLocal_934);
			TASK_PERFORM_SEQUENCE((*uParam0)[iVar0], uLocal_934);
			SET_PED_KEEP_TASK((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_295(var uParam0)
{
	int iVar0;
	int iVar1;
	
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_923, 1862763509);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_923, Local_409.f_413);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, uLocal_923, -1533126372);
	SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1533126372, uLocal_923);
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!IS_PED_INJURED((*uParam0)[iVar0]))
		{
			CLEAR_PED_TASKS((*uParam0)[iVar0]);
			GET_CURRENT_PED_WEAPON((*uParam0)[iVar0], &iVar1, 1);
			if (iVar1 == joaat("weapon_unarmed"))
			{
				GIVE_WEAPON_TO_PED((*uParam0)[iVar0], joaat("weapon_pistol"), -1, 0, 1);
			}
			SET_PED_ACCURACY((*uParam0)[iVar0], 30);
			TASK_COMBAT_HATED_TARGETS_AROUND_PED((*uParam0)[iVar0], 1000f, 0);
			SET_PED_KEEP_TASK((*uParam0)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_296(var uParam0, int iParam1)
{
	func_111(&(uParam0->f_146[iParam1 /*3*/]));
}

bool func_297(var uParam0, int iParam1)
{
	return func_15(&(uParam0->f_146[iParam1 /*3*/]));
}

void func_298(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_411 == 0)
	{
		if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) == 0)
		{
			if (bParam2)
			{
				if (func_110(uParam0, 10) > (20f + 10f))
				{
					if (uParam0->f_112)
					{
						func_222(uParam0, 92, 1, 0, 0);
						uParam0->f_112 = 0;
					}
					else
					{
						func_222(uParam0, 83, 1, 0, 0);
					}
					uParam0->f_113 = 1;
					func_290(uParam0, 10, 0f, 1);
				}
			}
			else if (func_110(uParam0, 10) > 20f)
			{
				if (uParam0->f_112)
				{
					func_222(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_222(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_290(uParam0, 10, 0f, 1);
			}
		}
	}
	if (uParam0->f_411 == 1)
	{
		if (func_110(uParam0, 10) > 30f)
		{
			if (!func_112())
			{
				if (uParam0->f_112)
				{
					func_222(uParam0, 92, 1, 0, 0);
					uParam0->f_112 = 0;
				}
				else
				{
					func_222(uParam0, 83, 1, 0, 0);
				}
				uParam0->f_113 = 1;
				func_290(uParam0, 10, 0f, 1);
			}
		}
	}
	if (func_21(uParam0->f_100, 64))
	{
		if (!func_15(&(Local_190[5 /*10*/].f_6)))
		{
			func_111(&(Local_190[5 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[5 /*10*/].f_6)) > 6f)
		{
			if (func_321(uParam0))
			{
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[5 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0, 1);
				func_318(5, uParam0);
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 1))
	{
		if (!func_15(&(Local_190[0 /*10*/].f_6)))
		{
			func_111(&(Local_190[0 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[0 /*10*/].f_6)) > 5f)
		{
			if (func_316(uParam0))
			{
				func_320(uParam0, 1);
				func_318(0, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[0 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2))
	{
		if (!func_15(&(Local_190[1 /*10*/].f_6)))
		{
			func_111(&(Local_190[1 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[1 /*10*/].f_6)) > 5f)
		{
			if (func_315(uParam0))
			{
				func_320(uParam0, 1);
				func_318(1, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[1 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 2048))
	{
		if (!func_15(&(Local_190[8 /*10*/].f_6)))
		{
			if (DOES_ENTITY_EXIST(uParam0->f_4))
			{
				uParam0->f_46 = GET_ENTITY_HEALTH(uParam0->f_4);
				func_111(&(Local_190[8 /*10*/].f_6));
			}
		}
		else if (func_100(&(Local_190[8 /*10*/].f_6)) > 7f || Local_190[8 /*10*/].f_1 == 0)
		{
			if (func_314(uParam0))
			{
				func_320(uParam0, 1);
				func_318(8, uParam0);
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 128))
	{
		if (!func_15(&(Local_190[6 /*10*/].f_6)))
		{
			func_111(&(Local_190[6 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[6 /*10*/].f_6)) > 5f)
		{
			if (func_313(uParam0))
			{
				func_320(uParam0, 1);
				func_318(6, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[6 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32))
	{
		if (!func_15(&(Local_190[4 /*10*/].f_6)))
		{
			func_111(&(Local_190[4 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[4 /*10*/].f_6)) > 4f)
		{
			if (func_312(uParam0))
			{
				func_320(uParam0, 1);
				func_318(4, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[4 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 256))
	{
		if (!func_15(&(Local_190[7 /*10*/].f_6)))
		{
			func_111(&(Local_190[7 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[7 /*10*/].f_6)) > 5f || Local_190[7 /*10*/].f_1 == 0)
		{
			if (func_311(uParam0))
			{
				func_318(7, uParam0);
				func_320(uParam0, 1);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[7 /*10*/].f_9, 1, 0, 1);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8))
	{
		if (!func_15(&(Local_190[9 /*10*/].f_6)))
		{
			func_111(&(Local_190[9 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[9 /*10*/].f_6)) <= 7f)
		{
			CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER_ID());
		}
		else if (func_100(&(Local_190[9 /*10*/].f_6)) > 7f || Local_190[9 /*10*/].f_1 == 0)
		{
			if (func_310(uParam0))
			{
				func_320(uParam0, 1);
				func_318(9, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[9 /*10*/].f_9, 1, 0, 1);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 16384))
	{
		if (!func_15(&(Local_190[13 /*10*/].f_6)))
		{
			func_111(&(Local_190[13 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[13 /*10*/].f_6)) > 10f)
		{
			if (func_304(uParam0))
			{
				func_320(uParam0, 1);
				func_318(13, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[13 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 32768))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_6)))
		{
			func_111(&(Local_190[14 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[14 /*10*/].f_6)) > 7f)
		{
			if (func_303(uParam0))
			{
				func_320(uParam0, 1);
				func_318(14, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[14 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4096))
	{
		if (!func_15(&(Local_190[11 /*10*/].f_6)))
		{
			func_111(&(Local_190[11 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[11 /*10*/].f_6)) > 8f)
		{
			if (func_302(uParam0))
			{
				func_320(uParam0, 1);
				func_318(11, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[11 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 8192))
	{
		if (!func_15(&(Local_190[12 /*10*/].f_6)))
		{
			func_111(&(Local_190[12 /*10*/].f_6));
		}
		else if (func_100(&(Local_190[12 /*10*/].f_6)) > 5f)
		{
			if (func_301(uParam0))
			{
				func_320(uParam0, 1);
				func_318(12, uParam0);
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[12 /*10*/].f_9, 1, 0, 0);
				}
				func_317(uParam0);
			}
		}
	}
	if (func_21(uParam0->f_100, 4))
	{
		if (!func_15(&(Local_190[2 /*10*/].f_6)))
		{
			func_300(&(Local_190[2 /*10*/].f_6), 0f);
		}
		else if (func_100(&(Local_190[2 /*10*/].f_6)) > 5f)
		{
			if (func_299(uParam0))
			{
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, Local_190[2 /*10*/].f_9, 1, 0, 0);
				}
				func_320(uParam0, 1);
				func_318(2, uParam0);
				func_317(uParam0);
			}
		}
	}
}

int func_299(var uParam0)
{
	float fVar0;
	
	if (!IS_PED_INJURED(uParam0->f_2))
	{
		if ((!IS_PED_STOPPED(uParam0->f_2) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[2 /*10*/].f_3)))
			{
				uParam0->f_37 = GET_ENTITY_SPEED(uParam0->f_2);
				if (uParam0->f_37 > 10f)
				{
					func_111(&(Local_190[2 /*10*/].f_3));
				}
			}
			else if (func_100(&(Local_190[2 /*10*/].f_3)) > 0.9f)
			{
				uParam0->f_38 = uParam0->f_37;
				uParam0->f_37 = GET_ENTITY_SPEED(uParam0->f_2);
				fVar0 = (uParam0->f_38 - uParam0->f_37);
				func_99(&(Local_190[2 /*10*/].f_3));
				if (fVar0 > 10f && uParam0->f_37 < 12f)
				{
					return 1;
				}
			}
		}
		else
		{
			func_99(&(Local_190[2 /*10*/].f_3));
		}
	}
	return 0;
}

void func_300(var uParam0, float fParam1)
{
	if (!func_15(uParam0))
	{
		func_103(uParam0, fParam1);
	}
}

int func_301(var uParam0)
{
	vector3 vVar0;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		vVar0 = { GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (vVar0.y < -10f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[12 /*10*/].f_3)))
			{
				func_111(&(Local_190[12 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[12 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_190[12 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[12 /*10*/].f_3));
		}
	}
	return 0;
}

int func_302(var uParam0)
{
	vector3 vVar0;
	
	if ((((((IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[1 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3)))
	{
		vVar0 = { GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (ABSF(vVar0.x) > 2.5f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[11 /*10*/].f_3)))
			{
				func_111(&(Local_190[11 /*10*/].f_3));
				uLocal_342 = vVar0.x;
			}
			else if (func_100(&(Local_190[11 /*10*/].f_3)) < 1.5f && (ABSF(uLocal_342) - ABSF(vVar0.x)) < 0f)
			{
				func_99(&(Local_190[11 /*10*/].f_3));
				return 1;
			}
			else if (func_100(&(Local_190[11 /*10*/].f_3)) >= 1.5f)
			{
				func_99(&(Local_190[11 /*10*/].f_3));
				return 0;
			}
		}
	}
	return 0;
}

int func_303(var uParam0)
{
	if (((((IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_15(&(Local_190[0 /*10*/].f_3))) && !func_15(&(Local_190[8 /*10*/].f_3))) && !func_15(&(Local_190[5 /*10*/].f_3))) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3)))
	{
		if (!func_15(&(Local_190[14 /*10*/].f_3)))
		{
			uParam0->f_5 = GET_CLOSEST_VEHICLE(GET_ENTITY_COORDS(uParam0->f_4, 1), 10f, 0, 260);
			if (DOES_ENTITY_EXIST(uParam0->f_5))
			{
				if ((GET_ENTITY_SPEED(uParam0->f_4) > 15f && func_164(uParam0->f_5, uParam0->f_4, 1) < 3f) && (!IS_ENTITY_DEAD(uParam0->f_5, 0) && !IS_VEHICLE_SEAT_FREE(uParam0->f_5, -1, 0)))
				{
					func_111(&(Local_190[14 /*10*/].f_3));
				}
			}
		}
		else if ((func_100(&(Local_190[14 /*10*/].f_3)) < 1.5f && func_164(uParam0->f_5, uParam0->f_4, 1) > 4.5f) && !HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return 1;
		}
		else if (func_100(&(Local_190[14 /*10*/].f_3)) >= 1.5f)
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
		else if (HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(uParam0->f_5))
		{
			func_99(&(Local_190[14 /*10*/].f_3));
			return 0;
		}
	}
	return 0;
}

int func_304(var uParam0)
{
	if (((IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0) && !func_15(&(Local_190[9 /*10*/].f_3))) && !func_15(&(Local_190[7 /*10*/].f_3))) && !func_15(&(Local_190[4 /*10*/].f_3)))
	{
		if (!func_305(uParam0->f_4) && GET_ENTITY_SPEED(uParam0->f_4) > 15f)
		{
			if (!func_15(&(Local_190[13 /*10*/].f_3)))
			{
				func_111(&(Local_190[13 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[13 /*10*/].f_3)) > 5f)
			{
				func_99(&(Local_190[13 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[13 /*10*/].f_3));
		}
	}
	return 0;
}

bool func_305(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	float fVar27;
	
	GET_NTH_CLOSEST_VEHICLE_NODE(GET_ENTITY_COORDS(uParam0, 1), 1, &vVar0, 1, 1077936128, 0);
	GET_NTH_CLOSEST_VEHICLE_NODE(GET_ENTITY_COORDS(uParam0, 1), 2, &vVar3, 1, 1077936128, 0);
	_0x16F46FB18C8009E4(vVar0, -1, &vVar6);
	fVar27 = VMAG(vVar6 - vVar0);
	vVar9 = { func_309((vVar3.x - vVar0.x), (vVar3.y - vVar0.y), 0f) };
	vVar12 = { func_308(vVar9, 0) * Vector(fVar27, fVar27, fVar27) };
	vVar9 = { vVar9 * Vector(2f, 2f, 2f) };
	vVar15 = { vVar0 - vVar9 + vVar12 };
	vVar18 = { vVar0 - vVar9 - vVar12 };
	vVar21 = { vVar3 + vVar9 + vVar12 };
	vVar24 = { vVar3 + vVar9 - vVar12 };
	vVar24 = { vVar24 };
	return func_306(GET_ENTITY_COORDS(uParam0, 1), vVar15, vVar18, vVar21);
}

int func_306(vector3 vParam0, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	
	vParam0.z = 0f;
	vParam3.z = 0f;
	vParam6.z = 0f;
	vParam9.z = 0f;
	vVar0 = { func_309(vParam6 - vParam3) };
	vVar3 = { func_309(vParam9 - vParam3) };
	fVar6 = func_307(vParam0, vVar0);
	fVar7 = func_307(vParam3, vVar0);
	fVar8 = func_307(vParam6, vVar0);
	fVar9 = func_307(vParam0, vVar3);
	fVar10 = func_307(vParam3, vVar3);
	fVar11 = func_307(vParam9, vVar3);
	if (fVar7 > fVar8)
	{
		fVar12 = fVar7;
		fVar7 = fVar8;
		fVar8 = fVar12;
	}
	if (fVar6 < fVar7 || fVar6 > fVar8)
	{
		return 0;
	}
	if (fVar10 > fVar11)
	{
		fVar13 = fVar10;
		fVar10 = fVar11;
		fVar11 = fVar13;
	}
	if (fVar9 < fVar10 || fVar9 > fVar11)
	{
		return 0;
	}
	return 1;
}

float func_307(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_308(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	
	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.y = vParam0.x;
			break;
		
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.y = -vParam0.y;
			break;
		
		case 2:
			vVar0.x = vParam0.y;
			vVar0.y = -vParam0.x;
			break;
	}
	vVar0.z = vParam0.z;
	return vVar0;
}

Vector3 func_309(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = VMAG(vParam0);
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

int func_310(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == PLAYER_PED_ID())
		{
			if (HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_311(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (GET_PED_IN_VEHICLE_SEAT(uParam0->f_4, -1, 0) == PLAYER_PED_ID())
		{
			if (IS_ENTITY_UPSIDEDOWN(uParam0->f_4))
			{
				if (!iLocal_341)
				{
					if (GET_ENTITY_ROLL(uParam0->f_4) <= -145f || GET_ENTITY_ROLL(uParam0->f_4) >= 145f)
					{
						iLocal_341 = 1;
					}
				}
			}
			else if (iLocal_341)
			{
				if (GET_ENTITY_ROLL(uParam0->f_4) <= 35f && GET_ENTITY_ROLL(uParam0->f_4) >= -35f)
				{
					iLocal_341 = 0;
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_312(var uParam0)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[4 /*10*/].f_3)))
			{
				func_111(&(Local_190[4 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[4 /*10*/].f_3)) > 2f)
			{
				func_99(&(Local_190[4 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[4 /*10*/].f_3));
		}
	}
	return 0;
}

int func_313(var uParam0)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		iVar0 = GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(PLAYER_ID());
		if (iVar0 == 0)
		{
			if (!func_15(&(Local_190[6 /*10*/].f_3)))
			{
				func_111(&(Local_190[6 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[6 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_190[6 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[6 /*10*/].f_3));
		}
	}
	return 0;
}

int func_314(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (HAS_ENTITY_COLLIDED_WITH_ANYTHING(uParam0->f_4))
		{
			iVar0 = GET_ENTITY_HEALTH(uParam0->f_4);
			iVar1 = (uParam0->f_46 - iVar0);
			uParam0->f_46 = iVar0;
			CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_4);
			if (IntToFloat(iVar1) > 10f)
			{
				if (uParam0->f_113)
				{
					func_222(uParam0, 93, 1, 0, 0);
					uParam0->f_113 = 0;
				}
				else
				{
					func_222(uParam0, 72, 1, 0, 1);
				}
				func_99(&(Local_190[2 /*10*/].f_6));
				return 1;
			}
		}
	}
	return 0;
}

int func_315(var uParam0)
{
	vector3 vVar0;
	
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		vVar0 = { GET_ENTITY_SPEED_VECTOR(uParam0->f_4, 1) };
		if (ABSF(vVar0.x) > 3f && !func_15(&(Local_190[0 /*10*/].f_3)))
		{
			if (!func_15(&(Local_190[1 /*10*/].f_3)))
			{
				func_111(&(Local_190[1 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[1 /*10*/].f_3)) > 1.2f)
			{
				func_99(&(Local_190[1 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[1 /*10*/].f_3));
		}
	}
	return 0;
}

int func_316(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (!IS_VEHICLE_ON_ALL_WHEELS(uParam0->f_4) && IS_ENTITY_IN_AIR(uParam0->f_4))
		{
			if (!func_15(&(Local_190[0 /*10*/].f_3)))
			{
				func_111(&(Local_190[0 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[0 /*10*/].f_3)) > 0.7f)
			{
				func_99(&(Local_190[0 /*10*/].f_3));
				func_102(&(Local_190[1 /*10*/].f_6));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[0 /*10*/].f_3));
		}
	}
	return 0;
}

void func_317(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (func_15(&(Local_190[iVar0 /*10*/].f_6)))
		{
			func_102(&(Local_190[iVar0 /*10*/].f_6));
		}
		iVar0++;
	}
	func_290(uParam0, 10, 0f, 1);
	CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(PLAYER_ID());
}

void func_318(int iParam0, var uParam1)
{
	Local_190[iParam0 /*10*/].f_1++;
	func_319(uParam1, iParam0);
	func_99(&(Local_190[iParam0 /*10*/].f_6));
	uParam1->f_112 = 1;
}

void func_319(var uParam0, int iParam1)
{
	uParam0->f_76 = (uParam0->f_76 + Local_190[iParam1 /*10*/]);
}

void func_320(var uParam0, int iParam1)
{
	uParam0->f_104 = (uParam0->f_104 + iParam1);
}

int func_321(var uParam0)
{
	if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
	{
		if (GET_ENTITY_SPEED(uParam0->f_4) > 25f)
		{
			if (!func_15(&(Local_190[5 /*10*/].f_3)))
			{
				func_111(&(Local_190[5 /*10*/].f_3));
			}
			else if (func_100(&(Local_190[5 /*10*/].f_3)) > 3.5f)
			{
				func_99(&(Local_190[5 /*10*/].f_3));
				return 1;
			}
		}
		else
		{
			func_99(&(Local_190[5 /*10*/].f_3));
		}
	}
	return 0;
}

void func_322(var uParam0, char* sParam1, int iParam2)
{
	vector3 vVar0;
	
	func_151();
	func_427(2);
	vVar0 = { func_152() };
	if ((!IS_STRING_NULL_OR_EMPTY(&vVar0) && func_112()) && !ARE_STRINGS_EQUAL(&vVar0, "NULL"))
	{
	}
	else
	{
		CLEAR_PRINTS();
		CLEAR_HELP(1);
		StringCopy(&vVar0, uParam0->f_143, 24);
		if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (!func_171(uParam0))
			{
				if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", 3))
				{
					STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_a", -1056964608);
				}
				else if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", 3))
				{
					STOP_ANIM_TASK(uParam0->f_3, "oddjobs@towingcome_here", "come_here_idle_c", -1056964608);
				}
				else if (IS_ENTITY_PLAYING_ANIM(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", 3))
				{
					STOP_ANIM_TASK(uParam0->f_3, "gestures@m@standing@casual", "gesture_nod_yes_hard", -1056964608);
				}
			}
		}
		uParam0->f_109 = 1;
		uParam0->f_121 = sParam1;
		uParam0->f_415 = iParam2;
		func_290(uParam0, 3, 0, 0);
		if (iParam2 == 8 || iParam2 == 18)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aband2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				func_328(uParam0, &vVar0);
			}
			else if (!IS_PED_INJURED(uParam0->f_3))
			{
				func_249(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 10)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aggro2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_aggro", 24);
			}
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (uParam0->f_415 == 15)
		{
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DEAD", 24);
		}
		else if (iParam2 == 2)
		{
			StringConCat(&vVar0, "_lost1", 24);
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else if (iParam2 == 3)
		{
			StringConCat(&vVar0, "_spotd1", 24);
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 4)
		{
			StringConCat(&vVar0, "_wntd1", 24);
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 5)
		{
			StringConCat(&vVar0, "_spook", 24);
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
			if (func_171(uParam0))
			{
				if (IS_VEHICLE_STOPPED(uParam0->f_4))
				{
					func_325(uParam0, 4096, 0);
				}
				else
				{
					func_325(uParam0, 0, 0);
				}
			}
		}
		else if (iParam2 == 6)
		{
			StringConCat(&vVar0, "_hit2", 24);
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPK", 24);
		}
		else if (iParam2 == 7)
		{
			StringConCat(&vVar0, "_jak", 24);
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 14)
		{
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_shot2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_shot1", 24);
				}
				func_328(uParam0, &vVar0);
			}
			else if (!IS_PED_INJURED(uParam0->f_3))
			{
				func_249(uParam0->f_3, "CALL_COPS_COMMIT", uParam0->f_145, 4);
			}
			SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SHT", 24);
		}
		else if (iParam2 == 12)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_328(uParam0, &vVar0);
			SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_SPT", 24);
		}
		else if (iParam2 == 13)
		{
			StringConCat(&vVar0, "_shot1", 24);
			func_328(uParam0, &vVar0);
			SET_PLAYER_WANTED_LEVEL(PLAYER_ID(), 1, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_CK", 24);
		}
		else if (iParam2 == 11)
		{
			func_49(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_328(uParam0, &vVar0);
			}
			else if (!IS_PED_INJURED(uParam0->f_3))
			{
				func_249(uParam0->f_3, "GENERIC_INSULT_MED", uParam0->f_145, 4);
			}
			func_325(uParam0, 0, 0);
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_WAT", 24);
		}
		else if (iParam2 == 0)
		{
			func_49(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_328(uParam0, &vVar0);
			}
			else if (!IS_PED_INJURED(uParam0->f_3))
			{
				func_249(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_DR", 24);
		}
		else if (iParam2 == 1)
		{
			func_49(8, 0);
			iLocal_57[3] = 1;
			if (uParam0->f_411 != 9)
			{
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_328(uParam0, &vVar0);
			}
			else if (!IS_PED_INJURED(uParam0->f_3))
			{
				func_249(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_F_FIRE", 24);
		}
		else if (iParam2 == 19)
		{
			StringCopy(&vVar0, "OJTX_QUIT_", 24);
			func_324(&vVar0);
			func_323(&(uParam0->f_244), "OJTXAUD", &vVar0, 7, 0, 0, 0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_CNCL", 24);
		}
		else if (iParam2 == 20)
		{
			if (uParam0->f_115)
			{
				StringConCat(&vVar0, "_aband2", 24);
			}
			else
			{
				StringConCat(&vVar0, "_fail1", 24);
			}
			func_328(uParam0, &vVar0);
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
		}
		else
		{
			if (uParam0->f_411 != 9)
			{
				if (iParam2 != 21)
				{
					StringConCat(&vVar0, "_Fail1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aband1", 24);
				}
				if (uParam0->f_410 > 5)
				{
					func_328(uParam0, &vVar0);
				}
			}
			else if (!IS_PED_INJURED(uParam0->f_3))
			{
				func_249(uParam0->f_3, "TAXI_FAIL", uParam0->f_145, 4);
			}
			StringCopy(&(uParam0->f_130), "TAXI_OBJ_FAIL", 24);
			func_49(3, 0);
		}
		func_290(uParam0, 3, 0f, 1);
	}
}

int func_323(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_147(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	Global_2621441 = 0;
	return func_139(sParam2, iParam3, 0);
}

void func_324(char* sParam0)
{
	switch (func_3(PLAYER_PED_ID()))
	{
		case 0:
			StringConCat(sParam0, "M", 24);
			break;
		
		case 2:
			StringConCat(sParam0, "T", 24);
			break;
		
		case 1:
			StringConCat(sParam0, "F", 24);
			break;
		
		default:
			StringConCat(sParam0, "M", 24);
			break;
	}
}

void func_325(var uParam0, int iParam1, bool bParam2)
{
	var uVar0;
	
	if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_3, 0);
		CLEAR_ENTITY_LAST_DAMAGE_ENTITY(uParam0->f_3);
		SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 3, 0);
		SET_PED_COMBAT_ATTRIBUTES(uParam0->f_3, 17, 1);
		CLEAR_PED_TASKS(uParam0->f_3);
		if ((func_201(uParam0->f_3, uParam0->f_29, 1) <= 200f && !func_327(uParam0->f_29)) && !bParam2)
		{
			func_326(uParam0);
		}
		else
		{
			SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 1024, 1);
			SET_PED_FLEE_ATTRIBUTES(uParam0->f_3, 131072, 1);
			OPEN_SEQUENCE_TASK(&uVar0);
			TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);
			if (uParam0->f_415 == 8)
			{
				TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				TASK_SMART_FLEE_PED(0, PLAYER_PED_ID(), 1000f, -1, 0, 0);
			}
			TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			CLOSE_SEQUENCE_TASK(uVar0);
			TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
			CLEAR_SEQUENCE_TASK(&uVar0);
		}
		SET_PED_KEEP_TASK(uParam0->f_3, 1);
	}
}

void func_326(var uParam0)
{
	var uVar0;
	
	if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (func_39(func_40(), uParam0->f_29, 0))
		{
			if (uParam0->f_411 == 2)
			{
				SET_ENTITY_HEADING(uParam0->f_3, 84.9058f);
				SET_PED_KEEP_TASK(uParam0->f_3, 1);
			}
			else if (uParam0->f_411 == 4)
			{
				SET_ENTITY_HEADING(uParam0->f_3, 68.3138f);
				SET_PED_KEEP_TASK(uParam0->f_3, 1);
			}
			else
			{
				TASK_WANDER_STANDARD(uParam0->f_3, 1193033728, 0);
			}
		}
		else
		{
			CLEAR_PED_TASKS(uParam0->f_3);
			CLEAR_SEQUENCE_TASK(&uVar0);
			OPEN_SEQUENCE_TASK(&uVar0);
			TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, 0);
			TASK_FOLLOW_NAV_MESH_TO_COORD(0, uParam0->f_29, 1f, -1, 1048576000, 0, 1193033728);
			if (uParam0->f_411 == 2)
			{
				TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_AA_SMOKE", 0, 0);
			}
			else if (uParam0->f_411 == 0)
			{
				TASK_CLIMB_LADDER(0, 1);
				TASK_FOLLOW_NAV_MESH_TO_COORD(0, 813.9421f, 1172.681f, 329.7988f, 1f, -1, 1048576000, 0, 1193033728);
				TASK_ACHIEVE_HEADING(0, 151.7794f, 0);
				TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_SMOKING_POT", 0, 0);
			}
			else if (uParam0->f_411 == 4)
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else if (uParam0->f_411 == 1)
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 20000);
				TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			else
			{
				TASK_PLAY_ANIM(0, "oddjobs@taxi@", "base", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
				TASK_PLAY_ANIM(0, "gestures@m@standing@casual", "gesture_pleased", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
			}
			if (DOES_SCENARIO_EXIST_IN_AREA(uParam0->f_29, 15f, 1))
			{
				TASK_USE_NEAREST_SCENARIO_TO_COORD(0, uParam0->f_29, 15f, 0);
			}
			else
			{
				TASK_WANDER_STANDARD(0, 1193033728, 0);
			}
			CLOSE_SEQUENCE_TASK(uVar0);
			TASK_PERFORM_SEQUENCE(uParam0->f_3, uVar0);
			CLEAR_SEQUENCE_TASK(&uVar0);
		}
		SET_PED_KEEP_TASK(uParam0->f_3, 1);
	}
}

int func_327(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

void func_328(var uParam0, char* sParam1)
{
	if (func_329(uParam0))
	{
		func_323(&(uParam0->f_244), uParam0->f_144, sParam1, 9, 0, 0, 0);
	}
}

int func_329(var uParam0)
{
	if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (func_164(PLAYER_PED_ID(), uParam0->f_3, 1) < 40f && !IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			return 1;
		}
	}
	return 0;
}

int func_330(var uParam0)
{
	return uParam0->f_118;
}

void func_331()
{
	func_363(&Local_409);
	if (func_362(&Local_409, &Local_1034))
	{
		switch (Local_1034.f_27)
		{
			case 0:
				if (Local_409.f_410 == 9)
				{
					if (!func_361(&Local_409))
					{
						if (func_360("TX_OBJ_GYB_DO") || DOES_BLIP_EXIST(Local_409.f_9))
						{
							Local_1034.f_27++;
						}
						else if (func_359(&Local_409) != 10)
						{
							func_222(&Local_409, 10, 1, 0, 1);
						}
					}
				}
				break;
			
			case 1:
				if ((func_359(&Local_409) > 10 && func_359(&Local_409) != 15) && !func_361(&Local_409))
				{
					func_222(&Local_409, 15, 1, 0, 0);
					if (bLocal_1033)
					{
					}
					func_296(&Local_409, 7);
				}
				break;
			
			case 2:
				if (((func_359(&Local_409) != 16 && !func_361(&Local_409)) && func_110(&Local_409, 18) > 2f) && !func_112())
				{
					func_222(&Local_409, 16, 1, 0, 0);
					if (bLocal_1033)
					{
					}
				}
				break;
			
			case 3:
				if (func_110(&Local_409, 18) > GET_RANDOM_FLOAT_IN_RANGE(2f, 7f))
				{
					if (!func_175(&Local_409))
					{
						func_358(&Local_409, 0);
						Local_1034.f_27++;
						if (bLocal_1033)
						{
						}
					}
				}
				break;
			}
	}
	func_332(&Local_409, &uLocal_1064, &Local_1034, bLocal_1033);
}

int func_332(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	func_340(uParam0, uParam1);
	if (((*uParam2 == -1 && uParam0->f_410 < 29) && !uParam0->f_109) && !func_297(uParam0, 2))
	{
		if (func_339(uParam1))
		{
			*uParam2 = 1;
			if (bParam3)
			{
			}
		}
		else if ((GET_GAME_TIMER() % 2000) < 50)
		{
		}
	}
	if (!uParam0->f_109)
	{
		switch (*uParam2)
		{
			case 1:
				if (!func_338(uParam0))
				{
					uParam2->f_7 = { func_337(uParam1) };
					func_323(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_7), 8, 0, 0, 0);
					*uParam2 = 2;
					if (bParam3)
					{
					}
				}
				break;
			
			case 2:
				if (func_112())
				{
					uParam2->f_13 = { func_225() };
					if (ARE_STRINGS_EQUAL(&(uParam2->f_13), &(uParam2->f_7)))
					{
						if (bParam3)
						{
						}
					}
				}
				else
				{
					func_159(&(uParam2->f_26), ROUND(POW(2f, TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_335(uParam1);
					func_290(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 3:
				if (func_178(uParam0))
				{
					if (func_112())
					{
						func_290(uParam0, 17, 0f, 1);
						uParam2->f_1 = { func_334() };
						if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()) >= 1)
						{
							*uParam2 = 0;
						}
						else
						{
							*uParam2 = 4;
						}
					}
				}
				else if (func_112())
				{
					uParam2->f_19 = { func_152() };
				}
				else
				{
					func_159(&(uParam2->f_26), ROUND(POW(2f, TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_335(uParam1);
					func_290(uParam0, 18, 0, 0);
					*uParam2 = -1;
					if (bParam3)
					{
					}
					return 1;
				}
				break;
			
			case 4:
				if (((!func_297(uParam0, 14) && !func_112()) && !func_178(uParam0)) && func_110(uParam0, 18) > 1f)
				{
					func_290(uParam0, 18, 0, 0);
					*uParam2 = 6;
					if (bParam3)
					{
					}
				}
				break;
			
			case 6:
				if (!func_112())
				{
					if (func_110(uParam0, 18) > 1f)
					{
						if (!IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1)))
						{
							func_333(&(uParam0->f_244), uParam0->f_144, &(uParam2->f_13), &(uParam2->f_1), 8, 0, 0);
							if (bParam3)
							{
							}
						}
						*uParam2 = 3;
					}
				}
				break;
			
			case 7:
				if (!func_112())
				{
					func_159(&(uParam2->f_26), ROUND(POW(2f, TO_FLOAT(uParam2->f_27))));
					uParam2->f_27++;
					func_335(uParam1);
					func_290(uParam0, 18, 0, 0);
					*uParam2 = -1;
				}
				break;
			}
	}
	return 0;
}

int func_333(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_147(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_15873 = 0;
	Global_15880 = 0;
	Global_15875 = 0;
	Global_16857 = 0;
	Global_16859 = 0;
	Global_16863 = 1;
	StringCopy(&Global_16870, sParam3, 24);
	Global_2621441 = 0;
	return func_139(sParam2, iParam4, 0);
}

struct<6> func_334()
{
	struct<6> Var0;
	int iVar6;
	int iVar7;
	int iVar8;
	
	StringCopy(&Var0, "NULL", 24);
	if (Global_15866 == 4)
	{
		iVar6 = GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		iVar6 = (iVar6 + Global_16876);
		iVar7 = iVar6 + 1;
		if (iVar7 > -1 && iVar6 > -1)
		{
			if (DOES_TEXT_LABEL_EXIST(&(Global_14734[iVar7 /*6*/])))
			{
				return Global_14734[iVar7 /*6*/];
			}
			else
			{
				iVar8 = iVar7;
				while (iVar8 < 70)
				{
					if (DOES_TEXT_LABEL_EXIST(&(Global_14734[iVar8 /*6*/])))
					{
						return Global_14734[iVar8 /*6*/];
						iVar8 = 70;
					}
					iVar8++;
				}
				return Var0;
			}
			return Global_14734[iVar6 /*6*/];
		}
		else
		{
			return Var0;
		}
	}
	return Var0;
}

void func_335(var uParam0)
{
	int iVar0;
	
	iVar0 = func_336(uParam0);
	if (iVar0 > -1)
	{
		func_121(&((uParam0[iVar0 /*8*/])->f_7), 2);
		func_121(&((uParam0[iVar0 /*8*/])->f_7), 4);
		func_165(&((uParam0[iVar0 /*8*/])->f_7), 8);
		StringCopy(uParam0[iVar0 /*8*/], func_199(), 24);
	}
}

int func_336(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 4))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<6> func_337(var uParam0)
{
	int iVar0;
	struct<6> Var1;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			Var1 = { *(uParam0[iVar0 /*8*/]) };
			func_165(&((uParam0[iVar0 /*8*/])->f_7), 4);
		}
		iVar0++;
	}
	return Var1;
}

int func_338(var uParam0)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (func_180("TX_OBJ_NEX_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_180("TX_OBJ_TIE_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_180("TX_OBJ_DL_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 3:
			if ((func_180("TX_OBJ_GYB_DO", 0, 0) || func_180("TAXI_OBJ_GYB", 0, 0)) || func_180("TAXI_OBJ_GYB_2", 0, 0))
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_180("TX_OBJ_TTB_DO", 0, 0))
			{
				return 1;
			}
			break;
		
		case 5:
			if ((func_180("TX_OBJ_CYI_DO", 0, 0) || func_180("TAXI_OBJ_CYI_01", 0, 0)) || func_180("TAXI_OBJ_CYI_02", 0, 0))
			{
				return 1;
			}
			break;
		
		case 6:
			if (((func_180("TX_OBJ_GYN_DO", 0, 0) || func_180("TAXI_OBJ_GYN", 0, 0)) || func_180("TAXI_OBJ_GYN_TG", 0, 0)) || func_180("TAXI_OBJ_GYN_GF", 0, 0))
			{
				return 1;
			}
			break;
		
		case 7:
			if ((func_180("TAXI_OBJ_CC1", 0, 0) || func_180("TAXI_OBJ_CC2", 0, 0)) || func_180("TAXI_OBJ_CC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 8:
			if ((func_180("TAXI_OBJ_FTC1", 0, 0) || func_180("TAXI_OBJ_FTC2", 0, 0)) || func_180("TAXI_OBJ_FTC3", 0, 0))
			{
				return 1;
			}
			break;
		
		case 9:
			if (func_180("TX_OBJ_PRO_DO", 0, 0))
			{
				return 1;
			}
			break;
	}
	return (((((func_180("TAXI_OBJ_GETRUN", 0, 0) || func_180("TAXI_OBJ_DRIVE", 0, 0)) || func_180("TAXI_OBJ_RETURN", 0, 0)) || func_180("TAXI_OBJ_POL", 0, 0)) || func_180("TAXI_OBJ_RUNOUT", 0, 0)) || func_180("TAXI_OBJ_POL", 0, 0));
}

int func_339(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_21((uParam0[iVar0 /*8*/])->f_7, 2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_340(var uParam0, var uParam1)
{
	vector3 vVar0;
	char cVar6[48];
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15[8];
	bool bVar24;
	
	if (func_338(uParam0))
	{
	}
	else if (!uParam0->f_110)
	{
	}
	else if (func_297(uParam0, 14))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_359(uParam0))
		{
			case 55:
				StringConCat(&vVar0, "_lvMe1", 24);
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_356(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 2:
				if (!func_112())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_retrn2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_retrn1", 24);
					}
					if (uParam0->f_411 != 9)
					{
						func_355(uParam0, &vVar0, 0, 0, 8);
					}
				}
				else
				{
					func_352(uParam0, vVar0, func_354(uParam0, 2));
				}
				if (func_21(uParam0->f_98, 4))
				{
					func_290(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				func_189(uParam0, &(uParam0->f_98), 4, 3);
				break;
			
			case 3:
				if (func_110(uParam0, 16) > 1f)
				{
					func_191(1);
					if (uParam0->f_411 == 9)
					{
						func_150("TAXI_OBJ_RETURN", 7500, 1);
					}
					else
					{
						func_150("TAXI_VIP_RETURN", 7500, 1);
					}
					func_290(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 65:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_aggro2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_aggro", 24);
				}
				uParam0->f_107++;
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 1, 8);
				}
				else if (!IS_PED_INJURED(uParam0->f_3))
				{
					func_249(uParam0->f_3, "TAXI_WHAT_THE_HELL", uParam0->f_145, 4);
				}
				break;
		}
	}
	else if ((func_110(uParam0, 16) > func_131(uParam0->f_411 == 0, 1f, 4f) && !uParam0->f_142) && (((uParam0->f_411 == 0 || uParam0->f_411 == 1) && !func_112()) || (uParam0->f_411 != 0 && uParam0->f_411 != 1)))
	{
		StringCopy(&vVar0, uParam0->f_143, 24);
		switch (func_359(uParam0))
		{
			case 142:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_noDri2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_noDri1", 24);
				}
				func_355(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 56:
				StringConCat(&vVar0, "_lvMe2", 24);
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_93), 3, &cVar6, 0, 1, 0);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_356(4, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 0:
				if (uParam0->f_411 == 9)
				{
					func_323(&(uParam0->f_244), "OJTXAUD", "OJTX_PRO_CON", 8, 0, 0, 0);
				}
				func_222(uParam0, 1, 1, 0, 0);
				break;
			
			case 1:
				func_290(uParam0, 16, 0, 0);
				func_222(uParam0, 4, 0, 0, 0);
				break;
			
			case 4:
				StringConCat(&vVar0, "_hail1", 24);
				cVar6 = { vVar0 };
				if (!func_21(uParam0->f_44, 128))
				{
					if ((uParam0->f_411 == 0 || uParam0->f_411 == 1) || uParam0->f_411 == 4)
					{
						func_357(&(uParam0->f_99), 4, &cVar6, 0, 1, 0);
						func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					}
					else
					{
						func_355(uParam0, &vVar0, 0, 0, 8);
					}
				}
				func_290(uParam0, 16, 4f, 0);
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 5:
				if (uParam0->f_411 == 7)
				{
					func_150("TAXI_OBJ_GPCKUP", 7500, 1);
				}
				else
				{
					func_150("TAXI_OBJ_PICKUP", 7500, 1);
				}
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 8:
				StringConCat(&vVar0, "_obj1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_351(uParam0->f_17, 1);
					}
					else if (GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						SET_BLIP_ALPHA(uParam0->f_9, 255);
						SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				func_222(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 9:
				if ((uParam0->f_101 == 1 || uParam0->f_411 == 2) || uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_gret1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_gret1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_gret2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_gret3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_gret4", 24);
							break;
						}
				}
				func_224(&vVar0);
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					func_249(uParam0->f_3, "TAXI_START", uParam0->f_145, 4);
				}
				if (uParam0->f_411 != 7 && uParam0->f_411 != 4)
				{
					if (!DOES_BLIP_EXIST(uParam0->f_9))
					{
						uParam0->f_9 = func_351(uParam0->f_17, 1);
					}
					else if (GET_BLIP_ALPHA(uParam0->f_9) == 0)
					{
						SET_BLIP_ALPHA(uParam0->f_9, 255);
						SET_BLIP_COORDS(uParam0->f_9, uParam0->f_17);
						SET_BLIP_ROUTE(uParam0->f_9, 1);
					}
				}
				func_222(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 7:
				StringConCat(&vVar0, "_dest2", 24);
				func_350(uParam0, 33554432, vVar0, "", 1, 8);
				func_290(uParam0, 16, 0, 0);
				func_222(uParam0, 10, 1, 0, 0);
				uParam0->f_417 = 10;
				break;
			
			case 10:
				if (!func_112())
				{
					func_349(uParam0, 0);
					func_165(&(uParam0->f_44), 4);
					func_290(uParam0, 16, 0, 0);
					func_222(uParam0, 13, 0, 0, 0);
				}
				break;
			
			case 14:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_bant2", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_bant1", 24);
						break;
					
					case 2:
						StringConCat(&vVar0, "_bant3", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_bant1", 24);
						break;
				}
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 15:
				if (func_110(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban1", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant1", 24);
						func_224(&vVar0);
					}
					func_347(vVar0, uParam1);
					func_165(&(uParam0->f_81), 67108864);
					func_290(uParam0, 16, 0, 0);
					func_290(uParam0, 11, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 16:
				if (func_110(uParam0, 11) > uParam0->f_36)
				{
					if (uParam0->f_411 == 0)
					{
						StringConCat(&vVar0, "_ban2", 24);
					}
					else if (uParam0->f_411 == 1)
					{
						StringConCat(&vVar0, "_banter", 24);
					}
					else
					{
						StringConCat(&vVar0, "_bant2", 24);
						if (uParam0->f_411 != 6)
						{
							func_224(&vVar0);
						}
					}
					func_347(vVar0, uParam1);
					func_290(uParam0, 11, 0, 0);
					func_290(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 17:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_ban3", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant3", 24);
					func_224(&vVar0);
				}
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 18:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN4", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant4", 24);
				}
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 19:
				if (uParam0->f_411 == 0)
				{
					StringConCat(&vVar0, "_BAN5", 24);
				}
				else
				{
					StringConCat(&vVar0, "_bant5", 24);
				}
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 20:
				StringConCat(&vVar0, "_dest2b", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				func_165(&(uParam0->f_82), 262144);
				uParam0->f_36 = 20f;
				break;
			
			case 23:
				StringConCat(&vVar0, "_seePt1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 24, 1, 0, 0);
				break;
			
			case 24:
				uParam0->f_417 = 24;
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 90:
				StringConCat(&vVar0, "_talk", 24);
				StringIntConCat(&vVar0, 1, 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 1, 0, 8);
				break;
			
			case 89:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_deal1", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_deal1", 24);
						break;
				}
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 91:
				StringConCat(&vVar0, "_ig1c", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 27:
				StringConCat(&vVar0, "_bTime", 24);
				if (uParam0->f_411 == 2)
				{
					iVar13 = 8;
				}
				else
				{
					iVar13 = 3;
				}
				iVar12 = 0;
				while (iVar12 < iVar13)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 5:
								case 6:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_346(&(uParam0->f_90), 8, &vVar0, &iVar15, 1, 0);
				}
				else
				{
					func_346(&(uParam0->f_90), 3, &vVar0, &iVar15, 1, 0);
				}
				func_347(vVar0, uParam1);
				func_356(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 6, 0f, 1);
				func_253(uParam0, 0, 0);
				break;
			
			case 26:
				StringConCat(&vVar0, "_gTime", 24);
				iVar12 = 0;
				while (iVar12 < 8)
				{
					switch (uParam0->f_411)
					{
						case 2:
							switch (iVar12)
							{
								case 3:
								case 4:
								case 5:
								case 7:
									iVar15[iVar12] = 0;
									break;
								
								default:
									iVar15[iVar12] = 1;
									break;
							}
							break;
						
						default:
							iVar15[iVar12] = 1;
							break;
					}
					iVar12++;
				}
				if (uParam0->f_411 == 2)
				{
					func_346(&(uParam0->f_89), 8, &vVar0, &iVar15, 1, 0);
				}
				else
				{
					func_346(&(uParam0->f_89), 3, &vVar0, &iVar15, 1, 0);
				}
				func_347(vVar0, uParam1);
				func_356(0, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 6, 0f, 1);
				func_253(uParam0, 0, 0);
				break;
			
			case 12:
				func_150("TAXI_OBJ_GYB", 3500, 1);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 11:
				if (uParam0->f_410 == 12 || uParam0->f_410 == 18)
				{
					func_150("TAXI_OBJ_GYN_TG", 7500, 1);
				}
				else if (uParam0->f_410 < 21)
				{
					func_150("TAXI_OBJ_GYN", 7500, 1);
				}
				else
				{
					func_150("TAXI_OBJ_GYN_GF", 7500, 1);
				}
				uParam0->f_417 = 11;
				uParam0->f_141 = 1;
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 28:
				switch (uParam0->f_102)
				{
					case 0:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
					
					case 1:
						StringConCat(&vVar0, "_dest1B", 24);
						break;
					
					default:
						StringConCat(&vVar0, "_dest1A", 24);
						break;
				}
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 29, 1, 0, 0);
				break;
			
			case 29:
				if (!func_21(uParam0->f_98, 268435456))
				{
					func_150("TAXI_OBJ_CYI_01", 7500, 1);
					func_165(&(uParam0->f_98), 268435456);
				}
				uParam0->f_417 = 29;
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 30:
				StringConCat(&vVar0, "_rCar1", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 31:
				StringConCat(&vVar0, "_rCar2", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 32:
				StringConCat(&vVar0, "_rCar3", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				uParam0->f_124 = { vVar0 };
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 33:
				func_150("TAXI_OBJ_CYI_02", 7500, 1);
				uParam0->f_417 = 33;
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 34:
				if (!func_21(uParam0->f_82, 8192))
				{
					if (func_110(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_airBr1", 24);
						func_224(&vVar0);
						if (uParam0->f_411 == 5)
						{
							func_347(vVar0, uParam1);
						}
						else
						{
							func_355(uParam0, &vVar0, 0, 0, 8);
						}
						func_165(&(uParam0->f_82), 8192);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_253(uParam0, 0, 0);
					}
				}
				break;
			
			case 35:
				if (!func_21(uParam0->f_82, 16384))
				{
					StringConCat(&vVar0, "_seeD1", 24);
					func_224(&vVar0);
					func_355(uParam0, &vVar0, 0, 0, 8);
					func_165(&(uParam0->f_82), 16384);
				}
				break;
			
			case 36:
				if (!func_21(uParam0->f_82, 32768))
				{
					StringConCat(&vVar0, "_seeD2", 24);
					func_224(&vVar0);
					func_355(uParam0, &vVar0, 0, 0, 8);
					func_165(&(uParam0->f_82), 32768);
				}
				break;
			
			case 37:
				StringConCat(&vVar0, "_done1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 46, 1, 0, 0);
				break;
			
			case 138:
				if (uParam0->f_101 == 1)
				{
					StringConCat(&vVar0, "_ftc1", 24);
				}
				else
				{
					switch (uParam0->f_102)
					{
						case 1:
							StringConCat(&vVar0, "_ftc1", 24);
							break;
						
						case 0:
							StringConCat(&vVar0, "_ftc2", 24);
							break;
						
						case 2:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						
						default:
							StringConCat(&vVar0, "_ftc3", 24);
							break;
						}
				}
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 139, 1, 0, 0);
				uParam0->f_417 = 139;
				func_253(uParam0, 0, 0);
				break;
			
			case 139:
				func_150("TAXI_OBJ_FTC2", 7500, 1);
				uParam0->f_417 = 13;
				func_222(uParam0, 13, 0, 0, 0);
				break;
			
			case 38:
				StringConCat(&vVar0, "_dOff1", 24);
				cVar6 = { vVar0 };
				iVar14 = GET_RANDOM_INT_IN_RANGE(0, 120);
				if (!func_21(uParam0->f_82, 268435456))
				{
					if (iVar14 > 80)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else if (iVar14 > 40)
					{
						StringConCat(&cVar6, "_2", 24);
					}
					else
					{
						StringConCat(&cVar6, "_3", 24);
					}
					func_165(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 > 80)
				{
					StringConCat(&cVar6, "_4", 24);
				}
				else if (iVar14 > 40)
				{
					StringConCat(&cVar6, "_5", 24);
				}
				else
				{
					StringConCat(&cVar6, "_6", 24);
				}
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 39:
				StringConCat(&vVar0, "_bdOff1", 24);
				cVar6 = { vVar0 };
				iVar14 = GET_RANDOM_INT_IN_RANGE(0, 100);
				if (!func_21(uParam0->f_82, 268435456))
				{
					if (iVar14 < 50)
					{
						StringConCat(&cVar6, "_1", 24);
					}
					else
					{
						StringConCat(&cVar6, "_2", 24);
					}
					func_165(&(uParam0->f_82), 268435456);
				}
				else if (iVar14 < 50)
				{
					StringConCat(&cVar6, "_3", 24);
				}
				else
				{
					StringConCat(&cVar6, "_4", 24);
				}
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 41:
				StringConCat(&vVar0, "_dr2P", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 42:
				StringConCat(&vVar0, "_dr2N", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 40:
				StringConCat(&vVar0, "_dOff2", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 44, 1, 0, 0);
				break;
			
			case 44:
				func_150("TAXI_OBJ_CC2", 7500, 1);
				uParam0->f_417 = 44;
				func_253(uParam0, 0, 0);
				func_222(uParam0, 97, 1, 0, 0);
				break;
			
			case 43:
				StringConCat(&vVar0, "_dOff3", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 45, 1, 0, 0);
				break;
			
			case 45:
				if (!func_112())
				{
					func_150("TAXI_OBJ_CC3", 7500, 1);
					uParam0->f_417 = 45;
					func_253(uParam0, 0, 0);
					func_222(uParam0, 98, 1, 0, 0);
				}
				break;
			
			case 46:
				func_150("TAXI_OBJ_FTC3", 7500, 1);
				uParam0->f_417 = 46;
				func_253(uParam0, 0, 0);
				break;
			
			case 21:
				if (!func_21(uParam0->f_81, 1))
				{
					func_345(uParam0, 1, vVar0, "_sick1", 8);
					func_121(&(uParam0->f_81), 2);
				}
				else if (!func_21(uParam0->f_81, 2))
				{
					func_345(uParam0, 2, vVar0, "_sick2", 8);
					func_121(&(uParam0->f_81), 1);
				}
				func_356(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 22:
				if (!func_21(uParam0->f_82, 2097152))
				{
					StringConCat(&vVar0, "_nopke1", 24);
				}
				else if (!func_21(uParam0->f_82, 4194304))
				{
					StringConCat(&vVar0, "_nopke2", 24);
				}
				func_165(&(uParam0->f_81), 2097152);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_290(uParam0, 16, 0, 0);
				func_356(17, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 1);
				func_253(uParam0, 0, 0);
				break;
			
			case 61:
				StringConCat(&vVar0, "_Puke1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_356(18, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 63:
				StringConCat(&vVar0, "_PkStp2", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_356(20, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 62:
				StringConCat(&vVar0, "_PkStp1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_356(19, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				break;
			
			case 64:
				StringConCat(&vVar0, "_PukeR1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 71:
				if (!func_21(uParam0->f_81, 4))
				{
					func_345(uParam0, 4, vVar0, "_turns1", 8);
				}
				else if (!func_21(uParam0->f_81, 8))
				{
					func_345(uParam0, 8, vVar0, "_turns2", 8);
				}
				else
				{
					func_345(uParam0, 8, vVar0, "_turns3", 8);
					func_121(&(uParam0->f_81), 4);
					func_121(&(uParam0->f_81), 8);
				}
				func_356(13, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 72:
				if (func_344(uParam0))
				{
					func_352(uParam0, vVar0, func_354(uParam0, 72));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!IS_PED_INJURED(uParam0->f_3))
					{
						func_249(uParam0->f_3, "CRASH_GENERIC", uParam0->f_145, 4);
					}
				}
				else if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_carHt", 24);
					cVar6 = { vVar0 };
					func_357(&(uParam0->f_95), 5, &cVar6, 1, 0, 1);
					func_323(&(uParam0->f_244), uParam0->f_144, &cVar6, 8, 0, 0, 0);
				}
				else
				{
					StringConCat(&vVar0, "_carHt1", 24);
					cVar6 = { vVar0 };
					if (uParam0->f_411 == 0)
					{
						func_357(&(uParam0->f_95), 8, &cVar6, 1, 1, 0);
					}
					else
					{
						func_357(&(uParam0->f_95), 5, &cVar6, 1, 1, 0);
					}
					func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				func_356(2, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 73:
				StringConCat(&vVar0, "_genPnHi", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 75:
				if (!func_21(uParam0->f_83, 128))
				{
					StringConCat(&vVar0, "_nMiss1", 24);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 128);
					func_121(&(uParam0->f_83), 256);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 256))
				{
					StringConCat(&vVar0, "_nMiss2", 24);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 256);
					func_121(&(uParam0->f_83), 512);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 512))
				{
					StringConCat(&vVar0, "_nMiss3", 24);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 512);
					func_121(&(uParam0->f_83), 128);
					func_290(uParam0, 16, 0, 0);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 76:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_83, 1))
				{
					StringConCat(&vVar0, "_air1", 24);
					if (bVar24)
					{
						func_224(&vVar0);
					}
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 1);
					func_121(&(uParam0->f_83), 2);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2))
				{
					StringConCat(&vVar0, "_air2", 24);
					if (bVar24)
					{
						func_224(&vVar0);
					}
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 2);
					if (uParam0->f_411 == 0)
					{
						func_121(&(uParam0->f_83), 4);
					}
					else
					{
						func_121(&(uParam0->f_83), 1);
					}
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4))
				{
					StringConCat(&vVar0, "_air3", 24);
					if (bVar24)
					{
						func_224(&vVar0);
					}
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 4);
					func_121(&(uParam0->f_83), 1);
					func_290(uParam0, 16, 0, 0);
				}
				func_356(11, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 79:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 4096))
				{
					func_350(uParam0, 4096, vVar0, "_sideW1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 8192))
				{
					func_350(uParam0, 8192, vVar0, "_sideW2", bVar24, 8);
				}
				func_356(15, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 80:
				if (uParam0->f_411 == 1 || uParam0->f_411 == 0)
				{
					bVar24 = true;
				}
				if (!func_21(uParam0->f_81, 16384))
				{
					func_350(uParam0, 16384, vVar0, "_opLne1", bVar24, 8);
				}
				else if (!func_21(uParam0->f_81, 32768))
				{
					func_350(uParam0, 32768, vVar0, "_opLne2", bVar24, 8);
				}
				func_356(14, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 83:
				if (uParam0->f_411 == 0)
				{
					if (!func_21(uParam0->f_82, 8))
					{
						func_343(uParam0, 8, vVar0, "_bored1", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 16))
					{
						func_343(uParam0, 16, vVar0, "_bored2", 8, 0);
					}
					else if (!func_21(uParam0->f_82, 32))
					{
						func_343(uParam0, 32, vVar0, "_bored3", 8, 0);
					}
					func_356(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_253(uParam0, 0, 0);
				}
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_good1", 24);
					cVar6 = { vVar0 };
					func_357(&(uParam0->f_93), 6, &cVar6, 0, 1, 0);
					func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					func_356(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
					func_290(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 92:
				StringConCat(&vVar0, "_EtoB1", 24);
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_96), 2, &cVar6, 0, 1, 0);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_356(9, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 93:
				StringConCat(&vVar0, "_BtoE1", 24);
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_97), 2, &cVar6, 0, 1, 0);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_356(12, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 81:
				if (!func_21(uParam0->f_81, 65536))
				{
					func_350(uParam0, 65536, vVar0, "_runLit1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 131072))
				{
					func_350(uParam0, 131072, vVar0, "_runLit2", 1, 8);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 82:
				if (func_344(uParam0))
				{
					func_352(uParam0, vVar0, func_354(uParam0, 82));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!IS_PED_INJURED(uParam0->f_3))
					{
						func_249(uParam0->f_3, "CAR_HIT_PED_DRIVEN", uParam0->f_145, 4);
					}
				}
				else if (!func_21(uParam0->f_83, 8))
				{
					StringConCat(&vVar0, "_hitR1", 24);
					func_224(&vVar0);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 8);
					func_121(&(uParam0->f_83), 16);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 16))
				{
					StringConCat(&vVar0, "_hitR2", 24);
					func_224(&vVar0);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 16);
					func_121(&(uParam0->f_83), 32);
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 32))
				{
					StringConCat(&vVar0, "_hitR3", 24);
					func_224(&vVar0);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 32);
					if (uParam0->f_411 == 0)
					{
						func_121(&(uParam0->f_83), 64);
					}
					else
					{
						func_121(&(uParam0->f_83), 8);
					}
					func_290(uParam0, 16, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 64))
				{
					StringConCat(&vVar0, "_hitR4", 24);
					func_224(&vVar0);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
					func_165(&(uParam0->f_83), 64);
					func_121(&(uParam0->f_83), 8);
					func_290(uParam0, 16, 0, 0);
				}
				func_356(1, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 65:
				if (!func_112())
				{
					if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_aggro2", 24);
					}
					else
					{
						StringConCat(&vVar0, "_aggro", 24);
					}
					func_355(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_352(uParam0, vVar0, func_354(uParam0, 65));
					func_253(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 66:
				if (!func_112())
				{
					if (uParam0->f_411 == 4)
					{
						StringCopy(&vVar0, "tm6_shoot", 24);
					}
					else if (uParam0->f_115)
					{
						StringConCat(&vVar0, "_shootlz", 24);
					}
					else
					{
						StringConCat(&vVar0, "_shoot", 24);
					}
					func_355(uParam0, &vVar0, 0, 1, 8);
				}
				else
				{
					func_352(uParam0, vVar0, func_354(uParam0, 66));
					func_253(uParam0, 0, 0);
				}
				uParam0->f_107++;
				break;
			
			case 13:
				if (uParam0->f_411 == 8)
				{
					if (!uParam0->f_109 && !func_112())
					{
						switch (uParam0->f_414)
						{
							case 3:
								StringConCat(&vVar0, "_warnC1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 6:
								StringConCat(&vVar0, "_warnF1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 1:
								StringConCat(&vVar0, "_far1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								func_356(21, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 2:
								StringConCat(&vVar0, "_close1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								func_356(22, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
								break;
							
							case 10:
								StringConCat(&vVar0, "_hit1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								break;
							
							case 8:
								StringConCat(&vVar0, "_good1", 24);
								cVar6 = { vVar0 };
								func_357(&(uParam0->f_93), 6, &cVar6, 1, 1, 0);
								func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
								func_356(23, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
								func_290(uParam0, 16, 0, 0);
								func_253(uParam0, 0, 0);
								break;
							
							case 9:
								if (!iLocal_64)
								{
									StringConCat(&vVar0, "_sBant1", 24);
									cVar6 = { vVar0 };
									func_355(uParam0, &vVar0, 0, 0, 8);
									func_290(uParam0, 16, 0, 0);
									func_290(uParam0, 11, 0, 0);
									func_253(uParam0, 0, 0);
									if (!iLocal_66)
									{
										iLocal_64 = 1;
									}
								}
								else
								{
									if (!iLocal_65)
									{
										StringConCat(&vVar0, "_bant3", 24);
										iLocal_65 = 1;
									}
									else
									{
										StringConCat(&vVar0, "_bant2", 24);
										iLocal_66 = 1;
									}
									func_224(&vVar0);
									func_355(uParam0, &vVar0, 0, 0, 8);
									func_290(uParam0, 16, 0, 0);
									func_290(uParam0, 11, 0, 0);
									func_253(uParam0, 0, 0);
									iLocal_64 = 0;
								}
								break;
							
							case 7:
								StringConCat(&vVar0, "_done1", 24);
								func_355(uParam0, &vVar0, 0, 0, 8);
								break;
						}
						func_222(uParam0, 143, 0, 0, 0);
					}
				}
				break;
			
			case 78:
				StringConCat(&vVar0, "_speed1", 24);
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_87), 6, &cVar6, 1, 1, 0);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_356(10, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 25:
				if (!func_21(uParam0->f_82, 1))
				{
					func_343(uParam0, 1, vVar0, "_close1", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 2))
				{
					func_343(uParam0, 2, vVar0, "_close2", 8, 0);
				}
				else if (!func_21(uParam0->f_82, 4))
				{
					func_343(uParam0, 4, vVar0, "_close3", 8, 0);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 48:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_stop2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_stop1", 24);
				}
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_86), 4, &cVar6, 0, 1, 0);
				if (uParam0->f_411 != 9)
				{
					func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				else if (!IS_PED_INJURED(uParam0->f_3))
				{
					func_249(uParam0->f_3, "TAXI_STOPPED", uParam0->f_145, 4);
				}
				func_290(uParam0, 16, 0, 0);
				func_356(5, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 74:
				if (func_344(uParam0))
				{
					func_352(uParam0, vVar0, func_354(uParam0, 74));
				}
				else if (uParam0->f_411 == 9)
				{
					if (!IS_PED_INJURED(uParam0->f_3))
					{
						func_249(uParam0->f_3, "VEHICLE_FLIPPED", uParam0->f_145, 4);
					}
				}
				else
				{
					StringConCat(&vVar0, "_roll1", 24);
					func_342(uParam0, vVar0, 8);
				}
				func_356(3, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 70:
				if (!func_21(uParam0->f_83, 1024))
				{
					func_165(&(uParam0->f_83), 1024);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv1", 24);
					func_224(&vVar0);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 2048))
				{
					func_165(&(uParam0->f_83), 2048);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv2", 24);
					func_224(&vVar0);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				else if (!func_21(uParam0->f_83, 4096))
				{
					func_165(&(uParam0->f_83), 4096);
					func_290(uParam0, 16, 0, 0);
					StringConCat(&vVar0, "_swrv3", 24);
					func_224(&vVar0);
					func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 8, 0, 0, 0);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 69:
				if (!func_21(uParam0->f_82, 1024))
				{
					func_343(uParam0, 1024, vVar0, "_rvrs1", 8, 1);
					func_121(&(uParam0->f_82), 2048);
				}
				else if (!func_21(uParam0->f_82, 2048))
				{
					func_343(uParam0, 2048, vVar0, "_rvrs2", 8, 1);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 67:
				StringConCat(&vVar0, "_ofrd1", 24);
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_88), 4, &cVar6, 0, 1, 0);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_356(16, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), cVar6, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 68:
				StringConCat(&vVar0, "_ofrdch1", 24);
				func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 49:
				StringConCat(&vVar0, "_losPol1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 52, 1, 0, 0);
				break;
			
			case 50:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_lsPo2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_lsPo1", 24);
				}
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				else if (!IS_PED_INJURED(uParam0->f_3))
				{
					func_249(uParam0->f_3, "POLICE_PURSUIT_DRIVEN", uParam0->f_145, 4);
				}
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 51:
				if (func_344(uParam0))
				{
					if (uParam0->f_411 == 2)
					{
						StringConCat(&vVar0, "_copBa1", 24);
						cVar6 = { vVar0 };
						cVar6 = { vVar0 };
						func_355(uParam0, &vVar0, 0, 0, 8);
						func_222(uParam0, 52, 1, 0, 0);
						func_290(uParam0, 16, 0, 0);
					}
					else
					{
						if (uParam0->f_411 == 5 && uParam0->f_410 > 9)
						{
							StringConCat(&vVar0, "_copBa2", 24);
						}
						else
						{
							StringConCat(&vVar0, "_copBa1", 24);
						}
						cVar6 = { vVar0 };
						func_355(uParam0, &vVar0, 0, 0, 8);
						func_290(uParam0, 16, 0, 0);
					}
				}
				else
				{
					StringConCat(&vVar0, "_copBa1", 24);
					cVar6 = { vVar0 };
					func_357(&(uParam0->f_85), 6, &cVar6, 1, 1, 0);
					func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
					func_290(uParam0, 16, 0, 0);
					func_253(uParam0, 0, 0);
				}
				break;
			
			case 53:
				StringConCat(&vVar0, "_evdeP1", 24);
				func_356(8, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_290(uParam0, 10, 0f, 1);
				break;
			
			case 52:
				if (GET_PLAYER_WANTED_LEVEL(GET_PLAYER_INDEX()) >= 1)
				{
					func_150("TAXI_OBJ_POL", 7500, 1);
					uParam0->f_417 = 52;
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 54:
				StringConCat(&vVar0, "_cpFz1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 84:
				if (!func_21(uParam0->f_81, 262144))
				{
					func_350(uParam0, 262144, vVar0, "_rdCh1", 1, 8);
				}
				else if (!func_21(uParam0->f_81, 1048576))
				{
					if (uParam0->f_411 == 0 || uParam0->f_411 == 1)
					{
						func_350(uParam0, 1048576, vVar0, "_rdCh2", 1, 8);
					}
					else
					{
						func_350(uParam0, 1048576, vVar0, "_rdCh2", 0, 8);
					}
				}
				func_356(7, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 85:
				if (!func_21(uParam0->f_82, 67108864))
				{
					if (uParam0->f_418.f_6)
					{
						func_341(uParam0, 67108864, vVar0, "_rdLk1", 1, 7);
					}
				}
				else if (!func_21(uParam0->f_82, 134217728))
				{
					func_341(uParam0, 134217728, vVar0, "_rdFv1", 0, 7);
				}
				func_356(6, &(uParam0->f_57), &(uParam0->f_55), &(uParam0->f_124), vVar0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 86:
				StringConCat(&vVar0, "_rdneu1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 87:
				StringConCat(&vVar0, "_rdtip1", 24);
				cVar6 = { vVar0 };
				StringConCat(&cVar6, "_", 24);
				StringIntConCat(&cVar6, uParam0->f_418.f_3, 24);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 100:
				func_150("TAXI_OBJ_GYB_2", 7500, 1);
				uParam0->f_417 = 100;
				func_253(uParam0, 0, 0);
				break;
			
			case 47:
				if (uParam0->f_411 == 1)
				{
					StringConCat(&vVar0, "_horn", 24);
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 101:
				StringConCat(&vVar0, "_thank1", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_224(&vVar0);
				}
				func_165(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 102:
				StringConCat(&vVar0, "_thank2", 24);
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_224(&vVar0);
				}
				func_165(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 103:
				if (uParam0->f_411 == 4)
				{
					StringConCat(&vVar0, "_pissed1", 24);
				}
				else
				{
					StringConCat(&vVar0, "_thank3", 24);
				}
				if ((uParam0->f_411 == 1 || uParam0->f_411 == 5) || uParam0->f_411 == 0)
				{
					func_224(&vVar0);
				}
				func_165(&(uParam0->f_81), 2097152);
				if (uParam0->f_411 != 9)
				{
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				break;
			
			case 97:
				if (!func_21(uParam0->f_82, 65536))
				{
					if (func_110(uParam0, 11) > uParam0->f_36)
					{
						switch (uParam0->f_102)
						{
							case 0:
								StringConCat(&vVar0, "_ccba2", 24);
								break;
							
							case 1:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
							
							default:
								StringConCat(&vVar0, "_ccba1", 24);
								break;
						}
						func_224(&vVar0);
						func_347(vVar0, uParam1);
						func_165(&(uParam0->f_82), 65536);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_253(uParam0, 0, 0);
					}
				}
				break;
			
			case 98:
				if (!func_21(uParam0->f_82, 131072))
				{
					if (func_110(uParam0, 11) > uParam0->f_36)
					{
						StringConCat(&vVar0, "_ccbb1", 24);
						func_224(&vVar0);
						func_347(vVar0, uParam1);
						func_165(&(uParam0->f_82), 131072);
						func_290(uParam0, 16, 0, 0);
						func_290(uParam0, 11, 0, 0);
						func_253(uParam0, 0, 0);
					}
				}
				break;
			
			case 99:
				if (!func_21(uParam0->f_82, 8388608))
				{
					StringConCat(&vVar0, "_close1", 24);
					func_165(&(uParam0->f_82), 8388608);
				}
				else if (!func_21(uParam0->f_82, 16777216))
				{
					StringConCat(&vVar0, "_close2", 24);
					func_165(&(uParam0->f_82), 16777216);
				}
				else if (!func_21(uParam0->f_82, 33554432))
				{
					StringConCat(&vVar0, "_close3", 24);
					func_165(&(uParam0->f_82), 33554432);
				}
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 58:
				if (uParam0->f_411 == 6)
				{
					StringConCat(&vVar0, "_kill1", 24);
					cVar6 = { vVar0 };
					func_357(&(uParam0->f_93), 6, &cVar6, 1, 1, 1);
					func_224(&vVar0);
					func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				}
				else if (uParam0->f_411 == 8)
				{
					StringConCat(&vVar0, "_cheat1", 24);
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				else
				{
					StringConCat(&vVar0, "_kill1", 24);
					func_355(uParam0, &vVar0, 0, 0, 8);
				}
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 95:
				StringConCat(&vVar0, "_wndw2", 24);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 94:
				StringConCat(&vVar0, "_wndw0", 24);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 96:
				StringConCat(&vVar0, "_wndw1", 24);
				func_347(vVar0, uParam1);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 113:
				StringConCat(&vVar0, "_csite1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 119:
				StringConCat(&vVar0, "_fair1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 115:
				StringConCat(&vVar0, "_AlCk1", 24);
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_91), 5, &cVar6, 1, 1, 0);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 116:
				StringConCat(&vVar0, "_eggG1", 24);
				cVar6 = { vVar0 };
				func_357(&(uParam0->f_92), 5, &cVar6, 1, 1, 0);
				func_138(&(uParam0->f_244), uParam0->f_144, &vVar0, &cVar6, 8, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 114:
				StringConCat(&vVar0, "_goons1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 59:
				StringConCat(&vVar0, "_oRun1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 117:
				StringConCat(&vVar0, "_gotG1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 118:
				StringConCat(&vVar0, "_getA1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 120:
				StringConCat(&vVar0, "_gnawy1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 121:
				StringConCat(&vVar0, "_grl1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 122:
				StringConCat(&vVar0, "_figt1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 123:
				StringConCat(&vVar0, "_gEgg1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 124:
				StringConCat(&vVar0, "_gEgg3", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 125:
				StringConCat(&vVar0, "_gEgg2", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 126:
				StringConCat(&vVar0, "_gLeav1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 127:
				StringConCat(&vVar0, "_aKill1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 129:
				StringConCat(&vVar0, "_gHelp1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 130:
				StringConCat(&vVar0, "_gDest1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_222(uParam0, 11, 1, 0, 0);
				break;
			
			case 128:
				StringConCat(&vVar0, "_gKO1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 132:
				StringConCat(&vVar0, "_gThank1", 24);
				func_165(&(uParam0->f_81), 2097152);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 131:
				StringConCat(&vVar0, "_gDriv1", 24);
				func_224(&vVar0);
				func_347(vVar0, uParam1);
				func_165(&(uParam0->f_81), 67108864);
				func_290(uParam0, 16, 0, 0);
				func_290(uParam0, 11, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 60:
				StringConCat(&vVar0, "_cash1", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 105:
				if (!func_21(uParam0->f_81, 33554432) && uParam0->f_411 != 9)
				{
					func_350(uParam0, 33554432, vVar0, "_noPay1", 1, 8);
				}
				else if (uParam0->f_411 == 9)
				{
					if (!IS_PED_INJURED(uParam0->f_3))
					{
						func_249(uParam0->f_3, "TAXI_NO_PAY", uParam0->f_145, 4);
					}
				}
				func_222(uParam0, 108, 1, 0, 0);
				break;
			
			case 106:
				StringConCat(&vVar0, "_foot", 24);
				func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 107:
				if (!func_21(uParam0->f_81, 268435456))
				{
					func_350(uParam0, 268435456, vVar0, "_kPay1", 1, 8);
				}
				func_222(uParam0, 52, 1, 0, 0);
				break;
			
			case 108:
				func_150("TAXI_OBJ_RUNOUT", 7500, 1);
				uParam0->f_417 = 108;
				func_253(uParam0, 0, 0);
				break;
			
			case 109:
				if (!func_21(uParam0->f_81, 4194304))
				{
					if (uParam0->f_411 == 2 || uParam0->f_411 == 6)
					{
						func_350(uParam0, 4194304, vVar0, "_mPay1", 0, 8);
					}
					else if (uParam0->f_411 == 9)
					{
						if (!IS_PED_INJURED(uParam0->f_3))
						{
							func_249(uParam0->f_3, "APOLOGY_NO_TROUBLE", uParam0->f_145, 4);
						}
					}
					else
					{
						func_350(uParam0, 4194304, vVar0, "_mPay1", 1, 8);
					}
				}
				func_222(uParam0, 111, 1, 0, 0);
				break;
			
			case 111:
				func_150("TAXI_OBJ_GETRUN", 7500, 1);
				uParam0->f_417 = 111;
				func_253(uParam0, 0, 0);
				break;
			
			case 110:
				StringConCat(&vVar0, "_runoff", 24);
				func_323(&(uParam0->f_244), uParam0->f_144, &vVar0, 9, 0, 0, 0);
				func_290(uParam0, 16, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			
			case 141:
				if (!func_21(uParam0->f_81, 16777216))
				{
					func_350(uParam0, 16777216, vVar0, "_ret1", 1, 8);
				}
				func_253(uParam0, 0, 0);
				break;
			
			case 88:
				func_150("TAXI_TIEFLEE", 7500, 1);
				func_253(uParam0, 0, 0);
				break;
			
			case 57:
				if (!func_21(uParam0->f_98, 536870912))
				{
					func_150("TAXI_OBJ_CYI_1B", 7500, 1);
					func_165(&(uParam0->f_98), 536870912);
				}
				uParam0->f_417 = 57;
				func_253(uParam0, 0, 0);
				break;
			
			case 104:
				StringConCat(&vVar0, "_joke1", 24);
				func_224(&vVar0);
				func_355(uParam0, &vVar0, 0, 0, 8);
				break;
			
			case 136:
				if (uParam0->f_115)
				{
					StringConCat(&vVar0, "_wronglz", 24);
				}
				else if (uParam0->f_116)
				{
					StringConCat(&vVar0, "_wrong2", 24);
				}
				else
				{
					StringConCat(&vVar0, "_wrong", 24);
				}
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_253(uParam0, 0, 0);
				break;
			
			case 140:
				StringConCat(&vVar0, "_shout", 24);
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_253(uParam0, 0, 0);
				break;
			
			case 135:
				if (uParam0->f_411 == 4)
				{
					StringCopy(&vVar0, "tm6_jack", 24);
				}
				else
				{
					StringConCat(&vVar0, "_jack", 24);
				}
				func_355(uParam0, &vVar0, 0, 0, 8);
				func_253(uParam0, 0, 0);
				break;
			
			case 133:
				StringConCat(&vVar0, "_getCar", 24);
				func_355(uParam0, &vVar0, 1, 0, 8);
				func_222(uParam0, 134, 1, 0, 0);
				break;
			
			case 134:
				func_150("TX_VIP", 7500, 0);
				uParam0->f_417 = 134;
				func_222(uParam0, 0, 0, 0, 0);
				func_253(uParam0, 0, 0);
				break;
			}
	}
}

void func_341(var uParam0, int iParam1, vector3 vParam2, var uParam5, var uParam6, var uParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_165(&(uParam0->f_82), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if (bParam9)
	{
		func_224(&vParam2);
	}
	func_323(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam10, 0, 0, 0);
}

void func_342(var uParam0, struct<6> Param1, int iParam7)
{
	vector3 vVar0[24];
	
	cVar0 = { Param1 };
	if (!func_21(uParam0->f_82, 64))
	{
		func_165(&(uParam0->f_82), 64);
		StringConCat(&cVar0, "_1", 24);
	}
	else if (!func_21(uParam0->f_82, 128))
	{
		func_165(&(uParam0->f_82), 128);
		StringConCat(&cVar0, "_2", 24);
	}
	else
	{
		StringConCat(&cVar0, "_", 24);
		StringIntConCat(&cVar0, GET_RANDOM_INT_IN_RANGE(1, 3), 24);
	}
	func_138(&(uParam0->f_244), uParam0->f_144, &Param1, &cVar0, iParam7, 0, 0);
	func_290(uParam0, 16, 0, 0);
}

void func_343(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9, bool bParam10)
{
	func_165(&(uParam0->f_82), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if ((((uParam0->f_411 == 1 || uParam0->f_411 == 0) || uParam0->f_411 == 5) || uParam0->f_411 == 8) || uParam0->f_411 == 2)
	{
		if (bParam10)
		{
			func_224(&vParam2);
		}
	}
	func_323(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam9, 0, 0, 0);
}

int func_344(var uParam0)
{
	if ((((((uParam0->f_411 == 2 || uParam0->f_411 == 3) || uParam0->f_411 == 4) || uParam0->f_411 == 5) || uParam0->f_411 == 6) || uParam0->f_411 == 7) || uParam0->f_411 == 8)
	{
		return 1;
	}
	return 0;
}

void func_345(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, int iParam9)
{
	func_165(&(uParam0->f_81), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	func_323(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam9, 0, 0, 0);
}

void func_346(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		uVar0 = TO_FLOAT(iVar2);
		iVar1 = ROUND(POW(2f, uVar0));
		if (!func_267(*uParam0, iVar1))
		{
			func_159(uParam0, iVar1);
			if (bParam5)
			{
				StringConCat(sParam2, "_", 24);
			}
			StringIntConCat(sParam2, iVar2 + 1, 24);
			if ((*iParam3)[iVar2])
			{
				func_224(sParam2);
			}
			if (bParam4)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_347(char[24] cParam0, var uParam6)
{
	int iVar0;
	
	iVar0 = func_348(uParam6);
	if (iVar0 > -1)
	{
		*(uParam6[iVar0 /*8*/]) = { cParam0 };
		func_165(&((uParam6[iVar0 /*8*/])->f_7), 2);
	}
}

int func_348(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*8*/]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_349(var uParam0, bool bParam1)
{
	switch (uParam0->f_411)
	{
		case 0:
			if (bParam1)
			{
				func_150("TX_OBJ_NEX_PU", 7500, 1);
			}
			else
			{
				func_150("TX_OBJ_NEX_DO", 7500, 1);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_150("TX_OBJ_TIE_PU", 7500, 1);
			}
			else
			{
				func_150("TX_OBJ_TIE_DO", 7500, 1);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				func_150("TX_OBJ_DL_PU", 7500, 1);
			}
			else
			{
				func_150("TX_OBJ_DL_DO", 7500, 1);
			}
			break;
		
		case 3:
			if (bParam1)
			{
				func_150("TX_OBJ_GYB_PU", 7500, 1);
			}
			else
			{
				func_150("TX_OBJ_GYB_DO", 7500, 1);
			}
			break;
		
		case 4:
			if (bParam1)
			{
				func_150("TX_OBJ_TTB_PU", 7500, 1);
			}
			else
			{
				func_150("TX_OBJ_TTB_DO", 7500, 1);
			}
			break;
		
		case 5:
			if (bParam1)
			{
				func_150("TX_OBJ_CYI_PU", 7500, 1);
			}
			else
			{
				func_150("TX_OBJ_CYI_DO", 7500, 1);
			}
			break;
		
		case 6:
			if (bParam1)
			{
				func_150("TX_OBJ_GYN_PU", 7500, 1);
			}
			else
			{
				func_150("TX_OBJ_GYN_DO", 7500, 1);
			}
			break;
		
		case 7:
			if (bParam1)
			{
				func_150("TX_OBJ_CC_PU", 7500, 1);
			}
			else
			{
				func_150("TAXI_OBJ_CC1", 7500, 1);
			}
			break;
		
		case 8:
			if (bParam1)
			{
				func_150("TX_OBJ_FC_PU", 7500, 1);
			}
			else
			{
				func_150("TAXI_OBJ_FTC1", 7500, 1);
			}
			break;
		
		case 9:
			if (bParam1)
			{
				func_150("TX_OBJ_PRO_PU", 7500, 1);
			}
			else
			{
				func_150("TX_OBJ_PRO_DO", 7500, 1);
			}
			break;
	}
	if (!bParam1)
	{
		uParam0->f_139 = 1;
	}
}

void func_350(var uParam0, int iParam1, vector3 vParam2, char[4] cParam5, char[4] cParam6, char[4] cParam7, char* sParam8, bool bParam9, int iParam10)
{
	func_165(&(uParam0->f_81), iParam1);
	func_290(uParam0, 16, 0, 0);
	StringConCat(&vParam2, sParam8, 24);
	if (bParam9)
	{
		func_224(&vParam2);
	}
	func_323(&(uParam0->f_244), uParam0->f_144, &vParam2, iParam10, 0, 0, 0);
}

var func_351(vector3 vParam0, int iParam3)
{
	var uVar0;
	
	uVar0 = ADD_BLIP_FOR_COORD(vParam0);
	SET_BLIP_SCALE(uVar0, func_131(NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	SET_BLIP_ROUTE(uVar0, iParam3);
	return uVar0;
}

void func_352(var uParam0, char[12] cParam1, char[4] cParam4, char[4] cParam5, char[4] cParam6, char* sParam7)
{
	func_290(uParam0, 16, 0, 0);
	func_290(uParam0, 17, 0f, 1);
	StringConCat(&cParam1, sParam7, 24);
	if (!IS_PED_INJURED(uParam0->f_3))
	{
		INTERRUPT_CONVERSATION(uParam0->f_3, &cParam1, func_353(uParam0));
	}
}

char* func_353(var uParam0)
{
	char* sVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			sVar0 = "TaxiFelipe";
			break;
		
		case 1:
			sVar0 = "TaxiOtis";
			break;
		
		case 2:
			sVar0 = "TaxiKwak";
			break;
		
		case 3:
			sVar0 = "TaxiWalter";
			break;
		
		case 4:
			sVar0 = "TaxiMiranda";
			break;
		
		case 5:
			sVar0 = "TaxiDerrick";
			break;
		
		case 6:
			sVar0 = "TaxiAlonzo";
			break;
		
		case 7:
			sVar0 = "TaxiDarren";
			break;
		
		case 8:
			sVar0 = "TaxiKeyla";
			break;
	}
	return sVar0;
}

char* func_354(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 72:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ACRH";
				
				case 1:
					return "_ACRH";
				
				case 2:
					return "_ACAA";
				
				case 3:
					return "_ACRH";
				
				case 4:
					return "_AEAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					return "_ACAA";
				
				case 7:
					return "_ACAA";
				
				case 8:
					return "_ACRH";
				
				default:
			}
			return "_ACRH";
			break;
		
		case 82:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AHIT";
				
				case 1:
					return "_AHIT";
				
				case 2:
					return "_AEAA";
				
				case 3:
					return "_ADAA";
				
				case 4:
					return "_AFAA";
				
				case 5:
					return "_AFAA";
				
				case 6:
					return "_AEAA";
				
				case 7:
					return "_AHAA";
				
				case 8:
					return "_AEAA";
				
				default:
			}
			return "_AHIT";
			break;
		
		case 74:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AROL";
				
				case 1:
					return "_AROL";
				
				case 2:
					return "_AHAA";
				
				case 3:
					return "_AROL";
				
				case 4:
					return "_AGAA";
				
				case 5:
					return "_AROL";
				
				case 6:
					return "_AROL";
				
				case 7:
					return "_AROL";
				
				case 8:
					return "_AROL";
				
				default:
			}
			return "_AROL";
			break;
		
		case 65:
			switch (uParam0->f_411)
			{
				case 0:
					return "_ABAA";
				
				case 1:
					return "_FUAA";
				
				case 2:
					return "_AFAA";
				
				case 3:
					return "_DBAA";
				
				case 4:
					return "_DLAA";
				
				case 5:
					return "_DKAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_EEAA";
					}
					else
					{
						return "_EFAA";
					}
					break;
				
				case 7:
					return "_DBAA";
				
				case 8:
					return "_EFAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 66:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AEAA";
				
				case 1:
					return "_ACAA";
				
				case 2:
					return "_AJAA";
				
				case 3:
					return "_AHAA";
				
				case 4:
					return "_AHAA";
				
				case 5:
					return "_AIAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AJAA";
					}
					else
					{
						return "_AGAA";
					}
					break;
				
				case 7:
					return "_AUAA";
				
				case 8:
					return "_AHAA";
				
				default:
					return "_AROL";
			}
			break;
		
		case 2:
			switch (uParam0->f_411)
			{
				case 0:
					return "_AAAA";
				
				case 1:
					return "_AAAA";
				
				case 2:
					return "_ADAA";
				
				case 3:
					return "_ABAA";
				
				case 4:
					return "_AAAA";
				
				case 5:
					return "_ABAA";
				
				case 6:
					if (uParam0->f_115)
					{
						return "_AHAA";
					}
					else
					{
						return "_ABAA";
					}
					break;
				
				case 7:
					return "_BUAA";
				
				case 8:
					return "_ADAA";
				
				default:
					return "_AAAA";
			}
			break;
	}
	return "_ACRH";
}

int func_355(var uParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_290(uParam0, 16, 0, 0);
	if (bParam3)
	{
		func_290(uParam0, 17, 0f, 1);
	}
	func_253(uParam0, iParam2, 0);
	return func_323(&(uParam0->f_244), uParam0->f_144, sParam1, iParam4, 0, 0, 0);
}

void func_356(int iParam0, var uParam1, var uParam2, var uParam3, char[24] cParam4, bool bParam10)
{
	if (iParam0 == 0)
	{
		if (func_21(*uParam2, 2))
		{
			if (!bParam10)
			{
				*uParam1 = (*uParam1 - 2);
			}
			else
			{
				*uParam1 += 3;
			}
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 8)
	{
		if (func_21(*uParam2, 1073741824))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 1)
	{
		if (func_21(*uParam2, 4))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_121(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 8))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 5)
	{
		if (func_21(*uParam2, 512))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_121(uParam2, 4096);
			}
		}
	}
	else if (iParam0 == 2)
	{
		if (func_21(*uParam2, 16))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 1);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_121(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 32))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 3)
	{
		if (func_21(*uParam2, 64))
		{
			if (!func_21(*uParam2, 4096))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else
			{
				func_121(uParam2, 4096);
			}
		}
		else if (func_21(*uParam2, 128))
		{
			*uParam1 += 3;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 4)
	{
		if (func_21(*uParam2, 256))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 6)
	{
		if (func_21(*uParam2, 1024))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 7)
	{
		if (func_21(*uParam2, 2048))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 9)
	{
		if (func_21(*uParam2, 8192))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 += 3;
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 10)
	{
		if (func_21(*uParam2, 16384))
		{
			if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
			else
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 11)
	{
		if (func_21(*uParam2, 32768))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 12)
	{
		if (func_21(*uParam2, 65536))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 13)
	{
		if (func_21(*uParam2, 131072))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 14)
	{
		if (func_21(*uParam2, 262144))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 15)
	{
		if (func_21(*uParam2, 524288))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 16)
	{
		if (func_21(*uParam2, 1048576))
		{
			if (func_21(*uParam2, 2097152))
			{
				*uParam1 = (*uParam1 - 2);
				*uParam3 = { cParam4 };
			}
			else if (func_21(*uParam2, 4194304))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 21)
	{
		if (func_21(*uParam2, 8388608))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 22)
	{
		if (func_21(*uParam2, 16777216))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 23)
	{
		if (func_21(*uParam2, 33554432))
		{
			*uParam1 += 2;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 17)
	{
		if (func_21(*uParam2, 67108864))
		{
			if (func_21(*uParam2, 67108864))
			{
				*uParam1 += 2;
				*uParam3 = { cParam4 };
			}
		}
	}
	else if (iParam0 == 18)
	{
		if (func_21(*uParam2, 134217728))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 20)
	{
		if (func_21(*uParam2, 536870912))
		{
			*uParam1 = (*uParam1 - 1);
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 19)
	{
		if (func_21(*uParam2, 268435456))
		{
			*uParam1++;
			*uParam3 = { cParam4 };
		}
	}
	else if (iParam0 == 25)
	{
		if (func_21(*uParam2, 32768))
		{
			*uParam1 = (*uParam1 - 2);
			*uParam3 = { cParam4 };
		}
	}
}

void func_357(var uParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = 0;
	while (iVar2 < iParam1)
	{
		uVar0 = TO_FLOAT(iVar2);
		iVar1 = ROUND(POW(2f, uVar0));
		if (!func_267(*uParam0, iVar1))
		{
			func_159(uParam0, iVar1);
			if (bParam5)
			{
				if (!bParam4)
				{
					StringIntConCat(sParam2, iVar2 + 1, 24);
					func_224(sParam2);
				}
				else
				{
					func_224(sParam2);
				}
			}
			else
			{
				if (bParam4)
				{
					StringConCat(sParam2, "_", 24);
				}
				StringIntConCat(sParam2, iVar2 + 1, 24);
			}
			if (bParam3)
			{
				if (iVar2 == (iParam1 - 1))
				{
					*uParam0 = 0;
				}
			}
			return;
		}
		iVar2++;
	}
}

void func_358(var uParam0, bool bParam1)
{
	uParam0->f_120 = 1;
	if (bParam1)
	{
	}
}

int func_359(var uParam0)
{
	return uParam0->f_416;
}

int func_360(char* sParam0)
{
	if (!IS_STRING_NULL(sParam0))
	{
		if (func_180(sParam0, 0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_361(var uParam0)
{
	if (func_112())
	{
		return 1;
	}
	if (func_297(uParam0, 17))
	{
		return 1;
	}
	if (func_297(uParam0, 14))
	{
		return 1;
	}
	if (func_178(uParam0))
	{
		return 1;
	}
	return 0;
}

bool func_362(var uParam0, var uParam1)
{
	return ((*uParam1 == -1 && uParam0->f_412 == 0) && !func_297(uParam0, 9));
}

void func_363(var uParam0)
{
	if (func_297(uParam0, 17))
	{
		if (!func_297(uParam0, 14))
		{
			if (!func_178(uParam0))
			{
				if (!func_112())
				{
					func_109(uParam0, 17, 1);
				}
			}
		}
	}
}

bool func_364(var uParam0)
{
	return uParam0->f_117;
}

void func_365(var uParam0, var uParam1, bool bParam2)
{
	if (!func_21(uParam0->f_55, 1))
	{
		switch (*uParam1)
		{
			case 0:
				if (!IS_STRING_NULL_OR_EMPTY(&(uParam0->f_124)) && func_112())
				{
					*uParam1++;
				}
				break;
			
			case 1:
				if (!func_112())
				{
					StringCopy(&(uParam0->f_124), func_199(), 24);
					uParam0->f_56 = (uParam0->f_56 + uParam0->f_57);
					if (uParam0->f_56 < 0)
					{
						uParam0->f_56 = 0;
					}
					uParam0->f_57 = 0;
					*uParam1 = 0;
					if (bParam2)
					{
					}
				}
				break;
			}
	}
}

void func_366(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_410 >= 5)
	{
		if (DOES_ENTITY_EXIST(uParam0->f_4))
		{
			if (Local_343 > 0 && !func_267(Local_343.f_1[4 /*4*/], 4))
			{
				iVar0 = 0;
				iVar0 = 0;
				while (iVar0 <= (Local_343 - 1))
				{
					if (func_267(Local_343.f_1[iVar0 /*4*/], 2))
					{
						Stack.Push(uParam0);
						Call_Loc(Local_343.f_1[iVar0 /*4*/].f_2);
						if (StackVal)
						{
							if (!func_267(Local_343.f_1[iVar0 /*4*/], 4))
							{
								func_159(&(Local_343.f_1[iVar0 /*4*/]), 4);
								Local_343.f_1[iVar0 /*4*/].f_1 = GET_GAME_TIMER();
							}
						}
						else
						{
							func_122(&(Local_343.f_1[iVar0 /*4*/]), 12);
						}
						if (func_267(Local_343.f_1[iVar0 /*4*/], 4) && !func_267(Local_343.f_1[iVar0 /*4*/], 8))
						{
							Stack.Push(uParam0);
							Stack.Push(Local_343.f_1[iVar0 /*4*/].f_1);
							Call_Loc(Local_343.f_1[iVar0 /*4*/].f_3);
							if (StackVal)
							{
								func_159(&(Local_343.f_1[iVar0 /*4*/]), 8);
							}
						}
					}
					iVar0++;
				}
			}
		}
		else
		{
			func_322(uParam0, "Taxi Garbage Collected", 18);
		}
	}
}

int func_367(var uParam0, var uParam1)
{
	var uVar0;
	
	if (!func_297(uParam0, 27))
	{
		func_296(uParam0, 27);
		uParam1->f_3 = 250;
		uParam1->f_2 = 40f;
	}
	if (!uParam0->f_109 && func_110(uParam0, 27) > 5f)
	{
		if (func_394(uParam0->f_3, uParam0->f_4, uParam1, &uVar0, 0, 1, 0, 1, 1))
		{
			func_290(uParam0, 27, 0, 0);
			func_290(uParam0, 10, 0, 0);
			func_392(uParam0, &uVar0, uParam1);
		}
		func_389(uParam0);
	}
	if (uParam0->f_410 >= 3 && uParam0->f_410 <= 5)
	{
		func_368(uParam0);
	}
	if ((((!IS_PLAYER_CONTROL_ON(PLAYER_ID()) && (DOES_CAM_EXIST(*uParam0) && !IS_CAM_ACTIVE(*uParam0))) && (DOES_CAM_EXIST(uParam0->f_1) && !IS_CAM_ACTIVE(uParam0->f_1))) && !IS_MESSAGE_BEING_DISPLAYED()) && !func_112())
	{
		if (func_110(uParam0, 26) > 10f)
		{
			func_109(uParam0, 26, 0);
			SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
		}
	}
	else if (func_297(uParam0, 26))
	{
		func_109(uParam0, 26, 0);
	}
	return 0;
}

void func_368(var uParam0)
{
	if (!func_388(uParam0->f_429))
	{
		uParam0->f_429 = func_387();
		func_378(&(uParam0->f_429), 0, 0, GET_RANDOM_INT_IN_RANGE(4, 7), 0, 0, 0);
	}
	else if (func_369(uParam0->f_429))
	{
		func_322(uParam0, "Player took too long to make pickup", 9);
	}
}

bool func_369(int iParam0)
{
	return func_370(func_387(), iParam0);
}

int func_370(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_388(iParam1) || !func_388(iParam0))
	{
		return 1;
	}
	iVar0 = func_376(iParam0);
	iVar1 = func_376(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_375(iParam0);
	iVar1 = func_375(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_374(iParam0);
	iVar1 = func_374(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_373(iParam0);
	iVar1 = func_373(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_372(iParam0);
	iVar1 = func_372(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	iVar1 = func_371(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_371(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_372(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_373(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_374(int iParam0)
{
	return SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_375(int iParam0)
{
	return iParam0 & 15;
}

var func_376(int iParam0)
{
	return (SHIFT_RIGHT(iParam0, 26) & 31 * func_377(IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_377(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_378(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_376(*uParam0);
	iVar1 = func_375(*uParam0);
	iVar2 = func_374(*uParam0);
	iVar3 = func_373(*uParam0);
	iVar4 = func_372(*uParam0);
	iVar5 = func_371(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_386(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_386(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_379(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_379(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_385(uParam0, iParam1);
	func_384(uParam0, iParam2);
	func_383(uParam0, iParam3);
	func_382(uParam0, iParam5);
	func_381(uParam0, iParam4);
	func_380(uParam0, iParam6);
}

void func_380(var uParam0, int iParam1)
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
		*uParam0 = (*uParam0 || SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_381(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_375(*uParam0);
	iVar1 = func_376(*uParam0);
	if (iParam1 < 1 || iParam1 > func_386(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 4));
}

void func_382(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_383(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 9));
}

void func_384(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 14));
}

void func_385(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 20));
}

int func_386(int iParam0, int iParam1)
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

int func_387()
{
	var uVar0;
	
	func_385(&uVar0, GET_CLOCK_SECONDS());
	func_384(&uVar0, GET_CLOCK_MINUTES());
	func_383(&uVar0, GET_CLOCK_HOURS());
	func_381(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_382(&uVar0, GET_CLOCK_MONTH());
	func_380(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

int func_388(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_371(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_372(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_373(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_376(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_375(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_374(iParam0);
	if (iVar5 < 1 || iVar5 > func_386(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

void func_389(var uParam0)
{
	var uVar0;
	
	if (uParam0->f_410 < 7 && !uParam0->f_138)
	{
		if (((uParam0->f_411 == 9 && func_391()) && !func_155(uParam0)) || ((uParam0->f_411 != 9 && func_257(uParam0, 1)) && !func_155(uParam0)))
		{
			uVar0 = func_390(uParam0->f_4);
			SET_ENTITY_AS_NO_LONGER_NEEDED(&uVar0);
			uParam0->f_4 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
			SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, 1, 0);
			func_194(uParam0);
			func_185(uParam0, 0);
		}
	}
}

var func_390(var uParam0)
{
	return uParam0;
}

int func_391()
{
	var uVar0;
	
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0);
			if (IS_VEHICLE_DRIVEABLE(uVar0, 0))
			{
				if (GET_PED_IN_VEHICLE_SEAT(uVar0, -1, 0) == PLAYER_PED_ID())
				{
					if (IS_VEHICLE_MODEL(uVar0, func_20()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_392(var uParam0, var uParam1, var uParam2)
{
	switch (*uParam1)
	{
		case 1:
			if (func_393(uParam0, 0, 1))
			{
				func_322(uParam0, "Aggro Aiming", 5);
			}
			break;
		
		case 4:
			if (func_393(uParam0, 0, 4))
			{
				func_322(uParam0, "Aggro Shot Near", 8);
			}
			break;
		
		case 8:
			if (func_393(uParam0, 0, 8))
			{
				func_322(uParam0, "Aggro Heard Shot", 8);
			}
			break;
		
		case 16:
			if (func_393(uParam0, 1, 1))
			{
				func_322(uParam0, "Aggro Attacked", 14);
			}
			break;
		
		case 32:
			if (func_393(uParam0, 0, 1))
			{
				func_322(uParam0, "Aggro Minor Attacked", 8);
			}
			break;
		
		case 2:
			if (!func_21(*uParam2, 2) && func_171(uParam0))
			{
				func_322(uParam0, "Aggro Went Wanted", 5);
			}
			break;
	}
}

int func_393(var uParam0, int iParam1, int iParam2)
{
	if (((uParam0->f_107 >= 2 && uParam0->f_410 < 29) || uParam0->f_410 <= 5) || (iParam1 && !uParam0->f_114))
	{
		return 1;
	}
	else if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
	{
		if (!IS_ENTITY_OCCLUDED(uParam0->f_3))
		{
			if (iParam2 == 4)
			{
				func_222(uParam0, 66, 1, 0, 1);
			}
			else
			{
				func_222(uParam0, 65, 1, 0, 1);
			}
		}
	}
	return 0;
}

int func_394(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	var uVar0;
	bool bVar1;
	
	uVar0 = PLAYER_PED_ID();
	if (!IS_ENTITY_DEAD(uVar0, 0) && !IS_ENTITY_DEAD(uParam0, 0))
	{
		if (!func_21(*uParam2, 1))
		{
			if (func_400(uParam0, uParam2))
			{
				*uParam3 = 1;
				return 1;
			}
		}
		if (!func_21(*uParam2, 2))
		{
			if (GET_PLAYER_WANTED_LEVEL(PLAYER_ID()) > 0)
			{
				*uParam3 = 2;
				return 1;
			}
		}
		if (!func_21(*uParam2, 4))
		{
			if (func_398(uVar0, uParam0, uParam2, bParam5))
			{
				*uParam3 = 4;
				return 1;
			}
		}
		if (!func_21(*uParam2, 8))
		{
			if (func_397(uVar0, uParam0, uParam2))
			{
				*uParam3 = 8;
				return 1;
			}
		}
		bVar1 = !func_21(*uParam2, 128);
		if (bParam4)
		{
			if (func_395(uParam0, uParam1, 1, bParam6, bVar1, 1))
			{
				*uParam3 = 32;
				return 1;
			}
		}
		else if (!func_21(*uParam2, 16))
		{
			if (func_395(uParam0, uParam1, 0, bParam6, bVar1, bParam8))
			{
				*uParam3 = 16;
				return 1;
			}
		}
	}
	else if (DOES_ENTITY_EXIST(uParam0))
	{
		if (iParam7 && HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, uVar0, 1))
		{
			*uParam3 = 16;
			return 1;
		}
	}
	return 0;
}

int func_395(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	var uVar0;
	var uVar1;
	
	if (bParam3)
	{
		if (!bLocal_79)
		{
			iLocal_80 = GET_ENTITY_HEALTH(uParam0);
			bLocal_79 = true;
		}
		iLocal_81 = GET_ENTITY_HEALTH(uParam0);
		iLocal_82 = (iLocal_80 - iLocal_81);
		uVar0 = GET_PLAYERS_LAST_VEHICLE();
		if (!IS_ENTITY_DEAD(uVar0, 0))
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, uVar0, 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
		if (bLocal_79)
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER_PED_ID(), 1))
			{
				if (IntToFloat(iLocal_82) > 100f)
				{
					return 1;
				}
			}
		}
	}
	else if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, PLAYER_PED_ID(), 1))
	{
		return 1;
	}
	if (!bParam3)
	{
		uVar1 = GET_PLAYERS_LAST_VEHICLE();
		if (!IS_ENTITY_DEAD(uVar1, 0))
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam0, uVar1, 1))
			{
				return 1;
			}
		}
	}
	if (bParam4)
	{
		if (!IS_ENTITY_DEAD(uParam0, 0))
		{
			if (IS_PED_BEING_JACKED(uParam0))
			{
				if (GET_PEDS_JACKER(uParam0) == PLAYER_PED_ID())
				{
					return 1;
				}
			}
		}
	}
	if (bParam5)
	{
		if (IS_PED_IN_MELEE_COMBAT(PLAYER_PED_ID()))
		{
			if (IS_ENTITY_AT_COORD(uParam0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), 10f, 10f, 10f, 0, 1, 0))
			{
				if (HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(PLAYER_ID()))
				{
					return 1;
				}
			}
		}
	}
	if (IS_PED_PERFORMING_STEALTH_KILL(PLAYER_PED_ID()))
	{
		if (WAS_PED_KILLED_BY_STEALTH(uParam0))
		{
			return 1;
		}
	}
	if (func_396(PLAYER_PED_ID(), uParam0))
	{
		return 1;
	}
	if (bParam2)
	{
		if (IS_PED_RAGDOLL(uParam0) && func_157(uParam0, 1) < 1.5f)
		{
			return 1;
		}
		else if (IS_PED_IN_ANY_VEHICLE(uParam0, 0))
		{
			if (IS_ENTITY_TOUCHING_ENTITY(PLAYER_PED_ID(), GET_VEHICLE_PED_IS_IN(uParam0, 0)))
			{
				return 1;
			}
		}
		else if (IS_ENTITY_TOUCHING_ENTITY(PLAYER_PED_ID(), uParam0))
		{
			return 1;
		}
		if (!IS_ENTITY_DEAD(uParam1, 0))
		{
			if (HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uParam1, PLAYER_PED_ID(), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_396(var uParam0, var uParam1)
{
	int iVar0;
	
	GET_CURRENT_PED_WEAPON(uParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan"))
	{
		if (IS_PED_SHOOTING(uParam0))
		{
			if (VDIST(GET_ENTITY_COORDS(uParam0, 1), GET_ENTITY_COORDS(uParam1, 1)) < 2.5f)
			{
				if (IS_PED_FACING_PED(uParam0, uParam1, 180f))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_397(var uParam0, var uParam1, var uParam2)
{
	if (IS_PED_ARMED(uParam0, 4))
	{
		if (IS_PED_SHOOTING(uParam0) && !IS_PED_CURRENT_WEAPON_SILENCED(uParam0))
		{
			if (IS_ENTITY_AT_COORD(uParam1, GET_ENTITY_COORDS(uParam0, 1), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_398(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	
	iVar3 = 0;
	if (!IS_ENTITY_DEAD(uParam1, 0))
	{
		vVar0 = { GET_ENTITY_COORDS(uParam1, 1) };
	}
	if (IS_BULLET_IN_AREA(vVar0, 4f, 1))
	{
		return 1;
	}
	if (HAS_BULLET_IMPACTED_IN_AREA(vVar0, TO_FLOAT(uParam2->f_6), 1, 1))
	{
		return 1;
	}
	if (IS_PED_ARMED(uParam0, 2))
	{
		if (IS_PED_SHOOTING(uParam0))
		{
			if (IS_ENTITY_AT_COORD(uParam1, GET_ENTITY_COORDS(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
			{
				if (IS_PED_FACING_PED(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1), uParam0, 120f) && HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam1, uParam0, 17))
				{
					return 1;
				}
			}
		}
		else
		{
			if (IS_PED_IN_ANY_VEHICLE(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1), 0))
			{
				iVar3 = GET_VEHICLE_PED_IS_IN(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1), 0);
			}
			if (IS_PED_PLANTING_BOMB(uParam0) || func_399(iVar3))
			{
				if (IS_ENTITY_AT_COORD(uParam1, GET_ENTITY_COORDS(uParam0, 1), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0))
				{
					if (IS_PED_FACING_PED(GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1), uParam0, 120f) && HAS_ENTITY_CLEAR_LOS_TO_ENTITY(uParam1, uParam0, 17))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (IS_PROJECTILE_IN_AREA((vVar0.x - IntToFloat(uParam2->f_6)), (vVar0.y - IntToFloat(uParam2->f_6)), (vVar0.z - IntToFloat(uParam2->f_6)), (vVar0.x + IntToFloat(uParam2->f_6)), (vVar0.y + IntToFloat(uParam2->f_6)), (vVar0.z + IntToFloat(uParam2->f_6)), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_399(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
		{
			if (GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0) != 0)
			{
				if (GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), &iVar0, 1))
				{
					if (iVar0 == joaat("weapon_stickybomb"))
					{
						if (func_164(PLAYER_PED_ID(), iParam0, 1) < 40f)
						{
							if (GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER_ID(), &uVar1))
							{
								if ((IS_ENTITY_A_VEHICLE(uVar1) && GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uVar1) == iParam0) || (IS_ENTITY_A_PED(uVar1) && GET_PED_INDEX_FROM_ENTITY_INDEX(uVar1) == GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0)))
								{
									if ((IS_PED_ON_FOOT(PLAYER_PED_ID()) && IS_CONTROL_PRESSED(0, 24)) || (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && IS_CONTROL_PRESSED(0, 69)))
									{
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_400(var uParam0, var uParam1)
{
	if (!IS_ENTITY_DEAD(uParam0, 0))
	{
		if (IS_PED_ARMED(PLAYER_PED_ID(), 6))
		{
			if (IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER_ID(), uParam0) || IS_PLAYER_TARGETTING_ENTITY(PLAYER_ID(), uParam0))
			{
				if (IS_PED_FACING_PED(uParam0, PLAYER_PED_ID(), 90f))
				{
					if (func_157(uParam0, 1) < uParam1->f_2)
					{
						if (uParam1->f_1 == 0)
						{
							uParam1->f_1 = GET_GAME_TIMER();
						}
						else if ((GET_GAME_TIMER() - uParam1->f_1) > uParam1->f_3)
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

void func_401()
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	struct<6> Var7;
	
	Var7 = { func_152() };
	if ((((iLocal_933 < 4 && func_157(Local_409.f_3, 1) < 50f) && Local_409.f_410 == 22) && IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0)) && !iLocal_976)
	{
		if (IS_CONTROL_JUST_PRESSED(0, 80))
		{
			if (DOES_CAM_EXIST(Local_409))
			{
				if (!IS_CAM_ACTIVE(Local_409))
				{
					iLocal_1124 = GET_GAME_TIMER();
					SET_CAM_ACTIVE(Local_409, 1);
					RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
				}
			}
		}
	}
	if ((((iLocal_933 < 4 && func_157(Local_409.f_3, 1) < 50f) && Local_409.f_410 == 22) && IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0)) && !iLocal_976)
	{
		if (iLocal_967)
		{
			switch (iLocal_1122)
			{
				case 0:
					iLocal_1123 = GET_GAME_TIMER();
					vVar0 = { 223.3f, -3326.3f, 6.4f };
					vVar3 = { -4.1f, 0f, 78f };
					fVar6 = 24.3f;
					func_402(vVar0, vVar3, fVar6);
					iLocal_1122 = 1;
					break;
				
				case 1:
					if (ARE_STRINGS_EQUAL("txm12_ig1c_3", &Var7))
					{
						iLocal_1123 = GET_GAME_TIMER();
						vVar0 = { 211.1f, -3326.1f, 5.8f };
						vVar3 = { 4.1f, 0f, -81.2f };
						fVar6 = 24.3f;
						func_402(vVar0, vVar3, fVar6);
						iLocal_1122 = 2;
					}
					break;
				
				case 2:
					if ((GET_GAME_TIMER() - iLocal_1123) > 5000)
					{
						iLocal_1123 = GET_GAME_TIMER();
						vVar0 = { 202.0472f, -3314.83f, 5.9369f };
						vVar3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_402(vVar0, vVar3, fVar6);
						iLocal_1122 = 3;
					}
					break;
				
				case 3:
					if (ARE_STRINGS_EQUAL("txm12_deal1_3", &Var7))
					{
						iLocal_1123 = GET_GAME_TIMER();
						vVar0 = { 194.7488f, -3328.101f, 5.9471f };
						vVar3 = { -0.3369f, -0.0169f, -55.7257f };
						fVar6 = 24.5237f;
						func_402(vVar0, vVar3, fVar6);
						iLocal_1122 = 4;
					}
					break;
				
				case 4:
					if (ARE_STRINGS_EQUAL("txm12_deal1_5", &Var7))
					{
						iLocal_1123 = GET_GAME_TIMER();
						vVar0 = { 202.0472f, -3314.83f, 5.9369f };
						vVar3 = { -1.9358f, -0.0169f, 169.6817f };
						fVar6 = 20.9113f;
						func_402(vVar0, vVar3, fVar6);
						iLocal_1122 = 5;
					}
					break;
				
				case 5:
					if (ARE_STRINGS_EQUAL("txm12_deal1_7", &Var7))
					{
						iLocal_1123 = GET_GAME_TIMER();
						vVar0 = { 194.1f, -3324.9f, 6.2f };
						vVar3 = { -4.6f, 0f, -83.1f };
						fVar6 = 29f;
						func_402(vVar0, vVar3, fVar6);
						iLocal_1122 = 6;
					}
					break;
			}
			if (IS_CONTROL_JUST_PRESSED(0, 80) && (GET_GAME_TIMER() - iLocal_1124) > 500)
			{
				if (DOES_CAM_EXIST(Local_409))
				{
					SET_CAM_ACTIVE(Local_409, 0);
					RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			}
		}
	}
	else if (iLocal_967)
	{
		if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
		{
			if (DOES_CAM_EXIST(Local_409))
			{
				if (IS_CAM_ACTIVE(Local_409))
				{
					SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					SET_CAM_ACTIVE(Local_409, 0);
					RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
				}
			}
		}
		if (iLocal_976)
		{
			if (!func_15(&uLocal_1030))
			{
				if (func_148() && IS_CAM_ACTIVE(Local_409))
				{
					if (!iLocal_977)
					{
						_START_SCREEN_EFFECT("CamPushInNeutral", 0, 0);
						PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
						iLocal_977 = 1;
					}
				}
				func_102(&uLocal_1030);
			}
			else if (func_100(&uLocal_1030) > 0.3f)
			{
				if (DOES_CAM_EXIST(Local_409))
				{
					if (IS_CAM_ACTIVE(Local_409))
					{
						SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						SET_CAM_ACTIVE(Local_409, 0);
						RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					}
				}
			}
		}
	}
	else
	{
		SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
}

void func_402(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (!DOES_CAM_EXIST(Local_409))
	{
		func_233(&Local_409, 0f, 0f, 0f, 0f, 0f, 0f, fParam6);
	}
	SET_CAM_COORD(Local_409, vParam0);
	SET_CAM_ROT(Local_409, vParam3, 2);
	SHAKE_CAM(Local_409, "HAND_SHAKE", 0.3f);
}

void func_403(var uParam0)
{
	if (!func_21(uParam0->f_98, 2))
	{
		if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
		{
			if (func_201(uParam0->f_4, uParam0->f_17, 1) < 180f)
			{
				CLEAR_AREA_OF_VEHICLES(uParam0->f_17, 25f, 0, 0, 0, 0, 0, 0);
				func_165(&(uParam0->f_98), 2);
			}
		}
	}
}

void func_404()
{
	if (!iLocal_969)
	{
		func_405(&Local_409);
		iLocal_969 = 1;
	}
	func_427(2);
	if (iLocal_968)
	{
		if (func_9(PLAYER_PED_ID(), Local_409.f_17, 1) > 50f || func_127(&(Local_839.f_3), &(Local_839.f_11), &(Local_881.f_3), &(Local_881.f_11)))
		{
			func_425();
		}
	}
	else
	{
		func_425();
	}
}

void func_405(var uParam0)
{
	func_10(0, uParam0, 1);
	if (uParam0->f_411 != 9)
	{
		func_427(2);
	}
}

int func_406(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		return 1;
	}
	if ((((!func_112() && func_110(uParam0, 3) > 1f) || uParam0->f_415 == 18) || uParam0->f_415 == 14) || uParam0->f_415 == 15)
	{
		if (!IS_ENTITY_DEAD(uParam0->f_3, 0))
		{
			if (IS_VEHICLE_DRIVEABLE(uParam0->f_4, 0))
			{
				if (IS_PED_IN_VEHICLE(uParam0->f_3, uParam0->f_4, 0))
				{
					if (func_60(uParam0) == 0 || func_267(uParam0->f_85, 32))
					{
						if (!IS_VEHICLE_STOPPED(uParam0->f_4))
						{
							func_325(uParam0, 4160, 0);
						}
						else
						{
							func_325(uParam0, 0, 0);
						}
						return 1;
					}
					else
					{
						func_325(uParam0, 0, 0);
						return 1;
					}
				}
				else
				{
					func_325(uParam0, 0, 0);
					return 1;
				}
			}
			else
			{
				func_325(uParam0, 0, 0);
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if ((GET_GAME_TIMER() % 1000) < 50)
	{
	}
	return 0;
}

void func_407(var uParam0)
{
	if (DOES_BLIP_EXIST(uParam0->f_8))
	{
		REMOVE_BLIP(&(uParam0->f_8));
	}
	if (DOES_BLIP_EXIST(uParam0->f_9))
	{
		REMOVE_BLIP(&(uParam0->f_9));
	}
	if (DOES_BLIP_EXIST(uParam0->f_10))
	{
		REMOVE_BLIP(&(uParam0->f_10));
	}
}

int func_408(var uParam0)
{
	if (uParam0->f_109 && uParam0->f_410 < 29)
	{
		return 1;
	}
	return 0;
}

void func_409()
{
	Local_409.f_23 = { 107.3107f, -1124.865f, 28.198f };
	Local_409.f_33 = 88.9745f;
	Local_409.f_26 = { 195.7672f, -2981.732f, 4.8916f };
	Local_409.f_34 = 173.6662f;
	ADD_RELATIONSHIP_GROUP("TAXI_Pursuers", &uLocal_923);
	func_424(1);
	func_413(&Local_409, 3);
	Local_409.f_410 = 0;
	func_412(&Local_409, 3, 6);
	func_410();
}

void func_410()
{
	func_411();
	Local_839 = { 187.5257f, -3320.163f, 4.6276f };
}

void func_411()
{
	Local_839.f_19[0] = joaat("g_m_y_lost_01");
	Local_839.f_19[1] = joaat("s_f_y_hooker_01");
	Local_839.f_32[0] = joaat("gburrito");
	Local_839.f_32[1] = joaat("daemon");
	Local_839.f_32[2] = joaat("hexer");
	Local_839.f_32[3] = joaat("emperor");
	Local_881.f_19[0] = joaat("g_m_y_lost_01");
	Local_881.f_32[0] = joaat("gburrito");
	Local_881.f_32[1] = joaat("hexer");
}

void func_412(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_58 = iParam1;
	uParam0->f_59 = iParam2;
}

void func_413(var uParam0, int iParam1)
{
	func_423(1);
	func_196();
	func_6(&(uParam0->f_244));
	func_422(uParam0);
	uParam0->f_411 = iParam1;
	if (!func_21(Global_106565.f_19091, 4))
	{
		func_165(&(Global_106565.f_19091), 4);
	}
	func_417(uParam0);
	func_415(uParam0);
	SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 32, 0);
	uParam0->f_102 = (func_414(uParam0->f_411) % uParam0->f_101);
	uParam0->f_80 = 0;
	uParam0->f_428 = func_2();
	REQUEST_ADDITIONAL_TEXT("TAXI", 2);
}

int func_414(int iParam0)
{
	return Global_106565.f_19091.f_39[iParam0];
}

void func_415(var uParam0)
{
	switch (func_60(uParam0))
	{
		case 0:
			func_416(uParam0, "EXC", "Txm2", "Txm2aud");
			uParam0->f_101 = 2;
			break;
		
		case 1:
			func_416(uParam0, "TIE", "Txm1", "txm1aud");
			uParam0->f_101 = 1;
			break;
		
		case 2:
			func_416(uParam0, "DED", "Txm3", "Txm3aud");
			uParam0->f_101 = 1;
			break;
		
		case 3:
			func_416(uParam0, "GYB", "Txm12", "Txm12au");
			uParam0->f_101 = 2;
			break;
		
		case 4:
			func_416(uParam0, "TTB", "Txm6", "Txm6aud");
			uParam0->f_101 = 2;
			break;
		
		case 5:
			func_416(uParam0, "CUI", "Txm8", "Txm8aud");
			uParam0->f_101 = 1;
			break;
		
		case 6:
			func_416(uParam0, "GYN", "Txm9", "Txm9aud");
			uParam0->f_101 = 1;
			break;
		
		case 7:
			func_416(uParam0, "TCC", "Txm10", "Txm10au");
			uParam0->f_101 = 2;
			break;
		
		case 8:
			func_416(uParam0, "TFC", "Txm4", "Txm4aud");
			uParam0->f_101 = 1;
			break;
		
		case 9:
			func_416(uParam0, "PRO", "txmP", "TxmPaud");
			uParam0->f_101 = 1;
			break;
	}
}

void func_416(var uParam0, char* sParam1, char* sParam2, char* sParam3)
{
	uParam0->f_122 = sParam1;
	uParam0->f_143 = sParam2;
	uParam0->f_144 = sParam3;
}

void func_417(var uParam0)
{
	int iVar0;
	
	switch (uParam0->f_411)
	{
		case 0:
			func_421(uParam0, 3);
			func_420(uParam0, 14);
			break;
		
		case 1:
			func_421(uParam0, 14);
			func_420(uParam0, 8);
			break;
		
		case 2:
			func_421(uParam0, 8);
			func_420(uParam0, 7);
			break;
		
		case 3:
			func_421(uParam0, 15);
			func_420(uParam0, 6);
			break;
		
		case 4:
			func_421(uParam0, 0);
			func_420(uParam0, 3);
			break;
		
		case 5:
			func_421(uParam0, 6);
			func_420(uParam0, 7);
			break;
		
		case 6:
			func_421(uParam0, 8);
			func_420(uParam0, 15);
			break;
		
		case 7:
			func_421(uParam0, 8);
			func_420(uParam0, 14);
			break;
		
		case 8:
			func_421(uParam0, 7);
			func_420(uParam0, 15);
			break;
		
		case 9:
			func_421(uParam0, GET_RANDOM_INT_IN_RANGE(0, 17));
			iVar0 = func_419((uParam0->f_418.f_2 + GET_RANDOM_INT_IN_RANGE(1, 17)), 0, 16);
			func_420(uParam0, iVar0);
			func_418(uParam0);
			uParam0->f_418.f_7 = 1;
			uParam0->f_418.f_8 = 1;
			break;
	}
}

void func_418(var uParam0)
{
	switch (uParam0->f_418.f_2)
	{
		case 2:
		case 8:
			uParam0->f_418.f_3 = 1;
			break;
		
		case 0:
		case 3:
		case 5:
		case 9:
		case 15:
			uParam0->f_418.f_3 = 2;
			break;
		
		case 4:
		case 10:
			uParam0->f_418.f_3 = 3;
			break;
		
		case 1:
		case 6:
		case 13:
			uParam0->f_418.f_3 = 4;
			break;
		
		case 11:
			uParam0->f_418.f_3 = 5;
			break;
		
		case 12:
		case 14:
			uParam0->f_418.f_3 = 6;
			break;
		
		case 7:
			uParam0->f_418.f_3 = 7;
			break;
	}
}

int func_419(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam1 > iParam2)
	{
		return -1;
	}
	if (iParam0 >= iParam1 && iParam0 <= iParam2)
	{
		return iParam0;
	}
	iVar0 = 0;
	if (iParam0 < iParam1)
	{
		if (iParam0 < 0)
		{
			iVar0 = -iParam0;
		}
	}
	else if (iParam1 < 0)
	{
		iVar0 = -iParam1;
	}
	iParam0 = (iParam0 + iVar0);
	iParam1 = (iParam1 + iVar0);
	iParam2 = (iParam2 + iVar0);
	iVar1 = (iParam2 - iParam1);
	if (iParam0 > iParam2)
	{
		iVar2 = (iParam0 - iParam2);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam1 + iVar3);
	}
	else
	{
		iVar2 = (iParam1 - iParam0);
		iVar3 = (iVar2 % iVar1);
		iParam0 = (iParam2 - iVar3);
	}
	return (iParam0 - iVar0);
}

void func_420(var uParam0, int iParam1)
{
	uParam0->f_418.f_1 = iParam1;
}

void func_421(var uParam0, int iParam1)
{
	uParam0->f_418.f_2 = iParam1;
}

void func_422(var uParam0)
{
	uParam0->f_2 = PLAYER_PED_ID();
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_14 = { func_40() };
	uParam0->f_17 = { func_40() };
	uParam0->f_35 = 0f;
	uParam0->f_76 = 0;
	uParam0->f_49 = 0;
	uParam0->f_109 = 0;
	uParam0->f_36 = 0f;
	uParam0->f_410 = 2;
	uParam0->f_123 = "TRS_FINDING_LOCATION";
	func_109(uParam0, 32, 0);
}

void func_423(bool bParam0)
{
	if (bParam0)
	{
		StringCopy(&Global_105621, GET_THIS_SCRIPT_NAME(), 24);
		Global_105615 = 1;
	}
	else
	{
		StringCopy(&Global_105621, "NULL", 24);
		Global_105615 = 0;
	}
}

void func_424(int iParam0)
{
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, uLocal_923, 1862763509);
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, uLocal_923, -1533126372);
	SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, uLocal_923);
}

void func_425()
{
	func_19(&Local_409);
	SET_WANTED_LEVEL_MULTIPLIER(1f);
	SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(vLocal_984, vLocal_987, 1, 1);
	CLEAR_PED_NON_CREATION_AREA();
	REMOVE_SCENARIO_BLOCKING_AREA(uLocal_947, 0);
	SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_945);
	func_426();
	func_203();
	if (DOES_CAM_EXIST(Local_409))
	{
		DESTROY_CAM(Local_409, 0);
		RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
		SET_CINEMATIC_BUTTON_ACTIVE(1);
	}
	TERMINATE_THIS_THREAD();
}

void func_426()
{
	SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_929);
}

void func_427(int iParam0)
{
	Global_105275.f_22 = iParam0;
}

