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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
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
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_51[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_52[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_53 = 0;
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
	var uLocal_69 = 10;
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
	var uLocal_80 = 2;
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
	var uLocal_92 = 8;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	float fLocal_102 = 0f;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 37;
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
	bool bLocal_147 = 0;
	struct<10> Local_148 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	float fLocal_156 = 0f;
	float fLocal_157 = 0f;
	int iLocal_158 = 0;
	int iLocal_159 = 0;
	int iLocal_160 = 0;
	int iLocal_161[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_162[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_163[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_164[50] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	int iLocal_167[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_168 = 0;
	int iLocal_169 = 0;
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
	var uLocal_185 = 17;
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
	var uLocal_203 = 17;
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
	var uLocal_227 = 12;
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
	var uLocal_240 = 12;
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
	var uLocal_253 = 12;
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
	var uLocal_266 = 9;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 9;
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
	bool bLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	bool bLocal_299 = 0;
	bool bLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	bool bLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	int iLocal_313 = 0;
	bool bLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	int iLocal_322 = 0;
	int iLocal_323 = 0;
	int iLocal_324 = 0;
	struct<16> Local_325 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	char cLocal_326[64] = "";
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	int iLocal_335 = 0;
	int iLocal_336 = 0;
	int iLocal_337 = 0;
	int iLocal_338 = 0;
	int iLocal_339 = 0;
	int iLocal_340 = 0;
	int iLocal_341 = 0;
	int iLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	int iLocal_345 = 0;
	int iLocal_346 = 0;
	int iLocal_347 = 0;
	int iLocal_348 = 0;
	int iLocal_349 = 0;
	int iLocal_350 = 0;
	int iLocal_351 = 0;
	int iLocal_352 = 0;
	int iLocal_353 = 0;
	int iLocal_354 = 0;
	int iLocal_355 = 0;
	float fLocal_356 = 0f;
	float fLocal_357 = 0f;
	float fLocal_358 = 0f;
	float fLocal_359 = 0f;
	int iLocal_360 = 0;
	char cLocal_361[64] = "";
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	int iLocal_370 = 0;
	float fLocal_371 = 0f;
	int iLocal_372 = 0;
	int iLocal_373 = 0;
	var uLocal_374 = 0;
	int iLocal_375 = 0;
	int iLocal_376 = 0;
	var uLocal_377 = 16;
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
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	bool bLocal_546 = 0;
	int iLocal_547 = 0;
	int iLocal_548 = 0;
	int iLocal_549 = 0;
	struct<57> Local_550 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
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
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 0;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	struct<57> Local_808 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16 } ;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
	var uLocal_866 = 0;
	var uLocal_867 = 0;
	var uLocal_868 = 0;
	var uLocal_869 = 0;
	var uLocal_870 = 0;
	var uLocal_871 = 0;
	var uLocal_872 = 0;
	var uLocal_873 = 0;
	var uLocal_874 = 0;
	var uLocal_875 = 0;
	var uLocal_876 = 0;
	var uLocal_877 = 0;
	var uLocal_878 = 0;
	var uLocal_879 = 0;
	var uLocal_880 = 0;
	var uLocal_881 = 0;
	var uLocal_882 = 0;
	var uLocal_883 = 0;
	var uLocal_884 = 0;
	var uLocal_885 = 0;
	var uLocal_886 = 0;
	var uLocal_887 = 0;
	var uLocal_888 = 0;
	var uLocal_889 = 0;
	var uLocal_890 = 0;
	var uLocal_891 = 0;
	var uLocal_892 = 0;
	var uLocal_893 = 0;
	var uLocal_894 = 0;
	var uLocal_895 = 0;
	var uLocal_896 = 0;
	var uLocal_897 = 0;
	var uLocal_898 = 0;
	var uLocal_899 = 0;
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = 0;
	var uLocal_906 = 0;
	var uLocal_907 = 0;
	var uLocal_908 = 0;
	var uLocal_909 = 0;
	var uLocal_910 = 0;
	var uLocal_911 = 0;
	var uLocal_912 = 0;
	var uLocal_913 = 0;
	var uLocal_914 = 0;
	var uLocal_915 = 0;
	var uLocal_916 = 0;
	var uLocal_917 = 0;
	var uLocal_918 = 0;
	var uLocal_919 = 0;
	var uLocal_920 = 0;
	var uLocal_921 = 0;
	var uLocal_922 = 0;
	var uLocal_923 = 0;
	var uLocal_924 = 0;
	var uLocal_925 = 0;
	var uLocal_926 = 0;
	var uLocal_927 = 0;
	var uLocal_928 = 0;
	var uLocal_929 = 0;
	var uLocal_930 = 0;
	var uLocal_931 = 0;
	var uLocal_932 = 0;
	var uLocal_933 = 0;
	var uLocal_934 = 0;
	var uLocal_935 = 0;
	var uLocal_936 = 0;
	var uLocal_937 = 0;
	var uLocal_938 = 0;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 0;
	var uLocal_942 = 0;
	var uLocal_943 = 0;
	var uLocal_944 = 0;
	var uLocal_945 = 0;
	var uLocal_946 = 0;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 0;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	var uLocal_959 = 0;
	var uLocal_960 = 0;
	var uLocal_961 = 0;
	var uLocal_962 = 0;
	var uLocal_963 = 0;
	var uLocal_964 = 0;
	var uLocal_965 = 0;
	var uLocal_966 = 0;
	var uLocal_967 = 0;
	var uLocal_968 = 0;
	var uLocal_969 = 0;
	var uLocal_970 = 0;
	var uLocal_971 = 0;
	var uLocal_972 = 0;
	var uLocal_973 = 0;
	var uLocal_974 = 0;
	var uLocal_975 = 0;
	var uLocal_976 = 0;
	var uLocal_977 = 0;
	var uLocal_978 = 0;
	var uLocal_979 = 0;
	var uLocal_980 = 0;
	var uLocal_981 = 0;
	var uLocal_982 = 0;
	var uLocal_983 = 0;
	var uLocal_984 = 0;
	var uLocal_985 = 0;
	var uLocal_986 = 0;
	var uLocal_987 = 0;
	var uLocal_988 = 0;
	var uLocal_989 = 0;
	var uLocal_990 = 0;
	var uLocal_991 = 0;
	var uLocal_992 = 0;
	var uLocal_993 = 0;
	var uLocal_994 = 0;
	var uLocal_995 = 0;
	var uLocal_996 = 0;
	var uLocal_997 = 0;
	var uLocal_998 = 0;
	var uLocal_999 = 0;
	var uLocal_1000 = 0;
	var uLocal_1001 = 0;
	var uLocal_1002 = 0;
	var uLocal_1003 = 0;
	var uLocal_1004 = 0;
	var uLocal_1005 = 0;
	var uLocal_1006 = 0;
	var uLocal_1007 = 0;
	var uLocal_1008 = 0;
	var uLocal_1009 = 0;
	var uLocal_1010 = 0;
	var uLocal_1011 = 0;
	var uLocal_1012 = 0;
	var uLocal_1013 = 0;
	var uLocal_1014 = 0;
	var uLocal_1015 = 0;
	var uLocal_1016 = 0;
	var uLocal_1017 = 0;
	var uLocal_1018 = 0;
	var uLocal_1019 = 0;
	var uLocal_1020 = 0;
	var uLocal_1021 = 0;
	var uLocal_1022 = 0;
	var uLocal_1023 = 0;
	var uLocal_1024 = 0;
	var uLocal_1025 = 0;
	var uLocal_1026 = 0;
	var uLocal_1027 = 0;
	var uLocal_1028 = 0;
	var uLocal_1029 = 0;
	var uLocal_1030 = 0;
	var uLocal_1031 = 0;
	var uLocal_1032 = 0;
	var uLocal_1033 = 0;
	var uLocal_1034 = 0;
	var uLocal_1035 = 0;
	var uLocal_1036 = 0;
	var uLocal_1037 = 0;
	var uLocal_1038 = 0;
	var uLocal_1039 = 0;
	var uLocal_1040 = 0;
	var uLocal_1041 = 0;
	var uLocal_1042 = 0;
	var uLocal_1043 = 0;
	var uLocal_1044 = 0;
	var uLocal_1045 = 0;
	var uLocal_1046 = 0;
	var uLocal_1047 = 0;
	var uLocal_1048 = 0;
	var uLocal_1049 = 0;
	var uLocal_1050 = 0;
	var uLocal_1051 = 0;
	var uLocal_1052 = 0;
	var uLocal_1053 = 0;
	var uLocal_1054 = 0;
	var uLocal_1055 = 0;
	var uLocal_1056 = 0;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	int iLocal_1066 = 0;
	vector3 vLocal_1067 = { 0f, 0f, 0f };
	int iLocal_1068 = 0;
	int iLocal_1069 = 0;
	int iLocal_1070 = 0;
	struct<16> Local_1071[10];
	struct<16> Local_1072[2];
	int iLocal_1073 = 0;
	int iLocal_1074 = 0;
	int iLocal_1075 = 0;
	vector3 vLocal_1076 = { 0f, 0f, 0f };
	var uLocal_1077 = 0;
	var uLocal_1078 = 0;
	var uLocal_1079 = 0;
	struct<13> Local_1080 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	int iLocal_1081 = 0;
	int iLocal_1082 = 0;
	int iLocal_1083 = 0;
	int iLocal_1084 = 0;
	int iLocal_1085 = 0;
	int iLocal_1086 = 0;
	int iLocal_1087 = 0;
	int iLocal_1088 = 0;
	int iLocal_1089 = 0;
	int iLocal_1090 = 0;
	int iLocal_1091 = 0;
	struct<8> Local_1092 = { 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1093 = 0;
	var uLocal_1094 = 0;
	var uLocal_1095 = 0;
	var uLocal_1096 = 0;
	var uLocal_1097 = 0;
	var uLocal_1098 = 0;
	var uLocal_1099 = 0;
	var uLocal_1100 = 0;
	int iLocal_1101 = 0;
	int iLocal_1102 = 0;
	struct<16> Local_1103[1];
	var uLocal_1104 = 0;
	var uLocal_1105 = 0;
	var uLocal_1106 = 0;
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	bool bLocal_1111 = 0;
	int iLocal_1112 = 0;
	int iLocal_1113 = 0;
	int iLocal_1114 = 0;
	int iLocal_1115 = 0;
	int iLocal_1116 = 0;
	int iLocal_1117 = 0;
	int iLocal_1118 = 0;
	int iLocal_1119 = 0;
	bool bLocal_1120 = 0;
	int iLocal_1121 = 0;
	vector3 vLocal_1122[24] = "";
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	int iLocal_1126 = 0;
	int iLocal_1127 = 0;
	int iLocal_1128 = 0;
	var uLocal_1129 = 0;
	int iLocal_1130 = 0;
	int iLocal_1131 = 0;
	int iLocal_1132 = 0;
	int iLocal_1133 = 0;
	bool bLocal_1134 = 0;
	bool bLocal_1135 = 0;
	int iLocal_1136 = 0;
	bool bLocal_1137 = 0;
	bool bLocal_1138 = 0;
	int iLocal_1139 = 0;
	bool bLocal_1140 = 0;
	int iLocal_1141 = 0;
	int iLocal_1142 = 0;
	int iLocal_1143 = 0;
	int iLocal_1144 = 0;
	int iLocal_1145 = 0;
	int iLocal_1146 = 0;
	int iLocal_1147 = 0;
	int iLocal_1148 = 0;
	int iLocal_1149 = 0;
	int iLocal_1150 = 0;
	int iLocal_1151 = 0;
	int iLocal_1152 = 0;
	int iLocal_1153 = 0;
	int iLocal_1154 = 0;
	int iLocal_1155 = 0;
	int iLocal_1156 = 0;
	struct<18> Local_1157 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_1158 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1159 = { 0, 0, 0, 0, 0 } ;
	struct<5> Local_1160 = { 0, 0, 0, 0, 0 } ;
	struct<6> Local_1161 = { 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_1162 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<5> Local_1163 = { 0, 0, 0, 0, 0 } ;
	int iLocal_1164 = 0;
	int iLocal_1165 = 0;
	struct<2> Local_1166 = { 0, 0 } ;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	int iLocal_1169 = 0;
	int iLocal_1170 = 0;
	int iLocal_1171 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	vector3 vVar14;
	int iVar15;
	vector3 vVar16;
	int iVar17;
	vector3 vVar18;
	int iVar19;
	struct<16> Var20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	float fVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	
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
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = -1;
	iLocal_47 = -1;
	iLocal_49 = -1;
	fLocal_102 = ((0.05f + 0.275f) - 0.01f);
	bLocal_147 = true;
	iLocal_302 = 1;
	iLocal_307 = -1;
	iLocal_308 = 1;
	iLocal_310 = -1;
	iLocal_319 = -1;
	iLocal_320 = -1;
	iLocal_321 = -1;
	iLocal_322 = -1;
	iLocal_323 = -1;
	StringCopy(&Local_325, "", 64);
	StringCopy(&cLocal_326, "", 64);
	fLocal_356 = 0f;
	fLocal_357 = 0f;
	fLocal_358 = 0f;
	fLocal_359 = 0f;
	fLocal_371 = 0f;
	iLocal_375 = -1;
	iLocal_544 = -1;
	iLocal_549 = -1;
	bLocal_1120 = true;
	iLocal_1121 = 182494798;
	StringCopy(&cLocal_1122, "", 24);
	iLocal_1127 = -1;
	iLocal_1131 = -1;
	iLocal_1132 = -1;
	iLocal_1133 = -1;
	iLocal_1143 = -1;
	iLocal_1147 = -1;
	iLocal_1148 = -1;
	iLocal_1171 = -1;
	Global_55891 = 0;
	Global_69467 = -1;
	Global_55892 = 0;
	func_2035();
	func_2034(&Global_68382);
	if (Global_70856)
	{
		Global_69470 = func_2031(4137, -1, -1);
		Global_69470.f_1 = func_2031(4139, -1, -1);
		Global_69470.f_2 = func_2031(4138, -1, -1);
		Global_69470.f_4 = func_2031(4140, -1, -1);
		Global_69470.f_3 = func_2031(4141, -1, -1);
		Global_69470.f_5 = { func_2030(58, 60, -1) };
		StringCopy(&(Global_69470.f_21), "", 64);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_69470.f_5)))
		{
			StringCopy(&(Global_69470.f_21), HUD::_GET_LABEL_TEXT("YACHT_GSY"), 64);
		}
		Global_69470.f_37 = func_2029(3158, -1, 0);
		func_2028();
		StringCopy(&(Global_69508.f_21), "", 64);
		HUD::_0xB99C4E4D9499DF29(12);
		HUD::_0xB99C4E4D9499DF29(14);
		HUD::_0xB99C4E4D9499DF29(15);
		func_2022();
		StringCopy(&(Global_69560.f_25), "", 64);
		func_2021();
		func_2017();
		func_2016();
		func_2015();
		func_2013();
		HUD::_0xB99C4E4D9499DF29(13);
		func_2012();
	}
	func_2011();
	func_2010();
	uVar0 = 160;
	if (func_2009())
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_3)
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	func_2008();
	Global_55889 = 1;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	iLocal_1074 = 0;
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("appinternet")) > 1)
	{
		return;
	}
	if (MISC::IS_STUNT_JUMP_IN_PROGRESS())
	{
		Global_14453.f_1 = 3;
		return;
	}
	func_2007(1, 0, 0);
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	bLocal_294 = false;
	Global_68353 = 0;
	Global_68218 = 0;
	iVar4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("font_lib_web");
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iVar4))
	{
		SYSTEM::WAIT(0);
	}
	if (func_2006(1, 1, 1, 1))
	{
		iLocal_303 = 1;
	}
	if (Global_68328 == 2)
	{
	}
	if (iLocal_304 == 0)
	{
		iLocal_304 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("web_browser");
	}
	iVar5 = (Global_69469 + Global_68329);
	while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_304))
	{
		SYSTEM::WAIT(0);
	}
	func_2005(0);
	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		Global_68381 = ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
	}
	func_1995();
	if (Global_68328 == 2)
	{
		iVar5 = (iVar5 - Global_69469);
		if (iVar5 > 0)
		{
			SYSTEM::WAIT(iVar5);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "ATM_WINDOW", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (GRAPHICS::GET_IS_WIDESCREEN())
	{
		func_1994(&iLocal_304, "SET_WIDESCREEN", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else
	{
		func_1994(&iLocal_304, "SET_WIDESCREEN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	if (Global_68328 == 2)
	{
		func_1994(&iLocal_304, "SET_BROWSER_SKIN", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else if (Global_70856)
	{
		func_1994(&iLocal_304, "SET_BROWSER_SKIN", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
	}
	else
	{
		switch (func_1992())
		{
			case 0:
				func_1994(&iLocal_304, "SET_BROWSER_SKIN", 0f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			
			case 1:
				func_1994(&iLocal_304, "SET_BROWSER_SKIN", 2f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			
			case 2:
				func_1994(&iLocal_304, "SET_BROWSER_SKIN", 3f, -1082130432, -1082130432, -1082130432, -1082130432);
				break;
			}
	}
	func_1991(1);
	bVar6 = false;
	func_1989(1);
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
	}
	if (Global_70856)
	{
		HUD::_0xC2D15BEF167E27BC();
		HUD::SET_MULTIPLAYER_BANK_CASH();
		func_1988();
	}
	if (!Global_68353)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			HUD::CLEAR_HELP(1);
		}
	}
	while (func_1987())
	{
		if (Global_70856 && bLocal_1111)
		{
			func_1978();
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&Local_325))
		{
			func_1977(&Local_325);
			StringCopy(&Local_325, "", 64);
		}
		if (iLocal_1170 || iLocal_1169)
		{
			if (!AUDIO::IS_GAME_IN_CONTROL_OF_MUSIC())
			{
				AUDIO::STOP_STREAM();
				AUDIO::STOP_AUDIO_SCENE("WEB_EPSILONISM_SITE_MUSIC_SCENE");
				iLocal_1170 = 0;
				iLocal_1169 = 0;
			}
		}
		if (iLocal_295)
		{
			func_2007(1, 0, 0);
			iLocal_295 = 0;
		}
		else
		{
			iVar7 = HUD::_0xE3B05614DCE1D014(0);
			if (iVar7 == 0)
			{
				if (iLocal_297)
				{
					iLocal_295 = 1;
					iLocal_297 = 0;
				}
			}
			else if (!iLocal_297)
			{
				iLocal_295 = 1;
				iLocal_297 = 1;
			}
			iVar8 = 0;
			if (iVar8 == 0)
			{
				if (iLocal_296)
				{
					iLocal_295 = 1;
					iLocal_296 = 0;
				}
			}
			else if (!iLocal_296)
			{
				iLocal_295 = 1;
				iLocal_296 = 1;
			}
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				iLocal_295 = 1;
			}
		}
		func_1995();
		if ((!func_1975() || func_1974()) || CAM::IS_SCREEN_FADED_OUT())
		{
			func_1991(0);
			Global_68218 = 1;
		}
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			func_1991(0);
			Global_68218 = 1;
		}
		if (func_1987())
		{
			if (iLocal_1102 == 1)
			{
				iLocal_1102 = 0;
				func_1959();
			}
			if (iLocal_1074 > 3)
			{
				if (HUD::GET_CURRENT_WEBSITE_ID() == 2)
				{
					if (HUD::_0x01A358D9128B7A86() != 7 && HUD::_0x01A358D9128B7A86() != 8)
					{
						if (iLocal_1074 != 6)
						{
							iLocal_1074 = 0;
						}
					}
				}
			}
			switch (iLocal_1074)
			{
				case 0:
					if (func_1958(PLAYER::PLAYER_ID()))
					{
						func_1957();
						func_1953();
					}
					break;
				
				case 1:
					if (iLocal_1086 == 0)
					{
						func_1952(0, 6);
					}
					else
					{
						func_1952((5 * iLocal_1086), 6);
					}
					break;
				
				case 2:
					func_1951();
					break;
				
				case 3:
					if (iLocal_1086 == 0)
					{
						func_1948(0, 5);
					}
					else
					{
						func_1948(0, 5);
					}
					break;
				
				case 4:
					if (iLocal_1101 == 0)
					{
						func_1943();
						func_1953();
					}
					break;
				
				case 5:
					if (iLocal_1101 == 0)
					{
						func_1931();
					}
					break;
				
				case 6:
					if (iLocal_1101 == 0)
					{
						func_1930();
					}
					break;
			}
			if (iLocal_1141)
			{
				if (Global_68333 != -1)
				{
					switch (Global_68333)
					{
						case 10:
						case 11:
						case 12:
						case 13:
						case 15:
						case 16:
						case 26:
							if (Global_68332 == 15)
							{
								if (Global_68336 == 2)
								{
									if (!iLocal_1149 && Global_68333 == 26)
									{
									}
									else
									{
										iVar9 = -1;
										if (func_1929(iLocal_1146, Global_68333, Global_69651))
										{
											iVar9 = 1;
										}
										func_1906(Global_68333, iVar9, -1);
									}
								}
								else if (Global_68336 == 3)
								{
									func_1905(Global_68333, 9, -1, -1);
								}
							}
							else if (Global_68332 == 4)
							{
								if (Global_68333 == 26 && Global_68336 == 3)
								{
									func_1893(func_1894(44, 0));
								}
							}
							break;
						
						case 14:
							func_1892(iLocal_304);
							break;
						
						case 6:
							if (Global_68336 >= 4)
							{
								func_1891(iLocal_304, Global_68336);
							}
							else
							{
								func_1890(iLocal_304, Global_68336);
							}
							break;
						
						case 20:
							if (iLocal_322 == 4)
							{
								if (Global_68336 == 0 && Global_68484 < 2)
								{
									if (func_1889(func_1992()) >= 199)
									{
										func_1888(func_1992(), 1, 199);
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT");
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(2);
										GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
										Global_68484 = 2;
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
										func_1977("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							else if (iLocal_322 == 6)
							{
								if (Global_68336 == 0 && Global_68484 < 3)
								{
									if (func_1889(func_1992()) >= 4999)
									{
										func_1888(func_1992(), 1, 4999);
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT");
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(3);
										GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
										Global_68484 = 3;
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
										func_1977("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							else if (iLocal_322 == 8)
							{
								if (Global_68336 == 0 && Global_68484 < 5)
								{
									if (func_1889(func_1992()) >= 9999)
									{
										func_1888(func_1992(), 1, 9999);
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT");
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
										GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(5);
										GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
										Global_68484 = 5;
									}
									else
									{
										AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
										func_1977("WWW_THECHILDRENOFTHEMOUNTAIN_COM_S_PAYMENTERROR");
									}
								}
							}
							break;
						
						case 21:
							if (Global_70856)
							{
								if (Global_68332 == 3)
								{
									func_1885(Global_68336);
								}
								else if (Global_68332 == 4)
								{
									func_1884(Global_68336);
								}
								else if (Global_68332 == 5)
								{
									func_1883(Global_68336);
								}
								else if (Global_68332 == 8)
								{
									func_1857(iLocal_304, Global_68336, 1036235);
								}
							}
							break;
						
						case 27:
							if (Global_70856)
							{
								if (Global_68332 == 11 && Global_68336 == 0)
								{
									if (!func_1855(iLocal_310, 0, 0))
									{
										iVar10 = func_1854();
										if (func_1893(Global_1049531[iVar10 /*1951*/]))
										{
											func_1852(iVar10, "_S_WAYPOINT_D_SET", 0, 0, 1, 0, 0);
										}
										else
										{
											func_1852(iVar10, "_S_WAYPOINT_D_SET", 0, 0, 0, 1, 0);
										}
									}
									else
									{
										iVar11 = func_1854();
										if (func_1893(Global_1049531[iVar11 /*1951*/].f_3[2 /*3*/]))
										{
											func_1852(iVar11, "_S_WAYPOINT_D_SET", 0, 0, 1, 0, 0);
											if (Global_69672)
											{
												func_1959();
											}
										}
										else
										{
											func_1852(iVar11, "_S_WAYPOINT_D_SET", 0, 0, 0, 1, 0);
										}
									}
								}
								if (iLocal_322 == 2)
								{
									iVar12 = 0;
									switch (Global_68336)
									{
										case 0:
											iVar12 = iLocal_1128;
											break;
										
										case 1:
										case 2:
											iVar12 = 87;
											break;
										
										case 3:
										case 4:
											iVar12 = 88;
											break;
										
										case 5:
										case 6:
											iVar12 = 89;
											break;
										
										case 7:
										case 8:
											iVar12 = 90;
											break;
									}
									if (iVar12 != iLocal_1128)
									{
										iLocal_1128 = iVar12;
									}
								}
							}
							break;
						
						case 28:
							if (Global_70856)
							{
								if (Global_68332 == 10 && Global_68336 == 0)
								{
									if (iLocal_311 != 0)
									{
										iVar13 = func_1850(iLocal_311);
										vVar14 = { func_1849(iVar13) };
										if (func_1893(vVar14))
										{
											func_1852(-1, "_S_WAYPOINT_D_SET", 0, 0, 1, 0, 1);
										}
										else
										{
											func_1852(-1, "_S_WAYPOINT_D_SET", 0, 0, 0, 1, 1);
										}
									}
									else if (iLocal_312 != 0)
									{
										iVar15 = func_1847(iLocal_312);
										vVar16 = { func_1846(iVar15) };
										if (func_1893(vVar16))
										{
											func_1852(-1, "_S_WAYPOINT_D_SET", 0, 0, 1, 0, 2);
										}
										else
										{
											func_1852(-1, "_S_WAYPOINT_D_SET", 0, 0, 0, 1, 2);
										}
									}
									else if (iLocal_313 != 0)
									{
										iVar17 = func_1843(iLocal_313);
										vVar18 = { func_1842(iVar17) };
										if (func_1893(vVar18))
										{
											func_1852(-1, "_S_WAYPOINT_D_SET", 0, 0, 1, 0, 3);
										}
										else
										{
											func_1852(-1, "_S_WAYPOINT_D_SET", 0, 0, 0, 1, 3);
										}
									}
									else
									{
										iVar19 = func_1841();
										if (func_1893(Global_1049531[iVar19 /*1951*/]))
										{
											func_1852(iVar19, "_S_WAYPOINT_D_SET", 0, 0, 1, 0, 0);
										}
										else
										{
											func_1852(iVar19, "_S_WAYPOINT_D_SET", 0, 0, 0, 1, 0);
										}
									}
								}
							}
							break;
						
						default:
							break;
					}
					if (iLocal_320 != 27)
					{
						iLocal_1128 = 0;
					}
				}
				else
				{
					switch (Global_68335)
					{
						case -1582107009:
							if (!iLocal_317)
							{
								if (iLocal_322 == 2 && Global_68336 == 6)
								{
									func_1840("PL_WEB_FOS");
								}
								else if (iLocal_322 == 1 && Global_68336 == 8)
								{
									func_1840("PL_WEB_FOS");
								}
								else if (iLocal_322 == 4 && Global_68336 == 8)
								{
									func_1840("PL_WEB_FOS");
								}
								else if (iLocal_322 == 4 && Global_68336 == 8)
								{
									func_1840("PL_WEB_FOS");
								}
							}
							break;
						
						case -1144347054:
							if (!iLocal_317)
							{
								if (Global_68336 == 7)
								{
									func_1840("PL_WEB_HOWITZER");
								}
							}
							break;
						
						case -399181701:
							if (!iLocal_317)
							{
								if (Global_68336 == 6)
								{
									func_1840("PL_WEB_KFLF");
								}
							}
							break;
						
						case 168455551:
							if (!(MISC::IS_PC_VERSION() && !DLC::IS_DLC_PRESENT(729266842)))
							{
								if (!iLocal_317)
								{
									if (Global_68336 == 6)
									{
										func_1840("PL_WEB_PRB2");
									}
								}
							}
							break;
						
						case -650963915:
							if (!iLocal_317)
							{
								if (Global_68336 == 8)
								{
									func_1840("PL_WEB_RANGERS");
								}
							}
							break;
						
						case -361339786:
							if (!iLocal_317)
							{
								if (Global_68336 == 3)
								{
									func_1840("PL_WEB_RS");
								}
							}
							break;
						
						case -405709583:
							if (Global_68336 == 5)
							{
							}
							break;
						
						case -1015187353:
							if (Global_68332 == 2)
							{
								switch (Global_68336)
								{
									case 0:
										func_1838(0, &uLocal_377);
										break;
									
									case 1:
										func_1838(1, &uLocal_377);
										break;
									
									case 2:
										func_1838(2, &uLocal_377);
										break;
									
									case 3:
										func_1838(3, &uLocal_377);
										break;
									
									case 4:
										func_1838(4, &uLocal_377);
										break;
									
									case 5:
										func_1838(5, &uLocal_377);
										break;
									
									case 6:
										func_1838(6, &uLocal_377);
										break;
									}
							}
							break;
						
						default:
							break;
						}
				}
				iLocal_1141 = 0;
			}
			if (HUD::_0x2432784ACA090DA4(0))
			{
				HUD::CLEAR_FLOATING_HELP(0, 1);
			}
			if (HUD::_0x2432784ACA090DA4(1))
			{
				HUD::CLEAR_FLOATING_HELP(1, 1);
			}
			func_1858(0, 0);
			SYSTEM::WAIT(0);
			PAD::SET_INPUT_EXCLUSIVE(0, Global_14424);
			PAD::SET_INPUT_EXCLUSIVE(0, Global_14425);
			if (Global_68217)
			{
				func_1804(iLocal_304);
			}
			else
			{
				func_2005(0);
				if (iLocal_1136 == 3)
				{
					func_1994(&iLocal_304, "SET_ANALOG_STICK_INPUT", 0f, 0f, 33f, -1082130432, -1082130432);
				}
				else
				{
					func_1994(&iLocal_304, "SET_ANALOG_STICK_INPUT", 0f, 0f, 0f, -1082130432, -1082130432);
				}
			}
			if (!bVar6)
			{
				StringCopy(&Var20, "WWW_EYEFIND_INFO", 64);
				switch (Global_68328)
				{
					case 2:
						StringCopy(&Var20, "WWW_BANK_COM", 64);
						break;
					
					case 1:
						StringCopy(&Var20, "WWW_EYEFIND_INFO", 64);
						break;
					
					case 3:
						StringCopy(&Var20, "WWW_LIFEINVADER_COM", 64);
						Global_68327 = -1;
						break;
					
					case 4:
						Global_68327 = -1;
						StringCopy(&Var20, "WWW_LIFEINVADER_COM_S_USER584348_3", 64);
						break;
					
					case 7:
						Var20 = { Global_68199 };
						break;
					
					case 5:
						StringCopy(&Var20, "WWW_BAWSAQ_COM", 64);
						break;
					
					case 6:
						Var20 = { Global_2447174.f_671.f_12 };
						break;
				}
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "GO_TO_WEBPAGE");
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(&Var20);
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				if (MISC::ARE_STRINGS_EQUAL(&Var20, "WWW_EYEFIND_INFO"))
				{
					func_1802();
					Global_68332 = 1;
					Global_68333 = 2;
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					func_1795(iLocal_304, 1, &uVar0, 0);
					Global_68330 = MISC::GET_GAME_TIMER();
				}
				else if (MISC::ARE_STRINGS_EQUAL(&Var20, "WWW_DYNASTY8REALESTATE_COM_S_LOS_D_SANTOS"))
				{
					func_1977("WWW_DYNASTY8REALESTATE_COM");
					Global_68332 = 1;
					Global_68333 = 18;
					func_1789(iLocal_304);
					Global_68330 = MISC::GET_GAME_TIMER();
					iLocal_324 = 1;
					Local_325 = { Var20 };
				}
				else if (MISC::ARE_STRINGS_EQUAL(&Var20, "WWW_DYNASTY8EXECUTIVEREALTY_COM_S_OFFICES"))
				{
					func_1977("WWW_DYNASTY8EXECUTIVEREALTY_COM");
				}
				else if (MISC::ARE_STRINGS_EQUAL(&Var20, "FORECLOSURES_MAZE_D_BANK_COM_S_PROPERTIES"))
				{
					func_1977("FORECLOSURES_MAZE_D_BANK_COM");
				}
				bVar6 = true;
			}
			if (iLocal_315 != 0)
			{
				if (bLocal_294)
				{
					func_1991(0);
				}
			}
			if (!bLocal_1135)
			{
				iVar21 = 0;
				bVar22 = false;
				switch (iLocal_315)
				{
					case 0:
						while (!GRAPHICS::HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(iLocal_304) && !bVar22)
						{
							func_2005(0);
							if (PAD::_IS_INPUT_JUST_DISABLED(2))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_MOUSE_INPUT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_ANALOG_STICK_INPUT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
								fLocal_371 = 0f;
							}
							iVar21 = (iVar21 + SYSTEM::FLOOR((0f + (1000f * SYSTEM::TIMESTEP()))));
							if (iVar21 > 10000)
							{
								bVar22 = true;
							}
							func_1858(0, 0);
							if (((!GRAPHICS::HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(iLocal_304) && !bVar22) && iVar21 > 2000) && ((PAD::IS_CONTROL_JUST_PRESSED(2, 202) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 202)) || (PAD::IS_CONTROL_JUST_PRESSED(2, 238) && !HUD::IS_WARNING_MESSAGE_ACTIVE())))
							{
								func_1959();
								GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_304);
								return;
							}
							SYSTEM::WAIT(0);
						}
						if (!bVar22)
						{
							iLocal_315 = 2;
						}
						else
						{
							func_1959();
						}
						break;
					
					case 2:
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "INITIALISE_WEBSITE");
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "IS_SITE_DYNAMIC");
						uLocal_1129 = GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION();
						iVar21 = Global_69469 + 6000;
						bVar22 = false;
						while (!GRAPHICS::_0x768FF8961BA904D6(uLocal_1129) && !bVar22)
						{
							func_2005(0);
							if (PAD::_IS_INPUT_JUST_DISABLED(2))
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_MOUSE_INPUT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							}
							else
							{
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_ANALOG_STICK_INPUT");
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
								GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
								GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
								fLocal_371 = 0f;
							}
							func_1858(0, 0);
							if (Global_69469 > iVar21)
							{
								bVar22 = true;
							}
							else
							{
								SYSTEM::WAIT(0);
							}
						}
						if (!bVar22)
						{
							iLocal_1130 = GRAPHICS::_0x2DE7EFA66B906036(uLocal_1129);
						}
						else
						{
							iLocal_1130 = 0;
						}
						func_1788();
						if (iLocal_1130 == 1)
						{
							iLocal_321 = -1;
							iLocal_322 = 0;
							iLocal_319 = -1;
							iLocal_320 = 0;
							bLocal_1134 = true;
							iVar1 = 10;
							while (iVar1 != 0)
							{
								iVar1 = (iVar1 - 1);
								if (PAD::_IS_INPUT_JUST_DISABLED(2))
								{
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_MOUSE_INPUT");
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
									GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
								}
								else
								{
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_ANALOG_STICK_INPUT");
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
									GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
									fLocal_371 = 0f;
								}
								func_1858(0, 0);
								SYSTEM::WAIT(0);
							}
							iVar2 = HUD::_0x01A358D9128B7A86();
							iVar3 = HUD::GET_CURRENT_WEBSITE_ID();
							if (iVar2 != 0)
							{
								if (iVar2 != iLocal_1132)
								{
									iLocal_1133 = iLocal_1132;
									iLocal_1132 = iVar2;
								}
							}
							else
							{
								iVar2 = iLocal_1132;
							}
							if (iVar3 != 0)
							{
								if (iVar3 != iLocal_1131)
								{
									iLocal_316 = 0;
								}
								iLocal_1131 = iVar3;
							}
							else
							{
								iVar3 = iLocal_1131;
							}
							switch (Global_68328)
							{
								case 0:
									if (iVar3 == 2)
									{
										func_1802();
									}
									func_1678(iVar3, iVar2, iLocal_304, &uVar0, &uLocal_377, 1);
									iLocal_302 = 0;
									if (iVar3 == 6)
									{
										if (bLocal_147)
										{
											while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
											{
												func_1858(0, 0);
												SYSTEM::WAIT(0);
											}
											if (HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
											{
											}
											Global_68330 = (MISC::GET_GAME_TIMER() - 120);
										}
									}
									break;
								
								case 3:
								case 4:
									bLocal_1140 = true;
									func_1678(iVar3, iVar2, iLocal_304, &uVar0, &uLocal_377, 1);
									break;
							}
							if (iVar3 == 2)
							{
								if (Global_70856 && !Global_69674)
								{
									if (func_1677())
									{
										Global_69674 = 1;
									}
									else
									{
										func_1676("MBANKHELP", 0, 0, 0, 0);
										iLocal_372 = Global_69469 + 7500;
										Global_69674 = 1;
									}
								}
							}
						}
						else
						{
							iVar1 = 10;
							while (iVar1 != 0)
							{
								iVar1 = (iVar1 - 1);
								if (PAD::_IS_INPUT_JUST_DISABLED(2))
								{
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_MOUSE_INPUT");
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
									GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
								}
								else
								{
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_ANALOG_STICK_INPUT");
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
									GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
									fLocal_371 = 0f;
								}
								func_1858(0, 0);
								SYSTEM::WAIT(0);
							}
							func_106();
							bLocal_1134 = false;
							if (Global_68335 == -1582107009)
							{
								if (func_105(20))
								{
								}
								else
								{
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT");
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
									GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
								}
							}
							if ((SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("act_cinema")) != 0 || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ob_tv")) != 0) || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("am_mp_property_int")) != 0)
							{
								if (((((Global_68335 == -1582107009 || Global_68335 == -1144347054) || Global_68335 == -399181701) || Global_68335 == 168455551) || Global_68335 == -650963915) || Global_68335 == -361339786)
								{
									func_104();
								}
								else
								{
									iLocal_318 = 0;
								}
							}
							if (MISC::IS_PC_VERSION() && !DLC::IS_DLC_PRESENT(729266842))
							{
								if (Global_68335 == 168455551)
								{
									func_104();
								}
							}
							if (Global_68335 == -405709583)
							{
								func_104();
							}
						}
						iLocal_315 = 3;
						bLocal_1135 = true;
						break;
				}
			}
			else
			{
				if (bLocal_294)
				{
					func_1991(0);
				}
				if (!GRAPHICS::HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(iLocal_304))
				{
					if (iLocal_1170 || iLocal_1169)
					{
						AUDIO::STOP_STREAM();
						iLocal_1170 = 0;
						iLocal_1169 = 0;
					}
					if (HUD::HAS_ADDITIONAL_TEXT_LOADED(4))
					{
						HUD::CLEAR_ADDITIONAL_TEXT(4, false);
						func_102();
					}
					bLocal_1135 = false;
					Global_68331 = 0;
					iLocal_315 = 0;
				}
				else
				{
					bVar23 = false;
					if (bLocal_1134)
					{
						iLocal_1144 = HUD::_0x01A358D9128B7A86();
						iVar3 = HUD::GET_CURRENT_WEBSITE_ID();
						iVar24 = iLocal_1131;
						if (iVar3 != 0)
						{
							iLocal_1131 = iVar3;
						}
						if (iLocal_1144 != 0)
						{
							iLocal_1132 = iLocal_1144;
						}
						if ((iLocal_1132 != iLocal_1133 || iLocal_1131 != iVar24) || Global_68334 != Global_68335)
						{
							Global_68334 = Global_68335;
							bLocal_1137 = false;
							bVar25 = false;
							switch (iLocal_1131)
							{
								case 4:
									if (iVar24 != 4)
									{
										Global_55889 = 1;
									}
									bVar25 = true;
									break;
								
								case 5:
									if (!iLocal_1170)
									{
										iLocal_1169 = 1;
									}
									break;
								
								case 6:
									if (!func_99(0) && !bLocal_1140)
									{
									}
									else
									{
										switch (iLocal_1132)
										{
											case 6:
												Global_68323 = 1;
												break;
											
											case 8:
												Global_68324 = 1;
												break;
											}
									}
									break;
								
								case 7:
									if (iVar24 != 7)
									{
										Global_55889 = 1;
									}
									bVar25 = true;
									break;
							}
							func_39(bVar25);
							if (iLocal_1131 == 2)
							{
								func_1802();
							}
							func_1678(iLocal_1131, iLocal_1132, iLocal_304, &uVar0, &uLocal_377, iLocal_302);
							iLocal_302 = 1;
							iLocal_1133 = iLocal_1132;
							if (iLocal_1169)
							{
								if (AUDIO::IS_GAME_IN_CONTROL_OF_MUSIC())
								{
									while (!AUDIO::LOAD_STREAM("MUSIC", "EPSILONISM_SITE_SOUNDS"))
									{
										func_2005(0);
										if (PAD::_IS_INPUT_JUST_DISABLED(2))
										{
											GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_MOUSE_INPUT");
											GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 239));
											GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(PAD::GET_DISABLED_CONTROL_NORMAL(2, 240));
											GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
										}
										else
										{
											GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_ANALOG_STICK_INPUT");
											GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
											GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
											GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT(0f);
											GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
											fLocal_371 = 0f;
										}
										func_1858(0, 0);
										SYSTEM::WAIT(0);
									}
									iLocal_1170 = 1;
									AUDIO::PLAY_STREAM_FRONTEND();
									iLocal_1169 = 0;
									AUDIO::START_AUDIO_SCENE("WEB_EPSILONISM_SITE_MUSIC_SCENE");
								}
								else
								{
									iLocal_1170 = 0;
									iLocal_1169 = 0;
								}
							}
						}
						else
						{
							if (Global_53081)
							{
								if (Global_68332 == 4)
								{
									if (!(iLocal_1132 == 9 || iLocal_1132 == 8))
									{
										Global_68331 = 1;
									}
								}
							}
							Global_53081 = 0;
							if (Global_68331)
							{
								if (iLocal_1131 == 2)
								{
									func_1802();
								}
								Global_68331 = 0;
								func_1678(iLocal_1131, iLocal_1132, iLocal_304, &uVar0, &uLocal_377, iLocal_302);
								iLocal_302 = 1;
							}
						}
					}
					else
					{
						bLocal_1137 = false;
						func_106();
					}
					if (!bVar23)
					{
						if (Global_69467 > -1)
						{
							if (Global_69467 < Global_69469)
							{
								bVar26 = true;
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_326))
								{
									iVar27 = HUD::GET_CURRENT_WEBSITE_ID();
									if (((iVar27 == 18 && MISC::ARE_STRINGS_EQUAL(&cLocal_326, "WWW_DYNASTY8REALESTATE_COM")) || (iVar27 == 27 && MISC::ARE_STRINGS_EQUAL(&cLocal_326, "WWW_DYNASTY8EXECUTIVEREALTY_COM"))) || (iVar27 == 28 && MISC::ARE_STRINGS_EQUAL(&cLocal_326, "FORECLOSURES_MAZE_D_BANK_COM")))
									{
										if (iVar27 == iLocal_320)
										{
										}
									}
									else
									{
										if (iVar27 == iLocal_320)
										{
										}
										bVar26 = false;
									}
								}
								if (bVar26)
								{
									GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "GO_TO_WEBPAGE");
									GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
									HUD::ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(&Global_69451);
									GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
									GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
								}
								Global_69467 = -1;
								StringCopy(&cLocal_326, "", 64);
							}
						}
					}
				}
				if (bLocal_1134)
				{
					if (iLocal_1131 == 4 || iLocal_1131 == 7)
					{
						fVar28 = (0f + (1f * SYSTEM::TIMESTEP()));
						iVar29 = SYSTEM::FLOOR((fVar28 * 1000f));
						func_38(joaat("time_spent_on_stockmarket"), iVar29);
					}
				}
				iLocal_298 = 1;
				if (Global_68328 != 7)
				{
					if (func_37())
					{
						if ((!Global_104555.f_20534.f_470 && !Global_70856) && !func_36())
						{
							func_34();
						}
					}
				}
			}
			if (Global_69669 != iLocal_1171)
			{
				if (Global_69669 > 6)
				{
					Global_69669 = -1;
				}
				if (iLocal_1171 == -1 && Global_69669 > 0)
				{
					CLOCK::PAUSE_CLOCK(true);
					func_32();
				}
				else if (Global_69669 == -1 && iLocal_1171 > 0)
				{
					CLOCK::PAUSE_CLOCK(false);
				}
				if (Global_69669 > -1 && Global_69669 < 6)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "PROXY_FUNCTION");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_69669);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iLocal_1171 = Global_69669;
			}
			if (Global_69669 > -1)
			{
				func_19();
			}
			if (iLocal_317)
			{
				if (HUD::IS_PAUSE_MENU_ACTIVE())
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SUPRESS_HISTORY");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					GRAPHICS::SET_TV_CHANNEL(-1);
					AUDIO::STOP_AUDIO_SCENE("INTERNET_BROWSER_VIDEO_SCENE");
					iLocal_317 = 0;
				}
				else
				{
					HUD::SET_TEXT_RENDER_ID(HUD::GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID());
					GRAPHICS::_SET_2D_LAYER(4);
					GRAPHICS::_0xC6372ECD45D73BCD(1);
					GRAPHICS::DRAW_TV_CHANNEL(0.5f, 0.5f, 0.5f, 0.5f, 0f, 255, 255, 255, 255);
				}
			}
		}
		else
		{
			SYSTEM::WAIT(200);
		}
		if (func_18(8, -1))
		{
			Global_68218 = 1;
		}
		if (func_17())
		{
			Global_68218 = 1;
		}
		if (Global_68218 == 1)
		{
			if (bLocal_1135)
			{
				Global_68218 = 0;
				func_1959();
			}
		}
		if (bLocal_1137)
		{
			if (iLocal_1139 > 20)
			{
				func_15("BUSY");
				if (bLocal_1138)
				{
					Global_68343 = (Global_68343 + (1 + (Global_68343 + 1 / 50)));
					Global_68331 = 1;
					if (Global_68343 > Global_68345)
					{
						Global_68343 = Global_68345;
					}
				}
				else
				{
					Global_68343 = (Global_68343 - (1 + (Global_68343 + 1 / 100)));
					Global_68331 = 1;
				}
			}
			else
			{
				iLocal_1139++;
			}
		}
		if (bLocal_294)
		{
			func_1991(0);
		}
		if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()) || func_14())
		{
			func_1959();
		}
		if (Global_70856 && func_13())
		{
			func_1959();
		}
		if (Global_70856 && func_12())
		{
			func_1959();
		}
		if (!Global_70856 && func_11())
		{
			func_1959();
		}
	}
	if (Global_70856)
	{
		HUD::_0x95CF81BD06EE1887();
		HUD::REMOVE_MULTIPLAYER_BANK_CASH();
	}
	func_1959();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SUPRESS_HISTORY");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SHUTDOWN_MOVIE");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	iLocal_298 = 0;
	func_10();
	SYSTEM::WAIT(0);
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_304);
	iLocal_304 = 0;
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_305);
	iLocal_305 = 0;
	if (iLocal_306 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_306);
		iLocal_306 = 0;
	}
	iVar30 = MISC::GET_GAME_TIMER();
	while (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_305) && MISC::GET_GAME_TIMER() <= iVar30 + 500)
	{
		func_10();
		SYSTEM::WAIT(0);
	}
	iLocal_305 = 0;
	if (iLocal_1170 || iLocal_1169)
	{
		AUDIO::STOP_STREAM();
		AUDIO::STOP_AUDIO_SCENE("WEB_EPSILONISM_SITE_MUSIC_SCENE");
		iLocal_1170 = 0;
	}
	Global_68328 = 0;
	if (bLocal_299)
	{
		HUD::DISPLAY_RADAR(true);
	}
	if (bLocal_300)
	{
		AUDIO::STOP_AUDIO_SCENE("WEB_GENERAL_BROWSING_SCENE");
	}
	if (iLocal_301)
	{
		AUDIO::STOP_AUDIO_SCENE("GTAO_Computer_Screen_Active_Scene");
		iLocal_301 = 0;
	}
	func_5("BS_TUT_1", 1);
	iVar30 = MISC::GET_GAME_TIMER();
	while (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_304) && MISC::GET_GAME_TIMER() <= iVar30 + 500)
	{
		func_10();
		SYSTEM::WAIT(0);
	}
	iLocal_304 = 0;
	func_10();
	SYSTEM::WAIT(0);
	if (iLocal_370)
	{
		func_2(3, 0);
		iLocal_370 = 0;
	}
	iVar31 = Global_69469 + 500;
	iVar32 = 10;
	while (iVar32 > 0)
	{
		func_10();
		Global_69469 = (Global_69469 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		SYSTEM::WAIT(0);
		iVar32 = (iVar32 - 1);
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iVar4);
	while (iVar31 > Global_69469)
	{
		func_10();
		Global_69469 = (Global_69469 + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		SYSTEM::WAIT(0);
	}
	HUD::CLEAR_ADDITIONAL_TEXT(4, true);
	if (Global_70856)
	{
		func_1();
	}
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_1082);
	HUD::_0x8817605C2BA76200();
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
	}
	Global_55891 = 0;
	if (func_2006(0, 0, iLocal_303, 1))
	{
		iLocal_303 = 0;
	}
}

void func_1()
{
	Global_2436181.f_1040.f_9 = 0;
}

void func_2(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_4(iParam0, iParam1))
	{
		iVar0 = func_3();
		Global_2456735[iVar0] = iParam0;
	}
}

int func_3()
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

int func_4(int iParam0, var uParam1)
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

void func_5(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_103195 && iParam1)
	{
		if (func_9(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_104555.f_20380[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_104555.f_20380.f_145 - 2))
			{
				func_8(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_7((Global_104555.f_20380.f_145 - 1));
			Global_104555.f_20380.f_145 = (Global_104555.f_20380.f_145 - 1);
			func_6();
			return;
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_104555.f_20380.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (MISC::IS_BIT_SET(Global_104555.f_20380[iVar0 /*16*/].f_11, 0))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[0])
			{
				Global_104555.f_20380.f_146[0] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_104555.f_20380[iVar0 /*16*/].f_11, 1))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[1])
			{
				Global_104555.f_20380.f_146[1] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		if (MISC::IS_BIT_SET(Global_104555.f_20380[iVar0 /*16*/].f_11, 2))
		{
			if (Global_104555.f_20380[iVar0 /*16*/].f_12 > Global_104555.f_20380.f_146[2])
			{
				Global_104555.f_20380.f_146[2] = Global_104555.f_20380[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_7(int iParam0)
{
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_104555.f_20380[iParam0 /*16*/].f_4), "", 16);
	Global_104555.f_20380[iParam0 /*16*/].f_8 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = -1;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = 0;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = 0;
}

void func_8(int iParam0, int iParam1)
{
	Global_104555.f_20380[iParam0 /*16*/] = { Global_104555.f_20380[iParam1 /*16*/] };
	Global_104555.f_20380[iParam0 /*16*/].f_4 = { Global_104555.f_20380[iParam1 /*16*/].f_4 };
	Global_104555.f_20380[iParam0 /*16*/].f_8 = Global_104555.f_20380[iParam1 /*16*/].f_8;
	Global_104555.f_20380[iParam0 /*16*/].f_10 = Global_104555.f_20380[iParam1 /*16*/].f_10;
	Global_104555.f_20380[iParam0 /*16*/].f_9 = Global_104555.f_20380[iParam1 /*16*/].f_9;
	Global_104555.f_20380[iParam0 /*16*/].f_11 = Global_104555.f_20380[iParam1 /*16*/].f_11;
	Global_104555.f_20380[iParam0 /*16*/].f_12 = Global_104555.f_20380[iParam1 /*16*/].f_12;
	Global_104555.f_20380[iParam0 /*16*/].f_13 = Global_104555.f_20380[iParam1 /*16*/].f_13;
	Global_104555.f_20380[iParam0 /*16*/].f_14 = Global_104555.f_20380[iParam1 /*16*/].f_14;
	Global_104555.f_20380[iParam0 /*16*/].f_15 = Global_104555.f_20380[iParam1 /*16*/].f_15;
}

int func_9(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_10()
{
	func_1995();
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
	if (!iLocal_298)
	{
		return;
	}
	PAD::ENABLE_CONTROL_ACTION(2, 201, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 202, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 187, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 205, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 189, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 207, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 206, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 190, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 208, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 217, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 188, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 203, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 204, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 195, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 196, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 197, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 198, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 239, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 240, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
	PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 187);
	PAD::SET_INPUT_EXCLUSIVE(2, 188);
	PAD::ENABLE_CONTROL_ACTION(0, 0, 1);
	if (!CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		PAD::ENABLE_CONTROL_ACTION(0, 1, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 2, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 3, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 4, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 5, 1);
		PAD::ENABLE_CONTROL_ACTION(0, 6, 1);
	}
	PAD::ENABLE_CONTROL_ACTION(0, 95, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 98, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 209, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 210, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 228, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 229, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 230, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 231, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 218, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 219, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 220, 1);
	PAD::ENABLE_CONTROL_ACTION(0, 221, 1);
	PAD::SET_INPUT_EXCLUSIVE(2, 237);
	PAD::SET_INPUT_EXCLUSIVE(2, 238);
	PAD::SET_INPUT_EXCLUSIVE(2, 241);
	PAD::SET_INPUT_EXCLUSIVE(2, 242);
	PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
	if (!(PAD::_IS_INPUT_DISABLED(2) && (HUD::_0xE3B05614DCE1D014(0) != 0 && !iLocal_317)))
	{
		PAD::ENABLE_CONTROL_ACTION(2, 199, 1);
	}
	RECORDING::_0xEB2D525B57F42B40();
}

var func_11()
{
	return Global_68216;
}

var func_12()
{
	return Global_1656139;
}

bool func_13()
{
	return Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_196 != 0;
}

int func_14()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_90456.f_44 == 1;
	}
	return 0;
}

void func_15(char* sParam0)
{
	int iVar0;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (iLocal_1121 == iVar0)
	{
		return;
	}
	iLocal_1121 = iVar0;
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_CURSOR_STATE");
	func_16(sParam0);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
}

void func_16(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

int func_17()
{
	if (((Global_92833 == 13 || Global_92833 == 10) || Global_92833 == 11) || Global_92833 == 12)
	{
		return 0;
	}
	return 1;
}

bool func_18(int iParam0, int iParam1)
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

void func_19()
{
	if (!func_31() && Global_69669 != -1)
	{
		if (!iLocal_1165)
		{
			if (func_20(&uLocal_377, "EPSWAUD", &Local_1166, 9, 0, 1, 0))
			{
				iLocal_1165 = 1;
			}
		}
		else
		{
			iLocal_1165 = 0;
			Global_69669++;
			switch (Global_69669)
			{
				case 2:
					StringCopy(&Local_1166, "EPSW_VOICE2", 16);
					break;
				
				case 3:
					StringCopy(&Local_1166, "EPSW_VOICE3", 16);
					break;
				
				case 4:
					StringCopy(&Local_1166, "EPSW_VOICE4", 16);
					break;
				
				case 5:
					StringCopy(&Local_1166, "EPSW_VOICE5", 16);
					break;
				
				case 6:
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "PROXY_FUNCTION");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(6);
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_69669);
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					Global_69669 = -1;
					break;
				
				default:
					Global_69669 = -1;
					break;
				}
			}
	}
}

bool func_20(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_30(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_15763 = 0;
	Global_15765 = 0;
	Global_15770 = 0;
	Global_16747 = 0;
	Global_16749 = 0;
	Global_16753 = 0;
	Global_2621441 = 1;
	return func_21(sParam2, iParam3, 0);
}

int func_21(char* sParam0, int iParam1, bool bParam2)
{
	Global_15757 = 0;
	if (Global_15756 == 0 || Global_15758 == 2)
	{
		if (Global_15756 != 0)
		{
			if (iParam1 > Global_15758)
			{
				if (Global_15763 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_14453.f_1 = 3;
					Global_15756 = 0;
					Global_15757 = 1;
					Global_15809 = 0;
					Global_15752 = 0;
					Global_15753 = 0;
					Global_15767 = 0;
					Global_15766 = 0;
					Global_14452 = 0;
				}
				else
				{
					func_29();
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
		if (func_18(8, -1))
		{
			return 0;
		}
		Global_15832 = { Global_15826 };
		func_28();
		Global_15045 = { Global_15210 };
		Global_15762 = Global_15763;
		Global_15769 = Global_15770;
		Global_2621442 = Global_2621441;
		Global_15771 = { Global_15787 };
		Global_15764 = Global_15765;
		Global_16746 = Global_16747;
		Global_16754 = { Global_16760 };
		Global_16748 = Global_16749;
		Global_16750 = Global_16751;
		Global_16752 = Global_16753;
		Global_15375.f_370 = Global_16745;
		Global_15375.f_368 = Global_16743;
		Global_15375.f_369 = Global_16744;
		Global_15752 = Global_15753;
		if (Global_15762)
		{
			MISC::CLEAR_BIT(&Global_2323, 20);
			MISC::CLEAR_BIT(&Global_2324, 17);
			MISC::CLEAR_BIT(&Global_2325, 0);
			if (bParam2)
			{
				func_26();
				if (Global_3128[Global_14453 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_14453.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_14419 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_25())
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
				if (!Global_70856)
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
			if (func_24())
			{
				return 0;
			}
			else
			{
				switch (Global_14453.f_1)
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
				if (MISC::IS_BIT_SET(Global_2323, 9))
				{
					return 0;
				}
			}
			func_23();
			Global_15766 = bParam2;
		}
		Global_15758 = iParam1;
		StringCopy(&Global_15375, sParam0, 24);
		Global_14622 = 0;
		func_22();
		return 1;
	}
	if (Global_15756 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_15758 || iParam1 == Global_15758)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_29();
	}
	return 0;
}

void func_22()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_14624[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_15756 = 1;
}

void func_23()
{
	Global_15809 = Global_15808;
	Global_15803 = Global_15804;
	Global_15850 = { Global_15838 };
	Global_15856 = { Global_15844 };
	Global_15811 = Global_15810;
	Global_15880 = { Global_15862 };
	Global_15886 = { Global_15868 };
	Global_15892 = { Global_15874 };
	Global_15898 = { Global_15904 };
	Global_1638 = Global_1639;
	Global_1640 = Global_1641;
	Global_15767 = Global_15768;
	Global_15769 = Global_15770;
	Global_15771 = { Global_15787 };
	Global_15760 = Global_15761;
	Global_16772 = 0;
	Global_15805 = 0;
	Global_15806 = 0;
	MISC::CLEAR_BIT(&Global_2324, 16);
}

int func_24()
{
	if (Global_14453.f_1 == 1 || Global_14453.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_25()
{
	int iVar0;
	int iVar1;
	
	if (Global_70856)
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

void func_26()
{
	if (func_27(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), 0))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[0 /*29*/])
			{
				Global_14453 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[1 /*29*/])
			{
				Global_14453 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_104555.f_28020[2 /*29*/])
			{
				Global_14453 = 2;
			}
			else
			{
				Global_14453 = 0;
			}
		}
	}
	else
	{
		Global_14453 = func_1992();
		if (Global_14453 == 145)
		{
			Global_14453 = 3;
		}
		if (Global_70856)
		{
			Global_14453 = 3;
		}
		if (Global_14453 > 3)
		{
			Global_14453 = 3;
		}
	}
}

bool func_27(int iParam0)
{
	return Global_35861 == iParam0;
}

void func_28()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_15045[iVar0 /*10*/] = 0;
		StringCopy(&(Global_15045[iVar0 /*10*/].f_1), "", 24);
		Global_15045[iVar0 /*10*/].f_7 = 0;
		Global_15045[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15045.f_161 = -99;
	Global_15045.f_162 = { 0f, 0f, 0f };
}

void func_29()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_16767 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_14453.f_1 == 9) || Global_14452 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_15756 = 6;
		Global_14453.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_15756 = 6;
		return;
	}
}

void func_30(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15210 = { *uParam0 };
	Global_1639 = iParam1;
	StringCopy(&Global_15826, sParam2, 24);
	Global_16745 = uParam5;
	if (iParam3 == 0)
	{
		Global_16743 = 1;
		Global_16741 = 0;
	}
	else
	{
		Global_16743 = 0;
		Global_16741 = 1;
	}
	if (iParam4 == 0)
	{
		Global_16744 = 1;
		Global_16742 = 0;
	}
	else
	{
		Global_16744 = 0;
		Global_16742 = 1;
	}
}

int func_31()
{
	if (Global_15756 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_32()
{
	func_33(&uLocal_377, 0, 0, "CRIS", 0, 1);
	iLocal_1165 = 0;
	StringCopy(&Local_1166, "EPSW_VOICE1", 16);
}

void func_33(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_70856)
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

void func_34()
{
	if (iLocal_373 == 0)
	{
		func_35(1);
		iLocal_372 = Global_69469 + 7500;
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			Global_68381 = ENTITY::GET_ENTITY_HEALTH(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));
		}
		iLocal_373++;
	}
	if (iLocal_373 != 0)
	{
		switch (iLocal_373)
		{
			case 1:
				Global_68353 = 1;
				StringCopy(&(Global_68353.f_1), "BROWTUT1", 16);
				Global_68353.f_5 = 0;
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					StringCopy(&(Global_68353.f_1), "BROWTUT1_KM", 16);
				}
				break;
			
			case 2:
				StringCopy(&(Global_68353.f_1), "BROWTUT2", 16);
				Global_68353.f_5 = 0;
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					StringCopy(&(Global_68353.f_1), "BROWTUT2_KM", 16);
				}
				break;
			
			case 3:
				StringCopy(&(Global_68353.f_1), "BROWTUT3", 16);
				Global_68353.f_5 = 0;
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					StringCopy(&(Global_68353.f_1), "BROWTUT3_KM", 16);
				}
				break;
			
			case 4:
				StringCopy(&(Global_68353.f_1), "BROWTUT4", 16);
				Global_68353.f_5 = 0;
				break;
			
			case 5:
				StringCopy(&(Global_68353.f_1), "BROWTUT5", 16);
				Global_68353.f_5 = 0;
				if (PAD::_IS_INPUT_DISABLED(2))
				{
					StringCopy(&(Global_68353.f_1), "BROWTUT5_KM", 16);
				}
				break;
			
			case 6:
				if (MISC::IS_ORBIS_VERSION())
				{
					StringCopy(&(Global_68353.f_1), "BROWTUT1a", 16);
					Global_68353.f_5 = 0;
				}
				else
				{
					iLocal_373++;
				}
				break;
			
			default:
				Global_68353 = 0;
				iLocal_373 = 0;
				Global_104555.f_20534.f_470 = 1;
				func_35(0);
				break;
		}
		if (iLocal_372 < Global_69469)
		{
			iLocal_372 = Global_69469 + 7500;
			iLocal_373++;
		}
	}
}

void func_35(bool bParam0)
{
	if (!bParam0)
	{
		Global_103197 = MISC::GET_GAME_TIMER() + 250;
	}
	Global_103194 = bParam0;
}

int func_36()
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	return 1;
}

int func_37()
{
	if (Global_104555.f_20380.f_145 > 0)
	{
		return 0;
	}
	return 1;
}

void func_38(int iParam0, int iParam1)
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_39(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (bParam0)
	{
		if (!Global_70856)
		{
			if (!Global_104555.f_20534.f_99 && !Global_68352)
			{
				if (Global_104555.f_20534.f_470)
				{
					if (!Global_104555.f_20534.f_99)
					{
						func_97("BS_TUT_1", 2, 0, 1000, 10000, 7, 0, 0, 0);
						Global_104555.f_20534.f_99 = 1;
					}
				}
			}
		}
		if (iLocal_1132 == 8)
		{
			if (iLocal_1133 == 6)
			{
				Global_68339 = 1;
			}
			if (iLocal_1133 == 7)
			{
				Global_68339 = 0;
			}
		}
		if (iLocal_1132 == 9)
		{
			if (iLocal_1133 == 8)
			{
				if (Global_68339)
				{
					switch (func_1992())
					{
						case 0:
							iVar0 = 0;
							iVar1 = 0;
							break;
						
						case 2:
							iVar0 = 2;
							iVar1 = 2;
							break;
						
						case 1:
							iVar0 = 1;
							iVar1 = 1;
							break;
					}
					if (Global_68343 >= 0)
					{
						func_88(iVar1, iVar0, Global_68342, Global_68343, Global_68346);
					}
				}
				else
				{
					switch (func_1992())
					{
						case 0:
							iVar2 = 0;
							iVar3 = 0;
							break;
						
						case 2:
							iVar2 = 2;
							iVar3 = 2;
							break;
						
						case 1:
							iVar2 = 1;
							iVar3 = 1;
							break;
					}
					if (Global_68343 > 0)
					{
						func_84(iVar3, iVar2, Global_68342, Global_68343, Global_68346);
					}
				}
			}
			else if (iLocal_1133 == 16)
			{
				Global_68342 = -2;
				switch (func_1992())
				{
					case 0:
						iVar4 = 0;
						iVar5 = 0;
						break;
					
					case 2:
						iVar4 = 2;
						iVar5 = 2;
						break;
					
					case 1:
						iVar4 = 1;
						iVar5 = 1;
						break;
				}
				func_40(iVar5, iVar4);
			}
		}
		if (iLocal_1133 == 4)
		{
			if (iLocal_1132 == 6 || iLocal_1132 == 7)
			{
				Global_68343 = 0;
			}
		}
		if (iLocal_1132 == 4)
		{
			if (iLocal_1133 == 3 || iLocal_1133 == 2)
			{
				Global_68342 = -1;
			}
		}
	}
}

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	
	iVar0 = 0;
	iVar1 = 0;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	bVar6 = false;
	iVar7 = 0;
	while (iVar7 < 10)
	{
		if (func_83(iParam1, iVar7) > 0)
		{
			fVar8 = func_81(func_82(iParam1, iVar7));
			if (fVar8 > 0f)
			{
				iVar9 = func_83(iParam1, iVar7);
				iVar0 = (iVar0 + iVar9);
				iVar1++;
				fVar10 = (IntToFloat(func_83(iParam1, iVar7)) * fVar8);
				fVar11 = func_76(iParam1, iVar7);
				fVar2 = (fVar2 + fVar10);
				fVar12 = (fVar10 - fVar11);
				if (fVar12 > 0f)
				{
					fVar4 = (fVar4 + fVar12);
				}
				else
				{
					fVar5 = (fVar5 + -fVar12);
				}
				fVar3 = (fVar3 + fVar12);
				if (!bVar6 && fVar12 > 0f)
				{
					bVar6 = true;
				}
			}
		}
		iVar7++;
	}
	if (iVar0 == 0)
	{
		return;
	}
	fVar13 = SYSTEM::TO_FLOAT(func_75(iParam0));
	fVar14 = (fVar2 + fVar13);
	if (fVar13 < 1f)
	{
		fVar13 = 1f;
	}
	Global_68371 = ((fVar14 / fVar13) * 100f);
	Global_104555.f_20534.f_441 = (Global_104555.f_20534.f_441 + SYSTEM::FLOOR(fVar2));
	if (!func_74(0))
	{
		if (bVar6)
		{
			func_74(1);
		}
	}
	if (Global_55886 == 0)
	{
		Global_55886 = SYSTEM::FLOOR(fVar2);
	}
	if (Global_55886 == 0)
	{
		return;
	}
	if (!func_44(iParam0, 1, 2, Global_55886, 0))
	{
		return;
	}
	Global_55886 = 0;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 < 10)
	{
		func_43(iParam1, iVar7, 0, 0);
		iVar7++;
	}
	Global_68367 = iVar0;
	Global_68368 = iVar1;
	Global_68369 = fVar4;
	Global_68370 = fVar5;
	Global_68365 = fVar2;
	Global_68366 = fVar3;
	func_41(iParam1);
}

void func_41(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 80)
	{
		if (Global_48202[iVar0 /*36*/].f_8)
		{
			iVar1 = Global_48202[iVar0 /*36*/].f_35;
			if (iVar1 > -1)
			{
				iVar2 = func_42(iParam0, iVar0);
				if (Global_48202[iVar0 /*36*/].f_9 <= 0f)
				{
					iVar2 = 0;
				}
				STATS::STAT_SET_INT(Global_51083[iVar1 /*7*/].f_3[iParam0], iVar2, 1);
			}
		}
		iVar0++;
	}
}

int func_42(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_104555.f_20534[iVar0] == iParam1)
				{
					if (Global_104555.f_20534.f_22[iVar0] > 0)
					{
						return Global_104555.f_20534.f_22[iVar0];
					}
				}
				break;
			
			case 1:
				if (Global_104555.f_20534.f_33[iVar0] == iParam1)
				{
					if (Global_104555.f_20534.f_55[iVar0] > 0)
					{
						return Global_104555.f_20534.f_55[iVar0];
					}
				}
				break;
			
			case 2:
				if (Global_104555.f_20534.f_66[iVar0] == iParam1)
				{
					if (Global_104555.f_20534.f_88[iVar0] > 0)
					{
						return Global_104555.f_20534.f_88[iVar0];
					}
				}
				break;
		}
		iVar0++;
	}
	return 0;
}

void func_43(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_104555.f_20534[iParam1];
			break;
		
		case 1:
			iVar0 = Global_104555.f_20534.f_33[iParam1];
			break;
		
		case 2:
			iVar0 = Global_104555.f_20534.f_66[iParam1];
			break;
	}
	if (Global_48202[iVar0 /*36*/].f_9 <= 0f)
	{
		return;
	}
	iVar1 = 0;
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				Global_104555.f_20534.f_22[iParam1] = (Global_104555.f_20534.f_22[iParam1] + iParam2);
				iVar1 = Global_104555.f_20534.f_22[iParam1];
				break;
			
			case 1:
				Global_104555.f_20534.f_55[iParam1] = (Global_104555.f_20534.f_55[iParam1] + iParam2);
				iVar1 = Global_104555.f_20534.f_55[iParam1];
				break;
			
			case 2:
				Global_104555.f_20534.f_88[iParam1] = (Global_104555.f_20534.f_88[iParam1] + iParam2);
				iVar1 = Global_104555.f_20534.f_88[iParam1];
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Global_104555.f_20534.f_22[iParam1] = iParam2;
				iVar1 = Global_104555.f_20534.f_22[iParam1];
				break;
			
			case 1:
				Global_104555.f_20534.f_55[iParam1] = iParam2;
				iVar1 = Global_104555.f_20534.f_55[iParam1];
				break;
			
			case 2:
				Global_104555.f_20534.f_88[iParam1] = iParam2;
				iVar1 = Global_104555.f_20534.f_88[iParam1];
				break;
			}
	}
	if (Global_48202[iVar0 /*36*/].f_8)
	{
		iVar2 = Global_48202[iVar0 /*36*/].f_35;
		if (iVar2 > -1)
		{
			STATS::STAT_SET_INT(Global_51083[iVar2 /*7*/].f_3[iParam0], iVar1, 1);
		}
	}
	return;
}

int func_44(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_73();
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
					func_72(99, 1);
					func_38(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_57(0);
			switch (iParam2)
			{
				case 126:
				case 128:
				case 124:
				case 125:
				case 127:
					if (func_53(5))
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
							func_38(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_53(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
							break;
					}
					break;
				
				case 98:
				case 99:
				case 100:
				case 101:
				case 103:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
					switch (iParam0)
					{
						case 0:
							func_38(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_38(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_38(joaat("sp2_money_spent_property"), iParam3);
							break;
					}
					break;
				
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("clothes_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_53(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_38(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_38(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_38(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_52(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_72(95, iParam3);
					break;
				
				case 1:
					func_72(97, iParam3);
					break;
				
				case 2:
					func_72(96, iParam3);
					break;
			}
			func_72(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_47(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_47(iVar1);
	}
	iVar5 = (Global_53077[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_53077[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_53077[iVar2] = 2147483647;
				}
				else
				{
					Global_53077[iVar2] = (Global_53077[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_38(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_38(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_38(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_53077[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_53077[iVar2];
			Global_53077[iVar2] = (Global_53077[iVar2] - iParam3);
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
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_2[Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_104555.f_20534.f_233[iVar2 /*69*/]++;
		Global_104555.f_20534.f_233[iVar2 /*69*/].f_1++;
		if (Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 > 10)
		{
			Global_104555.f_20534.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_46(iParam0);
	if (Global_35861 == 15)
	{
		func_45(0);
	}
	return 1;
}

void func_45(bool bParam0)
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
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_104555.f_20534.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_53085[iVar0 /*3*/][0] = Global_104555.f_20534[iVar0];
		Global_53085.f_31[iVar0 /*3*/][0] = Global_104555.f_20534.f_11[iVar0];
		Global_53085.f_62[iVar0 /*3*/][0] = Global_104555.f_20534.f_22[iVar0];
		Global_53085.f_93[iVar0 /*3*/][0] = Global_104555.f_20534.f_33[iVar0];
		Global_53085.f_124[iVar0 /*3*/][0] = Global_104555.f_20534.f_44[iVar0];
		Global_53085.f_155[iVar0 /*3*/][0] = Global_104555.f_20534.f_55[iVar0];
		Global_53085.f_186[iVar0 /*3*/][0] = Global_104555.f_20534.f_66[iVar0];
		Global_53085.f_217[iVar0 /*3*/][0] = Global_104555.f_20534.f_77[iVar0];
		Global_53085.f_248[iVar0 /*3*/][0] = Global_104555.f_20534.f_88[iVar0];
		if (!bParam0)
		{
			Global_53085[iVar0 /*3*/][1] = Global_104555.f_20534[iVar0];
			Global_53085.f_31[iVar0 /*3*/][1] = Global_104555.f_20534.f_11[iVar0];
			Global_53085.f_62[iVar0 /*3*/][1] = Global_104555.f_20534.f_22[iVar0];
			Global_53085.f_93[iVar0 /*3*/][1] = Global_104555.f_20534.f_33[iVar0];
			Global_53085.f_124[iVar0 /*3*/][1] = Global_104555.f_20534.f_44[iVar0];
			Global_53085.f_155[iVar0 /*3*/][1] = Global_104555.f_20534.f_55[iVar0];
			Global_53085.f_186[iVar0 /*3*/][1] = Global_104555.f_20534.f_66[iVar0];
			Global_53085.f_217[iVar0 /*3*/][1] = Global_104555.f_20534.f_77[iVar0];
			Global_53085.f_248[iVar0 /*3*/][1] = Global_104555.f_20534.f_88[iVar0];
		}
		iVar0++;
	}
}

void func_46(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_53077[iParam0];
	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, 1);
			break;
		
		case 1:
			STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, 1);
			break;
		
		case 2:
			STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, 1);
			break;
	}
}

void func_47(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_50(129, 0, -1, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (MISC::IS_BIT_SET(Global_104555.f_20534.f_471, iParam0))
		{
			bVar0 = true;
			MISC::CLEAR_BIT(&(Global_104555.f_20534.f_471), iParam0);
		}
	}
	else if (MISC::IS_BIT_SET(Global_104555.f_20534.f_471, iParam0) || MISC::IS_BIT_SET(Global_2097152[func_49() /*12130*/].f_7676.f_10, iParam0))
	{
		bVar0 = true;
		MISC::CLEAR_BIT(&(Global_104555.f_20534.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2097152[func_49() /*12130*/].f_7676.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_48(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_48(int iParam0)
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
		
		default:
	}
	return "";
}

int func_49()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_50(int iParam0, bool bParam1, int iParam2, int iParam3)
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	
	if (iParam2 == -1)
	{
		iParam2 = func_51();
	}
	iVar0 = 0;
	if (iParam0 >= 0 && iParam0 < 192)
	{
		iVar2 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 0), 0, 1, iParam2);
		iVar1 = ((iParam0 - 0) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 0)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar2, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 192 && iParam0 < 384)
	{
		iVar3 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 192), 1, 1, iParam2);
		iVar1 = ((iParam0 - 192) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 192)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar3, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 513 && iParam0 < 705)
	{
		iVar4 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 513), 0, 0, 0);
		iVar1 = ((iParam0 - 513) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 513)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar4, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 705 && iParam0 < 1281)
	{
		iVar5 = STATS::_GET_PSTAT_BOOL_HASH((iParam0 - 705), 1, 0, 0);
		iVar1 = ((iParam0 - 705) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 705)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar5, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 3111 && iParam0 < 3879)
	{
		iVar6 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 3111), 0, 1, iParam2);
		iVar1 = ((iParam0 - 3111) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 3111)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar6, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 2919 && iParam0 < 3111)
	{
		iVar7 = STATS::_GET_TUPSTAT_BOOL_HASH((iParam0 - 2919), 0, 0, 0);
		iVar1 = ((iParam0 - 2919) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 2919)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar7, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4207 && iParam0 < 4335)
	{
		iVar8 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4207), 0, 1, iParam2, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4207) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4207)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar8, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 4335 && iParam0 < 4399)
	{
		iVar9 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 4335), 0, 0, 0, "_NGPSTAT_BOOL");
		iVar1 = ((iParam0 - 4335) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 4335)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar9, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 6029 && iParam0 < 6413)
	{
		iVar10 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 6029), 0, 1, iParam2, "_NGTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 6029) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 6029)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar10, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7385 && iParam0 < 7641)
	{
		iVar11 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7385), 0, 1, iParam2, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7385) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7385)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar11, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 7321 && iParam0 < 7385)
	{
		iVar12 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 7321), 0, 0, 0, "_NGDLCPSTAT_BOOL");
		iVar1 = ((iParam0 - 7321) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 7321)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar12, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 9361 && iParam0 < 9553)
	{
		iVar13 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 9361), 0, 1, iParam2, "_DLCBIKEPSTAT_BOOL");
		iVar1 = ((iParam0 - 9361) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 9361)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar13, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15369 && iParam0 < 15561)
	{
		iVar14 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15369), 0, 1, iParam2, "_DLCGUNPSTAT_BOOL");
		iVar1 = ((iParam0 - 15369) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15369)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar14, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15562 && iParam0 < 15946)
	{
		iVar15 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15562), 0, 1, iParam2, "_GUNTATPSTAT_BOOL");
		iVar1 = ((iParam0 - 15562) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15562)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar15, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 15946 && iParam0 < 16010)
	{
		iVar16 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 15946), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_BOOL");
		iVar1 = ((iParam0 - 15946) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 15946)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar16, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 18098 && iParam0 < 18162)
	{
		iVar17 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 18098), 0, 1, iParam2, "_GANGOPSPSTAT_BOOL");
		iVar1 = ((iParam0 - 18098) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 18098)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar17, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_51()
{
	return Global_1312736;
}

void func_52(int iParam0)
{
	func_72(93, iParam0);
	func_72(29, iParam0);
	func_72(30, iParam0);
}

bool func_53(int iParam0)
{
	if (iParam0 == 8)
	{
		return func_54(129, -1, -1);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return MISC::IS_BIT_SET(Global_104555.f_20534.f_471, iParam0);
	}
	return MISC::IS_BIT_SET(Global_2097152[func_49() /*12130*/].f_7676.f_10, iParam0);
}

int func_54(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_51();
	}
	iVar1 = func_56(iParam0, iParam1);
	uVar2 = func_55(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_55(int iParam0)
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

int func_56(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_51();
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

int func_57(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_71(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_58(27, 1);
	return 1;
}

int func_58(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_59(iParam0, iParam1);
}

int func_59(int iParam0, int iParam1)
{
	if (func_27(14) && !func_70(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_25480 != 0 && !Global_70856)
	{
		return 0;
	}
	if (func_69(&Global_4267379))
	{
		if (func_67(&Global_4267379, iParam0))
		{
			return 0;
		}
		if (func_60(&Global_4267379, iParam0))
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

int func_60(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_70(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	if (func_66(uParam0) < 0f)
	{
		func_65(uParam0, 0);
	}
	func_63(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_61(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_61(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_27(14) && !func_70(iParam1))
	{
		return 0;
	}
	if (func_67(uParam0, iParam1))
	{
		return 0;
	}
	if (func_66(uParam0) < 0f)
	{
		func_65(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_62(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_62(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_63(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_64(uParam0, iVar0);
		iVar0++;
	}
	func_65(uParam0, (Global_4267378 - 0.5f));
}

void func_64(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_65(var uParam0, float fParam1)
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

float func_66(var uParam0)
{
	return uParam0->f_80;
}

bool func_67(var uParam0, int iParam1)
{
	return func_68(uParam0, iParam1) != -1;
}

int func_68(var uParam0, int iParam1)
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

bool func_69(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_70(int iParam0)
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

int func_71(int iParam0, int iParam1)
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
	iVar0 = PLAYER::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

void func_72(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_51645[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_51645[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_51645[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_73()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
		if (!Global_53077[0] == iVar0)
		{
			Global_53077[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
		if (!Global_53077[1] == iVar0)
		{
			Global_53077[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
		if (!Global_53077[2] == iVar0)
		{
			Global_53077[2] = iVar0;
		}
	}
}

int func_74(bool bParam0)
{
	if (Global_104555.f_20534.f_441 <= 0 && !bParam0)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(28))
	{
		return 0;
	}
	func_58(28, 1);
	return 1;
}

var func_75(int iParam0)
{
	return Global_53077[iParam0];
}

float func_76(int iParam0, int iParam1)
{
	float fVar0;
	
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0f;
	}
	fVar0 = func_77(func_82(iParam0, iParam1));
	if (fVar0 > 0f)
	{
		switch (iParam0)
		{
			case 0:
				return Global_104555.f_20534.f_11[iParam1];
			
			case 1:
				return Global_104555.f_20534.f_44[iParam1];
			
			case 2:
				return Global_104555.f_20534.f_77[iParam1];
			}
		
		default:
	}
	return 0f;
}

float func_77(int iParam0)
{
	int iVar0;
	float fVar1;
	
	iVar0 = iParam0;
	fVar1 = (Global_48202[iParam0 /*36*/].f_9 * func_78(iVar0));
	return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}

float func_78(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = 1f;
	switch (iParam0)
	{
		case 61:
			if (Global_104555.f_9055.f_99.f_58[131])
			{
				fVar0 = 0.5f;
			}
			break;
		
		case 73:
			if (func_80(25))
			{
				fVar0 = (fVar0 * 3f);
			}
			else
			{
				if (func_80(74) || func_80(75))
				{
					fVar0 = (fVar0 * 0.95f);
				}
				if (func_80(14))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_80(16))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_80(48))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_80(24))
				{
					fVar0 = (fVar0 * 0.98f);
				}
				if (func_80(27))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
		
		case 66:
			if (func_80(49))
			{
				fVar0 = (fVar0 * 0.5f);
			}
			if (func_80(10))
			{
				fVar0 = (fVar0 * 0.95f);
			}
			break;
		
		case 59:
			if (func_80(93))
			{
				if (!func_80(47))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_80(38))
			{
				if (!func_80(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			if (func_80(84))
			{
				if (!func_80(28))
				{
					fVar0 = (fVar0 * 0.9f);
				}
			}
			break;
		
		case 69:
			if (func_80(90))
			{
				if (!func_80(14))
				{
					fVar0 = (fVar0 * 0.7f);
				}
			}
			break;
		
		case 16:
			if (func_80(28))
			{
				fVar0 = (fVar0 * 2f);
			}
			break;
		
		case 52:
			if (func_80(93))
			{
				if (!func_80(28))
				{
					fVar0 = (fVar0 * 0.6f);
				}
			}
			break;
		
		case 56:
			if (func_80(61))
			{
				if (!func_80(49))
				{
					fVar0 = (fVar0 * 0.5f);
				}
			}
			break;
	}
	if (Global_104555.f_20534.f_442 < 1)
	{
		return fVar0;
	}
	iVar1 = -1;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 8)
	{
		if (Global_104555.f_20534.f_443[iVar2] == iParam0)
		{
			iVar1 = iVar2;
		}
		iVar2++;
	}
	if (iVar1 > -1)
	{
		fVar0 = func_79(Global_104555.f_20534.f_452[iVar1], Global_104555.f_20534.f_461[iVar1]);
	}
	if (fVar0 > 1f)
	{
		fVar3 = (fVar0 - 1f);
		iVar4 = iParam0;
		iVar5 = func_83(0, iVar4);
		iVar6 = func_83(1, iVar4);
		iVar7 = func_83(2, iVar4);
		if (((iVar5 + iVar6) + iVar7) > 0)
		{
			iVar8 = ((Global_53077[0] + Global_53077[1]) + Global_53077[2]);
			iVar2 = 0;
			while (iVar2 < 10)
			{
				if (Global_104555.f_20534.f_22[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_104555.f_20534.f_11[iVar2]));
				}
				if (Global_104555.f_20534.f_55[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_104555.f_20534.f_44[iVar2]));
				}
				if (Global_104555.f_20534.f_88[iVar2] > 0)
				{
					iVar8 = (iVar8 + SYSTEM::FLOOR(Global_104555.f_20534.f_77[iVar2]));
				}
				iVar2++;
			}
			iVar9 = 700000000;
			iVar10 = 1000000000;
			if (iVar8 > iVar10)
			{
				fVar3 = 0f;
			}
			else if (iVar8 < iVar9)
			{
				fVar3 = 1f;
			}
			else
			{
				fVar11 = SYSTEM::TO_FLOAT((iVar8 - iVar9));
				fVar12 = SYSTEM::TO_FLOAT((iVar10 - iVar9));
				fVar3 = (fVar3 * (1f - (fVar11 / fVar12)));
			}
		}
		fVar0 = (1f + fVar3);
	}
	return fVar0;
}

float func_79(int iParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	
	fVar0 = 0f;
	if (iParam0 < 1)
	{
		return 1f;
	}
	bVar1 = MISC::IS_BIT_SET(iParam1, 0);
	fVar2 = SYSTEM::TO_FLOAT(iParam0);
	iVar3 = 0;
	if (MISC::IS_BIT_SET(iParam1, 3))
	{
		iVar3++;
	}
	if (MISC::IS_BIT_SET(iParam1, 4))
	{
		iVar3 += 2;
	}
	if (MISC::IS_BIT_SET(iParam1, 5))
	{
		iVar3 += 4;
	}
	if (MISC::IS_BIT_SET(iParam1, 20))
	{
		iVar3 += 8;
	}
	fVar4 = SYSTEM::TO_FLOAT((3 * iVar3));
	if (MISC::IS_BIT_SET(iParam1, 2))
	{
		fVar4 = (fVar4 * 7f);
	}
	if (MISC::IS_BIT_SET(iParam1, 1))
	{
		if (func_80(21))
		{
			return 1f;
		}
	}
	else if (fVar4 < 1f)
	{
		return 1f;
	}
	fVar5 = (1f - (fVar2 / fVar4));
	if (MISC::IS_BIT_SET(iParam1, 16))
	{
		fVar0 = (fVar0 - 0.5f);
	}
	if (MISC::IS_BIT_SET(iParam1, 17))
	{
		fVar0 = (fVar0 - 0.25f);
	}
	if (MISC::IS_BIT_SET(iParam1, 18))
	{
		fVar0 = (fVar0 - 0.1f);
	}
	if (MISC::IS_BIT_SET(iParam1, 19))
	{
		fVar0 = (fVar0 - 0.33f);
	}
	if (bVar1)
	{
		fVar0 = -fVar0;
	}
	if (!MISC::IS_BIT_SET(iParam1, 1))
	{
		if (MISC::IS_BIT_SET(iParam1, 6))
		{
			fVar6 = 0f;
			if (MISC::IS_BIT_SET(iParam1, 8))
			{
				fVar6 = (fVar6 + 0.5f);
			}
			if (MISC::IS_BIT_SET(iParam1, 9))
			{
				fVar6 = (fVar6 + 0.25f);
			}
			if (MISC::IS_BIT_SET(iParam1, 10))
			{
				fVar6 = (fVar6 + 0.125f);
			}
			if (fVar5 < fVar6)
			{
				fVar7 = (fVar5 / fVar6);
				if (MISC::IS_BIT_SET(iParam1, 7))
				{
					fVar7 = (1f - fVar7);
					fVar7 = (fVar7 * fVar7);
					fVar7 = (1f - fVar7);
				}
				fVar0 = (fVar0 * fVar7);
			}
		}
		if (MISC::IS_BIT_SET(iParam1, 11))
		{
			fVar8 = 0f;
			if (MISC::IS_BIT_SET(iParam1, 13))
			{
				fVar8 = (fVar8 + 0.5f);
			}
			if (MISC::IS_BIT_SET(iParam1, 14))
			{
				fVar8 = (fVar8 + 0.25f);
			}
			if (MISC::IS_BIT_SET(iParam1, 15))
			{
				fVar8 = (fVar8 + 0.125f);
			}
			fVar9 = (1f - fVar8);
			if (fVar5 > fVar9)
			{
				fVar10 = ((fVar5 - fVar9) / fVar8);
				if (MISC::IS_BIT_SET(iParam1, 12))
				{
					fVar10 = (fVar10 * fVar10);
				}
				fVar0 = (fVar0 * (1f - fVar10));
			}
		}
	}
	fVar0 = (1f + fVar0);
	return fVar0;
}

bool func_80(int iParam0)
{
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

var func_81(int iParam0)
{
	var uVar0;
	int iVar1;
	
	if (Global_48202[iParam0 /*36*/].f_8)
	{
		uVar0 = func_77(iParam0);
	}
	else
	{
		iVar1 = (Global_48202[iParam0 /*36*/].f_13 - 1);
		if (iVar1 < 0)
		{
			iVar1 = 15;
		}
		uVar0 = Global_48202[iParam0 /*36*/].f_14[iVar1];
	}
	return uVar0;
}

int func_82(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 31;
	}
	switch (iParam0)
	{
		case 0:
			return Global_104555.f_20534[iParam1];
		
		case 1:
			return Global_104555.f_20534.f_33[iParam1];
		
		case 2:
			return Global_104555.f_20534.f_66[iParam1];
		
		default:
	}
	return 31;
}

int func_83(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			return Global_104555.f_20534.f_22[iParam1];
			break;
		
		case 1:
			return Global_104555.f_20534.f_55[iParam1];
			break;
		
		case 2:
			return Global_104555.f_20534.f_88[iParam1];
			break;
	}
	return 0;
}

void func_84(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	
	iVar0 = -1;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (func_82(iParam1, iVar1) == iParam2)
		{
			if (func_83(iParam1, iVar1) > 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 == -1)
	{
		return;
	}
	iVar2 = func_83(iParam1, iVar0);
	fVar3 = func_76(iParam1, iVar0);
	if (func_83(iParam1, iVar0) < iParam3)
	{
		return;
	}
	if (!func_44(iParam0, 1, 2, SYSTEM::FLOOR(fParam4), 0))
	{
		return;
	}
	fVar4 = (fParam4 - ((func_76(iParam1, iVar0) / IntToFloat(func_83(iParam1, iVar0))) * IntToFloat(iParam3)));
	if (fVar4 <= -50000f)
	{
		func_86();
	}
	func_85(iParam1, iVar0, -fParam4, 1);
	func_43(iParam1, iVar0, -iParam3, 1);
	Global_104555.f_20534.f_441 = (Global_104555.f_20534.f_441 + SYSTEM::FLOOR(fParam4));
	if (!func_74(0))
	{
		fVar5 = (SYSTEM::TO_FLOAT(iParam3) / SYSTEM::TO_FLOAT(iVar2));
		fVar6 = (fVar3 * fVar5);
		if (fParam4 > fVar6)
		{
			func_74(1);
		}
	}
	if (Global_48202[iParam2 /*36*/].f_8)
	{
		iVar7 = Global_48202[iParam2 /*36*/].f_35;
		if (iVar7 > -1)
		{
			STATS::STAT_SET_INT(Global_51083[iVar7 /*7*/].f_3[iParam1], func_83(iParam1, iVar0), 1);
		}
	}
	if (fVar4 > 100000f)
	{
		STATS::_0x11FF1C80276097ED(joaat("sp0_crouched_and_shot"), 20, 0);
	}
	else if (fVar4 < 0f)
	{
		if (fVar4 < -100000f)
		{
			STATS::_0x11FF1C80276097ED(joaat("sp0_crouched_and_shot"), 30, 0);
		}
	}
	if (Global_48202[iParam2 /*36*/].f_8)
	{
		func_41(iParam1);
	}
}

void func_85(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	if (bParam3)
	{
		switch (iParam0)
		{
			case 0:
				Global_104555.f_20534.f_11[iParam1] = (Global_104555.f_20534.f_11[iParam1] + fParam2);
				if (Global_104555.f_20534.f_11[iParam1] < 0f)
				{
					Global_104555.f_20534.f_11[iParam1] = 0f;
				}
				break;
			
			case 1:
				Global_104555.f_20534.f_44[iParam1] = (Global_104555.f_20534.f_44[iParam1] + fParam2);
				if (Global_104555.f_20534.f_44[iParam1] < 0f)
				{
					Global_104555.f_20534.f_44[iParam1] = 0f;
				}
				break;
			
			case 2:
				Global_104555.f_20534.f_77[iParam1] = (Global_104555.f_20534.f_77[iParam1] + fParam2);
				if (Global_104555.f_20534.f_77[iParam1] < 0f)
				{
					Global_104555.f_20534.f_77[iParam1] = 0f;
				}
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				Global_104555.f_20534.f_11[iParam1] = fParam2;
				if (Global_104555.f_20534.f_11[iParam1] < 0f)
				{
					Global_104555.f_20534.f_11[iParam1] = 0f;
				}
				break;
			
			case 1:
				Global_104555.f_20534.f_44[iParam1] = fParam2;
				if (Global_104555.f_20534.f_44[iParam1] < 0f)
				{
					Global_104555.f_20534.f_44[iParam1] = 0f;
				}
				break;
			
			case 2:
				Global_104555.f_20534.f_77[iParam1] = fParam2;
				if (Global_104555.f_20534.f_77[iParam1] < 0f)
				{
					Global_104555.f_20534.f_77[iParam1] = 0f;
				}
				break;
			}
	}
	return;
}

void func_86()
{
	int iVar0;
	
	iVar0 = func_87(76);
	Global_2413945[iVar0 /*83*/] = 76;
	StringCopy(&(Global_2413945[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_2413945[iVar1 /*83*/] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_2413945[iVar1 /*83*/] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	
	iVar0 = func_96(iParam1, iParam2);
	if (iVar0 == -1)
	{
		Global_55891 = 1;
		return;
	}
	Global_55891 = 0;
	if (func_83(iParam1, iVar0) == 0)
	{
		func_85(iParam1, iVar0, 0f, 0);
	}
	iVar1 = SYSTEM::CEIL(fParam4);
	bVar2 = false;
	if (iVar1 > Global_53077[iParam0])
	{
		iVar1 = Global_53077[iParam0];
		bVar2 = true;
	}
	if (!func_44(iParam0, 0, 2, iVar1, bVar2))
	{
		return;
	}
	func_43(iParam1, iVar0, iParam3, 1);
	func_85(iParam1, iVar0, fParam4, 1);
	func_95(iParam1, iVar0, iParam2);
	Global_104555.f_20534.f_441 = (Global_104555.f_20534.f_441 - SYSTEM::CEIL(fParam4));
	if (fParam4 > 1000000f)
	{
		func_94();
	}
	func_89(310, 0, 0);
	if (iParam3 < 1)
	{
		return;
	}
	if (Global_48202[iParam2 /*36*/].f_8)
	{
		iVar3 = Global_48202[iParam2 /*36*/].f_35;
		if (iVar3 > -1)
		{
			STATS::STAT_SET_INT(Global_51083[iVar3 /*7*/].f_3[iParam1], func_83(iParam1, iVar0), 1);
		}
	}
	if (fParam4 > 1000000f)
	{
		STATS::_0x11FF1C80276097ED(joaat("sp0_crouched_and_shot"), 10, 0);
	}
	if (Global_48202[iParam2 /*36*/].f_8)
	{
		func_41(iParam1);
	}
	if (Global_35861 == 15)
	{
		func_45(1);
	}
}

void func_89(int iParam0, int iParam1, int iParam2)
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
		func_50((891 + iParam0), 1, -1, 1);
	}
	bVar0 = true;
	if (Global_104555.f_10164[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_104555.f_10164[iParam0 /*12*/].f_6 == 11 || Global_104555.f_10164[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_104555.f_10164[iParam0 /*12*/].f_5 = 1;
		Global_104555.f_10164[iParam0 /*12*/].f_10 = iParam1;
		Global_104555.f_10164[iParam0 /*12*/].f_11 = iParam2;
		if (iParam0 == 287)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::_0x11FF1C80276097ED(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_90();
	}
}

void func_90()
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
	Global_104291 = 0;
	Global_104292 = 0;
	Global_104293 = 0;
	Global_104294 = 0;
	Global_104295 = 0;
	Global_104296 = 0;
	Global_104297 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_104555.f_10164.f_3853;
	Global_104555.f_10164.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_104555.f_10164[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_104555.f_10164[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_104291++;
					fVar1 = (fVar1 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_104292++;
					fVar2 = (fVar2 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_104293++;
					fVar3 = (fVar3 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_104294++;
					fVar4 = (fVar4 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_104295++;
					fVar5 = (fVar5 + (Global_104555.f_10164[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_104296++;
					fVar6 = (fVar6 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_104297++;
					fVar7 = (fVar7 + Global_104555.f_10164[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_104274 > 0)
	{
		if (Global_104291 == Global_104274)
		{
			fVar1 = 55f;
		}
	}
	if (Global_104275 > 0)
	{
		if (Global_104292 == Global_104275)
		{
			fVar2 = 10f;
		}
	}
	if (Global_104276 > 0)
	{
		if (Global_104293 == Global_104276)
		{
			fVar3 = 0f;
		}
	}
	if (Global_104277 > 0)
	{
		if (Global_104294 == Global_104277)
		{
			fVar4 = 10f;
		}
	}
	if (Global_104278 > 0)
	{
		if (((Global_104295 == Global_104278 || (Global_104278 * 10 / Global_104295) < 41) || Global_104295 > Global_104281) || Global_104295 == Global_104281)
		{
			if (!MISC::IS_BIT_SET(Global_104555.f_10164.f_3856, 14))
			{
				if (Global_104295 == Global_104278)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_104278, 0);
					MISC::SET_BIT(&(Global_104555.f_10164.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_104279 > 0)
	{
		if (Global_104296 == Global_104279)
		{
			fVar6 = 15f;
		}
	}
	if (Global_104280 > 0)
	{
		if (Global_104297 == Global_104280)
		{
			fVar7 = 5f;
		}
	}
	Global_104555.f_10164.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_104295 > Global_104281 || Global_104295 == Global_104281)
	{
		iVar9 = Global_104281;
	}
	else
	{
		iVar9 = Global_104295;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_104291, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_104274, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_104292, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_104275, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_104293, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_104276, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_104294, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_104277, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_104281, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_104297 + Global_104296), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_104280 + Global_104279), 1);
	Global_104298 = (Global_104291 * 100 / Global_104274);
	Global_104300 = ((Global_104293 + Global_104292) * 100 / (Global_104276 + Global_104275));
	Global_104299 = ((Global_104294 + iVar9) * 100 / (Global_104277 + Global_104281));
	Global_104301 = ((Global_104296 + Global_104297) * 100 / (Global_104279 + Global_104280));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_104555.f_10164.f_3853, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_104298, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_104299, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_104300, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_104555.f_10164.f_3853))
	{
		func_71(13, SYSTEM::FLOOR(Global_104555.f_10164.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_70856)
		{
			if (func_93() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_104289 = 0;
				}
				if (!Global_55903)
				{
					func_91();
				}
			}
		}
	}
}

int func_91()
{
	if (func_92(0))
	{
		return 0;
	}
	if (Global_92872.f_8)
	{
		if (Global_92872.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_92872.f_10 > 1)
	{
		return 0;
	}
	Global_92872.f_10++;
	return 1;
}

bool func_92(bool bParam0)
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return MISC::IS_BIT_SET(Global_71104, 0);
}

int func_93()
{
	return Global_25233;
}

void func_94()
{
	int iVar0;
	
	iVar0 = func_87(77);
	Global_2413945[iVar0 /*83*/] = 77;
	StringCopy(&(Global_2413945[iVar0 /*83*/].f_18[0 /*16*/]), "", 64);
}

void func_95(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > 9)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			Global_104555.f_20534[iParam1] = iParam2;
			break;
		
		case 1:
			Global_104555.f_20534.f_33[iParam1] = iParam2;
			break;
		
		case 2:
			Global_104555.f_20534.f_66[iParam1] = iParam2;
			break;
	}
	return;
}

int func_96(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar0 = -1;
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 < 10)
	{
		if (func_83(iParam0, iVar2) == 0 && !bVar1)
		{
			iVar0 = iVar2;
		}
		if (func_82(iParam0, iVar2) == iParam1 && func_83(iParam0, iVar2) > 0)
		{
			bVar1 = true;
			iVar0 = iVar2;
		}
		iVar2++;
	}
	return iVar0;
}

void func_97(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_98(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_98(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
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
	while (iVar0 < Global_104555.f_20380.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_104555.f_20380[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_104555.f_20380.f_145 < 9)
	{
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_4), sParam1, 16);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_9 = iParam5;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_11 = iParam6;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_12 = uParam2;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_13 = iParam7;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_14 = iParam8;
		Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_104555.f_20380[Global_104555.f_20380.f_145 /*16*/].f_10 = -1;
		}
		Global_104555.f_20380.f_145++;
		func_6();
	}
}

int func_99(int iParam0)
{
	if (Global_35861 == 15)
	{
		return 0;
	}
	if (func_100(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_100(int iParam0)
{
	return func_101(iParam0, Global_35861);
}

int func_101(int iParam0, int iParam1)
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

void func_102()
{
	int iVar0;
	
	iLocal_46 = -1;
	iLocal_47 = -1;
	iLocal_49 = -1;
	iLocal_48 = 0;
	iVar0 = 0;
	while (iVar0 <= 99)
	{
		iLocal_50[iVar0] = 211;
		iVar0++;
	}
	func_103();
}

void func_103()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iLocal_51[iVar0] = -1;
		iVar0++;
	}
	iLocal_53 = 0;
}

void func_104()
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "DISABLE_VIDEO");
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "UPDATE_TEXT");
	GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	iLocal_318 = 1;
}

int func_105(int iParam0)
{
	if (iParam0 == 94 || iParam0 == -1)
	{
		return 0;
	}
	return Global_104555.f_9055.f_330[iParam0 /*6*/];
}

void func_106()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = HUD::_0x01A358D9128B7A86();
	iVar1 = HUD::GET_CURRENT_WEBSITE_ID();
	if ((iLocal_320 == 18 && ((iLocal_322 == 1 || iLocal_322 == 2) || iLocal_324)) && Global_70856)
	{
		if (Global_68380)
		{
			func_1789(iLocal_304);
			Global_68380 = 0;
		}
	}
	if ((iLocal_320 == 27 && ((iLocal_322 == 1 || iLocal_322 == 2) || iLocal_324)) && Global_70856)
	{
		if (Global_68380)
		{
			func_1659(iLocal_304, 0);
			Global_68380 = 0;
		}
	}
	if ((iLocal_320 == 28 && ((iLocal_322 == 1 || iLocal_322 == 2) || iLocal_324)) && Global_70856)
	{
		if (Global_68380)
		{
			func_1618(iLocal_304, 0);
			Global_68380 = 0;
		}
	}
	iLocal_324 = 0;
	bVar2 = false;
	if (iVar0 > 0)
	{
		if (iLocal_322 != iVar0)
		{
			bVar2 = true;
		}
		iLocal_322 = iVar0;
		Global_68372 = 0;
	}
	else
	{
		Global_68372 = 1;
	}
	if (iVar1 > 0)
	{
		if (iLocal_320 != iVar1)
		{
			bVar2 = true;
		}
		iLocal_320 = iVar1;
	}
	else
	{
		Global_68372 = 1;
	}
	if (Global_68333 != iLocal_320)
	{
		iLocal_316 = 0;
	}
	Global_68332 = iLocal_322;
	Global_68333 = iLocal_320;
	if (bVar2)
	{
		iLocal_322 = iVar0;
		iLocal_320 = iVar1;
		Global_68332 = iLocal_322;
		Global_68333 = iLocal_320;
		func_107();
	}
}

void func_107()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
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
	
	bVar0 = false;
	if (iLocal_321 != iLocal_322 || iLocal_319 != iLocal_320)
	{
		func_1586(iLocal_320);
	}
	iVar1 = HUD::_0xE3B05614DCE1D014(2);
	if (iVar1 == 0)
	{
	}
	else if (iVar1 < iLocal_323)
	{
	}
	if (iLocal_321 != iLocal_322 || iVar1 < iLocal_323)
	{
		if (iLocal_1145)
		{
			iLocal_1145 = 0;
		}
		if (func_1585(iLocal_320, (iLocal_322 - 3)) && func_1582(func_1584(iLocal_320, iLocal_322)) == 0)
		{
			func_1581(-1, -1, 1);
			func_1905(iLocal_320, 9, func_1584(iLocal_320, iLocal_322), -1);
		}
		else if (iLocal_320 == iLocal_319 || iVar1 < iLocal_323)
		{
			iLocal_1145 = 0;
			switch (iLocal_320)
			{
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 16:
				case 26:
					iLocal_1145 = 0;
					if (iLocal_322 != iLocal_321 || iVar1 < iLocal_323)
					{
						iVar2 = func_1584(iLocal_320, iLocal_322);
						if (iVar2 != -1)
						{
							iLocal_1145 = 1;
							if (func_1580(iVar2, iLocal_320, &iLocal_1145, &Global_69651, &Global_69652))
							{
							}
						}
						iLocal_375 = -1;
						iLocal_376 = 0;
						bVar3 = false;
						if (Global_70856)
						{
							iVar4 = -1;
							if (((((iVar2 == 215 || iVar2 == 217) || iVar2 == 243) || iVar2 == 244) || iVar2 == 257) || iVar2 == 253)
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_68353.f_1)) || !MISC::ARE_STRINGS_EQUAL(&(Global_68353.f_1), "HELP_PASSIVE"))
								{
									func_1676("HELP_PASSIVE", 0, 0, 0, 0);
									iLocal_372 = Global_69469 + 7500;
									bVar3 = true;
								}
							}
							else if (func_1578(iVar2, &iVar4) || func_1574(iLocal_320))
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_68353.f_1)) || !MISC::ARE_STRINGS_EQUAL(&(Global_68353.f_1), "HELP_VEHRE"))
								{
									func_1676("HELP_VEHRE", 0, 0, 0, 0);
									iLocal_372 = Global_69469 + 7500;
									bVar3 = true;
								}
							}
							else if (iVar2 == 95 && !NETWORK::_0x67A5589628E0CFF6())
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_68353.f_1)) || !MISC::ARE_STRINGS_EQUAL(&(Global_68353.f_1), "HELP_VEHSC"))
								{
									func_1676("HELP_VEHSC", 0, 0, 0, 0);
									iLocal_372 = Global_69469 + 7500;
									bVar3 = true;
								}
							}
							else if (func_1572(func_1573(iVar2, -1)) != -1)
							{
								iLocal_375 = iVar2;
							}
							else if (func_1571(iVar2))
							{
								iLocal_375 = iVar2;
							}
							else if (iVar2 == 324)
							{
								iLocal_375 = iVar2;
							}
							else if (func_1570(func_1573(iVar2, -1)) != -1)
							{
								iLocal_375 = iVar2;
							}
							else if (func_1569(func_1573(iVar2, -1)) > 0)
							{
								iLocal_375 = iVar2;
							}
							else if (func_1568(func_1573(iVar2, -1)) != -1)
							{
								iLocal_375 = iVar2;
							}
							else if (iVar2 == 381 && func_53(8))
							{
								if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_68353.f_1)) || !MISC::ARE_STRINGS_EQUAL(&(Global_68353.f_1), "HELP_VEHX17"))
								{
									func_1676("HELP_VEHX17", 0, 0, 0, 0);
									iLocal_372 = Global_69469 + 7500;
									bVar3 = true;
								}
							}
						}
						if (!bVar3)
						{
							if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_68353.f_1)) && (((MISC::ARE_STRINGS_EQUAL(&(Global_68353.f_1), "HELP_PASSIVE") || MISC::ARE_STRINGS_EQUAL(&(Global_68353.f_1), "HELP_VEHRE")) || MISC::ARE_STRINGS_EQUAL(&(Global_68353.f_1), "HELP_VEHSC")) || MISC::ARE_STRINGS_EQUAL(&(Global_68353.f_1), "HELP_VEHX17")))
							{
								if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
								{
									if (func_1565(&Global_68353))
									{
										HUD::CLEAR_HELP(1);
									}
								}
								func_1564(0);
							}
						}
					}
					if (func_1563(iLocal_320, iLocal_322))
					{
						func_1562(&iLocal_548);
					}
					else if (func_1561(iLocal_320, iLocal_322))
					{
						func_1560(iLocal_320);
					}
					func_1248(iLocal_320, iLocal_321, iLocal_322);
					break;
				
				case 17:
					switch (iLocal_322)
					{
						case 2:
							if (func_1246())
							{
								func_1977("WWW_IWILLSURVIVEITALL_COM_S_MY_D_PORTFOLIO");
							}
							break;
						
						case 15:
							if (!func_1243())
							{
								func_1977("WWW_IWILLSURVIVEITALL_COM_S_PURCHASE_D_ERROR");
							}
							break;
					}
					break;
				
				case 27:
					if (iLocal_322 == 10)
					{
						if (Global_68336 == 7 && iLocal_321 == 9)
						{
							iVar5 = func_1854();
							func_771(iVar5);
						}
						else if (Global_68336 == 5 && iLocal_321 == 9)
						{
							func_758();
						}
					}
					if (iLocal_322 != iLocal_321)
					{
						iLocal_1145 = 1;
					}
					break;
				
				case 28:
					if (!Global_68363)
					{
						if (((iLocal_322 == 16 || iLocal_322 == 17) || iLocal_322 == 18) || iLocal_322 == 19)
						{
							iVar6 = func_2031(15365, -1, -1);
							if (iVar6 < 3)
							{
								func_1676("HELP_BUNKMOD", 0, 0, 0, 0);
								iLocal_372 = Global_69469 + 7500;
								Global_68363 = 1;
								func_757(15365, iVar6, -1, 1);
							}
						}
					}
					if (iLocal_322 == 9)
					{
						if (Global_68336 == 7 && iLocal_321 == 8)
						{
							iVar7 = func_1841();
							func_771(iVar7);
						}
						else if ((Global_68336 == 6 && iLocal_321 == 20) || (Global_68336 == 1 && iLocal_321 == 20))
						{
							iVar8 = func_756();
							if (Global_68336 == 6 && iLocal_321 == 20)
							{
							}
							else if (Global_68336 == 1 && iLocal_321 == 20)
							{
							}
							func_643(iVar8, &iVar9);
						}
						else if ((Global_68336 == 7 && iLocal_321 == 27) || (Global_68336 == 1 && iLocal_321 == 27))
						{
							iVar10 = func_642();
							if (Global_68336 == 7 && iLocal_321 == 27)
							{
							}
							else if (Global_68336 == 1 && iLocal_321 == 27)
							{
							}
							func_591(iVar10, &iVar11);
						}
						else if (Global_68336 == 7 && iLocal_321 == 34)
						{
							iVar12 = func_590();
							if (Global_68336 == 7 && iLocal_321 == 34)
							{
							}
							func_197(iVar12, &iVar13);
						}
					}
					if (iLocal_322 != iLocal_321)
					{
						iLocal_1145 = 1;
					}
					break;
				
				case 18:
					iLocal_1145 = 0;
					if (iLocal_322 != iLocal_321)
					{
						if (func_196(iLocal_307))
						{
							if (!bLocal_309)
							{
								iLocal_308 = 1;
								iLocal_1145 = 1;
							}
						}
					}
					if ((iLocal_321 == 21 && !func_196(iLocal_307)) || (iLocal_321 == 27 && func_196(iLocal_307)))
					{
						if (iLocal_322 == 4)
						{
							if (iLocal_307 > -1)
							{
								func_771(iLocal_307);
							}
						}
					}
					if (iLocal_321 == 21 || (iLocal_321 == 27 && func_196(iLocal_307)))
					{
						if (iLocal_322 == 5)
						{
							if (iLocal_307 > -1)
							{
								func_1893(Global_1049531[iLocal_307 /*1951*/]);
							}
						}
					}
					if (iLocal_322 == 23)
					{
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT_EMPTY");
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
						func_16("VHSITPURFH");
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
						switch (iLocal_547)
						{
							case 3:
								func_16("LAR_IRANK");
								break;
							
							case 2:
								func_16("LAR_ICASH");
								break;
							
							case 1:
								func_16("LAR_NLOCK");
								break;
							
							case 4:
								func_16("LAR_IRANKC");
								break;
							
							case 6:
								func_16("LAR_SAVTRB");
								break;
							
							case 7:
								func_16("LAR_MISS");
								break;
							
							case 8:
								func_16("LAR_SHIP");
								break;
							
							case 9:
								func_16("LAR_STOCK");
								break;
							
							case 0:
								break;
							
							case 5:
								break;
							
							default:
								break;
						}
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "UPDATE_TEXT");
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
					}
					break;
				
				case 20:
					if (iLocal_322 == 1)
					{
						if (Global_68484 == 3)
						{
							while (!func_187(-606278748, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
							{
								SYSTEM::WAIT(0);
							}
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT");
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(4);
							GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "UPDATE_TEXT");
							GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
							Global_68484 = 4;
						}
					}
					else if (iLocal_322 == 14)
					{
						if (Global_68484 == 5)
						{
							while (!func_187(-414580094, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
							{
								SYSTEM::WAIT(0);
							}
							func_108(joaat("player_one"), 3, 295, 1, 1);
							Global_68484 = 6;
						}
					}
					break;
			}
		}
		else
		{
			if (Global_69651 != 0)
			{
				Global_69651 = 0;
			}
			if (Global_69652 != 0)
			{
				Global_69652 = 0;
			}
			switch (iLocal_320)
			{
				case 20:
					if (iLocal_322 == 1 && Global_68484 < 1)
					{
						while (!func_187(-921778680, 6, 2, 144, 1000, 5000, -1, 0, -1, 0))
						{
							SYSTEM::WAIT(0);
						}
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "SET_DATA_SLOT");
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(iLocal_304, "UPDATE_TEXT");
						GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
						Global_68484 = 1;
					}
					break;
				
				case 10:
				case 11:
				case 12:
				case 13:
				case 15:
				case 16:
				case 26:
					iLocal_1145 = 0;
					iVar14 = func_1584(iLocal_320, iLocal_322);
					if (iVar14 != -1)
					{
						iLocal_1145 = 1;
						if (func_1580(iVar14, iLocal_320, &iLocal_1145, &Global_69651, &Global_69652))
						{
						}
					}
					break;
				}
		}
		bVar0 = true;
	}
	else if (iLocal_319 != iLocal_320)
	{
		if (iLocal_320 == 27)
		{
			bVar0 = true;
		}
	}
	else if (iLocal_319 != iLocal_320)
	{
		if (iLocal_320 == 28)
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		Global_68380 = 1;
	}
	iLocal_323 = iVar1;
	switch (iLocal_320)
	{
		case 19:
			if ((iLocal_319 == 19 && iLocal_321 == 1) && iLocal_322 == 15)
			{
				iVar15 = func_1992();
				switch (iVar15)
				{
					case 0:
						if (!Global_104555.f_10019.f_129[0])
						{
							if (func_1889(0) < 500)
							{
								func_1977("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								func_44(0, 0, 93, 500, 0);
								Global_104555.f_10019.f_129[0] = 1;
							}
						}
						break;
					
					case 1:
						if (!Global_104555.f_10019.f_129[1])
						{
							if (func_1889(1) < 500)
							{
								func_1977("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								func_44(1, 0, 93, 500, 0);
								Global_104555.f_10019.f_129[1] = 1;
							}
						}
						break;
					
					case 2:
						if (!Global_104555.f_10019.f_129[2])
						{
							if (func_1889(2) < 500)
							{
								func_1977("WWW_THEREALITYMILL_COM_S_PURCHASE_D_ERROR");
							}
							else
							{
								func_44(2, 0, 93, 500, 0);
								Global_104555.f_10019.f_129[2] = 1;
							}
						}
						break;
					}
			}
			break;
		
		case 9:
			if (iLocal_1142)
			{
				if (!Global_70856)
				{
					if (iLocal_322 == 5)
					{
						iLocal_1142 = 0;
						switch (iLocal_1143)
						{
							case 6:
								func_1893(-1569.525f, 444.04f, 108.135f);
								break;
							
							case 7:
								func_1893(-1352.88f, 613.77f, 134.34f);
								break;
							
							case 8:
								func_1893(-1469.2f, -5.33f, 53.105f);
								break;
							
							case 9:
								func_1893(-1632.833f, -413.8573f, 39.9441f);
								break;
							
							case 10:
								func_1893(-1774.225f, -430.03f, 44.04f);
								break;
							
							case 11:
								func_1893(-380.75f, 427.79f, 110.97f);
								break;
							
							case 12:
								func_1893(-163.2826f, 989.2324f, 234.0641f);
								break;
							
							case 13:
								func_1893(-492.2117f, 585.2451f, 122f);
								break;
							
							case 14:
								func_1893(-818.84f, 434.74f, 88.15f);
								break;
							
							case 15:
								func_1893(-910.1f, 784.344f, 184.471f);
								break;
							
							case 16:
								func_1893(-825.92f, -26.67f, 38.68f);
								break;
							
							case 17:
								func_1893(-1103.5f, 587.29f, 102.865f);
								break;
							
							case 18:
								func_1893(-1253.255f, 496.615f, 93.82f);
								break;
							
							case 19:
								func_1893(166.55f, 487.31f, 142.12f);
								break;
							
							case 20:
								func_1893(-1163.859f, 319.19f, 67.96f);
								break;
							
							default:
								break;
							}
						}
				}
			}
			else
			{
				iLocal_1142 = 1;
			}
			iLocal_1143 = iLocal_322;
			break;
	}
	iLocal_319 = iLocal_320;
	iLocal_321 = iLocal_322;
}

int func_108(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	int iVar5;
	
	Global_70671[1 /*14*/] = { func_122(iParam0, iParam1, iParam2) };
	if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_121(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 1, Global_70671[1 /*14*/].f_1, 1, 0);
			if (iParam1 == 12)
			{
				iVar0 = 1;
				if (iParam0 == joaat("player_zero"))
				{
					if (iParam2 == 31)
					{
						iVar0 = 0;
					}
				}
				if (iVar0 == 1)
				{
					uVar3 = { func_117(iParam0, iParam2) };
					iVar1 = 0;
					while (iVar1 <= 14)
					{
						if ((uVar3[iVar1] != -99 && iVar1 != 12) && iVar1 != 14)
						{
							if (iVar1 != 13)
							{
								func_108(iParam0, iVar1, uVar3[iVar1], 1, 1);
								func_116(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { func_109(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_108(iParam0, 14, uVar4[iVar2], 1, 1);
									func_116(iParam0, 14, uVar4[iVar2], 1);
									iVar2++;
								}
							}
						}
						iVar1++;
					}
				}
			}
		}
		else
		{
			func_121(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 1, Global_70671[1 /*14*/].f_1, 0, 1);
		}
		if (iParam4 == 1 && bParam3 == 1)
		{
			switch (iParam0)
			{
				case joaat("player_zero"):
					break;
				
				case joaat("player_one"):
					switch (iParam1)
					{
						case 3:
							if (iParam2 >= 176 && iParam2 <= 191)
							{
								iVar5 = (227 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 3, iVar5, 1, 0);
							}
							break;
						
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 11, iVar5, 1, 0);
							}
							break;
						
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 8, iVar5, 1, 0);
							}
							break;
						
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 14, iVar5, 1, 0);
							}
							break;
					}
					break;
				
				case joaat("player_two"):
					switch (iParam1)
					{
						case 4:
							if (iParam2 >= 81 && iParam2 <= 90)
							{
								iVar5 = (94 + Global_70671[1 /*14*/].f_4);
								func_108(iParam0, 4, iVar5, 1, 0);
							}
							break;
						
						case 12:
							if (iParam2 == 2)
							{
								func_108(iParam0, 14, 17, 1, 0);
							}
							break;
					}
					break;
				}
		}
		return 1;
	}
	return 0;
}

struct<10> func_109(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_115(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_115(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_115(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_115(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_115(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_115(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_115(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_115(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_115(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_115(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_115(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_110(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_115(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_115(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_115(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_115(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_115(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_115(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_115(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_115(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_115(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_115(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_110(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_115(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_115(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_115(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_115(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_115(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_115(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_115(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_115(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_115(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_115(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_110(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_115(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_115(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_115(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_115(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_115(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_115(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_115(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_115(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_115(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_115(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_115(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_115(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_115(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_115(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_115(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_115(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_115(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_115(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_115(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_115(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_115(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_115(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_115(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_115(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_115(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_115(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_110(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_115(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_115(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_115(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_115(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_115(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_115(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_115(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_115(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_115(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_115(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_115(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_115(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_115(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_115(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_115(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_115(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_115(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_115(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_115(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_115(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_115(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_115(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_115(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_115(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_115(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_110(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_110(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != -99)
	{
		(*iParam0)[0] = 0;
		(*iParam0)[1] = 1;
		(*iParam0)[2] = 2;
		(*iParam0)[3] = 3;
		(*iParam0)[4] = 4;
		(*iParam0)[5] = 5;
		(*iParam0)[6] = 6;
		(*iParam0)[7] = 7;
		(*iParam0)[8] = 8;
		iVar0 = 0;
		if (iParam1 == joaat("player_zero"))
		{
			iVar0 = 0;
		}
		else if (iParam1 == joaat("player_one"))
		{
			iVar0 = 1;
		}
		else if (iParam1 == joaat("player_two"))
		{
			iVar0 = 2;
		}
		else if (iParam1 == joaat("mp_m_freemode_01"))
		{
			iVar0 = 3;
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			iVar0 = 4;
		}
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILES::_IS_DLC_DATA_EMPTY(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILES::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar3, &vVar2) && vVar2.z != -1)
				{
					if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_111(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != -1)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

int func_111(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, -1, 1, -1, -1);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_114(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var4);
		iVar6 = 0;
		iVar7 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, -1, 0, -1, func_113(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_112(iParam0, func_113(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return -99;
}

int func_112(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 6;
					break;
				
				case 3:
					return 181;
					break;
				
				case 4:
					return 113;
					break;
				
				case 5:
					return 14;
					break;
				
				case 6:
					return 99;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 24;
					break;
				
				case 9:
					return 20;
					break;
				
				case 10:
					return 48;
					break;
				
				case 11:
					return 45;
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 5;
					break;
				
				case 2:
					return 21;
					break;
				
				case 3:
					return 318;
					break;
				
				case 4:
					return 117;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 134;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 77;
					break;
				
				case 9:
					return 12;
					break;
				
				case 10:
					return 53;
					break;
				
				case 11:
					return 63;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 7;
					break;
				
				case 1:
					return 6;
					break;
				
				case 2:
					return 9;
					break;
				
				case 3:
					return 242;
					break;
				
				case 4:
					return 104;
					break;
				
				case 5:
					return 7;
					break;
				
				case 6:
					return 84;
					break;
				
				case 7:
					return 1;
					break;
				
				case 8:
					return 18;
					break;
				
				case 9:
					return 17;
					break;
				
				case 10:
					return 33;
					break;
				
				case 11:
					return 1;
					break;
			}
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 91;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 92;
					break;
				
				case 8:
					return 241;
					break;
				
				case 9:
					return 46;
					break;
				
				case 10:
					return 7;
					break;
				
				case 11:
					return 237;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 26;
					break;
				
				case 2:
					return 92;
					break;
				
				case 3:
					return 16;
					break;
				
				case 4:
					return 256;
					break;
				
				case 5:
					return 9;
					break;
				
				case 6:
					return 256;
					break;
				
				case 7:
					return 55;
					break;
				
				case 8:
					return 136;
					break;
				
				case 9:
					return 36;
					break;
				
				case 10:
					return 6;
					break;
				
				case 11:
					return 256;
					break;
			}
			break;
	}
	return -99;
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

int func_114(int iParam0)
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 113;
			break;
		
		case joaat("player_one"):
			return 175;
			break;
		
		case joaat("player_two"):
			return 155;
			break;
	}
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			return 327;
			break;
		
		case joaat("mp_f_freemode_01"):
			return 327;
			break;
	}
	return -99;
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	(*iParam0)[0] = iParam1;
	(*iParam0)[1] = iParam2;
	(*iParam0)[2] = iParam3;
	(*iParam0)[3] = iParam4;
	(*iParam0)[4] = iParam5;
	(*iParam0)[5] = iParam6;
	(*iParam0)[6] = iParam7;
	(*iParam0)[7] = iParam8;
	(*iParam0)[8] = iParam9;
}

int func_116(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_70671[1 /*14*/] = { func_122(iParam0, iParam1, iParam2) };
	if (MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_70671[1 /*14*/].f_6, 6))
	{
		if (bParam3)
		{
			func_121(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 0, Global_70671[1 /*14*/].f_1, 1, 0);
		}
		else
		{
			func_121(iParam1, Global_70671[1 /*14*/].f_5, Global_70671[1 /*14*/].f_2, 0, Global_70671[1 /*14*/].f_1, 0, 1);
		}
		return 1;
	}
	return 0;
}

struct<17> func_117(int iParam0, int iParam1)
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = -99;
		iVar0++;
	}
	Var1.f_16 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_104555.f_9055.f_99.f_58[120])
					{
						func_120(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					else
					{
						func_120(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					}
					break;
				
				case 1:
					func_120(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
				
				case 2:
					func_120(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
				
				case 3:
					func_120(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
				
				case 4:
					func_120(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
				
				case 5:
					func_120(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[0], Global_104555.f_2353.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
				
				case 6:
					func_120(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_120(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 8:
					func_120(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_120(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_120(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
				
				case 11:
					func_120(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_120(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_120(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_120(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
				
				case 15:
					func_120(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
				
				case 16:
					func_120(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_120(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_120(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
				
				case 19:
					func_120(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_120(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_120(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_120(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_120(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_120(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_120(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_120(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_120(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_120(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_120(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_120(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_120(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
				
				case 32:
					func_120(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_120(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_120(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
				
				case 35:
					func_120(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_120(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_120(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_120(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_120(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_120(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_120(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_120(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_120(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_120(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_120(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 46:
					func_120(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_120(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 48:
					func_120(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 49:
					func_120(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 50:
					func_120(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
				
				case 51:
					func_120(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 52:
					func_120(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_118(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_120(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_120(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 2:
					func_120(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[1], Global_104555.f_2353.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
				
				case 3:
					func_120(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
				
				case 4:
					func_120(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
				
				case 5:
					func_120(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 6:
					func_120(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 7:
					func_120(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
				
				case 8:
					func_120(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
				
				case 9:
					func_120(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_120(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_120(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
				
				case 12:
					func_120(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_120(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_120(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_120(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_120(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_120(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_120(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
				
				case 19:
					func_120(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_120(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_120(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
				
				case 22:
					func_120(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
				
				case 23:
					func_120(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
				
				case 24:
					func_120(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
				
				case 25:
					func_120(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
				
				case 26:
					func_120(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
				
				case 27:
					func_120(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
				
				case 28:
					func_120(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
				
				case 29:
					func_120(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
				
				case 30:
					func_120(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
				
				case 31:
					func_120(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
				
				case 32:
					func_120(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
				
				case 33:
					func_120(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
				
				case 34:
					func_120(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
				
				case 35:
					func_120(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
				
				case 36:
					func_120(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
				
				case 37:
					func_120(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
				
				case 38:
					func_120(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_120(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_120(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_120(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_120(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_120(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
				
				case 44:
					func_120(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 45:
					func_120(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
				
				case 46:
					func_120(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
				
				default:
					func_118(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_120(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 1:
					func_120(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
				
				case 2:
					func_120(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
				
				case 3:
					func_120(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
				
				case 4:
					func_120(&Var1, -99, -99, Global_104555.f_2353.f_539.f_196[2], Global_104555.f_2353.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 5:
					func_120(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
				
				case 6:
					func_120(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
				
				case 7:
					func_120(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
				
				case 8:
					func_120(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
				
				case 9:
					func_120(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 10:
					func_120(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 11:
					func_120(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
				
				case 12:
					func_120(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
				
				case 13:
					func_120(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 14:
					func_120(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
				
				case 15:
					func_120(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 16:
					func_120(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 17:
					func_120(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 18:
					func_120(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 19:
					func_120(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 20:
					func_120(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 21:
					func_120(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 22:
					func_120(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 23:
					func_120(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 24:
					func_120(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 25:
					func_120(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 26:
					func_120(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 27:
					func_120(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 28:
					func_120(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 29:
					func_120(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 30:
					func_120(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 31:
					func_120(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 32:
					func_120(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 33:
					func_120(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 34:
					func_120(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 35:
					func_120(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 36:
					func_120(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 37:
					func_120(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 38:
					func_120(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 39:
					func_120(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 40:
					func_120(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 41:
					func_120(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 42:
					func_120(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 43:
					func_120(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 44:
					func_120(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				case 45:
					func_120(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
				
				case 46:
					func_120(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
				
				case 47:
					func_120(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
				
				default:
					func_118(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_120(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
				
				case 1:
					func_120(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_120(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_120(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_120(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_120(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_120(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_120(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_120(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_120(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_120(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_120(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_120(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_120(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_120(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_120(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_120(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_120(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_120(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_120(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_120(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_120(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_120(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_120(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_120(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_120(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_118(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_120(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
				
				case 1:
					func_120(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_120(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_120(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_120(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_120(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_120(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_120(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_120(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_120(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_120(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_120(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_120(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_120(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_120(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_120(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_120(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_120(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_120(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_120(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_120(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_120(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_120(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_120(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_120(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_120(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_120(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_120(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_118(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_118(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = -99;
	(*uParam0)[3] = 0;
	(*uParam0)[4] = 0;
	(*uParam0)[6] = 0;
	(*uParam0)[5] = 0;
	(*uParam0)[8] = 0;
	(*uParam0)[9] = 0;
	(*uParam0)[10] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[7] = 0;
	(*uParam0)[11] = 0;
	(*uParam0)[13] = -99;
	(*uParam0)[14] = -99;
	uParam0->f_16 = 0;
	iVar0 = 0;
	if (iParam1 == joaat("player_zero"))
	{
		iVar0 = 0;
		(*uParam0)[13] = (10 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_one"))
	{
		iVar0 = 1;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("player_two"))
	{
		iVar0 = 2;
		(*uParam0)[13] = (9 + (iParam2 - iParam3));
	}
	else if (iParam1 == joaat("mp_m_freemode_01"))
	{
		iVar0 = 3;
	}
	else if (iParam1 == joaat("mp_f_freemode_01"))
	{
		iVar0 = 4;
	}
	FILES::_0xF3FBE2D50A6A8C28(iVar0, 0);
	FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILES::_IS_DLC_DATA_EMPTY(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (FILES::_GET_PROP_FROM_OUTFIT(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != -1) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&Var3);
						FILES::GET_SHOP_PED_COMPONENT(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_16 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_16)
					{
						(*uParam0)[func_119(vVar2.z)] = vVar2.x;
						uParam0->f_16 = 1;
					}
					else
					{
						(*uParam0)[func_119(vVar2.z)] = func_111(iParam1, vVar2.x, func_119(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != -1)
				{
					(*uParam0)[func_119(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = -99;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_119(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 6:
			return 6;
			break;
		
		case 5:
			return 5;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 9;
			break;
		
		case 10:
			return 10;
			break;
		
		case 1:
			return 1;
			break;
		
		case 7:
			return 7;
			break;
		
		case 11:
			return 11;
			break;
	}
	return 0;
}

void func_120(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	(*uParam0)[0] = iParam1;
	(*uParam0)[2] = iParam2;
	(*uParam0)[3] = iParam3;
	(*uParam0)[4] = iParam4;
	(*uParam0)[6] = iParam5;
	(*uParam0)[5] = iParam6;
	(*uParam0)[8] = iParam7;
	(*uParam0)[9] = iParam8;
	(*uParam0)[10] = iParam9;
	(*uParam0)[1] = iParam10;
	(*uParam0)[7] = iParam11;
	(*uParam0)[11] = iParam12;
	(*uParam0)[13] = iParam13;
	(*uParam0)[14] = -99;
}

int func_121(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/][iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3]), iParam4);
		}
		return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				MISC::CLEAR_BIT(&(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3]), iParam4);
			}
			return MISC::IS_BIT_SET(Global_104555.f_2353[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}
	return 0;
}

struct<14> func_122(int iParam0, int iParam1, int iParam2)
{
	func_186();
	if (iParam0 == joaat("player_zero"))
	{
		func_168(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_149(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_123(iParam1, iParam2);
	}
	return Global_70671[0 /*14*/];
}

void func_123(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_148(iParam1);
			break;
		
		case 2:
			func_147(iParam1);
			break;
		
		case 3:
			func_144(iParam1);
			break;
		
		case 4:
			func_143(iParam1);
			break;
		
		case 6:
			func_142(iParam1);
			break;
		
		case 5:
			func_141(iParam1);
			break;
		
		case 8:
			func_140(iParam1);
			break;
		
		case 9:
			func_139(iParam1);
			break;
		
		case 10:
			func_138(iParam1);
			break;
		
		case 1:
			func_137(iParam1);
			break;
		
		case 7:
			func_136(iParam1);
			break;
		
		case 11:
			func_135(iParam1);
			break;
		
		case 12:
			func_134(iParam1);
			break;
		
		case 13:
			func_133(iParam1);
			break;
		
		case 14:
			func_124(iParam1);
			break;
	}
}

void func_124(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 154:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P2_E1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P2_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P2_E2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P2_E2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P2_E2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P2_E2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P2_E2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 54;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P2_E2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P2_E2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P2_E2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P2_E2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P2_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P2_E3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P2_E3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P2_E3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P2_E3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P2_E3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P2_E3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P2_E3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P2_E3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P2_E3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P2_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P2_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P2_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P2_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P2_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P2_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P2_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P2_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 59;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P2_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P2_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 79;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P2_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P2_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P2_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P2_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P2_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P2_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P2_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P2_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P2_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P2_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 215;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P2_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P2_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P2_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P2_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 169;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P2_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P2_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P2_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P2_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P2_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P2_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P2_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 49;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P2_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P2_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 52;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P2_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P2_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P2_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P2_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P2_E10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 63;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P2_E10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P2_E10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P2_H2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "PROPS_P2_H7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "PROPS_P2_H7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P1_H26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P1_H26_10", 16);
			iVar3 = 26;
			iVar4 = 10;
			iVar1 = 18;
			iVar5 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P1_H26_11", 16);
			iVar3 = 26;
			iVar4 = 11;
			iVar1 = 20;
			iVar5 = 0;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_H26_12", 16);
			iVar3 = 26;
			iVar4 = 12;
			iVar1 = 24;
			iVar5 = 0;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_H26_13", 16);
			iVar3 = 26;
			iVar4 = 13;
			iVar1 = 22;
			iVar5 = 0;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_H26_14", 16);
			iVar3 = 26;
			iVar4 = 14;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_H26_15", 16);
			iVar3 = 26;
			iVar4 = 15;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 87:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 155);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_125(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	
	uParam0->f_6 = 0;
	*uParam0 = iParam9;
	uParam0->f_1 = (iParam2 % 32);
	uParam0->f_2 = (iParam2 / 32);
	uParam0->f_3 = iParam4;
	uParam0->f_4 = iParam5;
	uParam0->f_7 = iParam6;
	StringCopy(&(uParam0->f_8), sParam3, 16);
	uParam0->f_13 = iParam8;
	uParam0->f_12 = func_131(iParam8);
	if ((uParam0->f_2 >= 10 && uParam0->f_5 >= 0) && uParam0->f_5 < 3)
	{
		if (!bParam10)
		{
		}
		uParam0->f_2 = 0;
	}
	if (MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL"))
	{
	}
	if (bParam7)
	{
		MISC::SET_BIT(&(uParam0->f_6), 3);
	}
	if (bParam10)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
		{
			MISC::SET_BIT(&(uParam0->f_6), 5);
		}
		MISC::SET_BIT(&(uParam0->f_6), 1);
		MISC::SET_BIT(&(uParam0->f_6), 2);
		MISC::SET_BIT(&(uParam0->f_6), 6);
		if (func_27(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILES::_0x341DE7ED1D2A1BFD(Global_2621444, 1827025211, 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_129(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_129(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_129(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_129(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_129(Global_2621444, 1, 1, 1, -1))
			{
				MISC::CLEAR_BIT(&(uParam0->f_6), 2);
			}
			if (!func_129(Global_2621444, 2, 1, 1, -1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_121(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_121(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_121(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_27(14))
			{
				return;
			}
			iVar0 = func_2029(func_128(iParam1, uParam0->f_2), Global_70668, 0);
			if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_2029(func_127(iParam1, uParam0->f_2), Global_70668, 0);
			if (MISC::IS_BIT_SET(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_126(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_2029(iVar1, Global_70668, 0);
				if (!MISC::IS_BIT_SET(iVar0, uParam0->f_1))
				{
					MISC::SET_BIT(&(uParam0->f_6), 4);
				}
			}
		}
		else
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_126(int iParam0, int iParam1, var uParam2)
{
	*uParam2 = 975;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 976;
					break;
				
				case 3:
					*uParam2 = 1426;
					break;
				
				case 4:
					*uParam2 = 992;
					break;
				
				case 6:
					*uParam2 = 1000;
					break;
				
				case 8:
					*uParam2 = 1427;
					break;
				
				case 9:
					*uParam2 = 1435;
					break;
				
				case 10:
					*uParam2 = 1437;
					break;
				
				case 1:
					*uParam2 = 1008;
					break;
				
				case 7:
					*uParam2 = 1438;
					break;
				
				case 11:
					*uParam2 = 984;
					break;
				
				case 14:
					*uParam2 = 1016;
					break;
				
				case 12:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 977;
					break;
				
				case 4:
					*uParam2 = 993;
					break;
				
				case 6:
					*uParam2 = 1001;
					break;
				
				case 8:
					*uParam2 = 1428;
					break;
				
				case 9:
					*uParam2 = 1436;
					break;
				
				case 7:
					*uParam2 = 1439;
					break;
				
				case 11:
					*uParam2 = 985;
					break;
				
				case 14:
					*uParam2 = 1017;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 978;
					break;
				
				case 4:
					*uParam2 = 994;
					break;
				
				case 6:
					*uParam2 = 1002;
					break;
				
				case 8:
					*uParam2 = 1429;
					break;
				
				case 7:
					*uParam2 = 1440;
					break;
				
				case 11:
					*uParam2 = 986;
					break;
				
				case 14:
					*uParam2 = 1018;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 998;
					break;
				
				case 6:
					*uParam2 = 1006;
					break;
				
				case 8:
					*uParam2 = 1433;
					break;
				
				case 11:
					*uParam2 = 990;
					break;
				
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
				
				case 6:
					*uParam2 = 1007;
					break;
				
				case 8:
					*uParam2 = 1434;
					break;
				
				case 11:
					*uParam2 = 991;
					break;
				
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	}
	return *uParam2 != 975;
}

int func_127(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 924;
					break;
				
				case 3:
					return 1411;
					break;
				
				case 4:
					return 940;
					break;
				
				case 6:
					return 948;
					break;
				
				case 8:
					return 1412;
					break;
				
				case 9:
					return 1420;
					break;
				
				case 10:
					return 1422;
					break;
				
				case 1:
					return 956;
					break;
				
				case 7:
					return 1423;
					break;
				
				case 11:
					return 932;
					break;
				
				case 14:
					return 964;
					break;
				
				case 12:
					return 975;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 925;
					break;
				
				case 4:
					return 941;
					break;
				
				case 6:
					return 949;
					break;
				
				case 8:
					return 1413;
					break;
				
				case 9:
					return 1421;
					break;
				
				case 7:
					return 1424;
					break;
				
				case 11:
					return 933;
					break;
				
				case 14:
					return 965;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 926;
					break;
				
				case 4:
					return 942;
					break;
				
				case 6:
					return 950;
					break;
				
				case 8:
					return 1414;
					break;
				
				case 7:
					return 1425;
					break;
				
				case 11:
					return 934;
					break;
				
				case 14:
					return 966;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 946;
					break;
				
				case 6:
					return 954;
					break;
				
				case 8:
					return 1418;
					break;
				
				case 11:
					return 938;
					break;
				
				case 14:
					return 970;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 947;
					break;
				
				case 6:
					return 955;
					break;
				
				case 8:
					return 1419;
					break;
				
				case 11:
					return 939;
					break;
				
				case 14:
					return 971;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 972;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 973;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 974;
					break;
			}
			break;
	}
	return 932;
}

int func_128(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 872;
					break;
				
				case 3:
					return 1396;
					break;
				
				case 4:
					return 888;
					break;
				
				case 6:
					return 896;
					break;
				
				case 8:
					return 1397;
					break;
				
				case 9:
					return 1405;
					break;
				
				case 10:
					return 1407;
					break;
				
				case 1:
					return 904;
					break;
				
				case 7:
					return 1408;
					break;
				
				case 11:
					return 880;
					break;
				
				case 14:
					return 912;
					break;
				
				case 12:
					return 923;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 873;
					break;
				
				case 4:
					return 889;
					break;
				
				case 6:
					return 897;
					break;
				
				case 8:
					return 1398;
					break;
				
				case 9:
					return 1406;
					break;
				
				case 7:
					return 1409;
					break;
				
				case 11:
					return 881;
					break;
				
				case 14:
					return 913;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 874;
					break;
				
				case 4:
					return 890;
					break;
				
				case 6:
					return 898;
					break;
				
				case 8:
					return 1399;
					break;
				
				case 7:
					return 1410;
					break;
				
				case 11:
					return 882;
					break;
				
				case 14:
					return 914;
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 894;
					break;
				
				case 6:
					return 902;
					break;
				
				case 8:
					return 1403;
					break;
				
				case 11:
					return 886;
					break;
				
				case 14:
					return 918;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 895;
					break;
				
				case 6:
					return 903;
					break;
				
				case 8:
					return 1404;
					break;
				
				case 11:
					return 887;
					break;
				
				case 14:
					return 919;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 920;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 921;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 922;
					break;
			}
			break;
	}
	return 880;
}

int func_129(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_70668;
	if (iParam4 != -1)
	{
		iVar0 = iParam4;
	}
	if (func_130(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_2029(iVar2, iVar0, 0);
		return MISC::IS_BIT_SET(iVar3, iVar1);
	}
	return 0;
}

bool func_130(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	*uParam2 = 7872;
	if ((bParam4 && Global_4264612) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
					
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 932;
						*uParam3 = 0;
						return 1;
						break;
					
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 932;
						*uParam3 = 1;
						return 1;
						break;
					
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 932;
						*uParam3 = 2;
						return 1;
						break;
					
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 932;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 932;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 932;
						*uParam3 = 5;
						return 1;
						break;
					
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 932;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 932;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 932;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case -1198063650:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case -1596927918:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 968;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 968;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 968;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 968;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 968;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 968;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 968;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 968;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1020;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1020;
						*uParam3 = 20;
						return 1;
						break;
					
					case -1951624263:
					case 147288818:
						*uParam2 = 1020;
						*uParam3 = 21;
						return 1;
						break;
					
					case -1586249913:
					case 1027988462:
						*uParam2 = 1020;
						*uParam3 = 22;
						return 1;
						break;
					
					case -1472181024:
					case 788217689:
						*uParam2 = 1020;
						*uParam3 = 23;
						return 1;
						break;
					
					case -1116178608:
					case 1338147047:
						*uParam2 = 1020;
						*uParam3 = 24;
						return 1;
						break;
					
					case -1028914761:
					case 1095820292:
						*uParam2 = 1020;
						*uParam3 = 25;
						return 1;
						break;
					
					case -654496167:
					case -1989217217:
						*uParam2 = 1020;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = -1;
	if (bParam4)
	{
		if (Global_4264612)
		{
			iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
		}
		else
		{
			iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
		}
	}
	else if (bParam5)
	{
		iVar0 = PED::_0x1E77FA7A62EE6C4C(iParam0);
	}
	else
	{
		iVar0 = PED::_0xF033419D1B81FAE8(iParam0);
	}
	if (iVar0 == -1)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1756;
					break;
				
				case 1:
					*uParam2 = 1757;
					break;
				
				case 2:
					*uParam2 = 1758;
					break;
				
				case 3:
					*uParam2 = 1759;
					break;
				
				case 4:
					*uParam2 = 1760;
					break;
				
				case 5:
					*uParam2 = 1761;
					break;
				
				case 6:
					*uParam2 = 1768;
					break;
				
				case 7:
					*uParam2 = 1769;
					break;
				
				case 8:
					*uParam2 = 1770;
					break;
				
				case 9:
					*uParam2 = 1771;
					break;
				
				case 10:
					*uParam2 = 1772;
					break;
				
				case 11:
					*uParam2 = 1773;
					break;
				
				case 12:
					*uParam2 = 1774;
					break;
				
				case 13:
					*uParam2 = 1782;
					break;
				
				case 14:
					*uParam2 = 1783;
					break;
				
				case 15:
					*uParam2 = 1884;
					break;
				
				case 16:
					*uParam2 = 1885;
					break;
				
				case 17:
					*uParam2 = 1916;
					break;
				
				case 18:
					*uParam2 = 1930;
					break;
				
				case 19:
					*uParam2 = 1931;
					break;
				
				case 20:
					*uParam2 = 1932;
					break;
				
				case 21:
					*uParam2 = 1933;
					break;
				
				case 22:
					*uParam2 = 1934;
					break;
				
				case 23:
					*uParam2 = 2038;
					break;
				
				case 24:
					*uParam2 = 2039;
					break;
				
				case 25:
					*uParam2 = 2065;
					break;
				
				case 26:
					*uParam2 = 2066;
					break;
				
				case 27:
					*uParam2 = 2067;
					break;
				
				case 28:
					*uParam2 = 2068;
					break;
				
				case 29:
					*uParam2 = 2069;
					break;
				
				case 30:
					*uParam2 = 2070;
					break;
				
				case 31:
					*uParam2 = 2071;
					break;
				
				case 32:
					*uParam2 = 2072;
					break;
				
				case 33:
					*uParam2 = 2073;
					break;
				
				case 34:
					*uParam2 = 2074;
					break;
				
				case 35:
					*uParam2 = 2321;
					break;
				
				case 36:
					*uParam2 = 2322;
					break;
				
				case 37:
					*uParam2 = 2378;
					break;
				
				case 38:
					*uParam2 = 2379;
					break;
				
				case 39:
					*uParam2 = 2380;
					break;
				
				case 40:
					*uParam2 = 2381;
					break;
				
				case 41:
					*uParam2 = 2440;
					break;
				
				case 42:
					*uParam2 = 2441;
					break;
				
				case 43:
					*uParam2 = 2442;
					break;
				
				case 44:
					*uParam2 = 2443;
					break;
				
				case 45:
					*uParam2 = 2444;
					break;
				
				case 46:
					*uParam2 = 2445;
					break;
				
				case 47:
					*uParam2 = 2446;
					break;
				
				case 48:
					*uParam2 = 2447;
					break;
				
				case 49:
					*uParam2 = 2448;
					break;
				
				case 50:
					*uParam2 = 2449;
					break;
				
				case 51:
					*uParam2 = 2578;
					break;
				
				case 52:
					*uParam2 = 2579;
					break;
				
				case 53:
					*uParam2 = 2580;
					break;
				
				case 54:
					*uParam2 = 2581;
					break;
				
				case 55:
					*uParam2 = 2582;
					break;
				
				case 56:
					*uParam2 = 2583;
					break;
				
				case 57:
					*uParam2 = 2584;
					break;
				
				case 58:
					*uParam2 = 2585;
					break;
				
				case 59:
					*uParam2 = 2586;
					break;
				
				case 60:
					*uParam2 = 2587;
					break;
				
				case 61:
					*uParam2 = 2588;
					break;
				
				case 62:
					*uParam2 = 3185;
					break;
				
				case 63:
					*uParam2 = 3186;
					break;
				
				case 64:
					*uParam2 = 3187;
					break;
				
				case 65:
					*uParam2 = 3188;
					break;
				
				case 66:
					*uParam2 = 3189;
					break;
				
				case 67:
					*uParam2 = 3190;
					break;
				
				case 68:
					*uParam2 = 3658;
					break;
				
				case 69:
					*uParam2 = 3659;
					break;
				
				case 70:
					*uParam2 = 3660;
					break;
				
				case 71:
					*uParam2 = 3661;
					break;
				
				case 72:
					*uParam2 = 3662;
					break;
				
				case 73:
					*uParam2 = 3663;
					break;
				
				case 74:
					*uParam2 = 3664;
					break;
				
				case 75:
					*uParam2 = 3665;
					break;
				
				case 76:
					*uParam2 = 3666;
					break;
				
				case 77:
					*uParam2 = 3667;
					break;
				
				case 78:
					*uParam2 = 3775;
					break;
				
				case 79:
					*uParam2 = 3776;
					break;
				
				case 80:
					*uParam2 = 3777;
					break;
				
				case 81:
					*uParam2 = 3778;
					break;
				
				case 82:
					*uParam2 = 3779;
					break;
				
				case 83:
					*uParam2 = 3780;
					break;
				
				case 84:
					*uParam2 = 3781;
					break;
				
				case 85:
					*uParam2 = 3782;
					break;
				
				case 86:
					*uParam2 = 3885;
					break;
				
				case 87:
					*uParam2 = 3886;
					break;
				
				case 88:
					*uParam2 = 3887;
					break;
				
				case 89:
					*uParam2 = 5320;
					break;
				
				case 90:
					*uParam2 = 5321;
					break;
				
				case 91:
					*uParam2 = 5322;
					break;
				
				case 92:
					*uParam2 = 5323;
					break;
				
				case 93:
					*uParam2 = 5324;
					break;
				
				case 94:
					*uParam2 = 5325;
					break;
				
				case 95:
					*uParam2 = 5326;
					break;
				
				case 96:
					*uParam2 = 5327;
					break;
				
				case 97:
					*uParam2 = 5328;
					break;
				
				case 98:
					*uParam2 = 5329;
					break;
				
				case 99:
					*uParam2 = 5330;
					break;
				
				case 100:
					*uParam2 = 5331;
					break;
				
				case 101:
					*uParam2 = 5377;
					break;
				
				case 102:
					*uParam2 = 5378;
					break;
				
				case 103:
					*uParam2 = 5379;
					break;
				
				case 104:
					*uParam2 = 5380;
					break;
				
				case 105:
					*uParam2 = 5381;
					break;
				
				case 106:
					*uParam2 = 5382;
					break;
				
				case 107:
					*uParam2 = 5383;
					break;
				
				case 108:
					*uParam2 = 5384;
					break;
				
				case 109:
					*uParam2 = 5385;
					break;
				
				case 110:
					*uParam2 = 5386;
					break;
				
				case 111:
					*uParam2 = 5387;
					break;
				
				case 112:
					*uParam2 = 5388;
					break;
				
				case 113:
					*uParam2 = 5389;
					break;
				
				case 114:
					*uParam2 = 5390;
					break;
				
				case 115:
					*uParam2 = 5391;
					break;
				
				case 116:
					*uParam2 = 5392;
					break;
				
				case 117:
					*uParam2 = 5393;
					break;
				
				case 118:
					*uParam2 = 5394;
					break;
				
				case 119:
					*uParam2 = 5395;
					break;
				
				case 120:
					*uParam2 = 5396;
					break;
				
				case 121:
					*uParam2 = 5397;
					break;
				
				case 122:
					*uParam2 = 5398;
					break;
				
				case 123:
					*uParam2 = 5399;
					break;
				
				case 124:
					*uParam2 = 6105;
					break;
				
				case 125:
					*uParam2 = 6106;
					break;
				
				case 126:
					*uParam2 = 6107;
					break;
				
				case 127:
					*uParam2 = 6108;
					break;
				
				case 128:
					*uParam2 = 6109;
					break;
				
				case 129:
					*uParam2 = 6110;
					break;
				
				case 130:
					*uParam2 = 6111;
					break;
				
				case 131:
					*uParam2 = 6112;
					break;
				
				case 132:
					*uParam2 = 6113;
					break;
				
				case 133:
					*uParam2 = 6114;
					break;
				
				case 134:
					*uParam2 = 6115;
					break;
				
				case 135:
					*uParam2 = 6116;
					break;
				
				case 136:
					*uParam2 = 6117;
					break;
				
				case 137:
					*uParam2 = 6118;
					break;
				
				case 138:
					*uParam2 = 6119;
					break;
				
				case 139:
					*uParam2 = 6418;
					break;
				
				case 140:
					*uParam2 = 6419;
					break;
				
				case 141:
					*uParam2 = 6420;
					break;
				
				case 142:
					*uParam2 = 6421;
					break;
				
				case 143:
					*uParam2 = 6422;
					break;
				
				case 144:
					*uParam2 = 6423;
					break;
				
				case 145:
					*uParam2 = 6424;
					break;
				
				case 146:
					*uParam2 = 6425;
					break;
				
				case 147:
					*uParam2 = 6426;
					break;
				
				case 148:
					*uParam2 = 6427;
					break;
				
				case 149:
					*uParam2 = 6428;
					break;
				
				case 150:
					*uParam2 = 6429;
					break;
				
				case 151:
					*uParam2 = 6430;
					break;
				
				case 152:
					*uParam2 = 6431;
					break;
				
				case 153:
					*uParam2 = 6432;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1762;
					break;
				
				case 1:
					*uParam2 = 1763;
					break;
				
				case 2:
					*uParam2 = 1764;
					break;
				
				case 3:
					*uParam2 = 1765;
					break;
				
				case 4:
					*uParam2 = 1766;
					break;
				
				case 5:
					*uParam2 = 1767;
					break;
				
				case 6:
					*uParam2 = 1775;
					break;
				
				case 7:
					*uParam2 = 1776;
					break;
				
				case 8:
					*uParam2 = 1777;
					break;
				
				case 9:
					*uParam2 = 1778;
					break;
				
				case 10:
					*uParam2 = 1779;
					break;
				
				case 11:
					*uParam2 = 1780;
					break;
				
				case 12:
					*uParam2 = 1781;
					break;
				
				case 13:
					*uParam2 = 1784;
					break;
				
				case 14:
					*uParam2 = 1785;
					break;
				
				case 15:
					*uParam2 = 1886;
					break;
				
				case 16:
					*uParam2 = 1887;
					break;
				
				case 17:
					*uParam2 = 1917;
					break;
				
				case 18:
					*uParam2 = 1935;
					break;
				
				case 19:
					*uParam2 = 1936;
					break;
				
				case 20:
					*uParam2 = 1937;
					break;
				
				case 21:
					*uParam2 = 1938;
					break;
				
				case 22:
					*uParam2 = 1939;
					break;
				
				case 23:
					*uParam2 = 2040;
					break;
				
				case 24:
					*uParam2 = 2041;
					break;
				
				case 25:
					*uParam2 = 2075;
					break;
				
				case 26:
					*uParam2 = 2076;
					break;
				
				case 27:
					*uParam2 = 2077;
					break;
				
				case 28:
					*uParam2 = 2078;
					break;
				
				case 29:
					*uParam2 = 2079;
					break;
				
				case 30:
					*uParam2 = 2080;
					break;
				
				case 31:
					*uParam2 = 2081;
					break;
				
				case 32:
					*uParam2 = 2082;
					break;
				
				case 33:
					*uParam2 = 2083;
					break;
				
				case 34:
					*uParam2 = 2084;
					break;
				
				case 35:
					*uParam2 = 2323;
					break;
				
				case 36:
					*uParam2 = 2324;
					break;
				
				case 37:
					*uParam2 = 2382;
					break;
				
				case 38:
					*uParam2 = 2383;
					break;
				
				case 39:
					*uParam2 = 2384;
					break;
				
				case 40:
					*uParam2 = 2385;
					break;
				
				case 41:
					*uParam2 = 2450;
					break;
				
				case 42:
					*uParam2 = 2451;
					break;
				
				case 43:
					*uParam2 = 2452;
					break;
				
				case 44:
					*uParam2 = 2453;
					break;
				
				case 45:
					*uParam2 = 2454;
					break;
				
				case 46:
					*uParam2 = 2455;
					break;
				
				case 47:
					*uParam2 = 2456;
					break;
				
				case 48:
					*uParam2 = 2457;
					break;
				
				case 49:
					*uParam2 = 2458;
					break;
				
				case 50:
					*uParam2 = 2459;
					break;
				
				case 51:
					*uParam2 = 2589;
					break;
				
				case 52:
					*uParam2 = 2590;
					break;
				
				case 53:
					*uParam2 = 2591;
					break;
				
				case 54:
					*uParam2 = 2592;
					break;
				
				case 55:
					*uParam2 = 2593;
					break;
				
				case 56:
					*uParam2 = 2594;
					break;
				
				case 57:
					*uParam2 = 2595;
					break;
				
				case 58:
					*uParam2 = 2596;
					break;
				
				case 59:
					*uParam2 = 2597;
					break;
				
				case 60:
					*uParam2 = 2598;
					break;
				
				case 61:
					*uParam2 = 2599;
					break;
				
				case 62:
					*uParam2 = 3191;
					break;
				
				case 63:
					*uParam2 = 3192;
					break;
				
				case 64:
					*uParam2 = 3193;
					break;
				
				case 65:
					*uParam2 = 3194;
					break;
				
				case 66:
					*uParam2 = 3195;
					break;
				
				case 67:
					*uParam2 = 3196;
					break;
				
				case 68:
					*uParam2 = 3668;
					break;
				
				case 69:
					*uParam2 = 3669;
					break;
				
				case 70:
					*uParam2 = 3670;
					break;
				
				case 71:
					*uParam2 = 3671;
					break;
				
				case 72:
					*uParam2 = 3672;
					break;
				
				case 73:
					*uParam2 = 3673;
					break;
				
				case 74:
					*uParam2 = 3674;
					break;
				
				case 75:
					*uParam2 = 3675;
					break;
				
				case 76:
					*uParam2 = 3676;
					break;
				
				case 77:
					*uParam2 = 3677;
					break;
				
				case 78:
					*uParam2 = 3783;
					break;
				
				case 79:
					*uParam2 = 3784;
					break;
				
				case 80:
					*uParam2 = 3785;
					break;
				
				case 81:
					*uParam2 = 3786;
					break;
				
				case 82:
					*uParam2 = 3787;
					break;
				
				case 83:
					*uParam2 = 3788;
					break;
				
				case 84:
					*uParam2 = 3789;
					break;
				
				case 85:
					*uParam2 = 3790;
					break;
				
				case 86:
					*uParam2 = 3888;
					break;
				
				case 87:
					*uParam2 = 3889;
					break;
				
				case 88:
					*uParam2 = 3890;
					break;
				
				case 89:
					*uParam2 = 5332;
					break;
				
				case 90:
					*uParam2 = 5333;
					break;
				
				case 91:
					*uParam2 = 5334;
					break;
				
				case 92:
					*uParam2 = 5335;
					break;
				
				case 93:
					*uParam2 = 5336;
					break;
				
				case 94:
					*uParam2 = 5337;
					break;
				
				case 95:
					*uParam2 = 5338;
					break;
				
				case 96:
					*uParam2 = 5339;
					break;
				
				case 97:
					*uParam2 = 5340;
					break;
				
				case 98:
					*uParam2 = 5341;
					break;
				
				case 99:
					*uParam2 = 5342;
					break;
				
				case 100:
					*uParam2 = 5343;
					break;
				
				case 101:
					*uParam2 = 5400;
					break;
				
				case 102:
					*uParam2 = 5401;
					break;
				
				case 103:
					*uParam2 = 5402;
					break;
				
				case 104:
					*uParam2 = 5403;
					break;
				
				case 105:
					*uParam2 = 5404;
					break;
				
				case 106:
					*uParam2 = 5405;
					break;
				
				case 107:
					*uParam2 = 5406;
					break;
				
				case 108:
					*uParam2 = 5407;
					break;
				
				case 109:
					*uParam2 = 5408;
					break;
				
				case 110:
					*uParam2 = 5409;
					break;
				
				case 111:
					*uParam2 = 5410;
					break;
				
				case 112:
					*uParam2 = 5411;
					break;
				
				case 113:
					*uParam2 = 5412;
					break;
				
				case 114:
					*uParam2 = 5413;
					break;
				
				case 115:
					*uParam2 = 5414;
					break;
				
				case 116:
					*uParam2 = 5415;
					break;
				
				case 117:
					*uParam2 = 5416;
					break;
				
				case 118:
					*uParam2 = 5417;
					break;
				
				case 119:
					*uParam2 = 5418;
					break;
				
				case 120:
					*uParam2 = 5419;
					break;
				
				case 121:
					*uParam2 = 5420;
					break;
				
				case 122:
					*uParam2 = 5421;
					break;
				
				case 123:
					*uParam2 = 5422;
					break;
				
				case 124:
					*uParam2 = 6120;
					break;
				
				case 125:
					*uParam2 = 6121;
					break;
				
				case 126:
					*uParam2 = 6122;
					break;
				
				case 127:
					*uParam2 = 6123;
					break;
				
				case 128:
					*uParam2 = 6124;
					break;
				
				case 129:
					*uParam2 = 6125;
					break;
				
				case 130:
					*uParam2 = 6126;
					break;
				
				case 131:
					*uParam2 = 6127;
					break;
				
				case 132:
					*uParam2 = 6128;
					break;
				
				case 133:
					*uParam2 = 6129;
					break;
				
				case 134:
					*uParam2 = 6130;
					break;
				
				case 135:
					*uParam2 = 6131;
					break;
				
				case 136:
					*uParam2 = 6132;
					break;
				
				case 137:
					*uParam2 = 6133;
					break;
				
				case 138:
					*uParam2 = 6134;
					break;
				
				case 139:
					*uParam2 = 6433;
					break;
				
				case 140:
					*uParam2 = 6434;
					break;
				
				case 141:
					*uParam2 = 6435;
					break;
				
				case 142:
					*uParam2 = 6436;
					break;
				
				case 143:
					*uParam2 = 6437;
					break;
				
				case 144:
					*uParam2 = 6438;
					break;
				
				case 145:
					*uParam2 = 6439;
					break;
				
				case 146:
					*uParam2 = 6440;
					break;
				
				case 147:
					*uParam2 = 6441;
					break;
				
				case 148:
					*uParam2 = 6442;
					break;
				
				case 149:
					*uParam2 = 6443;
					break;
				
				case 150:
					*uParam2 = 6444;
					break;
				
				case 151:
					*uParam2 = 6445;
					break;
				
				case 152:
					*uParam2 = 6446;
					break;
				
				case 153:
					*uParam2 = 6447;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 7872;
}

int func_131(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 0;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 1;
			break;
		
		case 2:
			return 2;
			break;
		
		case 3:
			return 3;
			break;
		
		case 4:
			return 4;
			break;
		
		case 5:
			return 5;
			break;
		
		case 6:
			return 6;
			break;
		
		case 7:
			return 7;
			break;
		
		case 8:
			return 8;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 0;
			break;
		
		case 13:
			return 0;
			break;
	}
	return 0;
}

void func_132(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<10> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<10> Var11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	iVar0 = (iParam1 - iParam2);
	iVar0 = iVar0;
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = Global_70671[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = FILES::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_2621444 = Var2.f_1;
					Global_2621445 = Var2;
					func_125(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_125(&(Global_70671[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&Var6);
		iVar9 = 0;
		iVar10 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, -1, 1, -1, -1);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			FILES::GET_SHOP_PED_QUERY_PROP(iVar8, &Var6);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var6))
			{
				if (iVar9 == (iParam1 - iParam2))
				{
					if (Var6.f_6 == 0)
					{
						iVar7 = 9;
					}
					else if (Var6.f_6 == 1)
					{
						iVar7 = 10;
					}
					else if (Var6.f_6 == 2)
					{
						iVar7 = 2;
					}
					else if (Var6.f_6 == 3)
					{
						iVar7 = 3;
					}
					else if (Var6.f_6 == 4)
					{
						iVar7 = 4;
					}
					else if (Var6.f_6 == 5)
					{
						iVar7 = 5;
					}
					else if (Var6.f_6 == 6)
					{
						iVar7 = 6;
					}
					else if (Var6.f_6 == 7)
					{
						iVar7 = 7;
					}
					else if (Var6.f_6 == 8)
					{
						iVar7 = 8;
					}
					else
					{
						iVar7 = -1;
					}
					Global_2621444 = Var6.f_1;
					Global_2621445 = Var6;
					func_125(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILES::_0x341DE7ED1D2A1BFD(Var6.f_1, -2050632586, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&Var11);
		iVar13 = 0;
		iVar14 = FILES::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, -1, 0, -1, func_113(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar12, &Var11);
			if (!FILES::_IS_DLC_DATA_EMPTY(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_2621444 = Var11.f_1;
					Global_2621445 = Var11;
					func_125(&(Global_70671[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILES::_0x341DE7ED1D2A1BFD(Var11.f_1, -2050632586, 0), -1, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_133(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 9);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_134(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P2_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P2_5", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P2_6", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P2_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P2_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P2_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P2_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P2_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P2_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P2_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P2_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P2_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P2_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P2_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P2_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P2_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P2_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P2_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P2_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P2_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P2_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P2_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P2_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 119;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P2_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 99;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P2_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 129;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P2_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P2_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P2_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 139;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P2_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 149;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P2_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 145;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P2_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P2_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 135;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P2_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P2_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P2_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P2_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P2_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P2_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P2_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P2_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P2_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P2_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P2_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P2_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P2_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P2_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 48);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_135(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 1);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_136(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 1);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_137(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "BERD_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 6);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_138(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 9;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 6;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		default:
			func_132(iVar7, iParam0, 33);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_139(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 270;
			break;
		
		case 16:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		default:
			func_132(iVar7, iParam0, 17);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_140(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "SPEC_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "SPEC_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 18);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_141(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 7);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_142(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 65;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 58;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 72;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 68;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 60;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "FEET_P2_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "FEET_P2_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "FEET_P2_9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P2_9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P2_9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P2_9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P2_9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P2_9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P2_9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P2_9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P2_9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P2_9_10", 16);
			iVar3 = 9;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P2_9_11", 16);
			iVar3 = 9;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P2_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P2_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P2_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P2_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P2_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P2_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_132(iVar7, iParam0, 84);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_143(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 129;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 115;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 22:
			StringCopy(&Var2, "LEGS_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 750;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 690;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 690;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 820;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "LEGS_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 58;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P2_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P2_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 65;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P2_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 60;
			break;
		
		case 39:
			StringCopy(&Var2, "LEGS_P2_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P2_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 63;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P2_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 60;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P2_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 99;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 105;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 110;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 110;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P2_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 99;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P2_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 110;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P2_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 110;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P2_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P2_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 105;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 15;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 15;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 15;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 15;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 15;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 600;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 600;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 600;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 600;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 600;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 600;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 600;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 600;
			break;
		
		case 71:
			StringCopy(&Var2, "LEGS_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 80;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 80;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 80;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 80;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P2_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 80;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P2_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 80;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 12;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 12;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 18;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 30;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 30;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 95:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 96:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 97:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 98:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 99:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 100:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 101:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 102:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 103:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		default:
			func_132(iVar7, iParam0, 104);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_144(int iParam0)
{
	if (iParam0 < 136)
	{
		func_146(iParam0);
	}
	else
	{
		func_145(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_132(3, iParam0, 242);
	}
}

void func_145(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 136:
			StringCopy(&Var2, "TORSO_P2_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 32;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P2_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P2_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 40;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P2_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 42;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P2_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P2_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P2_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P2_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P2_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P2_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P2_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P2_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 390;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P2_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 390;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P2_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P2_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P2_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P2_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 390;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P2_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P2_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 390;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P2_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 3950;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P2_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P2_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P2_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P2_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P2_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P2_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P2_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 19;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P2_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P2_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 19;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P2_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P2_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P2_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 28;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P2_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 28;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P2_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 25;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P2_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 22;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P2_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P2_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 22;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P2_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 19;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P2_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P2_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 25;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P2_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 20;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P2_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P2_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P2_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 40;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P2_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 45;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P2_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P2_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 49;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P2_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 820;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P2_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 790;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P2_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 820;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P2_25_8", 16);
			iVar3 = 25;
			iVar4 = 8;
			iVar1 = 929;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P2_25_9", 16);
			iVar3 = 25;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P2_25_10", 16);
			iVar3 = 25;
			iVar4 = 10;
			iVar1 = 850;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P2_25_11", 16);
			iVar3 = 25;
			iVar4 = 11;
			iVar1 = 790;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P2_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P2_26_1", 16);
			iVar3 = 26;
			iVar4 = 1;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P2_26_2", 16);
			iVar3 = 26;
			iVar4 = 2;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P2_26_3", 16);
			iVar3 = 26;
			iVar4 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P2_26_4", 16);
			iVar3 = 26;
			iVar4 = 4;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P2_26_5", 16);
			iVar3 = 26;
			iVar4 = 5;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P2_26_6", 16);
			iVar3 = 26;
			iVar4 = 6;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P2_26_7", 16);
			iVar3 = 26;
			iVar4 = 7;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P2_26_8", 16);
			iVar3 = 26;
			iVar4 = 8;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P2_26_9", 16);
			iVar3 = 26;
			iVar4 = 9;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P2_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 2200;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P2_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 2500;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P2_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 2500;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P2_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 2200;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P2_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 2500;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P2_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 2500;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P2_27_6", 16);
			iVar3 = 27;
			iVar4 = 6;
			iVar1 = 2200;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P2_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 1100;
			break;
		
		case 208:
			StringCopy(&Var2, "TORSO_P2_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 1200;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P2_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 1220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P2_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P2_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 1300;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P2_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 1360;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P2_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P2_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P2_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P2_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 42;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P2_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P2_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 45;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P2_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P2_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 44;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P2_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 46;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P2_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 52;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P2_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P2_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P2_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 2550;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P2_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 2750;
			break;
		
		case 227:
			StringCopy(&Var2, "TORSO_P2_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 2590;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P2_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 2750;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P2_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 2550;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P2_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 2590;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P2_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 2720;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P2_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 2750;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P2_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 3250;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P2_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 2950;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P2_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 3100;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P2_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 3150;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P2_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 3240;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P2_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 3350;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P2_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 3400;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P2_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 3280;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P2_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			break;
		
		default:
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_146(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P2_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P2_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 15;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P2_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P2_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P2_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P2_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P2_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P2_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 20;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P2_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 24;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P2_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 26;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P2_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 28;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P2_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 29;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P2_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 22;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P2_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 20;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "TORSO_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 35;
			break;
		
		case 19:
			StringCopy(&Var2, "TORSO_P2_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "TORSO_P2_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P2_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P2_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P2_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 40;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P2_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 40;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P2_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P2_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 40;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P2_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 500;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P2_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 560;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P2_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 600;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 650;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 500;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 560;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P2_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 500;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P2_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 650;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P2_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P2_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 690;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P2_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 560;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P2_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 590;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P2_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 690;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P2_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 540;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P2_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 500;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P2_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P2_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P2_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P2_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P2_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 22;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P2_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 350;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P2_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 27;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P2_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 370;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P2_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P2_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 22;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P2_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 25;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P2_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P2_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 22;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P2_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 27;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P2_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 25;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P2_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 27;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P2_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P2_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 39;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P2_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 42;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P2_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P2_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P2_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P2_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P2_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P2_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P2_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 88;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P2_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 60;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P2_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P2_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 70;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P2_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P2_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P2_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 90;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P2_14_8", 16);
			iVar3 = 14;
			iVar4 = 8;
			iVar1 = 95;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P2_14_9", 16);
			iVar3 = 14;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P2_14_10", 16);
			iVar3 = 14;
			iVar4 = 10;
			iVar1 = 95;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P2_14_11", 16);
			iVar3 = 14;
			iVar4 = 11;
			iVar1 = 110;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P2_14_12", 16);
			iVar3 = 14;
			iVar4 = 12;
			iVar1 = 98;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P2_14_13", 16);
			iVar3 = 14;
			iVar4 = 13;
			iVar1 = 88;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P2_14_14", 16);
			iVar3 = 14;
			iVar4 = 14;
			iVar1 = 98;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P2_14_15", 16);
			iVar3 = 14;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P2_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P2_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P2_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P2_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P2_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 520;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P2_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 490;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P2_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P2_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 420;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P2_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 420;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P2_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 85;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P2_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 85;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P2_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P2_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P2_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P2_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 78;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P2_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P2_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P2_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P2_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P2_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 78;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P2_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 75;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P2_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 75;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P2_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 75;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P2_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 78;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P2_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 78;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P2_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P2_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P2_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 32;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P2_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P2_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P2_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P2_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P2_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P2_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 29;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P2_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P2_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P2_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P2_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 32;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P2_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P2_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 32;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P2_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 40;
			break;
		
		default:
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_147(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P2_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P2_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P2_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P2_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P2_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P2_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P2_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P2_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P2_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 9);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_148(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_132(iVar7, iParam0, 7);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_149(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_167(iParam1);
			break;
		
		case 2:
			func_166(iParam1);
			break;
		
		case 3:
			func_162(iParam1);
			break;
		
		case 4:
			func_161(iParam1);
			break;
		
		case 6:
			func_160(iParam1);
			break;
		
		case 5:
			func_159(iParam1);
			break;
		
		case 8:
			func_158(iParam1);
			break;
		
		case 9:
			func_157(iParam1);
			break;
		
		case 10:
			func_156(iParam1);
			break;
		
		case 1:
			func_155(iParam1);
			break;
		
		case 7:
			func_154(iParam1);
			break;
		
		case 11:
			func_153(iParam1);
			break;
		
		case 12:
			func_152(iParam1);
			break;
		
		case 13:
			func_151(iParam1);
			break;
		
		case 14:
			func_150(iParam1);
			break;
	}
}

void func_150(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 158:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		case 159:
			StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 4590;
			iVar5 = 2;
			break;
		
		case 160:
			StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 4100;
			iVar5 = 2;
			break;
		
		case 161:
			StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 3850;
			iVar5 = 2;
			break;
		
		case 162:
			StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 1850;
			iVar5 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 5250;
			iVar5 = 2;
			break;
		
		case 164:
			StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 165:
			StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 166:
			StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 5050;
			iVar5 = 2;
			break;
		
		case 167:
			StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 2500;
			iVar5 = 2;
			break;
		
		case 168:
			StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 1950;
			iVar5 = 2;
			break;
		
		case 169:
			StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 3900;
			iVar5 = 2;
			break;
		
		case 170:
			StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 3550;
			iVar5 = 2;
			break;
		
		case 171:
			StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 4500;
			iVar5 = 2;
			break;
		
		case 172:
			StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 2700;
			iVar5 = 2;
			break;
		
		case 173:
			StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 3100;
			iVar5 = 2;
			break;
		
		case 174:
			StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 2950;
			iVar5 = 2;
			break;
		
		case 82:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P1_E1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P1_E1_1", 16);
			iVar3 = 1;
			iVar4 = 1;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P1_E1_2", 16);
			iVar3 = 1;
			iVar4 = 2;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P1_E1_3", 16);
			iVar3 = 1;
			iVar4 = 3;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P1_E1_4", 16);
			iVar3 = 1;
			iVar4 = 4;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P1_E1_5", 16);
			iVar3 = 1;
			iVar4 = 5;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P1_E1_6", 16);
			iVar3 = 1;
			iVar4 = 6;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P1_E1_7", 16);
			iVar3 = 1;
			iVar4 = 7;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P1_E1_8", 16);
			iVar3 = 1;
			iVar4 = 8;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P1_E1_9", 16);
			iVar3 = 1;
			iVar4 = 9;
			iVar1 = 75;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P1_E2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P1_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P1_E4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P1_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P1_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 130;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P1_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P1_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P1_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P1_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P1_E5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 110;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P1_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 112;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P1_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 115;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P1_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 118;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P1_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 120;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P1_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 125;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P1_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 128;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P1_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P1_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "PROPS_P1_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "PROPS_P1_E6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 113:
			StringCopy(&Var2, "PROPS_P1_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 114:
			StringCopy(&Var2, "PROPS_P1_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 115:
			StringCopy(&Var2, "PROPS_P1_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 116:
			StringCopy(&Var2, "PROPS_P1_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 117:
			StringCopy(&Var2, "PROPS_P1_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 118:
			StringCopy(&Var2, "PROPS_P1_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 119:
			StringCopy(&Var2, "PROPS_P1_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 120:
			StringCopy(&Var2, "PROPS_P1_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 121:
			StringCopy(&Var2, "PROPS_P1_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 122:
			StringCopy(&Var2, "PROPS_P1_E7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 123:
			StringCopy(&Var2, "PROPS_P1_E7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 124:
			StringCopy(&Var2, "PROPS_P1_E7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 139;
			iVar5 = 10;
			break;
		
		case 125:
			StringCopy(&Var2, "PROPS_P1_E7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 149;
			iVar5 = 10;
			break;
		
		case 126:
			StringCopy(&Var2, "PROPS_P1_E7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 135;
			iVar5 = 10;
			break;
		
		case 127:
			StringCopy(&Var2, "PROPS_P1_E7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 138;
			iVar5 = 10;
			break;
		
		case 128:
			StringCopy(&Var2, "PROPS_P1_E7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 129:
			StringCopy(&Var2, "PROPS_P1_E7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 130:
			StringCopy(&Var2, "PROPS_P1_E7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 131:
			StringCopy(&Var2, "PROPS_P1_E7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 132:
			StringCopy(&Var2, "PROPS_P1_E8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 198;
			iVar5 = 10;
			break;
		
		case 133:
			StringCopy(&Var2, "PROPS_P1_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 134:
			StringCopy(&Var2, "PROPS_P1_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 135:
			StringCopy(&Var2, "PROPS_P1_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 220;
			iVar5 = 10;
			break;
		
		case 136:
			StringCopy(&Var2, "PROPS_P1_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 137:
			StringCopy(&Var2, "PROPS_P1_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 200;
			iVar5 = 10;
			break;
		
		case 138:
			StringCopy(&Var2, "PROPS_P1_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 208;
			iVar5 = 10;
			break;
		
		case 139:
			StringCopy(&Var2, "PROPS_P1_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 210;
			iVar5 = 10;
			break;
		
		case 140:
			StringCopy(&Var2, "PROPS_P1_E9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 141:
			StringCopy(&Var2, "PROPS_P1_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 142:
			StringCopy(&Var2, "PROPS_P1_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 190;
			iVar5 = 10;
			break;
		
		case 143:
			StringCopy(&Var2, "PROPS_P1_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 144:
			StringCopy(&Var2, "PROPS_P1_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 145:
			StringCopy(&Var2, "PROPS_P1_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 146:
			StringCopy(&Var2, "PROPS_P1_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 147:
			StringCopy(&Var2, "PROPS_P1_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 148:
			StringCopy(&Var2, "PROPS_P1_E9_8", 16);
			iVar3 = 9;
			iVar4 = 8;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 149:
			StringCopy(&Var2, "PROPS_P1_E9_9", 16);
			iVar3 = 9;
			iVar4 = 9;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 150:
			StringCopy(&Var2, "PROPS_P1_E10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 140;
			iVar5 = 10;
			break;
		
		case 151:
			StringCopy(&Var2, "PROPS_P1_E10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 145;
			iVar5 = 10;
			break;
		
		case 152:
			StringCopy(&Var2, "PROPS_P1_E10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 150;
			iVar5 = 10;
			break;
		
		case 153:
			StringCopy(&Var2, "PROPS_P1_E10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 154:
			StringCopy(&Var2, "PROPS_P1_E10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 168;
			iVar5 = 10;
			break;
		
		case 155:
			StringCopy(&Var2, "PROPS_P1_E10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 178;
			iVar5 = 10;
			break;
		
		case 156:
			StringCopy(&Var2, "PROPS_P1_E10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 160;
			iVar5 = 10;
			break;
		
		case 157:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 10:
			StringCopy(&Var2, "PROPS_P1_H0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "PROPS_P1_H3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P1_H19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P1_H19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P1_H19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 32;
			iVar5 = 0;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P1_H19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P1_H19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 38;
			iVar5 = 0;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P1_H19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P1_H19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 42;
			iVar5 = 0;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P1_H19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 40;
			iVar5 = 0;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P1_H19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 45;
			iVar5 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P1_H19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 48;
			iVar5 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P1_H19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P1_H19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 25;
			iVar5 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P1_H19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P1_H19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 28;
			iVar5 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P1_H19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 30;
			iVar5 = 0;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P1_H19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 35;
			iVar5 = 0;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 81:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 175);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_151(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 9);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_152(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P1_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P1_2", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "OUTFIT_P1_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P1_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P1_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "OUTFIT_P1_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P1_13", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P1_15", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "OUTFIT_P1_16", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P1_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P1_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P1_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P1_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P1_21", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P1_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P1_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P1_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P1_25", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P1_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P1_27", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P1_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P1_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P1_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P1_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4650;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P1_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P1_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5000;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P1_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P1_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4750;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P1_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P1_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5200;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P1_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P1_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P1_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P1_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P1_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P1_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P1_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P1_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P1_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3000;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P1_10", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P1_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P1_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P1_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P1_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P1_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 47);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_153(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P1_1_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P1_1_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P1_1_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P1_1_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 3;
			iVar4 = 10;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 3;
			iVar4 = 11;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 3;
			iVar4 = 12;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 3;
			iVar4 = 13;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 3;
			iVar4 = 14;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 3;
			iVar4 = 15;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P1_3_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P1_3_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P1_3_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P1_3_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P1_3_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P1_3_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P1_3_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P1_3_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P1_3_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P1_3_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P1_3_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P1_3_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P1_3_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P1_3_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P1_3_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P1_3_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P1_5_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "JBIB_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "JBIB_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "JBIB_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "JBIB_P1_10_1", 16);
			iVar3 = 10;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 49:
			StringCopy(&Var2, "JBIB_P1_10_2", 16);
			iVar3 = 10;
			iVar4 = 2;
			iVar1 = 35;
			break;
		
		case 50:
			StringCopy(&Var2, "JBIB_P1_10_3", 16);
			iVar3 = 10;
			iVar4 = 3;
			iVar1 = 32;
			break;
		
		case 51:
			StringCopy(&Var2, "JBIB_P1_10_4", 16);
			iVar3 = 10;
			iVar4 = 4;
			iVar1 = 35;
			break;
		
		case 52:
			StringCopy(&Var2, "JBIB_P1_10_5", 16);
			iVar3 = 10;
			iVar4 = 5;
			iVar1 = 48;
			break;
		
		case 53:
			StringCopy(&Var2, "JBIB_P1_10_6", 16);
			iVar3 = 10;
			iVar4 = 6;
			iVar1 = 52;
			break;
		
		case 54:
			StringCopy(&Var2, "JBIB_P1_10_7", 16);
			iVar3 = 10;
			iVar4 = 7;
			iVar1 = 38;
			break;
		
		case 55:
			StringCopy(&Var2, "JBIB_P1_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			iVar1 = 42;
			break;
		
		case 56:
			StringCopy(&Var2, "JBIB_P1_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			iVar1 = 38;
			break;
		
		case 57:
			StringCopy(&Var2, "JBIB_P1_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 58:
			StringCopy(&Var2, "JBIB_P1_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			iVar1 = 48;
			break;
		
		case 59:
			StringCopy(&Var2, "JBIB_P1_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			iVar1 = 42;
			break;
		
		case 60:
			StringCopy(&Var2, "JBIB_P1_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			iVar1 = 45;
			break;
		
		case 61:
			StringCopy(&Var2, "JBIB_P1_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 62:
			StringCopy(&Var2, "JBIB_P1_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			iVar1 = 49;
			break;
		
		default:
			func_132(iVar7, iParam0, 63);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_154(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 1);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_155(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 5);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_156(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 5;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 2;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 4;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 5;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 6;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 1;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 2;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 3;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 5;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 6;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 7;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 8;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 9;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 10;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 11;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 12;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 13;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 14;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 15;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 1;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 3;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 4;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 5;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 6;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 41:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 42:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 53);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_157(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 6:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 7:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 8:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 12);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_158(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC_P1_9_0", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 195;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 195;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 250;
			break;
		
		case 15:
			StringCopy(&Var2, "SPEC_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 250;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 17:
			StringCopy(&Var2, "SPEC_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 195;
			break;
		
		case 18:
			StringCopy(&Var2, "SPEC_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 250;
			break;
		
		case 19:
			StringCopy(&Var2, "SPEC_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 250;
			break;
		
		case 20:
			StringCopy(&Var2, "SPEC_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 250;
			break;
		
		case 21:
			StringCopy(&Var2, "SPEC_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 250;
			break;
		
		case 22:
			StringCopy(&Var2, "SPEC_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 195;
			break;
		
		case 23:
			StringCopy(&Var2, "SPEC_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 250;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 29:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 31:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 32:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 33:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 34:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 35:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 36:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 37:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 38:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 39:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 40:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 41:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 42:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 43:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			break;
		
		case 45:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			break;
		
		case 46:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			break;
		
		case 48:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			break;
		
		case 49:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			break;
		
		case 50:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			break;
		
		case 51:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			break;
		
		case 52:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			break;
		
		case 53:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			break;
		
		case 54:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			break;
		
		case 55:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			break;
		
		case 56:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			break;
		
		case 57:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			break;
		
		case 58:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			break;
		
		case 59:
			StringCopy(&Var2, "SPEC_P1_15_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 60:
			StringCopy(&Var2, "SPEC_P1_15_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 61:
			StringCopy(&Var2, "SPEC_P1_15_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 62:
			StringCopy(&Var2, "SPEC_P1_15_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			break;
		
		case 63:
			StringCopy(&Var2, "SPEC_P1_15_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			break;
		
		case 64:
			StringCopy(&Var2, "SPEC_P1_15_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			break;
		
		case 65:
			StringCopy(&Var2, "SPEC_P1_15_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			break;
		
		case 66:
			StringCopy(&Var2, "SPEC_P1_15_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			break;
		
		case 67:
			StringCopy(&Var2, "SPEC_P1_15_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			break;
		
		case 68:
			StringCopy(&Var2, "SPEC_P1_15_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			break;
		
		case 69:
			StringCopy(&Var2, "SPEC_P1_15_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "SPEC_P1_15_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			break;
		
		case 71:
			StringCopy(&Var2, "SPEC_P1_15_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			break;
		
		case 72:
			StringCopy(&Var2, "SPEC_P1_15_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			break;
		
		case 73:
			StringCopy(&Var2, "SPEC_P1_15_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			break;
		
		case 74:
			StringCopy(&Var2, "SPEC_P1_15_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			break;
		
		case 75:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 77);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_159(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 7);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_160(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P1_00_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P1_00_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 80;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P1_00_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P1_00_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 89;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P1_00_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 45;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P1_00_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 6:
			StringCopy(&Var2, "FEET_P1_00_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 89;
			break;
		
		case 7:
			StringCopy(&Var2, "FEET_P1_00_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 8:
			StringCopy(&Var2, "FEET_P1_00_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 9:
			StringCopy(&Var2, "FEET_P1_00_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 40;
			break;
		
		case 10:
			StringCopy(&Var2, "FEET_P1_00_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 145;
			break;
		
		case 11:
			StringCopy(&Var2, "FEET_P1_00_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 145;
			break;
		
		case 12:
			StringCopy(&Var2, "FEET_P1_01_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P1_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "FEET_P1_06_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 180;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P1_06_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 80;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P1_06_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 200;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P1_06_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 220;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P1_06_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 235;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P1_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 870;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P1_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 870;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P1_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 870;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P1_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 1275;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P1_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 1275;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P1_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 1275;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P1_08_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 1275;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P1_08_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 1275;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P1_08_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 1275;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P1_10_0", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 38:
			StringCopy(&Var2, "FEET_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 50;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 25;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 20;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 24;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 29;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 25;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 28;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 30;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 155;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 155;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 165;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 170;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 165;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 170;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 160;
			break;
		
		case 73:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P1_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P1_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P1_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P1_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P1_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P1_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P1_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P1_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P1_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P1_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P1_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 99:
			StringCopy(&Var2, "FEET_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 100:
			StringCopy(&Var2, "FEET_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 101:
			StringCopy(&Var2, "FEET_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 102:
			StringCopy(&Var2, "FEET_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 103:
			StringCopy(&Var2, "FEET_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 104:
			StringCopy(&Var2, "FEET_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 105:
			StringCopy(&Var2, "FEET_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 106:
			StringCopy(&Var2, "FEET_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 107:
			StringCopy(&Var2, "FEET_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 108:
			StringCopy(&Var2, "FEET_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 109:
			StringCopy(&Var2, "FEET_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 110:
			StringCopy(&Var2, "FEET_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 111:
			StringCopy(&Var2, "FEET_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 112:
			StringCopy(&Var2, "FEET_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 113:
			StringCopy(&Var2, "FEET_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 114:
			StringCopy(&Var2, "FEET_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 115:
			StringCopy(&Var2, "FEET_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 116:
			StringCopy(&Var2, "FEET_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 117:
			StringCopy(&Var2, "FEET_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 118:
			StringCopy(&Var2, "FEET_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 119:
			StringCopy(&Var2, "FEET_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 120:
			StringCopy(&Var2, "FEET_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 121:
			StringCopy(&Var2, "FEET_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 122:
			StringCopy(&Var2, "FEET_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 123:
			StringCopy(&Var2, "FEET_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 124:
			StringCopy(&Var2, "FEET_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 125:
			StringCopy(&Var2, "FEET_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 126:
			StringCopy(&Var2, "FEET_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 127:
			StringCopy(&Var2, "FEET_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "FEET_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 129:
			StringCopy(&Var2, "FEET_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 130:
			StringCopy(&Var2, "FEET_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 131:
			StringCopy(&Var2, "FEET_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 132:
			StringCopy(&Var2, "FEET_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 133:
			StringCopy(&Var2, "FEET_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		default:
			func_132(iVar7, iParam0, 134);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_161(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 32;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 38;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 44;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 690;
			break;
		
		case 16:
			StringCopy(&Var2, "LEGS_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 720;
			break;
		
		case 17:
			StringCopy(&Var2, "LEGS_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 18:
			StringCopy(&Var2, "LEGS_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "LEGS_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 740;
			break;
		
		case 20:
			StringCopy(&Var2, "LEGS_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 21:
			StringCopy(&Var2, "LEGS_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 790;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 145;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 140;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 148;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 154;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 158;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "LEGS_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar1 = 820;
			break;
		
		case 34:
			StringCopy(&Var2, "LEGS_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 820;
			break;
		
		case 35:
			StringCopy(&Var2, "LEGS_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar1 = 850;
			break;
		
		case 36:
			StringCopy(&Var2, "LEGS_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 850;
			break;
		
		case 37:
			StringCopy(&Var2, "LEGS_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 38:
			StringCopy(&Var2, "LEGS_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 950;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "LEGS_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 45;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 45;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 48;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "LEGS_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 58;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 60;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 62;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P1_15_12", 16);
			iVar3 = 15;
			iVar4 = 12;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P1_15_13", 16);
			iVar3 = 15;
			iVar4 = 13;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P1_15_14", 16);
			iVar3 = 15;
			iVar4 = 14;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P1_15_15", 16);
			iVar3 = 15;
			iVar4 = 15;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 16;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 180;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P1_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 80:
			StringCopy(&Var2, "LEGS_P1_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P1_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P1_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 128;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P1_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 130;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P1_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 145;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P1_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 138;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P1_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 132;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P1_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 148;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 118;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 118;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 129;
			break;
		
		case 92:
			StringCopy(&Var2, "LEGS_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 135;
			break;
		
		case 93:
			StringCopy(&Var2, "LEGS_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 135;
			break;
		
		case 94:
			StringCopy(&Var2, "LEGS_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 118;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 118;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 118;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 55;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 59;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P1_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P1_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 65;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P1_22_6", 16);
			iVar3 = 22;
			iVar4 = 6;
			iVar1 = 69;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P1_22_7", 16);
			iVar3 = 22;
			iVar4 = 7;
			iVar1 = 69;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P1_22_8", 16);
			iVar3 = 22;
			iVar4 = 8;
			iVar1 = 75;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P1_22_9", 16);
			iVar3 = 22;
			iVar4 = 9;
			iVar1 = 75;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P1_22_10", 16);
			iVar3 = 22;
			iVar4 = 10;
			iVar1 = 65;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P1_22_11", 16);
			iVar3 = 22;
			iVar4 = 11;
			iVar1 = 65;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P1_22_12", 16);
			iVar3 = 22;
			iVar4 = 12;
			iVar1 = 65;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P1_22_13", 16);
			iVar3 = 22;
			iVar4 = 13;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P1_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 38;
			break;
		
		case 112:
			StringCopy(&Var2, "LEGS_P1_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 38;
			break;
		
		case 113:
			StringCopy(&Var2, "LEGS_P1_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 28;
			break;
		
		case 114:
			StringCopy(&Var2, "LEGS_P1_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 34;
			break;
		
		case 115:
			StringCopy(&Var2, "LEGS_P1_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 36;
			break;
		
		case 116:
			StringCopy(&Var2, "LEGS_P1_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 32;
			break;
		
		default:
			func_132(iVar7, iParam0, 117);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_162(int iParam0)
{
	if (iParam0 < 107)
	{
		func_165(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_164(iParam0);
	}
	else
	{
		func_163(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_132(3, iParam0, 318);
	}
}

void func_163(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 227:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 228:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 229:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 230:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 231:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 232:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 233:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 234:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 235:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 236:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 237:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 238:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 239:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 240:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 241:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 242:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 243:
			StringCopy(&Var2, "TORSO_P1_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 244:
			StringCopy(&Var2, "TORSO_P1_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 245:
			StringCopy(&Var2, "TORSO_P1_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 246:
			StringCopy(&Var2, "TORSO_P1_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 247:
			StringCopy(&Var2, "TORSO_P1_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 248:
			StringCopy(&Var2, "TORSO_P1_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 249:
			StringCopy(&Var2, "TORSO_P1_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 250:
			StringCopy(&Var2, "TORSO_P1_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 251:
			StringCopy(&Var2, "TORSO_P1_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 252:
			StringCopy(&Var2, "TORSO_P1_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 253:
			StringCopy(&Var2, "TORSO_P1_24_10", 16);
			iVar3 = 24;
			iVar4 = 10;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 254:
			StringCopy(&Var2, "TORSO_P1_24_11", 16);
			iVar3 = 24;
			iVar4 = 11;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 255:
			StringCopy(&Var2, "TORSO_P1_24_12", 16);
			iVar3 = 24;
			iVar4 = 12;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 256:
			StringCopy(&Var2, "TORSO_P1_24_13", 16);
			iVar3 = 24;
			iVar4 = 13;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 257:
			StringCopy(&Var2, "TORSO_P1_24_14", 16);
			iVar3 = 24;
			iVar4 = 14;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 258:
			StringCopy(&Var2, "TORSO_P1_24_15", 16);
			iVar3 = 24;
			iVar4 = 15;
			iVar1 = 2200;
			iVar6 = 3;
			break;
		
		case 259:
			StringCopy(&Var2, "TORSO_P1_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 260:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar6 = 1;
			break;
		
		case 261:
			StringCopy(&Var2, "TORSO_P1_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 262:
			StringCopy(&Var2, "TORSO_P1_27_1", 16);
			iVar3 = 27;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 263:
			StringCopy(&Var2, "TORSO_P1_27_2", 16);
			iVar3 = 27;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 264:
			StringCopy(&Var2, "TORSO_P1_27_3", 16);
			iVar3 = 27;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 265:
			StringCopy(&Var2, "TORSO_P1_27_4", 16);
			iVar3 = 27;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 266:
			StringCopy(&Var2, "TORSO_P1_27_5", 16);
			iVar3 = 27;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 267:
			StringCopy(&Var2, "TORSO_P1_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 268:
			StringCopy(&Var2, "TORSO_P1_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 269:
			StringCopy(&Var2, "TORSO_P1_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 270:
			StringCopy(&Var2, "TORSO_P1_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 271:
			StringCopy(&Var2, "TORSO_P1_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 272:
			StringCopy(&Var2, "TORSO_P1_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 273:
			StringCopy(&Var2, "TORSO_P1_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 274:
			StringCopy(&Var2, "TORSO_P1_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 275:
			StringCopy(&Var2, "TORSO_P1_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 276:
			StringCopy(&Var2, "TORSO_P1_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 277:
			StringCopy(&Var2, "TORSO_P1_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 278:
			StringCopy(&Var2, "TORSO_P1_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 279:
			StringCopy(&Var2, "TORSO_P1_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 280:
			StringCopy(&Var2, "TORSO_P1_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 281:
			StringCopy(&Var2, "TORSO_P1_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 282:
			StringCopy(&Var2, "TORSO_P1_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 283:
			StringCopy(&Var2, "TORSO_P1_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			iVar1 = 250;
			break;
		
		case 284:
			StringCopy(&Var2, "TORSO_P1_29_1", 16);
			iVar3 = 29;
			iVar4 = 1;
			iVar1 = 270;
			break;
		
		case 285:
			StringCopy(&Var2, "TORSO_P1_29_2", 16);
			iVar3 = 29;
			iVar4 = 2;
			iVar1 = 280;
			break;
		
		case 286:
			StringCopy(&Var2, "TORSO_P1_29_3", 16);
			iVar3 = 29;
			iVar4 = 3;
			iVar1 = 275;
			break;
		
		case 287:
			StringCopy(&Var2, "TORSO_P1_29_4", 16);
			iVar3 = 29;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 288:
			StringCopy(&Var2, "TORSO_P1_29_5", 16);
			iVar3 = 29;
			iVar4 = 5;
			iVar1 = 35;
			break;
		
		case 289:
			StringCopy(&Var2, "TORSO_P1_29_6", 16);
			iVar3 = 29;
			iVar4 = 6;
			iVar1 = 35;
			break;
		
		case 290:
			StringCopy(&Var2, "TORSO_P1_29_7", 16);
			iVar3 = 29;
			iVar4 = 7;
			iVar1 = 35;
			break;
		
		case 291:
			StringCopy(&Var2, "TORSO_P1_29_8", 16);
			iVar3 = 29;
			iVar4 = 8;
			iVar1 = 295;
			break;
		
		case 292:
			StringCopy(&Var2, "TORSO_P1_29_9", 16);
			iVar3 = 29;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 293:
			StringCopy(&Var2, "TORSO_P1_29_10", 16);
			iVar3 = 29;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 294:
			StringCopy(&Var2, "TORSO_P1_29_11", 16);
			iVar3 = 29;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 295:
			StringCopy(&Var2, "TORSO_P1_29_12", 16);
			iVar3 = 29;
			iVar4 = 12;
			break;
		
		case 296:
			StringCopy(&Var2, "TORSO_P1_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 1750;
			break;
		
		case 297:
			StringCopy(&Var2, "TORSO_P1_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 1920;
			break;
		
		case 298:
			StringCopy(&Var2, "TORSO_P1_30_2", 16);
			iVar3 = 30;
			iVar4 = 2;
			iVar1 = 1890;
			break;
		
		case 299:
			StringCopy(&Var2, "TORSO_P1_30_3", 16);
			iVar3 = 30;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 300:
			StringCopy(&Var2, "TORSO_P1_30_4", 16);
			iVar3 = 30;
			iVar4 = 4;
			iVar1 = 1750;
			break;
		
		case 301:
			StringCopy(&Var2, "TORSO_P1_30_5", 16);
			iVar3 = 30;
			iVar4 = 5;
			iVar1 = 1990;
			break;
		
		case 302:
			StringCopy(&Var2, "TORSO_P1_30_6", 16);
			iVar3 = 30;
			iVar4 = 6;
			iVar1 = 1820;
			break;
		
		case 303:
			StringCopy(&Var2, "TORSO_P1_30_7", 16);
			iVar3 = 30;
			iVar4 = 7;
			iVar1 = 1990;
			break;
		
		case 304:
			StringCopy(&Var2, "TORSO_P1_30_8", 16);
			iVar3 = 30;
			iVar4 = 8;
			iVar1 = 1920;
			break;
		
		case 305:
			StringCopy(&Var2, "TORSO_P1_30_9", 16);
			iVar3 = 30;
			iVar4 = 9;
			iVar1 = 1850;
			break;
		
		case 306:
			StringCopy(&Var2, "TORSO_P1_30_10", 16);
			iVar3 = 30;
			iVar4 = 10;
			iVar1 = 1990;
			break;
		
		case 307:
			StringCopy(&Var2, "TORSO_P1_30_11", 16);
			iVar3 = 30;
			iVar4 = 11;
			iVar1 = 1790;
			break;
		
		case 308:
			StringCopy(&Var2, "TORSO_P1_30_12", 16);
			iVar3 = 30;
			iVar4 = 12;
			iVar1 = 1790;
			break;
		
		case 309:
			StringCopy(&Var2, "TORSO_P1_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 69;
			break;
		
		case 310:
			StringCopy(&Var2, "TORSO_P1_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 75;
			break;
		
		case 311:
			StringCopy(&Var2, "TORSO_P1_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 75;
			break;
		
		case 312:
			StringCopy(&Var2, "TORSO_P1_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 79;
			break;
		
		case 313:
			StringCopy(&Var2, "TORSO_P1_31_4", 16);
			iVar3 = 31;
			iVar4 = 4;
			iVar1 = 79;
			break;
		
		case 314:
			StringCopy(&Var2, "TORSO_P1_31_5", 16);
			iVar3 = 31;
			iVar4 = 5;
			iVar1 = 89;
			break;
		
		case 315:
			StringCopy(&Var2, "TORSO_P1_31_6", 16);
			iVar3 = 31;
			iVar4 = 6;
			iVar1 = 85;
			break;
		
		case 316:
			StringCopy(&Var2, "TORSO_P1_31_7", 16);
			iVar3 = 31;
			iVar4 = 7;
			iVar1 = 85;
			break;
		
		case 317:
			StringCopy(&Var2, "TORSO_P1_31_8", 16);
			iVar3 = 31;
			iVar4 = 8;
			break;
		
		default:
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_164(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 107:
			StringCopy(&Var2, "TORSO_P1_12_0", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar1 = 195;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P1_12_1", 16);
			iVar3 = 12;
			iVar4 = 1;
			iVar1 = 420;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P1_12_2", 16);
			iVar3 = 12;
			iVar4 = 2;
			iVar1 = 390;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P1_12_3", 16);
			iVar3 = 12;
			iVar4 = 3;
			iVar1 = 450;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P1_12_4", 16);
			iVar3 = 12;
			iVar4 = 4;
			iVar1 = 400;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P1_12_5", 16);
			iVar3 = 12;
			iVar4 = 5;
			iVar1 = 390;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P1_12_6", 16);
			iVar3 = 12;
			iVar4 = 6;
			iVar1 = 570;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P1_12_7", 16);
			iVar3 = 12;
			iVar4 = 7;
			iVar1 = 390;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P1_12_8", 16);
			iVar3 = 12;
			iVar4 = 8;
			iVar1 = 470;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P1_12_9", 16);
			iVar3 = 12;
			iVar4 = 9;
			iVar1 = 390;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P1_12_10", 16);
			iVar3 = 12;
			iVar4 = 10;
			iVar1 = 520;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P1_12_11", 16);
			iVar3 = 12;
			iVar4 = 11;
			iVar1 = 490;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P1_12_12", 16);
			iVar3 = 12;
			iVar4 = 12;
			iVar1 = 490;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P1_12_13", 16);
			iVar3 = 12;
			iVar4 = 13;
			iVar1 = 590;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P1_12_14", 16);
			iVar3 = 12;
			iVar4 = 14;
			iVar1 = 560;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P1_12_15", 16);
			iVar3 = 12;
			iVar4 = 15;
			iVar1 = 520;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P1_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P1_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P1_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P1_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 90;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P1_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 85;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P1_13_5", 16);
			iVar3 = 13;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P1_13_6", 16);
			iVar3 = 13;
			iVar4 = 6;
			iVar1 = 90;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P1_13_7", 16);
			iVar3 = 13;
			iVar4 = 7;
			iVar1 = 47;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P1_13_8", 16);
			iVar3 = 13;
			iVar4 = 8;
			iVar1 = 45;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P1_13_9", 16);
			iVar3 = 13;
			iVar4 = 9;
			iVar1 = 48;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P1_13_10", 16);
			iVar3 = 13;
			iVar4 = 10;
			iVar1 = 45;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P1_13_11", 16);
			iVar3 = 13;
			iVar4 = 11;
			iVar1 = 85;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P1_13_12", 16);
			iVar3 = 13;
			iVar4 = 12;
			iVar1 = 45;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P1_13_13", 16);
			iVar3 = 13;
			iVar4 = 13;
			iVar1 = 47;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P1_13_14", 16);
			iVar3 = 13;
			iVar4 = 14;
			iVar1 = 45;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P1_13_15", 16);
			iVar3 = 13;
			iVar4 = 15;
			iVar1 = 48;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P1_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P1_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 290;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P1_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 290;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P1_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P1_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 290;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P1_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 290;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P1_14_6", 16);
			iVar3 = 14;
			iVar4 = 6;
			iVar1 = 65;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P1_14_7", 16);
			iVar3 = 14;
			iVar4 = 7;
			iVar1 = 65;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P1_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P1_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 220;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P1_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 220;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P1_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P1_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P1_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 250;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P1_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 260;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P1_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 40;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P1_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P1_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 45;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P1_15_10", 16);
			iVar3 = 15;
			iVar4 = 10;
			iVar1 = 40;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P1_15_11", 16);
			iVar3 = 15;
			iVar4 = 11;
			iVar1 = 55;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P1_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P1_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 40;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P1_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			iVar1 = 50;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P1_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P1_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 50;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P1_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 50;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P1_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 50;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P1_17_6", 16);
			iVar3 = 17;
			iVar4 = 6;
			iVar1 = 50;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P1_17_7", 16);
			iVar3 = 17;
			iVar4 = 7;
			iVar1 = 50;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P1_17_8", 16);
			iVar3 = 17;
			iVar4 = 8;
			iVar1 = 50;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P1_17_9", 16);
			iVar3 = 17;
			iVar4 = 9;
			iVar1 = 50;
			break;
		
		case 170:
			StringCopy(&Var2, "TORSO_P1_17_10", 16);
			iVar3 = 17;
			iVar4 = 10;
			iVar1 = 50;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P1_17_11", 16);
			iVar3 = 17;
			iVar4 = 11;
			iVar1 = 50;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P1_17_12", 16);
			iVar3 = 17;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P1_17_13", 16);
			iVar3 = 17;
			iVar4 = 13;
			iVar1 = 50;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P1_17_14", 16);
			iVar3 = 17;
			iVar4 = 14;
			iVar1 = 50;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P1_17_15", 16);
			iVar3 = 17;
			iVar4 = 15;
			iVar1 = 50;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P1_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P1_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar6 = 3;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P1_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar6 = 3;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P1_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P1_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 181:
			StringCopy(&Var2, "TORSO_P1_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 182:
			StringCopy(&Var2, "TORSO_P1_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 183:
			StringCopy(&Var2, "TORSO_P1_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 184:
			StringCopy(&Var2, "TORSO_P1_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 185:
			StringCopy(&Var2, "TORSO_P1_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 186:
			StringCopy(&Var2, "TORSO_P1_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 187:
			StringCopy(&Var2, "TORSO_P1_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 188:
			StringCopy(&Var2, "TORSO_P1_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 189:
			StringCopy(&Var2, "TORSO_P1_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar6 = 3;
			break;
		
		case 190:
			StringCopy(&Var2, "TORSO_P1_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 191:
			StringCopy(&Var2, "TORSO_P1_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 192:
			StringCopy(&Var2, "TORSO_P1_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 193:
			StringCopy(&Var2, "TORSO_P1_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 194:
			StringCopy(&Var2, "TORSO_P1_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 195:
			StringCopy(&Var2, "TORSO_P1_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 196:
			StringCopy(&Var2, "TORSO_P1_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 197:
			StringCopy(&Var2, "TORSO_P1_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 198:
			StringCopy(&Var2, "TORSO_P1_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 199:
			StringCopy(&Var2, "TORSO_P1_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 200:
			StringCopy(&Var2, "TORSO_P1_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 201:
			StringCopy(&Var2, "TORSO_P1_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 202:
			StringCopy(&Var2, "TORSO_P1_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 203:
			StringCopy(&Var2, "TORSO_P1_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 480;
			iVar6 = 3;
			break;
		
		case 204:
			StringCopy(&Var2, "TORSO_P1_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 205:
			StringCopy(&Var2, "TORSO_P1_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 206:
			StringCopy(&Var2, "TORSO_P1_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 520;
			iVar6 = 3;
			break;
		
		case 207:
			StringCopy(&Var2, "TORSO_P1_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 440;
			iVar6 = 3;
			break;
		
		case 208:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 209:
			StringCopy(&Var2, "TORSO_P1_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 220;
			break;
		
		case 210:
			StringCopy(&Var2, "TORSO_P1_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 200;
			break;
		
		case 211:
			StringCopy(&Var2, "TORSO_P1_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 240;
			break;
		
		case 212:
			StringCopy(&Var2, "TORSO_P1_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 240;
			break;
		
		case 213:
			StringCopy(&Var2, "TORSO_P1_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 260;
			break;
		
		case 214:
			StringCopy(&Var2, "TORSO_P1_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 275;
			break;
		
		case 215:
			StringCopy(&Var2, "TORSO_P1_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 275;
			break;
		
		case 216:
			StringCopy(&Var2, "TORSO_P1_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 280;
			break;
		
		case 217:
			StringCopy(&Var2, "TORSO_P1_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 280;
			break;
		
		case 218:
			StringCopy(&Var2, "TORSO_P1_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 280;
			break;
		
		case 219:
			StringCopy(&Var2, "TORSO_P1_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 280;
			break;
		
		case 220:
			StringCopy(&Var2, "TORSO_P1_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 280;
			break;
		
		case 221:
			StringCopy(&Var2, "TORSO_P1_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 280;
			break;
		
		case 222:
			StringCopy(&Var2, "TORSO_P1_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 280;
			break;
		
		case 223:
			StringCopy(&Var2, "TORSO_P1_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 3100;
			iVar6 = 3;
			break;
		
		case 224:
			StringCopy(&Var2, "TORSO_P1_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 2800;
			iVar6 = 3;
			break;
		
		case 225:
			StringCopy(&Var2, "TORSO_P1_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 2500;
			iVar6 = 3;
			break;
		
		case 226:
			StringCopy(&Var2, "TORSO_P1_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3000;
			iVar6 = 3;
			break;
		
		default:
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_165(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 180;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 20;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 18;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar1 = 19;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar1 = 22;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar1 = 20;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar1 = 19;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar1 = 19;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar1 = 18;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar1 = 20;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			iVar1 = 22;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar1 = 19;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar1 = 22;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 2;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 3;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 4;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 5;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 3;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 1;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P1_4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P1_4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 20;
			iVar6 = 2;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P1_4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P1_4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 23;
			iVar6 = 2;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P1_4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P1_4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P1_4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 26;
			iVar6 = 2;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P1_4_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 24;
			iVar6 = 2;
			break;
		
		case 33:
			StringCopy(&Var2, "TORSO_P1_4_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 34:
			StringCopy(&Var2, "TORSO_P1_4_10", 16);
			iVar3 = 4;
			iVar4 = 10;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 35:
			StringCopy(&Var2, "TORSO_P1_4_11", 16);
			iVar3 = 4;
			iVar4 = 11;
			iVar1 = 28;
			iVar6 = 2;
			break;
		
		case 36:
			StringCopy(&Var2, "TORSO_P1_4_12", 16);
			iVar3 = 4;
			iVar4 = 12;
			iVar1 = 25;
			iVar6 = 2;
			break;
		
		case 37:
			StringCopy(&Var2, "TORSO_P1_4_13", 16);
			iVar3 = 4;
			iVar4 = 13;
			iVar1 = 22;
			iVar6 = 2;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P1_4_14", 16);
			iVar3 = 4;
			iVar4 = 14;
			iVar1 = 27;
			iVar6 = 2;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P1_4_15", 16);
			iVar3 = 4;
			iVar4 = 15;
			iVar1 = 29;
			iVar6 = 2;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar6 = 4;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P1_6_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P1_6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P1_6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P1_6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 1270;
			iVar6 = 3;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P1_6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P1_6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 1090;
			iVar6 = 3;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P1_6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P1_6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 1120;
			iVar6 = 3;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P1_6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P1_6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 1290;
			iVar6 = 3;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P1_6_10", 16);
			iVar3 = 6;
			iVar4 = 10;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P1_6_11", 16);
			iVar3 = 6;
			iVar4 = 11;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P1_6_12", 16);
			iVar3 = 6;
			iVar4 = 12;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P1_6_13", 16);
			iVar3 = 6;
			iVar4 = 13;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P1_6_14", 16);
			iVar3 = 6;
			iVar4 = 14;
			iVar1 = 1590;
			iVar6 = 3;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P1_6_15", 16);
			iVar3 = 6;
			iVar4 = 15;
			iVar1 = 1320;
			iVar6 = 3;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P1_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 98;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P1_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 98;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P1_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 60:
			StringCopy(&Var2, "TORSO_P1_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 61:
			StringCopy(&Var2, "TORSO_P1_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 118;
			break;
		
		case 62:
			StringCopy(&Var2, "TORSO_P1_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 63:
			StringCopy(&Var2, "TORSO_P1_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 64:
			StringCopy(&Var2, "TORSO_P1_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 129;
			break;
		
		case 65:
			StringCopy(&Var2, "TORSO_P1_7_8", 16);
			iVar3 = 7;
			iVar4 = 8;
			iVar1 = 125;
			break;
		
		case 66:
			StringCopy(&Var2, "TORSO_P1_7_9", 16);
			iVar3 = 7;
			iVar4 = 9;
			iVar1 = 125;
			break;
		
		case 67:
			StringCopy(&Var2, "TORSO_P1_7_10", 16);
			iVar3 = 7;
			iVar4 = 10;
			iVar1 = 129;
			break;
		
		case 68:
			StringCopy(&Var2, "TORSO_P1_7_11", 16);
			iVar3 = 7;
			iVar4 = 11;
			iVar1 = 129;
			break;
		
		case 69:
			StringCopy(&Var2, "TORSO_P1_7_12", 16);
			iVar3 = 7;
			iVar4 = 12;
			iVar1 = 135;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P1_7_13", 16);
			iVar3 = 7;
			iVar4 = 13;
			iVar1 = 139;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P1_7_14", 16);
			iVar3 = 7;
			iVar4 = 14;
			iVar1 = 145;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P1_7_15", 16);
			iVar3 = 7;
			iVar4 = 15;
			iVar1 = 145;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P1_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P1_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P1_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 76:
			StringCopy(&Var2, "TORSO_P1_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P1_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 30;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P1_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 38;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P1_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 32;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P1_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 30;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P1_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 33;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P1_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 35;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P1_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P1_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 38;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P1_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 33;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P1_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 35;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P1_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 38;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P1_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 32;
			break;
		
		case 89:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 90:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 91:
			StringCopy(&Var2, "TORSO_P1_11_0", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P1_11_1", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar1 = 59;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P1_11_2", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P1_11_3", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P1_11_4", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar1 = 29;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P1_11_5", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar1 = 27;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P1_11_6", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar1 = 25;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P1_11_7", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P1_11_8", 16);
			iVar3 = 11;
			iVar4 = 8;
			iVar1 = 28;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P1_11_9", 16);
			iVar3 = 11;
			iVar4 = 9;
			iVar1 = 30;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P1_11_10", 16);
			iVar3 = 11;
			iVar4 = 10;
			iVar1 = 29;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P1_11_11", 16);
			iVar3 = 11;
			iVar4 = 11;
			iVar1 = 27;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P1_11_12", 16);
			iVar3 = 11;
			iVar4 = 12;
			iVar1 = 29;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P1_11_13", 16);
			iVar3 = 11;
			iVar4 = 13;
			iVar1 = 32;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P1_11_14", 16);
			iVar3 = 11;
			iVar4 = 14;
			iVar1 = 30;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P1_11_15", 16);
			iVar3 = 11;
			iVar4 = 15;
			iVar1 = 28;
			break;
		
		default:
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_166(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P1_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P1_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P1_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P1_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar6 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P1_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar6 = 3;
			break;
		
		case 5:
			StringCopy(&Var2, "HAIR_P1_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar6 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "HAIR_P1_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			iVar6 = 3;
			break;
		
		case 7:
			StringCopy(&Var2, "HAIR_P1_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			iVar6 = 3;
			break;
		
		case 8:
			StringCopy(&Var2, "HAIR_P1_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			iVar6 = 3;
			break;
		
		case 9:
			StringCopy(&Var2, "HAIR_P1_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			iVar6 = 3;
			break;
		
		case 10:
			StringCopy(&Var2, "HAIR_P1_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			iVar6 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "HAIR_P1_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			iVar6 = 3;
			break;
		
		case 12:
			StringCopy(&Var2, "HAIR_P1_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			iVar6 = 3;
			break;
		
		case 13:
			StringCopy(&Var2, "HAIR_P1_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "HAIR_P1_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			iVar6 = 3;
			break;
		
		case 15:
			StringCopy(&Var2, "HAIR_P1_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			iVar6 = 3;
			break;
		
		case 16:
			StringCopy(&Var2, "HAIR_P1_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 17:
			StringCopy(&Var2, "HAIR_P1_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 18:
			StringCopy(&Var2, "HAIR_P1_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar6 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "HAIR_P1_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 21);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_167(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		default:
			func_132(iVar7, iParam0, 10);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_168(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			func_185(iParam1);
			break;
		
		case 2:
			func_184(iParam1);
			break;
		
		case 3:
			func_181(iParam1);
			break;
		
		case 4:
			func_180(iParam1);
			break;
		
		case 6:
			func_179(iParam1);
			break;
		
		case 5:
			func_178(iParam1);
			break;
		
		case 8:
			func_177(iParam1);
			break;
		
		case 9:
			func_176(iParam1);
			break;
		
		case 10:
			func_175(iParam1);
			break;
		
		case 1:
			func_174(iParam1);
			break;
		
		case 7:
			func_173(iParam1);
			break;
		
		case 11:
			func_172(iParam1);
			break;
		
		case 12:
			func_171(iParam1);
			break;
		
		case 13:
			func_170(iParam1);
			break;
		
		case 14:
			func_169(iParam1);
			break;
	}
}

void func_169(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 14;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = -1;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 8;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "PROPS_P0_H1", 16);
			iVar3 = 1;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "PROPS_P0_H2", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 320;
			iVar5 = 11;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 6;
			iVar5 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 7;
			iVar5 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "PROPS_P0_H12", 16);
			iVar3 = 12;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 31:
			StringCopy(&Var2, "PROPS_P1_H8_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "PROPS_P1_H8_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 270;
			iVar5 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "PROPS_P1_H9_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "PROPS_P1_H9_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 200;
			iVar5 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "PROPS_P1_H10_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "PROPS_P1_H10_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 350;
			iVar5 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "PROPS_P1_H11_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			iVar1 = 450;
			iVar5 = 0;
			break;
		
		case 38:
			StringCopy(&Var2, "PROPS_P1_H12_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 39:
			StringCopy(&Var2, "PROPS_P1_H12_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 500;
			iVar5 = 0;
			break;
		
		case 40:
			StringCopy(&Var2, "PROPS_P1_H13_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 41:
			StringCopy(&Var2, "PROPS_P1_H13_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 50;
			iVar5 = 0;
			break;
		
		case 42:
			StringCopy(&Var2, "PROPS_P1_H14_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 43:
			StringCopy(&Var2, "PROPS_P1_H14_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 44:
			StringCopy(&Var2, "PROPS_P1_H14_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 99;
			iVar5 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar5 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar5 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar5 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar5 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar5 = 0;
			break;
		
		case 53:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 54:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 55:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 57:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar5 = 0;
			break;
		
		case 58:
			StringCopy(&Var2, "PROPS_P0_E0", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 45;
			iVar5 = 10;
			break;
		
		case 59:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 10;
			break;
		
		case 61:
			StringCopy(&Var2, "PROPS_P0_E3", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 55;
			iVar5 = 10;
			break;
		
		case 62:
			StringCopy(&Var2, "PROPS_P0_E4", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 58;
			iVar5 = 10;
			break;
		
		case 63:
			StringCopy(&Var2, "PROPS_P0_E4_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 56;
			iVar5 = 10;
			break;
		
		case 64:
			StringCopy(&Var2, "PROPS_P0_E4_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 60;
			iVar5 = 10;
			break;
		
		case 65:
			StringCopy(&Var2, "PROPS_P0_E4_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 66:
			StringCopy(&Var2, "PROPS_P0_E4_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 62;
			iVar5 = 10;
			break;
		
		case 67:
			StringCopy(&Var2, "PROPS_P0_E4_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 68:
			StringCopy(&Var2, "PROPS_P0_E4_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 69:
			StringCopy(&Var2, "PROPS_P0_E4_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 68;
			iVar5 = 10;
			break;
		
		case 70:
			StringCopy(&Var2, "PROPS_P0_E5", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 65;
			iVar5 = 10;
			break;
		
		case 71:
			StringCopy(&Var2, "PROPS_P0_E5_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 72:
			StringCopy(&Var2, "PROPS_P0_E5_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 72;
			iVar5 = 10;
			break;
		
		case 73:
			StringCopy(&Var2, "PROPS_P0_E5_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 70;
			iVar5 = 10;
			break;
		
		case 74:
			StringCopy(&Var2, "PROPS_P0_E5_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 74;
			iVar5 = 10;
			break;
		
		case 75:
			StringCopy(&Var2, "PROPS_P0_E5_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 78;
			iVar5 = 10;
			break;
		
		case 76:
			StringCopy(&Var2, "PROPS_P0_E5_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 82;
			iVar5 = 10;
			break;
		
		case 77:
			StringCopy(&Var2, "PROPS_P0_E5_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 78:
			StringCopy(&Var2, "PROPS_P0_E5_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 85;
			iVar5 = 10;
			break;
		
		case 79:
			StringCopy(&Var2, "PROPS_P0_E5_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar5 = 10;
			break;
		
		case 80:
			StringCopy(&Var2, "PROPS_P0_E6", 16);
			iVar3 = 6;
			iVar4 = 0;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 81:
			StringCopy(&Var2, "PROPS_P0_E6_1", 16);
			iVar3 = 6;
			iVar4 = 1;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 82:
			StringCopy(&Var2, "PROPS_P0_E6_2", 16);
			iVar3 = 6;
			iVar4 = 2;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 83:
			StringCopy(&Var2, "PROPS_P0_E6_3", 16);
			iVar3 = 6;
			iVar4 = 3;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 84:
			StringCopy(&Var2, "PROPS_P0_E6_4", 16);
			iVar3 = 6;
			iVar4 = 4;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 85:
			StringCopy(&Var2, "PROPS_P0_E6_5", 16);
			iVar3 = 6;
			iVar4 = 5;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 86:
			StringCopy(&Var2, "PROPS_P0_E6_6", 16);
			iVar3 = 6;
			iVar4 = 6;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 87:
			StringCopy(&Var2, "PROPS_P0_E6_7", 16);
			iVar3 = 6;
			iVar4 = 7;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 88:
			StringCopy(&Var2, "PROPS_P0_E6_8", 16);
			iVar3 = 6;
			iVar4 = 8;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 89:
			StringCopy(&Var2, "PROPS_P0_E6_9", 16);
			iVar3 = 6;
			iVar4 = 9;
			iVar1 = 69;
			iVar5 = 10;
			break;
		
		case 90:
			StringCopy(&Var2, "PROPS_P0_E7", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar5 = 10;
			break;
		
		case 91:
			StringCopy(&Var2, "PROPS_P0_E8", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 170;
			iVar5 = 10;
			break;
		
		case 92:
			StringCopy(&Var2, "PROPS_P0_E8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 93:
			StringCopy(&Var2, "PROPS_P0_E8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 180;
			iVar5 = 10;
			break;
		
		case 94:
			StringCopy(&Var2, "PROPS_P0_E8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 95:
			StringCopy(&Var2, "PROPS_P0_E8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 96:
			StringCopy(&Var2, "PROPS_P0_E8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 195;
			iVar5 = 10;
			break;
		
		case 97:
			StringCopy(&Var2, "PROPS_P0_E8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 235;
			iVar5 = 10;
			break;
		
		case 98:
			StringCopy(&Var2, "PROPS_P0_E8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 245;
			iVar5 = 10;
			break;
		
		case 99:
			StringCopy(&Var2, "PROPS_P0_E8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 250;
			iVar5 = 10;
			break;
		
		case 100:
			StringCopy(&Var2, "PROPS_P0_E8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 275;
			iVar5 = 10;
			break;
		
		case 101:
			StringCopy(&Var2, "PROPS_P0_E8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 280;
			iVar5 = 10;
			break;
		
		case 102:
			StringCopy(&Var2, "PROPS_P0_E8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 295;
			iVar5 = 10;
			break;
		
		case 103:
			StringCopy(&Var2, "PROPS_P0_E9", 16);
			iVar3 = 9;
			iVar4 = 0;
			iVar1 = 179;
			iVar5 = 10;
			break;
		
		case 104:
			StringCopy(&Var2, "PROPS_P0_E9_1", 16);
			iVar3 = 9;
			iVar4 = 1;
			iVar1 = 159;
			iVar5 = 10;
			break;
		
		case 105:
			StringCopy(&Var2, "PROPS_P0_E9_2", 16);
			iVar3 = 9;
			iVar4 = 2;
			iVar1 = 165;
			iVar5 = 10;
			break;
		
		case 106:
			StringCopy(&Var2, "PROPS_P0_E9_3", 16);
			iVar3 = 9;
			iVar4 = 3;
			iVar1 = 155;
			iVar5 = 10;
			break;
		
		case 107:
			StringCopy(&Var2, "PROPS_P0_E9_4", 16);
			iVar3 = 9;
			iVar4 = 4;
			iVar1 = 175;
			iVar5 = 10;
			break;
		
		case 108:
			StringCopy(&Var2, "PROPS_P0_E9_5", 16);
			iVar3 = 9;
			iVar4 = 5;
			iVar1 = 185;
			iVar5 = 10;
			break;
		
		case 109:
			StringCopy(&Var2, "PROPS_P0_E9_6", 16);
			iVar3 = 9;
			iVar4 = 6;
			iVar1 = 189;
			iVar5 = 10;
			break;
		
		case 110:
			StringCopy(&Var2, "PROPS_P0_E9_7", 16);
			iVar3 = 9;
			iVar4 = 7;
			iVar1 = 225;
			iVar5 = 10;
			break;
		
		case 111:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			iVar1 = 100;
			iVar5 = 10;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			iVar5 = 2;
			break;
		
		default:
			func_132(iVar7, iParam0, 113);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_170(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 13;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 10);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_171(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 12;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "OUTFIT_P0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 1:
			StringCopy(&Var2, "OUTFIT_P0_1", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "OUTFIT_P0_4", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "OUTFIT_P0_7", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "OUTFIT_P0_8", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "OUTFIT_P0_9", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 9:
			StringCopy(&Var2, "OUTFIT_P0_12", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "OUTFIT_P0_14", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 12:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 13:
			StringCopy(&Var2, "OUTFIT_P0_18", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 14:
			StringCopy(&Var2, "OUTFIT_P0_19", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 15:
			StringCopy(&Var2, "OUTFIT_P0_20", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "OUTFIT_P0_22", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 10000;
			break;
		
		case 17:
			StringCopy(&Var2, "OUTFIT_P0_23", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 18:
			StringCopy(&Var2, "OUTFIT_P0_24", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "OUTFIT_P0_26", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 20:
			StringCopy(&Var2, "OUTFIT_P0_28", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 21:
			StringCopy(&Var2, "OUTFIT_P0_29", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 22:
			StringCopy(&Var2, "OUTFIT_P0_30", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 105;
			break;
		
		case 23:
			StringCopy(&Var2, "OUTFIT_P0_31", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 24:
			StringCopy(&Var2, "OUTFIT_P0_32", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 25:
			StringCopy(&Var2, "OUTFIT_P0_33", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 26:
			StringCopy(&Var2, "OUTFIT_P0_34", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 27:
			StringCopy(&Var2, "OUTFIT_P0_35", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 28:
			StringCopy(&Var2, "OUTFIT_P0_11", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "OUTFIT_P0_36", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 30:
			StringCopy(&Var2, "OUTFIT_P0_37", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 31:
			StringCopy(&Var2, "OUTFIT_P0_38", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 32:
			StringCopy(&Var2, "OUTFIT_P0_39", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 33:
			StringCopy(&Var2, "OUTFIT_P0_40", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 34:
			StringCopy(&Var2, "OUTFIT_P0_41", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 35:
			StringCopy(&Var2, "OUTFIT_P0_42", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 36:
			StringCopy(&Var2, "OUTFIT_P0_43", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 37:
			StringCopy(&Var2, "OUTFIT_P0_44", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 3900;
			break;
		
		case 38:
			StringCopy(&Var2, "OUTFIT_P0_45", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4000;
			break;
		
		case 39:
			StringCopy(&Var2, "OUTFIT_P0_46", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 40:
			StringCopy(&Var2, "OUTFIT_P0_47", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4600;
			break;
		
		case 41:
			StringCopy(&Var2, "OUTFIT_P0_48", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 42:
			StringCopy(&Var2, "OUTFIT_P0_49", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 43:
			StringCopy(&Var2, "OUTFIT_P0_50", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4400;
			break;
		
		case 44:
			StringCopy(&Var2, "OUTFIT_P0_51", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4900;
			break;
		
		case 45:
			StringCopy(&Var2, "OUTFIT_P0_52", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5500;
			break;
		
		case 46:
			StringCopy(&Var2, "OUTFIT_P0_53", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 4500;
			break;
		
		case 47:
			StringCopy(&Var2, "OUTFIT_P0_54", 16);
			iVar3 = 0;
			iVar4 = 0;
			iVar1 = 5900;
			break;
		
		case 48:
			StringCopy(&Var2, "OUTFIT_P0_55", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 49:
			StringCopy(&Var2, "OUTFIT_P0_17", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 50:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 51:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 52:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 53);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_172(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 11;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "JBIB_P0_02_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "JBIB_P0_02_1", 16);
			iVar3 = 2;
			iVar4 = 1;
			break;
		
		case 4:
			StringCopy(&Var2, "JBIB_P0_02_2", 16);
			iVar3 = 2;
			iVar4 = 2;
			break;
		
		case 5:
			StringCopy(&Var2, "JBIB_P0_02_3", 16);
			iVar3 = 2;
			iVar4 = 3;
			break;
		
		case 6:
			StringCopy(&Var2, "JBIB_P0_02_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			break;
		
		case 7:
			StringCopy(&Var2, "JBIB_P0_02_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			break;
		
		case 8:
			StringCopy(&Var2, "JBIB_P0_03_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			iVar1 = 390;
			break;
		
		case 9:
			StringCopy(&Var2, "JBIB_P0_03_1", 16);
			iVar3 = 3;
			iVar4 = 1;
			iVar1 = 390;
			break;
		
		case 10:
			StringCopy(&Var2, "JBIB_P0_03_2", 16);
			iVar3 = 3;
			iVar4 = 2;
			iVar1 = 420;
			break;
		
		case 11:
			StringCopy(&Var2, "JBIB_P0_03_3", 16);
			iVar3 = 3;
			iVar4 = 3;
			iVar1 = 420;
			break;
		
		case 12:
			StringCopy(&Var2, "JBIB_P0_03_4", 16);
			iVar3 = 3;
			iVar4 = 4;
			iVar1 = 490;
			break;
		
		case 13:
			StringCopy(&Var2, "JBIB_P0_03_5", 16);
			iVar3 = 3;
			iVar4 = 5;
			iVar1 = 490;
			break;
		
		case 14:
			StringCopy(&Var2, "JBIB_P0_03_6", 16);
			iVar3 = 3;
			iVar4 = 6;
			iVar1 = 540;
			break;
		
		case 15:
			StringCopy(&Var2, "JBIB_P0_03_7", 16);
			iVar3 = 3;
			iVar4 = 7;
			iVar1 = 540;
			break;
		
		case 16:
			StringCopy(&Var2, "JBIB_P0_03_8", 16);
			iVar3 = 3;
			iVar4 = 8;
			iVar1 = 550;
			break;
		
		case 17:
			StringCopy(&Var2, "JBIB_P0_03_9", 16);
			iVar3 = 3;
			iVar4 = 9;
			iVar1 = 540;
			break;
		
		case 18:
			StringCopy(&Var2, "JBIB_P0_04_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 19:
			StringCopy(&Var2, "JBIB_P0_04_1", 16);
			iVar3 = 4;
			iVar4 = 1;
			iVar1 = 850;
			break;
		
		case 20:
			StringCopy(&Var2, "JBIB_P0_04_2", 16);
			iVar3 = 4;
			iVar4 = 2;
			iVar1 = 890;
			break;
		
		case 21:
			StringCopy(&Var2, "JBIB_P0_04_3", 16);
			iVar3 = 4;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 22:
			StringCopy(&Var2, "JBIB_P0_04_4", 16);
			iVar3 = 4;
			iVar4 = 4;
			iVar1 = 920;
			break;
		
		case 23:
			StringCopy(&Var2, "JBIB_P0_04_5", 16);
			iVar3 = 4;
			iVar4 = 5;
			iVar1 = 920;
			break;
		
		case 24:
			StringCopy(&Var2, "JBIB_P0_04_6", 16);
			iVar3 = 4;
			iVar4 = 6;
			iVar1 = 950;
			break;
		
		case 25:
			StringCopy(&Var2, "JBIB_P0_04_7", 16);
			iVar3 = 4;
			iVar4 = 7;
			iVar1 = 980;
			break;
		
		case 26:
			StringCopy(&Var2, "JBIB_P0_04_8", 16);
			iVar3 = 4;
			iVar4 = 8;
			iVar1 = 1050;
			break;
		
		case 27:
			StringCopy(&Var2, "JBIB_P0_04_9", 16);
			iVar3 = 4;
			iVar4 = 9;
			iVar1 = 1100;
			break;
		
		case 28:
			StringCopy(&Var2, "JBIB_P0_05_0", 16);
			iVar3 = 5;
			iVar4 = 0;
			iVar1 = 1890;
			break;
		
		case 29:
			StringCopy(&Var2, "JBIB_P0_05_1", 16);
			iVar3 = 5;
			iVar4 = 1;
			iVar1 = 1820;
			break;
		
		case 30:
			StringCopy(&Var2, "JBIB_P0_05_2", 16);
			iVar3 = 5;
			iVar4 = 2;
			iVar1 = 1820;
			break;
		
		case 31:
			StringCopy(&Var2, "JBIB_P0_05_3", 16);
			iVar3 = 5;
			iVar4 = 3;
			iVar1 = 1850;
			break;
		
		case 32:
			StringCopy(&Var2, "JBIB_P0_05_4", 16);
			iVar3 = 5;
			iVar4 = 4;
			iVar1 = 1850;
			break;
		
		case 33:
			StringCopy(&Var2, "JBIB_P0_05_5", 16);
			iVar3 = 5;
			iVar4 = 5;
			iVar1 = 1900;
			break;
		
		case 34:
			StringCopy(&Var2, "JBIB_P0_05_6", 16);
			iVar3 = 5;
			iVar4 = 6;
			iVar1 = 1920;
			break;
		
		case 35:
			StringCopy(&Var2, "JBIB_P0_05_7", 16);
			iVar3 = 5;
			iVar4 = 7;
			iVar1 = 1980;
			break;
		
		case 36:
			StringCopy(&Var2, "JBIB_P0_05_8", 16);
			iVar3 = 5;
			iVar4 = 8;
			iVar1 = 2100;
			break;
		
		case 37:
			StringCopy(&Var2, "JBIB_P0_05_9", 16);
			iVar3 = 5;
			iVar4 = 9;
			iVar1 = 2120;
			break;
		
		case 38:
			StringCopy(&Var2, "JBIB_P0_05_10", 16);
			iVar3 = 5;
			iVar4 = 10;
			iVar1 = 2000;
			break;
		
		case 39:
			StringCopy(&Var2, "JBIB_P0_05_11", 16);
			iVar3 = 5;
			iVar4 = 11;
			iVar1 = 2200;
			break;
		
		case 40:
			StringCopy(&Var2, "JBIB_P0_05_12", 16);
			iVar3 = 5;
			iVar4 = 12;
			iVar1 = 2280;
			break;
		
		case 41:
			StringCopy(&Var2, "JBIB_P0_05_13", 16);
			iVar3 = 5;
			iVar4 = 13;
			iVar1 = 2300;
			break;
		
		case 42:
			StringCopy(&Var2, "JBIB_P0_05_14", 16);
			iVar3 = 5;
			iVar4 = 14;
			iVar1 = 2350;
			break;
		
		case 43:
			StringCopy(&Var2, "JBIB_P0_05_15", 16);
			iVar3 = 5;
			iVar4 = 15;
			iVar1 = 2280;
			break;
		
		case 44:
			StringCopy(&Var2, "JBIB_P0_06_0", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 45);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_173(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 7;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 1);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_174(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 1;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "BERD_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "BERD_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "BERD_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "BERD_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "BERD_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 5);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_175(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 10;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 1;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 2;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 3;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 4;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 5;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 6;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 7;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 1;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 2;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 3;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 4;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 5;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 1;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 2;
			break;
		
		case 24:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 3;
			break;
		
		case 25:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 4;
			break;
		
		case 26:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 5;
			break;
		
		case 27:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 6;
			break;
		
		case 28:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 29:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			break;
		
		case 30:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 2;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 3;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 4;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 5;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 6;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 7;
			break;
		
		case 36:
			StringCopy(&Var2, "DECL_P0_10_8", 16);
			iVar3 = 10;
			iVar4 = 8;
			break;
		
		case 37:
			StringCopy(&Var2, "DECL_P0_10_9", 16);
			iVar3 = 10;
			iVar4 = 9;
			break;
		
		case 38:
			StringCopy(&Var2, "DECL_P0_10_10", 16);
			iVar3 = 10;
			iVar4 = 10;
			break;
		
		case 39:
			StringCopy(&Var2, "DECL_P0_10_11", 16);
			iVar3 = 10;
			iVar4 = 11;
			break;
		
		case 40:
			StringCopy(&Var2, "DECL_P0_10_12", 16);
			iVar3 = 10;
			iVar4 = 12;
			break;
		
		case 41:
			StringCopy(&Var2, "DECL_P0_10_13", 16);
			iVar3 = 10;
			iVar4 = 13;
			break;
		
		case 42:
			StringCopy(&Var2, "DECL_P0_10_14", 16);
			iVar3 = 10;
			iVar4 = 14;
			break;
		
		case 43:
			StringCopy(&Var2, "DECL_P0_10_15", 16);
			iVar3 = 10;
			iVar4 = 15;
			break;
		
		case 44:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			break;
		
		case 47:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			break;
		
		default:
			func_132(iVar7, iParam0, 48);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_176(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 9;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 1;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "SPEC2_P0_08_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			iVar1 = 125;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC2_P0_08_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 11:
			StringCopy(&Var2, "SPEC2_P0_08_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 175;
			break;
		
		case 12:
			StringCopy(&Var2, "SPEC2_P0_08_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 85;
			break;
		
		case 13:
			StringCopy(&Var2, "SPEC2_P0_08_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 150;
			break;
		
		case 14:
			StringCopy(&Var2, "SPEC2_P0_08_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 175;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 20);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_177(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 8;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "SPEC_P0_10", 16);
			iVar3 = 10;
			iVar4 = 0;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "SPEC_P0_16", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 20;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 21;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 22;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 23;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 24);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_178(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 5;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		default:
			func_132(iVar7, iParam0, 14);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_179(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 6;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "FEET_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "FEET_P0_0_1", 16);
			iVar3 = 0;
			iVar4 = 1;
			iVar1 = 665;
			break;
		
		case 2:
			StringCopy(&Var2, "FEET_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 620;
			break;
		
		case 3:
			StringCopy(&Var2, "FEET_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			iVar1 = 540;
			break;
		
		case 4:
			StringCopy(&Var2, "FEET_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			iVar1 = 580;
			break;
		
		case 5:
			StringCopy(&Var2, "FEET_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			iVar1 = 650;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 9:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 10:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 11:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 12:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 7;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 13:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 14:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 15:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "FEET_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "FEET_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 21:
			StringCopy(&Var2, "FEET_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 64;
			break;
		
		case 22:
			StringCopy(&Var2, "FEET_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 56;
			break;
		
		case 23:
			StringCopy(&Var2, "FEET_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 69;
			break;
		
		case 24:
			StringCopy(&Var2, "FEET_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 59;
			break;
		
		case 25:
			StringCopy(&Var2, "FEET_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 62;
			break;
		
		case 26:
			StringCopy(&Var2, "FEET_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 74;
			break;
		
		case 27:
			StringCopy(&Var2, "FEET_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 28:
			StringCopy(&Var2, "FEET_P0_15_8", 16);
			iVar3 = 15;
			iVar4 = 8;
			iVar1 = 72;
			break;
		
		case 29:
			StringCopy(&Var2, "FEET_P0_15_9", 16);
			iVar3 = 15;
			iVar4 = 9;
			iVar1 = 70;
			break;
		
		case 30:
			StringCopy(&Var2, "FEET_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			iVar1 = 48;
			break;
		
		case 31:
			StringCopy(&Var2, "FEET_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 32:
			StringCopy(&Var2, "FEET_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 33:
			StringCopy(&Var2, "FEET_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 75;
			break;
		
		case 34:
			StringCopy(&Var2, "FEET_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 65;
			break;
		
		case 35:
			StringCopy(&Var2, "FEET_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 68;
			break;
		
		case 36:
			StringCopy(&Var2, "FEET_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 37:
			StringCopy(&Var2, "FEET_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 68;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "FEET_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			iVar1 = 790;
			break;
		
		case 40:
			StringCopy(&Var2, "FEET_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 750;
			break;
		
		case 41:
			StringCopy(&Var2, "FEET_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 860;
			break;
		
		case 42:
			StringCopy(&Var2, "FEET_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 750;
			break;
		
		case 43:
			StringCopy(&Var2, "FEET_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 790;
			break;
		
		case 44:
			StringCopy(&Var2, "FEET_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 45:
			StringCopy(&Var2, "FEET_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 820;
			break;
		
		case 46:
			StringCopy(&Var2, "FEET_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 800;
			break;
		
		case 47:
			StringCopy(&Var2, "FEET_P0_18_8", 16);
			iVar3 = 18;
			iVar4 = 8;
			iVar1 = 850;
			break;
		
		case 48:
			StringCopy(&Var2, "FEET_P0_18_9", 16);
			iVar3 = 18;
			iVar4 = 9;
			iVar1 = 870;
			break;
		
		case 49:
			StringCopy(&Var2, "FEET_P0_18_10", 16);
			iVar3 = 18;
			iVar4 = 10;
			iVar1 = 720;
			break;
		
		case 50:
			StringCopy(&Var2, "FEET_P0_18_11", 16);
			iVar3 = 18;
			iVar4 = 11;
			iVar1 = 740;
			break;
		
		case 51:
			StringCopy(&Var2, "FEET_P0_18_12", 16);
			iVar3 = 18;
			iVar4 = 12;
			iVar1 = 800;
			break;
		
		case 52:
			StringCopy(&Var2, "FEET_P0_18_13", 16);
			iVar3 = 18;
			iVar4 = 13;
			iVar1 = 750;
			break;
		
		case 53:
			StringCopy(&Var2, "FEET_P0_18_14", 16);
			iVar3 = 18;
			iVar4 = 14;
			iVar1 = 770;
			break;
		
		case 54:
			StringCopy(&Var2, "FEET_P0_18_15", 16);
			iVar3 = 18;
			iVar4 = 15;
			iVar1 = 860;
			break;
		
		case 55:
			StringCopy(&Var2, "FEET_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			iVar1 = 850;
			break;
		
		case 56:
			StringCopy(&Var2, "FEET_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 800;
			break;
		
		case 57:
			StringCopy(&Var2, "FEET_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 780;
			break;
		
		case 58:
			StringCopy(&Var2, "FEET_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 890;
			break;
		
		case 59:
			StringCopy(&Var2, "FEET_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 60:
			StringCopy(&Var2, "FEET_P0_19_5", 16);
			iVar3 = 19;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 61:
			StringCopy(&Var2, "FEET_P0_19_6", 16);
			iVar3 = 19;
			iVar4 = 6;
			iVar1 = 870;
			break;
		
		case 62:
			StringCopy(&Var2, "FEET_P0_19_7", 16);
			iVar3 = 19;
			iVar4 = 7;
			iVar1 = 930;
			break;
		
		case 63:
			StringCopy(&Var2, "FEET_P0_19_8", 16);
			iVar3 = 19;
			iVar4 = 8;
			iVar1 = 880;
			break;
		
		case 64:
			StringCopy(&Var2, "FEET_P0_19_9", 16);
			iVar3 = 19;
			iVar4 = 9;
			iVar1 = 900;
			break;
		
		case 65:
			StringCopy(&Var2, "FEET_P0_19_10", 16);
			iVar3 = 19;
			iVar4 = 10;
			iVar1 = 920;
			break;
		
		case 66:
			StringCopy(&Var2, "FEET_P0_19_11", 16);
			iVar3 = 19;
			iVar4 = 11;
			iVar1 = 970;
			break;
		
		case 67:
			StringCopy(&Var2, "FEET_P0_19_12", 16);
			iVar3 = 19;
			iVar4 = 12;
			iVar1 = 990;
			break;
		
		case 68:
			StringCopy(&Var2, "FEET_P0_19_13", 16);
			iVar3 = 19;
			iVar4 = 13;
			iVar1 = 960;
			break;
		
		case 69:
			StringCopy(&Var2, "FEET_P0_19_14", 16);
			iVar3 = 19;
			iVar4 = 14;
			iVar1 = 980;
			break;
		
		case 70:
			StringCopy(&Var2, "FEET_P0_19_15", 16);
			iVar3 = 19;
			iVar4 = 15;
			iVar1 = 950;
			break;
		
		case 71:
			StringCopy(&Var2, "FEET_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			iVar1 = 110;
			break;
		
		case 72:
			StringCopy(&Var2, "FEET_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 73:
			StringCopy(&Var2, "FEET_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "FEET_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 75:
			StringCopy(&Var2, "FEET_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 76:
			StringCopy(&Var2, "FEET_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 77:
			StringCopy(&Var2, "FEET_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 135;
			break;
		
		case 78:
			StringCopy(&Var2, "FEET_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 130;
			break;
		
		case 79:
			StringCopy(&Var2, "FEET_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 145;
			break;
		
		case 80:
			StringCopy(&Var2, "FEET_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 110;
			break;
		
		case 81:
			StringCopy(&Var2, "FEET_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 120;
			break;
		
		case 82:
			StringCopy(&Var2, "FEET_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 150;
			break;
		
		case 83:
			StringCopy(&Var2, "FEET_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 125;
			break;
		
		case 84:
			StringCopy(&Var2, "FEET_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 120;
			break;
		
		case 85:
			StringCopy(&Var2, "FEET_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 130;
			break;
		
		case 86:
			StringCopy(&Var2, "FEET_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 110;
			break;
		
		case 87:
			StringCopy(&Var2, "FEET_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 720;
			break;
		
		case 88:
			StringCopy(&Var2, "FEET_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 680;
			break;
		
		case 89:
			StringCopy(&Var2, "FEET_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 90:
			StringCopy(&Var2, "FEET_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 670;
			break;
		
		case 91:
			StringCopy(&Var2, "FEET_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 700;
			break;
		
		case 92:
			StringCopy(&Var2, "FEET_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 680;
			break;
		
		case 93:
			StringCopy(&Var2, "FEET_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 720;
			break;
		
		case 94:
			StringCopy(&Var2, "FEET_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 740;
			break;
		
		case 95:
			StringCopy(&Var2, "FEET_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 760;
			break;
		
		case 96:
			StringCopy(&Var2, "FEET_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 780;
			break;
		
		case 97:
			StringCopy(&Var2, "FEET_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 750;
			break;
		
		case 98:
			StringCopy(&Var2, "FEET_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 700;
			break;
		
		default:
			func_132(iVar7, iParam0, 99);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_180(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 4;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "LEGS_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "LEGS_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "LEGS_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "LEGS_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "LEGS_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "LEGS_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "LEGS_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "LEGS_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "LEGS_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "LEGS_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "LEGS_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "LEGS_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "LEGS_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "LEGS_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "LEGS_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 21:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 22:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 23:
			StringCopy(&Var2, "LEGS_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 115;
			break;
		
		case 24:
			StringCopy(&Var2, "LEGS_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 25:
			StringCopy(&Var2, "LEGS_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 128;
			break;
		
		case 26:
			StringCopy(&Var2, "LEGS_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 118;
			break;
		
		case 27:
			StringCopy(&Var2, "LEGS_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 125;
			break;
		
		case 28:
			StringCopy(&Var2, "LEGS_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 128;
			break;
		
		case 29:
			StringCopy(&Var2, "LEGS_P0_7_6", 16);
			iVar3 = 7;
			iVar4 = 6;
			iVar1 = 128;
			break;
		
		case 30:
			StringCopy(&Var2, "LEGS_P0_7_7", 16);
			iVar3 = 7;
			iVar4 = 7;
			iVar1 = 125;
			break;
		
		case 31:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 8;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 32:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 39:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 40:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 41:
			StringCopy(&Var2, "LEGS_P0_13_0", 16);
			iVar3 = 13;
			iVar4 = 0;
			iVar1 = 68;
			break;
		
		case 42:
			StringCopy(&Var2, "LEGS_P0_13_1", 16);
			iVar3 = 13;
			iVar4 = 1;
			iVar1 = 68;
			break;
		
		case 43:
			StringCopy(&Var2, "LEGS_P0_13_2", 16);
			iVar3 = 13;
			iVar4 = 2;
			iVar1 = 68;
			break;
		
		case 44:
			StringCopy(&Var2, "LEGS_P0_13_3", 16);
			iVar3 = 13;
			iVar4 = 3;
			iVar1 = 68;
			break;
		
		case 45:
			StringCopy(&Var2, "LEGS_P0_13_4", 16);
			iVar3 = 13;
			iVar4 = 4;
			iVar1 = 68;
			break;
		
		case 46:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 14;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 47:
			StringCopy(&Var2, "LEGS_P0_15_0", 16);
			iVar3 = 15;
			iVar4 = 0;
			break;
		
		case 48:
			StringCopy(&Var2, "LEGS_P0_15_1", 16);
			iVar3 = 15;
			iVar4 = 1;
			iVar1 = 550;
			break;
		
		case 49:
			StringCopy(&Var2, "LEGS_P0_15_2", 16);
			iVar3 = 15;
			iVar4 = 2;
			iVar1 = 650;
			break;
		
		case 50:
			StringCopy(&Var2, "LEGS_P0_15_3", 16);
			iVar3 = 15;
			iVar4 = 3;
			iVar1 = 875;
			break;
		
		case 51:
			StringCopy(&Var2, "LEGS_P0_15_4", 16);
			iVar3 = 15;
			iVar4 = 4;
			iVar1 = 820;
			break;
		
		case 52:
			StringCopy(&Var2, "LEGS_P0_15_5", 16);
			iVar3 = 15;
			iVar4 = 5;
			iVar1 = 720;
			break;
		
		case 53:
			StringCopy(&Var2, "LEGS_P0_15_6", 16);
			iVar3 = 15;
			iVar4 = 6;
			iVar1 = 750;
			break;
		
		case 54:
			StringCopy(&Var2, "LEGS_P0_15_7", 16);
			iVar3 = 15;
			iVar4 = 7;
			iVar1 = 850;
			break;
		
		case 55:
			StringCopy(&Var2, "LEGS_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 56:
			StringCopy(&Var2, "LEGS_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 57:
			StringCopy(&Var2, "LEGS_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 58:
			StringCopy(&Var2, "LEGS_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 38;
			break;
		
		case 59:
			StringCopy(&Var2, "LEGS_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 38;
			break;
		
		case 60:
			StringCopy(&Var2, "LEGS_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 42;
			break;
		
		case 61:
			StringCopy(&Var2, "LEGS_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 62:
			StringCopy(&Var2, "LEGS_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 46;
			break;
		
		case 63:
			StringCopy(&Var2, "LEGS_P0_16_8", 16);
			iVar3 = 16;
			iVar4 = 8;
			iVar1 = 46;
			break;
		
		case 64:
			StringCopy(&Var2, "LEGS_P0_16_9", 16);
			iVar3 = 16;
			iVar4 = 9;
			iVar1 = 46;
			break;
		
		case 65:
			StringCopy(&Var2, "LEGS_P0_16_10", 16);
			iVar3 = 16;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 66:
			StringCopy(&Var2, "LEGS_P0_16_11", 16);
			iVar3 = 16;
			iVar4 = 11;
			iVar1 = 58;
			break;
		
		case 67:
			StringCopy(&Var2, "LEGS_P0_16_12", 16);
			iVar3 = 16;
			iVar4 = 12;
			iVar1 = 50;
			break;
		
		case 68:
			StringCopy(&Var2, "LEGS_P0_16_13", 16);
			iVar3 = 16;
			iVar4 = 13;
			iVar1 = 68;
			break;
		
		case 69:
			StringCopy(&Var2, "LEGS_P0_16_14", 16);
			iVar3 = 16;
			iVar4 = 14;
			iVar1 = 68;
			break;
		
		case 70:
			StringCopy(&Var2, "LEGS_P0_16_15", 16);
			iVar3 = 16;
			iVar4 = 15;
			iVar1 = 42;
			break;
		
		case 71:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 17;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 72:
			StringCopy(&Var2, "LEGS_P0_18_0", 16);
			iVar3 = 18;
			iVar4 = 0;
			break;
		
		case 73:
			StringCopy(&Var2, "LEGS_P0_18_1", 16);
			iVar3 = 18;
			iVar4 = 1;
			iVar1 = 250;
			break;
		
		case 74:
			StringCopy(&Var2, "LEGS_P0_18_2", 16);
			iVar3 = 18;
			iVar4 = 2;
			iVar1 = 250;
			break;
		
		case 75:
			StringCopy(&Var2, "LEGS_P0_18_3", 16);
			iVar3 = 18;
			iVar4 = 3;
			iVar1 = 290;
			break;
		
		case 76:
			StringCopy(&Var2, "LEGS_P0_18_4", 16);
			iVar3 = 18;
			iVar4 = 4;
			iVar1 = 270;
			break;
		
		case 77:
			StringCopy(&Var2, "LEGS_P0_18_5", 16);
			iVar3 = 18;
			iVar4 = 5;
			iVar1 = 270;
			break;
		
		case 78:
			StringCopy(&Var2, "LEGS_P0_18_6", 16);
			iVar3 = 18;
			iVar4 = 6;
			iVar1 = 15;
			break;
		
		case 79:
			StringCopy(&Var2, "LEGS_P0_18_7", 16);
			iVar3 = 18;
			iVar4 = 7;
			iVar1 = 12;
			break;
		
		case 80:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 19;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 81:
			StringCopy(&Var2, "LEGS_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 82:
			StringCopy(&Var2, "LEGS_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 118;
			break;
		
		case 83:
			StringCopy(&Var2, "LEGS_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 84:
			StringCopy(&Var2, "LEGS_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 85:
			StringCopy(&Var2, "LEGS_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 95;
			break;
		
		case 86:
			StringCopy(&Var2, "LEGS_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 95;
			break;
		
		case 87:
			StringCopy(&Var2, "LEGS_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 98;
			break;
		
		case 88:
			StringCopy(&Var2, "LEGS_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			iVar1 = 140;
			break;
		
		case 89:
			StringCopy(&Var2, "LEGS_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			break;
		
		case 90:
			StringCopy(&Var2, "LEGS_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 150;
			break;
		
		case 91:
			StringCopy(&Var2, "LEGS_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 130;
			break;
		
		case 92:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 24;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 93:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 25;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 94:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 26;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 95:
			StringCopy(&Var2, "LEGS_P0_27_0", 16);
			iVar3 = 27;
			iVar4 = 0;
			break;
		
		case 96:
			StringCopy(&Var2, "LEGS_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			iVar1 = 45;
			break;
		
		case 97:
			StringCopy(&Var2, "LEGS_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 48;
			break;
		
		case 98:
			StringCopy(&Var2, "LEGS_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 48;
			break;
		
		case 99:
			StringCopy(&Var2, "LEGS_P0_28_3", 16);
			iVar3 = 28;
			iVar4 = 3;
			iVar1 = 52;
			break;
		
		case 100:
			StringCopy(&Var2, "LEGS_P0_28_4", 16);
			iVar3 = 28;
			iVar4 = 4;
			iVar1 = 52;
			break;
		
		case 101:
			StringCopy(&Var2, "LEGS_P0_28_5", 16);
			iVar3 = 28;
			iVar4 = 5;
			iVar1 = 55;
			break;
		
		case 102:
			StringCopy(&Var2, "LEGS_P0_28_6", 16);
			iVar3 = 28;
			iVar4 = 6;
			iVar1 = 55;
			break;
		
		case 103:
			StringCopy(&Var2, "LEGS_P0_28_7", 16);
			iVar3 = 28;
			iVar4 = 7;
			iVar1 = 55;
			break;
		
		case 104:
			StringCopy(&Var2, "LEGS_P0_28_8", 16);
			iVar3 = 28;
			iVar4 = 8;
			iVar1 = 58;
			break;
		
		case 105:
			StringCopy(&Var2, "LEGS_P0_28_9", 16);
			iVar3 = 28;
			iVar4 = 9;
			iVar1 = 58;
			break;
		
		case 106:
			StringCopy(&Var2, "LEGS_P0_28_10", 16);
			iVar3 = 28;
			iVar4 = 10;
			iVar1 = 60;
			break;
		
		case 107:
			StringCopy(&Var2, "LEGS_P0_28_11", 16);
			iVar3 = 28;
			iVar4 = 11;
			iVar1 = 60;
			break;
		
		case 108:
			StringCopy(&Var2, "LEGS_P0_28_12", 16);
			iVar3 = 28;
			iVar4 = 12;
			iVar1 = 62;
			break;
		
		case 109:
			StringCopy(&Var2, "LEGS_P0_28_13", 16);
			iVar3 = 28;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 110:
			StringCopy(&Var2, "LEGS_P0_28_14", 16);
			iVar3 = 28;
			iVar4 = 14;
			iVar1 = 65;
			break;
		
		case 111:
			StringCopy(&Var2, "LEGS_P0_28_15", 16);
			iVar3 = 28;
			iVar4 = 15;
			iVar1 = 65;
			break;
		
		case 112:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 29;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 113);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_181(int iParam0)
{
	if (iParam0 < 60)
	{
		func_183(iParam0);
	}
	else
	{
		func_182(iParam0);
	}
	if (Global_70671[0 /*14*/].f_2 == -1)
	{
		func_132(3, iParam0, 181);
	}
}

void func_182(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 60:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 9;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 61:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 10;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 62:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 11;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 63:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 64:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 65:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 2;
			bVar0 = true;
			break;
		
		case 66:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 3;
			bVar0 = true;
			break;
		
		case 67:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 4;
			bVar0 = true;
			break;
		
		case 68:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 12;
			iVar4 = 5;
			bVar0 = true;
			break;
		
		case 69:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 13;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 70:
			StringCopy(&Var2, "TORSO_P0_14_0", 16);
			iVar3 = 14;
			iVar4 = 0;
			iVar1 = 120;
			break;
		
		case 71:
			StringCopy(&Var2, "TORSO_P0_14_1", 16);
			iVar3 = 14;
			iVar4 = 1;
			iVar1 = 120;
			break;
		
		case 72:
			StringCopy(&Var2, "TORSO_P0_14_2", 16);
			iVar3 = 14;
			iVar4 = 2;
			iVar1 = 120;
			break;
		
		case 73:
			StringCopy(&Var2, "TORSO_P0_14_3", 16);
			iVar3 = 14;
			iVar4 = 3;
			iVar1 = 120;
			break;
		
		case 74:
			StringCopy(&Var2, "TORSO_P0_14_4", 16);
			iVar3 = 14;
			iVar4 = 4;
			iVar1 = 120;
			break;
		
		case 75:
			StringCopy(&Var2, "TORSO_P0_14_5", 16);
			iVar3 = 14;
			iVar4 = 5;
			iVar1 = 120;
			break;
		
		case 76:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 15;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 77:
			StringCopy(&Var2, "TORSO_P0_16_0", 16);
			iVar3 = 16;
			iVar4 = 0;
			break;
		
		case 78:
			StringCopy(&Var2, "TORSO_P0_16_1", 16);
			iVar3 = 16;
			iVar4 = 1;
			iVar1 = 20;
			break;
		
		case 79:
			StringCopy(&Var2, "TORSO_P0_16_2", 16);
			iVar3 = 16;
			iVar4 = 2;
			iVar1 = 24;
			break;
		
		case 80:
			StringCopy(&Var2, "TORSO_P0_16_3", 16);
			iVar3 = 16;
			iVar4 = 3;
			iVar1 = 22;
			break;
		
		case 81:
			StringCopy(&Var2, "TORSO_P0_16_4", 16);
			iVar3 = 16;
			iVar4 = 4;
			iVar1 = 25;
			break;
		
		case 82:
			StringCopy(&Var2, "TORSO_P0_16_5", 16);
			iVar3 = 16;
			iVar4 = 5;
			iVar1 = 25;
			break;
		
		case 83:
			StringCopy(&Var2, "TORSO_P0_16_6", 16);
			iVar3 = 16;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 84:
			StringCopy(&Var2, "TORSO_P0_16_7", 16);
			iVar3 = 16;
			iVar4 = 7;
			iVar1 = 27;
			break;
		
		case 85:
			StringCopy(&Var2, "TORSO_P0_17_0", 16);
			iVar3 = 17;
			iVar4 = 0;
			break;
		
		case 86:
			StringCopy(&Var2, "TORSO_P0_17_1", 16);
			iVar3 = 17;
			iVar4 = 1;
			break;
		
		case 87:
			StringCopy(&Var2, "TORSO_P0_17_2", 16);
			iVar3 = 17;
			iVar4 = 2;
			break;
		
		case 88:
			StringCopy(&Var2, "TORSO_P0_17_3", 16);
			iVar3 = 17;
			iVar4 = 3;
			iVar1 = 48;
			break;
		
		case 89:
			StringCopy(&Var2, "TORSO_P0_17_4", 16);
			iVar3 = 17;
			iVar4 = 4;
			iVar1 = 40;
			break;
		
		case 90:
			StringCopy(&Var2, "TORSO_P0_17_5", 16);
			iVar3 = 17;
			iVar4 = 5;
			iVar1 = 45;
			break;
		
		case 91:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 18;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 92:
			StringCopy(&Var2, "TORSO_P0_19_0", 16);
			iVar3 = 19;
			iVar4 = 0;
			break;
		
		case 93:
			StringCopy(&Var2, "TORSO_P0_19_1", 16);
			iVar3 = 19;
			iVar4 = 1;
			iVar1 = 190;
			break;
		
		case 94:
			StringCopy(&Var2, "TORSO_P0_19_2", 16);
			iVar3 = 19;
			iVar4 = 2;
			iVar1 = 190;
			break;
		
		case 95:
			StringCopy(&Var2, "TORSO_P0_19_3", 16);
			iVar3 = 19;
			iVar4 = 3;
			iVar1 = 190;
			break;
		
		case 96:
			StringCopy(&Var2, "TORSO_P0_19_4", 16);
			iVar3 = 19;
			iVar4 = 4;
			iVar1 = 210;
			break;
		
		case 97:
			StringCopy(&Var2, "TORSO_P0_20_0", 16);
			iVar3 = 20;
			iVar4 = 0;
			break;
		
		case 98:
			StringCopy(&Var2, "TORSO_P0_20_1", 16);
			iVar3 = 20;
			iVar4 = 1;
			iVar1 = 115;
			break;
		
		case 99:
			StringCopy(&Var2, "TORSO_P0_20_2", 16);
			iVar3 = 20;
			iVar4 = 2;
			iVar1 = 55;
			break;
		
		case 100:
			StringCopy(&Var2, "TORSO_P0_20_3", 16);
			iVar3 = 20;
			iVar4 = 3;
			iVar1 = 110;
			break;
		
		case 101:
			StringCopy(&Var2, "TORSO_P0_20_4", 16);
			iVar3 = 20;
			iVar4 = 4;
			iVar1 = 99;
			break;
		
		case 102:
			StringCopy(&Var2, "TORSO_P0_20_5", 16);
			iVar3 = 20;
			iVar4 = 5;
			iVar1 = 49;
			break;
		
		case 103:
			StringCopy(&Var2, "TORSO_P0_20_6", 16);
			iVar3 = 20;
			iVar4 = 6;
			iVar1 = 120;
			break;
		
		case 104:
			StringCopy(&Var2, "TORSO_P0_20_7", 16);
			iVar3 = 20;
			iVar4 = 7;
			iVar1 = 45;
			break;
		
		case 105:
			StringCopy(&Var2, "TORSO_P0_20_8", 16);
			iVar3 = 20;
			iVar4 = 8;
			iVar1 = 115;
			break;
		
		case 106:
			StringCopy(&Var2, "TORSO_P0_20_9", 16);
			iVar3 = 20;
			iVar4 = 9;
			iVar1 = 105;
			break;
		
		case 107:
			StringCopy(&Var2, "TORSO_P0_20_10", 16);
			iVar3 = 20;
			iVar4 = 10;
			iVar1 = 90;
			break;
		
		case 108:
			StringCopy(&Var2, "TORSO_P0_20_11", 16);
			iVar3 = 20;
			iVar4 = 11;
			iVar1 = 95;
			break;
		
		case 109:
			StringCopy(&Var2, "TORSO_P0_20_12", 16);
			iVar3 = 20;
			iVar4 = 12;
			iVar1 = 39;
			break;
		
		case 110:
			StringCopy(&Var2, "TORSO_P0_20_13", 16);
			iVar3 = 20;
			iVar4 = 13;
			iVar1 = 95;
			break;
		
		case 111:
			StringCopy(&Var2, "TORSO_P0_20_14", 16);
			iVar3 = 20;
			iVar4 = 14;
			iVar1 = 35;
			break;
		
		case 112:
			StringCopy(&Var2, "TORSO_P0_20_15", 16);
			iVar3 = 20;
			iVar4 = 15;
			iVar1 = 95;
			break;
		
		case 113:
			StringCopy(&Var2, "TORSO_P0_21_0", 16);
			iVar3 = 21;
			iVar4 = 0;
			iVar1 = 88;
			break;
		
		case 114:
			StringCopy(&Var2, "TORSO_P0_21_1", 16);
			iVar3 = 21;
			iVar4 = 1;
			iVar1 = 60;
			break;
		
		case 115:
			StringCopy(&Var2, "TORSO_P0_21_2", 16);
			iVar3 = 21;
			iVar4 = 2;
			iVar1 = 70;
			break;
		
		case 116:
			StringCopy(&Var2, "TORSO_P0_21_3", 16);
			iVar3 = 21;
			iVar4 = 3;
			iVar1 = 80;
			break;
		
		case 117:
			StringCopy(&Var2, "TORSO_P0_21_4", 16);
			iVar3 = 21;
			iVar4 = 4;
			iVar1 = 90;
			break;
		
		case 118:
			StringCopy(&Var2, "TORSO_P0_21_5", 16);
			iVar3 = 21;
			iVar4 = 5;
			iVar1 = 80;
			break;
		
		case 119:
			StringCopy(&Var2, "TORSO_P0_21_6", 16);
			iVar3 = 21;
			iVar4 = 6;
			iVar1 = 70;
			break;
		
		case 120:
			StringCopy(&Var2, "TORSO_P0_21_7", 16);
			iVar3 = 21;
			iVar4 = 7;
			iVar1 = 95;
			break;
		
		case 121:
			StringCopy(&Var2, "TORSO_P0_21_8", 16);
			iVar3 = 21;
			iVar4 = 8;
			iVar1 = 105;
			break;
		
		case 122:
			StringCopy(&Var2, "TORSO_P0_21_9", 16);
			iVar3 = 21;
			iVar4 = 9;
			iVar1 = 95;
			break;
		
		case 123:
			StringCopy(&Var2, "TORSO_P0_21_10", 16);
			iVar3 = 21;
			iVar4 = 10;
			iVar1 = 110;
			break;
		
		case 124:
			StringCopy(&Var2, "TORSO_P0_21_11", 16);
			iVar3 = 21;
			iVar4 = 11;
			iVar1 = 98;
			break;
		
		case 125:
			StringCopy(&Var2, "TORSO_P0_21_12", 16);
			iVar3 = 21;
			iVar4 = 12;
			iVar1 = 88;
			break;
		
		case 126:
			StringCopy(&Var2, "TORSO_P0_21_13", 16);
			iVar3 = 21;
			iVar4 = 13;
			iVar1 = 98;
			break;
		
		case 127:
			StringCopy(&Var2, "TORSO_P0_21_14", 16);
			iVar3 = 21;
			iVar4 = 14;
			iVar1 = 110;
			break;
		
		case 128:
			StringCopy(&Var2, "TORSO_P0_21_15", 16);
			iVar3 = 21;
			iVar4 = 15;
			iVar1 = 98;
			break;
		
		case 129:
			StringCopy(&Var2, "TORSO_P0_22_0", 16);
			iVar3 = 22;
			iVar4 = 0;
			break;
		
		case 130:
			StringCopy(&Var2, "TORSO_P0_22_1", 16);
			iVar3 = 22;
			iVar4 = 1;
			iVar1 = 4950;
			break;
		
		case 131:
			StringCopy(&Var2, "TORSO_P0_22_2", 16);
			iVar3 = 22;
			iVar4 = 2;
			iVar1 = 4195;
			break;
		
		case 132:
			StringCopy(&Var2, "TORSO_P0_22_3", 16);
			iVar3 = 22;
			iVar4 = 3;
			iVar1 = 3195;
			break;
		
		case 133:
			StringCopy(&Var2, "TORSO_P0_22_4", 16);
			iVar3 = 22;
			iVar4 = 4;
			iVar1 = 2950;
			break;
		
		case 134:
			StringCopy(&Var2, "TORSO_P0_22_5", 16);
			iVar3 = 22;
			iVar4 = 5;
			iVar1 = 3950;
			break;
		
		case 135:
			StringCopy(&Var2, "TORSO_P0_23_0", 16);
			iVar3 = 23;
			iVar4 = 0;
			iVar1 = 3200;
			break;
		
		case 136:
			StringCopy(&Var2, "TORSO_P0_23_1", 16);
			iVar3 = 23;
			iVar4 = 1;
			iVar1 = 3200;
			break;
		
		case 137:
			StringCopy(&Var2, "TORSO_P0_23_2", 16);
			iVar3 = 23;
			iVar4 = 2;
			iVar1 = 3200;
			break;
		
		case 138:
			StringCopy(&Var2, "TORSO_P0_23_3", 16);
			iVar3 = 23;
			iVar4 = 3;
			iVar1 = 3200;
			break;
		
		case 139:
			StringCopy(&Var2, "TORSO_P0_23_4", 16);
			iVar3 = 23;
			iVar4 = 4;
			iVar1 = 3200;
			break;
		
		case 140:
			StringCopy(&Var2, "TORSO_P0_23_5", 16);
			iVar3 = 23;
			iVar4 = 5;
			iVar1 = 3200;
			break;
		
		case 141:
			StringCopy(&Var2, "TORSO_P0_23_6", 16);
			iVar3 = 23;
			iVar4 = 6;
			iVar1 = 3200;
			break;
		
		case 142:
			StringCopy(&Var2, "TORSO_P0_23_7", 16);
			iVar3 = 23;
			iVar4 = 7;
			iVar1 = 3200;
			break;
		
		case 143:
			StringCopy(&Var2, "TORSO_P0_23_8", 16);
			iVar3 = 23;
			iVar4 = 8;
			iVar1 = 3200;
			break;
		
		case 144:
			StringCopy(&Var2, "TORSO_P0_23_9", 16);
			iVar3 = 23;
			iVar4 = 9;
			iVar1 = 3200;
			break;
		
		case 145:
			StringCopy(&Var2, "TORSO_P0_23_10", 16);
			iVar3 = 23;
			iVar4 = 10;
			iVar1 = 3200;
			break;
		
		case 146:
			StringCopy(&Var2, "TORSO_P0_23_11", 16);
			iVar3 = 23;
			iVar4 = 11;
			iVar1 = 3200;
			break;
		
		case 147:
			StringCopy(&Var2, "TORSO_P0_23_12", 16);
			iVar3 = 23;
			iVar4 = 12;
			iVar1 = 3200;
			break;
		
		case 148:
			StringCopy(&Var2, "TORSO_P0_23_13", 16);
			iVar3 = 23;
			iVar4 = 13;
			iVar1 = 3200;
			break;
		
		case 149:
			StringCopy(&Var2, "TORSO_P0_23_14", 16);
			iVar3 = 23;
			iVar4 = 14;
			iVar1 = 3200;
			break;
		
		case 150:
			StringCopy(&Var2, "TORSO_P0_23_15", 16);
			iVar3 = 23;
			iVar4 = 15;
			iVar1 = 3200;
			break;
		
		case 151:
			StringCopy(&Var2, "TORSO_P0_24_0", 16);
			iVar3 = 24;
			iVar4 = 0;
			iVar1 = 1350;
			break;
		
		case 152:
			StringCopy(&Var2, "TORSO_P0_24_1", 16);
			iVar3 = 24;
			iVar4 = 1;
			iVar1 = 1400;
			break;
		
		case 153:
			StringCopy(&Var2, "TORSO_P0_24_2", 16);
			iVar3 = 24;
			iVar4 = 2;
			iVar1 = 1200;
			break;
		
		case 154:
			StringCopy(&Var2, "TORSO_P0_24_3", 16);
			iVar3 = 24;
			iVar4 = 3;
			iVar1 = 1250;
			break;
		
		case 155:
			StringCopy(&Var2, "TORSO_P0_24_4", 16);
			iVar3 = 24;
			iVar4 = 4;
			iVar1 = 1350;
			break;
		
		case 156:
			StringCopy(&Var2, "TORSO_P0_24_5", 16);
			iVar3 = 24;
			iVar4 = 5;
			iVar1 = 1300;
			break;
		
		case 157:
			StringCopy(&Var2, "TORSO_P0_24_6", 16);
			iVar3 = 24;
			iVar4 = 6;
			iVar1 = 1380;
			break;
		
		case 158:
			StringCopy(&Var2, "TORSO_P0_24_7", 16);
			iVar3 = 24;
			iVar4 = 7;
			iVar1 = 1340;
			break;
		
		case 159:
			StringCopy(&Var2, "TORSO_P0_24_8", 16);
			iVar3 = 24;
			iVar4 = 8;
			iVar1 = 1380;
			break;
		
		case 160:
			StringCopy(&Var2, "TORSO_P0_24_9", 16);
			iVar3 = 24;
			iVar4 = 9;
			iVar1 = 1250;
			break;
		
		case 161:
			StringCopy(&Var2, "TORSO_P0_25_0", 16);
			iVar3 = 25;
			iVar4 = 0;
			iVar1 = 840;
			break;
		
		case 162:
			StringCopy(&Var2, "TORSO_P0_25_1", 16);
			iVar3 = 25;
			iVar4 = 1;
			iVar1 = 840;
			break;
		
		case 163:
			StringCopy(&Var2, "TORSO_P0_25_2", 16);
			iVar3 = 25;
			iVar4 = 2;
			iVar1 = 840;
			break;
		
		case 164:
			StringCopy(&Var2, "TORSO_P0_25_3", 16);
			iVar3 = 25;
			iVar4 = 3;
			iVar1 = 840;
			break;
		
		case 165:
			StringCopy(&Var2, "TORSO_P0_25_4", 16);
			iVar3 = 25;
			iVar4 = 4;
			iVar1 = 840;
			break;
		
		case 166:
			StringCopy(&Var2, "TORSO_P0_25_5", 16);
			iVar3 = 25;
			iVar4 = 5;
			iVar1 = 840;
			break;
		
		case 167:
			StringCopy(&Var2, "TORSO_P0_25_6", 16);
			iVar3 = 25;
			iVar4 = 6;
			iVar1 = 840;
			break;
		
		case 168:
			StringCopy(&Var2, "TORSO_P0_25_7", 16);
			iVar3 = 25;
			iVar4 = 7;
			iVar1 = 840;
			break;
		
		case 169:
			StringCopy(&Var2, "TORSO_P0_26_0", 16);
			iVar3 = 26;
			iVar4 = 0;
			break;
		
		case 170:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 27;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 171:
			StringCopy(&Var2, "TORSO_P0_28_0", 16);
			iVar3 = 28;
			iVar4 = 0;
			break;
		
		case 172:
			StringCopy(&Var2, "TORSO_P0_28_1", 16);
			iVar3 = 28;
			iVar4 = 1;
			iVar1 = 130;
			break;
		
		case 173:
			StringCopy(&Var2, "TORSO_P0_28_2", 16);
			iVar3 = 28;
			iVar4 = 2;
			iVar1 = 110;
			break;
		
		case 174:
			StringCopy(&Var2, "TORSO_P0_29_0", 16);
			iVar3 = 29;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 175:
			StringCopy(&Var2, "TORSO_P0_30_0", 16);
			iVar3 = 30;
			iVar4 = 0;
			iVar1 = 290;
			break;
		
		case 176:
			StringCopy(&Var2, "TORSO_P0_30_1", 16);
			iVar3 = 30;
			iVar4 = 1;
			iVar1 = 320;
			break;
		
		case 177:
			StringCopy(&Var2, "TORSO_P0_31_0", 16);
			iVar3 = 31;
			iVar4 = 0;
			iVar1 = 59;
			break;
		
		case 178:
			StringCopy(&Var2, "TORSO_P0_31_1", 16);
			iVar3 = 31;
			iVar4 = 1;
			iVar1 = 55;
			break;
		
		case 179:
			StringCopy(&Var2, "TORSO_P0_31_2", 16);
			iVar3 = 31;
			iVar4 = 2;
			iVar1 = 59;
			break;
		
		case 180:
			StringCopy(&Var2, "TORSO_P0_31_3", 16);
			iVar3 = 31;
			iVar4 = 3;
			iVar1 = 49;
			break;
		
		default:
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_183(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 3;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "TORSO_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "TORSO_P0_0_2", 16);
			iVar3 = 0;
			iVar4 = 2;
			iVar1 = 3500;
			break;
		
		case 3:
			StringCopy(&Var2, "TORSO_P0_0_3", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "TORSO_P0_0_4", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "TORSO_P0_0_5", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "TORSO_P0_0_6", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "TORSO_P0_0_7", 16);
			iVar3 = 0;
			iVar4 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "TORSO_P0_0_8", 16);
			iVar3 = 0;
			iVar4 = 8;
			break;
		
		case 9:
			StringCopy(&Var2, "TORSO_P0_0_9", 16);
			iVar3 = 0;
			iVar4 = 9;
			break;
		
		case 10:
			StringCopy(&Var2, "TORSO_P0_0_10", 16);
			iVar3 = 0;
			iVar4 = 10;
			break;
		
		case 11:
			StringCopy(&Var2, "TORSO_P0_0_11", 16);
			iVar3 = 0;
			iVar4 = 11;
			break;
		
		case 12:
			StringCopy(&Var2, "TORSO_P0_0_12", 16);
			iVar3 = 0;
			iVar4 = 12;
			break;
		
		case 13:
			StringCopy(&Var2, "TORSO_P0_0_13", 16);
			iVar3 = 0;
			iVar4 = 13;
			break;
		
		case 14:
			StringCopy(&Var2, "TORSO_P0_0_14", 16);
			iVar3 = 0;
			iVar4 = 14;
			break;
		
		case 15:
			StringCopy(&Var2, "TORSO_P0_0_15", 16);
			iVar3 = 0;
			iVar4 = 15;
			break;
		
		case 16:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 1;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 17:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 0;
			iVar1 = 20;
			break;
		
		case 18:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 1;
			iVar1 = 18;
			break;
		
		case 19:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 2;
			iVar1 = 22;
			break;
		
		case 20:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 2;
			iVar4 = 3;
			iVar1 = 25;
			break;
		
		case 21:
			StringCopy(&Var2, "TORSO_P0_2_4", 16);
			iVar3 = 2;
			iVar4 = 4;
			iVar1 = 19;
			break;
		
		case 22:
			StringCopy(&Var2, "TORSO_P0_2_5", 16);
			iVar3 = 2;
			iVar4 = 5;
			iVar1 = 20;
			break;
		
		case 23:
			StringCopy(&Var2, "TORSO_P0_2_6", 16);
			iVar3 = 2;
			iVar4 = 6;
			iVar1 = 22;
			break;
		
		case 24:
			StringCopy(&Var2, "TORSO_P0_2_7", 16);
			iVar3 = 2;
			iVar4 = 7;
			iVar1 = 18;
			break;
		
		case 25:
			StringCopy(&Var2, "TORSO_P0_2_8", 16);
			iVar3 = 2;
			iVar4 = 8;
			iVar1 = 39;
			break;
		
		case 26:
			StringCopy(&Var2, "TORSO_P0_2_9", 16);
			iVar3 = 2;
			iVar4 = 9;
			iVar1 = 32;
			break;
		
		case 27:
			StringCopy(&Var2, "TORSO_P0_2_10", 16);
			iVar3 = 2;
			iVar4 = 10;
			iVar1 = 35;
			break;
		
		case 28:
			StringCopy(&Var2, "TORSO_P0_2_11", 16);
			iVar3 = 2;
			iVar4 = 11;
			iVar1 = 35;
			break;
		
		case 29:
			StringCopy(&Var2, "TORSO_P0_2_12", 16);
			iVar3 = 2;
			iVar4 = 12;
			iVar1 = 210;
			break;
		
		case 30:
			StringCopy(&Var2, "TORSO_P0_2_13", 16);
			iVar3 = 2;
			iVar4 = 13;
			iVar1 = 250;
			break;
		
		case 31:
			StringCopy(&Var2, "TORSO_P0_2_14", 16);
			iVar3 = 2;
			iVar4 = 14;
			iVar1 = 290;
			break;
		
		case 32:
			StringCopy(&Var2, "TORSO_P0_2_15", 16);
			iVar3 = 2;
			iVar4 = 15;
			iVar1 = 310;
			break;
		
		case 33:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 34:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 3;
			iVar4 = 1;
			bVar0 = true;
			break;
		
		case 35:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 36:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 37:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 6;
			iVar4 = 0;
			bVar0 = true;
			break;
		
		case 38:
			StringCopy(&Var2, "TORSO_P0_7_0", 16);
			iVar3 = 7;
			iVar4 = 0;
			iVar1 = 150;
			break;
		
		case 39:
			StringCopy(&Var2, "TORSO_P0_7_1", 16);
			iVar3 = 7;
			iVar4 = 1;
			iVar1 = 160;
			break;
		
		case 40:
			StringCopy(&Var2, "TORSO_P0_7_2", 16);
			iVar3 = 7;
			iVar4 = 2;
			iVar1 = 150;
			break;
		
		case 41:
			StringCopy(&Var2, "TORSO_P0_7_3", 16);
			iVar3 = 7;
			iVar4 = 3;
			iVar1 = 150;
			break;
		
		case 42:
			StringCopy(&Var2, "TORSO_P0_7_4", 16);
			iVar3 = 7;
			iVar4 = 4;
			iVar1 = 160;
			break;
		
		case 43:
			StringCopy(&Var2, "TORSO_P0_7_5", 16);
			iVar3 = 7;
			iVar4 = 5;
			iVar1 = 160;
			break;
		
		case 44:
			StringCopy(&Var2, "TORSO_P0_8_0", 16);
			iVar3 = 8;
			iVar4 = 0;
			break;
		
		case 45:
			StringCopy(&Var2, "TORSO_P0_8_1", 16);
			iVar3 = 8;
			iVar4 = 1;
			iVar1 = 52;
			break;
		
		case 46:
			StringCopy(&Var2, "TORSO_P0_8_2", 16);
			iVar3 = 8;
			iVar4 = 2;
			iVar1 = 52;
			break;
		
		case 47:
			StringCopy(&Var2, "TORSO_P0_8_3", 16);
			iVar3 = 8;
			iVar4 = 3;
			iVar1 = 55;
			break;
		
		case 48:
			StringCopy(&Var2, "TORSO_P0_8_4", 16);
			iVar3 = 8;
			iVar4 = 4;
			iVar1 = 55;
			break;
		
		case 49:
			StringCopy(&Var2, "TORSO_P0_8_5", 16);
			iVar3 = 8;
			iVar4 = 5;
			iVar1 = 58;
			break;
		
		case 50:
			StringCopy(&Var2, "TORSO_P0_8_6", 16);
			iVar3 = 8;
			iVar4 = 6;
			iVar1 = 58;
			break;
		
		case 51:
			StringCopy(&Var2, "TORSO_P0_8_7", 16);
			iVar3 = 8;
			iVar4 = 7;
			iVar1 = 62;
			break;
		
		case 52:
			StringCopy(&Var2, "TORSO_P0_8_8", 16);
			iVar3 = 8;
			iVar4 = 8;
			iVar1 = 65;
			break;
		
		case 53:
			StringCopy(&Var2, "TORSO_P0_8_9", 16);
			iVar3 = 8;
			iVar4 = 9;
			iVar1 = 65;
			break;
		
		case 54:
			StringCopy(&Var2, "TORSO_P0_8_10", 16);
			iVar3 = 8;
			iVar4 = 10;
			iVar1 = 68;
			break;
		
		case 55:
			StringCopy(&Var2, "TORSO_P0_8_11", 16);
			iVar3 = 8;
			iVar4 = 11;
			iVar1 = 68;
			break;
		
		case 56:
			StringCopy(&Var2, "TORSO_P0_8_12", 16);
			iVar3 = 8;
			iVar4 = 12;
			iVar1 = 55;
			break;
		
		case 57:
			StringCopy(&Var2, "TORSO_P0_8_13", 16);
			iVar3 = 8;
			iVar4 = 13;
			iVar1 = 62;
			break;
		
		case 58:
			StringCopy(&Var2, "TORSO_P0_8_14", 16);
			iVar3 = 8;
			iVar4 = 14;
			iVar1 = 58;
			break;
		
		case 59:
			StringCopy(&Var2, "TORSO_P0_8_15", 16);
			iVar3 = 8;
			iVar4 = 15;
			iVar1 = 58;
			break;
		
		default:
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_184(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 2;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "HAIR_P0_0_0", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "HAIR_P0_1_0", 16);
			iVar3 = 1;
			iVar4 = 0;
			break;
		
		case 2:
			StringCopy(&Var2, "HAIR_P0_2_0", 16);
			iVar3 = 2;
			iVar4 = 0;
			break;
		
		case 3:
			StringCopy(&Var2, "HAIR_P0_3_0", 16);
			iVar3 = 3;
			iVar4 = 0;
			break;
		
		case 4:
			StringCopy(&Var2, "HAIR_P0_4_0", 16);
			iVar3 = 4;
			iVar4 = 0;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 5;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 6);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_185(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	bVar0 = false;
	iVar1 = 10;
	iVar3 = 0;
	iVar4 = 0;
	iVar5 = -1;
	iVar6 = 2;
	iVar7 = 0;
	Global_70671[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 6;
			break;
		
		default:
			func_132(iVar7, iParam0, 7);
			return;
			break;
	}
	func_125(&(Global_70671[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_186()
{
	Global_70671[0 /*14*/].f_1 = -1;
	Global_70671[0 /*14*/].f_2 = -1;
	Global_70671[0 /*14*/].f_5 = -1;
	Global_70671[0 /*14*/].f_3 = -1;
	Global_70671[0 /*14*/].f_4 = -1;
	Global_70671[0 /*14*/].f_7 = 0;
	Global_70671[0 /*14*/].f_6 = 0;
	Global_70671[0 /*14*/].f_13 = -1;
	Global_70671[0 /*14*/].f_12 = 0;
	Global_70671[0 /*14*/] = 0;
	StringCopy(&(Global_70671[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	struct<10> Var0;
	struct<10> Var1;
	int iVar2;
	int iVar3;
	
	if (func_92(0))
	{
		return 0;
	}
	if (iParam4 < 0)
	{
		return 0;
	}
	if (iParam5 < 0)
	{
		return 0;
	}
	if (iParam6 == 76)
	{
		return 0;
	}
	if (iParam7 == 235)
	{
		return 0;
	}
	if (iParam3 < 3)
	{
		if (MISC::IS_BIT_SET(iParam2, iParam3))
		{
			return 0;
		}
	}
	if (iParam2 < 1 || iParam2 > 7)
	{
		return 0;
	}
	if (Global_104555.f_7658.f_866 < 10)
	{
		Var0 = iParam0;
		Var0.f_3 = func_195(iParam1);
		Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
		Var0.f_5 = iParam5;
		Var0.f_1 = iParam9;
		Var0.f_2 = iParam2;
		Var0.f_6 = iParam3;
		Var0.f_7 = iParam6;
		Var0.f_8 = iParam7;
		Var0.f_9 = iParam8;
		MISC::CLEAR_BIT(&(Var0.f_1), 0);
		Global_104555.f_7658.f_765[Global_104555.f_7658.f_866 /*10*/] = { Var0 };
		Global_104555.f_7658.f_866++;
		return 1;
	}
	else
	{
		Var1 = { func_194(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		iVar2 = 0;
		func_193(&iVar2);
		iVar3 = func_192(Var1, Global_104555.f_7658.f_765[iVar2 /*10*/]);
		if (iVar3 == 2)
		{
			func_190(Global_104555.f_7658.f_765[iVar2 /*10*/]);
			Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
			func_189(&Var1);
			return 1;
		}
		else if (iVar3 == 1)
		{
			if (func_188(Var1))
			{
				func_190(Global_104555.f_7658.f_765[iVar2 /*10*/]);
				Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
				func_189(&Var1);
				return 1;
			}
			else
			{
				if (!func_188(Global_104555.f_7658.f_765[iVar2 /*10*/]))
				{
					Global_104555.f_7658.f_765[iVar2 /*10*/] = { Var1 };
					func_189(&Var1);
					return 1;
				}
				func_189(&Var1);
				return 1;
			}
		}
		else
		{
			func_190(Var1);
			func_189(&Var1);
			return 1;
		}
	}
	return 0;
}

int func_188(struct<9> Param0, var uParam1)
{
	if (Param0.f_8 == 0)
	{
		return 0;
	}
	return 1;
}

void func_189(var uParam0)
{
	struct<10> Var0;
	
	*uParam0 = { Var0 };
}

void func_190(struct<10> Param0)
{
	if (func_188(Param0))
	{
		func_191(Param0.f_8, 0);
	}
}

void func_191(int iParam0, int iParam1)
{
	if (iParam0 == 235 || iParam0 == 0)
	{
		return;
	}
	Global_104555.f_8583[iParam0] = 1;
	Global_104555.f_8583.f_236[iParam0] = (MISC::GET_GAME_TIMER() + iParam1);
}

int func_192(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<4> Param7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13)
{
	int iVar0;
	int iVar1;
	
	iVar0 = Param0.f_3;
	iVar1 = Param7.f_3;
	if (iVar0 > iVar1)
	{
		return 2;
	}
	if (iVar0 < iVar1)
	{
		return 0;
	}
	return 1;
}

void func_193(int iParam0)
{
	int iVar0;
	
	*iParam0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_104555.f_7658.f_866)
	{
		if (func_192(Global_104555.f_7658.f_765[iVar0 /*10*/], Global_104555.f_7658.f_765[*iParam0 /*10*/]) == 0)
		{
			*iParam0 = iVar0;
		}
		iVar0++;
	}
}

struct<10> func_194(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9)
{
	struct<10> Var0;
	
	Var0 = uParam0;
	Var0.f_3 = func_195(iParam1);
	Var0.f_4 = (MISC::GET_GAME_TIMER() + iParam4);
	Var0.f_5 = iParam5;
	Var0.f_1 = uParam9;
	Var0.f_2 = iParam2;
	Var0.f_6 = iParam3;
	Var0.f_7 = iParam6;
	Var0.f_8 = iParam7;
	Var0.f_9 = uParam8;
	MISC::CLEAR_BIT(&(Var0.f_1), 0);
	return Var0;
}

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
			break;
		
		case 7:
			return 4;
			break;
		
		case 2:
			return 3;
			break;
		
		case 1:
			return 2;
			break;
		
		case 3:
			return 1;
			break;
		
		case 5:
		case 6:
			return 0;
			break;
	}
	return 7;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 83:
		case 84:
		case 85:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
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
		case 112:
		case 113:
		case 114:
			return 1;
			break;
	}
	return 0;
}

void func_197(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<2> Var12;
	struct<8> Var13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	struct<16> Var19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	
	iVar3 = NETCASH::NETWORK_GET_VC_BANK_BALANCE();
	iVar4 = NETCASH::NETWORK_GET_VC_WALLET_BALANCE(-1);
	if (!func_582(60, 0, 0))
	{
		if (func_581(PLAYER::GET_PLAYER_INDEX()) < 5)
		{
			iLocal_547 = 3;
		}
		else
		{
			iLocal_547 = 4;
		}
		func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 3);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
		iLocal_308 = 1;
		bLocal_309 = false;
		return;
	}
	if (func_580())
	{
		if (!NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_51()) || NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			iLocal_547 = 6;
			func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 3);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
			iLocal_308 = 1;
			bLocal_309 = false;
			return;
		}
	}
	StringCopy(&cVar5, func_579(iParam0), 16);
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_578(iParam0)) * Global_262145.f_77));
	iVar0 = iVar6;
	iVar7 = func_577(PLAYER::PLAYER_ID());
	if (func_576(iVar7))
	{
		iVar8 = func_574(PLAYER::PLAYER_ID());
		if (func_573(PLAYER::PLAYER_ID()))
		{
			if (iVar8 == 233)
			{
				iLocal_547 = 7;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 3);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				iLocal_308 = 1;
				bLocal_309 = false;
				return;
			}
		}
	}
	bVar9 = false;
	if (iParam0 == iVar7)
	{
		iVar6 = func_572(iParam0, &Local_1162);
		bVar9 = true;
	}
	else
	{
		iVar6 = (iVar6 + func_572(iParam0, &Local_1162));
		if (!func_576(iVar7))
		{
		}
	}
	iVar0 = iVar6;
	if (!func_576(iVar7) || bVar9)
	{
		if (iVar0 > 0)
		{
			if (iVar0 <= 0 || (iVar0 > 0 && !NETCASH::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1)))
			{
				iLocal_547 = 2;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 3);
				iLocal_308 = 1;
				bLocal_309 = false;
				func_1581(MISC::GET_HASH_KEY(&cVar5), iVar0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				return;
			}
		}
	}
	else
	{
		iVar10 = (iVar0 - func_561(iVar7));
		if (iVar10 > 0)
		{
			if (iVar10 <= 0 || (iVar10 > 0 && !NETCASH::NETWORK_CAN_SPEND_MONEY(iVar10, false, true, 0, -1)))
			{
				iLocal_547 = 2;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 3);
				iLocal_308 = 1;
				bLocal_309 = false;
				func_1581(MISC::GET_HASH_KEY(&cVar5), iVar10, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				return;
			}
		}
		Var12.f_1 = 194;
		while (!func_413(&Var12, iParam1, iParam0, iVar11, 3) && func_412())
		{
			func_411();
			func_409(0);
			SYSTEM::WAIT(0);
			Global_17301.f_7896 = 1;
		}
		if (*iParam1 == -1)
		{
			iLocal_547 = 5;
			func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 3);
			iLocal_308 = 1;
			bLocal_309 = false;
			Global_69467 = Global_69469;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
			return;
		}
		else
		{
			iVar2 = func_561(iVar7);
			iVar1 = (iVar6 - iVar2);
		}
		if (iVar1 > 0)
		{
			if (!NETCASH::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, 0, -1))
			{
				iLocal_547 = 2;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 3);
				iLocal_308 = 1;
				bLocal_309 = false;
				func_1581(MISC::GET_HASH_KEY(&cVar5), iVar1, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				return;
			}
		}
	}
	Var13 = -1;
	Var13.f_1 = -1;
	Var13.f_2 = -1;
	Var13.f_3 = -1;
	Var13.f_4 = -1;
	Var13.f_5 = -1;
	Var13.f_6 = -1;
	Var13.f_7 = -1;
	func_408(&Var13);
	if (func_580())
	{
		if (iParam0 == iVar7)
		{
			iVar14 = 0;
		}
		else
		{
			iVar14 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_578(iParam0)) * Global_262145.f_77));
		}
		iLocal_542 = 1;
		iLocal_543 = 0;
		iVar15 = func_407(iParam0);
		iVar16 = func_405();
		iVar17 = 0;
		if (func_576(iVar7))
		{
			iVar17 = func_407(iVar7);
		}
		iVar18 = -1;
		while (func_274(&iVar18, iVar14, *iParam1, -1616616027, 235173372, iVar15, iVar16, 0, iVar2, iVar17, 0, -1, -1))
		{
			func_1858(0, 0);
			func_272(1);
			SYSTEM::WAIT(0);
		}
		func_272(0);
		func_1858(0, 0);
		switch (iVar18)
		{
			case 0:
				iLocal_547 = 6;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 3);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				iLocal_308 = 1;
				bLocal_309 = false;
				return;
				break;
			
			case 2:
				break;
			
			default:
				iLocal_547 = 6;
				return;
				break;
		}
	}
	if (iVar1 > 0)
	{
		func_267(joaat("mpply_ingamestore_moneyspent"), iVar1);
	}
	Var19 = -1;
	Var19.f_1 = -1;
	Var19.f_2 = -1;
	Var19.f_3 = -1;
	Var19.f_4 = -1;
	Var19.f_5 = -1;
	Var19.f_6 = -1;
	Var19.f_7 = -1;
	Var19.f_8 = -1;
	Var19.f_9 = -1;
	Var19.f_10 = -1;
	Var19.f_11 = -1;
	Var19.f_12 = -1;
	Var19.f_13 = -1;
	Var19.f_14 = -1;
	Var19.f_15 = -1;
	if (!func_576(iVar7) || bVar9)
	{
		if (func_580())
		{
			NETSHOP::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_265(func_266()));
		}
		iVar20 = iVar6;
		if (Local_1162.f_3 != 0 || !bVar9)
		{
			Var19.f_12 = MISC::GET_HASH_KEY(func_264(3, Var13.f_6));
			Var19.f_13 = Local_1162.f_3;
			iVar20 = (iVar20 - Var19.f_13);
		}
		if (Local_1162.f_2 != 0 || !bVar9)
		{
			Var19.f_6 = MISC::GET_HASH_KEY(func_264(2, Var13.f_3));
			Var19.f_7 = Local_1162.f_2;
			iVar20 = (iVar20 - Var19.f_7);
		}
		if (Local_1162.f_4 != 0 || !bVar9)
		{
			Var19.f_8 = MISC::GET_HASH_KEY(func_264(4, Var13.f_4));
			Var19.f_9 = Local_1162.f_4;
			iVar20 = (iVar20 - Var19.f_9);
		}
		if (Local_1162.f_5 != 0 || !bVar9)
		{
			Var19.f_10 = MISC::GET_HASH_KEY(func_264(5, Var13.f_5));
			Var19.f_11 = Local_1162.f_5;
			iVar20 = (iVar20 - Var19.f_11);
		}
		if (Local_1162.f_6 != 0 || !bVar9)
		{
			Var19.f_14 = MISC::GET_HASH_KEY(func_264(6, Var13.f_7));
			Var19.f_15 = Local_1162.f_6;
			iVar20 = (iVar20 - Var19.f_15);
		}
		if (Local_1162 != 0 || !bVar9)
		{
			Var19.f_2 = MISC::GET_HASH_KEY(func_264(0, Var13.f_1));
			Var19.f_3 = Local_1162;
			iVar20 = (iVar20 - Var19.f_3);
		}
		if (Local_1162.f_1 != 0 || !bVar9)
		{
			Var19.f_4 = MISC::GET_HASH_KEY(func_264(1, func_262(Var13.f_2)));
			Var19.f_5 = Local_1162.f_1;
			iVar20 = (iVar20 - Var19.f_5);
		}
		if (iVar20 != 0 || !bVar9)
		{
			Var19 = MISC::GET_HASH_KEY(func_579(iParam0));
			Var19.f_1 = iVar20;
		}
		if (!bVar9)
		{
			unk_0x4EA3F425C7744D21(iVar6, 0, 1, &Var19);
		}
		else
		{
			unk_0x3DD3F33A5D55EA6F(iVar6, 0, 1, &Var19);
		}
		if (!bVar9)
		{
			func_259(iParam0);
			func_255();
		}
	}
	else if (func_254(iVar7) > 0)
	{
		if (func_580())
		{
			NETSHOP::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_265(func_266()));
		}
		unk_0x0E1E2FF3F4EC11AA(iVar2, MISC::GET_HASH_KEY(func_579(iVar7)));
		if (func_580())
		{
			NETSHOP::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_265(func_266()));
		}
		iVar21 = iVar1;
		iVar21 = (iVar21 + iVar2);
		Var19.f_12 = MISC::GET_HASH_KEY(func_264(3, Var13.f_6));
		Var19.f_13 = Local_1162.f_3;
		iVar21 = (iVar21 - Var19.f_13);
		Var19.f_6 = MISC::GET_HASH_KEY(func_264(2, Var13.f_3));
		Var19.f_7 = Local_1162.f_2;
		iVar21 = (iVar21 - Var19.f_7);
		Var19.f_8 = MISC::GET_HASH_KEY(func_264(4, Var13.f_4));
		Var19.f_9 = Local_1162.f_4;
		iVar21 = (iVar21 - Var19.f_9);
		Var19.f_10 = MISC::GET_HASH_KEY(func_264(5, Var13.f_5));
		Var19.f_11 = Local_1162.f_5;
		iVar21 = (iVar21 - Var19.f_11);
		Var19.f_14 = MISC::GET_HASH_KEY(func_264(6, Var13.f_7));
		Var19.f_15 = Local_1162.f_6;
		iVar21 = (iVar21 - Var19.f_15);
		Var19.f_2 = MISC::GET_HASH_KEY(func_264(0, Var13.f_1));
		Var19.f_3 = Local_1162;
		iVar21 = (iVar21 - Var19.f_3);
		Var19.f_4 = MISC::GET_HASH_KEY(func_264(1, func_262(Var13.f_2)));
		Var19.f_5 = Local_1162.f_1;
		iVar21 = (iVar21 - Var19.f_5);
		Var19 = MISC::GET_HASH_KEY(func_579(iParam0));
		Var19.f_1 = iVar21;
		unk_0x3DD3F33A5D55EA6F(iVar6, 0, 1, &Var19);
		func_252(iParam0, iVar7);
	}
	iVar22 = 117;
	func_251(6151, iVar22, -1, 1);
	if (!bVar9)
	{
		func_250(6152, SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_578(iParam0)) * Global_262145.f_77)), -1, 1, 0);
	}
	if (func_580())
	{
		func_246(func_266());
	}
	if (func_245(Var13.f_6))
	{
		if (func_2029(6147, -1, 0) != Var13.f_6)
		{
			func_244(11);
		}
	}
	func_250(6147, Var13.f_6, -1, 1, 0);
	func_250(6145, Var13.f_3, -1, 1, 0);
	func_250(6146, Var13.f_4, -1, 1, 0);
	func_250(6374, Var13.f_5, -1, 1, 0);
	func_250(6375, Var13.f_7, -1, 1, 0);
	func_250(6143, Var13.f_1, -1, 1, 0);
	func_250(6144, Var13.f_2, -1, 1, 0);
	func_211();
	iVar23 = func_207();
	if (!func_206(iVar23, 3))
	{
		bVar24 = false;
		func_204(iVar23, 3, bVar24);
	}
	if (iLocal_1118)
	{
		iLocal_1118 = 0;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "WEB_NAVIGATION_SOUNDS_PHONE", true);
	iLocal_370 = 1;
	func_198(0);
	func_1618(iLocal_304, 1);
	func_1852(-1, "_S_PURCHASE_D_SUCCESS", 1, bVar9, 0, 0, 3);
	iLocal_308 = 1;
	bLocal_309 = false;
	iLocal_310 = -1;
	iLocal_311 = 0;
	iLocal_312 = 0;
	iLocal_313 = iParam0;
}

int func_198(int iParam0)
{
	if (!func_201())
	{
		return 0;
	}
	if (!Global_70856)
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
	}
	if (!func_199(100, -1))
	{
		if (iParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_199(102, -1))
	{
		if (iParam0 == 1)
		{
		}
		return 0;
	}
	if (!func_199(101, -1))
	{
		if (iParam0 == 1)
		{
		}
		return 0;
	}
	func_58(49, 1);
	return 1;
}

int func_199(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_2547365[iParam0 /*3*/][func_200(iParam1)];
	if (STATS::STAT_GET_BOOL(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_51();
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

int func_201()
{
	if (func_203() && func_202(0))
	{
		return 1;
	}
	return 0;
}

var func_202(int iParam0)
{
	return Global_1312373[iParam0];
}

var func_203()
{
	return func_202(func_51() + 1);
}

void func_204(int iParam0, int iParam1, bool bParam2)
{
	Global_3009 = iParam0;
	if (Global_117[iParam0 /*10*/].f_8 != 140)
	{
		func_26();
		if (iParam1 == 4)
		{
			Global_104555.f_28020[iParam0 /*29*/].f_12[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_12[2] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[0] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[2] = 1;
		}
		else
		{
			if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1 && Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] == 1)
			{
				bParam2 = false;
			}
			Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] = 1;
			Global_104555.f_28020[iParam0 /*29*/].f_24[iParam1] = 1;
		}
		if (bParam2)
		{
			if (!Global_70856)
			{
				if (iParam1 != 4)
				{
					if (Global_14453 != iParam1)
					{
						Global_2982[iParam1 /*4*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2999[iParam1] = 1;
						Global_3004[iParam1] = iParam0;
					}
					else if (iParam0 == Global_14453)
					{
					}
					else
					{
						Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
						Global_2933[1 /*6*/].f_5 = iParam1;
						func_205();
					}
				}
				else
				{
					Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
					Global_2933[1 /*6*/].f_5 = iParam1;
					func_205();
				}
			}
			else
			{
				Global_2933[1 /*6*/] = { Global_104555.f_28020[iParam0 /*29*/].f_3 };
				Global_2933[1 /*6*/].f_5 = iParam1;
				func_205();
			}
		}
	}
}

void func_205()
{
	char cVar0[64];
	char cVar1[64];
	char* sVar2;
	
	StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_104555.f_28020[Global_3009 /*29*/].f_7)), 64);
	if (Global_3028 == 0)
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("");
		StringCopy(&cVar1, HUD::_GET_LABEL_TEXT(&(Global_2933[1 /*6*/])), 64);
		sVar2 = HUD::_GET_LABEL_TEXT("CELL_253");
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, sVar2, &cVar1);
	}
	else
	{
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("CELL_255");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2933[1 /*6*/]));
		HUD::_SET_NOTIFICATION_MESSAGE_2(&cVar0, &cVar0, 0, 3, "", 0);
	}
	MISC::CLEAR_BIT(&Global_2323, 0);
}

int func_206(int iParam0, int iParam1)
{
	if (Global_104555.f_28020[iParam0 /*29*/].f_12[iParam1] == 1)
	{
		return 1;
	}
	return 0;
}

int func_207()
{
	if (func_208())
	{
		Global_104555.f_28020[12 /*29*/].f_24[Global_14453] = 1;
	}
	return 12;
}

int func_208()
{
	int iVar0;
	
	iVar0 = func_210(PLAYER::PLAYER_ID());
	if (((iVar0 != PLAYER::PLAYER_ID() && iVar0 != func_209()) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0)) && iVar0 != -1)
	{
		return 1;
	}
	return 0;
}

int func_209()
{
	return -1;
}

int func_210(int iParam0)
{
	if (iParam0 != func_209())
	{
		return Global_1627537[iParam0 /*532*/].f_11;
	}
	return func_209();
}

void func_211()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1595693[iVar0 /*680*/].f_266.f_248 = func_2029(6140, -1, 0);
	Global_1595693[iVar0 /*680*/].f_266.f_248.f_6 = func_2029(6141, -1, 0);
	if (func_243())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 0);
	}
	if (func_242())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 1);
	}
	if (func_241())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 2);
	}
	if (func_240())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 3);
	}
	if (func_239())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 4);
	}
	if (func_238())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 5);
	}
	if (func_237())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 6);
	}
	if (func_236())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 7);
	}
	if (func_235())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 8);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 8);
	}
	if (func_234())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 9);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 9);
	}
	if (func_233())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 10);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 10);
	}
	if (func_232())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 11);
	}
	if (func_231())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 12);
	}
	if (func_230())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 13);
	}
	if (func_229())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 14);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 14);
	}
	if (!func_228(iVar0))
	{
	}
	if (func_227())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 15);
	}
	if (func_226())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 16);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 16);
	}
	if (func_225())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 17);
	}
	if (func_224())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 18);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 18);
	}
	if (func_223())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 19);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 19);
	}
	if (func_222())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 20);
	}
	if (func_221())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 21);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 21);
	}
	if (func_220())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 22);
	}
	if (func_219())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 23);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 23);
	}
	if (func_218())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 24);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 24);
	}
	if (func_217())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 25);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 25);
	}
	if (func_216())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 26);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_1), 26);
	}
	if (func_215())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_2), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_2), 0);
	}
	if (func_214())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_2), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_2), 1);
	}
	if (func_212())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_2), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_2), 2);
	}
}

bool func_212()
{
	return func_213(2);
}

int func_213(int iParam0)
{
	var uVar0;
	int iVar1;
	var uVar2;
	
	uVar0 = Global_1368067[iParam0];
	iVar1 = uVar0;
	if (STATS::STAT_GET_BOOL(iVar1, &uVar2, -1))
	{
		return uVar2;
	}
	return 0;
}

bool func_214()
{
	return func_213(1);
}

bool func_215()
{
	return func_213(6);
}

bool func_216()
{
	return func_2029(6374, -1, 0) == 2;
}

bool func_217()
{
	return func_2029(6374, -1, 0) == 1;
}

bool func_218()
{
	return func_2029(6374, -1, 0) == 0;
}

bool func_219()
{
	return func_2029(6144, -1, 0) == 8;
}

bool func_220()
{
	return func_2029(6144, -1, 0) == 7;
}

bool func_221()
{
	return func_2029(6144, -1, 0) == 6;
}

bool func_222()
{
	return func_2029(6144, -1, 0) == 5;
}

bool func_223()
{
	return func_2029(6144, -1, 0) == 4;
}

bool func_224()
{
	return func_2029(6144, -1, 0) == 3;
}

bool func_225()
{
	return func_2029(6144, -1, 0) == 2;
}

bool func_226()
{
	return func_2029(6144, -1, 0) == 1;
}

bool func_227()
{
	return func_2029(6144, -1, 0) == 0;
}

int func_228(int iParam0)
{
	if ((((((((MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 6) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 7)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 8)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 9)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 10)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 11)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 12)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 13)) || MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 14))
	{
		return 1;
	}
	return 0;
}

bool func_229()
{
	return func_2029(6143, -1, 0) == 8;
}

bool func_230()
{
	return func_2029(6143, -1, 0) == 7;
}

bool func_231()
{
	return func_2029(6143, -1, 0) == 6;
}

bool func_232()
{
	return func_2029(6143, -1, 0) == 5;
}

bool func_233()
{
	return func_2029(6143, -1, 0) == 4;
}

bool func_234()
{
	return func_2029(6143, -1, 0) == 3;
}

bool func_235()
{
	return func_2029(6143, -1, 0) == 2;
}

bool func_236()
{
	return func_2029(6143, -1, 0) == 1;
}

bool func_237()
{
	return func_2029(6143, -1, 0) == 0;
}

bool func_238()
{
	return func_2029(6145, -1, 0) != 0;
}

bool func_239()
{
	return func_2029(6375, -1, 0) != 0;
}

bool func_240()
{
	return func_2029(6146, -1, 0) != 0;
}

bool func_241()
{
	return func_2029(6147, -1, 0) == 3;
}

bool func_242()
{
	return func_2029(6147, -1, 0) == 2;
}

bool func_243()
{
	return func_2029(6147, -1, 0) == 1;
}

void func_244(int iParam0)
{
	func_250(1293, iParam0, -1, 1, 0);
}

bool func_245(int iParam0)
{
	return iParam0 == 1;
}

void func_246(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_580())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_249(iParam0))
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
		func_247(&(Global_4261865[iParam0 /*80*/]));
	}
}

void func_247(var uParam0)
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
	func_248(&(uParam0->f_8.f_3));
	func_248(&(uParam0->f_8.f_16));
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

void func_248(var uParam0)
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

int func_249(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_5 == 1;
	}
	return 0;
}

void func_250(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2523060[iParam0 /*3*/][func_200(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

void func_251(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = Global_2523060[iParam0 /*3*/][func_200(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
	switch (iParam0)
	{
		case 784:
			Global_1368159[func_200(iParam2)] = iParam1;
			break;
		
		case 785:
			Global_1368165[func_200(iParam2)] = iParam1;
			break;
		
		case 786:
			Global_1368171[func_200(iParam2)] = iParam1;
			break;
		
		case 787:
			Global_1368177[func_200(iParam2)] = iParam1;
			break;
		
		case 774:
			Global_1368135[func_200(iParam2)] = iParam1;
			break;
		
		case 775:
			Global_1368141[func_200(iParam2)] = iParam1;
			break;
		
		case 776:
			Global_1368147[func_200(iParam2)] = iParam1;
			break;
		
		case 777:
			Global_1368153[func_200(iParam2)] = iParam1;
			break;
		
		case 764:
			Global_1368111[func_200(iParam2)] = iParam1;
			break;
		
		case 765:
			Global_1368117[func_200(iParam2)] = iParam1;
			break;
		
		case 766:
			Global_1368123[func_200(iParam2)] = iParam1;
			break;
		
		case 767:
			Global_1368129[func_200(iParam2)] = iParam1;
			break;
		
		case 754:
			Global_1368183[func_200(iParam2)] = iParam1;
			break;
		
		case 755:
			Global_1368189[func_200(iParam2)] = iParam1;
			break;
		
		case 756:
			Global_1368195[func_200(iParam2)] = iParam1;
			break;
		
		case 757:
			Global_1368201[func_200(iParam2)] = iParam1;
			break;
		
		case 1300:
			Global_1368207[func_200(iParam2)] = iParam1;
			break;
		
		case 636:
			Global_1368213[func_200(iParam2)] = iParam1;
			break;
		
		case 1275:
			Global_1368219[func_200(iParam2)] = iParam1;
			break;
		
		case 1873:
			Global_2549199[0 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 2264:
			Global_2549199[1 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 2918:
			Global_2549199[2 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3047:
			Global_2549199[3 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 7052:
			Global_2549282[func_200(iParam2)] = iParam1;
			break;
		
		case 761:
			Global_1368225[func_200(iParam2)] = iParam1;
			break;
		
		case 762:
			Global_1368231[func_200(iParam2)] = iParam1;
			break;
		
		case 763:
			Global_1368237[func_200(iParam2)] = iParam1;
			break;
		
		case 1233:
			Global_1368243[func_200(iParam2)] = iParam1;
			break;
		
		case 3042:
			Global_2549239[0 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3043:
			Global_2549239[1 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3044:
			Global_2549239[2 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3045:
			Global_2549239[3 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3046:
			Global_2549239[4 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3625:
			Global_2549285[0 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3626:
			Global_2549285[1 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3627:
			Global_2549285[2 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3628:
			Global_2549285[3 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3629:
			Global_2549285[4 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3630:
			Global_2549301[0 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3631:
			Global_2549301[1 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3632:
			Global_2549301[2 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3633:
			Global_2549301[3 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3634:
			Global_2549301[4 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3210:
			Global_2549239[5 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3216:
			Global_2549199[4 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3652:
			Global_2549317[func_200(iParam2)] = iParam1;
			break;
		
		case 3653:
			Global_2549326[func_200(iParam2)] = iParam1;
			break;
		
		case 3654:
			Global_2549320[func_200(iParam2)] = iParam1;
			break;
		
		case 3655:
			Global_2549329[func_200(iParam2)] = iParam1;
			break;
		
		case 3656:
			Global_2549323[func_200(iParam2)] = iParam1;
			break;
		
		case 3657:
			Global_2549332[func_200(iParam2)] = iParam1;
			break;
		
		case 3678:
			Global_2549335[func_200(iParam2)] = iParam1;
			break;
		
		case 3218:
			Global_2549239[6 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3219:
			Global_2549199[5 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3223:
			Global_2549239[7 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 3221:
			Global_2549199[6 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 4002:
			Global_2549239[8 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 4003:
			Global_2549199[7 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 4005:
			Global_2549239[9 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 4006:
			Global_2549199[8 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 4008:
			Global_2549239[10 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 4009:
			Global_2549199[9 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 4011:
			Global_2549239[11 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 4012:
			Global_2549199[10 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 6092:
			Global_2549239[12 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 6093:
			Global_2549199[11 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 6150:
			Global_2549239[13 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		case 6151:
			Global_2549199[12 /*3*/][func_200(iParam2)] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_252(int iParam0, int iParam1)
{
	if (func_253(iParam0, iParam1))
	{
		func_259(iParam0);
	}
}

int func_253(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 0;
	}
	return 1;
}

int func_254(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2525000;
		
		case 2:
			return 2312500;
		
		case 3:
			return 2740000;
		
		case 4:
			return 1465000;
		
		case 5:
			return 1250000;
		
		case 6:
			return 1670000;
		
		case 7:
			return 2100000;
		
		case 8:
			return 1855000;
		
		case 9:
			return 2950000;
		
		default:
	}
	return 0;
}

void func_255()
{
	int iVar0;
	
	iVar0 = func_2029(6136, -1, 0);
	if (!MISC::IS_BIT_SET(iVar0, 4))
	{
		func_258(17);
		if (func_257(13))
		{
			func_256(13);
		}
		if (func_257(14))
		{
			func_256(14);
		}
		if (func_257(15))
		{
			func_256(15);
		}
		if (func_257(16))
		{
			func_256(16);
		}
		MISC::SET_BIT(&iVar0, 4);
		func_250(6136, iVar0, -1, 1, 0);
	}
}

void func_256(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2512808.f_4856.f_23[iVar0]), iVar1);
}

bool func_257(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2512808.f_4856.f_23[iVar0], iVar1);
}

void func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2512808.f_4856.f_23[iVar0]), iVar1);
}

void func_259(int iParam0)
{
	if (func_576(iParam0))
	{
		func_250(6140, iParam0, -1, 1, 0);
		func_250(6141, 0, -1, 1, 0);
		func_260();
		Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_248 = iParam0;
		Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_248.f_6 = 0;
	}
}

void func_260()
{
	Global_2456733 = 1;
	func_757(18987, 0, -1, 1);
	func_757(18988, 0, -1, 1);
	func_50(18106, 0, -1, 1);
	func_261();
	Global_2456763 = 1;
}

void func_261()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (func_2031(18987, -1, -1))
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 17);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 21);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 17);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 21);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 17);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 18);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 21);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 17);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 18);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 19);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 21);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 17);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 18);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 19);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 20);
			MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 21);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 17);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 18);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 19);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 20);
			MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_248.f_3), 21);
			break;
	}
}

int func_262(int iParam0)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_263(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_263(int iParam0)
{
	if (iParam0 == 0)
	{
		return 3;
	}
	else if (iParam0 == 1)
	{
		return 7;
	}
	else if (iParam0 == 2)
	{
		return 4;
	}
	else if (iParam0 == 3)
	{
		return 6;
	}
	else if (iParam0 == 4)
	{
		return 0;
	}
	else if (iParam0 == 5)
	{
		return 8;
	}
	else if (iParam0 == 6)
	{
		return 5;
	}
	else if (iParam0 == 7)
	{
		return 1;
	}
	else if (iParam0 == 8)
	{
		return 2;
	}
	if (iParam0 == -1)
	{
		return -1;
	}
	return 0;
}

char* func_264(int iParam0, int iParam1)
{
	char cVar0[16];
	
	if (iParam1 == -1)
	{
		if ((iParam0 == 2 || iParam0 == 4) || iParam0 == 6)
		{
			iParam1 = 1;
		}
	}
	StringCopy(&cVar0, "FCBASE_", 16);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "STY", 16);
			StringIntConCat(&cVar0, iParam1 + 1, 16);
			break;
		
		case 1:
			StringConCat(&cVar0, "GRA", 16);
			StringIntConCat(&cVar0, iParam1 + 1, 16);
			break;
		
		case 3:
			StringConCat(&cVar0, "QRT", 16);
			StringIntConCat(&cVar0, iParam1, 16);
			break;
		
		case 2:
			StringConCat(&cVar0, "WEA", 16);
			StringIntConCat(&cVar0, iParam1, 16);
			break;
		
		case 4:
			StringConCat(&cVar0, "SEC", 16);
			StringIntConCat(&cVar0, iParam1, 16);
			break;
		
		case 5:
			StringConCat(&cVar0, "LNG", 16);
			StringIntConCat(&cVar0, iParam1 + 1, 16);
			break;
		
		case 6:
			StringConCat(&cVar0, "WIND", 16);
			StringIntConCat(&cVar0, iParam1, 16);
			break;
		
		default:
			return "";
			break;
	}
	return HUD::_GET_TEXT_SUBSTRING(&cVar0, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

int func_265(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/];
	}
	return -1;
}

int func_266()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (func_265(iVar0) != 2147483647)
		{
			if (func_249(iVar0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_267(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_271(iParam0);
	iVar0 = (iVar0 + iParam1);
	if (!func_270(iParam0))
	{
		func_269(iParam0, iVar0);
	}
	else
	{
		func_268(iParam0, iVar0);
	}
}

void func_268(int iParam0, int iParam1)
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

void func_269(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, 1);
	}
}

int func_270(int iParam0)
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

int func_271(int iParam0)
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

void func_272(bool bParam0)
{
	if (Global_68362)
	{
		return;
	}
	if (func_273(PLAYER::PLAYER_PED_ID()) && bLocal_546 != bParam0)
	{
		if (bParam0)
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, 0, false);
		}
		else
		{
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, 0, false);
		}
		bLocal_546 = bParam0;
	}
}

int func_273(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_274(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
	int iVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	var uVar18;
	var uVar19;
	var uVar20;
	var uVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	var uVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	var uVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	struct<7> Var60;
	struct<8> Var61;
	int iVar62;
	
	if (iLocal_542)
	{
		if (!func_412())
		{
			iLocal_543 = 3;
		}
		if (!NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_51()) || NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			iLocal_543 = 3;
		}
		switch (iLocal_543)
		{
			case 0:
				iVar0 = iParam1;
				if (func_404(iParam5))
				{
					iVar0 = (iVar0 + ((((((((Local_1157 + Local_1157.f_1) + Local_1157.f_2) + Local_1157.f_3) + Local_1157.f_4) + Local_1157.f_5) + Local_1157.f_6) + Local_1157.f_7) + Local_1157.f_17));
				}
				else if (func_403(iParam5))
				{
					iVar0 = (iVar0 + ((((((((((Local_1158 + Local_1158.f_1) + Local_1158.f_2) + Local_1158.f_3) + Local_1158.f_4) + Local_1158.f_5) + Local_1158.f_6) + Local_1158.f_7) + Local_1158.f_8) + Local_1158.f_9) + Local_1158.f_10));
				}
				else if (func_402(iParam5))
				{
					if (func_401(iParam5) == 103)
					{
						iVar0 = (iVar0 + ((Local_1157.f_8 + Local_1157.f_9) + Local_1157.f_10));
					}
					else if (func_401(iParam5) == 104)
					{
						iVar0 = (iVar0 + ((Local_1157.f_11 + Local_1157.f_12) + Local_1157.f_13));
					}
					else if (func_401(iParam5) == 105)
					{
						iVar0 = (iVar0 + ((Local_1157.f_14 + Local_1157.f_15) + Local_1157.f_16));
					}
				}
				else if (func_400(iParam5))
				{
					iVar0 = ((((Local_1160 + Local_1160.f_1) + Local_1160.f_2) + Local_1160.f_3) + Local_1160.f_4);
				}
				else if (func_399(iParam5))
				{
					iVar0 = (iVar0 + ((((Local_1159 + Local_1159.f_1) + Local_1159.f_2) + Local_1159.f_3) + Local_1159.f_4));
				}
				else if (func_398(iParam5))
				{
					iVar0 = (iVar0 + (((((Local_1161 + Local_1161.f_1) + Local_1161.f_2) + Local_1161.f_3) + Local_1161.f_4) + Local_1161.f_5));
				}
				else if (func_397(iParam5))
				{
					iVar0 = (iVar0 + ((((((Local_1162.f_3 + Local_1162.f_2) + Local_1162.f_4) + Local_1162.f_5) + Local_1162.f_6) + Local_1162) + Local_1162.f_1));
				}
				else if (func_396(iParam5))
				{
					iVar0 = ((((Local_1163 + Local_1163.f_2) + Local_1163.f_3) + Local_1163.f_4) + Local_1163.f_1);
				}
				iVar1 = 0;
				if (iParam9 != 0)
				{
					if (!func_395(iParam5, iParam9))
					{
						iVar0 = (iVar0 - iParam8);
					}
					if (iVar0 < 0)
					{
						if (iParam3 == 1394405165 || iParam3 == -1616616027)
						{
							if (func_403(iParam5))
							{
							}
							else if (func_394(iParam5))
							{
							}
							else
							{
								iVar0 = 0;
								iVar1 = 1;
							}
						}
					}
				}
				if (iParam7 != 0)
				{
					switch (iParam7)
					{
						case 118439962:
							iVar0 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam1)));
							break;
						
						case 1514966546:
							iVar0 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam1)));
							break;
						
						case 1776242445:
							iVar0 = SYSTEM::CEIL((0.9f * SYSTEM::TO_FLOAT(iParam1)));
							break;
						
						case -1996922865:
							iVar0 = 0;
							iVar1 = 1;
							break;
						
						default:
							break;
						}
				}
				if (!iLocal_545)
				{
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = iVar0;
					if (NETCASH::NETWORK_GET_VC_BANK_BALANCE() > 0)
					{
						if (NETCASH::NETWORK_GET_VC_BANK_BALANCE() >= iVar4)
						{
							iVar3 = iVar4;
						}
						else
						{
							iVar3 = (iVar4 - (iVar4 - NETCASH::NETWORK_GET_VC_BANK_BALANCE()));
						}
						iVar4 = (iVar4 - iVar3);
					}
					if (iVar4 > 0)
					{
						if (NETCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
						{
							if (NETCASH::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar4)
							{
								iVar2 = iVar4;
							}
							else
							{
								iVar2 = (iVar4 - (iVar4 - NETCASH::NETWORK_GET_VC_WALLET_BALANCE(-1)));
							}
							iVar4 = (iVar4 - iVar2);
						}
					}
					if (iVar4 > 0)
					{
					}
				}
				else
				{
					iVar2 = 0;
					iVar3 = 0;
				}
				if (iParam3 == 1394405165)
				{
					if (func_404(iParam5))
					{
						iVar5 = Global_69508.f_40;
						func_392(&iVar6, &iVar7, &iVar8, &iVar9, &iVar10, &iVar11, &iVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17, &uVar18, &uVar19, &uVar20, &uVar21, &iVar22);
						iVar6 = (iVar6 - 1);
						if (!func_395(iParam5, iParam9))
						{
							if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_388(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (func_388(78225582, iParam3, iParam11, iParam4, 1, 0, 0, 4, iParam12, 3))
								{
								}
								else
								{
									iLocal_543 = 3;
									return 1;
								}
								if (iParam7 != 0)
								{
									if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (func_383(iParam5, 1906937290, iVar6, Local_1157, iVar7, Local_1157.f_1, iVar5, Local_1157.f_2, iVar8, Local_1157.f_3, iVar9, Local_1157.f_4, iVar10, Local_1157.f_5, iVar11, Local_1157.f_6, iVar12, Local_1157.f_7, iVar22, Local_1157.f_17))
								{
								}
								else
								{
									iLocal_543 = 3;
								}
								if (iLocal_543 != 3)
								{
									if (func_381())
									{
										if ((iVar2 != 0 || iVar3 != 0) || iVar1)
										{
											HUD::_0x170F541E1CADD1DE(1);
											HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
										}
										iLocal_543 = 1;
									}
									else
									{
										iLocal_543 = 3;
									}
								}
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							if (iParam7 != 0)
							{
								if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_543 = 3;
									return 1;
								}
							}
							if (func_383(iParam5, 1906937290, iVar6, Local_1157, iVar7, Local_1157.f_1, iVar5, Local_1157.f_2, iVar8, Local_1157.f_3, iVar9, Local_1157.f_4, iVar10, Local_1157.f_5, iVar11, Local_1157.f_6, iVar12, Local_1157.f_7, iVar22, Local_1157.f_17))
							{
							}
							else
							{
								iLocal_543 = 3;
							}
							if (iLocal_543 != 3)
							{
								if (func_381())
								{
									if ((iVar2 != 0 || iVar3 != 0) || iVar1)
									{
										HUD::_0x170F541E1CADD1DE(1);
										HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
									}
									iLocal_543 = 1;
								}
								else
								{
									iLocal_543 = 3;
								}
							}
						}
					}
					else if (func_403(iParam5))
					{
						iVar23 = Global_69560.f_59;
						func_378(func_380(iParam5), &iVar24, &iVar25, &iVar26, &iVar27, &iVar28, &iVar29, &iVar30, &iVar31, &iVar32, &iVar33);
						iVar27 = func_377(HUD::_0xE3B05614DCE1D014(13), 9, 4);
						if (!func_395(iParam5, iParam9))
						{
							if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_388(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (iParam7 != 0)
								{
									if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (func_374(iParam5, 1906937290, iVar24, Local_1158, iVar25, Local_1158.f_1, iVar26, Local_1158.f_2, iVar27, Local_1158.f_3, iVar23, Local_1158.f_4, iVar28, Local_1158.f_5, iVar29, Local_1158.f_6, iVar31, Local_1158.f_7, iVar30, Local_1158.f_8, iVar32, Local_1158.f_9, iVar33, Local_1158.f_10))
								{
								}
								else
								{
									iLocal_543 = 3;
								}
								if (iLocal_543 != 3)
								{
									if (func_381())
									{
										if ((iVar2 != 0 || iVar3 != 0) || iVar1)
										{
											HUD::_0x170F541E1CADD1DE(1);
											HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
										}
										iLocal_543 = 1;
									}
									else
									{
										iLocal_543 = 3;
									}
								}
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							if (iParam7 != 0)
							{
								if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_543 = 3;
									return 1;
								}
							}
							if (func_374(iParam5, 1906937290, iVar24, Local_1158, iVar25, Local_1158.f_1, iVar26, Local_1158.f_2, iVar27, Local_1158.f_3, iVar23, Local_1158.f_4, iVar28, Local_1158.f_5, iVar29, Local_1158.f_6, iVar31, Local_1158.f_7, iVar30, Local_1158.f_8, iVar32, Local_1158.f_9, iVar33, Local_1158.f_10))
							{
							}
							else
							{
								iLocal_543 = 3;
							}
							if (iLocal_543 != 3)
							{
								if (func_381())
								{
									if ((iVar2 != 0 || iVar3 != 0) || iVar1)
									{
										HUD::_0x170F541E1CADD1DE(1);
										HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
									}
									iLocal_543 = 1;
								}
								else
								{
									iLocal_543 = 3;
								}
							}
						}
					}
					else if (func_402(iParam5))
					{
						func_392(&uVar34, &uVar35, &uVar36, &uVar37, &uVar38, &uVar39, &uVar40, &iVar41, &iVar42, &iVar43, &iVar44, &iVar45, &iVar46, &iVar47, &iVar48, &iVar49, &uVar50);
						iVar41 = (iVar41 - 1);
						iVar44 = (iVar44 - 1);
						iVar47 = (iVar47 - 1);
						if (!func_395(iParam5, iParam9))
						{
							if (func_401(iParam5) == 103)
							{
							}
							if (func_401(iParam5) == 104)
							{
							}
							if (func_401(iParam5) == 105)
							{
							}
							if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_388(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								iVar51 = 0;
								if (func_401(iParam5) == 103)
								{
									iVar51 = Local_1157.f_8;
								}
								if (func_401(iParam5) == 104)
								{
									iVar51 = Local_1157.f_11;
								}
								if (func_401(iParam5) == 105)
								{
									iVar51 = Local_1157.f_14;
								}
								if (func_388(78225582, iParam3, iParam11, iParam4, 1, iVar51, 0, 4, iParam12, 3))
								{
								}
								else
								{
									iLocal_543 = 3;
									return 1;
								}
								if (iParam7 != 0)
								{
									if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (func_358(iParam5, 1906937290, 0, iVar41, Local_1157.f_8, iVar42, Local_1157.f_9, iVar43, Local_1157.f_10, iVar44, Local_1157.f_11, iVar45, Local_1157.f_12, iVar46, Local_1157.f_13, iVar47, Local_1157.f_14, iVar48, Local_1157.f_15, iVar49, Local_1157.f_16))
								{
								}
								else
								{
									iLocal_543 = 3;
								}
								if (iLocal_543 != 3)
								{
									if (func_381())
									{
										if ((iVar2 != 0 || iVar3 != 0) || iVar1)
										{
											HUD::_0x170F541E1CADD1DE(1);
											HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
										}
										iLocal_543 = 1;
									}
									else
									{
										iLocal_543 = 3;
									}
								}
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							if (func_401(iParam5) == 103)
							{
							}
							if (func_401(iParam5) == 104)
							{
							}
							if (func_401(iParam5) == 105)
							{
							}
							if (iParam7 != 0)
							{
								if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_543 = 3;
									return 1;
								}
							}
							if (func_358(iParam5, 1906937290, 1, iVar41, Local_1157.f_8, iVar42, Local_1157.f_9, iVar43, Local_1157.f_10, iVar44, Local_1157.f_11, iVar45, Local_1157.f_12, iVar46, Local_1157.f_13, iVar47, Local_1157.f_14, iVar48, Local_1157.f_15, iVar49, Local_1157.f_16))
							{
							}
							else
							{
								iLocal_543 = 3;
							}
							if (iLocal_543 != 3)
							{
								if (func_381())
								{
									if ((iVar2 != 0 || iVar3 != 0) || iVar1)
									{
										HUD::_0x170F541E1CADD1DE(1);
										HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
									}
									iLocal_543 = 1;
								}
								else
								{
									iLocal_543 = 3;
								}
							}
						}
					}
					else if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3) && func_388(78225582, iParam3, iParam11, iParam4, 1, 0, 0, 4, iParam12, 3))
					{
						if (iParam9 != 0)
						{
							if (func_388(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
							{
							}
							else
							{
								iLocal_543 = 3;
								return 1;
							}
						}
						if (iParam7 != 0)
						{
							if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
							{
							}
							else
							{
								iLocal_543 = 3;
								return 1;
							}
						}
						if (iLocal_543 != 3)
						{
							if (func_381())
							{
								if ((iVar2 != 0 || iVar3 != 0) || iVar1)
								{
									HUD::_0x170F541E1CADD1DE(1);
									HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
								}
								iLocal_543 = 1;
							}
							else
							{
								iLocal_543 = 3;
							}
						}
					}
					else
					{
						iLocal_543 = 3;
					}
				}
				else if (iParam3 == -1224924353 && func_357(iParam5))
				{
					if (func_2029(3157, -1, 0) == 0)
					{
						if (func_388(78225582, iParam3, func_356(iParam5), iParam4, 1, 0, iParam2, 4, iParam6, 3))
						{
							if (func_355(0, iParam3, Global_69470, iLocal_1151, Global_69470.f_2, iLocal_1154, Global_69470.f_1, iLocal_1155, Global_69470.f_4, iLocal_1152, Global_69470.f_3, iLocal_1153, Global_69470.f_37, iLocal_1156))
							{
								if (func_381())
								{
									if ((iVar2 != 0 || iVar3 != 0) || iVar1)
									{
										HUD::_0x170F541E1CADD1DE(1);
										HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
									}
									iLocal_543 = 1;
								}
								else
								{
									iLocal_543 = 3;
								}
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							iLocal_543 = 3;
						}
					}
					else if (func_355(0, -2121967344, Global_69470, iLocal_1151, Global_69470.f_2, iLocal_1154, Global_69470.f_1, iLocal_1155, Global_69470.f_4, iLocal_1152, Global_69470.f_3, iLocal_1153, Global_69470.f_37, iLocal_1156))
					{
						if (func_381())
						{
							if ((iVar2 != 0 || iVar3 != 0) || iVar1)
							{
								HUD::_0x170F541E1CADD1DE(1);
								HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
							}
							iLocal_543 = 1;
						}
						else
						{
							iLocal_543 = 3;
						}
					}
					else
					{
						iLocal_543 = 3;
					}
				}
				else if (iParam3 == -1224924353 && func_400(iParam5))
				{
					iVar52 = func_354(Global_69626.f_1);
					iVar53 = func_354(Global_69626.f_2);
					iVar54 = func_354(Global_69626.f_3);
					func_353(&iVar52, &iVar53, &iVar54);
					if (func_2029(5376, -1, 0) == 0)
					{
						if (func_346(0, iParam3, func_352(Global_69626), Local_1160, iVar52, Local_1160.f_1, iVar53, Local_1160.f_2, iVar54, Local_1160.f_3, func_351(Global_69626.f_4), Local_1160.f_4))
						{
							if (func_381())
							{
								if ((iVar2 != 0 || iVar3 != 0) || iVar1)
								{
									HUD::_0x170F541E1CADD1DE(1);
									HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
								}
								iLocal_543 = 1;
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							iLocal_543 = 3;
						}
					}
					else if (func_346(0, iParam3, func_352(Global_69626), Local_1160, iVar52, Local_1160.f_1, iVar53, Local_1160.f_2, iVar54, Local_1160.f_3, func_351(Global_69626.f_4), Local_1160.f_4))
					{
						if (func_381())
						{
							if ((iVar2 != 0 || iVar3 != 0) || iVar1)
							{
								HUD::_0x170F541E1CADD1DE(1);
								HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
							}
							iLocal_543 = 1;
						}
						else
						{
							iLocal_543 = 3;
						}
					}
					else
					{
						iLocal_543 = 3;
					}
				}
				else if (iParam3 == -1224924353 && func_396(iParam5))
				{
					if (func_2029(6139, -1, 0) == 0)
					{
						if (func_342(0, iParam3, &Global_69646, Local_1163.f_2, Local_1163.f_3, Local_1163.f_4, Local_1163.f_1, Local_1163))
						{
							if (func_381())
							{
								if ((iVar2 != 0 || iVar3 != 0) || iVar1)
								{
									HUD::_0x170F541E1CADD1DE(1);
									HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
								}
								iLocal_543 = 1;
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							iLocal_543 = 3;
						}
					}
					else if (func_342(0, iParam3, &Global_69646, Local_1163.f_2, Local_1163.f_3, Local_1163.f_4, Local_1163.f_1, Local_1163))
					{
						if (func_381())
						{
							if ((iVar2 != 0 || iVar3 != 0) || iVar1)
							{
								HUD::_0x170F541E1CADD1DE(1);
								HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
							}
							iLocal_543 = 1;
						}
						else
						{
							iLocal_543 = 3;
						}
					}
					else
					{
						iLocal_543 = 3;
					}
				}
				else if (iParam3 == -1616616027)
				{
					if (func_399(iParam5))
					{
						func_341(&iVar55, &iVar56, &iVar57, &iVar58, &iVar59);
						if (!func_395(iParam5, iParam9))
						{
							if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_388(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (iParam7 != 0)
								{
									if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (func_334(iParam5, -103880010, iVar55, Local_1159, iVar56, Local_1159.f_1, iVar57, Local_1159.f_2, iVar58, Local_1159.f_3, iVar59, Local_1159.f_4))
								{
								}
								else
								{
									iLocal_543 = 3;
								}
								if (iLocal_543 != 3)
								{
									if (func_381())
									{
										if ((iVar2 != 0 || iVar3 != 0) || iVar1)
										{
											HUD::_0x170F541E1CADD1DE(1);
											HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
										}
										iLocal_543 = 1;
									}
									else
									{
										iLocal_543 = 3;
									}
								}
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							if (iParam7 != 0)
							{
								if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_543 = 3;
									return 1;
								}
							}
							if (func_334(iParam5, -103880010, iVar55, Local_1159, iVar56, Local_1159.f_1, iVar57, Local_1159.f_2, iVar58, Local_1159.f_3, iVar59, Local_1159.f_4))
							{
							}
							else
							{
								iLocal_543 = 3;
							}
							if (iLocal_543 != 3)
							{
								if (func_381())
								{
									if ((iVar2 != 0 || iVar3 != 0) || iVar1)
									{
										HUD::_0x170F541E1CADD1DE(1);
										HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
									}
									iLocal_543 = 1;
								}
								else
								{
									iLocal_543 = 3;
								}
							}
						}
					}
					else if (func_398(iParam5))
					{
						Var60 = -1;
						Var60.f_1 = -1;
						Var60.f_2 = -1;
						Var60.f_3 = -1;
						Var60.f_4 = -1;
						Var60.f_5 = -1;
						Var60.f_6 = -1;
						func_333(&Var60);
						if (!func_395(iParam5, iParam9))
						{
							if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_388(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (iParam7 != 0)
								{
									if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (func_325(iParam5, 1906937290, Var60.f_3, Local_1161, Var60.f_5, Local_1161.f_1, Var60.f_4, Local_1161.f_2, Var60.f_6, Local_1161.f_3, Var60.f_1, Local_1161.f_4, Var60.f_2, Local_1161.f_5))
								{
								}
								else
								{
									iLocal_543 = 3;
								}
								if (iLocal_543 != 3)
								{
									if (func_381())
									{
										if ((iVar2 != 0 || iVar3 != 0) || iVar1)
										{
											HUD::_0x170F541E1CADD1DE(1);
											HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
										}
										iLocal_543 = 1;
									}
									else
									{
										iLocal_543 = 3;
									}
								}
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							if (iParam7 != 0)
							{
								if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_543 = 3;
									return 1;
								}
							}
							if (func_325(iParam5, 1906937290, Var60.f_3, Local_1161, Var60.f_5, Local_1161.f_1, Var60.f_4, Local_1161.f_2, Var60.f_6, Local_1161.f_3, Var60.f_1, Local_1161.f_4, Var60.f_2, Local_1161.f_5))
							{
							}
							else
							{
								iLocal_543 = 3;
							}
							if (iLocal_543 != 3)
							{
								if (func_381())
								{
									if ((iVar2 != 0 || iVar3 != 0) || iVar1)
									{
										HUD::_0x170F541E1CADD1DE(1);
										HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
									}
									iLocal_543 = 1;
								}
								else
								{
									iLocal_543 = 3;
								}
							}
						}
					}
					else if (func_397(iParam5))
					{
						Var61 = -1;
						Var61.f_1 = -1;
						Var61.f_2 = -1;
						Var61.f_3 = -1;
						Var61.f_4 = -1;
						Var61.f_5 = -1;
						Var61.f_6 = -1;
						Var61.f_7 = -1;
						func_408(&Var61);
						if (!func_395(iParam5, iParam9))
						{
							if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
							{
								if (iParam9 != 0)
								{
									if (func_388(78225582, iParam3, iParam9, iParam4, 1, iParam8, 1, 4, iParam6, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (iParam7 != 0)
								{
									if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
									{
									}
									else
									{
										iLocal_543 = 3;
										return 1;
									}
								}
								if (func_320(iParam5, 1906937290, &Var61, Local_1162.f_3, Local_1162.f_2, Local_1162.f_4, Local_1162.f_5, Local_1162.f_6, Local_1162, Local_1162.f_1))
								{
								}
								else
								{
									iLocal_543 = 3;
								}
								if (iLocal_543 != 3)
								{
									if (func_381())
									{
										if ((iVar2 != 0 || iVar3 != 0) || iVar1)
										{
											HUD::_0x170F541E1CADD1DE(1);
											HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
										}
										iLocal_543 = 1;
									}
									else
									{
										iLocal_543 = 3;
									}
								}
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							if (iParam7 != 0)
							{
								if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
								{
								}
								else
								{
									iLocal_543 = 3;
									return 1;
								}
							}
							if (func_320(iParam5, 1906937290, &Var61, Local_1162.f_3, Local_1162.f_2, Local_1162.f_4, Local_1162.f_5, Local_1162.f_6, Local_1162, Local_1162.f_1))
							{
							}
							else
							{
								iLocal_543 = 3;
							}
							if (iLocal_543 != 3)
							{
								if (func_381())
								{
									if ((iVar2 != 0 || iVar3 != 0) || iVar1)
									{
										HUD::_0x170F541E1CADD1DE(1);
										HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
									}
									iLocal_543 = 1;
								}
								else
								{
									iLocal_543 = 3;
								}
							}
						}
					}
				}
				else if (iParam3 == -1224924353)
				{
					if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
					{
						if (iParam7 != 0)
						{
							if (func_388(78225582, iParam3, iParam6, iParam4, 1, iVar0, iParam2, 4, iParam7, 3))
							{
							}
							else
							{
								iLocal_543 = 3;
								return 1;
							}
						}
						if (func_277(iLocal_1147, iParam10, 1))
						{
							if (func_381())
							{
								if ((iVar2 != 0 || iVar3 != 0) || iVar1)
								{
									HUD::_0x170F541E1CADD1DE(1);
									HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
								}
								iLocal_543 = 1;
							}
							else
							{
								iLocal_543 = 3;
							}
						}
						else
						{
							iLocal_543 = 3;
						}
					}
					else
					{
						iLocal_543 = 3;
					}
				}
				else if (func_388(78225582, iParam3, iParam5, iParam4, 1, iParam1, iParam2, 4, iParam6, 3))
				{
					if (iParam7 != 0)
					{
						if (func_388(78225582, iParam3, iParam7, iParam4, 1, iParam1, iParam2, 4, iParam5, 3))
						{
						}
						else
						{
							iLocal_543 = 3;
							return 1;
						}
					}
					if (func_381())
					{
						if ((iVar2 != 0 || iVar3 != 0) || iVar1)
						{
							HUD::_0x170F541E1CADD1DE(1);
							HUD::_SET_PLAYER_CASH_CHANGE(-iVar2, -iVar3);
						}
						iLocal_543 = 1;
					}
					else
					{
						iLocal_543 = 3;
					}
				}
				else
				{
					iLocal_543 = 3;
				}
				break;
			
			case 1:
				iVar62 = func_266();
				if (iVar62 >= 0 && iVar62 < 5)
				{
					if (func_276(iVar62))
					{
						if (func_275(iVar62) == 2)
						{
							iLocal_543 = 2;
						}
						else
						{
							iLocal_543 = 3;
						}
					}
				}
				else
				{
					iLocal_543 = 3;
				}
				break;
			
			case 2:
				iLocal_542 = 0;
				iLocal_543 = 0;
				if (!iLocal_545)
				{
					HUD::_0x170F541E1CADD1DE(0);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				}
				*iParam0 = 2;
				return 0;
				break;
			
			case 3:
				func_246(func_266());
				iLocal_542 = 0;
				iLocal_543 = 0;
				if (!iLocal_545)
				{
					HUD::_0x170F541E1CADD1DE(0);
					HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
				}
				*iParam0 = 0;
				return 0;
				break;
		}
		return 1;
	}
	if (iLocal_543 == 3)
	{
		func_246(func_266());
		iLocal_542 = 0;
		iLocal_543 = 0;
		if (!iLocal_545)
		{
			HUD::_0x170F541E1CADD1DE(0);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		}
		*iParam0 = 0;
		return 0;
	}
	iLocal_543 = 0;
	*iParam0 = -1;
	return 0;
}

int func_275(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2;
	}
	return 0;
}

int func_276(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 5)
	{
		return Global_4261865[iParam0 /*80*/].f_2 != 1;
	}
	return 0;
}

int func_277(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	var uVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	char* sVar31;
	
	iVar10 = func_319(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (((!Global_4265502 || !ENTITY::DOES_ENTITY_EXIST(iParam1)) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0)) || VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0)
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam1) <= 0 && func_318(ENTITY::GET_ENTITY_MODEL(iParam1)))
		{
			func_317(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &sVar5, &iVar8, &iVar9, 0);
			if (!func_316(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
			{
				return 0;
			}
			if (!func_316(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &sVar5, 3, 24, iVar10, iVar2, iVar8))
			{
				return 0;
			}
			if (!func_314(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_315(iVar0)))
			{
				return 0;
			}
			if (!func_316(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
			{
				return 0;
			}
			if (!func_314(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_315(iVar1)))
			{
				return 0;
			}
		}
		return 1;
	}
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar11 = true;
	if ((((((((((((((iParam0 == 10 || iParam0 == 11) || iParam0 == 12) || iParam0 == 23) || iParam0 == 24) || iParam0 == 25) || iParam0 == 36) || iParam0 == 37) || iParam0 == 38) || iParam0 == 49) || iParam0 == 50) || iParam0 == 51) || iParam0 == 62) || iParam0 == 63) || iParam0 == 64)
	{
		bVar11 = false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, 0))
	{
		iVar12 = func_312(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar13 = func_311(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar14 = func_308(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar15 = func_307(ENTITY::GET_ENTITY_MODEL(iParam1));
		iVar16 = func_306(iParam1);
		if (bVar11)
		{
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_0_v", "VEM_SPOILER", VEHICLE::GET_VEHICLE_MOD(iParam1, 0) + 1, 14, iVar12, -1, iParam1, 0))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_1_v", "VEM_BUMPER_F", VEHICLE::GET_VEHICLE_MOD(iParam1, 1) + 1, 34, iVar12, -1, iParam1, 1))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_2_v", "VEM_BUMPER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 2) + 11, 35, iVar12, -1, iParam1, 2))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_3_v", "VEM_SKIRT", VEHICLE::GET_VEHICLE_MOD(iParam1, 3) + 1, 13, iVar12, -1, iParam1, 3))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_4_v", "VEM_EXHAUST", VEHICLE::GET_VEHICLE_MOD(iParam1, 4) + 1, 6, iVar12, -1, iParam1, 4))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_5_v", "VEM_CHASSIS", VEHICLE::GET_VEHICLE_MOD(iParam1, 5) + 1, 4, iVar12, -1, iParam1, 5))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_6_v", "VEM_GRILL", VEHICLE::GET_VEHICLE_MOD(iParam1, 6) + 1, 8, iVar12, -1, iParam1, 6))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_7_v", "VEM_HOOD", VEHICLE::GET_VEHICLE_MOD(iParam1, 7) + 1, 9, iVar12, -1, iParam1, 7))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_8_v", "VEM_FENDER_L", VEHICLE::GET_VEHICLE_MOD(iParam1, 8) + 1, 36, iVar12, -1, iParam1, 8))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_9_v", "VEM_FENDER_R", VEHICLE::GET_VEHICLE_MOD(iParam1, 9) + 6, 37, iVar12, -1, iParam1, 9))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_10_v", "VEM_ROOF", VEHICLE::GET_VEHICLE_MOD(iParam1, 10) + 1, 12, iVar12, iVar16, iParam1, 10))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_11_v", "VEM_ENGINE", VEHICLE::GET_VEHICLE_MOD(iParam1, 11) + 1, 5, iVar12, -1, iParam1, 11))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_12_v", "VEM_BRAKE", VEHICLE::GET_VEHICLE_MOD(iParam1, 12) + 1, 2, iVar12, -1, iParam1, 12))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_13_v", "VEM_TRANS", VEHICLE::GET_VEHICLE_MOD(iParam1, 13) + 1, 16, iVar12, -1, iParam1, 13))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_15_v", "VEM_SUSPENSION", VEHICLE::GET_VEHICLE_MOD(iParam1, 15) + 1, 15, iVar12, -1, iParam1, 15))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_16_v", "VEM_ARMOUR", VEHICLE::GET_VEHICLE_MOD(iParam1, 16) + 1, 1, iVar12, -1, iParam1, 16))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_18_v", "VEM_TURBO", func_304(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 18)), 17, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_22_v", "VEM_HLIGHT", func_304(VEHICLE::IS_TOGGLE_MOD_ON(iParam1, 22)), 11, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_0_v", "VEM_SUPERMOD_0", VEHICLE::GET_VEHICLE_MOD(iParam1, 25) + 1, 41, iVar13, -1, iParam1, 25))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_1_v", "VEM_SUPERMOD_1", VEHICLE::GET_VEHICLE_MOD(iParam1, 26) + 1, 42, iVar13, -1, iParam1, 26))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_2_v", "VEM_SUPERMOD_2", VEHICLE::GET_VEHICLE_MOD(iParam1, 27) + 1, 43, iVar13, -1, iParam1, 27))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_3_v", "VEM_SUPERMOD_3", VEHICLE::GET_VEHICLE_MOD(iParam1, 28) + 1, 44, iVar13, -1, iParam1, 28))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_4_v", "VEM_SUPERMOD_4", VEHICLE::GET_VEHICLE_MOD(iParam1, 29) + 1, 45, iVar13, -1, iParam1, 29))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_5_v", "VEM_SUPERMOD_5", VEHICLE::GET_VEHICLE_MOD(iParam1, 30) + 1, 46, iVar13, -1, iParam1, 30))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_6_v", "VEM_SUPERMOD_6", VEHICLE::GET_VEHICLE_MOD(iParam1, 31) + 1, 47, iVar13, -1, iParam1, 31))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_7_v", "VEM_SUPERMOD_7", VEHICLE::GET_VEHICLE_MOD(iParam1, 32) + 1, 48, iVar13, -1, iParam1, 32))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_8_v", "VEM_SUPERMOD_8", VEHICLE::GET_VEHICLE_MOD(iParam1, 33) + 1, 49, iVar13, -1, iParam1, 33))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_9_v", "VEM_SUPERMOD_9", VEHICLE::GET_VEHICLE_MOD(iParam1, 34) + 1, 50, iVar13, -1, iParam1, 34))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_10_v", "VEM_SUPERMOD_10", VEHICLE::GET_VEHICLE_MOD(iParam1, 35) + 1, 51, iVar13, -1, iParam1, 35))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_11_v", "VEM_SUPERMOD_11", VEHICLE::GET_VEHICLE_MOD(iParam1, 36) + 1, 52, iVar13, -1, iParam1, 36))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_12_v", "VEM_SUPERMOD_12", VEHICLE::GET_VEHICLE_MOD(iParam1, 37) + 1, 53, iVar13, -1, iParam1, 37))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_13_v", "VEM_SUPERMOD_13", VEHICLE::GET_VEHICLE_MOD(iParam1, 38) + 1, 54, iVar13, -1, iParam1, 38))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_14_v", "VEM_SUPERMOD_14", VEHICLE::GET_VEHICLE_MOD(iParam1, 39) + 1, 55, iVar13, -1, iParam1, 39))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_15_v", "VEM_SUPERMOD_15", VEHICLE::GET_VEHICLE_MOD(iParam1, 40) + 1, 56, iVar13, -1, iParam1, 40))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_16_v", "VEM_SUPERMOD_16", VEHICLE::GET_VEHICLE_MOD(iParam1, 41) + 1, 57, iVar13, -1, iParam1, 41))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_17_v", "VEM_SUPERMOD_17", VEHICLE::GET_VEHICLE_MOD(iParam1, 42) + 1, 58, iVar13, -1, iParam1, 42))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_18_v", "VEM_SUPERMOD_18", VEHICLE::GET_VEHICLE_MOD(iParam1, 43) + 1, 59, iVar13, -1, iParam1, 43))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_19_v", "VEM_SUPERMOD_19", VEHICLE::GET_VEHICLE_MOD(iParam1, 44) + 1, 60, iVar13, -1, iParam1, 44))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_20_v", "VEM_SUPERMOD_20", VEHICLE::GET_VEHICLE_MOD(iParam1, 45) + 1, 61, iVar13, -1, iParam1, 45))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_21_v", "VEM_SUPERMOD_21", VEHICLE::GET_VEHICLE_MOD(iParam1, 46) + 1, 62, iVar13, -1, iParam1, 46))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_22_v", "VEM_SUPERMOD_22", VEHICLE::GET_VEHICLE_MOD(iParam1, 47) + 1, 63, iVar13, -1, iParam1, 47))
			{
				return 0;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_MOD_IDX_S_23_v", "VEM_SUPERMOD_23", VEHICLE::GET_VEHICLE_MOD(iParam1, 48) + 1, 64, iVar14, -1, iParam1, 48))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			uVar17 = func_303(VEHICLE::_GET_VEHICLE_MOD_DATA(iParam1, 14, VEHICLE::GET_VEHICLE_MOD(iParam1, 14)));
			if (!func_301(iParam0, "PACKED_MP_VEH_MOD_IDX_14_v", func_302(uVar17), 10, iVar12))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!func_300(iParam0, "PACKED_MP_VEH_MOD_IDX_23_v", iParam1, 23, iVar15))
			{
				return 0;
			}
			if (!func_300(iParam0, "PACKED_MP_VEH_MOD_IDX_24_v", iParam1, 24, iVar15))
			{
				return 0;
			}
		}
		if (!func_298(iParam0, "PACKED_MP_VEH_WHEEL_TYPE_0_v", iParam1))
		{
			return 0;
		}
		if (bVar11)
		{
			iVar18 = 0;
			switch (VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam1))
			{
				case 0:
					iVar18 = 0;
					break;
				
				case 3:
					iVar18 = 1;
					break;
				
				case 2:
					iVar18 = 2;
					break;
				
				case 1:
					iVar18 = 3;
					break;
				
				case 4:
					iVar18 = 4;
					break;
				
				case 5:
					iVar18 = 5;
					break;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_WINDOW_TINT_0_v", "VEM_CMOD_WIN", iVar18, 33, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			iVar19 = 0;
			switch (VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam1))
			{
				case 3:
					iVar19 = 0;
					break;
				
				case 0:
					iVar19 = 1;
					break;
				
				case 4:
					iVar19 = 2;
					break;
				
				case 2:
					iVar19 = 3;
					break;
				
				case 1:
					iVar19 = 4;
					break;
			}
			if (!func_305(iParam0, "PACKED_MP_VEH_PLATE_ID_v", "VEM_CMOD_PLA", iVar19, 23, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 23) == 0)
			{
				if (!func_305(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_305(iParam0, "PACKED_MP_VEH_MOD_VAR_0_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
			if (VEHICLE::GET_VEHICLE_MOD_VARIATION(iParam1, 24) == 0)
			{
				if (!func_305(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 0, 31, iVar12, -1, 0, 23))
				{
					return 0;
				}
			}
			else if (!func_305(iParam0, "PACKED_MP_VEH_MOD_VAR_1_v", "VEM_CMOD_TYR", 1, 32, iVar12, -1, 0, 23))
			{
				return 0;
			}
		}
		func_317(iParam1, &iVar0, &sVar3, &iVar6, &iVar1, &sVar4, &iVar7, &iVar2, &sVar5, &iVar8, &iVar9, 1);
		iVar20 = func_297(iVar9);
		if (!func_305(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA2_0_v", "VEM_CMOD_COL5", iVar20, 29, iVar10, -1, 0, 23))
		{
			return 0;
		}
		VEHICLE::SET_VEHICLE_COLOURS(iParam1, iVar6, iVar7);
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam1, iVar8, iVar9);
		if (!func_316(iParam0, "PACKED_MP_VEH_COLOUR1_0_v", &sVar3, 1, 24, iVar10, iVar0, iVar6))
		{
			return 0;
		}
		if (!func_316(iParam0, "PACKED_MP_VEH_COLOUR_EXTRA1_0_v", &sVar5, 3, 24, iVar10, iVar2, iVar8))
		{
			return 0;
		}
		if (!func_314(iParam0, "PACKED_MP_VEH_PRIMARY_COLOUR_GROUP_v", func_315(iVar0)))
		{
			return 0;
		}
		if (!func_316(iParam0, "PACKED_MP_VEH_COLOUR2_0_v", &sVar4, 2, 25, iVar10, iVar1, iVar7))
		{
			return 0;
		}
		if (!func_314(iParam0, "PACKED_MP_VEH_SECONDARY_COLOUR_GROUP_v", func_315(iVar1)))
		{
			return 0;
		}
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam1, &iVar21, &iVar22, &iVar23);
		switch (func_294(iVar21, iVar22, iVar23))
		{
			case 1:
				iVar24 = 3;
				break;
			
			case 2:
				iVar24 = 4;
				break;
			
			case 3:
				iVar24 = 5;
				break;
			
			case 4:
				iVar24 = 6;
				break;
			
			case 5:
				iVar24 = 11;
				break;
			
			case 6:
				iVar24 = 7;
				break;
			
			case 7:
				iVar24 = 10;
				break;
			
			case 8:
				iVar24 = 8;
				break;
			
			case 9:
				iVar24 = 12;
				break;
			
			case 10:
				iVar24 = 13;
				break;
			
			case 11:
				iVar24 = -1;
				break;
			
			case 12:
				iVar24 = 9;
				break;
			
			case 0:
				if (func_293(ENTITY::GET_ENTITY_MODEL(iParam1)))
				{
					iVar24 = 255;
					break;
				}
				break;
		}
		if (bVar11)
		{
			if (!func_292(iParam0, "PACKED_NG_VEHICLE_SMOKE_v", "VEM_CMOD_TYR", iVar24, 18, iVar12))
			{
				return 0;
			}
		}
		iVar25 = func_291(VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 2), (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 0) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 1)), VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam1, 3));
		if (bVar11)
		{
			if (!func_290(iParam0, "PACKED_NG_VEHICLE_NEON_KIT_v", "VEM_CMOD_NEONLAY", iVar25, 21, iVar12, 1))
			{
				return 0;
			}
		}
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam1, &iVar21, &iVar22, &iVar23);
		iVar26 = func_287(iVar21, iVar22, iVar23);
		if (bVar11)
		{
			if (!func_290(iParam0, "PACKED_NG_VEHICLE_NEON_v", "VEM_CMOD_NEONCOL", iVar26, 21, iVar12, 0))
			{
				return 0;
			}
		}
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(iParam1) > 1)
		{
			if (!func_305(iParam0, "PACKED_MP_VEH_LIVERY_0_v", "VEM_LIVERY", VEHICLE::GET_VEHICLE_LIVERY(iParam1), 26, iVar12, func_286(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (VEHICLE::_0x5ECB40269053C0D4(iParam1) > 1)
		{
			if (!func_305(iParam0, "PACKED_MP_VEH_LIVERY2_0_v", "VEM_LIVERY2", VEHICLE::_0x60190048C0764A26(iParam1), 39, iVar14, func_286(ENTITY::GET_ENTITY_MODEL(iParam1)), 0, 23))
			{
				return 0;
			}
		}
		if (bVar11)
		{
			if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam1))
			{
				if (!func_285(iParam0, "PACKED_NG_VEHICLE_BPT_v", "VEM_CMOD_TYR_2", 30, iVar12))
				{
					return 0;
				}
			}
		}
		if (bVar11)
		{
			VEHICLE::_GET_VEHICLE_INTERIOR_COLOUR(iParam1, &iVar30);
			bVar27 = false;
			iVar28 = 0;
			while (func_284(iVar28, &iVar29) && !bVar27)
			{
				if (iVar29 == iVar30)
				{
					bVar27 = true;
					sVar31 = func_283(iVar28);
				}
				else
				{
					iVar28++;
				}
			}
			if (bVar27)
			{
				func_282(iParam0, "PACKED_LR_VEHICLE_COLOUR_5_v", sVar31, 38, 5, 3);
			}
			VEHICLE::_GET_VEHICLE_DASHBOARD_COLOUR(iParam1, &iVar30);
			bVar27 = false;
			iVar28 = 0;
			while (func_281(iVar28, &iVar29) && !bVar27)
			{
				if (iVar29 == iVar30)
				{
					bVar27 = true;
					sVar31 = func_280(iVar28);
				}
				else
				{
					iVar28++;
				}
			}
			if (!bVar27)
			{
				if (iVar30 == 0)
				{
					sVar31 = "VEM_COLOUR_6_BLACK_t65_v3";
					bVar27 = true;
				}
				else if (iVar30 == 132)
				{
					sVar31 = "VEM_COLOUR_6_DEFAULT_t65_v3";
					bVar27 = true;
				}
			}
			if (bVar27)
			{
				func_282(iParam0, "PACKED_LR_VEHICLE_COLOUR_6_v", sVar31, 65, 6, 3);
			}
		}
		if (iParam2 && bVar11)
		{
			if (!func_279(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v", ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				return 0;
			}
		}
		else if (bVar11)
		{
			if (!func_278(iParam0, "PACKED_NG_VEHICLE_INSURANCE_v"))
			{
				return 0;
			}
		}
		return 1;
	}
	return 0;
}

int func_278(int iParam0, char* sParam1)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_INSURANCE_NONE", 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_279(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	char cVar1[16];
	char cVar2[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam2), 16);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || MISC::GET_HASH_KEY(&cVar1) == -515263000)
	{
		return 1;
	}
	StringConCat(&cVar2, "VEM_INSURANCE_", 64);
	StringConCat(&cVar2, &cVar1, 64);
	switch (iParam2)
	{
		case joaat("dubsta2"):
		case joaat("cavalcade2"):
		case joaat("mesa2"):
		case joaat("rapidgt2"):
		case joaat("emperor2"):
			StringConCat(&cVar2, "2", 64);
			break;
		
		case joaat("mesa3"):
		case joaat("emperor3"):
		case joaat("burrito3"):
		case joaat("mule3"):
			StringConCat(&cVar2, "3", 64);
			break;
		
		case joaat("tornado4"):
			StringConCat(&cVar2, "4", 64);
			break;
	}
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar2)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar2), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_280(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "SILVER";
			break;
		
		case 1:
			return "BLUE_SILVER";
			break;
		
		case 2:
			return "ROLLED_STEEL";
			break;
		
		case 3:
			return "SHADOW_SILVER";
			break;
		
		case 4:
			return "WHITE";
			break;
		
		case 5:
			return "FROST_WHITE";
			break;
		
		case 6:
			return "CREAM";
			break;
		
		case 7:
			return "SIENNA_BROWN";
			break;
		
		case 8:
			return "SADDLE_BROWN";
			break;
		
		case 9:
			return "MOSS_BROWN";
			break;
		
		case 10:
			return "WOODBEECH_BROWN";
			break;
		
		case 11:
			return "STRAW_BROWN";
			break;
		
		case 12:
			return "SANDY_BROWN";
			break;
		
		case 13:
			return "BLEECHED_BROWN";
			break;
		
		case 14:
			return "GOLD";
			break;
		
		case 15:
			return "BRONZE";
			break;
		
		case 16:
			return "YELLOW";
			break;
		
		case 17:
			return "RACE_YELLOW";
			break;
		
		case 18:
			return "FLUR_YELLOW";
			break;
		
		case 19:
			return "ORANGE";
			break;
		
		case 20:
			return "BRIGHT_ORANGE";
			break;
		
		case 21:
			return "SUNRISE_ORANGE";
			break;
		
		case 22:
			return "RED";
			break;
		
		case 23:
			return "TORINO_RED";
			break;
		
		case 24:
			return "FORMULA_RED";
			break;
		
		case 25:
			return "LAVA_RED";
			break;
		
		case 26:
			return "BLAZE_RED";
			break;
		
		case 27:
			return "GRACE_RED";
			break;
		
		case 28:
			return "GARNET_RED";
			break;
		
		case 29:
			return "CANDY_RED";
			break;
		
		case 30:
			return "HOT PINK";
			break;
		
		case 31:
			return "PINK";
			break;
		
		case 32:
			return "SALMON_PINK";
			break;
		
		case 33:
			return "PURPLE";
			break;
		
		case 34:
			return "BRIGHT_PURPLE";
			break;
		
		case 35:
			return "SAXON_BLUE";
			break;
		
		case 36:
			return "BLUE";
			break;
		
		case 37:
			return "MARINER_BLUE";
			break;
		
		case 38:
			return "HARBOR_BLUE";
			break;
		
		case 39:
			return "DIAMOND_BLUE";
			break;
		
		case 40:
			return "SURF_BLUE";
			break;
		
		case 41:
			return "NAUTICAL_BLUE";
			break;
		
		case 42:
			return "RACING_BLUE";
			break;
		
		case 43:
			return "ULTRA_BLUE";
			break;
		
		case 44:
			return "LIGHT_BLUE";
			break;
		
		case 45:
			return "SEA_GREEN";
			break;
		
		case 46:
			return "BRIGHT_GREEN";
			break;
		
		case 47:
			return "PETROL_GREEN";
			break;
		
		case 48:
			return "LIME_GREEN";
			break;
	}
	return "";
}

bool func_281(int iParam0, int iParam1)
{
	*iParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*iParam1 = 4;
			break;
		
		case 1:
			*iParam1 = 5;
			break;
		
		case 2:
			*iParam1 = 6;
			break;
		
		case 3:
			*iParam1 = 7;
			break;
		
		case 4:
			*iParam1 = 111;
			break;
		
		case 5:
			*iParam1 = 112;
			break;
		
		case 6:
			*iParam1 = 107;
			break;
		
		case 7:
			*iParam1 = 104;
			break;
		
		case 8:
			*iParam1 = 98;
			break;
		
		case 9:
			*iParam1 = 100;
			break;
		
		case 10:
			*iParam1 = 102;
			break;
		
		case 11:
			*iParam1 = 99;
			break;
		
		case 12:
			*iParam1 = 105;
			break;
		
		case 13:
			*iParam1 = 106;
			break;
		
		case 14:
			*iParam1 = 37;
			break;
		
		case 15:
			*iParam1 = 90;
			break;
		
		case 16:
			*iParam1 = 88;
			break;
		
		case 17:
			*iParam1 = 89;
			break;
		
		case 18:
			*iParam1 = 91;
			break;
		
		case 19:
			*iParam1 = 38;
			break;
		
		case 20:
			*iParam1 = 138;
			break;
		
		case 21:
			*iParam1 = 36;
			break;
		
		case 22:
			*iParam1 = 27;
			break;
		
		case 23:
			*iParam1 = 28;
			break;
		
		case 24:
			*iParam1 = 29;
			break;
		
		case 25:
			*iParam1 = 150;
			break;
		
		case 26:
			*iParam1 = 30;
			break;
		
		case 27:
			*iParam1 = 31;
			break;
		
		case 28:
			*iParam1 = 32;
			break;
		
		case 29:
			*iParam1 = 35;
			break;
		
		case 30:
			*iParam1 = 135;
			break;
		
		case 31:
			*iParam1 = 137;
			break;
		
		case 32:
			*iParam1 = 136;
			break;
		
		case 33:
			*iParam1 = 71;
			break;
		
		case 34:
			*iParam1 = 145;
			break;
		
		case 35:
			*iParam1 = 63;
			break;
		
		case 36:
			*iParam1 = 64;
			break;
		
		case 37:
			*iParam1 = 65;
			break;
		
		case 38:
			*iParam1 = 66;
			break;
		
		case 39:
			*iParam1 = 67;
			break;
		
		case 40:
			*iParam1 = 68;
			break;
		
		case 41:
			*iParam1 = 69;
			break;
		
		case 42:
			*iParam1 = 73;
			break;
		
		case 43:
			*iParam1 = 70;
			break;
		
		case 44:
			*iParam1 = 74;
			break;
		
		case 45:
			*iParam1 = 51;
			break;
		
		case 46:
			*iParam1 = 53;
			break;
		
		case 47:
			*iParam1 = 54;
			break;
		
		case 48:
			*iParam1 = 92;
			break;
	}
	return *iParam1 != -1;
}

int func_282(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		StringCopy(&cVar1, "VEM_COLOUR_", 64);
		StringIntConCat(&cVar1, iParam4, 64);
		StringConCat(&cVar1, "_", 64);
		StringConCat(&cVar1, sParam2, 64);
		StringConCat(&cVar1, "_t", 64);
		StringIntConCat(&cVar1, iParam3, 64);
		StringConCat(&cVar1, "_v", 64);
		StringIntConCat(&cVar1, iParam5, 64);
	}
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_283(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BLACK";
			break;
		
		case 1:
			return "GRAPHITE";
			break;
		
		case 2:
			return "ANTHR_BLACK";
			break;
		
		case 3:
			return "BLACK_STEEL";
			break;
		
		case 4:
			return "DARK_SILVER";
			break;
		
		case 5:
			return "BLUE_SILVER";
			break;
		
		case 6:
			return "ROLLED_STEEL";
			break;
		
		case 7:
			return "SHADOW_SILVER";
			break;
		
		case 8:
			return "STONE_SILVER";
			break;
		
		case 9:
			return "MIDNIGHT_SILVER";
			break;
		
		case 10:
			return "CAST_IRON_SIL";
			break;
		
		case 11:
			return "RED";
			break;
		
		case 12:
			return "TORINO_RED";
			break;
		
		case 13:
			return "LAVA_RED";
			break;
		
		case 14:
			return "BLAZE_RED";
			break;
		
		case 15:
			return "GRACE_RED";
			break;
		
		case 16:
			return "GARNET_RED";
			break;
		
		case 17:
			return "SUNSET_RED";
			break;
		
		case 18:
			return "CABERNET_RED";
			break;
		
		case 19:
			return "WINE_RED";
			break;
		
		case 20:
			return "CANDY_RED";
			break;
		
		case 21:
			return "PINK";
			break;
		
		case 22:
			return "SALMON_PINK";
			break;
		
		case 23:
			return "SUNRISE_ORANGE";
			break;
		
		case 24:
			return "ORANGE";
			break;
		
		case 25:
			return "BRIGHT_ORANGE";
			break;
		
		case 26:
			return "BRONZE";
			break;
		
		case 27:
			return "YELLOW";
			break;
		
		case 28:
			return "RACE_YELLOW";
			break;
		
		case 29:
			return "FLUR_YELLOW";
			break;
		
		case 30:
			return "DARK_GREEN";
			break;
		
		case 31:
			return "RACING_GREEN";
			break;
		
		case 32:
			return "SEA_GREEN";
			break;
		
		case 33:
			return "OLIVE_GREEN";
			break;
		
		case 34:
			return "BRIGHT_GREEN";
			break;
		
		case 35:
			return "PETROL_GREEN";
			break;
		
		case 36:
			return "LIME_GREEN";
			break;
		
		case 37:
			return "MIDNIGHT_BLUE";
			break;
		
		case 38:
			return "GALAXY_BLUE";
			break;
		
		case 39:
			return "DARK_BLUE";
			break;
		
		case 40:
			return "SAXON_BLUE";
			break;
		
		case 41:
			return "MARINER_BLUE";
			break;
		
		case 42:
			return "HARBOR_BLUE";
			break;
		
		case 43:
			return "DIAMOND_BLUE";
			break;
		
		case 44:
			return "SURF_BLUE";
			break;
		
		case 45:
			return "NAUTICAL_BLUE";
			break;
		
		case 46:
			return "RACING_BLUE";
			break;
		
		case 47:
			return "ULTRA_BLUE";
			break;
		
		case 48:
			return "LIGHT_BLUE";
			break;
		
		case 49:
			return "CHOCOLATE_BROWN";
			break;
		
		case 50:
			return "BISON_BROWN";
			break;
		
		case 51:
			return "CREEK_BROWN";
			break;
		
		case 52:
			return "UMBER_BROWN";
			break;
		
		case 53:
			return "MAPLE_BROWN";
			break;
		
		case 54:
			return "BEECHWOOD_BROWN";
			break;
		
		case 55:
			return "SIENNA_BROWN";
			break;
		
		case 56:
			return "SADDLE_BROWN";
			break;
		
		case 57:
			return "MOSS_BROWN";
			break;
		
		case 58:
			return "WOODBEECH_BROWN";
			break;
		
		case 59:
			return "STRAW_BROWN";
			break;
		
		case 60:
			return "SANDY_BROWN";
			break;
		
		case 61:
			return "BLEECHED_BROWN";
			break;
		
		case 62:
			return "SPIN_PURPLE";
			break;
		
		case 63:
			return "MIGHT_PURPLE";
			break;
		
		case 64:
			return "BRIGHT_PURPLE";
			break;
		
		case 65:
			return "CREAM";
			break;
		
		case 66:
			return "WHITE";
			break;
		
		case 67:
			return "FROST_WHITE";
			break;
	}
	return "";
}

bool func_284(int iParam0, var uParam1)
{
	*uParam1 = -1;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		
		case 1:
			*uParam1 = 1;
			break;
		
		case 2:
			*uParam1 = 11;
			break;
		
		case 3:
			*uParam1 = 2;
			break;
		
		case 4:
			*uParam1 = 3;
			break;
		
		case 5:
			*uParam1 = 5;
			break;
		
		case 6:
			*uParam1 = 6;
			break;
		
		case 7:
			*uParam1 = 7;
			break;
		
		case 8:
			*uParam1 = 8;
			break;
		
		case 9:
			*uParam1 = 9;
			break;
		
		case 10:
			*uParam1 = 10;
			break;
		
		case 11:
			*uParam1 = 27;
			break;
		
		case 12:
			*uParam1 = 28;
			break;
		
		case 13:
			*uParam1 = 150;
			break;
		
		case 14:
			*uParam1 = 30;
			break;
		
		case 15:
			*uParam1 = 31;
			break;
		
		case 16:
			*uParam1 = 32;
			break;
		
		case 17:
			*uParam1 = 33;
			break;
		
		case 18:
			*uParam1 = 34;
			break;
		
		case 19:
			*uParam1 = 143;
			break;
		
		case 20:
			*uParam1 = 35;
			break;
		
		case 21:
			*uParam1 = 137;
			break;
		
		case 22:
			*uParam1 = 136;
			break;
		
		case 23:
			*uParam1 = 36;
			break;
		
		case 24:
			*uParam1 = 38;
			break;
		
		case 25:
			*uParam1 = 138;
			break;
		
		case 26:
			*uParam1 = 90;
			break;
		
		case 27:
			*uParam1 = 88;
			break;
		
		case 28:
			*uParam1 = 89;
			break;
		
		case 29:
			*uParam1 = 91;
			break;
		
		case 30:
			*uParam1 = 49;
			break;
		
		case 31:
			*uParam1 = 50;
			break;
		
		case 32:
			*uParam1 = 51;
			break;
		
		case 33:
			*uParam1 = 52;
			break;
		
		case 34:
			*uParam1 = 53;
			break;
		
		case 35:
			*uParam1 = 54;
			break;
		
		case 36:
			*uParam1 = 92;
			break;
		
		case 37:
			*uParam1 = 141;
			break;
		
		case 38:
			*uParam1 = 61;
			break;
		
		case 39:
			*uParam1 = 62;
			break;
		
		case 40:
			*uParam1 = 63;
			break;
		
		case 41:
			*uParam1 = 65;
			break;
		
		case 42:
			*uParam1 = 66;
			break;
		
		case 43:
			*uParam1 = 67;
			break;
		
		case 44:
			*uParam1 = 68;
			break;
		
		case 45:
			*uParam1 = 69;
			break;
		
		case 46:
			*uParam1 = 73;
			break;
		
		case 47:
			*uParam1 = 70;
			break;
		
		case 48:
			*uParam1 = 74;
			break;
		
		case 49:
			*uParam1 = 96;
			break;
		
		case 50:
			*uParam1 = 101;
			break;
		
		case 51:
			*uParam1 = 95;
			break;
		
		case 52:
			*uParam1 = 94;
			break;
		
		case 53:
			*uParam1 = 97;
			break;
		
		case 54:
			*uParam1 = 103;
			break;
		
		case 55:
			*uParam1 = 104;
			break;
		
		case 56:
			*uParam1 = 98;
			break;
		
		case 57:
			*uParam1 = 100;
			break;
		
		case 58:
			*uParam1 = 102;
			break;
		
		case 59:
			*uParam1 = 99;
			break;
		
		case 60:
			*uParam1 = 105;
			break;
		
		case 61:
			*uParam1 = 106;
			break;
		
		case 62:
			*uParam1 = 72;
			break;
		
		case 63:
			*uParam1 = 146;
			break;
		
		case 64:
			*uParam1 = 145;
			break;
		
		case 65:
			*uParam1 = 107;
			break;
		
		case 66:
			*uParam1 = 111;
			break;
		
		case 67:
			*uParam1 = 112;
			break;
	}
	return *uParam1 != -1;
}

int func_285(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_286(int iParam0)
{
	switch (iParam0)
	{
		case joaat("windsor"):
			return 1;
			break;
	}
	return -1;
}

int func_287(int iParam0, int iParam1, int iParam2)
{
	if ((iParam0 == 222 && iParam1 == 222) && iParam2 == 255)
	{
		return 0;
	}
	if ((iParam0 == 2 && iParam1 == 21) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 3 && iParam1 == 83) && iParam2 == 255)
	{
		return 2;
	}
	if ((iParam0 == 0 && iParam1 == 255) && iParam2 == 140)
	{
		return 3;
	}
	if ((iParam0 == 94 && iParam1 == 255) && iParam2 == 1)
	{
		return 4;
	}
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 0)
	{
		return 5;
	}
	if ((iParam0 == 255 && iParam1 == 150) && iParam2 == 5)
	{
		return 6;
	}
	if ((iParam0 == 255 && iParam1 == 62) && iParam2 == 0)
	{
		return 7;
	}
	if ((iParam0 == 255 && iParam1 == 1) && iParam2 == 1)
	{
		return 8;
	}
	if ((iParam0 == 255 && iParam1 == 50) && iParam2 == 100)
	{
		return 9;
	}
	if ((iParam0 == 255 && iParam1 == 5) && iParam2 == 190)
	{
		return 10;
	}
	if ((iParam0 == 35 && iParam1 == 1) && iParam2 == 255)
	{
		return 11;
	}
	if ((iParam0 == 15 && iParam1 == 3) && iParam2 == 255)
	{
		return 12;
	}
	if ((NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_288()) && Global_1314010)
	{
		if ((iParam0 == Global_1314011 && iParam1 == Global_1314012) && iParam2 == Global_1314013)
		{
			return 13;
		}
	}
	return 0;
}

int func_288()
{
	struct<13> Var0;
	
	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if ((NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN()) && NETWORK::_0x67A5589628E0CFF6())
		{
			Var0 = { func_289() };
			if (NETWORK::_NETWORK_PLAYER_IS_IN_CLAN() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
			{
				return 1;
			}
		}
	}
	return 0;
}

struct<13> func_289()
{
	struct<13> Var0;
	
	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0, 13);
	return Var0;
}

int func_290(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == 0 && !bParam6)
	{
		StringConCat(&cVar1, "255", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_291(bool bParam0, bool bParam1, bool bParam2)
{
	if ((bParam2 && bParam1) && bParam0)
	{
		return 7;
	}
	else if ((bParam2 && bParam1) && !bParam0)
	{
		return 6;
	}
	else if ((!bParam2 && bParam1) && bParam0)
	{
		return 5;
	}
	else if ((bParam2 && !bParam1) && bParam0)
	{
		return 4;
	}
	else if ((!bParam2 && bParam1) && !bParam0)
	{
		return 3;
	}
	else if ((bParam2 && !bParam1) && !bParam0)
	{
		return 2;
	}
	else if ((!bParam2 && !bParam1) && bParam0)
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam3 == -1)
	{
		StringConCat(&cVar1, "PAT", 64);
	}
	else
	{
		StringIntConCat(&cVar1, iParam3, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_293(int iParam0)
{
	switch (iParam0)
	{
		case joaat("buzzard"):
		case joaat("savage"):
		case joaat("valkyrie"):
		case joaat("hydra"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("havok"):
		case joaat("hunter"):
		case joaat("volatus"):
		case joaat("supervolito"):
		case joaat("supervolito2"):
		case joaat("swift"):
		case joaat("swift2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("annihilator"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("microlight"):
		case joaat("tula"):
		case joaat("lazer"):
		case joaat("pyro"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("howard"):
		case joaat("bombushka"):
		case joaat("alphaz1"):
		case joaat("nimbus"):
		case joaat("luxor2"):
		case joaat("velum2"):
		case joaat("dodo"):
		case joaat("miljet"):
		case joaat("besra"):
		case joaat("vestra"):
		case joaat("duster"):
		case joaat("shamal"):
		case joaat("cuban800"):
		case joaat("luxor"):
		case joaat("stunt"):
		case joaat("mammatus"):
		case joaat("titan"):
		case joaat("velum"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
		
		default:
	}
	return 0;
}

int func_294(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if ((iParam0 == 255 && iParam1 == 255) && iParam2 == 255)
	{
		return 1;
	}
	if ((iParam0 == 0 && iParam1 == 0) && iParam2 == 0)
	{
		return 11;
	}
	if ((iParam0 == 255 && iParam1 == 127) && iParam2 == 0)
	{
		return 6;
	}
	if ((iParam0 == 252 && iParam1 == 238) && iParam2 == 0)
	{
		return 4;
	}
	if ((iParam0 == 0 && iParam1 == 174) && iParam2 == 239)
	{
		return 3;
	}
	if ((iParam0 == 226 && iParam1 == 6) && iParam2 == 6)
	{
		return 8;
	}
	if ((iParam0 == 20 && iParam1 == 20) && iParam2 == 20)
	{
		return 2;
	}
	if ((iParam0 == Global_1314011 && iParam1 == Global_1314012) && iParam2 == Global_1314013)
	{
		return 12;
	}
	if ((iParam0 == 1 && iParam1 == 1) && iParam2 == 1)
	{
		return 0;
	}
	if (func_296())
	{
		HUD::GET_HUD_COLOUR(21, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 5;
		}
		HUD::GET_HUD_COLOUR(18, &iVar0, &iVar1, &iVar2, &uVar3);
		if ((iParam0 == iVar0 && iParam1 == iVar1) && iParam2 == iVar2)
		{
			return 7;
		}
		if (((iParam0 == 114 && iParam1 == 204) && iParam2 == 114) || ((iParam0 == 102 && iParam1 == 152) && iParam2 == 104))
		{
			return 7;
		}
	}
	if (func_295())
	{
		HUD::GET_HUD_COLOUR(24, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 9;
		}
		HUD::GET_HUD_COLOUR(107, &iVar4, &iVar5, &iVar6, &uVar7);
		if ((iParam0 == iVar4 && iParam1 == iVar5) && iParam2 == iVar6)
		{
			return 10;
		}
	}
	return 1;
}

bool func_295()
{
	return DLC::IS_DLC_PRESENT(1785846048);
}

bool func_296()
{
	return DLC::IS_DLC_PRESENT(42019760);
}

int func_297(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 156:
			iVar0 = 0;
			break;
		
		case 0:
			iVar0 = 1;
			break;
		
		case 1:
			iVar0 = 2;
			break;
		
		case 11:
			iVar0 = 3;
			break;
		
		case 2:
			iVar0 = 4;
			break;
		
		case 8:
			iVar0 = 5;
			break;
		
		case 122:
			iVar0 = 6;
			break;
		
		case 27:
			iVar0 = 7;
			break;
		
		case 30:
			iVar0 = 8;
			break;
		
		case 45:
			iVar0 = 9;
			break;
		
		case 35:
			iVar0 = 10;
			break;
		
		case 33:
			iVar0 = 11;
			break;
		
		case 136:
			iVar0 = 12;
			break;
		
		case 135:
			iVar0 = 13;
			break;
		
		case 36:
			iVar0 = 14;
			break;
		
		case 41:
			iVar0 = 15;
			break;
		
		case 138:
			iVar0 = 16;
			break;
		
		case 37:
			iVar0 = 17;
			break;
		
		case 99:
			iVar0 = 18;
			break;
		
		case 90:
			iVar0 = 19;
			break;
		
		case 95:
			iVar0 = 20;
			break;
		
		case 115:
			iVar0 = 21;
			break;
		
		case 109:
			iVar0 = 22;
			break;
		
		case 153:
			iVar0 = 23;
			break;
		
		case 154:
			iVar0 = 24;
			break;
		
		case 88:
			iVar0 = 25;
			break;
		
		case 89:
			iVar0 = 26;
			break;
		
		case 91:
			iVar0 = 27;
			break;
		
		case 55:
			iVar0 = 28;
			break;
		
		case 125:
			iVar0 = 29;
			break;
		
		case 53:
			iVar0 = 30;
			break;
		
		case 56:
			iVar0 = 31;
			break;
		
		case 151:
			iVar0 = 32;
			break;
		
		case 82:
			iVar0 = 33;
			break;
		
		case 64:
			iVar0 = 34;
			break;
		
		case 87:
			iVar0 = 35;
			break;
		
		case 70:
			iVar0 = 36;
			break;
		
		case 140:
			iVar0 = 37;
			break;
		
		case 81:
			iVar0 = 38;
			break;
		
		case 145:
			iVar0 = 39;
			break;
		
		case 142:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_298(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	iVar1 = func_299(VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam2));
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar1))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, iVar1, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_299(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case -1:
			StringConCat(&cVar0, "MWT_INVALID", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "MWT_SPORT", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MWT_MUSCLE", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MWT_LOWRIDER", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MWT_SUV", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MWT_OFFROAD", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MWT_TUNER", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MWT_BIKE", 32);
			break;
		
		case 7:
			StringConCat(&cVar0, "MWT_HIEND", 32);
			break;
		
		case 8:
			StringConCat(&cVar0, "MWT_SUPERMOD1", 32);
			break;
		
		case 9:
			StringConCat(&cVar0, "MWT_SUPERMOD2", 32);
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_300(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	iVar2 = VEHICLE::GET_VEHICLE_MOD(iParam2, iParam3);
	if (iVar2 == -1 || (iParam3 == 24 && !VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2))))
	{
		if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iParam2)))
		{
			StringConCat(&cVar1, "CMOD_WHE_B_0", 64);
		}
		else
		{
			StringConCat(&cVar1, "CMOD_WHE_0", 64);
		}
	}
	else
	{
		StringConCat(&cVar1, VEHICLE::GET_MOD_TEXT_LABEL(iParam2, iParam3, iVar2), 64);
	}
	StringConCat(&cVar1, "_t19_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_301(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, "VEM_", 64);
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam3, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

char* func_302(var uParam0)
{
	char* sVar0;
	int iVar1;
	
	sVar0 = "";
	iVar1 = uParam0;
	switch (iVar1)
	{
		case 0:
			sVar0 = "CMOD_HRN_0";
			break;
		
		case 1:
			sVar0 = "HORN_INDI_1";
			break;
		
		case 2:
			sVar0 = "HORN_INDI_2";
			break;
		
		case 3:
			sVar0 = "HORN_INDI_3";
			break;
		
		case 4:
			sVar0 = "HORN_INDI_4";
			break;
		
		case 5:
			sVar0 = "HORN_HIPS1";
			break;
		
		case 6:
			sVar0 = "HORN_HIPS2";
			break;
		
		case 7:
			sVar0 = "HORN_HIPS3";
			break;
		
		case 8:
			sVar0 = "HORN_HIPS4";
			break;
		
		case 9:
			sVar0 = "HORN_CNOTE_C0";
			break;
		
		case 10:
			sVar0 = "HORN_CNOTE_D0";
			break;
		
		case 11:
			sVar0 = "HORN_CNOTE_E0";
			break;
		
		case 12:
			sVar0 = "HORN_CNOTE_F0";
			break;
		
		case 13:
			sVar0 = "HORN_CNOTE_G0";
			break;
		
		case 14:
			sVar0 = "HORN_CNOTE_A0";
			break;
		
		case 15:
			sVar0 = "HORN_CNOTE_B0";
			break;
		
		case 16:
			sVar0 = "HORN_CNOTE_C1";
			break;
		
		case 17:
			sVar0 = "HORN_CLAS1";
			break;
		
		case 18:
			sVar0 = "HORN_CLAS2";
			break;
		
		case 19:
			sVar0 = "HORN_CLAS3";
			break;
		
		case 20:
			sVar0 = "HORN_CLAS4";
			break;
		
		case 21:
			sVar0 = "HORN_CLAS5";
			break;
		
		case 22:
			sVar0 = "HORN_CLAS6";
			break;
		
		case 23:
			sVar0 = "HORN_CLAS7";
			break;
		
		case 24:
			sVar0 = "HORN_LUXE1";
			break;
		
		case 25:
			sVar0 = "HORN_LUXE2";
			break;
		
		case 26:
			sVar0 = "HORN_LUXE3";
			break;
		
		case 30:
			sVar0 = "HORN_LOWRDER1";
			break;
		
		case 31:
			sVar0 = "HORN_LOWRDER2";
			break;
		
		case 34:
			sVar0 = "HORN_HWEEN1";
			break;
		
		case 35:
			sVar0 = "HORN_HWEEN2";
			break;
		
		case 38:
			sVar0 = "HORN_XM15_1";
			break;
		
		case 39:
			sVar0 = "HORN_XM15_2";
			break;
		
		case 40:
			sVar0 = "HORN_XM15_3";
			break;
		
		case 46:
			sVar0 = "CMOD_HRN_CLO";
			break;
		
		case 45:
			sVar0 = "CMOD_HRN_COP";
			break;
		
		case 44:
			sVar0 = "CMOD_HRN_TRK";
			break;
		
		case 47:
			sVar0 = "CMOD_HRN_MUS1";
			break;
		
		case 48:
			sVar0 = "CMOD_HRN_MUS2";
			break;
		
		case 49:
			sVar0 = "CMOD_HRN_MUS3";
			break;
		
		case 50:
			sVar0 = "CMOD_HRN_MUS4";
			break;
		
		case 51:
			sVar0 = "CMOD_HRN_MUS5";
			break;
		
		case 52:
			sVar0 = "CMOD_HRN_SAD";
			break;
	}
	return sVar0;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case -722822506:
			return 1;
			break;
		
		case -493570582:
			return 2;
			break;
		
		case -1451310145:
			return 3;
			break;
		
		case -953155807:
			return 4;
			break;
		
		case 444549672:
			return 5;
			break;
		
		case 1603064898:
			return 6;
			break;
		
		case 240366033:
			return 7;
			break;
		
		case 960137118:
			return 8;
			break;
		
		case 771284519:
			return 9;
			break;
		
		case -1708346067:
			return 10;
			break;
		
		case 283386134:
			return 11;
			break;
		
		case -410464896:
			return 12;
			break;
		
		case 265723083:
			return 13;
			break;
		
		case 1746883687:
			return 14;
			break;
		
		case 1919870950:
			return 15;
			break;
		
		case 1085277077:
			return 16;
			break;
		
		case -666433007:
			return 17;
			break;
		
		case -402413174:
			return 18;
			break;
		
		case -182074418:
			return 19;
			break;
		
		case 116877169:
			return 20;
			break;
		
		case -1609983577:
			return 21;
			break;
		
		case -1312277212:
			return 22;
			break;
		
		case -1091676304:
			return 23;
			break;
		
		case -1394589232:
			return 24;
			break;
		
		case -1095309955:
			return 25;
			break;
		
		case -338772048:
			return 26;
			break;
		
		case 2099578296:
			return 27;
			break;
		
		case 676333254:
			return 28;
			break;
		
		case 1373384483:
			return 29;
			break;
		
		case 310529291:
			return 30;
			break;
		
		case 55291550:
			return 31;
			break;
		
		case -1329398309:
			return 32;
			break;
		
		case 965054819:
			return 33;
			break;
		
		case -1378191490:
			return 34;
			break;
		
		case -1683107035:
			return 35;
			break;
		
		case -580260344:
			return 36;
			break;
		
		case -1088196937:
			return 37;
			break;
		
		case 55862314:
			return 38;
			break;
		
		case 400002352:
			return 39;
			break;
		
		case 560832604:
			return 40;
			break;
		
		case -2138224118:
			return 41;
			break;
		
		case 897484282:
			return 42;
			break;
		
		case 314232747:
			return 43;
			break;
		
		case 1307678422:
			return 46;
			break;
		
		case -208525380:
			return 45;
			break;
		
		case 1646559452:
			return 44;
			break;
		
		case 50707886:
			return 47;
			break;
		
		case 273438779:
			return 48;
			break;
		
		case 1592391033:
			return 49;
			break;
		
		case -319516276:
			return 50;
			break;
		
		case 993865248:
			return 51;
			break;
		
		case 632950117:
			return 52;
			break;
	}
	return 0;
}

int func_304(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_305(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	if (iParam8 != 23)
	{
		if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam7, iParam8) == 0)
		{
			if ((iParam8 >= 0 && iParam8 < 64) && !MISC::IS_BIT_SET(Global_4265722[(iParam8 / 32)], (iParam8 % 32)))
			{
				return 1;
			}
		}
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringCopy(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_", 64);
	if (iParam4 == 33)
	{
		if (iParam3 < 0 || iParam3 > 3)
		{
			iParam3 = 0;
		}
	}
	StringIntConCat(&cVar1, iParam3, 64);
	if (iParam6 != -1)
	{
		StringConCat(&cVar1, "_n", 64);
		StringIntConCat(&cVar1, iParam6, 64);
	}
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_306(int iParam0)
{
	int iVar0;
	
	iVar0 = -1;
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("revolter"):
		case joaat("savestra"):
		case joaat("comet4"):
		case joaat("viseris"):
			iVar0 = 1;
			break;
		
		case joaat("avenger"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_307(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction3"):
			return 12;
			break;
		
		case joaat("diablous"):
			return 4;
			break;
		
		case joaat("fcr"):
			return 4;
			break;
	}
	return func_319(iParam0);
}

int func_308(int iParam0)
{
	switch (iParam0)
	{
		case joaat("btype2"):
			return 9;
			break;
		
		case joaat("lurcher"):
			return 8;
			break;
		
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
		
		case joaat("btype3"):
			return 5;
			break;
		
		case joaat("omnis"):
			return 13;
			break;
		
		case joaat("bf400"):
			return 14;
			break;
		
		case joaat("tropos"):
			return 15;
			break;
		
		case joaat("brioso"):
			return 16;
			break;
		
		case joaat("trophytruck"):
			return 17;
			break;
		
		case joaat("trophytruck2"):
			return 18;
			break;
		
		case joaat("cliffhanger"):
			return 19;
			break;
		
		case joaat("tampa2"):
			return 20;
			break;
		
		case joaat("gargoyle"):
			return 21;
			break;
		
		case joaat("le7b"):
			return 22;
			break;
		
		case joaat("lynx"):
			return 24;
			break;
		
		case joaat("sheava"):
			return 25;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
	}
	if (func_310(iParam0))
	{
		return 33;
	}
	else if (func_309(iParam0))
	{
		return 34;
	}
	return 3;
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hunter"):
		case joaat("bombushka"):
		case joaat("volatol"):
		case joaat("akula"):
		case joaat("khanjali"):
			return 1;
			break;
	}
	return 0;
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case joaat("havok"):
		case joaat("microlight"):
		case joaat("mogul"):
		case joaat("rogue"):
		case joaat("seabreeze"):
		case joaat("tula"):
		case joaat("pyro"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("starling"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("cuban800"):
		case joaat("avenger"):
		case joaat("thruster"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("volatol"):
		case joaat("seasparrow"):
			return 1;
			break;
	}
	return 0;
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 3;
			break;
		
		case joaat("sabregt2"):
			return 3;
			break;
		
		case joaat("slamvan3"):
			return 3;
			break;
		
		case joaat("tornado5"):
			return 3;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
	}
	return 3;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case joaat("virgo2"):
			return 10;
			break;
		
		case joaat("slamvan3"):
			return 11;
			break;
	}
	switch (iParam0)
	{
		case joaat("sultanrs"):
			return 6;
			break;
		
		case joaat("banshee2"):
			return 7;
			break;
	}
	switch (iParam0)
	{
		case joaat("btype3"):
			return 5;
			break;
	}
	switch (iParam0)
	{
		case joaat("faction3"):
			return 3;
			break;
		
		case joaat("minivan2"):
			return 0;
			break;
		
		case joaat("sabregt2"):
			return 0;
			break;
		
		case joaat("slamvan3"):
			return 0;
			break;
		
		case joaat("tornado5"):
			return 0;
			break;
		
		case joaat("virgo2"):
			return 3;
			break;
		
		case joaat("virgo3"):
			return 3;
			break;
	}
	switch (iParam0)
	{
		case joaat("fcr"):
			return 0;
			break;
		
		case joaat("diablous"):
			return 0;
			break;
		
		case joaat("diablous2"):
			return 28;
			break;
		
		case joaat("fcr2"):
			return 28;
			break;
		
		case joaat("italigtb"):
			return 3;
			break;
		
		case joaat("specter"):
			return 3;
			break;
		
		case joaat("nero"):
			return 3;
			break;
		
		case joaat("italigtb2"):
			return 27;
			break;
		
		case joaat("specter2"):
			return 27;
			break;
		
		case joaat("nero2"):
			return 27;
			break;
		
		case joaat("comet3"):
			return 26;
			break;
		
		case joaat("elegy"):
			return 26;
			break;
	}
	switch (iParam0)
	{
		case joaat("apc"):
			return 29;
			break;
		
		case joaat("halftrack"):
			return 29;
			break;
		
		case joaat("trailersmall2"):
			return 29;
			break;
		
		case joaat("deluxo"):
			return 29;
			break;
		
		case joaat("stromberg"):
			return 29;
			break;
		
		case joaat("caracara"):
			return 29;
			break;
		
		case joaat("dune3"):
			return 30;
			break;
		
		case joaat("insurgent3"):
			return 30;
			break;
		
		case joaat("tampa3"):
			return 30;
			break;
		
		case joaat("technical3"):
			return 30;
			break;
		
		case joaat("oppressor"):
			return 31;
			break;
		
		case joaat("phantom3"):
			return 32;
			break;
		
		case joaat("hauler2"):
			return 32;
			break;
		
		case joaat("trailerlarge"):
			return 32;
			break;
		
		case joaat("barrage"):
			return 35;
			break;
	}
	if (func_310(iParam0))
	{
		return 33;
	}
	else if (func_309(iParam0))
	{
		return 34;
	}
	switch (iParam0)
	{
		case joaat("vigilante"):
			return 31;
			break;
	}
	if (func_313(iParam0))
	{
		return 3;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BIKE(iParam0))
	{
		return 4;
	}
	switch (iParam0)
	{
		case joaat("adder"):
			return 3;
			break;
		
		case joaat("airbus"):
			return 0;
			break;
		
		case joaat("akuma"):
			return 4;
			break;
		
		case joaat("alpha"):
			return 3;
			break;
		
		case joaat("annihilator"):
			return 0;
			break;
		
		case joaat("asea"):
			return 0;
			break;
		
		case joaat("asterope"):
			return 0;
			break;
		
		case joaat("baller2"):
			return 2;
			break;
		
		case joaat("banshee"):
			return 3;
			break;
		
		case joaat("barracks"):
			return 0;
			break;
		
		case joaat("bati"):
			return 4;
			break;
		
		case joaat("bati2"):
			return 4;
			break;
		
		case joaat("besra"):
			return 0;
			break;
		
		case joaat("bfinjection"):
			return 0;
			break;
		
		case joaat("bifta"):
			return 0;
			break;
		
		case joaat("bison"):
			return 2;
			break;
		
		case joaat("blade"):
			return 3;
			break;
		
		case joaat("blazer"):
			return 0;
			break;
		
		case joaat("blazer3"):
			return 0;
			break;
		
		case joaat("bmx"):
			return 0;
			break;
		
		case joaat("bobcatxl"):
			return 2;
			break;
		
		case joaat("bodhi2"):
			return 0;
			break;
		
		case joaat("btype"):
			return 0;
			break;
		
		case joaat("buffalo"):
			return 0;
			break;
		
		case joaat("buffalo2"):
			return 1;
			break;
		
		case joaat("bullet"):
			return 3;
			break;
		
		case joaat("bus"):
			return 0;
			break;
		
		case joaat("buzzard"):
			return 0;
			break;
		
		case joaat("carbonizzare"):
			return 3;
			break;
		
		case joaat("carbonrs"):
			return 3;
			break;
		
		case joaat("cavalcade"):
			return 2;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("cheetah"):
			return 3;
			break;
		
		case joaat("coach"):
			return 0;
			break;
		
		case joaat("cogcabrio"):
			return 3;
			break;
		
		case joaat("comet2"):
			return 3;
			break;
		
		case joaat("coquette"):
			return 3;
			break;
		
		case joaat("coquette2"):
			return 1;
			break;
		
		case joaat("cruiser"):
			return 0;
			break;
		
		case joaat("crusader"):
			return 0;
			break;
		
		case joaat("cuban800"):
			return 0;
			break;
		
		case joaat("dilettante"):
			return 0;
			break;
		
		case joaat("dilettante2"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("double"):
			return 4;
			break;
		
		case joaat("dubsta3"):
			return 3;
			break;
		
		case joaat("dump"):
			return 0;
			break;
		
		case joaat("dune"):
			return 0;
			break;
		
		case joaat("duster"):
			return 0;
			break;
		
		case joaat("elegy2"):
			return 3;
			break;
		
		case joaat("entityxf"):
			return 3;
			break;
		
		case joaat("exemplar"):
			return 3;
			break;
		
		case joaat("f620"):
			return 1;
			break;
		
		case joaat("faggio2"):
			return 4;
			break;
		
		case joaat("felon"):
			return 0;
			break;
		
		case joaat("felon2"):
			return 0;
			break;
		
		case joaat("feltzer2"):
			return 3;
			break;
		
		case joaat("frogger"):
			return 0;
			break;
		
		case joaat("frogger2"):
			return 0;
			break;
		
		case joaat("fugitive"):
			return 0;
			break;
		
		case joaat("fusilade"):
			return 1;
			break;
		
		case joaat("gauntlet"):
			return 0;
			break;
		
		case joaat("gauntlet2"):
			return 0;
			break;
		
		case joaat("glendale"):
			return 3;
			break;
		
		case joaat("granger"):
			return 2;
			break;
		
		case joaat("gresley"):
			return 2;
			break;
		
		case joaat("hexer"):
			return 4;
			break;
		
		case joaat("hotknife"):
			return 3;
			break;
		
		case joaat("huntley"):
			return 1;
			break;
		
		case joaat("hydra"):
			return 0;
			break;
		
		case joaat("infernus"):
			return 3;
			break;
		
		case joaat("ingot"):
			return 0;
			break;
		
		case joaat("intruder"):
			return 0;
			break;
		
		case joaat("issi2"):
			return 0;
			break;
		
		case joaat("jackal"):
			return 1;
			break;
		
		case joaat("jb700"):
			return 3;
			break;
		
		case joaat("jester"):
			return 3;
			break;
		
		case joaat("jester2"):
			return 3;
			break;
		
		case joaat("jetmax"):
			return 0;
			break;
		
		case joaat("journey"):
			return 0;
			break;
		
		case joaat("kalahari"):
			return 0;
			break;
		
		case joaat("khamelion"):
			return 3;
			break;
		
		case joaat("landstalker"):
			return 2;
			break;
		
		case joaat("luxor"):
			return 0;
			break;
		
		case joaat("mammatus"):
			return 0;
			break;
		
		case joaat("marquis"):
			return 0;
			break;
		
		case joaat("massacro"):
			return 3;
			break;
		
		case joaat("massacro2"):
			return 3;
			break;
		
		case joaat("maverick"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
		
		case joaat("mesa2"):
			return 2;
			break;
		
		case joaat("mesa3"):
			return 2;
			break;
		
		case joaat("miljet"):
			return 0;
			break;
		
		case joaat("minivan"):
			return 0;
			break;
		
		case joaat("monroe"):
			return 3;
			break;
		
		case joaat("monster"):
			return 0;
			break;
		
		case joaat("mule"):
			return 0;
			break;
		
		case joaat("mule2"):
			return 0;
			break;
		
		case joaat("mule3"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("nemesis"):
			return 4;
			break;
		
		case joaat("ninef"):
			return 3;
			break;
		
		case joaat("ninef2"):
			return 3;
			break;
		
		case joaat("oracle"):
			return 1;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("panto"):
			return 3;
			break;
		
		case joaat("paradise"):
			return 0;
			break;
		
		case joaat("pcj"):
			return 4;
			break;
		
		case joaat("penumbra"):
			return 1;
			break;
		
		case joaat("picador"):
			return 0;
			break;
		
		case joaat("pigalle"):
			return 3;
			break;
		
		case joaat("premier"):
			return 0;
			break;
		
		case joaat("primo"):
			return 0;
			break;
		
		case joaat("radi"):
			return 0;
			break;
		
		case joaat("rancherxl"):
			return 2;
			break;
		
		case joaat("rancherxl2"):
			return 2;
			break;
		
		case joaat("rapidgt"):
			return 3;
			break;
		
		case joaat("ratloader"):
			return 2;
			break;
		
		case joaat("ratloader2"):
			return 2;
			break;
		
		case joaat("rebel"):
			return 2;
			break;
		
		case joaat("rebel2"):
			return 2;
			break;
		
		case joaat("regina"):
			return 0;
			break;
		
		case joaat("rentalbus"):
			return 0;
			break;
		
		case joaat("rhapsody"):
			return 3;
			break;
		
		case joaat("rhino"):
			return 0;
			break;
		
		case joaat("rocoto"):
			return 2;
			break;
		
		case joaat("ruffian"):
			return 4;
			break;
		
		case joaat("rumpo"):
			return 0;
			break;
		
		case joaat("sadler"):
			return 2;
			break;
		
		case joaat("sanchez"):
			return 4;
			break;
		
		case joaat("sanchez2"):
			return 4;
			break;
		
		case joaat("sandking"):
			return 2;
			break;
		
		case joaat("sandking2"):
			return 2;
			break;
		
		case joaat("schafter2"):
			return 1;
			break;
		
		case joaat("schwarzer"):
			return 1;
			break;
		
		case joaat("scorcher"):
			return 0;
			break;
		
		case joaat("seashark"):
			return 0;
			break;
		
		case joaat("seminole"):
			return 2;
			break;
		
		case joaat("sentinel"):
			return 1;
			break;
		
		case joaat("sentinel2"):
			return 1;
			break;
		
		case joaat("shamal"):
			return 0;
			break;
		
		case joaat("sovereign"):
			return 4;
			break;
		
		case joaat("speeder"):
			return 0;
			break;
		
		case joaat("squalo"):
			return 0;
			break;
		
		case joaat("stanier"):
			return 0;
			break;
		
		case joaat("stinger"):
			return 3;
			break;
		
		case joaat("stingergt"):
			return 3;
			break;
		
		case joaat("stratum"):
			return 0;
			break;
		
		case joaat("stretch"):
			return 0;
			break;
		
		case joaat("stunt"):
			return 0;
			break;
		
		case joaat("suntrap"):
			return 0;
			break;
		
		case joaat("superd"):
			return 3;
			break;
		
		case joaat("surano"):
			return 3;
			break;
		
		case joaat("surfer"):
			return 0;
			break;
		
		case joaat("surge"):
			return 0;
			break;
		
		case joaat("tailgater"):
			return 0;
			break;
		
		case joaat("thrust"):
			return 4;
			break;
		
		case joaat("titan"):
			return 0;
			break;
		
		case joaat("tribike"):
			return 4;
			break;
		
		case joaat("tribike2"):
			return 4;
			break;
		
		case joaat("tribike3"):
			return 4;
			break;
		
		case joaat("tropic"):
			return 0;
			break;
		
		case joaat("turismor"):
			return 3;
			break;
		
		case joaat("vacca"):
			return 3;
			break;
		
		case joaat("vader"):
			return 4;
			break;
		
		case joaat("valkyrie"):
			return 0;
			break;
		
		case joaat("velum"):
			return 0;
			break;
		
		case joaat("vestra"):
			return 0;
			break;
		
		case joaat("vigero"):
			return 1;
			break;
		
		case joaat("voltic"):
			return 3;
			break;
		
		case joaat("warrener"):
			return 3;
			break;
		
		case joaat("washington"):
			return 0;
			break;
		
		case joaat("youga"):
			return 2;
			break;
		
		case joaat("zentorno"):
			return 3;
			break;
		
		case joaat("zion"):
			return 1;
			break;
		
		case joaat("zion2"):
			return 1;
			break;
		
		case joaat("ztype"):
			return 3;
			break;
		
		case joaat("swift"):
			return 0;
			break;
		
		case joaat("innovation"):
			return 4;
			break;
		
		case joaat("hakuchou"):
			return 4;
			break;
		
		case joaat("furoregt"):
			return 0;
			break;
		
		case joaat("kuruma"):
			return 3;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("blista3"):
			return 0;
			break;
		
		case joaat("buffalo3"):
			return 1;
			break;
		
		case joaat("dodo"):
			return 0;
			break;
		
		case joaat("dominator"):
			return 1;
			break;
		
		case joaat("dominator2"):
			return 1;
			break;
		
		case joaat("dukes"):
			return 1;
			break;
		
		case joaat("dukes2"):
			return 0;
			break;
		
		case joaat("marshall"):
			return 0;
			break;
		
		case joaat("stalion"):
			return 0;
			break;
		
		case joaat("stalion2"):
			return 0;
			break;
		
		case joaat("submersible"):
			return 0;
			break;
		
		case joaat("submersible2"):
			return 0;
			break;
	}
	switch (iParam0)
	{
		case joaat("bagger"):
			return 4;
			break;
		
		case joaat("baller"):
			return 2;
			break;
		
		case joaat("bjxl"):
			return 2;
			break;
		
		case joaat("blista"):
			return 0;
			break;
		
		case joaat("blista2"):
			return 0;
			break;
		
		case joaat("buccaneer"):
			return 0;
			break;
		
		case joaat("daemon"):
			return 4;
			break;
		
		case joaat("dloader"):
			return 0;
			break;
		
		case joaat("fq2"):
			return 0;
			break;
		
		case joaat("habanero"):
			return 0;
			break;
		
		case joaat("manana"):
			return 0;
			break;
		
		case joaat("patriot"):
			return 2;
			break;
		
		case joaat("peyote"):
			return 0;
			break;
		
		case joaat("phoenix"):
			return 0;
			break;
		
		case joaat("prairie"):
			return 0;
			break;
		
		case joaat("sabregt"):
			return 0;
			break;
		
		case joaat("serrano"):
			return 2;
			break;
		
		case joaat("speedo"):
			return 0;
			break;
		
		case joaat("speedo2"):
			return 0;
			break;
		
		case joaat("voodoo2"):
			return 0;
			break;
		
		case joaat("romero"):
			return 0;
			break;
		
		case joaat("surfer2"):
			return 0;
			break;
		
		case joaat("emperor2"):
			return 0;
			break;
		
		case joaat("dubsta2"):
			return 2;
			break;
		
		case joaat("blazer2"):
			return 0;
			break;
		
		case joaat("oracle2"):
			return 1;
			break;
		
		case joaat("cavalcade2"):
			return 2;
			break;
		
		case joaat("dubsta"):
			return 2;
			break;
		
		case joaat("rapidgt2"):
			return 1;
			break;
		
		case joaat("boxville4"):
			return 0;
			break;
		
		case joaat("mesa"):
			return 2;
			break;
	}
	switch (iParam0)
	{
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 3;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("moonbeam"):
			return 3;
			break;
		
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
			return 0;
			break;
		
		case joaat("btype2"):
		case joaat("lurcher"):
			return 3;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
		case joaat("ardent"):
		case joaat("cheetah2"):
		case joaat("torero"):
		case joaat("vagner"):
		case joaat("xa21"):
			return 3;
			break;
		
		case joaat("contender"):
			return 2;
			break;
		
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("sentinel3"):
		case joaat("riata"):
			return 3;
			break;
		
		case joaat("gb200"):
		case joaat("issi3"):
			return 3;
			break;
	}
	return 0;
}

int func_313(int iParam0)
{
	switch (iParam0)
	{
		case joaat("adder"):
		case joaat("banshee"):
		case joaat("bullet"):
		case joaat("carbonizzare"):
		case joaat("carbonrs"):
		case joaat("cheetah"):
		case joaat("cogcabrio"):
		case joaat("comet2"):
		case joaat("coquette"):
		case joaat("elegy2"):
		case joaat("entityxf"):
		case joaat("exemplar"):
		case joaat("feltzer2"):
		case joaat("hotknife"):
		case joaat("infernus"):
		case joaat("jb700"):
		case joaat("khamelion"):
		case joaat("monroe"):
		case joaat("ninef"):
		case joaat("ninef2"):
		case joaat("rapidgt"):
		case joaat("rapidgt2"):
		case joaat("stinger"):
		case joaat("stingergt"):
		case joaat("superd"):
		case joaat("surano"):
		case joaat("vacca"):
		case joaat("voltic"):
		case joaat("ztype"):
		case joaat("dubsta3"):
		case joaat("blade"):
		case joaat("glendale"):
		case joaat("rhapsody"):
		case joaat("warrener"):
		case joaat("panto"):
		case joaat("pigalle"):
		case joaat("casco"):
		case joaat("kuruma2"):
		case joaat("lectro"):
		case joaat("insurgent"):
		case joaat("insurgent2"):
		case joaat("technical"):
			return 1;
			break;
		
		case joaat("windsor"):
		case joaat("osiris"):
		case joaat("feltzer3"):
		case joaat("virgo"):
			return 1;
			break;
		
		case joaat("faction"):
		case joaat("faction2"):
		case joaat("moonbeam"):
		case joaat("moonbeam2"):
			return 1;
			break;
		
		case joaat("faction3"):
		case joaat("virgo2"):
			return 1;
			break;
		
		case joaat("baller3"):
		case joaat("baller4"):
		case joaat("cognoscenti"):
		case joaat("cog55"):
		case joaat("limo2"):
		case joaat("mamba"):
		case joaat("nightshade"):
		case joaat("schafter3"):
		case joaat("schafter4"):
		case joaat("verlierer2"):
			return 1;
			break;
		
		case joaat("tampa"):
			return 1;
			break;
		
		case joaat("banshee2"):
			return 1;
			break;
		
		case joaat("bestiagts"):
		case joaat("brickade"):
		case joaat("fmj"):
		case joaat("nimbus"):
		case joaat("pfister811"):
		case joaat("prototipo"):
		case joaat("rumpo3"):
		case joaat("seven70"):
		case joaat("tug"):
		case joaat("volatus"):
		case joaat("windsor2"):
		case joaat("xls"):
		case joaat("xls2"):
		case joaat("reaper"):
			return 1;
			break;
		
		case joaat("omnis"):
		case joaat("tropos"):
		case joaat("brioso"):
		case joaat("trophytruck"):
		case joaat("trophytruck2"):
		case joaat("cliffhanger"):
		case joaat("bf400"):
		case joaat("rallytruck"):
		case joaat("tampa2"):
		case joaat("gargoyle"):
		case joaat("tyrus"):
		case joaat("le7b"):
		case joaat("lynx"):
		case joaat("sheava"):
			return 1;
			break;
		
		case joaat("avarus"):
		case joaat("defiler"):
		case joaat("nightblade"):
		case joaat("zombiea"):
		case joaat("zombieb"):
		case joaat("chimera"):
		case joaat("esskey"):
		case joaat("ratbike"):
		case joaat("hakuchou2"):
		case joaat("daemon2"):
		case joaat("shotaro"):
		case joaat("raptor"):
		case joaat("blazer4"):
		case joaat("sanctus"):
		case joaat("vortex"):
		case joaat("manchez"):
		case joaat("tornado6"):
		case joaat("youga2"):
		case joaat("wolfsbane"):
		case joaat("faggio3"):
		case joaat("faggio"):
			return 1;
			break;
		
		case joaat("blazer5"):
		case joaat("boxville5"):
		case joaat("comet3"):
		case joaat("diablous"):
		case joaat("diablous2"):
		case joaat("dune4"):
		case joaat("dune5"):
		case joaat("fcr"):
		case joaat("fcr2"):
		case joaat("italigtb"):
		case joaat("nero"):
		case joaat("penetrator"):
		case joaat("phantom2"):
		case joaat("ruiner2"):
		case joaat("technical2"):
		case joaat("tempesta"):
		case joaat("voltic2"):
		case joaat("wastelander"):
		case joaat("elegy"):
		case joaat("italigtb2"):
		case joaat("nero2"):
		case joaat("ruiner3"):
		case joaat("specter"):
		case joaat("specter2"):
			return 1;
			break;
		
		case joaat("gp1"):
		case joaat("ruston"):
		case joaat("infernus2"):
		case joaat("turismo2"):
			return 1;
			break;
		
		case joaat("ardent"):
		case joaat("vagner"):
		case joaat("cheetah2"):
		case joaat("nightshark"):
		case joaat("torero"):
		case joaat("xa21"):
		case joaat("tampa3"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("dune3"):
		case joaat("trailersmall2"):
		case joaat("insurgent3"):
		case joaat("technical3"):
		case joaat("phantom3"):
		case joaat("hauler2"):
			return 1;
			break;
		
		case joaat("cyclone"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("visione"):
		case joaat("vigilante"):
			return 1;
			break;
		
		case joaat("deluxo"):
		case joaat("stromberg"):
		case joaat("riot2"):
		case joaat("chernobog"):
		case joaat("khanjali"):
		case joaat("akula"):
		case joaat("thruster"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("volatol"):
		case joaat("comet4"):
		case joaat("neon"):
		case joaat("streiter"):
		case joaat("sentinel3"):
		case joaat("yosemite"):
		case joaat("sc1"):
		case joaat("autarch"):
		case joaat("gt500"):
		case joaat("hustler"):
		case joaat("revolter"):
		case joaat("pariah"):
		case joaat("raiden"):
		case joaat("savestra"):
		case joaat("riata"):
		case joaat("hermes"):
		case joaat("comet5"):
		case joaat("z190"):
		case joaat("viseris"):
		case joaat("kamacho"):
			return 1;
			break;
	}
	switch (iParam0)
	{
		case joaat("gb200"):
		case joaat("issi3"):
		case joaat("ellie"):
		case joaat("fagaloa"):
		case joaat("michelli"):
		case joaat("flashgt"):
		case joaat("hotring"):
		case joaat("tezeract"):
		case joaat("tyrant"):
		case joaat("dominator3"):
		case joaat("taipan"):
		case joaat("entity2"):
		case joaat("jester3"):
		case joaat("cheburek"):
		case joaat("caracara"):
		case joaat("seasparrow"):
			return 1;
			break;
	}
	return 0;
}

int func_314(int iParam0, char* sParam1, int iParam2)
{
	char cVar0[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iParam2))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, iParam2, 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

int func_315(int iParam0)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "VEM_", 32);
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "MCT_METALLIC", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "MCT_CLASSIC", 32);
			break;
		
		case 2:
			StringConCat(&cVar0, "MCT_PEARLESCENT", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "MCT_MATTE", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "MCT_METALS", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MCT_CHROME", 32);
			break;
		
		case 6:
			StringConCat(&cVar0, "MCT_INVALID", 32);
			iParam0 = 255;
			break;
	}
	StringConCat(&cVar0, "_t", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_v0", 32);
	return MISC::GET_HASH_KEY(&cVar0);
}

int func_316(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	char cVar0[64];
	char cVar1[64];
	
	if (NETSHOP::_NETWORK_SHOP_BASKET_IS_FULL())
	{
		return 1;
	}
	StringCopy(&cVar0, sParam1, 64);
	StringIntConCat(&cVar0, iParam0, 64);
	StringConCat(&cVar1, "VEM_", 64);
	if (iParam3 == 1)
	{
		StringConCat(&cVar1, "COLOUR_1_", 64);
	}
	else if (iParam3 == 2)
	{
		StringConCat(&cVar1, "COLOUR_2_", 64);
	}
	else if (iParam3 == 3)
	{
		StringConCat(&cVar1, "COLOUR_EXTRA_1_", 64);
	}
	if (iParam6 == 5)
	{
		StringConCat(&cVar1, "MCT_CHROME_", 64);
	}
	else if (iParam6 == 1)
	{
		StringConCat(&cVar1, "MCT_CLASSIC_", 64);
	}
	else if (iParam6 == 0)
	{
		StringConCat(&cVar1, "MCT_METALLIC_", 64);
	}
	else if (iParam6 == 4)
	{
		StringConCat(&cVar1, "MCT_METALS_", 64);
	}
	else if (iParam6 == 3)
	{
		StringConCat(&cVar1, "MCT_MATTE_", 64);
	}
	else if (iParam6 == 2)
	{
		StringConCat(&cVar1, "MCT_PEARLESCENT_", 64);
	}
	else if (iParam6 == 6)
	{
		StringConCat(&cVar1, "MCT_NONE_", 64);
	}
	StringConCat(&cVar1, sParam2, 64);
	StringConCat(&cVar1, "_t", 64);
	StringIntConCat(&cVar1, iParam4, 64);
	StringConCat(&cVar1, "_v", 64);
	StringIntConCat(&cVar1, iParam5, 64);
	if (iParam6 == 6)
	{
		StringCopy(&cVar1, "VEM_COLOUR_MCT_NONE_", 64);
		StringIntConCat(&cVar1, iParam7, 64);
	}
	if (!NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
	{
		return 1;
	}
	return func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&cVar1), 478352891, 1, 0, 1, 4, MISC::GET_HASH_KEY(&cVar0), 3);
}

void func_317(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, int iParam9, var uParam10, bool bParam11)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	
	VEHICLE::GET_VEHICLE_COLOURS(iParam0, iParam3, iParam6);
	VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, iParam9, uParam10);
	StringCopy(sParam2, "", 16);
	StringCopy(sParam5, "", 16);
	StringCopy(sParam8, "", 16);
	if (bParam11)
	{
		VEHICLE::GET_VEHICLE_MOD_COLOR_1(iParam0, iParam1, &uVar0, &iVar2);
		VEHICLE::GET_VEHICLE_MOD_COLOR_2(iParam0, iParam4, &uVar1);
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, iVar3, iVar4, iVar2);
				VEHICLE::GET_VEHICLE_COLOURS(iParam0, &iVar6, &uVar9);
				if (iVar6 == *iParam3)
				{
					*iParam1 = iVar3;
					StringCopy(sParam2, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, 0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		*iParam1 = 6;
		IntToString(sParam2, *iParam3, 16);
	}
	if (bParam11)
	{
		iVar4 = 0;
		iVar5 = VEHICLE::GET_NUM_MOD_COLORS(0, 1);
		iVar4 = 0;
		while (iVar4 < iVar5)
		{
			VEHICLE::SET_VEHICLE_MOD_COLOR_1(iParam0, 0, iVar4, iVar4);
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &iVar8, &uVar9);
			if (iVar8 == *iParam9)
			{
				StringCopy(sParam8, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(iParam0, 0), 16);
				iVar4 = iVar5 + 1;
			}
			iVar4++;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		IntToString(sParam8, *iParam9, 16);
		*iParam7 = 6;
	}
	else
	{
		*iParam7 = *iParam1;
	}
	if (bParam11)
	{
		iVar3 = 0;
		while (iVar3 != 6)
		{
			iVar4 = 0;
			iVar5 = VEHICLE::GET_NUM_MOD_COLORS(iVar3, 1);
			iVar4 = 0;
			while (iVar4 < iVar5)
			{
				VEHICLE::SET_VEHICLE_MOD_COLOR_2(iParam0, iVar3, iVar4);
				VEHICLE::GET_VEHICLE_COLOURS(iParam0, &uVar9, &iVar7);
				if (iVar7 == *iParam6)
				{
					*iParam4 = iVar3;
					StringCopy(sParam5, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(iParam0), 16);
					iVar4 = iVar5 + 1;
				}
				iVar4++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				iVar3++;
			}
			else
			{
				iVar3 = 6;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
	{
		*iParam4 = 6;
		IntToString(sParam5, *iParam6, 16);
	}
	VEHICLE::SET_VEHICLE_COLOURS(iParam0, *iParam3, *iParam6);
	VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iParam0, *iParam9, *uParam10);
}

int func_318(int iParam0)
{
	if (iParam0 == joaat("bmx"))
	{
		return 1;
	}
	if (iParam0 == joaat("cruiser"))
	{
		return 1;
	}
	if (iParam0 == joaat("scorcher"))
	{
		return 1;
	}
	if ((iParam0 == joaat("tribike") || iParam0 == joaat("tribike2")) || iParam0 == joaat("tribike3"))
	{
		return 1;
	}
	if (iParam0 == joaat("fixter"))
	{
		return 1;
	}
	return 0;
}

int func_319(int iParam0)
{
	switch (iParam0)
	{
		case joaat("faction2"):
		case joaat("moonbeam2"):
		case joaat("buccaneer2"):
		case joaat("chino2"):
		case joaat("primo2"):
		case joaat("voodoo"):
		case joaat("sultanrs"):
		case joaat("banshee2"):
		case joaat("btype3"):
		case joaat("faction3"):
		case joaat("minivan2"):
		case joaat("sabregt2"):
		case joaat("slamvan3"):
		case joaat("tornado5"):
		case joaat("virgo2"):
		case joaat("diablous2"):
		case joaat("fcr2"):
		case joaat("italigtb2"):
		case joaat("specter2"):
		case joaat("nero2"):
		case joaat("comet3"):
		case joaat("elegy"):
		case joaat("apc"):
		case joaat("halftrack"):
		case joaat("trailersmall2"):
		case joaat("dune3"):
		case joaat("insurgent3"):
		case joaat("tampa3"):
		case joaat("technical3"):
		case joaat("oppressor"):
		case joaat("trailerlarge"):
		case joaat("hauler2"):
		case joaat("phantom3"):
		case joaat("bombushka"):
		case joaat("hunter"):
		case joaat("microlight"):
		case joaat("rogue"):
		case joaat("tula"):
		case joaat("havok"):
		case joaat("mogul"):
		case joaat("starling"):
		case joaat("seabreeze"):
		case joaat("cyclone"):
		case joaat("visione"):
		case joaat("vigilante"):
		case joaat("rapidgt3"):
		case joaat("retinue"):
		case joaat("alphaz1"):
		case joaat("howard"):
		case joaat("molotok"):
		case joaat("nokota"):
		case joaat("pyro"):
		case joaat("cuban800"):
		case joaat("akula"):
		case joaat("volatol"):
		case joaat("avenger"):
		case joaat("barrage"):
		case joaat("chernobog"):
		case joaat("deluxo"):
		case joaat("khanjali"):
		case joaat("riot2"):
		case joaat("stromberg"):
		case joaat("thruster"):
		case joaat("caracara"):
		case joaat("seasparrow"):
			return 3;
			break;
	}
	return func_312(iParam0);
}

int func_320(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	
	iVar0 = 1;
	iVar1 = func_323(iParam0);
	iVar2 = func_577(PLAYER::PLAYER_ID());
	if (!func_397(iParam0))
	{
	}
	if ((iParam3 != 0 || !func_576(iVar2)) || iVar1 != iVar2)
	{
		func_322(&sVar3, 3, uParam2->f_6, 0);
		func_321(&sVar4, 3);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam3, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam4 != 0 || !func_576(iVar2)) || iVar1 != iVar2)
	{
		func_322(&sVar3, 2, uParam2->f_3, 0);
		func_321(&sVar4, 2);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam4, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam5 != 0 || !func_576(iVar2)) || iVar1 != iVar2)
	{
		func_322(&sVar3, 4, uParam2->f_4, 0);
		func_321(&sVar4, 4);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam5, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam6 != 0 || !func_576(iVar2)) || iVar1 != iVar2)
	{
		func_322(&sVar3, 5, uParam2->f_5, 0);
		func_321(&sVar4, 5);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam6, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam7 != 0 || !func_576(iVar2)) || iVar1 != iVar2)
	{
		func_322(&sVar3, 6, uParam2->f_7, 0);
		func_321(&sVar4, 6);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam7, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam8 != 0 || !func_576(iVar2)) || iVar1 != iVar2)
	{
		func_322(&sVar3, 0, uParam2->f_1, 0);
		func_321(&sVar4, 0);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam8, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam9 != 0 || !func_576(iVar2)) || iVar1 != iVar2)
	{
		iVar5 = func_262(uParam2->f_2);
		func_322(&sVar3, 1, iVar5, 0);
		func_321(&sVar4, 1);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam9, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_321(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 3:
			StringCopy(sParam0, "MP_STAT_DBASE_PERSONAL_QUARTERS_v0", 64);
			break;
		
		case 2:
			StringCopy(sParam0, "MP_STAT_DBASE_ORBITAL_WEAPON_v0", 64);
			break;
		
		case 4:
			StringCopy(sParam0, "MP_STAT_DBASE_SECURITY_ROOM_v0", 64);
			break;
		
		case 5:
			StringCopy(sParam0, "MP_STAT_DBASE_LOUNGE_v0", 64);
			break;
		
		case 6:
			StringCopy(sParam0, "MP_STAT_DBASE_PRIVACY_GLASS_v0", 64);
			break;
		
		case 0:
			StringCopy(sParam0, "MP_STAT_DBASE_FACILITY_STYLE_v0", 64);
			break;
		
		case 1:
			StringCopy(sParam0, "MP_STAT_DBASE_FACILITY_GRAPHIC_v0", 64);
			break;
	}
}

void func_322(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	StringCopy(sParam0, func_264(iParam1, iParam2), 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam3, 64);
}

int func_323(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 1;
	while (iVar0 <= (10 - 1))
	{
		StringCopy(&Var1, "", 64);
		func_324(&Var1, iVar0);
		if (MISC::GET_HASH_KEY(&Var1) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_324(char* sParam0, int iParam1)
{
	StringCopy(sParam0, "DBASE_INDEX_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v0", 64);
}

int func_325(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = 1;
	iVar1 = func_331(iParam0);
	iVar2 = func_330(PLAYER::PLAYER_ID());
	if (!func_398(iParam0))
	{
	}
	if ((iParam3 != 0 || (iVar2 == 0 || iVar2 == 6)) || iVar1 != iVar2)
	{
		func_329(&sVar3, 2, iParam2, 0);
		func_328(&sVar4, 2);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam3, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam5 != 0 || (iVar2 == 0 || iVar2 == 6)) || iVar1 != iVar2)
	{
		iVar5 = func_327(iParam4, iVar1, iVar2);
		func_329(&sVar3, 4, iParam4, iVar5);
		func_328(&sVar4, 4);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam5, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam7 != 0 || (iVar2 == 0 || iVar2 == 6)) || iVar1 != iVar2)
	{
		func_329(&sVar3, 3, iParam6, 0);
		func_328(&sVar4, 3);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam7, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam9 != 0 || (iVar2 == 0 || iVar2 == 6)) || iVar1 != iVar2)
	{
		func_329(&sVar3, 5, iParam8, 0);
		func_328(&sVar4, 5);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam9, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam11 != 0 || (iVar2 == 0 || iVar2 == 6)) || iVar1 != iVar2)
	{
		func_329(&sVar3, 0, iParam10, 0);
		func_328(&sVar4, 0);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam11, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (((iParam13 != 0 || (iVar2 == 0 || iVar2 == 6)) || iVar1 != iVar2) || iParam12 != func_2029(6088, -1, 0))
	{
		iVar6 = 0;
		if (iParam13 == 0)
		{
			iVar6 = 1;
		}
		iVar7 = func_326(iParam10, iParam12);
		func_329(&sVar3, 1, iVar7, iVar6);
		func_328(&sVar4, 1);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar4)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam13, 1, 4, MISC::GET_HASH_KEY(&sVar4), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_326(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 1;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 3;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 4;
					break;
				
				case 1:
					return 5;
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
			}
			break;
		
		case 5:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 11;
					break;
			}
			break;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return 12;
					break;
				
				case 1:
					return 13;
					break;
				
				case 2:
					return 14;
					break;
				
				case 3:
					return 15;
					break;
			}
			break;
		
		case 7:
			switch (iParam1)
			{
				case 0:
					return 16;
					break;
				
				case 1:
					return 17;
					break;
				
				case 2:
					return 18;
					break;
				
				case 3:
					return 19;
					break;
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 20;
					break;
				
				case 1:
					return 21;
					break;
				
				case 2:
					return 22;
					break;
				
				case 3:
					return 23;
					break;
			}
			break;
	}
	return -1;
}

int func_327(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0)
	{
		if (iParam1 != iParam2)
		{
			return 0;
		}
		if (func_2029(6089, -1, 0) == 0)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

void func_328(char* sParam0, int iParam1)
{
	switch (iParam1)
	{
		case 2:
			StringCopy(sParam0, "MP_STAT_HANGAR_FLOOR_DECAL_v0", 64);
			break;
		
		case 4:
			StringCopy(sParam0, "MP_STAT_HANGAR_SAVEBED_v0", 64);
			break;
		
		case 3:
			StringCopy(sParam0, "MP_STAT_HANGAR_FURNITURE_v0", 64);
			break;
		
		case 5:
			StringCopy(sParam0, "MP_STAT_HANGAR_MODSHOP_v0", 64);
			break;
		
		case 0:
			StringCopy(sParam0, "MP_STAT_HANGAR_COLOUR_v0", 64);
			break;
		
		case 1:
			StringCopy(sParam0, "MP_STAT_HANGAR_LIGHTING_v0", 64);
			break;
	}
}

void func_329(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	StringCopy(sParam0, "HANGAR_MOD_", 64);
	switch (iParam1)
	{
		case 2:
			StringConCat(sParam0, "FLOOR_DECAL_", 64);
			break;
		
		case 4:
			StringConCat(sParam0, "SAVEBED_", 64);
			break;
		
		case 3:
			StringConCat(sParam0, "FURNITURE_", 64);
			break;
		
		case 5:
			StringConCat(sParam0, "MODSHOP_", 64);
			break;
		
		case 0:
			StringConCat(sParam0, "COLOUR_", 64);
			break;
		
		case 1:
			StringConCat(sParam0, "LIGHTING_", 64);
			break;
	}
	StringIntConCat(sParam0, iParam2, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam3, 64);
}

int func_330(int iParam0)
{
	if (iParam0 != func_209())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241;
	}
	return 0;
}

int func_331(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 1;
	while (iVar0 <= 5)
	{
		StringCopy(&Var1, "", 64);
		func_332(&Var1, iVar0);
		if (MISC::GET_HASH_KEY(&Var1) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_332(char* sParam0, int iParam1)
{
	StringCopy(sParam0, "HANGAR_INDEX_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v0", 64);
}

void func_333(var uParam0)
{
	*uParam0 = func_377(HUD::_0xE3B05614DCE1D014(13), 0, 6);
	uParam0->f_1 = func_377(HUD::_0xE3B05614DCE1D014(13), 6, 4);
	uParam0->f_2 = func_377(HUD::_0xE3B05614DCE1D014(13), 10, 2);
	uParam0->f_3 = func_377(HUD::_0xE3B05614DCE1D014(13), 12, 4);
	uParam0->f_4 = func_377(HUD::_0xE3B05614DCE1D014(13), 16, 2);
	uParam0->f_5 = func_377(HUD::_0xE3B05614DCE1D014(13), 18, 2);
	uParam0->f_6 = func_377(HUD::_0xE3B05614DCE1D014(13), 20, 1);
}

int func_334(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	iVar1 = func_339(iParam0);
	iVar2 = func_338(PLAYER::PLAYER_ID());
	if (!func_399(iParam0))
	{
	}
	if ((iParam3 != 0 || (iVar2 == 0 || iVar2 == 32)) || iVar1 != iVar2)
	{
		iVar5 = 0;
		if (iParam3 == 0)
		{
			iVar5 = 1;
		}
		func_337(&sVar3, 5, 3, iParam2, iVar5);
		iVar4 = func_336(5, 4);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam3, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam5 != 0 || (iVar2 == 0 || iVar2 == 32)) || iVar1 != iVar2)
	{
		func_337(&sVar3, 5, 6, iParam4, 0);
		iVar4 = func_336(5, 5);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam5, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam7 != 0 || (iVar2 == 0 || iVar2 == 32)) || iVar1 != iVar2)
	{
		iVar6 = func_335(iParam6, iVar1, iVar2);
		func_337(&sVar3, 5, 7, iParam6, iVar6);
		iVar4 = func_336(5, 6);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam7, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam9 != 0 || (iVar2 == 0 || iVar2 == 32)) || iVar1 != iVar2)
	{
		func_337(&sVar3, 5, 9, iParam8, 0);
		iVar4 = func_336(5, 7);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam9, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam11 != 0 || (iVar2 == 0 || iVar2 == 32)) || iVar1 != iVar2)
	{
		func_337(&sVar3, 5, 10, iParam10, 0);
		iVar4 = func_336(5, 8);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 235173372, 1, iParam11, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_335(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 != 0)
	{
		if (iParam1 != iParam2)
		{
			return 0;
		}
		if (func_2029(5364, -1, 0) == 0)
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

int func_336(int iParam0, int iParam1)
{
	char cVar0[64];
	
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP0_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP3_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP4_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_FACTORYSETUP5_v0", 64);
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_EQUIPMENT_v0", 64);
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_1_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_1_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_1_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_1_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_1_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_STAFF_v0", 64);
					break;
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES0_2_v0", 64);
					break;
				
				case 1:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES1_2_v0", 64);
					break;
				
				case 2:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES2_2_v0", 64);
					break;
				
				case 3:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES3_2_v0", 64);
					break;
				
				case 4:
					StringCopy(&cVar0, "MP_STAT_FACTORYUPGRADES4_2_v0", 64);
					break;
				
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_SECURITY_v0", 64);
					break;
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_DECOR_v0", 64);
					break;
			}
			break;
		
		case 5:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_SAVEBED_v0", 64);
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_FIRING_RANGE_v0", 64);
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_GUNLOCKER_v0", 64);
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 5:
					StringCopy(&cVar0, "MP_STAT_BUNKER_TRANSPORTATION_v0", 64);
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_337(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case 5:
			switch (iParam2)
			{
				case 0:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_EQUIP_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 1:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_STAFF_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 2:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_SEC_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 3:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 4:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 5:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_DECOR_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 6:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_ACCOM_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 7:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_RANGE_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 8:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_RANGE_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 9:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_GNLCK_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 10:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_TRNPT_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
				
				case 11:
					StringCopy(sParam0, "FA_UPGRADE_WEAPONS_TRNPT_", 64);
					StringIntConCat(sParam0, iParam3, 64);
					StringConCat(sParam0, "_t0_v", 64);
					StringIntConCat(sParam0, iParam4, 64);
					break;
			}
			break;
	}
}

int func_338(int iParam0)
{
	if (iParam0 == func_209())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_160[5 /*12*/];
}

int func_339(int iParam0)
{
	int iVar0;
	struct<8> Var1;
	
	iVar0 = 21;
	while (iVar0 <= 31)
	{
		StringCopy(&Var1, "", 64);
		func_340(&Var1, iVar0, 0);
		if (MISC::GET_HASH_KEY(&Var1) == iParam0)
		{
			return iVar0;
		}
		func_340(&Var1, iVar0, 1);
		if (MISC::GET_HASH_KEY(&Var1) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_340(char* sParam0, int iParam1, bool bParam2)
{
	StringCopy(sParam0, "FACTORY_INDEX_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v0", 64);
	if (bParam2)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

void func_341(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam0 = func_377(HUD::_0xE3B05614DCE1D014(13), 6, 2);
	*uParam1 = func_377(HUD::_0xE3B05614DCE1D014(13), 8, 1);
	*uParam2 = func_377(HUD::_0xE3B05614DCE1D014(13), 9, 2);
	*uParam3 = func_377(HUD::_0xE3B05614DCE1D014(13), 11, 1);
	*uParam4 = func_377(HUD::_0xE3B05614DCE1D014(13), 12, 2);
}

int func_342(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	char* sVar1;
	char cVar2[64];
	int iVar3;
	struct<4> Var4;
	int iVar5;
	
	iVar0 = 1;
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	if (iParam7 != 0 || func_2029(6139, -1, 0) == 0)
	{
		iVar3 = *uParam2;
		StringCopy(&Var4, "", 16);
		if (*uParam2 == joaat("avenger"))
		{
			StringCopy(&Var4, "AVENGER", 16);
		}
		else
		{
			if (iVar3 == 0)
			{
			}
			iVar0 = 0;
		}
		iVar5 = func_312(iVar3);
		func_345(&sVar1, Var4, iVar3, 4, 0, iVar5, -1, -1, 0, 0);
		StringCopy(&cVar2, "MP_STAT_INV_PLANE_MODEL_", 64);
		StringIntConCat(&cVar2, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar1)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar2)))
		{
			if (func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&sVar1), -897111558, 1, iParam7, 1, 4, MISC::GET_HASH_KEY(&cVar2), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam3 != 0 || func_2029(6139, -1, 0) == 0) || uParam2->f_2 != func_2031(18974, -1, -1))
	{
		func_343(&sVar1, 0, uParam2->f_2, 0);
		StringCopy(&cVar2, "PACKED_MP_INT_ARMORY_AIRCRAFT_GUN_TURRET_v", 64);
		StringIntConCat(&cVar2, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar1)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar2)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar1), -897111558, 1, iParam3, 1, 4, MISC::GET_HASH_KEY(&cVar2), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam4 != 0 || func_2029(6139, -1, 0) == 0) || uParam2->f_3 != func_2031(18975, -1, -1))
	{
		func_343(&sVar1, 2, uParam2->f_3, 0);
		StringCopy(&cVar2, "PACKED_MP_INT_ARMORY_AIRCRAFT_VEH_SHOP_v", 64);
		StringIntConCat(&cVar2, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar1)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar2)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar1), -897111558, 1, iParam4, 1, 4, MISC::GET_HASH_KEY(&cVar2), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam5 != 0 || func_2029(6139, -1, 0) == 0) || uParam2->f_4 != func_2031(18976, -1, -1))
	{
		func_343(&sVar1, 1, uParam2->f_4, 0);
		StringCopy(&cVar2, "PACKED_MP_INT_ARMORY_AIRCRAFT_WEA_SHOP_v", 64);
		StringIntConCat(&cVar2, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar1)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar2)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar1), -897111558, 1, iParam5, 1, 4, MISC::GET_HASH_KEY(&cVar2), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam6 != 0 || func_2029(6139, -1, 0) == 0) || uParam2->f_1 != func_2031(18973, -1, -1))
	{
		func_343(&sVar1, 3, uParam2->f_1, 0);
		StringCopy(&cVar2, "PACKED_MP_INT_ARMORY_AIRCRAFT_INTERIOR_v", 64);
		StringIntConCat(&cVar2, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar1)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar2)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar1), -897111558, 1, iParam6, 1, 4, MISC::GET_HASH_KEY(&cVar2), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_343(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	StringCopy(sParam0, "VEM_", 64);
	StringConCat(sParam0, func_344(iParam1), 64);
	StringConCat(sParam0, "_", 64);
	StringIntConCat(sParam0, iParam2, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam3, 64);
}

char* func_344(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "AAM_GUN_TURRET";
		
		case 1:
			return "AAM_WEAPON_WORKSHOP";
		
		case 2:
			return "AAM_VEHICLE_WORKSHOP";
		
		case 3:
			return "AAM_INTERIOR";
		
		default:
	}
	return "";
}

void func_345(char* sParam0, char[8] cParam1, char[4] cParam2, char[4] cParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11)
{
	switch (MISC::GET_HASH_KEY(&cParam1))
	{
		case 64715401:
		case -2016195117:
			StringCopy(&cParam1, "GSA_TYPE_R", 16);
			break;
		
		case -414529079:
		case -1253005183:
			StringCopy(&cParam1, "GSA_TYPE_C", 16);
			break;
		
		case 336264847:
		case -1119195824:
			StringCopy(&cParam1, "GSA_TYPE_RO", 16);
			break;
		
		case 531395379:
		case -672224483:
			StringCopy(&cParam1, "GSA_TYPE_CH", 16);
			break;
		
		case 1034118160:
		case 600999375:
			StringCopy(&cParam1, "GSA_TYPE_G", 16);
			break;
		
		case -218834291:
		case -859056265:
			StringCopy(&cParam1, "GSA_TYPE_B", 16);
			break;
		
		case 1779531303:
		case 82051787:
			StringCopy(&cParam1, "GSA_TYPE_FW", 16);
			break;
	}
	StringCopy(sParam0, "", 64);
	switch (iParam5)
	{
		case 0:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_HA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 1:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_CL_", 64);
			if (iParam6 == 12)
			{
				StringConCat(sParam0, "OUTFIT_", 64);
			}
			StringConCat(sParam0, &cParam1, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam9 != -1)
			{
				StringConCat(sParam0, "_p", 64);
				StringIntConCat(sParam0, iParam9, 64);
			}
			break;
		
		case 2:
			if (iParam4 == joaat("mp_m_freemode_01"))
			{
				StringCopy(sParam0, "M", 64);
			}
			else if (iParam4 == joaat("mp_f_freemode_01"))
			{
				StringCopy(sParam0, "F", 64);
			}
			StringConCat(sParam0, "_TA_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			break;
		
		case 3:
			StringConCat(sParam0, "WP_", 64);
			StringConCat(sParam0, &cParam1, 64);
			StringConCat(sParam0, "_t", 64);
			StringIntConCat(sParam0, iParam6, 64);
			StringConCat(sParam0, "_v", 64);
			StringIntConCat(sParam0, iParam7, 64);
			if (iParam8 != -1)
			{
				StringConCat(sParam0, "_n", 64);
				StringIntConCat(sParam0, iParam8, 64);
			}
			break;
		
		case 4:
			if (iParam4 == Global_68195)
			{
				StringCopy(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (iParam4 == Global_68196)
			{
				StringCopy(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (iParam4 == Global_68197)
			{
				StringCopy(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (iParam4 == Global_68198)
			{
				StringCopy(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (iParam4 == 0)
			{
				StringConCat(sParam0, "VEM_", 64);
				if (iParam6 == 24 || iParam6 == 25)
				{
					if (iParam8 == 1)
					{
						StringConCat(sParam0, "COLOUR_1_", 64);
					}
					else if (iParam8 == 2)
					{
						StringConCat(sParam0, "COLOUR_2_", 64);
					}
					else if (iParam8 == 3)
					{
						StringConCat(sParam0, "COLOUR_EXTRA_1_", 64);
					}
					if (iParam9 == 5)
					{
						StringConCat(sParam0, "MCT_CHROME_", 64);
					}
					else if (iParam9 == 1)
					{
						StringConCat(sParam0, "MCT_CLASSIC_", 64);
					}
					else if (iParam9 == 0)
					{
						StringConCat(sParam0, "MCT_METALLIC_", 64);
					}
					else if (iParam9 == 4)
					{
						StringConCat(sParam0, "MCT_METALS_", 64);
					}
					else if (iParam9 == 3)
					{
						StringConCat(sParam0, "MCT_MATTE_", 64);
					}
					else if (iParam9 == 2)
					{
						StringConCat(sParam0, "MCT_PEARLESCENT_", 64);
					}
					else if (iParam9 == 6)
					{
						StringConCat(sParam0, "MCT_NONE_", 64);
					}
					iParam8 = -1;
				}
				else if (iParam6 == 38)
				{
					StringConCat(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam6 == 65)
				{
					StringConCat(sParam0, "COLOUR_6_", 64);
				}
				StringConCat(sParam0, &cParam1, 64);
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else if (iParam6 == 22)
			{
				StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
				if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1) || MISC::GET_HASH_KEY(&cParam1) == -515263000)
				{
					return;
				}
				StringConCat(sParam0, "VEM_INSURANCE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
			}
			else if (iParam6 == 40)
			{
				if (iParam4 == joaat("fcr2"))
				{
					StringCopy(&cParam1, "FCR2", 16);
				}
				else if (iParam4 == joaat("diablous2"))
				{
					StringCopy(&cParam1, "DIABLOUS2", 16);
				}
				else if (iParam4 == joaat("comet3"))
				{
					StringCopy(&cParam1, "COMET3", 16);
				}
				else
				{
					StringCopy(&cParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam4), 16);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&cParam1))
					{
						return;
					}
				}
				StringConCat(sParam0, "VEU_", 64);
				StringConCat(sParam0, &cParam1, 64);
				StringConCat(sParam0, "_t0_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
			}
			else
			{
				StringConCat(sParam0, "VE_", 64);
				StringConCat(sParam0, &cParam1, 64);
				if (!bParam10)
				{
					switch (iParam4)
					{
						case joaat("dubsta2"):
						case joaat("cavalcade2"):
						case joaat("mesa2"):
						case joaat("rapidgt2"):
						case joaat("emperor2"):
						case joaat("cargobob2"):
							StringConCat(sParam0, "2", 64);
							break;
						
						case joaat("mesa3"):
						case joaat("emperor3"):
						case joaat("burrito3"):
						case joaat("mule3"):
							StringConCat(sParam0, "3", 64);
							break;
						
						case joaat("tornado4"):
							StringConCat(sParam0, "4", 64);
							break;
						}
				}
				if (iParam8 != -1)
				{
					StringConCat(sParam0, "_n", 64);
					StringIntConCat(sParam0, iParam8, 64);
				}
				StringConCat(sParam0, "_t", 64);
				StringIntConCat(sParam0, iParam6, 64);
				StringConCat(sParam0, "_v", 64);
				StringIntConCat(sParam0, iParam7, 64);
				if (iParam9 != -1)
				{
					StringConCat(sParam0, "_p", 64);
					StringIntConCat(sParam0, iParam9, 64);
				}
			}
			break;
	}
	if (bParam11)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

int func_346(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	struct<8> Var3;
	int iVar4;
	struct<4> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar0 = 1;
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	bVar1 = false;
	if (iParam3 != 0 || func_2029(5376, -1, 0) == 0)
	{
		iVar4 = uParam2;
		StringCopy(&Var5, "", 16);
		if (iVar4 == joaat("hauler2"))
		{
			StringCopy(&Var5, "HAULER2", 16);
		}
		else if (iVar4 == joaat("phantom3"))
		{
			StringCopy(&Var5, "PHANTOM3", 16);
		}
		else
		{
			if (iVar4 == 0)
			{
			}
			iVar0 = 0;
		}
		iVar6 = func_312(iVar4);
		func_345(&sVar2, Var5, iVar4, 4, 0, iVar6, -1, -1, 0, 0);
		StringCopy(&Var3, "MP_STAT_INV_TRUCK_MODEL_", 64);
		StringIntConCat(&Var3, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&Var3)))
		{
			if (func_388(78225582, -1224924353, MISC::GET_HASH_KEY(&sVar2), -897111558, 1, iParam3, 1, 4, MISC::GET_HASH_KEY(&Var3), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam5 != 0 || func_2029(5376, -1, 0) == 0) || iParam4 != func_2031(15268, -1, -1))
	{
		iVar7 = 0;
		if (iParam5 == 0)
		{
			iVar7 = 1;
		}
		func_350(&sVar2, iParam4, iVar7);
		StringCopy(&Var3, "PACKED_MP_INT_TRUCK_SECTION_1_TYPE_v", 64);
		StringIntConCat(&Var3, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&Var3)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), -897111558, 1, iParam5, 1, 4, MISC::GET_HASH_KEY(&Var3), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
		if (iParam4 == 1)
		{
			bVar1 = true;
		}
	}
	if ((iParam7 != 0 || func_2029(5376, -1, 0) == 0) || iParam6 != func_2031(15269, -1, -1))
	{
		func_350(&sVar2, iParam6, 0);
		StringCopy(&Var3, "PACKED_MP_INT_TRUCK_SECTION_2_TYPE_v", 64);
		StringIntConCat(&Var3, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&Var3)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), -897111558, 1, iParam7, 1, 4, MISC::GET_HASH_KEY(&Var3), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
		if (iParam6 == 1)
		{
			bVar1 = true;
		}
	}
	if ((iParam9 != 0 || func_2029(5376, -1, 0) == 0) || iParam8 != func_2031(15270, -1, -1))
	{
		func_350(&sVar2, iParam8, 0);
		StringCopy(&Var3, "PACKED_MP_INT_TRUCK_SECTION_3_TYPE_v", 64);
		StringIntConCat(&Var3, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&Var3)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), -897111558, 1, iParam9, 1, 4, MISC::GET_HASH_KEY(&Var3), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
		if (iParam8 == 1)
		{
			bVar1 = true;
		}
	}
	if ((iParam11 != 0 || func_2029(5376, -1, 0) == 0) || iParam10 != func_2031(15267, -1, -1))
	{
		iVar8 = 0;
		if (iParam11 == 0)
		{
			iVar8 = 1;
		}
		func_349(&sVar2, iParam10, iVar8);
		StringCopy(&Var3, "PACKED_MP_INT_TRUCK_SECTION_1_NUM_v", 64);
		StringIntConCat(&Var3, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&Var3)))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), -897111558, 1, iParam11, 1, 4, MISC::GET_HASH_KEY(&Var3), 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_2029(5376, -1, 0) == 0)
	{
		iVar9 = joaat("trailerlarge");
		iVar10 = func_312(iVar9);
		func_347(&Var3, 4, 0);
		if (bVar1)
		{
			if (func_305(iParam0, &Var3, "VEM_ROOF", 1, 12, iVar10, -1, 0, 23))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else if (func_305(iParam0, &Var3, "VEM_ROOF", 0, 12, iVar10, -1, 0, 23))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_347(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	func_348(iParam1, &iVar0);
	switch (iVar0)
	{
		case 15271:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_1_v", 64);
			break;
		
		case 15272:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_2_v", 64);
			break;
		
		case 15273:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_3_v", 64);
			break;
		
		case 15274:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_4_v", 64);
			break;
		
		case 15275:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_5_v", 64);
			break;
		
		case 15276:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_6_v", 64);
			break;
		
		case 15277:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_7_v", 64);
			break;
		
		case 15278:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_8_v", 64);
			break;
		
		case 15279:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_9_v", 64);
			break;
		
		case 15280:
			StringCopy(sParam0, "PACKED_MP_INT_TRUCK_MOD_SLOT_10_v", 64);
			break;
		
		default:
			return;
			break;
	}
	if (bParam2)
	{
		StringConCat(sParam0, "0", 64);
	}
}

void func_348(int iParam0, var uParam1)
{
	*uParam1 = 15271;
	switch (iParam0)
	{
		case 0:
			*uParam1 = 15276;
			break;
		
		case 1:
			*uParam1 = 15277;
			break;
		
		case 2:
			*uParam1 = 15278;
			break;
		
		case 3:
			*uParam1 = 15279;
			break;
		
		case 4:
			*uParam1 = 15280;
			break;
		
		case 5:
			*uParam1 = 15275;
			break;
		
		case 6:
			*uParam1 = 15272;
			break;
		
		case 7:
			*uParam1 = 15274;
			break;
		
		case 8:
			*uParam1 = 15273;
			break;
		
		case 9:
			*uParam1 = 15271;
			break;
	}
}

void func_349(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(sParam0, "VEM_TRUCK_TINT_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

void func_350(char* sParam0, int iParam1, int iParam2)
{
	StringCopy(sParam0, "VEM_TRUCK_TYPE_", 64);
	StringIntConCat(sParam0, iParam1, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
}

int func_351(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 1;
	}
	else if (iParam0 == 1)
	{
		return 2;
	}
	else if (iParam0 == 2)
	{
		return 3;
	}
	else if (iParam0 == 3)
	{
		return 4;
	}
	else if (iParam0 == 4)
	{
		return 5;
	}
	else if (iParam0 == 5)
	{
		return 6;
	}
	else if (iParam0 == 6)
	{
		return 7;
	}
	else if (iParam0 == 7)
	{
		return 8;
	}
	else if (iParam0 == 8)
	{
		return 9;
	}
	else if (iParam0 == 9)
	{
		return 10;
	}
	else if (iParam0 == 10)
	{
		return 11;
	}
	else if (iParam0 == 11)
	{
		return 12;
	}
	else if (iParam0 == 12)
	{
		return 13;
	}
	else if (iParam0 == 13)
	{
		return 14;
	}
	return 0;
}

int func_352(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	else if (iParam0 == 0)
	{
		return joaat("phantom3");
	}
	else if (iParam0 == 1)
	{
		return joaat("hauler2");
	}
	return 1;
}

bool func_353(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	
	bVar0 = false;
	if (*iParam0 == 0)
	{
		*iParam0 = 4;
		bVar0 = true;
		if (*iParam1 == 0)
		{
			*iParam1 = 5;
			bVar0 = true;
		}
	}
	switch (*iParam1)
	{
		case 5:
			if (*iParam2 != 5 && *iParam2 != 0)
			{
				*iParam1 = 8;
				bVar0 = true;
			}
			else
			{
				*iParam1 = 6;
				*iParam2 = 0;
				bVar0 = true;
			}
			break;
		
		case 3:
		case 6:
			if (*iParam2 != 0)
			{
				*iParam2 = 0;
				bVar0 = true;
			}
			break;
		
		case 2:
		case 4:
		case 8:
			if (*iParam2 == 0)
			{
				*iParam2 = 5;
				bVar0 = true;
			}
			break;
	}
	switch (*iParam2)
	{
		case 0:
			if (*iParam1 != 3 && *iParam1 != 6)
			{
				*iParam2 = 5;
				bVar0 = true;
			}
			break;
	}
	if (bVar0)
	{
	}
	return bVar0;
}

int func_354(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return 5;
	}
	else if (iParam0 == 2)
	{
		return 4;
	}
	else if (iParam0 == 3)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 5)
	{
		return 3;
	}
	else if (iParam0 == 6)
	{
		return 7;
	}
	return 0;
}

int func_355(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	char cVar0[64];
	char cVar1[64];
	
	if (iParam0 == -1)
	{
		iParam0 = 0;
	}
	if (iParam3 != 0 || func_2029(3157, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_MOD_", 64);
		StringIntConCat(&cVar0, iParam2, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar1, "PACKED_MP_CHAR_YACHT_MOD_v", 64);
		StringIntConCat(&cVar1, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar0)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&cVar0), -897111558, 1, iParam3, 1, 4, MISC::GET_HASH_KEY(&cVar1), 3))
			{
			}
		}
	}
	if (iParam5 != 0 || func_2029(3157, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_LIGHT_", 64);
		StringIntConCat(&cVar0, iParam4, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar1, "PACKED_MP_CHAR_YACHT_LIGHTING_v", 64);
		StringIntConCat(&cVar1, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar0)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&cVar0), -897111558, 1, iParam5, 1, 4, MISC::GET_HASH_KEY(&cVar1), 3))
			{
			}
		}
	}
	if (iParam7 != 0 || func_2029(3157, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_FIX_", 64);
		StringIntConCat(&cVar0, iParam6, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar1, "PACKED_MP_CHAR_YACHT_FIXTURE_v", 64);
		StringIntConCat(&cVar1, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar0)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&cVar0), -897111558, 1, iParam7, 1, 4, MISC::GET_HASH_KEY(&cVar1), 3))
			{
			}
		}
	}
	if (iParam9 != 0 || func_2029(3157, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_FLAG_", 64);
		StringIntConCat(&cVar0, iParam8, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar1, "PACKED_MP_CHAR_YACHT_FLAG_v", 64);
		StringIntConCat(&cVar1, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar0)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&cVar0), -897111558, 1, iParam9, 1, 4, MISC::GET_HASH_KEY(&cVar1), 3))
			{
			}
		}
	}
	if (iParam11 != 0 || func_2029(3157, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_COL_", 64);
		StringIntConCat(&cVar0, iParam10, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar1, "PACKED_MP_CHAR_YACHT_COLOR_v", 64);
		StringIntConCat(&cVar1, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar0)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&cVar0), -897111558, 1, iParam11, 1, 4, MISC::GET_HASH_KEY(&cVar1), 3))
			{
			}
		}
	}
	if (iParam13 != 0 || func_2029(3157, -1, 0) == 0)
	{
		StringCopy(&cVar0, "VEM_YACHT_NAME_", 64);
		StringIntConCat(&cVar0, iParam12, 64);
		StringConCat(&cVar0, "_v0", 64);
		StringCopy(&cVar1, "PACKED_MP_CHAR_YACHT_NAME_ID_v", 64);
		StringIntConCat(&cVar1, iParam0, 64);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar0)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&cVar1)))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&cVar0), -897111558, 1, iParam13, 1, 4, MISC::GET_HASH_KEY(&cVar1), 3))
			{
			}
		}
	}
	return 1;
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case -611303783:
		case 2142748233:
			return 2142748233;
			break;
		
		case -754272709:
		case 1281751434:
			return 1281751434;
			break;
		
		case -294362603:
		case 739442662:
			return 739442662;
			break;
	}
	return 0;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 2142748233:
		case -611303783:
			return 1;
			break;
	}
	return 0;
}

int func_358(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
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
	
	iVar0 = func_401(iParam0);
	bVar1 = false;
	if (!func_402(iParam0))
	{
	}
	if (iVar0 == 103)
	{
		iVar4 = func_372(8, -1);
		bVar1 = true;
		if (bParam2)
		{
			if (iParam4 != 0 || iVar4 == 0)
			{
				if (iParam3 != -1)
				{
					iVar5 = func_369(iParam3 + 1);
					func_366(&sVar2, iVar5, iVar4, 0);
					iVar3 = func_365(8);
					if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
					{
						if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam4, 1, 4, iVar3, 3))
						{
						}
					}
				}
			}
		}
		if ((iParam6 != 0 || iVar4 == 0) || iVar4 != iVar0)
		{
			iVar6 = func_363(iParam5);
			func_362(&sVar2, 8, iVar6, 0);
			iVar3 = func_361(8);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
			{
				if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam6, 1, 4, iVar3, 3))
				{
				}
			}
		}
		if ((iParam8 != 0 || iVar4 == 0) || iVar4 != iVar0)
		{
			iVar7 = func_359(iParam7);
			func_362(&sVar2, 9, iVar7, 0);
			iVar3 = func_361(9);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
			{
				if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam8, 1, 4, iVar3, 3))
				{
				}
			}
		}
	}
	if (iVar0 == 104)
	{
		iVar8 = func_372(9, -1);
		bVar1 = true;
		if (bParam2)
		{
			if (iParam10 != 0 || iVar8 == 0)
			{
				if (iParam9 != -1)
				{
					iVar9 = func_369(iParam9 + 1);
					func_366(&sVar2, iVar9, iVar8, 0);
					iVar3 = func_365(9);
					if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
					{
						if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam10, 1, 4, iVar3, 3))
						{
						}
					}
				}
			}
		}
		if ((iParam12 != 0 || iVar8 == 0) || iVar8 != iVar0)
		{
			iVar10 = func_363(iParam11);
			func_362(&sVar2, 10, iVar10, 0);
			iVar3 = func_361(10);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
			{
				if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam12, 1, 4, iVar3, 3))
				{
				}
			}
		}
		if ((iParam14 != 0 || iVar8 == 0) || iVar8 != iVar0)
		{
			iVar11 = func_359(iParam13);
			func_362(&sVar2, 11, iVar11, 0);
			iVar3 = func_361(11);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
			{
				if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam14, 1, 4, iVar3, 3))
				{
				}
			}
		}
	}
	if (iVar0 == 105)
	{
		iVar12 = func_372(10, -1);
		bVar1 = true;
		if (bParam2)
		{
			if (iParam16 != 0 || iVar12 == 0)
			{
				if (iParam15 != -1)
				{
					iVar13 = func_369(iParam15 + 1);
					func_366(&sVar2, iVar13, iVar12, 0);
					iVar3 = func_365(10);
					if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
					{
						if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam16, 1, 4, iVar3, 3))
						{
						}
					}
				}
			}
		}
		if ((iParam18 != 0 || iVar12 == 0) || iVar12 != iVar0)
		{
			iVar14 = func_363(iParam17);
			func_362(&sVar2, 12, iVar14, 0);
			iVar3 = func_361(12);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
			{
				if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam18, 1, 4, iVar3, 3))
				{
				}
			}
		}
		if ((iParam20 != 0 || iVar12 == 0) || iVar12 != iVar0)
		{
			iVar15 = func_359(iParam19);
			func_362(&sVar2, 13, iVar15, 0);
			iVar3 = func_361(13);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
			{
				if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam20, 1, 4, iVar3, 3))
				{
				}
			}
		}
	}
	if (!bVar1)
	{
	}
	return 1;
}

int func_359(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_360(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_360(int iParam0)
{
	if (iParam0 == 0)
	{
		return 6;
	}
	else if (iParam0 == 1)
	{
		return 7;
	}
	else if (iParam0 == 2)
	{
		return 8;
	}
	else if (iParam0 == 3)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 5)
	{
		return 0;
	}
	else if (iParam0 == 6)
	{
		return 5;
	}
	else if (iParam0 == 7)
	{
		return 4;
	}
	else if (iParam0 == 8)
	{
		return 3;
	}
	return 1;
}

int func_361(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_VAR_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_PERSONNEL_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_FONT_PLAYER_OFFICE_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_COLOUR_PLAYER_OFFICE_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_LOCKER_GUN_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_LOCKER_CASH_v0", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_ACCOMMODATION_v0", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_NAME_ID_v0", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR1_LIGHTING_v0", 64);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR2_LIGHTING_v0", 64);
			break;
		
		case 12:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR3_LIGHTING_v0", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR1_NUMBERING_v0", 64);
			break;
		
		case 11:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR2_NUMBERING_v0", 64);
			break;
		
		case 13:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR3_NUMBERING_v0", 64);
			break;
		
		case 14:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_MODSHOP_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_362(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	char cVar0[16];
	
	switch (iParam1)
	{
		case 0:
			return;
			break;
		
		case 1:
			StringCopy(&cVar0, "PM_PERSON_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 2:
			StringCopy(&cVar0, "PM_FONT_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 3:
			StringCopy(&cVar0, "PM_COLOUR_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 4:
			StringCopy(&cVar0, "PM_GUNLOCK_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 5:
			StringCopy(&cVar0, "PM_CASHLOCK_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 6:
			StringCopy(&cVar0, "PM_ACCOM_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 7:
			StringCopy(&cVar0, "PM_NAME_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 8:
		case 10:
		case 12:
			StringCopy(&cVar0, "PM_GLIGHT_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 9:
		case 11:
		case 13:
			StringCopy(&cVar0, "PM_GNUMBER_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
		
		case 14:
			StringCopy(&cVar0, "PM_MODSHOP_", 16);
			StringIntConCat(&cVar0, iParam2, 16);
			break;
	}
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &cVar0, 64);
	StringConCat(sParam0, "_t", 64);
	StringIntConCat(sParam0, iParam3, 64);
	StringConCat(sParam0, "_v0", 64);
}

int func_363(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_364(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_364(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 1)
	{
		return 3;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 3)
	{
		return 6;
	}
	else if (iParam0 == 4)
	{
		return 5;
	}
	else if (iParam0 == 5)
	{
		return 4;
	}
	else if (iParam0 == 6)
	{
		return 7;
	}
	else if (iParam0 == 7)
	{
		return 1;
	}
	else if (iParam0 == 8)
	{
		return 8;
	}
	return 1;
}

int func_365(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_0_v0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_1_v0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_2_v0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_3_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_4_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_VAR_v0", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_PROP_CLUBHOUSE_VAR_v0", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_APPARTMENT_VAR_5_v0", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR1_VAR_v0", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR2_VAR_v0", 64);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_STAT_PROP_OFFICE_GAR3_VAR_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_366(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	char cVar0[16];
	
	StringCopy(&cVar0, func_367(iParam1, iParam2), 16);
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &cVar0, 64);
	StringConCat(sParam0, "_t", 64);
	StringIntConCat(sParam0, iParam3, 64);
	StringConCat(sParam0, "_v0", 64);
}

char* func_367(int iParam0, int iParam1)
{
	if (func_368(iParam1) == 83)
	{
		switch (iParam0)
		{
			case 0:
				return "PM_APT_VAR_0";
				break;
			
			case 1:
				return "PM_APT_VAR_1";
				break;
			
			case 2:
				return "PM_APT_VAR_2";
				break;
			
			case 3:
				return "PM_APT_VAR_3";
				break;
			
			case 4:
				return "PM_APT_VAR_4";
				break;
			
			case 5:
				return "PM_APT_VAR_5";
				break;
			
			case 6:
				return "PM_APT_VAR_6";
				break;
			
			case 7:
				return "PM_APT_VAR_7";
				break;
		}
	}
	else if (func_368(iParam1) == 88)
	{
		switch (iParam0)
		{
			case 0:
				return "PM_OFF_VAR_3";
				break;
			
			case 1:
				return "PM_OFF_VAR_4";
				break;
			
			case 2:
				return "PM_OFF_VAR_5";
				break;
			
			case 3:
				return "PM_OFF_VAR_2";
				break;
			
			case 4:
				return "PM_OFF_VAR_0";
				break;
			
			case 5:
				return "PM_OFF_VAR_1";
				break;
			
			case 6:
				return "PM_OFF_VAR_6";
				break;
			
			case 7:
				return "PM_OFF_VAR_7";
				break;
			
			case 8:
				return "PM_OFF_VAR_8";
				break;
		}
	}
	else if (func_368(iParam1) == 91 || func_368(iParam1) == 97)
	{
		switch (iParam0)
		{
			case 0:
				return "FC_MURAL_0";
				break;
			
			case 1:
				return "FC_MURAL_1";
				break;
			
			case 2:
				return "FC_MURAL_2";
				break;
			
			case 3:
				return "FC_MURAL_3";
				break;
			
			case 4:
				return "FC_MURAL_4";
				break;
			
			case 5:
				return "FC_MURAL_5";
				break;
			
			case 6:
				return "FC_MURAL_6";
				break;
			
			case 7:
				return "FC_MURAL_7";
				break;
			
			case 8:
				return "FC_MURAL_8";
				break;
		}
	}
	else if (func_368(iParam1) == 109)
	{
		switch (iParam0)
		{
			case 0:
				return "PM_OFF_GAR_0";
				break;
			
			case 1:
				return "PM_OFF_GAR_1";
				break;
			
			case 2:
				return "PM_OFF_GAR_2";
				break;
			
			case 3:
				return "PM_OFF_GAR_3";
				break;
			}
	}
	return "NONE";
}

int func_368(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 69:
		case 68:
		case 66:
		case 67:
			return 8;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 17;
			break;
		
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
			return 61;
			break;
		
		case 73:
		case 74:
		case 75:
		case 76:
			return 73;
			break;
		
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
			return 77;
			break;
		
		case 83:
		case 84:
		case 85:
			return 83;
			break;
		
		case 86:
			return 86;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 88;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
			return 91;
			break;
		
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 97;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 109;
			break;
	}
	return -1;
}

int func_369(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < func_371(109))
	{
		if (func_370(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_370(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	else if (iParam0 == 1)
	{
		return 2;
	}
	else if (iParam0 == 2)
	{
		return 4;
	}
	else if (iParam0 == 3)
	{
		return 3;
	}
	return 1;
}

int func_371(int iParam0)
{
	if (func_368(iParam0) == 83)
	{
		return 8;
	}
	else if (func_368(iParam0) == 88)
	{
		return 9;
	}
	else if (func_368(iParam0) == 91 || func_368(iParam0) == 97)
	{
		return 9;
	}
	else if (func_368(iParam0) == 109)
	{
		return 4;
	}
	return 0;
}

int func_372(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam1;
	if (iParam1 == -1)
	{
		iVar0 = func_51();
	}
	if (iParam0 == 7 && !Global_262145.f_16308)
	{
		return 0;
	}
	if (iParam0 >= 1000)
	{
		iVar1 = func_373(iParam0);
		if (iVar1 == 0 && func_2029(5376, iParam1, 0) != 0)
		{
			return 1234;
		}
	}
	if (iParam0 == 0)
	{
		return Global_1368219[iVar0];
	}
	else if (iParam0 == 99)
	{
		return Global_2549282[iVar0];
	}
	else if (iParam0 >= 1)
	{
		if (iParam0 >= 14)
		{
			return 0;
		}
		return Global_2549199[(iParam0 - 1) /*3*/][iVar0];
	}
	return 0;
}

int func_373(int iParam0)
{
	iParam0 = (iParam0 - 1000);
	if (iParam0 >= 0 && iParam0 <= 1)
	{
		return iParam0;
	}
	return -1;
}

int func_374(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	iVar1 = func_372(6, -1);
	iVar2 = func_380(iParam0);
	if (!func_403(iParam0))
	{
	}
	if ((iParam3 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 0, iParam2, 0);
		iVar4 = func_375(0);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam3, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam5 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 1, iParam4, 0);
		iVar4 = func_375(1);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam5, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam7 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 2, iParam6, 0);
		iVar4 = func_375(2);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam7, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam9 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		if (iParam8 != -1)
		{
			iVar5 = 0;
			func_366(&sVar3, iParam8, iVar2, iVar5);
			iVar4 = func_375(3);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
			{
				if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam9, 1, 4, iVar4, 3))
				{
				}
				else
				{
					iVar0 = 0;
				}
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam11 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 10, iParam10, 0);
		iVar4 = func_375(10);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam11, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam13 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		iVar6 = 0;
		if (iParam13 == 0)
		{
			iVar6 = 1;
		}
		func_376(&sVar3, 4, iParam12, iVar6);
		iVar4 = func_375(4);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam13, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam14 != func_2029(3809, -1, 0) || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 5, iParam14, 0);
		iVar4 = func_375(5);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam15, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam16 != func_2029(3819, -1, 0) || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 7, iParam16, 0);
		iVar4 = func_375(7);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam17, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam19 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 6, iParam18, 0);
		iVar4 = func_375(6);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam19, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam21 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 8, iParam20, 0);
		iVar4 = func_375(8);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam21, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	if ((iParam23 != 0 || iVar1 == 0) || iVar1 != iVar2)
	{
		func_376(&sVar3, 9, iParam22, 0);
		iVar4 = func_375(9);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar3)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar4))
		{
			if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar3), 1372920054, 1, iParam23, 1, 4, iVar4, 3))
			{
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_375(int iParam0)
{
	char cVar0[64];
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_WALL_V0", 64);
			break;
		
		case 1:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_HANGING_V0", 64);
			break;
		
		case 2:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_FURNITURE_V0", 64);
			break;
		
		case 3:
			StringCopy(&cVar0, "MP_STAT_PROP_CLUBHOUSE_VAR_v0", 64);
			break;
		
		case 4:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_FONT_v0", 64);
			break;
		
		case 5:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_COLOUR_v0", 64);
			break;
		
		case 6:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_EMBLEM_v0", 64);
			break;
		
		case 7:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_SINAGEHIDE_v0", 64);
			break;
		
		case 8:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_GUNLOCKER_v0", 64);
			break;
		
		case 9:
			StringCopy(&cVar0, "MP_STAT_CLBHOS_GARAGE_v0", 64);
			break;
		
		case 10:
			StringCopy(&cVar0, "MP_STAT_PROP_CLBHOSE_NAME_ID_v0", 64);
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&cVar0);
}

void func_376(char* sParam0, int iParam1, int iParam2, int iParam3)
{
	char cVar0[32];
	
	switch (iParam1)
	{
		case 0:
			StringCopy(&cVar0, "PM_BWALL_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 1:
			StringCopy(&cVar0, "PM_BHANGING_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 2:
			StringCopy(&cVar0, "PM_BFURNITURE_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 3:
			return;
			break;
		
		case 4:
			StringCopy(&cVar0, "PM_BFONT_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 5:
			StringCopy(&cVar0, "PM_BFCOLOUR_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 6:
			StringCopy(&cVar0, "PM_BEMBLEM_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 7:
			StringCopy(&cVar0, "PM_BHIDESINAGE_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 8:
			StringCopy(&cVar0, "PM_BGUNLOCK_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 9:
			StringCopy(&cVar0, "PM_BGARAGE_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
		
		case 10:
			StringCopy(&cVar0, "PM_BNAME_", 32);
			StringIntConCat(&cVar0, iParam2, 32);
			break;
	}
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &cVar0, 64);
	StringConCat(sParam0, "_t", 64);
	StringIntConCat(sParam0, iParam3, 64);
	StringConCat(sParam0, "_v0", 64);
}

int func_377(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = (SYSTEM::SHIFT_LEFT(1, iParam2) - 1);
	iVar0 = SYSTEM::SHIFT_LEFT(iVar0, iParam1);
	return SYSTEM::SHIFT_RIGHT((iParam0 && iVar0), iParam1);
}

void func_378(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	if (iParam0 != -1)
	{
		*uParam1 = func_377(HUD::_0xE3B05614DCE1D014(13), 6, 1);
		*uParam2 = func_377(HUD::_0xE3B05614DCE1D014(13), 7, 1);
		*uParam3 = func_377(HUD::_0xE3B05614DCE1D014(13), 8, 1);
		*uParam4 = func_379(iParam0, func_377(HUD::_0xE3B05614DCE1D014(13), 9, 4));
		*uParam5 = func_377(HUD::_0xE3B05614DCE1D014(13), 13, 4);
		*uParam6 = func_377(HUD::_0xE3B05614DCE1D014(13), 17, 4);
		*uParam7 = func_377(HUD::_0xE3B05614DCE1D014(13), 21, 4);
		*uParam8 = func_377(HUD::_0xE3B05614DCE1D014(13), 25, 1);
		*uParam9 = func_377(HUD::_0xE3B05614DCE1D014(13), 26, 1);
		*uParam10 = func_377(HUD::_0xE3B05614DCE1D014(13), 27, 1);
	}
	else
	{
		*uParam1 = -1;
		*uParam2 = -1;
		*uParam3 = -1;
		*uParam4 = -1;
		*uParam5 = -1;
		*uParam6 = -1;
		*uParam7 = -1;
		*uParam8 = -1;
		*uParam9 = -1;
		*uParam10 = -1;
	}
}

int func_379(int iParam0, int iParam1)
{
	if (func_368(iParam0) == 91)
	{
		if (iParam1 == 0)
		{
			return 0;
		}
		else if (iParam1 == 1)
		{
			return 8;
		}
		else if (iParam1 == 2)
		{
			return 2;
		}
		else if (iParam1 == 3)
		{
			return 7;
		}
		else if (iParam1 == 4)
		{
			return 3;
		}
		else if (iParam1 == 5)
		{
			return 4;
		}
		else if (iParam1 == 6)
		{
			return 6;
		}
		else if (iParam1 == 7)
		{
			return 5;
		}
		else if (iParam1 == 8)
		{
			return 1;
		}
	}
	else if (func_368(iParam0) == 97)
	{
		if (iParam1 == 0)
		{
			return 0;
		}
		else if (iParam1 == 1)
		{
			return 1;
		}
		else if (iParam1 == 2)
		{
			return 2;
		}
		else if (iParam1 == 3)
		{
			return 3;
		}
		else if (iParam1 == 4)
		{
			return 4;
		}
		else if (iParam1 == 5)
		{
			return 5;
		}
		else if (iParam1 == 6)
		{
			return 6;
		}
		else if (iParam1 == 7)
		{
			return 7;
		}
		else if (iParam1 == 8)
		{
			return 8;
		}
	}
	if (iParam1 == -1)
	{
		return -1;
	}
	return 0;
}

int func_380(int iParam0)
{
	switch (iParam0)
	{
		case -478466224:
			return 91;
			break;
		
		case 111212090:
			return 92;
			break;
		
		case 645672296:
			return 93;
			break;
		
		case -868457959:
			return 94;
			break;
		
		case 1644649416:
			return 94;
			break;
		
		case -845092891:
			return 95;
			break;
		
		case -1953551687:
			return 96;
			break;
		
		case 412279299:
			return 97;
			break;
		
		case 1321175690:
			return 98;
			break;
		
		case 497314609:
			return 99;
			break;
		
		case -1584611559:
			return 100;
			break;
		
		case -1814582843:
			return 101;
			break;
		
		case 1647292327:
			return 102;
			break;
	}
	return 0;
}

int func_381()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = false;
	if (!func_580())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	iVar2 = func_266();
	if (iVar2 == -1)
	{
		return 0;
	}
	if (!bVar0)
	{
		if (!NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_51()) || NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			if (func_382(Global_4261865[iVar2 /*80*/].f_6, Global_4261865[iVar2 /*80*/].f_4, Global_4261865[iVar2 /*80*/].f_1) == 1)
			{
				Global_4262415 = 1;
			}
			return 0;
		}
		if (Global_2457985)
		{
			if (Global_4261865[iVar2 /*80*/].f_6 == 1067618600 || Global_4261865[iVar2 /*80*/].f_6 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	iVar3 = func_265(iVar2);
	if (iVar3 != 2147483647)
	{
		if ((bVar0 || iVar1) || NETSHOP::_NETWORK_SHOP_CHECKOUT_START(iVar3))
		{
			Global_4261865[iVar2 /*80*/].f_74 = 1;
			Global_4261865[iVar2 /*80*/].f_73 = 0;
			Global_4261865[iVar2 /*80*/].f_75 = MISC::GET_FRAME_COUNT();
			if (bVar0)
			{
				Global_4261865[iVar2 /*80*/].f_69 = 1;
				Global_4261865[iVar2 /*80*/].f_73 = 1;
			}
			Global_4261865[iVar2 /*80*/].f_79 = 0;
			Global_4262402 = 1;
			return 1;
		}
	}
	return 0;
}

int func_382(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == -433440095 || iParam0 == 1474183246)
	{
		switch (iParam1)
		{
			case 1940862352:
				if (iParam2 >= 10000)
				{
					return 1;
				}
				else
				{
					return 0;
				}
				break;
			
			case -31156877:
			case -327918414:
			case 550898518:
			case 835976347:
			case 1347433368:
				if (iParam2 >= 1000)
				{
					return 1;
				}
				else
				{
					return 2;
				}
				break;
			
			case 1982688246:
				return 0;
				break;
			
			case 1718438689:
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
			case -664597565:
			case 599804707:
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
				return 1;
				break;
			
			case 1515774909:
			case 1173654533:
			case -899802304:
			case -663944335:
			case 1208553146:
			case -613221010:
			case -671062876:
			case 291576838:
			case -1276678868:
			case 711665950:
			case -407201236:
			case -754024203:
			case -1885444887:
			case 1931729587:
			case 1064954035:
			case -180141073:
			case 2131324797:
			case 283351220:
			case 1108628223:
			case -876847842:
			case 68030260:
				return 2;
				break;
			
			default:
				return 0;
				break;
		}
	}
	else if ((iParam0 == -1134853190 || iParam0 == 925407197) || iParam0 == -1589378882)
	{
		return 0;
	}
	return 1;
}

int func_383(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = func_372(5, -1);
	iVar1 = func_387(iParam0);
	if (!func_404(iParam0))
	{
	}
	if (iParam3 != 0 || iVar0 == 0)
	{
		if (iParam2 != -1)
		{
			iVar4 = 0;
			func_366(&sVar2, iParam2, iVar1, iVar4);
			iVar3 = func_361(0);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
			{
				if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam3, 1, 4, iVar3, 3))
				{
				}
			}
		}
	}
	if (iParam4 != func_2029(3211, -1, 0) || iVar0 == 0)
	{
		iVar5 = 0;
		if (iParam5 == 0)
		{
			iVar5 = 1;
		}
		func_362(&sVar2, 1, iParam4, iVar5);
		iVar3 = func_361(1);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam5, 1, 4, iVar3, 3))
			{
			}
		}
	}
	if (iParam7 != 0 || iVar0 == 0)
	{
		func_362(&sVar2, 7, iParam6, 0);
		iVar3 = func_361(7);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam7, 1, 4, iVar3, 3))
			{
			}
		}
	}
	if ((iParam9 != 0 || iVar0 == 0) || iVar0 != iVar1)
	{
		iVar6 = 0;
		if (iParam9 == 0)
		{
			iVar6 = 1;
		}
		func_362(&sVar2, 2, iParam8, iVar6);
		iVar3 = func_361(2);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam9, 1, 4, iVar3, 3))
			{
			}
		}
	}
	if ((iParam10 != func_2029(3690, -1, 0) || iVar0 == 0) || iVar0 != iVar1)
	{
		func_362(&sVar2, 3, iParam10, 0);
		iVar3 = func_361(3);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam11, 1, 4, iVar3, 3))
			{
			}
		}
	}
	if (iParam13 != 0 || iVar0 == 0)
	{
		func_362(&sVar2, 4, iParam12, 0);
		iVar3 = func_361(4);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam13, 1, 4, iVar3, 3))
			{
			}
		}
	}
	if (iParam15 != 0 || iVar0 == 0)
	{
		func_362(&sVar2, 5, iParam14, 0);
		iVar3 = func_361(5);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam15, 1, 4, iVar3, 3))
			{
			}
		}
	}
	if (iParam17 != 0 || iVar0 == 0)
	{
		func_362(&sVar2, 6, iParam16, 0);
		iVar3 = func_361(6);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
		{
			if (!func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam17, 1, 4, iVar3, 3))
			{
			}
		}
	}
	if (iParam18 != 0)
	{
		if ((iParam18 != func_2029(5294, -1, 0) || iVar0 == 0) || iVar0 != iVar1)
		{
			iVar7 = func_385(iParam18);
			if (!func_384())
			{
				if (iVar7 == 0)
				{
					func_362(&sVar2, 14, 1, iVar1);
				}
				else
				{
					func_362(&sVar2, 14, iVar7 + 1, iVar1);
				}
			}
			else
			{
				func_362(&sVar2, 14, iVar7 + 1, 0);
			}
			iVar3 = func_361(14);
			if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(MISC::GET_HASH_KEY(&sVar2)) && NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
			{
				if (func_388(78225582, iParam1, MISC::GET_HASH_KEY(&sVar2), 1372920054, 1, iParam19, 1, 4, iVar3, 3))
				{
				}
			}
		}
	}
	return 1;
}

bool func_384()
{
	return func_2029(5294, -1, 0) != 0;
}

int func_385(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (func_386(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_386(int iParam0)
{
	if (iParam0 == 0)
	{
		return 20;
	}
	else if (iParam0 == 1)
	{
		return 18;
	}
	else if (iParam0 == 2)
	{
		return 16;
	}
	else if (iParam0 == 3)
	{
		return 17;
	}
	else if (iParam0 == 4)
	{
		return 19;
	}
	else if (iParam0 == 5)
	{
		return 6;
	}
	else if (iParam0 == 6)
	{
		return 8;
	}
	else if (iParam0 == 7)
	{
		return 7;
	}
	else if (iParam0 == 8)
	{
		return 9;
	}
	else if (iParam0 == 9)
	{
		return 10;
	}
	else if (iParam0 == 10)
	{
		return 14;
	}
	else if (iParam0 == 11)
	{
		return 15;
	}
	else if (iParam0 == 12)
	{
		return 13;
	}
	else if (iParam0 == 13)
	{
		return 12;
	}
	else if (iParam0 == 14)
	{
		return 11;
	}
	else if (iParam0 == 15)
	{
		return 5;
	}
	else if (iParam0 == 16)
	{
		return 4;
	}
	else if (iParam0 == 17)
	{
		return 1;
	}
	else if (iParam0 == 18)
	{
		return 2;
	}
	else if (iParam0 == 19)
	{
		return 3;
	}
	return 1;
}

int func_387(int iParam0)
{
	switch (iParam0)
	{
		case -784377220:
			return 87;
			break;
		
		case -513584270:
			return 88;
			break;
		
		case -1602495843:
			return 88;
			break;
		
		case 615718995:
			return 89;
			break;
		
		case -1853414437:
			return 90;
			break;
	}
	return 0;
}

int func_388(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	bool bVar0;
	int iVar1;
	struct<4> Var2;
	
	bVar0 = false;
	if (!func_580())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_51()) || NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam1 == 1067618600 || iParam1 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	if (iParam2 == 0)
	{
		return 0;
	}
	iVar1 = func_266();
	if (iVar1 == -1)
	{
		if (!func_390(&iVar1, iParam0, iParam1, iParam3, iParam7, iParam9))
		{
			return 0;
		}
	}
	if (iVar1 != -1)
	{
		if (iParam8 != 0 && func_389(iParam1))
		{
			Var2 = iParam8;
			Var2.f_1 = iParam2;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		else
		{
			Var2 = iParam2;
			Var2.f_1 = iParam8;
			Var2.f_2 = iParam5;
			Var2.f_3 = iParam6;
		}
		Global_4261865[iVar1 /*80*/].f_1 = Var2.f_2;
		Global_4261865[iVar1 /*80*/].f_76 = Var2;
		Global_4261865[iVar1 /*80*/].f_77 = Var2.f_1;
		if (bVar0 || NETSHOP::_NETWORK_SHOP_BASKET_ADD_ITEM(&Var2, iParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_389(int iParam0)
{
	switch (iParam0)
	{
		case -221807075:
		case -1224924353:
		case -2121967344:
		case 1394405165:
		case -2052814106:
		case 1701289268:
		case -1796535835:
		case -1928802392:
		case 581564040:
		case 23048035:
		case 2117376854:
		case -1377881127:
		case -504675202:
		case 1906937290:
		case -1616616027:
		case -1799524201:
		case 269396419:
		case 69656641:
		case -103880010:
		case -1494913648:
			return 1;
			break;
	}
	return 0;
}

int func_390(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	
	bVar0 = false;
	if (!func_580())
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (!NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_51()) || NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			Global_4262415 = 1;
			return 0;
		}
		if (Global_2457985)
		{
			if (iParam2 == 1067618600 || iParam2 == -1303831698)
			{
				Global_4262416 = 1;
				return 0;
			}
		}
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (Global_4261865[iVar1 /*80*/].f_2 == 0)
		{
			bVar2 = true;
		}
		else if (Global_4261865[iVar1 /*80*/].f_5 == 1)
		{
			return 0;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return 0;
	}
	*iParam0 = 0;
	if (!bVar0)
	{
		if (NETSHOP::_0xE547E9114277098F())
		{
			NETSHOP::_NETWORK_SHOP_BASKET_END();
		}
	}
	if (bVar0 || NETSHOP::_NETWORK_SHOP_BASKET_START(&uVar3, iParam2, iParam3, iParam4))
	{
		*iParam0 = func_391(uVar3, uParam1, -2085313189, iParam3, iParam2, 0, 1, iParam4, uParam5, 0);
		return 1;
	}
	return 0;
}

int func_391(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_4261865[iVar0 /*80*/].f_2 == 0)
		{
			if (!func_580())
			{
				uParam0 = iVar0 + 900;
			}
			Global_4261865[iVar0 /*80*/].f_2 = 1;
			Global_4261865[iVar0 /*80*/].f_1 = iParam5;
			Global_4261865[iVar0 /*80*/].f_3 = uParam1;
			Global_4261865[iVar0 /*80*/].f_4 = iParam2;
			Global_4261865[iVar0 /*80*/].f_7 = iParam3;
			Global_4261865[iVar0 /*80*/].f_5 = 0;
			Global_4261865[iVar0 /*80*/] = uParam0;
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

void func_392(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7, var uParam8, var uParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	*uParam0 = func_393(func_377(HUD::_0xE3B05614DCE1D014(12), 6, 4));
	*uParam1 = func_377(HUD::_0xE3B05614DCE1D014(12), 10, 1);
	*uParam2 = func_377(HUD::_0xE3B05614DCE1D014(12), 11, 4);
	*uParam3 = func_377(HUD::_0xE3B05614DCE1D014(12), 15, 4);
	*uParam4 = func_377(HUD::_0xE3B05614DCE1D014(12), 19, 1);
	*uParam5 = func_377(HUD::_0xE3B05614DCE1D014(12), 20, 1);
	*uParam6 = func_377(HUD::_0xE3B05614DCE1D014(12), 21, 1);
	if (func_377(HUD::_0xE3B05614DCE1D014(14), 7, 1) == 0)
	{
		*iParam7 = -1;
		*uParam8 = -1;
		*uParam9 = -1;
	}
	else
	{
		*iParam7 = func_370(func_377(HUD::_0xE3B05614DCE1D014(14), 8, 2));
		*uParam8 = func_364(func_377(HUD::_0xE3B05614DCE1D014(14), 10, 4));
		*uParam9 = func_360(func_377(HUD::_0xE3B05614DCE1D014(14), 14, 4));
	}
	if (func_377(HUD::_0xE3B05614DCE1D014(14), 18, 1) == 0)
	{
		*iParam10 = -1;
		*uParam11 = -1;
		*uParam12 = -1;
	}
	else
	{
		*iParam10 = func_370(func_377(HUD::_0xE3B05614DCE1D014(14), 19, 2));
		*uParam11 = func_364(func_377(HUD::_0xE3B05614DCE1D014(14), 21, 4));
		*uParam12 = func_360(func_377(HUD::_0xE3B05614DCE1D014(14), 25, 4));
	}
	if (func_377(HUD::_0xE3B05614DCE1D014(15), 7, 1) == 0)
	{
		*uParam13 = -1;
		*uParam14 = -1;
		*uParam15 = -1;
	}
	else
	{
		*uParam13 = func_370(func_377(HUD::_0xE3B05614DCE1D014(15), 8, 2));
		*uParam14 = func_364(func_377(HUD::_0xE3B05614DCE1D014(15), 10, 4));
		*uParam15 = func_360(func_377(HUD::_0xE3B05614DCE1D014(15), 14, 4));
	}
	if (func_377(HUD::_0xE3B05614DCE1D014(15), 18, 1) == 0)
	{
		*uParam16 = 0;
	}
	else
	{
		*uParam16 = func_386(func_377(HUD::_0xE3B05614DCE1D014(15), 19, 5));
	}
}

int func_393(int iParam0)
{
	if (iParam0 == 0)
	{
		return 5;
	}
	else if (iParam0 == 1)
	{
		return 6;
	}
	else if (iParam0 == 2)
	{
		return 4;
	}
	else if (iParam0 == 3)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 2;
	}
	else if (iParam0 == 5)
	{
		return 3;
	}
	else if (iParam0 == 6)
	{
		return 7;
	}
	else if (iParam0 == 7)
	{
		return 8;
	}
	else if (iParam0 == 8)
	{
		return 9;
	}
	return 1;
}

int func_394(int iParam0)
{
	if (func_404(iParam0))
	{
		return 0;
	}
	else if (func_403(iParam0))
	{
		return 0;
	}
	else if (func_402(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_395(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 1;
	}
	if (func_404(iParam0))
	{
		if ((iParam0 == -513584270 && iParam1 == -1602495843) || (iParam0 == -1602495843 && iParam1 == -513584270))
		{
			return 1;
		}
	}
	else if (func_402(iParam0))
	{
	}
	else if (func_403(iParam0))
	{
		if ((iParam0 == -868457959 && iParam1 == 1644649416) || (iParam0 == 1644649416 && iParam1 == -868457959))
		{
			return 1;
		}
	}
	else if (func_399(iParam0))
	{
		if ((iParam0 == -753866977 && iParam1 == -1492602261) || (iParam0 == -1492602261 && iParam1 == -753866977))
		{
			return 1;
		}
	}
	else
	{
		if ((iParam0 == -2069398050 && iParam1 == 1373440755) || (iParam0 == 1373440755 && iParam1 == -2069398050))
		{
			return 1;
		}
		if ((iParam0 == 1271032342 && iParam1 == -426168528) || (iParam0 == -426168528 && iParam1 == 1271032342))
		{
			return 1;
		}
	}
	if (Global_69676 != 0 && Global_69677 != 0)
	{
		if ((iParam0 == Global_69676 && iParam1 == Global_69677) || (iParam0 == Global_69677 && iParam1 == Global_69676))
		{
			return 1;
		}
	}
	return 0;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case 739442662:
			return 1;
			break;
	}
	return 0;
}

bool func_397(int iParam0)
{
	return func_323(iParam0) != 0;
}

bool func_398(int iParam0)
{
	return func_331(iParam0) != 0;
}

bool func_399(int iParam0)
{
	return func_339(iParam0) != 0;
}

int func_400(int iParam0)
{
	switch (iParam0)
	{
		case 1281751434:
		case -754272709:
			return 1;
			break;
	}
	return 0;
}

int func_401(int iParam0)
{
	switch (iParam0)
	{
		case 1611602018:
			return 103;
			break;
		
		case -45011037:
			return 104;
			break;
		
		case 1018643211:
			return 105;
			break;
	}
	return 0;
}

bool func_402(int iParam0)
{
	return func_401(iParam0) != 0;
}

bool func_403(int iParam0)
{
	return func_380(iParam0) != 0;
}

bool func_404(int iParam0)
{
	return func_387(iParam0) != 0;
}

int func_405()
{
	char* sVar0;
	
	func_406(&sVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_406(char* sParam0)
{
	StringCopy(sParam0, "MP_STAT_DBASE_OWNED_v0", 64);
}

int func_407(int iParam0)
{
	char* sVar0;
	
	func_324(&sVar0, iParam0);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_408(var uParam0)
{
	*uParam0 = func_377(HUD::_0xE3B05614DCE1D014(13), 0, 6);
	uParam0->f_1 = func_377(HUD::_0xE3B05614DCE1D014(13), 6, 4);
	uParam0->f_2 = func_263(func_377(HUD::_0xE3B05614DCE1D014(13), 10, 4));
	uParam0->f_3 = func_377(HUD::_0xE3B05614DCE1D014(13), 14, 1);
	uParam0->f_4 = func_377(HUD::_0xE3B05614DCE1D014(13), 15, 1);
	uParam0->f_5 = func_377(HUD::_0xE3B05614DCE1D014(13), 16, 2);
	uParam0->f_6 = func_377(HUD::_0xE3B05614DCE1D014(13), 18, 2);
	uParam0->f_7 = func_377(HUD::_0xE3B05614DCE1D014(13), 20, 1);
}

void func_409(int iParam0)
{
	if (!Global_14453.f_1 == 1)
	{
		if (func_410(0))
		{
			func_1989(iParam0);
		}
		MISC::SET_BIT(&Global_2324, 2);
	}
}

int func_410(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_14453.f_1 > 3)
		{
			if (MISC::IS_BIT_SET(Global_2323, 14))
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
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

void func_411()
{
	Global_17162.f_6 = 1;
}

int func_412()
{
	if (Global_70856 && func_12())
	{
		return 0;
	}
	if (!Global_70856 && func_11())
	{
		return 0;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	return 1;
}

int func_413(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || func_13()) || !func_560(PLAYER::PLAYER_ID(), 1, 1)) || Global_1312782) || Global_1312787) || Global_2447954.f_3433.f_32)
	{
		if (Global_1312787)
		{
		}
		*iParam1 = -1;
		func_559(uParam0, -1);
		return 1;
	}
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_558();
	func_411();
	PAD::SET_INPUT_EXCLUSIVE(2, 202);
	PAD::SET_INPUT_EXCLUSIVE(2, 201);
	PAD::SET_INPUT_EXCLUSIVE(2, 189);
	PAD::SET_INPUT_EXCLUSIVE(2, 190);
	PAD::SET_INPUT_EXCLUSIVE(2, 174);
	PAD::SET_INPUT_EXCLUSIVE(2, 175);
	PAD::SET_INPUT_EXCLUSIVE(2, 180);
	PAD::SET_INPUT_EXCLUSIVE(2, 181);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		PAD::SET_INPUT_EXCLUSIVE(0, 24);
		PAD::SET_INPUT_EXCLUSIVE(0, 257);
		PAD::ENABLE_CONTROL_ACTION(2, 237, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 238, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 242, 1);
		PAD::ENABLE_CONTROL_ACTION(2, 241, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 2, 1);
		PAD::DISABLE_CONTROL_ACTION(2, 1, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 257, 1);
		if (!HUD::IS_PAUSE_MENU_ACTIVE() && !HUD::IS_WARNING_MESSAGE_ACTIVE())
		{
			PAD::SET_INPUT_EXCLUSIVE(2, 202);
			PAD::SET_INPUT_EXCLUSIVE(2, 201);
		}
		func_555(0, 0, 0, 1);
		HUD::_SHOW_CURSOR_THIS_FRAME();
	}
	MISC::SET_BIT(&(uParam0->f_201), 1);
	if (func_553(0, -1, 0))
	{
		if (func_560(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_201, 0))
			{
				if (iParam4 == 1)
				{
					func_550(uParam0, iParam2);
					MISC::SET_BIT(&(uParam0->f_201), 0);
					func_548(uParam0, iParam2);
					if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
					{
						func_527(1, -1, 1, 0, 1, -1082130432, 0, 0);
					}
				}
				else if (iParam4 == 2)
				{
					func_525(uParam0, iParam2);
					MISC::SET_BIT(&(uParam0->f_201), 0);
					func_523(uParam0);
					if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
					{
						func_527(1, -1, 1, 0, 1, -1082130432, 0, 0);
					}
				}
				else if (iParam4 == 3)
				{
					func_520(uParam0, iParam2);
					MISC::SET_BIT(&(uParam0->f_201), 0);
					func_518(uParam0);
					if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
					{
						func_527(1, -1, 1, 0, 1, -1082130432, 0, 0);
					}
				}
				else
				{
					func_489(uParam0, iParam3);
					MISC::SET_BIT(&(uParam0->f_201), 0);
					func_481(uParam0, iParam2);
					if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
					{
						func_527(1, -1, 1, 0, 1, -1082130432, 0, 0);
					}
				}
			}
			else if (((!HUD::IS_PAUSE_MENU_ACTIVE() && !func_18(8, -1)) && !Global_2447174.f_671.f_5) && !((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT()))
			{
				if (!MISC::IS_BIT_SET(uParam0->f_204, 0))
				{
					if ((func_480() || (func_479() && Global_4265875 == uParam0->f_198)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 201)))
					{
						if (iParam4 == 1)
						{
							iVar0 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_477(iParam2)) * Global_262145.f_77));
							if (func_476(iParam2))
							{
								iVar0 = 0;
							}
							iVar1 = func_338(PLAYER::PLAYER_ID());
							iVar2 = func_457(iVar1);
						}
						else if (iParam4 == 2)
						{
							iVar0 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_456(iParam2)) * Global_262145.f_77));
							iVar1 = func_330(PLAYER::PLAYER_ID());
							iVar2 = func_449(iVar1);
						}
						else if (iParam4 == 3)
						{
							iVar0 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_578(iParam2)) * Global_262145.f_77));
							iVar1 = func_577(PLAYER::PLAYER_ID());
							iVar2 = func_561(iVar1);
						}
						else
						{
							iVar0 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(Global_1049531[iParam2 /*1951*/].f_32) * Global_262145.f_77));
							if (func_446(iParam2))
							{
								iVar0 = 0;
							}
							iVar1 = func_372(uParam0->f_1[uParam0->f_198], -1);
							iVar2 = func_428(uParam0->f_1[uParam0->f_198]);
						}
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", true);
						if ((iVar0 - iVar2) <= 0 || NETCASH::NETWORK_CAN_SPEND_MONEY((iVar0 - iVar2), false, true, 0, -1))
						{
							MISC::CLEAR_BIT(&(uParam0->f_201), 2);
							if (!MISC::IS_BIT_SET(uParam0->f_204, 2) && iVar1 != 0)
							{
								if (Global_262145.f_8314 && uParam0->f_1[uParam0->f_198] >= 2)
								{
									MISC::SET_BIT(&(uParam0->f_201), 6);
									MISC::CLEAR_BIT(&(uParam0->f_201), 0);
								}
								else if (func_427(PLAYER::PLAYER_ID()) || func_426(PLAYER::PLAYER_ID()))
								{
									MISC::SET_BIT(&(uParam0->f_201), 5);
								}
								else
								{
									func_423(1, -1);
									MISC::SET_BIT(&(uParam0->f_204), 2);
									MISC::CLEAR_BIT(&(uParam0->f_201), 0);
									return 0;
								}
							}
							else if (Global_262145.f_8314 && uParam0->f_1[uParam0->f_198] >= 2)
							{
								MISC::SET_BIT(&(uParam0->f_201), 6);
								MISC::CLEAR_BIT(&(uParam0->f_201), 0);
							}
							else if (uParam0->f_1[uParam0->f_198] == 0)
							{
								*iParam1 = uParam0->f_1[uParam0->f_198];
								MISC::CLEAR_BIT(&(uParam0->f_201), 0);
								func_559(uParam0, -1);
								return 1;
							}
							else
							{
								*iParam1 = uParam0->f_1[uParam0->f_198];
								MISC::CLEAR_BIT(&(uParam0->f_201), 0);
								func_559(uParam0, -1);
								return 1;
							}
						}
						else
						{
							MISC::SET_BIT(&(uParam0->f_201), 2);
						}
						MISC::SET_BIT(&(uParam0->f_204), 0);
					}
				}
				else if (!PAD::IS_CONTROL_JUST_RELEASED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
				{
					MISC::CLEAR_BIT(&(uParam0->f_204), 0);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_204, 1))
				{
					if ((func_422() || (func_421() && Global_4265875 > -1)) || (HUD::IS_WARNING_MESSAGE_ACTIVE() && PAD::IS_CONTROL_JUST_PRESSED(2, 202)))
					{
						AUDIO::PLAY_SOUND_FRONTEND(-1, "CANCEL", "HUD_FREEMODE_SOUNDSET", true);
						if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
						{
							func_559(uParam0, -1);
							*iParam1 = -1;
							return 1;
						}
						else
						{
							MISC::CLEAR_BIT(&(uParam0->f_204), 2);
							MISC::CLEAR_BIT(&(uParam0->f_201), 0);
						}
						MISC::SET_BIT(&(uParam0->f_204), 1);
					}
				}
				else if (!PAD::IS_CONTROL_PRESSED(2, 202))
				{
					MISC::CLEAR_BIT(&(uParam0->f_204), 1);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
				{
					if (!MISC::IS_BIT_SET(uParam0->f_204, 4))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 172) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 172)) || func_420(0, 0, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							uParam0->f_198 = (uParam0->f_198 - 1);
							MISC::SET_BIT(&(uParam0->f_204), 4);
							MISC::CLEAR_BIT(&(uParam0->f_201), 0);
							func_419(&(uParam0->f_202));
						}
					}
					else if (func_416(uParam0, 172))
					{
						MISC::CLEAR_BIT(&(uParam0->f_204), 4);
					}
					if (!MISC::IS_BIT_SET(uParam0->f_204, 5))
					{
						if ((PAD::IS_CONTROL_PRESSED(2, 173) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 173)) || func_415(0, 0, 0))
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FREEMODE_SOUNDSET", true);
							uParam0->f_198++;
							MISC::SET_BIT(&(uParam0->f_204), 5);
							MISC::CLEAR_BIT(&(uParam0->f_201), 0);
							func_419(&(uParam0->f_202));
						}
					}
					else if (func_416(uParam0, 173))
					{
						MISC::CLEAR_BIT(&(uParam0->f_204), 5);
					}
				}
				if (func_479())
				{
					if (Global_4265875 != uParam0->f_198)
					{
						uParam0->f_198 = Global_4265875;
						func_414(uParam0->f_198, 1, 1);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FREEMODE_SOUNDSET", true);
					}
				}
				if (uParam0->f_198 >= uParam0->f_200)
				{
					uParam0->f_198 = 0;
				}
				if (uParam0->f_198 < 0)
				{
					uParam0->f_198 = (uParam0->f_200 - 1);
				}
				if (iParam4 == 1)
				{
					func_548(uParam0, iParam2);
				}
				else if (iParam4 == 2)
				{
					func_523(uParam0);
				}
				else if (iParam4 == 3)
				{
					func_518(uParam0);
				}
				else
				{
					func_481(uParam0, iParam2);
				}
				if (!MISC::IS_BIT_SET(uParam0->f_204, 2) && !HUD::IS_WARNING_MESSAGE_ACTIVE())
				{
					func_527(1, -1, 1, 0, 1, -1082130432, 0, 0);
				}
			}
		}
	}
	return 0;
}

void func_414(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_5606 = uParam0;
	Global_17301.f_5741 = iParam2;
	if (Global_17301.f_5606 < Global_17301.f_5605)
	{
		Global_17301.f_5605 = Global_17301.f_5606;
	}
	else if ((Global_17301.f_5599 && Global_17301.f_5606 > Global_17301.f_5607) || (!Global_17301.f_5599 && Global_17301.f_5606 >= (Global_17301.f_5605 + Global_17301.f_5095)))
	{
		iVar0 = Global_17301.f_5605;
		while (iVar0 <= Global_17301.f_5606)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_17301.f_4959[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_17301.f_5095 && Global_17301.f_5605 < 128)
		{
			Global_17301.f_5605++;
			iVar1 = 0;
			iVar0 = Global_17301.f_5605;
			while (iVar0 <= Global_17301.f_5606)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_17301.f_4959[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_17301.f_4562), "", 16);
		StringCopy(&(Global_4265799.f_21), "", 16);
	}
}

int func_415(int iParam0, int iParam1, int iParam2)
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_4265875 == -3)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 242) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 242) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_416(var uParam0, int iParam1)
{
	if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, iParam1)) || func_417(&(uParam0->f_202), 250, 1))
	{
		return 1;
	}
	return 0;
}

int func_417(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_418(uParam0, bParam2, 0);
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

void func_418(var uParam0, bool bParam1, bool bParam2)
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

void func_419(var uParam0)
{
	uParam0->f_1 = 0;
}

int func_420(int iParam0, int iParam1, int iParam2)
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_4265875 == -2)
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 237) && iParam0) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
		if (iParam2 == 0)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 241) || (PAD::IS_DISABLED_CONTROL_PRESSED(2, 241) && iParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_421()
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 238))
		{
			return 1;
		}
	}
	return 0;
}

int func_422()
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 177))
	{
		return 1;
	}
	return 0;
}

void func_423(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_425(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_17301.f_7931)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_17301.f_7931 = 0;
	}
	HUD::_CLEAR_NOTIFICATIONS_POS(0f);
	if (Global_17301.f_5498[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_17301.f_5498[iVar0] = 0;
	}
	if (Global_17301.f_5484[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_17301.f_5484[iVar0] = 0;
	}
	if (Global_17301.f_5491[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_17301.f_5491[iVar0] = 0;
	}
	if (bParam0)
	{
		func_424(&(Global_17301.f_5530[iVar0 /*10*/]));
		Global_17301.f_5591[iVar0] = 0;
	}
	else
	{
		Global_17301.f_5591[iVar0] = 0;
	}
}

void func_424(int iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_425(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::_0x638A3A81733086DB();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (Global_17301.f_5591[iVar2] == iVar1)
		{
			*uParam0 = iVar2;
			return 1;
		}
		else if (Global_17301.f_5591[iVar2] == 0)
		{
			iVar3 = iVar2;
		}
		iVar2++;
	}
	if (bParam1)
	{
		if (iVar3 != -1)
		{
			Global_17301.f_5591[iVar3] = iVar1;
			*uParam0 = iVar3;
			return 1;
		}
	}
	return 0;
}

bool func_426(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 2;
}

bool func_427(int iParam0)
{
	return Global_2422736[iParam0 /*420*/].f_130 == 7;
}

int func_428(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_372(iParam0, -1) > 0)
	{
		iVar1 = 0;
		if (func_580())
		{
			iVar1 = SYSTEM::ROUND((IntToFloat(func_438(func_372(iParam0, -1))) * 0.5f));
		}
		if (iParam0 == 0)
		{
			iVar1 = SYSTEM::ROUND((IntToFloat(Global_2097152[func_49() /*12130*/].f_7676.f_3) * 0.5f));
		}
		else if (iParam0 == 1)
		{
			iVar1 = SYSTEM::ROUND((IntToFloat(Global_2097152[func_49() /*12130*/].f_7676.f_1303) * 0.5f));
		}
		else if (iParam0 < 14)
		{
			iVar0 = (iParam0 - 2);
			iVar1 = SYSTEM::ROUND((IntToFloat(Global_2097152[func_49() /*12130*/].f_7676.f_1304[iVar0]) * 0.5f));
		}
		if (iParam0 == 5)
		{
			iVar1 = (iVar1 + func_433(iParam0, 1));
		}
		else if (iParam0 == 6)
		{
			iVar1 = (iVar1 + func_429(iParam0, 1));
		}
		return iVar1;
	}
	return 0;
}

int func_429(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	if (func_432())
	{
		iVar1 = func_431(8, 1);
		iVar0 = (iVar0 + iVar1);
	}
	if (func_430())
	{
		iVar2 = func_431(9, 1);
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam1)
	{
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * 0.5f));
	}
	return iVar0;
}

bool func_430()
{
	return func_2029(3812, -1, 0) != 0;
}

int func_431(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_580())
	{
		iVar0 = iParam1;
		if (iVar0 == -1)
		{
			iVar0 = 0;
		}
		func_376(&sVar1, iParam0, iVar0, 0);
		iVar2 = MISC::GET_HASH_KEY(&sVar1);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar2))
		{
			iVar3 = NETSHOP::_NETWORK_SHOP_GET_PRICE(iVar2, -300552292, 1);
			return iVar3;
		}
	}
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				return Global_262145.f_16859;
			}
			else if (iParam1 == 1)
			{
				return Global_262145.f_16860;
			}
			return 0;
		
		case 1:
			if (iParam1 == 0)
			{
				return Global_262145.f_16861;
			}
			else if (iParam1 == 1)
			{
				return Global_262145.f_16862;
			}
			return 0;
		
		case 2:
			if (iParam1 == 0)
			{
				return Global_262145.f_16863;
			}
			else if (iParam1 == 1)
			{
				return Global_262145.f_16864;
			}
			return 0;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return Global_262145.f_16881;
		
		case 5:
			return 0;
		
		case 6:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_16865;
				
				case 1:
					return Global_262145.f_16866;
				
				case 2:
					return Global_262145.f_16867;
				
				case 3:
					return Global_262145.f_16868;
				
				case 4:
					return Global_262145.f_16869;
				
				case 5:
					return Global_262145.f_16870;
				
				case 6:
					return Global_262145.f_16871;
				
				case 7:
					return Global_262145.f_16872;
				
				case 8:
					return Global_262145.f_16873;
				
				case 9:
					return Global_262145.f_16874;
				
				default:
			}
			break;
		
		case 7:
			return 0;
		
		case 8:
			return Global_262145.f_16882;
		
		case 9:
			return Global_262145.f_16883;
		
		case 10:
			return Global_262145.f_16880;
	}
	return 0;
}

bool func_432()
{
	return func_2029(3811, -1, 0) != 0;
}

int func_433(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	if (func_437())
	{
		iVar1 = func_436(4, -1);
		iVar0 = (iVar0 + iVar1);
	}
	if (func_435())
	{
		iVar2 = func_436(5, -1);
		iVar0 = (iVar0 + iVar2);
	}
	if (func_434())
	{
		iVar3 = func_436(6, -1);
		iVar0 = (iVar0 + iVar3);
	}
	if (bParam1)
	{
		iVar0 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar0) * 0.5f));
	}
	return iVar0;
}

bool func_434()
{
	return func_2029(3214, -1, 0) != 0;
}

bool func_435()
{
	return func_2029(3213, -1, 0) != 0;
}

int func_436(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				return Global_262145.f_14772;
			}
			else if (iParam1 == 1)
			{
				return Global_262145.f_14773;
			}
			return 0;
		
		case 2:
			return Global_262145.f_15636;
		
		case 3:
			return 0;
		
		case 4:
			return Global_262145.f_14774;
		
		case 5:
			return Global_262145.f_14775;
		
		case 6:
			return Global_262145.f_14776;
		
		case 7:
			return Global_262145.f_15635;
		
		case 8:
		case 10:
		case 12:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_18379;
				
				case 1:
					return Global_262145.f_18380;
				
				case 2:
					return Global_262145.f_18381;
				
				case 3:
					return Global_262145.f_18382;
				
				case 4:
					return Global_262145.f_18383;
				
				case 5:
					return Global_262145.f_18384;
				
				case 6:
					return Global_262145.f_18385;
				
				case 7:
					return Global_262145.f_18386;
				
				case 8:
					return Global_262145.f_18387;
				
				default:
			}
			return 0;
			break;
		
		case 9:
		case 11:
		case 13:
			switch (iParam1)
			{
				case 0:
					return Global_262145.f_18388;
				
				case 1:
					return Global_262145.f_18389;
				
				case 2:
					return Global_262145.f_18390;
				
				case 3:
					return Global_262145.f_18391;
				
				case 4:
					return Global_262145.f_18392;
				
				case 5:
					return Global_262145.f_18393;
				
				case 6:
					return Global_262145.f_18394;
				
				case 7:
					return Global_262145.f_18395;
				
				case 8:
					return Global_262145.f_18396;
				
				default:
			}
			return 0;
			break;
		
		case 14:
			switch (iParam1)
			{
				case 0:
					return 0;
				
				case 1:
					return Global_262145.f_18397;
				
				case 2:
					return Global_262145.f_18398;
				
				case 3:
					return Global_262145.f_18399;
				
				case 4:
					return Global_262145.f_18400;
				
				case 5:
					return Global_262145.f_18401;
				
				case 6:
					return Global_262145.f_18402;
				
				case 7:
					return Global_262145.f_18403;
				
				case 8:
					return Global_262145.f_18404;
				
				case 9:
					return Global_262145.f_18405;
				
				case 10:
					return Global_262145.f_18406;
				
				case 11:
					return Global_262145.f_18407;
				
				case 12:
					return Global_262145.f_18408;
				
				case 13:
					return Global_262145.f_18409;
				
				case 14:
					return Global_262145.f_18410;
				
				case 15:
					return Global_262145.f_18411;
				
				case 16:
					return Global_262145.f_18412;
				
				case 17:
					return Global_262145.f_18413;
				
				case 18:
					return Global_262145.f_18414;
				
				case 19:
					return Global_262145.f_18415;
				
				case 20:
					return Global_262145.f_18416;
				
				default:
			}
			return 0;
			break;
	}
	return 0;
}

bool func_437()
{
	return func_2029(3212, -1, 0) != 0;
}

int func_438(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	if (func_580())
	{
		iVar0 = 0;
		bVar1 = false;
		if (func_446(iParam0))
		{
			if (!func_442(iParam0))
			{
				iVar0 = 1;
			}
			else
			{
				bVar1 = true;
			}
		}
		iVar2 = func_439(iParam0, iVar0, bVar1);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar2))
		{
			return NETSHOP::_NETWORK_SHOP_GET_PRICE(iVar2, 426439576, 1);
		}
	}
	return Global_1049531[iParam0 /*1951*/].f_32;
}

int func_439(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	
	func_440(&sVar0, iParam0, iParam1, bParam2);
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_440(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	
	StringCopy(sParam0, "FACTORY_INDEX_", 64);
	Var0 = { func_441(iParam1) };
	StringCopy(sParam0, "PR_", 64);
	StringConCat(sParam0, &Var0, 64);
	StringConCat(sParam0, "_t0_v", 64);
	StringIntConCat(sParam0, iParam2, 64);
	if (bParam3)
	{
		StringConCat(sParam0, "_CESP", 64);
	}
}

struct<4> func_441(int iParam0)
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "MP_PROP_1", 16);
			break;
		
		case 2:
			StringCopy(&Var0, "MP_PROP_2", 16);
			break;
		
		case 3:
			StringCopy(&Var0, "MP_PROP_3", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "MP_PROP_4", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "MP_PROP_5", 16);
			break;
		
		case 6:
			StringCopy(&Var0, "MP_PROP_6", 16);
			break;
		
		case 7:
			StringCopy(&Var0, "MP_PROP_7", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "MP_PROP_8", 16);
			break;
		
		case 9:
			StringCopy(&Var0, "MP_PROP_9", 16);
			break;
		
		case 10:
			StringCopy(&Var0, "MP_PROP_10", 16);
			break;
		
		case 11:
			StringCopy(&Var0, "MP_PROP_11", 16);
			break;
		
		case 12:
			StringCopy(&Var0, "MP_PROP_12", 16);
			break;
		
		case 13:
			StringCopy(&Var0, "MP_PROP_13", 16);
			break;
		
		case 14:
			StringCopy(&Var0, "MP_PROP_14", 16);
			break;
		
		case 15:
			StringCopy(&Var0, "MP_PROP_15", 16);
			break;
		
		case 16:
			StringCopy(&Var0, "MP_PROP_16", 16);
			break;
		
		case 17:
			StringCopy(&Var0, "MP_PROP_17", 16);
			break;
		
		case 18:
			StringCopy(&Var0, "MP_PROP_18", 16);
			break;
		
		case 19:
			StringCopy(&Var0, "MP_PROP_19", 16);
			break;
		
		case 20:
			StringCopy(&Var0, "MP_PROP_20", 16);
			break;
		
		case 21:
			StringCopy(&Var0, "MP_PROP_21", 16);
			break;
		
		case 22:
			StringCopy(&Var0, "MP_PROP_22", 16);
			break;
		
		case 23:
			StringCopy(&Var0, "MP_PROP_23", 16);
			break;
		
		case 24:
			StringCopy(&Var0, "MP_PROP_24", 16);
			break;
		
		case 25:
			StringCopy(&Var0, "MP_PROP_25", 16);
			break;
		
		case 26:
			StringCopy(&Var0, "MP_PROP_26", 16);
			break;
		
		case 27:
			StringCopy(&Var0, "MP_PROP_27", 16);
			break;
		
		case 28:
			StringCopy(&Var0, "MP_PROP_28", 16);
			break;
		
		case 29:
			StringCopy(&Var0, "MP_PROP_29", 16);
			break;
		
		case 30:
			StringCopy(&Var0, "MP_PROP_30", 16);
			break;
		
		case 31:
			StringCopy(&Var0, "MP_PROP_31", 16);
			break;
		
		case 32:
			StringCopy(&Var0, "MP_PROP_32", 16);
			break;
		
		case 33:
			StringCopy(&Var0, "MP_PROP_33", 16);
			break;
		
		case 34:
			StringCopy(&Var0, "MP_PROP_34", 16);
			break;
		
		case 35:
			StringCopy(&Var0, "MP_PROP_35", 16);
			break;
		
		case 36:
			StringCopy(&Var0, "MP_PROP_36", 16);
			break;
		
		case 37:
			StringCopy(&Var0, "MP_PROP_37", 16);
			break;
		
		case 38:
			StringCopy(&Var0, "MP_PROP_38", 16);
			break;
		
		case 39:
			StringCopy(&Var0, "MP_PROP_39", 16);
			break;
		
		case 40:
			StringCopy(&Var0, "MP_PROP_40", 16);
			break;
		
		case 41:
			StringCopy(&Var0, "MP_PROP_41", 16);
			break;
		
		case 42:
			StringCopy(&Var0, "MP_PROP_42", 16);
			break;
		
		case 43:
			StringCopy(&Var0, "MP_PROP_43", 16);
			break;
		
		case 44:
			StringCopy(&Var0, "MP_PROP_44", 16);
			break;
		
		case 45:
			StringCopy(&Var0, "MP_PROP_45", 16);
			break;
		
		case 46:
			StringCopy(&Var0, "MP_PROP_46", 16);
			break;
		
		case 47:
			StringCopy(&Var0, "MP_PROP_48", 16);
			break;
		
		case 48:
			StringCopy(&Var0, "MP_PROP_49", 16);
			break;
		
		case 49:
			StringCopy(&Var0, "MP_PROP_50", 16);
			break;
		
		case 50:
			StringCopy(&Var0, "MP_PROP_51", 16);
			break;
		
		case 51:
			StringCopy(&Var0, "MP_PROP_52", 16);
			break;
		
		case 52:
			StringCopy(&Var0, "MP_PROP_57", 16);
			break;
		
		case 53:
			StringCopy(&Var0, "MP_PROP_59", 16);
			break;
		
		case 54:
			StringCopy(&Var0, "MP_PROP_60", 16);
			break;
		
		case 55:
			StringCopy(&Var0, "MP_PROP_61", 16);
			break;
		
		case 56:
			StringCopy(&Var0, "MP_PROP_62", 16);
			break;
		
		case 57:
			StringCopy(&Var0, "MP_PROP_63", 16);
			break;
		
		case 58:
			StringCopy(&Var0, "MP_PROP_64", 16);
			break;
		
		case 59:
			StringCopy(&Var0, "MP_PROP_65", 16);
			break;
		
		case 60:
			StringCopy(&Var0, "MP_PROP_66", 16);
			break;
		
		case 61:
			StringCopy(&Var0, "MP_PROP_67", 16);
			break;
		
		case 62:
			StringCopy(&Var0, "MP_PROP_68", 16);
			break;
		
		case 63:
			StringCopy(&Var0, "MP_PROP_69", 16);
			break;
		
		case 64:
			StringCopy(&Var0, "MP_PROP_70", 16);
			break;
		
		case 65:
			StringCopy(&Var0, "MP_PROP_71", 16);
			break;
		
		case 66:
			StringCopy(&Var0, "MP_PROP_72", 16);
			break;
		
		case 67:
			StringCopy(&Var0, "MP_PROP_73", 16);
			break;
		
		case 68:
			StringCopy(&Var0, "MP_PROP_74", 16);
			break;
		
		case 69:
			StringCopy(&Var0, "MP_PROP_75", 16);
			break;
		
		case 70:
			StringCopy(&Var0, "MP_PROP_76", 16);
			break;
		
		case 71:
			StringCopy(&Var0, "MP_PROP_77", 16);
			break;
		
		case 72:
			StringCopy(&Var0, "MP_PROP_78", 16);
			break;
		
		case 83:
			StringCopy(&Var0, "MP_PROP_79", 16);
			break;
		
		case 84:
			StringCopy(&Var0, "MP_PROP_80", 16);
			break;
		
		case 85:
			StringCopy(&Var0, "MP_PROP_81", 16);
			break;
		
		case 73:
			StringCopy(&Var0, "MP_PROP_83", 16);
			break;
		
		case 74:
			StringCopy(&Var0, "MP_PROP_84", 16);
			break;
		
		case 75:
			StringCopy(&Var0, "MP_PROP_85", 16);
			break;
		
		case 76:
			StringCopy(&Var0, "MP_PROP_86", 16);
			break;
		
		case 77:
			StringCopy(&Var0, "MP_PROP_87", 16);
			break;
		
		case 78:
			StringCopy(&Var0, "MP_PROP_89", 16);
			break;
		
		case 79:
			StringCopy(&Var0, "MP_PROP_90", 16);
			break;
		
		case 80:
			StringCopy(&Var0, "MP_PROP_92", 16);
			break;
		
		case 81:
			StringCopy(&Var0, "MP_PROP_94", 16);
			break;
		
		case 82:
			StringCopy(&Var0, "MP_PROP_95", 16);
			break;
		
		case 86:
			StringCopy(&Var0, "PM_SPAWN_Y", 16);
			break;
		
		case 87:
			StringCopy(&Var0, "MP_PROP_OFF1", 16);
			break;
		
		case 88:
			StringCopy(&Var0, "MP_PROP_OFF2", 16);
			break;
		
		case 89:
			StringCopy(&Var0, "MP_PROP_OFF3", 16);
			break;
		
		case 90:
			StringCopy(&Var0, "MP_PROP_OFF4", 16);
			break;
		
		case 91:
			StringCopy(&Var0, "MP_PROP_CLUBH1", 16);
			break;
		
		case 92:
			StringCopy(&Var0, "MP_PROP_CLUBH2", 16);
			break;
		
		case 93:
			StringCopy(&Var0, "MP_PROP_CLUBH3", 16);
			break;
		
		case 94:
			StringCopy(&Var0, "MP_PROP_CLUBH4", 16);
			break;
		
		case 95:
			StringCopy(&Var0, "MP_PROP_CLUBH5", 16);
			break;
		
		case 96:
			StringCopy(&Var0, "MP_PROP_CLUBH6", 16);
			break;
		
		case 97:
			StringCopy(&Var0, "MP_PROP_CLUBH7", 16);
			break;
		
		case 98:
			StringCopy(&Var0, "MP_PROP_CLUBH8", 16);
			break;
		
		case 99:
			StringCopy(&Var0, "MP_PROP_CLUBH9", 16);
			break;
		
		case 100:
			StringCopy(&Var0, "MP_PROP_CLUBH10", 16);
			break;
		
		case 101:
			StringCopy(&Var0, "MP_PROP_CLUBH11", 16);
			break;
		
		case 102:
			StringCopy(&Var0, "MP_PROP_CLUBH12", 16);
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
			StringCopy(&Var0, "MP_PROP_OFFG1", 16);
			break;
		
		case 104:
		case 107:
		case 110:
		case 113:
			StringCopy(&Var0, "MP_PROP_OFFG2", 16);
			break;
		
		case 105:
		case 108:
		case 111:
		case 114:
			StringCopy(&Var0, "MP_PROP_OFFG3", 16);
			break;
		
		case 115:
			StringCopy(&Var0, "IE_WARE_1", 16);
			break;
	}
	return Var0;
}

int func_442(int iParam0)
{
	if (func_443())
	{
		if (((iParam0 == 88 || iParam0 == 94) || iParam0 == 18) || iParam0 == 56)
		{
			return 1;
		}
	}
	return 0;
}

bool func_443()
{
	return (func_445() || func_444());
}

int func_444()
{
	switch (unk_0x155467ACA0F55705())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_445()
{
	switch (unk_0x754615490A029508())
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
		
		default:
	}
	return 0;
}

int func_446(int iParam0)
{
	if (func_448() && func_447())
	{
		if (iParam0 == 31)
		{
			return 1;
		}
	}
	if (func_443())
	{
		if (func_442(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_447()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (MISC::IS_BIT_SET(Global_25, 5))
	{
		if (MISC::IS_BIT_SET(Global_25, 1) || MISC::IS_BIT_SET(Global_25, 3))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1))
	{
		if (MISC::IS_BIT_SET(iVar0, 5))
		{
			if (MISC::IS_BIT_SET(iVar0, 1) || MISC::IS_BIT_SET(iVar0, 3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_143075.f_3)
		{
			iVar2 = joaat("mpply_plat_up_lb_check");
			if (STATS::STAT_GET_INT(iVar2, &iVar1, -1))
			{
				if (MISC::IS_BIT_SET(iVar1, 5))
				{
					return 1;
				}
			}
		}
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		iVar3 = MISC::GET_PROFILE_SETTING(866);
		if (MISC::IS_BIT_SET(iVar3, 1) || MISC::IS_BIT_SET(iVar3, 3))
		{
			return 1;
		}
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x91B87C55093DE351())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar4, -1);
				MISC::SET_BIT(&iVar4, 1);
				MISC::SET_BIT(&iVar4, 3);
				MISC::SET_BIT(&iVar4, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar4, 1);
				if (MISC::_0x5AA3BEFA29F03AD4())
				{
					iVar4 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar4, 1);
					MISC::SET_BIT(&iVar4, 3);
					STATS::_0xDAC073C7901F9E15(iVar4);
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_448()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (NETWORK::_0x593570C289A77688())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
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
	if (Global_143074 == 2)
	{
		return 1;
	}
	else if (Global_143074 == 3)
	{
		return 0;
	}
	if (MISC::_0x5AA3BEFA29F03AD4())
	{
		if (MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_449(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = (func_2029(6094, -1, 0) / 2);
	if (func_455(PLAYER::PLAYER_ID()))
	{
		iVar1 = (func_452(4, iParam0, 1) / 2);
		iVar0 = (iVar0 + iVar1);
	}
	if (func_451(PLAYER::PLAYER_ID()))
	{
		iVar2 = (func_452(4, iParam0, 2) / 2);
		iVar0 = (iVar0 + iVar2);
	}
	if (func_450(PLAYER::PLAYER_ID()))
	{
		iVar3 = (func_452(5, iParam0, -1) / 2);
		iVar0 = (iVar0 + iVar3);
	}
	return iVar0;
}

bool func_450(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_241.f_1, 2);
}

bool func_451(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_241.f_1, 1);
}

int func_452(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	char cVar6[16];
	
	iVar0 = func_454(PLAYER::PLAYER_ID());
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_580())
	{
		iVar1 = 0;
		if (iParam0 == 4)
		{
			iVar1 = func_327(iParam2, iParam1, iVar0);
		}
		func_329(&sVar2, iParam0, iParam2, iVar1);
		iVar3 = MISC::GET_HASH_KEY(&sVar2);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar3))
		{
			iVar4 = NETSHOP::_NETWORK_SHOP_GET_PRICE(iVar3, 426439576, 1);
			StringCopy(&cVar5, func_453(iParam1), 16);
			return iVar4;
		}
		else
		{
			StringCopy(&cVar6, func_453(iParam1), 16);
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return Global_262145.f_21402;
					break;
				
				case 1:
					return Global_262145.f_21403;
					break;
				
				case 2:
					return Global_262145.f_21404;
					break;
				
				case 3:
					return Global_262145.f_21405;
					break;
				
				case 4:
					return Global_262145.f_21406;
					break;
				
				case 5:
					return Global_262145.f_21407;
					break;
				
				case 6:
					return Global_262145.f_21408;
					break;
				
				case 7:
					return Global_262145.f_21409;
					break;
				
				case 8:
					return Global_262145.f_21410;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					return Global_262145.f_21411;
					break;
				
				case 1:
					return Global_262145.f_21412;
					break;
				
				case 2:
					return Global_262145.f_21413;
					break;
				
				case 3:
					return Global_262145.f_21414;
					break;
				
				case 4:
					return Global_262145.f_21415;
					break;
				
				case 5:
					return Global_262145.f_21416;
					break;
				
				case 6:
					return Global_262145.f_21417;
					break;
				
				case 7:
					return Global_262145.f_21418;
					break;
				
				case 8:
					return Global_262145.f_21419;
					break;
				
				case 9:
					return Global_262145.f_21420;
					break;
				
				case 10:
					return Global_262145.f_21421;
					break;
				
				case 11:
					return Global_262145.f_21422;
					break;
				
				case 12:
					return Global_262145.f_21423;
					break;
				
				case 13:
					return Global_262145.f_21424;
					break;
				
				case 14:
					return Global_262145.f_21425;
					break;
				
				case 15:
					return Global_262145.f_21426;
					break;
				
				case 16:
					return Global_262145.f_21427;
					break;
				
				case 17:
					return Global_262145.f_21428;
					break;
				
				case 18:
					return Global_262145.f_21429;
					break;
				
				case 19:
					return Global_262145.f_21430;
					break;
				
				case 20:
					return Global_262145.f_21431;
					break;
				
				case 21:
					return Global_262145.f_21432;
					break;
				
				case 22:
					return Global_262145.f_21433;
					break;
				
				case 23:
					return Global_262145.f_21434;
					break;
			}
			return 0;
			break;
		
		case 2:
			switch (iParam2)
			{
				case 0:
					return Global_262145.f_21441;
					break;
				
				case 1:
					return Global_262145.f_21436;
					break;
				
				case 2:
					return Global_262145.f_21442;
					break;
				
				case 3:
					return Global_262145.f_21443;
					break;
				
				case 4:
					return Global_262145.f_21435;
					break;
				
				case 5:
					return Global_262145.f_21440;
					break;
				
				case 6:
					return Global_262145.f_21438;
					break;
				
				case 7:
					return Global_262145.f_21437;
					break;
				
				case 8:
					return Global_262145.f_21439;
					break;
			}
			return 0;
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					return Global_262145.f_21444;
					break;
				
				case 1:
					return Global_262145.f_21445;
					break;
				
				case 2:
					return Global_262145.f_21446;
					break;
			}
			return 0;
			break;
		
		case 4:
			switch (iParam2)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					if (func_327(1, iParam1, iVar0) == 0)
					{
						return Global_262145.f_21447;
					}
					else
					{
						return (0 + Global_262145.f_21448);
					}
					break;
				
				case 2:
					if (func_327(2, iParam1, iVar0) == 0)
					{
						return (Global_262145.f_21447 + Global_262145.f_21449);
					}
					else
					{
						return (0 + Global_262145.f_21449);
					}
					break;
			}
			return 0;
			break;
		
		case 5:
			return Global_262145.f_21450;
			break;
	}
	return 0;
}

char* func_453(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_HANGAR_1";
			break;
		
		case 2:
			return "MP_HANGAR_2";
			break;
		
		case 3:
			return "MP_HANGAR_3";
			break;
		
		case 4:
			return "MP_HANGAR_4";
			break;
		
		case 5:
			return "MP_HANGAR_5";
			break;
	}
	return "";
}

int func_454(int iParam0)
{
	if (iParam0 == func_209())
	{
		return 0;
	}
	return Global_1595693[iParam0 /*680*/].f_266.f_241;
}

bool func_455(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_241.f_1, 0);
}

int func_456(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	char cVar4[16];
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_580())
	{
		func_332(&sVar0, iParam0);
		iVar1 = MISC::GET_HASH_KEY(&sVar0);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar1))
		{
			iVar2 = NETSHOP::_NETWORK_SHOP_GET_PRICE(iVar1, 426439576, 1);
			StringCopy(&cVar3, func_453(iParam0), 16);
			return iVar2;
		}
		else
		{
			StringCopy(&cVar4, func_453(iParam0), 16);
		}
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_21397;
		
		case 2:
			return Global_262145.f_21398;
		
		case 3:
			return Global_262145.f_21399;
		
		case 4:
			return Global_262145.f_21400;
		
		case 5:
			return Global_262145.f_21401;
		
		default:
	}
	return 0;
}

int func_457(int iParam0)
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
	
	iVar0 = (func_471(iParam0) / 2);
	if (iVar0 < 0)
	{
		iVar0 = (func_477(iParam0) / 2);
	}
	if (func_467(PLAYER::PLAYER_ID(), iParam0, 0))
	{
		iVar1 = (func_466(0, iParam0) / 2);
		iVar0 = (iVar0 + iVar1);
	}
	if (func_467(PLAYER::PLAYER_ID(), iParam0, 2))
	{
		iVar2 = (func_466(2, iParam0) / 2);
		iVar0 = (iVar0 + iVar2);
	}
	if (func_464(iParam0))
	{
		if (func_463(PLAYER::PLAYER_ID()))
		{
			iVar3 = (func_466(6, iParam0) / 2);
			iVar0 = (iVar0 + iVar3);
		}
		if (func_462(PLAYER::PLAYER_ID()))
		{
			iVar4 = (Global_262145.f_20251 / 2);
			iVar0 = (iVar0 + iVar4);
		}
		if (func_461(PLAYER::PLAYER_ID()))
		{
			iVar5 = (Global_262145.f_20251 / 2);
			iVar0 = (iVar0 + iVar5);
		}
		if (func_460(PLAYER::PLAYER_ID()))
		{
			iVar6 = (func_466(9, iParam0) / 2);
			iVar0 = (iVar0 + iVar6);
		}
		if (func_459(PLAYER::PLAYER_ID()))
		{
			iVar7 = (func_466(10, iParam0) / 2);
			iVar0 = (iVar0 + iVar7);
		}
		if (func_458(PLAYER::PLAYER_ID()))
		{
			iVar8 = (func_466(11, iParam0) / 2);
			iVar0 = (iVar0 + iVar8);
		}
	}
	return iVar0;
}

bool func_458(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_260, 13);
}

bool func_459(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_260, 12);
}

bool func_460(int iParam0)
{
	if (iParam0 == func_209())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_260, 9);
}

bool func_461(int iParam0)
{
	if (iParam0 == func_209())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_260, 11);
}

bool func_462(int iParam0)
{
	if (iParam0 == func_209())
	{
		return 0;
	}
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_260, 10);
}

bool func_463(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_260, 8);
}

bool func_464(int iParam0)
{
	return func_465(iParam0) == 5;
}

int func_465(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3;
		
		case 2:
			return 1;
		
		case 3:
			return 4;
		
		case 4:
			return 2;
		
		case 5:
			return 0;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 4;
		
		case 9:
			return 2;
		
		case 10:
			return 0;
		
		case 11:
			return 3;
		
		case 12:
			return 1;
		
		case 13:
			return 4;
		
		case 14:
			return 2;
		
		case 15:
			return 0;
		
		case 16:
			return 3;
		
		case 17:
			return 1;
		
		case 18:
			return 4;
		
		case 19:
			return 2;
		
		case 20:
			return 0;
		
		case 21:
			return 5;
		
		case 22:
			return 5;
		
		case 23:
			return 5;
		
		case 24:
			return 5;
		
		case 25:
			return 5;
		
		case 26:
			return 5;
		
		case 27:
			return 5;
		
		case 28:
			return 5;
		
		case 29:
			return 5;
		
		case 30:
			return 5;
		
		case 31:
			return 5;
		
		default:
	}
	return -1;
}

int func_466(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char* sVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_465(iParam1);
	switch (iVar0)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16924;
				
				case 2:
					return Global_262145.f_16925;
				
				case 1:
					return Global_262145.f_16926;
				
				default:
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16927;
				
				case 2:
					return Global_262145.f_16928;
				
				case 1:
					return Global_262145.f_16929;
				
				default:
			}
			break;
		
		case 4:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16930;
				
				case 2:
					return Global_262145.f_16931;
				
				case 1:
					return Global_262145.f_16932;
				
				default:
			}
			break;
		
		case 3:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16933;
				
				case 2:
					return Global_262145.f_16934;
				
				case 1:
					return Global_262145.f_16935;
				
				default:
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_16936;
				
				case 2:
					return Global_262145.f_16937;
				
				case 1:
					return Global_262145.f_16938;
				
				default:
			}
			break;
		
		case 5:
			iVar1 = func_338(PLAYER::PLAYER_ID());
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_580())
			{
				iVar2 = 0;
				iVar3 = 0;
				if (iParam0 == 8)
				{
					iVar2 = 2;
					iVar3 = func_335(iVar2, iParam1, iVar1);
				}
				else if (iParam0 == 7)
				{
					iVar2 = 1;
					iVar3 = func_335(iVar2, iParam1, iVar1);
				}
				else if (iParam0 == 5 || iParam0 == 11)
				{
					iVar2 = 2;
				}
				else if ((((((iParam0 == 4 || iParam0 == 10) || iParam0 == 6) || iParam0 == 9) || iParam0 == 0) || iParam0 == 2) || iParam0 == 1)
				{
					iVar2 = 1;
				}
				func_337(&sVar4, iVar0, iParam0, iVar2, iVar3);
				iVar5 = MISC::GET_HASH_KEY(&sVar4);
				if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar5))
				{
					iVar6 = NETSHOP::_NETWORK_SHOP_GET_PRICE(iVar5, 426439576, 1);
					return iVar6;
				}
			}
			switch (iParam0)
			{
				case 0:
					return Global_262145.f_20257;
				
				case 2:
					return Global_262145.f_20258;
				
				case 1:
					return Global_262145.f_20259;
				
				case 3:
					return Global_262145.f_20247;
				
				case 4:
					return Global_262145.f_20248;
				
				case 5:
					return Global_262145.f_20249;
				
				case 6:
					return Global_262145.f_20250;
				
				case 7:
					if (func_335(1, iParam1, iVar1) == 0)
					{
						return Global_262145.f_20251;
					}
					else
					{
						return (0 + Global_262145.f_20252);
					}
					break;
				
				case 8:
					if (func_335(2, iParam1, iVar1) == 0)
					{
						return (Global_262145.f_20251 + Global_262145.f_20253);
					}
					else
					{
						return (0 + Global_262145.f_20253);
					}
					break;
				
				case 9:
					return Global_262145.f_20254;
				
				case 10:
					return Global_262145.f_20255;
				
				case 11:
					return Global_262145.f_20256;
			}
			break;
	}
	return 0;
}

int func_467(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_470(iParam0, iParam1))
	{
		iVar0 = func_468(iParam0, iParam1);
		return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/].f_5, iParam2);
	}
	return 0;
}

int func_468(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_469(iParam1) && iParam0 != func_209())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_469(int iParam0)
{
	if (iParam0 == 32 || iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

int func_470(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_469(iParam1) && iParam0 != func_209())
	{
		iVar0 = 0;
		while (iVar0 <= 5)
		{
			if (Global_1595693[iParam0 /*680*/].f_266.f_160[iVar0 /*12*/] == iParam1)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_471(int iParam0)
{
	int iVar0;
	var uVar1;
	
	if (func_470(PLAYER::PLAYER_ID(), iParam0))
	{
		iVar0 = func_468(PLAYER::PLAYER_ID(), iParam0);
		if (func_472(iVar0, &uVar1))
		{
			return uVar1;
		}
	}
	return -1;
}

int func_472(int iParam0, var uParam1)
{
	if (func_2029(func_475(iParam0), -1, 0) == func_2029(func_474(iParam0), -1, 0))
	{
		*uParam1 = func_2029(func_473(iParam0), -1, 0);
		return *uParam1 >= 0;
	}
	return 0;
}

int func_473(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6342;
		
		case 1:
			return 6343;
		
		case 2:
			return 6344;
		
		case 3:
			return 6345;
		
		case 4:
			return 6346;
		
		case 5:
			return 6347;
		
		default:
	}
	return 6342;
}

int func_474(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3820;
		
		case 1:
			return 3821;
		
		case 2:
			return 3822;
		
		case 3:
			return 3823;
		
		case 4:
			return 3824;
		
		case 5:
			return 5423;
		
		default:
	}
	return 3820;
}

int func_475(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6331;
		
		case 1:
			return 6332;
		
		case 2:
			return 6333;
		
		case 3:
			return 6334;
		
		case 4:
			return 6335;
		
		case 5:
			return 6336;
		
		default:
	}
	return 6331;
}

int func_476(int iParam0)
{
	if (func_443())
	{
		if (iParam0 == 28 || iParam0 == 14)
		{
			return 1;
		}
	}
	return 0;
}

int func_477(int iParam0)
{
	bool bVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	char cVar5[16];
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_580())
	{
		bVar0 = false;
		if (func_476(iParam0))
		{
			bVar0 = true;
		}
		func_340(&sVar1, iParam0, bVar0);
		iVar2 = MISC::GET_HASH_KEY(&sVar1);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar2))
		{
			iVar3 = NETSHOP::_NETWORK_SHOP_GET_PRICE(iVar2, 426439576, 1);
			StringCopy(&cVar4, func_478(iParam0), 16);
			return iVar3;
		}
		else
		{
			StringCopy(&cVar5, func_478(iParam0), 16);
		}
	}
	if (func_476(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 2:
			return Global_262145.f_16900;
		
		case 1:
			return Global_262145.f_16896;
		
		case 3:
			return Global_262145.f_16892;
		
		case 5:
			return Global_262145.f_16884;
		
		case 4:
			return Global_262145.f_16888;
		
		case 7:
			return Global_262145.f_16901;
		
		case 6:
			return Global_262145.f_16897;
		
		case 8:
			return Global_262145.f_16893;
		
		case 10:
			return Global_262145.f_16885;
		
		case 9:
			return Global_262145.f_16889;
		
		case 12:
			return Global_262145.f_16902;
		
		case 11:
			return Global_262145.f_16898;
		
		case 13:
			return Global_262145.f_16894;
		
		case 15:
			return Global_262145.f_16886;
		
		case 14:
			return Global_262145.f_16890;
		
		case 17:
			return Global_262145.f_16903;
		
		case 16:
			return Global_262145.f_16899;
		
		case 18:
			return Global_262145.f_16895;
		
		case 20:
			return Global_262145.f_16887;
		
		case 19:
			return Global_262145.f_16891;
		
		case 21:
			return Global_262145.f_20240;
		
		case 22:
			return Global_262145.f_20239;
		
		case 23:
			return Global_262145.f_20241;
		
		case 24:
			return Global_262145.f_20236;
		
		case 25:
			return Global_262145.f_20238;
		
		case 26:
			return Global_262145.f_20237;
		
		case 27:
			return Global_262145.f_20242;
		
		case 28:
			return Global_262145.f_20246;
		
		case 29:
			return Global_262145.f_20245;
		
		case 30:
			return Global_262145.f_20244;
		
		case 31:
			return Global_262145.f_20243;
		
		default:
	}
	return 0;
}

char* func_478(int iParam0)
{
	char* sVar0;
	
	switch (iParam0)
	{
		case 2:
			sVar0 = "MP_BWH_WEED_1";
			break;
		
		case 1:
			sVar0 = "MP_BWH_METH_1";
			break;
		
		case 3:
			sVar0 = "MP_BWH_CRACK_1";
			break;
		
		case 5:
			sVar0 = "MP_BWH_FAKEID_1";
			break;
		
		case 4:
			sVar0 = "MP_BWH_CASH_1";
			break;
		
		case 7:
			sVar0 = "MP_BWH_WEED_2";
			break;
		
		case 6:
			sVar0 = "MP_BWH_METH_2";
			break;
		
		case 8:
			sVar0 = "MP_BWH_CRACK_2";
			break;
		
		case 10:
			sVar0 = "MP_BWH_FAKEID_2";
			break;
		
		case 9:
			sVar0 = "MP_BWH_CASH_2";
			break;
		
		case 12:
			sVar0 = "MP_BWH_WEED_3";
			break;
		
		case 11:
			sVar0 = "MP_BWH_METH_3";
			break;
		
		case 13:
			sVar0 = "MP_BWH_CRACK_3";
			break;
		
		case 15:
			sVar0 = "MP_BWH_FAKEID_3";
			break;
		
		case 14:
			sVar0 = "MP_BWH_CASH_3";
			break;
		
		case 17:
			sVar0 = "MP_BWH_WEED_4";
			break;
		
		case 16:
			sVar0 = "MP_BWH_METH_4";
			break;
		
		case 18:
			sVar0 = "MP_BWH_CRACK_4";
			break;
		
		case 20:
			sVar0 = "MP_BWH_FAKEID_4";
			break;
		
		case 19:
			sVar0 = "MP_BWH_CASH_4";
			break;
		
		case 21:
			sVar0 = "MP_BUNKER_1";
			break;
		
		case 22:
			sVar0 = "MP_BUNKER_2";
			break;
		
		case 23:
			sVar0 = "MP_BUNKER_3";
			break;
		
		case 24:
			sVar0 = "MP_BUNKER_4";
			break;
		
		case 25:
			sVar0 = "MP_BUNKER_5";
			break;
		
		case 26:
			sVar0 = "MP_BUNKER_6";
			break;
		
		case 27:
			sVar0 = "MP_BUNKER_7";
			break;
		
		case 28:
			sVar0 = "MP_BUNKER_9";
			break;
		
		case 29:
			sVar0 = "MP_BUNKER_10";
			break;
		
		case 30:
			sVar0 = "MP_BUNKER_11";
			break;
		
		case 31:
			sVar0 = "MP_BUNKER_12";
			break;
	}
	return sVar0;
}

int func_479()
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (Global_4265875 > -1)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 237))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_480()
{
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 237)) && !PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238)) && !NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return 1;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 176))
	{
		return 1;
	}
	return 0;
}

void func_481(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(uParam0->f_204, 2))
	{
		if (func_487(iParam1) < func_487(func_372(uParam0->f_1[uParam0->f_198], -1)))
		{
			bVar0 = true;
		}
		iVar1 = func_428(uParam0->f_1[uParam0->f_198]);
		func_486(iVar1, iParam1, bVar0);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_201), 4);
		MISC::CLEAR_BIT(&(uParam0->f_201), 3);
		if (MISC::IS_BIT_SET(uParam0->f_201, 2))
		{
			func_485("MP_REP_PROP_4", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_201, 5))
		{
			func_485("MP_PROP_HEI_0", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_201, 6))
		{
			func_485("PROP3RDDIS", 1000, 0);
		}
		else if ((!func_446(iParam1) || func_484(iParam1, -1)) || func_482(iParam1))
		{
			func_485("MP_REP_PROP_3", 100, 0);
		}
		else
		{
			func_485("MP_REP_PROP_3a", 100, 0);
		}
	}
}

int func_482(int iParam0)
{
	if (func_483(iParam0))
	{
		return 0;
	}
	else if (func_484(iParam0, -1))
	{
		return 0;
	}
	else if (func_1855(iParam0, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_483(int iParam0)
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

int func_484(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
		}
	}
	else if (iParam1 == 91)
	{
		switch (iParam0)
		{
			case 91:
			case 92:
			case 93:
			case 94:
			case 95:
			case 96:
				return 1;
				break;
		}
	}
	else if (iParam1 == 97)
	{
		switch (iParam0)
		{
			case 97:
			case 98:
			case 99:
			case 100:
			case 101:
			case 102:
				return 1;
				break;
			}
	}
	return 0;
}

void func_485(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_4562), sParam0, 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = iParam1;
	Global_17301.f_4637 = MISC::GET_GAME_TIMER();
	Global_17301.f_4638 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
}

void func_486(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	iVar3 = -1;
	iVar4 = 0;
	iVar3 = iParam0;
	if (iVar3 < 0)
	{
		iVar3 = (iVar3 * -1);
	}
	if (iParam0 < 0)
	{
		iVar4 = "BRSHETMAK";
	}
	else
	{
		iVar4 = "BRSHETPRSA";
	}
	sVar0 = "BRSCRWTEX";
	if (bParam2)
	{
		if ((!func_446(iParam1) || func_484(iParam1, -1)) || func_482(iParam1))
		{
			sVar1 = "BRDISPROP2B1";
		}
		else
		{
			if (iParam0 < 0)
			{
				sVar1 = "BRDISPROP2M2";
			}
			else
			{
				sVar1 = "BRDISPROP2S2";
			}
			iVar4 = 0;
		}
		iVar2 = "BRSHETPROSUB1";
	}
	else
	{
		if ((!func_446(iParam1) || func_484(iParam1, -1)) || func_482(iParam1))
		{
			sVar1 = "BRDISPROPB1";
		}
		else
		{
			if (iParam0 < 0)
			{
				sVar1 = "BRDISPROPM2";
			}
			else
			{
				sVar1 = "BRDISPROPS2";
			}
			iVar4 = 0;
		}
		iVar2 = "BRSHETPROSUB1";
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar4))
	{
		HUD::_SET_WARNING_MESSAGE_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, iVar4, 0, 1, 0);
	}
	else
	{
		HUD::_SET_WARNING_MESSAGE_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, 0, 0, 1, 0);
	}
}

int func_487(int iParam0)
{
	switch (func_488(iParam0))
	{
		case 10:
			return 20;
			break;
		
		case 6:
		case 3:
			return 10;
			break;
		
		case 5:
		case 2:
			return 6;
			break;
		
		case 4:
		case 1:
			return 2;
			break;
	}
	return 0;
}

int func_488(int iParam0)
{
	switch (iParam0)
	{
		case 86:
			return 8;
			break;
		
		case 103:
		case 106:
		case 109:
		case 112:
		case 104:
		case 107:
		case 110:
		case 113:
		case 105:
		case 108:
		case 111:
		case 114:
			return 10;
			break;
		
		case 87:
		case 88:
		case 89:
		case 90:
			return 9;
			break;
		
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 99:
		case 100:
		case 101:
		case 102:
			return 7;
			break;
		
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
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
		case 84:
		case 85:
			return 6;
			break;
		
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 66:
		case 67:
		case 68:
		case 69:
			return 5;
			break;
		
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 70:
		case 71:
		case 72:
			return 4;
			break;
		
		case 24:
		case 26:
		case 27:
		case 54:
		case 56:
		case 57:
			return 3;
			break;
		
		case 25:
		case 28:
		case 32:
		case 33:
		case 50:
		case 52:
		case 53:
		case 55:
			return 2;
			break;
		
		case 29:
		case 30:
		case 31:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 51:
		case 58:
		case 59:
		case 60:
			return 1;
			break;
	}
	return 0;
}

void func_489(var uParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar2;
	int iVar3;
	
	func_517(0);
	if (MISC::IS_BIT_SET(uParam0->f_204, 2))
	{
	}
	else
	{
		func_516(1, 1, 0, 0, 0);
		func_515(1, 2, 1, 1, 1);
		func_514(0, 0, 0, 0, 0);
		if (func_372(1, -1) > 0)
		{
			func_513("MP_REP_PROP_0");
		}
		else
		{
			func_513("MP_REP_PROP_0b");
		}
		iVar2 = 0;
		while (iVar2 < 14)
		{
			if (iVar2 == 7 && !Global_262145.f_16308)
			{
			}
			else
			{
				iVar3 = func_372(iVar2, -1);
				if ((!func_512(iVar2) && iParam1 == -1) || (func_512(iVar2) && iParam1 == iVar2))
				{
					if (iVar3 > 0)
					{
						if (!func_511())
						{
							if (!func_510() && !func_509(iVar3))
							{
								func_505(iVar0, &(Global_1049531[iVar3 /*1951*/].f_16), 0, 1, 0, 0);
							}
							else
							{
								Var1 = { Global_1049531[iVar3 /*1951*/].f_16 };
								StringConCat(&Var1, "S", 16);
								func_505(iVar0, &Var1, 0, 1, 0, 0);
							}
						}
						else
						{
							func_505(iVar0, "PIM_DNAME", 1, 1, 0, 0);
							func_504(HUD::_GET_LABEL_TEXT(&(Global_1049531[iVar3 /*1951*/].f_16)), 0, 1);
						}
						func_505(iVar0, "CUST_GAR_COST", 1, 1, 0, 0);
						func_492(func_428(iVar2), 0);
						uParam0->f_1[iVar0] = iVar2;
						iVar0++;
					}
					else if (iVar2 > 0)
					{
						if (iVar2 <= 5)
						{
							if ((func_372((iVar2 - 1), -1) > 0 && !func_512((iVar2 - 1))) || (func_512(iVar2) && iParam1 == iVar2))
							{
								func_505(iVar0, "MP_REP_PROP_1", 0, 1, 0, 0);
								uParam0->f_1[iVar0] = iVar2;
								iVar0++;
							}
						}
						else if (iVar2 == 7)
						{
							if (func_372(4, -1) > 0)
							{
								func_505(iVar0, "MP_REP_PROP_1", 0, 1, 0, 0);
								uParam0->f_1[iVar0] = iVar2;
								iVar0++;
							}
						}
					}
				}
			}
			iVar2++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_201), 2);
		MISC::CLEAR_BIT(&(uParam0->f_201), 5);
		uParam0->f_200 = iVar0;
		func_414(uParam0->f_198, 1, 1);
		func_491(-1);
		func_490(176, "BB_SELECT", -1);
		func_490(177, "BB_BACK", -1);
	}
}

void func_490(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam0, true);
	if (Global_17301.f_4639 >= 12)
	{
		StringCopy(&Global_4265799, sVar0, 64);
		StringCopy(&(Global_4265799.f_16), sParam1, 16);
		Global_4265799.f_20 = iParam2;
		return;
		return;
	}
	MISC::CLEAR_BIT(&(Global_17301.f_4922), Global_17301.f_4639);
	StringCopy(&(Global_17301.f_4641[Global_17301.f_4639 /*16*/]), sVar0, 64);
	StringCopy(&(Global_17301.f_4834[Global_17301.f_4639 /*4*/]), sParam1, 16);
	Global_17301.f_4883[Global_17301.f_4639] = iParam2;
	Global_17301.f_4896[Global_17301.f_4639] = iParam0;
	Global_17301.f_4909[Global_17301.f_4639] = 32;
	Global_17301.f_4639++;
}

void func_491(int iParam0)
{
	int iVar0;
	int iVar1;
	
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	Global_17301.f_4922 = 0;
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	if (MISC::IS_PC_VERSION())
	{
		if (!func_425(&iVar1, 0, iParam0))
		{
			return;
		}
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar1 /*10*/], "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
		GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
	}
}

void func_492(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17301.f_5092 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 >= 4)
	{
		return;
	}
	if (Global_17301.f_5611 != 1)
	{
		return;
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		return;
	}
	Global_17301.f_3918[Global_17301.f_5092] = iParam0;
	Global_17301.f_5092++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 2;
	Global_17301.f_5610++;
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_501();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_494(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17301.f_4938[(Global_17301.f_5089 - 1)])
		{
			Global_17301.f_4938[(Global_17301.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17301.f_5610 >= Global_17301.f_5608)
		{
			fVar3 = func_493();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

float func_493()
{
	int iVar0;
	int iVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar0] == 4)
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)] != 0)
		{
			if (func_494(Global_17301.f_4433[((Global_17301.f_5094 - iVar1) + iVar0)], 1, 0, &uVar3, &fVar4, 0))
			{
				if (fVar4 > fVar2)
				{
					fVar2 = fVar4;
				}
			}
		}
		iVar0++;
	}
	if (fVar2 > HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0))
	{
		return fVar2;
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

int func_494(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_500(iParam0), 64);
	StringCopy(&cVar1, func_497(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_496())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_496())
			{
				fVar4 = 1f;
			}
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
			}
			iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) / fVar4));
			iVar3 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) / fVar4));
		}
		else
		{
			GRAPHICS::GET_SCREEN_RESOLUTION(&iVar2, &iVar3);
		}
		vVar7 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar1) };
		vVar7.x = (vVar7.x * (func_495(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_495(iParam0) / fVar4));
		if (!bParam2)
		{
			vVar7.x = (vVar7.x - 2f);
			vVar7.y = (vVar7.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar7.x = 288f;
			vVar7.y = 106f;
		}
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
		{
			vVar7.x = 106f;
			vVar7.y = 106f;
		}
		*fParam3 = ((vVar7.x / IntToFloat(iVar2)) * IntToFloat((iVar2 / iVar3)));
		*fParam4 = (((vVar7.y / IntToFloat(iVar3)) / (vVar7.x / IntToFloat(iVar2))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17300)
			{
				*fParam4 = (*fParam4 * (Global_17300 / *fParam3));
				*fParam3 = Global_17300;
			}
		}
		return 1;
	}
	return 0;
}

float func_495(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 49:
			return 0.5f;
			break;
	}
	return 1f;
}

int func_496()
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &iVar1);
	fVar2 = (SYSTEM::TO_FLOAT(iVar0) / SYSTEM::TO_FLOAT(iVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_497(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17301.f_6719[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17301.f_6719[iParam0 /*16*/])) == -1487683087)
		{
			Var2 = { func_499(PLAYER::PLAYER_ID()) };
			if (NETWORK::_0x5835D9CD92E83184(&Var2, &uVar1))
			{
				return func_498(&uVar1);
			}
		}
		else
		{
			return func_498(&(Global_17301.f_6719[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 21:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 7:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 8:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 9:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 10:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 17:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 16:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 26:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 27:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 28:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 29:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 31:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 32:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 48:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 49:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 51:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_498(var uParam0)
{
	return uParam0;
}

struct<13> func_499(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_500(int iParam0)
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17301.f_5886[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_17301.f_5886[iParam0 /*16*/])) == -1487683087)
		{
			Var1 = { func_499(PLAYER::PLAYER_ID()) };
			NETWORK::_0x5835D9CD92E83184(&Var1, &uVar0);
			return func_498(&uVar0);
		}
		else
		{
			return func_498(&(Global_17301.f_5886[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

float func_501()
{
	float fVar0;
	float fVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	iVar7 = 0;
	while (iVar7 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 1)
		{
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 8)
		{
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 2)
		{
			iVar3++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 3)
		{
			iVar4++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 4)
		{
			iVar5++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 5)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 6)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 7)
		{
			iVar6++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 9)
		{
			iVar6++;
		}
		iVar7++;
	}
	func_502(0, 1, 0, 0, 0, iVar6 > 0, 0);
	if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
	{
		HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_17301.f_73[Global_17301.f_5609 /*6*/]));
	}
	iVar7 = 0;
	while (iVar7 < Global_17301.f_5610)
	{
		if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 1)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_73[(Global_17301.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 8)
		{
			iVar8++;
			if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_73[(Global_17301.f_5609 + iVar8) /*6*/]));
			}
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 2)
		{
			if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17301.f_3918[((Global_17301.f_5092 - iVar3) + iVar9)]);
			}
			iVar9++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 3)
		{
			if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17301.f_4175[((Global_17301.f_5093 - iVar4) + iVar10)], Global_17301.f_4304[((Global_17301.f_5093 - iVar4) + iVar10)]);
			}
			iVar10++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 5)
		{
			if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 6)
		{
			if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 7)
		{
			if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		else if (Global_17301.f_2124[Global_17301.f_5609 /*5*/][iVar7] == 9)
		{
			if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
			{
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[((Global_17301.f_5091 - iVar6) + iVar11) /*16*/]));
			}
			iVar11++;
		}
		iVar7++;
	}
	if (MISC::GET_HASH_KEY(&(Global_17301.f_73[Global_17301.f_5609 /*6*/])) != 0)
	{
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	iVar7 = 0;
	while (iVar7 < iVar5)
	{
		if (Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)] != 0)
		{
			func_494(Global_17301.f_4433[((Global_17301.f_5094 - iVar5) + iVar7)], 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + fVar1);
		}
		iVar7++;
	}
	return fVar0;
}

void func_502(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_503(Global_17301.f_5878[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_503(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_504(char* sParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	
	if (Global_17301.f_5091 >= 32)
	{
		return;
	}
	if (Global_17301.f_5610 >= 4)
	{
		return;
	}
	if (Global_17301.f_5611 != 1)
	{
		return;
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		return;
	}
	StringCopy(&(Global_2457366[Global_17301.f_5091 /*16*/]), sParam0, 64);
	Global_17301.f_5091++;
	Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 5;
	Global_17301.f_5610++;
	fVar0 = func_501();
	if (bParam2)
	{
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_501();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_494(26, 1, 0, &fVar1, &uVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17301.f_4938[(Global_17301.f_5089 - 1)])
		{
			Global_17301.f_4938[(Global_17301.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17301.f_5610 >= Global_17301.f_5608)
		{
			fVar3 = func_493();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

void func_505(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_17301.f_5088 > iParam0)
	{
		return;
	}
	if (Global_17301.f_5088 >= 128)
	{
		return;
	}
	if (Global_17301.f_5090 >= 256)
	{
		return;
	}
	if (Global_17301.f_5610 < Global_17301.f_5608)
	{
		return;
	}
	if (Global_17301.f_5088 != iParam0)
	{
		Global_17301.f_5088 = iParam0;
		Global_17301.f_5089 = 0;
	}
	iVar0 = Global_17301.f_4926[Global_17301.f_5089];
	if (iVar0 != 1)
	{
		while (Global_17301.f_5089 < 4 && iVar0 != 1)
		{
			Global_17301.f_5089++;
			iVar0 = Global_17301.f_4926[Global_17301.f_5089];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_17301.f_1610[Global_17301.f_5090] = bParam3;
	Global_17301.f_1867[Global_17301.f_5090] = iParam4;
	Global_17301.f_5090++;
	if (!bParam3)
	{
		func_508(Global_17301.f_5088, 1);
	}
	else
	{
		func_508(Global_17301.f_5088, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_507(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
		if (Global_17301.f_4945[Global_17301.f_5089])
		{
			func_494(26, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_17301.f_4938[Global_17301.f_5089])
		{
			Global_17301.f_4938[Global_17301.f_5089] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_506(&(Global_17301.f_73[Global_17301.f_5090 /*6*/]));
			if (fVar4 > Global_17301.f_5612[iParam0])
			{
				Global_17301.f_5612[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_17301.f_4959[iParam0]), Global_17301.f_5089);
	Global_17301.f_5089++;
	Global_17301.f_5611 = 1;
	Global_17301.f_5609 = (Global_17301.f_5090 - 1);
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = iParam2;
}

float func_506(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0);
}

float func_507(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_502(0, 1, 0, 0, 0, 0, 0);
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_508(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_17301.f_5881[iVar0]), (iParam0 - iVar0 * 32));
	}
}

int func_509(int iParam0)
{
	if ((iParam0 == 83 || iParam0 == 84) || iParam0 == 85)
	{
		return 1;
	}
	return 0;
}

int func_510()
{
	switch (LOCALE::_GET_CURRENT_LANGUAGE_ID())
	{
		case 9:
		case 12:
			return 1;
		
		default:
	}
	return 0;
}

int func_511()
{
	switch (LOCALE::_GET_CURRENT_LANGUAGE_ID())
	{
		case 7:
		case 5:
			return 1;
		
		default:
	}
	return 0;
}

int func_512(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 11:
		case 8:
		case 9:
		case 10:
		case 12:
		case 13:
			return 1;
			break;
		
		case -1:
			return 0;
			break;
	}
	return 0;
}

void func_513(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_17301.f_1), sParam0, 16);
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_514(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4945[0] = iParam0;
	Global_17301.f_4945[1] = iParam1;
	Global_17301.f_4945[2] = iParam2;
	Global_17301.f_4945[3] = iParam3;
	Global_17301.f_4945[4] = iParam4;
}

void func_515(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4953[0] = iParam0;
	Global_17301.f_4953[1] = iParam1;
	Global_17301.f_4953[2] = iParam2;
	Global_17301.f_4953[3] = iParam3;
	Global_17301.f_4953[4] = iParam4;
}

void func_516(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_17301.f_4926[0] = iParam0;
	Global_17301.f_4926[1] = iParam1;
	Global_17301.f_4926[2] = iParam2;
	Global_17301.f_4926[3] = iParam3;
	Global_17301.f_4926[4] = iParam4;
	Global_17301.f_5096 = 0;
	if (iParam0 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam1 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam2 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam3 != 0)
	{
		Global_17301.f_5096++;
	}
	if (iParam4 != 0)
	{
		Global_17301.f_5096++;
	}
}

void func_517(bool bParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_17301.f_73[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_17301.f_2124[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		StringCopy(&(Global_2457366[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_17301.f_3918[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4175[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4433[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_17301.f_4959[iVar0] = 0;
		Global_17301.f_5097[iVar0] = 0;
		Global_17301.f_5226[iVar0] = 0;
		Global_17301.f_5746[iVar0] = 0f;
		Global_17301.f_5355[iVar0] = 0;
		Global_17301.f_5612[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_17301.f_4926[iVar0] = 0;
		Global_17301.f_4938[iVar0] = 0f;
		Global_17301.f_4932[iVar0] = -1f;
		Global_17301.f_4945[iVar0] = 0;
		Global_17301.f_4953[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(Global_17301.f_4834[iVar0 /*4*/]), "", 16);
		Global_17301.f_4883[iVar0] = -1;
		Global_17301.f_4896[iVar0] = 358;
		Global_17301.f_4909[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 52)
	{
		StringCopy(&(Global_17301.f_5886[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_17301.f_6719[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	StringCopy(&(Global_4265799.f_16), "", 16);
	Global_4265799.f_20 = -1;
	Global_17301 = 0;
	Global_17301.f_5088 = 0;
	Global_17301.f_5089 = 0;
	Global_17301.f_5090 = 0;
	Global_17301.f_5092 = 0;
	Global_17301.f_5093 = 0;
	Global_17301.f_5094 = 0;
	Global_17301.f_5091 = 0;
	Global_17301.f_5741 = 0;
	Global_17301.f_5606 = 0;
	Global_17301.f_5605 = 0;
	Global_17301.f_5607 = 0;
	StringCopy(&(Global_17301.f_4562), "", 16);
	Global_17301.f_4632 = 0;
	Global_17301.f_4633 = 0;
	Global_17301.f_4634 = 0;
	Global_17301.f_4635 = 0;
	Global_17301.f_4636 = 0;
	Global_17301.f_4637 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_4566[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_4638 = 0;
	StringCopy(&(Global_4265799.f_21), "", 16);
	Global_4265799.f_61 = 0;
	Global_4265799.f_62 = 0;
	Global_4265799.f_63 = 0;
	Global_4265799.f_64 = 0;
	Global_4265799.f_65 = 0;
	Global_4265799.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4265799.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4265799.f_67 = 0;
	StringCopy(&(Global_17301.f_1), "", 16);
	Global_17301.f_4944 = 0f;
	Global_17301.f_68 = 0;
	Global_17301.f_69 = 0;
	Global_17301.f_70 = 0;
	Global_17301.f_71 = 0;
	Global_17301.f_72 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_17301.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_5611 = 0;
	Global_17301.f_5610 = 0;
	Global_17301.f_5608 = 0;
	Global_17301.f_5609 = 0;
	Global_17301.f_4639 = 0;
	Global_17301.f_4640 = 0;
	Global_17301.f_5095 = 10;
	Global_17301.f_5096 = 0;
	Global_17301.f_5743 = 0f;
	Global_17301.f_5744 = 0f;
	Global_17301.f_5598 = 0;
	Global_17301.f_5599 = 0;
	Global_17301.f_5600 = 0f;
	Global_17301.f_5601 = 0;
	Global_17301.f_5603 = 0;
	Global_17301.f_5602 = 0;
	Global_17301.f_5604 = 0;
	Global_17301.f_7927 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_17301.f_5875[iVar0] = -1;
		Global_17301.f_5878[iVar0] = -1;
		iVar0++;
	}
	Global_17301.f_4951 = 0f;
	Global_17301.f_4922 = 0;
	Global_17301.f_4952 = 0;
	iVar0 = 0;
	while (iVar0 < Global_17301.f_5881)
	{
		Global_17301.f_5881[iVar0] = 0;
		iVar0++;
	}
	Global_17301.f_7906 = 0;
	Global_17301.f_7901 = 0;
	Global_17301.f_7911 = 0;
	Global_17301.f_7916 = 0;
	Global_17301.f_7921 = 0;
	Global_17301.f_7923 = 0;
	Global_17301.f_7929 = 0;
	Global_17298 = 0.05f;
	Global_17299 = 0.05f;
	Global_17300 = 0.225f;
	fVar2 = GRAPHICS::_GET_ASPECT_RATIO(0);
	if (bParam0)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else if (fVar2 < 1.77777f)
	{
		Global_17300 = (0.225f * ((16f / 9f) / fVar2));
	}
	else
	{
		Global_17300 = 0.225f;
	}
}

void func_518(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(uParam0->f_204, 2))
	{
		iVar0 = func_577(PLAYER::PLAYER_ID());
		iVar1 = func_561(iVar0);
		func_519(iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_201), 4);
		MISC::CLEAR_BIT(&(uParam0->f_201), 3);
		if (MISC::IS_BIT_SET(uParam0->f_201, 2))
		{
			func_485("MP_REP_PROP_4", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_201, 5))
		{
			func_485("MP_PROP_HEI_0", 100, 0);
		}
		else
		{
			func_485("MP_REP_DBASE_3", 100, 0);
		}
	}
}

void func_519(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	iVar3 = -1;
	iVar4 = 0;
	iVar3 = iParam0;
	if (iVar3 < 0)
	{
		iVar3 = (iVar3 * -1);
	}
	if (iParam0 < 0)
	{
		iVar4 = "BRSHETMAK";
	}
	else
	{
		iVar4 = "BRSHETPRSA";
	}
	sVar0 = "BRSCRWTEX";
	sVar1 = "BRDISDBASB1";
	iVar2 = "BRSHETPROSUB1";
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar4))
	{
		HUD::_SET_WARNING_MESSAGE_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, iVar4, 0, 1, 0);
	}
	else
	{
		HUD::_SET_WARNING_MESSAGE_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, 0, 0, 1, 0);
	}
}

void func_520(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char* sVar5;
	
	iVar0 = uParam1;
	func_517(0);
	if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
	{
		func_516(1, 1, 0, 0, 0);
		func_515(1, 2, 1, 1, 1);
		func_514(0, 0, 0, 0, 0);
		func_513("REP_DBASE_0");
		iVar3 = func_577(PLAYER::PLAYER_ID());
		if (iVar3 > 0)
		{
			bVar4 = func_253(iVar3, iVar0);
			func_505(iVar1, "PIM_DNAME", 1, bVar4, 0, 0);
			sVar5 = func_579(iVar3);
			if (func_522())
			{
				func_521(HUD::_GET_LABEL_TEXT(sVar5), 0, 0, 0);
			}
			else
			{
				func_504(HUD::_GET_LABEL_TEXT(sVar5), 0, 1);
			}
			func_505(iVar1, "CUST_GAR_COST", 1, bVar4, 0, 0);
			func_492(func_561(iVar3), 0);
			uParam0->f_1[iVar2] = iVar3;
			iVar1++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_201), 2);
		MISC::CLEAR_BIT(&(uParam0->f_201), 5);
		uParam0->f_200 = iVar1;
		func_414(uParam0->f_198, 1, 1);
		func_491(-1);
		func_490(176, "BB_SELECT", -1);
		func_490(177, "BB_BACK", -1);
	}
}

void func_521(char* sParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (Global_17301.f_5091 >= 32)
	{
		return;
	}
	if (Global_17301.f_5610 >= 4)
	{
		return;
	}
	if (Global_17301.f_5611 != 1)
	{
		return;
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		return;
	}
	StringCopy(&(Global_2457366[Global_17301.f_5091 /*16*/]), sParam0, 64);
	Global_17301.f_5091++;
	if (bParam3)
	{
		Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 9;
	}
	else
	{
		Global_17301.f_2124[Global_17301.f_5609 /*5*/][Global_17301.f_5610] = 7;
	}
	Global_17301.f_5610++;
	fVar0 = func_501();
	if (bParam2)
	{
	}
	if (Global_17301.f_5610 >= Global_17301.f_5608)
	{
		fVar0 = func_501();
		if (Global_17301.f_4945[Global_17301.f_5089] && Global_17301.f_5610 == Global_17301.f_5608)
		{
			func_494(26, 1, 0, &fVar1, &fVar2, 0);
			fVar0 = (fVar0 + (fVar1 * 2f));
		}
		if (fVar0 > Global_17301.f_4938[(Global_17301.f_5089 - 1)])
		{
			Global_17301.f_4938[(Global_17301.f_5089 - 1)] = fVar0;
		}
	}
	if (bParam1)
	{
		if (Global_17301.f_5610 >= Global_17301.f_5608)
		{
			fVar3 = func_493();
			if (fVar3 > Global_17301.f_5612[Global_17301.f_5088])
			{
				Global_17301.f_5612[Global_17301.f_5088] = fVar3;
			}
		}
	}
}

int func_522()
{
	if (((LOCALE::_GET_CURRENT_LANGUAGE_ID() == 8 || LOCALE::_GET_CURRENT_LANGUAGE_ID() == 9) || LOCALE::_GET_CURRENT_LANGUAGE_ID() == 10) || LOCALE::_GET_CURRENT_LANGUAGE_ID() == 12)
	{
		return 1;
	}
	return 0;
}

void func_523(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_BIT_SET(uParam0->f_204, 2))
	{
		iVar0 = func_330(PLAYER::PLAYER_ID());
		iVar1 = func_449(iVar0);
		func_524(iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_201), 4);
		MISC::CLEAR_BIT(&(uParam0->f_201), 3);
		if (MISC::IS_BIT_SET(uParam0->f_201, 2))
		{
			func_485("MP_REP_PROP_4", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_201, 5))
		{
			func_485("MP_PROP_HEI_0", 100, 0);
		}
		else
		{
			func_485("MP_REP_HANG_3", 100, 0);
		}
	}
}

void func_524(int iParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	iVar3 = -1;
	iVar4 = 0;
	iVar3 = iParam0;
	if (iVar3 < 0)
	{
		iVar3 = (iVar3 * -1);
	}
	if (iParam0 < 0)
	{
		iVar4 = "BRSHETMAK";
	}
	else
	{
		iVar4 = "BRSHETPRSA";
	}
	sVar0 = "BRSCRWTEX";
	sVar1 = "BRDISHANGB1";
	iVar2 = "BRSHETPROSUB1";
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar4))
	{
		HUD::_SET_WARNING_MESSAGE_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, iVar4, 0, 1, 0);
	}
	else
	{
		HUD::_SET_WARNING_MESSAGE_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, 0, 0, 1, 0);
	}
}

void func_525(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	char* sVar5;
	
	iVar0 = uParam1;
	func_517(0);
	if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
	{
		func_516(1, 1, 0, 0, 0);
		func_515(1, 2, 1, 1, 1);
		func_514(0, 0, 0, 0, 0);
		func_513("REP_HANGAR_0");
		iVar3 = func_330(PLAYER::PLAYER_ID());
		if (iVar3 > 0)
		{
			bVar4 = func_526(iVar3, iVar0);
			func_505(iVar1, "PIM_DNAME", 1, bVar4, 0, 0);
			sVar5 = func_453(iVar3);
			if (func_522())
			{
				func_521(HUD::_GET_LABEL_TEXT(sVar5), 0, 0, 0);
			}
			else
			{
				func_504(HUD::_GET_LABEL_TEXT(sVar5), 0, 1);
			}
			func_505(iVar1, "CUST_GAR_COST", 1, bVar4, 0, 0);
			func_492(func_449(iVar3), 0);
			uParam0->f_1[iVar2] = iVar3;
			iVar1++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_201), 2);
		MISC::CLEAR_BIT(&(uParam0->f_201), 5);
		uParam0->f_200 = iVar1;
		func_414(uParam0->f_198, 1, 1);
		func_491(-1);
		func_490(176, "BB_SELECT", -1);
		func_490(177, "BB_BACK", -1);
	}
}

int func_526(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return 0;
	}
	return 1;
}

void func_527(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	vector3 vVar38;
	bool bVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	float fVar49;
	bool bVar50;
	bool bVar51;
	bool bVar52;
	int iVar53;
	bool bVar54;
	float fVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	int iVar59;
	int iVar60;
	float fVar61;
	float fVar62;
	float fVar63;
	char cVar64[64];
	char cVar65[64];
	float fVar66;
	int iVar67;
	float fVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	char cVar75[16];
	float fVar76;
	float fVar77;
	float fVar78;
	float fVar79;
	float fVar80;
	
	if (!func_425(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_546(0, bParam6))
	{
		return;
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar56 = 0f;
	fVar57 = 0f;
	if (Global_17301)
	{
		if (func_494(29, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar56 = fVar37;
			fVar57 = fVar36;
			fVar56 = (fVar56 + 0f);
		}
		else
		{
			Global_17301 = 0;
		}
	}
	if (MISC::GET_HASH_KEY(&(Global_17301.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar58 = Global_17299;
	}
	else
	{
		fVar58 = (((Global_17299 + fVar56) + 0.034722f) + 0f);
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_17300;
	}
	fVar61 = 1f;
	if (bParam7)
	{
		GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar59, &iVar60);
		fVar62 = GRAPHICS::_GET_ASPECT_RATIO(0);
		if (func_496())
		{
			iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) * fVar62));
		}
		fVar63 = (SYSTEM::TO_FLOAT(iVar59) / SYSTEM::TO_FLOAT(iVar60));
		fVar61 = (fVar63 / fVar62);
		if (func_496())
		{
			fVar61 = 1f;
		}
		iVar59 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar59) / fVar61));
		iVar60 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar60) / fVar61));
	}
	else
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar59, &iVar60);
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_17301.f_5598)
		{
			if (MISC::GET_HASH_KEY(&(Global_17301.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar49 = Global_17299;
			}
			else
			{
				if (Global_17301)
				{
					StringCopy(&cVar64, func_500(29), 64);
					StringCopy(&cVar65, func_497(29, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_17301.f_6719[29 /*16*/])) == -1487683087)
					{
						func_545(Global_17298, Global_17299, fParam5, (fVar56 - 0f), 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&cVar64, &cVar65, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar56 - 0f) * 0.5f)), fVar57, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&cVar64, &cVar65, (Global_17298 + (fParam5 * 0.5f)), (Global_17299 + ((fVar56 - 0f) * 0.5f)), fParam5, (fVar56 - 0f), 0f, 255, 255, 255, 255, 0);
					}
				}
				if (Global_17301.f_7901)
				{
					iVar1 = Global_17301.f_7897;
					iVar2 = Global_17301.f_7898;
					iVar3 = Global_17301.f_7899;
					iVar4 = Global_17301.f_7900;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_545(Global_17298, (Global_17299 + fVar56), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar49 = (((Global_17299 + fVar56) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_17301.f_1)) != 0)
				{
					func_544();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17301.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_17301.f_68)
					{
						if (Global_17301.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17301.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_17301.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17301.f_14[iVar16], Global_17301.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_17301.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_22[iVar17 /*4*/]));
							iVar17++;
						}
						else if (Global_17301.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_17301.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_35[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT((Global_17298 + 0.00390625f), ((Global_17299 + fVar56) + 0.00416664f), 0);
				}
				if (Global_17301.f_5601 > Global_17301.f_5095)
				{
					if (Global_17301.f_5604 != 0)
					{
						func_544();
						func_542((((Global_17298 + fParam5) - 0.00390625f) - func_543("CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603)), ((Global_17299 + fVar56) + 0.00416664f), "CM_ITEM_COUNT", Global_17301.f_5604, Global_17301.f_5603);
					}
				}
			}
			iVar6 = Global_17301.f_5605;
			iVar9 = 0;
			fVar66 = fVar49;
			if (Global_17301.f_7911)
			{
				iVar1 = Global_17301.f_7907;
				iVar2 = Global_17301.f_7908;
				iVar3 = Global_17301.f_7909;
				iVar4 = Global_17301.f_7910;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_17301.f_5095 && iVar6 <= Global_17301.f_5088)
			{
				if (iVar6 >= 0)
				{
					if (Global_17301.f_5355[iVar6])
					{
						if (Global_17301.f_5226[iVar6] && iVar6 != Global_17301.f_5605)
						{
							fVar49 = (fVar49 + 0.00277776f);
						}
						fVar55 = 0.034722f;
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar55 = Global_17301.f_5612[iVar6];
						}
						fVar49 = (fVar49 + fVar55);
						iVar9++;
					}
				}
				iVar6++;
			}
			if (bParam3)
			{
				if (iVar9 <= 1)
				{
					fVar55 = 0.034722f;
					fVar49 = (fVar49 + fVar55);
					iVar9++;
					if (Global_17301.f_5088 <= 1)
					{
						Global_17301.f_5088++;
					}
					iVar53 = 1;
				}
			}
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar66 + ((fVar49 - fVar66) * 0.5f)) - 0.00138888f), fParam5, (fVar49 - fVar66), 0f, 255, 255, 255, 255, 0);
			if (Global_17301.f_5601 > Global_17301.f_5095)
			{
				if (Global_17301.f_7916)
				{
					iVar1 = Global_17301.f_7912;
					iVar2 = Global_17301.f_7913;
					iVar3 = Global_17301.f_7914;
					iVar4 = Global_17301.f_7915;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_545(Global_17298, (fVar49 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				vVar38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				vVar38.x = (vVar38.x * (0.5f / fVar61));
				vVar38.y = (vVar38.y * (0.5f / fVar61));
				if (Global_17301.f_7929)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", (Global_17298 + (fParam5 * 0.5f)), ((fVar49 + 0f) + (0.034722f * 0.5f)), ((vVar38.x / 1280f) * fVar61), ((vVar38.y / 720f) * fVar61), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				fVar49 = (fVar49 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_17301.f_4562)) != 0 && Global_17301.f_4636 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17298 + 0.0046875f);
				if (Global_17301.f_4638 != 0)
				{
					func_494(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_541(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_GET_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_545(Global_17298, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_541(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17301.f_4562));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_17301.f_4632)
				{
					if (Global_17301.f_4566[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17301.f_4571[iVar15]);
						iVar15++;
					}
					else if (Global_17301.f_4566[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17301.f_4575[iVar16], Global_17301.f_4579[iVar16]);
						iVar16++;
					}
					else if (Global_17301.f_4566[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_17301.f_4566[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_4583[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_17301.f_4638 != 0)
				{
					func_494(Global_17301.f_4638, 1, 1, &fVar36, &fVar37, bParam7);
					func_540(Global_17301.f_4638, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_500(Global_17301.f_4638), func_497(Global_17301.f_4638, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_17301.f_4636 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_17301.f_4637) > Global_17301.f_4636)
					{
						StringCopy(&(Global_17301.f_4562), "", 16);
						Global_17301.f_4636 = -1;
					}
				}
			}
			if (MISC::GET_HASH_KEY(&(Global_4265799.f_21)) != 0 && Global_4265799.f_65 != -1)
			{
				fVar49 = (fVar49 + (0.00277776f * 2f));
				fVar40 = (Global_17298 + 0.0046875f);
				if (Global_4265799.f_67 != 0)
				{
					func_494(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar40 = (((Global_17298 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_541(fVar40);
				HUD::_BEGIN_TEXT_COMMAND_LINE_COUNT(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::_END_TEXT_COMMAND_GET_LINE_COUNT(fVar40, (fVar49 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_545(Global_17298, (fVar49 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_17301.f_7921)
				{
					iVar1 = Global_17301.f_7917;
					iVar2 = Global_17301.f_7918;
					iVar3 = Global_17301.f_7919;
					iVar4 = Global_17301.f_7920;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", (Global_17298 + (fParam5 * 0.5f)), ((fVar49 + ((((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0);
				func_541(fVar40);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4265799.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4265799.f_61)
				{
					if (Global_4265799.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4265799.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4265799.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4265799.f_34[iVar16], Global_4265799.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4265799.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4265799.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4265799.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar40, (fVar49 + 0.00277776f), 0);
				if (Global_4265799.f_67 != 0)
				{
					func_494(Global_4265799.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_540(Global_4265799.f_67, 1, &iVar45, &iVar46, &iVar47, &iVar48);
					GRAPHICS::DRAW_SPRITE(func_500(Global_4265799.f_67), func_497(Global_4265799.f_67, 1), ((Global_17298 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar49 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
				}
				fVar49 = (fVar49 + (((HUD::_GET_TEXT_SCALE_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4265799.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4265799.f_66) > Global_4265799.f_65)
					{
						StringCopy(&(Global_4265799.f_21), "", 16);
						Global_4265799.f_65 = -1;
					}
				}
			}
			func_534(iVar59, iParam1, 0, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_17301.f_5598)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar67 = Global_17301.f_5088;
			if (Global_17301.f_5599)
			{
				iVar67 = (Global_17301.f_5602 - 1);
			}
			fVar68 = 0f;
			fVar69 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar67)
			{
				fVar55 = 0.034722f;
				if (Global_17301.f_5612[iVar6] != 0f)
				{
					fVar55 = Global_17301.f_5612[iVar6];
				}
				if (Global_17301.f_5599)
				{
					iVar6 = Global_17301.f_7552[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_17301.f_5605 && iVar9 < Global_17301.f_5095)
				{
					bVar33 = true;
					if (Global_17301.f_5606 == iVar6)
					{
						fVar69 = fVar68;
					}
					if (Global_17301.f_5226[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_17301.f_5746[iVar6] = fVar35;
				fVar34 = (Global_17298 + 0.0046875f);
				bVar39 = false;
				bVar32 = Global_17301.f_5606 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar70 = 255;
					iVar71 = 255;
					iVar72 = 255;
					iVar73 = 255;
					if (Global_17301.f_7923)
					{
						HUD::GET_HUD_COLOUR(Global_17301.f_7922, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar70, &iVar71, &iVar72, &iVar73);
					}
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", (Global_17298 + (fParam5 * 0.5f)), (((fVar58 + fVar69) + (0.00277776f * IntToFloat(iVar12))) + (fVar55 * 0.5f)), fParam5, fVar55, 0f, iVar70, iVar71, iVar72, iVar73, 0);
					Global_17301.f_5744 = fVar35;
				}
				if (iVar53 && iVar7 == iVar67)
				{
					func_502(bVar32, 1, 0, 0, 0, 0, 0);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("DFLT_MNU_OPT");
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar34, fVar35, 0);
					bVar39 = true;
				}
				else
				{
					iVar8 = 0;
					while (iVar8 < Global_17301.f_5096)
					{
						if (MISC::IS_BIT_SET(Global_17301.f_4959[iVar6], iVar8) || Global_17301.f_4926[iVar8] == 5)
						{
							if (Global_17301.f_5599)
							{
								iVar19 = Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar20 = Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar21 = Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar22 = Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)];
								iVar23 = Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)];
							}
							else
							{
								Global_17301.f_7568[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar19;
								Global_17301.f_7609[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar20;
								Global_17301.f_7650[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar21;
								Global_17301.f_7691[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar22;
								Global_17301.f_7732[((iVar9 * Global_17301.f_5096) + iVar8)] = iVar23;
							}
							iVar74 = 0;
							bVar54 = false;
							if (Global_17301.f_5878[0] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[0])
								{
									bVar54 = true;
									iVar74 = 0;
								}
							}
							if (Global_17301.f_5878[1] != -1)
							{
								if ((iVar6 * 5 + iVar8) == Global_17301.f_5875[1])
								{
									bVar54 = true;
									iVar74 = 1;
								}
							}
							if (Global_17301.f_4932[iVar8] != -1f)
							{
								fVar34 = ((Global_17298 + 0.0046875f) + Global_17301.f_4932[iVar8]);
							}
							if ((iVar8 < 4 && Global_17301.f_4932[iVar8 + 1] != -1f) && fVar34 < Global_17301.f_4932[iVar8 + 1])
							{
								fVar44 = (Global_17301.f_4932[iVar8 + 1] - fVar34);
							}
							else
							{
								fVar44 = (((Global_17298 + Global_17300) - 0.0046875f) - fVar34);
							}
							if ((Global_17301.f_4945[iVar8] && Global_17301.f_5741) && bVar32)
							{
								bVar52 = true;
							}
							else
							{
								bVar52 = false;
							}
							switch (Global_17301.f_4926[iVar8])
							{
								case 0:
									break;
								
								case 1:
									iVar24 = iVar19;
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											fVar41 = 0f;
											fVar42 = 0f;
											iVar25 = 0;
											iVar26 = 0;
											iVar27 = 0;
											iVar28 = 0;
											iVar29 = 0;
											if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												bVar50 = false;
												bVar51 = false;
												iVar14 = 0;
												while (iVar14 < 4)
												{
													if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
													{
														bVar51 = true;
													}
													else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
													{
														bVar50 = true;
													}
													iVar14++;
												}
												func_502(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, iVar74, bVar51, bVar50);
												HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(Global_17301.f_73[iVar24 /*6*/]));
											}
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													iVar25++;
													if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
													}
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
												{
													if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
												{
													if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
												{
													if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
													}
													iVar29++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
												{
													if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17301.f_3918[(iVar20 + iVar26)]);
													}
													iVar26++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
												{
													if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
													{
														HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
													}
													iVar27++;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
												{
													iVar28++;
												}
												iVar14++;
											}
											if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
											{
												fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											}
											if (iVar28 > 0)
											{
												iVar14 = 0;
												while (iVar14 < iVar28)
												{
													if (func_494(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar42 = (fVar42 + fVar36);
														if (iVar14 > 0)
														{
															fVar42 = (fVar42 - (0.00078125f * 4f));
														}
														if (Global_17301.f_4433[(iVar22 + iVar14)] == 2 || Global_17301.f_4433[(iVar22 + iVar14)] == 48)
														{
															fVar42 = (fVar42 - (0.00078125f * 5f));
														}
													}
													iVar14++;
												}
											}
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - (fVar41 + fVar42)) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - ((fVar41 + fVar42) * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
											Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar42 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_494(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_494(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_540(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_500(26), func_497(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_494(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_494(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_540(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_500(27), func_497(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										iVar31 = 0;
										if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											bVar50 = false;
											bVar51 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5 || Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
												{
													bVar51 = true;
												}
												else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
												{
													bVar50 = true;
												}
												iVar14++;
											}
											func_502(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_533(bVar32);
											}
											HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_17301.f_73[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 1;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_17301.f_73[(iVar24 + iVar25) /*6*/]));
												}
												iVar31 = 8;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 5;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 6;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 7;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2457366[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
												iVar31 = 9;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17301.f_3918[(iVar20 + iVar26)]);
												}
												iVar26++;
												iVar31 = 2;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17301.f_4175[(iVar21 + iVar27)], Global_17301.f_4304[(iVar21 + iVar27)]);
												}
												iVar27++;
												iVar31 = 3;
											}
											else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
											{
												if (Global_17301.f_4433[(iVar22 + iVar28)] == 2 || Global_17301.f_4433[(iVar22 + iVar28)] == 48)
												{
													if (func_494(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_494(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_540(Global_17301.f_4433[(iVar22 + iVar28)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4953[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_500(Global_17301.f_4433[(iVar22 + iVar28)]), func_497(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar40) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_500(Global_17301.f_4433[(iVar22 + iVar28)]), func_497(Global_17301.f_4433[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar40) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															fVar40 = (fVar40 + (0.00078125f * 3f));
														}
													}
												}
												iVar28++;
												iVar31 = 4;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_17301.f_73[iVar24 /*6*/])) != 0)
										{
											if (iVar31 == 4 && Global_17301.f_4953[iVar8] == 2)
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT(((fVar34 + fVar40) + (0.00078125f * 7f)), fVar35, 0);
											}
											else
											{
												HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 + fVar40), fVar35, 0);
												if (func_532() && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("fm_mission_creator")) > 0)
												{
													if (iVar8 == 0)
													{
														func_502(0, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, bVar51, bVar50);
														StringCopy(&cVar75, "TEST_LABEL", 16);
														fVar76 = 0f;
														fVar77 = 55f;
														fVar78 = 0.0185f;
														fVar79 = 0.004f;
														fVar80 = 0.02f;
														HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
														HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
														GRAPHICS::DRAW_RECT((fVar34 - (fVar80 * 0.6f)), (fVar35 + (fVar78 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar76), SYSTEM::FLOOR(fVar77), 0);
														HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar75);
														HUD::ADD_TEXT_COMPONENT_INTEGER((Global_17301.f_5605 + iVar30));
														HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fVar34 - fVar80), (fVar35 + fVar79), 0);
														iVar30++;
													}
												}
											}
										}
										if (iVar28 > 0)
										{
											fVar40 = (fVar40 + (6f * 0.00078125f));
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (Global_17301.f_4433[(iVar22 + iVar14)] != 2 && Global_17301.f_4433[(iVar22 + iVar14)] != 48)
												{
													if (func_494(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
													{
														fVar40 = (fVar40 + (fVar36 * 0.5f));
														if (func_494(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_540(Global_17301.f_4433[(iVar22 + iVar14)], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
															if (Global_17301.f_4433[(iVar22 + iVar14)] == 30)
															{
																GRAPHICS::DRAW_SPRITE(func_500(Global_17301.f_4433[(iVar22 + iVar14)]), func_497(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (Global_17298 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else if (Global_17301.f_4953[iVar8] == 2)
															{
																GRAPHICS::DRAW_SPRITE(func_500(Global_17301.f_4433[(iVar22 + iVar14)]), func_497(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar40) + fVar41) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
															else
															{
																GRAPHICS::DRAW_SPRITE(func_500(Global_17301.f_4433[(iVar22 + iVar14)]), func_497(Global_17301.f_4433[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar40) + fVar41) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
															}
														}
														fVar40 = (fVar40 + (12f * 0.00078125f));
													}
												}
												iVar14++;
											}
										}
									}
									bVar39 = true;
									iVar19++;
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 1)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 8)
										{
											iVar19++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 2)
										{
											iVar20++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 3)
										{
											iVar21++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 4)
										{
											iVar22++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 5)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 6)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 7)
										{
											iVar23++;
										}
										else if (Global_17301.f_2124[iVar24 /*5*/][iVar14] == 9)
										{
											iVar23++;
										}
										iVar14++;
									}
									break;
								
								case 2:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_502(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_533(bVar32);
											}
											HUD::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_INTEGER(Global_17301.f_3918[iVar20]);
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_494(26, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_494(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_540(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_500(26), func_497(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_494(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_494(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_540(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_500(27), func_497(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_502(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_531((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_3918[iVar20], 0);
									}
									bVar39 = true;
									iVar20++;
									break;
								
								case 3:
									if (iVar5 == 1 && bVar33)
									{
										if (!Global_17301.f_5599)
										{
											func_502(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
											if (Global_17301.f_7927 && Global_17301.f_7928 == iVar6)
											{
												func_533(bVar32);
											}
											HUD::_BEGIN_TEXT_COMMAND_WIDTH("NUMBER");
											HUD::ADD_TEXT_COMPONENT_FLOAT(Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
											fVar41 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
											fVar40 = 0f;
											if (Global_17301.f_4953[iVar8] == 2)
											{
												fVar40 = (fVar40 + ((fVar44 - fVar41) + (0.00078125f * 1f)));
											}
											else if (Global_17301.f_4953[iVar8] == 0)
											{
												fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar41 * 0.5f)));
											}
											Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
											Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar41;
										}
										else
										{
											fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
											fVar41 = Global_17301.f_7814[((iVar9 * Global_17301.f_5096) + iVar8)];
										}
										if (bVar52)
										{
											if (func_494(26, 1, 0, &fVar36, &fVar37, 0))
											{
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 - (fVar36 * 2f));
												}
												fVar43 = (fVar36 * 0.5f);
												if (func_494(26, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_540(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_500(26), func_497(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
											if (func_494(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar40 = (fVar40 + fVar36);
												fVar43 = (fVar36 * 0.5f);
												if (func_494(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_540(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
													GRAPHICS::DRAW_SPRITE(func_500(27), func_497(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
												}
											}
										}
										func_502(bVar32, Global_17301.f_1610[iVar24], Global_17301.f_1867[iVar24], bVar54, 0, 0, 0);
										func_530((fVar34 + fVar40), fVar35, "NUMBER", Global_17301.f_4175[iVar21], Global_17301.f_4304[iVar21]);
									}
									bVar39 = true;
									iVar21++;
									break;
								
								case 4:
									if (iVar5 == 1 && bVar33)
									{
										if (func_494(Global_17301.f_4433[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
										{
											if (!Global_17301.f_5599)
											{
												fVar42 = fVar36;
												fVar40 = 0f;
												if (Global_17301.f_4953[iVar8] == 2)
												{
													fVar40 = (fVar40 + ((fVar44 - fVar42) + (0.00078125f * 1f)));
												}
												else if (Global_17301.f_4953[iVar8] == 0)
												{
													fVar40 = (fVar40 + (((fVar44 - fVar34) * 0.5f) - (fVar42 * 0.5f)));
												}
												Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar40;
												Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)] = fVar42;
											}
											else
											{
												fVar40 = Global_17301.f_7773[((iVar9 * Global_17301.f_5096) + iVar8)];
												fVar42 = Global_17301.f_7855[((iVar9 * Global_17301.f_5096) + iVar8)];
											}
											if (bVar52)
											{
												if (func_494(26, 1, 0, &fVar36, &fVar37, bParam7))
												{
													if (Global_17301.f_4953[iVar8] == 2)
													{
														fVar40 = (fVar40 - (fVar36 * 2f));
													}
													fVar43 = (fVar36 * 0.5f);
													if (func_494(26, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_540(26, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_500(26), func_497(26, 1), ((fVar34 + fVar40) + fVar43), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
												if (func_494(27, 1, 0, &fVar36, &fVar37, bParam7))
												{
													fVar40 = (fVar40 + fVar36);
													fVar43 = (fVar36 * 0.5f);
													if (func_494(27, 1, 1, &fVar36, &fVar37, bParam7))
													{
														func_540(27, 1, &iVar45, &iVar46, &iVar47, &iVar48);
														GRAPHICS::DRAW_SPRITE(func_500(27), func_497(27, 1), (((fVar34 + fVar40) + fVar43) + (fVar41 + fVar42)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), fVar36, fVar37, 0f, iVar45, iVar46, iVar47, iVar48, 0);
													}
												}
											}
											if (func_494(Global_17301.f_4433[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_540(Global_17301.f_4433[iVar22], bVar32, &iVar45, &iVar46, &iVar47, &iVar48);
												GRAPHICS::DRAW_SPRITE(func_500(Global_17301.f_4433[iVar22]), func_497(Global_17301.f_4433[iVar22], bVar32), ((fVar34 + fVar40) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar55 * 0.5f)), (fVar36 * func_529(Global_17301.f_4433[iVar22])), (fVar37 * func_529(Global_17301.f_4433[iVar22])), 0f, iVar45, iVar46, iVar47, iVar48, 0);
											}
										}
									}
									bVar39 = true;
									iVar22++;
									break;
								
								case 5:
									bVar39 = true;
									break;
							}
							if (Global_17301.f_4926[iVar8] == 5)
							{
								if (Global_17301.f_4938[iVar8] > 0.05f)
								{
									fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								}
								else
								{
									fVar34 = (fVar34 + 0.05f);
								}
							}
							else
							{
								fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
								if (Global_17301.f_4945[iVar8])
								{
									if (func_494(26, 1, 1, &fVar36, &fVar37, bParam7))
									{
										fVar34 = (fVar34 - fVar36);
									}
								}
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_17301.f_4938[iVar8]);
						}
						iVar8++;
					}
				}
				if (bVar39)
				{
					if (bVar33)
					{
						Global_17301.f_7552[iVar9] = iVar6;
						Global_17301.f_5607 = iVar6;
						iVar9++;
						if (Global_17301.f_5226[iVar6])
						{
							iVar13++;
						}
						if (Global_17301.f_5612[iVar6] != 0f)
						{
							fVar68 = (fVar68 + Global_17301.f_5612[iVar6]);
						}
						else
						{
							fVar68 = (fVar68 + 0.034722f);
						}
					}
					if (!Global_17301.f_5598)
					{
						Global_17301.f_5355[iVar6] = 1;
						if (Global_17301.f_5097[iVar6])
						{
							if (bVar32)
							{
								Global_17301.f_5604 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_17301.f_5604 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_17301.f_5598)
			{
				Global_17301.f_5600 = ((fVar58 + fVar68) + (0.00277776f * IntToFloat(iVar12)));
				Global_17301.f_5603 = iVar11;
				Global_17301.f_5601 = iVar10;
				Global_17301.f_5598 = 1;
			}
		}
		iVar5++;
	}
	if (!Global_17301.f_5599)
	{
		Global_17301.f_5602 = iVar9;
		Global_17301.f_5599 = 1;
	}
	Global_17301.f_5743 = fVar49;
	Global_17301.f_5745 = MISC::GET_GAME_TIMER();
	HUD::_CLEAR_NOTIFICATIONS_POS(Global_17301.f_5743);
	if (!Global_17301.f_7896)
	{
		func_409(0);
	}
	Global_17301.f_7896 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_528(1);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_528(int iParam0)
{
	Global_1359035.f_1079 = iParam0;
}

float func_529(int iParam0)
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 50:
		case 43:
		case 44:
		case 45:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_530(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

void func_531(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
}

bool func_532()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_533(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_17301.f_7924[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_17301.f_7924[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

void func_534(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_425(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_546(bParam4, bParam8))
	{
		return;
	}
	if (func_538())
	{
		return;
	}
	if (NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_536(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::_NETWORK_IS_TEXT_CHAT_ACTIVE())
		{
			return;
		}
	}
	if (Global_17301.f_4639 != 0)
	{
		if (PAD::_0x6CD79468A1E595C6(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (Global_17301.f_4896[iVar1] != 358)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, Global_17301.f_4896[iVar1], true), 64);
				}
				else if (Global_17301.f_4909[iVar1] != 32)
				{
					StringCopy(&(Global_17301.f_4641[iVar1 /*16*/]), PAD::_0x80C2FD58D720C801(2, Global_17301.f_4909[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_17301.f_4640 = 0;
		}
		if (!Global_17301.f_4640)
		{
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_FLOAT((1f - (Global_17301.f_4951 / 100f)));
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			iVar1 = 0;
			while (iVar1 < Global_17301.f_4639)
			{
				if (MISC::GET_HASH_KEY(&(Global_17301.f_4834[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					func_535(&(Global_17301.f_4641[iVar1 /*16*/]));
					iVar2 = iVar1 + 1;
					while (iVar2 < 12 && MISC::GET_HASH_KEY(&(Global_17301.f_4834[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_535(&(Global_17301.f_4641[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_17301.f_4883[iVar1] == -1)
					{
						func_16(&(Global_17301.f_4834[iVar1 /*4*/]));
					}
					else
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17301.f_4834[iVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_17301.f_4896[iVar1] != 358 && MISC::IS_BIT_SET(Global_17301.f_4922, iVar1))
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(true);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_17301.f_4896[iVar1]);
						}
						else
						{
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_BOOL(false);
							GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(358);
						}
					}
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
				iVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4265799.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(Global_17301.f_4639);
				func_535(&Global_4265799);
				if (Global_4265799.f_20 == -1)
				{
					func_16(&(Global_4265799.f_16));
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4265799.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(80);
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_17301.f_4952)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(1);
			}
			else
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(0);
			}
			GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			Global_17301.f_4640 = 1;
		}
		iVar1 = 0;
		while (iVar1 < Global_17301.f_4639)
		{
			if (Global_17301.f_4883[iVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_17301.f_4834[iVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
				}
			}
			iVar1++;
		}
		if (Global_4265799.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION(Global_17301.f_5530[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_FUNCTION_PARAMETER_INT(iVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4265799.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::_POP_SCALEFORM_MOVIE_FUNCTION_VOID();
			}
		}
		GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 66);
		GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_17301.f_7931)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_17301.f_7931 = 1;
			}
		}
		else if (Global_17301.f_7931)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_17301.f_7931 = 0;
		}
		GRAPHICS::_SCREEN_DRAW_POSITION_END();
		if (Global_17301.f_4925)
		{
			GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(82, 66);
			GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_17301.f_5530[iVar0 /*10*/], Global_17301.f_4923, Global_17301.f_4924, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::_SCREEN_DRAW_POSITION_END();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_17301.f_5530[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

void func_535(char* sParam0)
{
	GRAPHICS::_0xE83A3E3557A56640(sParam0);
}

bool func_536(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_537(-1, 0) == 8;
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

int func_537(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_51();
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

int func_538()
{
	vector3 vVar0;
	
	if (Global_14453.f_1 > 3)
	{
		return 1;
	}
	if (func_539())
	{
		vVar0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&vVar0);
		if (Global_14398 == 0)
		{
			if (vVar0.y > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (vVar0.y > -101f)
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

int func_539()
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_540(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 28:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 47:
		case 46:
		case 42:
		case 36:
		case 37:
		case 50:
		case 39:
		case 40:
		case 38:
		case 43:
		case 44:
		case 45:
		case 49:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 51:
			*iParam5 = 100;
			break;
	}
}

void func_541(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP(fParam0, ((Global_17298 + Global_17300) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_542(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
}

float func_543(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_544();
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

void func_544()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_17301.f_7906)
	{
		iVar0 = Global_17301.f_7902;
		iVar1 = Global_17301.f_7903;
		iVar2 = Global_17301.f_7904;
		iVar3 = Global_17301.f_7905;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	HUD::SET_TEXT_WRAP((Global_17298 + 0.0046875f), ((Global_17298 + Global_17300) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_545(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

int func_546(bool bParam0, bool bParam1)
{
	if (Global_2436181.f_1777.f_688 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_18(8, -1) && func_547() != 64)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::_0x2EAC52B4019E2782()) || Global_71116) || Global_17301.f_7930) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_92885.f_1377)
	{
		return 0;
	}
	return 1;
}

int func_547()
{
	return Global_1312789;
}

void func_548(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	uVar0 = iParam1;
	if (MISC::IS_BIT_SET(uParam0->f_204, 2))
	{
		iVar1 = func_338(PLAYER::PLAYER_ID());
		iVar2 = func_457(iVar1);
		func_549(iVar2, uVar0);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_201), 4);
		MISC::CLEAR_BIT(&(uParam0->f_201), 3);
		if (MISC::IS_BIT_SET(uParam0->f_201, 2))
		{
			func_485("REP_BUNKER_4", 100, 0);
		}
		else if (MISC::IS_BIT_SET(uParam0->f_201, 5))
		{
			func_485("MP_PROP_HEI_0", 100, 0);
		}
		else
		{
			func_485("MP_REP_BUNC_3", 100, 0);
		}
	}
}

void func_549(int iParam0, var uParam1)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	iVar2 = 0;
	iVar3 = -1;
	iVar4 = 0;
	iVar3 = iParam0;
	if (iVar3 < 0)
	{
		iVar3 = (iVar3 * -1);
	}
	if (iParam0 < 0)
	{
		iVar4 = "BRSHETMAK";
	}
	else
	{
		iVar4 = "BRSHETPRSA";
	}
	sVar0 = "BRSCRWTEX";
	sVar1 = "BRDISBUNCB1";
	iVar2 = "BRSHETPROSUB1";
	if (!MISC::IS_STRING_NULL_OR_EMPTY(iVar4))
	{
		HUD::_SET_WARNING_MESSAGE_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, iVar4, 0, 1, 0);
	}
	else
	{
		HUD::_SET_WARNING_MESSAGE_3(sVar0, sVar1, 18, iVar2, 1, iVar3, 0, 0, 0, 1, 0);
	}
}

void func_550(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	char* sVar6;
	
	iVar0 = uParam1;
	iVar1 = func_465(iVar0);
	func_517(0);
	if (!MISC::IS_BIT_SET(uParam0->f_204, 2))
	{
		func_516(1, 1, 0, 0, 0);
		func_515(1, 2, 1, 1, 1);
		func_514(0, 0, 0, 0, 0);
		func_513("REP_BUNKER_0");
		iVar3 = 0;
		while (iVar3 < 6)
		{
			iVar4 = func_552(PLAYER::PLAYER_ID(), iVar3);
			if (iVar4 > 0)
			{
				if (func_465(iVar4) == iVar1)
				{
					bVar5 = func_551(iVar4, iVar0);
					func_505(iVar2, "PIM_DNAME", 1, bVar5, 0, 0);
					sVar6 = func_478(iVar4);
					if (func_522())
					{
						func_521(HUD::_GET_LABEL_TEXT(sVar6), 0, 0, 0);
					}
					else
					{
						func_504(HUD::_GET_LABEL_TEXT(sVar6), 0, 1);
					}
					func_505(iVar2, "CUST_GAR_COST", 1, bVar5, 0, 0);
					func_492(func_457(iVar4), 0);
					uParam0->f_1[iVar3] = iVar4;
					iVar2++;
				}
			}
			iVar3++;
		}
		MISC::CLEAR_BIT(&(uParam0->f_201), 2);
		MISC::CLEAR_BIT(&(uParam0->f_201), 5);
		uParam0->f_200 = iVar2;
		func_414(uParam0->f_198, 1, 1);
		func_491(-1);
		func_490(176, "BB_SELECT", -1);
		func_490(177, "BB_BACK", -1);
	}
}

int func_551(int iParam0, int iParam1)
{
	if ((func_469(iParam0) && func_469(iParam1)) && func_465(iParam0) == func_465(iParam1))
	{
		return 1;
	}
	return 0;
}

int func_552(int iParam0, int iParam1)
{
	var uVar0;
	
	if (iParam0 == func_209())
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 6)
	{
		return 0;
	}
	if (func_469(Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/]))
	{
		uVar0 = Global_1595693[iParam0 /*680*/].f_266.f_160[iParam1 /*12*/];
	}
	return uVar0;
}

bool func_553(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_425(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_17301.f_5505[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_17301.f_5505[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_17301.f_5505[iVar0 /*4*/]), 9);
		Global_17301.f_5498[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_17301.f_5505[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_17301.f_5484[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_17301.f_5491[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_17301.f_5530[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_554(&(Global_17301.f_5530[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_554(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_555(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		Global_4265875 = -1;
		return;
	}
	PAD::_0x5B73C77D9EB66E24(1);
	fVar0 = Global_17298;
	fVar2 = (fVar0 + Global_17300);
	fVar3 = Global_17301.f_5600;
	fVar1 = (Global_17301.f_5600 - (IntToFloat(Global_17301.f_5602) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_17301.f_5602 < 1)
	{
		fVar1 = (Global_17301.f_5600 - 0.034722f);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::_0x6DD8F5AA635EB4B2(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
	func_557();
	if (Global_4265875 == -6)
	{
		return;
	}
	Global_4265875 = -1;
	fVar7 = Global_4265869;
	fVar8 = Global_4265870;
	if (Global_17301.f_5603 > Global_17301.f_5602)
	{
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= fVar3) && Global_4265870 < (fVar3 + fVar6))
		{
			Global_4265875 = -2;
			if (bParam3)
			{
				func_556(0);
			}
			return;
		}
		if (((Global_4265869 >= fVar0 && Global_4265869 <= fVar2) && Global_4265870 >= (fVar3 + fVar6)) && Global_4265870 < (fVar3 + 0.034722f))
		{
			Global_4265875 = -3;
			if (bParam3)
			{
				func_556(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_17301.f_5603 == -1)
		{
			Global_4265875 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_17301.f_5602);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
				GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
				func_545(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_17300, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::_SCREEN_DRAW_POSITION_END();
			}
		}
		Global_4265875 = Global_17301.f_7552[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4265875 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4265875 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4265875 = -4;
		return;
	}
	Global_4265875 = -1;
}

void func_556(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_17298;
	fVar1 = Global_17301.f_5600;
	GRAPHICS::_SCREEN_DRAW_POSITION_BEGIN(76, 84);
	GRAPHICS::_SCREEN_DRAW_POSITION_RATIO(-0.05f, -0.05f, 0f, 0f);
	if (Global_4265875 == -2)
	{
		func_545(fVar0, fVar1, Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4265875 == -3)
	{
		func_545(fVar0, (fVar1 + fVar2), Global_17300, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::_SCREEN_DRAW_POSITION_END();
}

void func_557()
{
	Global_4265871 = Global_4265869;
	Global_4265872 = Global_4265870;
	Global_4265869 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4265870 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4265873 = (Global_4265869 - Global_4265871);
	Global_4265874 = (Global_4265870 - Global_4265872);
}

void func_558()
{
	Global_2512808.f_4500 = 0;
}

void func_559(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_198 = 0;
	uParam0->f_200 = 0;
	uParam0->f_201 = 0;
	uParam0->f_204 = 0;
	func_423(1, iParam1);
}

int func_560(int iParam0, bool bParam1, bool bParam2)
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

int func_561(int iParam0)
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
	
	iVar0 = (func_2029(6152, -1, 0) / 2);
	if (func_571(PLAYER::PLAYER_ID()))
	{
		iVar1 = (func_570(2, iParam0, -1) / 2);
		iVar0 = (iVar0 + iVar1);
	}
	if (func_569(PLAYER::PLAYER_ID()))
	{
		iVar2 = (func_570(4, iParam0, -1) / 2);
		iVar0 = (iVar0 + iVar2);
	}
	if (func_568(PLAYER::PLAYER_ID()))
	{
		iVar3 = (func_570(6, iParam0, -1) / 2);
		iVar0 = (iVar0 + iVar3);
	}
	if (func_567(PLAYER::PLAYER_ID()))
	{
		iVar4 = (func_570(3, iParam0, 1) / 2);
		iVar0 = (iVar0 + iVar4);
	}
	if (func_566(PLAYER::PLAYER_ID()))
	{
		iVar5 = (func_570(3, iParam0, 2) / 2);
		iVar0 = (iVar0 + iVar5);
	}
	if (func_565(PLAYER::PLAYER_ID()))
	{
		iVar6 = (func_570(3, iParam0, 3) / 2);
		iVar0 = (iVar0 + iVar6);
	}
	if (func_564(PLAYER::PLAYER_ID()))
	{
		iVar7 = (func_570(5, iParam0, 0) / 2);
		iVar0 = (iVar0 + iVar7);
	}
	if (func_563(PLAYER::PLAYER_ID()))
	{
		iVar8 = (func_570(5, iParam0, 1) / 2);
		iVar0 = (iVar0 + iVar8);
	}
	if (func_562(PLAYER::PLAYER_ID()))
	{
		iVar9 = (func_570(5, iParam0, 2) / 2);
		iVar0 = (iVar0 + iVar9);
	}
	return iVar0;
}

bool func_562(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 26);
}

bool func_563(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 25);
}

bool func_564(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 24);
}

bool func_565(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 2);
}

bool func_566(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 1);
}

bool func_567(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 0);
}

bool func_568(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 4);
}

bool func_569(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 3);
}

int func_570(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	char cVar4[16];
	char cVar5[16];
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_580())
	{
		iVar0 = 0;
		func_322(&sVar1, iParam0, iParam2, iVar0);
		iVar2 = MISC::GET_HASH_KEY(&sVar1);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar2))
		{
			iVar3 = NETSHOP::_NETWORK_SHOP_GET_PRICE(iVar2, 426439576, 1);
			StringCopy(&cVar4, func_579(iParam1), 16);
			return iVar3;
		}
		else
		{
			StringCopy(&cVar5, func_579(iParam1), 16);
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam2)
			{
				case 0:
					return Global_262145.f_22700;
					break;
				
				case 1:
					return Global_262145.f_22701;
					break;
				
				case 2:
					return Global_262145.f_22702;
					break;
				
				case 3:
					return Global_262145.f_22703;
					break;
				
				case 4:
					return Global_262145.f_22704;
					break;
				
				case 5:
					return Global_262145.f_22705;
					break;
				
				case 6:
					return Global_262145.f_22706;
					break;
				
				case 7:
					return Global_262145.f_22707;
					break;
				
				case 8:
					return Global_262145.f_22708;
					break;
			}
			return 0;
			break;
		
		case 1:
			switch (iParam2)
			{
				case 0:
					return Global_262145.f_22709;
					break;
				
				case 1:
					return Global_262145.f_22710;
					break;
				
				case 2:
					return Global_262145.f_22711;
					break;
				
				case 3:
					return Global_262145.f_22712;
					break;
				
				case 4:
					return Global_262145.f_22713;
					break;
				
				case 5:
					return Global_262145.f_22714;
					break;
				
				case 6:
					return Global_262145.f_22715;
					break;
				
				case 7:
					return Global_262145.f_22716;
					break;
				
				case 8:
					return Global_262145.f_22717;
					break;
			}
			return 0;
			break;
		
		case 4:
			if (iParam2 != -1)
			{
			}
			return Global_262145.f_22719;
			break;
		
		case 5:
			switch (iParam2)
			{
				case 0:
					return Global_262145.f_22720;
					break;
				
				case 1:
					return Global_262145.f_22721;
					break;
				
				case 2:
					return Global_262145.f_22722;
					break;
			}
			return 0;
			break;
		
		case 6:
			if (iParam2 != -1)
			{
			}
			return Global_262145.f_22723;
			break;
		
		case 3:
			switch (iParam2)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return Global_262145.f_22724;
					break;
				
				case 2:
					return Global_262145.f_22725;
					break;
				
				case 3:
					return Global_262145.f_22726;
					break;
			}
			return 0;
			break;
		
		case 2:
			if (iParam2 != -1)
			{
			}
			return Global_262145.f_22718;
			break;
	}
	return 0;
}

bool func_571(int iParam0)
{
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_266.f_248.f_1, 5);
}

int func_572(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_577(PLAYER::PLAYER_ID());
	iVar1 = 0;
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	func_408(&Var2);
	*iParam1 = 0;
	if (iVar0 != iParam0)
	{
		if (Var2.f_1 == 0)
		{
		}
		else
		{
			*iParam1 = func_570(0, iParam0, Var2.f_1);
			iVar1 = (iVar1 + *iParam1);
		}
	}
	else if (Var2.f_1 != func_2029(6143, -1, 0))
	{
		*iParam1 = func_570(0, iParam0, Var2.f_1);
		iVar1 = (iVar1 + *iParam1);
	}
	iVar3 = func_2029(6144, -1, 0);
	iVar4 = -1;
	if (iVar3 != 0)
	{
		iVar4 = func_262(iVar3);
	}
	iVar5 = func_262(Var2.f_2);
	iParam1->f_1 = 0;
	if (iVar0 != iParam0)
	{
		if (iVar5 == 0)
		{
		}
		else
		{
			iParam1->f_1 = func_570(1, iParam0, iVar5);
			iVar1 = (iVar1 + iParam1->f_1);
		}
	}
	else if (iVar5 != iVar4)
	{
		iParam1->f_1 = func_570(1, iParam0, iVar5);
		iVar1 = (iVar1 + iParam1->f_1);
	}
	iParam1->f_2 = 0;
	if (iVar0 != iParam0)
	{
		if (Var2.f_3 == 0)
		{
		}
		else
		{
			iParam1->f_2 = func_570(2, iParam0, -1);
			iVar1 = (iVar1 + iParam1->f_2);
		}
	}
	else if (Var2.f_3 != func_2029(6145, -1, 0))
	{
		iParam1->f_2 = func_570(2, iParam0, -1);
		iVar1 = (iVar1 + iParam1->f_2);
	}
	iParam1->f_4 = 0;
	if (iVar0 != iParam0)
	{
		if (Var2.f_4 == 0)
		{
		}
		else
		{
			iParam1->f_4 = func_570(4, iParam0, -1);
			iVar1 = (iVar1 + iParam1->f_4);
		}
	}
	else if (Var2.f_4 != func_2029(6146, -1, 0))
	{
		iParam1->f_4 = func_570(4, iParam0, -1);
		iVar1 = (iVar1 + iParam1->f_4);
	}
	iParam1->f_5 = 0;
	if (iVar0 != iParam0)
	{
		if (Var2.f_5 == 0)
		{
		}
		else
		{
			iParam1->f_5 = func_570(5, iParam0, Var2.f_5);
			iVar1 = (iVar1 + iParam1->f_5);
		}
	}
	else if (Var2.f_5 != func_2029(6374, -1, 0))
	{
		iParam1->f_5 = func_570(5, iParam0, Var2.f_5);
		iVar1 = (iVar1 + iParam1->f_5);
	}
	iParam1->f_6 = 0;
	if (iVar0 != iParam0)
	{
		if (Var2.f_7 == 0)
		{
		}
		else
		{
			iParam1->f_6 = func_570(6, iParam0, -1);
			iVar1 = (iVar1 + iParam1->f_6);
		}
	}
	else if (Var2.f_7 != func_2029(6375, -1, 0))
	{
		iParam1->f_6 = func_570(6, iParam0, -1);
		iVar1 = (iVar1 + iParam1->f_6);
	}
	iParam1->f_3 = 0;
	if (iVar0 != iParam0)
	{
		if (Var2.f_6 == 0)
		{
		}
		else
		{
			iParam1->f_3 = func_570(3, iParam0, Var2.f_6);
			iVar1 = (iVar1 + iParam1->f_3);
		}
	}
	else if (Var2.f_6 != func_2029(6147, -1, 0))
	{
		iParam1->f_3 = func_570(3, iParam0, Var2.f_6);
		iVar1 = (iVar1 + iParam1->f_3);
	}
	return iVar1;
}

int func_573(int iParam0)
{
	if (iParam0 != func_209())
	{
		if (Global_1627537[iParam0 /*532*/].f_11 != func_209())
		{
			return Global_1627537[iParam0 /*532*/].f_11 == iParam0;
		}
	}
	return 0;
}

int func_574(int iParam0)
{
	if (func_575(iParam0, 0))
	{
		return Global_1627537[iParam0 /*532*/].f_11.f_33;
	}
	return -1;
}

int func_575(int iParam0, int iParam1)
{
	if (Global_1627537[iParam0 /*532*/].f_11.f_33 != -1 || (iParam1 && Global_1627537[iParam0 /*532*/].f_11.f_32 != -1))
	{
		return 1;
	}
	return 0;
}

int func_576(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 <= 0 || iVar0 >= 10)
	{
		return 0;
	}
	return 1;
}

int func_577(int iParam0)
{
	if (iParam0 != func_209())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_248;
	}
	return 0;
}

int func_578(int iParam0)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];
	char cVar4[16];
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_580())
	{
		func_324(&sVar0, iParam0);
		iVar1 = MISC::GET_HASH_KEY(&sVar0);
		if (NETSHOP::_NETWORK_SHOP_DOES_ITEM_EXIST_HASH(iVar1))
		{
			iVar2 = NETSHOP::_NETWORK_SHOP_GET_PRICE(iVar1, 426439576, 1);
			StringCopy(&cVar3, func_579(iParam0), 16);
			return iVar2;
		}
		else
		{
			StringCopy(&cVar4, func_579(iParam0), 16);
		}
	}
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_22693;
		
		case 2:
			return Global_262145.f_22694;
		
		case 3:
			return Global_262145.f_22692;
		
		case 4:
			return Global_262145.f_22698;
		
		case 5:
			return Global_262145.f_22699;
		
		case 6:
			return Global_262145.f_22697;
		
		case 7:
			return Global_262145.f_22695;
		
		case 8:
			return Global_262145.f_22696;
		
		case 9:
			return Global_262145.f_22691;
		
		default:
	}
	return 0;
}

char* func_579(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "MP_DBASE_1";
			break;
		
		case 2:
			return "MP_DBASE_2";
			break;
		
		case 3:
			return "MP_DBASE_3";
			break;
		
		case 4:
			return "MP_DBASE_4";
			break;
		
		case 5:
			return "MP_DBASE_6";
			break;
		
		case 6:
			return "MP_DBASE_7";
			break;
		
		case 7:
			return "MP_DBASE_8";
			break;
		
		case 8:
			return "MP_DBASE_9";
			break;
		
		case 9:
			return "MP_DBASE_10";
			break;
	}
	return "";
}

int func_580()
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x7D2708796355B20B();
	}
	return 0;
}

int func_581(int iParam0)
{
	return Global_1595693[iParam0 /*680*/].f_211.f_6;
}

bool func_582(int iParam0, bool bParam1, bool bParam2)
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
		if (func_586(PLAYER::PLAYER_ID(), 85))
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
	if (func_585() || func_584())
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
			if (func_583())
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

int func_583()
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
	if (func_585())
	{
		return 1;
	}
	if (func_584())
	{
		return 1;
	}
	iVar0 = Global_1368207[func_200(-1)];
	if (MISC::IS_BIT_SET(iVar0, 7))
	{
		MISC::SET_BIT(&(Global_2512808.f_1706), 23);
		return 1;
	}
	return 0;
}

bool func_584()
{
	return Global_1312842;
}

bool func_585()
{
	return Global_1312844;
}

bool func_586(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	
	if (!func_589())
	{
		return 0;
	}
	if (func_588())
	{
		return 0;
	}
	if (iParam1 == 86)
	{
		return 1;
	}
	uVar0 = func_587(iParam1);
	iVar1 = uVar0;
	return MISC::IS_BIT_SET(Global_1595693[iParam0 /*680*/].f_557, iVar1);
}

int func_587(int iParam0)
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

bool func_588()
{
	return MISC::IS_BIT_SET(Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_146, 3);
}

int func_589()
{
	if (Global_1312446)
	{
		return 1;
	}
	if (func_585())
	{
		return 1;
	}
	if (func_584())
	{
		return 1;
	}
	return func_199(120, -1);
}

int func_590()
{
	int iVar0;
	
	iVar0 = func_377(HUD::_0xE3B05614DCE1D014(13), 0, 6);
	iVar0++;
	if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	else if (iVar0 >= 10)
	{
		iVar0 = (10 - 1);
	}
	return iVar0;
}

void func_591(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char cVar5[16];
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	struct<2> Var11;
	struct<7> Var12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	struct<14> Var18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	bool bVar23;
	
	iVar3 = NETCASH::NETWORK_GET_VC_BANK_BALANCE();
	iVar4 = NETCASH::NETWORK_GET_VC_WALLET_BALANCE(-1);
	if (!func_582(60, 0, 0))
	{
		if (func_581(PLAYER::GET_PLAYER_INDEX()) < 5)
		{
			iLocal_547 = 3;
		}
		else
		{
			iLocal_547 = 4;
		}
		func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
		iLocal_308 = 1;
		bLocal_309 = false;
		return;
	}
	if (func_580())
	{
		if (!NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_ENABLED_FOR_CHARACTER(func_51()) || NETSHOP::_NETWORK_SHOP_GET_TRANSACTIONS_DISABLED())
		{
			iLocal_547 = 6;
			func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
			iLocal_308 = 1;
			bLocal_309 = false;
			return;
		}
	}
	StringCopy(&cVar5, func_453(iParam0), 16);
	iVar6 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_456(iParam0)) * Global_262145.f_77));
	iVar0 = iVar6;
	iVar7 = func_330(PLAYER::PLAYER_ID());
	if (iVar7 != 0)
	{
		iVar8 = func_574(PLAYER::PLAYER_ID());
		if (func_573(PLAYER::PLAYER_ID()) && ((iVar8 == 229 || iVar8 == 230) || iVar8 == 231))
		{
			iLocal_547 = 7;
			func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
			iLocal_308 = 1;
			bLocal_309 = false;
			return;
		}
	}
	bVar9 = false;
	if (iParam0 == iVar7)
	{
		iVar6 = func_641(iParam0, &Local_1161);
		bVar9 = true;
	}
	else
	{
		if (iVar7 != 0)
		{
			if (!func_638(PLAYER::PLAYER_ID()))
			{
				iLocal_547 = 9;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				iLocal_308 = 1;
				bLocal_309 = false;
				return;
			}
		}
		iVar6 = (iVar6 + func_641(iParam0, &Local_1161));
	}
	iVar0 = iVar6;
	if ((iVar7 == 0 || iVar7 == 6) || bVar9)
	{
		if (iVar0 > 0)
		{
			if (iVar0 <= 0 || (iVar0 > 0 && !NETCASH::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1)))
			{
				iLocal_547 = 2;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
				iLocal_308 = 1;
				bLocal_309 = false;
				func_1581(MISC::GET_HASH_KEY(&cVar5), iVar0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				return;
			}
		}
	}
	else
	{
		if (iVar0 > 0)
		{
			if (iVar0 <= 0 || (iVar0 > 0 && !NETCASH::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, 0, -1)))
			{
				iLocal_547 = 2;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
				iLocal_308 = 1;
				bLocal_309 = false;
				func_1581(MISC::GET_HASH_KEY(&cVar5), iVar0, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				return;
			}
		}
		Var11.f_1 = 194;
		while (!func_413(&Var11, iParam1, iParam0, iVar10, 2) && func_412())
		{
			func_411();
			func_409(0);
			SYSTEM::WAIT(0);
			Global_17301.f_7896 = 1;
		}
		if (*iParam1 == -1)
		{
			iLocal_547 = 5;
			func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
			iLocal_308 = 1;
			bLocal_309 = false;
			Global_69467 = Global_69469;
			AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
			return;
		}
		else
		{
			iVar2 = func_449(iVar7);
			iVar1 = (iVar6 - iVar2);
		}
		if (iVar1 > 0)
		{
			if (!NETCASH::NETWORK_CAN_SPEND_MONEY(iVar1, false, true, 0, -1))
			{
				iLocal_547 = 2;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
				iLocal_308 = 1;
				bLocal_309 = false;
				func_1581(MISC::GET_HASH_KEY(&cVar5), iVar1, 0);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				return;
			}
		}
	}
	Var12 = -1;
	Var12.f_1 = -1;
	Var12.f_2 = -1;
	Var12.f_3 = -1;
	Var12.f_4 = -1;
	Var12.f_5 = -1;
	Var12.f_6 = -1;
	func_333(&Var12);
	if (func_580())
	{
		if (iParam0 == iVar7)
		{
			iVar13 = 0;
		}
		else
		{
			iVar13 = SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_456(iParam0)) * Global_262145.f_77));
		}
		iLocal_542 = 1;
		iLocal_543 = 0;
		iVar14 = func_637(iParam0);
		iVar15 = func_635();
		iVar16 = 0;
		if (iVar7 != 0 && iVar7 != 6)
		{
			iVar16 = func_637(iVar7);
		}
		iVar17 = -1;
		while (func_274(&iVar17, iVar13, *iParam1, -1616616027, 235173372, iVar14, iVar15, 0, iVar2, iVar16, 0, -1, -1))
		{
			func_1858(0, 0);
			func_272(1);
			SYSTEM::WAIT(0);
		}
		func_272(0);
		func_1858(0, 0);
		switch (iVar17)
		{
			case 0:
				iLocal_547 = 6;
				func_1852(-1, "_S_PURCHASE_D_ERROR", 0, 0, 0, 0, 2);
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Fail", "WEB_NAVIGATION_SOUNDS_PHONE", true);
				iLocal_308 = 1;
				bLocal_309 = false;
				return;
				break;
			
			case 2:
				break;
			
			default:
				iLocal_547 = 6;
				return;
				break;
		}
	}
	if (iVar1 > 0)
	{
		func_267(joaat("mpply_ingamestore_moneyspent"), iVar1);
	}
	Var18 = -1;
	Var18.f_1 = -1;
	Var18.f_2 = -1;
	Var18.f_3 = -1;
	Var18.f_4 = -1;
	Var18.f_5 = -1;
	Var18.f_6 = -1;
	Var18.f_7 = -1;
	Var18.f_8 = -1;
	Var18.f_9 = -1;
	Var18.f_10 = -1;
	Var18.f_11 = -1;
	Var18.f_12 = -1;
	Var18.f_13 = -1;
	if ((iVar7 == 0 || iVar7 == 6) || bVar9)
	{
		if (func_580())
		{
			NETSHOP::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_265(func_266()));
		}
		iVar19 = iVar6;
		if (Local_1161 != 0 || !bVar9)
		{
			Var18.f_2 = MISC::GET_HASH_KEY(func_634(2, Var12.f_3));
			Var18.f_3 = Local_1161;
			iVar19 = (iVar19 - Var18.f_3);
		}
		if (Local_1161.f_1 != 0 || !bVar9)
		{
			Var18.f_12 = MISC::GET_HASH_KEY(func_634(4, Var12.f_5));
			Var18.f_13 = Local_1161.f_1;
			iVar19 = (iVar19 - Var18.f_13);
		}
		if (Local_1161.f_2 != 0 || !bVar9)
		{
			Var18.f_4 = MISC::GET_HASH_KEY(func_634(3, Var12.f_4));
			Var18.f_5 = Local_1161.f_2;
			iVar19 = (iVar19 - Var18.f_5);
		}
		if (Local_1161.f_3 != 0 || !bVar9)
		{
			Var18.f_6 = MISC::GET_HASH_KEY(func_634(5, Var12.f_6));
			Var18.f_7 = Local_1161.f_3;
			iVar19 = (iVar19 - Var18.f_7);
		}
		if (Local_1161.f_4 != 0 || !bVar9)
		{
			Var18.f_8 = MISC::GET_HASH_KEY(func_634(0, Var12.f_1));
			Var18.f_9 = Local_1161.f_4;
			iVar19 = (iVar19 - Var18.f_9);
		}
		if (Local_1161.f_5 != 0 || !bVar9)
		{
			Var18.f_10 = MISC::GET_HASH_KEY(func_634(1, Var12.f_2));
			Var18.f_11 = Local_1161.f_5;
			iVar19 = (iVar19 - Var18.f_11);
		}
		if (iVar19 != 0 || !bVar9)
		{
			Var18 = MISC::GET_HASH_KEY(func_453(iParam0));
			Var18.f_1 = iVar19;
		}
		if (!bVar9)
		{
			NETCASH::_0xCCB339CC970452DA(iVar6, &Var18, 0, 1);
		}
		else
		{
			NETCASH::_0x615EB504B0788DAF(iVar6, &Var18, 0, 1);
		}
		if (!bVar9)
		{
			func_632(iParam0);
			func_628();
		}
	}
	else if (func_627(iVar7) > 0)
	{
		if (func_580())
		{
			NETSHOP::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_265(func_266()));
		}
		func_626(iVar2, MISC::GET_HASH_KEY(func_453(iVar7)));
		if (func_580())
		{
			NETSHOP::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_265(func_266()));
		}
		iVar20 = iVar1;
		iVar20 = (iVar20 + iVar2);
		Var18.f_2 = MISC::GET_HASH_KEY(func_634(2, Var12.f_3));
		Var18.f_3 = Local_1161;
		iVar20 = (iVar20 - Var18.f_3);
		Var18.f_12 = MISC::GET_HASH_KEY(func_634(4, Var12.f_5));
		Var18.f_13 = Local_1161.f_1;
		iVar20 = (iVar20 - Var18.f_13);
		Var18.f_4 = MISC::GET_HASH_KEY(func_634(3, Var12.f_4));
		Var18.f_5 = Local_1161.f_2;
		iVar20 = (iVar20 - Var18.f_5);
		Var18.f_6 = MISC::GET_HASH_KEY(func_634(5, Var12.f_6));
		Var18.f_7 = Local_1161.f_3;
		iVar20 = (iVar20 - Var18.f_7);
		Var18.f_8 = MISC::GET_HASH_KEY(func_634(0, Var12.f_1));
		Var18.f_9 = Local_1161.f_4;
		iVar20 = (iVar20 - Var18.f_9);
		Var18.f_10 = MISC::GET_HASH_KEY(func_634(1, Var12.f_2));
		Var18.f_11 = Local_1161.f_5;
		iVar20 = (iVar20 - Var18.f_11);
		Var18 = MISC::GET_HASH_KEY(func_453(iParam0));
		Var18.f_1 = iVar20;
		NETCASH::_0x615EB504B0788DAF(iVar6, &Var18, 0, 1);
		func_625();
		func_624(iParam0, iVar7);
	}
	iVar21 = 116;
	func_251(6093, iVar21, -1, 1);
	func_622(1236, -1);
	if (!bVar9)
	{
		func_250(6094, SYSTEM::CEIL((SYSTEM::TO_FLOAT(func_456(iParam0)) * Global_262145.f_77)), -1, 1, 0);
		func_250(6377, iParam0, -1, 1, 0);
	}
	if (func_580())
	{
		func_246(func_266());
	}
	func_250(6086, Var12.f_3, -1, 1, 0);
	if (func_245(Var12.f_5))
	{
		if (func_2029(6089, -1, 0) != Var12.f_5)
		{
			func_244(10);
		}
	}
	switch (Var12.f_5)
	{
		case 0:
			func_250(6089, 0, -1, 1, 0);
			break;
		
		case 1:
			func_250(6089, 1, -1, 1, 0);
			break;
		
		case 2:
			func_250(6089, 2, -1, 1, 0);
			break;
	}
	switch (Var12.f_4)
	{
		case 0:
			func_250(6090, 0, -1, 1, 0);
			break;
		
		case 1:
			func_250(6090, 1, -1, 1, 0);
			break;
		
		case 2:
			func_250(6090, 2, -1, 1, 0);
			break;
	}
	if (func_245(Var12.f_6))
	{
		func_250(6091, 1, -1, 1, 0);
	}
	else
	{
		func_250(6091, 0, -1, 1, 0);
	}
	func_250(6087, Var12.f_1, -1, 1, 0);
	func_250(6088, Var12.f_2, -1, 1, 0);
	func_593();
	iVar22 = func_592();
	if (!func_206(iVar22, 3))
	{
		bVar23 = false;
		func_204(iVar22, 3, bVar23);
	}
	if (iLocal_1119)
	{
		iLocal_1119 = 0;
	}
	AUDIO::PLAY_SOUND_FRONTEND(-1, "Click_Special", "WEB_NAVIGATION_SOUNDS_PHONE", true);
	iLocal_370 = 1;
	func_198(0);
	func_1618(iLocal_304, 1);
	func_1852(-1, "_S_PURCHASE_D_SUCCESS", 1, bVar9, 0, 0, 2);
	iLocal_308 = 1;
	bLocal_309 = false;
	iLocal_310 = -1;
	iLocal_311 = 0;
	iLocal_312 = iParam0;
	iLocal_313 = 0;
}

int func_592()
{
	if (func_208())
	{
		Global_104555.f_28020[20 /*29*/].f_24[Global_14453] = 1;
	}
	return 20;
}

void func_593()
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_241 = func_2029(6083, -1, 0);
	Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_241.f_3 = func_2029(6084, -1, 0);
	if (func_621())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 0);
	}
	if (func_620())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 1);
	}
	if (func_619())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 2);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 2);
	}
	if (func_618())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 3);
	}
	if (func_617())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 4);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 4);
	}
	if (func_616())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 5);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 5);
	}
	if (func_615())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 6);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 6);
	}
	if (func_614())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 7);
	}
	if (func_613())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 8);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 8);
	}
	if (func_612())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 9);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 9);
	}
	if (func_611())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 10);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 10);
	}
	if (func_610())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 11);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 11);
	}
	if (func_609())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 12);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 12);
	}
	if (func_608())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 13);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 13);
	}
	if (func_607())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 14);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 14);
	}
	if (func_606())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 24);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 24);
	}
	if (func_605())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 25);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 25);
	}
	if (func_604())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 26);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 26);
	}
	if (func_603())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 27);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 27);
	}
	if (func_602())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 15);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 15);
	}
	if (func_601())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 16);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 16);
	}
	if (func_600())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 17);
	}
	if (func_599())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 18);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 18);
	}
	if (func_598())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 19);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 19);
	}
	if (func_597())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 20);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 20);
	}
	if (func_596())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 21);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 21);
	}
	if (func_595())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 22);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 22);
	}
	if (func_594())
	{
		MISC::SET_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 23);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1595693[iVar0 /*680*/].f_266.f_241.f_1), 23);
	}
}

bool func_594()
{
	return func_2029(6086, -1, 0) == 8;
}

bool func_595()
{
	return func_2029(6086, -1, 0) == 7;
}

bool func_596()
{
	return func_2029(6086, -1, 0) == 6;
}

bool func_597()
{
	return func_2029(6086, -1, 0) == 5;
}

bool func_598()
{
	return func_2029(6086, -1, 0) == 4;
}

bool func_599()
{
	return func_2029(6086, -1, 0) == 3;
}

bool func_600()
{
	return func_2029(6086, -1, 0) == 2;
}

bool func_601()
{
	return func_2029(6086, -1, 0) == 1;
}

bool func_602()
{
	return func_2029(6086, -1, 0) == 0;
}

bool func_603()
{
	return func_2029(6088, -1, 0) == 3;
}

bool func_604()
{
	return func_2029(6088, -1, 0) == 2;
}

bool func_605()
{
	return func_2029(6088, -1, 0) == 1;
}

bool func_606()
{
	return func_2029(6088, -1, 0) == 0;
}

bool func_607()
{
	return func_2029(6087, -1, 0) == 8;
}

bool func_608()
{
	return func_2029(6087, -1, 0) == 7;
}

bool func_609()
{
	return func_2029(6087, -1, 0) == 6;
}

bool func_610()
{
	return func_2029(6087, -1, 0) == 5;
}

bool func_611()
{
	return func_2029(6087, -1, 0) == 4;
}

bool func_612()
{
	return func_2029(6087, -1, 0) == 3;
}

bool func_613()
{
	return func_2029(6087, -1, 0) == 2;
}

bool func_614()
{
	return func_2029(6087, -1, 0) == 1;
}

bool func_615()
{
	return func_2029(6087, -1, 0) == 0;
}

bool func_616()
{
	return func_2029(6090, -1, 0) == 2;
}

bool func_617()
{
	return func_2029(6090, -1, 0) == 1;
}

bool func_618()
{
	return func_2029(6090, -1, 0) == 0;
}

bool func_619()
{
	return func_2029(6091, -1, 0) != 0;
}

bool func_620()
{
	return func_2029(6089, -1, 0) == 2;
}

bool func_621()
{
	return func_2029(6089, -1, 0) == 1;
}

void func_622(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_2029(iParam0, func_200(iParam1), 0);
	iVar0++;
	if (!func_623(iParam0))
	{
		func_250(iParam0, iVar0, iParam1, 1, 0);
	}
	else
	{
		func_251(iParam0, iVar0, iParam1, 1);
	}
}

int func_623(int iParam0)
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

void func_624(int iParam0, int iParam1)
{
	if (func_526(iParam0, iParam1))
	{
		func_632(iParam0);
	}
}

void func_625()
{
	Global_68320 = 1;
}

void func_626(int iParam0, int iParam1)
{
	if (iParam0 >= 2500000)
	{
		NETCASH::_0x31BA138F6304FB9F(2499999, iParam1);
		iParam0 = (iParam0 - 2499999);
	}
	if (func_580())
	{
		NETSHOP::_NETWORK_SHOP_SET_TELEMETRY_NONCE_SEED(func_265(func_266()));
	}
	NETCASH::_0x31BA138F6304FB9F(iParam0, iParam1);
}

int func_627(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1525000;
		
		case 2:
			return 1200000;
		
		case 3:
			return 3250000;
		
		case 4:
			return 2085000;
		
		case 5:
			return 2650000;
		
		default:
	}
	return 0;
}

void func_628()
{
	int iVar0;
	
	iVar0 = func_2029(6102, -1, 0);
	if (!MISC::IS_BIT_SET(iVar0, 22))
	{
		func_631(10);
		if (func_630(9))
		{
			func_629(9);
		}
		MISC::SET_BIT(&(Global_2512808.f_1714), 8);
		MISC::SET_BIT(&iVar0, 22);
		func_250(6102, iVar0, -1, 1, 0);
	}
}

void func_629(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_2512808.f_4856.f_21[iVar0]), iVar1);
}

bool func_630(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_2512808.f_4856.f_21[iVar0], iVar1);
}

void func_631(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_2512808.f_4856.f_21[iVar0]), iVar1);
}

void func_632(int iParam0)
{
	int iVar0;
	
	if (func_633(iParam0))
	{
		func_250(6083, iParam0, -1, 1, 0);
		func_250(6084, 0, -1, 1, 0);
		iVar0 = 116;
		func_251(6093, iVar0, -1, 1);
		Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_241 = iParam0;
		Global_1595693[PLAYER::PLAYER_ID() /*680*/].f_266.f_241.f_3 = 0;
	}
}

int func_633(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 <= 0 || iVar0 >= 6)
	{
		return 0;
	}
	return 1;
}

char* func_634(int iParam0, int iParam1)
{
	char cVar0[32];
	
	StringCopy(&cVar0, "HANGAR_MOD_", 32);
	switch (iParam0)
	{
		case 2:
			StringConCat(&cVar0, "FLOOR_DECAL_", 32);
			break;
		
		case 4:
			StringConCat(&cVar0, "SAVEBED_", 32);
			break;
		
		case 3:
			StringConCat(&cVar0, "FURNITURE_", 32);
			break;
		
		case 5:
			StringConCat(&cVar0, "MODSHOP_", 32);
			break;
		
		case 0:
			StringConCat(&cVar0, "COLOUR_", 32);
			break;
		
		case 1:
			StringConCat(&cVar0, "LIGHTING_", 32);
			break;
	}
	StringIntConCat(&cVar0, iParam1, 32);
	return HUD::_GET_TEXT_SUBSTRING(&cVar0, 0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

int func_635()
{
	char* sVar0;
	
	func_636(&sVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&sVar0))
	{
		return -1;
	}
	return MISC::GET_HASH_KEY(&sVar0);
}

void func_636(char* sParam0)
{
	StringCopy(sParam0, "MP_STAT_HANGAR_OWNED_v0", 64);
}

int func_637(int iParam0)
{
	char* sVar0;
	
	func_332(&sVar0, iParam0);
	return MISC::GET_HASH_KEY(&sVar0);
}

bool func_638(int iParam0)
{
	return func_639(iParam0) == 0;
}

int func_639(int iParam0)
{
	if (iParam0 != func_209() && func_640(iParam0))
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241.f_3;
	}
	return 0;
}

int func_640(int iParam0)
{
	if (iParam0 != func_209())
	{
		return Global_1595693[iParam0 /*680*/].f_266.f_241 != 0;
	}
	return 0;
}

int func_641(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;
	
	iVar0 = func_330(PLAYER::PLAYER_ID());
	iVar1 = 0;
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	func_333(&Var2);
	*iParam1 = 0;
	if (iVar0 != iParam0)
	{
		if (Var2.f_3 == 4)
		{
		}
		else
		{
			*iParam1 = func_452(2, iParam0, Var2.f_3);
			iVar1 = (iVar1 + *iParam1);
		}
	}
	else if (Var2.f_3 != func_2029(6086, -1, 0))
	{
		*iParam1 = func_452(2, iParam0, Var2.f_3);
		iVar1 = (iVar1 + *iParam1);
	}
	iParam1->f_1 = 0;
	if (iVar0 != iParam0)
	{
		if (Var2.f_5 == 0)
		{
		}
		else
		{
			iVar1 = (iVar1 + iParam1->f_1);
		}