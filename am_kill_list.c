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
	var uLocal_60 = 10;
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
	var uLocal_71 = 2;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 8;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 8;
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
	float fLocal_94 = 0f;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	struct<617> Local_98 = { 0, -1, -1, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 782665360, 1, -1, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1275859404, -1860900134, 0, 5, 4, 0, 0, 8, 0, 8, 0, 0, 0, 0, 0, 0, -1, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<12> Local_99 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_100[4] = { 0, 0, 0, 0 };
	struct<18> Local_101[32];
	int iLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104[5] = { 0, 0, 0, 0, 0 };
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	float fLocal_108 = 0f;
	int iLocal_109[4] = { 0, 0, 0, 0 };
	struct<8> Local_110[24];
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114[4] = { 0, 0, 0, 0 };
	int iLocal_115[4] = { 0, 0, 0, 0 };
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	int iLocal_118 = 0;
	struct<42> Local_119[32];
	struct<104> Local_120 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 32, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1 } ;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = -1;
	var uLocal_127 = -1;
	var uLocal_128 = -1;
	var uLocal_129 = -1;
	var uLocal_130 = -1;
	var uLocal_131 = 32;
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
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
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
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	int iLocal_555 = 0;
	int iLocal_556 = 0;
	int iLocal_557 = 0;
	int iLocal_558[4] = { 0, 0, 0, 0 };
	int iLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	int iLocal_562 = 0;
	int iLocal_563 = 0;
	struct<2> Local_564[10];
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	struct<2> Local_575[5];
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	int iLocal_580 = 0;
	vector3 vLocal_581 = { 0f, 0f, 0f };
	int iLocal_582 = 0;
	int iLocal_583 = 0;
	int iLocal_584 = 0;
	int iLocal_585 = 0;
	int iLocal_586 = 0;
	int iLocal_587[24] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_588 = 0;
	int iLocal_589[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_590 = 0;
	var uLocal_591[4] = { 0, 0, 0, 0 };
	var uLocal_592[4] = { 0, 0, 0, 0 };
	struct<21> Local_593 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
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
	fLocal_28 = 0f;
	fLocal_32 = -0.0375f;
	fLocal_33 = 0.17f;
	iLocal_36 = 3;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	fLocal_108 = -100f;
	iLocal_556 = -1;
	iLocal_557 = -1;
	iLocal_584 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_820(PLAYER::PLAYER_ID(), 0, 1))
	{
		func_809(ScriptParam_593);
	}
	else
	{
		func_765();
	}
	while (true)
	{
		func_764();
		if (func_757())
		{
			func_765();
		}
		else if (func_754(19))
		{
			func_765();
		}
		if (func_753())
		{
			func_765();
		}
		func_728();
		switch (func_727(NETWORK::PARTICIPANT_ID_TO_INT()))
		{
			case 0:
				if ((func_726() == 1 && Local_98.f_1 != -1) && Local_98.f_2 != -1)
				{
					func_724();
					func_720(129, Local_98.f_1, Local_98.f_2, 0);
					if (Global_2512808.f_4780 == -1)
					{
						if (!func_719())
						{
							Global_2512808.f_4780 = 0;
						}
						else
						{
							Global_2512808.f_4780 = 1;
						}
					}
					func_718(Local_98.f_30[0 /*3*/]);
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 1;
				}
				else if (func_726() == 4)
				{
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 1:
				if (func_726() == 1)
				{
					func_713();
					func_712();
					func_694();
					func_414();
					func_162();
					func_161();
					func_160();
				}
				else if (func_726() == 4)
				{
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 3;
				}
				break;
			
			case 3:
				func_159(&(Local_98.f_320));
				if (func_158(&(Local_98.f_320)))
				{
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
				}
				break;
			
			case 2:
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 4;
			
			case 4:
				func_765();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			switch (func_726())
			{
				case 0:
					if (func_143())
					{
						if (func_138())
						{
							func_135(func_137(129, Local_98.f_1, Local_98.f_2, 0));
							Local_98 = 1;
						}
					}
					break;
				
				case 1:
					func_126();
					func_32();
					func_23();
					if (func_1())
					{
						Local_98 = 4;
					}
					break;
				
				case 4:
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

int func_2()
{
	int iVar0;
	int iVar1;
	
	if ((MISC::IS_BIT_SET(Local_98.f_3, 0) && MISC::IS_BIT_SET(Local_98.f_3, 1)) && MISC::IS_BIT_SET(Local_98.f_3, 2))
	{
		if (!MISC::IS_BIT_SET(Local_98.f_3, 11))
		{
			return 0;
		}
	}
	else if (MISC::IS_BIT_SET(Local_98.f_3, 6))
	{
		if (!MISC::IS_BIT_SET(Local_98.f_3, 11))
		{
			return 0;
		}
	}
	if (Local_98.f_241 > 0)
	{
		if (Local_98 != 4)
		{
			if (func_22())
			{
				if (Local_98.f_241 == 3)
				{
					if (func_20())
					{
						if (MISC::IS_BIT_SET(Local_98.f_3, 11))
						{
							return 1;
						}
					}
				}
				else if (func_18(&(Local_98.f_322), 3000, 0))
				{
					if (func_20())
					{
						return 1;
					}
				}
			}
		}
		if (Local_98.f_241 < 3)
		{
			iVar0 = 0;
			if (Local_98.f_241 >= 1)
			{
				iVar0 = 1;
				iVar1 = 0;
				while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
				{
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
						if (!func_15(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)), 0))
						{
							if (Local_101[iVar1 /*18*/].f_17 < 2)
							{
								iVar0 = 0;
							}
						}
					}
					iVar1++;
				}
			}
			if (iVar0 == 1)
			{
				if ((!((MISC::IS_BIT_SET(Local_98.f_3, 0) && MISC::IS_BIT_SET(Local_98.f_3, 1)) && MISC::IS_BIT_SET(Local_98.f_3, 2)) && !MISC::IS_BIT_SET(Local_98.f_3, 6)) && !MISC::IS_BIT_SET(Local_98.f_3, 14))
				{
					MISC::SET_BIT(&(Local_98.f_3), 15);
				}
				func_6();
			}
			else if (Local_98.f_241 < 3)
			{
				if (func_3())
				{
					MISC::SET_BIT(&(Local_98.f_3), 16);
					MISC::SET_BIT(&(Local_98.f_3), 15);
					func_6();
				}
			}
		}
	}
	return 0;
}

int func_3()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
		{
			if (!func_4(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 1, 0, 0, 0, 0, 1, 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_4(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_5(iParam0, (iVar0 - 1), bParam6, iParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (PED::IS_PED_A_PLAYER(iVar2))
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
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
					else if (iParam1 == 0)
					{
						return 0;
					}
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_5(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, iParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, iParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, 451360105) == 1 || BRAIN::GET_SCRIPT_TASK_STATUS(iVar0, -828834893) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, 0), ENTITY::GET_ENTITY_COORDS(iVar0, 0)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_6()
{
	if (Local_98.f_241 != 3)
	{
		func_8();
		func_7(&(Local_98.f_324), 0, 0);
		Local_98.f_241 = 3;
	}
}

void func_7(var uParam0, bool bParam1, bool bParam2)
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

void func_8()
{
	if (!func_14())
	{
		return;
	}
	if (!MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == Global_1312576.f_9)
	{
		return;
	}
	func_9();
}

void func_9()
{
	func_11();
	func_10(0);
}

void func_10(bool bParam0)
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

void func_11()
{
	if (!func_13())
	{
	}
	if (func_14())
	{
		HUD::BEGIN_TEXT_COMMAND_CLEAR_PRINT(&(Global_1312576.f_12));
		func_12();
		HUD::END_TEXT_COMMAND_CLEAR_PRINT();
	}
}

void func_12()
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

int func_13()
{
	if (!func_14())
	{
		return 0;
	}
	HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(&(Global_1312576.f_12));
	func_12();
	return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}

int func_14()
{
	if (Global_1312576 == 20)
	{
		return 0;
	}
	return 1;
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
		bVar0 = Global_1595693[iParam0 /*680*/].f_211 == 8;
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

int func_18(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_19(uParam0, bParam2, 0);
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

void func_19(var uParam0, bool bParam1, bool bParam2)
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

int func_20()
{
	int iVar0;
	
	if (!func_21(&(Local_98.f_328)))
	{
		func_19(&(Local_98.f_328), 0, 0);
	}
	else if (func_18(&(Local_98.f_328), 20000, 0))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar0]))
		{
			if (Local_98.f_85[iVar0] < 4)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

bool func_21(var uParam0)
{
	return uParam0->f_1;
}

int func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0))
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_23()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar1]))
		{
			if (!func_31(Local_98.f_48[iVar1]))
			{
				switch (Local_98.f_85[iVar1])
				{
					case 0:
						if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iVar1]), 0))
						{
							Local_98.f_85[iVar1] = 1;
						}
						else if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iVar1]), 0) && func_30(iVar1))
						{
							Local_98.f_85[iVar1] = 1;
						}
						break;
					
					case 1:
						if (Local_98.f_241 == 1)
						{
							if (!func_22())
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iVar1]), 0))
								{
									iVar4 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_98.f_48[iVar1]), 0);
									if (func_29(iVar4, 250f))
									{
										Local_98.f_85[iVar1] = 2;
									}
									else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar4)))
									{
										if ((iVar1 % 4) == 0)
										{
											iVar0 = (iVar1 / 4);
											if (iVar0 < 5)
											{
												if (Local_98.f_110[iVar0] == -1 || !func_28(iVar1))
												{
													iVar2 = func_27();
													if (iVar2 != func_26())
													{
														iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
														if (!PED::IS_PED_INJURED(iVar3))
														{
															if (func_25(iVar4, iVar3, 1) > 250f)
															{
																Local_98.f_110[iVar0] = iVar2;
															}
														}
													}
												}
											}
										}
									}
								}
								else
								{
									Local_98.f_85[iVar1] = 2;
								}
							}
							else
							{
								Local_98.f_85[iVar1] = 3;
							}
						}
						else
						{
							Local_98.f_85[iVar1] = 3;
						}
						break;
					
					case 2:
						if (Local_98.f_241 == 1)
						{
							if (func_22())
							{
								Local_98.f_85[iVar1] = 3;
							}
							else if (MISC::IS_BIT_SET(Local_98.f_3, 6))
							{
								Local_98.f_85[iVar1] = 3;
							}
							else if (MISC::IS_BIT_SET(Local_98.f_464, iVar1))
							{
								Local_98.f_85[iVar1] = 1;
								MISC::CLEAR_BIT(&(Local_98.f_464), iVar1);
							}
						}
						else
						{
							Local_98.f_85[iVar1] = 3;
						}
						break;
					
					case 3:
						if (PED::IS_PED_FLEEING(NETWORK::NET_TO_PED(Local_98.f_48[iVar1])))
						{
							func_24(&(Local_98.f_48[iVar1]));
							Local_98.f_85[iVar1] = 4;
						}
						break;
					}
				}
		}
		iVar1++;
	}
}

void func_24(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*uParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*uParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

float func_25(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 1) };
	}
	else
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

int func_26()
{
	return -1;
}

int func_27()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_26();
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (iVar0 == func_26())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (Local_101[iVar1 /*18*/].f_1 != 0)
				{
					if (Local_101[iVar1 /*18*/].f_17 == 1)
					{
						iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_28(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if ((iParam0 % 4) == 0)
	{
		iVar0 = (iParam0 / 4);
		if (iVar0 < 5)
		{
			if (Local_98.f_110[iVar0] != -1)
			{
				iVar3 = Local_98.f_110[iVar0];
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (func_820(iVar1, 1, 1))
					{
						if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
						{
							iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
							iVar3 = iVar2;
							if (Local_101[iVar3 /*18*/].f_17 != 1)
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
				else
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_29(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_101[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_101[iVar0 /*18*/].f_17 == 1)
				{
					iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
					if (!PED::IS_PED_INJURED(iVar2))
					{
						if (func_25(iParam0, iVar2, 1) < fParam1)
						{
							return 1;
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_30(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iParam0]), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_98.f_48[iParam0]), 0);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
	{
		return 0;
	}
	return 1;
}

int func_31(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

void func_32()
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	if (Local_98.f_463 > 0)
	{
		if (Local_98.f_28 != Local_98.f_463)
		{
			Local_98.f_28 = Local_98.f_463;
		}
	}
	switch (Local_98.f_241)
	{
		case 0:
			iVar1 = 0;
			iVar0 = 0;
			while (iVar0 < Local_98.f_28)
			{
				if (Local_98.f_17[iVar0] == func_26())
				{
				}
				else
				{
					iVar1++;
					if (MISC::IS_BIT_SET(Local_98.f_3, 4))
					{
					}
				}
				iVar0++;
			}
			func_123();
			func_122();
			if (MISC::IS_BIT_SET(Local_98.f_3, 4))
			{
				Local_98.f_463 = iVar1;
			}
			if (func_120())
			{
				func_113();
				Local_98.f_241 = 1;
			}
			else if (MISC::IS_BIT_SET(Local_98.f_3, 4) && func_110() > 1)
			{
				func_109();
				func_113();
				Local_98.f_241 = 1;
			}
			if (!func_719())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[0]))
				{
					if (!func_107(Local_98.f_7[0]))
					{
						Var2.f_2 = 333980997;
						func_105(Var2, func_106(NETWORK::NET_TO_VEH(Local_98.f_7[0]), 1, 0));
						Local_98.f_241 = 2;
					}
				}
			}
			if (Local_98.f_241 == 0)
			{
				if (!func_21(&(Local_98.f_330)))
				{
					if (!func_21(&(Local_98.f_326)))
					{
						func_19(&(Local_98.f_330), 0, 0);
					}
				}
				else if (func_21(&(Local_98.f_326)))
				{
					func_104(&(Local_98.f_330));
				}
				else if (func_18(&(Local_98.f_330), func_103(), 0))
				{
					Var2.f_2 = 333980997;
					func_105(Var2, func_102(1));
					MISC::SET_BIT(&(Local_98.f_3), 12);
					func_6();
				}
				if (MISC::IS_BIT_SET(Local_98.f_3, 14))
				{
					func_6();
				}
			}
			break;
		
		case 1:
			func_35();
			func_33();
			func_109();
			if (MISC::IS_BIT_SET(Local_98.f_3, 6))
			{
				Local_98.f_241 = 2;
			}
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
	}
}

void func_33()
{
	if (!MISC::IS_BIT_SET(Local_98.f_3, 19))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(Local_98.f_3, 6))
	{
		if (!func_21(&(Local_98.f_332)))
		{
			func_19(&(Local_98.f_332), 0, 0);
			MISC::SET_BIT(&(Local_98.f_3), 7);
		}
		else if (func_18(&(Local_98.f_332), func_34(), 0))
		{
			MISC::SET_BIT(&(Local_98.f_3), 6);
		}
	}
}

int func_34()
{
	if (func_719())
	{
		return Global_262145.f_10450;
	}
	return Global_262145.f_10427;
}

void func_35()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar2 = true;
	bVar3 = false;
	if (Local_98.f_278 > 0)
	{
		if (Local_98.f_279 >= Local_98.f_278)
		{
			if (Local_98.f_254 >= Local_98.f_255)
			{
				MISC::SET_BIT(&(Local_98.f_3), 0);
				MISC::SET_BIT(&(Local_98.f_3), 1);
				MISC::SET_BIT(&(Local_98.f_3), 2);
				return;
			}
		}
	}
	iVar5 = 0;
	if (bVar2)
	{
		if (Local_98.f_278 > 0)
		{
			if (Local_98.f_279 >= Local_98.f_278)
			{
				if (Local_98.f_256[0] >= 0)
				{
					iVar5 = (iVar5 + Local_98.f_256[0]);
				}
				if (Local_98.f_256[1] >= 0)
				{
					iVar5 = (iVar5 + Local_98.f_256[1]);
				}
				if (Local_98.f_256[2] >= 0)
				{
					iVar5 = (iVar5 + Local_98.f_256[2]);
				}
				if (Local_98.f_256[3] >= 0)
				{
					iVar5 = (iVar5 + Local_98.f_256[3]);
				}
				if (iVar5 >= Local_98.f_255)
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 24)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar4]))
						{
							if (!func_31(Local_98.f_48[iVar4]))
							{
								bVar3 = true;
							}
						}
						iVar4++;
					}
					if (!bVar3)
					{
						MISC::SET_BIT(&(Local_98.f_3), 0);
						MISC::SET_BIT(&(Local_98.f_3), 1);
						MISC::SET_BIT(&(Local_98.f_3), 2);
						return;
					}
				}
				bVar3 = false;
				iVar4 = 0;
				iVar4 = 0;
				while (iVar4 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar4]))
					{
						if (!func_31(Local_98.f_48[iVar4]))
						{
							bVar3 = true;
						}
					}
					iVar4++;
				}
				if (!bVar3)
				{
					if (!func_21(&(Local_98.f_347)))
					{
						func_19(&(Local_98.f_347), 0, 0);
					}
					else if (func_18(&(Local_98.f_347), 3000, 0))
					{
						MISC::SET_BIT(&(Local_98.f_3), 0);
						MISC::SET_BIT(&(Local_98.f_3), 1);
						MISC::SET_BIT(&(Local_98.f_3), 2);
						return;
					}
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(Local_98.f_3, 0) || !MISC::IS_BIT_SET(Local_98.f_3, 1))
	{
		if (Local_98.f_249 >= func_101())
		{
			MISC::SET_BIT(&(Local_98.f_3), 0);
			MISC::SET_BIT(&(Local_98.f_3), 1);
		}
		iVar0 = 0;
		while (iVar0 < Local_98.f_242)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_73[iVar0]))
			{
				if (func_100(iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_98.f_245, iVar0))
					{
						if ((Local_98.f_27 != joaat("hydra") && !func_4(NETWORK::NET_TO_VEH(Local_98.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0)) || Local_98.f_27 == joaat("hydra"))
						{
							MISC::CLEAR_BIT(&(Local_98.f_3), 0);
							if (func_21(&(Local_575[iVar0 /*2*/])))
							{
								func_104(&(Local_575[iVar0 /*2*/]));
							}
						}
						else if (func_4(NETWORK::NET_TO_VEH(Local_98.f_73[iVar0]), 1, 0, 0, 0, 0, 1, 0) && ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iVar0])) == joaat("savage"))
						{
							if (MISC::IS_BIT_SET(Local_98.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_98.f_3), 0);
							}
							if (!MISC::IS_BIT_SET(Local_98.f_3, 18))
							{
								func_99(func_102(1), iVar0);
								MISC::SET_BIT(&(Local_98.f_3), 18);
							}
						}
						else if (func_98(iVar0) || !func_719())
						{
							if (MISC::IS_BIT_SET(Local_98.f_3, 0))
							{
								MISC::CLEAR_BIT(&(Local_98.f_3), 0);
							}
							if (!MISC::IS_BIT_SET(Local_98.f_303, iVar0))
							{
								func_97(func_102(1), iVar0);
								MISC::SET_BIT(&(Local_98.f_303), iVar0);
							}
						}
						else
						{
							func_24(&(Local_98.f_73[iVar0]));
							if (!MISC::IS_BIT_SET(Local_98.f_253, iVar0))
							{
								Local_98.f_251 = (Local_98.f_251 - 1);
								if (func_96() > 1)
								{
									if (Local_98.f_252 > 0)
									{
										Local_98.f_302++;
										func_95(iVar0, func_102(1));
									}
								}
								MISC::SET_BIT(&(Local_98.f_253), iVar0);
							}
							func_104(&(Local_575[iVar0 /*2*/]));
						}
					}
				}
				else if (func_94(iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_98.f_253, iVar0))
					{
						Local_98.f_251 = (Local_98.f_251 - 1);
						if (func_96() > 1)
						{
							if (Local_98.f_252 > 0)
							{
								Local_98.f_302++;
								func_95(iVar0, func_102(1));
							}
						}
						if (Local_98.f_27 == joaat("hydra"))
						{
							Local_98.f_254++;
						}
						MISC::SET_BIT(&(Local_98.f_253), iVar0);
					}
					if (func_21(&(Local_98.f_336[iVar0 /*2*/])))
					{
						func_104(&(Local_98.f_336[iVar0 /*2*/]));
					}
					func_24(&(Local_98.f_73[iVar0]));
				}
				else
				{
					if (MISC::IS_BIT_SET(Local_98.f_3, 0))
					{
						MISC::CLEAR_BIT(&(Local_98.f_3), 0);
					}
					if (!MISC::IS_BIT_SET(Local_98.f_271, iVar0))
					{
						if (!func_21(&(Local_98.f_336[iVar0 /*2*/])))
						{
							func_19(&(Local_98.f_336[iVar0 /*2*/]), 0, 0);
						}
						else if (func_18(&(Local_98.f_336[iVar0 /*2*/]), 5000, 0))
						{
							MISC::SET_BIT(&(Local_98.f_271), iVar0);
						}
						else if (func_18(&(Local_98.f_336[iVar0 /*2*/]), 3000, 0))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iVar0])) == joaat("savage"))
							{
								if (!MISC::IS_BIT_SET(Local_98.f_3, 18))
								{
									func_99(func_102(1), iVar0);
									MISC::SET_BIT(&(Local_98.f_3), 18);
								}
							}
							else if (func_98(iVar0) || !func_719())
							{
								if (!MISC::IS_BIT_SET(Local_98.f_303, iVar0))
								{
									func_97(func_102(1), iVar0);
									MISC::SET_BIT(&(Local_98.f_303), iVar0);
								}
							}
						}
					}
				}
			}
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 < Local_98.f_116)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_48[(iVar0 * 4 + iVar1)]))
				{
					iVar6 = (iVar0 * 4 + iVar1);
					if (!func_31(Local_98.f_48[(iVar0 * 4 + iVar1)]))
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[(iVar0 * 4 + iVar1)]), 0))
						{
							if (!func_92((iVar0 * 4 + iVar1)))
							{
								MISC::CLEAR_BIT(&(Local_98.f_3), 0);
							}
							else if (func_91(iVar6))
							{
								if (!func_18(&(Local_98.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
								{
								}
								if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_98.f_48[(iVar0 * 4 + iVar1)])))
								{
									func_90(&(Local_110[(iVar0 * 4 + iVar1) /*8*/]));
								}
								func_24(&(Local_98.f_48[(iVar0 * 4 + iVar1)]));
								if (MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar6)], func_88(iVar6)))
								{
									if (Local_98.f_85[(iVar0 * 4 + iVar1)] > 0)
									{
										func_87((iVar0 * 4 + iVar1), func_102(1));
										Local_98.f_254++;
									}
								}
								Local_98.f_85[(iVar0 * 4 + iVar1)] = 0;
								if (func_21(&(Local_98.f_364[iVar6 /*2*/])))
								{
									func_104(&(Local_98.f_364[iVar6 /*2*/]));
								}
								if (MISC::IS_BIT_SET(Local_98.f_275[func_89(iVar6)], func_88(iVar6)))
								{
									MISC::CLEAR_BIT(&(Local_98.f_275[func_89(iVar6)]), func_88(iVar6));
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar6)], func_88(iVar6)))
								{
									if (!func_21(&(Local_98.f_364[iVar6 /*2*/])))
									{
										func_19(&(Local_98.f_364[iVar6 /*2*/]), 0, 0);
									}
									else if (func_18(&(Local_98.f_364[iVar6 /*2*/]), 7000, 0))
									{
										MISC::SET_BIT(&(Local_98.f_272[func_89(iVar6)]), func_88(iVar6));
										func_104(&(Local_98.f_364[iVar6 /*2*/]));
									}
								}
								if (!MISC::IS_BIT_SET(Local_98.f_275[func_89(iVar6)], func_88(iVar6)))
								{
									MISC::SET_BIT(&(Local_98.f_275[func_89(iVar6)]), func_88(iVar6));
								}
							}
						}
					}
					else if (MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar6)], func_88(iVar6)) || Local_98.f_27 == joaat("hydra"))
					{
						if (!func_18(&(Local_98.f_414[(iVar0 * 4 + iVar1) /*2*/]), 5000, 0))
						{
						}
						func_24(&(Local_98.f_48[(iVar0 * 4 + iVar1)]));
						if (MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar6)], func_88(iVar6)))
						{
							if (Local_98.f_85[(iVar0 * 4 + iVar1)] > 0)
							{
								Local_98.f_254++;
								func_87((iVar0 * 4 + iVar1), func_102(1));
							}
						}
						Local_98.f_85[(iVar0 * 4 + iVar1)] = 0;
						if (MISC::IS_BIT_SET(Local_98.f_275[func_89(iVar6)], func_88(iVar6)))
						{
							MISC::CLEAR_BIT(&(Local_98.f_275[func_89(iVar6)]), func_88(iVar6));
						}
					}
					else
					{
						if (!MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar6)], func_88(iVar6)))
						{
							if (!func_21(&(Local_98.f_364[iVar6 /*2*/])))
							{
								func_19(&(Local_98.f_364[iVar6 /*2*/]), 0, 0);
							}
							else if (func_18(&(Local_98.f_364[iVar6 /*2*/]), 7000, 0))
							{
								MISC::SET_BIT(&(Local_98.f_272[func_89(iVar6)]), func_88(iVar6));
								func_104(&(Local_98.f_364[iVar6 /*2*/]));
							}
						}
						if (!MISC::IS_BIT_SET(Local_98.f_275[func_89(iVar6)], func_88(iVar6)))
						{
							MISC::SET_BIT(&(Local_98.f_275[func_89(iVar6)]), func_88(iVar6));
						}
					}
				}
				iVar1++;
			}
			if (Local_98.f_249 < func_101())
			{
				if (func_73(iVar0))
				{
				}
				MISC::CLEAR_BIT(&(Local_98.f_3), 0);
			}
			iVar0++;
		}
	}
	if (!MISC::IS_BIT_SET(Local_98.f_3, 2))
	{
		if (Local_98.f_247 >= Global_262145.f_9551)
		{
			MISC::SET_BIT(&(Local_98.f_3), 2);
		}
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Local_98.f_243)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_48[(20 + iVar1)]))
			{
				iVar7 = (20 + iVar1);
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iVar1)]), 0))
				{
					MISC::CLEAR_BIT(&(Local_98.f_3), 2);
				}
				else if (MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar7)], func_88(iVar7)))
				{
					if (!func_18(&(Local_98.f_414[(20 + iVar1) /*2*/]), 5000, 0))
					{
					}
					if (func_21(&(Local_98.f_364[iVar7 /*2*/])))
					{
						func_104(&(Local_98.f_364[iVar7 /*2*/]));
					}
					func_24(&(Local_98.f_48[(20 + iVar1)]));
					if (Local_98.f_85[(20 + iVar1)] > 0)
					{
						Local_98.f_254++;
						if (func_96() > 1)
						{
							if (Local_98.f_317 > 0)
							{
								Local_98.f_316++;
							}
						}
						func_87((20 + iVar1), func_102(1));
					}
					Local_98.f_85[(20 + iVar1)] = 0;
					if (MISC::IS_BIT_SET(Local_98.f_275[func_89(iVar7)], func_88(iVar7)))
					{
						MISC::CLEAR_BIT(&(Local_98.f_275[func_89(iVar7)]), func_88(iVar7));
					}
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar7)], func_88(iVar7)))
					{
						if (!func_21(&(Local_98.f_364[iVar7 /*2*/])))
						{
							func_19(&(Local_98.f_364[iVar7 /*2*/]), 0, 0);
						}
						else if (func_18(&(Local_98.f_364[iVar7 /*2*/]), 7000, 0))
						{
							MISC::SET_BIT(&(Local_98.f_272[func_89(iVar7)]), func_88(iVar7));
							func_104(&(Local_98.f_364[iVar7 /*2*/]));
						}
					}
					if (!MISC::IS_BIT_SET(Local_98.f_275[func_89(iVar7)], func_88(iVar7)))
					{
						MISC::SET_BIT(&(Local_98.f_275[func_89(iVar7)]), func_88(iVar7));
					}
				}
			}
			if (Local_98.f_247 < func_72())
			{
				if (func_51(iVar1))
				{
				}
				MISC::CLEAR_BIT(&(Local_98.f_3), 2);
			}
			iVar1++;
		}
	}
	func_36();
}

void func_36()
{
	int iVar0;
	int iVar1;
	
	if (func_96() == 1)
	{
		return;
	}
	if (func_96() == 2)
	{
		if (Local_98.f_252 > 0)
		{
			if (Local_98.f_302 > 0)
			{
				if (Local_98.f_302 >= (Local_98.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							iVar0 = Local_98.f_279 + 1;
							if (iVar0 < 10)
							{
								iVar1 = Local_98.f_280[iVar0];
								if (iVar1 != 5)
								{
									func_47();
									Local_98.f_279++;
									func_40();
								}
								else if (Local_98.f_318 >= func_39())
								{
									func_47();
									Local_98.f_279++;
									func_40();
								}
							}
						}
					}
				}
			}
		}
	}
	else if (func_96() == 3)
	{
		if (Local_98.f_317 > 0)
		{
			if (Local_98.f_316 > 0)
			{
				if (Local_98.f_316 >= Local_98.f_317)
				{
					if (Local_98.f_317 >= func_38())
					{
						func_47();
						Local_98.f_279++;
						func_40();
					}
				}
			}
		}
	}
	else if (func_96() == 4)
	{
		if (Local_98.f_316 > 0)
		{
			if (Local_98.f_302 > 0)
			{
				if (Local_98.f_317 > 0)
				{
					if (Local_98.f_316 >= (Local_98.f_317 - 2))
					{
						if (Local_98.f_252 > 0)
						{
							if (Local_98.f_302 >= (Local_98.f_252 - 2))
							{
								if (func_50() <= func_49())
								{
									if (func_48() <= func_37())
									{
										iVar0 = Local_98.f_279 + 1;
										if (iVar0 < 10)
										{
											iVar1 = Local_98.f_280[iVar0];
											if (iVar1 != 5)
											{
												func_47();
												Local_98.f_279++;
												func_40();
											}
											else if (Local_98.f_318 >= func_39())
											{
												func_47();
												Local_98.f_279++;
												func_40();
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
	}
	else if (func_96() == 5)
	{
		if (Local_98.f_252 > 0)
		{
			if (Local_98.f_302 > 0)
			{
				if (Local_98.f_302 >= (Local_98.f_252 - 1))
				{
					if (func_50() <= func_49())
					{
						if (func_48() == 0)
						{
							func_47();
							Local_98.f_279++;
							func_40();
						}
					}
				}
			}
		}
	}
}

int func_37()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_98.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_98.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_96() == 4)
				{
					return 2;
				}
				else if (func_96() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_38()
{
	return Local_98.f_305[Local_98.f_279];
}

int func_39()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < Local_98.f_278)
	{
		iVar0 = (iVar0 + Local_98.f_305[iVar1]);
		iVar1++;
	}
	return iVar0;
}

void func_40()
{
	int iVar0;
	
	if (Local_98.f_29 == -1)
	{
		iVar0 = func_46(Local_98.f_27);
		Local_98.f_29 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0);
		if (func_719())
		{
			if (Local_98.f_27 == joaat("hydra"))
			{
				if (Local_98.f_29 == 2)
				{
					Local_98.f_29 = 4;
				}
			}
			else if (Local_98.f_27 == joaat("savage"))
			{
				if (Local_98.f_29 == 0)
				{
					Local_98.f_29 = 1;
				}
				else if (Local_98.f_29 == 1)
				{
					Local_98.f_29 = 2;
				}
				else if (Local_98.f_29 == 2)
				{
					Local_98.f_29 = 3;
				}
			}
			else if (Local_98.f_27 == joaat("valkyrie"))
			{
				if (Local_98.f_29 == 2)
				{
					Local_98.f_29 = 3;
				}
				else if (Local_98.f_29 == 3)
				{
					Local_98.f_29 = 4;
				}
			}
			else if (Local_98.f_27 == joaat("buzzard"))
			{
				if (Local_98.f_29 == 0)
				{
					Local_98.f_29 = 1;
				}
				else if (Local_98.f_29 == 1)
				{
					Local_98.f_29 = 2;
				}
				else if (Local_98.f_29 == 2)
				{
					Local_98.f_29 = 3;
				}
				else if (Local_98.f_29 == 3)
				{
					Local_98.f_29 = 4;
				}
			}
		}
		else if (Local_98.f_27 == joaat("savage"))
		{
			if (Local_98.f_29 == 0)
			{
				Local_98.f_29 = 1;
			}
			else if (Local_98.f_29 == 1)
			{
				Local_98.f_29 = 2;
			}
			else if (Local_98.f_29 == 2)
			{
				Local_98.f_29 = 3;
			}
		}
	}
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
			Local_98.f_280[0] = 4;
			Local_98.f_291[0] = func_45(4);
			Local_98.f_305[0] = func_44(4);
			Local_98.f_280[1] = 4;
			Local_98.f_291[1] = func_45(4);
			Local_98.f_305[1] = func_44(4);
			Local_98.f_280[2] = 4;
			Local_98.f_291[2] = func_45(4);
			Local_98.f_305[2] = func_44(4);
			if (Local_98.f_12 <= 2 || !func_719())
			{
				Local_98.f_278 = 3;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_45(4);
				Local_98.f_305[3] = func_44(4);
				Local_98.f_278 = 4;
			}
			else
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_45(4);
				Local_98.f_305[3] = func_44(4);
				Local_98.f_280[4] = 4;
				Local_98.f_291[4] = func_45(4);
				Local_98.f_305[4] = func_44(4);
				Local_98.f_278 = 5;
			}
			Local_98.f_255 = func_41();
			if (!func_719())
			{
				Local_98.f_1 = 0;
			}
			else
			{
				Local_98.f_1 = 5;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					Local_98.f_30[0 /*3*/] = { 1016.734f, 2360.83f, 50.4559f };
					Local_98.f_43[0] = 269.414f;
					Local_98.f_30[1 /*3*/] = { 1002.526f, 2390.64f, 50.5438f };
					Local_98.f_43[1] = 3.5491f;
					Local_98.f_30[2 /*3*/] = { 986.0139f, 2301.592f, 48.8235f };
					Local_98.f_43[2] = 54.4509f;
					Local_98.f_30[3 /*3*/] = { 977.1004f, 2371.714f, 51.0115f };
					Local_98.f_43[3] = 178.1948f;
					Local_98.f_159[0 /*3*/] = { 1028.325f, 2436.455f, 44.2365f };
					Local_98.f_175[0] = 270.8322f;
					Local_98.f_159[1 /*3*/] = { 1166.498f, 2403.021f, 56.662f };
					Local_98.f_175[1] = 177.3506f;
					Local_98.f_159[2 /*3*/] = { 892.8997f, 2465.881f, 49.7859f };
					Local_98.f_175[2] = 318.1089f;
					Local_98.f_159[3 /*3*/] = { 1078.988f, 2246.879f, 43.7942f };
					Local_98.f_175[3] = 272.0801f;
					Local_98.f_159[4 /*3*/] = { 1016.784f, 2259.447f, 43.8512f };
					Local_98.f_175[4] = 104.0591f;
					Local_98.f_117[0 /*3*/] = { 1042.504f, 2280.497f, 48.6315f };
					Local_98.f_148[0] = 296.4225f;
					Local_98.f_117[1 /*3*/] = { 991.9136f, 2278.353f, 48.1838f };
					Local_98.f_148[1] = 164.9695f;
					Local_98.f_117[2 /*3*/] = { 1029.763f, 2447.042f, 44.5979f };
					Local_98.f_148[2] = 136.0596f;
					Local_98.f_117[3 /*3*/] = { 971.0186f, 2422.765f, 50.6913f };
					Local_98.f_148[3] = 116.379f;
					Local_98.f_117[4 /*3*/] = { 1017.264f, 2432.009f, 45.2054f };
					Local_98.f_148[4] = 86.6586f;
					Local_98.f_117[5 /*3*/] = { 1072.751f, 2237.599f, 43.3802f };
					Local_98.f_148[5] = 74.6822f;
					Local_98.f_117[6 /*3*/] = { 944.4364f, 2407.392f, 50.0925f };
					Local_98.f_148[6] = 206.8863f;
					Local_98.f_117[7 /*3*/] = { 1059.804f, 2280.784f, 48.5613f };
					Local_98.f_148[7] = 267.8581f;
					Local_98.f_117[8 /*3*/] = { 1004.272f, 2372.344f, 54.5719f };
					Local_98.f_148[8] = 267.5856f;
					Local_98.f_117[9 /*3*/] = { 972.3055f, 2235.821f, 53.1094f };
					Local_98.f_148[9] = 325.0964f;
					break;
				
				case 1:
					Local_98.f_30[0 /*3*/] = { 1733.134f, 3302.545f, 40.2235f };
					Local_98.f_43[0] = 194.8062f;
					Local_98.f_30[1 /*3*/] = { 1761.281f, 3309.879f, 40.1489f };
					Local_98.f_43[1] = 238.9372f;
					Local_98.f_30[2 /*3*/] = { 1755.753f, 3236.49f, 41.0341f };
					Local_98.f_43[2] = 16.3071f;
					Local_98.f_30[3 /*3*/] = { 1676.76f, 3279.734f, 39.8901f };
					Local_98.f_43[3] = 209.9883f;
					Local_98.f_117[0 /*3*/] = { 1758.449f, 3309.247f, 40.1417f };
					Local_98.f_148[0] = 221.3913f;
					Local_98.f_117[1 /*3*/] = { 1746.445f, 3323.75f, 40.1528f };
					Local_98.f_148[1] = 246.3415f;
					Local_98.f_117[2 /*3*/] = { 1775.057f, 3332.943f, 40.3398f };
					Local_98.f_148[2] = 213.4087f;
					Local_98.f_117[3 /*3*/] = { 1713.24f, 3302.458f, 40.1851f };
					Local_98.f_148[3] = 100.5405f;
					Local_98.f_117[4 /*3*/] = { 1693.817f, 3293.163f, 40.1465f };
					Local_98.f_148[4] = 289.6017f;
					Local_98.f_117[5 /*3*/] = { 1697.449f, 3176.312f, 44.0261f };
					Local_98.f_148[5] = 285.6456f;
					Local_98.f_117[6 /*3*/] = { 1710.565f, 3180.909f, 43.2884f };
					Local_98.f_148[6] = 310.9245f;
					Local_98.f_117[7 /*3*/] = { 1627.436f, 3198.51f, 39.9059f };
					Local_98.f_148[7] = 46.7117f;
					Local_98.f_117[8 /*3*/] = { 1788.401f, 3208.964f, 43.0201f };
					Local_98.f_148[8] = 35.9192f;
					Local_98.f_117[9 /*3*/] = { 1698.308f, 3289.254f, 47.8594f };
					Local_98.f_148[9] = 207.53f;
					Local_98.f_159[0 /*3*/] = { 1669.932f, 3132.549f, 42.2874f };
					Local_98.f_175[0] = 286.6127f;
					Local_98.f_159[1 /*3*/] = { 1943.321f, 3263.146f, 44.7265f };
					Local_98.f_175[1] = 124.1428f;
					Local_98.f_159[2 /*3*/] = { 1151.224f, 3172.348f, 40.6704f };
					Local_98.f_175[2] = 275.0147f;
					Local_98.f_159[3 /*3*/] = { 1134.716f, 3169.23f, 40.6443f };
					Local_98.f_175[3] = 287.91f;
					Local_98.f_159[4 /*3*/] = { 1311.352f, 2963.962f, 40.0443f };
					Local_98.f_175[4] = 270.287f;
					break;
				
				case 2:
					Local_98.f_30[0 /*3*/] = { 2703.281f, 1576.7f, 23.527f };
					Local_98.f_43[0] = 172.439f;
					Local_98.f_30[1 /*3*/] = { 2702.781f, 1512.725f, 23.5199f };
					Local_98.f_43[1] = 53.9805f;
					Local_98.f_30[2 /*3*/] = { 2678.432f, 1518.734f, 23.5295f };
					Local_98.f_43[2] = 303.2142f;
					Local_98.f_30[3 /*3*/] = { 2677.509f, 1566.525f, 23.501f };
					Local_98.f_43[3] = 218.5974f;
					Local_98.f_117[0 /*3*/] = { 2621.796f, 1695.869f, 26.5983f };
					Local_98.f_148[0] = 264.5842f;
					Local_98.f_117[1 /*3*/] = { 2746.846f, 1567.683f, 23.501f };
					Local_98.f_148[1] = 133.7932f;
					Local_98.f_117[2 /*3*/] = { 2664.273f, 1599.201f, 23.7604f };
					Local_98.f_148[2] = 205.1215f;
					Local_98.f_117[3 /*3*/] = { 2757.255f, 1576.939f, 23.501f };
					Local_98.f_148[3] = 66.1065f;
					Local_98.f_117[4 /*3*/] = { 2714.176f, 1480.445f, 23.5007f };
					Local_98.f_148[4] = 7.8064f;
					Local_98.f_117[5 /*3*/] = { 2713.364f, 1450.272f, 23.6191f };
					Local_98.f_148[5] = 358.7563f;
					Local_98.f_117[6 /*3*/] = { 2739.862f, 1463.719f, 23.5015f };
					Local_98.f_148[6] = 142.1748f;
					Local_98.f_117[7 /*3*/] = { 2676.403f, 1589.224f, 26.2548f };
					Local_98.f_148[7] = 247.816f;
					Local_98.f_117[8 /*3*/] = { 2703.085f, 1685.568f, 23.4887f };
					Local_98.f_148[8] = 124.4666f;
					Local_98.f_117[9 /*3*/] = { 2665.022f, 1409.433f, 23.538f };
					Local_98.f_148[9] = 348.6588f;
					Local_98.f_159[0 /*3*/] = { 2737.115f, 1697.578f, 23.6755f };
					Local_98.f_175[0] = 89.8563f;
					Local_98.f_159[1 /*3*/] = { 2778.598f, 1458.218f, 23.5382f };
					Local_98.f_175[1] = 163.8004f;
					Local_98.f_159[2 /*3*/] = { 2529.779f, 1641.113f, 27.9752f };
					Local_98.f_175[2] = 270.0754f;
					Local_98.f_159[3 /*3*/] = { 2665.372f, 1702.379f, 23.4882f };
					Local_98.f_175[3] = 184.9752f;
					Local_98.f_159[4 /*3*/] = { 2726.623f, 1640.299f, 23.5607f };
					Local_98.f_175[4] = 90.4555f;
					break;
				
				case 3:
				case 4:
					Local_98.f_30[0 /*3*/] = { 1088.383f, -3024.919f, 4.901f };
					Local_98.f_43[0] = 0.5044f;
					Local_98.f_30[1 /*3*/] = { 1086.846f, -2975.534f, 4.9012f };
					Local_98.f_43[1] = 179.2507f;
					Local_98.f_30[2 /*3*/] = { 986.4979f, -3024.68f, 4.9008f };
					Local_98.f_43[2] = 0.3066f;
					Local_98.f_30[3 /*3*/] = { 986.1768f, -2972.394f, 4.9012f };
					Local_98.f_43[3] = 180.2973f;
					Local_98.f_117[0 /*3*/] = { 991.85f, -2969.792f, 4.9008f };
					Local_98.f_148[0] = 336.7541f;
					Local_98.f_117[1 /*3*/] = { 1178.155f, -3022.33f, 4.9021f };
					Local_98.f_148[1] = 6.0929f;
					Local_98.f_117[2 /*3*/] = { 1107.679f, -2983.992f, 4.901f };
					Local_98.f_148[2] = 4.2803f;
					Local_98.f_117[3 /*3*/] = { 1043.869f, -2979.597f, 4.901f };
					Local_98.f_148[3] = 274.985f;
					Local_98.f_117[4 /*3*/] = { 1042.952f, -3031.76f, 4.901f };
					Local_98.f_148[4] = 267.2555f;
					Local_98.f_117[5 /*3*/] = { 1095.349f, -3077.492f, 4.8877f };
					Local_98.f_148[5] = 6.5529f;
					Local_98.f_117[6 /*3*/] = { 1114.924f, -3031.319f, 4.901f };
					Local_98.f_148[6] = 89.1724f;
					Local_98.f_117[7 /*3*/] = { 1048.021f, -3077.814f, 4.901f };
					Local_98.f_148[7] = 348.279f;
					Local_98.f_117[8 /*3*/] = { 995.4651f, -3036.897f, 4.9008f };
					Local_98.f_148[8] = 267.8075f;
					Local_98.f_117[9 /*3*/] = { 1101.347f, -2968.894f, 13.3329f };
					Local_98.f_148[9] = 0.5237f;
					Local_98.f_159[0 /*3*/] = { 1254.191f, -3126.908f, 4.8012f };
					Local_98.f_175[0] = 357.9713f;
					Local_98.f_159[1 /*3*/] = { 856.4759f, -3118.969f, 4.9008f };
					Local_98.f_175[1] = 269.3234f;
					Local_98.f_159[2 /*3*/] = { 838.2247f, -3118.748f, 4.9008f };
					Local_98.f_175[2] = 269.3055f;
					Local_98.f_159[3 /*3*/] = { 1197.595f, -2983.872f, 4.9021f };
					Local_98.f_175[3] = 359.1497f;
					Local_98.f_159[4 /*3*/] = { 962.6804f, -3016.159f, 4.9017f };
					Local_98.f_175[4] = 270.0873f;
					break;
			}
			break;
		
		case joaat("savage"):
			Local_98.f_240 = joaat("insurgent");
			Local_98.f_280[0] = 2;
			Local_98.f_291[0] = func_45(2);
			Local_98.f_280[1] = 4;
			Local_98.f_291[1] = func_45(4);
			Local_98.f_305[1] = func_44(4);
			Local_98.f_280[2] = 2;
			Local_98.f_291[2] = func_45(2);
			if (Local_98.f_12 <= 2 || !func_719())
			{
				Local_98.f_280[3] = 5;
				Local_98.f_291[3] = func_45(5);
				Local_98.f_278 = 4;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_45(4);
				Local_98.f_305[3] = func_44(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_45(2);
				Local_98.f_280[5] = 5;
				Local_98.f_291[5] = func_45(5);
				Local_98.f_278 = 6;
			}
			else
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_45(4);
				Local_98.f_305[3] = func_44(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_45(2);
				Local_98.f_280[5] = 4;
				Local_98.f_291[5] = func_45(4);
				Local_98.f_305[5] = func_44(4);
				Local_98.f_280[6] = 5;
				Local_98.f_291[6] = func_45(5);
				Local_98.f_278 = 7;
			}
			Local_98.f_255 = func_41();
			if (!func_719())
			{
				Local_98.f_1 = 2;
			}
			else
			{
				Local_98.f_1 = 7;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					Local_98.f_30[0 /*3*/] = { -1177.65f, -2845.542f, 12.9458f };
					Local_98.f_43[0] = 331.74f;
					Local_98.f_30[1 /*3*/] = { -1082.479f, -2900.191f, 12.9478f };
					Local_98.f_43[1] = 327.7335f;
					Local_98.f_30[2 /*3*/] = { -1202.019f, -2873.67f, 12.9454f };
					Local_98.f_43[2] = 149.1604f;
					Local_98.f_30[3 /*3*/] = { -1126.58f, -2918.416f, 12.9454f };
					Local_98.f_43[3] = 150.6753f;
					Local_98.f_117[0 /*3*/] = { -985.8373f, -2942.973f, 12.9451f };
					Local_98.f_148[0] = 147.2177f;
					Local_98.f_117[1 /*3*/] = { -1051.412f, -2880.828f, 29.3631f };
					Local_98.f_148[1] = 103.9461f;
					Local_98.f_117[2 /*3*/] = { -1154.54f, -2821.091f, 29.3631f };
					Local_98.f_148[2] = 160.822f;
					Local_98.f_117[3 /*3*/] = { -1211.898f, -2789.125f, 12.9523f };
					Local_98.f_148[3] = 205.8375f;
					Local_98.f_117[4 /*3*/] = { -1199.493f, -2724.709f, 12.9771f };
					Local_98.f_148[4] = 124.7328f;
					break;
				
				case 1:
					Local_98.f_30[0 /*3*/] = { 1930.067f, 4710.339f, 40.1633f };
					Local_98.f_43[0] = 344.2504f;
					Local_98.f_30[1 /*3*/] = { 1954.56f, 4724.181f, 40.0604f };
					Local_98.f_43[1] = 340.3425f;
					Local_98.f_30[2 /*3*/] = { 2004.913f, 4748.04f, 40.0604f };
					Local_98.f_43[2] = 351.5693f;
					Local_98.f_30[3 /*3*/] = { 2027.928f, 4757.387f, 40.0595f };
					Local_98.f_43[3] = 354.2446f;
					Local_98.f_117[0 /*3*/] = { 1954.209f, 4653.232f, 39.7136f };
					Local_98.f_148[0] = 245.2865f;
					Local_98.f_117[1 /*3*/] = { 2116.177f, 4761.993f, 40.2281f };
					Local_98.f_148[1] = 74.1185f;
					Local_98.f_117[2 /*3*/] = { 2123.414f, 4784.407f, 39.9703f };
					Local_98.f_148[2] = 10.2312f;
					Local_98.f_117[3 /*3*/] = { 1925.159f, 4817.925f, 43.9706f };
					Local_98.f_148[3] = 222.4017f;
					Local_98.f_117[4 /*3*/] = { 2009.58f, 4802.505f, 41.009f };
					Local_98.f_148[4] = 150.2763f;
					Local_98.f_117[5 /*3*/] = { 2133.472f, 4834.528f, 40.347f };
					Local_98.f_148[5] = 105.4526f;
					Local_98.f_117[6 /*3*/] = { 2139.058f, 4792.084f, 39.9703f };
					Local_98.f_148[6] = 88.9429f;
					Local_98.f_117[7 /*3*/] = { 2014.276f, 4721.062f, 40.6111f };
					Local_98.f_148[7] = 51.1733f;
					Local_98.f_117[8 /*3*/] = { 2060.417f, 4847.691f, 40.8344f };
					Local_98.f_148[8] = 169.7083f;
					Local_98.f_117[9 /*3*/] = { 2151.434f, 4789.446f, 39.9594f };
					Local_98.f_148[9] = 29.5849f;
					Local_98.f_243 = 3;
					break;
				
				case 2:
					if (!func_719())
					{
						Local_98.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_98.f_43[0] = 319.153f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { 206.2382f, 7031.669f, 1.1068f };
						Local_98.f_43[0] = 319.153f;
						Local_98.f_30[1 /*3*/] = { 218.7712f, 7018.654f, 1.0042f };
						Local_98.f_43[1] = 316.7079f;
						Local_98.f_30[2 /*3*/] = { 230.1561f, 7001.589f, 1.2508f };
						Local_98.f_43[2] = 316.9623f;
						Local_98.f_30[3 /*3*/] = { 242.3287f, 6987.263f, 1.7354f };
						Local_98.f_43[3] = 314.2003f;
					}
					Local_98.f_117[0 /*3*/] = { 131.5444f, 6956.887f, 12.1839f };
					Local_98.f_148[0] = 326.4292f;
					Local_98.f_117[1 /*3*/] = { 201.7152f, 6842.864f, 21.2216f };
					Local_98.f_148[1] = 6.8118f;
					Local_98.f_117[2 /*3*/] = { 66.3015f, 6924.146f, 12.2944f };
					Local_98.f_148[2] = 32.8776f;
					Local_98.f_117[3 /*3*/] = { 42.4962f, 7055.19f, 1.3986f };
					Local_98.f_148[3] = 8.387f;
					Local_98.f_117[4 /*3*/] = { 146.7828f, 6849.039f, 17.571f };
					Local_98.f_148[4] = 291.5504f;
					Local_98.f_117[5 /*3*/] = { 290.266f, 6946.917f, 3.1171f };
					Local_98.f_148[5] = 333.1838f;
					Local_98.f_117[6 /*3*/] = { 50.5669f, 7102.213f, 2.0034f };
					Local_98.f_148[6] = 203.8353f;
					Local_98.f_117[7 /*3*/] = { 274.1516f, 6856.506f, 15.8452f };
					Local_98.f_148[7] = 32.2329f;
					Local_98.f_117[8 /*3*/] = { 88.9963f, 7113.472f, 24.5763f };
					Local_98.f_148[8] = 195.4847f;
					Local_98.f_117[9 /*3*/] = { 131.6119f, 6956.082f, 12.2413f };
					Local_98.f_148[9] = 327.4941f;
					Local_98.f_243 = 4;
					break;
				
				case 3:
					if (!func_719())
					{
						Local_98.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_98.f_43[0] = 156.0209f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { 704.1097f, -1579.947f, 8.6915f };
						Local_98.f_43[0] = 156.0209f;
						Local_98.f_30[1 /*3*/] = { 699.7866f, -1637.337f, 8.7086f };
						Local_98.f_43[1] = 41.8571f;
						Local_98.f_30[2 /*3*/] = { 663.725f, -1634.052f, 8.7086f };
						Local_98.f_43[2] = 305.7411f;
						Local_98.f_30[3 /*3*/] = { 662.7472f, -1596.468f, 8.7086f };
						Local_98.f_43[3] = 223.2489f;
					}
					if (func_96() == 2 || func_96() == 5)
					{
						Local_98.f_242 = 3;
					}
					else
					{
						Local_98.f_242 = 4;
					}
					Local_98.f_117[0 /*3*/] = { 585.7374f, -1450.264f, 19.043f };
					Local_98.f_148[0] = 197.3456f;
					Local_98.f_117[1 /*3*/] = { 784.6684f, -1526.172f, 9.5498f };
					Local_98.f_148[1] = 140.7211f;
					Local_98.f_117[2 /*3*/] = { 790.8864f, -1603.665f, 30.2421f };
					Local_98.f_148[2] = 98.9528f;
					Local_98.f_117[3 /*3*/] = { 782.042f, -1487.963f, 19.2726f };
					Local_98.f_148[3] = 107.0238f;
					Local_98.f_117[4 /*3*/] = { 698.9001f, -1443.555f, 21.3382f };
					Local_98.f_148[4] = 202.129f;
					Local_98.f_117[5 /*3*/] = { 566.2017f, -1506.386f, 27.1027f };
					Local_98.f_148[5] = 230.1207f;
					Local_98.f_117[6 /*3*/] = { 752.1943f, -1491.94f, 19.4421f };
					Local_98.f_148[6] = 36.194f;
					Local_98.f_117[7 /*3*/] = { 702.7894f, -1452.929f, 30.3215f };
					Local_98.f_148[7] = 48.2522f;
					Local_98.f_117[8 /*3*/] = { 592.6577f, -1452.304f, 28.8626f };
					Local_98.f_148[8] = 296.114f;
					Local_98.f_117[9 /*3*/] = { 794.9213f, -1660.62f, 43.147f };
					Local_98.f_148[9] = 3.1632f;
					break;
			}
			break;
		
		case joaat("hydra"):
			Local_98.f_240 = joaat("lazer");
			Local_98.f_280[0] = 2;
			Local_98.f_291[0] = func_45(2);
			Local_98.f_280[1] = 2;
			Local_98.f_291[1] = func_45(2);
			Local_98.f_280[2] = 2;
			Local_98.f_291[2] = func_45(2);
			if (Local_98.f_12 <= 2 || !func_719())
			{
				Local_98.f_278 = 3;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 2;
				Local_98.f_291[3] = func_45(2);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_45(2);
				Local_98.f_278 = 5;
			}
			else
			{
				Local_98.f_280[3] = 2;
				Local_98.f_291[3] = func_45(2);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_45(2);
				Local_98.f_280[5] = 2;
				Local_98.f_291[5] = func_45(2);
				Local_98.f_278 = 6;
			}
			Local_98.f_255 = func_41();
			if (!func_719())
			{
				Local_98.f_1 = 1;
			}
			else
			{
				Local_98.f_1 = 6;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					if (!func_719())
					{
						Local_98.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_98.f_43[0] = 197.4435f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { 145.8397f, -2790.197f, 5.0002f };
						Local_98.f_43[0] = 197.4435f;
						Local_98.f_30[1 /*3*/] = { 132.5468f, -2805.181f, 5.0002f };
						Local_98.f_43[1] = 197.1133f;
						Local_98.f_30[2 /*3*/] = { 123.1125f, -2823.665f, 5.0002f };
						Local_98.f_43[2] = 272.2065f;
						Local_98.f_30[3 /*3*/] = { 163.5494f, -2795.92f, 5.0002f };
						Local_98.f_43[3] = 142.941f;
					}
					Local_98.f_159[0 /*3*/] = { 887.9951f, -3884.45f, 54.3252f };
					Local_98.f_175[0] = 34.149f;
					Local_98.f_159[1 /*3*/] = { -255.1527f, -4101.981f, 100.1964f };
					Local_98.f_175[1] = -26.0182f;
					Local_98.f_159[2 /*3*/] = { 1271.189f, -3196.243f, 104.9035f };
					Local_98.f_175[2] = 88.3998f;
					Local_98.f_159[3 /*3*/] = { -879.6379f, -2210.024f, 245.712f };
					Local_98.f_175[3] = -141.7949f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_117[0 /*3*/] = { 546.2563f, -3289.316f, 17.714f };
					Local_98.f_148[0] = 143.4012f;
					Local_98.f_117[1 /*3*/] = { 596.183f, -3288.174f, 17.714f };
					Local_98.f_148[1] = 212.1136f;
					Local_98.f_117[2 /*3*/] = { 500.3511f, -3338.894f, 23.591f };
					Local_98.f_148[2] = 95.8248f;
					Local_98.f_117[3 /*3*/] = { 480.8767f, -3238.414f, 5.0696f };
					Local_98.f_148[3] = 113.3084f;
					Local_98.f_117[4 /*3*/] = { 444.4339f, -3187.956f, 5.0703f };
					Local_98.f_148[4] = 260.1329f;
					Local_98.f_242 = 4;
					break;
				
				case 1:
					if (!func_719())
					{
						Local_98.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_98.f_43[0] = 131.0993f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { -1762.408f, -786.7469f, 8.075f };
						Local_98.f_43[0] = 131.0993f;
						Local_98.f_30[1 /*3*/] = { -1734.978f, -796.148f, 8.3998f };
						Local_98.f_43[1] = 127.8408f;
						Local_98.f_30[2 /*3*/] = { -1762.095f, -758.1465f, 8.6368f };
						Local_98.f_43[2] = 131.1571f;
						Local_98.f_30[3 /*3*/] = { -1792.501f, -751.6967f, 8.1782f };
						Local_98.f_43[3] = 132.943f;
					}
					Local_98.f_159[0 /*3*/] = { -1876.497f, -665.6128f, 109.1172f };
					Local_98.f_175[0] = 316.9068f;
					Local_98.f_159[1 /*3*/] = { -1099.297f, 20.5145f, 150.0107f };
					Local_98.f_175[1] = 142.3075f;
					Local_98.f_159[2 /*3*/] = { -803.6566f, -866.03f, 137.4505f };
					Local_98.f_175[2] = 93.1231f;
					Local_98.f_159[3 /*3*/] = { -1697.535f, -1306.955f, 127.8882f };
					Local_98.f_175[3] = -9.0334f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_117[0 /*3*/] = { -1468.446f, -546.457f, 84.073f };
					Local_98.f_148[0] = 236.3566f;
					Local_98.f_117[1 /*3*/] = { -1288.024f, -439.2769f, 102.47f };
					Local_98.f_148[1] = 212.7533f;
					Local_98.f_117[2 /*3*/] = { -1556.831f, -589.7376f, 32.9884f };
					Local_98.f_148[2] = 299.3619f;
					Local_98.f_117[3 /*3*/] = { -1353.281f, -514.1478f, 22.2694f };
					Local_98.f_148[3] = 115.7556f;
					Local_98.f_117[4 /*3*/] = { -1314.693f, -570.6011f, 28.3023f };
					Local_98.f_148[4] = 191.3862f;
					Local_98.f_242 = 4;
					break;
				
				case 2:
					Local_98.f_30[0 /*3*/] = { 737.7632f, 1292.348f, 359.296f };
					Local_98.f_43[0] = 176.244f;
					Local_98.f_159[0 /*3*/] = { 737.1152f, 1296.363f, 459.296f };
					Local_98.f_175[0] = 93.8354f;
					Local_98.f_159[1 /*3*/] = { -425.5261f, 1185.381f, 324.6416f };
					Local_98.f_175[1] = 250.5173f;
					Local_98.f_159[2 /*3*/] = { 1157.617f, 116.7023f, 180.3293f };
					Local_98.f_175[2] = 337.8961f;
					Local_98.f_159[3 /*3*/] = { 1604.747f, 2094.859f, 184.1727f };
					Local_98.f_175[3] = 142.1369f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_117[0 /*3*/] = { 662.439f, 1284.189f, 359.296f };
					Local_98.f_148[0] = 208.2624f;
					Local_98.f_117[1 /*3*/] = { 782.1017f, 1279.344f, 359.2967f };
					Local_98.f_148[1] = 349.048f;
					Local_98.f_117[2 /*3*/] = { 769.1426f, 1300.744f, 359.2967f };
					Local_98.f_148[2] = 69.8162f;
					Local_98.f_117[3 /*3*/] = { 750.6609f, 1209.155f, 326.5541f };
					Local_98.f_148[3] = 286.6181f;
					Local_98.f_242 = 4;
					Local_98.f_243 = 4;
					break;
				
				case 3:
					Local_98.f_30[0 /*3*/] = { 2521.121f, -471.1436f, 91.9971f };
					Local_98.f_43[0] = 292.0822f;
					Local_98.f_30[1 /*3*/] = { 2510.273f, -473.5832f, 91.9929f };
					Local_98.f_43[1] = 43.3907f;
					Local_98.f_30[2 /*3*/] = { 2481.39f, -320.2297f, 91.9927f };
					Local_98.f_43[2] = 124.2279f;
					Local_98.f_30[3 /*3*/] = { 2560.314f, -438.3987f, 91.9926f };
					Local_98.f_43[3] = 129.3366f;
					Local_98.f_159[0 /*3*/] = { 2870.504f, 368.2049f, 101.6602f };
					Local_98.f_175[0] = 137.5025f;
					Local_98.f_159[1 /*3*/] = { 1859.596f, 272.0942f, 162.159f };
					Local_98.f_175[1] = 227.9336f;
					Local_98.f_159[2 /*3*/] = { 2666.033f, -931.6996f, 100.6606f };
					Local_98.f_175[2] = 6.0299f;
					Local_98.f_159[3 /*3*/] = { 1336.474f, -345.6518f, 424.9653f };
					Local_98.f_175[3] = -87.5596f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_242 = 4;
					Local_98.f_117[0 /*3*/] = { 2528.376f, -424.9132f, 113.09f };
					Local_98.f_148[0] = 338.8487f;
					Local_98.f_117[1 /*3*/] = { 2473.828f, -384.0913f, 108.6521f };
					Local_98.f_148[1] = 272.5443f;
					Local_98.f_117[2 /*3*/] = { 2535.322f, -335.4323f, 113.0844f };
					Local_98.f_148[2] = 223.0158f;
					Local_98.f_117[3 /*3*/] = { 2478.752f, -416.0706f, 92.7351f };
					Local_98.f_148[3] = 355.6682f;
					Local_98.f_117[4 /*3*/] = { 2482.176f, -353.0269f, 92.7351f };
					Local_98.f_148[4] = 179.3658f;
					break;
				
				case 4:
					if (!func_719())
					{
						Local_98.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_98.f_43[0] = 331.7771f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { -1822.324f, -3167.588f, 12.9444f };
						Local_98.f_43[0] = 331.7771f;
						Local_98.f_30[1 /*3*/] = { -1841.38f, -3156.666f, 12.9444f };
						Local_98.f_43[1] = 324.1843f;
						Local_98.f_30[2 /*3*/] = { -1860.858f, -3143.922f, 12.9444f };
						Local_98.f_43[2] = 330.0586f;
						Local_98.f_30[3 /*3*/] = { -1885.131f, -3129.948f, 12.9444f };
						Local_98.f_43[3] = 329.5413f;
					}
					Local_98.f_159[0 /*3*/] = { -1185.202f, -2364.726f, 112.9452f };
					Local_98.f_175[0] = 146.9594f;
					Local_98.f_159[1 /*3*/] = { -382.1712f, -2495.05f, 105.0008f };
					Local_98.f_175[1] = 137.6555f;
					Local_98.f_159[2 /*3*/] = { -412.0741f, -2847.307f, 105.0004f };
					Local_98.f_175[2] = 114.7478f;
					Local_98.f_159[3 /*3*/] = { -2538.447f, -3165.758f, 133.9589f };
					Local_98.f_175[3] = -84.6269f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_242 = 4;
					Local_98.f_117[0 /*3*/] = { -1051.566f, -2880.667f, 29.3631f };
					Local_98.f_148[0] = 153.0449f;
					Local_98.f_117[1 /*3*/] = { -1154.167f, -2821.089f, 29.3631f };
					Local_98.f_148[1] = 153.1271f;
					Local_98.f_117[2 /*3*/] = { -1441.866f, -3280.676f, 12.9449f };
					Local_98.f_148[2] = 331.3771f;
					Local_98.f_117[3 /*3*/] = { -1209.32f, -2789.023f, 12.9523f };
					Local_98.f_148[3] = 183.2579f;
					Local_98.f_117[4 /*3*/] = { -1239.188f, -2688.943f, 12.9449f };
					Local_98.f_148[4] = 149.3518f;
					break;
				
				case 5:
					Local_98.f_30[0 /*3*/] = { -144.0471f, -593.1377f, 210.7752f };
					Local_98.f_43[0] = 184.7817f;
					Local_98.f_159[0 /*3*/] = { 449.0346f, -981.1837f, 142.6917f };
					Local_98.f_175[0] = 91.7761f;
					Local_98.f_159[1 /*3*/] = { -665.604f, -932.722f, 145.3242f };
					Local_98.f_175[1] = 269.7376f;
					Local_98.f_159[2 /*3*/] = { -686.7255f, 217.4708f, 136.5301f };
					Local_98.f_175[1] = 211.4614f;
					Local_98.f_159[3 /*3*/] = { 314.4621f, -130.8896f, 222.2372f };
					Local_98.f_175[3] = 148.9204f;
					Local_98.f_228[0] = 10000;
					Local_98.f_228[1] = 10000;
					Local_98.f_228[2] = 10000;
					Local_98.f_228[3] = 10000;
					Local_98.f_242 = 4;
					Local_98.f_117[0 /*3*/] = { -159.1301f, -600.2693f, 200.7354f };
					Local_98.f_148[0] = 113.298f;
					Local_98.f_117[1 /*3*/] = { -145.0832f, -578.3243f, 200.7354f };
					Local_98.f_148[1] = 353.0292f;
					Local_98.f_117[2 /*3*/] = { -135.3186f, -606.2405f, 200.7354f };
					Local_98.f_148[2] = 216.1793f;
					Local_98.f_117[3 /*3*/] = { -208.5985f, -725.582f, 219.5222f };
					Local_98.f_148[3] = 347.4008f;
					Local_98.f_243 = 4;
					break;
			}
			break;
		
		case joaat("valkyrie"):
			Local_98.f_240 = joaat("buzzard");
			Local_98.f_280[0] = 2;
			Local_98.f_291[0] = func_45(2);
			Local_98.f_305[0] = func_44(4);
			Local_98.f_280[1] = 4;
			Local_98.f_291[1] = func_45(4);
			Local_98.f_305[1] = func_44(4);
			Local_98.f_280[2] = 2;
			Local_98.f_291[2] = func_45(2);
			Local_98.f_305[2] = func_44(4);
			if (Local_98.f_12 <= 2 || !func_719())
			{
				Local_98.f_280[3] = 5;
				Local_98.f_291[3] = func_45(5);
				Local_98.f_278 = 4;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_45(4);
				Local_98.f_305[3] = func_44(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_45(2);
				Local_98.f_280[5] = 5;
				Local_98.f_291[5] = func_45(5);
				Local_98.f_278 = 6;
			}
			else
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_45(4);
				Local_98.f_305[3] = func_44(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_45(2);
				Local_98.f_280[5] = 4;
				Local_98.f_291[5] = func_45(4);
				Local_98.f_305[5] = func_44(4);
				Local_98.f_280[6] = 5;
				Local_98.f_291[6] = func_45(5);
				Local_98.f_278 = 7;
			}
			Local_98.f_255 = func_41();
			if (!func_719())
			{
				Local_98.f_1 = 3;
			}
			else
			{
				Local_98.f_1 = 8;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					if (!func_719())
					{
						Local_98.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_98.f_43[0] = 290.0732f;
					}
					else
					{
						Local_98.f_30[0 /*3*/] = { -758.7451f, -1488.612f, 4.0005f };
						Local_98.f_43[0] = 290.0732f;
						Local_98.f_30[1 /*3*/] = { -754.8721f, -1442.684f, 4.0005f };
						Local_98.f_43[1] = 231.5867f;
						Local_98.f_30[2 /*3*/] = { -712.4144f, -1459.331f, 4.0005f };
						Local_98.f_43[2] = 49.6234f;
						Local_98.f_30[3 /*3*/] = { -729.9052f, -1418.734f, 4.0005f };
						Local_98.f_43[3] = 229.3317f;
					}
					Local_98.f_117[0 /*3*/] = { -692.5144f, -1384.774f, 4.1503f };
					Local_98.f_148[0] = 230.0049f;
					Local_98.f_117[1 /*3*/] = { -724.5416f, -1374.024f, 0.6002f };
					Local_98.f_148[1] = 147.9421f;
					Local_98.f_117[2 /*3*/] = { -763.0113f, -1531.637f, 4.4284f };
					Local_98.f_148[2] = 22.3204f;
					Local_98.f_117[3 /*3*/] = { -622.6572f, -1346.997f, 10.7793f };
					Local_98.f_148[3] = 80.7676f;
					Local_98.f_117[4 /*3*/] = { -650.5557f, -1313.337f, 9.8688f };
					Local_98.f_148[4] = 162.0507f;
					Local_98.f_117[5 /*3*/] = { -687.8698f, -1314.519f, 4.1019f };
					Local_98.f_148[5] = 225.9002f;
					Local_98.f_117[6 /*3*/] = { -719.8957f, -1300.4f, 4.1019f };
					Local_98.f_148[6] = 140.0515f;
					Local_98.f_117[7 /*3*/] = { -661.9195f, -1213.277f, 9.7043f };
					Local_98.f_148[7] = 90.6966f;
					Local_98.f_117[8 /*3*/] = { -758.4667f, -1332.722f, 8.6f };
					Local_98.f_148[8] = 226.042f;
					Local_98.f_117[9 /*3*/] = { -597.2482f, -1415.324f, 11.0923f };
					Local_98.f_148[9] = 79.7294f;
					Local_98.f_243 = 4;
					break;
				
				case 1:
					Local_98.f_30[0 /*3*/] = { 307.4523f, 2835.238f, 42.4361f };
					Local_98.f_43[0] = 122.9714f;
					Local_98.f_30[1 /*3*/] = { 358.6979f, 2863.14f, 42.0979f };
					Local_98.f_43[1] = 118.6931f;
					Local_98.f_30[2 /*3*/] = { 356.6689f, 2806.741f, 52.9669f };
					Local_98.f_43[2] = 26.5272f;
					Local_98.f_30[3 /*3*/] = { 310.0119f, 2875.712f, 42.5068f };
					Local_98.f_43[3] = 211.0638f;
					Local_98.f_117[0 /*3*/] = { 346.145f, 2861.565f, 42.4603f };
					Local_98.f_148[0] = 203.4084f;
					Local_98.f_117[1 /*3*/] = { 264.2803f, 2872.275f, 42.6105f };
					Local_98.f_148[1] = 123.7895f;
					Local_98.f_117[2 /*3*/] = { 290.4762f, 2853.89f, 42.6424f };
					Local_98.f_148[2] = 115.9053f;
					Local_98.f_117[3 /*3*/] = { 290.606f, 2810.906f, 47.9461f };
					Local_98.f_148[3] = 330.5807f;
					Local_98.f_117[4 /*3*/] = { 341.4013f, 2863.181f, 42.4361f };
					Local_98.f_148[4] = 116.311f;
					Local_98.f_117[5 /*3*/] = { 254.767f, 2880.256f, 42.5168f };
					Local_98.f_148[5] = 145.855f;
					Local_98.f_117[6 /*3*/] = { 301.125f, 2814.328f, 42.4361f };
					Local_98.f_148[6] = 41.353f;
					Local_98.f_117[7 /*3*/] = { 306.254f, 2865.798f, 42.5755f };
					Local_98.f_148[7] = 266.0158f;
					Local_98.f_117[8 /*3*/] = { 195.36f, 2808.636f, 44.3806f };
					Local_98.f_148[8] = 290.3963f;
					Local_98.f_117[9 /*3*/] = { 269.1239f, 2866.509f, 73.1797f };
					Local_98.f_148[9] = 243.2495f;
					Local_98.f_243 = 4;
					break;
				
				case 2:
					Local_98.f_30[0 /*3*/] = { 714.882f, 4175.296f, 39.7092f };
					Local_98.f_43[0] = 280.2862f;
					Local_98.f_30[1 /*3*/] = { 765.1945f, 4182.796f, 39.7152f };
					Local_98.f_43[1] = 32.9157f;
					Local_98.f_30[2 /*3*/] = { 750.664f, 4238.85f, 54.7686f };
					Local_98.f_43[2] = 106.2954f;
					Local_98.f_30[3 /*3*/] = { 569.2263f, 4178.386f, 37.2124f };
					Local_98.f_43[3] = 272.3807f;
					Local_98.f_117[0 /*3*/] = { 724.4003f, 4198.888f, 39.7092f };
					Local_98.f_148[0] = 254.5411f;
					Local_98.f_117[1 /*3*/] = { 792.2949f, 4184.186f, 39.5336f };
					Local_98.f_148[1] = 183.227f;
					Local_98.f_117[2 /*3*/] = { 754.1003f, 4181.829f, 39.7131f };
					Local_98.f_148[2] = 338.6039f;
					Local_98.f_117[3 /*3*/] = { 849.6327f, 4224.779f, 49.5859f };
					Local_98.f_148[3] = 71.8258f;
					Local_98.f_117[4 /*3*/] = { 856.303f, 4257.466f, 49.48f };
					Local_98.f_148[4] = 179.6626f;
					Local_98.f_117[5 /*3*/] = { 611.6555f, 4222.132f, 52.4756f };
					Local_98.f_148[5] = 272.7491f;
					Local_98.f_117[6 /*3*/] = { 643.0641f, 4213.754f, 52.6579f };
					Local_98.f_148[6] = 270.8252f;
					Local_98.f_117[7 /*3*/] = { 665.9061f, 4263.513f, 53.7219f };
					Local_98.f_148[7] = 180.4937f;
					Local_98.f_117[8 /*3*/] = { 876.0669f, 4247.905f, 48.9739f };
					Local_98.f_148[8] = 107.4297f;
					Local_98.f_117[9 /*3*/] = { 509.1728f, 4239.358f, 54.4925f };
					Local_98.f_148[9] = 247.5728f;
					break;
				
				case 3:
					Local_98.f_30[0 /*3*/] = { 3279.497f, 5204.456f, 17.3168f };
					Local_98.f_43[0] = 117.7311f;
					Local_98.f_30[1 /*3*/] = { 3280.456f, 5166.343f, 17.9564f };
					Local_98.f_43[1] = 46.3958f;
					Local_98.f_30[2 /*3*/] = { 3258.509f, 5225.87f, 17.2293f };
					Local_98.f_43[2] = 189.2091f;
					Local_98.f_30[3 /*3*/] = { 3302.896f, 5136.244f, 17.3101f };
					Local_98.f_43[3] = 50.0778f;
					Local_98.f_117[0 /*3*/] = { 3318.215f, 5186.109f, 17.4503f };
					Local_98.f_148[0] = 229.5714f;
					Local_98.f_117[1 /*3*/] = { 3309.254f, 5167.526f, 17.4491f };
					Local_98.f_148[1] = 136.4963f;
					Local_98.f_117[2 /*3*/] = { 3372.606f, 5183.914f, 0.4652f };
					Local_98.f_148[2] = 88.3908f;
					Local_98.f_117[3 /*3*/] = { 3222.684f, 5187.734f, 30.0174f };
					Local_98.f_148[3] = 271.8922f;
					Local_98.f_117[4 /*3*/] = { 3217.351f, 5145.03f, 18.4178f };
					Local_98.f_148[4] = 316.4374f;
					Local_98.f_117[5 /*3*/] = { 3155.562f, 5285.246f, 28.0707f };
					Local_98.f_148[5] = 246.1521f;
					Local_98.f_117[6 /*3*/] = { 3311.935f, 5176.247f, 18.6196f };
					Local_98.f_148[6] = 198.8985f;
					Local_98.f_117[7 /*3*/] = { 3230.142f, 5200.801f, 22.8278f };
					Local_98.f_148[7] = 257.2332f;
					Local_98.f_117[8 /*3*/] = { 3420.069f, 5169.133f, 4.8574f };
					Local_98.f_148[8] = 104.7808f;
					Local_98.f_117[9 /*3*/] = { 3242.868f, 5035.166f, 20.011f };
					Local_98.f_148[9] = 339.2293f;
					break;
				
				case 4:
					Local_98.f_30[0 /*3*/] = { -1736.989f, 162.0228f, 63.371f };
					Local_98.f_43[0] = 306.7662f;
					Local_98.f_30[1 /*3*/] = { -1736.938f, 137.1991f, 63.371f };
					Local_98.f_43[1] = 303.3918f;
					Local_98.f_30[2 /*3*/] = { -1756.272f, 172.5584f, 63.3711f };
					Local_98.f_43[2] = 302.365f;
					Local_98.f_30[3 /*3*/] = { -1710.748f, 129.7035f, 63.3716f };
					Local_98.f_43[3] = 304.9788f;
					Local_98.f_117[0 /*3*/] = { -1674.868f, 141.795f, 62.4627f };
					Local_98.f_148[0] = 30.9787f;
					Local_98.f_117[1 /*3*/] = { -1668.265f, 190.8298f, 60.7573f };
					Local_98.f_148[1] = 97.3626f;
					Local_98.f_117[2 /*3*/] = { -1661.135f, 236.6263f, 61.391f };
					Local_98.f_148[2] = 218.2636f;
					Local_98.f_117[3 /*3*/] = { -1706.443f, 186.8354f, 62.9277f };
					Local_98.f_148[3] = 257.6324f;
					Local_98.f_117[4 /*3*/] = { -1722.395f, 227.362f, 60.7408f };
					Local_98.f_148[4] = 244.6777f;
					Local_98.f_117[5 /*3*/] = { -1623.344f, 165.8969f, 59.7796f };
					Local_98.f_148[5] = 12.745f;
					Local_98.f_117[6 /*3*/] = { -1627.188f, 242.7915f, 58.648f };
					Local_98.f_148[6] = 196.3743f;
					Local_98.f_117[7 /*3*/] = { -1796.215f, 150.6246f, 67.7735f };
					Local_98.f_148[7] = 283.2556f;
					Local_98.f_117[8 /*3*/] = { -1774.033f, 105.8673f, 69.3384f };
					Local_98.f_148[8] = 243.4268f;
					Local_98.f_117[9 /*3*/] = { -1594.717f, 210.4007f, 73.3379f };
					Local_98.f_148[9] = 27.7876f;
					break;
			}
			break;
		
		case joaat("buzzard"):
			Local_98.f_240 = joaat("buzzard");
			Local_98.f_280[0] = 2;
			Local_98.f_291[0] = func_45(2);
			Local_98.f_280[1] = 4;
			Local_98.f_291[1] = func_45(4);
			Local_98.f_305[1] = func_44(4);
			Local_98.f_280[2] = 2;
			Local_98.f_291[2] = func_45(2);
			if (Local_98.f_12 <= 2 || !func_719())
			{
				Local_98.f_280[3] = 5;
				Local_98.f_291[3] = func_45(5);
				Local_98.f_278 = 4;
			}
			else if (Local_98.f_12 == 3)
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_45(4);
				Local_98.f_305[3] = func_44(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_45(2);
				Local_98.f_280[5] = 5;
				Local_98.f_291[5] = func_45(5);
				Local_98.f_278 = 6;
			}
			else
			{
				Local_98.f_280[3] = 4;
				Local_98.f_291[3] = func_45(4);
				Local_98.f_305[3] = func_44(4);
				Local_98.f_280[4] = 2;
				Local_98.f_291[4] = func_45(2);
				Local_98.f_280[5] = 4;
				Local_98.f_291[5] = func_45(4);
				Local_98.f_305[5] = func_44(4);
				Local_98.f_280[6] = 5;
				Local_98.f_291[6] = func_45(5);
				Local_98.f_278 = 7;
			}
			Local_98.f_255 = func_41();
			if (!func_719())
			{
				Local_98.f_1 = 4;
			}
			else
			{
				Local_98.f_1 = 9;
			}
			Local_98.f_2 = Local_98.f_29;
			switch (Local_98.f_29)
			{
				case 0:
					Local_98.f_30[0 /*3*/] = { 1139.943f, -1289.195f, 33.6127f };
					Local_98.f_43[0] = 180.7904f;
					Local_98.f_30[1 /*3*/] = { 1156.358f, -1327.402f, 33.7312f };
					Local_98.f_43[1] = 269.3001f;
					Local_98.f_30[2 /*3*/] = { 1204.963f, -1265.334f, 34.2267f };
					Local_98.f_43[2] = 180.39f;
					Local_98.f_30[3 /*3*/] = { 1220.954f, -1214.883f, 34.9485f };
					Local_98.f_43[3] = 276.7351f;
					Local_98.f_117[0 /*3*/] = { 1195.556f, -1277.914f, 34.3601f };
					Local_98.f_148[0] = 329.9165f;
					Local_98.f_117[1 /*3*/] = { 1197.899f, -1297.386f, 34.1985f };
					Local_98.f_148[1] = 264.7702f;
					Local_98.f_117[2 /*3*/] = { 1168.435f, -1382.305f, 33.784f };
					Local_98.f_148[2] = 359.5203f;
					Local_98.f_117[3 /*3*/] = { 1160.796f, -1253.626f, 33.5659f };
					Local_98.f_148[3] = 111.3101f;
					Local_98.f_117[4 /*3*/] = { 1178.2f, -1272.399f, 33.8277f };
					Local_98.f_148[4] = 176.3058f;
					Local_98.f_117[5 /*3*/] = { 1185.282f, -1355.494f, 33.9506f };
					Local_98.f_148[5] = 213.1969f;
					Local_98.f_117[6 /*3*/] = { 1217.704f, -1381.659f, 34.3114f };
					Local_98.f_148[6] = 275.2275f;
					Local_98.f_117[7 /*3*/] = { 1193.388f, -1257.564f, 34.2036f };
					Local_98.f_148[7] = 220.0349f;
					Local_98.f_117[8 /*3*/] = { 1174.833f, -1381.064f, 41.8297f };
					Local_98.f_148[8] = 359.15f;
					Local_98.f_117[9 /*3*/] = { 1154.647f, -1338.613f, 33.7034f };
					Local_98.f_148[9] = 83.4212f;
					break;
				
				case 1:
					Local_98.f_30[0 /*3*/] = { 129.1966f, -368.0656f, 42.257f };
					Local_98.f_43[0] = 247.4892f;
					Local_98.f_30[1 /*3*/] = { 147.9662f, -363.0619f, 42.257f };
					Local_98.f_43[1] = 66.129f;
					Local_98.f_30[2 /*3*/] = { 116.6446f, -436.4488f, 40.1294f };
					Local_98.f_43[2] = 340.0713f;
					Local_98.f_30[3 /*3*/] = { 90.0879f, -385.0907f, 40.2506f };
					Local_98.f_43[3] = 245.7466f;
					Local_98.f_117[0 /*3*/] = { 47.0236f, -401.9681f, 38.9218f };
					Local_98.f_148[0] = 252.6017f;
					Local_98.f_117[1 /*3*/] = { 36.934f, -438.6162f, 38.9206f };
					Local_98.f_148[1] = 245.262f;
					Local_98.f_117[2 /*3*/] = { 69.7929f, -461.295f, 38.9215f };
					Local_98.f_148[2] = 44.7945f;
					Local_98.f_117[3 /*3*/] = { 48.4389f, -397.2337f, 54.29f };
					Local_98.f_148[3] = 255.6518f;
					Local_98.f_117[4 /*3*/] = { 204.0561f, -439.34f, 41.9848f };
					Local_98.f_148[4] = 124.8391f;
					Local_98.f_117[5 /*3*/] = { 142.2612f, -291.4343f, 45.3084f };
					Local_98.f_148[5] = 188.9979f;
					Local_98.f_117[6 /*3*/] = { 163.2065f, -291.4264f, 45.1553f };
					Local_98.f_148[6] = 159.3613f;
					Local_98.f_117[7 /*3*/] = { 115.7637f, -459.3909f, 40.1269f };
					Local_98.f_148[7] = 5.7762f;
					Local_98.f_117[8 /*3*/] = { 76.8378f, -337.484f, 66.2022f };
					Local_98.f_148[8] = 89.3388f;
					Local_98.f_117[9 /*3*/] = { 134.533f, -346.3627f, 101.6362f };
					Local_98.f_148[9] = 85.9158f;
					break;
				
				case 2:
					Local_98.f_30[0 /*3*/] = { -509.9767f, 1186.854f, 323.8415f };
					Local_98.f_43[0] = 310.6241f;
					Local_98.f_30[1 /*3*/] = { -398.0129f, 1230.508f, 324.6416f };
					Local_98.f_43[1] = 166.0191f;
					Local_98.f_30[2 /*3*/] = { -455.6342f, 1141.998f, 324.9044f };
					Local_98.f_43[2] = 343.1715f;
					Local_98.f_30[3 /*3*/] = { -412.4245f, 1133.032f, 324.9044f };
					Local_98.f_43[3] = 342.4984f;
					Local_98.f_117[0 /*3*/] = { -426.3299f, 1216.66f, 324.7585f };
					Local_98.f_148[0] = 248.8594f;
					Local_98.f_117[1 /*3*/] = { -363.2418f, 1266.761f, 329.8745f };
					Local_98.f_148[1] = 195.7758f;
					Local_98.f_117[2 /*3*/] = { -453.9799f, 1074.992f, 326.6897f };
					Local_98.f_148[2] = 28.6127f;
					Local_98.f_117[3 /*3*/] = { -392.485f, 1078.562f, 323.2558f };
					Local_98.f_148[3] = 296.7476f;
					Local_98.f_117[4 /*3*/] = { -413.6003f, 1086.831f, 326.6821f };
					Local_98.f_148[4] = 240.9422f;
					Local_98.f_117[5 /*3*/] = { -381.0179f, 1141.269f, 321.6503f };
					Local_98.f_148[5] = 2.473f;
					Local_98.f_117[6 /*3*/] = { -482.3448f, 1118.646f, 319.0963f };
					Local_98.f_148[6] = 343.6776f;
					Local_98.f_117[7 /*3*/] = { -397.3531f, 1127.527f, 321.7288f };
					Local_98.f_148[7] = 0.2495f;
					Local_98.f_117[8 /*3*/] = { -435.3902f, 1092.162f, 331.5411f };
					Local_98.f_148[8] = 72.7889f;
					Local_98.f_117[9 /*3*/] = { -424.5132f, 1225.076f, 324.7585f };
					Local_98.f_148[9] = 238.4196f;
					break;
				
				case 3:
					Local_98.f_30[0 /*3*/] = { 341.0539f, 3569.789f, 32.4743f };
					Local_98.f_43[0] = 351.0324f;
					Local_98.f_30[1 /*3*/] = { 373.5018f, 3512.322f, 33.1732f };
					Local_98.f_43[1] = 3.5452f;
					Local_98.f_30[2 /*3*/] = { 353.5068f, 3483.839f, 34.0848f };
					Local_98.f_43[2] = 7.3237f;
					Local_98.f_30[3 /*3*/] = { 245.8774f, 3580.881f, 32.9612f };
					Local_98.f_43[3] = 332.0844f;
					Local_98.f_117[0 /*3*/] = { 447.4214f, 3566.317f, 32.2386f };
					Local_98.f_148[0] = 2.6416f;
					Local_98.f_117[1 /*3*/] = { 445.3309f, 3512.088f, 32.9825f };
					Local_98.f_148[1] = 171.8638f;
					Local_98.f_117[2 /*3*/] = { 353.2316f, 3396.212f, 35.4033f };
					Local_98.f_148[2] = 257.0332f;
					Local_98.f_117[3 /*3*/] = { 454.5527f, 3530.242f, 32.4254f };
					Local_98.f_148[3] = 91.7869f;
					Local_98.f_117[4 /*3*/] = { 395.8559f, 3577.025f, 32.2922f };
					Local_98.f_148[4] = 4.2016f;
					Local_98.f_117[5 /*3*/] = { 380.2437f, 3560.991f, 32.342f };
					Local_98.f_148[5] = 339.729f;
					Local_98.f_117[6 /*3*/] = { 408.4627f, 3458.313f, 32.6961f };
					Local_98.f_148[6] = 359.2033f;
					Local_98.f_117[7 /*3*/] = { 476.5523f, 3557.328f, 32.2386f };
					Local_98.f_148[7] = 333.6298f;
					Local_98.f_117[8 /*3*/] = { 325.6323f, 3390.666f, 35.4033f };
					Local_98.f_148[8] = 73.2788f;
					Local_98.f_117[9 /*3*/] = { 461.6116f, 3535.257f, 32.318f };
					Local_98.f_148[9] = 96.8181f;
					break;
				
				case 4:
					Local_98.f_30[0 /*3*/] = { 1493.166f, 1177.555f, 113.2209f };
					Local_98.f_43[0] = 42.1535f;
					Local_98.f_30[1 /*3*/] = { 1433.476f, 1179.544f, 113.1842f };
					Local_98.f_43[1] = 315.0261f;
					Local_98.f_30[2 /*3*/] = { 1471.486f, 1108.967f, 113.3343f };
					Local_98.f_43[2] = 1.2527f;
					Local_98.f_30[3 /*3*/] = { 1448.914f, 1110.622f, 113.3363f };
					Local_98.f_43[3] = 1.9403f;
					Local_98.f_117[0 /*3*/] = { 1485.622f, 1047.388f, 113.334f };
					Local_98.f_148[0] = 352.9674f;
					Local_98.f_117[1 /*3*/] = { 1461.541f, 1083.658f, 113.3344f };
					Local_98.f_148[1] = 88.8285f;
					Local_98.f_117[2 /*3*/] = { 1411.874f, 1126.96f, 113.3341f };
					Local_98.f_148[2] = 177.2297f;
					Local_98.f_117[3 /*3*/] = { 1442.497f, 1148.469f, 113.3342f };
					Local_98.f_148[3] = 273.1487f;
					Local_98.f_117[4 /*3*/] = { 1406.476f, 1256.695f, 106.6555f };
					Local_98.f_148[4] = 225.394f;
					Local_98.f_117[5 /*3*/] = { 1464.077f, 1134.808f, 113.3227f };
					Local_98.f_148[5] = 175.5423f;
					Local_98.f_117[6 /*3*/] = { 1410.314f, 1162.317f, 113.3342f };
					Local_98.f_148[6] = 191.1842f;
					Local_98.f_117[7 /*3*/] = { 1487.483f, 1102.243f, 113.3346f };
					Local_98.f_148[7] = 269.6831f;
					Local_98.f_117[8 /*3*/] = { 1391.034f, 1154.223f, 113.4433f };
					Local_98.f_148[8] = 29.4203f;
					Local_98.f_117[9 /*3*/] = { 1484.87f, 1039.553f, 113.2318f };
					Local_98.f_148[9] = 287.677f;
					break;
			}
			break;
	}
}

int func_41()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_98.f_255 != -1)
	{
		return Local_98.f_255;
	}
	if (Local_98.f_278 == 0)
	{
		return ((4 * Global_262145.f_9550) + Global_262145.f_9551);
	}
	iVar2 = func_96();
	iVar3 = func_43(iVar2);
	iVar4 = func_42(iVar3);
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar1 = 0;
			while (iVar1 < Local_98.f_278)
			{
				iVar0 = (iVar0 + ((Local_98.f_291[iVar1] * iVar4) + Local_98.f_305[iVar1]));
				iVar1++;
			}
			break;
	}
	return iVar0;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case joaat("insurgent"):
			return 2;
			break;
		
		case joaat("lazer"):
			return 1;
			break;
		
		case joaat("buzzard"):
			return 4;
			break;
		
		case joaat("mesa3"):
			return 4;
			break;
		
		case joaat("savage"):
			return 4;
			break;
	}
	return 0;
}

int func_43(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 2:
			if (Local_98.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
		
		case 4:
			if (Local_98.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else
			{
				iVar0 = joaat("mesa3");
			}
			break;
		
		case 5:
			iVar0 = joaat("savage");
			break;
		
		default:
			if (Local_98.f_27 == joaat("rhino"))
			{
				iVar0 = joaat("insurgent");
			}
			else if (Local_98.f_27 == joaat("hydra"))
			{
				iVar0 = joaat("lazer");
			}
			else
			{
				iVar0 = joaat("buzzard");
			}
			break;
	}
	return iVar0;
}

int func_44(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 4:
		case 3:
			if (func_719())
			{
				iVar0 = Global_262145.f_10723;
			}
			else
			{
				iVar0 = Global_262145.f_10443;
			}
			break;
	}
	return iVar0;
}

int func_45(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 2:
			if (func_719())
			{
				iVar0 = Global_262145.f_10724;
			}
			else
			{
				iVar0 = Global_262145.f_10444;
			}
			break;
		
		case 5:
			if (func_719())
			{
				iVar0 = Global_262145.f_10725;
			}
			else
			{
				iVar0 = Global_262145.f_10445;
			}
			break;
		
		case 4:
			if (func_719())
			{
				iVar0 = Global_262145.f_10722;
			}
			else
			{
				iVar0 = Global_262145.f_10442;
			}
			break;
	}
	return iVar0;
}

int func_46(int iParam0)
{
	if (!func_719())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 5;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 5;
			
			case joaat("buzzard"):
				return 5;
			
			default:
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return 4;
			
			case joaat("hydra"):
				return 3;
			
			case joaat("savage"):
				return 3;
			
			case joaat("valkyrie"):
				return 4;
			
			case joaat("buzzard"):
				return 4;
			}
		
		default:
	}
	return 5;
}

void func_47()
{
	Local_98.f_252 = 0;
	Local_98.f_302 = 0;
	Local_98.f_317 = 0;
	Local_98.f_316 = 0;
}

int func_48()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 20;
	iVar0 = 20;
	while (iVar0 <= 23)
	{
		if (!func_31(Local_98.f_48[iVar0]))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_49()
{
	int iVar0;
	int iVar1;
	
	iVar0 = Local_98.f_279 + 1;
	if (iVar0 < 10)
	{
		iVar1 = Local_98.f_280[iVar0];
		switch (iVar1)
		{
			case 1:
				return 99;
				break;
			
			case 2:
				return 1;
				break;
			
			case 4:
				if (func_96() == 4)
				{
					return 2;
				}
				else if (func_96() == 2)
				{
					return 1;
				}
				break;
			
			case 5:
				return 0;
				break;
		}
	}
	else
	{
		return 99;
	}
	return 99;
}

int func_50()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_107(Local_98.f_73[iVar1]))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_51(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	if (Local_98.f_318 == 0 || Local_98.f_318 == func_39())
	{
		if (func_96() == 2 || func_96() == 5)
		{
			return 0;
		}
	}
	if (func_96() == 3 || func_96() == 4)
	{
		if (Local_98.f_317 >= func_38())
		{
			iVar0 = Local_98.f_279 + 1;
			if (iVar0 < 10)
			{
				iVar1 = Local_98.f_280[iVar0];
				if (iVar1 == 5)
				{
					bVar2 = true;
				}
			}
			if (!bVar2)
			{
				return 0;
			}
		}
	}
	else if (Local_98.f_317 == 2)
	{
		iVar0 = Local_98.f_279 + 1;
		if (iVar0 < 10)
		{
			iVar1 = Local_98.f_280[iVar0];
			if (iVar1 == 5)
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			return 0;
		}
	}
	if (Local_98.f_318 == func_39())
	{
		return 0;
	}
	if (Local_98.f_318 == func_71())
	{
		return 0;
	}
	if (func_96() == 1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_48[(20 + iParam0)]))
	{
		if (func_70(Local_98.f_239) && NETWORK::CAN_REGISTER_MISSION_ENTITIES(0, 1, 0, 0))
		{
			if (func_68(&iVar3))
			{
				if (func_55(Local_98.f_117[iVar3 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0))
				{
					if (func_54(&(Local_98.f_48[(20 + iParam0)]), 22, Local_98.f_239, Local_98.f_117[iVar3 /*3*/], Local_98.f_148[iVar3], 1, 1, 1))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), iLocal_112);
						ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 1, 0);
						PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 0);
						if (iVar3 == 8 || iVar3 == 9)
						{
							WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), joaat("weapon_rpg"), 25000, true, true);
						}
						else
						{
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), joaat("weapon_advancedrifle"), 25000, true);
						}
						fVar6 = (30f * func_53());
						PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), SYSTEM::ROUND(fVar6));
						PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 2);
						PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 0, true);
						PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 1);
						PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 42, true);
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
						PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 1);
						PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), true);
						PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), true);
						PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), 151, false);
						iVar4 = ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]));
						fVar5 = func_52();
						iVar4 = SYSTEM::ROUND((fVar5 * SYSTEM::TO_FLOAT(iVar4)));
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_98.f_48[(20 + iParam0)]), iVar4, 0);
						iVar7 = (20 + iParam0);
						if (MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar7)], func_88(iVar7)))
						{
							MISC::CLEAR_BIT(&(Local_98.f_272[func_89(iVar7)]), func_88(iVar7));
						}
						Local_98.f_247++;
						Local_98.f_317++;
						Local_98.f_250++;
						Local_98.f_318++;
						func_104(&(Local_98.f_414[iVar7 /*2*/]));
						func_19(&(Local_98.f_414[iVar7 /*2*/]), 0, 0);
						if (func_21(&(Local_98.f_364[iVar7 /*2*/])))
						{
							func_104(&(Local_98.f_364[iVar7 /*2*/]));
						}
						func_19(&(Local_564[iVar3 /*2*/]), 0, 0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_98.f_48[iVar7]), 1, iLocal_111);
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_48[(20 + iParam0)]))
	{
		return 0;
	}
	return 1;
}

var func_52()
{
	if (func_719())
	{
		return Global_262145.f_10711;
	}
	return Global_262145.f_10431;
}

float func_53()
{
	if (func_719())
	{
		return Global_262145.f_10713;
	}
	return Global_262145.f_10433;
}

int func_54(var uParam0, int iParam1, int iParam2, vector3 vParam3, float fParam4, bool bParam5, int iParam6, bool bParam7)
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
		ENTITY::_SET_ENTITY_SOMETHING(iVar0, bParam7);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
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

int func_55(vector3 vParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, bool bParam6, int iParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, float fParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	Global_2405047.f_2 = 0;
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
	Global_2405047.f_2++;
	if (bParam11)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vParam0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (fParam12 > 0f)
	{
		if (func_62(vParam0, fParam12, 1, 1, bParam13, bParam15, bParam9, bParam13))
		{
			return 0;
		}
	}
	Global_2405047.f_2++;
	if (bParam6)
	{
		if (fParam4 > 0f)
		{
			if (func_56(vParam0, fParam4, iParam5, iParam7, fParam8, bParam9, iParam10, fParam14, bParam15))
			{
				return 0;
			}
		}
	}
	Global_2405047.f_2++;
	return 1;
}

int func_56(vector3 vParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6, float fParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam2 && !bParam5)
	{
		if (func_820(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam4;
				if (fParam7 > 0f)
				{
					fVar2 = fParam7;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(PLAYER::PLAYER_ID()), vParam0, true) <= (fVar2 + fParam1))
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
		if (func_820(iVar1, 1, 1))
		{
			if (!func_15(iVar1, 0) && NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam2 == 1 || (iParam2 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_57(iVar1) || !bParam8) && !Global_2422736[iVar1 /*420*/].f_274)
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
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, true) <= (fVar2 + fParam1))
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
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_58(iVar1), vParam0, true) <= (fVar2 + fParam1))
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

int func_57(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2422736[iParam0 /*420*/].f_260)
	{
		return 1;
	}
	return 0;
}

Vector3 func_58(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_61() && Global_1595693[iVar0 /*680*/].f_673) && !func_60(Global_1595693[iVar0 /*680*/].f_674))
	{
		return Global_1595693[iVar0 /*680*/].f_674;
	}
	return func_59(iParam0);
}

Vector3 func_59(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

int func_60(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

bool func_61()
{
	return Global_2447174.f_16;
}

int func_62(vector3 vParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam6 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam6 == 0)
		{
			if (func_820(iVar1, bParam2, bParam3))
			{
				if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam5 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_57(iVar1)))
					{
						if ((!bParam4 || (bParam4 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && uParam7) && bParam4) && func_63(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_59(iVar1), vParam0, true) < fParam1)
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

int func_63(int iParam0)
{
	if (func_67(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2492157 = { func_66(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2492157))
	{
		return 1;
	}
	if (func_64(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_64(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_65(iParam0);
	if (!iVar0 == func_26())
	{
		if (iVar0 == func_65(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_65(int iParam0)
{
	if (iParam0 != func_26())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_26();
}

struct<13> func_66(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_67(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		Global_2492157 = { func_66(iParam0) };
		Global_2492170 = { func_66(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2492157))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2492170))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2492087, 35, &Global_2492157);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2492122, 35, &Global_2492170);
				if (Global_2492087 == Global_2492122)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_68(var uParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10);
	if (!func_69(Local_98.f_117[iVar0 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_21(&(Local_564[iVar0 /*2*/])) || (func_21(&(Local_564[iVar0 /*2*/])) && func_18(&(Local_564[iVar0 /*2*/]), 10000, 0)))
		{
			*uParam0 = iVar0;
			return 1;
		}
	}
	return 0;
}

bool func_69(vector3 vParam0, vector3 vParam1, bool bParam2)
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

bool func_70(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_71()
{
	int iVar0;
	int iVar1;
	
	if (Local_98.f_279 == 0)
	{
		iVar0 = Local_98.f_305[0];
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= Local_98.f_279)
		{
			iVar0 = (iVar0 + Local_98.f_305[iVar1]);
			iVar1++;
		}
	}
	return iVar0;
}

int func_72()
{
	int iVar0;
	int iVar1;
	
	switch (Local_98.f_27)
	{
		case joaat("savage"):
		case joaat("rhino"):
		case joaat("hydra"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_98.f_305[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_73(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	if (func_96() == 3)
	{
		return 0;
	}
	if (Local_98.f_242 < iVar0)
	{
	}
	if (Local_98.f_251 >= iVar0)
	{
		return 0;
	}
	if (func_96() > 1)
	{
		iVar1 = func_86();
		if (Local_98.f_252 >= iVar1)
		{
			return 0;
		}
	}
	if (func_70(Local_98.f_240) && func_70(Local_98.f_239))
	{
		if (func_74(iParam0))
		{
			if (MISC::IS_BIT_SET(Local_98.f_245, iParam0))
			{
				Local_98.f_249++;
				Local_98.f_251++;
				Local_98.f_252++;
				MISC::CLEAR_BIT(&(Local_98.f_245), iParam0);
				if (!MISC::IS_BIT_SET(Local_98.f_3, 19))
				{
					MISC::SET_BIT(&(Local_98.f_3), 19);
				}
			}
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0)
{
	if (NETWORK::CAN_REGISTER_MISSION_ENTITIES(4, 1, 0, 0))
	{
		if (func_80(iParam0))
		{
			if (func_75(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_75(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	if (func_107(Local_98.f_73[iParam0]) && MISC::IS_BIT_SET(Local_98.f_245, iParam0))
	{
		if (func_79(Local_98.f_73[iParam0]))
		{
			if (Local_98.f_116 <= 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0])) == joaat("insurgent"))
				{
					Local_98.f_116 = 2;
				}
				else
				{
					Local_98.f_116 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0])) + 1;
					if (Local_98.f_116 > 4)
					{
						Local_98.f_116 = 4;
					}
				}
			}
			iVar6 = 0;
			while (iVar6 < Local_98.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_48[(iParam0 * 4 + iVar6)]))
				{
					if (func_70(Local_98.f_239))
					{
						iVar4 = (iVar6 - 1);
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0])) == joaat("insurgent"))
						{
							if (iVar4 == 0)
							{
								iVar4 = 7;
							}
						}
						if (func_78(&(Local_98.f_48[(iParam0 * 4 + iVar6)]), Local_98.f_73[iParam0], 22, Local_98.f_239, iVar4, 1, 1, 1))
						{
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), iLocal_112);
							ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1, 0);
							PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 0);
							WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_appistol"), 25000, false);
							if (func_77())
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							else
							{
								WEAPON::GIVE_DELAYED_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), joaat("weapon_advancedrifle"), 25000, true);
							}
							fVar5 = 10f;
							fVar5 = (fVar5 * func_53());
							PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 2, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 3, false);
							PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 2);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 0, true);
							PED::SET_PED_TARGET_LOSS_RESPONSE(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::_0x52D59AB61DDC05DD(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND((200f * Global_262145.f_153)), 0);
							PED::SET_PED_AS_ENEMY(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 42, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 52, true);
							PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 53, true);
							PED::SET_PED_DIES_IN_WATER(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_DIES_INSTANTLY_IN_WATER(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_DIES_IN_SINKING_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 151, false);
							if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]))))
							{
								if (iVar6 == 0)
								{
									PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 299f);
									fVar5 = 3f;
									fVar5 = (fVar5 * func_76());
									PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
									PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 50);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 52, true);
									PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 53, true);
									PED::SET_PED_FIRING_PATTERN(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), -1857128337);
								}
								fVar0 = Global_262145.f_10695;
								fVar1 = Global_262145.f_10696;
								fVar2 = Global_262145.f_10697;
								fVar3 = Global_262145.f_10698;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							else if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]))))
							{
								PED::SET_PED_SEEING_RANGE(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 299f);
								fVar5 = 3f;
								fVar5 = (fVar5 * func_76());
								PED::SET_PED_ACCURACY(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), SYSTEM::ROUND(fVar5));
								PED::SET_PED_SHOOT_RATE(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 50);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 52, true);
								PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 53, true);
								fVar0 = Global_262145.f_10695;
								fVar1 = Global_262145.f_10696;
								fVar2 = Global_262145.f_10697;
								fVar3 = Global_262145.f_10698;
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 23, fVar0);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 24, fVar1);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 25, fVar2);
								PED::SET_COMBAT_FLOAT(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 26, fVar3);
							}
							iVar7 = (iParam0 * 4 + iVar6);
							if (MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar7)], func_88(iVar7)))
							{
								MISC::CLEAR_BIT(&(Local_98.f_272[func_89(iVar7)]), func_88(iVar7));
							}
							PED::SET_PED_DIES_WHEN_INJURED(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), true);
							PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1);
							ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), 1, iLocal_111);
							Local_98.f_250++;
							func_104(&(Local_98.f_414[(iParam0 * 4 + iVar6) /*2*/]));
							func_19(&(Local_98.f_414[(iParam0 * 4 + iVar6) /*2*/]), 0, 0);
							if (func_21(&(Local_98.f_364[(iParam0 * 4 + iVar6) /*2*/])))
							{
								func_104(&(Local_98.f_364[(iParam0 * 4 + iVar6) /*2*/]));
							}
						}
					}
				}
				iVar6++;
			}
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < Local_98.f_116)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (func_31(Local_98.f_48[(iParam0 * 4 + iVar6)]))
				{
					return 0;
				}
				else if (!PED::IS_PED_SITTING_IN_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[(iParam0 * 4 + iVar6)]), NETWORK::NET_TO_VEH(Local_98.f_73[iParam0])))
				{
					return 0;
				}
				iVar6++;
			}
			return 1;
		}
	}
	return 0;
}

float func_76()
{
	if (func_719())
	{
		return Global_262145.f_10714;
	}
	return Global_262145.f_10434;
}

int func_77()
{
	if (MISC::IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
	{
		return 1;
	}
	return 0;
}

int func_78(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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

int func_79(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(iParam0);
		return NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0);
	}
	return 0;
}

int func_80(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	vector3 vVar10;
	var uVar11;
	bool bVar12;
	
	iVar0 = func_96();
	Local_98.f_240 = func_43(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_73[iParam0]))
	{
		iVar2 = 0;
		while (iVar2 < Local_98.f_116)
		{
			iVar3 = (iParam0 * 4 + iVar2);
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_48[iVar3]))
			{
				return 0;
			}
			iVar2++;
		}
		if (func_70(Local_98.f_240) && !MISC::IS_BIT_SET(Local_98.f_245, iParam0))
		{
			fVar8 = 300f;
			if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_98.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_240))
			{
				fVar7 = 300f;
			}
			else
			{
				fVar7 = 100f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_240))
			{
				fVar8 = 800f;
			}
			iVar9 = 0;
			while (iVar9 < Local_98.f_242)
			{
				if (func_85(iVar9))
				{
					func_84(Local_98.f_240, iVar9, &vVar10, &uVar11);
					if (!func_69(vVar10, 0f, 0f, 0f, 0))
					{
						if (func_55(vVar10, 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, fVar8, 0, -1, 1, fVar7, 0, 0, 0, 0))
						{
							vVar4 = { vVar10 };
							fVar5 = uVar11;
							iVar6 = 1;
							func_7(&(Local_98.f_186[iVar9 /*2*/]), 0, 0);
							iVar9 = Local_98.f_242;
						}
					}
				}
				iVar9++;
			}
			if (iVar6 == 1)
			{
				bVar12 = true;
				if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_98.f_240) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_240))
				{
					bVar12 = false;
				}
				if (func_83(iParam0))
				{
					if (func_82(&(Local_98.f_73[iParam0]), Local_98.f_240, vVar4, fVar5, 1, 1, 1, 0, bVar12, 1, 0, 0, 0, 0))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 2);
						VEHICLE::_0x2311DD7159F00582(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 1);
						VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), false, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 2);
						VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), true, true, 0);
						VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 0);
						VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_98.f_240))
						{
							VEHICLE::SET_HELI_BLADES_FULL_SPEED(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]));
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 1);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]));
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), false);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_240))
						{
							VEHICLE::CONTROL_LANDING_GEAR(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 3);
							ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), false);
							ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 1);
							PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]));
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 30f);
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 1);
							VEHICLE::_0xC361AA040D6637A8(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 1);
							fVar1 = 500f;
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), SYSTEM::ROUND(fVar1), 0);
						}
						else
						{
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), true, 1);
						}
						if (func_96() == 5)
						{
							fVar1 = SYSTEM::TO_FLOAT(func_81());
							ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), SYSTEM::ROUND(fVar1), 0);
							ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), SYSTEM::ROUND(fVar1));
							VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), fVar1);
							VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 0);
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_0x4056EA1105F5ABD7(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), fVar1);
							VEHICLE::_0xFE205F38AAA58E5B(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), fVar1);
						}
						if (func_21(&(Local_98.f_336[iParam0 /*2*/])))
						{
							func_104(&(Local_98.f_336[iParam0 /*2*/]));
						}
						MISC::CLEAR_BIT(&(Local_98.f_253), iParam0);
						MISC::SET_BIT(&(Local_98.f_245), iParam0);
						ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 1, iLocal_111);
						if (MISC::IS_BIT_SET(Local_98.f_271, iParam0))
						{
							MISC::CLEAR_BIT(&(Local_98.f_271), iParam0);
						}
						if (MISC::IS_BIT_SET(Local_98.f_303, iParam0))
						{
							MISC::CLEAR_BIT(&(Local_98.f_303), iParam0);
						}
						if (Local_98.f_240 == joaat("hydra") || Local_98.f_240 == joaat("savage"))
						{
						}
					}
				}
			}
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_73[iParam0]))
	{
		return 0;
	}
	return 1;
}

var func_81()
{
	if (func_719())
	{
		return Global_262145.f_10712;
	}
	return Global_262145.f_10432;
}

int func_82(var uParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
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
		Global_2512808.f_5827 = iVar1;
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

int func_83(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (MISC::IS_BIT_SET(Local_101[iVar0 /*18*/].f_6, iParam0))
			{
				iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

void func_84(int iParam0, int iParam1, var uParam2, var uParam3)
{
	bool bVar0;
	
	bVar0 = (VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0));
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
			if (!func_69(Local_98.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_98.f_159[iParam1 /*3*/] };
				*uParam3 = Local_98.f_175[iParam1];
			}
			break;
		
		case joaat("hydra"):
			if (!func_69(Local_98.f_159[iParam1 /*3*/], 0f, 0f, 0f, 0))
			{
				*uParam2 = { Local_98.f_159[iParam1 /*3*/] };
				*uParam3 = Local_98.f_175[iParam1];
			}
			break;
		
		case joaat("savage"):
			switch (Local_98.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1292.189f, -2572.868f, 22.9452f };
								*uParam3 = 332.6443f;
								break;
							
							case 1:
								*uParam2 = { -1062.843f, -3502.913f, 23.1484f };
								*uParam3 = 326.474f;
								break;
							
							case 2:
								*uParam2 = { -1842.189f, -3149.964f, 22.9444f };
								*uParam3 = 177.2589f;
								break;
							
							case 3:
								*uParam2 = { -1271.333f, -2267.149f, 12.9454f };
								*uParam3 = 243.2036f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -892.8904f, -2935.942f, 12.9444f };
								*uParam3 = 50.7848f;
								break;
							
							case 1:
								*uParam2 = { -1290.713f, -2658.844f, 13.0516f };
								*uParam3 = 152.2952f;
								break;
							
							case 2:
								*uParam2 = { -1157.682f, -2725.707f, 12.9534f };
								*uParam3 = 187.5114f;
								break;
							
							case 3:
								*uParam2 = { -949.6019f, -3072.991f, 12.9444f };
								*uParam3 = 63.8501f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
							
							case 1:
								*uParam2 = { 2259.96f, 5608.534f, 63.366f };
								*uParam3 = 171.56f;
								break;
							
							case 2:
								*uParam2 = { 1042.117f, 4282.784f, 47.277f };
								*uParam3 = 284.7637f;
								break;
							
							case 3:
								*uParam2 = { 2884.986f, 4600.043f, 56.9465f };
								*uParam3 = 80.1844f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							
							case 1:
								*uParam2 = { 2439.703f, 4993.831f, 44.9932f };
								*uParam3 = 136.377f;
								break;
							
							case 2:
								*uParam2 = { 1972.487f, 4843.981f, 43.13f };
								*uParam3 = 315.4388f;
								break;
							
							case 3:
								*uParam2 = { 1914.954f, 4635.857f, 38.7005f };
								*uParam3 = 344.9064f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -822.0636f, 5744.907f, 16.2672f };
								*uParam3 = 305.7653f;
								break;
							
							case 1:
								*uParam2 = { 22.328f, 6898.096f, 21.23f };
								*uParam3 = 151.4785f;
								break;
							
							case 2:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
							
							case 3:
								*uParam2 = { -596.7572f, 5293.484f, 79.2145f };
								*uParam3 = 339.4657f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							
							case 1:
								*uParam2 = { -38.6174f, 6281.176f, 30.2043f };
								*uParam3 = 32.7307f;
								break;
							
							case 2:
								*uParam2 = { -313.5567f, 6436.651f, 11.6953f };
								*uParam3 = 129.4952f;
								break;
							
							case 3:
								*uParam2 = { -561.0425f, 5638.178f, 38.9797f };
								*uParam3 = 16.7516f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1490.884f, -1955.97f, 79.7973f };
								*uParam3 = 78.8897f;
								break;
							
							case 1:
								*uParam2 = { 594.3433f, -1979.466f, 28.9706f };
								*uParam3 = 319.8794f;
								break;
							
							case 2:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
							
							case 3:
								*uParam2 = { 347.964f, -1427.194f, 85.1742f };
								*uParam3 = 230.1411f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 983.6414f, -1848.797f, 30.0987f };
								*uParam3 = 178.6463f;
								break;
							
							case 1:
								*uParam2 = { 992.1669f, -1506.845f, 30.4275f };
								*uParam3 = 90.1264f;
								break;
							
							case 2:
								*uParam2 = { 771.2441f, -1620.786f, 29.9058f };
								*uParam3 = 313.4008f;
								break;
							
							case 3:
								*uParam2 = { 840.4948f, -1950.51f, 27.9516f };
								*uParam3 = 87.2509f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("valkyrie"):
			switch (Local_98.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -619.1071f, -1856.811f, 38.0408f };
								*uParam3 = 10.5487f;
								break;
							
							case 1:
								*uParam2 = { -273.1338f, -1627.779f, 40.8488f };
								*uParam3 = 77.2743f;
								break;
							
							case 2:
								*uParam2 = { -1157.959f, -1697.113f, 40.3479f };
								*uParam3 = 299.9692f;
								break;
							
							case 3:
								*uParam2 = { -1150.749f, -1708.635f, 40.2485f };
								*uParam3 = 295.9259f;
								break;
							
							case 4:
								*uParam2 = { -1001.754f, -731.3828f, 85.5368f };
								*uParam3 = 232.7072f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -648.1588f, -1632.12f, 23.9175f };
								*uParam3 = 145.9387f;
								break;
							
							case 1:
								*uParam2 = { -850.9597f, -1194.948f, 4.7312f };
								*uParam3 = 2.3024f;
								break;
							
							case 2:
								*uParam2 = { -513.3444f, -967.2039f, 22.5742f };
								*uParam3 = 111.3599f;
								break;
							
							case 3:
								*uParam2 = { -720.752f, -1143.745f, 9.6125f };
								*uParam3 = 126.5029f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1384.463f, 3175.862f, 49.4674f };
								*uParam3 = 107.9207f;
								break;
							
							case 1:
								*uParam2 = { 848.3471f, 3587.832f, 42.0217f };
								*uParam3 = 117.8402f;
								break;
							
							case 2:
								*uParam2 = { -390.1283f, 2557.157f, 99.8288f };
								*uParam3 = 292.5476f;
								break;
							
							case 3:
								*uParam2 = { 1084.247f, 2367.027f, 53.6989f };
								*uParam3 = 53.4222f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 654.4302f, 2752.401f, 40.9669f };
								*uParam3 = 192.1139f;
								break;
							
							case 1:
								*uParam2 = { 91.7939f, 3432.573f, 38.5904f };
								*uParam3 = 246.3809f;
								break;
							
							case 2:
								*uParam2 = { -361.922f, 2954.955f, 24.1579f };
								*uParam3 = 273.6807f;
								break;
							
							case 3:
								*uParam2 = { -180.3412f, 2508.928f, 71.8451f };
								*uParam3 = 7.1243f;
								break;
							
							case 4:
								*uParam2 = { 142.7533f, 2271.567f, 93.6005f };
								*uParam3 = 255.3593f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -394.287f, 4340.043f, 65.1832f };
								*uParam3 = 263.3693f;
								break;
							
							case 1:
								*uParam2 = { 1002.483f, 3175.867f, 48.6918f };
								*uParam3 = 0.497f;
								break;
							
							case 2:
								*uParam2 = { 2325.472f, 3922.296f, 45.2575f };
								*uParam3 = 57.4066f;
								break;
							
							case 3:
								*uParam2 = { 1962.95f, 4785.836f, 51.8872f };
								*uParam3 = 134.6506f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1398.018f, 4520.393f, 52.8047f };
								*uParam3 = 105.7989f;
								break;
							
							case 1:
								*uParam2 = { 366.9009f, 4432.027f, 61.6888f };
								*uParam3 = 204.5592f;
								break;
							
							case 2:
								*uParam2 = { 128.2849f, 4454.878f, 80.3457f };
								*uParam3 = 226.3244f;
								break;
							
							case 3:
								*uParam2 = { -132.4943f, 4295.465f, 41.7475f };
								*uParam3 = 276.3481f;
								break;
							
							case 4:
								*uParam2 = { 1908.425f, 4607f, 36.8242f };
								*uParam3 = 174.8533f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3841.898f, 4234.117f, 15.4291f };
								*uParam3 = 336.9579f;
								break;
							
							case 1:
								*uParam2 = { 2836.958f, 5957.465f, 362.3982f };
								*uParam3 = 225.8444f;
								break;
							
							case 2:
								*uParam2 = { 2624.236f, 5310.019f, 52.1567f };
								*uParam3 = 215.63f;
								break;
							
							case 3:
								*uParam2 = { 2780.447f, 4758.9f, 55.0574f };
								*uParam3 = 326.934f;
								break;
							
							case 4:
								*uParam2 = { 3201.127f, 4657.409f, 190.8286f };
								*uParam3 = 359.7683f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 3756.635f, 4434.785f, 11.7586f };
								*uParam3 = 138.6266f;
								break;
							
							case 1:
								*uParam2 = { 3680.549f, 4492.803f, 23.5887f };
								*uParam3 = 113.1337f;
								break;
							
							case 2:
								*uParam2 = { 3337.639f, 5482.484f, 19.0418f };
								*uParam3 = 157.3183f;
								break;
							
							case 3:
								*uParam2 = { 2766.238f, 4974.986f, 32.7262f };
								*uParam3 = 225.2302f;
								break;
							
							case 4:
								*uParam2 = { 2797.095f, 4923.666f, 33.1334f };
								*uParam3 = 34.0949f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1988.479f, -219.2565f, 42.6251f };
								*uParam3 = 325.2252f;
								break;
							
							case 1:
								*uParam2 = { -1567.165f, -555.6394f, 123.4493f };
								*uParam3 = 24.7442f;
								break;
							
							case 2:
								*uParam2 = { -713.2371f, 195.5196f, 149.754f };
								*uParam3 = 75.542f;
								break;
							
							case 3:
								*uParam2 = { -509.8761f, 1187.824f, 333.8082f };
								*uParam3 = 128.2553f;
								break;
							
							case 4:
								*uParam2 = { -1265.789f, 1493.722f, 203.9673f };
								*uParam3 = 187.8592f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -1570.476f, 1366.453f, 127.6559f };
								*uParam3 = 115.4139f;
								break;
							
							case 1:
								*uParam2 = { -1581.127f, 955.6403f, 157.1481f };
								*uParam3 = 39.5031f;
								break;
							
							case 2:
								*uParam2 = { -1813.683f, 799.5704f, 137.5134f };
								*uParam3 = 188.8774f;
								break;
							
							case 3:
								*uParam2 = { -1912.698f, 509.3147f, 110.6628f };
								*uParam3 = 70.3926f;
								break;
							
							case 4:
								*uParam2 = { -2298.497f, 441.8974f, 173.4667f };
								*uParam3 = 1.8886f;
								break;
							}
					}
					break;
			}
			break;
		
		case joaat("buzzard"):
			switch (Local_98.f_29)
			{
				case 0:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1351.441f, -641.5107f, 83.2342f };
								*uParam3 = 186.1368f;
								break;
							
							case 1:
								*uParam2 = { 636.2282f, -434.6195f, 33.632f };
								*uParam3 = 203.6348f;
								break;
							
							case 2:
								*uParam2 = { 352.4392f, -590.8399f, 83.1657f };
								*uParam3 = 209.917f;
								break;
							
							case 3:
								*uParam2 = { 375.2908f, -1020.433f, 66.5363f };
								*uParam3 = 271.2396f;
								break;
							
							case 4:
								*uParam2 = { 345.1868f, -1426.622f, 85.1742f };
								*uParam3 = 284.6382f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1248.49f, -1131.338f, 37.2874f };
								*uParam3 = 153.8083f;
								break;
							
							case 1:
								*uParam2 = { 1396.414f, -1518.39f, 56.7703f };
								*uParam3 = 134.0967f;
								break;
							
							case 2:
								*uParam2 = { 972.8618f, -1464.828f, 30.3558f };
								*uParam3 = 0.609f;
								break;
							
							case 3:
								*uParam2 = { 935.6596f, -909.6719f, 39.5752f };
								*uParam3 = 271.1971f;
								break;
							
							case 4:
								*uParam2 = { 1156.687f, -768.8879f, 56.4831f };
								*uParam3 = 275.3533f;
								break;
							}
					}
					break;
				
				case 1:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -137.5082f, -168.3033f, 102.7024f };
								*uParam3 = 160.3978f;
								break;
							
							case 1:
								*uParam2 = { -174.828f, -214.6927f, 156.6312f };
								*uParam3 = 258.2675f;
								break;
							
							case 2:
								*uParam2 = { 404.7129f, -24.3335f, 169.3952f };
								*uParam3 = 95.0683f;
								break;
							
							case 3:
								*uParam2 = { 168.3323f, 668.6285f, 215.7082f };
								*uParam3 = 172.5901f;
								break;
							
							case 4:
								*uParam2 = { -608.792f, 660.9065f, 165.6164f };
								*uParam3 = 207.7868f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -166.1217f, -214.9006f, 45.8637f };
								*uParam3 = 257.5103f;
								break;
							
							case 1:
								*uParam2 = { 33.7482f, -95.8814f, 55.3626f };
								*uParam3 = 73.0413f;
								break;
							
							case 2:
								*uParam2 = { 36.568f, 47.4427f, 71.3139f };
								*uParam3 = 158.1279f;
								break;
							
							case 3:
								*uParam2 = { -501.5253f, -67.3569f, 38.6901f };
								*uParam3 = 155.0279f;
								break;
							
							case 4:
								*uParam2 = { -430.6903f, -423.6864f, 31.7928f };
								*uParam3 = 352.977f;
								break;
							}
					}
					break;
				
				case 2:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -468.3117f, 2034.281f, 225.8829f };
								*uParam3 = 183.5655f;
								break;
							
							case 1:
								*uParam2 = { -1572.228f, 838.9957f, 193.9097f };
								*uParam3 = 278.9509f;
								break;
							
							case 2:
								*uParam2 = { -175.6009f, -162.3506f, 102.7024f };
								*uParam3 = 12.7537f;
								break;
							
							case 3:
								*uParam2 = { 494.7073f, 706.4063f, 205.6965f };
								*uParam3 = 75.8614f;
								break;
							
							case 4:
								*uParam2 = { 821.3636f, 1308.909f, 372.5396f };
								*uParam3 = 113.467f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { -803.5167f, 1295.326f, 257.4832f };
								*uParam3 = 209.5666f;
								break;
							
							case 1:
								*uParam2 = { -925.5961f, 1124.77f, 218.7065f };
								*uParam3 = 215.2912f;
								break;
							
							case 2:
								*uParam2 = { -404.5761f, 833.0574f, 224.6128f };
								*uParam3 = 218.3907f;
								break;
							
							case 3:
								*uParam2 = { -303.0683f, 1010.302f, 232.2905f };
								*uParam3 = 78.2628f;
								break;
							
							case 4:
								*uParam2 = { 56.7959f, 1080.651f, 220.6167f };
								*uParam3 = 18.8188f;
								break;
							}
					}
					break;
				
				case 3:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 377.1972f, 4405.938f, 71.4024f };
								*uParam3 = 157.1671f;
								break;
							
							case 1:
								*uParam2 = { -210.0587f, 4223.346f, 53.7504f };
								*uParam3 = 206.9778f;
								break;
							
							case 2:
								*uParam2 = { -318.9394f, 3790.772f, 77.5459f };
								*uParam3 = 258.802f;
								break;
							
							case 3:
								*uParam2 = { -236.0281f, 3088.237f, 47.229f };
								*uParam3 = 304.6536f;
								break;
							
							case 4:
								*uParam2 = { 312.2873f, 2783.272f, 54.9498f };
								*uParam3 = 10.4182f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1111.445f, 3430.153f, 33.0281f };
								*uParam3 = 351.5004f;
								break;
							
							case 1:
								*uParam2 = { 940.4324f, 3582.793f, 32.0891f };
								*uParam3 = 71.8698f;
								break;
							
							case 2:
								*uParam2 = { -177.7739f, 3695.669f, 43.0132f };
								*uParam3 = 195.3546f;
								break;
							
							case 3:
								*uParam2 = { -241.2375f, 3905.453f, 37.3939f };
								*uParam3 = 207.658f;
								break;
							
							case 4:
								*uParam2 = { -77.8371f, 3185.706f, 37.1225f };
								*uParam3 = 280.9105f;
								break;
							}
					}
					break;
				
				case 4:
					if (bVar0)
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 815.4335f, 1311.455f, 372.12f };
								*uParam3 = 258.8483f;
								break;
							
							case 1:
								*uParam2 = { 609.2955f, 205.9871f, 146.2221f };
								*uParam3 = 316.1886f;
								break;
							
							case 2:
								*uParam2 = { 1150.014f, 130.2795f, 90.7203f };
								*uParam3 = 340.2898f;
								break;
							
							case 3:
								*uParam2 = { 1876.22f, 285.6447f, 171.779f };
								*uParam3 = 18.4441f;
								break;
							
							case 4:
								*uParam2 = { 2105.892f, 1586.21f, 99.9212f };
								*uParam3 = 107.1124f;
								break;
						}
					}
					else
					{
						switch (iParam1)
						{
							case 0:
								*uParam2 = { 1199.866f, 1852.856f, 77.9143f };
								*uParam3 = 147.2836f;
								break;
							
							case 1:
								*uParam2 = { 1526.959f, 1717.267f, 108.9733f };
								*uParam3 = 116.5075f;
								break;
							
							case 2:
								*uParam2 = { 1962.413f, 1297.095f, 166.6211f };
								*uParam3 = 14.5081f;
								break;
							
							case 3:
								*uParam2 = { 958.8857f, 1717.174f, 163.6494f };
								*uParam3 = 280.2715f;
								break;
							
							case 4:
								*uParam2 = { 703.955f, 777.3345f, 204.8183f };
								*uParam3 = 308.1731f;
								break;
							}
					}
					break;
			}
			break;
	}
}

int func_85(int iParam0)
{
	if (Local_98.f_228[iParam0] > 0)
	{
		if (!func_21(&(Local_98.f_207[iParam0 /*2*/])))
		{
			func_19(&(Local_98.f_207[iParam0 /*2*/]), 0, 0);
			return 0;
		}
		else if (!func_18(&(Local_98.f_207[iParam0 /*2*/]), Local_98.f_228[iParam0], 0))
		{
			return 0;
		}
	}
	if (func_21(&(Local_98.f_186[iParam0 /*2*/])))
	{
		if (!func_18(&(Local_98.f_186[iParam0 /*2*/]), 20000, 0))
		{
			return 0;
		}
	}
	return 1;
}

var func_86()
{
	return Local_98.f_291[Local_98.f_279];
}

void func_87(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = -894214710;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &vVar0, 3, iParam1);
	}
}

int func_88(int iParam0)
{
	if (iParam0 < 31)
	{
		return iParam0;
	}
	else if (iParam0 < 62)
	{
		return (iParam0 - 31);
	}
	return (iParam0 - func_89(iParam0) * 31);
}

int func_89(int iParam0)
{
	if (iParam0 < 31)
	{
		return 0;
	}
	else if (iParam0 < 62)
	{
		return 1;
	}
	return (iParam0 / 31);
}

void func_90(int iParam0)
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

int func_91(int iParam0)
{
	if (Local_98.f_27 == joaat("hydra"))
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Local_98.f_272[func_89(iParam0)], func_88(iParam0)))
	{
		return 1;
	}
	return 0;
}

bool func_92(int iParam0)
{
	return func_93(iParam0);
}

int func_93(int iParam0)
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iParam0]), 0))
	{
		return 1;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_98.f_48[iParam0]), 0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_94(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]));
	if (iVar0 == joaat("savage"))
	{
		if (MISC::IS_BIT_SET(Local_98.f_271, iParam0))
		{
			return 1;
		}
	}
	else if (iVar0 == joaat("buzzard"))
	{
		if (MISC::IS_BIT_SET(Local_98.f_271, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (Local_98.f_27 != joaat("hydra"))
		{
			return 1;
		}
		if (Local_98.f_27 == joaat("hydra"))
		{
			if (MISC::IS_BIT_SET(Local_98.f_271, iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_95(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 438200710;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &vVar0, 3, iParam1);
	}
}

int func_96()
{
	return Local_98.f_280[Local_98.f_279];
}

void func_97(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = -2113735926;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &vVar0, 3, iParam0);
	}
}

int func_98(int iParam0)
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
			if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 0))
			{
				if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(iVar2, NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), &uVar0))
				{
					return 1;
				}
			}
			else if (NETWORK::_0x83660B734994124D(iVar2, NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), &uVar0))
			{
				return 1;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_99(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 437414358;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam1;
	if (!iParam0 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &vVar0, 3, iParam0);
	}
}

bool func_100(int iParam0)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]));
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar0) || VEHICLE::IS_THIS_MODEL_A_HELI(iVar0))
	{
		return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 0);
	}
	return !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_73[iParam0]), 0);
}

int func_101()
{
	int iVar0;
	int iVar1;
	
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("buzzard"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_98.f_291[iVar0]);
				iVar0++;
			}
			break;
		
		case joaat("hydra"):
			iVar0 = 0;
			while (iVar0 < 10)
			{
				iVar1 = (iVar1 + Local_98.f_291[iVar0]);
				iVar0++;
			}
			break;
	}
	return iVar1;
}

int func_102(int iParam0)
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
			if (func_820(iVar2, 0, 0))
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

int func_103()
{
	if (func_719())
	{
		return Global_262145.f_10705;
	}
	return Global_262145.f_10428;
}

void func_104(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_105(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13)
{
	Param0 = -1942454564;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam13 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &Param0, 14, iParam13);
	}
}

int func_106(int iParam0, int iParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_820(iVar2, 1, 0))
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iVar2), iParam0, 0))
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar2) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) || !bParam2)
				{
					if (iVar2 != PLAYER::PLAYER_ID() || iParam1)
					{
						MISC::SET_BIT(&uVar0, iVar1);
					}
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_107(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return !func_108(NETWORK::NET_TO_VEH(iParam0));
	}
	return 0;
}

int func_108(int iParam0)
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

void func_109()
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(Local_98.f_3, 20))
	{
		return;
	}
	if (!func_21(&uLocal_578))
	{
		func_19(&uLocal_578, 0, 0);
		return;
	}
	if (!func_18(&uLocal_578, 5000, 0))
	{
		return;
	}
	iVar0 = func_110();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_4(NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_24(&(Local_98.f_7[iVar1]));
		}
		iVar1++;
	}
	MISC::SET_BIT(&(Local_98.f_3), 20);
}

int func_110()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Local_98.f_12 != 0)
	{
		return Local_98.f_12;
	}
	if (!func_719())
	{
		Local_98.f_12 = 1;
		return Local_98.f_12;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			if (!func_15(iVar2, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < func_112())
	{
		Local_98.f_12 = 2;
	}
	else if (iVar1 < func_111())
	{
		Local_98.f_12 = 3;
	}
	else
	{
		Local_98.f_12 = 4;
	}
	return Local_98.f_12;
}

int func_111()
{
	return Global_262145.f_10453;
}

int func_112()
{
	return Global_262145.f_10452;
}

void func_113()
{
	int iVar0;
	var uVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
		{
			func_119(iVar0);
			func_118(iVar0, Local_98.f_256[iVar0], Local_98.f_22[iVar0]);
		}
		else if (Local_98.f_594[iVar0 /*4*/].f_1 != -1)
		{
			func_119(iVar0);
		}
		iVar0++;
	}
	func_117();
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			func_116(iVar0);
			if (Local_101[iVar0 /*18*/].f_1 != 0)
			{
				if (Local_101[iVar0 /*18*/].f_9 > -1)
				{
					uVar1 = Local_101[iVar0 /*18*/].f_9;
					func_115(uVar1, Local_101[iVar0 /*18*/].f_8, iVar2);
				}
			}
			else
			{
				func_115(-1, -1, iVar2);
			}
		}
		else if (Local_98.f_465[iVar0 /*4*/].f_1 != -1)
		{
			func_116(iVar0);
		}
		iVar0++;
	}
	func_114();
}

void func_114()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 31;
	while (iVar0 >= 0)
	{
		iVar1 = 31;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_98.f_465[iVar1 /*4*/].f_1 > Local_98.f_465[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_98.f_465[iVar1 /*4*/].f_1;
					uVar3 = Local_98.f_465[iVar1 /*4*/];
					uVar4 = Local_98.f_465[iVar1 /*4*/].f_2;
					Local_98.f_465[iVar1 /*4*/].f_1 = Local_98.f_465[(iVar1 - 1) /*4*/].f_1;
					Local_98.f_465[iVar1 /*4*/] = Local_98.f_465[(iVar1 - 1) /*4*/];
					Local_98.f_465[iVar1 /*4*/].f_2 = Local_98.f_465[(iVar1 - 1) /*4*/].f_2;
					Local_98.f_465[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_98.f_465[(iVar1 - 1) /*4*/] = uVar3;
					Local_98.f_465[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_115(int iParam0, int iParam1, int iParam2)
{
	Local_98.f_465[iParam2 /*4*/] = iParam0;
	Local_98.f_465[iParam2 /*4*/].f_1 = iParam1;
	Local_98.f_465[iParam2 /*4*/].f_2 = iParam2;
}

void func_116(int iParam0)
{
	Local_98.f_465[iParam0 /*4*/] = -1;
	Local_98.f_465[iParam0 /*4*/].f_2 = -1;
	Local_98.f_465[iParam0 /*4*/].f_1 = -1;
}

void func_117()
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	var uVar4;
	
	iVar0 = 3;
	while (iVar0 >= 0)
	{
		iVar1 = 3;
		while (iVar1 >= 0)
		{
			if ((iVar1 - 1) >= 0)
			{
				if (Local_98.f_594[iVar1 /*4*/].f_1 > Local_98.f_594[(iVar1 - 1) /*4*/].f_1)
				{
					uVar2 = Local_98.f_594[iVar1 /*4*/].f_1;
					uVar3 = Local_98.f_594[iVar1 /*4*/];
					uVar4 = Local_98.f_594[iVar1 /*4*/].f_2;
					Local_98.f_594[iVar1 /*4*/].f_1 = Local_98.f_594[(iVar1 - 1) /*4*/].f_1;
					Local_98.f_594[iVar1 /*4*/] = Local_98.f_594[(iVar1 - 1) /*4*/];
					Local_98.f_594[iVar1 /*4*/].f_2 = Local_98.f_594[(iVar1 - 1) /*4*/].f_2;
					Local_98.f_594[(iVar1 - 1) /*4*/].f_1 = uVar2;
					Local_98.f_594[(iVar1 - 1) /*4*/] = uVar3;
					Local_98.f_594[(iVar1 - 1) /*4*/].f_2 = uVar4;
				}
			}
			iVar1 = (iVar1 + -1);
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_118(int iParam0, var uParam1, var uParam2)
{
	Local_98.f_594[iParam0 /*4*/] = iParam0;
	Local_98.f_594[iParam0 /*4*/].f_1 = uParam1;
	Local_98.f_594[iParam0 /*4*/].f_2 = uParam2;
}

void func_119(int iParam0)
{
	Local_98.f_594[iParam0 /*4*/] = -1;
	Local_98.f_594[iParam0 /*4*/].f_1 = -1;
	Local_98.f_594[iParam0 /*4*/].f_2 = -1;
}

int func_120()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (!func_121(iVar1))
		{
			func_104(&(Local_98.f_5));
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_98.f_13, iVar1))
		{
			func_104(&(Local_98.f_5));
			return 0;
		}
		else if (func_4(NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), 1, 0, 0, 0, 0, 1, 0))
		{
			func_104(&(Local_98.f_5));
			return 0;
		}
		iVar1++;
	}
	if (!func_21(&(Local_98.f_5)))
	{
		func_19(&(Local_98.f_5), 0, 0);
	}
	else if (func_18(&(Local_98.f_5), 1500, 0))
	{
		return 1;
	}
	return 0;
}

int func_121(int iParam0)
{
	if (func_107(Local_98.f_7[iParam0]))
	{
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), -1, 0) != 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_122()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_719())
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
		{
			if (func_107(Local_98.f_7[iVar0]))
			{
				iVar1++;
				iVar2 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 < Local_98.f_12)
	{
		Local_98.f_12 = iVar1;
	}
	if (Local_98.f_12 <= 1)
	{
		MISC::CLEAR_BIT(&(Local_98.f_3), 8);
		if (!func_107(Local_98.f_7[0]))
		{
			if (func_107(Local_98.f_7[iVar2]))
			{
				func_24(&(Local_98.f_7[0]));
				Local_98.f_7[0] = Local_98.f_7[iVar2];
			}
		}
	}
}

void func_123()
{
	bool bVar0;
	
	if (!func_719())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_98.f_15 != false;
			}
			else
			{
				bVar0 = Local_98.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = MISC::IS_BIT_SET(Local_98.f_3, 9);
	}
	if (bVar0)
	{
		if (Local_98.f_413 == -1)
		{
			Local_98.f_413 = func_125();
		}
		if (!func_21(&(Local_98.f_326)))
		{
			func_19(&(Local_98.f_326), 0, 0);
		}
		else if (!MISC::IS_BIT_SET(Local_98.f_3, 4))
		{
			if ((Local_98.f_413 - func_124(&(Local_98.f_326), 0, 0)) < 0)
			{
				MISC::SET_BIT(&(Local_98.f_3), 4);
			}
		}
	}
	else if (func_21(&(Local_98.f_326)))
	{
		func_104(&(Local_98.f_326));
		Local_98.f_413 = (Local_98.f_413 - func_124(&(Local_98.f_326), 0, 0));
	}
}

int func_124(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0);
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(NETWORK::_0x89023FBBF9200E9F(), *uParam0);
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0);
}

var func_125()
{
	if (func_719())
	{
		return Global_262145.f_10715;
	}
	return Global_262145.f_10435;
}

void func_126()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	bVar5 = false;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iLocal_114[iVar0] = 0;
		iLocal_100[iVar0] = -2;
		iLocal_115[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	if (Local_98 != 4)
	{
		iLocal_105 = 0;
		while (iLocal_105 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_105)))
			{
				iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_105));
				if (!func_15(iVar7, 0))
				{
					if (Local_101[iLocal_105 /*18*/].f_1 != 0)
					{
						iVar2++;
					}
					iVar1++;
					iVar0 = 0;
					while (iVar0 < 4)
					{
						func_133(iLocal_105, iVar0, iVar7);
						iVar0++;
					}
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 5)
					{
						func_132(iLocal_105, iVar0);
						iVar0++;
					}
					if (!MISC::IS_BIT_SET(Local_98.f_3, 14))
					{
						if (!MISC::IS_BIT_SET(Local_101[iLocal_105 /*18*/].f_2, 9))
						{
							iVar6++;
						}
					}
					iVar0 = 0;
					while (iVar0 <= 23)
					{
						func_131(iLocal_105, iVar0);
						iVar0++;
					}
					if (!bVar5)
					{
						if (!MISC::IS_BIT_SET(Local_101[iLocal_105 /*18*/].f_2, 8))
						{
							bVar5 = true;
						}
					}
					func_129(iLocal_105, iVar7);
					if (func_820(iVar7, 1, 1))
					{
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (Local_98.f_17[iVar0] == func_26())
							{
								if (MISC::IS_BIT_SET(Local_101[iLocal_105 /*18*/].f_2, (0 + iVar0)))
								{
									Local_98.f_17[iVar0] = iVar7;
								}
							}
							else if (Local_98.f_17[iVar0] == iVar7 && Local_98.f_241 == 0)
							{
								if (!MISC::IS_BIT_SET(Local_101[iLocal_105 /*18*/].f_2, (0 + iVar0)))
								{
									Local_98.f_17[iVar0] = func_26();
								}
							}
							iVar0++;
						}
					}
				}
			}
			iLocal_105++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!MISC::IS_BIT_SET(Local_98.f_13, iVar0))
		{
			if (iLocal_114[iVar0] == func_128() && func_121(iVar0))
			{
				MISC::SET_BIT(&(Local_98.f_13), iVar0);
			}
			if (!MISC::IS_BIT_SET(Local_98.f_14, iVar0))
			{
				if (iLocal_114[iVar0] >= 1 && func_121(iVar0))
				{
					MISC::SET_BIT(&(Local_98.f_14), iVar0);
				}
			}
			else if (iLocal_114[iVar0] == 0 || !func_121(iVar0))
			{
				if (MISC::IS_BIT_SET(Local_98.f_14, iVar0))
				{
					MISC::CLEAR_BIT(&(Local_98.f_14), iVar0);
					if (iLocal_114[iVar0] == 0)
					{
						if (Local_98.f_241 >= 1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
							{
								func_24(&(Local_98.f_7[iVar0]));
							}
						}
					}
				}
			}
			if (!MISC::IS_BIT_SET(Local_98.f_15, iVar0) && func_121(iVar0))
			{
				if (iLocal_114[iVar0] >= 2)
				{
					MISC::SET_BIT(&(Local_98.f_15), iVar0);
				}
			}
			else if (iLocal_114[iVar0] <= 1 || !func_121(iVar0))
			{
				if (MISC::IS_BIT_SET(Local_98.f_15, iVar0))
				{
					MISC::CLEAR_BIT(&(Local_98.f_15), iVar0);
				}
			}
		}
		else if (iLocal_114[iVar0] < func_128() || !func_121(iVar0))
		{
			MISC::CLEAR_BIT(&(Local_98.f_13), iVar0);
		}
		if (Local_98.f_266[iVar0] != iLocal_114[iVar0])
		{
			Local_98.f_266[iVar0] = iLocal_114[iVar0];
			if (Local_98.f_241 == 1)
			{
				if (Local_98.f_266[iVar0] == 0)
				{
					if (!MISC::IS_BIT_SET(Local_98.f_616, iVar0))
					{
						MISC::SET_BIT(&(Local_98.f_616), iVar0);
					}
				}
			}
		}
		if (Local_98.f_241 == 0)
		{
			if (func_719())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
				{
					iVar3 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]));
					if (iLocal_114[iVar0] >= func_127(iVar3) && func_121(iVar0))
					{
						iLocal_115[iVar0] = 1;
					}
				}
			}
		}
		if (Local_98.f_241 == 1)
		{
			if (Local_98.f_256[iVar0] != iLocal_100[iVar0])
			{
				if (iLocal_100[iVar0] >= 0)
				{
					if (iLocal_100[iVar0] > Local_98.f_256[iVar0])
					{
						Local_98.f_256[iVar0] = iLocal_100[iVar0];
						bVar4 = true;
					}
					else
					{
						iVar8 = (Local_98.f_256[iVar0] - iLocal_100[iVar0]);
						if (Local_98.f_261[iVar0] != iVar8)
						{
							Local_98.f_261[iVar0] = iVar8;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar4)
	{
		func_113();
	}
	if (!MISC::IS_BIT_SET(Local_98.f_3, 11))
	{
		if (!bVar5)
		{
			MISC::SET_BIT(&(Local_98.f_3), 11);
		}
	}
	iVar0 = 0;
	iVar9 = 0;
	if (Local_98.f_241 == 0)
	{
		if (func_719())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (iLocal_115[iVar0])
				{
					iVar9++;
				}
				iVar0++;
			}
			if (!MISC::IS_BIT_SET(Local_98.f_3, 9))
			{
				if (iVar9 >= 2)
				{
					MISC::SET_BIT(&(Local_98.f_3), 9);
				}
			}
			else if (iVar9 < 2)
			{
				MISC::CLEAR_BIT(&(Local_98.f_3), 9);
			}
		}
	}
	if (Local_98.f_241 == 0)
	{
		if (!func_21(&(Local_98.f_360)))
		{
			func_19(&(Local_98.f_360), 0, 0);
		}
		else if (func_18(&(Local_98.f_360), 5000, 0))
		{
			if (!MISC::IS_BIT_SET(Local_98.f_3, 14))
			{
				if (func_719())
				{
					if (Local_98.f_27 == joaat("valkyrie"))
					{
						if (iVar6 < 4)
						{
							MISC::SET_BIT(&(Local_98.f_3), 14);
						}
					}
					else if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_98.f_3), 14);
					}
				}
				else if (Local_98.f_27 == joaat("valkyrie"))
				{
					if (iVar6 < 2)
					{
						MISC::SET_BIT(&(Local_98.f_3), 14);
					}
				}
				else if (iVar6 < 1)
				{
					MISC::SET_BIT(&(Local_98.f_3), 14);
				}
			}
		}
	}
	if (iVar1 > Local_98.f_614)
	{
		Local_98.f_614 = iVar1;
	}
	else
	{
		Local_98.f_613 = (Local_98.f_614 - iVar1);
	}
	if (iVar2 > Local_98.f_615)
	{
		Local_98.f_615 = iVar2;
	}
}

int func_127(int iParam0)
{
	switch (iParam0)
	{
		case joaat("rhino"):
			return 1;
		
		case joaat("hydra"):
			return 1;
		
		case joaat("savage"):
			return 1;
		
		case joaat("valkyrie"):
			return 2;
		
		case joaat("buzzard"):
			return 1;
		
		default:
	}
	return 99;
}

int func_128()
{
	return Local_98.f_28;
}

void func_129(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (!MISC::IS_BIT_SET(Local_98.f_16, iParam0))
	{
		if (MISC::IS_BIT_SET(Local_101[iParam0 /*18*/].f_2, 12))
		{
			func_130(iParam1, 1);
			MISC::SET_BIT(&(Local_98.f_16), iParam0);
		}
		else if (Local_98.f_241 >= 1)
		{
			if (Local_101[iParam0 /*18*/].f_1 == 0)
			{
				func_130(iParam1, 1);
				MISC::SET_BIT(&(Local_98.f_16), iParam0);
			}
			else if (Local_101[iParam0 /*18*/].f_17 >= 2)
			{
				iVar1 = 0;
				while (iVar1 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar1]))
					{
						if (func_107(Local_98.f_7[iVar1]))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(iParam1), NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), 0))
							{
								bVar0 = true;
							}
						}
					}
					iVar1++;
				}
				if (!bVar0)
				{
					func_130(iParam1, 1);
					MISC::SET_BIT(&(Local_98.f_16), iParam0);
				}
			}
		}
	}
	else if (Local_98.f_241 < 1)
	{
		if (!MISC::IS_BIT_SET(Local_101[iParam0 /*18*/].f_2, 12))
		{
			func_130(iParam1, 0);
			MISC::CLEAR_BIT(&(Local_98.f_16), iParam0);
		}
	}
}

void func_130(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), iParam0, iParam1);
		}
		iVar0++;
	}
}

void func_131(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_98.f_272[func_89(iParam1)], func_88(iParam1)))
	{
		if (MISC::IS_BIT_SET(Local_101[iParam0 /*18*/].f_3[func_89(iParam1)], func_88(iParam1)))
		{
			MISC::SET_BIT(&(Local_98.f_272[func_89(iParam1)]), func_88(iParam1));
			if (Local_101[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iParam1]))
			{
				if (!func_31(Local_98.f_48[iParam1]))
				{
					if (!func_92(iParam1))
					{
						MISC::CLEAR_BIT(&(Local_98.f_272[func_89(iParam1)]), func_88(iParam1));
					}
					else if (!PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iParam1]), 0))
					{
						if (iParam1 >= 20)
						{
							MISC::CLEAR_BIT(&(Local_98.f_272[func_89(iParam1)]), func_88(iParam1));
						}
					}
				}
			}
		}
	}
}

void func_132(int iParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(Local_98.f_271, iParam1))
	{
		if (MISC::IS_BIT_SET(Local_101[iParam0 /*18*/].f_6, iParam1))
		{
			MISC::SET_BIT(&(Local_98.f_271), iParam1);
			if (Local_101[iParam0 /*18*/].f_17 < 2)
			{
			}
			if (MISC::IS_BIT_SET(Local_98.f_303, iParam1))
			{
				if (!MISC::IS_BIT_SET(Local_98.f_253, iParam1))
				{
					Local_98.f_251 = (Local_98.f_251 - 1);
					if (func_96() > 1)
					{
						if (Local_98.f_252 > 0)
						{
							Local_98.f_302++;
							func_95(iParam1, func_102(1));
						}
					}
					MISC::SET_BIT(&(Local_98.f_253), iParam1);
				}
				if (func_21(&(Local_98.f_336[iParam1 /*2*/])))
				{
					func_104(&(Local_98.f_336[iParam1 /*2*/]));
				}
				func_24(&(Local_98.f_73[iParam1]));
				MISC::CLEAR_BIT(&(Local_98.f_303), iParam1);
			}
		}
	}
}

void func_133(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(Local_101[iParam0 /*18*/].f_1, iParam1))
	{
		iLocal_114[iParam1]++;
		if (iLocal_100[iParam1] < 0)
		{
			if (Local_101[iParam0 /*18*/].f_8 >= 0)
			{
				if (Local_98.f_261[iParam1] > 0)
				{
					iLocal_100[iParam1] = Local_98.f_261[iParam1];
				}
				else
				{
					iLocal_100[iParam1] = 0;
				}
			}
		}
		iLocal_100[iParam1] = (iLocal_100[iParam1] + Local_101[iParam0 /*18*/].f_8);
		if (Local_98.f_241 >= 1)
		{
			if (Local_98.f_22[iParam1] == func_26())
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iParam1]))
				{
					if (func_107(Local_98.f_7[iParam1]))
					{
						iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[iParam1]), -1, 0);
						if (iVar1 != 0)
						{
							if (PED::IS_PED_A_PLAYER(iVar1))
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
								if (iVar0 == iParam2)
								{
									Local_98.f_22[iParam1] = iParam2;
									func_113();
								}
							}
						}
					}
				}
			}
		}
		if (!MISC::IS_BIT_SET(Local_98.f_319, iParam1))
		{
			if (Local_101[iParam0 /*18*/].f_10 > -1)
			{
				MISC::SET_BIT(&(Local_98.f_319), iParam1);
				func_19(&(Local_98.f_349[iParam1 /*2*/]), 0, 0);
			}
		}
	}
	if (Local_98.f_22[iParam1] != func_26())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_98.f_22[iParam1]))
		{
			iVar0 = func_134(iParam1, 1);
			if (iVar0 != func_26())
			{
				Local_98.f_22[iParam1] = iVar0;
			}
			else
			{
				Local_98.f_22[iParam1] = func_26();
			}
		}
		else if (func_15(Local_98.f_22[iParam1], 0))
		{
			Local_98.f_22[iParam1] = func_26();
			func_113();
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(Local_98.f_22[iParam1]);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (func_107(Local_98.f_7[iParam1]))
				{
					if (!PED::IS_PED_IN_VEHICLE(iVar1, NETWORK::NET_TO_VEH(Local_98.f_7[iParam1]), 0))
					{
						iVar0 = func_134(iParam1, 1);
						if (iVar0 != func_26())
						{
							Local_98.f_22[iParam1] = iVar0;
						}
						else
						{
							Local_98.f_22[iParam1] = func_26();
						}
					}
				}
			}
		}
	}
}

int func_134(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_26();
	if (iParam0 >= 0)
	{
		iVar3 = 0;
		while (iVar3 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3)))
			{
				if (iVar0 == func_26())
				{
					if (Local_101[iVar3 /*18*/].f_17 == 1)
					{
						if (MISC::IS_BIT_SET(Local_101[iVar3 /*18*/].f_1, iParam0))
						{
							if (!bParam1)
							{
								iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
							}
							else
							{
								iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
								if (func_107(Local_98.f_7[iParam0]))
								{
									iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
									if (!PED::IS_PED_INJURED(iVar2))
									{
										if (PED::IS_PED_IN_VEHICLE(iVar2, NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 0))
										{
											iVar0 = iVar1;
										}
									}
								}
							}
						}
					}
				}
			}
			iVar3++;
		}
	}
	return iVar0;
}

void func_135(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	vVar0.x = 1107039707;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	iVar1 = func_136(1, 1);
	if (!iVar1 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &vVar0, 3, iVar1);
	}
}

var func_136(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (func_820(iVar2, 0, 0))
		{
			if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
			{
				if (bParam1)
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
				else if (!func_15(iVar2, 0))
				{
					MISC::SET_BIT(&uVar0, iVar1);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_137(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
		case 139:
		case 141:
		case 133:
		case 138:
		case 144:
			return iParam1;
		
		case 132:
			switch (iParam2)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						default:
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 0:
									return 15;
								
								case 1:
									return 16;
								
								case 2:
									return 17;
								
								case 3:
									return 18;
								
								case 4:
									return 19;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 0:
									return 20;
								
								case 1:
									return 21;
								
								case 2:
									return 22;
								
								case 3:
									return 24;
								
								case 4:
									return 25;
								
								default:
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									return 26;
								
								case 1:
									return 27;
								
								case 2:
									return 28;
								
								case 3:
									return 29;
								
								case 4:
									return 30;
								
								default:
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 0:
									return 31;
								
								case 1:
									return 32;
								
								case 2:
									return 33;
								
								case 3:
									return 34;
								
								case 4:
									return 35;
								
								default:
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 0;
								
								case 1:
									return 1;
								
								case 2:
									return 2;
								
								case 3:
									return 3;
								
								case 4:
									return 4;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									return 5;
								
								case 1:
									return 6;
								
								case 2:
									return 7;
								
								case 3:
									return 8;
								
								case 4:
									return 9;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									return 10;
								
								case 1:
									return 11;
								
								case 2:
									return 12;
								
								case 3:
									return 13;
								
								case 4:
									return 14;
								
								default:
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									return 41;
								
								default:
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 1:
									return 42;
								
								default:
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 2:
									return 43;
								
								default:
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 3:
									return 44;
								
								default:
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									return 45;
								
								default:
							}
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						case 3:
							return 3;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 4;
						
						case 1:
							return 5;
						
						case 2:
							return 6;
						
						case 3:
							return 7;
						
						case 4:
							return 8;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						case 3:
							return 15;
						
						case 4:
							return 16;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 17;
						
						case 1:
							return 18;
						
						case 2:
							return 19;
						
						case 3:
							return 20;
						
						case 4:
							return 21;
						
						default:
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 0:
							return 22;
						
						case 1:
							return 24;
						
						case 2:
							return 25;
						
						case 3:
							return 26;
						
						default:
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							return 27;
						
						case 1:
							return 28;
						
						case 2:
							return 29;
						
						default:
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							return 30;
						
						case 1:
							return 31;
						
						case 2:
							return 32;
						
						default:
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 0:
							return 33;
						
						case 1:
							return 34;
						
						case 2:
							return 35;
						
						case 3:
							return 36;
						
						default:
					}
					break;
				
				case 9:
					switch (iParam2)
					{
						case 0:
							return 37;
						
						case 1:
							return 38;
						
						case 2:
							return 39;
						
						case 3:
							return 40;
						
						default:
					}
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 0:
							return 12;
						
						case 1:
							return 13;
						
						case 2:
							return 14;
						
						default:
					}
					break;
			}
			break;
		
		case 146:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							return 0;
						
						case 1:
							return 1;
						
						case 2:
							return 2;
						
						default:
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							return 3;
						
						case 1:
							return 4;
						
						case 2:
							return 5;
						
						default:
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							return 6;
						
						case 1:
							return 7;
						
						case 2:
							return 8;
						
						default:
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 0:
							return 9;
						
						case 1:
							return 10;
						
						case 2:
							return 11;
						
						default:
					}
					break;
			}
			break;
	}
	return -1;
}

int func_138()
{
	func_110();
	if (func_70(Local_98.f_27))
	{
		if (func_139())
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_98.f_27);
			return 1;
		}
	}
	return 0;
}

int func_139()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < Local_98.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iVar0]))
		{
			if (func_70(Local_98.f_27))
			{
				if (!MISC::IS_BIT_SET(Local_98.f_244, iVar0))
				{
					MISC::CLEAR_AREA(Local_98.f_30[iVar0 /*3*/], 5f, 1, 0, 0, true);
					MISC::SET_BIT(&(Local_98.f_244), iVar0);
				}
				if (func_82(&(Local_98.f_7[iVar0]), Local_98.f_27, Local_98.f_30[iVar0 /*3*/], Local_98.f_43[iVar0], 1, 1, 1, 1, 0, 1, 0, 0, 0, 0))
				{
					NETWORK::NETWORK_FADE_IN_ENTITY(NETWORK::NET_TO_ENT(Local_98.f_7[iVar0]), 1, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 1);
					VEHICLE::_0xDBC631F109350B8C(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 1);
					VEHICLE::SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0);
					VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), false);
					ENTITY::SET_ENTITY_DYNAMIC(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 1);
					PHYSICS::ACTIVATE_PHYSICS(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]));
					VEHICLE::SET_VEHICLE_ENGINE_ON(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), true, true, 0);
					ENTITY::_SET_ENTITY_SOMETHING(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), true);
					VEHICLE::_0x0AD9E8F87FF7C16F(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0);
					if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_98.f_27) || VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_27))
					{
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0);
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_98.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_141());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_140());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), fVar1);
						if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_27))
						{
							VEHICLE::_0xE16142B94664DEFD(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 1);
						}
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_98.f_27))
						{
							if (fVar1 > 2000f)
							{
								fVar1 = 2000f;
							}
							VEHICLE::_0x4056EA1105F5ABD7(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), fVar1);
							VEHICLE::_0xFE205F38AAA58E5B(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), fVar1);
						}
					}
					else
					{
						if (VEHICLE::IS_THIS_MODEL_A_HELI(Local_98.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_142());
						}
						else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_27))
						{
							fVar1 = SYSTEM::TO_FLOAT(func_141());
						}
						else
						{
							fVar1 = SYSTEM::TO_FLOAT(func_140());
						}
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), SYSTEM::ROUND(fVar1), 0);
						ENTITY::SET_ENTITY_MAX_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), SYSTEM::ROUND(fVar1));
						VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_BODY_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), fVar1);
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), fVar1);
					}
					VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), true);
					if (Local_98.f_27 == joaat("savage"))
					{
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
					{
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), "Not_Allow_As_Saved_Veh", 1);
					}
					if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
					{
						if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), "MPBitset"))
						{
							iVar2 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), "MPBitset");
						}
						MISC::SET_BIT(&iVar2, 10);
						MISC::SET_BIT(&iVar2, 15);
						DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), "MPBitset", iVar2);
					}
					ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0, iLocal_111);
					iVar3 = 0;
					while (iVar3 < 32)
					{
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0, Global_1574725[iVar3]);
						iVar3++;
					}
					VEHICLE::_SET_VEHICLE_CAN_BE_LOCKED_ON(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0, 0);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0);
					ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), false);
					VEHICLE::_0x80E3357FDEF45C21(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0);
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Local_98.f_12)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iVar0]))
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

var func_140()
{
	if (func_719())
	{
		return Global_262145.f_10709;
	}
	return Global_262145.f_10448;
}

var func_141()
{
	if (func_719())
	{
		return Global_262145.f_10710;
	}
	return Global_262145.f_10449;
}

var func_142()
{
	if (func_719())
	{
		return Global_262145.f_10708;
	}
	return Global_262145.f_10447;
}

bool func_143()
{
	int iVar0;
	int iVar1;
	
	if (!func_21(&(Local_98.f_362)))
	{
		func_19(&(Local_98.f_362), 0, 0);
		return 0;
	}
	else if (!func_18(&(Local_98.f_362), 3000, 0))
	{
		return 0;
	}
	if (!MISC::IS_BIT_SET(Local_98.f_3, 10))
	{
		if (func_157(&iVar0))
		{
			if (iVar0 < func_156())
			{
				MISC::SET_BIT(&(Local_98.f_3), 10);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
				if ((IntToFloat(iVar1) < (50f * Global_262145.f_10703) && !Global_262145.f_10701) || Global_262145.f_10702)
				{
					MISC::SET_BIT(&(Local_98.f_3), 8);
					MISC::SET_BIT(&(Local_98.f_3), 10);
				}
				else
				{
					MISC::SET_BIT(&(Local_98.f_3), 10);
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_98.f_3, 10))
	{
		if (Local_98.f_12 == 0)
		{
			func_110();
			return 0;
		}
		if (!MISC::IS_BIT_SET(Local_98.f_3, 13))
		{
			if (func_152())
			{
				if (!func_150(129, Local_98.f_1, Local_98.f_2, 0))
				{
					if (func_144())
					{
						MISC::SET_BIT(&(Local_98.f_3), 13);
					}
					else
					{
						Local_98.f_29 = -1;
					}
				}
				else
				{
					Local_98.f_29 = -1;
				}
			}
		}
	}
	return MISC::IS_BIT_SET(Local_98.f_3, 13);
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_110();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_145(Local_98.f_30[iVar1 /*3*/], 1125515264))
		{
			return 0;
		}
		if (!func_55(Local_98.f_30[iVar1 /*3*/], 1086324736, 1065353216, 1065353216, 1084227584, 1, 1, 1, 1123024896, 0, -1, 1, 50f, 0, 0, 0, 0))
		{
			return 0;
		}
		iVar1++;
	}
	return 1;
}

int func_145(vector3 vParam0, float fParam1)
{
	int iVar0[32];
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar5;
	int iVar6;
	struct<10> Var7;
	int iVar8;
	
	if (Global_2421449.f_84.f_225 == 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	bVar3 = true;
	while (bVar3)
	{
		if (Global_2421449.f_84[iVar2 /*7*/] != -1)
		{
			iVar0[iVar1] = MISC::GET_HASH_KEY(&(Global_2421449.f_84[iVar2 /*7*/].f_1));
			iVar1++;
			if (iVar1 == Global_2421449.f_84.f_225)
			{
				bVar3 = false;
			}
		}
		iVar2++;
		if (iVar2 >= 32)
		{
			bVar3 = false;
		}
	}
	if (iVar1 == 0)
	{
		return 0;
	}
	vVar4 = { 0f, 0f, 0f };
	vVar5 = { vParam0 };
	iVar6 = 0;
	Var7.f_1 = -1;
	Var7.f_2 = -1;
	Var7.f_9 = -1;
	iVar8 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar2 /*26*/].f_12, 11))
		{
			vVar4 = { Global_2359721[iVar2 /*26*/].f_3 };
			vVar5.z = vVar4.z;
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar4, vVar5, true) < fParam1)
			{
				Var7 = { Global_2359721[iVar2 /*26*/].f_15 };
				iVar8 = func_146(&Var7);
				iVar6 = 0;
				while (iVar6 < iVar1)
				{
					if (iVar8 == iVar0[iVar6])
					{
						return 1;
					}
					iVar6++;
				}
			}
		}
		iVar2++;
	}
	return 0;
}

int func_146(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_147(uParam0);
	if (iVar1 == -1)
	{
		return iVar0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_98389[iVar1 /*13*/].f_3;
		
		case 62:
			return Global_907706.f_18805[iVar1 /*13*/].f_3;
		
		default:
	}
	return iVar0;
}

int func_147(var uParam0)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return -1;
	}
	if (func_149(uParam0->f_1))
	{
		if (func_148(uParam0))
		{
			return 9999;
		}
		return -1;
	}
	iVar0 = 0;
	switch (uParam0->f_2)
	{
		case 63:
			if (MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_794709.f_4[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 1118)
			{
				if (MISC::IS_BIT_SET(Global_794709.f_4[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_794709.f_4[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 62:
			if (MISC::IS_BIT_SET(Global_907706.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_907706.f_1204[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
				{
					return uParam0->f_1;
				}
			}
			if (!MISC::IS_BIT_SET(Global_907706.f_1204[uParam0->f_1 /*88*/].f_76, 13))
			{
				if (Global_1310987.f_5)
				{
					return -1;
				}
			}
			iVar0 = 0;
			while (iVar0 < 200)
			{
				if (MISC::IS_BIT_SET(Global_907706.f_1204[iVar0 /*88*/].f_76, 13))
				{
					if (MISC::ARE_STRINGS_EQUAL(&(Global_907706.f_1204[iVar0 /*88*/]), &(uParam0->f_3)))
					{
						uParam0->f_1 = iVar0;
						return iVar0;
					}
				}
				iVar0++;
			}
			return -1;
		
		case 40:
			return uParam0->f_1;
		
		default:
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		if (MISC::IS_BIT_SET(Global_950952.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (MISC::ARE_STRINGS_EQUAL(&(Global_950952.f_5[uParam0->f_1 /*88*/]), &(uParam0->f_3)))
			{
				return uParam0->f_1;
			}
		}
		if (MISC::IS_BIT_SET(Global_950952.f_5[uParam0->f_1 /*88*/].f_76, 13))
		{
			if (Global_1310987.f_5)
			{
				return -1;
			}
		}
		iVar0 = 0;
		while (iVar0 < 62)
		{
			if (MISC::IS_BIT_SET(Global_950952.f_5[iVar0 /*88*/].f_76, 13))
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_950952.f_5[iVar0 /*88*/]), &(uParam0->f_3)))
				{
					uParam0->f_1 = iVar0;
					return iVar0;
				}
			}
			iVar0++;
		}
		return -1;
	}
	else if (uParam0->f_2 < 32)
	{
		return -1;
	}
	return -1;
}

int func_148(var uParam0)
{
	if (Global_2398103)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_2398103.f_1), &(uParam0->f_3)))
		{
			return 1;
		}
	}
	return 0;
}

bool func_149(int iParam0)
{
	return iParam0 == 9999;
}

int func_150(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	switch (iParam0)
	{
		case 132:
		case 144:
			return 0;
		
		default:
	}
	iVar1 = func_151(iParam0);
	iVar0 = 0;
	while (iVar0 < 19)
	{
		if (iVar0 < Global_262145.f_7501)
		{
			if (Global_2486819.f_124[iVar0 /*2*/] == iVar1 && Global_2486819.f_124[iVar0 /*2*/].f_1 == func_137(iParam0, iParam1, iParam2, iParam3))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_151(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 12;
		
		case 139:
			return 14;
		
		case 141:
			return 16;
		
		case 133:
			return 9;
		
		case 138:
			return 13;
		
		case 144:
			return 17;
		
		case 132:
			return 8;
		
		case 131:
			return 10;
		
		case 146:
			return 18;
		
		case 129:
			return 11;
		
		case 140:
			return 15;
		
		default:
	}
	return -1;
}

int func_152()
{
	if (func_154(&(Local_98.f_27)))
	{
		if (Local_98.f_4)
		{
			func_153();
		}
		func_40();
		return 1;
	}
	return 0;
}

void func_153()
{
	Global_1665283 = 1;
	if (!MISC::IS_BIT_SET(Global_2520777, 0))
	{
		MISC::SET_BIT(&Global_2520777, 0);
		MISC::SET_BIT(&Global_1665284, 0);
	}
	if (!MISC::IS_BIT_SET(Global_2520777, 1))
	{
		MISC::SET_BIT(&Global_2520777, 1);
		MISC::SET_BIT(&Global_1665284, 1);
	}
	if (!MISC::IS_BIT_SET(Global_2520777, 5))
	{
		MISC::SET_BIT(&Global_2520777, 5);
		MISC::SET_BIT(&Global_1665284, 5);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-355737150))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-580979506))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(745417724))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 0, 0, 0);
	}
	if (OBJECT::_DOES_DOOR_EXIST(-811770997))
	{
		OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 0, 0, 0);
	}
}

int func_154(var uParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 5);
	switch (iVar0)
	{
		case 0:
			if (!func_155(joaat("rhino")))
			{
				Local_98.f_28 = 1;
				*uParam0 = joaat("rhino");
				return 1;
			}
			break;
		
		case 1:
			if (!func_155(joaat("hydra")))
			{
				Local_98.f_28 = 1;
				*uParam0 = joaat("hydra");
				Local_98.f_4 = 1;
				return 1;
			}
			break;
		
		case 2:
			if (!func_155(joaat("savage")))
			{
				Local_98.f_28 = 4;
				*uParam0 = joaat("savage");
				Local_98.f_4 = 1;
				return 1;
			}
			break;
		
		case 3:
			if (!func_155(joaat("valkyrie")))
			{
				Local_98.f_28 = 4;
				*uParam0 = joaat("valkyrie");
				return 1;
			}
			break;
		
		case 4:
			if (!func_155(joaat("buzzard")))
			{
				Local_98.f_28 = 4;
				*uParam0 = joaat("buzzard");
				return 1;
			}
			break;
	}
	return 0;
}

int func_155(int iParam0)
{
	if (!func_719())
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_10437;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_10439;
				break;
			
			case joaat("savage"):
				return Global_262145.f_10438;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_10441;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_10440;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("rhino"):
				return Global_262145.f_10717;
				break;
			
			case joaat("hydra"):
				return Global_262145.f_10719;
				break;
			
			case joaat("savage"):
				return Global_262145.f_10718;
				break;
			
			case joaat("buzzard"):
				return Global_262145.f_10721;
				break;
			
			case joaat("valkyrie"):
				return Global_262145.f_10720;
				break;
			}
	}
	return 0;
}

int func_156()
{
	return Global_262145.f_10451;
}

int func_157(var uParam0)
{
	int iVar0;
	
	if (!func_21(&(Local_98.f_334)))
	{
		func_19(&(Local_98.f_334), 0, 0);
	}
	else if (func_18(&(Local_98.f_334), 3000, 0))
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				if (!func_15(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)), 0))
				{
					if (!MISC::IS_BIT_SET(Local_101[iVar0 /*18*/].f_2, 7))
					{
						*uParam0++;
					}
				}
			}
			iVar0++;
		}
		return 1;
	}
	return 0;
}

int func_158(var uParam0)
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

void func_159(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_19(uParam0, 0, 0);
		}
	}
}

void func_160()
{
	vector3 vVar0;
	
	if (iLocal_585 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iLocal_585]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_7[iLocal_585]))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iLocal_585]), 0) };
				if (vVar0.z < -25f)
				{
					func_24(&(Local_98.f_7[iLocal_585]));
				}
			}
		}
	}
	iLocal_585++;
	if (iLocal_585 >= 4)
	{
		iLocal_585 = 0;
	}
}

void func_161()
{
	if (func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
	{
		if (!MISC::IS_BIT_SET(iLocal_103, 13))
		{
			MISC::SET_BIT(&iLocal_103, 13);
			NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
		}
	}
	else if (MISC::IS_BIT_SET(iLocal_103, 13))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				MISC::CLEAR_BIT(&iLocal_103, 13);
			}
		}
	}
}

void func_162()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	if (func_412())
	{
		func_271(0);
	}
	iVar0 = Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_567;
	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
	}
	if (iVar0 != func_26())
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
			{
				iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
				iVar2 = iVar1;
				iVar3 = Local_101[iVar2 /*18*/].f_17;
				switch (iVar3)
				{
					case 0:
						func_194();
						func_191(iVar2);
						break;
					
					case 1:
						func_190();
						func_167();
						func_163(1);
						break;
					
					case 2:
						func_163(0);
						break;
					}
				}
			}
	}
}

void func_163(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (bParam0)
		{
			func_164(Local_98.f_48[iVar0], &(Local_110[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, -1, -1, 1);
		}
		else
		{
			func_164(Local_98.f_48[iVar0], &(Local_110[iVar0 /*8*/]), -1082130432, 0, 1, 0, 0, 55, -1, 1);
		}
		if (HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*8*/]))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_110[iVar0 /*8*/], "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_110[iVar0 /*8*/], true);
			}
		}
		if (HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*8*/].f_1))
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Local_110[iVar0 /*8*/].f_1, "UW_BLIP2");
			if (bParam0)
			{
			}
			else
			{
				HUD::SET_BLIP_AS_SHORT_RANGE(Local_110[iVar0 /*8*/].f_1, true);
			}
		}
		if (Local_98.f_27 != joaat("hydra"))
		{
			if (MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar0)], func_88(iVar0)) || MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar0)], func_88(iVar0)))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar0]))
				{
					func_90(&(Local_110[iVar0 /*8*/]));
				}
			}
		}
		else if ((iVar0 % 4) == 0)
		{
			iVar1 = (iVar0 / 4);
			if (MISC::IS_BIT_SET(Local_98.f_271, iVar1) || MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar0]))
				{
					func_90(&(Local_110[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_164(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_166())
		{
			Global_2436181 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_165(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2436181, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
		else
		{
			func_165(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2436181, bParam4, iParam5, fParam2, sParam6, iParam7, iParam8, bParam9);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_90(iParam1);
	}
}

int func_165(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, int iParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10)
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

bool func_166()
{
	return Global_1312831;
}

void func_167()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4[4];
	bool bVar5;
	int iVar6[4];
	var uVar7[4];
	int iVar8;
	int iVar9;
	
	iVar2 = (func_34() - func_124(&(Local_98.f_332), 0, 0));
	if (iLocal_563 == 0)
	{
		if (MISC::IS_BIT_SET(iLocal_102, 26))
		{
			if ((MISC::IS_BIT_SET(Local_98.f_3, 0) && MISC::IS_BIT_SET(Local_98.f_3, 1)) && MISC::IS_BIT_SET(Local_98.f_3, 2))
			{
				iLocal_563 = (func_34() - func_124(&(Local_98.f_332), 0, 0));
				iVar2 = iLocal_563;
			}
		}
	}
	else
	{
		iVar2 = iLocal_563;
	}
	if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		return;
	}
	if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
	{
		return;
	}
	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 >= 0)
	{
		return;
	}
	if (func_719())
	{
		iVar0 = (((Local_98.f_256[0] + Local_98.f_256[1]) + Local_98.f_256[2]) + Local_98.f_256[3]);
	}
	else
	{
		iVar0 = Local_98.f_256[0];
	}
	func_189(iVar2);
	if (iVar2 > 30000)
	{
		iVar3 = 1;
	}
	else
	{
		iVar3 = 6;
	}
	if (func_719())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar9 = PLAYER::INT_TO_PLAYERINDEX(Local_98.f_594[iVar1 /*4*/].f_2);
			if (iVar9 != func_26())
			{
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar9))
				{
					sVar4[iVar1] = PLAYER::GET_PLAYER_NAME(iVar9);
					iVar6[iVar1] = Local_98.f_594[iVar1 /*4*/].f_1;
					uVar7[iVar1] = Local_98.f_594[iVar1 /*4*/];
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 == uVar7[iVar1])
					{
						iVar8 = uVar7[iVar1];
						iVar8++;
					}
					uVar7[iVar1]++;
				}
				else
				{
					sVar4[iVar1] = "";
					iVar6[iVar1] = -1;
				}
			}
			else
			{
				sVar4[iVar1] = "";
				iVar6[iVar1] = -1;
			}
			iVar1++;
		}
		if ((func_34() - func_124(&(Local_98.f_332), 0, 0)) >= 0)
		{
			if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
			{
				func_185(sVar4[0], uVar7[0], sVar4[1], uVar7[1], sVar4[2], uVar7[2], sVar4[3], uVar7[3], iVar6[0], iVar6[1], iVar6[2], iVar6[3], iVar2, iVar3, func_186(), iVar8);
			}
			else
			{
				func_183(iVar6[0], uVar7[0], iVar6[1], uVar7[1], iVar6[2], uVar7[2], iVar6[3], uVar7[3], iVar2, iVar3, func_186(), iVar8);
			}
		}
	}
	else if (iVar2 >= 0)
	{
		if (iVar0 > Local_98.f_255)
		{
			iVar0 = Local_98.f_255;
		}
		if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
		{
			func_182(PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID()), iVar0, iVar0, Local_98.f_255, iVar2, iVar3, 0, func_186());
		}
		else
		{
			func_168(iVar0, iVar0, Local_98.f_255, iVar2, iVar3, 0, func_186(), 1);
		}
		if (bVar5)
		{
			func_113();
		}
	}
}

void func_168(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, char* sParam6, int iParam7)
{
	struct<8> Var0;
	char* sVar1;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	StringCopy(&Var0, "HUD_TEAM", 64);
	if (bParam5)
	{
		func_174(iParam0, &Var0, -1, iParam7, 5, 1, "", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	func_173(iParam1, iParam2, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar1 = "HUD_COUNTDOWN";
	if (!func_172(sParam6))
	{
		sVar1 = sParam6;
	}
	func_169(iParam3, sVar1, 0, 0, -1, 0, 3, 0, iParam4, 0, 0, 0, iParam4, 0, 0, 0, 0);
}

void func_169(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_171(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_170(7, iVar0);
		Global_1359035.f_4388[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_4388.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_4388.f_172[iVar0] = iParam2;
		Global_1359035.f_4388.f_216[iVar0] = iParam3;
		Global_1359035.f_4388.f_183[iVar0] = iParam4;
		Global_1359035.f_4388.f_194[iVar0] = iParam5;
		Global_1359035.f_4388.f_249[iVar0] = iParam6;
		Global_1359035.f_4388.f_260[iVar0] = iParam7;
		Global_1359035.f_4388.f_205[iVar0] = iParam8;
		Global_1359035.f_4388.f_314[iVar0] = iParam9;
		Global_1359035.f_4388.f_325[iVar0] = iParam10;
		Global_1359035.f_4388.f_357[iVar0] = iParam11;
		Global_1359035.f_4388.f_238[iVar0] = iParam12;
		Global_1359035.f_4388.f_271[iVar0] = iParam13;
		Global_1359035.f_4388.f_368[iVar0] = iParam14;
		Global_1359035.f_4388.f_379[iVar0] = iParam15;
		Global_1359035.f_4388.f_390[iVar0] = iParam16;
	}
}

void func_170(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Global_1359035.f_6119[iParam0]), iParam1);
}

bool func_171(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1359035.f_6119[iParam0], iParam1);
}

int func_172(char* sParam0)
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

void func_173(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_171(4, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_170(4, iVar0);
		Global_1359035.f_3098[iVar0] = iParam0;
		Global_1359035.f_3098.f_172[iVar0] = iParam1;
		StringCopy(&(Global_1359035.f_3098.f_11[iVar0 /*16*/]), sParam2, 64);
		Global_1359035.f_3098.f_183[iVar0] = iParam3;
		Global_1359035.f_3098.f_216[iVar0] = iParam5;
		Global_1359035.f_3098.f_194[iVar0] = iParam4;
		Global_1359035.f_3098.f_227[iVar0] = iParam6;
		Global_1359035.f_3098.f_270[iVar0] = iParam7;
		Global_1359035.f_3098.f_281[iVar0] = iParam8;
		Global_1359035.f_3098.f_292[iVar0] = iParam9;
		Global_1359035.f_3098.f_303[iVar0] = iParam10;
		Global_1359035.f_3098.f_314[iVar0] = iParam11;
		Global_1359035.f_3098.f_325[iVar0] = iParam13;
		Global_1359035.f_3098.f_336[iVar0] = iParam14;
		Global_1359035.f_3098.f_347[iVar0] = iParam15;
		if (((iParam0 > 9 && iParam1 > 9) && MISC::IS_PC_VERSION()) && iParam12)
		{
			Global_1359035.f_1088 = 1;
		}
	}
}

void func_174(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24)
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
			if (func_171(6, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1359035.f_1 = 1;
		func_170(6, iVar0);
		Global_1359035.f_3770[iVar0] = iParam0;
		StringCopy(&(Global_1359035.f_3770.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1359035.f_3770.f_183[iVar0] = iParam3;
		Global_1359035.f_3770.f_172[iVar0] = iParam2;
		Global_1359035.f_3770.f_260[iVar0] = iParam4;
		Global_1359035.f_3770.f_271[iVar0] = iParam5;
		StringCopy(&(Global_1359035.f_3770.f_282[iVar0 /*16*/]), sParam6, 64);
		Global_1359035.f_3770.f_443[iVar0] = iParam7;
		Global_1359035.f_3770.f_454[iVar0] = iParam8;
		Global_1359035.f_3770.f_497[iVar0] = iParam9;
		Global_1359035.f_3770.f_508[iVar0] = iParam10;
		Global_1359035.f_3770.f_205[iVar0] = iParam11;
		Global_1359035.f_3770.f_216[iVar0] = iParam12;
		Global_1359035.f_3770.f_227[iVar0] = iParam13;
		Global_1359035.f_3770.f_238[iVar0] = iParam14;
		Global_1359035.f_3770.f_249[iVar0] = iParam15;
		Global_1359035.f_3770.f_519[iVar0] = iParam16;
		Global_1359035.f_3770.f_530[iVar0] = iParam17;
		Global_1359035.f_3770.f_541[iVar0] = iParam18;
		Global_1359035.f_3770.f_552[iVar0] = iParam19;
		Global_1359035.f_3770.f_563[iVar0] = iParam20;
		Global_1359035.f_3770.f_574[iVar0] = iParam21;
		Global_1359035.f_3770.f_585[iVar0] = iParam22;
		Global_1359035.f_3770.f_596[iVar0] = iParam23;
		Global_1359035.f_3770.f_607[iVar0] = iParam24;
		if (iParam15 == 5 && func_176())
		{
			Global_1359035.f_1088 = 1;
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
				Global_1359035.f_1092 = 1;
			}
			else if (iParam0 > 9999999 || iVar2)
			{
				Global_1359035.f_1091 = 1;
			}
			else if (iParam0 > 999)
			{
				Global_1359035.f_1088 = 1;
			}
			if (func_175())
			{
				Global_1359035.f_1092 = 1;
			}
		}
	}
}

int func_175()
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

int func_176()
{
	if (((LOCALE::_GET_CURRENT_LANGUAGE_ID() == 8 || LOCALE::_GET_CURRENT_LANGUAGE_ID() == 9) || LOCALE::_GET_CURRENT_LANGUAGE_ID() == 10) || LOCALE::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_177()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	Global_2458368 = 1;
}

void func_178()
{
	Global_1359035.f_1088 = 1;
}

int func_179(bool bParam0)
{
	if (func_181())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_820(PLAYER::PLAYER_ID(), 1, 1) == 0)
		{
			return 0;
		}
	}
	return 1;
}

bool func_180()
{
	return Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_196 != 0;
}

bool func_181()
{
	return MISC::IS_BIT_SET(Global_2359302, 12);
}

void func_182(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, char* sParam7)
{
	char* sVar0;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_177();
	func_178();
	if (bParam6)
	{
		func_174(iParam1, sParam0, -1, 1, 5, 1, "HUD_NUMKILLS", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	func_173(iParam2, iParam3, "UW_KLL", -1, 1, 4, 0, 0, 0, 0, 1, 1, 1, 0, 255, 0);
	sVar0 = "HUD_COUNTDOWN";
	if (!func_172(sParam7))
	{
		sVar0 = sParam7;
	}
	func_169(iParam4, sVar0, 0, 0, -1, 0, 3, 0, iParam5, 0, 0, 0, iParam5, 0, 0, 0, 0);
}

void func_183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, char* sParam10, int iParam11)
{
	struct<16> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	if (iParam0 > -1)
	{
		Var0 = { func_184(iParam1) };
		iVar1 = 1;
		if (iParam11 == iParam1)
		{
			iVar1 = 9;
		}
		func_174(iParam0, &Var0, -1, iVar1, 7, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam2 > -1)
	{
		Var0 = { func_184(iParam3) };
		iVar2 = 1;
		if (iParam11 == iParam3)
		{
			iVar2 = 9;
		}
		func_174(iParam2, &Var0, -1, iVar2, 6, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam4 > -1)
	{
		Var0 = { func_184(iParam5) };
		iVar3 = 1;
		if (iParam11 == iParam5)
		{
			iVar3 = 9;
		}
		func_174(iParam4, &Var0, -1, iVar3, 5, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam6 > -1)
	{
		Var0 = { func_184(iParam7) };
		iVar4 = 1;
		if (iParam11 == iParam7)
		{
			iVar4 = 9;
		}
		func_174(iParam6, &Var0, -1, iVar4, 4, 1, "", 0, 0, 0, 0, iVar4, 0, 0, 0, 0, 0, 1, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar5 = "HUD_COUNTDOWN";
	if (!func_172(sParam10))
	{
		sVar5 = sParam10;
	}
	func_169(iParam8, sVar5, 0, 0, -1, 0, 3, 0, iParam9, 0, 0, 0, iParam9, 0, 0, 0, 0);
}

struct<16> func_184(int iParam0)
{
	struct<16> Var0;
	
	StringConCat(&Var0, HUD::_GET_LABEL_TEXT("HUD_TEAM"), 64);
	StringConCat(&Var0, " ", 64);
	StringIntConCat(&Var0, iParam0, 64);
	return Var0;
}

void func_185(char* sParam0, int iParam1, char* sParam2, int iParam3, char* sParam4, int iParam5, char* sParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, char* sParam14, int iParam15)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	
	if (func_179(0) == 0)
	{
		return;
	}
	func_178();
	func_177();
	if (iParam8 > -1)
	{
		iVar0 = 1;
		if (iParam15 == iParam1)
		{
			iVar0 = 9;
		}
		func_174(iParam8, sParam0, -1, 1, 7, 1, "", 0, 0, 0, 0, iVar0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam9 > -1)
	{
		iVar1 = 1;
		if (iParam15 == iParam3)
		{
			iVar1 = 9;
		}
		func_174(iParam9, sParam2, -1, 1, 6, 1, "", 0, 0, 0, 0, iVar1, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam10 > -1)
	{
		iVar2 = 1;
		if (iParam15 == iParam5)
		{
			iVar2 = 9;
		}
		func_174(iParam10, sParam4, -1, 1, 5, 1, "", 0, 0, 0, 0, iVar2, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	if (iParam11 > -1)
	{
		iVar3 = 1;
		if (iParam15 == iParam7)
		{
			iVar3 = 9;
		}
		func_174(iParam11, sParam6, -1, 1, 4, 1, "", 0, 0, 0, 0, iVar3, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 1);
	}
	sVar4 = "HUD_COUNTDOWN";
	if (!func_172(sParam14))
	{
		sVar4 = sParam14;
	}
	func_169(iParam12, sVar4, 0, 0, -1, 0, 3, 0, iParam13, 0, 0, 0, iParam13, 0, 0, 0, 0);
}

char* func_186()
{
	return "HUD_COUNTDOWN";
	switch (func_188(PLAYER::PLAYER_ID()))
	{
		case 131:
			return "AET_HOT_TARG";
		
		case 132:
			return "AET_CHK_COLL";
		
		case 133:
			switch (func_187())
			{
				case 0:
					return "AET_CHALL_LJ";
				
				case 1:
					return "AET_CHALL_LS";
				
				case 2:
					return "AET_CHALL_HS";
				
				case 3:
					return "AET_CHALL_LST";
				
				case 4:
					return "AET_CHALL_LW";
				
				case 5:
					return "AET_CHALL_NC";
				
				case 6:
					return "AET_CHALL_LP";
				
				case 7:
					return "AET_CHALL_VS";
				
				case 8:
					return "AET_CHALL_NM";
				
				case 9:
					return "AET_CHALL_RD";
				
				case 10:
					return "AET_CHALL_LF";
				
				case 11:
					return "AET_CHALL_LFL";
				
				case 12:
					return "AET_CHALL_LFI";
				
				case 13:
					return "AET_CHALL_LB";
				
				case 14:
					return "AET_CHALL_MB";
				
				case 15:
					return "AET_CHALL_HSH";
				
				case 16:
					return "AET_CHALL_DB";
				
				case 17:
					return "AET_CHALL_ML";
				
				case 18:
					return "AET_CHALL_LSN";
				
				default:
			}
			break;
		
		case 136:
			return "AET_PENNED";
		
		case 138:
			return "AET_PARCEL";
		
		case 139:
			return "AET_PROPERTY";
		
		case 140:
			return "AET_DDROP";
		
		case 141:
			return "AET_KCASTLE";
		
		case 144:
			return "AET_BLAST";
		
		case 129:
			return "AET_UWARF";
		
		case 146:
			return "AET_BEAST";
	}
	return "";
}

int func_187()
{
	if (func_188(PLAYER::PLAYER_ID()) == 133)
	{
		return Global_2512808.f_4777;
	}
	return -1;
}

int func_188(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/];
	}
	return -1;
}

void func_189(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		if (MISC::IS_BIT_SET(Global_2512808.f_4693, 0))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2512808.f_4695)))
			{
				AUDIO::SET_RADIO_TO_STATION_NAME(&(Global_2512808.f_4695));
			}
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
			AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
			if (Global_2512808.f_4703 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
			Global_2512808.f_4693 = 0;
		}
	}
	else if (iParam0 < 30000)
	{
		if (MISC::IS_BIT_SET(Global_2512808.f_4693, 0))
		{
			if (MISC::IS_BIT_SET(Global_2512808.f_4693, 4))
			{
				if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 2))
				{
					if (AUDIO::_0x109697E2FFBAC8A1())
					{
						if ((!MISC::ARE_STRINGS_EQUAL(AUDIO::GET_RADIO_STATION_NAME(AUDIO::GET_PLAYER_RADIO_STATION_INDEX()), "OFF") && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0)) && !MISC::IS_STRING_NULL_OR_EMPTY(&(Global_2512808.f_4695)))
						{
							StringCopy(&(Global_2512808.f_4695), "", 32);
							AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
							AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
							AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
							AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
							MISC::SET_BIT(&(Global_2512808.f_4693), 2);
						}
					}
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && MISC::IS_BIT_SET(Global_2512808.f_4693, 5))
				{
					AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
				}
			}
			else if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 1))
			{
				if (iParam0 < 10000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_10S");
				}
				else if (iParam0 < 20000)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_20S");
				}
				else
				{
					AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S");
				}
				AUDIO::START_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
				MISC::SET_BIT(&(Global_2512808.f_4693), 1);
			}
			else if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 4))
			{
				if (iParam0 < 27500)
				{
					if (AUDIO::GET_PLAYER_RADIO_STATION_GENRE() != 0)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) && !AUDIO::_0x0626A247D2405330())
						{
							StringCopy(&(Global_2512808.f_4695), AUDIO::GET_PLAYER_RADIO_STATION_NAME(), 32);
							AUDIO::SET_RADIO_TO_STATION_NAME("OFF");
						}
						AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
						MISC::SET_BIT(&(Global_2512808.f_4693), 4);
					}
				}
			}
			if (iParam0 < 10000)
			{
				if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 3))
				{
					Global_2512808.f_4703 = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FRONTEND(Global_2512808.f_4703, "10S", "MP_MISSION_COUNTDOWN_SOUNDSET", false);
					MISC::SET_BIT(&(Global_2512808.f_4693), 3);
				}
			}
		}
		else if (iParam0 > 10000)
		{
			if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 0))
			{
				Global_2512808.f_4693 = 0;
				Global_2512808.f_4703 = -1;
				AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
				AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
				AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
				AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
				AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
				AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
				MISC::SET_BIT(&(Global_2512808.f_4693), 0);
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || MISC::IS_BIT_SET(Global_2512808.f_4693, 2))
				{
					MISC::SET_BIT(&(Global_2512808.f_4693), 2);
					MISC::SET_BIT(&(Global_2512808.f_4693), 5);
				}
				else
				{
					MISC::CLEAR_BIT(&(Global_2512808.f_4693), 5);
					MISC::CLEAR_BIT(&(Global_2512808.f_4693), 2);
				}
			}
		}
	}
	else if (iParam0 < 40000 && iParam0 > 30000)
	{
		if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 0))
		{
			Global_2512808.f_4693 = 0;
			Global_2512808.f_4703 = -1;
			AUDIO::PREPARE_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
			AUDIO::SET_USER_RADIO_CONTROL_ENABLED(0);
			AUDIO::TRIGGER_MUSIC_EVENT("FM_PRE_COUNTDOWN_30S");
			AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
			AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
			AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 1);
			MISC::SET_BIT(&(Global_2512808.f_4693), 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
			{
				MISC::SET_BIT(&(Global_2512808.f_4693), 2);
				MISC::SET_BIT(&(Global_2512808.f_4693), 5);
			}
			else
			{
				MISC::CLEAR_BIT(&(Global_2512808.f_4693), 2);
				MISC::CLEAR_BIT(&(Global_2512808.f_4693), 5);
			}
		}
	}
}

void func_190()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (HUD::DOES_BLIP_EXIST(iLocal_109[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iLocal_109[iVar0]));
		}
		iVar0++;
	}
}

void func_191(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!HUD::DOES_BLIP_EXIST(iLocal_109[iVar0]))
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_98.f_13, iVar0))
				{
					if (!MISC::IS_BIT_SET(Local_101[iParam0 /*18*/].f_1, iVar0))
					{
						iLocal_109[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]));
						HUD::SET_BLIP_SPRITE(iLocal_109[iVar0], 429);
						func_192(&(iLocal_109[iVar0]), 29);
						if (func_719())
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_109[iVar0], "UW_BLIPC");
						}
						else
						{
							HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_109[iVar0], "UW_BLIP");
						}
						HUD::SET_BLIP_PRIORITY(iLocal_109[iVar0], 9);
					}
					else if (HUD::DOES_BLIP_EXIST(iLocal_109[iVar0]))
					{
						HUD::REMOVE_BLIP(&(iLocal_109[iVar0]));
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_109[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_109[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_192(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HUD::DOES_BLIP_EXIST(*uParam0))
	{
		iVar0 = func_193(iParam1);
		HUD::SET_BLIP_COLOUR(*uParam0, iVar0);
	}
}

int func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 1:
			return 4;
		
		case 0:
			return 4;
		
		case 6:
			return 59;
		
		case 18:
			return 2;
		
		case 13:
			return 5;
		
		case 116:
			return 38;
		
		case 28:
			return 6;
		
		case 29:
			return 7;
		
		case 30:
			return 8;
		
		case 31:
			return 9;
		
		case 32:
			return 10;
		
		case 33:
			return 11;
		
		case 34:
			return 12;
		
		case 35:
			return 13;
		
		case 36:
			return 14;
		
		case 37:
			return 15;
		
		case 38:
			return 16;
		
		case 39:
			return 17;
		
		case 40:
			return 18;
		
		case 41:
			return 19;
		
		case 42:
			return 20;
		
		case 43:
			return 21;
		
		case 44:
			return 22;
		
		case 45:
			return 23;
		
		case 46:
			return 24;
		
		case 47:
			return 25;
		
		case 48:
			return 26;
		
		case 49:
			return 27;
		
		case 50:
			return 28;
		
		case 51:
			return 29;
		
		case 52:
			return 30;
		
		case 53:
			return 31;
		
		case 54:
			return 32;
		
		case 55:
			return 33;
		
		case 56:
			return 34;
		
		case 57:
			return 35;
		
		case 58:
			return 36;
		
		case 59:
			return 37;
		
		case 9:
			return 57;
		
		case 10:
			return 53;
		
		case 118:
			return 57;
		
		case 14:
			return 56;
		
		case 3:
			return 55;
		
		case 21:
			return 50;
		
		case 15:
			return 51;
		
		case 20:
			return 52;
		
		case 11:
			return 54;
		
		case 23:
			return 58;
		
		case 12:
			return 60;
		
		case 24:
			return 61;
		
		case 4:
			return 62;
		
		default:
	}
	HUD::GET_HUD_COLOUR(iParam0, &iVar0, &iVar1, &iVar2, &iVar3);
	return ((((iVar0 * 16777216) + (iVar1 * 65536)) + iVar2 * 256) + iVar3);
	return 0;
}

void func_194()
{
	bool bVar0;
	
	bVar0 = func_263();
	if (bVar0)
	{
		if (Local_98.f_413 > -1)
		{
			if ((Local_98.f_413 - func_124(&(Local_98.f_326), 0, 0)) >= 0)
			{
				if (!func_198())
				{
					func_197((Local_98.f_413 - func_124(&(Local_98.f_326), 0, 0)));
					func_195((Local_98.f_413 - func_124(&(Local_98.f_326), 0, 0)), func_196(-1));
				}
			}
			else
			{
				if (!func_198())
				{
					func_195(0, func_196(-1));
				}
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					MISC::SET_BIT(&(Local_98.f_3), 4);
				}
			}
		}
	}
}

void func_195(int iParam0, char* sParam1)
{
	char* sVar0;
	
	if (func_179(0) == 0)
	{
		return;
	}
	sVar0 = "HUD_STARTING";
	if (!func_172(sParam1))
	{
		sVar0 = sParam1;
	}
	func_169(iParam0, sVar0, 0, 0, -1, 0, 3, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
}

char* func_196(int iParam0)
{
	char* sVar0;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	return "HUD_STARTING";
	if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
	{
		return "AST_HOT_TARG";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
	{
		return "AST_CHK_COLL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
	{
		switch (iParam0)
		{
			case 0:
				return "AST_CHALL_LJ";
			
			case 1:
				return "AST_CHALL_LS";
			
			case 2:
				return "AST_CHALL_HS";
			
			case 3:
				return "AST_CHALL_LST";
			
			case 4:
				return "AST_CHALL_LW";
			
			case 5:
				return "AST_CHALL_NC";
			
			case 6:
				return "AST_CHALL_LP";
			
			case 7:
				return "AST_CHALL_VS";
			
			case 8:
				return "AST_CHALL_NM";
			
			case 9:
				return "AST_CHALL_RD";
			
			case 10:
				return "AST_CHALL_LF";
			
			case 11:
				return "AST_CHALL_LFL";
			
			case 12:
				return "AST_CHALL_LFI";
			
			case 13:
				return "AST_CHALL_LB";
			
			case 14:
				return "AST_CHALL_MB";
			
			case 15:
				return "AST_CHALL_HSH";
			
			case 16:
				return "AST_CHALL_DB";
			
			case 17:
				return "AST_CHALL_ML";
			
			case 18:
				return "AST_CHALL_LSN";
			
			default:
		}
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
	{
		return "AST_PENNED";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
	{
		return "AST_PARCEL";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
	{
		return "AST_PROPERTY";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
	{
		return "AST_DDROP";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
	{
		return "AST_KCASTLE";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
	{
		return "AST_BLAST";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
	{
		return "AST_UWARF";
	}
	else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_HUNT_THE_BEAST"))
	{
		return "AST_BEAST";
	}
	return "";
}

void func_197(int iParam0)
{
	if (IntToFloat(iParam0) < MISC::GET_FRAME_TIME())
	{
		Global_2512808.f_4693 = 0;
	}
	else if (iParam0 < 6000)
	{
		if (!MISC::IS_BIT_SET(Global_2512808.f_4693, 1))
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "5s_To_Event_Start_Countdown", "GTAO_FM_Events_Soundset", false);
			Global_2512808.f_4693 = 0;
			MISC::SET_BIT(&(Global_2512808.f_4693), 1);
		}
	}
}

bool func_198()
{
	bool bVar0;
	int iVar1;
	
	if (func_261(8))
	{
		bVar0 = true;
	}
	if (func_261(0))
	{
		bVar0 = true;
	}
	if (!func_253(129, 0, 0))
	{
		bVar0 = true;
	}
	if (!func_205())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, 0))
				{
					func_203(0, -1);
					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
				}
			}
		}
	}
	else if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
	{
		MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
	}
	if (Global_1655673)
	{
		bVar0 = true;
	}
	if (func_202(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	if (func_201(PLAYER::PLAYER_ID(), 2))
	{
		bVar0 = true;
	}
	if (func_199(PLAYER::PLAYER_ID()))
	{
		bVar0 = true;
	}
	return bVar0;
}

bool func_199(int iParam0)
{
	if (func_200(iParam0))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 8);
}

bool func_200(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 2);
}

bool func_201(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_2422736[iParam0 /*420*/].f_223, iParam1);
}

int func_202(int iParam0)
{
	if (!func_820(iParam0, 0, 1))
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_35;
}

void func_203(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		if (!Global_1595566)
		{
			if (!func_261(0) && !func_261(func_204(iParam1)))
			{
				Global_1595566 = 1;
			}
		}
	}
	else if (Global_1595566)
	{
		Global_1595566 = 0;
	}
}

int func_204(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			return 10;
		
		case 132:
			return 1;
		
		case 133:
			return 2;
		
		case 136:
			return 11;
		
		case 138:
			return 5;
		
		case 139:
			return 6;
		
		case 129:
			return 8;
		
		case 140:
			return 4;
		
		case 141:
			return 9;
		
		case 144:
			return 3;
		
		case 146:
			return 7;
		
		default:
	}
	return 14;
}

int func_205()
{
	if (func_252(PLAYER::PLAYER_ID(), 29))
	{
		return 0;
	}
	if (func_201(PLAYER::PLAYER_ID(), 21))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		return 0;
	}
	if (func_250(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_249())
	{
		return 0;
	}
	if (func_248(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_247())
	{
		return 0;
	}
	if (func_229(PLAYER::PLAYER_ID()) == 3)
	{
		return 0;
	}
	if (func_227(func_228()))
	{
		return 0;
	}
	if (func_226())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	if (func_224(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (!func_222())
	{
		return 0;
	}
	if (func_201(PLAYER::PLAYER_ID(), 0) || func_201(PLAYER::PLAYER_ID(), 3))
	{
		return 0;
	}
	if ((func_201(PLAYER::PLAYER_ID(), 12) || func_201(PLAYER::PLAYER_ID(), 14)) || func_201(PLAYER::PLAYER_ID(), 13))
	{
		return 0;
	}
	if (func_218(PLAYER::PLAYER_ID(), 0, 0, 0, 0, 0, 0, 0, 1))
	{
		return 0;
	}
	if (func_217(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_216())
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (func_202(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_215())
	{
		return 0;
	}
	if (func_213(PLAYER::PLAYER_ID()) && Global_1595343.f_171)
	{
		return 0;
	}
	if (((((func_212(PLAYER::PLAYER_ID()) || func_211(PLAYER::PLAYER_ID())) || func_210(PLAYER::PLAYER_ID())) || func_209(PLAYER::PLAYER_ID())) || func_207(PLAYER::PLAYER_ID())) || func_206())
	{
		return 0;
	}
	return 1;
}

var func_206()
{
	return Global_1669535.f_28;
}

int func_207(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_820(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 9;
			}
		}
	}
	return 0;
}

int func_208(int iParam0)
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
	}
	return -1;
}

int func_209(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_820(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_26())
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 8;
			}
		}
	}
	return 0;
}

int func_210(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_820(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 7;
			}
		}
	}
	return 0;
}

int func_211(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_820(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1 && Global_2422736[iParam0 /*420*/].f_324.f_4 != func_26())
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 5;
			}
		}
	}
	return 0;
}

int func_212(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_820(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 4;
			}
		}
	}
	return 0;
}

int func_213(int iParam0)
{
	if (func_214(Global_1595693[iParam0 /*680*/].f_266.f_17))
	{
		return 1;
	}
	return 0;
}

int func_214(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 90:
			return 1;
			break;
	}
	return 0;
}

int func_215()
{
	if (Global_4253357.f_797 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_216()
{
	return Global_92885.f_316 > 0;
}

bool func_217(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 11);
}

int func_218(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (Global_1595693[iParam0 /*680*/].f_266.f_17 > 0)
	{
		if (bParam1)
		{
			if (MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_15, 0))
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
		if (func_221(iParam0))
		{
			return 1;
		}
	}
	if (!bParam3)
	{
		if (func_220(iParam0))
		{
			return 1;
		}
	}
	if (!bParam4)
	{
		if (func_219(iParam0))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (func_212(iParam0))
		{
			return 1;
		}
	}
	if (!bParam6)
	{
		if (func_210(iParam0))
		{
			return 1;
		}
	}
	if (!bParam7)
	{
		if (func_207(iParam0))
		{
			return 1;
		}
	}
	if (!bParam8)
	{
		if (func_209(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_219(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_820(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 1;
			}
		}
	}
	return 0;
}

int func_220(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_820(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 2;
			}
		}
	}
	return 0;
}

int func_221(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (func_820(iParam0, 1, 1))
		{
			if (Global_2422736[iParam0 /*420*/].f_324.f_1 != -1)
			{
				return func_208(Global_2422736[iParam0 /*420*/].f_324.f_1) == 0;
			}
		}
	}
	return 0;
}

int func_222()
{
	if (func_223() == 0)
	{
		return 1;
	}
	return 0;
}

int func_223()
{
	return Global_1312466.f_18;
}

bool func_224(int iParam0)
{
	return func_225(iParam0);
}

bool func_225(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_13.f_1, 0);
}

bool func_226()
{
	return Global_1312854;
}

int func_227(int iParam0)
{
	switch (iParam0)
	{
		case 87:
		case 88:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_228()
{
	return Global_2436181.f_2592[0 /*79*/].f_1;
}

int func_229(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	
	iVar0 = 2;
	bVar1 = ((func_246(iParam0) && !func_200(iParam0)) && !MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 8));
	bVar2 = func_245(iParam0);
	bVar3 = func_244();
	uVar4 = func_235();
	if ((bVar1 && (func_234(iParam0) || func_233(iParam0))) || uVar4)
	{
		iVar0 = 0;
	}
	else if (bVar3 || ((!bVar2 && !func_232(iParam0)) && !func_230(iParam0)))
	{
		iVar0 = 2;
	}
	else
	{
		iVar0 = 3;
	}
	if (Global_2512808.f_4856.f_38 != iVar0)
	{
		Global_2512808.f_4856.f_38 = iVar0;
	}
	return iVar0;
}

bool func_230(int iParam0)
{
	return func_231(iParam0, 19);
}

bool func_231(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_11.f_4, iParam1);
}

int func_232(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_231(iParam0, 9);
	}
	return 0;
}

int func_233(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1627537[iVar0 /*532*/].f_1, 0);
	}
	return 0;
}

int func_234(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return MISC::IS_BIT_SET(Global_1627537[iVar0 /*532*/].f_1, 7);
	}
	return 0;
}

int func_235()
{
	if ((func_231(PLAYER::PLAYER_ID(), 21) || func_231(PLAYER::PLAYER_ID(), 22)) || func_241())
	{
		return 1;
	}
	if (func_237())
	{
		func_236(22);
		return 1;
	}
	return 0;
}

void func_236(int iParam0)
{
	MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_4), iParam0);
}

int func_237()
{
	if (func_240(PLAYER::PLAYER_ID(), 0))
	{
		if ((func_244() && !func_239()) || func_201(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		else
		{
			func_238(27);
		}
	}
	return 0;
}

void func_238(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_4), iParam0);
}

bool func_239()
{
	return Global_1312416.f_1;
}

int func_240(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_241()
{
	return func_242(306, -1);
}

int func_242(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2547365[iParam0 /*3*/][func_243(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_243(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_17();
		if (iVar1 > -1)
		{
			Global_2522773 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2522773 = 1;
		}
	}
	return iVar0;
}

bool func_244()
{
	return Global_1312416;
}

bool func_245(int iParam0)
{
	return func_231(iParam0, 20);
}

int func_246(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1627537[iVar0 /*532*/] != -1;
	}
	return 0;
}

bool func_247()
{
	return Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 5;
}

int func_248(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_276.f_4 != 0 || Global_2422736[iParam0 /*420*/].f_276.f_5)
	{
		return 1;
	}
	return 0;
}

bool func_249()
{
	return MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_39.f_18, 0);
}

int func_250(int iParam0)
{
	if (func_251(iParam0, 1))
	{
		if (Global_1595693[iParam0 /*680*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_251(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_224(iParam0))
		{
			return 1;
		}
	}
	if (Global_1595693[iParam0 /*680*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_252(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_11.f_5, iParam1);
}

bool func_253(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (Global_262145.f_7075 == 1)
	{
		if (iParam0 == 67)
		{
			return 1;
		}
		if (iParam0 == 74)
		{
			return 1;
		}
		if (func_257(PLAYER::PLAYER_ID(), 85))
		{
			if (((((iParam0 == 64 || iParam0 == 77) || iParam0 == 61) || iParam0 == 81) || iParam0 == 63) || iParam0 == 62)
			{
				return 1;
			}
		}
		if ((((((((((iParam0 == 66 || iParam0 == 116) || iParam0 == 103) || iParam0 == 104) || iParam0 == 105) || iParam0 == 119) || iParam0 == 88) || iParam0 == 75) || iParam0 == 95) || iParam0 == 65) || iParam0 == 98)
		{
			return 1;
		}
	}
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 == 31)
	{
		if (Global_262145.f_4716 == 1)
		{
			return 1;
		}
	}
	if (func_256() || func_255())
	{
		return 1;
	}
	iVar0 = iParam0;
	iVar1 = (iVar0 / 32);
	iVar0 = (iVar0 % 32);
	if (bParam1)
	{
		if (iParam0 == 3)
		{
			if (func_254())
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (bParam2)
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1574396[iVar1], iVar0);
}

int func_254()
{
	int iVar0;
	
	if (Global_1312446)
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2512808.f_1706, 23))
	{
		return 1;
	}
	if (func_256())
	{
		return 1;
	}
	if (func_255())
	{
		return 1;
	}
	iVar0 = Global_1368207[func_243(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2512808.f_1706), 23);
		return 1;
	}
	return 0;
}

bool func_255()
{
	return Global_1312842;
}

bool func_256()
{
	return Global_1312844;
}

bool func_257(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_260())
	{
		return 0;
	}
	if (func_259())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_258(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_557, iVar1);
}

int func_258(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 0;
		
		case 19:
			return 1;
		
		case 12:
			return 2;
		
		case 31:
			return 3;
		
		case 20:
			return 4;
		
		case 18:
			return 5;
		
		case 2:
			return 6;
		
		case 76:
			return 7;
		
		default:
	}
	return 1;
}

bool func_259()
{
	return MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_146, 3);
}

int func_260()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_256())
	{
		return 1;
	}
	if (func_255())
	{
		return 1;
	}
	return func_242(120, -1);
}

bool func_261(int iParam0)
{
	int iVar0;
	
	iVar0 = func_262(2469, -1, 0);
	return MISC::IS_BIT_SET(iVar0, iParam0);
}

int func_262(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_243(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

bool func_263()
{
	bool bVar0;
	
	if (!func_719())
	{
		if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
		{
			return 0;
		}
	}
	else if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
	{
		if (func_110() == 2)
		{
			return 0;
		}
	}
	if (!func_719())
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[0]))
		{
			if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[0])) == joaat("valkyrie"))
			{
				bVar0 = Local_98.f_15 != false;
			}
			else
			{
				bVar0 = Local_98.f_14 != false;
			}
		}
	}
	else
	{
		bVar0 = MISC::IS_BIT_SET(Local_98.f_3, 9);
	}
	if (!func_15(PLAYER::PLAYER_ID(), 0))
	{
		if (bVar0 && !func_198())
		{
			if (func_719())
			{
				if (!func_270("UW_ABTSC"))
				{
					func_264("UW_ABTSC", 0);
				}
			}
			else if (!func_270("UW_ABTS"))
			{
				func_264("UW_ABTS", 0);
			}
		}
		else if (func_270("UW_ABTSC") || func_270("UW_ABTS"))
		{
			func_8();
		}
	}
	return bVar0;
}

void func_264(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return;
	}
	if (func_268(sParam0))
	{
		return;
	}
	func_9();
	Global_1312576 = 0;
	StringCopy(&(Global_1312576.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1312576.f_9 = MISC::GET_HASH_KEY(&(Global_1312576.f_1));
	StringCopy(&(Global_1312576.f_12), sParam0, 16);
	func_267();
	func_266(bParam1);
	func_265();
}

void func_265()
{
	MISC::SET_BIT(&(Global_1312576.f_59), 1);
}

void func_266(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1312576.f_59), 0);
		return;
	}
	MISC::CLEAR_BIT(&(Global_1312576.f_59), 0);
}

void func_267()
{
	Global_1312576.f_10 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 86400000);
	Global_1312576.f_11 = NETWORK::GET_NETWORK_TIME();
}

bool func_268(char* sParam0)
{
	if (!func_14())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		return func_269(sParam0);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_12));
}

bool func_269(char* sParam0)
{
	if (!func_14())
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	return MISC::GET_HASH_KEY(sParam0) == MISC::GET_HASH_KEY(&(Global_1312576.f_16));
}

int func_270(char* sParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!func_14())
	{
		return 0;
	}
	if (Global_1312576 == 11)
	{
		if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 63)
		{
			return 0;
		}
	}
	else if (HUD::_GET_LENGTH_OF_STRING(sParam0) > 23)
	{
		return 0;
	}
	return func_268(sParam0);
}

void func_271(bool bParam0)
{
	int iVar0;
	struct<4> Var1;
	bool bVar2;
	
	Var1 = { func_411() };
	bVar2 = false;
	if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_119[iVar0 /*42*/] = -1;
			Local_119[iVar0 /*42*/].f_1 = func_26();
			Local_119[iVar0 /*42*/].f_9 = 0;
			Local_119[iVar0 /*42*/].f_31 = -1;
			if (Local_98.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_119[iVar0 /*42*/].f_1 = Local_98.f_465[iVar0 /*4*/].f_2;
				Local_119[iVar0 /*42*/].f_9 = Local_98.f_465[iVar0 /*4*/].f_1;
			}
			iVar0++;
		}
		if (bParam0)
		{
			if (!func_410())
			{
				if (Local_120.f_103 != 129)
				{
					Local_120.f_103 = 129;
				}
				else
				{
					func_203(1, 129);
				}
			}
		}
		else if (Local_120.f_103 != 129)
		{
			Local_120.f_103 = 129;
		}
		func_276(&Local_119, &iLocal_118, 26, &Local_120, &uLocal_131, -1, 0);
		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_119[0 /*42*/].f_1 != PLAYER::PLAYER_ID())
			{
				if (Local_98.f_465[0 /*4*/].f_1 > 0)
				{
					func_275();
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			Local_119[iVar0 /*42*/] = -1;
			Local_119[iVar0 /*42*/].f_1 = func_26();
			Local_119[iVar0 /*42*/].f_9 = 0;
			Local_119[iVar0 /*42*/].f_31 = -1;
			Local_119[iVar0 /*42*/].f_39 = -1;
			if (Local_98.f_465[iVar0 /*4*/].f_1 > -1)
			{
				Local_119[iVar0 /*42*/].f_39 = Local_98.f_465[iVar0 /*4*/] + 1;
				Local_119[iVar0 /*42*/].f_1 = PLAYER::INT_TO_PLAYERINDEX(Local_98.f_465[iVar0 /*4*/].f_2);
				Local_119[iVar0 /*42*/].f_40 = Local_98.f_465[iVar0 /*4*/].f_1;
				Local_119[iVar0 /*42*/].f_9 = Local_98.f_465[iVar0 /*4*/].f_1;
				Local_119[iVar0 /*42*/].f_2 = Local_98.f_465[iVar0 /*4*/];
			}
			iVar0++;
		}
		func_272();
		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			if (Local_98.f_594[0 /*4*/] > 0)
			{
				if (Local_98.f_594[0 /*4*/] != Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9)
				{
					if (Local_98.f_256[Local_98.f_594[0 /*4*/]] > 0)
					{
						func_275();
					}
				}
			}
		}
		func_276(&Local_119, &iLocal_118, 26, &Local_120, &uLocal_131, -1, 1);
		if (bParam0)
		{
			if (!func_410())
			{
				if (Local_120.f_103 != 129)
				{
					Local_120.f_103 = 129;
				}
				else
				{
					func_203(1, 129);
				}
			}
		}
		else if (Local_120.f_103 != 129)
		{
			Local_120.f_103 = 129;
		}
	}
}

void func_272()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	int iVar11;
	
	uLocal_591[0] = Local_98.f_594[0 /*4*/];
	uLocal_591[1] = Local_98.f_594[1 /*4*/];
	uLocal_591[2] = Local_98.f_594[2 /*4*/];
	uLocal_591[3] = Local_98.f_594[3 /*4*/];
	iVar3 = Local_98.f_594[0 /*4*/];
	iVar4 = Local_98.f_594[1 /*4*/];
	iVar5 = Local_98.f_594[2 /*4*/];
	iVar6 = Local_98.f_594[3 /*4*/];
	if (iVar3 != -1)
	{
		uVar7 = Local_98.f_266[iVar3];
	}
	if (iVar4 != -1)
	{
		uVar8 = Local_98.f_266[iVar4];
	}
	if (iVar5 != -1)
	{
		uVar9 = Local_98.f_266[iVar5];
	}
	if (iVar6 != -1)
	{
		uVar10 = Local_98.f_266[iVar6];
	}
	uLocal_592[0] = uVar7;
	uLocal_592[1] = uVar8;
	uLocal_592[2] = uVar9;
	uLocal_592[3] = uVar10;
	iVar11 = 0;
	while (iVar11 < NETWORK::NETWORK_GET_NUM_PARTICIPANTS())
	{
		iVar2 = func_274(uLocal_591[iVar0], iVar11);
		if (iVar2 != -1)
		{
			Local_119[iVar2 /*42*/].f_9 = Local_98.f_594[iVar0 /*4*/].f_1;
		}
		func_273(iVar2, iVar11);
		iVar1++;
		if (iVar1 >= uLocal_592[iVar0])
		{
			iVar0++;
			iVar1 = 0;
		}
		if (iVar0 >= 4)
		{
			return;
		}
		iVar11++;
	}
}

void func_273(int iParam0, int iParam1)
{
	struct<42> Var0;
	
	if (iParam0 == -1 || iParam1 == -1)
	{
		return;
	}
	Var0 = { Local_119[iParam1 /*42*/] };
	Local_119[iParam1 /*42*/] = { Local_119[iParam0 /*42*/] };
	Local_119[iParam0 /*42*/] = { Var0 };
}

int func_274(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = -1;
	iVar0 = iParam1;
	while (iVar0 <= (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() - 1))
	{
		if (iParam0 == Local_119[iVar0 /*42*/].f_2)
		{
			iVar1 = iVar0;
			iVar0 = NETWORK::NETWORK_GET_NUM_PARTICIPANTS();
		}
		iVar0++;
	}
	return iVar1;
}

void func_275()
{
	MISC::SET_BIT(&(Global_2512808.f_1709), 19);
}

void func_276(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1[32];
	bool bVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	struct<4> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<2> Var22;
	
	if (func_409(iParam2))
	{
		return;
	}
	fVar10 = -1f;
	iVar11 = -1;
	iVar12 = -1;
	iVar14 = 0;
	iVar15 = 0;
	uParam3->f_36 = 0;
	if (func_407() || iParam2 == 27)
	{
		if (func_360(iParam1, iParam2, uParam3, Global_1574123, 0, func_412()))
		{
			func_359(1);
			if ((!func_357() && !func_355()) || MISC::IS_BIT_SET(Global_2512808.f_4553, 1))
			{
				if (func_354())
				{
					func_351();
				}
				else
				{
					GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
					if (uParam3->f_27 == 0)
					{
						func_350(1);
						Global_1574123 = 0;
						iVar19 = -1;
						if (Global_1574308 != 1)
						{
							func_349(iParam1);
							if (MISC::IS_BIT_SET(uParam3->f_33, 7))
							{
								MISC::CLEAR_BIT(&(uParam3->f_33), 7);
							}
						}
						if (iParam2 == 27)
						{
							iVar17 = 0;
							while (iVar17 < 32)
							{
								iVar1[iVar17] = -1;
								iVar17++;
							}
							iVar17 = 0;
							while (iVar17 < 32)
							{
								if (func_820(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
									if (!func_15(iVar3, 0))
									{
										if ((func_348(iVar3) || Global_2422736[iVar3 /*420*/].f_251 != -1) || func_347(iVar3))
										{
											iVar9 = iVar3;
											if (func_346(iVar3))
											{
												iVar1[iVar9] = iVar20;
												iVar20++;
												iVar0++;
												func_343(&iVar1, iVar3, &iVar20, &iVar0);
											}
										}
									}
								}
								iVar17++;
							}
						}
						if (!func_340(PLAYER::PLAYER_ID(), 0) && func_339(PLAYER::PLAYER_ID()) != 188)
						{
							bVar2 = iVar0 > 0;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							if (func_338())
							{
								if (func_820(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
								}
								else
								{
									iVar3 = func_26();
								}
							}
							else
							{
								iVar3 = (iParam0[iVar17 /*42*/])->f_1;
							}
							if ((func_337(iVar3) && func_334(iVar3, iParam2)) && func_820(iVar3, 0, 1))
							{
								iVar9 = iVar3;
								iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
								Var6 = { func_329(iVar3) };
								if (iVar3 == PLAYER::PLAYER_ID())
								{
									uParam3->f_35 = iVar18;
								}
								StringCopy(&(uParam3->f_1), PLAYER::GET_PLAYER_NAME(iVar3), 64);
								*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
								iVar5 = func_323(iVar3);
								sVar4 = "";
								if (iVar5 != 0)
								{
									sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
								}
								Global_1574123++;
								if ((iParam0[iVar17 /*42*/])->f_22 != -1f)
								{
									fVar10 = (iParam0[iVar17 /*42*/])->f_22;
								}
								if ((iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									iVar11 = (iParam0[iVar17 /*42*/])->f_31;
								}
								if ((iParam0[iVar17 /*42*/])->f_41 != -1)
								{
									iVar12 = (iParam0[iVar17 /*42*/])->f_41;
								}
								iVar8 = (iParam0[iVar17 /*42*/])->f_9;
								if (((iParam0[iVar17 /*42*/])->f_9 != -1 || (iParam0[iVar17 /*42*/])->f_22 != -1f) || (iParam0[iVar17 /*42*/])->f_31 != -1)
								{
									if (!func_338())
									{
										iVar15 = 1;
									}
								}
								if (iParam5 != -1)
								{
									func_318(&iVar8, &fVar10, (iParam0[iVar17 /*42*/])->f_9, iParam5);
									StringCopy(&(uParam3->f_104), func_317(iParam5, 1, 0, 0), 16);
								}
								if (bParam6)
								{
									iVar13 = (iParam0[iVar17 /*42*/])->f_2 + 1;
									if (iVar19 != iVar13)
									{
										iVar19 = iVar13;
									}
									else
									{
										iVar13 = -2;
									}
								}
								iVar16 = func_312(iVar3, 0);
								if (bVar2)
								{
									if (func_311(iVar3, 1) && iVar1[iVar9] != -1)
									{
										iVar18 = iVar1[iVar9];
									}
									else
									{
										iVar18 = (iVar0 + iVar21);
										iVar21++;
									}
								}
								uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
								if ((iParam0[iVar17 /*42*/])->f_39 != -1)
								{
									StringCopy(&Var22, "UW_TM", 16);
									StringIntConCat(&Var22, (iParam0[iVar17 /*42*/])->f_39, 16);
								}
								if (func_310(iParam5))
								{
									func_309(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar8, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								else
								{
									func_309(iVar3, iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar8, iVar16, iVar15, fVar10, iVar11, iVar12, &Var22, (iParam0[iVar17 /*42*/])->f_40, iVar13, bParam6);
								}
								MISC::SET_BIT(&iVar14, iVar3);
								iVar18++;
							}
							iVar17++;
						}
						iVar17 = 0;
						while (iVar17 < 32)
						{
							iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							if (func_820(iVar3, 0, 1) && !MISC::IS_BIT_SET(iVar14, iVar3))
							{
								iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar17);
							}
							else
							{
								iVar3 = func_26();
							}
							if (func_337(iVar3))
							{
								if (func_820(PLAYER::INT_TO_PLAYERINDEX(iVar17), 0, 1))
								{
									iVar9 = iVar3;
									iVar7 = Global_1595693[iVar9 /*680*/].f_211.f_6;
									Var6 = { func_329(iVar3) };
									*(uParam4[iVar17 /*13*/]) = { func_66(iVar3) };
									iVar5 = func_323(iVar3);
									sVar4 = "";
									if (iVar5 != 0)
									{
										sVar4 = PED::GET_PEDHEADSHOT_TXD_STRING(iVar5);
									}
									Global_1574123++;
									iVar16 = func_312(iVar3, 1);
									if (bVar2)
									{
										if (func_311(iVar3, 1))
										{
											iVar18 = iVar1[iVar17];
										}
										else
										{
											iVar18 = (iVar0 + iVar21);
											iVar21++;
										}
									}
									uParam3->f_38[iVar9 /*2*/].f_1 = iVar18;
									func_289(iVar3, PLAYER::GET_PLAYER_NAME(iVar3), iParam1, uParam3, iVar18, Var6, sVar4, iVar7, iVar16, iVar15);
									iVar18++;
								}
							}
							iVar17++;
						}
						if (MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							func_286(uParam3, iParam1);
						}
						func_104(&(uParam3->f_21));
						func_285();
						uParam3->f_27 = 2;
					}
					if (uParam3->f_27 == 2)
					{
						if (!MISC::IS_BIT_SET(uParam3->f_33, 7))
						{
							func_284(uParam3, iParam1);
							func_283(iParam1, 0, 1);
							MISC::SET_BIT(&(uParam3->f_33), 7);
						}
						func_284(uParam3, iParam1);
						if (!MISC::IS_BIT_SET(uParam3->f_33, 11))
						{
							MISC::SET_BIT(&(uParam3->f_33), 11);
						}
						if (func_279(uParam3))
						{
							Global_1574308 = 1;
						}
						func_277(uParam3);
						if (Global_1574308 == 1)
						{
							uParam3->f_27 = 0;
						}
						if (Global_1574308 == 2)
						{
							uParam3->f_27 = 0;
						}
					}
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
					{
						GRAPHICS::_SET_2D_LAYER(7);
						GRAPHICS::DRAW_SCALEFORM_MOVIE(*iParam1, 0.122f, 0.3f, 0.28f, 0.6f, 255, 255, 255, 255, 0);
						GRAPHICS::_SET_2D_LAYER(4);
					}
				}
			}
		}
		else
		{
			uParam3->f_27 = 0;
			func_285();
			func_350(0);
			if (MISC::IS_BIT_SET(uParam3->f_33, 7))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 7);
			}
			if (MISC::IS_BIT_SET(uParam3->f_33, 10))
			{
				MISC::CLEAR_BIT(&(uParam3->f_33), 10);
			}
		}
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_277(var uParam0)
{
	if (!func_21(&(uParam0->f_21)))
	{
		func_19(&(uParam0->f_21), 0, 0);
	}
	else if (func_18(&(uParam0->f_21), 250, 0))
	{
		func_104(&(uParam0->f_21));
		func_278(0);
	}
}

void func_278(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1574308 != 2)
		{
			Global_1574308 = 2;
		}
	}
	else
	{
		switch (Global_1574308)
		{
			case 0:
				Global_1574308 = 1;
				break;
			
			case 1:
				break;
			
			case 2:
				break;
			}
	}
}

int func_279(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	int iVar4;
	
	iVar4 = 0;
	iVar0 = uParam0->f_37;
	iVar3 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_37);
	if (iVar3 != func_26() && func_820(iVar3, 0, 1))
	{
		Var2 = { func_66(iVar3) };
		iVar1 = func_282(uParam0, uParam0->f_37);
		if (func_281(Var2))
		{
			switch (iVar1)
			{
				case 0:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_280(uParam0, iVar0, 2);
						}
					}
					else if (NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_280(uParam0, iVar0, 1);
					}
					break;
				
				case 2:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_TALKING(&Var2))
						{
							iVar4 = 1;
							func_280(uParam0, iVar0, 0);
						}
					}
					else
					{
						iVar4 = 1;
						func_280(uParam0, iVar0, 0);
					}
					break;
				
				case 1:
					if (NETWORK::_0x8F5D1AD832AEB06C(&Var2))
					{
						if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
						{
							iVar4 = 1;
							func_280(uParam0, iVar0, 0);
						}
					}
					else if (!NETWORK::NETWORK_IS_GAMER_MUTED_BY_ME(&Var2))
					{
						iVar4 = 1;
						func_280(uParam0, iVar0, 0);
					}
					break;
				}
			}
	}
	uParam0->f_37++;
	if (uParam0->f_37 >= 32)
	{
		uParam0->f_37 = 0;
	}
	return iVar4;
}

void func_280(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_38[iParam1 /*2*/] = iParam2;
}

bool func_281(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

var func_282(var uParam0, int iParam1)
{
	return uParam0->f_38[iParam1 /*2*/];
}

void func_283(int iParam0, bool bParam1, int iParam2)
{
	if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "COLLAPSE"))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(bParam1);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
	if (iParam2 == 1)
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "DISPLAY_VIEW"))
		{
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

void func_284(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_33, 10))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam1, "SET_HIGHLIGHT");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(uParam0->f_35);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		MISC::SET_BIT(&(uParam0->f_33), 10);
	}
}

void func_285()
{
	if (Global_1574308 != 0)
	{
		Global_1574308 = 0;
	}
}

void func_286(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (iVar2 != func_26())
		{
			if (func_820(iVar2, 0, 1))
			{
				if (uParam0->f_38[iVar0 /*2*/].f_1 != -1)
				{
					iVar1 = func_288(uParam0->f_38[iVar0 /*2*/], 0);
					func_287(iParam1, uParam0->f_38[iVar0 /*2*/].f_1, iVar1, Global_1595693[iVar0 /*680*/].f_211.f_6);
				}
			}
		}
		iVar0++;
	}
}

void func_287(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*uParam0, "SET_ICON"))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam2);
			if (iParam2 == 65)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

int func_288(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 65;
	if (bParam1)
	{
		iVar0 = 116;
	}
	switch (iParam0)
	{
		case 2:
			return 47;
		
		case 1:
			return 49;
		
		default:
	}
	return iVar0;
}

void func_289(int iParam0, char* sParam1, int iParam2, var uParam3, int iParam4, char* sParam5, var uParam6, var uParam7, var uParam8, char* sParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	char* sVar1;
	
	if (iParam4 >= func_308() && iParam4 < func_307())
	{
		iParam4 = (iParam4 % 16);
		iVar0 = iParam4 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam2, sVar1))
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (MISC::IS_BIT_SET(uParam3->f_33, 8) || uParam3->f_108 == 6)
			{
				func_306("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
			}
			func_306(sParam1);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
			if (uParam3->f_108 == 6)
			{
				func_306("");
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
			func_306("");
			if (uParam3->f_108 == 6)
			{
				func_306("");
			}
			else
			{
				func_306(&sParam5);
			}
			func_294(uParam3, iParam0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam9);
			if (func_293(uParam3))
			{
				func_292("DPAD_FRIEND");
			}
			else if (func_291(uParam3))
			{
				func_292("DPAD_FRIEND");
			}
			else if (func_290(uParam3))
			{
				func_292("DPAD_CREW");
			}
			else
			{
				func_292("");
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
	}
}

bool func_290(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 6);
}

bool func_291(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_33, 5);
}

void func_292(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_293(var uParam0)
{
	if (func_291(uParam0) && func_290(uParam0))
	{
		return 1;
	}
	return 0;
}

void func_294(var uParam0, int iParam1)
{
	if (func_305(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(121);
	}
	else if (func_299(iParam1))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(122);
	}
	else if (((MISC::IS_BIT_SET(Global_4456448.f_27, 15) && iParam1 > -1) && iParam1 < 32) && MISC::IS_BIT_SET(Global_2422736[iParam1 /*420*/].f_419, 0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(123);
	}
	else
	{
		if (func_295())
		{
			uParam0->f_36 = 0;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(uParam0->f_36);
	}
}

int func_295()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (func_297() || func_296())
		{
			return 1;
		}
	}
	return 0;
}

var func_296()
{
	return Global_2447174.f_14;
}

int func_297()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_296();
	}
	return func_298(Global_4456448.f_122309);
}

int func_298(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_4979[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_299(int iParam0)
{
	if ((func_820(iParam0, 0, 1) && func_303()) && func_300(iParam0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_300(int iParam0, bool bParam1)
{
	return func_301(iParam0, bParam1, 1);
}

int func_301(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_302(iParam0, iParam2))
		{
			return 0;
		}
	}
	iVar0 = Global_1627537[iParam0 /*532*/].f_11;
	if (iVar0 != func_26() && Global_1627537[iVar0 /*532*/].f_11.f_409 == iParam2)
	{
		return 1;
	}
	return 0;
}

int func_302(int iParam0, int iParam1)
{
	if (iParam0 != func_26())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_26())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 == iParam0 && Global_1627537[iParam0 /*532*/].f_11.f_409 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_303()
{
	if (func_246(PLAYER::PLAYER_ID()) || func_304())
	{
		return 0;
	}
	return 1;
}

int func_304()
{
	switch (func_339(PLAYER::PLAYER_ID()))
	{
		case 193:
		case 194:
		case 199:
		case 205:
		case 210:
		case 188:
			return 1;
		
		default:
	}
	return 0;
}

int func_305(int iParam0)
{
	if (func_295())
	{
		if (func_820(iParam0, 0, 1))
		{
			return func_346(iParam0);
		}
	}
	if ((func_820(iParam0, 0, 1) && func_303()) && func_302(iParam0, 0))
	{
		return 1;
	}
	return 0;
}

void func_306(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

int func_307()
{
	int iVar0;
	
	if (Global_1574125)
	{
		iVar0 = 32;
	}
	else
	{
		iVar0 = 16;
	}
	return iVar0;
}

int func_308()
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_1574125)
	{
		iVar0 = 16;
	}
	return iVar0;
}

void func_309(int iParam0, int iParam1, var uParam2, int iParam3, char* sParam4, var uParam5, var uParam6, var uParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, float fParam13, int iParam14, int iParam15, char* sParam16, int iParam17, int iParam18, bool bParam19)
{
	int iVar0;
	char* sVar1;
	
	if (iParam3 >= func_308() && iParam3 < func_307())
	{
		iParam3 = (iParam3 % 16);
		iVar0 = iParam3 + 1;
		if (Global_1574125)
		{
			iVar0 += 16;
		}
		if (bParam19)
		{
			iVar0 = iParam18;
			if (iVar0 == -2)
			{
				iParam10 = -1;
			}
		}
		sVar1 = "SET_DATA_SLOT";
		if (Global_1574308 == 1)
		{
			sVar1 = "UPDATE_SLOT";
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1))
		{
			if (GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam1, sVar1))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
				if (MISC::IS_BIT_SET(uParam2->f_33, 8) || uParam2->f_108 == 6)
				{
					func_306("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam9);
				}
				if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					func_292(sParam16);
				}
				else
				{
					func_306(&(uParam2->f_1));
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam11);
				if (uParam2->f_108 == 6)
				{
					func_306("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(65);
				}
				if (iParam12 == 1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar0);
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(-1);
				}
				if (func_338())
				{
					func_306("");
				}
				else if (uParam2->f_108 == 6 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 5 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_ONE_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 7 && !MISC::IS_STRING_NULL_OR_EMPTY(sParam16))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_TWO_INT");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam16);
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam17);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 8 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_UNIT");
					if (fParam13 != -1f)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					}
					if (iParam10 != -1)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam10);
					}
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam2->f_104));
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (uParam2->f_108 == 10)
				{
					if (iParam10 == 0)
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_NG_CASH");
						HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam10, 1);
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				}
				else if (iParam15 > -1)
				{
					if (iParam15 == 0 && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_104)))
					{
						func_292(&(uParam2->f_104));
					}
					else
					{
						func_306("");
					}
				}
				else if (iParam14 != -1)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam14, 6);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (fParam13 != -1f)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
					HUD::ADD_TEXT_COMPONENT_FLOAT(fParam13, 1);
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam10 != -1)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam10);
				}
				else
				{
					func_306("");
				}
				if (uParam2->f_108 == 6)
				{
					func_306("");
				}
				else
				{
					func_306(&sParam4);
				}
				func_294(uParam2, iParam0);
				if (iParam12 == 1 || MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					func_306("");
					func_306("");
				}
				else
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_STRING(sParam8);
				}
				if (func_293(uParam2))
				{
					func_292("DPAD_FRIEND");
				}
				else if (func_291(uParam2))
				{
					func_292("DPAD_FRIEND");
				}
				else if (func_290(uParam2))
				{
					func_292("DPAD_CREW");
				}
				else
				{
					func_292("");
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
	}
}

int func_310(int iParam0)
{
	return 0;
	switch (iParam0)
	{
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

bool func_311(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_346(iParam0))
		{
			return 0;
		}
	}
	return Global_1627537[iParam0 /*532*/].f_11 != func_26();
}

int func_312(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 116;
	if ((!bParam1 && func_246(iParam0)) && !func_245(iParam0))
	{
		iVar0 = func_316();
	}
	iVar1 = func_315(iParam0);
	if (!iVar1 == -1)
	{
		return func_313(iVar1);
	}
	return iVar0;
}

int func_313(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_314(iParam0);
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

var func_314(int iParam0)
{
	return Global_2416800.f_2071.f_44[iParam0 /*2*/].f_1;
}

int func_315(int iParam0)
{
	if (!iParam0 == func_26())
	{
		if (func_311(iParam0, 1))
		{
			return Global_2416800.f_2071.f_11[func_65(iParam0)];
		}
	}
	return -1;
}

int func_316()
{
	return 21;
}

char* func_317(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_M_LB";
				}
				else if (bParam2)
				{
					return "AMCH_M";
				}
				else
				{
					return "AMCH_METRES";
				}
			}
			else if (bParam1)
			{
				return "AMCH_FT_LB";
			}
			else if (bParam2)
			{
				return "AMCH_FT";
			}
			else
			{
				return "AMCH_FEET";
			}
			break;
		
		case 2:
			if (MISC::_0xD3D15555431AB793())
			{
				if (bParam1)
				{
					return "AMCH_KMH_LB";
				}
				else if (bParam2)
				{
					return "AMCH_KMHN";
				}
				else
				{
					return "AMCH_KMH";
				}
			}
			else if (bParam1)
			{
				return "AMCH_MPH_LB";
			}
			else if (bParam2)
			{
				return "AMCH_MPHN";
			}
			else
			{
				return "AMCH_MPH";
			}
			break;
		
		case 7:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else
			{
				return "AMCH_VEH";
			}
			break;
		
		case 15:
		case 16:
		case 17:
		case 18:
			if (bParam1 || bParam2)
			{
				return "";
			}
			else if (iParam3 != 1)
			{
				return "AMCH_KILLS";
			}
			else
			{
				return "AMCH_KILL";
			}
			break;
	}
	if (bParam1 || bParam2)
	{
		return "";
	}
	return "AMCH_EMPTY";
}

int func_318(var uParam0, float fParam1, int iParam2, int iParam3)
{
	if (func_322(iParam3))
	{
		*fParam1 = (func_319(iParam3, iParam2) / 10f);
		return 1;
	}
	if (func_310(iParam3))
	{
		*fParam1 = (func_319(iParam3, iParam2) / 1000f);
		return 1;
	}
	*uParam0 = iParam2;
	return 0;
}

float func_319(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
		case 3:
		case 4:
		case 5:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			if (MISC::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_321(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
		
		case 2:
			if (MISC::_0xD3D15555431AB793())
			{
				return SYSTEM::TO_FLOAT(iParam1);
			}
			else
			{
				return func_320(SYSTEM::TO_FLOAT(iParam1));
			}
			break;
	}
	return SYSTEM::TO_FLOAT(iParam1);
}

float func_320(float fParam0)
{
	return (fParam0 / 1.609344f);
}

float func_321(float fParam0)
{
	return (fParam0 / 0.3048f);
}

int func_322(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 5:
		case 4:
		case 1:
		case 6:
		case 9:
		case 10:
		case 13:
		case 11:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_323(int iParam0)
{
	int iVar0;
	
	iVar0 = func_326(iParam0);
	if (iVar0 == -1)
	{
		func_324(iParam0, 1);
		return 0;
	}
	Global_1369176[iVar0 /*5*/].f_4 = 1;
	return Global_1369176[iVar0 /*5*/].f_2;
}

void func_324(int iParam0, bool bParam1)
{
	if (!func_820(iParam0, 0, 1))
	{
		return;
	}
	if (func_326(iParam0) != -1)
	{
		return;
	}
	if (Global_1369339)
	{
		if (iParam0 == Global_1369339.f_1)
		{
			return;
		}
	}
	if (func_325(iParam0))
	{
		return;
	}
	if (Global_1369377 >= 32)
	{
		return;
	}
	Global_1369344[Global_1369377] = iParam0;
	Global_1369377++;
	if (bParam1)
	{
	}
}

int func_325(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369377)
	{
		if (Global_1369344[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_326(int iParam0)
{
	int iVar0;
	
	if (!func_820(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1369337 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1369337)
	{
		if (Global_1369176[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1369176[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1369176[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_327(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_327(int iParam0)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	
	if (iParam0 >= Global_1369337)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1369176[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1369176[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1369176[iParam0 /*5*/].f_2), 64);
			HUD::_0x317EBA71D7543F52(&cVar1, &cVar1, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1369176[iParam0 /*5*/].f_2);
	}
	iVar2 = iParam0;
	iVar3 = iVar2 + 1;
	while (iVar3 < Global_1369337)
	{
		Global_1369176[iVar2 /*5*/] = { Global_1369176[iVar3 /*5*/] };
		iVar2++;
		iVar3++;
	}
	func_328(&(Global_1369176[iVar2 /*5*/]));
	Global_1369337 = (Global_1369337 - 1);
}

void func_328(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_26();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

struct<4> func_329(int iParam0)
{
	char cVar0[32];
	
	if (func_820(iParam0, 0, 1))
	{
		Global_2492157 = { func_66(iParam0) };
		if (MISC::IS_DURANGO_VERSION())
		{
			if (func_281(Global_2492157))
			{
				if (!NETWORK::_0xB57A49545BA53CE7(&Global_2492157))
				{
					return cVar0;
				}
			}
		}
		else if (!NETWORK::_0x72D918C99BCACC54(0))
		{
			return cVar0;
		}
		if (func_333(&Global_2492157))
		{
			Global_2492087 = { func_331(iParam0) };
			func_330(&Global_2492087, &cVar0);
		}
	}
	return cVar0;
}

void func_330(var uParam0, char* sParam1)
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

struct<35> func_331(int iParam0)
{
	struct<13> Var0;
	struct<35> Var1;
	
	if (func_332(iParam0))
	{
		return Global_1312886[PLAYER::PLAYER_ID() /*35*/];
	}
	Var0 = { func_66(iParam0) };
	NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var0);
	return Var1;
}

int func_332(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return 1;
	}
	return 0;
}

int func_333(var uParam0)
{
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_334(int iParam0, int iParam1)
{
	if (iParam1 == 26)
	{
		if ((func_200(iParam0) || func_336(iParam0)) || func_199(iParam0))
		{
			return 0;
		}
	}
	if (!func_335(iParam0))
	{
		return 0;
	}
	if ((!func_348(iParam0) && Global_2422736[iParam0 /*420*/].f_251 == -1) && !func_347(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_335(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_142, 22);
}

int func_336(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return (MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 10) || MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 9));
	}
	return 0;
}

int func_337(int iParam0)
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return 0;
	}
	if (func_15(iParam0, 0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (MISC::IS_BIT_SET(Global_1595693[iVar0 /*680*/].f_142, 2))
		{
			return 0;
		}
	}
	return 1;
}

int func_338()
{
	switch (func_339(PLAYER::PLAYER_ID()))
	{
		case 179:
		case 180:
		case 182:
		case 183:
		case 184:
		case 185:
		case 186:
		case 189:
		case 190:
		case 191:
		case 192:
		case 195:
		case 197:
		case 198:
		case 200:
		case 201:
		case 202:
		case 203:
		case 204:
		case 206:
		case 207:
		case 208:
		case 209:
		case 211:
			return 1;
		
		default:
	}
	switch (func_188(PLAYER::PLAYER_ID()))
	{
		case 131:
		case 140:
		case 138:
		case 146:
			return 1;
			break;
	}
	if (func_245(PLAYER::PLAYER_ID()))
	{
		switch (func_339(PLAYER::PLAYER_ID()))
		{
			case 148:
			case 151:
			case 152:
			case 153:
			case 157:
			case 159:
			case 162:
			case 164:
			case 142:
				return 1;
				break;
			}
	}
	return 0;
}

int func_339(int iParam0)
{
	if (func_240(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_340(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 && func_341(Global_1627537[iParam0 /*532*/].f_11.f_33))
	{
		return 1;
	}
	if (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1)
	{
		if (func_341(Global_1627537[iParam0 /*532*/].f_11.f_32))
		{
			return 1;
		}
	}
	return 0;
}

int func_341(int iParam0)
{
	switch (iParam0)
	{
		case 155:
		case 160:
		case 153:
		case 162:
		case 154:
		case 163:
		case 171:
		case 172:
			return 1;
		
		default:
	}
	return func_342(iParam0, 0);
	return 0;
}

int func_342(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 199:
		case 205:
		case 210:
		case 211:
			return 1;
		
		default:
	}
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 194:
			case 193:
			case 189:
			case 153:
				return 1;
			}
		
		default:
	}
	return 0;
}

void func_343(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_820(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!func_15(iVar1, 0))
			{
				if ((func_348(iVar1) || Global_2422736[iVar1 /*420*/].f_251 != -1) || func_347(iVar1))
				{
					if (func_344(iVar1, iParam1, 0))
					{
						(*iParam0)[iVar0] = *iParam2;
						*iParam2++;
						*iParam3++;
					}
				}
			}
		}
		iVar0++;
	}
}

int func_344(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 != func_26())
	{
		if (!bParam2)
		{
			if (func_345(iParam0, iParam1))
			{
				return 0;
			}
		}
		if (Global_1627537[iParam0 /*532*/].f_11 != func_26())
		{
			return iParam1 == Global_1627537[iParam0 /*532*/].f_11;
		}
	}
	return 0;
}

int func_345(int iParam0, int iParam1)
{
	if (iParam1 != func_26())
	{
		if (iParam0 != func_26())
		{
			if (Global_1627537[iParam0 /*532*/].f_11 != func_26())
			{
				if (Global_1627537[iParam0 /*532*/].f_11 == iParam0)
				{
					return iParam1 == iParam0;
				}
			}
		}
	}
	return 0;
}

int func_346(int iParam0)
{
	if (iParam0 != func_26())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_26())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

bool func_347(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_196 != 0;
}

int func_348(int iParam0)
{
	if (func_820(iParam0, 0, 1))
	{
		if (func_820(PLAYER::PLAYER_ID(), 0, 1))
		{
			if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(iParam0, PLAYER::PLAYER_ID()) || func_339(iParam0) == 233)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_349(int iParam0)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_DATA_SLOT_EMPTY");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_350(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1357527.f_2 == 0)
		{
			Global_1357527.f_2 = 1;
		}
	}
	else if (Global_1357527.f_2 == 1)
	{
		Global_1357527.f_2 = 0;
	}
}

void func_351()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_4553, 1))
	{
		if (func_353())
		{
			func_352();
		}
	}
}

void func_352()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 != 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

bool func_353()
{
	return Global_2436181.f_2592[0 /*79*/].f_1 != 0;
}

int func_354()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_4553, 0) && func_353())
	{
		return 1;
	}
	if (MISC::IS_BIT_SET(Global_2512808.f_4553, 1) && func_353())
	{
		return 1;
	}
	return 0;
}

int func_355()
{
	if (func_353())
	{
		if (func_356(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case 88:
		case 87:
		case 91:
		case 92:
		case 86:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 89:
		case 100:
		case 101:
		case 102:
		case 103:
		case 90:
			return 1;
		
		default:
	}
	return 0;
}

int func_357()
{
	if (func_353())
	{
		if (func_358(Global_2436181.f_2592[0 /*79*/].f_1))
		{
			return 1;
		}
	}
	return 0;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
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
		case 81:
		case 82:
		case 83:
			return 1;
		
		default:
	}
	return 0;
}

void func_359(int iParam0)
{
	if (Global_1357527.f_1 != Global_1357527)
	{
		Global_1357527.f_1 = Global_1357527;
	}
	if (Global_1357527 != iParam0)
	{
		Global_1357527 = iParam0;
	}
}

int func_360(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<4> Var0;
	char* sVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	
	StringCopy(&Var0, "", 16);
	bVar3 = func_406(iParam1);
	if (iParam1 == 20)
	{
		bVar2 = true;
	}
	fVar4 = func_405();
	if (iParam1 == 26 || iParam1 == 27)
	{
		if (func_404())
		{
			if (func_403() > 0 && Global_1574125)
			{
				HUD::_0x25F87B30C382FCA7();
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
				{
					HUD::HIDE_HELP_TEXT_THIS_FRAME();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			}
		}
	}
	if (!bParam5)
	{
		if (!func_392())
		{
			func_391(iParam0, uParam2, 1);
			return 0;
		}
	}
	if (MISC::IS_BIT_SET(Global_2512808.f_4556, 26))
	{
		func_391(iParam0, uParam2, 1);
		return 0;
	}
	if (!func_21(&(uParam2->f_19)))
	{
		if (func_403() == 1)
		{
			func_390(bVar3, iParam0, 0);
			func_19(&(uParam2->f_19), 0, 0);
			func_391(iParam0, uParam2, 0);
		}
	}
	if (func_21(&(uParam2->f_19)) || bParam5)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::HIDE_HELP_TEXT_THIS_FRAME();
		}
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		if (func_18(&(uParam2->f_19), 10000, 0) || (func_403() == 0 && !bParam5))
		{
			func_391(iParam0, uParam2, 1);
			return 0;
		}
		else
		{
			if (bVar2 == 0)
			{
				func_389();
				if (iParam1 == 26 || iParam1 == 27)
				{
					HUD::_0x25F87B30C382FCA7();
				}
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			}
			if (!MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				if (bVar2 == 0)
				{
					func_389();
					if (iParam1 == 26 || iParam1 == 27)
					{
						HUD::_0x25F87B30C382FCA7();
					}
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
				}
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (func_390(bVar3, iParam0, 0))
				{
					func_349(iParam0);
					sVar1 = func_387(iParam1, &(Global_4456448.f_122316), bParam4);
					Var0 = { func_385(iParam1) };
					if (bParam4)
					{
						func_382(iParam0, sVar1, "", 0, -1, -1, 1);
					}
					else if (iParam1 == 26)
					{
						func_377(iParam0, func_379(uParam2), func_378(uParam2), -1);
					}
					else if (iParam1 == 27)
					{
						func_368(iParam0, func_370(uParam2), func_369(), -1);
					}
					else if (func_295())
					{
						uParam2->f_34 = Global_1574124;
						func_382(iParam0, sVar1, &Var0, 1, -1, Global_1574124, 1);
					}
					else if (bVar2)
					{
						uParam2->f_34 = Global_1574124;
						func_382(iParam0, sVar1, "", 0, -1, Global_1574124, 1);
					}
					else
					{
						iVar5 = func_361(iParam1);
						func_382(iParam0, sVar1, &Var0, 1, iVar5, -1, 1);
					}
					MISC::SET_BIT(&(uParam2->f_33), 0);
				}
			}
			if (MISC::IS_BIT_SET(uParam2->f_33, 0))
			{
				Global_1574123 = uParam3;
				Global_1574122 = 1;
				HUD::_CLEAR_NOTIFICATIONS_POS(fVar4);
				if (bVar2)
				{
					if (uParam2->f_34 != Global_1574124)
					{
						MISC::CLEAR_BIT(&(uParam2->f_33), 0);
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_361(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (func_367())
	{
		iVar0 = 2;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 3;
			break;
		
		case 1:
			iVar0 = 6;
			break;
		
		case 3:
			iVar0 = 5;
			break;
		
		case 25:
			iVar0 = 21;
			break;
		
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
		case 10:
		case 11:
			iVar0 = 4;
			break;
		
		case 7:
			iVar0 = 10;
			break;
		
		case 12:
		case 13:
		case 14:
		case 17:
			iVar0 = 2;
			break;
		
		case 15:
			iVar0 = 17;
			break;
		
		case 16:
			iVar0 = 18;
			break;
		
		case 18:
			if (func_366(PLAYER::PLAYER_ID()))
			{
				iVar0 = 20;
			}
			if (func_365(PLAYER::PLAYER_ID()))
			{
				iVar0 = 19;
			}
			break;
	}
	if (func_364(PLAYER::PLAYER_ID()))
	{
		iVar0 = 2;
	}
	if (func_362())
	{
		iVar0 = 20;
	}
	return iVar0;
}

bool func_362()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_61();
	}
	return func_363(Global_4456448.f_122309);
}

int func_363(int iParam0)
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

bool func_364(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 4;
}

bool func_365(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

bool func_366(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_367()
{
	return Global_4456448.f_1 == 0;
}

void func_368(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_292(sParam1);
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_292("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_369()
{
	switch (func_339(PLAYER::PLAYER_ID()))
	{
		case 163:
			return "BD_SORT_1";
			break;
		
		case 160:
			return "BD_SORT_4";
			break;
		
		case 154:
			return "BD_SORT_3";
			break;
		
		case 155:
			return "BD_SORT_3";
			break;
	}
	return "";
}

char* func_370(var uParam0)
{
	switch (uParam0->f_112)
	{
		case 0:
			return "GR_DPD_E";
			break;
		
		case 1:
			return "GR_DPD_F";
			break;
		
		case 2:
			return "GR_DPD_S";
			break;
	}
	switch (uParam0->f_110)
	{
		case 0:
			return "GR_DPD_A";
			break;
		
		case 1:
			return "GR_DPD_B";
			break;
		
		case 2:
			return "GR_DPD_C";
			break;
		
		case 3:
			return "GR_DPD_D";
			break;
	}
	switch (func_339(PLAYER::PLAYER_ID()))
	{
		case 233:
			return "H2_DPAD_SET";
			break;
		
		case 180:
			return "GB_BIGUNLOAD_T";
			break;
		
		case 182:
			return "DEAL_DEALN";
			break;
		
		case 194:
			return "PI_BIK_13_0";
			break;
		
		case 189:
			return "PI_BIK_4_1";
			break;
		
		case 193:
			return "PI_BIK_13_1";
			break;
		
		case 205:
			return "PI_BIK_13_3";
			break;
		
		case 186:
			return "CELL_BIKER_CK";
			break;
		
		case 207:
			return "DV_SH_TITLE";
			break;
		
		case 208:
			return "BA_SH_TITLE";
			break;
		
		case 209:
			return "SHU_SH_TITLE";
			break;
		
		case 210:
			return "PI_BIK_13_4";
			break;
		
		case 183:
			return "CELL_BIKER_RESC";
			break;
		
		case 199:
			return "CELL_BIKER_SEAR";
			break;
		
		case 201:
			return "CELL_BIKER_STAN";
			break;
		
		case 142:
			return "PIM_MAGM210";
			break;
		
		case 163:
			return "PIM_MAGM608";
			break;
		
		case 160:
			return "PIM_MAGM604";
			break;
		
		case 154:
			return "PIM_MAGM602";
			break;
		
		case 155:
			return "PIM_MAGM603";
			break;
		
		case 148:
			if (func_373())
			{
				return "LBD_BKVBK";
			}
			return "PIM_MAGM201";
			break;
		
		case 151:
			if (func_372(1))
			{
				return "GB_DPAD_BMFD";
			}
			return "PIM_MAGM202";
			break;
		
		case 152:
			return "PIM_MAGM204";
			break;
		
		case 153:
			if (func_372(1))
			{
				return "PI_BIK_3_2";
			}
			return "PIM_MAGM601";
			break;
		
		case 157:
			return "PIM_MAGM207";
			break;
		
		case 159:
			return "PIM_MAGM206";
			break;
		
		case 162:
			return "PIM_MAGM607";
			break;
		
		case 164:
			return "PIM_MAGM212";
			break;
		
		case 166:
			return "GB_DPAD_HEAD";
		
		case 167:
			return "GB_DPAD_BUY";
		
		case 168:
			return "GB_DPAD_SELL";
		
		case 169:
			return "GB_DPAD_DEF";
		
		case 170:
			return "GB_DPAD_AIR";
		
		case 171:
			return "GB_DPAD_CASH";
		
		case 172:
			return "GB_DPAD_SAL";
		
		case 173:
			return "GB_DPAD_FRA";
		
		case 178:
			return "VEX_TITLEa";
		
		case 188:
			return "VEX_TITLEb";
		
		case 218:
			return "FRT_MODE";
		
		case 217:
			return "FRT_TRNS";
		
		case 214:
			return "MODE_PLW";
		
		case 215:
			return "MODE_FUL";
		
		case 216:
			return "MODE_AA";
		
		case 219:
			return "MODE_VEL";
		
		case 220:
			return "MODE_RMP";
		
		case 221:
			return "MODE_STK";
		
		case 225:
			return "GR_TITLEL";
		
		case 226:
			return "GRS_TITLEL";
		
		case 227:
			return "GRD_TITLEL";
		
		case 195:
			return "GB_STEAL_T";
		
		case 198:
			return "SC_MENU_TITLE";
		
		case 190:
			return "GB_DPAD_BSEL";
		
		case 191:
			return "GB_DPAD_BDEF";
		
		case 185:
			return "GB_DPAD_GFH";
		
		case 197:
			return "GB_DPAD_JB";
		
		case 179:
			return "CELL_JOUST";
		
		case 200:
			return "CAG_BLIP";
		
		case 192:
			if (func_371(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_176))
			{
				return "GB_DPAD_BSET";
			}
			return "GB_DPAD_BBUY";
			break;
	}
	return "";
}

int func_371(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			return 1;
		
		default:
	}
	return 0;
}

bool func_372(bool bParam0)
{
	return func_300(PLAYER::PLAYER_ID(), bParam0);
}

bool func_373()
{
	return (func_376() && func_374(func_375()));
}

int func_374(int iParam0)
{
	return func_302(iParam0, 1);
}

int func_375()
{
	return Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_35;
}

bool func_376()
{
	return Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 148;
}

void func_377(int iParam0, char* sParam1, char* sParam2, int iParam3)
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
		{
			func_292(sParam1);
		}
		else if (func_188(PLAYER::PLAYER_ID()) == 133)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT_C");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("FM_AE_BRACKT");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		func_292("");
		if (iParam3 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam3);
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

char* func_378(var uParam0)
{
	int iVar0;
	
	iVar0 = func_188(PLAYER::PLAYER_ID());
	if (func_410())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "";
		
		case 132:
			return "FM_AE_SORT_5";
		
		case 133:
			switch (func_187())
			{
				case 0:
					return "FM_AE_SORT_2";
				
				case 1:
					return "FM_AE_SORT_2";
				
				case 2:
					return "FM_AE_SORT_3";
				
				case 3:
					return "FM_AE_SORT_2";
				
				case 4:
					return "FM_AE_SORT_2";
				
				case 5:
					return "FM_AE_SORT_2";
				
				case 6:
					return "FM_AE_SORT_2";
				
				case 7:
					return "FM_AE_SORT_13";
				
				case 8:
					return "FM_AE_SORT_4";
				
				case 9:
					return "FM_AE_SORT_2";
				
				case 10:
					return "FM_AE_SORT_2";
				
				case 11:
					return "FM_AE_SORT_2";
				
				case 12:
					return "FM_AE_SORT_2";
				
				case 13:
					return "FM_AE_SORT_2";
				
				case 14:
					return "FM_AE_SORT_5";
				
				case 15:
					return "FM_AE_SORT_9";
				
				case 16:
					return "FM_AE_SORT_9";
				
				case 17:
					return "FM_AE_SORT_9";
				
				case 18:
					return "FM_AE_SORT_9";
				
				default:
			}
			break;
		
		case 136:
			return "";
		
		case 138:
			return "";
		
		case 139:
			return "FM_AE_SORT_10";
		
		case 140:
			return "";
		
		case 141:
			return "FM_AE_SORT_5";
		
		case 144:
			return "FM_AE_SORT_1";
		
		case 129:
			return "FM_AE_SORT_9";
	}
	return "";
}

char* func_379(var uParam0)
{
	int iVar0;
	
	iVar0 = func_188(PLAYER::PLAYER_ID());
	if (func_410())
	{
		if (uParam0->f_103 != -1)
		{
			iVar0 = uParam0->f_103;
		}
	}
	switch (iVar0)
	{
		case 131:
			return "PIM_TA9";
		
		case 132:
			if (func_381() == 0)
			{
				return "CPC_TILEL";
			}
			else if (func_381() == 1)
			{
				return "CPC_TILELA";
			}
			return "PIM_TA0";
			break;
		
		case 133:
			switch (func_187())
			{
				case 0:
					return "AMCH_0SLC";
				
				case 1:
					return "AMCH_1SLC";
				
				case 2:
					return "AMCH_2SLC";
				
				case 3:
					return "AMCH_3SLC";
				
				case 4:
					return "AMCH_4SLC";
				
				case 5:
					return "AMCH_5SLC";
				
				case 6:
					return "AMCH_6SLC";
				
				case 7:
					return "AMCH_7SLC";
				
				case 8:
					return "AMCH_8SLC";
				
				case 9:
					return "AMCH_12SLC";
				
				case 10:
					return "AMCH_13SLC";
				
				case 11:
					return "AMCH_15SLC";
				
				case 12:
					return "AMCH_16SLC";
				
				case 13:
					return "AMCH_23SLC";
				
				case 14:
					return "AMCH_9SLC";
				
				case 15:
					return "AMCH_19SLC";
				
				case 16:
					return "AMCH_20SLC";
				
				case 17:
					return "AMCH_21SLC";
				
				case 18:
					return "AMCH_22SLC";
				
				default:
			}
			break;
		
		case 136:
			return "PIM_TA10";
		
		case 138:
			return "PIM_TA4";
		
		case 139:
			return "PIM_TA5";
		
		case 140:
			return "PIM_TA3";
		
		case 141:
			return "PIM_TA8";
		
		case 144:
			return "PIM_TA2";
		
		case 129:
			if (func_380() == 1)
			{
				return "FM_AE_TITL_12";
			}
			else
			{
				return "PIM_TA7";
			}
			break;
		
		case 146:
			return "PIM_TA6";
	}
	return "";
}

int func_380()
{
	return Global_2512808.f_4780;
}

int func_381()
{
	if (func_188(PLAYER::PLAYER_ID()) == 132)
	{
		return Global_2512808.f_4775;
	}
	return -1;
}

void func_382(int iParam0, char* sParam1, char* sParam2, bool bParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(*iParam0, "SET_TITLE");
		if (bParam3)
		{
			func_306(sParam1);
		}
		else if (iParam5 != -1)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_292(sParam1);
		}
		if (func_404() && iParam6)
		{
			if (func_384())
			{
				iVar0 = 2;
				iVar1 = 2;
			}
			else
			{
				iVar0 = 1;
				iVar1 = 2;
			}
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("LBD_DPD_CNT");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iVar1);
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
		}
		else
		{
			func_292(sParam2);
		}
		if (iParam4 != -1)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iParam4);
			if (func_383(PLAYER::PLAYER_ID()))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(166);
			}
			else if (func_61())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(220);
			}
		}
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

int func_383(int iParam0)
{
	if (func_366(iParam0) || func_365(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_384()
{
	return Global_1574125;
}

struct<4> func_385(int iParam0)
{
	struct<4> Var0;
	
	StringCopy(&Var0, "", 16);
	if (func_386(PLAYER::PLAYER_ID()) || func_364(PLAYER::PLAYER_ID()))
	{
		return Var0;
	}
	switch (iParam0)
	{
		case 12:
		case 13:
		case 14:
		case 17:
		case 15:
		case 16:
		case 18:
			StringCopy(&Var0, "LBD_DIF_", 16);
			StringIntConCat(&Var0, Global_4456448.f_33, 16);
			break;
	}
	if (func_295() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		StringCopy(&Var0, "LBD_DIF_", 16);
		StringIntConCat(&Var0, Global_4456448.f_33, 16);
	}
	return Var0;
}

bool func_386(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 5;
}

char* func_387(int iParam0, char* sParam1, bool bParam2)
{
	var uVar0;
	
	if (iParam0 == 20 && (!func_295() || MISC::IS_STRING_NULL_OR_EMPTY(sParam1)))
	{
		uVar0 = func_388();
		return uVar0;
	}
	else if (bParam2)
	{
		return "HUD_LBD_IMP";
	}
	else if (iParam0 == 24)
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		return "HUD_LBD_OVR";
	}
	else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (Global_1574326 == 1)
		{
			Global_1574326 = 0;
		}
		return sParam1;
	}
	else
	{
		if (Global_1574326 == 0)
		{
			Global_1574326 = 1;
		}
		switch (iParam0)
		{
			case 0:
				return "HUD_LBD_DM";
				break;
			
			case 1:
				return "HUD_LBD_TDM";
				break;
			
			case 5:
				return "HUD_LBD_GRCE";
				break;
			
			case 4:
			case 9:
			case 10:
			case 6:
			case 25:
			case 11:
				return "HUD_LBD_RCE";
				break;
			
			case 7:
				return "HUD_LBD_BRCE";
				break;
			
			case 18:
			case 14:
			case 17:
			case 15:
			case 13:
			case 12:
			case 16:
			case 19:
				return "HUD_TITLEMC";
				break;
			
			case 3:
				return "HUD_LBD_HRD";
				break;
			
			case 21:
				return "HUD_LBD_SHOO";
				break;
			}
	}
	return sParam1;
}

char* func_388()
{
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_FRIENDS())
	{
		return "HUD_LBD_FMF";
	}
	if (NETWORK::NETWORK_SESSION_IS_CLOSED_CREW())
	{
		return "HUD_LBD_FMC";
	}
	if (NETWORK::NETWORK_SESSION_IS_SOLO())
	{
		return "HUD_LBD_FMS";
	}
	if (NETWORK::NETWORK_SESSION_IS_PRIVATE())
	{
		return "HUD_LBD_FMI";
	}
	return "HUD_LBD_FMP";
}

void func_389()
{
	Global_36765 = 1;
}

bool func_390(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_mm_card_freemode");
	}
	else if (bParam2)
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MP_SPECTATOR_CARD");
	}
	else
	{
		*iParam1 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("mp_matchmaking_card");
	}
	return GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam1);
}

void func_391(int iParam0, var uParam1, bool bParam2)
{
	MISC::CLEAR_BIT(&(uParam1->f_33), 7);
	Global_1574123 = 0;
	func_285();
	Global_1574122 = 0;
	uParam1->f_27 = 0;
	if (bParam2)
	{
		if (func_21(&(uParam1->f_19)))
		{
			func_104(&(uParam1->f_19));
		}
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
	}
	if (MISC::IS_BIT_SET(uParam1->f_33, 0))
	{
		MISC::CLEAR_BIT(&(uParam1->f_33), 0);
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
}

int func_392()
{
	if (func_402())
	{
		return 0;
	}
	if (func_247())
	{
		return 0;
	}
	if (!func_400())
	{
		return 0;
	}
	if (!func_222())
	{
		return 0;
	}
	if (func_399(8, -1))
	{
		return 0;
	}
	if (func_403() == 2)
	{
		return 0;
	}
	if (Global_2512808.f_4511)
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	else if (!func_251(PLAYER::PLAYER_ID(), 1) && Global_1311716[0 /*4*/] > 0)
	{
		return 0;
	}
	if (((func_398(1) || func_396(1)) || Global_17162.f_124) || Global_17162)
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (func_394(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (Global_1655673)
	{
		return 0;
	}
	if (Global_1655677)
	{
		return 0;
	}
	if (func_393(0))
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 4))
	{
		return 0;
	}
	if (Global_1350989)
	{
		return 0;
	}
	if ((Global_1679652.f_705.f_5 || Global_1682463.f_705.f_5) || Global_1678695.f_705.f_5)
	{
		return 0;
	}
	return 1;
}

bool func_393(int iParam0)
{
	return MISC::IS_BIT_SET(Global_2512808.f_4856.f_34, iParam0);
}

int func_394(int iParam0)
{
	if (func_15(iParam0, 0))
	{
		return 1;
	}
	if (func_395())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (MISC::IS_BIT_SET(Global_2422736[iParam0 /*420*/].f_210, 2))
	{
		return 1;
	}
	return 0;
}

bool func_395()
{
	return MISC::IS_BIT_SET(Global_2359302, 3);
}

int func_396(bool bParam0)
{
	if (PAD::_0xFC859E2374407556())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (func_397(PLAYER::PLAYER_PED_ID()))
			{
				if (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))
				{
					return 0;
				}
			}
		}
	}
	if (Global_17162.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_PRESSED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (((PAD::IS_CONTROL_PRESSED(0, 166) || PAD::IS_CONTROL_PRESSED(0, 167)) || PAD::IS_CONTROL_PRESSED(0, 168)) || PAD::IS_CONTROL_PRESSED(0, 169))
		{
			return 1;
		}
		if (!bParam0)
		{
			if (((PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_397(int iParam0)
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == joaat("weapon_heavysniper_mk2"))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_398(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17162.f_4 && Global_17162.f_104 == 4);
	}
	return Global_17162.f_4;
}

bool func_399(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1357530.f_203[iParam1];
			}
			break;
	}
	return MISC::IS_BIT_SET(Global_1357530.f_1048, iParam0);
}

int func_400()
{
	if (func_401())
	{
		return 1;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 0;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
	{
		return 0;
	}
	if (MISC::IS_FRONTEND_FADING())
	{
		return 0;
	}
	return 1;
}

bool func_401()
{
	return Global_1312438;
}

bool func_402()
{
	return MISC::GET_GAME_TIMER() <= Global_17301.f_5745 + 100;
}

int func_403()
{
	return Global_1357530.f_68;
}

int func_404()
{
	if (Global_1574124 > 16)
	{
		return 1;
	}
	return 0;
}

float func_405()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar2 = 0.6347182f;
	fVar1 = (1f - (1f - GRAPHICS::GET_SAFE_ZONE_SIZE()));
	fVar0 = (1f - (fVar1 - fVar2));
	return fVar0;
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 20:
		case 26:
		case 27:
			return 1;
			break;
	}
	return 0;
}

int func_407()
{
	if (func_412())
	{
		return 1;
	}
	if (func_199(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (func_410())
	{
		return 1;
	}
	if (func_246(PLAYER::PLAYER_ID()))
	{
		switch (func_188(PLAYER::PLAYER_ID()))
		{
			case 131:
			case 132:
			case 133:
			case 136:
			case 138:
			case 139:
			case 141:
			case 144:
			case 146:
				return 1;
				break;
			
			case 140:
				if (!func_408(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 129:
				if (!func_408(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 174:
				if (!func_408(PLAYER::PLAYER_ID()))
				{
					return 1;
				}
				break;
			
			case 175:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_408(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 4);
}

int func_409(int iParam0)
{
	if ((iParam0 == 27 && func_246(PLAYER::PLAYER_ID())) && !func_245(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (iParam0 == 26)
	{
		if (func_240(PLAYER::PLAYER_ID(), 0) && func_245(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		if (func_229(PLAYER::PLAYER_ID()) == 3)
		{
			return 1;
		}
	}
	return 0;
}

bool func_410()
{
	return Global_1595566;
}

struct<4> func_411()
{
	struct<4> Var0;
	
	switch (Local_98.f_27)
	{
		case joaat("rhino"):
			StringCopy(&Var0, "UW_TMRHN", 16);
			break;
		
		case joaat("hydra"):
			StringCopy(&Var0, "UW_TMHYD", 16);
			break;
		
		case joaat("savage"):
			StringCopy(&Var0, "UW_TMSAV", 16);
			break;
		
		case joaat("valkyrie"):
			StringCopy(&Var0, "UW_TMVALK", 16);
			break;
		
		case joaat("buzzard"):
			StringCopy(&Var0, "UW_TMBUZ", 16);
			break;
	}
	return Var0;
}

int func_412()
{
	if (func_413(PLAYER::PLAYER_ID()))
	{
		return Global_1316732;
	}
	return 0;
}

int func_413(int iParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_15(iParam0, 0))
		{
			return NETWORK::NETWORK_PLAYER_IS_ROCKSTAR_DEV(iParam0);
		}
	}
	return 0;
}

void func_414()
{
	struct<2> Var0;
	int iVar1;
	var uVar2;
	int iVar3;
	
	if (func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	switch (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17)
	{
		case 0:
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_98.f_241 == 0)
				{
					func_724();
				}
			}
			if (!MISC::IS_BIT_SET(iLocal_102, 22))
			{
				if (Local_98.f_27 == joaat("rhino") && Local_98.f_29 == 2)
				{
					func_693(Local_98.f_30[0 /*3*/]);
					MISC::SET_BIT(&iLocal_102, 22);
				}
				else if (!func_69(Local_98.f_30[0 /*3*/], 0f, 0f, 0f, 0))
				{
					func_693(Local_98.f_30[0 /*3*/]);
					MISC::SET_BIT(&iLocal_102, 22);
				}
			}
			func_692();
			func_686();
			if (Local_98.f_241 == 0)
			{
				func_683(1);
			}
			func_682(0);
			if (Local_98.f_241 == 0)
			{
				if (!Local_98.f_27 == joaat("hydra") && !Local_98.f_27 == joaat("rhino"))
				{
					func_194();
				}
				else if (func_719())
				{
					func_194();
				}
				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!MISC::IS_BIT_SET(iLocal_103, 1))
					{
						func_681(129);
						func_659(1);
						MISC::SET_BIT(&iLocal_103, 1);
						NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
					}
					if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 6))
					{
						if (Local_98.f_28 > 1 || (Local_98.f_28 == 1 && func_110() > 1))
						{
							if (MISC::IS_BIT_SET(Local_98.f_3, 4))
							{
								Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
								MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 6);
							}
						}
					}
				}
				else if (MISC::IS_BIT_SET(iLocal_103, 1))
				{
					MISC::CLEAR_BIT(&iLocal_103, 1);
					func_658(1);
					func_657();
					func_659(0);
				}
			}
			if (Local_98.f_241 == 1)
			{
				func_656(&iVar1, &uVar2);
				iLocal_557 = iVar1;
				func_655(0);
				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (!func_654())
					{
						MISC::SET_BIT(&iLocal_103, 19);
					}
					if (func_270("UW_ABTSC") || func_270("UW_ABTS"))
					{
						func_8();
					}
					NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
					if ((func_653("UW_MINV") || func_653("UW_TIMELA")) || func_653("UW_TIMEL"))
					{
						HUD::CLEAR_HELP(1);
					}
					func_190();
					func_643(129, 0f, 0f, 1, 1, 1, 0);
					func_640(1);
					func_639();
					PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.1f);
					iLocal_107 = PLAYER::GET_MAX_WANTED_LEVEL();
					PLAYER::SET_MAX_WANTED_LEVEL(0);
					func_638(1);
					func_637(1);
					if (Local_98.f_27 != joaat("rhino"))
					{
						func_616(1);
					}
					iLocal_113 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_111);
					AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
					AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_START");
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, true);
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, false);
					func_615(0);
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iLocal_557;
					if (!func_719())
					{
						func_614(63, "UW_TITLE", "UW_DESC", func_316(), -1, func_316());
					}
					else if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
					{
						func_614(63, "UW_TITLEC", "UW_DESCC", func_316(), -1, func_316());
					}
					else
					{
						iVar1++;
						StringCopy(&Var0, "UW_TM", 16);
						StringIntConCat(&Var0, iVar1, 16);
						func_613(63, &Var0, "UW_DESCCT", "UW_TITLE", 15000, -1, -1082130432, "", func_316(), func_316());
					}
					Local_99.f_9 = NETWORK::_GET_POSIX_TIME();
					func_615(0);
					func_611(0);
					func_19(&uLocal_571, 0, 0);
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 1;
				}
				else
				{
					func_190();
					if (func_270("UW_ABTSC") || func_270("UW_ABTS"))
					{
						func_8();
					}
					if (func_608("UW_HELP1", func_610(), func_609(1)) || func_608("UW_HELP1C", func_610(), func_609(1)))
					{
						HUD::CLEAR_HELP(1);
					}
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					func_615(0);
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
					{
					}
					else if (!func_607())
					{
					}
				}
			}
			else if (Local_98.f_241 == 3)
			{
				func_615(0);
				if (func_608("UW_HELP1", func_610(), func_609(1)) || func_608("UW_HELP1C", func_610(), func_609(1)))
				{
					HUD::CLEAR_HELP(1);
				}
				if (!func_606())
				{
				}
				if (func_270("UW_ABTSC") || func_270("UW_ABTS"))
				{
					func_8();
				}
				func_190();
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_98.f_241 > 3)
			{
				if (func_270("UW_ABTSC") || func_270("UW_ABTS"))
				{
					func_8();
				}
				func_615(0);
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else
			{
				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					func_605();
					func_604();
					if (func_120())
					{
						func_639();
					}
				}
				if (func_719())
				{
					if (func_598(2, 0, 1, 0, 0))
					{
						if (func_270("UW_ABTSC") || func_270("UW_ABTS"))
						{
							func_8();
						}
						func_615(0);
						Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
				else if (Local_98.f_27 == joaat("valkyrie"))
				{
					if (func_598(2, 0, 1, 0, 0))
					{
						if (func_270("UW_ABTSC") || func_270("UW_ABTS"))
						{
							func_8();
						}
						func_615(0);
						Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
					}
				}
			}
			break;
		
		case 1:
			func_163(1);
			func_686();
			func_534();
			func_167();
			func_532();
			func_520();
			func_271(0);
			func_516();
			func_513();
			func_605();
			func_604();
			if (!MISC::IS_BIT_SET(iLocal_102, 26))
			{
				if (!func_512(55))
				{
					if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
						{
							if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
							{
								if (!func_719())
								{
									if (!func_270("UW_ATTK"))
									{
										func_264("UW_ATTK", 0);
									}
								}
								else if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
								{
									if (!func_270("UW_ATTK"))
									{
										func_264("UW_ATTK", 0);
									}
								}
								else if (!func_270("UW_ATTK"))
								{
									func_656(&iVar1, &uVar2);
									iVar1++;
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar1, 16);
									func_264("UW_ATTK", 0);
								}
							}
							else if (func_270("UW_ATTK"))
							{
								func_8();
							}
						}
					}
				}
			}
			func_511();
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
				{
					func_639();
				}
			}
			if (!func_820(PLAYER::PLAYER_ID(), 1, 1))
			{
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_8();
				MISC::SET_BIT(&iLocal_102, 21);
			}
			else if (func_180())
			{
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				func_8();
			}
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
			{
				if (!func_510())
				{
					MISC::SET_BIT(&iLocal_102, 23);
					func_8();
					if (iLocal_557 > -1)
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iLocal_557]))
						{
							func_24(&(Local_98.f_7[iLocal_557]));
						}
					}
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
				}
			}
			if (Local_98.f_241 == 3)
			{
				func_658(1);
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_98.f_241 > 3)
			{
				func_658(1);
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			else if (func_719())
			{
				if (func_598(2, 0, 1, 0, 0))
				{
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
				}
			}
			break;
		
		case 2:
			if (Local_98.f_241 == 3)
			{
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
			}
			else if (Local_98.f_241 > 3)
			{
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			func_447();
			if (func_606())
			{
				if (func_188(PLAYER::PLAYER_ID()) == 129)
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !HUD::IS_RADAR_HIDDEN())
					{
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
						if (MISC::IS_BIT_SET(iLocal_102, 22))
						{
							func_446();
							MISC::CLEAR_BIT(&iLocal_102, 22);
						}
						func_657();
						func_443();
						func_441(0);
						func_439(0);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
						PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
						func_659(0);
						func_658(1);
					}
					func_438();
				}
			}
			else if (!MISC::IS_BIT_SET(iLocal_103, 8))
			{
				MISC::SET_BIT(&iLocal_103, 8);
			}
			if (!func_198())
			{
				func_437();
				func_532();
				func_163(0);
				func_520();
				func_271(1);
				func_516();
				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
				}
			}
			else
			{
				func_436();
			}
			func_431();
			func_430();
			func_534();
			if (!MISC::IS_BIT_SET(iLocal_103, 7))
			{
				iVar3 = 0;
				while (iVar3 < 24)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar3]))
					{
						if (!func_31(Local_98.f_48[iVar3]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_98.f_48[iVar3]), PLAYER::PLAYER_ID(), 0);
						}
					}
					iVar3++;
				}
				iVar3 = 0;
				while (iVar3 < 4)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_80[iVar3]))
					{
						if (!func_31(Local_98.f_80[iVar3]))
						{
							PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(NETWORK::NET_TO_PED(Local_98.f_80[iVar3]), PLAYER::PLAYER_ID(), 0);
						}
					}
					iVar3++;
				}
				MISC::SET_BIT(&iLocal_103, 7);
			}
			else if (Local_98.f_247 != iLocal_555)
			{
				iLocal_555 = Local_98.f_247;
				MISC::CLEAR_BIT(&iLocal_103, 7);
			}
			if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
			}
			if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
			{
				MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
			}
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_111)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_113);
			}
			break;
		
		case 3:
			if (!MISC::IS_BIT_SET(iLocal_102, 31))
			{
				if (MISC::IS_BIT_SET(Local_98.f_3, 12))
				{
					func_190();
					MISC::SET_BIT(&iLocal_102, 31);
				}
			}
			func_511();
			func_425();
			if (!func_198())
			{
				if (!MISC::IS_BIT_SET(Local_98.f_3, 14) && !MISC::IS_BIT_SET(Local_98.f_3, 12))
				{
					func_271(1);
				}
				func_520();
				func_532();
				func_516();
				func_416();
			}
			func_447();
			func_430();
			func_534();
			if (Local_98.f_241 > 3)
			{
				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 4;
			}
			break;
		
		case 4:
			func_765();
			break;
	}
	func_415();
}

void func_415()
{
	int iVar0;
	
	if (iLocal_582 != Local_98.f_616)
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (MISC::IS_BIT_SET(Local_98.f_616, iVar0))
			{
				if (!MISC::IS_BIT_SET(iLocal_582, iVar0))
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_7[iVar0]))
						{
							VEHICLE::SET_VEHICLE_DOORS_LOCKED(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 2);
							func_24(&(Local_98.f_7[iVar0]));
							MISC::SET_BIT(&iLocal_582, iVar0);
						}
					}
					else
					{
						MISC::SET_BIT(&iLocal_582, iVar0);
					}
				}
			}
			iVar0++;
		}
	}
}

void func_416()
{
	if (MISC::IS_BIT_SET(Local_98.f_3, 14))
	{
		if (!MISC::IS_BIT_SET(iLocal_103, 5))
		{
			if (func_419(0, 1, 1, 1))
			{
				if (func_719())
				{
					func_418("UW_TFEWC", 30000);
				}
				else
				{
					func_418("UW_TFEW", 30000);
				}
				func_417(1);
				MISC::SET_BIT(&iLocal_103, 5);
			}
		}
	}
}

void func_417(int iParam0)
{
	HUD::_0xB9C362BABECDDC7A(3, 21, 200, 0, 0);
	if (iParam0 && !func_353())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);
	}
}

void func_418(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam1);
}

int func_419(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (iParam2 && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		return 0;
	}
	if (func_424())
	{
		return 0;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	if (func_402())
	{
		return 0;
	}
	if (func_249())
	{
		return 0;
	}
	if (bParam1)
	{
		if (func_251(PLAYER::PLAYER_ID(), 1))
		{
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_423(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (func_422())
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
	if (Global_1574122)
	{
		return 0;
	}
	if (func_421())
	{
		return 0;
	}
	if (func_420())
	{
		return 0;
	}
	if (func_180())
	{
		return 0;
	}
	if (Global_68215)
	{
		return 0;
	}
	if (Global_2521684)
	{
		return 0;
	}
	return 1;
}

bool func_420()
{
	return Global_2447174.f_579;
}

bool func_421()
{
	return Global_2447174.f_731;
}

bool func_422()
{
	return Global_2436181.f_2912.f_578;
}

int func_423(int iParam0)
{
	if (Global_2422736[iParam0 /*420*/].f_223 == 0)
	{
		return 0;
	}
	return 1;
}

int func_424()
{
	if (Global_15756 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_425()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (!func_270("UW_EXPL") && !func_270("UW_EXPLC"))
	{
		func_8();
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (!MISC::IS_BIT_SET(iLocal_102, (27 + iVar2)))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), 0))
				{
					MISC::SET_BIT(&iLocal_102, (27 + iVar2));
					iLocal_558[iVar2] = AUDIO::GET_SOUND_ID();
					AUDIO::PLAY_SOUND_FROM_ENTITY(iLocal_558[iVar2], "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), "GTAO_FM_Events_Soundset", 0, 0);
					AUDIO::SET_VARIABLE_ON_SOUND(iLocal_558[iVar2], "Time", 30f);
				}
			}
		}
		iVar2++;
	}
	if (!func_719())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[0]))
		{
			if (!MISC::IS_BIT_SET(Local_98.f_319, 0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_7[0]), 0))
				{
					if ((func_429() - func_124(&(Local_98.f_324), 0, 0)) >= 0)
					{
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_98.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_198())
								{
									func_428();
									func_169((func_429() - func_124(&(Local_98.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_98.f_3, 14))
						{
							if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[0]), 50f, 50f, 50f, 0, 1, 0))
							{
								if (!func_198())
								{
									func_428();
									func_169(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							func_658(1);
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_7[0]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_98.f_7[0]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_98.f_7[0]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[0]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_98.f_7[0]), 1, 0, -1);
								func_24(&(Local_98.f_7[0]));
							}
							else
							{
								NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_98.f_7[0]), 1, 0, 0);
								func_24(&(Local_98.f_7[0]));
							}
						}
					}
				}
			}
		}
		func_190();
		if (!func_198())
		{
			if (!MISC::IS_BIT_SET(iLocal_102, 12))
			{
				if (func_107(Local_98.f_7[0]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[0])))
						{
							if (!func_719())
							{
								if (!func_270("UW_EXPL"))
								{
									func_264("UW_EXPL", 0);
								}
							}
							else if (!func_270("UW_EXPLC"))
							{
								func_264("UW_EXPLC", 0);
							}
							MISC::SET_BIT(&iLocal_102, 12);
						}
					}
				}
			}
			else if (func_270("UW_EXPL") || func_270("UW_EXPLC"))
			{
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
					{
						func_8();
					}
				}
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iVar0]))
			{
				if (!MISC::IS_BIT_SET(Local_98.f_319, iVar0))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0))
					{
						if ((func_429() - func_124(&(Local_98.f_324), 0, 0)) >= 0)
						{
							if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_98.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_198())
									{
										if (!bVar1)
										{
											func_428();
											func_169((func_429() - func_124(&(Local_98.f_324), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
						}
						else
						{
							if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0 || MISC::IS_BIT_SET(Local_98.f_3, 14))
							{
								if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 50f, 50f, 50f, 0, 1, 0))
								{
									if (!func_198())
									{
										if (!bVar1)
										{
											func_428();
											func_169(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
											bVar1 = true;
										}
									}
								}
							}
							if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
							{
								func_658(1);
							}
							if (func_426(Local_98.f_7[iVar0]))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_7[iVar0]))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), false);
									VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), true);
									if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]))))
									{
										NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 1, 0, -1);
										func_24(&(Local_98.f_7[iVar0]));
									}
									else
									{
										NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 1, 0, 0);
										func_24(&(Local_98.f_7[iVar0]));
									}
								}
							}
						}
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_102, 12))
				{
					if (func_107(Local_98.f_7[iVar0]))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iVar0])))
							{
								if (!func_198())
								{
									if (!func_719())
									{
										if (!func_270("UW_EXPL"))
										{
											func_264("UW_EXPL", 0);
										}
									}
									else if (!func_270("UW_EXPLC"))
									{
										func_264("UW_EXPLC", 0);
									}
									MISC::SET_BIT(&iLocal_102, 12);
								}
							}
						}
					}
				}
				else if (func_270("UW_EXPL") || func_270("UW_EXPLC"))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
						{
							func_8();
						}
					}
				}
			}
			iVar0++;
		}
	}
}

int func_426(int iParam0)
{
	if (NETWORK::_0xA1607996431332DF(iParam0))
	{
		return 1;
	}
	if (func_427(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_427(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(iParam0))
	{
		return 0;
	}
	if (func_79(iParam0))
	{
		return 1;
	}
	return 0;
}

void func_428()
{
	Global_1359035.f_1089 = 1;
}

int func_429()
{
	if (func_719())
	{
		return Global_262145.f_10716;
	}
	return Global_262145.f_10436;
}

void func_430()
{
	if (!MISC::IS_BIT_SET(iLocal_103, 4))
	{
		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
				{
					func_658(1);
					MISC::SET_BIT(&iLocal_103, 4);
				}
			}
		}
	}
}

void func_431()
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iLocal_106);
	if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			if (iLocal_106 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (!MISC::IS_BIT_SET(iLocal_583, iLocal_106))
				{
					if (!func_198())
					{
						if (Local_101[iLocal_106 /*18*/].f_17 == 1)
						{
							MISC::SET_BIT(&iLocal_583, iLocal_106);
							func_432(iVar1, 55, 1);
						}
					}
				}
				else if (func_198())
				{
					func_432(iVar1, 55, 0);
					MISC::CLEAR_BIT(&iLocal_583, iLocal_106);
				}
				else if (Local_101[iLocal_106 /*18*/].f_17 > 1)
				{
					MISC::CLEAR_BIT(&iLocal_583, iLocal_106);
					func_432(iVar1, 55, 0);
				}
			}
		}
	}
	iLocal_106++;
	if (iLocal_106 >= NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		iLocal_106 = 0;
	}
}

void func_432(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (iParam0 == func_26())
	{
		return;
	}
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_434())
	{
		return;
	}
	iVar0 = iParam0;
	if (func_433(iParam0))
	{
		if (bParam2)
		{
			MISC::SET_BIT(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_2415606.f_446[iVar0] = iParam1;
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_2415606.f_386), iVar0);
			Global_2415606.f_611[iParam0] = -1;
		}
	}
}

int func_433(int iParam0)
{
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2415606.f_611[iParam0]) || Global_2415606.f_611[iParam0] == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		return 1;
	}
	return 0;
}

int func_434()
{
	switch (func_435())
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

int func_435()
{
	return Global_25233;
}

void func_436()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*8*/]))
		{
			HUD::REMOVE_BLIP(&(Local_110[iVar0 /*8*/]));
		}
		if (HUD::DOES_BLIP_EXIST(Local_110[iVar0 /*8*/].f_1))
		{
			HUD::REMOVE_BLIP(&(Local_110[iVar0 /*8*/].f_1));
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar0]))
		{
			if (!func_31(Local_98.f_48[iVar0]))
			{
				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_98.f_48[iVar0])))
				{
					func_90(&(Local_110[iVar0 /*8*/]));
				}
			}
		}
		iVar0++;
	}
}

void func_437()
{
	if (!MISC::IS_BIT_SET(iLocal_102, 11))
	{
		if (!MISC::IS_BIT_SET(Local_98.f_3, 6))
		{
			if (!MISC::IS_BIT_SET(iLocal_102, 13))
			{
				if (func_188(PLAYER::PLAYER_ID()) != 129)
				{
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						if (!func_512(65) && !func_512(66))
						{
							if (MISC::IS_BIT_SET(iLocal_103, 11))
							{
								if (!MISC::IS_BIT_SET(iLocal_103, 12))
								{
									if (func_419(0, 1, 1, 1))
									{
										if (func_719())
										{
											func_418("UW_HELIMC", -1);
										}
										else
										{
											func_418("UW_HELIM", -1);
										}
										func_417(1);
										MISC::SET_BIT(&iLocal_103, 12);
									}
								}
							}
							else if (!(Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra")))
							{
								if (func_419(0, 1, 1, 1))
								{
									if (!func_719())
									{
										func_418("UW_TAVAIL", 30000);
									}
									else
									{
										func_418("UW_TAVAILC", 30000);
									}
									func_417(1);
									MISC::SET_BIT(&iLocal_102, 11);
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_438()
{
	float fVar0;
	
	if (iLocal_580 != 0)
	{
		return;
	}
	if (func_21(&uLocal_571))
	{
		iLocal_580 = func_124(&uLocal_571, 0, 0);
	}
	fVar0 = SYSTEM::TO_FLOAT(iLocal_580);
	fVar0 = (fVar0 / 60000f);
	iLocal_580 = SYSTEM::FLOOR(fVar0);
	if (iLocal_580 >= 1)
	{
	}
	else
	{
		iLocal_580 = 1;
	}
	if (iLocal_580 > Global_262145.f_10776)
	{
		iLocal_580 = Global_262145.f_10776;
	}
}

void func_439(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		Global_92885.f_8 = 1;
	}
	else
	{
		Global_92885.f_8 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		func_440(iVar0);
		iVar0++;
	}
}

void func_440(int iParam0)
{
	Global_92885.f_166[iParam0] = 1;
	Global_92885.f_165 = 1;
}

void func_441(int iParam0)
{
	if (func_442() && iParam0)
	{
		return;
	}
	if (iParam0 == Global_2391045)
	{
		return;
	}
	Global_2391045 = iParam0;
	Global_2391047 = 0;
	Global_2391048 = 0;
}

int func_442()
{
	if ((((Global_979886 != -1 && Global_979886 != 33) && Global_979886 != 35) && Global_979886 != 37) && Global_979886 != 21)
	{
		return 1;
	}
	return 0;
}

void func_443()
{
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	func_445();
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	MISC::CLEAR_BIT(&(Global_1574409.f_1), 8);
	func_444();
}

void func_444()
{
	if (Global_1665283)
	{
		if (MISC::IS_BIT_SET(Global_1665284, 0))
		{
			MISC::CLEAR_BIT(&Global_2520777, 0);
		}
		if (MISC::IS_BIT_SET(Global_1665284, 1))
		{
			MISC::CLEAR_BIT(&Global_2520777, 1);
		}
		if (MISC::IS_BIT_SET(Global_1665284, 5))
		{
			MISC::CLEAR_BIT(&Global_2520777, 5);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-355737150))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-355737150, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-580979506))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-580979506, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1426452475))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1426452475, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(745417724))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(745417724, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1305304906))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1305304906, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-1543175077))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-1543175077, 1, 0, 0);
		}
		if (OBJECT::_DOES_DOOR_EXIST(-811770997))
		{
			OBJECT::_SET_DOOR_ACCELERATION_LIMIT(-811770997, 1, 0, 0);
		}
		Global_1665284 = 0;
	}
	Global_1665283 = 0;
}

void func_445()
{
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == SCRIPT::GET_ID_OF_THIS_THREAD() && Global_2512808.f_4851 < 1f)
		{
			return;
		}
	}
	Global_2512808.f_4852 = -1;
	Global_2512808.f_4851 = 1f;
}

void func_446()
{
	Global_2391049 = { 0f, 0f, 0f };
	Global_2391052 = 0;
}

void func_447()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	
	if (MISC::IS_BIT_SET(iLocal_102, 13))
	{
		return;
	}
	bVar0 = MISC::IS_BIT_SET(Local_98.f_3, 6);
	bVar1 = MISC::IS_BIT_SET(iLocal_102, 21);
	bVar2 = MISC::IS_BIT_SET(iLocal_102, 23);
	bVar3 = Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1;
	if (bVar3)
	{
		bVar1 = false;
		bVar2 = false;
	}
	if (func_606())
	{
		if (!MISC::IS_BIT_SET(iLocal_103, 17))
		{
			if (func_820(PLAYER::PLAYER_ID(), 1, 1))
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0) || bVar2)
				{
					if (!func_198())
					{
						if (!func_719())
						{
							if (bVar0)
							{
								func_614(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
							}
							else if (bVar1)
							{
								if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
								{
									func_614(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
								else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[0]) && func_107(Local_98.f_7[0]))
								{
									MISC::SET_BIT(&iLocal_103, 11);
									MISC::SET_BIT(&iLocal_103, 16);
									func_614(66, "UW_BIGE", "UW_LSELIM", 1, 15000, 2);
								}
								else
								{
									func_614(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (bVar2)
							{
								func_614(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
							}
							else if (bVar3 || MISC::IS_BIT_SET(Local_98.f_3, 16))
							{
								func_614(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
							}
						}
						else if (bVar0)
						{
							func_614(65, "UW_BIGF", "UW_FAILNX", 1, 15000, 2);
						}
						else if (bVar1)
						{
							if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
							{
								if (func_509())
								{
									MISC::SET_BIT(&iLocal_103, 11);
									MISC::SET_BIT(&iLocal_103, 16);
									func_614(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
								}
								else
								{
									func_614(65, "UW_BIGF", "UW_LSELIM", 1, 15000, 2);
								}
							}
							else if (func_509())
							{
								MISC::SET_BIT(&iLocal_103, 11);
								MISC::SET_BIT(&iLocal_103, 16);
								func_614(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_614(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar2)
						{
							if (func_509())
							{
								MISC::SET_BIT(&iLocal_103, 11);
								MISC::SET_BIT(&iLocal_103, 16);
								func_614(66, "UW_BIGE", "UW_LSELIMC", 1, 15000, 2);
							}
							else
							{
								func_614(65, "UW_BIGF", "UW_LSELIMC", 1, 15000, 2);
							}
						}
						else if (bVar3 || MISC::IS_BIT_SET(Local_98.f_3, 16))
						{
							func_614(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
						}
					}
					iVar4 = func_508(1);
					Local_99.f_6 = (Local_99.f_6 + iVar4);
					if (!Global_262145.f_10843)
					{
						if (Local_99.f_6 > 0)
						{
							func_507(19, Local_99.f_6);
						}
					}
					Global_2459022 = iVar4;
					if (iVar4 > 0)
					{
						if (func_506())
						{
							func_497(210955503, iVar4, &uVar5, 0, 1, 0);
						}
						else
						{
							NETCASH::NETWORK_EARN_FROM_AMBIENT_JOB(iVar4, "AM_KILL_LIST", &uVar6);
						}
					}
					iVar7 = func_496(1);
					Local_99.f_7 = (Local_99.f_7 + iVar7);
					func_495();
					func_448(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar7, 1, -1, 0, 0, 0);
					Local_99.f_5 = 2;
					PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
					if (!MISC::IS_BIT_SET(iLocal_103, 16))
					{
						MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					MISC::SET_BIT(&iLocal_103, 17);
					MISC::SET_BIT(&iLocal_103, 18);
				}
			}
		}
	}
}

int func_448(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	return func_449(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, sParam8, bParam9, iParam10);
}

int func_449(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_459(iParam0, sParam2, iParam3, iParam4, iParam5, iParam6, iParam7, bParam9);
	if (iParam4 == -592022605 || iParam4 == -1915191729)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam1))
			{
				iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
				func_455(PED::GET_PED_BONE_COORDS(iVar1, 31086, 0f, 0f, 0f), iVar0, 0, sParam8, iParam10);
			}
		}
	}
	else
	{
		func_450(iParam1, iVar0, sParam8, iParam10);
	}
	return iVar0;
}

void func_450(int iParam0, int iParam1, char* sParam2, int iParam3)
{
	vector3 vVar0;
	
	vVar0 = { func_453(iParam0, 1) };
	if (iParam0 == func_452(PLAYER::PLAYER_PED_ID()))
	{
		func_451(1);
	}
	func_455(vVar0, iParam1, 0, sParam2, iParam3);
}

void func_451(int iParam0)
{
	Global_2436181.f_1774 = iParam0;
}

int func_452(int iParam0)
{
	return iParam0;
}

Vector3 func_453(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		vVar1 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (iParam0 == func_454(PLAYER::PLAYER_PED_ID()) && CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 8f, -0.2f) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	fVar2 = 0f;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
		{
			fVar2 = vVar1.z;
		}
	}
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar4);
	if (bParam1)
	{
		fVar5 = (vVar4.z + 0.18f);
	}
	else
	{
		fVar5 = (vVar3.z + 0.18f);
	}
	vVar0 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar0, fVar2, 0f, 0f, fVar5) };
	return vVar0;
}

int func_454(int iParam0)
{
	return iParam0;
}

void func_455(vector3 vParam0, int iParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 != 0)
	{
		iVar1 = -1;
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Global_2436181.f_1173[iVar0 /*30*/].f_6 == 0 || Global_2436181.f_1173[iVar0 /*30*/].f_6 == 7)
			{
				iVar1 = iVar0;
				iVar0 = 20;
			}
			iVar0++;
		}
		if (iVar1 != -1)
		{
			Global_2436181.f_1173[iVar1 /*30*/] = { vParam0 };
			Global_2436181.f_1173[iVar1 /*30*/].f_6 = 1;
			Global_2436181.f_1173[iVar1 /*30*/].f_4 = func_458(Global_2436181.f_1173[iVar1 /*30*/], &Global_1312317, &Global_1312318);
			Global_2436181.f_1173[iVar1 /*30*/].f_7 = NETWORK::GET_NETWORK_TIME();
			Global_2436181.f_1173[iVar1 /*30*/].f_3 = iParam1;
			Global_2436181.f_1173[iVar1 /*30*/].f_8 = iParam2;
			Global_2436181.f_1173[iVar1 /*30*/].f_9 = func_457();
			Global_2436181.f_1173[iVar1 /*30*/].f_10 = func_456();
			StringCopy(&(Global_2436181.f_1173[iVar1 /*30*/].f_22), sParam3, 16);
			Global_2436181.f_1173[iVar1 /*30*/].f_26 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam4);
		}
	}
}

int func_456()
{
	if (Global_2436181.f_1774)
	{
		Global_2436181.f_1774 = 0;
		return 1;
	}
	Global_2436181.f_1774 = 0;
	return 0;
}

var func_457()
{
	var uVar0;
	
	uVar0 = Global_2436181.f_1776;
	Global_2436181.f_1776 = 1;
	return uVar0;
}

float func_458(vector3 vParam0, var uParam1, var uParam2)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam0, true);
	if (fVar0 < 5f)
	{
		*uParam1 = 0.402f;
		*uParam2 = 0.476f;
		return 0f;
	}
	if (fVar0 > 20f)
	{
		*uParam1 = 0.212f;
		*uParam2 = 0.286f;
		return 1f;
	}
	fVar1 = (1f - ((fVar0 - 5f) / (20f - 5f)));
	fVar2 = (fVar1 * (0.402f - 0.212f));
	fVar3 = (fVar1 * (0.476f - 0.286f));
	*uParam1 = (fVar2 + 0.212f);
	*uParam2 = (fVar3 + 0.286f);
	return fVar1;
}

var func_459(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_460(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_460(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	if (func_494(PLAYER::PLAYER_ID()) || func_493(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_8979 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_8979;
		}
	}
	else if (func_362() || func_491(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_22055 > 16000)
		{
			iVar2 = 16000;
		}
		else
		{
			iVar2 = Global_262145.f_22055;
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
	if (func_172(sParam2))
	{
	}
	if (func_490())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_488(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_487(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_485(0, &iVar1);
					break;
				
				case 3:
					func_485(1, &iVar1);
					break;
				
				case 1:
					func_482(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_1677772)
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
			func_480(1161, iVar1, -1);
			if (iParam1 == 0)
			{
				func_470((func_479(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_39.f_2 != -1)
				{
					func_480(1162, iVar1, -1);
				}
				if (iParam1 == 0)
				{
					func_465(iVar1);
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
				func_461((func_463(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_461((func_463(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
		if (bParam7)
		{
		}
	}
	return iVar1;
}

void func_461(int iParam0)
{
	if (func_490())
	{
		Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_211.f_5 = iParam0;
		func_462(joaat("mpply_globalxp"), iParam0);
	}
}

void func_462(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_463(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_820(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_464(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_5;
			}
		}
		else
		{
			return func_464(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_464(int iParam0)
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

void func_465(int iParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0 = { func_66(PLAYER::PLAYER_ID()) };
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar1 = func_468(func_469(&Var0));
			if (iVar1 == 0)
			{
				func_467(&Global_1368098, iParam0);
				func_466(joaat("mpply_crew_local_xp_0"), Global_1368098);
			}
			else if (iVar1 == 1)
			{
				func_467(&Global_1368099, iParam0);
				func_466(joaat("mpply_crew_local_xp_1"), Global_1368099);
			}
			else if (iVar1 == 2)
			{
				func_467(&Global_1368100, iParam0);
				func_466(joaat("mpply_crew_local_xp_2"), Global_1368100);
			}
			else if (iVar1 == 3)
			{
				func_467(&Global_1368101, iParam0);
				func_466(joaat("mpply_crew_local_xp_3"), Global_1368101);
			}
			else if (iVar1 == 4)
			{
				func_467(&Global_1368102, iParam0);
				func_466(joaat("mpply_crew_local_xp_4"), Global_1368102);
			}
		}
	}
}

void func_466(int iParam0, int iParam1)
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
			Global_1368093 = iParam1;
			break;
		
		case joaat("mpply_crew_1_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_2_id"):
			Global_1368095 = iParam1;
			break;
		
		case joaat("mpply_crew_3_id"):
			Global_1368096 = iParam1;
			break;
		
		case joaat("mpply_crew_4_id"):
			Global_1368097 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_0"):
			Global_1368098 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_1"):
			Global_1368099 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_2"):
			Global_1368100 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_3"):
			Global_1368101 = iParam1;
			break;
		
		case joaat("mpply_crew_local_xp_4"):
			Global_1368102 = iParam1;
			break;
		
		case joaat("mpply_became_cheater_num"):
			Global_1368103 = iParam1;
			break;
		
		case joaat("mpply_friendly"):
			Global_1368104 = iParam1;
			break;
		
		case joaat("mpply_offensive_language"):
			Global_1368105 = iParam1;
			break;
		
		case joaat("mpply_griefing"):
			Global_1368106 = iParam1;
			break;
		
		case joaat("mpply_helpful"):
			Global_1368107 = iParam1;
			break;
		
		case joaat("mpply_offensive_tagplate"):
			Global_1368108 = iParam1;
			break;
		
		case joaat("mpply_offensive_ugc"):
			Global_1368109 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_467(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 + iParam1);
}

int func_468(int iParam0)
{
	if (iParam0 == Global_1368093)
	{
		return 0;
	}
	else if (iParam0 == Global_1368094)
	{
		return 1;
	}
	else if (iParam0 == Global_1368095)
	{
		return 2;
	}
	else if (iParam0 == Global_1368096)
	{
		return 3;
	}
	else if (iParam0 == Global_1368097)
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_469(var uParam0)
{
	if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2456758;
		}
	}
	return Global_2456758;
}

void func_470(int iParam0, int iParam1, int iParam2)
{
	if (func_490())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_8947 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < Global_1368213[func_243(-1)])
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == Global_1368213[func_243(-1)])
				{
					return;
				}
			}
		}
		if (Global_262145.f_8946 == 0)
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
		if (Global_262145.f_8946 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_478(PLAYER::PLAYER_ID()))
		{
			Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_211.f_1 = iParam0;
			Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_211.f_6 = func_476(iParam0, 1);
		}
		func_475(636, iParam0, -1, 1);
		func_474(637, func_476(iParam0, 1), -1, 1, 0);
		Global_1368213[func_243(-1)] = iParam0;
		func_471(7, 0);
	}
}

void func_471(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_473(iParam0, iParam1))
	{
		iVar0 = func_472();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_472()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2456735[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_473(int iParam0, var uParam1)
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

void func_474(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_243(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_475(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_243(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_243(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_243(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_243(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_243(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_243(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_243(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_243(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_243(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_243(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_243(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_243(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_243(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_243(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_243(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_243(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_243(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_243(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_243(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_243(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_243(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_243(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_243(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_243(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_243(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_243(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_243(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_243(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_243(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_243(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_243(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_243(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_243(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

int func_476(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_477(iParam0, 0);
}

int func_477(int iParam0, int iParam1)
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
		if (Global_285062[iVar3] == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (Global_285062[iVar3] < iParam0)
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

int func_478(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else
	{
		return MISC::IS_BIT_SET(Global_2436181.f_1, iParam0);
	}
	return 1;
}

int func_479(int iParam0)
{
	if (Global_1312466.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return Global_1368213[func_243(-1)];
			}
			else if (func_478(iParam0))
			{
				return Global_1595693[iParam0 /*680*/].f_211.f_1;
			}
		}
	}
	else
	{
		return Global_1368213[func_243(-1)];
	}
	return 0;
}

void func_480(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_262(iParam0, func_243(iParam2), 0);
	iVar0 = (iVar0 + iParam1);
	if (!func_481(iParam0))
	{
		func_474(iParam0, iVar0, iParam2, 1, 0);
	}
	else
	{
		func_475(iParam0, iVar0, iParam2, 1);
	}
}

int func_481(int iParam0)
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case 784:
			case 785:
			case 786:
			case 787:
			case 774:
			case 775:
			case 776:
			case 777:
			case 764:
			case 765:
			case 766:
			case 767:
			case 754:
			case 755:
			case 756:
			case 757:
			case 1300:
			case 636:
			case 1275:
			case 761:
			case 762:
			case 763:
			case 1233:
			case 1873:
			case 2264:
			case 2918:
			case 3047:
			case 7052:
			case 3042:
			case 3043:
			case 3044:
			case 3045:
			case 3046:
			case 3221:
			case 3223:
			case 3625:
			case 3626:
			case 3627:
			case 3628:
			case 3629:
			case 3630:
			case 3631:
			case 3632:
			case 3633:
			case 3634:
			case 3216:
			case 3210:
			case 3652:
			case 3653:
			case 3654:
			case 3655:
			case 3656:
			case 3657:
			case 3678:
			case 3219:
			case 3218:
			case 4003:
			case 4002:
			case 4006:
			case 4005:
			case 4009:
			case 4008:
			case 4012:
			case 4011:
			case 6093:
			case 6092:
			case 6151:
			case 6150:
				return 1;
				break;
			}
	}
	return 0;
}

void func_482(int iParam0)
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
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_484(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_67(PLAYER::PLAYER_ID(), iVar5))
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
		iVar6 = SYSTEM::ROUND((func_483(*iParam0, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_483(*iParam0, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_483(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

int func_484(int iParam0, int iParam1, int iParam2)
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
					return MISC::IS_BIT_SET(Global_4456448.f_49, 0);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 1);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 2);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 4);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 5);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 6);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 8);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 9);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 10);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 12);
				
				case 1:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 13);
				
				case 2:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 14);
				
				case 3:
					return MISC::IS_BIT_SET(Global_4456448.f_49, 15);
				
				default:
			}
			break;
	}
	return 0;
}

void func_485(bool bParam0, int iParam1)
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
				if (func_820(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
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
			if (func_820(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_486(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_67(PLAYER::PLAYER_ID(), iVar4))
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
		iVar5 = SYSTEM::ROUND((func_483(*iParam1, 100) * (10f * Global_262145.f_4217)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_483(*iParam1, 100) * (20f * Global_262145.f_4210)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_486(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_59(iParam0), func_59(iParam1));
	return 0f;
}

int func_487(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_483(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_488(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_479(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_479(PLAYER::PLAYER_ID());
		}
	}
	if (func_489(8000, 0, 0) > 0)
	{
		if (func_489(8000, 0, 0) < (iParam0 + func_479(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_489(8000, 0, 0) - func_479(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_489(int iParam0, bool bParam1, int iParam2)
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
	return Global_285062[iParam0];
}

int func_490()
{
	return 1;
}

int func_491(int iParam0)
{
	return func_492(func_339(iParam0));
}

int func_492(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

bool func_493(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_494(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

void func_495()
{
	Global_2458364 = 1;
}

int func_496(bool bParam0)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iLocal_103, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_719())
		{
			return Global_262145.f_10657;
		}
		else
		{
			return Global_262145.f_10596;
		}
	}
	func_438();
	if (func_719())
	{
		iVar0 = (Global_262145.f_10657 * iLocal_580);
	}
	else
	{
		iVar0 = (Global_262145.f_10596 * iLocal_580);
	}
	return iVar0;
}

void func_497(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_506())
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
			if (iParam1 > 0)
			{
				func_498(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
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
			func_498(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_498(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_506())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_17()) || NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 5)
	{
		if (Global_4261865[iVar2 /*80*/].f_2 == 0)
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
	if ((bVar0 || iVar1) || NETSHOP::_NETWORK_SHOP_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOP::_NETWORK_SHOP_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_505(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4261865[*uParam0 /*80*/].f_69 = 1;
					Global_4261865[*uParam0 /*80*/].f_73 = 1;
				}
			}
			Global_4262402 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4262414 = 1;
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4262417 = iParam4;
			Global_4262419 = iParam3;
			Global_4262420 = 1;
			Global_4262418 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_504(1, iParam4);
			Global_4262414 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_499(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_499(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 1704445500:
			MISC::SET_BIT(&(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_137.f_71), 0);
			break;
	}
	if (iParam0 != -1)
	{
		func_500(iParam0);
	}
}

void func_500(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_506())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_503(iParam0))
		{
			if (!bVar0)
			{
				NETSHOP::_NETWORK_SHOP_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOP::_NETWORK_SHOP_END_SERVICE(Global_4261865[iParam0 /*80*/]);
		}
		func_501(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_501(var uParam0)
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
	func_502(&(uParam0->f_8.f_3));
	func_502(&(uParam0->f_8.f_16));
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

void func_502(var uParam0)
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

int func_503(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_504(int iParam0, int iParam1)
{
	Global_2459156 = iParam1;
	Global_2459155 = iParam0;
}

int func_505(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_506())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = iParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = iParam0;
			Global_4261865[iVar0 /*80*/].f_6 = iParam4;
			Global_4261865[iVar0 /*80*/].f_72 = uParam8;
			Global_4261865[iVar0 /*80*/].f_71 = iParam7;
			Global_4261865[iVar0 /*80*/].f_74 = iParam9;
			Global_4261865[iVar0 /*80*/].f_73 = 0;
			Global_4261865[iVar0 /*80*/].f_75 = MISC::GET_FRAME_COUNT();
			Global_4261865[iVar0 /*80*/].f_79 = 0;
			Global_4262402 = 0;
			if (bParam6)
			{
				Global_4261865[iVar0 /*80*/].f_5 = 1;
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_506()
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

void func_507(int iParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		if (Global_262145.f_22761 == 0 || Global_262145.f_22761 == 1)
		{
			if (!MISC::IS_PC_VERSION() || Global_262145.f_22761 == 1)
			{
				Global_2512808.f_272 = iParam0;
				if (iParam1 > Global_262145.f_5975)
				{
					iParam1 = Global_262145.f_5975;
				}
				Global_2512808.f_273 = iParam1;
				Global_2512808.f_274 = 0;
			}
		}
	}
}

int func_508(bool bParam0)
{
	int iVar0;
	
	if (MISC::IS_BIT_SET(iLocal_103, 18))
	{
		return 0;
	}
	if (!bParam0)
	{
		if (func_719())
		{
			return Global_262145.f_10656;
		}
		else
		{
			return Global_262145.f_10595;
		}
	}
	func_438();
	if (func_719())
	{
		iVar0 = (Global_262145.f_10656 * iLocal_580);
	}
	else
	{
		iVar0 = (Global_262145.f_10595 * iLocal_580);
	}
	return iVar0;
}

int func_509()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iLocal_557]))
	{
		if (func_107(Local_98.f_7[iLocal_557]))
		{
			bVar0 = true;
		}
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (Local_98.f_256[iVar1] > 0)
		{
			iVar2++;
		}
		iVar1++;
	}
	iVar3 = Local_98.f_256[iLocal_557];
	if (!bVar0)
	{
		if (Local_98.f_594[0 /*4*/] != iLocal_557)
		{
			return 0;
		}
		else if (iVar3 > 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (Local_98.f_594[0 /*4*/] == iLocal_557)
	{
		return 1;
	}
	else
	{
		iVar4 = Local_98.f_256[Local_98.f_594[0 /*4*/]];
		iVar5 = (iVar4 - iVar3);
		iVar6 = (Local_98.f_255 - iVar2);
		if (iVar5 > iVar6)
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

int func_510()
{
	int iVar0;
	var uVar1;
	
	func_656(&iVar0, &uVar1);
	if (iLocal_557 > -1)
	{
		if (func_107(Local_98.f_7[iLocal_557]))
		{
			return 1;
		}
	}
	return 0;
}

void func_511()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (Local_98.f_241 == 1)
	{
		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
		{
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
			{
				if (!func_21(&uLocal_569) || (func_21(&uLocal_569) && func_18(&uLocal_569, 5000, 0)))
				{
					if (Local_98.f_27 == joaat("savage") || Local_98.f_27 == joaat("buzzard"))
					{
						iVar1 = iLocal_557;
						if (iVar1 > -1)
						{
							if (func_107(Local_98.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
							}
						}
					}
					else if (Local_98.f_27 == joaat("valkyrie"))
					{
						iVar1 = iLocal_557;
						if (iVar1 > -1)
						{
							if (func_107(Local_98.f_7[iVar1]))
							{
								iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), -1, 0);
								if (iVar0 == 0)
								{
									Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (PED::IS_PED_INJURED(iVar0))
								{
									Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								else if (!PED::IS_PED_A_PLAYER(iVar0))
								{
									Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
								}
								if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == -1)
								{
									iVar4 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
									iVar2 = 0;
									while (iVar2 < iVar4)
									{
										iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), iVar2, 0);
										if (iVar0 != 0)
										{
											if (!PED::IS_PED_INJURED(iVar0))
											{
												if (PED::IS_PED_A_PLAYER(iVar0))
												{
													iVar3++;
												}
											}
										}
										iVar2++;
									}
									if (iVar3 == 0)
									{
										Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 = iVar1;
									}
								}
							}
						}
					}
					func_104(&uLocal_569);
					func_19(&uLocal_569, 0, 0);
				}
			}
		}
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (MISC::IS_BIT_SET(Local_98.f_319, iVar2))
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iVar2]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), 0))
				{
					if ((func_429() - func_124(&(Local_98.f_349[iVar2 /*2*/]), 0, 0)) >= 0)
					{
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), 0))
							{
								if (!func_198())
								{
									func_428();
									func_169((func_429() - func_124(&(Local_98.f_349[iVar2 /*2*/]), 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
					}
					else
					{
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), 0))
							{
								if (!func_198())
								{
									func_428();
									func_169(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
								}
							}
						}
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_7[iVar2]))
						{
							ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), false);
							VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), true);
							if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]))))
							{
								NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), 1, 0, -1);
								func_24(&(Local_98.f_7[iVar2]));
							}
							else
							{
								NETWORK::_0x2A5E0621DD815A9A(NETWORK::NET_TO_VEH(Local_98.f_7[iVar2]), 1, 0, 0);
								func_24(&(Local_98.f_7[iVar2]));
							}
						}
					}
				}
			}
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 == iVar2)
			{
				if (!MISC::IS_BIT_SET(iLocal_103, 6))
				{
					if (func_419(0, 1, 1, 1))
					{
						if (func_719())
						{
							if (!MISC::IS_BIT_SET(iLocal_103, 19))
							{
								func_418("UW_NOPILC", 30000);
							}
							else
							{
								func_418("UW_NOGUN", 30000);
							}
						}
						else
						{
							func_418("UW_NOPIL", 30000);
						}
						func_417(1);
						MISC::SET_BIT(&iLocal_103, 6);
					}
					else if (MISC::IS_BIT_SET(iLocal_103, 19))
					{
						if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
						{
							HUD::CLEAR_HELP(1);
						}
					}
				}
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					iVar5 = Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10;
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar5]))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iVar5])))
						{
							if (!func_719())
							{
								if (!func_270("UW_EXPL"))
								{
									func_264("UW_EXPL", 0);
								}
							}
							else if (!func_270("UW_EXPLC"))
							{
								func_264("UW_EXPLC", 0);
							}
						}
						else if (func_270("UW_EXPL") || func_270("UW_EXPLC"))
						{
							func_8();
						}
					}
					else if (func_270("UW_EXPL") || func_270("UW_EXPLC"))
					{
						func_8();
					}
				}
			}
		}
		iVar2++;
	}
}

bool func_512(int iParam0)
{
	return Global_2436181.f_2592[0 /*79*/].f_1 == iParam0;
}

void func_513()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (Local_98.f_27 == joaat("rhino"))
		{
			if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
			{
				if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 10))
				{
					if (!func_21(&uLocal_565) || (func_21(&uLocal_565) && func_18(&uLocal_565, 5000, 0)))
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (func_69(vLocal_581, 0f, 0f, 0f, 0))
							{
								vLocal_581 = { Local_98.f_30[0 /*3*/] };
							}
							fVar0 = func_515(PLAYER::PLAYER_PED_ID(), vLocal_581, 1);
							if (fVar0 > 750f)
							{
								MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							}
						}
						func_104(&uLocal_565);
						func_19(&uLocal_565, 0, 0);
					}
				}
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!func_270("UW_OOB"))
					{
						func_264("UW_OOB", 0);
					}
					if (!func_21(&uLocal_567))
					{
						iVar2 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar2, "Explosion_Countdown", NETWORK::NET_TO_VEH(Local_98.f_7[func_514()]), "GTAO_FM_Events_Soundset", 0, 0);
						AUDIO::SET_VARIABLE_ON_SOUND(iVar2, "Time", 30f);
						func_19(&uLocal_567, 0, 0);
					}
					if (func_21(&uLocal_567))
					{
						if ((func_429() - func_124(&uLocal_567, 0, 0)) >= 0)
						{
							func_428();
							func_169((func_429() - func_124(&uLocal_567, 0, 0)), "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
						}
						else
						{
							func_428();
							func_169(0, "UW_DEST", 0, 1, -1, 0, 2, 0, 6, 0, 0, 0, 6, 0, 0, 0, 0);
							func_8();
							MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 11);
						}
					}
					if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
					{
						fVar0 = func_515(PLAYER::PLAYER_PED_ID(), Local_98.f_30[0 /*3*/], 1);
						if (fVar0 < 750f)
						{
							MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 10);
							func_104(&uLocal_567);
							AUDIO::STOP_SOUND(iVar2);
						}
					}
				}
			}
		}
	}
	if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
	{
		func_658(1);
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar1 = func_514();
			if (iVar1 > -1)
			{
				if (func_107(Local_98.f_7[iVar1]))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_7[iVar1]))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), false);
						VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), true);
						NETWORK::NETWORK_EXPLODE_VEHICLE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar1]), 1, 0, -1);
						func_24(&(Local_98.f_7[iVar1]));
					}
				}
			}
		}
	}
}

int func_514()
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar1]))
			{
				if (func_107(Local_98.f_7[iVar1]))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iVar1])))
						{
							iVar0 = iVar1;
						}
					}
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_515(int iParam0, vector3 vParam1, bool bParam2)
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 1) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

void func_516()
{
	var uVar0;
	int iVar1;
	
	iVar1 = -1;
	if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_102, 24))
	{
		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 1)
		{
			func_656(&iVar1, &uVar0);
			if (func_519(iVar1))
			{
				if (iVar1 > -1)
				{
					if (Local_98.f_22[iVar1] != func_26())
					{
						fLocal_108 = NETWORK::NETWORK_GET_TALKER_PROXIMITY();
						NETWORK::NETWORK_SET_TALKER_PROXIMITY(-1f);
						func_518(1, iVar1);
						MISC::SET_BIT(&iLocal_102, 24);
						func_517(1);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&iLocal_102, 24);
				MISC::SET_BIT(&iLocal_102, 25);
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_102, 25))
	{
		if (MISC::IS_BIT_SET(iLocal_102, 24))
		{
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_108);
				func_656(&iVar1, &uVar0);
				if (iVar1 > -1)
				{
					func_518(0, iVar1);
					MISC::SET_BIT(&iLocal_102, 25);
					func_517(0);
				}
			}
		}
	}
}

void func_517(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 4);
	}
}

void func_518(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_820(iVar1, 0, 1) && iVar1 != PLAYER::PLAYER_ID())
			{
				if (MISC::IS_BIT_SET(Local_101[iVar0 /*18*/].f_1, iParam1) || !bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 1);
				}
				else if (bParam0)
				{
					NETWORK::NETWORK_OVERRIDE_CHAT_RESTRICTIONS(iVar1, 0);
				}
			}
		}
		iVar0++;
	}
}

bool func_519(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (!bVar0)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
			{
				if (iVar1 != NETWORK::PARTICIPANT_ID_TO_INT())
				{
					if (MISC::IS_BIT_SET(Local_101[iVar1 /*18*/].f_1, iParam0))
					{
						bVar0 = true;
					}
				}
			}
		}
		iVar1++;
	}
	return bVar0;
}

void func_520()
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iLocal_102, 15))
	{
		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
		{
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
			{
				if (Local_98.f_22[0] != func_26())
				{
					if (func_419(0, 0, 1, 1))
					{
						if (!func_719())
						{
							if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
							{
								if (!func_719())
								{
									func_531("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_98.f_22[0]), 1, 30000);
								}
								else
								{
									func_531("UW_START1PC", PLAYER::GET_PLAYER_NAME(Local_98.f_22[0]), 1, 30000);
								}
								func_417(1);
							}
							else if (MISC::IS_BIT_SET(Local_98.f_15, 0))
							{
								if (!MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 14))
								{
									if (!func_719())
									{
										func_418("UW_STARTM", 30000);
									}
									else
									{
										func_418("UW_STARTMC", 30000);
									}
									func_417(1);
								}
							}
							else
							{
								func_531("UW_START1P", PLAYER::GET_PLAYER_NAME(Local_98.f_22[0]), 1, 30000);
								func_417(1);
							}
						}
						else if (!MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 14))
						{
							if (!func_719())
							{
								func_418("UW_STARTM", 30000);
							}
							else
							{
								func_418("UW_STARTMC", 30000);
							}
							func_417(1);
						}
						MISC::SET_BIT(&iLocal_102, 15);
					}
				}
			}
		}
	}
	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 2)
	{
		if (Local_98.f_241 == 1)
		{
			if (Local_98.f_27 != joaat("hydra") && Local_98.f_27 != joaat("rhino"))
			{
				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (iLocal_557 >= 0)
					{
						if (!MISC::IS_BIT_SET(iLocal_103, 10))
						{
							if (!MISC::IS_BIT_SET(iLocal_103, 9))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iLocal_557]))
								{
									if (func_107(Local_98.f_7[iLocal_557]))
									{
										MISC::SET_BIT(&iLocal_103, 9);
									}
								}
							}
							else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iLocal_557]))
							{
								if (!func_107(Local_98.f_7[iLocal_557]))
								{
									func_530("UW_TEAMV", 1);
									MISC::SET_BIT(&iLocal_103, 10);
								}
							}
						}
					}
				}
			}
		}
	}
	iVar1 = 0;
	if (!func_719())
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!MISC::IS_BIT_SET(Local_98.f_3, 6))
			{
				if (!MISC::IS_BIT_SET(iLocal_102, (16 + iVar1)))
				{
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 >= 2)
					{
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 == 0)
						{
							if ((MISC::IS_BIT_SET(Local_98.f_3, 0) && MISC::IS_BIT_SET(Local_98.f_3, 1)) && MISC::IS_BIT_SET(Local_98.f_3, 2))
							{
								if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[0]))
								{
									if (func_107(Local_98.f_7[0]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[0]), -1, 0) != 0)
										{
											iVar0 = func_529(iVar1, 0);
											if (iVar0 != func_26())
											{
												func_521("UW_COMP", iVar0, 1, 0, 0, 0, 1, 1, 0);
											}
											MISC::SET_BIT(&iLocal_102, (16 + iVar1));
										}
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
	}
}

int func_521(char* sParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<16> Var1;
	int iVar2;
	int iVar3;
	
	iVar0 = -1;
	if (NETWORK::_NETWORK_IS_PLAYER_EQUAL_TO_INDEX(PLAYER::PLAYER_ID(), iParam1) || iParam4)
	{
		if (!bParam3)
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_527(&Var1));
		if (!bParam5)
		{
			iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		}
		else
		{
			Global_2492157 = { func_66(iParam1) };
			if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2492087, 35, &Global_2492157))
			{
				iVar2 = 0;
				if (MISC::ARE_STRINGS_EQUAL(&(Global_2492087.f_22), "Leader") && Global_2492087.f_30 == 0)
				{
					iVar2 = 1;
				}
				if (Global_2492087.f_21 > 0)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				if (bParam7)
				{
					if (bParam8)
					{
						Var1 = { func_526(&Var1) };
					}
					iVar0 = HUD::_DRAW_NOTIFICATION_CLAN_INVITE(iVar3, NETWORK::_0x7543BB439F63792B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar2, 0, Global_2492087, &Var1, Global_1314011, Global_1314012, Global_1314013);
				}
				else
				{
					iVar0 = HUD::_DRAW_NOTIFICATION_APARTMENT_INVITE(iVar3, NETWORK::_0x7543BB439F63792B(&Global_2492087, 35), &(Global_2492087.f_17), Global_2492087.f_30, iVar2, 0, Global_2492087, Global_1314011, Global_1314012, Global_1314013);
				}
			}
			else
			{
				iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
			}
		}
		func_522(14, sParam0, 1, &Var1, 0, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_522(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_525() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_15(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_523(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1664509.f_5[iVar0 /*53*/] = iParam0;
		Global_1664509.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1664509.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1664509.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1664509.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1664509.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1664509.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1664509.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_523(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1664509 - 1))
	{
		if (iParam0 > Global_1664509.f_5[iVar0 /*53*/].f_1)
		{
			func_524(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1664509++;
	if (Global_1664509 > 5)
	{
		Global_1664509 = 5;
		return Global_1664509;
	}
	return (Global_1664509 - 1);
}

void func_524(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1664509.f_5[iVar0 /*53*/] = { Global_1664509.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_525()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_526(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_527(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_528(&cVar0);
}

var func_528(char[4] cParam0)
{
	return cParam0;
}

int func_529(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_26();
	iVar2 = (iParam0 - 1);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iParam1]))
	{
		if (func_107(Local_98.f_7[iParam1]))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[iParam1]), iVar2, 0);
			if (iVar1 != 0)
			{
				if (PED::IS_PED_A_PLAYER(iVar1))
				{
					iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
				}
			}
		}
	}
	return iVar0;
}

int func_530(char* sParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	HUD::_SET_NOTIFICATION_TEXT_ENTRY(sParam0);
	iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
	func_522(0, sParam0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_531(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	if (!iParam2 == 0)
	{
		HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam2);
	}
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

void func_532()
{
	if (!MISC::IS_BIT_SET(iLocal_102, 9))
	{
		if (Local_98.f_241 == 1)
		{
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_START_MUSIC"))
				{
					MISC::SET_BIT(&iLocal_102, 9);
				}
			}
		}
	}
	if (!MISC::IS_BIT_SET(iLocal_102, 10))
	{
		if (MISC::IS_BIT_SET(iLocal_102, 9))
		{
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 > 1)
			{
				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
				{
					if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (AUDIO::TRIGGER_MUSIC_EVENT("MP_MC_FAIL"))
						{
							MISC::SET_BIT(&iLocal_102, 10);
						}
					}
					else if (AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC"))
					{
						MISC::SET_BIT(&iLocal_102, 10);
						func_533();
					}
				}
			}
		}
	}
}

void func_533()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_4693, 1))
	{
		MISC::CLEAR_BIT(&(Global_2512808.f_4693), 1);
	}
	if (Global_2512808.f_4693 > 0)
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_KILL");
		AUDIO::TRIGGER_MUSIC_EVENT("FM_COUNTDOWN_30S_FIRA");
		AUDIO::STOP_AUDIO_SCENE("GTAO_FM_Events_30_Sec_Countdown_Scene");
		AUDIO::SET_USER_RADIO_CONTROL_ENABLED(1);
		Global_2512808.f_4693 = 0;
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
		AUDIO::SET_AUDIO_FLAG("AllowScoreAndRadio", 0);
		if (!MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "am_pi_menu"))
		{
			if (Global_2512808.f_4703 > -1)
			{
				AUDIO::RELEASE_SOUND_ID(Global_2512808.f_4703);
				Global_2512808.f_4703 = -1;
			}
		}
	}
}

void func_534()
{
	struct<2> Var0;
	struct<2> Var1;
	int iVar2;
	int iVar3[2];
	int iVar4;
	int iVar5;
	int iVar6[4];
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	var uVar23;
	var uVar24;
	bool bVar25;
	int iVar26;
	char* sVar27;
	var uVar28;
	var uVar29;
	var uVar30;
	var uVar31;
	var uVar32;
	
	iVar8 = 1;
	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
	{
		if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
		{
			if (!MISC::IS_BIT_SET(iLocal_102, 26))
			{
				if ((((MISC::IS_BIT_SET(Local_98.f_3, 0) && MISC::IS_BIT_SET(Local_98.f_3, 1)) && MISC::IS_BIT_SET(Local_98.f_3, 2)) || (func_719() && MISC::IS_BIT_SET(Local_98.f_3, 6))) || (func_719() && MISC::IS_BIT_SET(Local_98.f_3, 15)))
				{
					if (!func_21(&uLocal_576))
					{
						func_19(&uLocal_576, 0, 0);
					}
					if (func_18(&uLocal_576, 1000, 0))
					{
						if (func_270("UW_ATTK"))
						{
							func_8();
						}
						func_597();
						if (func_596())
						{
							iVar13 = func_508(1);
							if (iVar13 > 0)
							{
								Local_99.f_6 = (Local_99.f_6 + iVar13);
								if ((!Global_262145.f_10843 && !MISC::IS_BIT_SET(Local_98.f_3, 8)) || (!Global_262145.f_10844 && MISC::IS_BIT_SET(Local_98.f_3, 8)))
								{
									if (Local_99.f_6 > 0)
									{
										func_507(19, Local_99.f_6);
									}
								}
								Global_2459022 = iVar13;
								if (func_506())
								{
									func_497(210955503, iVar13, &uVar15, 0, 1, 0);
								}
								else
								{
									NETCASH::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar16);
								}
							}
							iVar11 = func_496(1);
							func_495();
							Local_99.f_7 = (Local_99.f_7 + iVar11);
							func_448(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_99.f_5 = 2;
							func_614(65, "UW_BIGF", "UW_DRAWZ", 1, 15000, 2);
						}
						else if (!func_719())
						{
							iVar13 = func_609(0);
							func_583(&iVar13, 1);
							iVar13 = (iVar13 + func_508(1));
							if (iVar13 > 0)
							{
								Local_99.f_6 = (Local_99.f_6 + iVar13);
								if (!Global_262145.f_10843)
								{
									if (Local_99.f_6 > 0)
									{
										func_507(19, Local_99.f_6);
									}
								}
								Global_2459022 = iVar13;
								if (func_506())
								{
									func_497(210955503, iVar13, &uVar17, 0, 1, 0);
								}
								else
								{
									NETCASH::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar18);
								}
							}
							iVar11 = func_496(1);
							iVar11 = (iVar11 + func_582());
							Local_99.f_7 = (Local_99.f_7 + iVar11);
							func_495();
							func_448(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
							Local_99.f_5 = 1;
							func_613(64, "", "UW_BIG_BMEXP", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
						}
						else if (func_581())
						{
							if (!func_580(1))
							{
								if (!func_270("UW_EXPL") && !func_270("UW_EXPLC"))
								{
									func_8();
								}
								iVar13 = func_609(0);
								func_583(&iVar13, 1);
								iVar13 = (iVar13 + func_508(1));
								Local_99.f_6 = (Local_99.f_6 + iVar13);
								if (!Global_262145.f_10844)
								{
									if (Local_99.f_6 > 0)
									{
										func_507(19, Local_99.f_6);
									}
								}
								Global_2459022 = iVar13;
								if (iVar13 > 0)
								{
									if (func_506())
									{
										func_497(210955503, iVar13, &uVar19, 0, 1, 0);
									}
									else
									{
										NETCASH::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar20);
									}
								}
								if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
								{
									func_613(64, "", "UW_WON1P", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								else
								{
									func_613(64, "", "UW_WON", "UW_BIGM", 15000, -1, -1082130432, 0, 1, 2);
								}
								Local_99.f_5 = 1;
								iVar11 = func_582();
								iVar11 = (iVar11 + func_496(1));
								Local_99.f_7 = (Local_99.f_7 + iVar11);
								func_495();
								func_448(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
							else
							{
								iVar13 = func_508(1);
								iVar11 = func_496(1);
								iVar8 = 0;
								iVar10 = 0;
								while (iVar10 <= 3)
								{
									if (Local_98.f_465[iVar10 /*4*/].f_1 == Local_98.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										iVar6[iVar10] = -1;
										if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
										{
											if (Local_98.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (Local_98.f_465[iVar10 /*4*/].f_2 != PLAYER::PLAYER_ID())
												{
													if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_98.f_465[iVar10 /*4*/].f_2)))
													{
														iVar3[iVar4] = PLAYER::INT_TO_PLAYERINDEX(Local_98.f_465[iVar10 /*4*/].f_2);
														iVar4++;
													}
												}
											}
										}
										else if (iLocal_557 > -1)
										{
											if (iLocal_557 != Local_98.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_98.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
								{
									if (iVar8 > 2)
									{
										bVar9 = true;
									}
									else if (iVar3[0] == func_26())
									{
										bVar9 = true;
									}
									else
									{
										func_579(68, "UW_DRAWP", PLAYER::GET_PLAYER_NAME(iVar3[0]), 1, 15000, "UW_BIGO", 2);
									}
								}
								else if (iVar8 > 2)
								{
									bVar9 = true;
								}
								else if (iVar6[0] == -1)
								{
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									func_613(68, &Var0, "UW_DRAWP", "UW_BIGO", 15000, -1, -1082130432, 0, 1, 2);
								}
								if (bVar9)
								{
									if (!func_719())
									{
										func_614(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
									}
									else
									{
										func_614(68, "UW_BIGO", "UW_DRAWC", 1, 15000, 2);
									}
								}
								iVar14 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_609(0)) / SYSTEM::TO_FLOAT(iVar8)));
								iVar12 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_582()) / SYSTEM::TO_FLOAT(iVar8)));
								func_583(&iVar14, 1);
								iVar13 = (iVar13 + iVar14);
								iVar11 = (iVar11 + iVar12);
								Local_99.f_6 = (Local_99.f_6 + iVar13);
								if (!Global_262145.f_10844)
								{
									if (Local_99.f_6 > 0)
									{
										func_507(19, Local_99.f_6);
									}
								}
								Global_2459022 = iVar13;
								if (iVar13 > 0)
								{
									if (func_506())
									{
										func_497(210955503, iVar13, &uVar21, 0, 1, 0);
									}
									else
									{
										NETCASH::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar22);
									}
								}
								Local_99.f_7 = (Local_99.f_7 + iVar11);
								func_495();
								func_448(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							}
						}
						else
						{
							func_577(1);
							iVar13 = func_508(1);
							iVar11 = func_496(1);
							Local_99.f_6 = (Local_99.f_6 + iVar13);
							if (!Global_262145.f_10844)
							{
								if (Local_99.f_6 > 0)
								{
									func_507(19, Local_99.f_6);
								}
							}
							Global_2459022 = iVar13;
							if (iVar13 > 0)
							{
								if (func_506())
								{
									func_497(210955503, iVar13, &uVar23, 0, 1, 0);
								}
								else
								{
									NETCASH::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar24);
								}
							}
							Local_99.f_7 = (Local_99.f_7 + iVar11);
							func_495();
							func_448(0, PLAYER::PLAYER_PED_ID(), "", -875716015, 459130717, iVar11, 1, -1, 0, 0, 0);
							if (!func_580(0))
							{
								iVar5 = Local_98.f_465[0 /*4*/];
								if (!func_270("UW_EXPL") && !func_270("UW_EXPLC"))
								{
									func_8();
								}
								if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
								{
									iVar2 = PLAYER::INT_TO_PLAYERINDEX(Local_98.f_465[0 /*4*/].f_2);
									if (func_311(iVar2, 1))
									{
										iVar26 = func_315(iVar2);
										if (iVar26 > -1)
										{
											uVar28 = func_313(iVar26);
											sVar27 = func_571(iVar2);
											bVar25 = true;
										}
									}
									if (iVar2 != func_26())
									{
										if (!bVar25)
										{
											if (!func_719())
											{
												func_579(65, "UW_FWONP", PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF", 2);
											}
											else
											{
												func_579(65, "UW_FWONPC", PLAYER::GET_PLAYER_NAME(iVar2), 6, 15000, "UW_BIGF", 2);
											}
										}
										else if (!func_719())
										{
											func_569(66, "PEN_OVR", "UW_FWONG", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
										else
										{
											func_569(66, "PEN_OVR", "UW_FWONGC", sVar27, uVar28, 0, -1, -1, -1, 2, -1);
										}
									}
								}
								else
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar5 + 1, 16);
									if (!func_719())
									{
										func_613(65, &Var0, "UW_FWONT", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
									else
									{
										func_613(65, &Var0, "UW_FWONTC", "UW_BIGF", 15000, -1, -1082130432, "", 6, 2);
									}
								}
							}
							else
							{
								if (!func_270("UW_EXPL") && !func_270("UW_EXPLC"))
								{
									func_8();
								}
								iVar10 = 1;
								while (iVar10 <= 3)
								{
									if (Local_98.f_465[iVar10 /*4*/].f_1 == Local_98.f_465[0 /*4*/].f_1)
									{
										iVar8++;
										if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
										{
											if (Local_98.f_465[iVar10 /*4*/].f_2 > -1)
											{
												if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(Local_98.f_465[iVar10 /*4*/].f_2)))
												{
													iVar3[iVar4] = PLAYER::INT_TO_PLAYERINDEX(Local_98.f_465[iVar10 /*4*/].f_2);
													iVar4++;
												}
											}
										}
										else if (iLocal_557 > -1)
										{
											if (iLocal_557 != Local_98.f_465[iVar10 /*4*/])
											{
												iVar6[iVar7] = Local_98.f_465[iVar10 /*4*/];
												iVar7++;
											}
										}
									}
									iVar10++;
								}
								if (Local_98.f_27 == joaat("hydra") || Local_98.f_27 == joaat("rhino"))
								{
									if (iVar8 == 2)
									{
										if (iVar3[0] != func_26() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[0]))
										{
											if (iVar3[1] != func_26() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3[1]))
											{
												func_539(68, func_26(), func_26(), -1, "UW_DRAW2P", "UW_BIGF", func_316(), 15000, func_316(), PLAYER::GET_PLAYER_NAME(iVar3[0]), PLAYER::GET_PLAYER_NAME(iVar3[1]), 0);
											}
											else
											{
												bVar9 = true;
											}
										}
										else
										{
											bVar9 = true;
										}
									}
									else
									{
										bVar9 = true;
									}
								}
								else if (iVar8 == 2)
								{
									StringCopy(&Var0, "UW_TM", 16);
									StringIntConCat(&Var0, iVar6[0] + 1, 16);
									StringCopy(&Var1, "UW_TM", 16);
									StringIntConCat(&Var1, iVar6[1] + 1, 16);
									func_613(11, &Var0, "UW_DRAW2P", "UW_BIGO", 15000, -1, -1082130432, &Var1, 1, 2);
									bVar9 = true;
								}
								else
								{
									bVar9 = true;
								}
								if (bVar9)
								{
									func_614(68, "UW_BIGO", "UW_DRAW", 1, 15000, 2);
								}
							}
						}
						func_637(0);
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
						{
							Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
						}
						MISC::SET_BIT(&iLocal_102, 13);
						MISC::SET_BIT(&iLocal_102, 26);
					}
				}
				else if (MISC::IS_BIT_SET(Local_98.f_3, 6) || (!func_719() && MISC::IS_BIT_SET(Local_98.f_3, 15)))
				{
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_10 != -1)
					{
						func_614(66, "UW_BIGO", "UW_ABAND", 1, 15000, 2);
					}
					else
					{
						func_613(65, "", "UW_FAIL", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					}
					func_637(0);
					MISC::SET_BIT(&iLocal_102, 26);
					iVar13 = func_508(1);
					Local_99.f_6 = (Local_99.f_6 + iVar13);
					if (!Global_262145.f_10843)
					{
						if (Local_99.f_6 > 0)
						{
							func_507(19, Local_99.f_6);
						}
					}
					Global_2459022 = iVar13;
					if (iVar13 > 0)
					{
						if (func_506())
						{
							func_497(210955503, iVar13, &uVar29, 0, 1, 0);
						}
						else
						{
							NETCASH::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar30);
						}
					}
					iVar11 = func_496(1);
					Local_99.f_7 = (Local_99.f_7 + iVar11);
					func_495();
					func_448(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_99.f_5 = 2;
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (MISC::IS_BIT_SET(Local_98.f_3, 14))
				{
					func_637(0);
					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 3)
					{
						Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 3;
					}
				}
				else if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 11))
				{
					func_613(65, "", "UW_FAILD", "UW_BIGF", 15000, -1, -1082130432, 0, 6, 2);
					func_637(0);
					MISC::SET_BIT(&iLocal_102, 26);
					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					iVar13 = func_508(1);
					Local_99.f_6 = (Local_99.f_6 + iVar13);
					if (!Global_262145.f_10843)
					{
						if (Local_99.f_6 > 0)
						{
							func_507(19, Local_99.f_6);
						}
					}
					Global_2459022 = iVar13;
					if (iVar13 > 0)
					{
						if (func_506())
						{
							func_497(210955503, iVar13, &uVar31, 0, 1, 0);
						}
						else
						{
							NETCASH::NETWORK_EARN_FROM_AMBIENT_JOB(iVar13, "AM_KILL_LIST", &uVar32);
						}
					}
					iVar11 = func_496(1);
					Local_99.f_7 = (Local_99.f_7 + iVar11);
					func_495();
					func_448(0, PLAYER::PLAYER_PED_ID(), "", -1636175450, 153786435, iVar11, 1, -1, 0, 0, 0);
					Local_99.f_5 = 2;
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 = 2;
					}
				}
				else if (MISC::IS_BIT_SET(Local_98.f_3, 12))
				{
					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
				}
			}
			if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
			{
				if (MISC::IS_BIT_SET(iLocal_102, 26))
				{
					if (func_270("UW_ATTK"))
					{
						func_8();
					}
					if (func_535(&uLocal_548, 1))
					{
						MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
					}
					if (!func_270("UW_EXPL") && !func_270("UW_EXPLC"))
					{
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 > -1)
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
							{
								if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
								{
									if (func_107(Local_98.f_7[Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9]))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9])))
										{
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
	else if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8))
	{
		MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 8);
	}
}

int func_535(var uParam0, bool bParam1)
{
	bool bVar0;
	
	if (((*uParam0 > 0 && !func_353()) && !(func_240(PLAYER::PLAYER_ID(), 0) && (func_232(PLAYER::PLAYER_ID()) || func_230(PLAYER::PLAYER_ID())))) && !func_220(PLAYER::PLAYER_ID()))
	{
		func_538();
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_21(&(uParam0->f_3)))
			{
				func_19(&(uParam0->f_3), 0, 0);
			}
			else if (func_18(&(uParam0->f_3), 1000, 0))
			{
				MISC::SET_BIT(&(Global_1574409.f_1), 25);
				if (bParam1)
				{
					MISC::SET_BIT(&(Global_2512808.f_4553), 0);
					func_19(&(uParam0->f_5), 0, 0);
				}
				func_19(&(uParam0->f_1), 0, 0);
				func_537(uParam0, 1);
			}
			break;
		
		case 1:
			if (func_21(&(uParam0->f_5)))
			{
				if (func_18(&(uParam0->f_5), 3000, 0))
				{
					bVar0 = true;
				}
			}
			else
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_536();
				func_537(uParam0, 2);
			}
			break;
		
		case 2:
			func_536();
			if (func_18(&(uParam0->f_1), 15000, 0))
			{
				if (func_653("AMEV_LBD_HELP"))
				{
					HUD::CLEAR_HELP(1);
				}
				func_537(uParam0, 3);
			}
			break;
		
		case 3:
			if (func_18(&(uParam0->f_1), 23500, 0))
			{
				MISC::CLEAR_BIT(&(Global_2512808.f_4553), 1);
				func_537(uParam0, 4);
				return 1;
			}
			break;
		
		case 4:
			MISC::CLEAR_BIT(&(Global_2512808.f_4553), 1);
			return 1;
	}
	return 0;
}

void func_536()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_4553, 0))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2512808.f_778, 2)) && func_820(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68215) && !Global_53084) && !CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::SET_BIT(&(Global_2512808.f_4553), 1);
			func_418("AMEV_LBD_HELP", -1);
			func_417(1);
			MISC::CLEAR_BIT(&(Global_2512808.f_4553), 0);
		}
	}
}

void func_537(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_538()
{
	Global_2458365 = 1;
}

int func_539(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_568(iParam0, &Var0, iParam3, sParam4, sParam5);
	Var0.f_16 = iParam1;
	Var0.f_17 = iParam2;
	Var0.f_70 = iParam6;
	Var0.f_6 = iParam7;
	Var0.f_71 = iParam8;
	StringCopy(&(Var0.f_24), sParam9, 64);
	StringCopy(&(Var0.f_40), sParam10, 64);
	StringCopy(&(Var0.f_56), sParam11, 16);
	return func_540(&Var0);
}

int func_540(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_1 == 1)
	{
		if (Global_2436181.f_2910)
		{
			return 0;
		}
	}
	func_550(uParam0, uParam0->f_16);
	func_549(uParam0);
	if (func_61())
	{
		func_549(uParam0);
	}
	if (func_548(uParam0->f_1))
	{
		func_541();
		if (Global_2436181.f_2592[0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[0 /*79*/] = { *uParam0 };
			return 1;
		}
		if (((Global_2436181.f_2592[0 /*79*/].f_1 == 13 || Global_2436181.f_2592[0 /*79*/].f_1 == 53) || Global_2436181.f_2592[0 /*79*/].f_1 == 54) || Global_2436181.f_2592[0 /*79*/].f_1 == 58)
		{
			Global_2436181.f_2592[0 /*79*/].f_2 = 5;
		}
		iVar0 = 2;
		while (iVar0 >= 1)
		{
			Global_2436181.f_2592[iVar0 + 1 /*79*/] = { Global_2436181.f_2592[iVar0 /*79*/] };
			iVar0 = (iVar0 + -1);
		}
		Global_2436181.f_2592[1 /*79*/] = { *uParam0 };
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_2 == 0)
		{
			Global_2436181.f_2592[iVar0 /*79*/] = { *uParam0 };
			if (iVar0 == 0)
			{
				func_541();
			}
			return 1;
		}
		else
		{
			if (uParam0->f_1 == 1)
			{
				MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 1);
				Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			}
			if (uParam0->f_1 == 86)
			{
				if (func_356(Global_2436181.f_2592[iVar0 /*79*/].f_1))
				{
					Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
					MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_541()
{
	bool bVar0;
	
	if (Global_2436181.f_2911)
	{
		return;
	}
	if (!Global_71124)
	{
		Global_71124 = 1;
		bVar0 = true;
	}
	func_542();
	if (bVar0)
	{
		Global_71124 = 0;
	}
}

void func_542()
{
	Global_2436181.f_2912 = 0;
	Global_2436181.f_2912.f_578 = 0;
	func_546(&(Global_2436181.f_2912.f_1));
	Global_2436181.f_2912.f_1.f_1 = 0;
	func_543(&(Global_2436181.f_2912.f_1));
}

void func_543(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_564 = 0;
	}
	if (!Global_71124)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_71125)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_545(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_544(0);
}

void func_544(int iParam0)
{
	Global_71116 = iParam0;
	Global_71117 = iParam0;
}

bool func_545(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71104, 0);
}

void func_546(var uParam0)
{
	func_547(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

void func_547(var uParam0)
{
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

int func_548(int iParam0)
{
	if ((((((((((((((((((((((iParam0 == 3 || iParam0 == 4) || iParam0 == 5) || iParam0 == 6) || iParam0 == 11) || iParam0 == 12) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30) || iParam0 == 24) || iParam0 == 32) || iParam0 == 31) || iParam0 == 26) || iParam0 == 25) || iParam0 == 56) || iParam0 == 7) || iParam0 == 8) || iParam0 == 9) || iParam0 == 10) || iParam0 == 104) || iParam0 == 100) || iParam0 == 103) || iParam0 == 105)
	{
		return 1;
	}
	return 0;
}

void func_549(var uParam0)
{
	if (func_358(uParam0->f_1))
	{
		uParam0->f_71 = func_316();
	}
}

void func_550(var uParam0, int iParam1)
{
	if (func_358(uParam0->f_1))
	{
		uParam0->f_72 = 1;
	}
	if (iParam1 == func_26() || !func_820(iParam1, 0, 1))
	{
		return;
	}
	if (func_356(uParam0->f_1))
	{
		if (uParam0->f_70 == 1)
		{
			uParam0->f_72 = func_551(iParam1, -2, 0, 0);
		}
	}
}

int func_551(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_394(iParam0))
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
			if (Global_4456448.f_117386[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if ((func_394(PLAYER::PLAYER_ID()) || (func_567() && func_566())) && !MISC::IS_BIT_SET(Global_2512808.f_4556, 31))
	{
		iVar1 = func_565();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_820(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4456448.f_117386[iParam1] != -1)
							{
								return func_563(iParam1, iParam0, 0);
							}
							else
							{
								return func_558(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_558(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4456448.f_117386[iParam1] != -1)
				{
					return func_563(iParam1, iParam0, 0);
				}
				else
				{
					return func_552(0, -1, 0);
				}
			}
			else
			{
				return func_552(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4456448.f_117386[iParam1] != -1)
		{
			return func_563(iParam1, iParam0, 0);
		}
		else
		{
			return func_558(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_558(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_552(bool bParam0, int iParam1, bool bParam2)
{
	return func_553(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_553(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
			if (func_484(iVar0, iParam2, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_557(1);
				}
				else
				{
					return func_557(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_4, 20))
			{
				return func_554(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_554(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_557(1);
	}
	return func_557(0);
}

int func_554(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_556(iParam0, iParam1, iParam3);
	if (func_555(Global_4456448.f_122309))
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

int func_555(int iParam0)
{
	int iVar0;
	
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

int func_556(int iParam0, int iParam1, int iParam2)
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
			if (!func_484(iParam0, iVar0, 0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_557(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_558(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1595693[iVar2 /*680*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_561(1))
			{
				iVar3 = func_315(iParam0);
				if (!iVar3 == -1)
				{
					return func_313(iVar3);
				}
			}
			if ((func_560(iParam1, iParam0, iVar0, 0) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)) || ((func_484(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0) && MISC::IS_BIT_SET(Global_4456448.f_15, 23)) && !MISC::IS_BIT_SET(Global_4456448.f_15, 18)))
			{
				return func_557(1);
			}
			else if (MISC::IS_BIT_SET(Global_4456448.f_15, 26))
			{
				return func_559(1);
			}
			else
			{
				return func_553(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1574312 || Global_1574303) || Global_1595693[iParam0 /*680*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1574312 == 1 && Global_1574322 == 0))
			{
				return func_557(1);
			}
			else
			{
				return func_553(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1574307 && Global_1573842.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_315(iParam0);
	if (!iVar4 == -1)
	{
		return func_313(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_559(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

bool func_560(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_561(int iParam0)
{
	if ((func_296() || func_562()) || (func_61() && iParam0))
	{
		return 1;
	}
	return 0;
}

var func_562()
{
	return Global_2447174.f_15;
}

int func_563(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_980513.f_12[iParam0];
	if (func_561(1))
	{
		iVar2 = func_315(iParam1);
		if (!iVar2 == -1)
		{
			return func_313(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (MISC::IS_BIT_SET(Global_4456448.f_97[iParam0 /*10024*/].f_5191[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_26())
	{
		if (Global_4456448.f_117386[iParam0] != -1 && Global_4456448.f_117386[iParam0] <= 4)
		{
			if (Global_4456448.f_117386[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4456448.f_117386[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4456448.f_117386[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4456448.f_117386[iParam0] == 4)
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
				iVar0 = Global_4456448.f_117386[iParam0];
			}
		}
		else
		{
			iVar0 = func_553(iParam1, !bParam2, iParam0, 0);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_21, 13))
		{
			iVar0 = func_564(iParam0);
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

int func_564(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4456448.f_144012;
			break;
		
		case 1:
			iVar0 = Global_4456448.f_144013;
			break;
		
		case 2:
			iVar0 = Global_4456448.f_144014;
			break;
		
		case 3:
			iVar0 = Global_4456448.f_144015;
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

var func_565()
{
	return Global_2359302.f_2;
}

bool func_566()
{
	return MISC::IS_BIT_SET(Global_2359302, 4);
}

bool func_567()
{
	return MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_39.f_18, 14);
}

void func_568(var uParam0, var uParam1, int iParam2, char* sParam3, char* sParam4)
{
	uParam1->f_16 = func_26();
	uParam1->f_17 = func_26();
	uParam1->f_18 = func_26();
	uParam1->f_19 = func_26();
	uParam1->f_1 = uParam0;
	uParam1->f_2 = 1;
	StringCopy(&(uParam1->f_20), sParam4, 16);
	StringCopy(&(uParam1->f_8), sParam3, 32);
	uParam1->f_3 = iParam2;
	uParam1->f_70 = 1;
	uParam1->f_73 = 1;
	uParam1->f_74 = 1;
	uParam1->f_75 = 0;
	uParam1->f_76 = 0;
	uParam1->f_72 = 0;
	StringCopy(&(uParam1->f_24), "", 64);
	StringCopy(&(uParam1->f_40), "", 64);
}

int func_569(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_26();
	iVar1 = func_26();
	iVar2 = func_26();
	return func_570(iParam0, sParam1, sParam2, sParam3, uParam4, iVar0, iVar1, iVar2, sParam5, iParam6, iParam7, iParam8, iParam9, iParam10, 2);
}

int func_570(var uParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_568(uParam0, &Var0, iParam9, sParam2, sParam1);
	Var0.f_4 = uParam10;
	Var0.f_5 = uParam11;
	Var0.f_16 = iParam5;
	Var0.f_17 = iParam6;
	Var0.f_18 = iParam7;
	StringCopy(&(Var0.f_24), sParam3, 64);
	StringCopy(&(Var0.f_56), sParam8, 16);
	Var0.f_72 = uParam4;
	Var0.f_70 = uParam4;
	Var0.f_6 = uParam13;
	Var0.f_71 = uParam12;
	if (iParam14 != 2)
	{
		Var0.f_70 = iParam14;
	}
	MISC::SET_BIT(&(Var0.f_68), 2);
	return func_540(&Var0);
}

char* func_571(int iParam0)
{
	char* sVar0;
	int iVar1;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		sVar0 = func_576(&(Global_1627537[iParam0 /*532*/].f_11.f_99));
		return sVar0;
	}
	if (Global_1627537[iParam0 /*532*/].f_11.f_115 != Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11.f_115)
	{
		sVar0 = func_574(iParam0, 0);
		return sVar0;
	}
	if (((func_231(iParam0, 28) || func_231(PLAYER::PLAYER_ID(), 28)) || func_573(iParam0)) && !func_572(iParam0))
	{
		return func_574(iParam0, 0);
	}
	iVar1 = func_65(iParam0);
	if (iVar1 != func_26())
	{
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			if (!MISC::IS_DURANGO_VERSION() && !NETWORK::_0x595F028698072DD9(0, -1, 1))
			{
				return func_574(iVar1, 0);
			}
		}
	}
	if (iVar1 != func_26())
	{
		sVar0 = func_576(&(Global_1627537[iVar1 /*532*/].f_11.f_99));
		if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
		{
			return func_574(iVar1, 0);
		}
		else
		{
			return sVar0;
		}
	}
	return "";
}

int func_572(int iParam0)
{
	struct<13> Var0;
	
	Var0 = { func_66(iParam0) };
	if (MISC::IS_DURANGO_VERSION())
	{
		if (NETWORK::_0x72D918C99BCACC54(0))
		{
			if (NETWORK::_0xB57A49545BA53CE7(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_573(int iParam0)
{
	struct<13> Var0;
	
	if (iParam0 != func_26())
	{
		Var0 = { func_66(iParam0) };
		if (MISC::IS_ORBIS_VERSION() || MISC::IS_PC_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				return 0;
			}
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (NETWORK::_0x72D918C99BCACC54(0))
			{
				if (NETWORK::_0xB57A49545BA53CE7(&Var0))
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

char* func_574(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_300(iParam0, 1))
		{
			return func_575();
		}
	}
	return HUD::_GET_LABEL_TEXT("GB_REST_ACC");
}

char* func_575()
{
	return HUD::_GET_LABEL_TEXT("GB_REST_ACCM");
}

var func_576(var uParam0)
{
	return uParam0;
}

void func_577(bool bParam0)
{
	if (bParam0)
	{
		if (func_578(1))
		{
			MISC::SET_BIT(&Global_1574434, 1);
		}
	}
	else if (func_578(2))
	{
		MISC::SET_BIT(&Global_1574434, 2);
	}
}

int func_578(int iParam0)
{
	int iVar0;
	
	iVar0 = func_262(2523, -1, 0);
	if (iParam0 == 0)
	{
		if ((MISC::IS_BIT_SET(iVar0, 0) && MISC::IS_BIT_SET(iVar0, 1)) && MISC::IS_BIT_SET(iVar0, 2))
		{
			return 0;
		}
	}
	else if (iParam0 == 1)
	{
		if ((MISC::IS_BIT_SET(iVar0, 3) && MISC::IS_BIT_SET(iVar0, 4)) && MISC::IS_BIT_SET(iVar0, 5))
		{
			return 0;
		}
	}
	else if (iParam0 == 2)
	{
		if ((MISC::IS_BIT_SET(iVar0, 6) && MISC::IS_BIT_SET(iVar0, 7)) && MISC::IS_BIT_SET(iVar0, 8))
		{
			return 0;
		}
	}
	else if (iParam0 == 3)
	{
		if ((MISC::IS_BIT_SET(iVar0, 9) && MISC::IS_BIT_SET(iVar0, 10)) && MISC::IS_BIT_SET(iVar0, 11))
		{
			return 0;
		}
	}
	return 1;
}

int func_579(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_568(iParam0, &Var0, -1, sParam1, sParam5);
	StringCopy(&(Var0.f_24), sParam2, 64);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam6;
	return func_540(&Var0);
}

int func_580(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (bParam0)
	{
		func_656(&iVar1, &iVar2);
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (iVar0 != iVar1)
			{
				if (Local_98.f_256[iVar0] == iVar2)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	else if (Local_98.f_27 == joaat("rhino") || Local_98.f_27 == joaat("hydra"))
	{
		return Local_98.f_465[0 /*4*/].f_1 == Local_98.f_465[1 /*4*/].f_1;
	}
	else
	{
		return Local_98.f_594[0 /*4*/].f_1 == Local_98.f_594[1 /*4*/].f_1;
	}
	return 0;
}

int func_581()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_656(&iVar1, &iVar2);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iVar1)
		{
			if (Local_98.f_256[iVar0] > iVar2)
			{
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

int func_582()
{
	if (!func_719())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_10592) * Global_262145.f_10782));
	}
	if ((MISC::IS_BIT_SET(Local_98.f_3, 0) && MISC::IS_BIT_SET(Local_98.f_3, 1)) && MISC::IS_BIT_SET(Local_98.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_10653) * Global_262145.f_10784));
	}
	if (MISC::IS_BIT_SET(Local_98.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_10653) * Global_262145.f_10784));
	}
	return 0;
}

void func_583(int iParam0, int iParam1)
{
	int iVar0;
	
	if (*iParam0 > 0)
	{
		if (!func_595())
		{
			if (func_594(0))
			{
				if (!func_372(0))
				{
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(func_593()))
					{
						if (func_592() == 100)
						{
							iVar0 = *iParam0;
							*iParam0 = 0;
						}
						else
						{
							iVar0 = ((*iParam0 / 100) * func_592());
							*iParam0 = (*iParam0 - iVar0);
						}
						func_590(&iVar0, 0);
						if (iParam1 == 1)
						{
							func_589("GB_BCUT_TICK1", func_593(), iVar0, 0, 0, 1, 1);
						}
						func_588(20);
						func_584(func_593(), iVar0, 1);
					}
				}
			}
		}
	}
}

void func_584(int iParam0, int iParam1, int iParam2)
{
	struct<8> Var0;
	
	if (func_820(iParam0, 0, 1))
	{
		Var0 = 887219908;
		Var0.f_1 = PLAYER::PLAYER_ID();
		Var0.f_2 = iParam1;
		Var0.f_4 = iParam2;
		Var0.f_5 = func_587(iParam0);
		func_586(&(Var0.f_6), &(Var0.f_7));
		SCRIPT::_0xA40CC53DF8E50837(1, &Var0, 8, func_585(iParam0));
	}
}

var func_585(int iParam0)
{
	var uVar0;
	
	MISC::SET_BIT(&uVar0, iParam0);
	return uVar0;
}

void func_586(var uParam0, var uParam1)
{
	*uParam0 = Global_1644563.f_9;
	*uParam1 = Global_1644563.f_10;
}

var func_587(int iParam0)
{
	return Global_1627537[iParam0 /*532*/].f_469;
}

void func_588(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2512808.f_4856.f_7[iVar0]), iVar1);
}

int func_589(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6)
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
		HUD::_SET_NOTIFICATION_COLOR_NEXT(func_551(iParam1, -2, 1, 0));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_527(&Var1));
		if (!iParam3 == 0)
		{
			HUD::_SET_NOTIFICATION_COLOR_NEXT(iParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
		iVar0 = HUD::_DRAW_NOTIFICATION(0, 1);
		func_522(27, sParam0, 1, &Var1, iParam2, 0, 0, 0, 1, 0, 0, 0);
	}
	return iVar0;
}

void func_590(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (bParam1)
	{
		iVar1 = func_591(1);
	}
	else
	{
		iVar1 = func_591(0);
	}
	iVar0 = ((*iParam0 / 100) * iVar1);
	*iParam0 = (*iParam0 - iVar0);
}

int func_591(bool bParam0)
{
	if (bParam0)
	{
		return SYSTEM::ROUND((0.05f * 100f));
	}
	return Global_262145.f_11730;
}

int func_592()
{
	return Global_262145.f_11729;
}

int func_593()
{
	return Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_11;
}

bool func_594(bool bParam0)
{
	return func_311(PLAYER::PLAYER_ID(), bParam0);
}

bool func_595()
{
	return func_346(PLAYER::PLAYER_ID());
}

int func_596()
{
	int iVar0;
	
	if (!MISC::IS_BIT_SET(Local_98.f_3, 6) && !MISC::IS_BIT_SET(Local_98.f_3, 15))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Local_98.f_256[iVar0] > 0)
		{
			return 0;
		}
		iVar0++;
	}
	return 1;
}

void func_597()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_73[iVar0]))
		{
			if (!func_107(Local_98.f_73[iVar0]))
			{
				func_24(&(Local_98.f_73[iVar0]));
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar0]))
		{
			if (func_31(Local_98.f_48[iVar0]))
			{
				func_24(&(Local_98.f_48[iVar0]));
			}
		}
		iVar0++;
	}
}

int func_598(int iParam0, int iParam1, bool bParam2, char* sParam3, char* sParam4)
{
	if (func_240(PLAYER::PLAYER_ID(), 0) || func_340(PLAYER::PLAYER_ID(), 0))
	{
		if (func_232(PLAYER::PLAYER_ID()) || func_245(PLAYER::PLAYER_ID()))
		{
			bParam2 = false;
		}
	}
	if (NETWORK::_0xCF61D4B4702EE9EB() < iParam0)
	{
		if (bParam2)
		{
			func_603(sParam3, sParam4, 1);
		}
		if (func_602(26, -1))
		{
			func_600(26, -1);
		}
		return 1;
	}
	if (func_21(&(Global_1574409.f_18)))
	{
		if (!func_18(&(Global_1574409.f_18), 7500, 0))
		{
			return 0;
		}
		func_104(&(Global_1574409.f_18));
	}
	if (func_599())
	{
		if (bParam2)
		{
			func_603(sParam3, sParam4, 0);
		}
		if (func_602(26, -1))
		{
			func_600(26, -1);
		}
		return 1;
	}
	if (iParam1 && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() < iParam0)
	{
		if (bParam2)
		{
			func_603(sParam3, sParam4, 1);
		}
		if (func_602(26, -1))
		{
			func_600(26, -1);
		}
		return 1;
	}
	return 0;
}

bool func_599()
{
	return MISC::IS_BIT_SET(Global_1574409.f_1, 0);
}

void func_600(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_601(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::CLEAR_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_601(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		iParam0 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = 909;
			break;
		
		case 1:
			iVar0 = 910;
			break;
		
		case 2:
			iVar0 = 911;
			break;
		
		case 3:
			iVar0 = 912;
			break;
		
		case 4:
			iVar0 = 913;
			break;
	}
	return iVar0;
}

bool func_602(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	iVar0 = func_601(iParam1);
	iVar1 = MISC::GET_PROFILE_SETTING(iVar0);
	return MISC::IS_BIT_SET(iVar1, iParam0);
}

void func_603(char* sParam0, char* sParam1, bool bParam2)
{
	if ((!MISC::IS_BIT_SET(Global_1574409.f_1, 2) && !func_200(PLAYER::PLAYER_ID())) && !func_199(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		{
			sParam0 = "FMEVEN_NUM1";
		}
		if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			if (bParam2)
			{
				sParam1 = "FMEVEN_NUM2";
			}
			else
			{
				sParam1 = "FMEVEN_NUM3";
			}
		}
		func_614(66, sParam0, sParam1, 1, -1, 2);
		MISC::SET_BIT(&(Global_1574409.f_1), 2);
	}
}

void func_604()
{
	Global_2512808.f_1759.f_56 = 1;
}

void func_605()
{
	Global_2512808.f_1759.f_54 = 1;
}

bool func_606()
{
	return MISC::IS_BIT_SET(Global_2512808.f_1709, 11);
}

int func_607()
{
	if (iLocal_557 > -1)
	{
		if (func_107(Local_98.f_7[iLocal_557]))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iLocal_557])))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_608(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_609(bool bParam0)
{
	if (!func_719())
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_10591) * Global_262145.f_10781));
	}
	if (bParam0)
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_10652) * Global_262145.f_10783));
	}
	if ((MISC::IS_BIT_SET(Local_98.f_3, 0) && MISC::IS_BIT_SET(Local_98.f_3, 1)) && MISC::IS_BIT_SET(Local_98.f_3, 2))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_10652) * Global_262145.f_10783));
	}
	if (MISC::IS_BIT_SET(Local_98.f_3, 6))
	{
		return SYSTEM::ROUND((SYSTEM::TO_FLOAT(Global_262145.f_10652) * Global_262145.f_10783));
	}
	return 0;
}

char* func_610()
{
	if (Local_98.f_27 == joaat("rhino"))
	{
		return "ABLIP_TANK";
	}
	else if (VEHICLE::IS_THIS_MODEL_A_PLANE(Local_98.f_27))
	{
		return "ABLIP_PLANE";
	}
	return "ABLIP_HELI";
}

void func_611(int iParam0)
{
	if (func_244())
	{
		if (iParam0 == 1)
		{
			if (Global_2512808.f_4363 == -1)
			{
				Global_2512808.f_4363 = 60000;
			}
			func_7(&(Global_2512808.f_4361), 0, 0);
			if (Global_2512808.f_4366 == -1)
			{
				Global_2512808.f_4366 = 10000;
			}
			func_7(&(Global_2512808.f_4364), 0, 0);
		}
		else
		{
			Global_1312416 = 0;
			Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_8 = 0;
			func_658(1);
		}
		if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !func_612()) && !func_250(PLAYER::PLAYER_ID()))
		{
			Global_979885 = 0;
		}
	}
}

bool func_612()
{
	return Global_2447174.f_727;
}

int func_613(int iParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_568(iParam0, &Var0, iParam5, sParam2, sParam3);
	StringCopy(&(Var0.f_56), sParam1, 16);
	StringCopy(&(Var0.f_60), sParam7, 16);
	Var0.f_6 = iParam4;
	Var0.f_7 = iParam6;
	Var0.f_70 = iParam8;
	Var0.f_71 = iParam9;
	return func_540(&Var0);
}

int func_614(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	struct<79> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1082130432;
	Var0.f_70 = 1;
	Var0.f_71 = 2;
	Var0.f_78 = -1;
	func_568(iParam0, &Var0, -1, sParam2, sParam1);
	Var0.f_70 = iParam3;
	Var0.f_6 = iParam4;
	Var0.f_71 = iParam5;
	return func_540(&Var0);
}

void func_615(bool bParam0)
{
	if (bParam0)
	{
		MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 4);
	}
}

void func_616(bool bParam0)
{
	int iVar0;
	
	if (PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 177, true);
		PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_262(582, -1, 0));
		if (func_636())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("lts_p_para_pilot2_sp_s"));
		}
		else if (func_635())
		{
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(PLAYER::PLAYER_ID(), joaat("pil_p_para_pilot_sp_s"));
		}
		if (func_632(3610, -1, -1))
		{
		}
		iVar0 = func_262(2037, -1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_631(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar0));
		if (func_594(0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_262(582, -1, 0));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER::PLAYER_ID(), func_630(Global_2521061));
		}
		func_629(PLAYER::PLAYER_ID(), iVar0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_622(PLAYER::PLAYER_PED_ID(), iVar0), func_621(PLAYER::PLAYER_PED_ID(), iVar0), 0);
		func_620(func_262(2037, -1, 0), 1);
		Global_2512808.f_276 = 1;
		func_617(PLAYER::PLAYER_ID(), -1, -1);
		if (bParam0)
		{
		}
	}
}

void func_617(int iParam0, int iParam1, int iParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_619();
		if (iParam2 == -1)
		{
			iParam2 = func_262(2037, -1, 0);
		}
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(iParam0, 5, func_622(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_621(PLAYER::GET_PLAYER_PED(iParam0), iParam2), 0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(iParam0, func_631(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::GET_PLAYER_PED(iParam0), 5, func_622(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_621(PLAYER::GET_PLAYER_PED(iParam0), iParam2), func_631(PLAYER::GET_PLAYER_PED(iParam0), iParam2));
		if (iParam1 == -1)
		{
			iParam1 = func_262(582, -1, 0);
		}
		if (func_594(1) && func_618(iParam0))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, func_630(Global_2521061));
		}
		else
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, iParam1);
		}
		if (MISC::IS_BIT_SET(Global_4456448.f_28, 4))
		{
			PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(iParam0, Global_1574339);
			PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(iParam0, joaat("xm_prop_x17_para_sp_s"));
		}
		func_629(iParam0, iParam2);
		PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 177, true);
	}
}

bool func_618(int iParam0)
{
	return func_231(iParam0, 10);
}

void func_619()
{
	Global_70832 = 0;
	Global_70833 = -1;
	Global_70834 = -1;
	Global_70835 = -1;
	Global_70836 = -1;
	Global_70837 = -1;
}

void func_620(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_619();
		func_474(2037, iParam0, -1, 1, 0);
		PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(PLAYER::PLAYER_ID(), 5, func_622(PLAYER::PLAYER_PED_ID(), iParam0), func_621(PLAYER::PLAYER_PED_ID(), iParam0), 0);
		func_629(PLAYER::PLAYER_ID(), iParam0);
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), func_631(PLAYER::PLAYER_PED_ID(), iParam0));
		if ((iParam1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), 5) != 0)
		{
			func_617(PLAYER::PLAYER_ID(), -1, -1);
		}
	}
}

int func_621(int iParam0, int iParam1)
{
	if (iParam1 > 62)
	{
		return (iParam1 - 63);
	}
	if (iParam1 > 51)
	{
		return (iParam1 - 52);
	}
	if (iParam1 > 46)
	{
		return (iParam1 - 47);
	}
	if (iParam1 > 26)
	{
		return (iParam1 - 27);
	}
	if (iParam1 > 0)
	{
		return (iParam1 - 1);
	}
	return iParam1;
}

var func_622(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_70832 || !iParam1 == Global_70833) || !iVar1 == Global_70834) || !iVar2 == Global_70835) || !iVar3 == Global_70836)
	{
		Global_70832 = bVar0;
		Global_70833 = iParam1;
		Global_70834 = iVar1;
		Global_70835 = iVar2;
		Global_70836 = iVar3;
		Global_70837 = func_623(iParam0, iParam1);
	}
	return Global_70837;
}

int func_623(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11);
	if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
	{
		bVar1 = true;
	}
	iVar2 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar3 = 0;
	if (iParam1 > 61)
	{
		iVar3 = 50;
	}
	else if (iParam1 > 51)
	{
		iVar3 = (iParam1 - 1);
	}
	else if (iParam1 > 46)
	{
		iVar3 = 30;
	}
	else if (iParam1 > 26)
	{
		iVar3 = 20;
	}
	else if (iParam1 > 0)
	{
		iVar3 = 9;
	}
	else
	{
		iVar3 = 0;
	}
	iVar4 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1499233212, 8))
			{
				return (2 + iVar3);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -887141061, 8))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1185371730, 8))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -2124629577, 8))
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1499233212, 8))
			{
				return (7 + iVar3);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -887141061, 8))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -1185371730, 8))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			if (FILES::_0x341DE7ED1D2A1BFD(iVar4, -2124629577, 8))
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		return func_628(iParam0, iParam1);
	}
	if (func_627(iParam0))
	{
		if (bVar1)
		{
			return (8 + iVar3);
		}
		else
		{
			return (2 + iVar3);
		}
	}
	if (iVar0 > 15)
	{
		iVar5 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -530089825, 0))
		{
			if (bVar1)
			{
				return (6 + iVar3);
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -713698407, 0))
		{
			if (iParam1 > 51)
			{
				if (iVar2 == joaat("mp_m_freemode_01"))
				{
					return 60;
				}
				else
				{
					return 53;
				}
			}
			else if (iParam1 > 46)
			{
				return 39;
			}
			else if (iParam1 > 26)
			{
				return 29;
			}
			else if (iParam1 > 0)
			{
				return 18;
			}
			else
			{
				return 19;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1882920022, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -317649054, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0) && !FILES::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			iVar6 = func_626(iVar5, 0);
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				switch (iVar6)
				{
					case 0:
						return (2 + iVar3);
						break;
					
					case 2:
						if (iParam1 > 46)
						{
							return 39;
						}
						else if (iParam1 > 26)
						{
							return 29;
						}
						else if (iParam1 > 0)
						{
							return 18;
						}
						else
						{
							return 19;
						}
						break;
					
					default:
						iVar0 = func_625(iVar5);
						break;
				}
			}
			else
			{
				switch (iVar6)
				{
					case 2:
						return (7 + iVar3);
						break;
					
					default:
						iVar0 = func_625(iVar5);
						break;
					}
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0))
		{
			if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1347486026, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0))
		{
			iVar7 = func_624(iVar5, 0);
			switch (iVar7)
			{
				case 4:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 28;
					}
					else if (iParam1 > 0)
					{
						return 17;
					}
					else
					{
						return 8;
					}
					break;
				
				case 5:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 6:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 7:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 11:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 12:
					if (iVar2 == joaat("mp_m_freemode_01"))
					{
					}
					else
					{
						return (8 + iVar3);
					}
					break;
				
				case 14:
					if (iParam1 > 46)
					{
						return 39;
					}
					else if (iParam1 > 26)
					{
						return 29;
					}
					else if (iParam1 > 0)
					{
						return 18;
					}
					else
					{
						return 19;
					}
					break;
				
				default:
					iVar0 = func_625(iVar5);
					break;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -779835469, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1119232689, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2102859770, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1607949555, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1488441032, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1719167561, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1274099003, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1407614029, 0))
				{
					return func_628(iParam0, iParam1) + 15;
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((FILES::_0x341DE7ED1D2A1BFD(iVar5, -1086258388, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar5, -994703884, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (iParam1 > 46)
				{
					return 39;
				}
				else if (iParam1 > 26)
				{
					return 29;
				}
				else if (iParam1 > 0)
				{
					return 18;
				}
				else
				{
					return 19;
				}
			}
			else if (bVar1)
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2020757158, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1064262817, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1419806467, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (7 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1053842259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1358888880, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -441291342, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -747583185, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_628(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1986415230, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2088146832, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -785939537, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -872449705, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -416620954, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -102825006, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -733792105, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -641612092, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1351486939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
			}
			else if (bVar1)
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2119756144, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1507532917, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1506370874, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 1927516484, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1786447517, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1010805287, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1325813684, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -549843760, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -828478571, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else if (bVar1)
			{
				return (55 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -269266203, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -685039259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1266557933, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -979468724, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1813210391, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -309899747, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -89003918, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -747858475, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return func_628(iParam0, iParam1);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return func_628(iParam0, iParam1);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -838136846, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (4 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -99064836, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -697656159, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -398213037, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -306768813, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -58412562, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1968575702, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return (48 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -915352927, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -538378351, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2139144017, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -435539886, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1499233212, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -2124629577, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_628(iParam0, iParam1) + 15;
			}
			else
			{
				return func_628(iParam0, iParam1) + 15;
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1375878737, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
		{
			if (bVar1)
			{
				return (8 + iVar3);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILES::_0x341DE7ED1D2A1BFD(iVar5, -1410897066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (3 + iVar3);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if ((FILES::_0x341DE7ED1D2A1BFD(iVar5, -2017999390, 0) || FILES::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0)) || FILES::_0x341DE7ED1D2A1BFD(iVar5, -826135203, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_625(iVar5);
		}
	}
	if (iVar2 == joaat("mp_m_freemode_01"))
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 9:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 10:
				if (bVar1)
				{
					return (3 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (2 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (6 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 1:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 2:
				if (bVar1)
				{
					return (4 + iVar3);
				}
				else
				{
					return (3 + iVar3);
				}
				break;
			
			case 3:
				if (bVar1)
				{
					return (6 + iVar3);
				}
				else
				{
					return (5 + iVar3);
				}
				break;
			
			case 4:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 5:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 6:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 7:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 8:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 9:
				return (2 + iVar3);
				break;
			
			case 10:
				if (bVar1)
				{
					return (7 + iVar3);
				}
				else
				{
					return (7 + iVar3);
				}
				break;
			
			case 11:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 12:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 13:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			
			case 14:
				if (bVar1)
				{
					return (8 + iVar3);
				}
				else
				{
					return (4 + iVar3);
				}
				break;
			
			case 15:
				if (bVar1)
				{
					return (2 + iVar3);
				}
				else
				{
					return (1 + iVar3);
				}
				break;
			}
	}
	return (1 + iVar3);
	return 0;
}

int func_624(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -761463976, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1939378450, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1127835965, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -820724897, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -672871169, iParam1))
	{
		iVar0 = 13;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -196114988, iParam1))
	{
		iVar0 = 15;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_625(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	if (iParam0 == 0)
	{
		return iVar0;
	}
	if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 821147517, 0))
	{
		iVar0 = 0;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 2055293595, 0))
	{
		iVar0 = 1;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1992562672, 0))
	{
		iVar0 = 2;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1458930564, 0))
	{
		iVar0 = 3;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1046587084, 0))
	{
		iVar0 = 4;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1943944625, 0))
	{
		iVar0 = 5;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1999870067, 0))
	{
		iVar0 = 6;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 2048281121, 0))
	{
		iVar0 = 7;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -109983526, 0))
	{
		iVar0 = 8;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1394888785, 0))
	{
		iVar0 = 9;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -144826511, 0))
	{
		iVar0 = 10;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 19149565, 0))
	{
		iVar0 = 11;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 310957510, 0))
	{
		iVar0 = 12;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 742787396, 0))
	{
		iVar0 = 13;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1604914832, 0))
	{
		iVar0 = 14;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1092211054, 0))
	{
		iVar0 = 15;
	}
	return iVar0;
}

int func_626(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = -1;
	if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -870074461, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1174924468, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -868698159, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1177480446, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1347486026, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -1655154167, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, -2105858993, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILES::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_627(int iParam0)
{
	if (FILES::_0x341DE7ED1D2A1BFD(FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_628(int iParam0, int iParam1)
{
	if (iParam1 > 61)
	{
		return 61;
	}
	if (iParam1 == 53 || iParam1 == 54)
	{
		return 61;
	}
	if (iParam1 > 51)
	{
		return 51;
	}
	if (iParam1 > 46)
	{
		return 51;
	}
	if (iParam1 > 26)
	{
		return 50;
	}
	if (iParam1 > 0)
	{
		return 49;
	}
	return 48;
}

void func_629(int iParam0, int iParam1)
{
	if (func_636())
	{
		if (iParam1 > 51)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else if (iParam1 > 46)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("p_para_bag_xmas_s"));
		}
		else if (iParam1 > 26)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_lts_s"));
		}
		else if (iParam1 > 0)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("lts_p_para_bag_pilot2_s"));
		}
		else
		{
			PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
		}
	}
	else if (func_635())
	{
		if (iParam1 > 0)
		{
			PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, joaat("pil_p_para_bag_pilot_s"));
		}
		else
		{
			PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
		}
	}
}

int func_630(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	switch (iVar0)
	{
		case 1:
			return 9;
			break;
		
		case 2:
			return 9;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 8;
			break;
		
		case 6:
			return 8;
			break;
		
		case 7:
			return 11;
			break;
		
		case 8:
			return 11;
			break;
		
		case 9:
			return 6;
			break;
		
		case 10:
			return 6;
			break;
		
		case 11:
			return 10;
			break;
		
		case 12:
			return 10;
			break;
	}
	return 0;
}

int func_631(int iParam0, int iParam1)
{
	return 0;
}

int func_632(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	iVar1 = func_634(iParam0, iParam1);
	uVar2 = func_633(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_633(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
	}
	return iVar0;
}

int func_634(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam1);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam1);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar0 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar0 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam1);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam1, "_NGPSTAT_BOOL");
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam1, "_NGTATPSTAT_BOOL");
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam1, "_NGDLCPSTAT_BOOL");
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam1, "_DLCBIKEPSTAT_BOOL");
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam1, "_DLCGUNPSTAT_BOOL");
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam1, "_GUNTATPSTAT_BOOL");
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_BOOL");
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam1, "_GANGOPSPSTAT_BOOL");
	}
	return iVar0;
}

bool func_635()
{
	return DLC::IS_DLC_PRESENT(1428761799);
}

bool func_636()
{
	return DLC::IS_DLC_PRESENT(-1005876368);
}

void func_637(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2512808.f_1709, 11))
		{
			MISC::SET_BIT(&(Global_2512808.f_1709), 11);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2512808.f_1709, 11))
	{
		MISC::CLEAR_BIT(&(Global_2512808.f_1709), 11);
	}
}

void func_638(bool bParam0)
{
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_2512808.f_1709, 9))
		{
			MISC::SET_BIT(&(Global_2512808.f_1709), 9);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2512808.f_1709, 9))
	{
		MISC::CLEAR_BIT(&(Global_2512808.f_1709), 9);
	}
}

void func_639()
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 1))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
}

void func_640(bool bParam0)
{
	int iVar0;
	
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 7))
		{
			if (func_244())
			{
				func_611(0);
				func_642();
			}
			if (func_261(0))
			{
				iVar0 = func_262(2469, -1, 0);
				MISC::CLEAR_BIT(&iVar0, 0);
				func_642();
			}
			if (func_261(func_204(func_188(PLAYER::PLAYER_ID()))))
			{
				iVar0 = func_262(2469, -1, 0);
				MISC::CLEAR_BIT(&iVar0, func_204(func_188(PLAYER::PLAYER_ID())));
				func_642();
			}
			if (func_641())
			{
				func_642();
			}
			if (func_188(PLAYER::PLAYER_ID()) > -1)
			{
				MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 7);
			}
		}
	}
	else if (MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 7))
	{
		MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 7);
	}
}

int func_641()
{
	if (Global_2436181.f_1040.f_5 == -1)
	{
		return 0;
	}
	return 1;
}

void func_642()
{
	if (func_641())
	{
		Global_2436181.f_1040.f_16 = 1;
	}
}

void func_643(int iParam0, float fParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 1);
	if (iParam0 != 133)
	{
		AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 1);
	}
	Global_2512808.f_4703 = -1;
	bVar0 = (func_240(PLAYER::PLAYER_ID(), 0) && func_232(PLAYER::PLAYER_ID()));
	if (bParam6)
	{
		func_652(21, 1);
	}
	else
	{
		func_651(iParam0, -1);
		if (func_200(PLAYER::PLAYER_ID()))
		{
			Global_1574409.f_3 = iParam0;
		}
		else
		{
			func_681(iParam0);
		}
		Global_1574409.f_4 = -1;
		if (func_200(PLAYER::PLAYER_ID()))
		{
			MISC::SET_BIT(&(Global_1574409.f_1), 5);
		}
		if ((func_244() && !func_239()) || func_201(PLAYER::PLAYER_ID(), 21))
		{
			MISC::SET_BIT(&(Global_1574409.f_1), 4);
		}
		MISC::CLEAR_BIT(&(Global_1574409.f_1), 17);
		MISC::SET_BIT(&(Global_1574409.f_1), 20);
		if (func_650(iParam0))
		{
			func_649();
		}
	}
	if (!bVar0)
	{
		if (fParam1 != 1f)
		{
			func_648(fParam1);
		}
		if (fParam2 != 1f)
		{
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(fParam2);
			if (iParam0 == 146)
			{
				PLAYER::SET_MAX_WANTED_LEVEL(0);
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			}
		}
		if (func_647(iParam0))
		{
			PLAYER::SET_MAX_WANTED_LEVEL(0);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, 0);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), 0);
			MISC::SET_BIT(&(Global_1574409.f_1), 8);
		}
		if (bParam3)
		{
			if (!Global_2391045)
			{
				func_441(1);
				if (func_578(0))
				{
					MISC::SET_BIT(&(Global_1574409.f_1), 9);
				}
				MISC::SET_BIT(&(Global_1574409.f_1), 14);
			}
		}
		if (bParam4)
		{
			func_439(1);
			MISC::SET_BIT(&(Global_1574409.f_1), 12);
		}
		if (bParam5)
		{
			func_646();
			MISC::SET_BIT(&(Global_1574409.f_1), 12);
		}
		if (!bParam6)
		{
			if (func_644(iParam0))
			{
				MISC::SET_BIT(&(Global_1574409.f_1), 21);
			}
		}
	}
	Global_2492048 = 1;
}

int func_644(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 131:
		case 141:
		case 136:
		case 138:
		case 139:
		case 140:
		case 144:
		case 146:
			return 1;
		
		default:
	}
	if (func_645())
	{
		return 1;
	}
	return 0;
}

int func_645()
{
	switch (func_187())
	{
		case 15:
		case 16:
		case 17:
		case 18:
			return 1;
		
		default:
	}
	return 0;
}

void func_646()
{
	MISC::SET_BIT(&(Global_2512808.f_4694), 0);
}

int func_647(int iParam0)
{
	switch (iParam0)
	{
		case 136:
		case 144:
		case 129:
			return 1;
		
		case 141:
			if (func_233(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_648(float fParam0)
{
	float fVar0;
	
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_434())
	{
		return;
	}
	fVar0 = (Global_2512808.f_4851 - fParam0);
	if (SCRIPT::IS_THREAD_ACTIVE(Global_2512808.f_4852))
	{
		if (!Global_2512808.f_4852 == SCRIPT::GET_ID_OF_THIS_THREAD() && MISC::ABSF(fVar0) > 0.001f)
		{
			return;
		}
	}
	Global_2512808.f_4851 = fParam0;
	Global_2512808.f_4852 = SCRIPT::GET_ID_OF_THIS_THREAD();
}

void func_649()
{
	Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_215 = 0;
	MISC::CLEAR_BIT(&(Global_2512808.f_4529), 1);
}

int func_650(int iParam0)
{
	switch (iParam0)
	{
		case 136:
			return 1;
		
		default:
	}
	return 0;
}

void func_651(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 != -1 || iParam1 != -1)
	{
		iVar0 = iParam0;
		if (iVar0 == -1)
		{
			iVar0 = iParam1;
		}
		if (func_261(0) || func_261(func_204(iVar0)))
		{
			MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 2);
		}
		else
		{
			MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 2);
		}
	}
}

void func_652(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!MISC::IS_BIT_SET(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_223, iParam0))
		{
			MISC::SET_BIT(&(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_223), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_223, iParam0))
	{
		MISC::CLEAR_BIT(&(Global_2422736[PLAYER::PLAYER_ID() /*420*/].f_223), iParam0);
	}
}

int func_653(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_654()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Local_98.f_27 != joaat("valkyrie"))
	{
		return 1;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(joaat("valkyrie"));
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar2, 0);
		if (iVar4 != 0)
		{
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if (PED::IS_PED_A_PLAYER(iVar4))
				{
					iVar3++;
				}
			}
		}
		iVar2++;
	}
	if (iVar3 > 0)
	{
		return 1;
	}
	return 0;
}

void func_655(bool bParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), 0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			ENTITY::SET_ENTITY_INVINCIBLE(iVar0, bParam0);
			VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iVar0, !bParam0);
		}
	}
}

void func_656(int iParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iVar0))
		{
			*iParam0 = iVar0;
			*uParam1 = Local_98.f_256[iVar0];
		}
		iVar0++;
	}
}

void func_657()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iVar0 != -1)
	{
		Global_1627537[iVar0 /*532*/] = -1;
	}
}

void func_658(bool bParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_244())
		{
			if (func_820(PLAYER::PLAYER_ID(), 1, 0))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 1);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, false);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, false);
			}
			PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 1f);
			NETWORK::_0x1B857666604B1A74(0);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(1);
			if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
			{
				Global_1312416.f_2 = 0;
				if (bParam0)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
				}
			}
		}
		else
		{
			if (func_820(PLAYER::PLAYER_ID(), 1, 1))
			{
				PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), 0);
				WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_unarmed"), true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
				PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 122, true);
				PLAYER::SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(PLAYER::PLAYER_ID(), 0.5f);
				if (Global_1312416.f_1 == 0 || Global_1312416.f_2 == 1)
				{
					NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(1, 0);
				}
			}
			NETWORK::_0x1B857666604B1A74(1);
			NETWORK::NETWORK_SET_FRIENDLY_FIRE_OPTION(0);
		}
	}
}

void func_659(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 0))
		{
			Global_2458997 = func_188(PLAYER::PLAYER_ID());
			if (Global_2458997 == -1)
			{
				Global_2458997 = Global_1574409.f_4;
			}
			if (func_680(Global_2458997) == 0)
			{
				if (func_679(1) > 0)
				{
					func_678(26, -1);
				}
			}
			if (func_244())
			{
				func_611(0);
				func_642();
			}
			if (func_261(0))
			{
				iVar1 = func_262(2469, -1, 0);
				MISC::CLEAR_BIT(&iVar1, 0);
				func_642();
			}
			if (func_261(func_204(func_188(PLAYER::PLAYER_ID()))))
			{
				iVar1 = func_262(2469, -1, 0);
				MISC::CLEAR_BIT(&iVar1, func_204(func_188(PLAYER::PLAYER_ID())));
				func_642();
			}
			if (func_641())
			{
				func_642();
			}
			MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 0))
	{
		if ((!func_226() && !func_677()) && !func_676())
		{
			Global_2458997 = -1;
			func_600(26, -1);
		}
		else if (func_680(Global_2458997) == 0)
		{
			iVar0 = func_662(1);
			if (iVar0 > 0)
			{
				func_660(joaat("mpply_fmevn_cheat_end"), iVar0);
				func_480(1929, 1, -1);
				func_660(joaat("mpply_activity_ended"), 1);
			}
		}
		else if (func_602(26, -1))
		{
			Global_2458997 = -1;
			func_600(26, -1);
		}
		MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 0);
	}
}

void func_660(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_464(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_661(iParam0))
	{
		func_462(iParam0, iVar0);
	}
	else
	{
		func_466(iParam0, iVar0);
	}
}

int func_661(int iParam0)
{
	if (Global_1368092)
	{
		switch (iParam0)
		{
			case joaat("mpply_crew_0_id"):
			case joaat("mpply_crew_1_id"):
			case joaat("mpply_crew_2_id"):
			case joaat("mpply_crew_3_id"):
			case joaat("mpply_crew_4_id"):
			case joaat("mpply_crew_local_xp_0"):
			case joaat("mpply_crew_local_xp_1"):
			case joaat("mpply_crew_local_xp_2"):
			case joaat("mpply_crew_local_xp_3"):
			case joaat("mpply_crew_local_xp_4"):
			case joaat("mpply_became_cheater_num"):
			case joaat("mpply_friendly"):
			case joaat("mpply_offensive_language"):
			case joaat("mpply_griefing"):
			case joaat("mpply_helpful"):
			case joaat("mpply_offensive_tagplate"):
			case joaat("mpply_offensive_ugc"):
				return 1;
				break;
			}
	}
	return 0;
}

int func_662(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_2457883 == 0)
	{
		return 0;
	}
	if (func_676())
	{
		if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || (func_675() || func_673()))
		{
			Global_2456834 = 1;
		}
	}
	Global_2457883 = 0;
	if (Global_1315680)
	{
		iVar0 = 1;
	}
	if (Global_2456834)
	{
		iVar0 = 1;
	}
	if (Global_2456833)
	{
		iVar0 = 1;
	}
	if (func_672(Global_103583.f_1, 32))
	{
		iVar0 = 1;
	}
	if (Global_2456759)
	{
		iVar0 = 1;
	}
	if (func_671(512))
	{
		iVar0 = 1;
	}
	if (func_670(128))
	{
		iVar0 = 1;
	}
	if (Global_1315704 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_166())
	{
		iVar0 = 0;
	}
	if (Global_2457322)
	{
		iVar0 = 2;
	}
	if (iParam0 == 0)
	{
		if (!func_668())
		{
			if (Global_4456448.f_122948 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_15(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_667())
	{
		iVar0 = 0;
	}
	if ((Global_2456834 || Global_2456833) || Global_1315680)
	{
		if (func_673())
		{
			iVar0 = 0;
		}
	}
	Global_2457322 = 0;
	Global_2456833 = 0;
	Global_2456834 = 0;
	Global_1315680 = 0;
	Global_2456759 = 0;
	func_665(&(Global_103583.f_1), 32);
	func_664(512);
	func_663(128);
	return iVar0;
}

void func_663(int iParam0)
{
	Global_103640 = (Global_103640 - (Global_103640 && iParam0));
}

void func_664(int iParam0)
{
	Global_103641 = (Global_103641 - (Global_103641 && iParam0));
}

void func_665(var uParam0, int iParam1)
{
	func_666(uParam0, iParam1);
}

void func_666(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_667()
{
	if (((Global_1574329 || Global_1574300) || func_15(PLAYER::PLAYER_ID(), 0)) || func_567())
	{
		return 1;
	}
	return 0;
}

int func_668()
{
	switch (func_669())
	{
		case 15:
		case 14:
		case 11:
		case 13:
		case 12:
		case 122:
			return 1;
		
		default:
	}
	return 0;
}

int func_669()
{
	return Global_2447954.f_1.f_2819;
}

bool func_670(int iParam0)
{
	return (Global_103640 && iParam0) != 0;
}

bool func_671(int iParam0)
{
	return (Global_103641 && iParam0) != 0;
}

bool func_672(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_673()
{
	if (func_680(Global_2458997))
	{
		return 0;
	}
	if (func_674(PLAYER::PLAYER_ID(), 146))
	{
		return 1;
	}
	return 0;
}

int func_674(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/] == iParam1)
	{
		return func_233(iParam0);
	}
	return 0;
}

int func_675()
{
	if (func_680(Global_2458997))
	{
		return 0;
	}
	if (func_233(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_676()
{
	return MISC::IS_BIT_SET(Global_1312423, 0);
}

bool func_677()
{
	return Global_1312823;
}

void func_678(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == -1)
	{
		iParam1 = func_17();
	}
	switch (iParam0)
	{
		case 0:
			STATS::_0x723C1CE13FBFDB67(0, iParam1);
			break;
		
		default:
			iVar1 = func_601(iParam1);
			iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
			if (!MISC::IS_BIT_SET(iVar0, iParam0))
			{
				MISC::SET_BIT(&iVar0, iParam0);
				STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
			}
			break;
	}
}

int func_679(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 2;
	iVar1 = 0;
	if (Global_1315704 == 1 && iVar1 == 0)
	{
		iVar0 = 0;
	}
	if (func_166())
	{
		iVar0 = 0;
	}
	if (iParam0 == 0)
	{
		if (!func_668())
		{
			if (Global_4456448.f_122948 == 0)
			{
				iVar0 = 0;
			}
		}
	}
	if (func_15(PLAYER::PLAYER_ID(), 0))
	{
		iVar0 = 0;
	}
	if (func_667())
	{
		iVar0 = 0;
	}
	Global_2457883 = 1;
	return iVar0;
}

int func_680(int iParam0)
{
	switch (iParam0)
	{
		case 131:
			if (Global_262145.f_10730)
			{
				return 1;
			}
			break;
		
		case 132:
			if (Global_262145.f_10732)
			{
				return 1;
			}
			break;
		
		case 133:
			if (Global_262145.f_10729)
			{
				return 1;
			}
			break;
		
		case 136:
			if (Global_262145.f_10733)
			{
				return 1;
			}
			break;
		
		case 138:
			if (Global_262145.f_10734)
			{
				return 1;
			}
			break;
		
		case 139:
			if (Global_262145.f_10735)
			{
				return 1;
			}
			break;
		
		case 129:
			if (Global_262145.f_10731)
			{
				return 1;
			}
			break;
		
		case 140:
			if (Global_262145.f_10736)
			{
				return 1;
			}
			break;
		
		case 141:
			if (Global_262145.f_10737)
			{
				return 1;
			}
			break;
		
		case 144:
			if (Global_262145.f_10738)
			{
				return 1;
			}
			break;
		
		case 146:
			if (Global_262145.f_10739)
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_681(int iParam0)
{
	Global_1627537[PLAYER::PLAYER_ID() /*532*/] = iParam0;
}

void func_682(int iParam0)
{
	Global_2458119 = iParam0;
}

void func_683(int iParam0)
{
	if (func_198())
	{
		return;
	}
	switch (iParam0)
	{
		case 1:
			if (!MISC::IS_BIT_SET(iLocal_102, 0))
			{
				if ((((func_685(60000) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_402()) && !HUD::IS_PAUSE_MENU_ACTIVE()) && func_419(0, 1, 1, 1))
				{
					if (!func_719())
					{
						func_684("UW_HELP1", func_610(), func_609(1), 30000);
					}
					else
					{
						func_684("UW_HELP1C", func_610(), func_609(1), 30000);
					}
					func_417(0);
					AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Start_Text", "GTAO_FM_Events_Soundset", false);
					MISC::SET_BIT(&iLocal_102, 0);
				}
			}
			break;
	}
}

void func_684(char* sParam0, char* sParam1, int iParam2, int iParam3)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam3);
}

bool func_685(int iParam0)
{
	return MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Global_2413422, NETWORK::GET_NETWORK_TIME())) > iParam0;
}

void func_686()
{
	int iVar0;
	
	MISC::CLEAR_BIT(&iLocal_103, 15);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_687(iVar0);
		iVar0++;
	}
	if (MISC::IS_BIT_SET(iLocal_103, 15))
	{
		if (!MISC::IS_BIT_SET(Global_1574409.f_1, 15))
		{
			MISC::SET_BIT(&(Global_1574409.f_1), 15);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1574409.f_1, 15))
	{
		MISC::CLEAR_BIT(&(Global_1574409.f_1), 15);
	}
}

void func_687(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iParam0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 0))
		{
			if (Local_98.f_241 == 0)
			{
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 0))
		{
			if (!func_198())
			{
				if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (!MISC::IS_BIT_SET(iLocal_103, 15))
						{
							if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]))
							{
								MISC::SET_BIT(&iLocal_103, 15);
							}
						}
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 0))
						{
							if (func_691("UW_HELP2", func_610()) || func_691("UW_HELP2C", func_610()))
							{
								HUD::CLEAR_HELP(1);
							}
							if (!func_408(PLAYER::PLAYER_ID()))
							{
								func_615(1);
							}
							iVar0 = func_690(PLAYER::PLAYER_PED_ID(), 0);
							if (func_608("UW_HELP1", func_610(), func_609(1)) || func_608("UW_HELP1C", func_610(), func_609(1)))
							{
								HUD::CLEAR_HELP(1);
							}
							if (Local_98.f_463 != -1)
							{
								if (iVar0 > (Local_98.f_463 - 2))
								{
									iVar0 = (Local_98.f_463 - 2);
									if (iVar0 < -1)
									{
										iVar0 = -1;
									}
								}
							}
							MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar0 + 1));
							MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
							Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = iParam0;
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, true);
							func_190();
							iLocal_584 = iVar0;
						}
						else if (Local_98.f_241 == 0)
						{
							if (!MISC::IS_BIT_SET(iLocal_102, 1))
							{
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_419(0, 1, 1, 1))
										{
											if (!func_719())
											{
												func_689("UW_HELP2", func_610(), 30000);
											}
											else
											{
												func_689("UW_HELP2C", func_610(), 30000);
											}
											func_417(1);
											MISC::SET_BIT(&iLocal_102, 1);
										}
									}
								}
							}
							if (!func_244())
							{
								if (MISC::IS_BIT_SET(iLocal_103, 2))
								{
									MISC::CLEAR_BIT(&iLocal_103, 2);
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
								{
									if (!MISC::IS_BIT_SET(iLocal_102, 4))
									{
										if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
										{
											MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
										}
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0))
										{
											if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 1)) < 2500f)
											{
												if (func_419(0, 1, 1, 1))
												{
													if (!func_719())
													{
														func_418("UW_COPS", 30000);
													}
													else
													{
														func_418("UW_COPSC", 30000);
													}
													func_417(1);
													MISC::SET_BIT(&iLocal_102, 4);
												}
											}
										}
									}
									else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 1)) > 10000f)
									{
										MISC::CLEAR_BIT(&iLocal_102, 4);
									}
								}
								else
								{
									if (MISC::IS_BIT_SET(iLocal_102, 4))
									{
										MISC::CLEAR_BIT(&iLocal_102, 4);
									}
									if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
									{
										MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
									}
								}
							}
							else
							{
								if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
								{
									MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
								}
								if (!MISC::IS_BIT_SET(iLocal_103, 2))
								{
									if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 1)) < 2500f)
									{
										if (func_419(0, 1, 1, 1))
										{
											if (!func_719())
											{
												func_418("UW_PASSMD", 30000);
											}
											else
											{
												func_418("UW_PASSMD", 30000);
											}
											func_417(1);
											MISC::SET_BIT(&iLocal_103, 2);
										}
									}
								}
							}
						}
					}
				}
				else
				{
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 == 0)
					{
						if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 0))
							{
								iVar2 = 0;
								while (iVar2 < Local_98.f_28)
								{
									if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, (0 + iVar2)))
									{
										func_8();
										MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iVar2));
									}
									iVar2++;
								}
								if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
								{
									MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
								}
								if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 != -1)
								{
									Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
								}
								if (func_653("UW_TIMEL"))
								{
									HUD::CLEAR_HELP(1);
								}
								if (func_653("UW_TIMELA"))
								{
									HUD::CLEAR_HELP(1);
								}
								if (func_408(PLAYER::PLAYER_ID()))
								{
									func_615(0);
								}
								PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 398, false);
							}
							else
							{
								if (Local_98.f_241 == 0 && !MISC::IS_BIT_SET(Local_98.f_3, 4))
								{
									iVar0 = func_690(PLAYER::PLAYER_PED_ID(), 0);
									if (Local_98.f_463 != -1)
									{
										if (iVar0 > (Local_98.f_463 - 2))
										{
											iVar0 = (Local_98.f_463 - 2);
										}
									}
									if (iVar0 != iLocal_584)
									{
										MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1), iParam0);
										MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), (0 + iLocal_584 + 1));
									}
								}
								bVar1 = false;
								if (func_263())
								{
									if (Local_98.f_413 > -1)
									{
										iVar3 = (Local_98.f_413 - func_124(&(Local_98.f_326), 0, 0));
										if (iVar3 < 2000)
										{
											bVar1 = true;
										}
									}
								}
								func_688(bVar1);
								if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0])) == joaat("rhino"))
								{
									VEHICLE::_0x32CAEDF24A583345(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]));
								}
								if (!func_21(&uLocal_116))
								{
									func_19(&uLocal_116, 0, 0);
								}
								else if (func_18(&uLocal_116, 2000, 0))
								{
									if (MISC::IS_BIT_SET(Local_98.f_3, 9) || !func_719())
									{
										if (func_653("UW_MINV"))
										{
										}
										if (!MISC::IS_BIT_SET(iLocal_102, 5))
										{
											if (Local_98.f_28 > 1 || (Local_98.f_28 == 1 && func_110() > 1))
											{
												if (func_21(&(Local_98.f_326)))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														if (func_110() > 1)
														{
															func_418("UW_TIMELA", 30000);
														}
														else
														{
															func_418("UW_TIMEL", 30000);
														}
														func_417(1);
														MISC::SET_BIT(&iLocal_102, 5);
													}
												}
											}
										}
									}
									else if (func_719())
									{
										if (!MISC::IS_BIT_SET(Local_98.f_3, 9))
										{
											if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0])) != joaat("valkyrie"))
											{
												if (!MISC::IS_BIT_SET(iLocal_102, 14))
												{
													if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
													{
														func_418("UW_MINV", 30000);
														func_417(1);
														MISC::SET_BIT(&iLocal_102, 14);
													}
												}
											}
										}
									}
								}
							}
						}
					}
					if (Local_98.f_241 == 0)
					{
						if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0])) == joaat("valkyrie"))
						{
							if (!func_653("UW_VALK") && !func_653("UW_VALKC"))
							{
								HUD::CLEAR_ALL_HELP_MESSAGES();
								if (MISC::IS_BIT_SET(iLocal_102, 8))
								{
									MISC::CLEAR_BIT(&iLocal_102, 8);
								}
							}
							if (!MISC::IS_BIT_SET(iLocal_102, 8))
							{
								if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									iVar6 = 0;
									iVar4 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0])) + 1;
									iVar5 = 0;
									while (iVar5 < iVar4)
									{
										if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), (iVar5 - 1), 0))
										{
											iVar6++;
										}
										iVar5++;
									}
									if (iVar6 == 1)
									{
										if (!func_719())
										{
											func_418("UW_VALK", 30000);
										}
										else
										{
											func_418("UW_VALKC", 30000);
										}
										func_417(1);
										MISC::SET_BIT(&iLocal_102, 8);
									}
									if (!MISC::IS_BIT_SET(iLocal_102, 8))
									{
										if (func_719())
										{
											iVar7 = 0;
											iVar7 = 0;
											while (iVar7 < 4)
											{
												if (!bVar8)
												{
													if (iVar7 != iParam0)
													{
														iVar5 = 0;
														iVar6 = 0;
														if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar7]))
														{
															if (func_107(Local_98.f_7[iVar7]))
															{
																iVar5 = 0;
																while (iVar5 < iVar4)
																{
																	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar7]), (iVar5 - 1), 0))
																	{
																		iVar6++;
																	}
																	iVar5++;
																}
																if (iVar6 > 1)
																{
																	bVar8 = true;
																}
															}
														}
													}
												}
												iVar7++;
											}
											if (!bVar8)
											{
												func_418("UW_VALKC", 30000);
												func_417(1);
												MISC::SET_BIT(&iLocal_102, 8);
											}
										}
									}
								}
							}
						}
					}
					if (Local_98.f_241 == 1)
					{
						if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1, iParam0))
						{
							if (!MISC::IS_BIT_SET(iLocal_102, 6))
							{
								if (func_107(Local_98.f_7[iParam0]))
								{
									if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
									{
										if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iParam0])))
										{
											if (!MISC::IS_BIT_SET(iLocal_102, 7))
											{
												if ((PAD::IS_CONTROL_JUST_PRESSED(0, 75) || PAD::IS_CONTROL_PRESSED(0, 75)) || PAD::IS_DISABLED_CONTROL_PRESSED(0, 75))
												{
													MISC::SET_BIT(&iLocal_102, 7);
												}
											}
											if (MISC::IS_BIT_SET(iLocal_102, 7))
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
												{
													if (func_719())
													{
														func_418("UW_EXITVC", 30000);
													}
													else
													{
														func_418("UW_EXITV", 30000);
													}
													func_417(1);
													MISC::SET_BIT(&iLocal_102, 6);
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
			else
			{
				iVar10 = 0;
				while (iVar10 < 4)
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iVar10]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_98.f_7[iVar10]), 0))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_98.f_7[iVar10]), 0))
							{
								bVar11 = true;
							}
						}
					}
					iVar10++;
				}
				if (bVar11)
				{
					if (func_261(0))
					{
						iVar9 = func_262(2469, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 0);
						func_474(2469, iVar9, -1, 1, 0);
						func_642();
						if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
					if (func_261(8))
					{
						iVar9 = func_262(2469, -1, 0);
						MISC::CLEAR_BIT(&iVar9, 8);
						func_474(2469, iVar9, -1, 1, 0);
						func_642();
						if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 9))
						{
							MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 9);
						}
					}
				}
				else
				{
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
					{
						Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 = 0;
					}
					if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 12))
					{
						MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 12);
					}
				}
				if (!MISC::IS_BIT_SET(iLocal_103, 14))
				{
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (func_107(Local_98.f_7[iParam0]))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1), ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iParam0]), 1)) < 2500f)
							{
								if (func_419(0, 1, 1, 1))
								{
									if (!func_253(129, 0, 0))
									{
										if (!func_719())
										{
											func_418("UW_TUT", -1);
										}
										else
										{
											func_418("UW_TUTC", -1);
										}
										func_417(1);
										MISC::SET_BIT(&iLocal_103, 14);
									}
									else
									{
										if (!func_719())
										{
											func_418("UW_HIDE", -1);
										}
										else
										{
											func_418("UW_HIDEC", -1);
										}
										func_417(1);
										MISC::SET_BIT(&iLocal_103, 14);
									}
								}
							}
						}
					}
				}
			}
			if (func_820(PLAYER::PLAYER_ID(), 1, 1) && Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_1 != 0)
			{
				if (!MISC::IS_BIT_SET(Global_2512808.f_4557, 1))
				{
					MISC::SET_BIT(&(Global_2512808.f_4557), 1);
				}
			}
			else if (MISC::IS_BIT_SET(Global_2512808.f_4557, 1))
			{
				MISC::CLEAR_BIT(&(Global_2512808.f_4557), 1);
			}
		}
	}
}

void func_688(bool bParam0)
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 92, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 91, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 65, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 105, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 114, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 107, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 110, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 89, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 87, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 88, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 113, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 115, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 116, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 117, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 118, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 119, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 51, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 47, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
}

void func_689(char* sParam0, char* sParam1, int iParam2)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, false, iParam2);
}

int func_690(int iParam0, int iParam1)
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
					iVar3 = -1;
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

int func_691(char* sParam0, char* sParam1)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_692()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_98.f_7[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_7[iVar0]))
		{
			iVar1 = NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				ENTITY::_SET_ENTITY_PROOF_UNK(iVar1, 1);
			}
		}
		iVar0++;
	}
}

void func_693(vector3 vParam0)
{
	Global_2391049 = { vParam0 };
	Global_2391052 = 1;
}

void func_694()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPT::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case 182:
				func_710(iVar0);
				break;
			
			case 171:
				func_695(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_695(int iParam0)
{
	int iVar0;
	
	SCRIPT::GET_EVENT_DATA(1, iParam0, &iVar0, 2);
	switch (iVar0)
	{
		case 438200710:
			func_709(iParam0);
			break;
		
		case -894214710:
			func_708(iParam0);
			break;
		
		case 1909073260:
			func_707(iParam0);
			break;
		
		case 1549972813:
			func_706(iParam0);
			break;
		
		case 726170480:
			func_705(iParam0);
			break;
		
		case 437414358:
			func_702(iParam0);
			break;
		
		case -2113735926:
			func_696(iParam0);
			break;
	}
}

void func_696(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar4 = vVar0.z;
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_73[iVar4]))
		{
			return;
		}
		if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar4))
		{
			if (!MISC::IS_BIT_SET(Local_98.f_271, iVar4))
			{
				if (func_98(iVar4))
				{
					if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_73[iVar4]), 0))
					{
						if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_98.f_73[iVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (NETWORK::_0x83660B734994124D(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_98.f_73[iVar4]), &uVar3))
					{
						bVar6 = true;
					}
				}
				else if (!func_719())
				{
					if (Local_98.f_465[0 /*4*/].f_1 > 0)
					{
						iVar7 = PLAYER::INT_TO_PLAYERINDEX(Local_98.f_465[0 /*4*/].f_2);
						if (iVar7 != func_26())
						{
							if (iVar7 == PLAYER::PLAYER_ID())
							{
								bVar6 = true;
							}
						}
					}
					else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[0]))
					{
						if (func_107(Local_98.f_7[0]))
						{
							iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[0]), -1, 0);
							if (iVar9 != 0)
							{
								if (PED::IS_PED_A_PLAYER(iVar9))
								{
									iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
									if (iVar8 == PLAYER::PLAYER_ID())
									{
										bVar6 = true;
									}
								}
							}
						}
					}
				}
			}
		}
		if (bVar6)
		{
			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
			{
				iVar2 = func_701();
				iVar10 = ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iVar4]));
				iVar5 = iVar4 * 4;
				if (func_700(iVar10))
				{
					iVar1 = func_42(iVar10);
					iVar12 = iVar5;
					while (iVar12 <= (iVar5 + (iVar1 - 1)))
					{
						if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar12]) && !MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar12)], func_88(iVar12)))
						{
							iVar11++;
							MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar12)]), func_88(iVar12));
						}
						iVar12++;
					}
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar11);
					iVar2 = (iVar2 * iVar11);
				}
				else
				{
					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
				}
				if (Local_99.f_11 == 0)
				{
					Local_99.f_11 = NETWORK::_GET_POSIX_TIME();
				}
				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
				{
					Local_99.f_7 = (Local_99.f_7 + iVar2);
					func_698(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
					func_697();
				}
			}
			MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar4);
		}
	}
}

void func_697()
{
	if (!func_21(&uLocal_573) || (func_21(&uLocal_573) && func_18(&uLocal_573, 2000, 0)))
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Kill_List_Counter", "GTAO_FM_Events_Soundset", false);
		func_104(&uLocal_573);
		func_19(&uLocal_573, 0, 0);
	}
}

var func_698(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_459(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

int func_699()
{
	if (func_719())
	{
		return Global_262145.f_10655;
	}
	return Global_262145.f_10594;
}

bool func_700(int iParam0)
{
	return (((iParam0 == joaat("insurgent") || iParam0 == joaat("lazer")) || iParam0 == joaat("buzzard")) || iParam0 == joaat("mesa3"));
}

int func_701()
{
	if (func_719())
	{
		return Global_262145.f_10654;
	}
	return Global_262145.f_10593;
}

void func_702(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar4 = vVar0.z;
		if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar4))
		{
			if (!MISC::IS_BIT_SET(Local_98.f_271, iVar4))
			{
				if (func_704(iVar4))
				{
					bVar6 = true;
				}
				else if (!func_703(iVar4))
				{
					if (func_98(iVar4))
					{
						if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_VEH(Local_98.f_73[iVar4]), 0))
						{
							if (NETWORK::_NETWORK_GET_DESROYER_OF_ENTITY(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_98.f_73[iVar4]), &uVar3))
							{
								bVar6 = true;
							}
						}
						else if (NETWORK::_0x83660B734994124D(PLAYER::PLAYER_ID(), NETWORK::NET_TO_VEH(Local_98.f_73[iVar4]), &uVar3))
						{
							bVar6 = true;
						}
					}
					else if (!func_719())
					{
						if (Local_98.f_465[0 /*4*/].f_1 > 0)
						{
							iVar7 = PLAYER::INT_TO_PLAYERINDEX(Local_98.f_465[0 /*4*/].f_2);
							if (iVar7 != func_26())
							{
								if (iVar7 == PLAYER::PLAYER_ID())
								{
									bVar6 = true;
								}
							}
						}
						else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[0]))
						{
							if (func_107(Local_98.f_7[0]))
							{
								iVar9 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[0]), -1, 0);
								if (iVar9 != 0)
								{
									if (PED::IS_PED_A_PLAYER(iVar9))
									{
										iVar8 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9);
										if (iVar8 == PLAYER::PLAYER_ID())
										{
											bVar6 = true;
										}
									}
								}
							}
						}
					}
				}
				if (bVar6)
				{
					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
					{
						iVar1 = func_42(joaat("savage"));
						iVar5 = iVar4 * 4;
						iVar11 = 0;
						iVar10 = iVar5;
						while (iVar10 <= (iVar5 + (iVar1 - 1)))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar10]) && !MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10)], func_88(iVar10)))
							{
								iVar11++;
								MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10)]), func_88(iVar10));
							}
							iVar10++;
						}
						Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar11);
						iVar2 = (iVar2 * iVar11);
						if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
						{
							iVar2 = func_701();
							iVar2 = (iVar2 * iVar1);
							Local_99.f_7 = (Local_99.f_7 + iVar2);
							func_698(0, "", -875716015, 153786435, iVar2, 1, -1, 0);
							func_697();
							if (Local_99.f_11 == 0)
							{
								Local_99.f_11 = NETWORK::_GET_POSIX_TIME();
							}
						}
						MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar4);
					}
				}
			}
		}
	}
}

int func_703(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_101[iVar0 /*18*/].f_11[iParam0] > 0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_704(int iParam0)
{
	int iVar0;
	
	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iParam0] == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::_NETWORK_GET_NUM_PARTICIPANTS_HOST())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (iVar0 != NETWORK::PARTICIPANT_ID_TO_INT())
			{
				if (Local_101[iVar0 /*18*/].f_11[iParam0] > Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iParam0])
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

void func_705(int iParam0)
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (NETWORK::NETWORK_GET_HOST_OF_SCRIPT("am_kill_list", -1, 0) != func_26())
		{
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			MISC::SET_BIT(&(Local_98.f_464), vVar0.z);
		}
	}
}

void func_706(int iParam0)
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		MISC::SET_BIT(&uLocal_560, vVar0.z);
	}
}

void func_707(int iParam0)
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		MISC::SET_BIT(&uLocal_561, vVar0.z);
	}
}

void func_708(int iParam0)
{
	vector3 vVar0;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(vVar0.z)], func_88(vVar0.z)))
		{
			MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(vVar0.z)]), func_88(vVar0.z));
		}
	}
}

void func_709(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		iVar1 = vVar0.z;
		if (MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
		{
			MISC::CLEAR_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar1);
		}
	}
}

void func_710(int iParam0)
{
	struct<4> Var0;
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
	var uVar12;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 11))
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_98.f_271, iVar1))
				{
					if (ENTITY::DOES_ENTITY_EXIST(Var0))
					{
						if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
						{
							if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_73[iVar1]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_98.f_73[iVar1])))
								{
									if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_98.f_73[iVar1]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
										{
											if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
											{
												if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1) == PLAYER::PLAYER_PED_ID())
												{
													if (Var0.f_3)
													{
														iVar4 = ENTITY::GET_ENTITY_MODEL(Var0);
														if (Local_98.f_27 == joaat("hydra"))
														{
															if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
															{
																iVar7 = func_701();
																if (func_700(iVar4))
																{
																	iVar2 = func_42(iVar4);
																	Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																	iVar7 = (iVar7 * iVar2);
																}
																else
																{
																	Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																}
																if (Local_99.f_11 == 0)
																{
																	Local_99.f_11 = NETWORK::_GET_POSIX_TIME();
																}
																if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
																{
																	Local_99.f_7 = (Local_99.f_7 + iVar7);
																	func_698(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																	func_697();
																}
															}
															MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar1);
														}
														else if (iVar4 == joaat("buzzard"))
														{
															iVar9 = -1;
															iVar9 = -1;
															while (iVar9 <= 3)
															{
																iVar6 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_73[iVar1]), iVar9, 0);
																if (iVar6 != 0)
																{
																	iVar8 = func_711(iVar6);
																	if (iVar8 > -1)
																	{
																		if (!MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar8)], func_88(iVar8)))
																		{
																			if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar8)], func_88(iVar8)))
																			{
																				MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar8)]), func_88(iVar8));
																				iVar7 = func_701();
																				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
																				{
																					Local_99.f_7 = (Local_99.f_7 + iVar7);
																					func_698(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_697();
																				}
																				if (HUD::DOES_PED_HAVE_AI_BLIP(NETWORK::NET_TO_PED(Local_98.f_48[iVar8])))
																				{
																					func_90(&(Local_110[iVar8 /*8*/]));
																				}
																			}
																		}
																	}
																}
																iVar9++;
															}
															MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar1);
														}
													}
													else if (!func_107(Local_98.f_73[iVar1]))
													{
													}
												}
												else if (Var0.f_3)
												{
													if (PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1)))
													{
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
			}
			iVar1++;
		}
		if (Local_98.f_27 != joaat("hydra"))
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (!MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar1)], func_88(iVar1)))
				{
					if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar1)], func_88(iVar1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_98.f_48[iVar1])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_98.f_48[iVar1]))
										{
											if (Var0.f_3)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar5))
														{
															if (iVar5 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_3)
																{
																	iVar7 = func_701();
																	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
																		{
																			func_698(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			Local_99.f_7 = (Local_99.f_7 + iVar7);
																			func_697();
																		}
																	}
																	if (Local_99.f_11 == 0)
																	{
																		Local_99.f_11 = NETWORK::_GET_POSIX_TIME();
																	}
																	MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar1)]), func_88(iVar1));
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
						}
					}
				}
				if (iVar1 < 5)
				{
					if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6, iVar1))
					{
						if (!MISC::IS_BIT_SET(Local_98.f_271, iVar1))
						{
							if (ENTITY::DOES_ENTITY_EXIST(Var0))
							{
								if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
								{
									if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_73[iVar1]))
									{
										if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_98.f_73[iVar1])))
										{
											if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_VEH(Local_98.f_73[iVar1]))
											{
												if (ENTITY::GET_ENTITY_MODEL(Var0) == joaat("savage"))
												{
													if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar1)], func_88(iVar1)))
													{
														if (Var0.f_3)
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar5))
																	{
																		if (iVar5 == PLAYER::PLAYER_PED_ID())
																		{
																			if (Var0.f_3)
																			{
																				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																				{
																					iVar2 = func_42(joaat("savage"));
																					Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																					iVar7 = func_701();
																					iVar7 = (iVar7 * iVar2);
																					if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
																					{
																						func_698(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																						Local_99.f_7 = (Local_99.f_7 + iVar7);
																						func_697();
																						if (Local_99.f_11 == 0)
																						{
																							Local_99.f_11 = NETWORK::_GET_POSIX_TIME();
																						}
																					}
																					iVar10 = iVar1 * 4;
																					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10)]), func_88(iVar10));
																					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 1)]), func_88(iVar10 + 1));
																					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 2)]), func_88(iVar10 + 2));
																					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 3)]), func_88(iVar10 + 3));
																					MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar1);
																				}
																			}
																		}
																	}
																	else if (func_704(iVar1))
																	{
																		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																		{
																			iVar2 = func_42(joaat("savage"));
																			Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
																			{
																				iVar7 = func_701();
																				iVar7 = (iVar7 * iVar2);
																				Local_99.f_7 = (Local_99.f_7 + iVar7);
																				func_698(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																				func_697();
																				if (Local_99.f_11 == 0)
																				{
																					Local_99.f_11 = NETWORK::_GET_POSIX_TIME();
																				}
																			}
																			iVar10 = iVar1 * 4;
																			MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10)]), func_88(iVar10));
																			MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 1)]), func_88(iVar10 + 1));
																			MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 2)]), func_88(iVar10 + 2));
																			MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 3)]), func_88(iVar10 + 3));
																			MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar1);
																		}
																	}
																	else if (func_703(iVar1))
																	{
																	}
																	else if (NETWORK::_0x83660B734994124D(iVar11, Var0, &uVar12))
																	{
																		if (iVar11 == PLAYER::PLAYER_ID())
																		{
																			if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																			{
																				iVar2 = func_42(joaat("savage"));
																				Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 = (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 + iVar2);
																				if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
																				{
																					iVar7 = func_701();
																					iVar7 = (iVar7 * iVar2);
																					Local_99.f_7 = (Local_99.f_7 + iVar7);
																					func_698(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																					func_697();
																					if (Local_99.f_11 == 0)
																					{
																						Local_99.f_11 = NETWORK::_GET_POSIX_TIME();
																					}
																				}
																				iVar10 = iVar1 * 4;
																				MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10)]), func_88(iVar10));
																				MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 1)]), func_88(iVar10 + 1));
																				MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 2)]), func_88(iVar10 + 2));
																				MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar10 + 3)]), func_88(iVar10 + 3));
																				MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_6), iVar1);
																			}
																		}
																	}
																}
															}
														}
														else
														{
															if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
															{
																if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
																{
																	iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
																	if (PED::IS_PED_A_PLAYER(iVar5))
																	{
																		if (iVar5 == PLAYER::PLAYER_PED_ID())
																		{
																			iVar3 = NETWORK::_GET_POSIX_TIME();
																			Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_11[iVar1] = iVar3;
																		}
																	}
																}
															}
															if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Var0), 0))
															{
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
					}
				}
				iVar1++;
			}
			iVar1 = 20;
			while (iVar1 <= 23)
			{
				if (!MISC::IS_BIT_SET(Local_98.f_272[func_89(iVar1)], func_88(iVar1)))
				{
					if (!MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar1)], func_88(iVar1)))
					{
						if (ENTITY::DOES_ENTITY_EXIST(Var0))
						{
							if (ENTITY::IS_ENTITY_A_PED(Var0))
							{
								if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar1]))
								{
									if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_VEH(Local_98.f_48[iVar1])))
									{
										if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == NETWORK::NET_TO_PED(Local_98.f_48[iVar1]))
										{
											if (Var0.f_3)
											{
												if (ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
												{
													if (ENTITY::IS_ENTITY_A_PED(Var0.f_1))
													{
														iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
														if (PED::IS_PED_A_PLAYER(iVar5))
														{
															if (iVar5 == PLAYER::PLAYER_PED_ID())
															{
																if (Var0.f_3)
																{
																	if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_17 < 2)
																	{
																		Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8++;
																		if (Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8 <= func_699())
																		{
																			iVar7 = func_701();
																			Local_99.f_7 = (Local_99.f_7 + iVar7);
																			if (Local_99.f_11 == 0)
																			{
																				Local_99.f_11 = NETWORK::_GET_POSIX_TIME();
																			}
																			func_698(0, "", -875716015, 153786435, iVar7, 1, -1, 0);
																			func_697();
																		}
																	}
																	MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar1)]), func_88(iVar1));
																}
															}
														}
													}
												}
												else
												{
													MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_3[func_89(iVar1)]), func_88(iVar1));
												}
											}
										}
									}
								}
							}
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar1]))
				{
				}
				iVar1++;
			}
		}
	}
}

int func_711(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 < 24)
	{
		if (iVar0 == -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar1]))
			{
				if (NETWORK::NET_TO_PED(Local_98.f_48[iVar1]) == iParam0)
				{
					iVar0 = iVar1;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

void func_712()
{
	int iVar0;
	int iVar1;
	
	if (Local_98.f_27 != joaat("hydra"))
	{
		if (iLocal_586 == 0)
		{
			iLocal_586 = 20;
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iLocal_586]))
		{
			if (!func_31(Local_98.f_48[iLocal_586]))
			{
				iVar0 = NETWORK::_0x815F18AD865F057F(NETWORK::NET_TO_PED(Local_98.f_48[iLocal_586]));
				if (iLocal_587[iLocal_586] != iVar0)
				{
					iLocal_587[iLocal_586] = iVar0;
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_98.f_48[iLocal_586], 1);
				}
			}
		}
		iLocal_586++;
		if (iLocal_586 == 23)
		{
			iLocal_586 = 20;
		}
	}
	if (Local_98.f_27 != joaat("hydra") && Local_98.f_27 != joaat("rhino"))
	{
		if (!bLocal_590)
		{
			if (func_96() == 5)
			{
				iVar1 = 0;
				while (iVar1 < 5)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_73[iVar1]))
					{
						if (func_107(Local_98.f_73[iVar1]))
						{
							if (ENTITY::GET_ENTITY_MODEL(NETWORK::NET_TO_VEH(Local_98.f_73[iVar1])) == joaat("savage"))
							{
								NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_98.f_73[iVar1], 1);
								bLocal_590 = true;
							}
						}
					}
					iVar1++;
				}
			}
		}
	}
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_73[iLocal_588]))
	{
		if (func_107(Local_98.f_73[iLocal_588]))
		{
			iVar0 = NETWORK::_0x815F18AD865F057F(NETWORK::NET_TO_PED(Local_98.f_73[iLocal_588]));
			if (iLocal_589[iLocal_588] != iVar0)
			{
				iLocal_589[iLocal_588] = iVar0;
				if (!bLocal_590)
				{
					NETWORK::ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(Local_98.f_73[iLocal_588], 1);
				}
			}
		}
	}
	iLocal_588++;
	if (iLocal_588 == 5)
	{
		iLocal_588 = 0;
	}
}

void func_713()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar9 = -1;
	iVar0 = 0;
	while (iVar0 < 24)
	{
		if (MISC::IS_BIT_SET(iLocal_562, iVar0))
		{
			if (Local_98.f_85[iVar0] != 2)
			{
				MISC::CLEAR_BIT(&iLocal_562, iVar0);
			}
		}
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_48[iVar0]))
		{
			func_717(iVar0);
			if (!func_31(Local_98.f_48[iVar0]))
			{
				switch (Local_98.f_85[iVar0])
				{
					case 1:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_48[iVar0]))
						{
							if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), 0))
							{
								iVar2 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), 0);
								iVar1 = ENTITY::GET_ENTITY_MODEL(iVar2);
								if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar1))
								{
									if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -1273030092) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -1273030092) != 0)
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0) == NETWORK::NET_TO_PED(Local_98.f_48[iVar0]))
										{
											iVar5 = func_27();
											if (iVar5 != func_26())
											{
												iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
												if (!PED::IS_PED_INJURED(iVar6))
												{
													if (func_25(iVar2, iVar6, 1) > 250f)
													{
														vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar6, 1) };
														BRAIN::TASK_HELI_MISSION(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), iVar2, 0, iVar6, vVar3, 4, 50f, 5f, -1f, 0, 100, -1f, 4096);
													}
												}
											}
										}
									}
								}
								else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar1))
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0) == NETWORK::NET_TO_PED(Local_98.f_48[iVar0]))
									{
										iVar11 = 1;
										iVar10 = (iVar0 / 4);
									}
									if ((BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -1273030092) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -1273030092) != 0) || ((iVar11 && iVar10 < 5) && iLocal_104[iVar10] != Local_98.f_110[iVar10]))
									{
										if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0) == NETWORK::NET_TO_PED(Local_98.f_48[iVar0]))
										{
											iVar9 = Local_98.f_110[iVar10];
											if (iVar9 > -1)
											{
												iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar9);
												if (iVar5 != func_26())
												{
													iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
													if (!PED::IS_PED_INJURED(iVar6))
													{
														vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar6, 1) };
														BRAIN::TASK_PLANE_MISSION(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), iVar2, 0, iVar6, vVar3, 4, 50f, 5f, -1f, 100, 50, 1);
														if (iLocal_104[iVar10] != Local_98.f_110[iVar10])
														{
															iLocal_104[iVar10] = Local_98.f_110[iVar10];
														}
													}
												}
											}
										}
									}
								}
								else if (((BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -1273030092) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -1273030092) != 0) && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), 1306903184) != 0) && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), 1306903184) != 1)
								{
									if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1, 0) == NETWORK::NET_TO_PED(Local_98.f_48[iVar0]))
									{
										iVar5 = func_27();
										if (iVar5 != func_26())
										{
											iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
											if (!PED::IS_PED_INJURED(iVar6))
											{
												fVar7 = func_25(iVar2, iVar6, 1);
												if (fVar7 > 500f)
												{
													BRAIN::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), ENTITY::GET_ENTITY_COORDS(iVar6, 1), 2f, iVar2, true, 786469, -1f, 0f, 20f, 0, 30f, 4f);
												}
												else if (fVar7 > 250f)
												{
													BRAIN::TASK_VEHICLE_MISSION_PED_TARGET(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), iVar2, iVar6, 4, 30f, 786469, 5f, 5f, 1);
												}
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_48[iVar0]))
						{
							if (!func_22())
							{
								if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -1442466670) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -1442466670) != 0)
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), 0))
									{
										if (!MISC::IS_BIT_SET(iLocal_562, iVar0))
										{
											iVar8 = func_716(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), 1133084672);
											if (iVar8 > -1)
											{
												BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), 299f, 0);
											}
											else if (!MISC::IS_BIT_SET(iLocal_562, iVar0))
											{
												func_715(iVar0, func_102(1));
												MISC::SET_BIT(&iLocal_562, iVar0);
											}
										}
									}
									else
									{
										BRAIN::TASK_COMBAT_HATED_TARGETS_AROUND_PED(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), 299f, 0);
									}
								}
							}
						}
						break;
					
					case 3:
						if (BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -251125078) != 1 && BRAIN::GET_SCRIPT_TASK_STATUS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), -251125078) != 0)
						{
							vVar4 = { func_714() };
							BRAIN::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]));
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), true);
							BRAIN::TASK_SMART_FLEE_COORD(NETWORK::NET_TO_PED(Local_98.f_48[iVar0]), vVar4, 10000f, 999999, 0, 0);
						}
						break;
					}
				}
		}
		iVar0++;
	}
}

Vector3 func_714()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
		{
			return ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0);
		}
		iVar0++;
	}
	return Local_98.f_30[0 /*3*/];
}

void func_715(int iParam0, int iParam1)
{
	vector3 vVar0;
	
	vVar0.x = 726170480;
	vVar0.y = PLAYER::PLAYER_ID();
	vVar0.z = iParam0;
	if (!iParam1 == 0)
	{
		SCRIPT::_0xA40CC53DF8E50837(1, &vVar0, 3, iParam1);
	}
}

int func_716(int iParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	vector3 vVar4;
	int iVar5;
	
	iVar0 = -1;
	fVar1 = 1E+09f;
	iVar3 = 0;
	while (iVar3 < 4)
	{
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar3]))
		{
			if (func_107(Local_98.f_7[iVar3]))
			{
				iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(NETWORK::NET_TO_VEH(Local_98.f_7[iVar3]), -1, 0);
				if (!PED::IS_PED_INJURED(iVar5))
				{
					if (PED::IS_PED_A_PLAYER(iVar5))
					{
						vVar4 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iVar3]), 1) };
						fVar2 = func_515(iParam0, vVar4, 1);
						if (fVar2 < fVar1)
						{
							if (fVar2 < fParam1)
							{
								fVar1 = fVar2;
								iVar0 = iVar3;
							}
						}
					}
				}
			}
		}
		iVar3++;
	}
	return iVar0;
}

void func_717(int iParam0)
{
	int iVar0;
	
	return;
	if (!func_31(Local_98.f_48[iParam0]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_98.f_48[iParam0]))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(Local_98.f_48[iParam0])))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(NETWORK::NET_TO_PED(Local_98.f_48[iParam0]), 0);
				if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iVar0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, 0))
					{
						ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_98.f_48[iParam0]), 5, 0);
					}
				}
			}
		}
	}
}

void func_718(vector3 vParam0)
{
	Global_1574409.f_6 = { vParam0 };
}

bool func_719()
{
	return MISC::IS_BIT_SET(Local_98.f_3, 8);
}

void func_720(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam0)
	{
		case 136:
			switch (iParam1)
			{
				case 0:
					func_721("kwUfKUus6EuQyNSL8KpY-w");
					func_721("yMTOFLfO2UKwzKrmgPP7kg");
					func_721("9mGvlJ1Cxk-HxC2zkAwdQg");
					break;
				
				case 2:
					func_721("tP5HSeCA0UiHnkRzakdO2Q");
					func_721("uEkrqoerQEmQ0uZRtp4rkw");
					func_721("xIXaDwts7kKz0sbMnwYlCQ");
					break;
				
				case 3:
					func_721("UOTaXepxrUOUEU7QtfBvGQ");
					break;
				
				case 6:
					func_721("734uySYXUk2ej47Ni5jlZw");
					break;
			}
			break;
		
		case 139:
			switch (iParam1)
			{
				case 1:
					func_721("OZ5hEthzqUSuK_x9YuO4uw");
					break;
				
				case 2:
					func_721("uEkrqoerQEmQ0uZRtp4rkw");
					break;
			}
			break;
		
		case 138:
			switch (iParam1)
			{
				case 2:
					func_721("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 3:
					func_721("uEkrqoerQEmQ0uZRtp4rkw");
					func_721("92t91kL3Wkqvl2Kc82cNSA");
					func_721("43Yoc5jfr0OwGfW9UP5TXA");
					break;
				
				case 5:
					func_721("WfnWlxu780CwC7LLUrLljw");
					break;
				
				case 6:
					func_721("lowxnyELLUCxqy_Q1uslIg");
					break;
				
				case 7:
					func_721("QmlvLMLCwkOvoZlkAstYxw");
					break;
			}
			break;
		
		case 141:
			switch (iParam1)
			{
				case 0:
					func_721("TT4ifq2kgEG6G1fCUYHXSQ");
					break;
			}
			break;
		
		case 134:
			switch (iParam1)
			{
				case 1:
					func_721("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 4:
					func_721("fOfm7nzMLkav0ldcSCNAzA");
					func_721("JMbOeJ2-ak-02KwNLtnOJg");
					break;
				
				case 5:
					func_721("3AAj-muvN0iHI5IMyGlboA");
					break;
				
				case 0:
					func_721("lyrTwqWnP0SqGuK4GdrgDg");
					break;
				
				case 9:
					func_721("Ma78E44OMkGfYPmCPZXUNA");
					func_721("Pqz3l_Dhg0ar0yHiz2wMqQ");
					break;
				
				case 19:
					func_721("ZmoxEY6L60WSR-7I5IUjPg");
					break;
				
				case 10:
					func_721("gxmtJHj2OUWQDt8nNMy3TQ");
					break;
			}
			break;
		
		case 140:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_721("lowxnyELLUCxqy_Q1uslIg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 2:
							func_721("dCWpYaU7CU-Bxz5s2qGjaA");
							break;
					}
					break;
				
				case 2:
					func_721("QmlvLMLCwkOvoZlkAstYxw");
					break;
				
				case 3:
					switch (iParam2)
					{
						case 1:
							func_721("Cl3Gh6-LMkuZ7Z_jPqSE8g");
							break;
						
						case 2:
							func_721("TT4ifq2kgEG6G1fCUYHXSQ");
							break;
					}
					break;
				
				case 4:
					func_721("A0vXbIK2WEmiVSUNYRGpvA");
					switch (iParam2)
					{
						case 2:
							func_721("3AAj-muvN0iHI5IMyGlboA");
							break;
					}
					break;
			}
			break;
		
		case 129:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							func_721("kXry-nXRbEC6ktiopjDDcg");
							break;
						
						case 1:
							func_721("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_721("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_721("fOfm7nzMLkav0ldcSCNAzA");
							func_721("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 1:
					switch (iParam2)
					{
						case 0:
							func_721("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_721("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 2:
					switch (iParam2)
					{
						case 0:
							func_721("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_721("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 3:
					switch (iParam2)
					{
						case 3:
							func_721("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
				
				case 4:
					switch (iParam2)
					{
						case 1:
							func_721("gaJhsFMzFkyl3al5SRa6fQ");
							break;
					}
					break;
				
				case 5:
					switch (iParam2)
					{
						case 1:
							func_721("JCMcBpPl9UWmcdOYFza0Tg");
							break;
						
						case 2:
							func_721("ZmoxEY6L60WSR-7I5IUjPg");
							break;
						
						case 3:
							func_721("fOfm7nzMLkav0ldcSCNAzA");
							func_721("JMbOeJ2-ak-02KwNLtnOJg");
							break;
					}
					break;
				
				case 6:
					switch (iParam2)
					{
						case 0:
							func_721("OZ5hEthzqUSuK_x9YuO4uw");
							break;
						
						case 1:
							func_721("lyrTwqWnP0SqGuK4GdrgDg");
							break;
					}
					break;
				
				case 7:
					switch (iParam2)
					{
						case 0:
							func_721("QmlvLMLCwkOvoZlkAstYxw");
							break;
						
						case 2:
							func_721("yMTOFLfO2UKwzKrmgPP7kg");
							break;
					}
					break;
				
				case 8:
					switch (iParam2)
					{
						case 3:
							func_721("xIXaDwts7kKz0sbMnwYlCQ");
							break;
					}
					break;
			}
			break;
		
		case 131:
			switch (iParam3)
			{
				case 0:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_721("UOTaXepxrUOUEU7QtfBvGQ");
									break;
								
								case 2:
									func_721("xIXaDwts7kKz0sbMnwYlCQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_721("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 2:
									func_721("QmlvLMLCwkOvoZlkAstYxw");
									break;
								
								case 3:
									func_721("gxmtJHj2OUWQDt8nNMy3TQ");
									break;
								
								case 4:
									func_721("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 0:
									func_721("dCWpYaU7CU-Bxz5s2qGjaA");
									break;
								
								case 2:
									func_721("aGBjo2rKi0yMDLl3a2ATGA");
									func_721("yMTOFLfO2UKwzKrmgPP7kg");
									break;
								
								case 3:
									func_721("lhGatLUmgke_87surSFS5g");
									break;
							}
							break;
						
						case 3:
							switch (iParam2)
							{
								case 1:
									func_721("VmS_SI5wSE2LuL9qItQqbw");
									break;
								
								case 4:
									func_721("f2lnL6wZPkGWUowu0yLm1Q");
									func_721("ZmoxEY6L60WSR-7I5IUjPg");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 1:
									func_721("Ma78E44OMkGfYPmCPZXUNA");
									break;
								
								case 2:
									func_721("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
							}
							break;
						
						case 5:
							switch (iParam2)
							{
								case 0:
									func_721("W-OJzHlM-0ym9PsIASYZtw");
									func_721("uEkrqoerQEmQ0uZRtp4rkw");
									break;
								
								case 1:
									func_721("3AAj-muvN0iHI5IMyGlboA");
									break;
								
								case 3:
									func_721("TjGz31AMYE6bGCjAIitu6w");
									func_721("A0vXbIK2WEmiVSUNYRGpvA");
									break;
							}
							break;
						
						case 6:
							switch (iParam2)
							{
								case 2:
									func_721("QmlvLMLCwkOvoZlkAstYxw");
									func_721("BktATxH9R0Wp2x0kWSbqjw");
									break;
								
								case 3:
									func_721("BktATxH9R0Wp2x0kWSbqjw");
									func_721("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 4:
									func_721("f2lnL6wZPkGWUowu0yLm1Q");
									break;
							}
							break;
					}
					break;
				
				case 1:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 1:
									func_721("kXry-nXRbEC6ktiopjDDcg");
									break;
								
								case 3:
									func_721("PY8hdiWoAkudg9SpK8G2xQ");
									break;
							}
							break;
						
						case 1:
							switch (iParam2)
							{
								case 0:
									func_721("TT4ifq2kgEG6G1fCUYHXSQ");
									break;
								
								case 1:
									func_721("9mGvlJ1Cxk-HxC2zkAwdQg");
									break;
								
								case 2:
									func_721("tP5HSeCA0UiHnkRzakdO2Q");
									break;
								
								case 3:
									func_721("kXry-nXRbEC6ktiopjDDcg");
									break;
							}
							break;
						
						case 2:
							switch (iParam2)
							{
								case 3:
									func_721("Cl3Gh6-LMkuZ7Z_jPqSE8g");
									break;
							}
							break;
					}
					break;
				
				case 2:
					switch (iParam1)
					{
						case 0:
							switch (iParam2)
							{
								case 0:
									func_721("Pqz3l_Dhg0ar0yHiz2wMqQ");
									break;
							}
							break;
						
						case 4:
							switch (iParam2)
							{
								case 4:
									func_721("W-OJzHlM-0ym9PsIASYZtw");
									break;
							}
							break;
					}
					break;
			}
			break;
	}
}

void func_721(char* sParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_12, 11))
		{
			if (func_722(&(Global_2359721[iVar1 /*26*/].f_15)) == iVar0)
			{
				if (!MISC::IS_BIT_SET(Global_2359721[iVar1 /*26*/].f_13, 26))
				{
					MISC::SET_BIT(&(Global_2359721[iVar1 /*26*/].f_13), 26);
				}
				return;
			}
		}
		iVar1++;
	}
}

int func_722(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = 0;
	iVar2 = func_147(uParam0);
	if (iVar2 == -1)
	{
		return iVar1;
	}
	switch (uParam0->f_2)
	{
		case 63:
			Var0 = { func_723(uParam0) };
			return Var0.f_1;
		
		case 62:
			return iVar1;
		
		default:
	}
	return iVar1;
}

struct<13> func_723(var uParam0)
{
	struct<13> Var0;
	int iVar1;
	
	Var0.f_2 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_12 = -1;
	iVar1 = func_147(uParam0);
	if (iVar1 == -1)
	{
		return Var0;
	}
	switch (uParam0->f_2)
	{
		case 63:
			return Global_794709.f_98389[iVar1 /*13*/];
		
		case 62:
			return Global_907706.f_18805[iVar1 /*13*/];
		
		default:
	}
	return Var0;
}

void func_724()
{
	int iVar0;
	vector3 vVar1;
	
	if (MISC::IS_BIT_SET(Local_98.f_3, 12))
	{
		func_190();
	}
	if (func_719())
	{
		if (iLocal_556 != Local_98.f_12)
		{
			iLocal_556 = Local_98.f_12;
			func_190();
		}
	}
	if (!func_198())
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_109[iVar0]))
			{
				if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
				{
					if (func_107(Local_98.f_7[iVar0]))
					{
						vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0) };
						if (!func_725(iVar0, vVar1))
						{
							if (!MISC::IS_BIT_SET(Local_98.f_13, iVar0))
							{
								iLocal_109[iVar0] = HUD::ADD_BLIP_FOR_ENTITY(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]));
								HUD::SET_BLIP_SPRITE(iLocal_109[iVar0], 429);
								func_192(&(iLocal_109[iVar0]), 29);
								if (!MISC::IS_BIT_SET(iLocal_102, 20))
								{
									HUD::SET_BLIP_FLASHES(iLocal_109[iVar0], true);
									HUD::SET_BLIP_FLASH_TIMER(iLocal_109[iVar0], 7000);
									MISC::SET_BIT(&iLocal_102, 20);
								}
								HUD::SET_BLIP_PRIORITY(iLocal_109[iVar0], 9);
								if (func_719())
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_109[iVar0], "UW_BLIPC");
								}
								else
								{
									HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_109[iVar0], "UW_BLIP");
								}
								if (!MISC::IS_BIT_SET(iLocal_103, 3))
								{
									HUD::FLASH_MINIMAP_DISPLAY();
									MISC::SET_BIT(&iLocal_103, 3);
								}
							}
						}
					}
				}
			}
			else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
			{
				if (!func_107(Local_98.f_7[iVar0]))
				{
					HUD::REMOVE_BLIP(&(iLocal_109[iVar0]));
				}
				else if (MISC::IS_BIT_SET(Local_98.f_13, iVar0))
				{
					HUD::REMOVE_BLIP(&(iLocal_109[iVar0]));
				}
			}
			else
			{
				HUD::REMOVE_BLIP(&(iLocal_109[iVar0]));
			}
			iVar0++;
		}
	}
	else
	{
		func_190();
	}
}

int func_725(int iParam0, vector3 vParam1)
{
	int iVar0;
	vector3 vVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 != iParam0)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_98.f_7[iVar0]))
			{
				vVar1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_98.f_7[iVar0]), 0) };
				if (func_69(vParam1, vVar1, 0))
				{
					if (HUD::DOES_BLIP_EXIST(iLocal_109[iVar0]))
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

int func_726()
{
	return Local_98;
}

int func_727(int iParam0)
{
	return Local_101[iParam0 /*18*/];
}

void func_728()
{
	if (MISC::IS_BIT_SET(Global_1574409.f_1, 6))
	{
		func_443();
		MISC::CLEAR_BIT(&(Global_1574409.f_1), 6);
	}
	if (!MISC::IS_BIT_SET(Global_1574409.f_1, 7))
	{
		if (MISC::IS_BIT_SET(Global_1574409.f_1, 4) || MISC::IS_BIT_SET(Global_1574409.f_1, 16))
		{
			if (((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_353()) && func_820(PLAYER::PLAYER_ID(), 1, 1))
			{
				MISC::SET_BIT(&(Global_1574409.f_1), 7);
				func_418("FME_PASINT", 30000);
				func_417(1);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574409.f_1, 17))
		{
			if (func_244() && !func_239())
			{
				MISC::CLEAR_BIT(&(Global_1574409.f_1), 17);
				MISC::SET_BIT(&(Global_1574409.f_1), 16);
			}
		}
	}
	if (!MISC::IS_BIT_SET(Global_1574409.f_1, 23))
	{
		if (((((!HUD::IS_RADAR_HIDDEN() && !MISC::IS_BIT_SET(Global_2512808.f_778, 2)) && func_820(PLAYER::PLAYER_ID(), 1, 1)) && !Global_68215) && !Global_53084) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			if (func_751())
			{
				func_418("AMEV_GA_RP", -1);
				if (func_339(PLAYER::PLAYER_ID()) != 200)
				{
					func_417(1);
				}
				MISC::SET_BIT(&(Global_1574409.f_1), 23);
			}
		}
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() && HUD::GET_PAUSE_MENU_STATE() == 15)
	{
		if (func_233(PLAYER::PLAYER_ID()))
		{
			if (!HUD::_0x84698AB38D0C6636(1344549371))
			{
				HUD::_ADD_FRONTEND_MENU_CONTEXT(1344549371);
			}
		}
		else if (HUD::_0x84698AB38D0C6636(1344549371))
		{
			HUD::OBJECT_DECAL_TOGGLE(1344549371);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574409.f_1, 9))
	{
		if ((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_353()) && func_820(PLAYER::PLAYER_ID(), 1, 1)) && !func_201(PLAYER::PLAYER_ID(), 21))
		{
			MISC::CLEAR_BIT(&(Global_1574409.f_1), 9);
			func_750(0);
			func_418("FME_TBL00", -1);
			func_417(1);
		}
	}
	if (func_246(PLAYER::PLAYER_ID()))
	{
		if (!MISC::IS_BIT_SET(Global_1574409.f_1, 18))
		{
			if ((func_201(PLAYER::PLAYER_ID(), 21) && MISC::IS_BIT_SET(Global_1574409.f_1, 20)) && !MISC::IS_BIT_SET(Global_1574409.f_1, 19))
			{
				MISC::SET_BIT(&(Global_1574409.f_1), 18);
			}
		}
		else if (MISC::IS_BIT_SET(Global_1574409.f_1, 18))
		{
			if (((((!HUD::IS_RADAR_HIDDEN() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && !func_353()) && func_820(PLAYER::PLAYER_ID(), 1, 1)) && CAM::IS_SCREEN_FADED_IN()) && !Global_2512808.f_4789)
			{
				MISC::CLEAR_BIT(&(Global_1574409.f_1), 18);
				MISC::SET_BIT(&(Global_1574409.f_1), 19);
				func_418("AMTT_RPAS", -1);
				func_417(1);
			}
		}
	}
	if (((((func_246(PLAYER::PLAYER_ID()) && !func_200(PLAYER::PLAYER_ID())) && func_188(PLAYER::PLAYER_ID()) != 146) && !func_199(PLAYER::PLAYER_ID())) && !func_749(PLAYER::PLAYER_ID())) && !func_739())
	{
		if (func_647(func_188(PLAYER::PLAYER_ID())))
		{
			PLAYER::_0xFAC75988A7D078D3(PLAYER::PLAYER_ID());
		}
		if (!MISC::IS_BIT_SET(Global_1574409.f_1, 22))
		{
			MISC::SET_BIT(&(Global_1574409.f_1), 22);
		}
		if (func_234(PLAYER::PLAYER_ID()) || func_645())
		{
			if (!MISC::IS_BIT_SET(Global_1574409.f_1, 10))
			{
				if (func_737(func_188(PLAYER::PLAYER_ID())))
				{
					if (func_578(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574409.f_1), 9);
					}
					if (!Global_2391045)
					{
						func_441(1);
						MISC::SET_BIT(&(Global_1574409.f_1), 14);
					}
				}
				MISC::SET_BIT(&(Global_1574409.f_1), 10);
			}
		}
		if (func_233(PLAYER::PLAYER_ID()))
		{
			if (!MISC::IS_BIT_SET(Global_1574409.f_1, 11))
			{
				if (!Global_92885.f_8)
				{
					MISC::SET_BIT(&(Global_1574409.f_1), 12);
					func_439(1);
				}
				if (!func_736())
				{
					MISC::SET_BIT(&(Global_1574409.f_1), 13);
					func_646();
				}
				if (!Global_2391045)
				{
					MISC::SET_BIT(&(Global_1574409.f_1), 14);
					if (func_578(0) && !Global_2391045)
					{
						MISC::SET_BIT(&(Global_1574409.f_1), 9);
					}
					func_441(1);
				}
				MISC::SET_BIT(&(Global_1574409.f_1), 11);
			}
		}
		else
		{
			func_734(0);
		}
	}
	else
	{
		func_734(1);
	}
	func_729();
	if (func_644(func_188(PLAYER::PLAYER_ID())) && !MISC::IS_BIT_SET(Global_1574409.f_1, 21))
	{
		MISC::SET_BIT(&(Global_1574409.f_1), 21);
	}
	if ((func_244() && !func_239()) || func_201(PLAYER::PLAYER_ID(), 21))
	{
		if (!MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 10))
		{
			MISC::SET_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 10);
		}
	}
	else if (MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 10))
	{
		MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 10);
	}
}

void func_729()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (func_353())
	{
		iVar2 = 63;
		iVar2 = 0;
		while (iVar2 < 83)
		{
			if (func_512(iVar2))
			{
				iVar0 = iVar2;
				if (iVar0 == 63 || iVar0 >= 81)
				{
					iVar1 = 15000;
				}
				else
				{
					iVar1 = 3000;
				}
				if (MISC::IS_BIT_SET(Global_1574409.f_1, 26))
				{
					MISC::CLEAR_BIT(&(Global_1574409.f_1), 26);
				}
				func_730(iVar0, iVar1);
				iVar2 = 83;
			}
			iVar2++;
		}
	}
	else if (!MISC::IS_BIT_SET(Global_1574409.f_1, 26))
	{
		func_104(&(Global_1574409.f_22));
		MISC::SET_BIT(&(Global_1574409.f_1), 26);
	}
}

void func_730(int iParam0, int iParam1)
{
	if (!func_21(&(Global_1574409.f_22)))
	{
		func_19(&(Global_1574409.f_22), 0, 0);
	}
	else if (func_18(&(Global_1574409.f_22), iParam1, 0))
	{
		if (func_403() > 0)
		{
			func_733(iParam0);
			if (func_653("AMEV_LBD_HELP"))
			{
				HUD::CLEAR_HELP(1);
			}
			func_104(&(Global_1574409.f_22));
		}
	}
	else
	{
		func_732(0);
		func_731();
	}
}

void func_731()
{
	Global_2512808.f_4500 = 0;
}

void func_732(int iParam0)
{
	Global_1357530.f_68 = iParam0;
}

void func_733(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_2436181.f_2592[iVar0 /*79*/].f_1 == iParam0)
		{
			Global_2436181.f_2592[iVar0 /*79*/].f_2 = 5;
			MISC::SET_BIT(&(Global_2436181.f_2592[iVar0 /*79*/].f_68), 0);
		}
		iVar0++;
	}
}

void func_734(int iParam0)
{
	if ((MISC::IS_BIT_SET(Global_1574409.f_1, 11) || (MISC::IS_BIT_SET(Global_1574409.f_1, 10) && iParam0)) || (MISC::IS_BIT_SET(Global_1574409.f_1, 22) && iParam0))
	{
		if (MISC::IS_BIT_SET(Global_1574409.f_1, 12))
		{
			MISC::CLEAR_BIT(&(Global_1574409.f_1), 12);
			func_439(0);
		}
		if (MISC::IS_BIT_SET(Global_1574409.f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1574409.f_1), 13);
			func_735();
		}
		if (MISC::IS_BIT_SET(Global_1574409.f_1, 14) && !func_240(PLAYER::PLAYER_ID(), 0))
		{
			MISC::CLEAR_BIT(&(Global_1574409.f_1), 14);
			func_441(0);
		}
		MISC::CLEAR_BIT(&(Global_1574409.f_1), 11);
		MISC::CLEAR_BIT(&(Global_1574409.f_1), 10);
		MISC::CLEAR_BIT(&(Global_1574409.f_1), 22);
	}
}

void func_735()
{
	MISC::CLEAR_BIT(&(Global_2512808.f_4694), 0);
}

bool func_736()
{
	return MISC::IS_BIT_SET(Global_2512808.f_4694, 0);
}

int func_737(int iParam0)
{
	switch (iParam0)
	{
		case 129:
		case 132:
		case 136:
		case 138:
		case 139:
		case 140:
		case 141:
			return 1;
		
		case 131:
		case 146:
			return func_233(PLAYER::PLAYER_ID());
		
		case 133:
			return (func_645() || func_738(func_187()));
		
		default:
	}
	return 0;
}

int func_738(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 10:
		case 6:
		case 12:
		case 11:
		case 14:
			return 1;
		
		default:
	}
	return 0;
}

int func_739()
{
	if (((((((((func_748() || func_747()) || func_746()) || func_180()) || (func_745() && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())) || (func_742() && !func_741())) || Global_2394733) || Global_2394733.f_1 != 0) || Global_2394807 != 0) || (func_740() == 2 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
	{
		return 1;
	}
	return 0;
}

int func_740()
{
	return Global_979886;
}

bool func_741()
{
	return MISC::IS_BIT_SET(Global_2447174.f_2, 27);
}

int func_742()
{
	if (func_744() || func_743())
	{
		return Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_98 == 8;
	}
	return 0;
}

var func_743()
{
	return Global_2447174.f_622;
}

bool func_744()
{
	return MISC::IS_BIT_SET(Global_2447174.f_2, 11);
}

bool func_745()
{
	return MISC::IS_BIT_SET(Global_2447174, 5);
}

bool func_746()
{
	return MISC::IS_BIT_SET(Global_2447174, 2);
}

bool func_747()
{
	return MISC::IS_BIT_SET(Global_2447174, 20);
}

bool func_748()
{
	return Global_2447174.f_586;
}

bool func_749(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if ((func_244() && !func_239()) || func_201(PLAYER::PLAYER_ID(), 21))
		{
			return 1;
		}
		if (func_21(&(Global_1574409.f_13)))
		{
			if (!func_18(&(Global_1574409.f_13), Global_262145.f_14, 0))
			{
				return 1;
			}
			func_104(&(Global_1574409.f_13));
		}
	}
	else if (MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 10))
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_1627537[iParam0 /*532*/].f_1, 9);
}

void func_750(int iParam0)
{
	int iVar0;
	
	iVar0 = func_262(2523, -1, 0);
	if (iParam0 == 0)
	{
		if (!MISC::IS_BIT_SET(iVar0, 0))
		{
			MISC::SET_BIT(&iVar0, 0);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 1))
		{
			MISC::SET_BIT(&iVar0, 1);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 2))
		{
			MISC::SET_BIT(&iVar0, 2);
		}
	}
	else if (iParam0 == 1)
	{
		if (!MISC::IS_BIT_SET(iVar0, 3))
		{
			MISC::SET_BIT(&iVar0, 3);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 4))
		{
			MISC::SET_BIT(&iVar0, 4);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 5))
		{
			MISC::SET_BIT(&iVar0, 5);
		}
	}
	else if (iParam0 == 2)
	{
		if (!MISC::IS_BIT_SET(iVar0, 6))
		{
			MISC::SET_BIT(&iVar0, 6);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 7))
		{
			MISC::SET_BIT(&iVar0, 7);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 8))
		{
			MISC::SET_BIT(&iVar0, 8);
		}
	}
	else if (iParam0 == 3)
	{
		if (!MISC::IS_BIT_SET(iVar0, 9))
		{
			MISC::SET_BIT(&iVar0, 9);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 10))
		{
			MISC::SET_BIT(&iVar0, 10);
		}
		else if (!MISC::IS_BIT_SET(iVar0, 11))
		{
			MISC::SET_BIT(&iVar0, 11);
		}
	}
	func_474(2523, iVar0, -1, 1, 0);
}

int func_751()
{
	int iVar0;
	
	if (!func_21(&(Global_1574409.f_15)))
	{
		func_19(&(Global_1574409.f_15), 0, 0);
		Global_1574409.f_17 = 0;
	}
	else if (func_18(&(Global_1574409.f_15), 1000, 0))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574409.f_17)))
		{
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(Global_1574409.f_17));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
			{
				if (func_820(iVar0, 1, 1) && func_752(iVar0, 6))
				{
					if (SYSTEM::VDIST(func_59(PLAYER::PLAYER_ID()), func_59(iVar0)) < 80f)
					{
						return 1;
					}
				}
			}
		}
		Global_1574409.f_17++;
		if (Global_1574409.f_17 >= 32)
		{
			Global_1574409.f_17 = 0;
			func_104(&(Global_1574409.f_15));
		}
	}
	return 0;
}

int func_752(int iParam0, int iParam1)
{
	int iVar0;
	
	if (Global_1312447 != 0)
	{
		return 0;
	}
	if (!func_478(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (Global_1595693[iVar0 /*680*/] == iParam1)
	{
		return 1;
	}
	return 0;
}

bool func_753()
{
	return Global_1574409.f_24;
}

bool func_754(int iParam0)
{
	return !func_755(iParam0);
}

int func_755(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			if (Global_262145.f_6051)
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 0) || MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 5:
			if (Global_262145.f_6052)
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 0) || MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 6:
			if (Global_262145.f_6053)
			{
				return 0;
			}
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			if (Global_262145.f_6054)
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 0) || MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 15:
			if (func_756(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 0) || MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 17:
			if (func_756(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 0) || MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 16:
			if (func_756(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 0) || MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 18:
		case 21:
		case 22:
		case 23:
			if (func_756(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			if (MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 0) || MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_15, 1))
			{
				return 0;
			}
			break;
		
		case 19:
			if (func_756(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 20:
			if (func_756(4))
			{
				return 0;
			}
			if (func_201(PLAYER::PLAYER_ID(), 7))
			{
				return 0;
			}
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	return 1;
}

int func_756(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_820(PLAYER::INT_TO_PLAYERINDEX(iVar0), 0, 1))
		{
			if (MISC::IS_BIT_SET(Global_2422736[iVar0 /*420*/].f_223, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_757()
{
	var uVar0;
	
	func_761(&uVar0);
	if (Global_1312831 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_760())
	{
		return 1;
	}
	if (Global_2459061)
	{
		return 1;
	}
	if (func_759())
	{
		return 1;
	}
	if (func_758(157))
	{
		if (!func_748())
		{
			return 1;
		}
	}
	if (func_758(155))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_434() != 0)
	{
		if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(func_434()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_758(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_759()
{
	return Global_2456830;
}

bool func_760()
{
	return Global_2447174.f_581;
}

void func_761(var uParam0)
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
				case -1155637934:
					func_762(iVar0);
					break;
				
				case 1662227603:
					SCRIPT::GET_EVENT_DATA(1, iVar0, &vVar3, 4);
					if (vVar3.z == 1204917378)
					{
						*uParam0 = 1;
					}
					break;
				}
		}
		iVar0++;
	}
}

void func_762(int iParam0)
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	
	if (SCRIPT::GET_EVENT_DATA(1, iParam0, &vVar0, 3))
	{
		if (func_820(vVar0.y, 1, 1))
		{
			iVar1 = PLAYER::GET_PLAYER_PED(vVar0.y);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, 0))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar1, 0);
					if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar2, vVar0.z) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
					{
						if (func_763(iVar2, &bVar3))
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

int func_763(int iParam0, var uParam1)
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

void func_764()
{
	SYSTEM::WAIT(0);
}

void func_765()
{
	int iVar0;
	
	func_190();
	if (func_726() == 4 && Local_98.f_27 != 0)
	{
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_98.f_27, false);
	}
	MISC::CLEAR_BIT(&(Global_2512808.f_4557), 1);
	func_652(19, 0);
	func_638(0);
	if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_770(129, 0, MISC::IS_BIT_SET(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2, 8));
	}
	func_769(129);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 184, false);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 151, true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	if (iLocal_107 > 0)
	{
		PLAYER::SET_MAX_WANTED_LEVEL(iLocal_107);
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (Global_1595693[PLAYER::PLAYER_ID() /*680*/] == 129)
		{
			Global_1595693[PLAYER::PLAYER_ID() /*680*/] = -1;
		}
	}
	if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID()) == iLocal_111)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID(), iLocal_113);
	}
	func_768();
	func_203(0, 129);
	if (MISC::IS_BIT_SET(iLocal_102, 22))
	{
		func_446();
		MISC::CLEAR_BIT(&iLocal_102, 22);
	}
	if (MISC::IS_BIT_SET(iLocal_102, 9))
	{
		AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
		if (!MISC::IS_BIT_SET(iLocal_102, 10))
		{
			AUDIO::TRIGGER_MUSIC_EVENT("KILL_LIST_STOP_MUSIC");
		}
	}
	if (fLocal_108 != -100f)
	{
		func_518(0, 0);
		NETWORK::NETWORK_SET_TALKER_PROXIMITY(fLocal_108);
	}
	func_517(0);
	if (func_757())
	{
		Local_99.f_5 = 5;
	}
	else if (func_598(2, 0, 0, 0, 0))
	{
		Local_99.f_5 = 6;
	}
	else if (Local_99.f_5 != 1)
	{
		Local_99.f_5 = 2;
	}
	AUDIO::STOP_SOUND(iLocal_559);
	Local_99 = Local_98.f_611;
	Local_99.f_1 = Local_98.f_612;
	Local_99.f_4 = Local_98.f_613;
	Local_99.f_3 = Local_98.f_615;
	if (Local_99.f_9 > 0)
	{
		Local_99.f_10 = (NETWORK::_GET_POSIX_TIME() - Local_99.f_9);
	}
	if ((!Global_262145.f_10843 && !MISC::IS_BIT_SET(Local_98.f_3, 8)) || (!Global_262145.f_10844 && MISC::IS_BIT_SET(Local_98.f_3, 8)))
	{
		if (Local_99.f_6 > 0)
		{
		}
	}
	if (MISC::IS_BIT_SET(Local_98.f_3, 8))
	{
		iVar0 = 1;
	}
	if (MISC::IS_BIT_SET(iLocal_103, 1))
	{
		func_658(1);
		NETWORK::USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(0, 0);
	}
	if (iVar0 == 0)
	{
		func_767(Local_99, Local_98.f_27, Local_98.f_279, iVar0, -1, -1, -1);
	}
	else if (NETWORK::PARTICIPANT_ID_TO_INT() != -1)
	{
		func_767(Local_99, Local_98.f_279, Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_8, iVar0, -1, -1, -1);
	}
	if (func_408(PLAYER::PLAYER_ID()))
	{
		func_615(0);
	}
	func_637(0);
	func_682(1);
	func_766();
}

void func_766()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_767(struct<12> Param0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	struct<13> Var1;
	struct<14> Var2;
	struct<18> Var3;
	struct<14> Var4;
	struct<13> Var5;
	struct<14> Var6;
	struct<14> Var7;
	struct<16> Var8;
	struct<13> Var9;
	struct<14> Var10;
	struct<14> Var11;
	struct<13> Var12;
	
	sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
	if (Param0.f_9 == 0)
	{
		Param0.f_10 = 0;
	}
	if (Param0.f_8 > Param0.f_9)
	{
		Param0.f_8 = Param0.f_9;
	}
	if (Global_70856)
	{
		if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_target"))
		{
			Var1 = { Param0 };
			Var1.f_12 = uParam1;
			STATS::_0xBFAFDB5FAAA5C5AB(&Var1);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "freemode"))
		{
			Var2 = { Param0 };
			Var2.f_12 = uParam1;
			Var2.f_13 = iParam2;
			STATS::_0xBAA2F0490E146BE8(&Var2);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_cp_collection"))
		{
			Var3 = { Param0 };
			Var3.f_12 = uParam1;
			Var3.f_13 = iParam2;
			Var3.f_14 = iParam3;
			Var3.f_15 = iParam4;
			Var3.f_16 = iParam5;
			Var3.f_17 = iParam6;
			STATS::_0x3DE3AA516FB126A4(&Var3);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_challenges"))
		{
			Var4 = { Param0 };
			Var4.f_12 = uParam1;
			Var4.f_13 = SYSTEM::TO_FLOAT(iParam2);
			if (iParam3 == 1)
			{
				Var4.f_13 = (Var4.f_13 / 10f);
			}
			STATS::_0x6A60E43998228229(&Var4);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_penned_in"))
		{
			STATS::_0x1A7CE7CD3E653485(&Param0);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_pass_the_parcel"))
		{
			Var5 = { Param0 };
			Var5.f_12 = uParam1;
			STATS::_0x419615486BBF1956(&Var5);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hot_property"))
		{
			Var6 = { Param0 };
			Var6.f_12 = uParam1;
			Var6.f_13 = iParam2;
			STATS::_0x84DFC579C2FC214C(&Var6);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_dead_drop"))
		{
			Var7 = { Param0 };
			Var7.f_12 = uParam1;
			Var7.f_13 = iParam2;
			STATS::_0x0A9C7F36E5D7B683(&Var7);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_king_of_the_castle"))
		{
			Var8 = { Param0 };
			Var8.f_12 = uParam1;
			Var8.f_13 = iParam2;
			Var8.f_14 = iParam3;
			Var8.f_15 = iParam4;
			STATS::_0x164C5FF663790845(&Var8);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_CRIMINAL_DAMAGE"))
		{
			Var9 = { Param0 };
			Var9.f_12 = uParam1;
			STATS::_0xEDBF6C9B0D2C65C8(&Var9);
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "AM_KILL_LIST"))
		{
			if (iParam3 == 0)
			{
				Var10 = { Param0 };
				Var10.f_12 = uParam1;
				Var10.f_13 = iParam2;
				STATS::_0x8C9D11605E59D955(&Var10);
			}
			else
			{
				Var11 = { Param0 };
				Var11.f_12 = uParam1;
				Var11.f_13 = iParam2;
				STATS::_0x6551B1F7F6CD46EA(&Var11);
			}
		}
		else if (MISC::ARE_STRINGS_EQUAL(sVar0, "am_hunt_the_beast"))
		{
			Var12 = { Param0 };
			Var12.f_12 = uParam1;
			STATS::_0x2CD90358F67D0AA8(&Var12);
		}
	}
}

void func_768()
{
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_112);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_111);
}

void func_769(int iParam0)
{
	if (iParam0 == iParam0)
	{
	}
}

void func_770(int iParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	int iVar1;
	
	if (iParam0 == 0)
	{
	}
	if (PLAYER::PLAYER_ID() != -1)
	{
		if (MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 13))
		{
			MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 13);
		}
		if (MISC::IS_BIT_SET(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1, 14))
		{
			MISC::CLEAR_BIT(&(Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1), 14);
		}
	}
	if (MISC::IS_BIT_SET(Global_1574409.f_1, 21))
	{
		MISC::CLEAR_BIT(&(Global_1574409.f_1), 21);
	}
	func_805();
	AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
	AUDIO::SET_AUDIO_FLAG("WantedMusicDisabled", 0);
	if (bParam1)
	{
		uVar0 = func_804(func_188(PLAYER::PLAYER_ID()));
		func_652(21, 0);
	}
	else
	{
		if ((bParam2 && PLAYER::PLAYER_ID() != -1) && func_803(PLAYER::PLAYER_ID()) >= 12)
		{
			func_802(2535, -1);
			iVar1 = func_262(2535, -1, 0);
			if (iVar1 == 2)
			{
				MISC::SET_BIT(&Global_1574435, 0);
			}
			else if (iVar1 == 4)
			{
				MISC::SET_BIT(&Global_1574435, 1);
			}
			else if (iVar1 == 6)
			{
				MISC::SET_BIT(&Global_1574435, 2);
			}
			else if (iVar1 == 8)
			{
				MISC::SET_BIT(&Global_1574435, 3);
			}
			else if (iVar1 == 10)
			{
				MISC::SET_BIT(&Global_1574435, 4);
			}
			else if (iVar1 == 12)
			{
				MISC::SET_BIT(&Global_1574435, 5);
			}
		}
		func_657();
		func_801();
		func_800();
		if ((!func_232(PLAYER::PLAYER_ID()) && !func_230(PLAYER::PLAYER_ID())) && !func_799())
		{
			func_779();
		}
		func_778();
		if (!MISC::IS_BIT_SET(Global_1667858.f_3, 0) && !MISC::IS_BIT_SET(Global_1667858.f_3, 1))
		{
			func_443();
		}
		func_777();
		MISC::CLEAR_BIT(&(Global_2512808.f_1717), 2);
		func_533();
		func_776();
	}
	if (HUD::_0x84698AB38D0C6636(1344549371))
	{
		HUD::OBJECT_DECAL_TOGGLE(1344549371);
	}
	if (!bParam1 || uVar0)
	{
		if ((PLAYER::PLAYER_ID() != -1 && !func_201(PLAYER::PLAYER_ID(), 21)) && !func_240(PLAYER::PLAYER_ID(), 0))
		{
			func_441(0);
			func_439(0);
			func_775();
		}
	}
	if (bParam2 && !bParam1)
	{
		if (func_602(26, -1))
		{
			Global_2458997 = -1;
			func_600(26, -1);
		}
	}
	if (!func_771())
	{
		Global_2492048 = 1;
	}
}

int func_771()
{
	if (((((!func_383(PLAYER::PLAYER_ID()) && !func_364(PLAYER::PLAYER_ID())) && func_188(PLAYER::PLAYER_ID()) != 146) && !func_774()) && !func_773()) && !func_772(Global_4456448.f_143970))
	{
		return 0;
	}
	return 1;
}

bool func_772(int iParam0)
{
	return iParam0 == 57;
}

int func_773()
{
	if (Global_4456448.f_122309 == Global_262145.f_8940)
	{
		return 1;
	}
	return 0;
}

int func_774()
{
	if ((Global_4456448 == 0 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && (((((((Global_4456448.f_5 != 0 || Global_4456448.f_143970 > 0) || MISC::IS_BIT_SET(Global_4456448.f_4, 15)) || MISC::IS_BIT_SET(Global_4456448.f_4, 18)) || MISC::IS_BIT_SET(Global_4456448.f_4, 19)) || MISC::IS_BIT_SET(Global_4456448.f_4, 29)) || MISC::IS_BIT_SET(Global_4456448.f_4, 28)) || MISC::IS_BIT_SET(Global_4456448.f_5, 23)))
	{
		return 1;
	}
	return 0;
}

void func_775()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1311741)
	{
		if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_12, 11))
		{
			if (MISC::IS_BIT_SET(Global_2359721[iVar0 /*26*/].f_13, 26))
			{
				MISC::CLEAR_BIT(&(Global_2359721[iVar0 /*26*/].f_13), 26);
			}
		}
		iVar0++;
	}
}

void func_776()
{
	Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_7 = 0;
}

void func_777()
{
	struct<25> Var0;
	
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_21 = -1;
	Global_1574409 = { Var0 };
}

void func_778()
{
	var uVar0;
	
	Global_1316732 = uVar0;
}

void func_779()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405047.f_24), &Global_2409103, 2);
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405047.f_26), &Global_2409105, 18);
	func_797();
	func_782(1, 1, 0);
	func_780();
}

void func_780()
{
	func_781(0, 0);
}

void func_781(int iParam0, int iParam1)
{
	Global_2405047.f_22 = iParam0;
	Global_2405047.f_23 = iParam1;
}

void func_782(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		MISC::_0x213AEB2B90CBA7AC(&(Global_2405047.f_44), &Global_2409123, 317);
	}
	else
	{
		Global_2405047.f_44 = { Global_2409123 };
		Global_2405047.f_44.f_49 = { Global_2409123.f_49 };
		Global_2405047.f_44.f_52 = Global_2409123.f_52;
		Global_2405047.f_44.f_53 = Global_2409123.f_53;
	}
	if (bParam0)
	{
		func_796();
	}
	if (!bParam2)
	{
		func_785(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0);
	}
	func_784(0);
	func_783();
}

void func_783()
{
	struct<6> Var0;
	
	if (Global_2405047.f_483.f_1 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_2405047.f_483 = { Var0 };
	}
}

void func_784(bool bParam0)
{
	if (bParam0)
	{
		Global_2405047.f_686 = 0;
	}
	else
	{
		Global_2405047.f_686 = 1;
	}
}

void func_785(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	if (bParam0)
	{
		if (func_795())
		{
			func_794();
		}
		Global_2405047.f_687.f_515 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2405047.f_687.f_504 = iParam1;
		Global_2405047.f_687.f_505 = iParam2;
		Global_2405047.f_687.f_506 = iParam10;
		func_792();
		func_789(8, 0, 0, 0, 0);
		Global_2405047.f_687.f_507 = iParam11;
		Global_2405047.f_687.f_510 = iParam3;
		Global_2405047.f_687.f_511 = iParam4;
		Global_2405047.f_687.f_508 = iParam5;
		Global_2405047.f_687.f_509 = iParam6;
		Global_2405047.f_687.f_512 = iParam7;
		Global_2405047.f_687.f_513 = iParam8;
		Global_2405047.f_687.f_514 = iParam9;
		Global_2405047.f_1720 = 1;
	}
	else
	{
		func_786();
	}
}

void func_786()
{
	if (func_795() && !func_788())
	{
		func_794();
	}
	if (func_788())
	{
		func_787();
	}
	else
	{
		func_792();
		func_789(0, 0, 0, 0, 0);
		Global_2405047.f_1720 = 0;
		Global_2405047.f_1719 = 0;
	}
}

void func_787()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405047.f_687), &(Global_2405047.f_1203), 516);
	Global_2405047.f_483 = { Global_2405047.f_489 };
	if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405047.f_687.f_515)
	{
		Global_2405047.f_1719 = 0;
	}
}

int func_788()
{
	if ((Global_2405047.f_1719 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405047.f_1203.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405047.f_1203.f_515))
	{
		return 1;
	}
	return 0;
}

void func_789(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (Global_2436181.f_1777.f_690.f_16 != func_26())
	{
		if (MISC::IS_BIT_SET(Global_2422736[Global_2436181.f_1777.f_690.f_16 /*420*/].f_414, 0) && func_790())
		{
			iParam0 = 23;
		}
	}
	if (iParam0 != 18 && iParam0 != 17)
	{
		Global_2412213 = 0;
	}
	Global_2405047.f_483 = iParam0;
	Global_2405047.f_483.f_1 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2405047.f_483.f_2 = iParam1;
	Global_2405047.f_483.f_3 = iParam2;
	Global_2405047.f_483.f_4 = iParam3;
	Global_2405047.f_483.f_5 = iParam4;
}

int func_790()
{
	if (((func_339(PLAYER::PLAYER_ID()) == 229 || func_339(PLAYER::PLAYER_ID()) == 191) || func_791()) || func_799())
	{
		return 0;
	}
	return 1;
}

int func_791()
{
	if (Global_4456448 == 6)
	{
		return 1;
	}
	return 0;
}

void func_792()
{
	if (func_795() && !func_788())
	{
		func_794();
	}
	func_793();
	Global_2405047.f_687 = 0;
}

void func_793()
{
	int iVar0;
	struct<5> Var1;
	
	Var1.f_4 = 1065353216;
	iVar0 = 0;
	while (iVar0 < 100)
	{
		Global_2405047.f_687.f_1[iVar0 /*5*/] = { Var1 };
		iVar0++;
	}
}

void func_794()
{
	if (func_788())
	{
		if (Global_2405047.f_687.f_515 == Global_2405047.f_1203.f_515)
		{
			return;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405047.f_687.f_515)
	{
		MISC::_0x213AEB2B90CBA7AC(&(Global_2405047.f_1203), &(Global_2405047.f_687), 516);
		Global_2405047.f_489 = { Global_2405047.f_483 };
		Global_2405047.f_1719 = 1;
	}
}

int func_795()
{
	if ((Global_2405047.f_1720 && !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2405047.f_687.f_515) && SCRIPT::IS_THREAD_ACTIVE(Global_2405047.f_687.f_515))
	{
		return 1;
	}
	return 0;
}

void func_796()
{
	MISC::_0x213AEB2B90CBA7AC(&(Global_2405047.f_361), &Global_2409440, 121);
}

void func_797()
{
	func_798();
	Global_2405047.f_2229 = 0;
}

void func_798()
{
	int iVar0;
	struct<4> Var1;
	
	iVar0 = 0;
	while (iVar0 < 50)
	{
		Global_2405047.f_2230[iVar0 /*4*/] = { Var1 };
		iVar0++;
	}
}

bool func_799()
{
	return Global_1574307;
}

void func_800()
{
	Global_2512808.f_4694 = 0;
}

void func_801()
{
	if (PLAYER::PLAYER_ID() != -1)
	{
		Global_1627537[PLAYER::PLAYER_ID() /*532*/].f_1 = 0;
	}
}

void func_802(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_262(iParam0, func_243(iParam1), 0);
	iVar0++;
	if (!func_481(iParam0))
	{
		func_474(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_475(iParam0, iVar0, iParam1, 1);
	}
}

int func_803(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_211.f_6;
}

int func_804(int iParam0)
{
	switch (iParam0)
	{
		case 133:
		case 132:
		case 138:
		case 144:
		case 140:
		case 139:
		case 131:
		case 141:
		case -1:
			return 1;
		
		case 146:
			if (func_233(PLAYER::PLAYER_ID()))
			{
				return 1;
			}
			break;
	}
	return 0;
}

void func_805()
{
	if (MISC::IS_BIT_SET(Global_2512808.f_1710, 3) || MISC::IS_BIT_SET(Global_2512808.f_1710, 4))
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(800);
		}
	}
	if (MISC::IS_BIT_SET(Global_2512808.f_1710, 5))
	{
		MISC::CLEAR_BIT(&(Global_2512808.f_1710), 5);
	}
	if (MISC::IS_BIT_SET(Global_2512808.f_1710, 3))
	{
		MISC::CLEAR_BIT(&(Global_2512808.f_1710), 3);
	}
	if (MISC::IS_BIT_SET(Global_2512808.f_1710, 4))
	{
		MISC::CLEAR_BIT(&(Global_2512808.f_1710), 4);
	}
	func_808(0);
	func_807(0);
	func_806(0);
}

void func_806(int iParam0)
{
	if (Global_2512808.f_4488 != iParam0)
	{
		Global_2512808.f_4488 = iParam0;
	}
}

void func_807(bool bParam0)
{
	if (Global_2512808.f_4487 != bParam0)
	{
		if (bParam0)
		{
		}
		Global_2512808.f_4487 = bParam0;
	}
}

void func_808(int iParam0)
{
	if (Global_2512808.f_4485 != iParam0)
	{
		Global_2512808.f_4485 = iParam0;
	}
}

void func_809(struct<21> Param0)
{
	int iVar0;
	
	func_818(func_819(Param0), Param0);
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(24);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(9);
	func_817(0, -1, 0);
	func_815(129);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_98, 617);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_101, 577);
	func_814(1);
	if (!func_813())
	{
		func_765();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(0);
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_98.f_17[iVar0] = func_26();
				iVar0++;
			}
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < 4)
			{
				Local_98.f_22[iVar0] = func_26();
				Local_98.f_256[iVar0] = -1;
				Local_98.f_110[iVar0] = -1;
				iVar0++;
			}
			STATS::_0x6DEE77AFF8C21BD1(&(Local_98.f_611), &(Local_98.f_612));
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 4)
		{
			iLocal_104[iVar0] = -1;
			iVar0++;
		}
		Local_99.f_2 = NETWORK::_0xCF61D4B4702EE9EB();
		Local_99.f_8 = NETWORK::_GET_POSIX_TIME();
		func_652(19, 1);
		func_810();
		if (func_198())
		{
			MISC::SET_BIT(&(Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_2), 7);
		}
		Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/].f_9 = -1;
		Global_2512808.f_4780 = -1;
		Local_101[NETWORK::PARTICIPANT_ID_TO_INT() /*18*/] = 0;
	}
	else
	{
		func_765();
	}
}

void func_810()
{
	int iVar0;
	
	PED::ADD_RELATIONSHIP_GROUP("relUWPlayer", &iLocal_111);
	PED::ADD_RELATIONSHIP_GROUP("relUWAi", &iLocal_112);
	iVar0 = 0;
	while (iVar0 < 32)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574725[iVar0], iLocal_111);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_111, Global_1574725[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574725[iVar0], iLocal_112);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_112, Global_1574725[iVar0]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_111, -1533126372);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1533126372, iLocal_111);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_111, Global_1574770[5]);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574770[5], iLocal_111);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_111, Global_1574758);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1574758, iLocal_111);
		iVar0++;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_111, iLocal_112);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_112, iLocal_111);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, iLocal_112);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2017343592, iLocal_111);
	func_812(1, &iLocal_112);
	func_811(&iLocal_112);
	func_811(&iLocal_111);
}

void func_811(int iParam0)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1865950624, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1865950624);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 296331235, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 296331235);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1166638144);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2037579709, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2037579709);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 2017343592, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 2017343592);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1821475077, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1821475077);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1782292358, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, 1782292358);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1033021910, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1033021910);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1285976420, *iParam0);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *iParam0, -1285976420);
}

void func_812(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -1533126372, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -1533126372);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -472287501, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -472287501);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, -183807561, *iParam1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, *iParam1, -183807561);
}

int func_813()
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
		if (func_760())
		{
			return 0;
		}
		if (func_758(155))
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

void func_814(bool bParam0)
{
	if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) == func_434())
	{
		return;
	}
	if (!SCRIPT::IS_THREAD_ACTIVE(Global_2415606.f_810) || Global_2415606.f_810 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		if (bParam0)
		{
			Global_2415606.f_810 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			Global_2415606.f_810 = -1;
		}
	}
}

void func_815(int iParam0)
{
	func_777();
	func_816();
	func_800();
	Global_1574409.f_4 = iParam0;
	Global_1574409.f_5 = iParam0;
	func_651(iParam0, -1);
	func_7(&(Global_1574409.f_18), 0, 0);
	Global_2512808.f_4553 = 0;
	Global_2457893[0] = func_26();
	Global_2457893[1] = func_26();
	Global_2457893[2] = func_26();
	Global_2457893[3] = func_26();
	Global_2457893[4] = func_26();
	func_776();
	if (!func_227(func_228()))
	{
		func_352();
	}
	if (func_244() && !func_239())
	{
		MISC::SET_BIT(&(Global_1574409.f_1), 16);
	}
	else
	{
		MISC::SET_BIT(&(Global_1574409.f_1), 17);
	}
}

void func_816()
{
	var uVar0;
	
	Global_1574434 = uVar0;
}

int func_817(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_766();
			}
			else
			{
				return 0;
			}
		}
		if (!func_166())
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_766();
					}
					else
					{
						return 0;
					}
				}
				if (func_760())
				{
					if (!bParam2)
					{
						func_766();
					}
					else
					{
						return 0;
					}
				}
				if (func_758(155))
				{
					if (!bParam2)
					{
						func_766();
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
					func_766();
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
				func_766();
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
			func_766();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_818(int iParam0, struct<17> Param1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_766();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, 0, Param1.f_16);
}

int func_819(int iParam0)
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
		
		case 113:
			return 32;
		
		case 114:
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
		
		case 125:
			return 32;
		
		case 126:
			return 32;
		
		case 115:
			return 32;
		
		case 116:
			return 32;
		
		case 120:
			return 32;
		
		case 118:
			return 32;
		
		case 119:
			return 32;
		
		case 123:
			return 32;
		
		case 124:
			return 32;
		
		case 121:
			return 32;
		
		case 122:
			return 32;
		
		case 127:
			return 32;
		
		case 128:
			return 32;
		
		case 129:
			return 32;
		
		case 130:
			return 32;
		
		case 131:
			return 2;
		
		case 136:
			return 1;
		
		case 132:
			return 2;
		
		case 133:
			return 4;
		
		case 134:
			return 2;
		
		case 135:
			return 2;
		
		case 117:
			return 1;
		
		case 137:
			return 2;
		
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
			return 0;
		
		case 147:
			return 1;
		
		case 144:
			return 4;
		
		case 145:
			return 16;
		
		case 146:
			return 32;
		
		default:
	}
	return 0;
}

int func_820(int iParam0, bool bParam1, bool bParam2)
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
				if (!Global_2436181.f_3[iVar0])
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

