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
	int iLocal_47 = 0;
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
	vector3 vLocal_66 = { 0f, 0f, 0f };
	vector3 vLocal_67 = { 0f, 0f, 0f };
	int iLocal_68 = 0;
	var uLocal_69 = 0;
	int iLocal_70 = 0;
	vector3 vLocal_71[5] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_72[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	vector3 vLocal_76 = { 0f, 0f, 0f };
	vector3 vLocal_77 = { 0f, 0f, 0f };
	vector3 vLocal_78 = { 0f, 0f, 0f };
	vector3 vLocal_79 = { 0f, 0f, 0f };
	vector3 vLocal_80 = { 0f, 0f, 0f };
	vector3 vLocal_81 = { 0f, 0f, 0f };
	vector3 vLocal_82 = { 0f, 0f, 0f };
	vector3 vLocal_83 = { 0f, 0f, 0f };
	vector3 vLocal_84 = { 0f, 0f, 0f };
	vector3 vLocal_85 = { 0f, 0f, 0f };
	vector3 vLocal_86 = { 0f, 0f, 0f };
	vector3 vLocal_87 = { 0f, 0f, 0f };
	vector3 vLocal_88 = { 0f, 0f, 0f };
	vector3 vLocal_89 = { 0f, 0f, 0f };
	vector3 vLocal_90 = { 0f, 0f, 0f };
	vector3 vLocal_91 = { 0f, 0f, 0f };
	vector3 vLocal_92 = { 0f, 0f, 0f };
	vector3 vLocal_93 = { 0f, 0f, 0f };
	vector3 vLocal_94 = { 0f, 0f, 0f };
	vector3 vLocal_95 = { 0f, 0f, 0f };
	vector3 vLocal_96 = { 0f, 0f, 0f };
	vector3 vLocal_97 = { 0f, 0f, 0f };
	vector3 vLocal_98 = { 0f, 0f, 0f };
	vector3 vLocal_99 = { 0f, 0f, 0f };
	vector3 vLocal_100 = { 0f, 0f, 0f };
	vector3 vLocal_101 = { 0f, 0f, 0f };
	vector3 vLocal_102 = { 0f, 0f, 0f };
	vector3 vLocal_103 = { 0f, 0f, 0f };
	vector3 vLocal_104 = { 0f, 0f, 0f };
	vector3 vLocal_105 = { 0f, 0f, 0f };
	vector3 vLocal_106 = { 0f, 0f, 0f };
	vector3 vLocal_107 = { 0f, 0f, 0f };
	vector3 vLocal_108 = { 0f, 0f, 0f };
	vector3 vLocal_109 = { 0f, 0f, 0f };
	float fLocal_110 = 0f;
	vector3 vLocal_111 = { 0f, 0f, 0f };
	vector3 vLocal_112 = { 0f, 0f, 0f };
	float fLocal_113 = 0f;
	vector3 vLocal_114 = { 0f, 0f, 0f };
	vector3 vLocal_115 = { 0f, 0f, 0f };
	vector3 vLocal_116 = { 0f, 0f, 0f };
	vector3 vLocal_117 = { 0f, 0f, 0f };
	vector3 vLocal_118 = { 0f, 0f, 0f };
	vector3 vLocal_119 = { 0f, 0f, 0f };
	vector3 vLocal_120 = { 0f, 0f, 0f };
	vector3 vLocal_121 = { 0f, 0f, 0f };
	float fLocal_122 = 0f;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	int iLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	int iLocal_136 = 0;
	int iLocal_137 = 0;
	int iLocal_138 = 0;
	int iLocal_139 = 0;
	int iLocal_140 = 0;
	int iLocal_141 = 0;
	int iLocal_142 = 0;
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	char[] cLocal_150[8] = 0;
	char[] cLocal_151[8] = 0;
	char[] cLocal_152[8] = 0;
	char[] cLocal_153[8] = 0;
	char* sLocal_154 = NULL;
	char* sLocal_155 = NULL;
	char[] cLocal_156[8] = 0;
	char* sLocal_157 = NULL;
	char* sLocal_158 = NULL;
	char[] cLocal_159[8] = 0;
	char[] cLocal_160[8] = 0;
	char* sLocal_161 = NULL;
	char[] cLocal_162[8] = 0;
	char* sLocal_163 = NULL;
	char[] cLocal_164[8] = 0;
	char[] cLocal_165[8] = 0;
	char[] cLocal_166[8] = 0;
	char[] cLocal_167[8] = 0;
	char[] cLocal_168[8] = 0;
	char[] cLocal_169[8] = 0;
	char[] cLocal_170[8] = 0;
	char[] cLocal_171[8] = 0;
	char[] cLocal_172[8] = 0;
	char[] cLocal_173[8] = 0;
	char[] cLocal_174[8] = 0;
	char[] cLocal_175[8] = 0;
	char[] cLocal_176[8] = 0;
	char* sLocal_177 = NULL;
	char[] cLocal_178[8] = 0;
	char[] cLocal_179[8] = 0;
	char[] cLocal_180[8] = 0;
	char[] cLocal_181[8] = 0;
	char* sLocal_182 = NULL;
	char* sLocal_183 = NULL;
	char* sLocal_184 = NULL;
	char* sLocal_185 = NULL;
	char* sLocal_186 = NULL;
	char* sLocal_187 = NULL;
	char* sLocal_188 = NULL;
	char[] cLocal_189[8] = 0;
	char[] cLocal_190[8] = 0;
	char[] cLocal_191[8] = 0;
	char[] cLocal_192[8] = 0;
	char[] cLocal_193[8] = 0;
	char* sLocal_194 = NULL;
	char* sLocal_195 = NULL;
	char* sLocal_196 = NULL;
	char* sLocal_197 = NULL;
	char* sLocal_198 = NULL;
	char* sLocal_199 = NULL;
	char* sLocal_200 = NULL;
	char* sLocal_201 = NULL;
	char* sLocal_202 = NULL;
	char* sLocal_203 = NULL;
	char* sLocal_204 = NULL;
	char* sLocal_205 = NULL;
	char* sLocal_206 = NULL;
	char* sLocal_207 = NULL;
	char* sLocal_208 = NULL;
	char* sLocal_209 = NULL;
	char* sLocal_210 = NULL;
	char* sLocal_211 = NULL;
	char* sLocal_212 = NULL;
	char* sLocal_213 = NULL;
	char* sLocal_214 = NULL;
	char* sLocal_215 = NULL;
	char* sLocal_216 = NULL;
	char* sLocal_217 = NULL;
	char* sLocal_218 = NULL;
	char* sLocal_219 = NULL;
	char* sLocal_220 = NULL;
	char* sLocal_221 = NULL;
	char* sLocal_222 = NULL;
	char* sLocal_223 = NULL;
	char* sLocal_224 = NULL;
	char* sLocal_225 = NULL;
	char* sLocal_226 = NULL;
	char* sLocal_227 = NULL;
	struct<2> Local_228[16];
	int iLocal_229[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	struct<36> Local_230[7];
	vector3 vLocal_231 = { 0f, 0f, 0f };
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
	struct<2> Local_251 = { 0, 0 } ;
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
	int iLocal_272 = 0;
	struct<6> Local_273 = { 0, 3, 0, 0, 0, 0 } ;
	var uLocal_274 = 0;
	var uLocal_275 = 1092616192;
	var uLocal_276 = 1101004800;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 3;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 30;
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
	var uLocal_444 = 10;
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
	var uLocal_495 = 10;
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
	var uLocal_566 = 20;
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
	var uLocal_667 = 20;
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
	var uLocal_768 = 30;
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
	var uLocal_808 = 0;
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
	var uLocal_949 = 5;
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
	var uLocal_980 = 7;
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
	var uLocal_1030 = 5;
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
	var uLocal_1056 = 3;
	var uLocal_1057 = 0;
	var uLocal_1058 = 0;
	var uLocal_1059 = 0;
	var uLocal_1060 = 0;
	var uLocal_1061 = 0;
	var uLocal_1062 = 0;
	var uLocal_1063 = 0;
	var uLocal_1064 = 0;
	var uLocal_1065 = 0;
	var uLocal_1066 = 0;
	var uLocal_1067 = 0;
	var uLocal_1068 = 0;
	var uLocal_1069 = 0;
	var uLocal_1070 = 0;
	var uLocal_1071 = 0;
	var uLocal_1072 = 16;
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
	var uLocal_1107 = 0;
	var uLocal_1108 = 0;
	var uLocal_1109 = 0;
	var uLocal_1110 = 0;
	var uLocal_1111 = 0;
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
	var uLocal_1122 = 0;
	var uLocal_1123 = 0;
	var uLocal_1124 = 0;
	var uLocal_1125 = 0;
	var uLocal_1126 = 0;
	var uLocal_1127 = 0;
	var uLocal_1128 = 0;
	var uLocal_1129 = 0;
	var uLocal_1130 = 0;
	var uLocal_1131 = 0;
	var uLocal_1132 = 0;
	var uLocal_1133 = 0;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 0;
	var uLocal_1137 = 0;
	var uLocal_1138 = 0;
	var uLocal_1139 = 0;
	var uLocal_1140 = 0;
	var uLocal_1141 = 0;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 0;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 10;
	var uLocal_1173 = 0;
	var uLocal_1174 = 0;
	var uLocal_1175 = 0;
	var uLocal_1176 = 0;
	var uLocal_1177 = 0;
	var uLocal_1178 = 0;
	var uLocal_1179 = 0;
	var uLocal_1180 = 0;
	var uLocal_1181 = 0;
	var uLocal_1182 = 0;
	var uLocal_1183 = 0;
	var uLocal_1184 = 0;
	var uLocal_1185 = 0;
	var uLocal_1186 = 0;
	var uLocal_1187 = 0;
	var uLocal_1188 = 0;
	var uLocal_1189 = 0;
	var uLocal_1190 = 0;
	var uLocal_1191 = 0;
	var uLocal_1192 = 0;
	var uLocal_1193 = 0;
	var uLocal_1194 = 0;
	var uLocal_1195 = 0;
	var uLocal_1196 = 0;
	var uLocal_1197 = 0;
	var uLocal_1198 = 0;
	var uLocal_1199 = 0;
	var uLocal_1200 = 0;
	var uLocal_1201 = 0;
	var uLocal_1202 = 0;
	var uLocal_1203 = 0;
	var uLocal_1204 = 0;
	var uLocal_1205 = 0;
	var uLocal_1206 = 0;
	var uLocal_1207 = 0;
	var uLocal_1208 = 0;
	var uLocal_1209 = 0;
	var uLocal_1210 = 0;
	var uLocal_1211 = 0;
	var uLocal_1212 = 0;
	var uLocal_1213 = 0;
	var uLocal_1214 = 0;
	var uLocal_1215 = 0;
	var uLocal_1216 = 0;
	var uLocal_1217 = 0;
	var uLocal_1218 = 0;
	var uLocal_1219 = 0;
	var uLocal_1220 = 0;
	var uLocal_1221 = 0;
	var uLocal_1222 = 0;
	var uLocal_1223 = 5;
	var uLocal_1224 = 0;
	var uLocal_1225 = 0;
	var uLocal_1226 = 0;
	var uLocal_1227 = 0;
	var uLocal_1228 = 0;
	var uLocal_1229 = 0;
	var uLocal_1230 = 0;
	var uLocal_1231 = 0;
	var uLocal_1232 = 0;
	var uLocal_1233 = 0;
	var uLocal_1234 = 0;
	var uLocal_1235 = 0;
	var uLocal_1236 = 0;
	var uLocal_1237 = 0;
	var uLocal_1238 = 0;
	var uLocal_1239 = 0;
	var uLocal_1240 = 0;
	var uLocal_1241 = 0;
	var uLocal_1242 = 0;
	var uLocal_1243 = 0;
	var uLocal_1244 = 0;
	var uLocal_1245 = 0;
	var uLocal_1246 = 0;
	var uLocal_1247 = 0;
	var uLocal_1248 = 0;
	var uLocal_1249 = 5;
	var uLocal_1250 = 0;
	var uLocal_1251 = 0;
	var uLocal_1252 = 0;
	var uLocal_1253 = 0;
	var uLocal_1254 = 0;
	var uLocal_1255 = 0;
	var uLocal_1256 = 0;
	var uLocal_1257 = 0;
	var uLocal_1258 = 0;
	var uLocal_1259 = 0;
	var uLocal_1260 = 0;
	var uLocal_1261 = 0;
	var uLocal_1262 = 0;
	var uLocal_1263 = 0;
	var uLocal_1264 = 0;
	var uLocal_1265 = 0;
	var uLocal_1266 = 0;
	var uLocal_1267 = 0;
	var uLocal_1268 = 0;
	var uLocal_1269 = 0;
	var uLocal_1270 = 0;
	var uLocal_1271 = 0;
	var uLocal_1272 = 0;
	var uLocal_1273 = 0;
	var uLocal_1274 = 0;
	var uLocal_1275 = 0;
	var uLocal_1276 = 0;
	var uLocal_1277 = 0;
	var uLocal_1278 = 10;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
	var uLocal_1284 = 0;
	var uLocal_1285 = 0;
	var uLocal_1286 = 0;
	var uLocal_1287 = 0;
	var uLocal_1288 = 0;
	var uLocal_1289 = 0;
	var uLocal_1290 = 0;
	var uLocal_1291 = 0;
	var uLocal_1292 = 0;
	var uLocal_1293 = 0;
	var uLocal_1294 = 0;
	var uLocal_1295 = 0;
	var uLocal_1296 = 12;
	var uLocal_1297 = 0;
	var uLocal_1298 = 0;
	var uLocal_1299 = 0;
	var uLocal_1300 = 0;
	var uLocal_1301 = 0;
	var uLocal_1302 = 0;
	var uLocal_1303 = 0;
	var uLocal_1304 = 0;
	var uLocal_1305 = 0;
	var uLocal_1306 = 0;
	var uLocal_1307 = 0;
	var uLocal_1308 = 0;
	var uLocal_1309 = 12;
	var uLocal_1310 = 0;
	var uLocal_1311 = 0;
	var uLocal_1312 = 0;
	var uLocal_1313 = 0;
	var uLocal_1314 = 0;
	var uLocal_1315 = 0;
	var uLocal_1316 = 0;
	var uLocal_1317 = 0;
	var uLocal_1318 = 0;
	var uLocal_1319 = 0;
	var uLocal_1320 = 0;
	var uLocal_1321 = 0;
	var uLocal_1322 = 12;
	var uLocal_1323 = 0;
	var uLocal_1324 = 0;
	var uLocal_1325 = 0;
	var uLocal_1326 = 0;
	var uLocal_1327 = 0;
	var uLocal_1328 = 0;
	var uLocal_1329 = 0;
	var uLocal_1330 = 0;
	var uLocal_1331 = 0;
	var uLocal_1332 = 0;
	var uLocal_1333 = 0;
	var uLocal_1334 = 0;
	var uLocal_1335 = 9;
	var uLocal_1336 = 0;
	var uLocal_1337 = 0;
	var uLocal_1338 = 0;
	var uLocal_1339 = 0;
	var uLocal_1340 = 0;
	var uLocal_1341 = 0;
	var uLocal_1342 = 0;
	var uLocal_1343 = 0;
	var uLocal_1344 = 0;
	var uLocal_1345 = 9;
	var uLocal_1346 = 0;
	var uLocal_1347 = 0;
	var uLocal_1348 = 0;
	var uLocal_1349 = 0;
	var uLocal_1350 = 0;
	var uLocal_1351 = 0;
	var uLocal_1352 = 0;
	var uLocal_1353 = 0;
	var uLocal_1354 = 0;
	var uLocal_1355 = 0;
	var uLocal_1356 = 0;
	var uLocal_1357 = 0;
	var uLocal_1358 = 0;
	var uLocal_1359 = 0;
	var uLocal_1360 = 0;
	var uLocal_1361 = 0;
	var uLocal_1362 = 0;
	var uLocal_1363 = 0;
	var uLocal_1364 = 0;
	var uLocal_1365 = 0;
	var uLocal_1366 = 0;
	var uLocal_1367 = 0;
	var uLocal_1368 = 0;
	var uLocal_1369 = 0;
	var uLocal_1370 = 0;
	var uLocal_1371 = 0;
	var uLocal_1372 = 0;
	var uLocal_1373 = 0;
	var uLocal_1374 = 0;
	var uLocal_1375 = 0;
	var uLocal_1376 = 0;
	var uLocal_1377 = 0;
	var uLocal_1378 = 12;
	var uLocal_1379 = 0;
	var uLocal_1380 = 0;
	var uLocal_1381 = 0;
	var uLocal_1382 = 0;
	var uLocal_1383 = 0;
	var uLocal_1384 = 0;
	var uLocal_1385 = 0;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 0;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 12;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	var uLocal_1396 = 0;
	var uLocal_1397 = 0;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	var uLocal_1401 = 0;
	var uLocal_1402 = 0;
	var uLocal_1403 = 0;
	var uLocal_1404 = 12;
	var uLocal_1405 = 0;
	var uLocal_1406 = 0;
	var uLocal_1407 = 0;
	var uLocal_1408 = 0;
	var uLocal_1409 = 0;
	var uLocal_1410 = 0;
	var uLocal_1411 = 0;
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 9;
	var uLocal_1418 = 0;
	var uLocal_1419 = 0;
	var uLocal_1420 = 0;
	var uLocal_1421 = 0;
	var uLocal_1422 = 0;
	var uLocal_1423 = 0;
	var uLocal_1424 = 0;
	var uLocal_1425 = 0;
	var uLocal_1426 = 0;
	var uLocal_1427 = 9;
	var uLocal_1428 = 0;
	var uLocal_1429 = 0;
	var uLocal_1430 = 0;
	var uLocal_1431 = 0;
	var uLocal_1432 = 0;
	var uLocal_1433 = 0;
	var uLocal_1434 = 0;
	var uLocal_1435 = 0;
	var uLocal_1436 = 0;
	var uLocal_1437 = 0;
	var uLocal_1438 = 0;
	var uLocal_1439 = 0;
	var uLocal_1440 = 0;
	var uLocal_1441 = 0;
	var uLocal_1442 = 0;
	var uLocal_1443 = 0;
	var uLocal_1444 = 0;
	var uLocal_1445 = 0;
	var uLocal_1446 = 0;
	var uLocal_1447 = 0;
	var uLocal_1448 = 0;
	var uLocal_1449 = 0;
	var uLocal_1450 = 0;
	var uLocal_1451 = 0;
	var uLocal_1452 = 0;
	var uLocal_1453 = 0;
	var uLocal_1454 = 0;
	var uLocal_1455 = 0;
	var uLocal_1456 = 0;
	var uLocal_1457 = 0;
	var uLocal_1458 = 0;
	var uLocal_1459 = 0;
	var uLocal_1460 = 12;
	var uLocal_1461 = 0;
	var uLocal_1462 = 0;
	var uLocal_1463 = 0;
	var uLocal_1464 = 0;
	var uLocal_1465 = 0;
	var uLocal_1466 = 0;
	var uLocal_1467 = 0;
	var uLocal_1468 = 0;
	var uLocal_1469 = 0;
	var uLocal_1470 = 0;
	var uLocal_1471 = 0;
	var uLocal_1472 = 0;
	var uLocal_1473 = 12;
	var uLocal_1474 = 0;
	var uLocal_1475 = 0;
	var uLocal_1476 = 0;
	var uLocal_1477 = 0;
	var uLocal_1478 = 0;
	var uLocal_1479 = 0;
	var uLocal_1480 = 0;
	var uLocal_1481 = 0;
	var uLocal_1482 = 0;
	var uLocal_1483 = 0;
	var uLocal_1484 = 0;
	var uLocal_1485 = 0;
	var uLocal_1486 = 12;
	var uLocal_1487 = 0;
	var uLocal_1488 = 0;
	var uLocal_1489 = 0;
	var uLocal_1490 = 0;
	var uLocal_1491 = 0;
	var uLocal_1492 = 0;
	var uLocal_1493 = 0;
	var uLocal_1494 = 0;
	var uLocal_1495 = 0;
	var uLocal_1496 = 0;
	var uLocal_1497 = 0;
	var uLocal_1498 = 0;
	var uLocal_1499 = 9;
	var uLocal_1500 = 0;
	var uLocal_1501 = 0;
	var uLocal_1502 = 0;
	var uLocal_1503 = 0;
	var uLocal_1504 = 0;
	var uLocal_1505 = 0;
	var uLocal_1506 = 0;
	var uLocal_1507 = 0;
	var uLocal_1508 = 0;
	var uLocal_1509 = 9;
	var uLocal_1510 = 0;
	var uLocal_1511 = 0;
	var uLocal_1512 = 0;
	var uLocal_1513 = 0;
	var uLocal_1514 = 0;
	var uLocal_1515 = 0;
	var uLocal_1516 = 0;
	var uLocal_1517 = 0;
	var uLocal_1518 = 0;
	var uLocal_1519 = 0;
	var uLocal_1520 = 0;
	var uLocal_1521 = 0;
	var uLocal_1522 = 0;
	var uLocal_1523 = 0;
	var uLocal_1524 = 0;
	var uLocal_1525 = 0;
	var uLocal_1526 = 0;
	var uLocal_1527 = 0;
	var uLocal_1528 = 0;
	var uLocal_1529 = 0;
	var uLocal_1530 = 0;
	var uLocal_1531 = 0;
	var uLocal_1532 = 0;
	var uLocal_1533 = 0;
	var uLocal_1534 = 0;
	var uLocal_1535 = 0;
	var uLocal_1536 = 0;
	var uLocal_1537 = 0;
	var uLocal_1538 = 0;
	var uLocal_1539 = 0;
	var uLocal_1540 = 0;
	var uLocal_1541 = 0;
	var uLocal_1542 = 12;
	var uLocal_1543 = 0;
	var uLocal_1544 = 0;
	var uLocal_1545 = 0;
	var uLocal_1546 = 0;
	var uLocal_1547 = 0;
	var uLocal_1548 = 0;
	var uLocal_1549 = 0;
	var uLocal_1550 = 0;
	var uLocal_1551 = 0;
	var uLocal_1552 = 0;
	var uLocal_1553 = 0;
	var uLocal_1554 = 0;
	var uLocal_1555 = 12;
	var uLocal_1556 = 0;
	var uLocal_1557 = 0;
	var uLocal_1558 = 0;
	var uLocal_1559 = 0;
	var uLocal_1560 = 0;
	var uLocal_1561 = 0;
	var uLocal_1562 = 0;
	var uLocal_1563 = 0;
	var uLocal_1564 = 0;
	var uLocal_1565 = 0;
	var uLocal_1566 = 0;
	var uLocal_1567 = 0;
	var uLocal_1568 = 12;
	var uLocal_1569 = 0;
	var uLocal_1570 = 0;
	var uLocal_1571 = 0;
	var uLocal_1572 = 0;
	var uLocal_1573 = 0;
	var uLocal_1574 = 0;
	var uLocal_1575 = 0;
	var uLocal_1576 = 0;
	var uLocal_1577 = 0;
	var uLocal_1578 = 0;
	var uLocal_1579 = 0;
	var uLocal_1580 = 0;
	var uLocal_1581 = 9;
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = 0;
	var uLocal_1590 = 0;
	var uLocal_1591 = 9;
	var uLocal_1592 = 0;
	var uLocal_1593 = 0;
	var uLocal_1594 = 0;
	var uLocal_1595 = 0;
	var uLocal_1596 = 0;
	var uLocal_1597 = 0;
	var uLocal_1598 = 0;
	var uLocal_1599 = 0;
	var uLocal_1600 = 0;
	var uLocal_1601 = 0;
	var uLocal_1602 = 0;
	var uLocal_1603 = 0;
	var uLocal_1604 = 0;
	var uLocal_1605 = 0;
	var uLocal_1606 = 0;
	var uLocal_1607 = 0;
	var uLocal_1608 = 0;
	var uLocal_1609 = 0;
	var uLocal_1610 = 0;
	var uLocal_1611 = 0;
	var uLocal_1612 = 0;
	var uLocal_1613 = 0;
	var uLocal_1614 = 0;
	var uLocal_1615 = 0;
	var uLocal_1616 = 0;
	var uLocal_1617 = 0;
	var uLocal_1618 = 0;
	var uLocal_1619 = 0;
	var uLocal_1620 = 0;
	var uLocal_1621 = 0;
	var uLocal_1622 = 0;
	var uLocal_1623 = 0;
	var uLocal_1624 = 12;
	var uLocal_1625 = 0;
	var uLocal_1626 = 0;
	var uLocal_1627 = 0;
	var uLocal_1628 = 0;
	var uLocal_1629 = 0;
	var uLocal_1630 = 0;
	var uLocal_1631 = 0;
	var uLocal_1632 = 0;
	var uLocal_1633 = 0;
	var uLocal_1634 = 0;
	var uLocal_1635 = 0;
	var uLocal_1636 = 0;
	var uLocal_1637 = 12;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = 0;
	var uLocal_1647 = 0;
	var uLocal_1648 = 0;
	var uLocal_1649 = 0;
	var uLocal_1650 = 12;
	var uLocal_1651 = 0;
	var uLocal_1652 = 0;
	var uLocal_1653 = 0;
	var uLocal_1654 = 0;
	var uLocal_1655 = 0;
	var uLocal_1656 = 0;
	var uLocal_1657 = 0;
	var uLocal_1658 = 0;
	var uLocal_1659 = 0;
	var uLocal_1660 = 0;
	var uLocal_1661 = 0;
	var uLocal_1662 = 0;
	var uLocal_1663 = 9;
	var uLocal_1664 = 0;
	var uLocal_1665 = 0;
	var uLocal_1666 = 0;
	var uLocal_1667 = 0;
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 9;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 0;
	var uLocal_1677 = 0;
	var uLocal_1678 = 0;
	var uLocal_1679 = 0;
	var uLocal_1680 = 0;
	var uLocal_1681 = 0;
	var uLocal_1682 = 0;
	var uLocal_1683 = 0;
	var uLocal_1684 = 0;
	var uLocal_1685 = 0;
	var uLocal_1686 = 0;
	var uLocal_1687 = 0;
	var uLocal_1688 = 0;
	var uLocal_1689 = 0;
	var uLocal_1690 = 0;
	var uLocal_1691 = 0;
	var uLocal_1692 = 0;
	var uLocal_1693 = 0;
	var uLocal_1694 = 0;
	var uLocal_1695 = 0;
	var uLocal_1696 = 0;
	var uLocal_1697 = 0;
	var uLocal_1698 = 0;
	var uLocal_1699 = 0;
	var uLocal_1700 = 0;
	var uLocal_1701 = 0;
	var uLocal_1702 = 0;
	var uLocal_1703 = 0;
	var uLocal_1704 = 0;
	var uLocal_1705 = 0;
	var uLocal_1706 = 12;
	var uLocal_1707 = 0;
	var uLocal_1708 = 0;
	var uLocal_1709 = 0;
	var uLocal_1710 = 0;
	var uLocal_1711 = 0;
	var uLocal_1712 = 0;
	var uLocal_1713 = 0;
	var uLocal_1714 = 0;
	var uLocal_1715 = 0;
	var uLocal_1716 = 0;
	var uLocal_1717 = 0;
	var uLocal_1718 = 0;
	var uLocal_1719 = 12;
	var uLocal_1720 = 0;
	var uLocal_1721 = 0;
	var uLocal_1722 = 0;
	var uLocal_1723 = 0;
	var uLocal_1724 = 0;
	var uLocal_1725 = 0;
	var uLocal_1726 = 0;
	var uLocal_1727 = 0;
	var uLocal_1728 = 0;
	var uLocal_1729 = 0;
	var uLocal_1730 = 0;
	var uLocal_1731 = 0;
	var uLocal_1732 = 12;
	var uLocal_1733 = 0;
	var uLocal_1734 = 0;
	var uLocal_1735 = 0;
	var uLocal_1736 = 0;
	var uLocal_1737 = 0;
	var uLocal_1738 = 0;
	var uLocal_1739 = 0;
	var uLocal_1740 = 0;
	var uLocal_1741 = 0;
	var uLocal_1742 = 0;
	var uLocal_1743 = 0;
	var uLocal_1744 = 0;
	var uLocal_1745 = 9;
	var uLocal_1746 = 0;
	var uLocal_1747 = 0;
	var uLocal_1748 = 0;
	var uLocal_1749 = 0;
	var uLocal_1750 = 0;
	var uLocal_1751 = 0;
	var uLocal_1752 = 0;
	var uLocal_1753 = 0;
	var uLocal_1754 = 0;
	var uLocal_1755 = 9;
	var uLocal_1756 = 0;
	var uLocal_1757 = 0;
	var uLocal_1758 = 0;
	var uLocal_1759 = 0;
	var uLocal_1760 = 0;
	var uLocal_1761 = 0;
	var uLocal_1762 = 0;
	var uLocal_1763 = 0;
	var uLocal_1764 = 0;
	var uLocal_1765 = 0;
	var uLocal_1766 = 0;
	var uLocal_1767 = 0;
	var uLocal_1768 = 0;
	var uLocal_1769 = 0;
	var uLocal_1770 = 0;
	var uLocal_1771 = 0;
	var uLocal_1772 = 0;
	var uLocal_1773 = 0;
	var uLocal_1774 = 0;
	var uLocal_1775 = 0;
	var uLocal_1776 = 0;
	var uLocal_1777 = 0;
	var uLocal_1778 = 0;
	var uLocal_1779 = 0;
	var uLocal_1780 = 0;
	var uLocal_1781 = 0;
	var uLocal_1782 = 0;
	var uLocal_1783 = 0;
	var uLocal_1784 = 0;
	var uLocal_1785 = 0;
	var uLocal_1786 = 0;
	var uLocal_1787 = 0;
	var uLocal_1788 = 12;
	var uLocal_1789 = 0;
	var uLocal_1790 = 0;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 0;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 0;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 0;
	var uLocal_1800 = 0;
	var uLocal_1801 = 12;
	var uLocal_1802 = 0;
	var uLocal_1803 = 0;
	var uLocal_1804 = 0;
	var uLocal_1805 = 0;
	var uLocal_1806 = 0;
	var uLocal_1807 = 0;
	var uLocal_1808 = 0;
	var uLocal_1809 = 0;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 12;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 0;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 9;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	var uLocal_1831 = 0;
	var uLocal_1832 = 0;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	var uLocal_1836 = 0;
	var uLocal_1837 = 9;
	var uLocal_1838 = 0;
	var uLocal_1839 = 0;
	var uLocal_1840 = 0;
	var uLocal_1841 = 0;
	var uLocal_1842 = 0;
	var uLocal_1843 = 0;
	var uLocal_1844 = 0;
	var uLocal_1845 = 0;
	var uLocal_1846 = 0;
	var uLocal_1847 = 0;
	var uLocal_1848 = 0;
	var uLocal_1849 = 0;
	var uLocal_1850 = 0;
	var uLocal_1851 = 0;
	var uLocal_1852 = 0;
	var uLocal_1853 = 0;
	var uLocal_1854 = 0;
	var uLocal_1855 = 0;
	var uLocal_1856 = 0;
	var uLocal_1857 = 0;
	var uLocal_1858 = 0;
	var uLocal_1859 = 0;
	var uLocal_1860 = 0;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
	var uLocal_1865 = 0;
	var uLocal_1866 = 0;
	var uLocal_1867 = 0;
	var uLocal_1868 = 0;
	var uLocal_1869 = 0;
	var uLocal_1870 = 12;
	var uLocal_1871 = 0;
	var uLocal_1872 = 0;
	var uLocal_1873 = 0;
	var uLocal_1874 = 0;
	var uLocal_1875 = 0;
	var uLocal_1876 = 0;
	var uLocal_1877 = 0;
	var uLocal_1878 = 0;
	var uLocal_1879 = 0;
	var uLocal_1880 = 0;
	var uLocal_1881 = 0;
	var uLocal_1882 = 0;
	var uLocal_1883 = 12;
	var uLocal_1884 = 0;
	var uLocal_1885 = 0;
	var uLocal_1886 = 0;
	var uLocal_1887 = 0;
	var uLocal_1888 = 0;
	var uLocal_1889 = 0;
	var uLocal_1890 = 0;
	var uLocal_1891 = 0;
	var uLocal_1892 = 0;
	var uLocal_1893 = 0;
	var uLocal_1894 = 0;
	var uLocal_1895 = 0;
	var uLocal_1896 = 12;
	var uLocal_1897 = 0;
	var uLocal_1898 = 0;
	var uLocal_1899 = 0;
	var uLocal_1900 = 0;
	var uLocal_1901 = 0;
	var uLocal_1902 = 0;
	var uLocal_1903 = 0;
	var uLocal_1904 = 0;
	var uLocal_1905 = 0;
	var uLocal_1906 = 0;
	var uLocal_1907 = 0;
	var uLocal_1908 = 0;
	var uLocal_1909 = 9;
	var uLocal_1910 = 0;
	var uLocal_1911 = 0;
	var uLocal_1912 = 0;
	var uLocal_1913 = 0;
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = 0;
	var uLocal_1918 = 0;
	var uLocal_1919 = 9;
	var uLocal_1920 = 0;
	var uLocal_1921 = 0;
	var uLocal_1922 = 0;
	var uLocal_1923 = 0;
	var uLocal_1924 = 0;
	var uLocal_1925 = 0;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 0;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 0;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 0;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
	var uLocal_1951 = 0;
	var uLocal_1952 = 12;
	var uLocal_1953 = 0;
	var uLocal_1954 = 0;
	var uLocal_1955 = 0;
	var uLocal_1956 = 0;
	var uLocal_1957 = 0;
	var uLocal_1958 = 0;
	var uLocal_1959 = 0;
	var uLocal_1960 = 0;
	var uLocal_1961 = 0;
	var uLocal_1962 = 0;
	var uLocal_1963 = 0;
	var uLocal_1964 = 0;
	var uLocal_1965 = 12;
	var uLocal_1966 = 0;
	var uLocal_1967 = 0;
	var uLocal_1968 = 0;
	var uLocal_1969 = 0;
	var uLocal_1970 = 0;
	var uLocal_1971 = 0;
	var uLocal_1972 = 0;
	var uLocal_1973 = 0;
	var uLocal_1974 = 0;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 12;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
	var uLocal_1984 = 0;
	var uLocal_1985 = 0;
	var uLocal_1986 = 0;
	var uLocal_1987 = 0;
	var uLocal_1988 = 0;
	var uLocal_1989 = 0;
	var uLocal_1990 = 0;
	var uLocal_1991 = 9;
	var uLocal_1992 = 0;
	var uLocal_1993 = 0;
	var uLocal_1994 = 0;
	var uLocal_1995 = 0;
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 9;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 0;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
	var uLocal_2010 = 0;
	var uLocal_2011 = 0;
	var uLocal_2012 = 0;
	var uLocal_2013 = 0;
	var uLocal_2014 = 0;
	var uLocal_2015 = 0;
	var uLocal_2016 = 0;
	var uLocal_2017 = 0;
	var uLocal_2018 = 0;
	var uLocal_2019 = 0;
	var uLocal_2020 = 0;
	var uLocal_2021 = 0;
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = 0;
	var uLocal_2032 = 0;
	var uLocal_2033 = 0;
	var uLocal_2034 = 12;
	var uLocal_2035 = 0;
	var uLocal_2036 = 0;
	var uLocal_2037 = 0;
	var uLocal_2038 = 0;
	var uLocal_2039 = 0;
	var uLocal_2040 = 0;
	var uLocal_2041 = 0;
	var uLocal_2042 = 0;
	var uLocal_2043 = 0;
	var uLocal_2044 = 0;
	var uLocal_2045 = 0;
	var uLocal_2046 = 0;
	var uLocal_2047 = 12;
	var uLocal_2048 = 0;
	var uLocal_2049 = 0;
	var uLocal_2050 = 0;
	var uLocal_2051 = 0;
	var uLocal_2052 = 0;
	var uLocal_2053 = 0;
	var uLocal_2054 = 0;
	var uLocal_2055 = 0;
	var uLocal_2056 = 0;
	var uLocal_2057 = 0;
	var uLocal_2058 = 0;
	var uLocal_2059 = 0;
	var uLocal_2060 = 12;
	var uLocal_2061 = 0;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
	var uLocal_2066 = 0;
	var uLocal_2067 = 0;
	var uLocal_2068 = 0;
	var uLocal_2069 = 0;
	var uLocal_2070 = 0;
	var uLocal_2071 = 0;
	var uLocal_2072 = 0;
	var uLocal_2073 = 9;
	var uLocal_2074 = 0;
	var uLocal_2075 = 0;
	var uLocal_2076 = 0;
	var uLocal_2077 = 0;
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 9;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = 0;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
	var uLocal_2092 = 0;
	var uLocal_2093 = 0;
	var uLocal_2094 = 0;
	var uLocal_2095 = 0;
	var uLocal_2096 = 0;
	var uLocal_2097 = 0;
	var uLocal_2098 = 0;
	var uLocal_2099 = 30;
	var uLocal_2100 = 0;
	var uLocal_2101 = 0;
	var uLocal_2102 = 0;
	var uLocal_2103 = 0;
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 0;
	var uLocal_2119 = 0;
	var uLocal_2120 = 0;
	var uLocal_2121 = 0;
	var uLocal_2122 = 0;
	var uLocal_2123 = 0;
	var uLocal_2124 = 0;
	var uLocal_2125 = 0;
	var uLocal_2126 = 0;
	var uLocal_2127 = 0;
	var uLocal_2128 = 0;
	var uLocal_2129 = 0;
	var uLocal_2130 = 0;
	var uLocal_2131 = 0;
	var uLocal_2132 = 0;
	var uLocal_2133 = 0;
	var uLocal_2134 = 0;
	var uLocal_2135 = 0;
	var uLocal_2136 = 0;
	var uLocal_2137 = 0;
	var uLocal_2138 = 0;
	var uLocal_2139 = 0;
	var uLocal_2140 = 0;
	var uLocal_2141 = 0;
	var uLocal_2142 = 0;
	var uLocal_2143 = 0;
	var uLocal_2144 = 0;
	var uLocal_2145 = 0;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
	var uLocal_2148 = 0;
	var uLocal_2149 = 0;
	var uLocal_2150 = 0;
	var uLocal_2151 = 0;
	var uLocal_2152 = 0;
	var uLocal_2153 = 0;
	var uLocal_2154 = 0;
	var uLocal_2155 = 0;
	var uLocal_2156 = 0;
	var uLocal_2157 = 0;
	var uLocal_2158 = 0;
	var uLocal_2159 = 0;
	vector3 vLocal_2160[6] = {{ 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f }, { 0f, 0f, 0f } };
	int iLocal_2161[3] = { 0, 0, 0 };
	int iLocal_2162 = 0;
	bool bLocal_2163 = 0;
	bool bLocal_2164 = 0;
	bool bLocal_2165 = 0;
	char* sLocal_2166 = NULL;
	int iLocal_2167 = 0;
	int iLocal_2168 = 0;
	bool bLocal_2169 = 0;
	vector3 vLocal_2170 = { 0f, 0f, 0f };
	var uLocal_2171 = 0;
	var uLocal_2172 = 0;
	var uLocal_2173 = 0;
	vector3 vLocal_2174[24] = "";
	var uLocal_2175 = 0;
	var uLocal_2176 = 0;
	var uLocal_2177 = 0;
	int iLocal_2178 = 0;
	int iLocal_2179 = 0;
	bool bLocal_2180 = 0;
	int iLocal_2181 = 0;
	bool bLocal_2182 = 0;
	bool bLocal_2183 = 0;
	bool bLocal_2184 = 0;
	bool bLocal_2185 = 0;
	int iLocal_2186 = 0;
	int iLocal_2187 = 0;
	int iLocal_2188 = 0;
	int iLocal_2189 = 0;
	int iLocal_2190 = 0;
	int iLocal_2191 = 0;
	int iLocal_2192 = 0;
	int iLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 1065353216;
	var uLocal_2199 = 1065353216;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = 0;
	var uLocal_2203 = 1065353216;
	var uLocal_2204 = 1065353216;
	var uLocal_2205 = 0;
	var uLocal_2206 = 0;
	var uLocal_2207 = 0;
	var uLocal_2208 = 1065353216;
	var uLocal_2209 = 1065353216;
	var uLocal_2210 = 0;
	var uLocal_2211 = 1040187392;
	var uLocal_2212 = 1040187392;
	var uLocal_2213 = -1;
	var uLocal_2214 = 0;
	var uLocal_2215 = 0;
	int iLocal_2216 = 0;
	int iLocal_2217 = 0;
	bool bLocal_2218 = 0;
	int iLocal_2219 = 0;
	int iLocal_2220 = 0;
	int iLocal_2221 = 0;
	int iLocal_2222 = 0;
	int iLocal_2223 = 0;
	float fLocal_2224 = 0f;
	float fLocal_2225 = 0f;
	float fLocal_2226 = 0f;
	float fLocal_2227 = 0f;
	float fLocal_2228 = 0f;
	float fLocal_2229 = 0f;
	float fLocal_2230 = 0f;
	float fLocal_2231 = 0f;
	float fLocal_2232 = 0f;
	float fLocal_2233 = 0f;
	float fLocal_2234 = 0f;
	float fLocal_2235 = 0f;
	int iLocal_2236 = 0;
	int iLocal_2237 = 0;
	int iLocal_2238 = 0;
	int iLocal_2239 = 0;
	int iLocal_2240 = 0;
	float fLocal_2241 = 0f;
	float fLocal_2242 = 0f;
	float fLocal_2243 = 0f;
	float fLocal_2244 = 0f;
	int iLocal_2245 = 0;
	int iLocal_2246 = 0;
	int iLocal_2247 = 0;
	int iLocal_2248 = 0;
	int iLocal_2249 = 0;
	int iLocal_2250 = 0;
	vector3 vLocal_2251 = { 0f, 0f, 0f };
	int iLocal_2252 = 0;
	int iLocal_2253 = 0;
	int iLocal_2254 = 0;
	bool bLocal_2255 = 0;
	int iLocal_2256[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2257[5] = { 0, 0, 0, 0, 0 };
	bool bLocal_2258 = 0;
	int iLocal_2259 = 0;
	int iLocal_2260 = 0;
	int iLocal_2261 = 0;
	int iLocal_2262[3] = { 0, 0, 0 };
	int iLocal_2263 = 0;
	int iLocal_2264 = 0;
	bool bLocal_2265 = 0;
	int iLocal_2266 = 0;
	int iLocal_2267 = 0;
	int iLocal_2268 = 0;
	int iLocal_2269 = 0;
	int iLocal_2270 = 0;
	bool bLocal_2271 = 0;
	int iLocal_2272 = 0;
	int iLocal_2273 = 0;
	int iLocal_2274 = 0;
	int iLocal_2275 = 0;
	bool bLocal_2276 = 0;
	int iLocal_2277 = 0;
	bool bLocal_2278 = 0;
	int iLocal_2279 = 0;
	int iLocal_2280 = 0;
	int iLocal_2281 = 0;
	int iLocal_2282 = 0;
	int iLocal_2283 = 0;
	int iLocal_2284 = 0;
	bool bLocal_2285 = 0;
	vector3 vLocal_2286 = { 0f, 0f, 0f };
	bool bLocal_2287 = 0;
	int iLocal_2288 = 0;
	int iLocal_2289 = 0;
	int iLocal_2290 = 0;
	int iLocal_2291 = 0;
	int iLocal_2292[3] = { 0, 0, 0 };
	int iLocal_2293 = 0;
	bool bLocal_2294 = 0;
	int iLocal_2295 = 0;
	int iLocal_2296 = 0;
	int iLocal_2297 = 0;
	int iLocal_2298 = 0;
	int iLocal_2299 = 0;
	int iLocal_2300 = 0;
	int iLocal_2301 = 0;
	int iLocal_2302[3] = { 0, 0, 0 };
	int iLocal_2303 = 0;
	char* sLocal_2304 = NULL;
	int iLocal_2305 = 0;
	int iLocal_2306 = 0;
	int iLocal_2307 = 0;
	int iLocal_2308 = 0;
	int iLocal_2309 = 0;
	int iLocal_2310 = 0;
	int iLocal_2311 = 0;
	int iLocal_2312 = 0;
	int iLocal_2313 = 0;
	int iLocal_2314 = 0;
	int iLocal_2315 = 0;
	int iLocal_2316 = 0;
	float fLocal_2317 = 0f;
	float fLocal_2318 = 0f;
	int iLocal_2319 = 0;
	float fLocal_2320 = 0f;
	float fLocal_2321 = 0f;
	float fLocal_2322 = 0f;
	float fLocal_2323 = 0f;
	int iLocal_2324 = 0;
	int iLocal_2325 = 0;
	int iLocal_2326 = 0;
	int iLocal_2327 = 0;
	int iLocal_2328 = 0;
	float fLocal_2329 = 0f;
	float fLocal_2330 = 0f;
	float fLocal_2331 = 0f;
	float fLocal_2332 = 0f;
	float fLocal_2333 = 0f;
	float fLocal_2334 = 0f;
	bool bLocal_2335 = 0;
	int iLocal_2336 = 0;
	float fLocal_2337 = 0f;
	int iLocal_2338 = 0;
	int iLocal_2339 = 0;
	struct<5> Local_2340 = { 0, 0, 0, 0, 0 } ;
	int iLocal_2341 = 0;
	int iLocal_2342 = 0;
	struct<20> Local_2343 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 0;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	int iLocal_2358 = 4;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
	var uLocal_2361 = 0;
	var uLocal_2362 = 0;
	var uLocal_2363 = 0;
	var uLocal_2364 = 0;
	var uLocal_2365 = 0;
	var uLocal_2366 = 4;
	var uLocal_2367 = 0;
	var uLocal_2368 = 0;
	var uLocal_2369 = 0;
	var uLocal_2370 = 0;
	var uLocal_2371 = 4;
	var uLocal_2372 = 0;
	var uLocal_2373 = 0;
	var uLocal_2374 = 0;
	var uLocal_2375 = 0;
	var uLocal_2376 = 4;
	var uLocal_2377 = 0;
	var uLocal_2378 = 0;
	var uLocal_2379 = 0;
	var uLocal_2380 = 0;
	var uLocal_2381 = 0;
	var uLocal_2382 = 4;
	var uLocal_2383 = 0;
	var uLocal_2384 = 0;
	var uLocal_2385 = 0;
	var uLocal_2386 = 0;
	var uLocal_2387 = 4;
	var uLocal_2388 = 0;
	var uLocal_2389 = 0;
	var uLocal_2390 = 0;
	var uLocal_2391 = 0;
	var uLocal_2392 = 4;
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 16;
	var uLocal_2403 = 0;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
	var uLocal_2407 = 0;
	var uLocal_2408 = 0;
	var uLocal_2409 = 0;
	var uLocal_2410 = 0;
	var uLocal_2411 = 0;
	var uLocal_2412 = 0;
	var uLocal_2413 = 0;
	var uLocal_2414 = 0;
	var uLocal_2415 = 0;
	var uLocal_2416 = 0;
	var uLocal_2417 = 0;
	var uLocal_2418 = 0;
	var uLocal_2419 = 0;
	var uLocal_2420 = 0;
	var uLocal_2421 = 0;
	var uLocal_2422 = 0;
	var uLocal_2423 = 0;
	var uLocal_2424 = 0;
	var uLocal_2425 = 0;
	var uLocal_2426 = 0;
	var uLocal_2427 = 0;
	var uLocal_2428 = 0;
	var uLocal_2429 = 0;
	var uLocal_2430 = 0;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
	var uLocal_2443 = 0;
	var uLocal_2444 = 0;
	var uLocal_2445 = 0;
	var uLocal_2446 = 0;
	var uLocal_2447 = 0;
	var uLocal_2448 = 0;
	var uLocal_2449 = 0;
	var uLocal_2450 = 0;
	var uLocal_2451 = 0;
	var uLocal_2452 = 0;
	var uLocal_2453 = 0;
	var uLocal_2454 = 0;
	var uLocal_2455 = 0;
	var uLocal_2456 = 0;
	var uLocal_2457 = 0;
	var uLocal_2458 = 0;
	var uLocal_2459 = 0;
	var uLocal_2460 = 0;
	var uLocal_2461 = 0;
	var uLocal_2462 = 0;
	var uLocal_2463 = 0;
	var uLocal_2464 = 0;
	var uLocal_2465 = 0;
	var uLocal_2466 = 0;
	var uLocal_2467 = 0;
	var uLocal_2468 = 0;
	var uLocal_2469 = 0;
	var uLocal_2470 = 0;
	var uLocal_2471 = 0;
	var uLocal_2472 = 0;
	var uLocal_2473 = 0;
	var uLocal_2474 = 0;
	var uLocal_2475 = 0;
	var uLocal_2476 = 0;
	var uLocal_2477 = 0;
	var uLocal_2478 = 0;
	var uLocal_2479 = 0;
	var uLocal_2480 = 0;
	var uLocal_2481 = 0;
	var uLocal_2482 = 0;
	var uLocal_2483 = 0;
	var uLocal_2484 = 0;
	var uLocal_2485 = 0;
	var uLocal_2486 = 0;
	var uLocal_2487 = 0;
	var uLocal_2488 = 0;
	var uLocal_2489 = 0;
	var uLocal_2490 = 0;
	var uLocal_2491 = 0;
	var uLocal_2492 = 0;
	var uLocal_2493 = 0;
	var uLocal_2494 = 0;
	var uLocal_2495 = 0;
	var uLocal_2496 = 0;
	var uLocal_2497 = 0;
	var uLocal_2498 = 0;
	var uLocal_2499 = 0;
	var uLocal_2500 = 0;
	var uLocal_2501 = 0;
	var uLocal_2502 = 0;
	var uLocal_2503 = 0;
	var uLocal_2504 = 0;
	var uLocal_2505 = 0;
	var uLocal_2506 = 0;
	var uLocal_2507 = 0;
	var uLocal_2508 = 0;
	var uLocal_2509 = 0;
	var uLocal_2510 = 0;
	var uLocal_2511 = 0;
	var uLocal_2512 = 0;
	var uLocal_2513 = 0;
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 0;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
	var uLocal_2525 = 0;
	var uLocal_2526 = 0;
	var uLocal_2527 = 0;
	var uLocal_2528 = 0;
	var uLocal_2529 = 0;
	var uLocal_2530 = 0;
	var uLocal_2531 = 0;
	var uLocal_2532 = 0;
	var uLocal_2533 = 0;
	var uLocal_2534 = 0;
	var uLocal_2535 = 0;
	var uLocal_2536 = 0;
	var uLocal_2537 = 0;
	var uLocal_2538 = 0;
	var uLocal_2539 = 0;
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = 0;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	int iLocal_2567 = 0;
	int iLocal_2568 = 0;
	int iLocal_2569 = 0;
	int iLocal_2570[5] = { 0, 0, 0, 0, 0 };
	int iLocal_2571 = 0;
	int iLocal_2572[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2573 = 0;
	int iLocal_2574 = 0;
	int iLocal_2575 = 0;
	int iLocal_2576 = 0;
	int iLocal_2577 = 0;
	int iLocal_2578[3] = { 0, 0, 0 };
	int iLocal_2579 = 0;
	int iLocal_2580 = 0;
	int iLocal_2581 = 0;
	int iLocal_2582 = 0;
	int iLocal_2583 = 0;
	int iLocal_2584 = 0;
	int iLocal_2585 = 0;
	int iLocal_2586 = 0;
	int iLocal_2587 = 0;
	int iLocal_2588 = 0;
	var uLocal_2589 = 0;
	int iLocal_2590 = 0;
	int iLocal_2591 = 0;
	int iLocal_2592 = 0;
	int iLocal_2593 = 0;
	int iLocal_2594 = 0;
	int iLocal_2595 = 0;
	int iLocal_2596 = 0;
	int iLocal_2597 = 0;
	int iLocal_2598 = 0;
	int iLocal_2599[45] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_2600 = 0;
	int iLocal_2601 = 0;
	int iLocal_2602 = 0;
	int iLocal_2603 = 0;
	char[] cLocal_2604[8] = 0;
	char[] cLocal_2605[8] = 0;
	int iLocal_2606 = 0;
	int iLocal_2607 = 0;
	int iLocal_2608 = 0;
	int iLocal_2609 = 0;
	int iLocal_2610 = 0;
	int iLocal_2611 = 0;
	int iLocal_2612 = 0;
	int iLocal_2613 = 0;
	struct<2> Local_2614 = { 0, 0 } ;
	var uLocal_2615 = 0;
	var uLocal_2616 = 0;
	char cLocal_2617[16] = "";
	var uLocal_2618 = 0;
	var uLocal_2619 = 0;
	vector3 vLocal_2620 = { 0f, 0f, 0f };
	vector3 vLocal_2621[19] = {{ NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f }, { NaNf, 0f, 0f } };
	int iLocal_2622 = 0;
	int iLocal_2623[3] = { 0, 0, 0 };
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_46 = HUD::_0x4A9923385BDB9DAD();
	iLocal_47 = HUD::_GET_BLIP_INFO_ID_ITERATOR();
	vLocal_66 = { 0f, 0f, 0f };
	vLocal_67 = { 0f, 0f, 0f };
	iLocal_68 = 4294967295;
	iLocal_73 = 120;
	iLocal_74 = 117;
	iLocal_75 = 118;
	vLocal_76 = { 141.9461f, -2201.9f, 3.686588f };
	vLocal_77 = { 129.34f, -2203.33f, 5.03f };
	vLocal_78 = { 133.7404f, -2196.815f, 6.1353f };
	vLocal_79 = { 142.8228f, -2202.241f, 3.6867f };
	vLocal_80 = { -2956.279f, 314.3996f, 29.6051f };
	vLocal_81 = { -2954.543f, 310.1234f, 29.1099f };
	vLocal_82 = { 142.99f, -2201.98f, 4.07f };
	vLocal_83 = { -0.45f, 0f, 96.61f };
	vLocal_84 = { vLocal_82 };
	vLocal_85 = { vLocal_83 + Vector(180f, 0f, 0f) };
	vLocal_86 = { 0f, 0f, 0f };
	vLocal_87 = { 0f, 0f, 0f };
	vLocal_88 = { 0f, 0f, 0f };
	vLocal_89 = { 0f, 0f, 0f };
	vLocal_90 = { 143.1199f, -2201.345f, 4.35f };
	vLocal_91 = { 0f, 0f, 0f };
	vLocal_92 = { 143.1f, -2201.345f, 4.502f };
	vLocal_93 = { 0f, 0f, 173.1f };
	vLocal_94 = { 120.04f, -2195.461f, 5.0328f };
	vLocal_95 = { 128.3181f, -2195.584f, 5.0324f };
	vLocal_96 = { 111.0266f, -2189.034f, 4.9691f };
	vLocal_97 = { 169.2886f, -2194.267f, 5.033f };
	vLocal_98 = { -876.0392f, -13.2516f, 41.5182f };
	vLocal_99 = { -2965.707f, 359.8771f, 13.7698f };
	vLocal_100 = { -1263.865f, -892.5212f, 10.4036f };
	vLocal_101 = { -1268.427f, -888.1281f, 10.4502f };
	vLocal_102 = { -1268.129f, -886.0143f, 10.5154f };
	vLocal_103 = { -1033.514f, -2729.645f, 20.1064f };
	vLocal_104 = { 126.8514f, -2198.861f, 6.1049f };
	vLocal_105 = { 141.6254f, -2198.832f, 4.6875f };
	vLocal_106 = { -2956.042f, 315.845f, 29.638f };
	vLocal_107 = { 3.5f, 0f, 76f };
	vLocal_108 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2955.56f, 316.1508f, 30.1988f, 77.1451f, -0.075f, 0.25f, 0f) };
	vLocal_109 = { -6.3088f, 0f, 91.127f };
	fLocal_110 = 43f;
	vLocal_111 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(-2955.56f, 316.1508f, 30.1988f, 77.1451f, 0.075f, 0.25f, 0f) };
	vLocal_112 = { -6.3088f, 0f, 91.127f };
	fLocal_113 = 43f;
	vLocal_114 = { -3095.699f, 344.77f, 13.46f };
	vLocal_115 = { 0f, 0f, 75f };
	vLocal_116 = { -1267.915f, -881.06f, 11.727f };
	vLocal_117 = { 0f, 0f, -58.2f };
	vLocal_118 = { -886.168f, -12.005f, 42.165f };
	vLocal_119 = { 0f, 0f, 85f };
	vLocal_120 = { -2955.346f, 316.2738f, 30.2934f };
	vLocal_121 = { Vector(11.0148f, 285.2572f, -3173.528f) - vLocal_120 };
	fLocal_122 = 500f;
	iLocal_123 = joaat("cs_mrk");
	iLocal_124 = joaat("u_m_m_partytarget");
	iLocal_125 = joaat("u_m_y_party_01");
	iLocal_126 = joaat("a_f_y_bevhills_04");
	iLocal_127 = joaat("g_m_m_armboss_01");
	iLocal_128 = joaat("a_f_m_bevhills_01");
	iLocal_129 = joaat("a_m_y_hipster_03");
	iLocal_130 = joaat("a_f_y_hipster_04");
	iLocal_131 = joaat("prop_v_cam_01");
	iLocal_132 = joaat("prop_v_bmike_01");
	iLocal_133 = joaat("p_amb_clipboard_01");
	iLocal_134 = joaat("p_cs_trolley_01_s");
	iLocal_135 = joaat("v_ilev_tort_stool");
	iLocal_136 = joaat("prop_cs_wrench");
	iLocal_137 = joaat("p_pliers_01_s");
	iLocal_138 = joaat("prop_torture_01");
	iLocal_139 = joaat("prop_syringe_01");
	iLocal_140 = joaat("prop_torture_ch_01");
	iLocal_141 = joaat("p_ld_crocclips01_s");
	iLocal_142 = joaat("p_ld_crocclips02_s");
	iLocal_143 = joaat("prop_ld_tooth");
	iLocal_144 = WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_petrolcan"));
	iLocal_145 = joaat("p_loose_rag_01_s");
	iLocal_146 = joaat("prop_ecg_01");
	iLocal_147 = joaat("p_arm_bind_cut_s");
	iLocal_148 = joaat("p_wboard_clth_s");
	iLocal_149 = joaat("prop_big_shit_01");
	cLocal_150 = "missfbi3_party";
	cLocal_151 = "MISSFBI3_STEVE_PHONE";
	cLocal_152 = "MISSFBI3_CamCrew";
	cLocal_153 = "MISSFBI3_SNIPING";
	sLocal_154 = "prone_michael";
	sLocal_155 = "prone_dave";
	cLocal_156 = "switch@michael@coffee_w_dave";
	sLocal_157 = "ROAD_VIBRATION_SHAKE";
	sLocal_158 = "HAND_SHAKE";
	cLocal_159 = "ECG_MONITOR";
	cLocal_160 = "TEETH_PULLING";
	sLocal_161 = "Trevor";
	cLocal_162 = "Dave_FBI";
	sLocal_163 = "Trevors_car";
	cLocal_164 = "TORTURE_Trolley";
	cLocal_165 = "Torture_table_for_ECG";
	cLocal_166 = "TORTURE_Battery";
	cLocal_167 = "TORTURE_Chair";
	cLocal_168 = "TORTURE_ECG_Machine";
	cLocal_169 = "TORTURE_Wrench";
	cLocal_170 = "TORTURE_Pliers";
	cLocal_171 = "TORTURE_Battery_clip_right";
	cLocal_172 = "TORTURE_Battery_clip_left";
	cLocal_173 = "TORTURE_Jerrycan";
	cLocal_174 = "TORTURE_Syringe";
	cLocal_175 = "Steve_FBI";
	cLocal_176 = "MR_K";
	sLocal_177 = "MRK_toothless";
	cLocal_178 = "Torture_Binding_Arm";
	cLocal_179 = "Torture_Binding_Arm_2";
	cLocal_180 = "Torture_Rag";
	sLocal_183 = "TFT_HTSWPTREV";
	sLocal_184 = "TFT_SHOOT";
	sLocal_185 = "TFT_DRIVE2";
	sLocal_186 = "TFT_DRIVE3";
	sLocal_187 = "CMN_GENGETIN";
	sLocal_188 = "CMN_GENGETBCK";
	cLocal_189 = "FBI_03_TORTURE_General";
	cLocal_190 = "FBI_03_TORTURE_Electric";
	cLocal_191 = "FBI_03_TORTURE_Teeth";
	cLocal_192 = "FBI_03_TORTURE_Water";
	cLocal_193 = "FBI_03_TORTURE_Wrench";
	sLocal_194 = "FBI_03_TORTURE_Heart_Monitor_Single";
	sLocal_195 = "FBI_03_TORTURE_Heart_Monitor_Flatline";
	sLocal_196 = "FBI_3_TORTURE_ZOOM";
	sLocal_197 = "EARLYCUT_IN";
	sLocal_198 = "scr_fbi3_blood_extraction";
	sLocal_199 = "scr_fbi3_blood_mouth";
	sLocal_200 = "scr_fbi3_blood_throwaway";
	sLocal_201 = "scr_fbi3_elec_smoulder";
	sLocal_202 = "scr_fbi3_elec_sparks";
	sLocal_203 = "scr_fbi3_dirty_water_pour";
	sLocal_204 = "hlp_TOR1";
	sLocal_205 = "hlp_TOR2";
	sLocal_206 = "hlp_TOR3";
	sLocal_207 = "hlp_TOR4";
	sLocal_208 = "hlp_WRENCH";
	sLocal_209 = "hlp_PLIER1";
	sLocal_210 = "hlp_PLIER2";
	sLocal_211 = "hlp_BATTERY";
	sLocal_212 = "hlp_CHAIR";
	sLocal_213 = "hlp_POUR";
	sLocal_214 = "hlp_SYRINGE";
	sLocal_215 = "hlp_MENU";
	sLocal_216 = "FBI_03_TORTURE_Choose_Electric";
	sLocal_217 = "FBI_03_TORTURE_Choose_Pliers";
	sLocal_218 = "FBI_03_TORTURE_Choose_Water";
	sLocal_219 = "FBI_03_TORTURE_Choose_Wrench";
	sLocal_220 = "FBI_03_TORTURE_Electric_Hum";
	sLocal_221 = "FBI_03_TORTURE_Electric_Zap";
	sLocal_222 = "FBI_03_TORTURE_Electric_Spark";
	sLocal_223 = "FBI_03_TORTURE_Teeth_Pulling";
	sLocal_224 = "FBI_03_TORTURE_Teeth_Tooth_Out";
	sLocal_225 = "FBI_03_TORTURE_Water_Pour_Water";
	sLocal_226 = "FBI_03_TORTURE_Water_Pick_Up";
	sLocal_227 = "FBI_03_TORTURE_Wrench_Hit_Shin";
	sLocal_2166 = "";
	StringCopy(&vLocal_2170, "", 24);
	StringCopy(&cLocal_2174, "", 24);
	iLocal_2178 = 4294967295;
	iLocal_2220 = 1;
	iLocal_2240 = 4294967295;
	fLocal_2241 = 100f;
	fLocal_2242 = 0f;
	fLocal_2243 = 0f;
	fLocal_2244 = 0f;
	iLocal_2250 = 4294967295;
	vLocal_2251 = { 0.15f, 0.025f, 0.2f };
	iLocal_2260 = 4294967295;
	vLocal_2286 = { 0f, 0f, 0f };
	iLocal_2288 = 4294967295;
	iLocal_2291 = 4294967295;
	sLocal_2304 = "ECG";
	iLocal_2306 = 255;
	iLocal_2311 = 1631749045;
	iLocal_2312 = 4254612562;
	iLocal_2314 = 4294967295;
	iLocal_2316 = 4294967295;
	fLocal_2317 = 0f;
	fLocal_2318 = 100f;
	fLocal_2329 = 0f;
	fLocal_2330 = 0f;
	fLocal_2331 = 0f;
	fLocal_2332 = 0f;
	fLocal_2333 = 0f;
	fLocal_2337 = 0.5f;
	iLocal_2590 = joaat("weapon_sniperrifle");
	cLocal_2604 = "FB3AUD";
	cLocal_2605 = "FBI3";
	vLocal_2620 = { 0f, 0f, 0f };
	func_919();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		iLocal_70 = 0;
		func_904();
	}
	while (true)
	{
		RECORDING::_0x208784099002BC30("M_BTB", 0);
		if (iLocal_2313 == 0)
		{
			cLocal_181 = cLocal_176;
			sLocal_182 = sLocal_177;
		}
		else
		{
			cLocal_181 = sLocal_177;
			sLocal_182 = cLocal_176;
		}
		bLocal_2184 = false;
		bLocal_2185 = false;
		bLocal_2271 = false;
		bLocal_2182 = false;
		func_903(&uLocal_2099, 0);
		func_902(&uLocal_293);
		func_901(&uLocal_1278);
		if (func_900())
		{
			iLocal_2315 = 4294967295;
		}
		else if (iLocal_2315 == 4294967295)
		{
			iLocal_2315 = MISC::GET_GAME_TIMER();
		}
		if (!bLocal_2163)
		{
			func_894();
		}
		func_872();
		if (!bLocal_2163)
		{
			func_871();
			func_207();
		}
		if (bLocal_2164)
		{
			if (!bLocal_2165)
			{
				func_904();
			}
			else
			{
				func_1();
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0x803
{
	if (!func_206())
	{
		if (iLocal_2316 != 4294967295)
		{
			if (CUTSCENE::IS_CUTSCENE_PLAYING() && (CUTSCENE::GET_CUTSCENE_TIME() - iLocal_2316) > 2500)
			{
				if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(2500);
				}
			}
		}
	}
	else
	{
		func_2(1);
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
}

void func_2(int iParam0)//Position - 0x857
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	func_201(&Local_273, 1, 0);
	switch (iParam0)
	{
		case 0:
			bVar1 = true;
			break;
		
		case 1:
			bVar1 = true;
			break;
		
		case 2:
			bVar1 = false;
			func_200(4);
			break;
		
		case 3:
			bVar1 = false;
			break;
	}
	if (iParam0 != 0)
	{
		func_192(63, 0, 0, 1, 0);
	}
	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
	{
		CUTSCENE::REMOVE_CUTSCENE();
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && func_190() == 2)
	{
		if (func_188(func_189(), 4, 4294967295) == func_187(func_189(), 25, 0, 4))
		{
			func_72(func_189(), 4, func_187(func_189(), 0, 0, 4), 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		}
		if (func_188(func_189(), 8, 4294967295) == func_187(func_189(), 12, 0, 8))
		{
			func_72(func_189(), 8, func_187(func_189(), 0, 0, 8), 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		}
		if (func_188(func_189(), 6, 4294967295) == func_187(func_189(), 11, 0, 6))
		{
			func_72(func_189(), 6, func_187(func_189(), 0, 0, 6), 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		}
	}
	func_71();
	func_70(&uLocal_1278);
	if (bVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 4)
		{
			iLocal_2256[iVar2] = 0;
			iVar2++;
		}
		if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2304))
		{
			HUD::RELEASE_NAMED_RENDERTARGET(sLocal_2304);
		}
		if (iLocal_2267)
		{
			AUDIO::STOP_AUDIO_SCENE(sLocal_196);
			AUDIO::STOP_STREAM();
			iLocal_2267 = 0;
		}
		AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
		func_67(0);
		func_57();
		GRAPHICS::REMOVE_DECALS_IN_RANGE(-3095.93f, 344.02f, 13.5f, 34.375f);
		CAM::DESTROY_ALL_CAMS(0);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	}
	unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
	iVar2 = 0;
	while (iVar2 <= (45 - 1))
	{
		iLocal_2599[iVar2] = 4294967295;
		iVar2++;
	}
	if (iLocal_2188)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2584))
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2584, -1000f, 0);
		}
	}
	func_56();
	GRAPHICS::_0x54E22EA2C1956A8D(1f);
	HUD::_0x14621BB1DF14E2B2(5);
	GRAPHICS::_0xA356990E161C9E65(1);
	func_55(&Local_273, 0);
	iVar2 = 0;
	while (iVar2 <= (7 - 1))
	{
		func_53(&(Local_230[iVar2 /*36*/]), 1);
		iVar2++;
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_2600))
	{
		HUD::REMOVE_BLIP(&iLocal_2600);
	}
	func_51(&iLocal_2581, bVar1);
	func_51(&iLocal_2582, bVar1);
	func_51(&iLocal_2583, bVar1);
	func_51(&iLocal_2584, bVar1);
	func_51(&iLocal_2585, bVar1);
	func_51(&iLocal_2586, bVar1);
	func_51(&iLocal_2579, bVar1);
	func_51(&iLocal_2580, bVar1);
	func_51(&iLocal_2587, bVar1);
	func_51(&iLocal_2588, bVar1);
	iVar0 = 0;
	while (iVar0 < iLocal_2578)
	{
		func_51(&(iLocal_2578[iVar0]), bVar1);
		iVar0++;
	}
	iVar3 = 0;
	while (iVar3 < iLocal_229)
	{
		func_51(&(iLocal_229[iVar3]), bVar1);
		iVar3++;
	}
	func_49(&iLocal_2575, bVar1);
	func_49(&iLocal_2573, bVar1);
	func_49(&iLocal_2574, bVar1);
	if (bVar1)
	{
		VEHICLE::DELETE_ALL_TRAINS();
	}
	else
	{
		VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(&iLocal_2576, 0);
	}
	func_46(&(iLocal_2358[0]), bVar1);
	func_46(&(iLocal_2358[2]), bVar1);
	func_46(&iLocal_2567, bVar1);
	func_46(&iLocal_2568, bVar1);
	func_46(&iLocal_2569, bVar1);
	func_46(&iLocal_2571, bVar1);
	iVar0 = 0;
	while (iVar0 < iLocal_2570)
	{
		func_46(&(iLocal_2570[iVar0]), bVar1);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < Local_228)
	{
		func_46(&(Local_228[iVar4 /*2*/]), bVar1);
		Local_228[iVar4 /*2*/].f_1 = 0;
		iVar4++;
	}
	iLocal_2309 = 0;
	iLocal_2310 = 0;
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
		if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
		{
			ENTITY::SET_ENTITY_COLLISION(AUDIO::_0x0626A247D2405330(), true, 0);
			if (!ENTITY::IS_ENTITY_VISIBLE(AUDIO::_0x0626A247D2405330()))
			{
				ENTITY::SET_ENTITY_VISIBLE(AUDIO::_0x0626A247D2405330(), true, 0);
			}
		}
	}
	func_39(0);
	func_38(0);
	StringCopy(&Local_2614, "", 16);
	iLocal_2613 = 0;
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2304))
	{
		HUD::RELEASE_NAMED_RENDERTARGET(sLocal_2304);
	}
	BRAIN::CLEAR_SEQUENCE_TASK(&uLocal_2589);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
	HUD::DISPLAY_RADAR(true);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
	CAM::SET_WIDESCREEN_BORDERS(false, 0);
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	}
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_2601);
	}
	if (!PLAYER::IS_PLAYER_DEAD(CAM::_0xDC9DA9E8789F5246()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		PLAYER::SET_PLAYER_FORCED_AIM(CAM::_0xDC9DA9E8789F5246(), 0);
	}
	iLocal_2188 = 0;
	iLocal_2252 = 0;
	iLocal_2264 = 0;
	if (iParam0 != 0)
	{
		AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_124, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_36(0, 0), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_36(2, 0), false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_34(30, 0), false);
	}
	func_31(1, 1, 1);
	MISC::SET_TIME_SCALE(1f);
	VEHICLE::SET_RANDOM_TRAINS(1);
	if (iLocal_70 == 0 && PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() != 2)
	{
		STREAMING::STOP_PLAYER_SWITCH();
	}
	iLocal_2190 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2166))
	{
		AUDIO::CANCEL_MUSIC_EVENT(sLocal_2166);
		sLocal_2166 = "";
	}
	MISC::CLEAR_WEATHER_TYPE_PERSIST();
	if (func_30(23))
	{
		func_29(23, 0);
	}
	AUDIO::STOP_AUDIO_SCENES();
	if (iLocal_2336)
	{
		func_28();
		iLocal_2336 = 0;
	}
	CAM::_SET_CAM_EFFECT();
	if (iLocal_2339)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_26()))
		{
			func_24(func_26(), 0);
		}
		Global_19E56.f_933.f_21B.f_12A[0 /*472*/][21 /*5*/] = { Local_2340 };
		if (ENTITY::DOES_ENTITY_EXIST(func_26()))
		{
			func_5(func_26(), 1, 0);
		}
		iLocal_2339 = 0;
	}
	func_903(&uLocal_2099, 1);
	Global_434C.f_71 = 0;
	iLocal_2260 = 4294967295;
	func_4();
	func_3(0, 0, 1, 0);
}

int func_3(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xDED
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

void func_4()//Position - 0xE20
{
	if (iLocal_2338)
	{
		PAD::_0x643ED62D5EA3BEBD();
		iLocal_2338 = 0;
	}
}

void func_5(int iParam0, bool bParam1, bool bParam2)//Position - 0xE36
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		func_6(iParam0, &(Global_19E56.f_933.f_21B.f_12A[iVar0 /*472*/]), bParam1);
		iVar1 = 0;
		while (iVar1 <= (8 - 1))
		{
			HUD::_0x72C1056D678BB7D8(Global_19E56.f_933.f_21B.f_6B3[iVar1 /*4*/][iVar0]);
			if (bParam2)
			{
				if (iVar1 == Global_19E56.f_933.f_21B.f_6D4 || (Global_19E56.f_933.f_21B.f_6D4 == 4294967295 && iVar1 == 4))
				{
					if (Global_19E56.f_933.f_21B.f_6B3[iVar1 /*4*/][iVar0] != 0 && Global_19E56.f_933.f_21B.f_6B3[iVar1 /*4*/][iVar0] != joaat("weapon_molotov"))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Global_19E56.f_933.f_21B.f_6B3[iVar1 /*4*/][iVar0], 0))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, Global_19E56.f_933.f_21B.f_6B3[iVar1 /*4*/][iVar0], true);
						}
					}
				}
			}
			iVar1++;
		}
		if (iVar0 == 0)
		{
			STATS::STAT_GET_INT(joaat("sp0_parachute_current_tint"), &uVar2, 4294967295);
		}
		else if (iVar0 == 1)
		{
			STATS::STAT_GET_INT(joaat("sp1_parachute_current_tint"), &uVar2, 4294967295);
		}
		else if (iVar0 == 2)
		{
			STATS::STAT_GET_INT(joaat("sp2_parachute_current_tint"), &uVar2, 4294967295);
		}
		PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), uVar2);
	}
}

void func_6(int iParam0, var uParam1, bool bParam2)//Position - 0xF97
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
	struct<2> Var9;
	struct<4> Var10;
	int iVar11;
	int iVar12;
	int iVar13[44];
	int iVar14[50];
	int iVar15;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar7 = 0;
		while (iVar7 < 2)
		{
			iVar5 = 0;
			while (iVar5 <= (44 - 1))
			{
				iVar1 = func_20(iVar5);
				if (iVar1 != 0 && iVar1 != 1993361168)
				{
					iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar1);
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (func_16(iVar2))
						{
							if (iVar7 == 0)
							{
								iVar13[iVar5] = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
							}
							else
							{
								WEAPON::SET_PED_AMMO(iParam0, iVar2, 0, 0);
								WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, 0);
							}
						}
						else
						{
							iVar13[iVar5] = 0;
							WEAPON::SET_PED_AMMO(iParam0, iVar2, 0, 0);
							WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, 0);
						}
					}
				}
				iVar5++;
			}
			iVar15 = FILE::GET_NUM_DLC_WEAPONS();
			iVar8 = 0;
			while (iVar8 < iVar15)
			{
				if (iVar8 < 50)
				{
					if (FILE::GET_DLC_WEAPON_DATA(iVar8, &Var9))
					{
						if (!FILE::_IS_DLC_DATA_EMPTY(Var9) && !func_15(Var9.f_1))
						{
							if (iVar7 == 0)
							{
								iVar14[iVar8] = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var9.f_1);
							}
							else
							{
								WEAPON::SET_PED_AMMO(iParam0, Var9.f_1, 0, 0);
								WEAPON::SET_AMMO_IN_CLIP(iParam0, Var9.f_1, 0);
							}
						}
						else
						{
							iVar14[iVar8] = 0;
							WEAPON::SET_PED_AMMO(iParam0, Var9.f_1, 0, 0);
							WEAPON::SET_AMMO_IN_CLIP(iParam0, Var9.f_1, 0);
						}
					}
				}
				else
				{
					iVar8 = iVar15;
				}
				iVar8++;
			}
			iVar7++;
		}
		iVar5 = 0;
		while (iVar5 <= (44 - 1))
		{
			iVar1 = func_20(iVar5);
			if (iVar1 != 0 && iVar1 != 1993361168)
			{
				iVar2 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar1);
				iVar3 = (*uParam1)[iVar5 /*5*/];
				iVar0 = (uParam1[iVar5 /*5*/])->f_1;
				if (!func_16(iVar3))
				{
					(*uParam1)[iVar5 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar3, 0, false, false);
						}
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar0)
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar0, 0);
						}
						if (iVar3 != joaat("weapon_petrolcan") && WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, 0))
						{
							WEAPON::SET_PED_WEAPON_TINT_INDEX(iParam0, iVar3, (uParam1[iVar5 /*5*/])->f_3);
						}
						iVar6 = 0;
						iVar4 = func_14(iVar3, iVar6);
						while (iVar4 != 0)
						{
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM((uParam1[iVar5 /*5*/])->f_2, iVar6))
							{
								if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, iVar4))
								{
									WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iVar3, iVar4);
									func_13(iParam0, iVar3, iVar4);
									if (func_12(iVar4))
									{
										unk_0xCA3DCCFD261B4E90(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
										func_11(iParam0, iVar3, iVar4, (uParam1[iVar5 /*5*/])->f_4);
									}
								}
							}
							else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, iVar4))
							{
								WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar3, iVar4);
								func_9(iParam0, iVar3, iVar4);
							}
							iVar6++;
							iVar4 = func_14(iVar3, iVar6);
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar2);
						iVar6 = 0;
						iVar4 = func_14(iVar2, iVar6);
						while (iVar4 != 0)
						{
							if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, iVar4))
							{
								WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar2, iVar4);
								func_9(iParam0, iVar2, iVar4);
							}
							iVar6++;
							iVar4 = func_14(iVar2, iVar6);
						}
					}
				}
				if (!bParam2)
				{
					if (iVar2 != 0 && iVar2 != joaat("weapon_unarmed"))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2) < iVar13[iVar5])
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar2, iVar13[iVar5], 0);
						}
					}
				}
			}
			iVar5++;
		}
		iVar11 = 0;
		while (iVar11 < uParam1->f_DD)
		{
			iVar3 = uParam1->f_DD[iVar11 /*5*/];
			iVar0 = uParam1->f_DD[iVar11 /*5*/].f_1;
			iVar8 = func_8(iVar3, &Var9);
			if ((iVar8 != 4294967295 && iVar8 < 50) && !func_15(Var9.f_1))
			{
				if (FILE::_IS_DLC_DATA_EMPTY(Var9) || func_15(Var9.f_1))
				{
					uParam1->f_DD[iVar11 /*5*/] = 0;
					iVar3 = 0;
				}
				if (iVar3 != 0)
				{
					if (iVar3 != joaat("weapon_unarmed"))
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(iParam0, iVar3, 0, false, false);
						}
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar0)
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar0, 0);
						}
						if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, iVar3, 0))
						{
							WEAPON::SET_PED_WEAPON_TINT_INDEX(iParam0, iVar3, uParam1->f_DD[iVar11 /*5*/].f_3);
						}
						iVar12 = 0;
						iVar6 = 0;
						while (iVar6 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar8))
						{
							if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar8, iVar6, &Var10))
							{
								if (!func_7(Var10.f_3))
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_DD[iVar11 /*5*/].f_2, iVar12))
									{
										if (!WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, Var10.f_3))
										{
											WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iVar3, Var10.f_3);
											func_13(iParam0, iVar3, Var10.f_3);
											if (func_12(Var10.f_3))
											{
												unk_0xCA3DCCFD261B4E90(iParam0, iVar3, Var10.f_3, uParam1->f_DD[iVar11 /*5*/].f_4);
												func_11(iParam0, iVar3, Var10.f_3, uParam1->f_DD[iVar11 /*5*/].f_4);
											}
										}
									}
									else if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar3, Var10.f_3))
									{
										WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar3, Var10.f_3);
										func_9(iParam0, iVar3, Var10.f_3);
									}
									iVar12++;
								}
							}
							iVar6++;
						}
					}
				}
				else if (bParam2)
				{
					if ((iVar2 != 0 && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
					{
						WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, iVar2);
						iVar6 = 0;
						while (iVar6 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar8))
						{
							if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar8, iVar6, &Var10))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iVar2, Var10.f_3))
								{
									WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iVar2, Var10.f_3);
									func_9(iParam0, iVar2, Var10.f_3);
								}
							}
							iVar6++;
						}
					}
				}
				if (!bParam2)
				{
					if (iVar3 != 0 && iVar3 != joaat("weapon_unarmed"))
					{
						if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) < iVar14[iVar8])
						{
							WEAPON::SET_PED_AMMO(iParam0, iVar3, iVar14[iVar8], 0);
						}
					}
				}
			}
			iVar11++;
		}
		if (((WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar2, 1) && iVar2 != 0) && iVar2 != joaat("weapon_unarmed")) && iVar2 != joaat("object"))
		{
			iVar0 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar2);
			if (iVar0 > 1 && iVar0 > WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, 1))
			{
				WEAPON::SET_PED_AMMO(iParam0, iVar2, (iVar0 - WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, 1)), 0);
				WEAPON::SET_AMMO_IN_CLIP(iParam0, iVar2, WEAPON::GET_MAX_AMMO_IN_CLIP(iParam0, iVar2, 1));
			}
		}
	}
}

int func_7(int iParam0)//Position - 0x1603
{
	switch (iParam0)
	{
		case 3036451504:
		case 438243936:
		case 3839888240:
		case 740920107:
		case 3753350949:
		case 1809261196:
		case 2648428428:
		case 3004802348:
		case 3330502162:
		case 1135718771:
		case 1253942266:
		case 3891161322:
		case 691432737:
		case 987648331:
		case 3863286761:
		case 3447384986:
		case 4202375078:
		case 3800418970:
		case 730876697:
		case 583159708:
		case 2366463693:
		case 520557834:
			return 1;
			break;
	}
	return 0;
}

int func_8(int iParam0, var uParam1)//Position - 0x169E
{
	int iVar0;
	int iVar1;
	
	iVar1 = FILE::GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (FILE::GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return 4294967295;
}

void func_9(int iParam0, int iParam1, int iParam2)//Position - 0x16D9
{
	int iVar0;
	
	iVar0 = func_10(iParam2);
	if (iVar0 != 0)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, iParam1, iVar0))
		{
			WEAPON::REMOVE_WEAPON_COMPONENT_FROM_PED(iParam0, iParam1, iVar0);
		}
	}
}

int func_10(int iParam0)//Position - 0x1706
{
	switch (iParam0)
	{
		case 1550611612:
			return 3036451504;
			break;
		
		case 368550800:
			return 438243936;
			break;
		
		case 2525897947:
			return 3839888240;
			break;
		
		case 24902297:
			return 740920107;
			break;
		
		case 4066925682:
			return 3753350949;
			break;
		
		case 3710005734:
			return 1809261196;
			break;
		
		case 3141791350:
			return 2648428428;
			break;
		
		case 1301287696:
			return 3004802348;
			break;
		
		case 1597093459:
			return 3330502162;
			break;
		
		case 1769871776:
			return 1135718771;
			break;
		
		case 2467084625:
			return 1253942266;
			break;
		
		case 259780317:
			return 3891161322;
			break;
		
		case 2321624822:
			return 691432737;
			break;
		
		case 1996130345:
			return 987648331;
			break;
		
		case 2839309484:
			return 3863286761;
			break;
		
		case 2626704212:
			return 3447384986;
			break;
		
		case 1308243489:
			return 4202375078;
			break;
		
		case 1122574335:
			return 3800418970;
			break;
		
		case 1420313469:
			return 730876697;
			break;
		
		case 109848390:
			return 583159708;
			break;
		
		case 593945703:
			return 2366463693;
			break;
		
		case 1142457062:
			return 520557834;
			break;
	}
	return 0;
}

void func_11(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x188C
{
	int iVar0;
	
	iVar0 = func_10(iParam2);
	if (iVar0 != 0)
	{
		unk_0xCA3DCCFD261B4E90(iParam0, iParam1, iVar0, iParam3);
	}
}

int func_12(int iParam0)//Position - 0x18AE
{
	switch (iParam0)
	{
		case 2434475183:
		case 937772107:
		case 1401650071:
		case 628662130:
		case 3309920045:
		case 3482022833:
		case 2847614993:
		case 4234628436:
		case 2088750491:
		case 2781053842:
		case 3115408816:
		case 1272803094:
		case 1080719624:
		case 792221348:
		case 3842785869:
		case 3548192559:
		case 2250671235:
		case 4095795318:
		case 2866892280:
		case 2559813981:
		case 1796459838:
		case 3663056191:
		case 1249283253:
		case 3437259709:
		case 3197423398:
		case 1980349969:
		case 1219453777:
		case 2441508106:
		case 2220186280:
		case 457967755:
		case 235171324:
		case 42685294:
		case 3607349581:
		case 4164123906:
		case 3317620069:
		case 3916506229:
		case 329939175:
		case 643374672:
		case 807875052:
		case 2893163128:
		case 3198471901:
		case 3447155842:
		case 2881858759:
		case 1815270123:
		case 1550611612:
		case 368550800:
		case 2525897947:
		case 24902297:
		case 4066925682:
		case 3710005734:
		case 3141791350:
		case 1301287696:
		case 1597093459:
		case 1769871776:
		case 2467084625:
		case 3298267239:
		case 940943685:
		case 1263226800:
		case 3966931456:
		case 1224100642:
		case 899228776:
		case 616006309:
		case 2733014785:
		case 572063080:
		case 1170588613:
		case 966612367:
		case 3820854852:
		case 387223451:
		case 617753366:
		case 4072589040:
		case 8741501:
		case 3693681093:
		case 3783533691:
		case 3639579478:
		case 4012490698:
		case 1739501925:
		case 1178671645:
		case 3225415071:
		case 11918884:
		case 176157112:
		case 4074914441:
		case 288456487:
		case 398658626:
		case 628697006:
		case 925911836:
		case 1222307441:
		case 552442715:
		case 3646023783:
		case 259780317:
		case 2321624822:
		case 1996130345:
		case 2839309484:
		case 2626704212:
		case 1308243489:
		case 1122574335:
		case 1420313469:
		case 109848390:
		case 593945703:
		case 1142457062:
		case 2425682848:
		case 1931539634:
		case 1624199183:
		case 4268133183:
		case 4084561241:
		case 423313640:
		case 276639596:
		case 3303610433:
		case 2612118995:
		case 996213771:
		case 3080918746:
		case 3557537083:
		case 1125852043:
		case 886015732:
		case 3032680157:
		case 3999758885:
		case 3750812792:
		case 172765678:
		case 2312089847:
		case 2072122460:
		case 2308747125:
		case 1377355801:
		case 2923451831:
		case 3104173419:
		case 2797881576:
		case 2491819116:
		case 2318995410:
		case 36929477:
		case 4026522462:
		case 3720197850:
		case 3412267557:
		case 2826785822:
		case 3320426066:
			return 1;
			break;
	}
	return 0;
}

void func_13(int iParam0, int iParam1, int iParam2)//Position - 0x1BDD
{
	int iVar0;
	
	iVar0 = func_10(iParam2);
	if (iVar0 != 0)
	{
		WEAPON::GIVE_WEAPON_COMPONENT_TO_PED(iParam0, iParam1, iVar0);
	}
}

int func_14(int iParam0, int iParam1)//Position - 0x1BFD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	struct<4> Var5;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case joaat("weapon_pistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_pistol_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_pistol_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_pi_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_pistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_combatpistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_appistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_appistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_appistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 4:
					iVar0 = joaat("component_appistol_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_microsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_microsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_microsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_microsmg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_smg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_smg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_smg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_smg_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 5:
					iVar0 = joaat("component_at_pi_supp");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro_02");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 8:
					iVar0 = joaat("component_smg_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_assaultrifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_assaultrifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_assaultrifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 6:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 7:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 8:
					iVar0 = joaat("component_assaultrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_carbinerifle_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_carbinerifle_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_carbinerifle_clip_03");
					break;
				
				case 4:
					iVar0 = joaat("component_at_railcover_01");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 7:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 8:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 9:
					iVar0 = joaat("component_carbinerifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_advancedrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_advancedrifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_advancedrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_mg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_mg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_mg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_mg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_combatmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_combatmg_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_combatmg_clip_02");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_combatmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_sr_supp");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_pumpshotgun_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultshotgun_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultshotgun_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sniperrifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_max");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_sniperrifle_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_heavysniper"):
			switch (iParam1)
			{
				case 0:
					iVar0 = 1623028892;
					break;
				
				case 1:
					iVar0 = joaat("component_heavysniper_clip_01");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_large");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_max");
					break;
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_scope_small");
					break;
			}
			break;
		
		case joaat("weapon_minigun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_minigun_clip_01");
					break;
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_assaultsmg_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_assaultsmg_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_macro");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 5:
					iVar0 = joaat("component_assaultsmg_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 1:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
			}
			break;
		
		case joaat("weapon_pistol50"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_pistol50_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_pistol50_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_pi_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 4:
					iVar0 = joaat("component_pistol50_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_combatpdw"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_combatpdw_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_combatpdw_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_combatpdw_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_sawnoffshotgun_varmod_luxe");
					break;
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_bullpuprifle_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_bullpuprifle_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 3:
					iVar0 = joaat("component_at_scope_small");
					break;
				
				case 4:
					iVar0 = joaat("component_at_ar_supp");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 6:
					iVar0 = joaat("component_bullpuprifle_varmod_low");
					break;
			}
			break;
		
		case joaat("weapon_snspistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_snspistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_snspistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_snspistol_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_specialcarbine_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_specialcarbine_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_specialcarbine_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_ar_flsh");
					break;
				
				case 4:
					iVar0 = joaat("component_at_scope_medium");
					break;
				
				case 5:
					iVar0 = joaat("component_at_ar_supp_02");
					break;
				
				case 6:
					iVar0 = joaat("component_at_ar_afgrip");
					break;
				
				case 7:
					iVar0 = joaat("component_specialcarbine_varmod_lowrider");
					break;
			}
			break;
		
		case joaat("weapon_knuckle"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_knuckle_varmod_pimp");
					break;
				
				case 1:
					iVar0 = joaat("component_knuckle_varmod_ballas");
					break;
				
				case 2:
					iVar0 = joaat("component_knuckle_varmod_dollar");
					break;
				
				case 3:
					iVar0 = joaat("component_knuckle_varmod_diamond");
					break;
				
				case 4:
					iVar0 = joaat("component_knuckle_varmod_hate");
					break;
				
				case 5:
					iVar0 = joaat("component_knuckle_varmod_love");
					break;
				
				case 6:
					iVar0 = joaat("component_knuckle_varmod_player");
					break;
				
				case 7:
					iVar0 = joaat("component_knuckle_varmod_king");
					break;
				
				case 8:
					iVar0 = joaat("component_knuckle_varmod_vagos");
					break;
			}
			break;
		
		case joaat("weapon_machinepistol"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_machinepistol_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_machinepistol_clip_02");
					break;
				
				case 2:
					iVar0 = joaat("component_machinepistol_clip_03");
					break;
				
				case 3:
					iVar0 = joaat("component_at_pi_supp");
					break;
			}
			break;
		
		case joaat("weapon_switchblade"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_switchblade_varmod_var1");
					break;
				
				case 1:
					iVar0 = joaat("component_switchblade_varmod_var2");
					break;
			}
			break;
		
		case joaat("weapon_revolver"):
			switch (iParam1)
			{
				case 0:
					iVar0 = joaat("component_revolver_clip_01");
					break;
				
				case 1:
					iVar0 = joaat("component_revolver_varmod_boss");
					break;
				
				case 2:
					iVar0 = joaat("component_revolver_varmod_goon");
					break;
			}
			break;
		
		case 3173288789:
			switch (iParam1)
			{
				case 0:
					iVar0 = 2227745491;
					break;
				
				case 1:
					iVar0 = 2474561719;
					break;
			}
			break;
		
		default:
			if (iParam0 != 0)
			{
				iVar1 = func_8(iParam0, &uVar4);
				if (iVar1 != 4294967295)
				{
					iVar2 = 0;
					while (iVar2 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_7(Var5.f_3))
							{
								if (iVar3 == iParam1)
								{
									return Var5.f_3;
								}
								iVar3++;
							}
						}
						iVar2++;
					}
				}
			}
			break;
	}
	return iVar0;
}

int func_15(int iParam0)//Position - 0x276E
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("weapon_pistol50"):
			case joaat("weapon_bullpupshotgun"):
			case joaat("weapon_assaultsmg"):
				return 0;
				break;
			
			case joaat("weapon_bottle"):
			case joaat("weapon_snspistol"):
			case joaat("weapon_gusenberg"):
				return 0;
				break;
			
			case joaat("weapon_heavypistol"):
			case joaat("weapon_specialcarbine"):
				return 0;
				break;
			
			case joaat("weapon_bullpuprifle"):
				return 0;
				break;
			
			case joaat("weapon_dagger"):
			case joaat("weapon_vintagepistol"):
				return 0;
				break;
			
			case joaat("weapon_firework"):
			case joaat("weapon_musket"):
				return 0;
				break;
			
			case joaat("weapon_heavyshotgun"):
			case joaat("weapon_marksmanrifle"):
				return 0;
				break;
			
			case joaat("weapon_hominglauncher"):
			case joaat("weapon_proxmine"):
				return 0;
				break;
			
			case joaat("weapon_combatpdw"):
			case joaat("weapon_knuckle"):
			case joaat("weapon_marksmanpistol"):
				return 0;
				break;
			
			case 3347935668:
			case 3722617468:
			case 392730790:
			case 2771265879:
			case 2182141141:
			case 3630607569:
			case 2407100105:
			case 3457817165:
			case 3950483272:
			case joaat("weapon_flaregun"):
			case joaat("weapon_handcuffs"):
			case joaat("weapon_snowball"):
			case joaat("weapon_garbagebag"):
			case joaat("weapon_flashlight"):
			case joaat("weapon_switchblade"):
			case joaat("weapon_revolver"):
			case joaat("weapon_dbshotgun"):
			case joaat("weapon_compactrifle"):
			case 317205821:
			case 3173288789:
			case 125959754:
			case 3441901897:
			case 3125143736:
			case 2484171525:
			case 419712736:
			case 2548703416:
			case 1198256469:
			case 3056410471:
			case 2939590305:
				return 1;
				break;
			}
	}
	return 0;
}

bool func_16(int iParam0)//Position - 0x28F4
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 4233137715)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_19())
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (iParam0 == joaat("weapon_firework") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("weapon_assaultsmg"):
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!func_18(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!func_18(1, 1))
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_railgun"):
			if (!func_17() || NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				return 0;
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (!func_17() && !Global_40001.f_4CA4)
				{
					return 0;
				}
			}
			break;
		
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"):
			break;
	}
	iVar0 = 0;
	while (iVar0 < FILE::GET_NUM_DLC_WEAPONS())
	{
		if (FILE::GET_DLC_WEAPON_DATA(iVar0, &Var1))
		{
			if (Var1.f_1 == iParam0)
			{
				if (FILE::_IS_DLC_DATA_EMPTY(Var1) || func_15(Var1.f_1))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return WEAPON::IS_WEAPON_VALID(iParam0);
}

int func_17()//Position - 0x2A20
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

int func_18(bool bParam0, bool bParam1)//Position - 0x2ADB
{
	if (bParam0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C.f_51D, 2))
		{
			return 1;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		if (!bParam1 || NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			if (!MISC::IS_PS3_VERSION() && !MISC::IS_ORBIS_VERSION())
			{
				return 1;
			}
		}
	}
	if (bParam1)
	{
		if (NETWORK::_0x1353F87E89946207())
		{
			return 0;
		}
	}
	if (NETWORK::_0x67A5589628E0CFF6())
	{
		return 1;
	}
	return 0;
}

bool func_19()//Position - 0x2B47
{
	return DLC::IS_DLC_PRESENT(2603778600);
}

int func_20(int iParam0)//Position - 0x2B58
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 1993361168;
			break;
		
		case 1:
			iVar0 = 1277010230;
			break;
		
		case 2:
			iVar0 = 932043479;
			break;
		
		case 3:
			iVar0 = 3604312705;
			break;
		
		case 4:
			iVar0 = 2835769091;
			break;
		
		case 5:
			iVar0 = 195782970;
			break;
		
		case 6:
			iVar0 = 3856169965;
			break;
		
		case 7:
			iVar0 = 896793492;
			break;
		
		case 8:
			iVar0 = 495159329;
			break;
		
		case 9:
			iVar0 = 3139438981;
			break;
		
		case 10:
			iVar0 = 3779330807;
			break;
		
		case 11:
			iVar0 = 3423053997;
			break;
		
		case 12:
			iVar0 = 2942208264;
			break;
		
		case 13:
			iVar0 = 3752008335;
			break;
		
		case 14:
			iVar0 = 1682645887;
			break;
		
		case 15:
			iVar0 = 3435497134;
			break;
		
		case 16:
			iVar0 = 2169540894;
			break;
		
		case 17:
			iVar0 = 2067210266;
			break;
		
		case 18:
			iVar0 = 3756794440;
			break;
		
		case 19:
			iVar0 = 1783244476;
			break;
		
		case 20:
			iVar0 = 439844898;
			break;
		
		case 21:
			iVar0 = 4270137969;
			break;
		
		case 22:
			iVar0 = 1949306232;
			break;
		
		case 23:
			iVar0 = 2353736415;
			break;
		
		case 24:
			iVar0 = 3261412848;
			break;
		
		case 25:
			iVar0 = 320513715;
			break;
		
		case 26:
			iVar0 = 3599801321;
			break;
		
		case 27:
			iVar0 = 4013938849;
			break;
		
		case 28:
			iVar0 = 3608253524;
			break;
		
		case 29:
			iVar0 = 347509793;
			break;
		
		case 30:
			iVar0 = 1769089473;
			break;
		
		case 31:
			iVar0 = 189935548;
			break;
		
		case 33:
			iVar0 = 248801358;
			break;
		
		case 34:
			iVar0 = 386596758;
			break;
		
		case 35:
			iVar0 = 4137754934;
			break;
		
		case 36:
			iVar0 = 436985596;
			break;
		
		case 37:
			iVar0 = 4247009927;
			break;
		
		case 38:
			iVar0 = 575938238;
			break;
	}
	return iVar0;
}

bool func_21(int iParam0)//Position - 0x2DCC
{
	return iParam0 < 3;
}

int func_22(int iParam0)//Position - 0x2DD8
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_23(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_23(int iParam0)//Position - 0x2E15
{
	if (func_21(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_24(int iParam0, bool bParam1)//Position - 0x2E3F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == AUDIO::_0x0626A247D2405330())
		{
			func_25(iParam0, &(Global_19E56.f_933.f_21B.f_12A[iVar0 /*472*/]));
			iVar2 = 0;
			while (iVar2 <= (8 - 1))
			{
				Global_19E56.f_933.f_21B.f_6B3[iVar2 /*4*/][iVar0] = HUD::_0xA13E93403F26C812(iVar2);
				if (bParam1)
				{
					iVar1 = HUD::_0xA48931185F0536FE();
					if (Global_19E56.f_933.f_21B.f_6B3[iVar2 /*4*/][iVar0] == iVar1)
					{
						Global_19E56.f_933.f_21B.f_6D4 = iVar2;
					}
				}
				iVar2++;
			}
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), &iVar3);
			if (iVar0 == 0)
			{
				STATS::STAT_SET_INT(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1)
			{
				STATS::STAT_SET_INT(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2)
			{
				STATS::STAT_SET_INT(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

void func_25(int iParam0, var uParam1)//Position - 0x2F32
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar5;
	int iVar6;
	struct<2> Var7;
	struct<4> Var8;
	int iVar9;
	int iVar10;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			(uParam1[iVar0 /*5*/])->f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (44 - 1))
		{
			iVar3 = func_20(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_20(iVar0));
				Var4.f_1 = 0;
				Var4.f_2 = 0;
				Var4.f_3 = 0;
				Var4.f_4 = 0;
				if (Var4 != 0 && Var4 != joaat("weapon_unarmed"))
				{
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (Var4 == joaat("gadget_parachute"))
					{
						Var4.f_1 = 1;
					}
					Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
					Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					if (Var4.f_1 == 4294967295)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					(uParam1[iVar0 /*5*/])->f_1 = Var4.f_1;
					iVar1 = 0;
					iVar2 = func_14(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_14(Var4, iVar1);
					}
				}
				*(uParam1[iVar0 /*5*/]) = { Var4 };
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (50 - 1))
		{
			uParam1->f_DD[iVar0 /*5*/].f_1 = 0;
			iVar0++;
		}
		iVar6 = FILE::GET_NUM_DLC_WEAPONS();
		iVar5 = 0;
		while (iVar5 < iVar6)
		{
			if ((FILE::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_15(Var7.f_1)) && iVar9 < 50)
			{
				if (!FILE::_IS_DLC_DATA_EMPTY(Var7))
				{
					Var4 = Var7.f_1;
					Var4.f_1 = 0;
					Var4.f_2 = 0;
					Var4.f_3 = 0;
					Var4.f_4 = 0;
					Var4.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, Var4);
					if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(iParam0, Var4);
						Var4.f_4 = unk_0x8C4F3A254E8EA3BD(iParam0, Var4);
					}
					if (Var4.f_1 == 4294967295)
					{
						if (!WEAPON::GET_MAX_AMMO(iParam0, Var4, &(Var4.f_1)))
						{
							Var4.f_1 = 0;
						}
					}
					uParam1->f_DD[iVar9 /*5*/].f_1 = Var4.f_1;
					iVar10 = 0;
					iVar1 = 0;
					while (iVar1 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar5))
					{
						if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar5, iVar1, &Var8))
						{
							if (!func_7(Var8.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, Var8.f_3))
								{
									MISC::SET_BIT(&(Var4.f_2), iVar10);
								}
								iVar10++;
							}
						}
						iVar1++;
					}
				}
				if (Var4 != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, Var4, 0))
					{
						Var4 = 0;
						Var4.f_1 = 0;
					}
				}
				uParam1->f_DD[iVar9 /*5*/] = { Var4 };
				iVar9++;
			}
			iVar5++;
		}
	}
}

int func_26()//Position - 0x31BC
{
	if (func_27(func_190()) == 0)
	{
		return AUDIO::_0x0626A247D2405330();
	}
	return iLocal_2358[0];
}

int func_27(int iParam0)//Position - 0x31E0
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	else if (iParam0 == 145)
	{
		return 3;
	}
	return 4;
}

void func_28()//Position - 0x321B
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		ENTITY::SET_ENTITY_PROOFS(AUDIO::_0x0626A247D2405330(), false, false, false, false, false, 0, 0, 0);
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 157, true);
		ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16248[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_16248[iVar0], 0))
			{
				ENTITY::SET_ENTITY_PROOFS(Global_16248[iVar0], false, false, false, false, false, 0, 0, 0);
				ENTITY::FREEZE_ENTITY_POSITION(Global_16248[iVar0], false);
			}
		}
		iVar0++;
	}
	if ((Global_8D15 != 0 && Global_8D15 != 3) && Global_8D15 != 2)
	{
		HUD::_0x14621BB1DF14E2B2(5);
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
	}
}

void func_29(int iParam0, bool bParam1)//Position - 0x32CE
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_6468, iParam0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_6468, iParam0);
	}
}

int func_30(int iParam0)//Position - 0x32F0
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_6468, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_31(bool bParam0, bool bParam1, bool bParam2)//Position - 0x3309
{
	if (bParam0)
	{
		if (func_900())
		{
			func_32();
		}
	}
	if (bParam1)
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED() && !func_900())
		{
			HUD::CLEAR_PRINTS();
		}
	}
	if (bParam2)
	{
		if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		}
	}
}

void func_32()//Position - 0x334C
{
	Global_3960 = 0;
	func_33();
}

void func_33()//Position - 0x335C
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

int func_34(int iParam0, int iParam1)//Position - 0x33B3
{
	struct<82> Var0;
	
	if (!func_21(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_35(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_35(int iParam0, var uParam1, int iParam2)//Position - 0x33F6
{
	int iVar0;
	struct<98> Var1;
	
	Var1.f_B = 12;
	Var1.f_1F = 49;
	Var1.f_51 = 2;
	Var1.f_58 = 1;
	Var1.f_54 = 255;
	Var1.f_55 = 255;
	Var1.f_56 = 255;
	Var1.f_3 = 1000;
	Var1.f_1 = 0;
	switch (iParam0)
	{
		case 14:
			if (iParam2 == 1)
			{
				iVar0 = joaat("ISSI2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("TRIBIKE");
			}
			else
			{
				iVar0 = joaat("TRIBIKE");
			}
			switch (iVar0)
			{
				case joaat("ISSI2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_1B), "P3RSEUS", 16);
					break;
				
				case joaat("TRIBIKE"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 15:
			if (iParam2 == 1)
			{
				iVar0 = joaat("ISSI2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("SANCHEZ");
			}
			else
			{
				iVar0 = joaat("ISSI2");
			}
			switch (iVar0)
			{
				case joaat("ISSI2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_5 = 88;
					Var1.f_6 = 7;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_1B), "P3RSEUS", 16);
					break;
				
				case joaat("SANCHEZ"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 17:
			if (iParam2 == 1)
			{
				iVar0 = joaat("SENTINEL2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("FAGGIO2");
			}
			else
			{
				iVar0 = joaat("SENTINEL2");
			}
			switch (iVar0)
			{
				case joaat("SENTINEL2"):
					Var1 = iVar0;
					Var1.f_5 = 28;
					Var1.f_6 = 28;
					Var1.f_9 = 0;
					StringCopy(&(Var1.f_1B), "KRYST4L", 16);
					break;
				
				case joaat("FAGGIO2"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		case 19:
			if (iParam2 == 1)
			{
				iVar0 = joaat("SPEEDO");
			}
			else if (iParam2 == 3)
			{
				iVar0 = joaat("EMPEROR");
			}
			else
			{
				iVar0 = joaat("SPEEDO");
			}
			switch (iVar0)
			{
				case joaat("SPEEDO"):
					Var1 = iVar0;
					Var1.f_4 = 5;
					Var1.f_2 = 10f;
					Var1.f_9 = 1;
					StringCopy(&(Var1.f_1B), "LAMAR G", 16);
					break;
				
				case joaat("EMPEROR"):
					Var1 = iVar0;
					Var1.f_2 = 8f;
					Var1.f_5 = 62;
					Var1.f_6 = 21;
					Var1.f_7 = 0;
					Var1.f_8 = 156;
					Var1.f_A = 1;
					StringCopy(&(Var1.f_1B), "07KZF345", 16);
					break;
			}
			break;
		
		case 29:
			Var1 = joaat("ADDER");
			Var1.f_5 = 62;
			Var1.f_6 = 4;
			Var1.f_7 = 68;
			Var1.f_8 = 156;
			Var1.f_A = 1;
			Var1.f_9 = 0;
			StringCopy(&(Var1.f_1B), "N4M4ST3", 16);
			break;
		
		case 30:
			Var1 = joaat("ORACLE2");
			Var1.f_9 = 1;
			Var1.f_4 = 7;
			StringCopy(&(Var1.f_1B), "81TDS937", 16);
			break;
		
		case 18:
		case 20:
		case 21:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 31:
		case 32:
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
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 39:
		case 40:
		case 46:
		case 47:
		case 65:
			if (iParam2 == 1)
			{
				iVar0 = joaat("ASTEROPE");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("SANCHEZ");
			}
			else
			{
				iVar0 = joaat("ASTEROPE");
			}
			switch (iVar0)
			{
				case joaat("ASTEROPE"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
				
				case joaat("SANCHEZ"):
					Var1 = iVar0;
					Var1.f_2 = 0f;
					Var1.f_4 = 0;
					Var1.f_9 = 1;
					break;
			}
			break;
		
		default:
			break;
	}
	*uParam1 = { Var1 };
}

int func_36(int iParam0, int iParam1)//Position - 0x37EA
{
	struct<82> Var0;
	
	if (func_21(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_37(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_37(int iParam0, var uParam1, int iParam2)//Position - 0x382C
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

void func_38(bool bParam0)//Position - 0x3A88
{
	if (bParam0)
	{
		StringCopy(&Global_19AA6, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
		Global_19AA0 = 1;
	}
	else
	{
		StringCopy(&Global_19AA6, "NULL", 24);
		Global_19AA0 = 0;
	}
}

void func_39(bool bParam0)//Position - 0x3AB4
{
	if (bParam0)
	{
		func_45();
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			MISC::SET_BIT(&Global_950, 16);
		}
		Global_38B1.f_1 = 1;
		if (func_44(0))
		{
			func_40(0);
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

void func_40(int iParam0)//Position - 0x3B17
{
	if (func_43())
	{
		return;
	}
	if (Global_3959)
	{
		func_42(0, 0);
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
	if (!func_41())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_41()//Position - 0x3B91
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_42(bool bParam0, bool bParam1)//Position - 0x3BB8
{
	if (bParam0)
	{
		if (func_44(0))
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

bool func_43()//Position - 0x3C2C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

int func_44(int iParam0)//Position - 0x3C3E
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

void func_45()//Position - 0x3C98
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

void func_46(int iParam0, bool bParam1)//Position - 0x3CC1
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && *iParam0 != AUDIO::_0x0626A247D2405330())
	{
		if (bParam1)
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 0);
			}
			func_47(&uLocal_2099, iParam0, 0);
		}
		else
		{
			if (!PED::IS_PED_INJURED(*iParam0))
			{
				PED::SET_PED_KEEP_TASK(*iParam0, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_47(var uParam0, var uParam1, int iParam2)//Position - 0x3D1F
{
	if (func_48(uParam0, *uParam1, iParam2))
	{
		*uParam1 = 0;
	}
}

int func_48(var uParam0, int iParam1, int iParam2)//Position - 0x3D39
{
	char cVar0[64];
	int iVar1;
	bool bVar2;
	int iVar3;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		StringCopy(&cVar0, "entity does not exist", 64);
		return 0;
	}
	if (iParam2 < 0)
	{
		iParam2 = 0;
	}
	bVar2 = true;
	while (bVar2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1 /*2*/]))
		{
			iVar3 = 0;
			while (iVar3 < *uParam0)
			{
				if ((*uParam0)[iVar3 /*2*/] == iParam1)
				{
					return 1;
				}
				iVar3++;
			}
			(*uParam0)[iVar1 /*2*/] = iParam1;
			(uParam0[iVar1 /*2*/])->f_1 = (MISC::GET_GAME_TIMER() + iParam2);
			bVar2 = false;
			return 1;
		}
		else
		{
			if ((*uParam0)[iVar1 /*2*/] == iParam1)
			{
				return 1;
			}
			iVar1++;
			if (iVar1 > (*uParam0 - 1))
			{
				bVar2 = false;
			}
		}
	}
	return 0;
}

void func_49(int iParam0, bool bParam1)//Position - 0x3DE0
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 1);
		}
		if (bParam1 && !PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam0, 0))
		{
			func_50(&uLocal_2099, iParam0, 0);
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_50(var uParam0, var uParam1, int iParam2)//Position - 0x3E30
{
	if (func_48(uParam0, *uParam1, iParam2))
	{
		*uParam1 = 0;
	}
}

void func_51(int iParam0, bool bParam1)//Position - 0x3E4A
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam0, true, 1);
		}
		if (bParam1)
		{
			if (ENTITY::IS_ENTITY_ATTACHED(*iParam0))
			{
				ENTITY::DETACH_ENTITY(*iParam0, 0, 1);
			}
			func_52(&uLocal_2099, iParam0, 0);
		}
		else
		{
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(iParam0);
		}
	}
}

void func_52(var uParam0, var uParam1, int iParam2)//Position - 0x3E9B
{
	if (func_48(uParam0, *uParam1, iParam2))
	{
		*uParam1 = 0;
	}
}

void func_53(int iParam0, bool bParam1)//Position - 0x3EB5
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		func_54(iParam0, -1000f);
		func_51(iParam0, bParam1);
	}
	iParam0->f_8 = 0;
	iParam0->f_F = 0;
}

void func_54(var uParam0, float fParam1)//Position - 0x3EE4
{
	if (uParam0->f_F)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_10) && !MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_11)))
		{
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(*uParam0, uParam0->f_10, &(uParam0->f_11), 3))
			{
				ENTITY::STOP_ENTITY_ANIM(*uParam0, &(uParam0->f_11), uParam0->f_10, fParam1);
				uParam0->f_F = 0;
			}
		}
		else
		{
			ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(*uParam0, fParam1, 0);
			uParam0->f_F = 0;
		}
		uParam0->f_10 = "";
		StringCopy(&(uParam0->f_11), "", 64);
	}
}

void func_55(int iParam0, bool bParam1)//Position - 0x3F5C
{
	func_201(iParam0, bParam1, 0);
}

void func_56()//Position - 0x3F6D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		iLocal_2256[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		iLocal_2262[iVar0] = 0;
		iVar0++;
	}
	StringCopy(&vLocal_2170, "", 24);
	StringCopy(&cLocal_2174, "", 24);
	iLocal_2275 = 0;
	iLocal_2272 = 0;
	iLocal_2189 = 0;
	fLocal_2317 = 0f;
	iLocal_2342 = 0;
	fLocal_2331 = 0f;
	iLocal_2220 = 1;
	iLocal_2221 = 0;
	iLocal_2216 = 0;
	iLocal_2217 = 0;
	iLocal_2246 = 0;
	if (iLocal_2596)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_2595))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2595, 0);
		}
		iLocal_2596 = 0;
	}
}

void func_57()//Position - 0x4006
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(func_189()) && !PED::IS_PED_INJURED(func_189()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(func_189(), 0))
		{
			unk_0x346478B12F69D4E3(func_189(), true);
		}
		ENTITY::FREEZE_ENTITY_POSITION(func_189(), true);
		if (AUDIO::_0x0626A247D2405330() != func_189())
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_189(), 0, 1);
		}
	}
	func_66(&uLocal_293, iLocal_135);
	func_66(&uLocal_293, iLocal_134);
	func_66(&uLocal_293, iLocal_146);
	func_66(&uLocal_293, iLocal_140);
	func_66(&uLocal_293, iLocal_138);
	func_66(&uLocal_293, iLocal_143);
	func_66(&uLocal_293, iLocal_136);
	func_66(&uLocal_293, iLocal_141);
	func_66(&uLocal_293, iLocal_142);
	func_66(&uLocal_293, iLocal_144);
	func_66(&uLocal_293, iLocal_145);
	func_66(&uLocal_293, iLocal_137);
	func_66(&uLocal_293, iLocal_139);
	func_66(&uLocal_293, iLocal_147);
	func_66(&uLocal_293, iLocal_148);
	func_66(&uLocal_293, iLocal_149);
	func_65(&uLocal_293, cLocal_151);
	func_65(&uLocal_293, "missfbi3_weapon_select");
	func_65(&uLocal_293, "missfbi3_weapon_select_trolley");
	func_65(&uLocal_293, "SHAKE_CAM_medium");
	func_64(&uLocal_293, &iLocal_2602);
	func_64(&uLocal_293, &iLocal_2603);
	func_62(&uLocal_293, cLocal_189);
	func_62(&uLocal_293, cLocal_190);
	func_62(&uLocal_293, cLocal_191);
	func_62(&uLocal_293, "FBI_03_Torture_Teeth_Pain");
	func_62(&uLocal_293, cLocal_192);
	func_62(&uLocal_293, cLocal_193);
	func_62(&uLocal_293, "FBI_03_Torture_Chair");
	func_66(&uLocal_293, func_61(23));
	func_66(&uLocal_293, joaat("ig_mrk"));
	fLocal_2330 = -1f;
	fLocal_2329 = -1f;
	func_58();
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2304))
	{
		HUD::RELEASE_NAMED_RENDERTARGET(sLocal_2304);
	}
	func_51(&iLocal_2581, 1);
	func_51(&iLocal_2582, 1);
	func_51(&iLocal_2583, 1);
	func_51(&iLocal_2584, 1);
	func_51(&iLocal_2585, 1);
	func_51(&iLocal_2586, 1);
	func_51(&(iLocal_229[10]), 1);
	func_51(&iLocal_2587, 1);
	func_51(&iLocal_2588, 1);
	func_51(&iLocal_2580, 1);
	iVar0 = 0;
	while (iVar0 <= (7 - 1))
	{
		func_53(&(Local_230[iVar0 /*36*/]), 1);
		iVar0++;
	}
	func_46(&iLocal_2568, 1);
	func_46(&iLocal_2567, 1);
	func_49(&iLocal_2575, 1);
	if (func_30(23))
	{
		func_29(23, 0);
	}
	iLocal_2254 = 0;
}

void func_58()//Position - 0x4252
{
	func_59(3);
	func_59(4);
	func_59(5);
	func_59(6);
	func_59(9);
	func_59(10);
	func_59(11);
	func_59(12);
	func_59(13);
	func_59(14);
}

void func_59(int iParam0)//Position - 0x4292
{
	if (func_60(iParam0))
	{
		if (vLocal_2621[iParam0 /*3*/] != 4294967295)
		{
			if (!AUDIO::HAS_SOUND_FINISHED(vLocal_2621[iParam0 /*3*/]))
			{
				AUDIO::STOP_SOUND(vLocal_2621[iParam0 /*3*/]);
			}
			AUDIO::RELEASE_SOUND_ID(vLocal_2621[iParam0 /*3*/]);
			vLocal_2621[iParam0 /*3*/] = 4294967295;
		}
		vLocal_2621[iParam0 /*3*/].f_1 = 0;
		vLocal_2621[iParam0 /*3*/].f_2 = 0;
	}
}

int func_60(int iParam0)//Position - 0x42EF
{
	if (vLocal_2621[iParam0 /*3*/].f_2)
	{
		return 1;
	}
	return 0;
}

int func_61(int iParam0)//Position - 0x4308
{
	if (!func_21(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_62(var uParam0, char* sParam1)//Position - 0x4333
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E1)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2E1[iVar0 /*5*/].f_4, sParam1))
			{
				if (uParam0->f_2E1[iVar0 /*5*/].f_1)
				{
					AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK(sParam1);
					func_63(&(uParam0->f_2E1[iVar0 /*5*/]));
					return;
				}
				else
				{
					uParam0->f_2E1[iVar0 /*5*/].f_2 = 1;
					uParam0->f_3D6 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_63(var uParam0)//Position - 0x43AD
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 4294967295;
}

void func_64(var uParam0, int iParam1)//Position - 0x43C8
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_290)
	{
		if (uParam0->f_290[iVar0 /*6*/])
		{
			if (uParam0->f_290[iVar0 /*6*/].f_5 == *iParam1)
			{
				if (uParam0->f_290[iVar0 /*6*/].f_1)
				{
					GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam1);
					func_63(&(uParam0->f_290[iVar0 /*6*/]));
					return;
				}
				else
				{
					uParam0->f_290[iVar0 /*6*/].f_2 = 1;
					uParam0->f_3D6 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_65(var uParam0, char* sParam1)//Position - 0x443F
{
	int iVar0;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_111)
		{
			if (uParam0->f_111[iVar0 /*5*/])
			{
				if (MISC::ARE_STRINGS_EQUAL(uParam0->f_111[iVar0 /*5*/].f_4, sParam1))
				{
					if (uParam0->f_111[iVar0 /*5*/].f_1)
					{
						STREAMING::REMOVE_ANIM_DICT(sParam1);
						func_63(&(uParam0->f_111[iVar0 /*5*/]));
						return;
					}
					else
					{
						uParam0->f_111[iVar0 /*5*/].f_2 = 1;
						uParam0->f_3D6 = 1;
						return;
					}
				}
			}
			iVar0++;
		}
	}
}

void func_66(var uParam0, int iParam1)//Position - 0x44C3
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				if ((uParam0[iVar0 /*5*/])->f_1)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
					func_63(uParam0[iVar0 /*5*/]);
					return;
				}
				else
				{
					(uParam0[iVar0 /*5*/])->f_2 = 1;
					uParam0->f_3D6 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_67(bool bParam0)//Position - 0x4528
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!bParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_26()) && !PED::IS_PED_INJURED(func_26()))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(func_26(), 0))
			{
				unk_0x346478B12F69D4E3(func_26(), true);
			}
			ENTITY::FREEZE_ENTITY_POSITION(func_26(), true);
		}
	}
	func_69(&(iLocal_2599[38]));
	func_69(&(iLocal_2599[39]));
	func_69(&(iLocal_2599[40]));
	func_69(&(iLocal_2599[41]));
	func_69(&(iLocal_2599[42]));
	func_69(&(iLocal_2599[43]));
	func_66(&uLocal_293, iLocal_125);
	func_66(&uLocal_293, iLocal_126);
	func_66(&uLocal_293, iLocal_124);
	func_66(&uLocal_293, joaat("prop_cs_ciggy_01b"));
	func_66(&uLocal_293, joaat("p_fag_packet_01_s"));
	func_66(&uLocal_293, 4161278897);
	func_66(&uLocal_293, joaat("prop_npc_phone"));
	func_66(&uLocal_293, joaat("prop_chair_01a"));
	func_66(&uLocal_293, joaat("prop_fbi3_coffee_table"));
	func_66(&uLocal_293, joaat("prop_binoc_01"));
	func_65(&uLocal_293, cLocal_156);
	func_65(&uLocal_293, cLocal_153);
	func_65(&uLocal_293, "MISSFBI3_PARTY");
	func_65(&uLocal_293, "MISSFBI3_PARTY_B");
	func_65(&uLocal_293, "MISSFBI3_PARTY_C");
	func_65(&uLocal_293, "MISSFBI3_PARTY_D");
	func_65(&uLocal_293, "MISSFBI3_PARTY_E");
	func_65(&uLocal_293, cLocal_150);
	func_68(&uLocal_293, iLocal_2590);
	func_62(&uLocal_293, "FBI_03_Panic");
	iVar0 = 0;
	while (iVar0 < iLocal_2623)
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(iLocal_2623[iVar0]))
		{
			GRAPHICS::STOP_PARTICLE_FX_LOOPED(iLocal_2623[iVar0], 0);
		}
		iVar0++;
	}
	if (!bParam0)
	{
		func_49(&iLocal_2573, 1);
		func_46(&iLocal_2569, 1);
	}
	func_46(&iLocal_2571, 1);
	func_51(&iLocal_2579, 1);
	iVar1 = 0;
	while (iVar1 <= 8)
	{
		func_51(&(iLocal_229[iVar1]), 1);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 <= 15)
	{
		func_46(&(Local_228[iVar2 /*2*/]), 1);
		iVar2++;
	}
	if (iLocal_2267)
	{
		AUDIO::STOP_AUDIO_SCENE(sLocal_196);
		AUDIO::STOP_STREAM();
		iLocal_2267 = 0;
	}
	if (iLocal_2296 != 0)
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2296, 0);
	}
	if (func_30(23))
	{
		func_29(23, 0);
	}
	iLocal_2266 = 0;
}

void func_68(var uParam0, int iParam1)//Position - 0x4753
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < uParam0->f_CA)
	{
		if (uParam0->f_CA[iVar0 /*7*/])
		{
			if (uParam0->f_CA[iVar0 /*7*/].f_4 == iParam1)
			{
				if (uParam0->f_CA[iVar0 /*7*/].f_1)
				{
					WEAPON::REMOVE_WEAPON_ASSET(iParam1);
					func_63(&(uParam0->f_CA[iVar0 /*7*/]));
					return;
				}
				else
				{
					uParam0->f_CA[iVar0 /*7*/].f_2 = 1;
					uParam0->f_3D6 = 1;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_69(var uParam0)//Position - 0x47C3
{
	*uParam0 = 4294967295;
}

void func_70(var uParam0)//Position - 0x47CF
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*82*/]))
		{
			StringCopy(uParam0[iVar0 /*82*/], "", 64);
			(uParam0[iVar0 /*82*/])->f_10 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				(uParam0[iVar0 /*82*/])->f_11.f_D[iVar1] = 4294967295;
				(uParam0[iVar0 /*82*/])->f_11[iVar1] = 4294967295;
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_71()//Position - 0x483D
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_2257)
	{
		iLocal_2257[iVar0] = 0;
		iVar0++;
	}
}

int func_72(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x4861
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
	var uVar11;
	var uVar12;
	var uVar13;
	struct<14> Var14;
	var uVar15;
	
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == 4294967197)
	{
		return 0;
	}
	Global_11567++;
	iVar5 = 4294967197;
	iVar6 = 4294967197;
	iVar7 = 4294967197;
	iVar8 = 4294967197;
	iVar9 = 4294967197;
	iVar10 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (iParam5 == 0)
	{
		Global_11569[1 /*14*/] = { func_122(iVar10, iParam1, iParam2, 4294967295) };
		if (!func_121(iParam3))
		{
			Global_11567 = (Global_11567 - 1);
			return 0;
		}
		func_113(iParam1);
	}
	if (iParam1 == 12)
	{
		if (iParam7 == 1)
		{
			if (iVar10 == joaat("player_one"))
			{
				iVar5 = func_112(iParam0, 8);
				if (iVar5 != 9)
				{
					iVar5 = 4294967197;
				}
			}
			iVar6 = func_112(iParam0, 9);
			if (iVar10 == joaat("player_zero"))
			{
				if (iVar6 >= 9 && iVar6 <= 14)
				{
				}
				else
				{
					iVar6 = 4294967197;
				}
			}
			else if (iVar10 == joaat("player_one"))
			{
				if (iVar6 >= 5 && iVar6 <= 10)
				{
				}
				else
				{
					iVar6 = 4294967197;
				}
			}
			else if (iVar10 == joaat("player_two"))
			{
				if ((iVar6 >= 9 && iVar6 <= 14) || (iVar6 >= 15 && iVar6 <= 16))
				{
				}
				else
				{
					iVar6 = 4294967197;
				}
			}
			iVar7 = func_111(iParam0, 1);
			if (!func_110(iVar10, 14, iVar7, 4294967295))
			{
				iVar7 = 4294967197;
			}
			iVar8 = func_111(iParam0, 0);
			if (!func_109(iVar10, 14, iVar8, 4294967295) && !func_108(iVar10, 14, iVar8, 4294967295))
			{
				iVar8 = 4294967197;
			}
			if (iVar10 == joaat("player_one"))
			{
				iVar9 = func_111(iParam0, 2);
			}
		}
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar11 = 15;
		if (iParam5 == 1)
		{
			uVar11 = { Global_11594 };
		}
		else
		{
			uVar11 = { func_104(iVar10, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar11[iVar0] != 4294967197)
			{
				Global_11569[1 /*14*/] = { func_122(iVar10, iVar0, uVar11[iVar0], 4294967295) };
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0))
				{
					if (iVar0 == 13)
					{
						uVar12 = 9;
						if (iParam5 == 1)
						{
							uVar12 = { Global_115A5 };
						}
						else
						{
							uVar12 = { func_101(iVar10, uVar11[iVar0]) };
						}
						iVar1 = 0;
						while (iVar1 <= 8)
						{
							Global_11569[1 /*14*/] = { func_122(iVar10, 14, uVar12[iVar1], 4294967295) };
							func_92(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
							func_113(14);
							if (Global_11567 == 1)
							{
								iVar2 = 0;
								while (iVar2 < 15)
								{
									iVar3 = func_84(iParam0, iVar10, 14, uVar12[iVar1], iVar2, 0);
									if (iVar3 != 4294967197)
									{
										func_72(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar2++;
								}
							}
							iVar1++;
						}
					}
					else if (iVar0 != 14 && iVar0 != 12)
					{
						if ((iVar10 == joaat("player_one") && iVar0 == 2) && uVar11[iVar0] == 20)
						{
							func_83(iVar10, 2, 20, &iVar4);
						}
						if (iParam4 == 4294967295)
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_82(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_82(iVar0)));
						}
						else
						{
							PED::SET_PED_COMPONENT_VARIATION(iParam0, func_82(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
						}
						func_113(iVar0);
						if (Global_11567 == 1)
						{
							iVar2 = 0;
							while (iVar2 < 15)
							{
								iVar3 = func_84(iParam0, iVar10, iVar0, uVar11[iVar0], iVar2, 0);
								if (iVar3 != 4294967197)
								{
									func_72(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_11569[1 /*14*/] = { func_122(iVar10, iVar0, func_188(iParam0, iVar0, 4294967295), 4294967295) };
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("player_one"))
						{
							if (func_81(iParam0, iVar10, &iVar4, 1))
							{
								func_72(iParam0, 2, iVar4, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { func_104(iVar10, 0) };
						func_72(iParam0, iVar0, uVar13[iVar0], 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			iVar0++;
		}
		if (iParam7 == 1)
		{
			Var14 = { func_122(iVar10, 8, iVar5, 4294967295) };
			if (iVar5 != 4294967197)
			{
				if (func_79(iVar10, iParam2, 8, iVar5, &uVar11, &Var14))
				{
					func_72(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			Var14 = { func_122(iVar10, 9, iVar6, 4294967295) };
			if (iVar6 != 4294967197)
			{
				if (func_79(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_72(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			Var14 = { func_122(iVar10, 14, iVar7, 4294967295) };
			if (iVar7 != 4294967197)
			{
				if (func_79(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_72(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			Var14 = { func_122(iVar10, 14, iVar8, 4294967295) };
			if (iVar8 != 4294967197)
			{
				if (func_79(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_72(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			Var14 = { func_122(iVar10, 14, iVar9, 4294967295) };
			if (iVar9 != 4294967197)
			{
				if (func_79(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_72(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
		}
	}
	else if (iParam1 == 13)
	{
		uVar15 = { func_101(iVar10, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_11569[1 /*14*/] = { func_122(iVar10, 14, uVar15[iVar1], 4294967295) };
			func_92(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
			func_113(14);
			if (Global_11567 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_84(iParam0, iVar10, 14, uVar15[iVar1], iVar2, 0);
					if (iVar3 != 4294967197)
					{
						func_72(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_92(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
		func_113(iParam1);
		if (Global_11567 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_84(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != 4294967197)
				{
					func_72(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
				iVar2++;
			}
		}
	}
	else
	{
		if (iParam4 == 4294967295)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_82(iParam1), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_82(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_82(iParam1), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
		}
		if (Global_11567 == 1)
		{
			iVar2 = 0;
			while (iVar2 < 15)
			{
				iVar3 = func_84(iParam0, iVar10, iParam1, iParam2, iVar2, 0);
				if (iVar3 != 4294967197)
				{
					func_72(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
				iVar2++;
			}
		}
		if (iParam6 == 0)
		{
			func_76(iVar10, iParam1, iParam2);
		}
	}
	if (Global_11567 == 1)
	{
		if (func_81(iParam0, iVar10, &iVar4, 0))
		{
			func_72(iParam0, 2, iVar4, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		}
		if (func_73(iParam0, iVar10, &iVar4))
		{
			func_72(iParam0, 1, iVar4, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		}
	}
	Global_11567 = (Global_11567 - 1);
	return 1;
}

int func_73(int iParam0, int iParam1, int iParam2)//Position - 0x5077
{
	int iVar0;
	
	iVar0 = func_75(iParam1);
	if (Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3F != 4294967197)
	{
		if (!func_74(iParam0, Global_19E56.f_933.f_21B[iVar0 /*65*/].f_40, Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3F))
		{
			*iParam2 = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3E;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3F = 4294967197;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_40 = 1;
			return 1;
		}
	}
	return 0;
}

int func_74(int iParam0, int iParam1, int iParam2)//Position - 0x5103
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	var uVar6;
	int iVar7;
	var uVar8;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_11569[1 /*14*/] = { func_122(iVar0, iParam1, iParam2, 4294967295) };
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_104(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != 4294967197 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_74(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_101(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_74(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_11569[2 /*14*/] = { func_122(iVar0, 14, iVar4, 4294967295) };
									if (Global_11569[2 /*14*/].f_C == iVar3)
									{
										if (func_74(iParam0, 14, iVar4))
										{
											if (!func_79(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_11569[2 /*14*/])))
											{
												return 0;
											}
										}
									}
									iVar4++;
								}
							}
							iVar3++;
						}
					}
					else
					{
						iVar1 = func_112(iParam0, iVar2);
						Global_11569[2 /*14*/] = { func_122(iVar0, iVar2, iVar1, 4294967295) };
						if (!func_79(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_11569[2 /*14*/])))
						{
							return 0;
						}
					}
				}
			}
			iVar2++;
		}
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar8 = { func_101(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_74(iParam0, 14, uVar8[iVar7]))
			{
				return 0;
			}
			iVar7++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_11569[1 /*14*/].f_C) == Global_11569[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_11569[1 /*14*/].f_C) == Global_11569[1 /*14*/].f_4 || Global_11569[1 /*14*/].f_3 == 4294967295))
		{
			return 1;
		}
	}
	else if (Global_11569[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_82(iParam1)) && Global_11569[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_82(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_75(int iParam0)//Position - 0x535E
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			return 0;
			break;
		
		case joaat("player_one"):
			return 1;
			break;
		
		case joaat("player_two"):
			return 2;
			break;
		
		default:
			break;
	}
	return 145;
}

void func_76(int iParam0, int iParam1, int iParam2)//Position - 0x5399
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == joaat("player_zero"))
	{
		iVar0 = 5;
	}
	else if (iParam0 == joaat("player_one"))
	{
		iVar0 = 2;
	}
	else if (iParam0 == joaat("player_two"))
	{
		iVar0 = 4;
	}
	if (func_78(iParam0, 12, iVar0))
	{
		if (func_77(iParam0, iParam1, iParam2))
		{
			iVar1 = func_75(iParam0);
			if (iParam1 == 3)
			{
				Global_19E56.f_933.f_21B.f_C4[iVar1] = iParam2;
			}
			else if (iParam1 == 4)
			{
				Global_19E56.f_933.f_21B.f_C8[iVar1] = iParam2;
			}
		}
	}
}

int func_77(int iParam0, int iParam1, int iParam2)//Position - 0x5423
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 47 && iParam2 <= 54)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 77 && iParam2 <= 84)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 14 && iParam2 <= 21)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 41 && iParam2 <= 56)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 18 && iParam2 <= 29)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 >= 54 && iParam2 <= 69)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_78(int iParam0, int iParam1, int iParam2)//Position - 0x5501
{
	Global_11569[1 /*14*/] = { func_122(iParam0, iParam1, iParam2, 4294967295) };
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 2);
}

int func_79(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x552C
{
	var uVar0;
	int iVar1;
	
	if ((*uParam4)[iParam2] == iParam3)
	{
		return 1;
	}
	if (((*uParam4)[iParam2] == 4294967197 && iParam2 != 14) && iParam2 != 13)
	{
		return 1;
	}
	if (iParam2 == 13 || (iParam2 == 14 && (*uParam4)[13] == 31))
	{
		if ((((((((iParam3 == 0 || iParam3 == 1) || iParam3 == 2) || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 6) || iParam3 == 7) || iParam3 == 8)
		{
			return 1;
		}
	}
	if (iParam3 == 4294967197 || uParam5->f_1 == 4294967295)
	{
		return 1;
	}
	if (iParam2 == 14)
	{
		uVar0 = { func_101(iParam0, (*uParam4)[13]) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			if (uVar0[iVar1] == iParam3)
			{
				return 1;
			}
			iVar1++;
		}
	}
	if (func_80(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_110(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_109(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 0)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_108(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 4) || iParam1 == 5) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 14) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (func_110(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_109(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((iParam1 == 3 || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				if (iParam2 == 8)
				{
					if (iParam3 == 9)
					{
						if (iParam1 == 8 || iParam1 == 21)
						{
							return 1;
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
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 26)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 5 && iParam3 <= 10)
					{
						return 0;
					}
				}
			}
			else if (iParam2 == 14)
			{
				if (((iParam1 == 43 || iParam1 == 44) || iParam1 == 45) || iParam1 == 46)
				{
					if (iParam3 >= 26 && iParam3 <= 39)
					{
						return 0;
					}
				}
			}
			return 1;
		}
		else if (func_108(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((iParam1 == 3 || iParam1 == 3) || iParam1 == 5) || iParam1 == 7) || iParam1 == 8) || iParam1 == 21)
			{
				return 0;
			}
			return 1;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 14 && iParam3 == 0)
			{
				return 1;
			}
		}
		if (func_110(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_109(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			if (iParam2 == 8)
			{
				if ((*uParam4)[8] != 15)
				{
					return 0;
				}
			}
			else if (iParam2 == 9)
			{
				if ((*uParam4)[9] != 0)
				{
					return 0;
				}
			}
			return 1;
		}
		else if (func_108(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 3) || iParam1 == 6) || iParam1 == 8) || iParam1 == 11) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
	}
	return 0;
}

int func_80(int iParam0, int iParam1, int iParam2)//Position - 0x5B30
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
					{
						return 1;
					}
					break;
				
				case 9:
					if (iParam2 == 6)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_81(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5BC9
{
	int iVar0;
	
	iVar0 = func_75(iParam1);
	if (Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3C != 4294967197)
	{
		if (!func_74(iParam0, Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3D, Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3C) || iParam3 == 1)
		{
			*iParam2 = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3B;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3C = 4294967197;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3D = 2;
			return 1;
		}
	}
	return 0;
}

int func_82(int iParam0)//Position - 0x5C5F
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

int func_83(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x5D0F
{
	int iVar0;
	
	*iParam3 = 4294967197;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7 || iParam2 == 23)
					{
						*iParam3 = 1;
					}
					break;
				
				case 9:
					if (iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14))
					{
						*iParam3 = 1;
					}
					break;
				
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 1;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 40 && iParam2 <= 41)) || iParam2 == 46)
					{
						*iParam3 = 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 2:
					if (iParam2 == 20)
					{
						*iParam3 = 20;
					}
					break;
				
				case 8:
					if (iParam2 == 4)
					{
						*iParam3 = 19;
					}
					break;
				
				case 9:
					if (iParam2 >= 5 && iParam2 <= 10)
					{
						*iParam3 = 19;
					}
					break;
				
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 19;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 19;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 7)
					{
						*iParam3 = 2;
					}
					break;
				
				case 9:
					if ((iParam2 >= 9 && iParam2 <= 14) || (iParam2 >= 15 && iParam2 <= 16))
					{
						*iParam3 = 2;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 2;
					}
					break;
				
				case 14:
					if ((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 56 && iParam2 <= 57)) || iParam2 == 62)
					{
						*iParam3 = 2;
					}
					break;
			}
			break;
	}
	if (*iParam3 != 4294967197)
	{
		iVar0 = func_75(iParam0);
		Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3C = iParam2;
		Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3D = iParam1;
		return 1;
	}
	return 0;
}

int func_84(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6016
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
	
	iVar0 = 4294967197;
	if (iParam4 == 0)
	{
		switch (iParam2)
		{
			case 2:
				iVar1 = func_112(iParam0, 1);
				iVar0 = func_91(iParam1, iParam3, iVar1);
				break;
			
			case 1:
				iVar2 = func_112(iParam0, 2);
				iVar0 = func_91(iParam1, iVar2, iParam3);
				break;
		}
	}
	else if (iParam4 == 2)
	{
		func_83(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 1)
	{
		func_90(iParam1, iParam2, iParam3, &iVar0);
	}
	else if (iParam4 == 6)
	{
		if (iParam2 == 4)
		{
			if (func_89(iParam1, iParam3, &iVar0))
			{
			}
		}
	}
	else
	{
		switch (iParam1)
		{
			case joaat("player_zero"):
				switch (iParam4)
				{
					case 3:
						switch (iParam2)
						{
							case 10:
								switch (iParam3)
								{
									case 36:
										iVar0 = 17;
										break;
									
									case 37:
										iVar0 = 17;
										break;
									
									case 38:
										iVar0 = 18;
										break;
									
									case 39:
										iVar0 = 18;
										break;
									
									case 40:
										iVar0 = 19;
										break;
									
									case 41:
										iVar0 = 19;
										break;
									
									case 42:
										iVar0 = 20;
										break;
									
									case 43:
										iVar0 = 20;
										break;
								}
								break;
							
							case 11:
								if (iParam3 >= 2 && iParam3 <= 7)
								{
									if (!func_88(iParam0, 3, 44, 59))
									{
										iVar0 = 44;
									}
								}
								else if (((iParam3 >= 8 && iParam3 <= 17) || (iParam3 >= 18 && iParam3 <= 27)) || (iParam3 >= 28 && iParam3 <= 43))
								{
									if (!func_88(iParam0, 3, 135, 150))
									{
										iVar0 = func_87(iParam1, 3, 135, 150);
									}
								}
								break;
						}
						break;
					
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 63:
										iVar0 = 4;
										break;
									
									case 61:
										iVar0 = 3;
										break;
									
									case 16:
										iVar0 = 1;
										break;
									
									case 114:
										iVar0 = 15;
										break;
									
									case 115:
										iVar0 = 17;
										break;
									
									case 116:
										iVar0 = 16;
										break;
									
									case 117:
										iVar0 = 18;
										break;
									
									case 118:
										iVar0 = 20;
										break;
									
									case 119:
										iVar0 = 19;
										break;
									
									case 125:
										iVar0 = 21;
										break;
									
									case 120:
										iVar0 = 22;
										break;
									
									case 124:
										iVar0 = 23;
										break;
									
									case 126:
										iVar0 = 24;
										break;
									
									case 121:
										iVar0 = 25;
										break;
									
									case 127:
										iVar0 = 26;
										break;
									
									case 128:
										iVar0 = 27;
										break;
									
									case 85:
										iVar0 = 6;
										break;
									
									case 77:
										iVar0 = 7;
										break;
									
									case 78:
										iVar0 = 8;
										break;
									
									case 79:
										iVar0 = 9;
										break;
									
									case 80:
										iVar0 = 10;
										break;
									
									case 81:
										iVar0 = 11;
										break;
									
									case 82:
										iVar0 = 12;
										break;
									
									case 83:
										iVar0 = 13;
										break;
									
									case 84:
										iVar0 = 14;
										break;
									
									case 21:
										iVar0 = 31;
										break;
									
									case 22:
										iVar0 = 30;
										break;
									
									case 23:
										iVar0 = 29;
										break;
									
									case 24:
										iVar0 = 28;
										break;
									
									case 25:
										iVar0 = 33;
										break;
									
									case 26:
										iVar0 = 35;
										break;
									
									case 27:
										iVar0 = 34;
										break;
									
									case 28:
										iVar0 = 32;
										break;
									
									default:
										if (iParam3 >= 17 && iParam3 <= 20)
										{
										}
										else
										{
											iVar0 = 0;
										}
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if ((iParam3 >= 44 && iParam3 <= 59) || (iParam3 >= 135 && iParam3 <= 150))
							{
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 10)
						{
							if (iParam3 >= 36 && iParam3 <= 43)
							{
								iVar0 = 0;
							}
						}
						break;
				}
				break;
			
			case joaat("player_one"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 17:
										iVar0 = 2;
										break;
									
									case 90:
										iVar0 = 1;
										break;
									
									case 268:
										iVar0 = 3;
										break;
									
									case 269:
										iVar0 = 5;
										break;
									
									case 270:
										iVar0 = 4;
										break;
									
									case 271:
										iVar0 = 6;
										break;
									
									case 272:
										iVar0 = 8;
										break;
									
									case 273:
										iVar0 = 7;
										break;
									
									case 279:
										iVar0 = 9;
										break;
									
									case 274:
										iVar0 = 10;
										break;
									
									case 278:
										iVar0 = 11;
										break;
									
									case 280:
										iVar0 = 12;
										break;
									
									case 275:
										iVar0 = 13;
										break;
									
									case 281:
										iVar0 = 14;
										break;
									
									case 282:
										iVar0 = 15;
										break;
									
									case 107:
										iVar0 = 16;
										break;
									
									case 108:
										iVar0 = 17;
										break;
									
									case 109:
										iVar0 = 18;
										break;
									
									case 110:
										iVar0 = 19;
										break;
									
									case 111:
										iVar0 = 20;
										break;
									
									case 112:
										iVar0 = 21;
										break;
									
									case 113:
										iVar0 = 22;
										break;
									
									case 114:
										iVar0 = 23;
										break;
									
									case 115:
										iVar0 = 24;
										break;
									
									case 116:
										iVar0 = 25;
										break;
									
									case 117:
										iVar0 = 52;
										break;
									
									case 118:
										iVar0 = 27;
										break;
									
									case 119:
										iVar0 = 28;
										break;
									
									case 120:
										iVar0 = 29;
										break;
									
									case 121:
										iVar0 = 30;
										break;
									
									case 122:
										iVar0 = 31;
										break;
									
									case 296:
										iVar0 = 32;
										break;
									
									case 297:
										iVar0 = 33;
										break;
									
									case 298:
										iVar0 = 34;
										break;
									
									case 299:
										iVar0 = 35;
										break;
									
									case 300:
										iVar0 = 36;
										break;
									
									case 301:
										iVar0 = 37;
										break;
									
									case 302:
										iVar0 = 38;
										break;
									
									case 309:
										iVar0 = 39;
										break;
									
									case 310:
										iVar0 = 40;
										break;
									
									case 311:
										iVar0 = 41;
										break;
									
									case 312:
										iVar0 = 42;
										break;
									
									case 313:
										iVar0 = 43;
										break;
									
									case 314:
										iVar0 = 44;
										break;
									
									case 315:
										iVar0 = 45;
										break;
									
									case 316:
										iVar0 = 46;
										break;
									
									case 317:
										iVar0 = 51;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
							
							case 11:
								if (iParam3 != 0)
								{
									iVar0 = 0;
								}
								break;
						}
						break;
					
					case 3:
						switch (iParam2)
						{
							case 11:
								if (iParam3 >= 47 && iParam3 <= 62)
								{
									if (!func_88(iParam0, 3, 209, 222))
									{
										iVar0 = func_87(iParam1, 3, 209, 222);
									}
								}
								else if ((iParam3 >= 1 && iParam3 <= 4) || (iParam3 >= 5 && iParam3 <= 8))
								{
									if (!func_88(iParam0, 3, 243, 258))
									{
										if (iParam3 == 1 || iParam3 == 5)
										{
											iVar0 = func_87(iParam1, 3, 243, 246);
										}
										else if (iParam3 == 2 || iParam3 == 6)
										{
											iVar0 = func_87(iParam1, 3, 247, 250);
										}
										else if (iParam3 == 3 || iParam3 == 7)
										{
											iVar0 = func_87(iParam1, 3, 251, 254);
										}
										else if (iParam3 == 4 || iParam3 == 8)
										{
											iVar0 = func_87(iParam1, 3, 255, 258);
										}
									}
								}
								else if (iParam3 == 41 || iParam3 == 42)
								{
									if (!func_88(iParam0, 3, 176, 191) && !func_88(iParam0, 3, 227, 242))
									{
										iVar0 = func_87(iParam1, 3, 176, 191);
									}
								}
								break;
						}
						break;
					
					case 8:
						if (iParam2 == 11 || iParam2 == 3)
						{
							if (iParam2 == 11)
							{
								iVar5 = iParam3;
								iVar4 = func_112(iParam0, 3);
							}
							else if (iParam2 == 3)
							{
								iVar4 = iParam3;
								iVar5 = func_112(iParam0, 11);
								iVar5 = func_86(iParam1, iVar4, iVar5, 0);
							}
							iVar3 = func_112(iParam0, 8);
							if (((iVar5 >= 5 && iVar5 <= 8) || (iVar5 >= 25 && iVar5 <= 40)) || (iVar5 >= 42 && iVar5 <= 43))
							{
								if (!func_85(joaat("player_one"), iVar3, iVar5, iVar4, &iVar6))
								{
									if (iVar6 != 4294967197)
									{
										iVar0 = iVar6;
									}
								}
							}
							else if (((iVar3 >= 27 && iVar3 <= 42) || (iVar3 >= 43 && iVar3 <= 58)) || (iVar3 >= 59 && iVar3 <= 74))
							{
								iVar0 = 26;
							}
						}
						break;
					
					case 11:
						if (iParam2 == 3)
						{
							if (iParam3 >= 209 && iParam3 <= 222)
							{
							}
							else if (((iParam3 >= 176 && iParam3 <= 191) || (iParam3 >= 227 && iParam3 <= 242)) || (iParam3 >= 243 && iParam3 <= 258))
							{
								iVar7 = func_112(iParam0, 8);
								iVar8 = func_112(iParam0, 11);
								if (((iVar7 >= 27 && iVar7 <= 42) || (iVar7 >= 43 && iVar7 <= 58)) || (iVar7 >= 59 && iVar7 <= 74))
								{
									iVar0 = func_86(iParam1, iParam3, iVar8, 0);
								}
								else
								{
									iVar0 = func_86(iParam1, iParam3, iVar8, 1);
								}
							}
							else if (iParam3 >= 41 && iParam3 <= 56)
							{
								iVar0 = 45;
							}
							else if (iParam3 >= 223 && iParam3 <= 226)
							{
								iVar0 = 44;
							}
							else
							{
								iVar0 = 0;
							}
						}
						else if (iParam2 == 8)
						{
							if (((iParam3 >= 27 && iParam3 <= 42) || (iParam3 >= 43 && iParam3 <= 58)) || (iParam3 >= 59 && iParam3 <= 74))
							{
								iVar9 = func_112(iParam0, 11);
								iVar0 = func_86(iParam1, 4294967197, iVar9, 0);
							}
						}
						break;
				}
				break;
			
			case joaat("player_two"):
				switch (iParam4)
				{
					case 10:
						switch (iParam2)
						{
							case 3:
								switch (iParam3)
								{
									case 50:
										iVar0 = 3;
										break;
									
									case 81:
										iVar0 = 5;
										break;
									
									case 82:
										iVar0 = 6;
										break;
									
									case 83:
										iVar0 = 7;
										break;
									
									case 84:
										iVar0 = 10;
										break;
									
									case 85:
										iVar0 = 9;
										break;
									
									case 86:
										iVar0 = 8;
										break;
									
									case 92:
										iVar0 = 22;
										break;
									
									case 87:
										iVar0 = 23;
										break;
									
									case 91:
										iVar0 = 24;
										break;
									
									case 93:
										iVar0 = 25;
										break;
									
									case 88:
										iVar0 = 26;
										break;
									
									case 94:
										iVar0 = 27;
										break;
									
									case 120:
										iVar0 = 11;
										break;
									
									case 121:
										iVar0 = 13;
										break;
									
									case 122:
										iVar0 = 14;
										break;
									
									case 124:
										iVar0 = 12;
										break;
									
									case 126:
										iVar0 = 18;
										break;
									
									case 128:
										iVar0 = 17;
										break;
									
									case 130:
										iVar0 = 19;
										break;
									
									case 131:
										iVar0 = 16;
										break;
									
									case 134:
										iVar0 = 15;
										break;
									
									case 135:
										iVar0 = 20;
										break;
									
									default:
										iVar0 = 0;
										break;
								}
								break;
						}
						break;
				}
				break;
			}
	}
	return iVar0;
}

int func_85(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)//Position - 0x6BC9
{
	int iVar0;
	
	switch (iParam0)
	{
		case joaat("player_zero"):
			break;
		
		case joaat("player_one"):
			*uParam4 = 0;
			if (iParam1 >= 27 && iParam1 <= 42)
			{
				if (iParam2 != 4294967197)
				{
					if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
					{
					}
					else
					{
						if (iParam2 >= 42 && iParam2 <= 43)
						{
							if (iParam3 >= 176 && iParam3 <= 191)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (59 + iVar0);
							}
							else if (iParam3 >= 227 && iParam3 <= 242)
							{
								iVar0 = (iParam1 - 27);
								*uParam4 = (43 + iVar0);
							}
						}
						return 0;
					}
				}
				if (iParam3 != 4294967197)
				{
					if (((iParam3 >= 227 && iParam3 <= 242) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 243 && iParam3 <= 258))
					{
					}
					else
					{
						return 0;
					}
				}
			}
			else if (iParam1 >= 43 && iParam1 <= 58)
			{
				if (iParam2 != 4294967197)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 43);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != 4294967197)
				{
					if (iParam3 >= 227 && iParam3 <= 242)
					{
					}
					else
					{
						if (iParam3 >= 176 && iParam3 <= 191)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 43);
								*uParam4 = (59 + iVar0);
							}
						}
						return 0;
					}
				}
			}
			else if (iParam1 >= 59 && iParam1 <= 74)
			{
				if (iParam2 != 4294967197)
				{
					if (iParam2 >= 42 && iParam2 <= 43)
					{
					}
					else
					{
						if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
				if (iParam3 != 4294967197)
				{
					if (iParam3 >= 176 && iParam3 <= 191)
					{
					}
					else
					{
						if (iParam3 >= 227 && iParam3 <= 242)
						{
							if (iParam2 >= 42 && iParam2 <= 43)
							{
								iVar0 = (iParam1 - 59);
								*uParam4 = (43 + iVar0);
							}
						}
						else if ((iParam2 >= 5 && iParam2 <= 8) || (iParam2 >= 25 && iParam2 <= 40))
						{
							iVar0 = (iParam1 - 59);
							*uParam4 = (27 + iVar0);
						}
						return 0;
					}
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 12)
			{
				if (iParam3 != 241)
				{
					return 0;
				}
			}
			break;
	}
	return 1;
}

int func_86(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x6EAD
{
	int iVar0;
	
	if (iParam1 >= 243 && iParam1 <= 246)
	{
		if (iParam3 == 1)
		{
			return 1;
		}
		else
		{
			return 5;
		}
	}
	else if (iParam1 >= 247 && iParam1 <= 250)
	{
		if (iParam3 == 1)
		{
			return 2;
		}
		else
		{
			return 6;
		}
	}
	else if (iParam1 >= 251 && iParam1 <= 254)
	{
		if (iParam3 == 1)
		{
			return 3;
		}
		else
		{
			return 7;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if (iParam1 >= 255 && iParam1 <= 258)
	{
		if (iParam3 == 1)
		{
			return 4;
		}
		else
		{
			return 8;
		}
	}
	else if ((iParam1 >= 176 && iParam1 <= 191) || (iParam1 >= 227 && iParam1 <= 242))
	{
		if (iParam2 >= 9 && iParam2 <= 24)
		{
			if (iParam3 == 1)
			{
				return iParam2;
			}
			else
			{
				iVar0 = (iParam2 - 9);
				iParam2 = (25 + iVar0);
				return iParam2;
			}
		}
		else if (iParam2 >= 25 && iParam2 <= 40)
		{
			if (iParam3 == 1)
			{
				iVar0 = (iParam2 - 25);
				iParam2 = (9 + iVar0);
				return iParam2;
			}
			else
			{
				return iParam2;
			}
		}
		else if (iParam2 == 41 || iParam2 == 42)
		{
			if (iParam3 == 1)
			{
				return 41;
			}
			else
			{
				return 42;
			}
		}
		else
		{
			if (iParam3 == 1)
			{
				iParam2 = func_87(iParam0, 11, 9, 24);
			}
			else
			{
				iParam2 = func_87(iParam0, 11, 25, 40);
			}
			if (iParam2 == 4294967197)
			{
				if (iParam3 == 1)
				{
					return 41;
				}
				else
				{
					return 42;
				}
			}
			else
			{
				return iParam2;
			}
		}
	}
	else if (iParam2 >= 1 && iParam2 <= 4)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 1);
			iParam2 = (5 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 5 && iParam2 <= 8)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 5);
			iParam2 = (1 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 >= 9 && iParam2 <= 24)
	{
		if (iParam3 == 1)
		{
			return iParam2;
		}
		else
		{
			iVar0 = (iParam2 - 9);
			iParam2 = (25 + iVar0);
			return iParam2;
		}
	}
	else if (iParam2 >= 25 && iParam2 <= 40)
	{
		if (iParam3 == 1)
		{
			iVar0 = (iParam2 - 25);
			iParam2 = (9 + iVar0);
			return iParam2;
		}
		else
		{
			return iParam2;
		}
	}
	else if (iParam2 == 41 || iParam2 == 42)
	{
		if (iParam3 == 1)
		{
			return 41;
		}
		else
		{
			return 42;
		}
	}
	return 4294967197;
}

int func_87(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7174
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam2;
	while (iVar0 <= (iParam3 - 1))
	{
		iVar1 = iVar0;
		if (func_78(iParam0, iParam1, iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 4294967197;
}

int func_88(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x71AB
{
	int iVar0;
	
	iVar0 = func_112(iParam0, iParam1);
	if (iVar0 >= iParam2 && iVar0 <= iParam3)
	{
		return 1;
	}
	return 0;
}

int func_89(int iParam0, int iParam1, int iParam2)//Position - 0x71D4
{
	*iParam2 = 4294967197;
	switch (iParam0)
	{
		case joaat("player_zero"):
			if ((((((((((((((((((iParam1 == 16 || iParam1 == 17) || iParam1 == 21) || iParam1 == 22) || iParam1 == 32) || (iParam1 >= 34 && iParam1 <= 39)) || (iParam1 >= 41 && iParam1 <= 45)) || iParam1 == 46) || (iParam1 >= 47 && iParam1 <= 54)) || (iParam1 >= 55 && iParam1 <= 70)) || (iParam1 >= 72 && iParam1 <= 79)) || iParam1 == 80) || (iParam1 >= 81 && iParam1 <= 83)) || (iParam1 >= 84 && iParam1 <= 87)) || iParam1 == 88) || (iParam1 >= 89 && iParam1 <= 91)) || iParam1 == 95) || (iParam1 >= 96 && iParam1 <= 111)) || iParam1 == 112)
			{
				*iParam2 = 6;
				return 1;
			}
			break;
		
		case joaat("player_one"):
			if ((((((iParam1 == 12 || (iParam1 >= 14 && iParam1 <= 21)) || iParam1 == 32) || iParam1 == 52) || (iParam1 >= 69 && iParam1 <= 70)) || iParam1 == 71) || (iParam1 >= 72 && iParam1 <= 77))
			{
				*iParam2 = 17;
				return 1;
			}
			break;
		
		case joaat("player_two"):
			if (((((((((((((((iParam1 == 4 || iParam1 == 5) || iParam1 == 6) || iParam1 == 7) || iParam1 == 14) || (iParam1 >= 18 && iParam1 <= 29)) || iParam1 == 31) || iParam1 == 32) || iParam1 == 33) || iParam1 == 34) || (iParam1 >= 35 && iParam1 <= 42)) || (iParam1 >= 43 && iParam1 <= 53)) || (iParam1 >= 54 && iParam1 <= 61)) || (iParam1 >= 71 && iParam1 <= 80)) || (iParam1 >= 81 && iParam1 <= 90)) || (iParam1 >= 94 && iParam1 <= 103))
			{
				*iParam2 = 8;
				return 1;
			}
			break;
	}
	return 0;
}

int func_90(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x749E
{
	int iVar0;
	
	*iParam3 = 4294967197;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 44 && iParam2 <= 47)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 31 && iParam2 <= 32) || (iParam2 >= 33 && iParam2 <= 34)) || (iParam2 >= 35 && iParam2 <= 36)) || iParam2 == 37) || (iParam2 >= 38 && iParam2 <= 39)) || (iParam2 >= 40 && iParam2 <= 41)) || (iParam2 >= 42 && iParam2 <= 44))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 10:
					if (iParam2 >= 47 && iParam2 <= 50)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((iParam2 >= 26 && iParam2 <= 27) || (iParam2 >= 28 && iParam2 <= 29)) || (iParam2 >= 30 && iParam2 <= 31)) || iParam2 == 32) || (iParam2 >= 35 && iParam2 <= 36))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 9:
					if (iParam2 >= 15 && iParam2 <= 16)
					{
						*iParam3 = 0;
					}
					break;
				
				case 10:
					if (iParam2 >= 29 && iParam2 <= 32)
					{
						*iParam3 = 0;
					}
					break;
				
				case 14:
					if (((((((iParam2 >= 47 && iParam2 <= 48) || (iParam2 >= 49 && iParam2 <= 50)) || (iParam2 >= 51 && iParam2 <= 52)) || iParam2 == 53) || (iParam2 >= 54 && iParam2 <= 55)) || (iParam2 >= 56 && iParam2 <= 57)) || (iParam2 >= 58 && iParam2 <= 60))
					{
						*iParam3 = 0;
					}
					break;
			}
			break;
	}
	if (*iParam3 != 4294967197)
	{
		iVar0 = func_75(iParam0);
		Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3F = iParam2;
		Global_19E56.f_933.f_21B[iVar0 /*65*/].f_40 = iParam1;
		return 1;
	}
	return 0;
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x7728
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 1)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else if (iParam2 == 4)
				{
					return 5;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else if (iParam2 == 4)
			{
				return 4;
			}
			else
			{
				return 2;
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 >= 0 && iParam1 <= 15)
			{
				if (iParam2 == 0)
				{
					return 0;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 >= 16 && iParam1 <= 17)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 5;
				}
			}
			else if (iParam1 == 18)
			{
				if (iParam2 == 0)
				{
					return 6;
				}
				else
				{
					return 7;
				}
			}
			else if (iParam1 == 19)
			{
				if (iParam2 == 0)
				{
					return 1;
				}
				else
				{
					return 4;
				}
			}
			else if (iParam2 == 0)
			{
				return 1;
			}
			else
			{
				return 4;
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 2)
			{
				if (iParam2 == 0)
				{
					return 2;
				}
				else
				{
					return 3;
				}
			}
			else if (iParam1 == 3)
			{
				if (iParam2 == 0)
				{
					return 4;
				}
				else
				{
					return 6;
				}
			}
			else if (iParam1 == 8)
			{
				return 5;
			}
			else if (iParam2 == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
			break;
	}
	return 4294967197;
}

void func_92(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x787F
{
	int iVar0;
	
	if (iParam2 == 4294967295)
	{
		PED::CLEAR_PED_PROP(iParam0, iParam1);
		if (iParam1 == 0)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
			PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
		}
	}
	else
	{
		PED::SET_PED_PROP_INDEX(iParam0, iParam1, iParam2, iParam3, NETWORK::NETWORK_IS_GAME_IN_PROGRESS());
		if (iParam1 == 0)
		{
			iVar0 = func_97(iParam0, iParam2, iParam3, iParam1);
			if (func_93(ENTITY::GET_ENTITY_MODEL(iParam0), 14, iVar0, FILE::GET_HASH_NAME_FOR_PROP(iParam0, 0, iParam2, iParam3)))
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, true);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
			}
			else
			{
				PED::SET_PED_CONFIG_FLAG(iParam0, 34, false);
				PED::SET_PED_CONFIG_FLAG(iParam0, 36, false);
			}
		}
	}
}

int func_93(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7917
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == 4294967295)
					{
						iParam3 = func_94(iParam0, iParam2, 14, 3);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILE::_0x341DE7ED1D2A1BFD(iParam3, 3261533395, 1)))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam3 == 4294967295)
					{
						iParam3 = func_94(iParam0, iParam2, 14, 4);
					}
					if ((iParam2 >= 131 && iParam2 <= 154) || (iParam2 >= 327 && FILE::_0x341DE7ED1D2A1BFD(iParam3, 3261533395, 1)))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_94(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x79E5
{
	struct<2> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	
	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILE::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = (iParam1 - func_96(iParam0));
		if (iVar3 < 0)
		{
			return 4294967295;
		}
		iVar4 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 1, 4294967295, 4294967295);
		iVar1 = 0;
		while (iVar1 < iVar4)
		{
			FILE::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iVar2 == iVar3)
				{
					return Var0.f_1;
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILE::INIT_SHOP_PED_COMPONENT(&Var5);
		iVar7 = 0;
		iVar8 = (iParam1 - func_95(iParam0, func_82(iParam2)));
		if (iVar8 < 0)
		{
			return 4294967295;
		}
		if ((iParam0 == Global_115E3.f_1A[iParam2] && iParam1 == Global_115E3[iParam2]) && Global_115E3.f_D[iParam2] != 0)
		{
			return Global_115E3.f_D[iParam2];
		}
		iVar9 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 0, 4294967295, func_82(iParam2));
		iVar6 = 0;
		while (iVar6 < iVar9)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar6, &Var5);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var5))
			{
				if (iVar7 == iVar8)
				{
					Global_115E3.f_D[iParam2] = Var5.f_1;
					Global_115E3[iParam2] = iParam1;
					Global_115E3.f_1A[iParam2] = iParam0;
					return Var5.f_1;
				}
				iVar7++;
			}
			iVar6++;
		}
	}
	return 4294967295;
}

int func_95(int iParam0, int iParam1)//Position - 0x7B41
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
	return 4294967197;
}

int func_96(int iParam0)//Position - 0x7EE8
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
	return 4294967197;
}

int func_97(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x7F49
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (iParam1 == 4294967295)
	{
		return func_100(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != 4294967295 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_99(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_99(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
		}
	}
	iVar2 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iParam3);
	iVar4 = 0;
	while (iVar4 <= (iVar2 - 1))
	{
		iVar6 = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iParam3, iVar4);
		if (iVar4 != iParam1)
		{
			iVar3 = (iVar3 + iVar6);
		}
		else
		{
			iVar5 = 0;
			while (iVar5 <= (iVar6 - 1))
			{
				if (iVar4 == iParam1 && iVar5 == iParam2)
				{
					iVar3 = (iVar3 + func_98(iParam0, iParam3));
					return iVar3;
				}
				else
				{
					iVar3++;
				}
				iVar5++;
			}
		}
		iVar4++;
	}
	return func_100(iParam3);
}

int func_98(int iParam0, int iParam1)//Position - 0x8046
{
	int iVar0;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 58;
					break;
				
				case 2:
					return 112;
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
					return 82;
					break;
				
				case 2:
					return 158;
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 88;
					break;
				
				case 2:
					return 154;
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 155;
					break;
				
				case 6:
					return 319;
					break;
			}
			break;
	}
	return 4294967197;
}

int func_99(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8184
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
		FILE::INIT_SHOP_PED_PROP(&Var0);
		iVar2 = 0;
		iVar3 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 1, 4294967295, 4294967295);
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			FILE::GET_SHOP_PED_QUERY_PROP(iVar1, &Var0);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var0))
			{
				if (iParam1 == Var0.f_1)
				{
					return (func_96(iParam0) + iVar2);
				}
				iVar2++;
			}
			iVar1++;
		}
	}
	else
	{
		FILE::INIT_SHOP_PED_COMPONENT(&Var4);
		iVar6 = 0;
		iVar7 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 0, 4294967295, func_82(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_95(iParam0, func_82(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 4294967197;
}

int func_100(int iParam0)//Position - 0x8264
{
	switch (iParam0)
	{
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
	}
	return 0;
}

struct<10> func_101(int iParam0, int iParam1)//Position - 0x82EA
{
	int iVar0;
	struct<10> Var1;
	
	Var1 = 9;
	iVar0 = 0;
	while (iVar0 <= 8)
	{
		Var1[iVar0] = 4294967197;
		iVar0++;
	}
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 31:
					func_103(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_103(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_103(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_103(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_103(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_103(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_103(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_103(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_103(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_103(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_103(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_102(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_103(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_103(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_103(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_103(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_103(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_103(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_103(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_103(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_103(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_103(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_102(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_103(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_103(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_103(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_103(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_103(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_103(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_103(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_103(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_103(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_103(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_102(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_103(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_103(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_103(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_103(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_103(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_103(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_103(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_103(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_103(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_103(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_103(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_103(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_103(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_103(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_103(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_103(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_103(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_103(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_103(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_103(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_103(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_103(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_103(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_103(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_103(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_103(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_102(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_103(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_103(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_103(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_103(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_103(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_103(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_103(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_103(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_103(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_103(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_103(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_103(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_103(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_103(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_103(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_103(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_103(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_103(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_103(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_103(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_103(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_103(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_103(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_103(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_103(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_102(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_102(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x8C19
{
	int iVar0;
	struct<4> Var1;
	vector3 vVar2;
	int iVar3;
	
	if (iParam2 != 0 && iParam2 != 4294967197)
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
		FILE::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
		if (!FILE::_IS_DLC_DATA_EMPTY(Var1))
		{
			iVar3 = 0;
			while (iVar3 < Var1.f_3)
			{
				if (FILE::_0xA9F9C2E0FDE11CBB(Var1.f_1, iVar3, &vVar2) && vVar2.z != 4294967295)
				{
					if ((vVar2.x != 0 && vVar2.x != 4294967295) && vVar2.x != 1849449579)
					{
						(*iParam0)[vVar2.z] = func_99(iParam1, vVar2.x, 14, iVar0);
					}
					else if (vVar2.y != 4294967295)
					{
						(*iParam0)[vVar2.z] = vVar2.y;
					}
				}
				iVar3++;
			}
		}
	}
}

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x8D43
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

struct<17> func_104(int iParam0, int iParam1)//Position - 0x8D8B
{
	int iVar0;
	struct<17> Var1;
	
	Var1 = 15;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		Var1[iVar0] = 4294967197;
		iVar0++;
	}
	Var1.f_10 = 0;
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 0:
					if (Global_19E56.f_2361.f_63.f_3A[120])
					{
						func_107(&Var1, 4294967197, 4294967197, 1, 1, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					}
					else
					{
						func_107(&Var1, 4294967197, 4294967197, 0, 0, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					}
					break;
				
				case 1:
					func_107(&Var1, 4294967197, 4294967197, 16, 16, 6, 1, 1, 0, 1, 4294967197, 0, 0, 0);
					break;
				
				case 2:
					func_107(&Var1, 4294967197, 4294967197, 36, 21, 6, 1, 5, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 3:
					func_107(&Var1, 4294967197, 4294967197, 65, 36, 6, 0, 2, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 4:
					func_107(&Var1, 4294967197, 4294967197, 61, 32, 6, 0, 0, 7, 3, 4294967197, 0, 0, 2);
					break;
				
				case 5:
					func_107(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[0], Global_19E56.f_933.f_21B.f_C8[0], 6, 3, 0, 0, 0, 4294967197, 0, 0, 3);
					break;
				
				case 6:
					func_107(&Var1, 4294967197, 4294967197, 92, 72, 7, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 7:
					func_107(&Var1, 4294967197, 4294967197, 85, 95, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 8:
					func_107(&Var1, 4294967197, 4294967197, 170, 80, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 9:
					func_107(&Var1, 4294967197, 4294967197, 171, 89, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_107(&Var1, 4294967197, 4294967197, 33, 18, 8, 10, 3, 8, 0, 4294967197, 0, 0, 4);
					break;
				
				case 11:
					func_107(&Var1, 4294967197, 4294967197, 33, 18, 17, 10, 4, 8, 0, 4294967197, 0, 0, 5);
					break;
				
				case 12:
					func_107(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 23, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_107(&Var1, 4294967197, 4294967197, 69, 40, 13, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_107(&Var1, 4294967197, 4294967197, 62, 33, 38, 0, 8, 0, 0, 4294967197, 0, 0, 6);
					break;
				
				case 15:
					func_107(&Var1, 4294967197, 4294967197, 63, 34, 6, 10, 0, 0, 4, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_107(&Var1, 4294967197, 4294967197, 174, 93, 18, 0, 18, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_107(&Var1, 4294967197, 4294967197, 76, 46, 6, 10, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_107(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 0, 4, 0, 4294967197, 0, 0, 7);
					break;
				
				case 19:
					func_107(&Var1, 4294967197, 4294967197, 64, 35, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_107(&Var1, 4294967197, 4294967197, 66, 37, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_107(&Var1, 4294967197, 4294967197, 67, 38, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 22:
					func_107(&Var1, 4294967197, 4294967197, 68, 39, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 23:
					func_107(&Var1, 4294967197, 4294967197, 177, 94, 19, 9, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 24:
					func_107(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 4, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 25:
					func_107(&Var1, 4294967197, 4294967197, 97, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 26:
					func_107(&Var1, 4294967197, 4294967197, 3, 3, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 27:
					func_107(&Var1, 4294967197, 4294967197, 129, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 28:
					func_107(&Var1, 4294967197, 4294967197, 170, 80, 6, 0, 13, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 29:
					func_107(&Var1, 4294967197, 4294967197, 2, 2, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 30:
					func_107(&Var1, 4294967197, 4294967197, 161, 3, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 31:
					func_107(&Var1, 4294967197, 4294967197, 3, 3, 0, 12, 0, 0, 0, 4294967197, 0, 1, 31);
					break;
				
				case 32:
					func_107(&Var1, 4294967197, 4294967197, 85, 55, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 33:
					func_107(&Var1, 4294967197, 4294967197, 86, 4, 20, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 34:
					func_107(&Var1, 4294967197, 4294967197, 44, 97, 6, 0, 0, 0, 0, 4294967197, 0, 2, 31);
					break;
				
				case 35:
					func_107(&Var1, 4294967197, 4294967197, 85, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 36:
					func_107(&Var1, 4294967197, 4294967197, 4, 4, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 37:
					func_107(&Var1, 4294967197, 4294967197, 5, 5, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 38:
					func_107(&Var1, 4294967197, 4294967197, 6, 6, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_107(&Var1, 4294967197, 4294967197, 7, 7, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_107(&Var1, 4294967197, 4294967197, 8, 8, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_107(&Var1, 4294967197, 4294967197, 9, 9, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_107(&Var1, 4294967197, 4294967197, 10, 10, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_107(&Var1, 4294967197, 4294967197, 11, 11, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 44:
					func_107(&Var1, 4294967197, 4294967197, 12, 12, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 45:
					func_107(&Var1, 4294967197, 4294967197, 13, 13, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 46:
					func_107(&Var1, 4294967197, 4294967197, 14, 14, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 47:
					func_107(&Var1, 4294967197, 4294967197, 15, 15, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 48:
					func_107(&Var1, 4294967197, 4294967197, 91, 71, 14, 13, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 49:
					func_107(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 50:
					func_107(&Var1, 4294967197, 4294967197, 33, 18, 8, 10, 3, 8, 0, 4294967197, 0, 0, 9);
					break;
				
				case 51:
					func_107(&Var1, 4294967197, 4294967197, 169, 95, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 52:
					func_107(&Var1, 4294967197, 4294967197, 169, 72, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_105(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_107(&Var1, 4294967197, 4294967197, 73, 24, 18, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 1:
					func_107(&Var1, 4294967197, 4294967197, 22, 10, 64, 0, 24, 0, 0, 4294967197, 0, 43, 31);
					break;
				
				case 2:
					func_107(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[1], Global_19E56.f_933.f_21B.f_C8[1], 17, 2, 26, 0, 0, 4294967197, 0, 45, 31);
					break;
				
				case 3:
					func_107(&Var1, 4294967197, 4294967197, 23, 11, 13, 5, 2, 4, 0, 4294967197, 0, 0, 1);
					break;
				
				case 4:
					func_107(&Var1, 4294967197, 4294967197, 23, 11, 34, 5, 26, 0, 0, 4294967197, 0, 0, 2);
					break;
				
				case 5:
					func_107(&Var1, 4294967197, 20, 159, 69, 17, 5, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 6:
					func_107(&Var1, 4294967197, 4294967197, 40, 13, 14, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 7:
					func_107(&Var1, 4294967197, 4294967197, 90, 32, 17, 1, 8, 0, 1, 4294967197, 0, 0, 3);
					break;
				
				case 8:
					func_107(&Var1, 4294967197, 4294967197, 17, 5, 12, 0, 26, 0, 2, 4294967197, 0, 0, 5);
					break;
				
				case 9:
					func_107(&Var1, 4294967197, 4294967197, 16, 4, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_107(&Var1, 4294967197, 4294967197, 208, 71, 17, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 11:
					func_107(&Var1, 4294967197, 4294967197, 259, 10, 35, 0, 24, 0, 0, 4294967197, 0, 43, 31);
					break;
				
				case 12:
					func_107(&Var1, 4294967197, 4294967197, 18, 6, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_107(&Var1, 4294967197, 4294967197, 19, 7, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_107(&Var1, 4294967197, 4294967197, 20, 8, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 15:
					func_107(&Var1, 4294967197, 4294967197, 21, 9, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_107(&Var1, 4294967197, 4294967197, 135, 40, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_107(&Var1, 4294967197, 4294967197, 74, 24, 52, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_107(&Var1, 4294967197, 4294967197, 176, 53, 26, 5, 26, 0, 0, 4294967197, 0, 41, 31);
					break;
				
				case 19:
					func_107(&Var1, 4294967197, 4294967197, 125, 24, 18, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_107(&Var1, 4294967197, 4294967197, 162, 24, 36, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_107(&Var1, 4294967197, 4294967197, 75, 24, 36, 0, 26, 0, 0, 4294967197, 0, 0, 4);
					break;
				
				case 22:
					func_107(&Var1, 4294967197, 4294967197, 227, 53, 25, 0, 27, 0, 0, 4294967197, 0, 25, 31);
					break;
				
				case 23:
					func_107(&Var1, 4294967197, 4294967197, 228, 54, 25, 0, 28, 0, 0, 4294967197, 0, 26, 31);
					break;
				
				case 24:
					func_107(&Var1, 4294967197, 4294967197, 229, 55, 25, 0, 29, 0, 0, 4294967197, 0, 27, 31);
					break;
				
				case 25:
					func_107(&Var1, 4294967197, 4294967197, 230, 56, 25, 0, 30, 0, 0, 4294967197, 0, 28, 31);
					break;
				
				case 26:
					func_107(&Var1, 4294967197, 4294967197, 231, 57, 25, 0, 31, 0, 0, 4294967197, 0, 29, 31);
					break;
				
				case 27:
					func_107(&Var1, 4294967197, 4294967197, 232, 58, 25, 0, 32, 0, 0, 4294967197, 0, 30, 31);
					break;
				
				case 28:
					func_107(&Var1, 4294967197, 4294967197, 233, 59, 25, 0, 33, 0, 0, 4294967197, 0, 31, 31);
					break;
				
				case 29:
					func_107(&Var1, 4294967197, 4294967197, 234, 60, 25, 0, 34, 0, 0, 4294967197, 0, 32, 31);
					break;
				
				case 30:
					func_107(&Var1, 4294967197, 4294967197, 235, 61, 25, 0, 35, 0, 0, 4294967197, 0, 33, 31);
					break;
				
				case 31:
					func_107(&Var1, 4294967197, 4294967197, 236, 62, 25, 0, 36, 0, 0, 4294967197, 0, 34, 31);
					break;
				
				case 32:
					func_107(&Var1, 4294967197, 4294967197, 237, 63, 25, 0, 37, 0, 0, 4294967197, 0, 35, 31);
					break;
				
				case 33:
					func_107(&Var1, 4294967197, 4294967197, 238, 64, 25, 0, 38, 0, 0, 4294967197, 0, 36, 31);
					break;
				
				case 34:
					func_107(&Var1, 4294967197, 4294967197, 239, 65, 25, 0, 39, 0, 0, 4294967197, 0, 37, 31);
					break;
				
				case 35:
					func_107(&Var1, 4294967197, 4294967197, 240, 66, 25, 0, 40, 0, 0, 4294967197, 0, 38, 31);
					break;
				
				case 36:
					func_107(&Var1, 4294967197, 4294967197, 241, 67, 25, 0, 41, 0, 0, 4294967197, 0, 39, 31);
					break;
				
				case 37:
					func_107(&Var1, 4294967197, 4294967197, 242, 68, 25, 0, 42, 0, 0, 4294967197, 0, 40, 31);
					break;
				
				case 38:
					func_107(&Var1, 4294967197, 4294967197, 260, 72, 17, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_107(&Var1, 4294967197, 4294967197, 125, 24, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_107(&Var1, 4294967197, 4294967197, 123, 24, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_107(&Var1, 4294967197, 4294967197, 159, 69, 17, 5, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_107(&Var1, 4294967197, 4294967197, 89, 22, 15, 6, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_107(&Var1, 4294967197, 4294967197, 317, 69, 17, 0, 0, 0, 51, 4294967197, 0, 0, 6);
					break;
				
				case 44:
					func_107(&Var1, 4294967197, 4294967197, 30, 23, 16, 0, 0, 0, 0, 4294967197, 0, 0, 7);
					break;
				
				case 45:
					func_107(&Var1, 4294967197, 4294967197, 106, 70, 17, 5, 26, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 46:
					func_107(&Var1, 4294967197, 4294967197, 117, 24, 20, 5, 26, 0, 52, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_105(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_107(&Var1, 4294967197, 4294967197, 0, 91, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 1:
					func_107(&Var1, 4294967197, 4294967197, 17, 5, 8, 2, 3, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 2:
					func_107(&Var1, 4294967197, 4294967197, 43, 8, 12, 3, 5, 0, 0, 4294967197, 0, 0, 1);
					break;
				
				case 3:
					func_107(&Var1, 4294967197, 4294967197, 50, 14, 8, 0, 15, 6, 3, 4294967197, 0, 0, 2);
					break;
				
				case 4:
					func_107(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[2], Global_19E56.f_933.f_21B.f_C8[2], 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 5:
					func_107(&Var1, 4294967197, 4294967197, 95, 33, 8, 0, 15, 0, 0, 4294967197, 0, 0, 6);
					break;
				
				case 6:
					func_107(&Var1, 4294967197, 4294967197, 49, 13, 10, 4, 6, 0, 0, 4294967197, 0, 0, 3);
					break;
				
				case 7:
					func_107(&Var1, 4294967197, 4294967197, 49, 13, 14, 4, 15, 0, 0, 4294967197, 0, 0, 4);
					break;
				
				case 8:
					func_107(&Var1, 4294967197, 4294967197, 79, 32, 8, 5, 7, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 9:
					func_107(&Var1, 4294967197, 4294967197, 53, 17, 11, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_107(&Var1, 4294967197, 4294967197, 96, 81, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 11:
					func_107(&Var1, 4294967197, 4294967197, 51, 15, 33, 0, 8, 0, 0, 4294967197, 0, 0, 5);
					break;
				
				case 12:
					func_107(&Var1, 4294967197, 4294967197, 0, 93, 29, 0, 13, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_107(&Var1, 4294967197, 4294967197, 52, 16, 30, 5, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_107(&Var1, 4294967197, 4294967197, 241, 92, 16, 0, 12, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 15:
					func_107(&Var1, 4294967197, 4294967197, 97, 34, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_107(&Var1, 4294967197, 4294967197, 44, 9, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_107(&Var1, 4294967197, 4294967197, 45, 10, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_107(&Var1, 4294967197, 4294967197, 46, 11, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 19:
					func_107(&Var1, 4294967197, 4294967197, 47, 12, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_107(&Var1, 4294967197, 4294967197, 161, 53, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_107(&Var1, 4294967197, 4294967197, 0, 44, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 22:
					func_107(&Var1, 4294967197, 4294967197, 98, 0, 28, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 23:
					func_107(&Var1, 4294967197, 4294967197, 27, 0, 31, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 24:
					func_107(&Var1, 4294967197, 4294967197, 190, 71, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 25:
					func_107(&Var1, 4294967197, 4294967197, 191, 72, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 26:
					func_107(&Var1, 4294967197, 4294967197, 192, 73, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 27:
					func_107(&Var1, 4294967197, 4294967197, 193, 74, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 28:
					func_107(&Var1, 4294967197, 4294967197, 194, 75, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 29:
					func_107(&Var1, 4294967197, 4294967197, 195, 76, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 30:
					func_107(&Var1, 4294967197, 4294967197, 196, 77, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 31:
					func_107(&Var1, 4294967197, 4294967197, 197, 78, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 32:
					func_107(&Var1, 4294967197, 4294967197, 198, 79, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 33:
					func_107(&Var1, 4294967197, 4294967197, 199, 80, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 34:
					func_107(&Var1, 4294967197, 4294967197, 200, 62, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 35:
					func_107(&Var1, 4294967197, 4294967197, 201, 63, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 36:
					func_107(&Var1, 4294967197, 4294967197, 202, 64, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 37:
					func_107(&Var1, 4294967197, 4294967197, 203, 65, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 38:
					func_107(&Var1, 4294967197, 4294967197, 204, 66, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_107(&Var1, 4294967197, 4294967197, 205, 67, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_107(&Var1, 4294967197, 4294967197, 206, 68, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_107(&Var1, 4294967197, 4294967197, 2, 43, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_107(&Var1, 4294967197, 4294967197, 55, 0, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_107(&Var1, 4294967197, 4294967197, 0, 52, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 44:
					func_107(&Var1, 4294967197, 4294967197, 70, 30, 32, 6, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 45:
					func_107(&Var1, 4294967197, 4294967197, 19, 91, 28, 0, 0, 0, 0, 4294967197, 0, 0, 7);
					break;
				
				case 46:
					func_107(&Var1, 4294967197, 4294967197, 0, 0, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 47:
					func_107(&Var1, 4294967197, 4294967197, 79, 32, 8, 5, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_105(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_107(&Var1, 4294967197, 4294967197, 0, 0, 10, 4294967197, 0, 4294967197, 4294967197, 0, 0, 0, 31);
					break;
				
				case 1:
					func_107(&Var1, 4294967197, 4294967197, 1, 127, 38, 4294967197, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_107(&Var1, 4294967197, 4294967197, 0, 248, 45, 4294967197, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_107(&Var1, 4294967197, 4294967197, 4, 31, 25, 4294967197, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_107(&Var1, 4294967197, 4294967197, 1, 66, 10, 4294967197, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_107(&Var1, 4294967197, 4294967197, 1, 93, 141, 4294967197, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_107(&Var1, 4294967197, 4294967197, 1, 116, 113, 4294967197, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_107(&Var1, 4294967197, 4294967197, 1, 61, 136, 4294967197, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_107(&Var1, 4294967197, 4294967197, 0, 112, 10, 4294967197, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_107(&Var1, 4294967197, 4294967197, 4, 131, 24, 4294967197, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_107(&Var1, 4294967197, 4294967197, 1, 209, 188, 4294967197, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_107(&Var1, 4294967197, 4294967197, 1, 209, 160, 4294967197, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_107(&Var1, 4294967197, 4294967197, 1, 162, 174, 4294967197, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_107(&Var1, 4294967197, 4294967197, 1, 4, 240, 4294967197, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_107(&Var1, 4294967197, 4294967197, 1, 128, 232, 4294967197, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_107(&Var1, 4294967197, 4294967197, 1, 66, 65, 4294967197, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_107(&Var1, 4294967197, 4294967197, 1, 65, 172, 4294967197, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_107(&Var1, 4294967197, 4294967197, 1, 64, 10, 4294967197, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_107(&Var1, 4294967197, 4294967197, 5, 98, 80, 4294967197, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_107(&Var1, 4294967197, 4294967197, 5, 192, 96, 4294967197, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_107(&Var1, 4294967197, 4294967197, 1, 124, 96, 4294967197, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_107(&Var1, 4294967197, 4294967197, 0, 80, 114, 4294967197, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_107(&Var1, 4294967197, 4294967197, 6, 43, 112, 4294967197, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_107(&Var1, 4294967197, 4294967197, 1, 116, 144, 4294967197, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_107(&Var1, 4294967197, 4294967197, 1, 63, 38, 4294967197, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_107(&Var1, 4294967197, 4294967197, 2, 64, 10, 4294967197, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_105(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_107(&Var1, 4294967197, 4294967197, 0, 0, 0, 4294967197, 0, 4294967197, 4294967197, 0, 4294967197, 0, 31);
					break;
				
				case 1:
					func_107(&Var1, 4294967197, 4294967197, 5, 136, 241, 4294967197, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_107(&Var1, 4294967197, 4294967197, 4, 1, 96, 4294967197, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_107(&Var1, 4294967197, 4294967197, 1, 73, 241, 4294967197, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_107(&Var1, 4294967197, 4294967197, 2, 88, 217, 4294967197, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_107(&Var1, 4294967197, 4294967197, 9, 7, 98, 4294967197, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_107(&Var1, 4294967197, 4294967197, 1, 140, 241, 4294967197, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_107(&Var1, 4294967197, 4294967197, 4, 139, 112, 4294967197, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_107(&Var1, 4294967197, 4294967197, 1, 193, 48, 4294967197, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_107(&Var1, 4294967197, 4294967197, 5, 114, 97, 4294967197, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_107(&Var1, 4294967197, 4294967197, 9, 134, 239, 4294967197, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_107(&Var1, 4294967197, 4294967197, 5, 152, 96, 4294967197, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_107(&Var1, 4294967197, 4294967197, 6, 129, 1, 4294967197, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_107(&Var1, 4294967197, 4294967197, 5, 0, 0, 4294967197, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_107(&Var1, 4294967197, 4294967197, 4, 159, 96, 4294967197, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_107(&Var1, 4294967197, 4294967197, 9, 232, 213, 4294967197, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_107(&Var1, 4294967197, 4294967197, 2, 8, 98, 4294967197, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_107(&Var1, 4294967197, 4294967197, 5, 150, 235, 4294967197, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_107(&Var1, 4294967197, 4294967197, 6, 96, 97, 4294967197, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_107(&Var1, 4294967197, 4294967197, 4, 48, 64, 4294967197, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_107(&Var1, 4294967197, 4294967197, 4, 62, 64, 4294967197, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_107(&Var1, 4294967197, 4294967197, 4, 49, 65, 4294967197, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_107(&Var1, 4294967197, 4294967197, 3, 20, 16, 4294967197, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_107(&Var1, 4294967197, 4294967197, 0, 73, 178, 4294967197, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_107(&Var1, 4294967197, 4294967197, 5, 135, 53, 4294967197, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_107(&Var1, 4294967197, 4294967197, 7, 233, 176, 4294967197, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_107(&Var1, 4294967197, 4294967197, 4, 34, 179, 4294967197, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_107(&Var1, 4294967197, 4294967197, 15, 131, 93, 4294967197, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_105(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_105(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xABD3
{
	int iVar0;
	struct<5> Var1;
	vector3 vVar2;
	struct<2> Var3;
	int iVar4;
	
	(*uParam0)[0] = 0;
	(*uParam0)[2] = 4294967197;
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
	(*uParam0)[13] = 4294967197;
	(*uParam0)[14] = 4294967197;
	uParam0->f_10 = 0;
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
	FILE::_0xF3FBE2D50A6A8C28(iVar0, 0);
	FILE::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
	if (!FILE::_IS_DLC_DATA_EMPTY(Var1))
	{
		iVar4 = 0;
		while (iVar4 < Var1.f_4)
		{
			if (FILE::_GET_PROP_FROM_OUTFIT(Var1.f_1, iVar4, &vVar2))
			{
				if ((vVar2.x != 0 && vVar2.x != 4294967295) && vVar2.x != 1849449579)
				{
					if (vVar2.z == 10)
					{
						FILE::INIT_SHOP_PED_COMPONENT(&Var3);
						FILE::GET_SHOP_PED_COMPONENT(vVar2.x, &Var3);
						if (vVar2.x != Var3.f_1)
						{
							uParam0->f_10 = 1;
						}
					}
					if (vVar2.z == 10 && uParam0->f_10)
					{
						(*uParam0)[func_106(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 1;
					}
					else
					{
						(*uParam0)[func_106(vVar2.z)] = func_99(iParam1, vVar2.x, func_106(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != 4294967295)
				{
					(*uParam0)[func_106(vVar2.z)] = vVar2.y;
				}
			}
			iVar4++;
		}
		if (Var1.f_3 == 0)
		{
			(*uParam0)[13] = 4294967197;
		}
		else
		{
			(*uParam0)[13] = Var1.f_1;
		}
	}
}

int func_106(int iParam0)//Position - 0xADBD
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

void func_107(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0xAE6D
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
	(*uParam0)[14] = 4294967197;
}

int func_108(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xAEDE
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 == 40 || (iParam2 >= 41 && iParam2 <= 56)) || (iParam2 >= 64 && iParam2 <= 79))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 14:
					if ((iParam2 >= 17 && iParam2 <= 18) || (iParam2 >= 71 && iParam2 <= 86))
					{
						return 1;
					}
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_94(iParam0, iParam2, 14, 3);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 1) || FILE::_0x341DE7ED1D2A1BFD(func_94(iParam0, iParam2, 14, 3), 2452280943, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_94(iParam0, iParam2, 1, 3);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(func_94(iParam0, iParam2, 1, 3), 2452280943, 0));
					}
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return 1;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return 1;
					}
					else if (iParam2 >= 327)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_94(iParam0, iParam2, 14, 4);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 1) || FILE::_0x341DE7ED1D2A1BFD(func_94(iParam0, iParam2, 14, 4), 2452280943, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_94(iParam0, iParam2, 1, 4);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(func_94(iParam0, iParam2, 1, 4), 2452280943, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_109(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB15B
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 6)
		{
			if (iParam2 == 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 9 || iParam2 == 7) || iParam2 == 23)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 9 && iParam2 <= 14)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if ((((((((((((((((iParam2 == 12 || iParam2 == 59) || iParam2 == 60) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || iParam2 == 37) || iParam2 == 38) || iParam2 == 39) || iParam2 == 40) || iParam2 == 41) || (iParam2 >= 42 && iParam2 <= 44)) || iParam2 == 54) || iParam2 == 55)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 2)
		{
			if (iParam2 == 20)
			{
				return 1;
			}
		}
		else if (iParam1 == 8)
		{
			if ((iParam2 == 3 || iParam2 == 5) || iParam2 == 9)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 5 && iParam2 <= 10)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 82 || iParam2 == 10) || iParam2 == 26) || iParam2 == 27) || iParam2 == 28) || iParam2 == 29) || iParam2 == 30) || iParam2 == 31) || iParam2 == 32) || iParam2 == 33) || iParam2 == 34) || iParam2 == 35) || iParam2 == 36) || (iParam2 >= 37 && iParam2 <= 39))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 8)
		{
			if (iParam2 == 14 || iParam2 == 7)
			{
				return 1;
			}
		}
		else if (iParam1 == 9)
		{
			if (((iParam2 == 8 || (iParam2 >= 9 && iParam2 <= 14)) || iParam2 == 15) || iParam2 == 16)
			{
				return 1;
			}
		}
		else if (iParam1 == 14)
		{
			if (((((((((((((iParam2 == 88 || iParam2 == 12) || iParam2 == 47) || iParam2 == 48) || iParam2 == 49) || iParam2 == 50) || iParam2 == 51) || iParam2 == 52) || iParam2 == 53) || iParam2 == 54) || iParam2 == 55) || iParam2 == 56) || iParam2 == 57) || (iParam2 >= 58 && iParam2 <= 60))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_m_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_94(iParam0, iParam2, 1, 3);
					}
					if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("mp_f_freemode_01"))
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_94(iParam0, iParam2, 1, 4);
					}
					if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam3, 66092876, 0))
					{
						return 0;
					}
				}
				return 1;
			}
		}
	}
	return 0;
}

int func_110(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xB580
{
	switch (iParam0)
	{
		case joaat("player_zero"):
			if (iParam1 == 14)
			{
				if ((((((((iParam2 == 58 || iParam2 == 61) || (iParam2 >= 62 && iParam2 <= 69)) || (iParam2 >= 70 && iParam2 <= 79)) || (iParam2 >= 80 && iParam2 <= 89)) || iParam2 == 90) || (iParam2 >= 91 && iParam2 <= 102)) || (iParam2 >= 103 && iParam2 <= 110)) || iParam2 == 111)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_one"):
			if (iParam1 == 14)
			{
				if (((((((((((iParam2 >= 83 && iParam2 <= 92) || iParam2 == 93) || iParam2 == 94) || (iParam2 >= 95 && iParam2 <= 101)) || (iParam2 >= 102 && iParam2 <= 111)) || (iParam2 >= 112 && iParam2 <= 121)) || (iParam2 >= 122 && iParam2 <= 131)) || (iParam2 >= 132 && iParam2 <= 139)) || (iParam2 >= 140 && iParam2 <= 149)) || (iParam2 >= 150 && iParam2 <= 156)) || iParam2 == 157)
				{
					return 1;
				}
			}
			break;
		
		case joaat("player_two"):
			if (iParam1 == 14)
			{
				if (((((((((iParam2 == 89 || (iParam2 >= 90 && iParam2 <= 99)) || (iParam2 >= 100 && iParam2 <= 109)) || iParam2 == 111) || iParam2 == 112) || (iParam2 >= 113 && iParam2 <= 122)) || (iParam2 >= 123 && iParam2 <= 132)) || (iParam2 >= 133 && iParam2 <= 142)) || (iParam2 >= 143 && iParam2 <= 152)) || iParam2 == 153)
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_94(iParam0, iParam2, 14, 3);
					}
					return FILE::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return 1;
				}
				else if (iParam2 >= 327)
				{
					if (iParam3 == 4294967295)
					{
						iParam3 = func_94(iParam0, iParam2, 14, 4);
					}
					return FILE::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_111(int iParam0, int iParam1)//Position - 0xB873
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 4294967197;
	}
	iVar0 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
	if (iVar0 == 4294967295)
	{
		return func_100(iParam1);
	}
	iVar1 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	return func_97(iParam0, iVar0, iVar1, iParam1);
}

int func_112(int iParam0, int iParam1)//Position - 0xB8B9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return 4294967197;
	}
	iVar0 = func_82(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_187(iParam0, iVar1, iVar2, iParam1);
}

void func_113(int iParam0)//Position - 0xB919
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6))
	{
		func_120(iParam0, Global_11569[1 /*14*/].f_5, Global_11569[1 /*14*/].f_2, 2, Global_11569[1 /*14*/].f_1, 1, 0);
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6))
	{
		if (iParam0 == 12)
		{
			func_114(Global_280004, 2, 1, 1, 4294967295);
		}
		else if (iParam0 == 13)
		{
		}
		else if (iParam0 == 14)
		{
			func_114(Global_280004, 2, 1, 1, 4294967295);
		}
		else
		{
			func_114(Global_280004, 2, 1, 1, 4294967295);
		}
	}
}

void func_114(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0xB9D1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_11566;
	if (iParam4 != 4294967295)
	{
		iVar0 = iParam4;
	}
	if (func_119(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_118(iVar2, iVar0, 0);
		MISC::SET_BIT(&iVar3, iVar1);
		func_115(iVar2, iVar3, iVar0, 1, 0);
	}
}

void func_115(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0xBA1B
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_116(iParam2)];
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_116(var uParam0)//Position - 0xBA4B
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_117();
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

int func_117()//Position - 0xBA7F
{
	return Global_1407E0;
}

int func_118(int iParam0, int iParam1, int iParam2)//Position - 0xBA8B
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_116(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

bool func_119(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0xBABD
{
	int iVar0;
	
	*uParam2 = 9954;
	if ((bParam4 && Global_4116CB) || (!bParam4 && bParam5))
	{
		switch (iParam1)
		{
			case 1:
				switch (iParam0)
				{
					case 8886212:
					case 3325336349:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case 3096903646:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case 2698039378:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
					
					case 3223543667:
					case 2912144512:
					case 385813134:
						*uParam2 = 935;
						*uParam3 = 0;
						return 1;
						break;
					
					case 3461872604:
					case 2563613428:
					case 675392787:
						*uParam2 = 935;
						*uParam3 = 1;
						return 1;
						break;
					
					case 2458813514:
					case 2334328735:
					case 4056694817:
						*uParam2 = 935;
						*uParam3 = 2;
						return 1;
						break;
					
					case 2696552609:
					case 147161830:
					case 67757212:
						*uParam2 = 935;
						*uParam3 = 3;
						return 1;
						break;
					
					case 123661793:
					case 4202358353:
					case 3758595224:
						*uParam2 = 935;
						*uParam3 = 4;
						return 1;
						break;
					
					case 330958487:
					case 4132036079:
					case 4047388421:
						*uParam2 = 935;
						*uParam3 = 5;
						return 1;
						break;
					
					case 4152249888:
					case 1665087452:
					case 3440146082:
						*uParam2 = 935;
						*uParam3 = 7;
						return 1;
						break;
					
					case 1290696959:
					case 1012984348:
					case 2836672178:
						*uParam2 = 935;
						*uParam3 = 8;
						return 1;
						break;
					
					case 2059568454:
					case 933072050:
					case 2840164692:
						*uParam2 = 935;
						*uParam3 = 11;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 8886212:
					case 3325336349:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1857811503:
					case 3096903646:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 552556691:
					case 2698039378:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 328711652:
					case 2093516866:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 1194403102:
					case 1863511255:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 1107630790:
					case 1503248869:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 1807937089:
					case 1263478096:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 1453442047:
					case 745170819:
						*uParam2 = 1023;
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
					case 2499192393:
					case 3915920436:
						*uParam2 = 971;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 971;
						*uParam3 = 20;
						return 1;
						break;
					
					case 2343343033:
					case 147288818:
						*uParam2 = 971;
						*uParam3 = 21;
						return 1;
						break;
					
					case 2708717383:
					case 1027988462:
						*uParam2 = 971;
						*uParam3 = 22;
						return 1;
						break;
					
					case 2822786272:
					case 788217689:
						*uParam2 = 971;
						*uParam3 = 23;
						return 1;
						break;
					
					case 3178788688:
					case 1338147047:
						*uParam2 = 971;
						*uParam3 = 24;
						return 1;
						break;
					
					case 3266052535:
					case 1095820292:
						*uParam2 = 971;
						*uParam3 = 25;
						return 1;
						break;
					
					case 3640471129:
					case 2305750079:
						*uParam2 = 971;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			
			case 2:
				switch (iParam0)
				{
					case 2499192393:
					case 3915920436:
						*uParam2 = 1023;
						*uParam3 = 19;
						return 1;
						break;
					
					case 1655095722:
					case 472553912:
						*uParam2 = 1023;
						*uParam3 = 20;
						return 1;
						break;
					
					case 2343343033:
					case 147288818:
						*uParam2 = 1023;
						*uParam3 = 21;
						return 1;
						break;
					
					case 2708717383:
					case 1027988462:
						*uParam2 = 1023;
						*uParam3 = 22;
						return 1;
						break;
					
					case 2822786272:
					case 788217689:
						*uParam2 = 1023;
						*uParam3 = 23;
						return 1;
						break;
					
					case 3178788688:
					case 1338147047:
						*uParam2 = 1023;
						*uParam3 = 24;
						return 1;
						break;
					
					case 3266052535:
					case 1095820292:
						*uParam2 = 1023;
						*uParam3 = 25;
						return 1;
						break;
					
					case 3640471129:
					case 2305750079:
						*uParam2 = 1023;
						*uParam3 = 26;
						return 1;
						break;
				}
				break;
			}
	}
	iVar0 = 4294967295;
	if (bParam4)
	{
		if (Global_4116CB)
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
	if (iVar0 == 4294967295)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1759;
					break;
				
				case 1:
					*uParam2 = 1760;
					break;
				
				case 2:
					*uParam2 = 1761;
					break;
				
				case 3:
					*uParam2 = 1762;
					break;
				
				case 4:
					*uParam2 = 1763;
					break;
				
				case 5:
					*uParam2 = 1764;
					break;
				
				case 6:
					*uParam2 = 1771;
					break;
				
				case 7:
					*uParam2 = 1772;
					break;
				
				case 8:
					*uParam2 = 1773;
					break;
				
				case 9:
					*uParam2 = 1774;
					break;
				
				case 10:
					*uParam2 = 1775;
					break;
				
				case 11:
					*uParam2 = 1776;
					break;
				
				case 12:
					*uParam2 = 1777;
					break;
				
				case 13:
					*uParam2 = 1785;
					break;
				
				case 14:
					*uParam2 = 1786;
					break;
				
				case 15:
					*uParam2 = 1887;
					break;
				
				case 16:
					*uParam2 = 1888;
					break;
				
				case 17:
					*uParam2 = 1919;
					break;
				
				case 18:
					*uParam2 = 1933;
					break;
				
				case 19:
					*uParam2 = 1934;
					break;
				
				case 20:
					*uParam2 = 1935;
					break;
				
				case 21:
					*uParam2 = 1936;
					break;
				
				case 22:
					*uParam2 = 1937;
					break;
				
				case 23:
					*uParam2 = 2041;
					break;
				
				case 24:
					*uParam2 = 2042;
					break;
				
				case 25:
					*uParam2 = 2068;
					break;
				
				case 26:
					*uParam2 = 2069;
					break;
				
				case 27:
					*uParam2 = 2070;
					break;
				
				case 28:
					*uParam2 = 2071;
					break;
				
				case 29:
					*uParam2 = 2072;
					break;
				
				case 30:
					*uParam2 = 2073;
					break;
				
				case 31:
					*uParam2 = 2074;
					break;
				
				case 32:
					*uParam2 = 2075;
					break;
				
				case 33:
					*uParam2 = 2076;
					break;
				
				case 34:
					*uParam2 = 2077;
					break;
				
				case 35:
					*uParam2 = 2324;
					break;
				
				case 36:
					*uParam2 = 2325;
					break;
				
				case 37:
					*uParam2 = 2389;
					break;
				
				case 38:
					*uParam2 = 2390;
					break;
				
				case 39:
					*uParam2 = 2391;
					break;
				
				case 40:
					*uParam2 = 2392;
					break;
				
				case 41:
					*uParam2 = 2451;
					break;
				
				case 42:
					*uParam2 = 2452;
					break;
				
				case 43:
					*uParam2 = 2453;
					break;
				
				case 44:
					*uParam2 = 2454;
					break;
				
				case 45:
					*uParam2 = 2455;
					break;
				
				case 46:
					*uParam2 = 2456;
					break;
				
				case 47:
					*uParam2 = 2457;
					break;
				
				case 48:
					*uParam2 = 2458;
					break;
				
				case 49:
					*uParam2 = 2459;
					break;
				
				case 50:
					*uParam2 = 2460;
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
					*uParam2 = 3196;
					break;
				
				case 63:
					*uParam2 = 3197;
					break;
				
				case 64:
					*uParam2 = 3198;
					break;
				
				case 65:
					*uParam2 = 3199;
					break;
				
				case 66:
					*uParam2 = 3200;
					break;
				
				case 67:
					*uParam2 = 3201;
					break;
				
				case 68:
					*uParam2 = 3669;
					break;
				
				case 69:
					*uParam2 = 3670;
					break;
				
				case 70:
					*uParam2 = 3671;
					break;
				
				case 71:
					*uParam2 = 3672;
					break;
				
				case 72:
					*uParam2 = 3673;
					break;
				
				case 73:
					*uParam2 = 3674;
					break;
				
				case 74:
					*uParam2 = 3675;
					break;
				
				case 75:
					*uParam2 = 3676;
					break;
				
				case 76:
					*uParam2 = 3677;
					break;
				
				case 77:
					*uParam2 = 3678;
					break;
				
				case 78:
					*uParam2 = 3792;
					break;
				
				case 79:
					*uParam2 = 3793;
					break;
				
				case 80:
					*uParam2 = 3794;
					break;
				
				case 81:
					*uParam2 = 3795;
					break;
				
				case 82:
					*uParam2 = 3796;
					break;
				
				case 83:
					*uParam2 = 3797;
					break;
				
				case 84:
					*uParam2 = 3798;
					break;
				
				case 85:
					*uParam2 = 3799;
					break;
				
				case 86:
					*uParam2 = 3902;
					break;
				
				case 87:
					*uParam2 = 3903;
					break;
				
				case 88:
					*uParam2 = 3904;
					break;
				
				case 89:
					*uParam2 = 5337;
					break;
				
				case 90:
					*uParam2 = 5338;
					break;
				
				case 91:
					*uParam2 = 5339;
					break;
				
				case 92:
					*uParam2 = 5340;
					break;
				
				case 93:
					*uParam2 = 5341;
					break;
				
				case 94:
					*uParam2 = 5342;
					break;
				
				case 95:
					*uParam2 = 5343;
					break;
				
				case 96:
					*uParam2 = 5344;
					break;
				
				case 97:
					*uParam2 = 5345;
					break;
				
				case 98:
					*uParam2 = 5346;
					break;
				
				case 99:
					*uParam2 = 5347;
					break;
				
				case 100:
					*uParam2 = 5348;
					break;
				
				case 101:
					*uParam2 = 5394;
					break;
				
				case 102:
					*uParam2 = 5395;
					break;
				
				case 103:
					*uParam2 = 5396;
					break;
				
				case 104:
					*uParam2 = 5397;
					break;
				
				case 105:
					*uParam2 = 5398;
					break;
				
				case 106:
					*uParam2 = 5399;
					break;
				
				case 107:
					*uParam2 = 5400;
					break;
				
				case 108:
					*uParam2 = 5401;
					break;
				
				case 109:
					*uParam2 = 5402;
					break;
				
				case 110:
					*uParam2 = 5403;
					break;
				
				case 111:
					*uParam2 = 5404;
					break;
				
				case 112:
					*uParam2 = 5405;
					break;
				
				case 113:
					*uParam2 = 5406;
					break;
				
				case 114:
					*uParam2 = 5407;
					break;
				
				case 115:
					*uParam2 = 5408;
					break;
				
				case 116:
					*uParam2 = 5409;
					break;
				
				case 117:
					*uParam2 = 5410;
					break;
				
				case 118:
					*uParam2 = 5411;
					break;
				
				case 119:
					*uParam2 = 5412;
					break;
				
				case 120:
					*uParam2 = 5413;
					break;
				
				case 121:
					*uParam2 = 5414;
					break;
				
				case 122:
					*uParam2 = 5415;
					break;
				
				case 123:
					*uParam2 = 5416;
					break;
				
				case 124:
					*uParam2 = 6122;
					break;
				
				case 125:
					*uParam2 = 6123;
					break;
				
				case 126:
					*uParam2 = 6124;
					break;
				
				case 127:
					*uParam2 = 6125;
					break;
				
				case 128:
					*uParam2 = 6126;
					break;
				
				case 129:
					*uParam2 = 6127;
					break;
				
				case 130:
					*uParam2 = 6128;
					break;
				
				case 131:
					*uParam2 = 6129;
					break;
				
				case 132:
					*uParam2 = 6130;
					break;
				
				case 133:
					*uParam2 = 6131;
					break;
				
				case 134:
					*uParam2 = 6132;
					break;
				
				case 135:
					*uParam2 = 6133;
					break;
				
				case 136:
					*uParam2 = 6134;
					break;
				
				case 137:
					*uParam2 = 6135;
					break;
				
				case 138:
					*uParam2 = 6136;
					break;
				
				case 139:
					*uParam2 = 6435;
					break;
				
				case 140:
					*uParam2 = 6436;
					break;
				
				case 141:
					*uParam2 = 6437;
					break;
				
				case 142:
					*uParam2 = 6438;
					break;
				
				case 143:
					*uParam2 = 6439;
					break;
				
				case 144:
					*uParam2 = 6440;
					break;
				
				case 145:
					*uParam2 = 6441;
					break;
				
				case 146:
					*uParam2 = 6442;
					break;
				
				case 147:
					*uParam2 = 6443;
					break;
				
				case 148:
					*uParam2 = 6444;
					break;
				
				case 149:
					*uParam2 = 6445;
					break;
				
				case 150:
					*uParam2 = 6446;
					break;
				
				case 151:
					*uParam2 = 6447;
					break;
				
				case 152:
					*uParam2 = 6448;
					break;
				
				case 153:
					*uParam2 = 6449;
					break;
				
				case 154:
					*uParam2 = 7266;
					break;
				
				case 155:
					*uParam2 = 7267;
					break;
				
				case 156:
					*uParam2 = 7268;
					break;
				
				case 157:
					*uParam2 = 7269;
					break;
				
				case 158:
					*uParam2 = 7270;
					break;
				
				case 159:
					*uParam2 = 7271;
					break;
				
				case 160:
					*uParam2 = 7272;
					break;
				
				case 161:
					*uParam2 = 7879;
					break;
				
				case 162:
					*uParam2 = 7880;
					break;
				
				case 163:
					*uParam2 = 7881;
					break;
				
				case 164:
					*uParam2 = 7882;
					break;
				
				case 165:
					*uParam2 = 7883;
					break;
				
				case 166:
					*uParam2 = 7884;
					break;
				
				case 167:
					*uParam2 = 7885;
					break;
				
				case 168:
					*uParam2 = 7886;
					break;
				
				case 169:
					*uParam2 = 7887;
					break;
				
				case 170:
					*uParam2 = 7888;
					break;
				
				case 171:
					*uParam2 = 7889;
					break;
				
				case 172:
					*uParam2 = 7890;
					break;
				
				case 173:
					*uParam2 = 7891;
					break;
				
				case 174:
					*uParam2 = 7892;
					break;
				
				case 175:
					*uParam2 = 7893;
					break;
				
				default:
					break;
			}
			break;
		
		case 2:
			switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f)))
			{
				case 0:
					*uParam2 = 1765;
					break;
				
				case 1:
					*uParam2 = 1766;
					break;
				
				case 2:
					*uParam2 = 1767;
					break;
				
				case 3:
					*uParam2 = 1768;
					break;
				
				case 4:
					*uParam2 = 1769;
					break;
				
				case 5:
					*uParam2 = 1770;
					break;
				
				case 6:
					*uParam2 = 1778;
					break;
				
				case 7:
					*uParam2 = 1779;
					break;
				
				case 8:
					*uParam2 = 1780;
					break;
				
				case 9:
					*uParam2 = 1781;
					break;
				
				case 10:
					*uParam2 = 1782;
					break;
				
				case 11:
					*uParam2 = 1783;
					break;
				
				case 12:
					*uParam2 = 1784;
					break;
				
				case 13:
					*uParam2 = 1787;
					break;
				
				case 14:
					*uParam2 = 1788;
					break;
				
				case 15:
					*uParam2 = 1889;
					break;
				
				case 16:
					*uParam2 = 1890;
					break;
				
				case 17:
					*uParam2 = 1920;
					break;
				
				case 18:
					*uParam2 = 1938;
					break;
				
				case 19:
					*uParam2 = 1939;
					break;
				
				case 20:
					*uParam2 = 1940;
					break;
				
				case 21:
					*uParam2 = 1941;
					break;
				
				case 22:
					*uParam2 = 1942;
					break;
				
				case 23:
					*uParam2 = 2043;
					break;
				
				case 24:
					*uParam2 = 2044;
					break;
				
				case 25:
					*uParam2 = 2078;
					break;
				
				case 26:
					*uParam2 = 2079;
					break;
				
				case 27:
					*uParam2 = 2080;
					break;
				
				case 28:
					*uParam2 = 2081;
					break;
				
				case 29:
					*uParam2 = 2082;
					break;
				
				case 30:
					*uParam2 = 2083;
					break;
				
				case 31:
					*uParam2 = 2084;
					break;
				
				case 32:
					*uParam2 = 2085;
					break;
				
				case 33:
					*uParam2 = 2086;
					break;
				
				case 34:
					*uParam2 = 2087;
					break;
				
				case 35:
					*uParam2 = 2326;
					break;
				
				case 36:
					*uParam2 = 2327;
					break;
				
				case 37:
					*uParam2 = 2393;
					break;
				
				case 38:
					*uParam2 = 2394;
					break;
				
				case 39:
					*uParam2 = 2395;
					break;
				
				case 40:
					*uParam2 = 2396;
					break;
				
				case 41:
					*uParam2 = 2461;
					break;
				
				case 42:
					*uParam2 = 2462;
					break;
				
				case 43:
					*uParam2 = 2463;
					break;
				
				case 44:
					*uParam2 = 2464;
					break;
				
				case 45:
					*uParam2 = 2465;
					break;
				
				case 46:
					*uParam2 = 2466;
					break;
				
				case 47:
					*uParam2 = 2467;
					break;
				
				case 48:
					*uParam2 = 2468;
					break;
				
				case 49:
					*uParam2 = 2469;
					break;
				
				case 50:
					*uParam2 = 2470;
					break;
				
				case 51:
					*uParam2 = 2600;
					break;
				
				case 52:
					*uParam2 = 2601;
					break;
				
				case 53:
					*uParam2 = 2602;
					break;
				
				case 54:
					*uParam2 = 2603;
					break;
				
				case 55:
					*uParam2 = 2604;
					break;
				
				case 56:
					*uParam2 = 2605;
					break;
				
				case 57:
					*uParam2 = 2606;
					break;
				
				case 58:
					*uParam2 = 2607;
					break;
				
				case 59:
					*uParam2 = 2608;
					break;
				
				case 60:
					*uParam2 = 2609;
					break;
				
				case 61:
					*uParam2 = 2610;
					break;
				
				case 62:
					*uParam2 = 3202;
					break;
				
				case 63:
					*uParam2 = 3203;
					break;
				
				case 64:
					*uParam2 = 3204;
					break;
				
				case 65:
					*uParam2 = 3205;
					break;
				
				case 66:
					*uParam2 = 3206;
					break;
				
				case 67:
					*uParam2 = 3207;
					break;
				
				case 68:
					*uParam2 = 3679;
					break;
				
				case 69:
					*uParam2 = 3680;
					break;
				
				case 70:
					*uParam2 = 3681;
					break;
				
				case 71:
					*uParam2 = 3682;
					break;
				
				case 72:
					*uParam2 = 3683;
					break;
				
				case 73:
					*uParam2 = 3684;
					break;
				
				case 74:
					*uParam2 = 3685;
					break;
				
				case 75:
					*uParam2 = 3686;
					break;
				
				case 76:
					*uParam2 = 3687;
					break;
				
				case 77:
					*uParam2 = 3688;
					break;
				
				case 78:
					*uParam2 = 3800;
					break;
				
				case 79:
					*uParam2 = 3801;
					break;
				
				case 80:
					*uParam2 = 3802;
					break;
				
				case 81:
					*uParam2 = 3803;
					break;
				
				case 82:
					*uParam2 = 3804;
					break;
				
				case 83:
					*uParam2 = 3805;
					break;
				
				case 84:
					*uParam2 = 3806;
					break;
				
				case 85:
					*uParam2 = 3807;
					break;
				
				case 86:
					*uParam2 = 3905;
					break;
				
				case 87:
					*uParam2 = 3906;
					break;
				
				case 88:
					*uParam2 = 3907;
					break;
				
				case 89:
					*uParam2 = 5349;
					break;
				
				case 90:
					*uParam2 = 5350;
					break;
				
				case 91:
					*uParam2 = 5351;
					break;
				
				case 92:
					*uParam2 = 5352;
					break;
				
				case 93:
					*uParam2 = 5353;
					break;
				
				case 94:
					*uParam2 = 5354;
					break;
				
				case 95:
					*uParam2 = 5355;
					break;
				
				case 96:
					*uParam2 = 5356;
					break;
				
				case 97:
					*uParam2 = 5357;
					break;
				
				case 98:
					*uParam2 = 5358;
					break;
				
				case 99:
					*uParam2 = 5359;
					break;
				
				case 100:
					*uParam2 = 5360;
					break;
				
				case 101:
					*uParam2 = 5417;
					break;
				
				case 102:
					*uParam2 = 5418;
					break;
				
				case 103:
					*uParam2 = 5419;
					break;
				
				case 104:
					*uParam2 = 5420;
					break;
				
				case 105:
					*uParam2 = 5421;
					break;
				
				case 106:
					*uParam2 = 5422;
					break;
				
				case 107:
					*uParam2 = 5423;
					break;
				
				case 108:
					*uParam2 = 5424;
					break;
				
				case 109:
					*uParam2 = 5425;
					break;
				
				case 110:
					*uParam2 = 5426;
					break;
				
				case 111:
					*uParam2 = 5427;
					break;
				
				case 112:
					*uParam2 = 5428;
					break;
				
				case 113:
					*uParam2 = 5429;
					break;
				
				case 114:
					*uParam2 = 5430;
					break;
				
				case 115:
					*uParam2 = 5431;
					break;
				
				case 116:
					*uParam2 = 5432;
					break;
				
				case 117:
					*uParam2 = 5433;
					break;
				
				case 118:
					*uParam2 = 5434;
					break;
				
				case 119:
					*uParam2 = 5435;
					break;
				
				case 120:
					*uParam2 = 5436;
					break;
				
				case 121:
					*uParam2 = 5437;
					break;
				
				case 122:
					*uParam2 = 5438;
					break;
				
				case 123:
					*uParam2 = 5439;
					break;
				
				case 124:
					*uParam2 = 6137;
					break;
				
				case 125:
					*uParam2 = 6138;
					break;
				
				case 126:
					*uParam2 = 6139;
					break;
				
				case 127:
					*uParam2 = 6140;
					break;
				
				case 128:
					*uParam2 = 6141;
					break;
				
				case 129:
					*uParam2 = 6142;
					break;
				
				case 130:
					*uParam2 = 6143;
					break;
				
				case 131:
					*uParam2 = 6144;
					break;
				
				case 132:
					*uParam2 = 6145;
					break;
				
				case 133:
					*uParam2 = 6146;
					break;
				
				case 134:
					*uParam2 = 6147;
					break;
				
				case 135:
					*uParam2 = 6148;
					break;
				
				case 136:
					*uParam2 = 6149;
					break;
				
				case 137:
					*uParam2 = 6150;
					break;
				
				case 138:
					*uParam2 = 6151;
					break;
				
				case 139:
					*uParam2 = 6450;
					break;
				
				case 140:
					*uParam2 = 6451;
					break;
				
				case 141:
					*uParam2 = 6452;
					break;
				
				case 142:
					*uParam2 = 6453;
					break;
				
				case 143:
					*uParam2 = 6454;
					break;
				
				case 144:
					*uParam2 = 6455;
					break;
				
				case 145:
					*uParam2 = 6456;
					break;
				
				case 146:
					*uParam2 = 6457;
					break;
				
				case 147:
					*uParam2 = 6458;
					break;
				
				case 148:
					*uParam2 = 6459;
					break;
				
				case 149:
					*uParam2 = 6460;
					break;
				
				case 150:
					*uParam2 = 6461;
					break;
				
				case 151:
					*uParam2 = 6462;
					break;
				
				case 152:
					*uParam2 = 6463;
					break;
				
				case 153:
					*uParam2 = 6464;
					break;
				
				case 154:
					*uParam2 = 7273;
					break;
				
				case 155:
					*uParam2 = 7274;
					break;
				
				case 156:
					*uParam2 = 7275;
					break;
				
				case 157:
					*uParam2 = 7276;
					break;
				
				case 158:
					*uParam2 = 7277;
					break;
				
				case 159:
					*uParam2 = 7278;
					break;
				
				case 160:
					*uParam2 = 7279;
					break;
				
				case 161:
					*uParam2 = 7894;
					break;
				
				case 162:
					*uParam2 = 7895;
					break;
				
				case 163:
					*uParam2 = 7896;
					break;
				
				case 164:
					*uParam2 = 7897;
					break;
				
				case 165:
					*uParam2 = 7898;
					break;
				
				case 166:
					*uParam2 = 7899;
					break;
				
				case 167:
					*uParam2 = 7900;
					break;
				
				case 168:
					*uParam2 = 7901;
					break;
				
				case 169:
					*uParam2 = 7902;
					break;
				
				case 170:
					*uParam2 = 7903;
					break;
				
				case 171:
					*uParam2 = 7904;
					break;
				
				case 172:
					*uParam2 = 7905;
					break;
				
				case 173:
					*uParam2 = 7906;
					break;
				
				case 174:
					*uParam2 = 7907;
					break;
				
				case 175:
					*uParam2 = 7908;
					break;
				
				default:
					break;
			}
			break;
	}
	*uParam3 = (iVar0 % 32);
	return *uParam2 != 9954;
}

int func_120(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0xD578
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/][iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/][iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_4[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_8[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_10[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_10[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_14[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_14[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_18[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_18[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_1C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_1C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_20[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_24[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_28[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_2C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_2C[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_30[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_30[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_34[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_34[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_38[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_38[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_3C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_3C[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_40[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_44[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_44[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_48[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_4C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_4C[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_50[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_50[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_54[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_54[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_58[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_58[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_5C[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_5C[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_60[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_64[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_68[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_68[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_6C[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_6C[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_70[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_70[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_74[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_74[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_78[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_78[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_7C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_7C[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_80[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_84[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
		{
			MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		if (iParam6 == 1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_88[iParam3]), iParam4);
		}
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_88[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_8C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_8C[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_90[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_90[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_94[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_94[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_98[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_98[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_9C[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_9C[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
			{
				MISC::SET_BIT(&(Global_19E56.f_933[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			if (iParam6 == 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_933[iParam1 /*164*/].f_A0[iParam3]), iParam4);
			}
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_933[iParam1 /*164*/].f_A0[iParam3], iParam4);
		}
	}
	return 0;
}

int func_121(int iParam0)//Position - 0xE496
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam0 == 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
		{
			return 0;
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 2))
		{
			return 0;
		}
	}
	return 1;
}

struct<14> func_122(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xE4E7
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
	return Global_11569[0 /*14*/];
}

void func_123(int iParam0, int iParam1)//Position - 0xE539
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

void func_124(int iParam0)//Position - 0xE629
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 14;
	Global_11569[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
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
			func_132(iVar7, iParam0, 155, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_125(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0xF8A0
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
	uParam0->f_D = iParam8;
	uParam0->f_C = func_131(iParam8);
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
		if (func_130(14))
		{
			return;
		}
		if (iParam1 == 1)
		{
			if (FILE::_0x341DE7ED1D2A1BFD(Global_280004, 1827025211, 0))
			{
				MISC::SET_BIT(&(uParam0->f_6), 7);
			}
		}
		if (iParam1 == 12)
		{
			if (!func_129(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_129(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_129(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_129(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_129(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_129(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_120(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_120(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_120(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_130(14))
			{
				return;
			}
			iVar0 = func_118(func_128(iParam1, uParam0->f_2), Global_11566, 0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_118(func_127(iParam1, uParam0->f_2), Global_11566, 0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_126(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_118(iVar1, Global_11566, 0);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, uParam0->f_1))
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
		if (iParam4 == 4294967295)
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
	}
}

bool func_126(int iParam0, int iParam1, var uParam2)//Position - 0xFC31
{
	*uParam2 = 978;
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 979;
					break;
				
				case 3:
					*uParam2 = 1429;
					break;
				
				case 4:
					*uParam2 = 995;
					break;
				
				case 6:
					*uParam2 = 1003;
					break;
				
				case 8:
					*uParam2 = 1430;
					break;
				
				case 9:
					*uParam2 = 1438;
					break;
				
				case 10:
					*uParam2 = 1440;
					break;
				
				case 1:
					*uParam2 = 1011;
					break;
				
				case 7:
					*uParam2 = 1441;
					break;
				
				case 11:
					*uParam2 = 987;
					break;
				
				case 14:
					*uParam2 = 1019;
					break;
				
				case 12:
					*uParam2 = 1030;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
				
				case 4:
					*uParam2 = 996;
					break;
				
				case 6:
					*uParam2 = 1004;
					break;
				
				case 8:
					*uParam2 = 1431;
					break;
				
				case 9:
					*uParam2 = 1439;
					break;
				
				case 7:
					*uParam2 = 1442;
					break;
				
				case 11:
					*uParam2 = 988;
					break;
				
				case 14:
					*uParam2 = 1020;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
				
				case 4:
					*uParam2 = 997;
					break;
				
				case 6:
					*uParam2 = 1005;
					break;
				
				case 8:
					*uParam2 = 1432;
					break;
				
				case 7:
					*uParam2 = 1443;
					break;
				
				case 11:
					*uParam2 = 989;
					break;
				
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
		
		case 3:
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
		
		case 4:
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
		
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
				
				case 6:
					*uParam2 = 1008;
					break;
				
				case 8:
					*uParam2 = 1435;
					break;
				
				case 11:
					*uParam2 = 992;
					break;
				
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
				
				case 6:
					*uParam2 = 1009;
					break;
				
				case 8:
					*uParam2 = 1436;
					break;
				
				case 11:
					*uParam2 = 993;
					break;
				
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
				
				case 6:
					*uParam2 = 1010;
					break;
				
				case 8:
					*uParam2 = 1437;
					break;
				
				case 11:
					*uParam2 = 994;
					break;
				
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	}
	return *uParam2 != 978;
}

int func_127(int iParam0, int iParam1)//Position - 0x1003A
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 927;
					break;
				
				case 3:
					return 1414;
					break;
				
				case 4:
					return 943;
					break;
				
				case 6:
					return 951;
					break;
				
				case 8:
					return 1415;
					break;
				
				case 9:
					return 1423;
					break;
				
				case 10:
					return 1425;
					break;
				
				case 1:
					return 959;
					break;
				
				case 7:
					return 1426;
					break;
				
				case 11:
					return 935;
					break;
				
				case 14:
					return 967;
					break;
				
				case 12:
					return 978;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 928;
					break;
				
				case 4:
					return 944;
					break;
				
				case 6:
					return 952;
					break;
				
				case 8:
					return 1416;
					break;
				
				case 9:
					return 1424;
					break;
				
				case 7:
					return 1427;
					break;
				
				case 11:
					return 936;
					break;
				
				case 14:
					return 968;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 929;
					break;
				
				case 4:
					return 945;
					break;
				
				case 6:
					return 953;
					break;
				
				case 8:
					return 1417;
					break;
				
				case 7:
					return 1428;
					break;
				
				case 11:
					return 937;
					break;
				
				case 14:
					return 969;
					break;
			}
			break;
		
		case 3:
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
		
		case 4:
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
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 948;
					break;
				
				case 6:
					return 956;
					break;
				
				case 8:
					return 1420;
					break;
				
				case 11:
					return 940;
					break;
				
				case 14:
					return 972;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 949;
					break;
				
				case 6:
					return 957;
					break;
				
				case 8:
					return 1421;
					break;
				
				case 11:
					return 941;
					break;
				
				case 14:
					return 973;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 950;
					break;
				
				case 6:
					return 958;
					break;
				
				case 8:
					return 1422;
					break;
				
				case 11:
					return 942;
					break;
				
				case 14:
					return 974;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 975;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 976;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 977;
					break;
			}
			break;
	}
	return 935;
}

int func_128(int iParam0, int iParam1)//Position - 0x10435
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 875;
					break;
				
				case 3:
					return 1399;
					break;
				
				case 4:
					return 891;
					break;
				
				case 6:
					return 899;
					break;
				
				case 8:
					return 1400;
					break;
				
				case 9:
					return 1408;
					break;
				
				case 10:
					return 1410;
					break;
				
				case 1:
					return 907;
					break;
				
				case 7:
					return 1411;
					break;
				
				case 11:
					return 883;
					break;
				
				case 14:
					return 915;
					break;
				
				case 12:
					return 926;
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 2:
					return 876;
					break;
				
				case 4:
					return 892;
					break;
				
				case 6:
					return 900;
					break;
				
				case 8:
					return 1401;
					break;
				
				case 9:
					return 1409;
					break;
				
				case 7:
					return 1412;
					break;
				
				case 11:
					return 884;
					break;
				
				case 14:
					return 916;
					break;
			}
			break;
		
		case 2:
			switch (iParam0)
			{
				case 2:
					return 877;
					break;
				
				case 4:
					return 893;
					break;
				
				case 6:
					return 901;
					break;
				
				case 8:
					return 1402;
					break;
				
				case 7:
					return 1413;
					break;
				
				case 11:
					return 885;
					break;
				
				case 14:
					return 917;
					break;
			}
			break;
		
		case 3:
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
		
		case 4:
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
		
		case 5:
			switch (iParam0)
			{
				case 4:
					return 896;
					break;
				
				case 6:
					return 904;
					break;
				
				case 8:
					return 1405;
					break;
				
				case 11:
					return 888;
					break;
				
				case 14:
					return 920;
					break;
			}
			break;
		
		case 6:
			switch (iParam0)
			{
				case 4:
					return 897;
					break;
				
				case 6:
					return 905;
					break;
				
				case 8:
					return 1406;
					break;
				
				case 11:
					return 889;
					break;
				
				case 14:
					return 921;
					break;
			}
			break;
		
		case 7:
			switch (iParam0)
			{
				case 4:
					return 898;
					break;
				
				case 6:
					return 906;
					break;
				
				case 8:
					return 1407;
					break;
				
				case 11:
					return 890;
					break;
				
				case 14:
					return 922;
					break;
			}
			break;
		
		case 8:
			switch (iParam0)
			{
				case 14:
					return 923;
					break;
			}
			break;
		
		case 9:
			switch (iParam0)
			{
				case 14:
					return 924;
					break;
			}
			break;
		
		case 10:
			switch (iParam0)
			{
				case 14:
					return 925;
					break;
			}
			break;
	}
	return 883;
}

int func_129(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x10830
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = Global_11566;
	if (iParam4 != 4294967295)
	{
		iVar0 = iParam4;
	}
	if (func_119(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_118(iVar2, iVar0, 0);
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, iVar1);
	}
	return 0;
}

bool func_130(int iParam0)//Position - 0x10872
{
	return Global_8D15 == iParam0;
}

int func_131(int iParam0)//Position - 0x10880
{
	switch (iParam0)
	{
		case 4294967295:
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

void func_132(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x10954
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
	iVar1 = Global_11569[0 /*14*/].f_5;
	if (iParam0 == 12)
	{
		iVar4 = 0;
		iVar5 = FILE::_0xF3FBE2D50A6A8C28(iVar1, 0);
		iVar3 = 0;
		while (iVar3 < iVar5)
		{
			FILE::GET_SHOP_PED_QUERY_OUTFIT(iVar3, &Var2);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var2))
			{
				if (iVar4 == (iParam1 - iParam2))
				{
					Global_280004 = Var2.f_1;
					Global_280005 = Var2;
					func_125(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, 4294967295, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_125(&(Global_11569[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, 4294967295, 2, 1);
	}
	else if (iParam0 == 14)
	{
		FILE::INIT_SHOP_PED_PROP(&Var6);
		iVar9 = 0;
		iVar10 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, 4294967295, 1, 4294967295, 4294967295);
		iVar8 = 0;
		while (iVar8 < iVar10)
		{
			FILE::GET_SHOP_PED_QUERY_PROP(iVar8, &Var6);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var6))
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
						iVar7 = 4294967295;
					}
					Global_280004 = Var6.f_1;
					Global_280005 = Var6;
					func_125(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILE::_0x341DE7ED1D2A1BFD(Var6.f_1, 2244334710, 0), iVar7, 2, Var6.f_1 != 0);
					return;
				}
				iVar9++;
			}
			iVar8++;
		}
	}
	else
	{
		FILE::INIT_SHOP_PED_COMPONENT(&Var11);
		if (iParam3 != 4294967295 && Global_11612)
		{
			FILE::GET_SHOP_PED_COMPONENT(iParam3, &Var11);
			Global_280004 = Var11.f_1;
			Global_280005 = Var11;
			func_125(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILE::_0x341DE7ED1D2A1BFD(Var11.f_1, 2244334710, 0), 4294967295, 2, Var11.f_1 != 0);
			return;
		}
		iVar13 = 0;
		iVar14 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, 4294967295, 0, 4294967295, func_82(iParam0));
		iVar12 = 0;
		while (iVar12 < iVar14)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar12, &Var11);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var11))
			{
				if (iVar13 == (iParam1 - iParam2))
				{
					Global_280004 = Var11.f_1;
					Global_280005 = Var11;
					func_125(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILE::_0x341DE7ED1D2A1BFD(Var11.f_1, 2244334710, 0), 4294967295, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

void func_133(int iParam0)//Position - 0x10C2D
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 13;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 9, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_134(int iParam0)//Position - 0x10D84
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 12;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 48, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_135(int iParam0)//Position - 0x11292
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 11;
	Global_11569[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 1, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_136(int iParam0)//Position - 0x11307
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 7;
	Global_11569[0 /*14*/].f_5 = 2;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 1, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_137(int iParam0)//Position - 0x1137B
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 1;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 6, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_138(int iParam0)//Position - 0x11462
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 10;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 33, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_139(int iParam0)//Position - 0x117C5
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 9;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 17, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_140(int iParam0)//Position - 0x119D6
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 8;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 18, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_141(int iParam0)//Position - 0x11C06
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 5;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 7, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_142(int iParam0)//Position - 0x11D16
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 6;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 84, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_143(int iParam0)//Position - 0x126B5
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 4;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 104, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_144(int iParam0)//Position - 0x13228
{
	if (iParam0 < 136)
	{
		func_146(iParam0);
	}
	else
	{
		func_145(iParam0);
	}
	if (Global_11569[0 /*14*/].f_2 == 4294967295)
	{
		func_132(3, iParam0, 242, 4294967295);
	}
}

void func_145(int iParam0)//Position - 0x1325D
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 3;
	Global_11569[0 /*14*/].f_5 = 2;
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
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_146(int iParam0)//Position - 0x13E61
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 3;
	Global_11569[0 /*14*/].f_5 = 2;
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
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_147(int iParam0)//Position - 0x14EE7
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 2;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 9, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_148(int iParam0)//Position - 0x15014
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 0;
	Global_11569[0 /*14*/].f_5 = 2;
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
			func_132(iVar7, iParam0, 7, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_149(int iParam0, int iParam1)//Position - 0x15112
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

void func_150(int iParam0)//Position - 0x15202
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 14;
	Global_11569[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
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
			func_132(iVar7, iParam0, 175, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_151(int iParam0)//Position - 0x166F3
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 13;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 9, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_152(int iParam0)//Position - 0x16844
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 12;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 47, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_153(int iParam0)//Position - 0x16D4F
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 11;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 63, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_154(int iParam0)//Position - 0x173BD
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 7;
	Global_11569[0 /*14*/].f_5 = 1;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 1, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_155(int iParam0)//Position - 0x17431
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 1;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 5, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_156(int iParam0)//Position - 0x17501
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 10;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 53, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_157(int iParam0)//Position - 0x17A31
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 9;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 12, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_158(int iParam0)//Position - 0x17BC8
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 8;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 77, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_159(int iParam0)//Position - 0x183C8
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 5;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 7, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_160(int iParam0)//Position - 0x184D8
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 6;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 134, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_161(int iParam0)//Position - 0x19403
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 4;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 117, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_162(int iParam0)//Position - 0x1A0C0
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
	if (Global_11569[0 /*14*/].f_2 == 4294967295)
	{
		func_132(3, iParam0, 318, 4294967295);
	}
}

void func_163(int iParam0)//Position - 0x1A106
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 3;
	Global_11569[0 /*14*/].f_5 = 1;
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
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_164(int iParam0)//Position - 0x1ABAB
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 3;
	Global_11569[0 /*14*/].f_5 = 1;
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
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_165(int iParam0)//Position - 0x1B99A
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 3;
	Global_11569[0 /*14*/].f_5 = 1;
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
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_166(int iParam0)//Position - 0x1C5E5
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 2;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 21, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_167(int iParam0)//Position - 0x1C85E
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 0;
	Global_11569[0 /*14*/].f_5 = 1;
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
			func_132(iVar7, iParam0, 10, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_168(int iParam0, int iParam1)//Position - 0x1C9A4
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

void func_169(int iParam0)//Position - 0x1CA94
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 14;
	Global_11569[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 0;
			break;
		
		case 1:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 1;
			break;
		
		case 2:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 2;
			break;
		
		case 3:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 3;
			break;
		
		case 4:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 4;
			break;
		
		case 5:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 5;
			break;
		
		case 6:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 6;
			break;
		
		case 7:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
			iVar4 = 0;
			iVar1 = 0;
			iVar5 = 7;
			break;
		
		case 8:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 4294967295;
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
			func_132(iVar7, iParam0, 113, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_170(int iParam0)//Position - 0x1D81E
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 13;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 10, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_171(int iParam0)//Position - 0x1D998
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 12;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 53, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_172(int iParam0)//Position - 0x1DF0F
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 11;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 45, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_173(int iParam0)//Position - 0x1E439
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 7;
	Global_11569[0 /*14*/].f_5 = 0;
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var2, "NO_LABEL", 16);
			iVar3 = 0;
			iVar4 = 0;
			break;
		
		default:
			func_132(iVar7, iParam0, 1, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_174(int iParam0)//Position - 0x1E4AD
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 1;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 5, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_175(int iParam0)//Position - 0x1E57D
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 10;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 48, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_176(int iParam0)//Position - 0x1EA55
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 9;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 20, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_177(int iParam0)//Position - 0x1ECBE
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 8;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 24, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_178(int iParam0)//Position - 0x1EF94
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 5;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 14, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_179(int iParam0)//Position - 0x1F15D
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 6;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 99, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_180(int iParam0)//Position - 0x1FCB1
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 4;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 113, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_181(int iParam0)//Position - 0x208FD
{
	if (iParam0 < 60)
	{
		func_183(iParam0);
	}
	else
	{
		func_182(iParam0);
	}
	if (Global_11569[0 /*14*/].f_2 == 4294967295)
	{
		func_132(3, iParam0, 181, 4294967295);
	}
}

void func_182(int iParam0)//Position - 0x20932
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 3;
	Global_11569[0 /*14*/].f_5 = 0;
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
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_183(int iParam0)//Position - 0x216D2
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 3;
	Global_11569[0 /*14*/].f_5 = 0;
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
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_184(int iParam0)//Position - 0x21D5E
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 2;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 6, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_185(int iParam0)//Position - 0x21E45
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
	iVar5 = 4294967295;
	iVar6 = 2;
	iVar7 = 0;
	Global_11569[0 /*14*/].f_5 = 0;
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
			func_132(iVar7, iParam0, 7, 4294967295);
			return;
			break;
	}
	func_125(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_186()//Position - 0x21F43
{
	Global_11569[0 /*14*/].f_1 = 4294967295;
	Global_11569[0 /*14*/].f_2 = 4294967295;
	Global_11569[0 /*14*/].f_5 = 4294967295;
	Global_11569[0 /*14*/].f_3 = 4294967295;
	Global_11569[0 /*14*/].f_4 = 4294967295;
	Global_11569[0 /*14*/].f_7 = 0;
	Global_11569[0 /*14*/].f_6 = 0;
	Global_11569[0 /*14*/].f_D = 4294967295;
	Global_11569[0 /*14*/].f_C = 0;
	Global_11569[0 /*14*/] = 0;
	StringCopy(&(Global_11569[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_187(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21FBC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_82(iParam3);
	iVar1 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar0);
	iVar3 = 0;
	while (iVar3 <= (iVar1 - 1))
	{
		iVar5 = PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar0, iVar3);
		if (iVar3 != iParam1)
		{
			iVar2 = (iVar2 + iVar5);
		}
		else
		{
			iVar4 = 0;
			while (iVar4 <= (iVar5 - 1))
			{
				if (iVar3 == iParam1 && iVar4 == iParam2)
				{
					return iVar2;
				}
				else
				{
					iVar2++;
				}
				iVar4++;
			}
		}
		iVar3++;
	}
	return 4294967197;
}

int func_188(int iParam0, int iParam1, int iParam2)//Position - 0x22040
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (iParam1 == 12)
		{
			iVar0 = 0;
			while (iVar0 <= 53)
			{
				if (func_74(iParam0, iParam1, iVar0))
				{
					return iVar0;
				}
				iVar0++;
			}
		}
		else if (iParam1 == 13)
		{
			iVar1 = 0;
			while (iVar1 <= 19)
			{
				if (func_74(iParam0, iParam1, iVar1))
				{
					return iVar1;
				}
				iVar1++;
			}
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (iParam2 == 4294967295)
			{
			}
			else
			{
				return func_111(iParam0, iParam2);
			}
		}
		else
		{
			return func_112(iParam0, iParam1);
		}
	}
	return 4294967197;
}

int func_189()//Position - 0x220E1
{
	if (func_27(func_190()) == 2)
	{
		return AUDIO::_0x0626A247D2405330();
	}
	return iLocal_2358[2];
}

int func_190()//Position - 0x22105
{
	func_191();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_191()//Position - 0x2211E
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_23(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_22(AUDIO::_0x0626A247D2405330());
			if (func_21(iVar0) && (!func_130(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_21(Global_19E56.f_933.f_21B.f_10CD))
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

void func_192(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x2221B
{
	if (iParam0 != 198)
	{
		if (Global_11625)
		{
			Global_252F9E.f_4B.f_E3[iParam0] = iParam1;
		}
		else
		{
			Global_19E56.f_1C41.f_E3[iParam0] = iParam1;
		}
		Global_813C[iParam0] = iParam2;
		Global_8203[iParam0] = 1;
		func_195(iParam0, bParam3, iParam4, 0);
		func_193(iParam0, iParam1);
	}
}

void func_193(int iParam0, int iParam1)//Position - 0x22276
{
	switch (iParam0)
	{
		case 12:
			if (iParam1 == 0)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", 1, 0);
			}
			break;
		
		case 71:
			if (iParam1 != 1)
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 0, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", 1, 0);
			}
			break;
		
		case 65:
			if (iParam1 == 1)
			{
				func_194(0, 0);
			}
			else
			{
				func_194(0, 1);
			}
			break;
		
		case 6:
			if (iParam1 == 1)
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 1, 0);
			}
			else
			{
				AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", 0, 0);
			}
			break;
		
		case 174:
			if (iParam1 == 2)
			{
				AUDIO::_0xB4BBFD9CD8B3922B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
			}
			break;
		
		case 37:
			if (iParam1 == 1)
			{
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", 0);
				AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", 0);
			}
			break;
	}
}

void func_194(int iParam0, bool bParam1)//Position - 0x2235F
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_19904, iParam0);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&Global_19904, iParam0);
	}
	Global_19903 = 1;
}

bool func_195(int iParam0, bool bParam1, int iParam2, bool bParam3)//Position - 0x22388
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	var uVar4;
	bool bVar5;
	int iVar6;
	
	Global_191A6A = 1;
	bVar0 = false;
	Var3.f_4 = 3;
	Var3.f_8 = 3;
	Var3.f_40 = 3;
	Var3.f_4B = 3;
	Var3.f_5B = 3;
	func_199(&Var3, iParam0);
	if (func_196())
	{
		iVar1 = Global_19E56.f_1C41.f_E3[iParam0];
	}
	else
	{
		iVar1 = Global_252F9E.f_4B.f_E3[iParam0];
	}
	iVar2 = Global_82CA[iParam0];
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !bParam3)
	{
		Global_191A6A = 1;
	}
	else
	{
		bVar5 = true;
		if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("standard_global_reg"))
		{
			if (iParam2 == 0)
			{
				if (Global_813C[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), Var3, true) < 200f)
				{
					bVar5 = false;
					Global_191A6A = 1;
				}
				if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) || BRAIN::IS_PED_BEING_ARRESTED(AUDIO::_0x0626A247D2405330()))
				{
					if (!CAM::IS_SCREEN_FADED_OUT())
					{
						bVar5 = false;
						Global_191A6A = 1;
					}
				}
			}
		}
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() != 5))
		{
			bVar5 = false;
			Global_191A6A = 1;
		}
		if (bVar5)
		{
			switch (Var3.f_3)
			{
				case 0:
					if (iVar1 == 2)
					{
					}
					else
					{
						if (Var3.f_4[iVar1] != 0)
						{
							ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], false);
						}
						if (Var3.f_4[iVar2] != 0)
						{
							ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], 1);
						}
						Global_8776[iParam0] = 1;
					}
					bVar0 = true;
					break;
				
				case 1:
					if (iVar1 == 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
								Global_191A6A = 1;
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
								Global_191A6A = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								PED::IS_PED_VAULTING(&(Var3.f_8[0 /*8*/]));
								Global_191A6A = 1;
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_22)) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_22)))
							{
								PED::IS_PED_VAULTING(&(Var3.f_22));
								Global_191A6A = 1;
							}
						}
					}
					else if (iVar1 == 1)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_22)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_22)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_22));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								PED::IS_PED_VAULTING(&(Var3.f_8[1 /*8*/]));
							}
						}
					}
					else if (iVar1 == 2)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_22)) != MISC::GET_HASH_KEY(""))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_22)))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_22));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
						{
							if (STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/])))
							{
								STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
							}
						}
						if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
						{
							if (!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/])))
							{
								PED::IS_PED_VAULTING(&(Var3.f_8[2 /*8*/]));
							}
						}
					}
					Global_86AF[iParam0] = 1;
					Global_8776[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 2:
					iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_2A));
					if (iVar6 != 0)
					{
						if (MISC::GET_HASH_KEY(&(Var3.f_32)) != MISC::GET_HASH_KEY(""))
						{
							if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_32)))
							{
								INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_32));
							}
						}
						if (iVar1 == 0)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
						}
						else if (iVar1 == 1)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if ((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/])))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
						}
						else if (iVar1 == 2)
						{
							if (MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[0 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[0 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) != MISC::GET_HASH_KEY(""))
							{
								if (INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[1 /*8*/])))
								{
									INTERIOR::_DISABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[1 /*8*/]));
								}
							}
							if (MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) != MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))
							{
								if (!INTERIOR::_IS_INTERIOR_PROP_ENABLED(iVar6, &(Var3.f_8[2 /*8*/])))
								{
									INTERIOR::_ENABLE_INTERIOR_PROP(iVar6, &(Var3.f_8[2 /*8*/]));
								}
							}
						}
						if (bParam1)
						{
							INTERIOR::REFRESH_INTERIOR(iVar6);
						}
					}
					Global_8776[iParam0] = 1;
					Global_86AF[iParam0] = 1;
					bVar0 = true;
					break;
				
				case 3:
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), true) < 250f)
					{
						uVar4 = OBJECT::_GET_DES_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
						if (OBJECT::_DOES_DES_OBJECT_EXIST(uVar4))
						{
							if (iVar1 == 0)
							{
								OBJECT::_SET_DES_OBJECT_STATE(uVar4, 3);
								Global_8776[iParam0] = 1;
								bVar0 = true;
							}
							else if (iVar1 == 1)
							{
								if ((OBJECT::_GET_DES_OBJECT_STATE(uVar4) != 6 && OBJECT::_GET_DES_OBJECT_STATE(uVar4) != 7) && OBJECT::_GET_DES_OBJECT_STATE(uVar4) != 8)
								{
									OBJECT::_SET_DES_OBJECT_STATE(uVar4, 10);
									Global_8776[iParam0] = 1;
									bVar0 = true;
								}
							}
							else if (iVar1 == 2)
							{
								bVar0 = true;
							}
						}
					}
					break;
				
				case 4:
					if (iVar1 == 0)
					{
						ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&(Global_803E[(iParam0 / 32)]), (iParam0 % 32));
					}
					else if (iVar1 == 1)
					{
						ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], 1);
						MISC::SET_BIT(&(Global_803E[(iParam0 / 32)]), (iParam0 % 32));
					}
					bVar0 = true;
					break;
			}
			if (bVar0)
			{
				Global_8203[iParam0] = 0;
				Global_82CA[iParam0] = iVar1;
				if (!func_196())
				{
					if (!Global_851F[iParam0])
					{
						Global_851F[iParam0] = 1;
						Global_85E6++;
					}
				}
			}
		}
	}
	return bVar0;
}

int func_196()//Position - 0x22CF0
{
	if ((func_198() == 4294967295 || func_198() == 999) && !func_197() == 0)
	{
		return 1;
	}
	return 0;
}

int func_197()//Position - 0x22D20
{
	return Global_6374;
}

int func_198()//Position - 0x22D2B
{
	return Global_6373;
}

int func_199(var uParam0, int iParam1)//Position - 0x22D36
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_4[iVar0] = 0;
		StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
		uParam0->f_40[iVar0] = 0;
		uParam0->f_4B[iVar0] = 0;
		uParam0->f_5B[iVar0] = 0;
		iVar0++;
	}
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0;
	uParam0->f_21 = 0;
	StringCopy(&(uParam0->f_22), "", 32);
	StringCopy(&(uParam0->f_2A), "", 32);
	StringCopy(&(uParam0->f_32), "", 32);
	uParam0->f_3A = { 0f, 0f, 0f };
	uParam0->f_3D = { 0f, 0f, 0f };
	uParam0->f_44 = { 0f, 0f, 0f };
	uParam0->f_47 = { 0f, 0f, 0f };
	uParam0->f_4A = 0f;
	uParam0->f_4F = { 0f, 0f, 0f };
	uParam0->f_52 = { 0f, 0f, 0f };
	uParam0->f_55 = { 0f, 0f, 0f };
	uParam0->f_58 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 3:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 4:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
			*uParam0 = { -24.685f, 3032.92f, 40.331f };
			break;
		
		case 0:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
			*uParam0 = { -93.4f, 6410.9f, 36.8f };
			break;
		
		case 1:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
			*uParam0 = { 890.3647f, -2367.289f, 28.10582f };
			break;
		
		case 2:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1020.5f, 663.41f, 154.75f };
			uParam0->f_3A = { -1018.913f, 603.2904f, 105.6611f };
			uParam0->f_3D = { -1038.913f, 639.2904f, 135.6611f };
			uParam0->f_40[0] = 1;
			uParam0->f_40[1] = 0;
			break;
		
		case 5:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
			break;
		
		case 196:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			break;
		
		case 6:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
			break;
		
		case 7:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 8:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 9:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 10:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
			*uParam0 = { 490.8999f, -1334.068f, 28.3298f };
			break;
		
		case 11:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
			break;
		
		case 12:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
			uParam0->f_44 = { -162.8918f, -2365.769f, 0f };
			uParam0->f_47 = { 190.75f, 31.25f, 21f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			break;
		
		case 13:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
			break;
		
		case 14:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
			break;
		
		case 15:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
			*uParam0 = { -95.2f, 6411.3f, 31.5f };
			break;
		
		case 16:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 17:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 18:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 19:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
			*uParam0 = { -146.3837f, 6161.5f, 30.2062f };
			break;
		
		case 20:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 801.7f, -1810.8f, 23.3f };
			break;
		
		case 21:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 787.3967f, -1808.858f, 29.8532f };
			uParam0->f_3A = { 814f, -1750f, 20f };
			uParam0->f_3D = { 790f, -1899f, 35f };
			uParam0->f_40[0] = 1;
			uParam0->f_40[1] = 0;
			uParam0->f_40[2] = 0;
			break;
		
		case 22:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
			break;
		
		case 23:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
			break;
		
		case 24:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
			break;
		
		case 25:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
			break;
		
		case 26:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
			*uParam0 = { 163.4f, -745.7f, 251f };
			break;
		
		case 27:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 28:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 29:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = joaat("dt1_05_build1_h");
			uParam0->f_4[1] = joaat("dt1_05_build1_damage");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 30:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = 4182925700;
			uParam0->f_4[1] = joaat("dt1_05_build1_damage_lod");
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 31:
			uParam0->f_3 = 4;
			uParam0->f_4[0] = 4108696685;
			uParam0->f_4[1] = joaat("dt1_05_damage_slod");
			*uParam0 = { 178.534f, -668.835f, 37.2113f };
			break;
		
		case 32:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 33:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
			*uParam0 = { 136.004f, -749.287f, 153.302f };
			break;
		
		case 34:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
			*uParam0 = { 74.29f, -736.05f, 46.76f };
			break;
		
		case 35:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
			*uParam0 = { 105.4557f, -745.4835f, 44.7548f };
			break;
		
		case 36:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
			*uParam0 = { 169f, -670.3f, 41.9f };
			break;
		
		case 37:
			uParam0->f_3 = 1;
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			uParam0->f_4F = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_52 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_55 = { 16.9757f, 3614.307f, 30.0677f };
			uParam0->f_58 = { 145.2451f, 3748.912f, 49.6958f };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			break;
		
		case 38:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 39:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 50.2f, 3743.9f, 40.9f };
			break;
		
		case 40:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 41:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 106.7f, 3732.1f, 40.8f };
			break;
		
		case 42:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 43:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 72.7f, 3695.4f, 42f };
			break;
		
		case 44:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 45:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 43.8f, 3699.7f, 41.3f };
			break;
		
		case 46:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 47:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 28.5f, 3668f, 40.4f };
			break;
		
		case 48:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_22), "des_methtrailer", 32);
			StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			uParam0->f_44 = { 31.134f, 3738.783f, 39.062f };
			uParam0->f_47 = { 13.6f, 20f, 8.9f };
			uParam0->f_4A = 48f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 1;
			break;
		
		case 49:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 29.4838f, 3735.593f, 38.688f };
			break;
		
		case 50:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			uParam0->f_4F = { 2383.756f, 4929.988f, 39.52461f };
			uParam0->f_52 = { 2505.756f, 5023.988f, 67.52461f };
			break;
		
		case 55:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2450.595f, 4959.929f, 44.2575f };
			break;
		
		case 51:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2444.8f, 4976.4f, 50.5f };
			break;
		
		case 52:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 53:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 54:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { 2447.9f, 4973.4f, 47.7f };
			break;
		
		case 56:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 57:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 58:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 59:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
			*uParam0 = { 1676.415f, -1626.37f, 111.4848f };
			break;
		
		case 60:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
			*uParam0 = { 889.3f, -2910.9f, 40f };
			break;
		
		case 61:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
			*uParam0 = { -1600.619f, 4443.457f, 0.725f };
			break;
		
		case 62:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
			*uParam0 = { 966.1f, -114.8f, 75.2f };
			break;
		
		case 63:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
			*uParam0 = { -3086.428f, 339.2523f, 6.3717f };
			break;
		
		case 64:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1675.178f, -1143.605f, 12.0175f };
			break;
		
		case 65:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 66:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
			*uParam0 = { -532.1309f, 4526.187f, 88.7955f };
			break;
		
		case 67:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
			*uParam0 = { 131.29f, -631.22f, 261.85f };
			break;
		
		case 68:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
			*uParam0 = { 233.9f, -1355f, 30.3f };
			break;
		
		case 69:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
			*uParam0 = { 234.4f, -1355.6f, 40.5f };
			break;
		
		case 70:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 71:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 72:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 73:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 74:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 716.84f, -962.05f, 31.59f };
			break;
		
		case 75:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 76:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 105:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
			*uParam0 = { 330.4596f, -584.8196f, 42.3174f };
			break;
		
		case 106:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
			*uParam0 = { 1861.28f, 2402.11f, 58.53f };
			break;
		
		case 107:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
			*uParam0 = { -1327.46f, -274.82f, 54.25f };
			break;
		
		case 108:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
			*uParam0 = { 2697.32f, 3162.18f, 58.1f };
			break;
		
		case 109:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
			*uParam0 = { 2119.12f, 3058.21f, 53.25f };
			break;
		
		case 110:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
			*uParam0 = { -804.25f, -2276.88f, 23.59f };
			break;
		
		case 111:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 112:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
			*uParam0 = { 296.5f, 173.3f, 100.4f };
			break;
		
		case 77:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 480.9554f, -1321.21f, 28.2037f };
			uParam0->f_55 = { 508.3f, -1299.3f, 39.4f };
			uParam0->f_58 = { 459.9f, -1363.2f, 21.4f };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			uParam0->f_5B[2] = 0;
			break;
		
		case 78:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
			*uParam0 = { 1973f, 3815f, 34f };
			uParam0->f_21 = 0;
			break;
		
		case 79:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
			*uParam0 = { -1088.6f, -1650.6f, 6.4f };
			break;
		
		case 80:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
			*uParam0 = { -13.83f, -1455.45f, 31.81f };
			break;
		
		case 113:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
			*uParam0 = { -1277.629f, -2030.913f, 1.2823f };
			break;
		
		case 114:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
			*uParam0 = { 2384.969f, 4277.583f, 30.379f };
			break;
		
		case 115:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
			*uParam0 = { 1577.881f, 3836.107f, 30.7717f };
			break;
		
		case 87:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -180.5771f, -1016.928f, 28.2893f };
			break;
		
		case 88:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
			*uParam0 = { -630.4205f, -236.7843f, 37.057f };
			uParam0->f_4F = { (-623.6868f - 11f), (-231.935f - 11f), (40.30703f - 3.25f) };
			uParam0->f_52 = { (-623.6868f + 11f), (-231.935f + 11f), (40.30703f + 3.25f) };
			break;
		
		case 89:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
			*uParam0 = { -583.1606f, -282.3967f, 35.394f };
			break;
		
		case 90:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
			*uParam0 = { -14.651f, -604.3639f, 25.1823f };
			break;
		
		case 91:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2773.61f, 2835.327f, 35.1903f };
			break;
		
		case 94:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 1743.682f, 3286.251f, 40.0875f };
			break;
		
		case 95:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 1222.9f, 1877.9f, 79.9f };
			uParam0->f_3A = { 1206.8f, 1803f, 43.9f };
			uParam0->f_3D = { 1329f, 2060.4f, 143.9f };
			uParam0->f_40[0] = 0;
			uParam0->f_40[1] = 1;
			uParam0->f_40[2] = 0;
			break;
		
		case 104:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
			*uParam0 = { -351f, -1324f, 44.02f };
			break;
		
		case 103:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
			*uParam0 = { 391.81f, -962.71f, 41.97f };
			break;
		
		case 102:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
			*uParam0 = { 424.2f, -1944.31f, 33.09f };
			break;
		
		case 92:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 93:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 2626.374f, 2949.869f, 39.1409f };
			break;
		
		case 118:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 116:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 117:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 119:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 120:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -808.033f, 172.1309f, 75.7406f };
			break;
		
		case 122:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -802.0311f, 172.9131f, 75.7408f };
			break;
		
		case 121:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 123:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 124:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 170:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -813.3f, 177.5f, 75.76f };
			break;
		
		case 171:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael_Garage", 32);
			*uParam0 = { -810.5301f, 187.7868f, 71.4786f };
			break;
		
		case 125:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
			StringCopy(&(uParam0->f_2A), "V_Michael", 32);
			*uParam0 = { -811.2679f, 179.3344f, 75.7408f };
			break;
		
		case 164:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 165:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 166:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 167:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 168:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 169:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
			StringCopy(&(uParam0->f_2A), "V_Sweat", 32);
			*uParam0 = { 707.2563f, -965.147f, 29.4179f };
			break;
		
		case 126:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 127:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 128:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 129:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 130:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 131:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 132:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
			StringCopy(&(uParam0->f_2A), "V_Trailer", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 133:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTRASH", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 134:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
			StringCopy(&(uParam0->f_2A), "V_TrailerTidy", 32);
			*uParam0 = { 1973.805f, 3818.555f, 32.4363f };
			break;
		
		case 179:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -30.8793f, -1088.336f, 25.4221f };
			uParam0->f_44 = { -29.3f, -1086.35f, 25.57f };
			uParam0->f_47 = { 5.5f, 3f, 2f };
			uParam0->f_4A = -10f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			break;
		
		case 174:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
			StringCopy(&(uParam0->f_32), "csr_inMission", 32);
			uParam0->f_21 = 0;
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 175:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_44 = { -49.21f, -1090.28f, 25.42f };
			uParam0->f_47 = { 2.5f, 3f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 176:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_44 = { -49.28f, -1092.66f, 25.42f };
			uParam0->f_47 = { 3f, 1f, 3f };
			uParam0->f_4A = 0f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 177:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_carshowroom", 32);
			*uParam0 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_44 = { -53.07f, -1096.73f, 25.5f };
			uParam0->f_47 = { 1f, 3f, 2f };
			uParam0->f_4A = -45f;
			uParam0->f_4B[0] = 0;
			uParam0->f_4B[1] = 1;
			uParam0->f_4B[2] = 0;
			break;
		
		case 178:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 173:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -59.7936f, -1098.784f, 27.2612f };
			break;
		
		case 180:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "", 32);
			*uParam0 = { 23.9346f, -669.7552f, 30.8853f };
			break;
		
		case 181:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
			StringCopy(&(uParam0->f_2A), "v_hospital", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 300.9423f, -586.1784f, 42.2919f };
			break;
		
		case 135:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 136:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 137:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 138:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 139:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 140:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 141:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 142:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 143:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 144:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 145:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 146:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
			StringCopy(&(uParam0->f_2A), "v_trevors", 32);
			*uParam0 = { -1157.129f, -1523.028f, 9.6327f };
			break;
		
		case 147:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 148:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -1150.039f, -1521.761f, 9.6331f };
			break;
		
		case 149:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 1856.029f, 3682.998f, 33.2675f };
			break;
		
		case 150:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -440.5073f, 6018.766f, 30.49f };
			break;
		
		case 151:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 152:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 487.31f, 5588.386f, 793.0532f };
			break;
		
		case 153:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 154:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 155:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
			StringCopy(&(uParam0->f_2A), "v_franklins", 32);
			*uParam0 = { -13.9623f, -1440.614f, 30.1015f };
			break;
		
		case 172:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
			StringCopy(&(uParam0->f_2A), "v_strip3", 32);
			*uParam0 = { 96.4811f, -1291.294f, 28.2688f };
			break;
		
		case 182:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 139.5795f, -3092.962f, 8.64631f };
			uParam0->f_4F = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_52 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_55 = { Vector(8.64631f, -3092.962f, 139.5795f) - Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_58 = { Vector(8.64631f, -3092.962f, 139.5795f) + Vector(4.1875f, 24f, 33.3125f) };
			uParam0->f_5B[0] = 0;
			uParam0->f_5B[1] = 1;
			uParam0->f_5B[2] = 1;
			break;
		
		case 183:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 203.7784f, -3131.767f, 7.041344f };
			uParam0->f_4F = { Vector(7.041344f, -3131.767f, 203.7784f) - Vector(2.5625f, 2.75f, 4.875f) };
			uParam0->f_52 = { Vector(7.041344f, -3131.767f, 203.7784f) + Vector(2.5625f, 2.75f, 4.875f) };
			break;
		
		case 184:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 144.7706f, -2982.659f, 7.952507f };
			uParam0->f_4F = { Vector(7.952507f, -2982.659f, 144.7706f) - Vector(3.125f, 3.4375f, 5.3125f) };
			uParam0->f_52 = { Vector(7.952507f, -2982.659f, 144.7706f) + Vector(3.125f, 3.4375f, 5.3125f) };
			break;
		
		case 185:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_4F = { -1154.965f, -1520.983f, 9.132731f };
			uParam0->f_52 = { -1158.965f, -1524.983f, 11.63273f };
			break;
		
		case 187:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_4F = { -1052.204f, 371.9537f, 67.914f };
			uParam0->f_52 = { -1048.064f, 368.0221f, 70.9128f };
			break;
		
		case 186:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_4F = { 1954.984f, 3792.991f, 30.3086f };
			uParam0->f_52 = { 1983.45f, 3830.78f, 36.2726f };
			break;
		
		case 188:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 1;
			*uParam0 = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_4F = { -1122.202f, 48.5724f, 51.4652f };
			uParam0->f_52 = { -1076.233f, 92.1041f, 60.0617f };
			break;
		
		case 81:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -2199.138f, 223.4648f, 181.1118f };
			break;
		
		case 82:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { -2242.785f, 263.4779f, 173.6154f };
			break;
		
		case 83:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 3832.9f, 3665.5f, -23.4f };
			break;
		
		case 84:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 2814.7f, 4758.5f, 47.9f };
			break;
		
		case 85:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -1096.505f, 4.5754f, 49.8103f };
			break;
		
		case 86:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { -781.6566f, 186.8937f, 71.8352f };
			break;
		
		case 189:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 55.7f, -1391.3f, 30.5f };
			break;
		
		case 190:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
			uParam0->f_21 = 0;
			*uParam0 = { 700.091f, -933.641f, 20.308f };
			break;
		
		case 191:
			uParam0->f_3 = 1;
			*uParam0 = { -1096.381f, -836.17f, 36.6755f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 192:
			uParam0->f_3 = 1;
			*uParam0 = { 449.6558f, -980.1375f, 42.6918f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 193:
			uParam0->f_3 = 1;
			*uParam0 = { 363.0175f, -1598.079f, 35.9502f };
			uParam0->f_55 = { *uParam0 - Vector(25f, 25f, 15f) };
			uParam0->f_58 = { *uParam0 + Vector(25f, 25f, 15f) };
			uParam0->f_5B[0] = 1;
			uParam0->f_5B[1] = 0;
			break;
		
		case 194:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
			*uParam0 = { -1601.424f, 2808.213f, 16.2598f };
			break;
		
		case 97:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
			*uParam0 = { 23.7318f, -647.2123f, 37.9549f };
			break;
		
		case 98:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
			*uParam0 = { 12.9689f, -648.4698f, 9.7693f };
			break;
		
		case 99:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
			*uParam0 = { -1459.127f, 486.1281f, 115.2016f };
			break;
		
		case 100:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
			*uParam0 = { -248.4916f, -2010.509f, 34.5743f };
			break;
		
		case 101:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
			*uParam0 = { -1081.347f, -263.1502f, 38.7152f };
			break;
		
		case 195:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
			StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
			*uParam0 = { 136.1795f, -750.701f, 262.0516f };
			break;
		
		case 197:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
			*uParam0 = { 2096f, 3168.7f, 42.9f };
			break;
	}
	switch (iParam1)
	{
		case 156:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 157:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 158:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 163:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 159:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 161:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 162:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 160:
			uParam0->f_3 = 2;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
			StringCopy(&(uParam0->f_2A), "v_franklinshouse", 32);
			*uParam0 = { 7.0256f, 537.3075f, 175.0281f };
			break;
		
		case 96:
			uParam0->f_3 = 1;
			StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
			StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
			*uParam0 = { 19.0568f, 536.4818f, 169.6277f };
			break;
	}
	return 1;
}

void func_200(int iParam0)//Position - 0x26576
{
	if (iParam0 != 4294967295)
	{
		if (Global_16C56 == 4294967295)
		{
			Global_16C56 = iParam0;
		}
	}
}

void func_201(int iParam0, bool bParam1, bool bParam2)//Position - 0x26598
{
	int iVar0;
	
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 30))
	{
		bParam1 = true;
	}
	func_205(iParam0);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (HUD::DOES_BLIP_EXIST(iParam0->f_1[iVar0]))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_1[iVar0]));
		}
		func_204(iVar0, iParam0);
		func_203(iVar0, iParam0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 31)
	{
		if (iVar0 != 8)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), iVar0);
			GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_E), iVar0);
		}
		iVar0++;
	}
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
	}
	iParam0->f_6 = 0;
	iParam0->f_C = 0;
	iParam0->f_F = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(iParam0->f_11[iVar0]))
		{
			PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam0->f_11[iVar0], 1);
			PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(iParam0->f_11[iVar0], 1);
			if (bParam2)
			{
				PED::SET_PED_CONFIG_FLAG(iParam0->f_11[iVar0], 32, true);
				PED::SET_PED_CONFIG_FLAG(iParam0->f_11[iVar0], 305, false);
			}
			PED::SET_PED_CONFIG_FLAG(iParam0->f_11[iVar0], 268, false);
			if (bParam1)
			{
				if (PED::IS_PED_GROUP_MEMBER(iParam0->f_11[iVar0], func_202()) && iParam0->f_11[iVar0] != AUDIO::_0x0626A247D2405330())
				{
					PED::REMOVE_PED_FROM_GROUP(iParam0->f_11[iVar0]);
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 29))
			{
				PED::SET_PED_USING_ACTION_MODE(iParam0->f_11[iVar0], 0, 4294967295, 0);
			}
			iParam0->f_11[iVar0] = 0;
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(AUDIO::_0x0626A247D2405330(), 1);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(AUDIO::_0x0626A247D2405330(), 1);
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, true);
		}
	}
	iParam0->f_15 = 0;
}

var func_202()//Position - 0x26749
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

void func_203(int iParam0, var uParam1)//Position - 0x26759
{
	switch (iParam0)
	{
		case 0:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 17);
			break;
		
		case 1:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 18);
			break;
		
		case 2:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 19);
			break;
	}
}

void func_204(int iParam0, var uParam1)//Position - 0x267A1
{
	switch (iParam0)
	{
		case 0:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 14);
			break;
		
		case 1:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 15);
			break;
		
		case 2:
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_D), 16);
			break;
	}
}

void func_205(var uParam0)//Position - 0x267E9
{
	if (HUD::DOES_BLIP_EXIST(uParam0->f_5))
	{
		HUD::REMOVE_BLIP(&(uParam0->f_5));
	}
}

int func_206()//Position - 0x26804
{
	if (Global_3)
	{
		return 1;
	}
	if (Global_16C30 == 7 || Global_16C30 == 8)
	{
		return 1;
	}
	return 0;
}

void func_207()//Position - 0x26831
{
	iLocal_2193 = iLocal_2192;
	iLocal_2192 = 0;
	switch (iLocal_272)
	{
		case 0:
			func_834();
			break;
		
		case 1:
			func_819();
			break;
		
		case 2:
			func_812();
			break;
		
		case 3:
			func_809();
			break;
		
		case 4:
			func_800();
			break;
		
		case 5:
			func_799();
			break;
		
		case 6:
			func_798();
			break;
		
		case 7:
			func_797();
			break;
		
		case 8:
			func_796();
			break;
		
		case 9:
			func_565();
			break;
		
		case 10:
			func_413();
			break;
		
		case 11:
			func_266();
			break;
		
		case 12:
			func_257();
			break;
		
		case 13:
			if (!iLocal_2162)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				func_256(800);
				iLocal_2162 = 1;
			}
			else if (CAM::IS_SCREEN_FADED_IN())
			{
				func_252();
			}
			break;
	}
	if (!CAM::DOES_CAM_EXIST(iLocal_2610) || !CAM::IS_CAM_ACTIVE(iLocal_2610))
	{
		if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		{
			CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
		}
	}
	func_251(fLocal_2337);
	if (bLocal_2184)
	{
		func_249();
		func_246();
		func_244();
	}
	func_215();
	func_208();
}

void func_208()//Position - 0x26972
{
	var uVar0;
	
	if (!iLocal_72[5])
	{
		if (func_214(29, 0.339f, 1f))
		{
			iLocal_72[5] = 1;
		}
	}
	if (iLocal_72[0])
	{
		if (func_214(29, 0.1f, 1f))
		{
			iLocal_72[0] = 0;
		}
	}
	if (func_214(8, 0.245f, 0.268f))
	{
		if (!CAM::IS_CAM_SHAKING(iLocal_2610))
		{
			CAM::SHAKE_CAM(iLocal_2610, "JOLT_SHAKE", 1.5f);
		}
		if (!iLocal_72[2])
		{
			iLocal_72[2] = 1;
		}
	}
	if (func_214(7, 0.186f, 0.217f))
	{
		if (!CAM::IS_CAM_SHAKING(iLocal_2610))
		{
			CAM::SHAKE_CAM(iLocal_2610, "JOLT_SHAKE", 1.5f);
		}
		if (!iLocal_72[3])
		{
			iLocal_72[3] = 1;
		}
	}
	if (func_214(6, 0.395f, 0.435f))
	{
		if (!CAM::IS_CAM_SHAKING(iLocal_2610))
		{
			CAM::SHAKE_CAM(iLocal_2610, "JOLT_SHAKE", 1.5f);
		}
		if (!iLocal_72[4])
		{
			iLocal_72[4] = 1;
		}
	}
	if (!iLocal_72[1])
	{
		if (func_213(iLocal_2599[22]) || fLocal_2331 > 0.2f)
		{
			iLocal_72[1] = 1;
		}
	}
	if (!iLocal_72[0])
	{
		if (func_214(13, 0.064f, 0.087f) || func_214(14, 0.06f, 0.082f))
		{
			iLocal_72[0] = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_2567) && !PED::IS_PED_INJURED(iLocal_2567))
	{
		uVar0 = 12;
		uVar0.f_D = 12;
		uVar0.f_1A = 12;
		uVar0.f_27 = 9;
		uVar0.f_31 = 9;
		func_209(iLocal_2567, &uVar0, 1, 4294967295);
		if (iLocal_72[7])
		{
			if (CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				PED::_0x39D55A620FCB6A3A(iLocal_2567, 8, 2, 0);
			}
			else if (PED::_0x66680A92700F43DF(iLocal_2567))
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 8, 2, 0, 0);
				PED::_0x5AAB586FFEC0FD96(iLocal_2567);
			}
		}
		if (iLocal_72[6])
		{
			if (uVar0.f_D[7] != 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 7, 2, 0, 0);
			}
		}
		else if (iLocal_2313 == 0)
		{
			if (uVar0.f_D[7] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 7, 0, 0, 0);
			}
		}
		else if (uVar0.f_D[7] != 1 || uVar0[7] != iLocal_2313)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 7, 1, iLocal_2313, 0);
		}
		if (iLocal_72[0])
		{
			if (uVar0.f_D[0] != 0 || uVar0[0] != 2)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 0, 0, 2, 0);
			}
		}
		else if (uVar0.f_D[0] != 0 || uVar0[0] != 1)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 0, 0, 1, 0);
		}
		if (iLocal_72[2])
		{
			if (uVar0.f_D[6] != 1 || uVar0[6] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 6, 1, 0, 0);
			}
		}
		else if (uVar0.f_D[6] != 0 || uVar0[6] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 6, 0, 0, 0);
		}
		if (iLocal_72[3])
		{
			if (uVar0.f_D[11] != 1 || uVar0[11] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 11, 1, 0, 0);
			}
		}
		else if (uVar0.f_D[11] != 0 || uVar0[11] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 11, 0, 0, 0);
		}
		if (iLocal_72[4])
		{
			if (uVar0.f_D[1] != 1 || uVar0[1] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 1, 1, 0, 0);
			}
		}
		else if (uVar0.f_D[1] != 0 || uVar0[1] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 1, 0, 0, 0);
		}
		if (iLocal_72[1])
		{
			if (uVar0.f_D[10] != 1 || uVar0[10] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 10, 1, 0, 0);
			}
		}
		else if (uVar0.f_D[10] != 0 || uVar0[10] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 10, 0, 0, 0);
		}
		if (iLocal_72[5])
		{
			if (uVar0.f_D[9] != 1 || uVar0[9] != 0)
			{
				PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 9, 1, 0, 0);
			}
		}
		else if (uVar0.f_D[9] != 0 || uVar0[9] != 0)
		{
			PED::SET_PED_COMPONENT_VARIATION(iLocal_2567, 9, 0, 0, 0);
		}
	}
}

void func_209(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x26DBC
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_22(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_212(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_211(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_21(iVar0))
		{
			uParam1->f_3B = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3B;
			uParam1->f_3C = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3C;
			uParam1->f_3D = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3D;
			uParam1->f_3E = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3E;
			uParam1->f_3F = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3F;
			uParam1->f_40 = Global_19E56.f_933.f_21B[iVar0 /*65*/].f_40;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			if (func_210(161, iParam3))
			{
				uParam1->f_3B = func_118(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_3B = func_118(752, iParam3, 0);
			}
			uParam1->f_3C = func_118(753, iParam3, 0);
			uParam1->f_3D = func_118(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == AUDIO::_0x0626A247D2405330())
		{
			if (func_210(161, iParam3))
			{
				uParam1->f_3B = func_118(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_3B = func_118(752, iParam3, 0);
			}
		}
	}
}

int func_210(int iParam0, int iParam1)//Position - 0x26F5C
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_116(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_211(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x26F88
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(iParam0, iParam1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam5;
	}
	if (iParam4 == 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
		{
			if (iParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(iParam0) && PED::_0x451294E859ECC018(iParam0) != 4294967295)
				{
					*uParam2 = PED::_0x451294E859ECC018(iParam0);
					*uParam3 = PED::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 0)
			{
				if (*uParam2 == 7)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 28)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
			}
			else if (iParam1 == 1)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				if (*uParam2 == 2)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 4)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 16 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 6)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 17)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 20)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				if (*uParam2 == 9)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 11)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 12)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 21)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 23)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if (*uParam2 == 27)
				{
					if ((iParam4 & 1 != 0 || iParam4 & 2 != 0) || iParam4 & 8 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
				else if ((*uParam2 >= 14 && *uParam2 <= 20) || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = 4294967295;
						*uParam3 = 4294967295;
					}
				}
			}
			break;
	}
}

void func_212(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x274D0
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (iParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(iParam0, iParam1);
	}
	else
	{
		iVar0 = iParam6;
	}
	if (iParam5 == 0)
	{
		return;
	}
	switch (iVar0)
	{
		case 0:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 1:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
		
		case 2:
			if (iParam1 == 8)
			{
				if ((iParam5 & 1 != 0 || iParam5 & 2 != 0) || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (iParam1 == 9)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}
}

int func_213(int iParam0)//Position - 0x27711
{
	if (iParam0 != 4294967295 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0))
	{
		if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0) < 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_214(int iParam0, float fParam1, float fParam2)//Position - 0x2773B
{
	float fVar0;
	
	if (iLocal_2599[iParam0] != 4294967295 && func_213(iLocal_2599[iParam0]))
	{
		fVar0 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[iParam0]);
		if (fVar0 > fParam1 && fVar0 < fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_215()//Position - 0x27783
{
	if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2304))
	{
		unk_0xF14A31FD690DC3B0(iLocal_2303);
		if (bLocal_2184)
		{
			fLocal_2318 = func_243(fLocal_2318, 0f, 100f);
			func_242(0f, 0f, 1f, 1f, 0, 0, 0, 255);
			if (iLocal_2602 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2602))
			{
				if (!iLocal_2254)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2602, "SET_COLOUR");
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(235);
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(9);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					iLocal_2254 = 1;
				}
				GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_2602, 0.2f, 0.3f, 0.4f, 0.6f, 255, 255, 255, 255, 0);
			}
			else
			{
				iLocal_2254 = 0;
			}
		}
		else
		{
			func_242(0f, 0f, 1f, 1f, 0, 0, 0, 255);
		}
		unk_0xF14A31FD690DC3B0(iLocal_2305);
	}
	if (bLocal_2185)
	{
		unk_0xF14A31FD690DC3B0(iLocal_2305);
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2603))
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_2603, 0.5f, 0.825f, 0.2f, 0.3f, 255, 255, 255, iLocal_2306, 0);
		}
	}
	if (bLocal_2271)
	{
		func_216(&iLocal_2358, 0, 1);
	}
}

bool func_216(int iParam0, bool bParam1, int iParam2)//Position - 0x2788A
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	bVar5 = false;
	bVar6 = PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330());
	bVar7 = ((bVar6 && Global_11625) && func_241());
	bVar8 = func_240(bParam1);
	iParam0->f_6 = func_27(func_190());
	Global_434C.f_C = !iParam0->f_17;
	Global_434C.f_79 = bParam1;
	Global_434C.f_7A = iParam2;
	Global_434C.f_7B = bVar7;
	Global_434C.f_3 = Global_434C.f_2;
	Global_434C.f_46 = 0;
	bVar9 = ((Global_434C.f_68 == 4 || Global_434C.f_68 == 1) || Global_434C.f_68 == 3);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		func_237(iParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_434C.f_47[iVar0] = 4294967295;
		Global_434C.f_4C[iVar0] = 4294967295;
		Global_434C.f_5E[iVar0] = 4294967295;
		Global_434C.f_63[iVar0] = 4294967295;
		Global_434C.f_36[iVar0] = 0;
		Global_434C.f_3B[iVar0] = 0;
		Global_434C.f_51[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (func_130(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_434C.f_46 = 1;
			}
			else if ((func_235(iVar10) && func_231(iVar10)) && iVar10 == func_27(Global_19E56.f_933.f_21B.f_10CF))
			{
				Global_434C.f_46 = 1;
			}
			else
			{
				Global_434C.f_46 = 0;
			}
		}
		else if (Global_434C.f_C)
		{
			if (!Global_434C.f_46)
			{
				if ((((!PED::IS_PED_INJURED((*iParam0)[iVar0]) && !iParam0->f_12[iVar0]) && (*iParam0)[iVar0] != AUDIO::_0x0626A247D2405330()) || iParam0->f_22[iVar0] == 2) || iParam0->f_18[iVar0] != 0)
				{
					Global_434C.f_46 = 1;
				}
			}
			if (iParam0->f_22[iVar0] == 3)
			{
				bVar5 = true;
			}
			else if (iParam0->f_6 == iVar0)
			{
				if (iParam0->f_22[iVar0] == 1 || iParam0->f_22[iVar0] == 2)
				{
					bVar5 = true;
				}
			}
			if (iParam0->f_8[iVar0])
			{
				if (iParam0->f_27 && iParam0->f_7 == iVar0)
				{
					iParam0->f_8[iVar0] = 0;
				}
				else if ((iParam0->f_6 == iVar0 && !bVar5) || iParam0->f_22[iVar0] == 3)
				{
					iParam0->f_8[iVar0] = 0;
				}
				else if ((PED::IS_PED_INJURED((*iParam0)[iVar0]) && !iParam0->f_17) && !iParam0->f_22[iVar0] == 2)
				{
					iParam0->f_8[iVar0] = 0;
				}
			}
			Global_434C.f_31[iVar0] = iParam0->f_8[iVar0];
			Global_434C.f_40[iVar0] = uVar3;
			if ((ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]) && !PED::IS_PED_INJURED((*iParam0)[iVar0])) && (*iParam0)[iVar0] != AUDIO::_0x0626A247D2405330())
			{
				Global_434C.f_47[iVar0] = SYSTEM::FLOOR((((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*iParam0)[iVar0])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*iParam0)[iVar0])) - 100f)) * 100f));
			}
			if ((Global_434C.f_47[iVar0] != 4294967295 && IntToFloat(Global_434C.f_47[iVar0]) < 25f) || iParam0->f_D[iVar0])
			{
				if (iParam0->f_6 != iVar0)
				{
					Global_434C.f_36[iVar0] = 1;
					Global_434C.f_3B[iVar0] = iParam0->f_D[iVar0];
				}
			}
		}
		else
		{
			Global_434C.f_31[iVar0] = iParam0->f_8[iVar0];
			Global_434C.f_40[iVar0] = uVar3;
		}
		if (Global_434C.f_7C)
		{
			Global_434C.f_13[iVar2] = iVar1;
			Global_434C.f_18[iVar2] = uVar3;
			Global_434C.f_1D[iVar2] = uVar4;
			Global_434C.f_22[iVar0] = 0;
			Global_434C.f_2C[iVar0] = 0;
			Global_434C.f_27[iVar0] = 0;
			if (bVar9)
			{
				if (Global_434C.f_C)
				{
					if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]) && !PED::IS_PED_INJURED((*iParam0)[iVar0]))
					{
						Global_434C.f_4C[iVar0] = PED::GET_PED_ARMOUR((*iParam0)[iVar0]);
						if (iVar0 == 0)
						{
							STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(Global_434C.f_5E[iVar0]), 4294967295);
							STATS::STAT_GET_INT(joaat("sp0_special_ability_unlocked"), &(Global_434C.f_63[iVar0]), 4294967295);
						}
						else if (iVar0 == 1)
						{
							STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(Global_434C.f_5E[iVar0]), 4294967295);
							STATS::STAT_GET_INT(joaat("sp1_special_ability_unlocked"), &(Global_434C.f_63[iVar0]), 4294967295);
						}
						else if (iVar0 == 2)
						{
							STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(Global_434C.f_5E[iVar0]), 4294967295);
							STATS::STAT_GET_INT(joaat("sp2_special_ability_unlocked"), &(Global_434C.f_63[iVar0]), 4294967295);
						}
						Global_434C.f_51[iVar0 /*3*/] = { unk_0x8000C77B5F336760((*iParam0)[iVar0], true) };
					}
				}
				else if ((iVar0 < 3 && iVar1 != 3) && (!func_230() || func_130(14)))
				{
					Global_434C.f_22[iVar0] = Global_16210[iVar0];
					Global_434C.f_2C[iVar0] = 0;
					Global_434C.f_22[iVar0] = (Global_434C.f_22[iVar0] + Global_1621C[iVar0]);
					Global_434C.f_27[iVar0] = 0;
					Global_434C.f_22[iVar0] = (Global_434C.f_22[iVar0] + Global_16218[iVar0]);
				}
			}
		}
		if (((Global_434C.f_45 == 4294967295 || !Global_434C.f_E) && Global_434C.f_45 != iVar2) && !func_130(14))
		{
			if ((iParam0->f_6 == iVar0 && !bVar5) || iParam0->f_22[iVar0] == 3)
			{
				Global_434C.f_45 = iVar2;
				Global_434C.f_E = 1;
			}
		}
		iVar0++;
	}
	if (bVar8)
	{
		if ((((((Global_434C.f_7C && (!Global_434C.f_9 || Global_434C.f_A)) && ((!func_227(0) || Global_434C.f_C) || func_130(14))) && ((!func_227(3) || Global_434C.f_C) || func_130(14))) && ((!func_227(2) || Global_434C.f_C) || func_130(14))) && ((!func_227(9) || Global_434C.f_C) || func_130(14))) && ((!func_227(10) || Global_434C.f_C) || func_130(14)))
		{
			if (Global_434C.f_68 == 4)
			{
				if (func_130(14))
				{
					if (Global_434C.f_45 == 0)
					{
						Global_434C.f_B = func_226(iParam0, 1);
					}
					else if (Global_434C.f_45 == 1)
					{
						Global_434C.f_B = func_226(iParam0, 2);
					}
					else if (Global_434C.f_45 == 2)
					{
						Global_434C.f_B = func_226(iParam0, 3);
					}
					else if (Global_434C.f_45 == 3)
					{
						Global_434C.f_B = func_226(iParam0, 0);
					}
				}
				else if (Global_434C.f_45 == 0)
				{
					Global_434C.f_B = func_224(iParam0, 1);
				}
				else if (Global_434C.f_45 == 1)
				{
					Global_434C.f_B = func_224(iParam0, 2);
				}
				else if (Global_434C.f_45 == 2)
				{
					Global_434C.f_B = func_218(iParam0);
				}
				else if (Global_434C.f_45 == 3)
				{
					Global_434C.f_B = func_224(iParam0, 0);
				}
			}
			else if (Global_434C.f_68 == 3 || (Global_434C.f_9 && Global_434C.f_A))
			{
				if ((((!Global_434C.f_B && Global_434C.f_C) && Global_434C.f_46) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(func_217(AUDIO::_0x0626A247D2405330()) && (PAD::IS_CONTROL_PRESSED(0, 25) || PAD::IS_CONTROL_PRESSED(0, 68))))
				{
					if (iParam0->f_22[0] == 3)
					{
						iVar11 = 0;
					}
					else if (iParam0->f_22[1] == 3)
					{
						iVar11 = 1;
					}
					else if (iParam0->f_22[2] == 3)
					{
						iVar11 = 2;
					}
					else
					{
						iVar11 = func_190();
					}
					switch (iVar11)
					{
						case 0:
							if (iParam0->f_D[1] && !Global_434C.f_10)
							{
								iVar12 = 1;
							}
							else if (iParam0->f_D[2] && !Global_434C.f_10)
							{
								iVar12 = 2;
							}
							else if (iParam0->f_2B)
							{
								iVar12 = iParam0->f_28;
								iVar13 = iParam0->f_29;
								iVar14 = iParam0->f_2A;
							}
							else
							{
								iVar12 = 1;
								iVar13 = 2;
							}
							break;
						
						case 1:
							if (iParam0->f_D[2] && !Global_434C.f_10)
							{
								iVar12 = 2;
							}
							else if (iParam0->f_D[0] && !Global_434C.f_10)
							{
								iVar12 = 0;
							}
							else if (iParam0->f_2B)
							{
								iVar12 = iParam0->f_28;
								iVar13 = iParam0->f_29;
								iVar14 = iParam0->f_2A;
							}
							else
							{
								iVar12 = 2;
								iVar13 = 0;
							}
							break;
						
						case 2:
							if (iParam0->f_D[0] && !Global_434C.f_10)
							{
								iVar12 = 0;
							}
							else if (iParam0->f_D[1] && !Global_434C.f_10)
							{
								iVar12 = 1;
							}
							else if (iParam0->f_2B)
							{
								iVar12 = iParam0->f_28;
								iVar13 = iParam0->f_29;
								iVar14 = iParam0->f_2A;
							}
							else
							{
								iVar12 = 0;
								iVar13 = 1;
							}
							break;
					}
					bVar15 = true;
					if (PAD::_IS_INPUT_DISABLED(2))
					{
						if (!PAD::IS_CONTROL_JUST_RELEASED(0, 19))
						{
							if (PAD::IS_CONTROL_JUST_RELEASED(0, 166))
							{
								bVar15 = false;
								if (iVar11 != 0)
								{
									if (func_224(iParam0, 0))
									{
										Global_434C.f_B = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0, 167))
							{
								bVar15 = false;
								if (iVar11 != 1)
								{
									if (func_224(iParam0, 1))
									{
										Global_434C.f_B = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0, 168))
							{
								bVar15 = false;
								if (iVar11 != 2)
								{
									if (func_224(iParam0, 2))
									{
										Global_434C.f_B = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (func_224(iParam0, iVar12))
						{
							Global_434C.f_B = 1;
						}
						else if (func_224(iParam0, iVar13))
						{
							Global_434C.f_B = 1;
						}
						else if (func_224(iParam0, iVar14))
						{
							Global_434C.f_B = 1;
						}
					}
				}
			}
		}
	}
	if (Global_434C.f_B)
	{
		Global_434C.f_7D = 1;
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	}
	return Global_434C.f_B;
}

int func_217(int iParam0)//Position - 0x2826C
{
	int iVar0;
	
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, 1);
			if (((iVar0 == joaat("weapon_sniperrifle") || iVar0 == joaat("weapon_heavysniper")) || iVar0 == joaat("weapon_marksmanrifle")) || iVar0 == 177293209)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_218(var uParam0)//Position - 0x282C9
{
	int iVar0;
	
	if (!func_222(1))
	{
		return 0;
	}
	if (!uParam0->f_27)
	{
		uParam0->f_7 = 4;
		uParam0->f_27 = 1;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_230())
	{
		if (((!uParam0->f_12[3] && uParam0->f_17) && !Global_3) && func_222(0))
		{
			uParam0->f_7 = 3;
			return 1;
		}
		else if (func_222(0) == 0 && func_220() == 0)
		{
			NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0);
			if (iVar0 == 1)
			{
				func_219(14, 1, 4294967295);
			}
			else if (MISC::IS_ORBIS_VERSION() && NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				func_219(25, 1, 4294967295);
			}
			else if (MISC::IS_ORBIS_VERSION() && NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				func_219(26, 1, 4294967295);
			}
			else if (MISC::IS_ORBIS_VERSION() && NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				func_219(27, 1, 4294967295);
			}
			else if ((PLAYER::IS_PLAYER_ONLINE() && NETWORK::NETWORK_IS_SIGNED_ONLINE()) == 0)
			{
				func_219(13, 1, 4294967295);
			}
			else if (NETWORK::_NETWORK_ARE_ROS_AVAILABLE() == 0)
			{
			}
			else if (NETWORK::NETWORK_CAN_ENTER_MULTIPLAYER() == 0)
			{
			}
			else
			{
				func_219(14, 1, 4294967295);
			}
		}
	}
	return 0;
}

void func_219(int iParam0, bool bParam1, int iParam2)//Position - 0x283F4
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	if (iParam2 != 4294967294)
	{
		Global_1407F4 = iParam2;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_1407F1[iVar0]), iVar1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1407F1[iVar0]), iVar1);
	}
}

int func_220()//Position - 0x2843F
{
	if ((((((((((func_221(1) || func_221(2)) || func_221(3)) || func_221(4)) || func_221(5)) || func_221(7)) || func_221(8)) || func_221(9)) || func_221(10)) || func_221(11)) || func_221(12))
	{
		return 1;
	}
	return 0;
}

bool func_221(int iParam0)//Position - 0x284C7
{
	int iVar0;
	int iVar1;
	
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1407F1[iVar0], iVar1);
}

int func_222(int iParam0)//Position - 0x284EB
{
	int iVar0;
	
	if (iParam0 == 1)
	{
	}
	if (iParam0 == 0)
	{
		if (func_223() == 0)
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0) && MISC::GET_PROFILE_SETTING(903) == 1)
	{
		return 1;
	}
	if (!NETWORK::NETWORK_CAN_ACCESS_MULTIPLAYER(&iVar0))
	{
		if (iVar0 == 6)
		{
			return 1;
		}
		else if (iVar0 == 7)
		{
			return 1;
		}
		else if (iVar0 == 8)
		{
			return 1;
		}
		else if (iVar0 == 9)
		{
			return 1;
		}
		else if (iVar0 == 11)
		{
			return 1;
		}
		else if (iVar0 == 12)
		{
			return 1;
		}
		else if (iVar0 == 10)
		{
			return 1;
		}
	}
	return 0;
}

int func_223()//Position - 0x2858E
{
	if (MISC::IS_ORBIS_VERSION())
	{
		if (!NETWORK::_0xBD545D44CCE70597())
		{
			if (NETWORK::_0x74FB3E29E6D10FA9() == 4)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 2)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 1)
			{
				return 0;
			}
			if (NETWORK::_0x74FB3E29E6D10FA9() == 5)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_224(int iParam0, int iParam1)//Position - 0x285D6
{
	bool bVar0;
	bool bVar1;
	
	if (!iParam0->f_27)
	{
		iParam0->f_7 = 4;
		iParam0->f_27 = 1;
	}
	if ((iParam1 != 0 && iParam1 != 2) && iParam1 != 1)
	{
	}
	else
	{
		bVar0 = iParam0->f_22[iParam1] == 2;
		if (func_27(func_190()) != iParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || iParam0->f_18[iParam1] != 0) || ((func_235(iParam1) && func_231(iParam1)) && !iParam0->f_12[iParam1]))
			{
				if (!iParam0->f_17)
				{
					if (!PED::IS_PED_INJURED((*iParam0)[iParam1]) || bVar0)
					{
						if (iParam0->f_22[iParam1] != 1 && iParam0->f_22[iParam1] != 3)
						{
							bVar1 = true;
						}
					}
				}
				else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) == 0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_162B5.f_2F, iParam1))
				{
					bVar1 = true;
				}
			}
			else if (!((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_2[27 /*3*/], 1) && !Global_3) && !func_225(0)))
			{
				if (iParam0->f_17)
				{
					bVar1 = true;
				}
			}
			if (bVar1)
			{
				iParam0->f_7 = iParam1;
				return 1;
			}
		}
	}
	iParam0->f_27 = 0;
	return 0;
}

bool func_225(bool bParam0)//Position - 0x28731
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_226(var uParam0, int iParam1)//Position - 0x2875C
{
	bool bVar0;
	
	if (!uParam0->f_27)
	{
		uParam0->f_7 = 4;
		uParam0->f_27 = 1;
	}
	bVar0 = false;
	if (iParam1 == 3 || iParam1 == func_27(Global_19E56.f_933.f_21B.f_10CF))
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			bVar0 = true;
		}
	}
	if (bVar0)
	{
		uParam0->f_7 = iParam1;
		return 1;
	}
	uParam0->f_27 = 0;
	return 0;
}

int func_227(int iParam0)//Position - 0x287BE
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_228(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_228(int iParam0)//Position - 0x287E0
{
	return func_229(iParam0, Global_8D15);
}

int func_229(int iParam0, int iParam1)//Position - 0x287F1
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

int func_230()//Position - 0x289D2
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	return 1;
}

int func_231(int iParam0)//Position - 0x289E7
{
	if (Global_19E56.f_2361 || Global_3)
	{
		if (!Global_11625 || (Global_11625 && iParam0 != func_27(func_234())))
		{
			if (!func_232(func_233(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_232(int iParam0)//Position - 0x28A37
{
	if (func_21(iParam0))
	{
		if ((Global_19E56.f_2361 || Global_3) || func_225(0))
		{
			return Global_19E56.f_933.f_21B.f_918[iParam0];
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_233(int iParam0)//Position - 0x28A85
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (iParam0 == 2)
	{
		return 2;
	}
	else if (iParam0 == 1)
	{
		return 1;
	}
	return 145;
}

int func_234()//Position - 0x28AB3
{
	return Global_19E56.f_933.f_21B.f_10CF;
}

int func_235(int iParam0)//Position - 0x28AC8
{
	if ((Global_19E56.f_2361 || Global_3) || func_225(0))
	{
		if (!Global_11625 || (Global_11625 && iParam0 != func_27(func_234())))
		{
			if (((iParam0 == 0 && !func_236(115)) || (iParam0 == 1 && !func_236(116))) || (iParam0 == 2 && !func_236(117)))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_236(int iParam0)//Position - 0x28B54
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

void func_237(var uParam0, int iParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x28B81
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam1 == 3)
		{
			iVar0 = 1;
		}
	}
	else if (func_234() == func_233(iParam1))
	{
		iVar0 = 1;
	}
	switch (iParam1)
	{
		case 0:
			*uParam4 = 3;
			*uParam6 = 0;
			if (!func_235(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_231(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_17 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ((((func_227(0) || func_227(3)) || func_227(2)) || func_130(9)) || func_130(10))) || func_225(0)) || Global_8CF3)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 1:
			*uParam4 = 0;
			*uParam6 = 0;
			if (!func_235(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_231(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_17 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ((((func_227(0) || func_227(3)) || func_227(2)) || func_130(9)) || func_130(10))) || func_225(0)) || Global_8CF3)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 2:
			*uParam4 = 1;
			*uParam6 = 0;
			if (!func_235(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_231(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_17 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0) || ((((func_227(0) || func_227(3)) || func_227(2)) || func_130(9)) || func_130(10))) || func_225(0)) || Global_8CF3)
				{
					*uParam3 = 2;
				}
			}
			break;
		
		case 3:
			*uParam4 = 2;
			*uParam6 = 0;
			if ((((((!uParam0->f_17 || Global_3) || (uParam0->f_17 && ((((func_227(0) || func_227(3)) || func_227(2)) || func_130(9)) || func_130(10)))) || (uParam0->f_17 && func_225(0))) || (uParam0->f_17 && Global_8CF3)) || !func_239()) || !func_222(0))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_17 && *uParam3 == 1)
			{
				if (((((func_227(0) || func_227(3)) || func_227(2)) || func_130(9)) || func_130(10)) || Global_8CF3)
				{
					*uParam3 = 2;
				}
			}
			break;
	}
	if (iParam1 != 3)
	{
		if (iVar0 || uParam0->f_22[iParam1] == 2)
		{
			*uParam3 = 1;
		}
		else if (((uParam0->f_22[iParam1] == 1 || uParam0->f_12[iParam1]) || ((!uParam0->f_17 && PED::IS_PED_INJURED((*uParam0)[iParam1])) && *uParam3 == 1)) || (uParam0->f_17 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_162B5.f_2F, iParam1)))
		{
			if (*uParam3 == 1)
			{
				*uParam3 = 2;
			}
		}
		else if (uParam0->f_18[iParam1] != 0)
		{
			*uParam3 = 1;
		}
		else if (((uParam0->f_17 && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_2361.f_2[27 /*3*/], 1)) && !Global_3) && !func_225(0))
		{
			if ((((func_227(0) || func_227(3)) || func_227(2)) || func_130(9)) || func_130(10))
			{
			}
			else
			{
				*uParam3 = 1;
			}
		}
	}
	else
	{
		*uParam3 = 3;
	}
	if ((iVar0 && uParam0->f_22[iParam1] == 0) || uParam0->f_22[iParam1] == 3)
	{
		if (!func_130(14))
		{
			*uParam6 = 1;
		}
	}
	if (bParam2)
	{
		func_238(uParam0, iParam1, uParam5);
	}
}

void func_238(var uParam0, int iParam1, var uParam2)//Position - 0x2901B
{
	switch (iParam1)
	{
		case 0:
			*uParam2 = 0;
			break;
		
		case 1:
			*uParam2 = 2;
			break;
		
		case 2:
			*uParam2 = 1;
			break;
		
		case 3:
			*uParam2 = 3;
			break;
	}
	if (iParam1 != 4)
	{
		if (uParam0->f_18[iParam1] == 0)
		{
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("prologue1")) > 0)
			{
				if (iParam1 == 0)
				{
					if (func_236(124))
					{
						*uParam2 = 8;
					}
					else
					{
						*uParam2 = 7;
					}
				}
				else if (iParam1 == 2)
				{
					if (func_236(125))
					{
						*uParam2 = 10;
					}
					else
					{
						*uParam2 = 9;
					}
				}
			}
		}
		else if (uParam0->f_18[iParam1] == 1)
		{
			if (iParam1 == 0)
			{
				*uParam2 = 6;
			}
			else if (iParam1 == 2)
			{
				*uParam2 = 4;
			}
			else if (iParam1 == 1)
			{
				*uParam2 = 5;
			}
		}
		else if (uParam0->f_18[iParam1] == 2)
		{
			*uParam2 = 7;
		}
		else if (uParam0->f_18[iParam1] == 3)
		{
			*uParam2 = 8;
		}
		else if (uParam0->f_18[iParam1] == 4)
		{
			*uParam2 = 9;
		}
		else if (uParam0->f_18[iParam1] == 5)
		{
			*uParam2 = 10;
		}
	}
}

bool func_239()//Position - 0x29139
{
	return Global_141354;
}

int func_240(bool bParam0)//Position - 0x29145
{
	if (Global_434C.f_82)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, 166))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 167) && !PAD::IS_CONTROL_PRESSED(0, 168)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 167))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 168)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 168))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 167)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 169))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 167)) && !PAD::IS_CONTROL_PRESSED(0, 168))
			{
				return 1;
			}
		}
		if (!bParam0)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 166))
			{
				if ((!unk_0xE11F00B4AC919F45(0, 167) && !unk_0xE11F00B4AC919F45(0, 168)) && !unk_0xE11F00B4AC919F45(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 167))
			{
				if ((!unk_0xE11F00B4AC919F45(0, 166) && !unk_0xE11F00B4AC919F45(0, 168)) && !unk_0xE11F00B4AC919F45(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 168))
			{
				if ((!unk_0xE11F00B4AC919F45(0, 166) && !unk_0xE11F00B4AC919F45(0, 167)) && !unk_0xE11F00B4AC919F45(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 169))
			{
				if ((!unk_0xE11F00B4AC919F45(0, 166) && !unk_0xE11F00B4AC919F45(0, 167)) && !unk_0xE11F00B4AC919F45(0, 168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_241()//Position - 0x29337
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

void func_242(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0x29348
{
	GRAPHICS::DRAW_RECT((fParam0 + (fParam2 * 0.5f)), (fParam1 + (fParam3 * 0.5f)), fParam2, fParam3, iParam4, iParam5, iParam6, iParam7, 0);
}

float func_243(float fParam0, float fParam1, float fParam2)//Position - 0x29377
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

void func_244()//Position - 0x2939E
{
	if (bLocal_2182)
	{
		func_59(0);
		AUDIO::STOP_SOUND(vLocal_2621[0 /*3*/]);
		if (!vLocal_2621[2 /*3*/].f_2)
		{
			vLocal_2621[2 /*3*/] = AUDIO::GET_SOUND_ID();
		}
		AUDIO::PLAY_SOUND_FROM_COORD(vLocal_2621[2 /*3*/], sLocal_194, 143.0145f, -2201.359f, 4.3415f, 0, 0, 0, 0);
		vLocal_2621[2 /*3*/].f_2 = 1;
		AUDIO::SET_VARIABLE_ON_SOUND(vLocal_2621[2 /*3*/], "BPM", (fLocal_2320 + fLocal_2321));
	}
	else if ((fLocal_2320 + fLocal_2321) == 0f)
	{
		func_59(2);
		AUDIO::STOP_SOUND(vLocal_2621[2 /*3*/]);
		if (!vLocal_2621[0 /*3*/].f_2)
		{
			vLocal_2621[0 /*3*/] = AUDIO::GET_SOUND_ID();
		}
		if (AUDIO::HAS_SOUND_FINISHED(vLocal_2621[0 /*3*/]))
		{
			AUDIO::PLAY_SOUND_FROM_COORD(vLocal_2621[0 /*3*/], sLocal_195, 143.0145f, -2201.359f, 4.3415f, 0, 0, 0, 0);
			vLocal_2621[0 /*3*/].f_2 = 1;
		}
	}
	if ((func_214(8, 0.245f, 0.268f) || func_214(7, 0.185f, 0.202f)) || func_214(6, 0.393f, 0.407f))
	{
		func_245(14, sLocal_227, iLocal_2567, 1, 0);
	}
	else
	{
		vLocal_2621[14 /*3*/].f_1 = 0;
	}
	if (func_214(3, 0.222f, 1f))
	{
		if (!func_60(3))
		{
			func_245(3, sLocal_220, iLocal_2581, 1, 0);
		}
	}
	else if (func_214(22, 0.904f, 1f))
	{
		func_59(3);
	}
	if (fLocal_2226 > 0.704f)
	{
		func_245(5, "Electrical_Clamp_On", Local_230[3 /*36*/], 1, "FBI_03_Torture_Sounds");
		vLocal_2621[7 /*3*/].f_1 = 0;
	}
	else
	{
		func_245(7, "Electrical_Clamp_Off", Local_230[3 /*36*/], 1, "FBI_03_Torture_Sounds");
		vLocal_2621[5 /*3*/].f_1 = 0;
	}
	if (fLocal_2227 > 0.704f)
	{
		func_245(6, "Electrical_Clamp_On", Local_230[4 /*36*/], 1, "FBI_03_Torture_Sounds");
		vLocal_2621[8 /*3*/].f_1 = 0;
	}
	else
	{
		func_245(8, "Electrical_Clamp_Off", Local_230[4 /*36*/], 1, "FBI_03_Torture_Sounds");
		vLocal_2621[6 /*3*/].f_1 = 0;
	}
	if (fLocal_2224 > 0f)
	{
		if (!func_60(4))
		{
			func_245(4, sLocal_221, iLocal_2567, 1, 0);
		}
	}
	else if (!func_213(iLocal_2599[22]) || func_214(22, 0.198f, 1f))
	{
		func_59(4);
	}
	if (func_214(21, 0.146f, 0.246f))
	{
		func_245(9, sLocal_222, func_189(), 1, 0);
	}
	else
	{
		vLocal_2621[9 /*3*/].f_1 = 0;
	}
	if (func_214(4, 0.14f, 0.192f))
	{
		func_245(13, sLocal_226, func_189(), 1, 0);
	}
	else
	{
		vLocal_2621[13 /*3*/].f_1 = 0;
	}
	if (func_214(29, 0f, 1f))
	{
		if (!func_60(12))
		{
			func_245(12, sLocal_225, iLocal_2567, 1, 0);
		}
	}
	else
	{
		func_59(12);
	}
	if (func_214(13, 0.01f, 0.02f) || func_214(14, 0.06f, 0.082f))
	{
		func_245(11, sLocal_224, func_189(), 1, 0);
	}
	else
	{
		vLocal_2621[11 /*3*/].f_1 = 0;
	}
	if (bLocal_2335)
	{
		if (!func_60(10))
		{
			func_245(10, sLocal_223, iLocal_2567, 1, 0);
		}
		AUDIO::SET_VARIABLE_ON_SOUND(vLocal_2621[10 /*3*/], "Intensity", fLocal_2334);
	}
	else
	{
		func_59(10);
	}
}

void func_245(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x296EE
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		if (!vLocal_2621[iParam0 /*3*/].f_1)
		{
			if (!vLocal_2621[iParam0 /*3*/].f_2)
			{
				vLocal_2621[iParam0 /*3*/] = AUDIO::GET_SOUND_ID();
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(vLocal_2621[iParam0 /*3*/], sParam1, iParam2, iParam4, 0, 0);
			vLocal_2621[iParam0 /*3*/].f_2 = 1;
			if (bParam3)
			{
				vLocal_2621[iParam0 /*3*/].f_1 = 1;
			}
		}
	}
}

void func_246()//Position - 0x29750
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar1 = 0;
	fVar2 = 0f;
	iVar4 = 0;
	iVar6 = 0;
	if (bLocal_2182 && !bLocal_2183)
	{
		iVar0 = func_248(iVar0, 130);
		iVar1 = func_248(iVar1, 130);
	}
	if (func_213(iLocal_2599[6]) && iLocal_2186 == 6)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[6]);
		if (fVar2 > 0.393f && fVar2 < 0.407f)
		{
			iVar0 = func_248(iVar0, 260);
			iVar1 = func_248(iVar1, 255);
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, 260);
				iVar6 = func_248(iVar6, 255);
			}
			func_247();
		}
	}
	if (func_213(iLocal_2599[7]) && iLocal_2186 == 7)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[7]);
		if (fVar2 > 0.185f && fVar2 < 0.202f)
		{
			iVar0 = func_248(iVar0, 260);
			iVar1 = func_248(iVar1, 255);
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, 260);
				iVar6 = func_248(iVar6, 255);
			}
			func_247();
		}
	}
	if (func_213(iLocal_2599[8]) && iLocal_2186 == 8)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[8]);
		if (fVar2 > 0.245f && fVar2 < 0.268f)
		{
			iVar0 = func_248(iVar0, 260);
			iVar1 = func_248(iVar1, 255);
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, 260);
				iVar6 = func_248(iVar6, 255);
			}
			func_247();
		}
	}
	if ((func_213(iLocal_2599[12]) && iLocal_2186 == 12) || (func_213(iLocal_2599[18]) && iLocal_2186 == 18))
	{
		if (func_213(iLocal_2599[12]) && iLocal_2186 == 12)
		{
			fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[12]);
			if (fVar2 > 0.762f && fVar2 < 0.837f)
			{
				bVar7 = true;
			}
		}
		else if (func_213(iLocal_2599[18]) && iLocal_2186 == 18)
		{
			fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[18]);
			if (fVar2 > 0.444f && fVar2 < 0.581f)
			{
				bVar7 = true;
			}
		}
		if (bVar7)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, 130);
				iVar6 = func_248(iVar5, 200);
			}
			else
			{
				iVar0 = func_248(iVar0, 130);
				iVar1 = func_248(iVar1, 200);
			}
		}
	}
	else if (func_213(iLocal_2599[16]) && iLocal_2186 == 16)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[16]);
		if (fVar2 < 0.14f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, 100);
				iVar6 = func_248(iVar5, 100);
			}
			else
			{
				iVar0 = func_248(iVar0, 100);
				iVar1 = func_248(iVar1, 100);
			}
		}
	}
	if (bLocal_2335)
	{
		if (fLocal_2334 > 0f)
		{
			iVar8 = 130;
			iVar9 = ((20 + SYSTEM::ROUND((20f * func_243((fLocal_2317 / 5f), 0f, 1f)))) + SYSTEM::ROUND((215f * fLocal_2334)));
		}
		else if (MISC::IS_DURANGO_VERSION())
		{
			if (bLocal_2182 && !bLocal_2183)
			{
				iVar8 = 130;
				iVar9 = 130;
			}
		}
		if (MISC::IS_DURANGO_VERSION())
		{
			iVar5 = func_248(iVar5, iVar8);
			iVar6 = func_248(iVar6, iVar9);
		}
		else
		{
			iVar0 = func_248(iVar0, iVar8);
			iVar1 = func_248(iVar1, iVar9);
		}
	}
	if (func_213(iLocal_2599[13]) && iLocal_2186 == 13)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[13]);
		if (fVar2 > 0.014f && fVar2 < 0.032f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, 260);
				iVar6 = func_248(iVar6, 255);
			}
			else
			{
				iVar0 = func_248(iVar0, 260);
				iVar1 = func_248(iVar1, 255);
			}
			func_247();
		}
	}
	if (func_213(iLocal_2599[14]) && iLocal_2186 == 14)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[14]);
		if (fVar2 > 0.06f && fVar2 < 0.082f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, 260);
				iVar6 = func_248(iVar6, 255);
			}
			else
			{
				iVar0 = func_248(iVar0, 260);
				iVar1 = func_248(iVar1, 255);
			}
			func_247();
		}
	}
	if (func_213(iLocal_2599[18]) && iLocal_2186 == 14)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[18]);
		if (fVar2 > 0.562f && fVar2 < 1f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, 130);
				iVar6 = func_248(iVar6, 200);
			}
			else
			{
				iVar0 = func_248(iVar0, 130);
				iVar1 = func_248(iVar1, 200);
			}
		}
	}
	if (func_213(iLocal_2599[21]) && iLocal_2186 == 21)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[21]);
		if (fVar2 > 0.142f && fVar2 < 0.213f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar3 = func_248(iVar3, 130);
				iVar4 = func_248(iVar4, 255);
				iVar5 = func_248(iVar5, 130);
				iVar6 = func_248(iVar6, 255);
			}
			iVar0 = func_248(iVar0, 130);
			iVar1 = func_248(iVar1, 255);
			func_247();
		}
	}
	if (func_213(iLocal_2599[22]) && iLocal_2186 == 22)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[22]);
		if (fVar2 > 0f && fVar2 < 0.198f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar3 = func_248(iVar3, 130);
				iVar4 = func_248(iVar4, 255);
				iVar5 = func_248(iVar5, 130);
				iVar6 = func_248(iVar6, 255);
			}
			else
			{
				iVar0 = func_248(iVar0, 130);
				iVar1 = func_248(iVar1, 255);
			}
			func_247();
		}
	}
	if (fLocal_2226 >= 1f && fLocal_2227 >= 1f)
	{
		iVar10 = 130;
		iVar11 = SYSTEM::ROUND(((255f * fLocal_2224) * func_243((fLocal_2317 / 6.5f), 0.5f, 1f)));
		if (MISC::IS_DURANGO_VERSION())
		{
			iVar3 = func_248(iVar3, iVar10);
			iVar4 = func_248(iVar4, iVar11);
			iVar5 = func_248(iVar5, iVar10);
			iVar6 = func_248(iVar6, iVar11);
		}
		else
		{
			iVar0 = func_248(iVar0, iVar10);
			iVar1 = func_248(iVar1, iVar11);
		}
	}
	else
	{
		if (fLocal_2226 >= 1f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				if (bLocal_2182 && !bLocal_2183)
				{
					iVar3 = func_248(iVar3, 130);
					iVar4 = func_248(iVar4, 130);
				}
			}
		}
		else if (fLocal_2226 > 0.704f && fLocal_2226 < 1f)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 228))
			{
				iVar12 = 130;
				iVar13 = 200;
			}
			else
			{
				iVar12 = 100;
				iVar13 = 100;
			}
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar3 = func_248(iVar3, iVar12);
				iVar4 = func_248(iVar4, iVar13);
			}
			else
			{
				iVar0 = func_248(iVar0, iVar12);
				iVar1 = func_248(iVar1, iVar13);
			}
		}
		if (fLocal_2227 >= 1f)
		{
			if (MISC::IS_DURANGO_VERSION())
			{
				if (bLocal_2182 && !bLocal_2183)
				{
					iVar5 = func_248(iVar5, 130);
					iVar6 = func_248(iVar6, 130);
				}
			}
		}
		else if (fLocal_2227 > 0.704f && fLocal_2227 < 1f)
		{
			if (PAD::IS_CONTROL_PRESSED(2, 229))
			{
				iVar14 = 130;
				iVar15 = 200;
			}
			else
			{
				iVar14 = 100;
				iVar15 = 100;
			}
			if (MISC::IS_DURANGO_VERSION())
			{
				iVar5 = func_248(iVar5, iVar14);
				iVar6 = func_248(iVar6, iVar15);
			}
			else
			{
				iVar0 = func_248(iVar0, iVar14);
				iVar1 = func_248(iVar1, iVar15);
			}
		}
	}
	if (func_213(iLocal_2599[26]) && iLocal_2186 == 26)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[26]);
		if (fVar2 > 0.107f && fVar2 < 0.112f)
		{
			iVar0 = func_248(iVar0, 260);
			iVar1 = func_248(iVar1, 255);
		}
	}
	if (func_213(iLocal_2599[32]) && iLocal_2186 == 32)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[32]);
		if (fVar2 > 0f && fVar2 < 0.043f)
		{
			iVar0 = func_248(iVar0, 130);
			iVar1 = func_248(iVar1, 200);
		}
	}
	if (func_213(iLocal_2599[34]) && iLocal_2186 == 34)
	{
		fVar2 = PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[34]);
		if (fVar2 > 0.03f && fVar2 < 0.043f)
		{
			iVar0 = func_248(iVar0, 260);
			iVar1 = func_248(iVar1, 255);
			func_247();
		}
	}
	if (func_213(iLocal_2599[29]) && iLocal_2186 == 29)
	{
		iVar0 = func_248(iVar0, 130);
		iVar1 = func_248(iVar1, 200);
	}
	if (MISC::IS_DURANGO_VERSION())
	{
		if ((iVar3 != 0 && iVar4 != 0) || (iVar5 != 0 && iVar6 != 0))
		{
			PAD::_0x14D29BB12D47F68C(0, 0, 0, 0, 0);
			PAD::_0x14D29BB12D47F68C(0, iVar3, iVar4, iVar5, iVar6);
		}
	}
	if (iVar0 != 0 && iVar1 != 0)
	{
		PAD::SET_PAD_SHAKE(0, 0, 0);
		PAD::SET_PAD_SHAKE(0, iVar0, iVar1);
	}
}

void func_247()//Position - 0x2A05A
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2568, cLocal_151, "steve_phone_reaction", 3))
	{
		BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2568);
		ENTITY::SET_ENTITY_COORDS(iLocal_2568, vLocal_105, 1, false, 0, 1);
		ENTITY::SET_ENTITY_HEADING(iLocal_2568, 190.2745f);
		BRAIN::OPEN_SEQUENCE_TASK(&uLocal_2589);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_reaction", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 786440, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_a", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_a", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_b", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_a", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
		BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_b", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
		BRAIN::SET_SEQUENCE_TO_REPEAT(uLocal_2589, 1);
		CUTSCENE::_0x8D9DF6ECA8768583(uLocal_2589);
		BRAIN::TASK_PERFORM_SEQUENCE(iLocal_2568, uLocal_2589);
		BRAIN::CLEAR_SEQUENCE_TASK(&uLocal_2589);
	}
}

int func_248(int iParam0, int iParam1)//Position - 0x2A1B4
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_249()//Position - 0x2A1CD
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	
	if (bLocal_2183)
	{
		bLocal_2182 = false;
		fLocal_2320 = 0f;
		fLocal_2321 = 0f;
		fLocal_2323 = 0f;
		fLocal_2322 = 0f;
		fVar0 = 0f;
	}
	else
	{
		fLocal_2320 = func_243((80f + ((1f - (fLocal_2318 / 100f)) * (200f - 80f))), 0f, 200f);
		if (fLocal_2323 == 0f)
		{
			fLocal_2321 = 0f;
		}
		else
		{
			iVar1 = (MISC::GET_GAME_TIMER() - iLocal_2327);
			if (iVar1 <= iLocal_2324)
			{
				fVar2 = func_243((IntToFloat(iVar1) / SYSTEM::TO_FLOAT(iLocal_2324)), 0f, 1f);
				fLocal_2321 = func_250(fLocal_2322, fLocal_2323, fVar2);
			}
			else if (iVar1 <= iLocal_2325)
			{
				fLocal_2321 = fLocal_2323;
			}
			else if (iVar1 <= iLocal_2326)
			{
				fVar2 = func_243((IntToFloat(((iVar1 - iLocal_2325) - iLocal_2324)) / SYSTEM::TO_FLOAT(iLocal_2326)), 0f, 1f);
				fLocal_2321 = func_250(fLocal_2323, 0f, fVar2);
			}
			else
			{
				fLocal_2321 = 0f;
				fLocal_2323 = 0f;
				fLocal_2322 = 0f;
				iLocal_2327 = 0;
				iLocal_2324 = 0;
				iLocal_2325 = 0;
				iLocal_2326 = 0;
			}
		}
		fVar0 = ((fLocal_2320 + fLocal_2321) + IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 3)));
		if (MISC::GET_GAME_TIMER() - iLocal_2319) >= SYSTEM::ROUND((60000f / fVar0))
		{
			bLocal_2182 = true;
			iLocal_2319 = MISC::GET_GAME_TIMER();
		}
		else
		{
			bLocal_2182 = false;
		}
	}
	if (iLocal_2602 != 0 && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2602))
	{
		if ((MISC::GET_GAME_TIMER() - iLocal_2328) > 500)
		{
			if (fLocal_2330 != fVar0)
			{
				fLocal_2330 = fVar0;
				iVar3 = SYSTEM::ROUND(fLocal_2330);
				fVar4 = SYSTEM::TO_FLOAT(iVar3);
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2602, "SET_HEART_RATE");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar4);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
			iLocal_2328 = MISC::GET_GAME_TIMER();
		}
		if (fLocal_2329 != fLocal_2318)
		{
			fLocal_2329 = fLocal_2318;
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2602, "SET_HEALTH");
			GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fLocal_2329);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		if (!bLocal_2183)
		{
			if (bLocal_2182)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iLocal_2602, "SET_HEART_BEAT");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(3.5f);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			}
		}
	}
}

float func_250(float fParam0, float fParam1, float fParam2)//Position - 0x2A3AA
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

void func_251(float fParam0)//Position - 0x2A3BF
{
	if (fParam0 != 0f)
	{
	}
}

void func_252()//Position - 0x2A3CE
{
	func_31(1, 1, 1);
	func_2(3);
	func_253(0, 0);
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_253(bool bParam0, int iParam1)//Position - 0x2A3EC
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (!Global_DB77)
	{
		Global_DB77 = iParam1;
	}
	if (bParam0)
	{
		if ((func_225(0) && Global_1171B.f_1 == 1) && func_255(Global_1171B))
		{
		}
		else
		{
			Global_DB75 = 1;
		}
	}
	if (Global_19E56.f_2361 || func_225(0))
	{
		iVar0 = func_254();
		iVar1 = Global_1486F[iVar0 /*5*/];
		uVar2 = Global_11732.f_6D[iVar1 /*4*/];
		if (iVar0 == 4294967295)
		{
			if (Global_19E56.f_2361)
			{
			}
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar0 /*5*/].f_1, 4))
		{
			return;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar0 /*5*/].f_1, 5))
		{
			return;
		}
		MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_1171D, 1);
		Global_1172D = uVar2;
		Global_1172E = MISC::GET_GAME_TIMER();
	}
}

int func_254()//Position - 0x2A4C2
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar0 /*5*/].f_1, 2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

int func_255(int iParam0)//Position - 0x2A4F7
{
	switch (iParam0)
	{
		case 71:
			return 1;
			break;
		
		case 86:
			return 1;
			break;
		
		case 91:
			return 1;
			break;
		
		default:
			return 0;
			break;
	}
	return 0;
}

void func_256(int iParam0)//Position - 0x2A535
{
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(iParam0);
	}
}

void func_257()//Position - 0x2A554
{
	if (!iLocal_2162)
	{
		iLocal_2341 = 0;
		iLocal_2307 = 0;
		iLocal_2162 = 1;
		iLocal_2622 = 0;
	}
	if (iLocal_2162)
	{
		switch (iLocal_2341)
		{
			case 0:
				if (CUTSCENE::HAS_CUTSCENE_LOADED())
				{
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
					if (!PED::IS_PED_INJURED(iLocal_2567))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2567, cLocal_181, 1, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_182, 3, joaat("cs_mrk"), 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2575, sLocal_163, 0, 0, 0);
					if (!PED::IS_PED_INJURED(iLocal_2572[0]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2572[0], "Ped_1", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ped_1", 2, joaat("a_f_y_bevhills_01"), 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2572[1]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2572[1], "Ped_2", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ped_2", 2, joaat("a_f_y_bevhills_01"), 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2572[2]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2572[2], "Ped_3", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2572[3]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2572[3], "Ped_4", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ped_4", 2, joaat("a_f_y_bevhills_01"), 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2572[4]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2572[4], "Ped_6", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2572[5]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2572[5], "Ped_7", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2572[6]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2572[6], "Ped_8", 1, 0, 0);
					}
					if (!PED::IS_PED_INJURED(iLocal_2572[7]))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2572[7], "Ped_11", 0, 0, 0);
					}
					else
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Ped_11", 2, joaat("s_f_y_airhostess_01"), 0);
					}
					func_260(1, 1, 1, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					if (!RECORDING::_IS_RECORDING())
					{
						RECORDING::_0x48621C9FCA3EBD28(4);
					}
					func_258();
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_TREVOR_DRIVE_TO_AIRPORT"))
					{
						AUDIO::STOP_AUDIO_SCENE("FBI_3_TREVOR_DRIVE_TO_AIRPORT");
					}
					iLocal_2341++;
				}
				break;
			
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					func_256(800);
					PATHFIND::SET_ROADS_IN_AREA(Vector(61.21365f, -2519.508f, -909.8268f) - Vector(49.75f, 250f, 231.75f), Vector(61.21365f, -2519.508f, -909.8268f) + Vector(49.75f, 250f, 231.75f), false, 1);
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_2575))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_2575);
					}
					if (FIRE::IS_ENTITY_ON_FIRE(func_189()))
					{
						FIRE::STOP_ENTITY_FIRE(func_189());
					}
					if (FIRE::IS_ENTITY_ON_FIRE(iLocal_2567))
					{
						FIRE::STOP_ENTITY_FIRE(iLocal_2567);
					}
					MISC::CLEAR_AREA_OF_PEDS(-1036.71f, -2731.66f, 19.17f, 5f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(-950.4f, -2561.11f, 12.83f, 250f, 0, 0, 0, 0, false, 0);
					MISC::CLEAR_AREA_OF_PROJECTILES(-1032.9f, -2731.43f, 19.04f, 30f, 0);
					GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(unk_0x8000C77B5F336760(iLocal_2575, true), 15f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2575, 0, 0, 0f);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_2575, 0, 0, 0f);
					iLocal_2341++;
				}
				break;
			
			case 2:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2572[0]))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Ped_1", 0))
					{
						iLocal_2572[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ped_1", 0));
					}
				}
				else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ped_1", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2572[0]))
					{
						if (BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1031.32f, -2735.31f, 19.22f, "WORLD_HUMAN_SMOKING", 0.25f, 0))
						{
							BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[0], -1031.32f, -2735.31f, 19.22f, 0.25f, 4294967295);
							MISC::_0x1327E2FE9746BAEE(iLocal_2572[0], 0, 0);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2572[1]))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Ped_2", 0))
					{
						iLocal_2572[0] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ped_2", 0));
					}
				}
				else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ped_2", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2572[1]))
					{
						if (BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1031.93f, -2739.68f, 19.66f, "PROP_HUMAN_SEAT_CHAIR", 0.25f, 0))
						{
							BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[1], -1031.93f, -2739.68f, 19.66f, 0.25f, 4294967295);
							MISC::_0x1327E2FE9746BAEE(iLocal_2572[1], 0, 0);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2572[3]))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Ped_4", 0))
					{
						iLocal_2572[3] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ped_4", 0));
					}
				}
				else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ped_4", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2572[3]))
					{
						if (BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1042.16f, -2729.93f, 19.17f, "WORLD_HUMAN_DRINKING", 0.25f, 0))
						{
							BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[3], -1042.16f, -2729.93f, 19.17f, 0.25f, 4294967295);
							MISC::_0x1327E2FE9746BAEE(iLocal_2572[3], 0, 0);
						}
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2572[7]))
				{
					if (CUTSCENE::DOES_CUTSCENE_ENTITY_EXIST("Ped_11", 0))
					{
						iLocal_2572[7] = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Ped_11", 0));
					}
				}
				else if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Ped_11", 0))
				{
					if (!PED::IS_PED_INJURED(iLocal_2572[7]))
					{
						if (BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1046.8f, -2735.29f, 19.59f, "PROP_HUMAN_SEAT_CHAIR", 0.25f, 0))
						{
							BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[7], -1046.8f, -2735.29f, 19.59f, 0.25f, 4294967295);
							MISC::_0x1327E2FE9746BAEE(iLocal_2572[7], 0, 0);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
				{
					if (RECORDING::_IS_RECORDING())
					{
						HUD::_0xC65AB383CD91DF98();
					}
					bLocal_2285 = true;
				}
				if (bLocal_2285)
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_163, 0))
				{
					VEHICLE::SET_ALL_VEHICLES_SPAWN(iLocal_2575, 1, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_2575, 0, 1);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_2575, 1, 1);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_2575, true, 1, 0);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(sLocal_161, 0))
				{
					if (iLocal_2295 != 0)
					{
						PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2295, 0);
					}
					unk_0x02DD9F29D9655E48();
					PATHFIND::SET_PED_PATHS_BACK_TO_ORIGINAL(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f), 0);
					PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(61.21365f, -2519.508f, -909.8268f) - Vector(49.75f, 250f, 231.75f), Vector(61.21365f, -2519.508f, -909.8268f) + Vector(49.75f, 250f, 231.75f), 1);
					PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
					PED::SET_PED_INTO_VEHICLE(func_189(), iLocal_2575, 4294967295);
					MISC::_0x1327E2FE9746BAEE(func_189(), 0, 0);
					PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2295, 0);
					VEHICLE::_REMOVE_SPEED_ZONE(iLocal_2302[0]);
					func_260(0, 1, 0, 0, 0);
					iLocal_272 = 13;
				}
				break;
		}
		if (iLocal_272 != 12)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_2600))
			{
				HUD::REMOVE_BLIP(&iLocal_2600);
			}
			if (iLocal_2302[0] != 4294967295)
			{
				VEHICLE::_REMOVE_SPEED_ZONE(iLocal_2302[0]);
				iLocal_2302[0] = 4294967295;
			}
			func_56();
			iLocal_2162 = 0;
		}
	}
}

void func_258()//Position - 0x2AC3D
{
	Global_3960 = 0;
	func_259();
}

void func_259()//Position - 0x2AC4D
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_41C1 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_3DCE = 6;
	}
}

void func_260(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x2AC6E
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_265(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_41())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_3(1, iParam3, iParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_265(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_3(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_264(CAM::_0xDC9DA9E8789F5246())) && !func_262(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_261()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_264(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_261()//Position - 0x2AD97
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

bool func_262(int iParam0, int iParam1)//Position - 0x2ADB4
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_263(4294967295, 0) == 8;
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

int func_263(int iParam0, bool bParam1)//Position - 0x2ADFF
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_117();
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

int func_264(int iParam0)//Position - 0x2AE40
{
	if (func_262(iParam0, 0))
	{
		return 1;
	}
	if (func_241())
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

void func_265(int iParam0)//Position - 0x2AE82
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

void func_266()//Position - 0x2AEA5
{
	if (!iLocal_2162)
	{
		func_342(11, "12. Trevor Drives MrK to Airport", 1, 0, 0, 1);
		func_338();
		func_201(&Local_273, 1, 0);
		SYSTEM::SETTIMERB(0);
		PED::SET_PED_CONFIG_FLAG(iLocal_2567, 116, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_2575) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iLocal_2575, 0))
		{
			VEHICLE::_0x2B6747FAA9DB9D6B(iLocal_2575, 1);
		}
		GRAPHICS::_0x54E22EA2C1956A8D(1f);
		HUD::_0x14621BB1DF14E2B2(5);
		GRAPHICS::_0xA356990E161C9E65(1);
		func_337(iLocal_2567);
		ENTITY::SET_ENTITY_HEALTH(iLocal_2567, true);
		INTERIOR::UNPIN_INTERIOR(iLocal_2300);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_2575, true);
		AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_DRIVE_TO_AIRPORT");
		PED::SET_PED_NON_CREATION_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f));
		PATHFIND::SET_PED_PATHS_IN_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f), 0, 0);
		iLocal_2295 = PED::ADD_SCENARIO_BLOCKING_AREA(Vector(21.23223f, -2738.568f, -1038.28f) - Vector(2.3125f, 69.5f, 97.25f), Vector(21.23223f, -2738.568f, -1038.28f) + Vector(2.3125f, 69.5f, 97.25f), 0, 1, 1, 1);
		MISC::CLEAR_AREA(-1038.28f, -2738.568f, 21.23223f, 40.813f, 1, 0, 0, false);
		if (iLocal_2302[0] != 4294967295)
		{
			VEHICLE::_REMOVE_SPEED_ZONE(iLocal_2302[0]);
		}
		iLocal_2302[0] = VEHICLE::_ADD_SPEED_ZONE_FOR_COORD(-1057.38f, -2715.4f, 19.12f, 4.375f, 0f, 0);
		MISC::CLEAR_AREA_OF_VEHICLES(vLocal_103, 100f, 0, 0, 0, 0, false, 0);
		if (iLocal_2339)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_26()))
			{
				func_24(func_26(), 0);
			}
			Global_19E56.f_933.f_21B.f_12A[0 /*472*/][21 /*5*/] = { Local_2340 };
			if (ENTITY::DOES_ENTITY_EXIST(func_26()))
			{
				func_5(func_26(), 1, 0);
			}
			iLocal_2339 = 0;
		}
		func_256(800);
		iLocal_2341 = 0;
		iLocal_2307 = 0;
		iLocal_2162 = 1;
		iLocal_2622 = 0;
		if (!RECORDING::_IS_RECORDING())
		{
			RECORDING::_0x293220DA1B46CEBC(2f, 10f, 4);
		}
	}
	if (iLocal_2162)
	{
		switch (iLocal_2341)
		{
			case 0:
				if (!iLocal_2256[0])
				{
					if (func_336(AUDIO::_0x0626A247D2405330(), vLocal_103, 1) < 250f)
					{
						iLocal_2256[0] = 1;
					}
				}
				else if (func_336(AUDIO::_0x0626A247D2405330(), vLocal_103, 1) > 300f)
				{
					iLocal_2256[0] = 0;
				}
				if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
				{
					if ((iLocal_2256[1] && iLocal_2256[2]) && func_336(AUDIO::_0x0626A247D2405330(), vLocal_103, 1) < 100f)
					{
						if (MISC::ARE_STRINGS_EQUAL(cLocal_181, sLocal_177))
						{
							AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
						}
						CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_8", 8);
						func_334(1, 0, cLocal_181, 1);
						func_331(&uLocal_1278, iLocal_2572[0], "Ped_1", 0);
						func_331(&uLocal_1278, iLocal_2572[1], "Ped_2", 0);
						func_331(&uLocal_1278, iLocal_2572[2], "Ped_3", 0);
						func_331(&uLocal_1278, iLocal_2572[3], "Ped_4", 0);
						func_331(&uLocal_1278, iLocal_2572[4], "Ped_6", 0);
						func_331(&uLocal_1278, iLocal_2572[5], "Ped_7", 0);
						func_331(&uLocal_1278, iLocal_2572[6], "Ped_8", 0);
						func_331(&uLocal_1278, iLocal_2572[7], "Ped_11", 0);
					}
				}
				else if (func_336(AUDIO::_0x0626A247D2405330(), vLocal_103, 1) > 120f)
				{
					if (CUTSCENE::IS_CUTSCENE_ACTIVE())
					{
						CUTSCENE::REMOVE_CUTSCENE();
					}
				}
				if (iLocal_2256[0])
				{
					if (!iLocal_2256[1] || !iLocal_2256[2])
					{
						switch (iLocal_2622)
						{
							case 0:
								func_330(&uLocal_293, joaat("a_f_y_bevhills_01"));
								iLocal_2622++;
								break;
							
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(joaat("a_f_y_bevhills_01")))
								{
									func_330(&uLocal_293, joaat("a_m_m_bevhills_01"));
									iLocal_2622++;
								}
								break;
							
							case 2:
								if (STREAMING::HAS_MODEL_LOADED(joaat("a_m_m_bevhills_01")))
								{
									func_330(&uLocal_293, joaat("s_f_y_airhostess_01"));
									iLocal_2622++;
								}
								break;
							
							case 3:
								if (STREAMING::HAS_MODEL_LOADED(joaat("s_f_y_airhostess_01")))
								{
									iLocal_2622++;
								}
								break;
						}
						if (iLocal_2622 >= 4)
						{
							if (!iLocal_2256[1])
							{
								iLocal_2572[0] = PED::CREATE_PED(26, joaat("a_f_y_bevhills_01"), -1031.32f, -2735.31f, 19.22f, 0f, 1, true);
								PED::SET_PED_KEEP_TASK(iLocal_2572[0], true);
								PED::SET_PED_NAME_DEBUG(iLocal_2572[0], "Ped_1");
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 1, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 2, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 3, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 4, 23, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 5, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 6, 10, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 7, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 8, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 9, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[0], 10, 0, 0, 0);
								iLocal_2572[1] = PED::CREATE_PED(26, joaat("a_f_y_bevhills_01"), -1031.93f, -2739.68f, 19.66f, 0f, 1, true);
								PED::SET_PED_KEEP_TASK(iLocal_2572[1], true);
								PED::SET_PED_NAME_DEBUG(iLocal_2572[1], "Ped_2");
								iLocal_2572[2] = PED::CREATE_PED(26, joaat("a_f_y_bevhills_01"), -1033.03f, -2735.05f, 19.17f, 0f, 1, true);
								PED::SET_PED_KEEP_TASK(iLocal_2572[2], true);
								PED::SET_PED_NAME_DEBUG(iLocal_2572[2], "Ped_3");
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[2], 0, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[2], 2, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[2], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[2], 4, 1, 1, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[2], 6, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[2], 8, 1, 0, 0);
								iLocal_2572[3] = PED::CREATE_PED(26, joaat("a_f_y_bevhills_01"), -1042.16f, -2729.93f, 19.17f, 0f, 1, true);
								PED::SET_PED_KEEP_TASK(iLocal_2572[3], true);
								PED::SET_PED_NAME_DEBUG(iLocal_2572[3], "Ped_4");
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[3], 0, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[3], 2, 4, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[3], 3, 0, 2, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[3], 4, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[3], 6, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[3], 8, 0, 2, 0);
								iLocal_2572[4] = PED::CREATE_PED(26, joaat("s_f_y_airhostess_01"), -1040.61f, -2730.07f, 19.17f, 0f, 1, true);
								PED::SET_PED_KEEP_TASK(iLocal_2572[4], true);
								PED::SET_PED_NAME_DEBUG(iLocal_2572[4], "Ped_6");
								iLocal_2572[5] = PED::CREATE_PED(26, joaat("a_m_m_bevhills_01"), -1030.32f, -2738.53f, 19.17f, 0f, 1, true);
								PED::SET_PED_KEEP_TASK(iLocal_2572[5], true);
								PED::SET_PED_NAME_DEBUG(iLocal_2572[5], "Ped_7");
								iLocal_2572[6] = PED::CREATE_PED(26, joaat("a_m_m_bevhills_01"), -1035.18f, -2740.79f, 19.17f, 0f, 1, true);
								PED::SET_PED_KEEP_TASK(iLocal_2572[6], true);
								PED::SET_PED_NAME_DEBUG(iLocal_2572[6], "Ped_8");
								iLocal_2572[7] = PED::CREATE_PED(26, joaat("s_f_y_airhostess_01"), -1046.8f, -2735.29f, 19.59f, 0f, 1, true);
								PED::SET_PED_KEEP_TASK(iLocal_2572[7], true);
								PED::SET_PED_NAME_DEBUG(iLocal_2572[7], "Ped_11");
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[7], 0, 0, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[7], 2, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[7], 3, 1, 0, 0);
								PED::SET_PED_COMPONENT_VARIATION(iLocal_2572[7], 4, 0, 1, 0);
								iLocal_2256[1] = 1;
							}
							else if (!iLocal_2256[2])
							{
								iLocal_2256[2] = 1;
								if ((!PED::IS_PED_INJURED(iLocal_2572[0]) && !func_329(iLocal_2572[0], 1647992574, 1)) && BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1031.32f, -2735.31f, 19.22f, "WORLD_HUMAN_SMOKING", 0.25f, 0))
								{
									BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[0], -1031.32f, -2735.31f, 19.22f, 0.25f, 4294967295);
									iLocal_2256[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_2572[1]) && !func_329(iLocal_2572[1], 1647992574, 1)) && BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1031.93f, -2739.68f, 19.66f, "PROP_HUMAN_SEAT_CHAIR", 0.25f, 0))
								{
									BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[1], -1031.93f, -2739.68f, 19.66f, 0.25f, 4294967295);
									iLocal_2256[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_2572[2]) && !func_329(iLocal_2572[2], 1647992574, 1)) && BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1033.03f, -2735.05f, 19.17f, "WORLD_HUMAN_HANG_OUT_STREET", 0.25f, 0))
								{
									BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[2], -1033.03f, -2735.05f, 19.17f, 0.25f, 4294967295);
									iLocal_2256[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_2572[3]) && !func_329(iLocal_2572[3], 1647992574, 1)) && BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1042.16f, -2729.93f, 19.17f, "WORLD_HUMAN_DRINKING", 0.25f, 0))
								{
									BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[3], -1042.16f, -2729.93f, 19.17f, 0.25f, 4294967295);
									iLocal_2256[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_2572[4]) && !func_329(iLocal_2572[4], 1647992574, 1)) && BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1040.61f, -2730.07f, 19.17f, "WORLD_HUMAN_LEANING", 0.25f, 0))
								{
									BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[4], -1040.61f, -2730.07f, 19.17f, 0.25f, 4294967295);
									iLocal_2256[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_2572[5]) && !func_329(iLocal_2572[5], 1647992574, 1)) && BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1030.32f, -2738.53f, 19.17f, "WORLD_HUMAN_DRINKING", 0.25f, 0))
								{
									BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[5], -1030.32f, -2738.53f, 19.17f, 0.25f, 4294967295);
									iLocal_2256[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_2572[6]) && !func_329(iLocal_2572[6], 1647992574, 1)) && BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1035.18f, -2740.79f, 19.17f, "WORLD_HUMAN_DRINKING", 0.25f, 0))
								{
									BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[6], -1035.18f, -2740.79f, 19.17f, 0.25f, 4294967295);
									iLocal_2256[2] = 0;
								}
								if ((!PED::IS_PED_INJURED(iLocal_2572[7]) && !func_329(iLocal_2572[7], 1647992574, 1)) && BRAIN::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(-1046.8f, -2735.29f, 19.59f, "PROP_HUMAN_SEAT_CHAIR", 0.25f, 0))
								{
									BRAIN::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iLocal_2572[7], -1046.8f, -2735.29f, 19.59f, 0.25f, 4294967295);
									iLocal_2256[2] = 0;
								}
							}
						}
					}
				}
				else
				{
					func_66(&uLocal_293, joaat("a_f_y_bevhills_01"));
					func_66(&uLocal_293, joaat("a_m_m_bevhills_01"));
					func_66(&uLocal_293, joaat("s_f_y_airhostess_01"));
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2572[0]))
					{
						PED::DELETE_PED(&(iLocal_2572[0]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2572[1]))
					{
						PED::DELETE_PED(&(iLocal_2572[1]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2572[2]))
					{
						PED::DELETE_PED(&(iLocal_2572[2]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2572[3]))
					{
						PED::DELETE_PED(&(iLocal_2572[3]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2572[4]))
					{
						PED::DELETE_PED(&(iLocal_2572[4]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2572[5]))
					{
						PED::DELETE_PED(&(iLocal_2572[5]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2572[6]))
					{
						PED::DELETE_PED(&(iLocal_2572[6]));
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_2572[7]))
					{
						PED::DELETE_PED(&(iLocal_2572[7]));
					}
					iLocal_2256[1] = 0;
					iLocal_2256[2] = 0;
					iLocal_2256[3] = 0;
				}
				if (func_284(&Local_273, vLocal_103, 5.0625f, 4.8125f, 2.8125f, 1, iLocal_2567, iLocal_2575, sLocal_186, "", "", "CMN_GENGETBCKYT", 1, 1, 1, 4294967295))
				{
					func_201(&Local_273, 1, 0);
					func_282();
					iLocal_2341++;
				}
				else
				{
					switch (iLocal_2307)
					{
						case 0:
							if (func_281())
							{
								iLocal_2307++;
							}
							break;
						
						case 1:
							if (func_281())
							{
								if ((PED::IS_PED_IN_VEHICLE(func_189(), iLocal_2575, 0) && PED::IS_PED_IN_VEHICLE(iLocal_2567, iLocal_2575, 0)) && SYSTEM::TIMERB() >= 2000)
								{
									func_270("F3_DRV3", "", 1);
									if (iLocal_2295 != 0)
									{
										PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_2295, 0);
									}
									iLocal_2307++;
								}
							}
							break;
						
						case 2:
							if (func_336(AUDIO::_0x0626A247D2405330(), vLocal_103, 1) < 100f)
							{
								if (!func_281())
								{
									func_282();
								}
								else
								{
									func_270("F3_AIRPORT", 0, 0);
									iLocal_2307++;
								}
							}
							else if (func_900())
							{
								if ((!PED::IS_PED_IN_VEHICLE(func_189(), iLocal_2575, 0) || !PED::IS_PED_IN_VEHICLE(iLocal_2567, iLocal_2575, 0)) || PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246()) > 0)
								{
									func_269(1);
								}
								else
								{
									func_269(0);
								}
							}
							break;
						}
				}
				break;
			
			case 1:
				if (func_267(iLocal_2575, 4f, 2, 0.25f, 0, 1, 0))
				{
					iLocal_272 = 12;
				}
				break;
		}
		if (iLocal_272 != 11)
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_2600))
			{
				HUD::REMOVE_BLIP(&iLocal_2600);
			}
			func_56();
			iLocal_2162 = 0;
		}
	}
}

int func_267(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0x2BC81
{
	PAD::DISABLE_CONTROL_ACTION(0, 71, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 72, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 76, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 73, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	if (bParam5)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 69, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 70, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 74, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 86, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 138, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 136, 1);
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
	PAD::DISABLE_CONTROL_ACTION(0, 131, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 132, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 123, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 126, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 129, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 130, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 133, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 134, 1);
	CAM::_0x17FCA7199A530203();
	func_268(iParam0);
	if ((MISC::GET_GAME_TIMER() - Global_1D) > 500)
	{
		VEHICLE::_SET_VEHICLE_HALT(iParam0, fParam1, iParam2, iParam4);
	}
	Global_1D = MISC::GET_GAME_TIMER();
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(iParam0)) <= fParam3)
		{
			return 1;
		}
	}
	return 0;
}

void func_268(int iParam0)//Position - 0x2BE10
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		if (unk_0xB90934C41404D57A(iParam0))
		{
			if (unk_0x8324A028D312E68D(iParam0))
			{
				unk_0xFE0D4DB713B1C1E7(iParam0, 0);
			}
		}
	}
}

void func_269(int iParam0)//Position - 0x2BE3C
{
	Global_41C1 = iParam0;
}

void func_270(char* sParam0, char* sParam1, int iParam2)//Position - 0x2BE49
{
	struct<4> Var0;
	
	func_258();
	StringCopy(&Var0, sParam0, 16);
	if (iParam2 && iLocal_2313 > 0)
	{
		StringConCat(&Var0, "_TL", 16);
	}
	iLocal_2613 = 1;
	Local_2614 = { Var0 };
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (func_280(&uLocal_2402, cLocal_2604, &Local_2614, 8, 0, 0, 0))
		{
			iLocal_2613 = 0;
			StringCopy(&Local_2614, "", 16);
		}
	}
	else
	{
		StringCopy(&cLocal_2617, sParam1, 16);
		if (func_271(&uLocal_2402, cLocal_2604, &Local_2614, &cLocal_2617, 8, 0, 0))
		{
			iLocal_2613 = 0;
			StringCopy(&Local_2614, "", 16);
			StringCopy(&cLocal_2617, "", 16);
		}
	}
}

bool func_271(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2BEE1
{
	func_279(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_3DD5 = 0;
	Global_3DDC = 0;
	Global_3DD7 = 0;
	Global_41AD = 0;
	Global_41AF = 0;
	Global_41B3 = 1;
	StringCopy(&Global_41BA, sParam3, 24);
	Global_280001 = 0;
	return func_272(sParam2, iParam4, 0);
}

int func_272(char* sParam0, int iParam1, bool bParam2)//Position - 0x2BF35
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
					func_33();
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
		if (func_278(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_277();
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
				func_276();
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
				if (func_275())
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
			if (func_41())
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
			func_274();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_273();
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
		func_33();
	}
	return 0;
}

void func_273()//Position - 0x2C203
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

void func_274()//Position - 0x2C235
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

int func_275()//Position - 0x2C2CA
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

void func_276()//Position - 0x2C363
{
	if (func_130(14))
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
		Global_38B1 = func_190();
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

void func_277()//Position - 0x2C405
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

bool func_278(int iParam0, int iParam1)//Position - 0x2C45D
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

void func_279(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2C498
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

bool func_280(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x2C4EE
{
	func_279(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_272(sParam2, iParam3, 0);
}

int func_281()//Position - 0x2C53C
{
	if (func_900())
	{
		return 0;
	}
	if (HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 0;
		}
	}
	return 1;
}

void func_282()//Position - 0x2C562
{
	Global_3960 = 0;
	func_283();
}

void func_283()//Position - 0x2C572
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_41C1 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_3DCE = 6;
		return;
	}
}

bool func_284(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, bool bParam10, bool bParam11, bool bParam12, int iParam13)//Position - 0x2C596
{
	return func_285(iParam0, vParam1, vParam2, bParam3, iParam4, 0, 0, iParam5, sParam6, sParam7, sParam7, sParam7, sParam7, sParam8, sParam9, bParam10, bParam11, bParam12, iParam13);
}

int func_285(int iParam0, vector3 vParam1, vector3 vParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, bool bParam15, bool bParam16, bool bParam17, int iParam18)//Position - 0x2C5CA
{
	return func_286(iParam0, vParam1, vParam2, func_328(), func_328(), bParam3, 5, iParam4, iParam5, iParam6, iParam7, sParam8, sParam9, sParam10, sParam11, sParam12, sParam13, bParam15, bParam16, sParam14, 0, 0, bParam17, iParam18, 0, 0, 0, 1, 1065353216);
}

int func_286(int iParam0, vector3 vParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, char* sParam11, char* sParam12, char* sParam13, char* sParam14, char* sParam15, char* sParam16, bool bParam17, bool bParam18, char* sParam19, bool bParam20, int iParam21, bool bParam22, int iParam23, char* sParam24, char* sParam25, char* sParam26, bool bParam27, float fParam28)//Position - 0x2C614
{
	int iVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	vVar3 = { vParam1 + Vector(1f, 0f, 0f) };
	iParam0->f_11[0] = iParam7;
	iParam0->f_11[1] = iParam8;
	iParam0->f_11[2] = iParam9;
	iParam0->f_10 = iParam7;
	func_327(iParam0);
	func_326(iParam0);
	func_325();
	if (func_309(iParam0, iParam0->f_11[0], iParam0->f_11[1], iParam0->f_11[2], sParam12, sParam13, sParam14, sParam15, iParam0->f_8, bParam17, iParam10, 0, 0, sParam24, sParam25, sParam26, iParam6, bParam18))
	{
		func_308(sParam12);
		func_308(sParam13);
		func_308(sParam14);
		func_308(sParam15);
		if (CAM::IS_SCREEN_FADED_IN())
		{
			bVar1 = false;
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
			{
				if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10, 0))
				{
					MISC::SET_BIT(&(iParam0->f_D), 3);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 23))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 23);
					}
					MISC::SET_BIT(&(iParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else if (iParam6 == 4 || iParam6 == 5)
			{
				if (func_306(iParam0, iParam21))
				{
					MISC::SET_BIT(&(iParam0->f_D), 3);
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
					{
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
					}
					MISC::SET_BIT(&(iParam0->f_D), 9);
					bVar1 = true;
				}
			}
			else
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				func_308(sParam16);
				func_308(sParam19);
				func_308("MORE_SEATS");
				if (bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
				{
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						func_308(sParam11);
					}
					if (HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(iParam0);
					}
					if ((!func_303(iParam0, 1) && !func_302(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_300(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
							{
								func_298(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_D), 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 1);
					}
				}
				else
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
					{
						func_308("LOSE_WANTED");
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 0);
						MISC::SET_BIT(&(iParam0->f_D), 1);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 1))
					{
						if (!func_303(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
							{
								func_298(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 1);
						}
					}
					if (!HUD::DOES_BLIP_EXIST(iParam0->f_5))
					{
						if (HUD::DOES_BLIP_EXIST(*iParam0))
						{
							HUD::REMOVE_BLIP(iParam0);
						}
						iParam0->f_5 = func_297(vVar3, 0);
						if (!iParam23 == 4294967295)
						{
							HUD::SET_BLIP_SPRITE(iParam0->f_5, iParam23);
						}
						if (bParam27)
						{
							func_296(iParam0->f_5, iParam0);
						}
					}
					else if (!func_295(vVar3, HUD::GET_BLIP_COORDS(iParam0->f_5), 0.1f, 0))
					{
						HUD::SET_BLIP_COORDS(iParam0->f_5, vVar3);
						if (bParam27)
						{
							func_296(iParam0->f_5, iParam0);
						}
					}
					if (!func_303(iParam0, 2))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 2))
						{
							func_300(iParam0, sParam11, 0);
							MISC::SET_BIT(&(iParam0->f_D), 2);
						}
					}
					if (iParam6 == 4 || iParam6 == 5)
					{
						if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 13))
						{
							bParam5 = false;
						}
					}
					bVar1 = false;
					bVar4 = false;
					iVar5 = 0;
					if ((iParam6 == 1 || iParam6 == 3) || iParam6 == 5)
					{
						bVar4 = true;
					}
					if (iParam6 == 2 || iParam6 == 3)
					{
						iVar5 = 1;
					}
					else if (iParam6 == 4 || iParam6 == 5)
					{
						iVar5 = 2;
					}
					if (bParam20)
					{
						ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam1, vParam2, bParam5, bVar4, iVar5);
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), vParam3, vParam4, fParam28, 0, bVar4, iVar5))
						{
							bVar1 = true;
						}
					}
					else if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), vParam1, vParam2, bParam5, bVar4, iVar5))
					{
						bVar1 = true;
					}
					if (bVar1)
					{
						bVar1 = true;
						iVar2 = 0;
						while (iVar2 < 3)
						{
							if (!PED::IS_PED_INJURED(iParam0->f_11[iVar2]))
							{
								if (iParam6 == 4 || iParam6 == 5)
								{
									iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_11[iVar2], iVar0, 0))
									{
										bVar1 = false;
									}
								}
								else if (iParam10 != 0)
								{
									if (!PED::IS_PED_IN_VEHICLE(iParam0->f_11[iVar2], iParam10, 0))
									{
										bVar1 = false;
									}
								}
								else if (!PED::IS_PED_GROUP_MEMBER(iParam0->f_11[iVar2], func_202()) || !func_293(iParam0->f_11[iVar2], 1))
								{
									bVar1 = false;
								}
							}
							iVar2++;
						}
						if (bVar1)
						{
							if (func_290(iParam0))
							{
								func_308(sParam11);
								func_308(sParam16);
								func_308(sParam12);
								func_308(sParam13);
								func_308(sParam14);
								func_308(sParam15);
								func_308("LOSE_WANTED");
								func_308("MORE_SEATS");
								func_308(sParam19);
								func_201(iParam0, 1, 0);
								return 1;
							}
						}
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam10))
			{
				if ((bParam18 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) && (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 22)))
				{
					func_308(sParam16);
					func_308(sParam19);
					if (HUD::DOES_BLIP_EXIST(iParam0->f_5) || HUD::DOES_BLIP_EXIST(*iParam0))
					{
						HUD::REMOVE_BLIP(&(iParam0->f_5));
						HUD::REMOVE_BLIP(iParam0);
						func_308(sParam11);
					}
					if ((!func_303(iParam0, 1) && !func_302(iParam0)) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
					{
						if (bParam22)
						{
							func_300(iParam0, "LOSE_WANTED", 0);
							if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
							{
								func_298(iParam0->f_11[0], "VEHICLE_POLICE_PURSUIT", 3);
							}
						}
						MISC::SET_BIT(&(iParam0->f_D), 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 1);
					}
				}
				else
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
					{
						func_308("LOSE_WANTED");
						GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 0);
						MISC::SET_BIT(&(iParam0->f_D), 1);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 1))
					{
						if (!func_303(iParam0, 1))
						{
							if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
							{
								func_298(iParam0->f_11[0], "LOSE_WANTED_LEVEL", 3);
							}
							GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 1);
						}
					}
					if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
					{
						if (!HUD::DOES_BLIP_EXIST(*iParam0))
						{
							if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
							{
								HUD::REMOVE_BLIP(&(iParam0->f_5));
								func_308(sParam11);
							}
							*iParam0 = func_287(iParam10, 0, 0);
							HUD::SET_BLIP_DISPLAY(*iParam0, 2);
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
							{
								func_296(*iParam0, iParam0);
							}
						}
						if (!func_303(iParam0, 2))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 3))
							{
								func_300(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_D), 3);
								GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
							{
								if (!MISC::IS_STRING_NULL(sParam19))
								{
									if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
									{
										func_300(iParam0, sParam19, 0);
										MISC::SET_BIT(&(iParam0->f_D), 4);
									}
								}
								else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
								{
									func_300(iParam0, sParam16, 0);
									MISC::SET_BIT(&(iParam0->f_D), 4);
								}
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 23))
								{
									if (!PED::IS_PED_INJURED(iParam0->f_11[0]))
									{
										func_298(iParam0->f_11[0], "GET_IN_CAR", 3);
									}
									MISC::SET_BIT(&(iParam0->f_D), 23);
								}
							}
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
				{
					HUD::REMOVE_BLIP(&(iParam0->f_5));
					func_308(sParam11);
				}
				if (iParam6 == 4 || iParam6 == 5)
				{
					if (iParam21 > 0)
					{
						if (!func_303(iParam0, 2))
						{
							if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 13))
								{
									iVar6 = 0;
									iVar7 = 0;
									iVar2 = 0;
									while (iVar2 < 3)
									{
										if (!PED::IS_PED_INJURED(iParam0->f_11[iVar2]))
										{
											iVar6++;
										}
										iVar2++;
									}
									iVar7 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar6);
									if (!PED::IS_PED_INJURED(iParam0->f_11[iVar7]))
									{
										func_298(iParam0->f_11[iVar7], "NEED_A_BIGGER_VEHICLE", 3);
									}
									func_300(iParam0, "MORE_SEATS", 0);
									MISC::SET_BIT(&(iParam0->f_D), 13);
								}
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 3))
							{
								func_300(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_D), 3);
								GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
							{
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
								{
									func_300(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_D), 4);
								}
							}
						}
					}
					else if (!func_303(iParam0, 2))
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 3))
						{
							func_300(iParam0, sParam16, 0);
							MISC::SET_BIT(&(iParam0->f_D), 3);
							GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 4);
						}
						else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 9))
						{
							if (!MISC::IS_STRING_NULL(sParam19))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
								{
									func_300(iParam0, sParam19, 0);
									MISC::SET_BIT(&(iParam0->f_D), 4);
								}
							}
							else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 4))
							{
								func_300(iParam0, sParam16, 0);
								MISC::SET_BIT(&(iParam0->f_D), 4);
							}
						}
					}
				}
			}
		}
	}
	else
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 0))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 0);
		}
		func_308(sParam11);
		func_308(sParam16);
		func_308(sParam19);
		func_308(sParam16);
		func_308("LOSE_WANTED");
		if (HUD::DOES_BLIP_EXIST(iParam0->f_5))
		{
			HUD::REMOVE_BLIP(&(iParam0->f_5));
		}
		if (HUD::DOES_BLIP_EXIST(*iParam0))
		{
			HUD::REMOVE_BLIP(iParam0);
		}
	}
	GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 11);
	GRAPHICS::_0x35FB78DC42B7BD21(&(iParam0->f_D), 12);
	return 0;
}

int func_287(int iParam0, bool bParam1, bool bParam2)//Position - 0x2CF7C
{
	return func_288(iParam0, !bParam1, bParam2);
}

int func_288(int iParam0, bool bParam1, bool bParam2)//Position - 0x2CF8F
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_289(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_289(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_289(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

float func_289(bool bParam0, float fParam1, float fParam2)//Position - 0x2D033
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_290(int iParam0)//Position - 0x2D04A
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 12))
	{
		if (func_292(AUDIO::_0x0626A247D2405330()))
		{
			if (func_291(1, 0, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 7))
			{
				return 1;
			}
		}
	}
	else if (func_291(1, 0, 1) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0->f_D, 7))
	{
		return 1;
	}
	return 0;
}

int func_291(bool bParam0, bool bParam1, bool bParam2)//Position - 0x2D0A8
{
	int iVar0;
	
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 0;
	}
	if (bParam0)
	{
		if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			return 0;
		}
	}
	iVar0 = 0;
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (bParam0)
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				return 0;
			}
		}
		if (bParam2)
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 4294967295, 0) != AUDIO::_0x0626A247D2405330())
				{
					return 0;
				}
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(iVar0) > 1.011f)
			{
				return 0;
			}
		}
	}
	else if (bParam1)
	{
		return 0;
	}
	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	if (!PLAYER::CAN_PLAYER_START_MISSION(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	return 1;
}

int func_292(int iParam0)//Position - 0x2D18D
{
	float fVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_293(int iParam0, int iParam1)//Position - 0x2D1C4
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()) && iParam1)
		{
			if (func_294(AUDIO::_0x0626A247D2405330(), iParam0))
			{
				PED::SET_GROUP_SEPARATION_RANGE(func_202(), 50f);
				return 1;
			}
		}
		else if (PED::IS_PED_GROUP_MEMBER(iParam0, func_202()))
		{
			PED::SET_GROUP_SEPARATION_RANGE(func_202(), 50f);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_294(int iParam0, int iParam1)//Position - 0x2D22F
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
			{
				if (!PED::IS_PED_INJURED(iParam1))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(iParam1, iVar0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_295(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x2D277
{
	if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	if (!bParam3)
	{
		if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
		{
			if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
			{
				if (MISC::ABSF((vParam0.z - vParam1.z)) <= fParam2)
				{
					return 1;
				}
			}
		}
	}
	else if (MISC::ABSF((vParam0.x - vParam1.x)) <= fParam2)
	{
		if (MISC::ABSF((vParam0.y - vParam1.y)) <= fParam2)
		{
			return 1;
		}
	}
	return 0;
}

void func_296(int iParam0, int iParam1)//Position - 0x2D2F2
{
	if (HUD::DOES_BLIP_EXIST(iParam0))
	{
		if (HUD::DOES_BLIP_EXIST(iParam1->f_6))
		{
			HUD::SET_BLIP_ROUTE(iParam1->f_6, false);
		}
		HUD::_0x3DDA37128DD1ACA8(0);
		HUD::_0x67EEDEA1B9BAFD94();
		iParam1->f_6 = iParam0;
		HUD::SET_BLIP_ROUTE(iParam0, true);
	}
}

int func_297(vector3 vParam0, bool bParam1)//Position - 0x2D32D
{
	int iVar0;
	
	iVar0 = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_289(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
	HUD::SET_BLIP_ROUTE(iVar0, bParam1);
	return iVar0;
}

void func_298(int iParam0, char* sParam1, int iParam2)//Position - 0x2D359
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_299(iParam2), 1);
}

int func_299(int iParam0)//Position - 0x2D370
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

void func_300(int iParam0, char* sParam1, bool bParam2)//Position - 0x2D565
{
	if (!bParam2)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_301(sParam1, 7500, 1);
			}
		}
	}
	iParam0->f_A = MISC::GET_GAME_TIMER();
}

void func_301(char* sParam0, int iParam1, int iParam2)//Position - 0x2D59D
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

int func_302(int iParam0)//Position - 0x2D5B6
{
	if (!PED::IS_PED_INJURED(iParam0->f_10))
	{
		if (AUDIO::IS_AMBIENT_SPEECH_PLAYING(iParam0->f_10))
		{
			return 1;
		}
	}
	return 0;
}

int func_303(int iParam0, int iParam1)//Position - 0x2D5DA
{
	if (iParam1 != 1 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (HUD::IS_MESSAGE_BEING_DISPLAYED())
		{
			return 1;
		}
		if (func_305(iParam0))
		{
			return 1;
		}
	}
	if (iParam1 != 2 || HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
	{
		if (func_900() && !func_304())
		{
			return 1;
		}
	}
	return 0;
}

int func_304()//Position - 0x2D632
{
	if (Global_41C1 == 1)
	{
		return 1;
	}
	return 0;
}

int func_305(var uParam0)//Position - 0x2D649
{
	int iVar0;
	int iVar1;
	
	iVar1 = MISC::GET_GAME_TIMER();
	iVar0 = (iVar1 - uParam0->f_A);
	if (iVar0 < 35)
	{
		return 1;
	}
	return 0;
}

int func_306(var uParam0, int iParam1)//Position - 0x2D66C
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (func_307(iVar0, uParam0, iParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_307(int iParam0, var uParam1, int iParam2)//Position - 0x2D69D
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		iVar0 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_11[iVar2]))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0);
		if (iParam2 > 0)
		{
			if (iVar1 >= iParam2)
			{
				if (iParam2 > 1)
				{
					if (!VEHICLE::_0xF7F203E31F96F6A1(iParam0, 1))
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
		else if (iVar1 >= iVar0)
		{
			if (iVar0 > 1)
			{
				if (!VEHICLE::_0xF7F203E31F96F6A1(iParam0, 1))
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
	return 0;
}

void func_308(char* sParam0)//Position - 0x2D731
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		HUD::CLEAR_THIS_PRINT(sParam0);
	}
}

int func_309(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, char* sParam7, float fParam8, bool bParam9, int iParam10, bool bParam11, int iParam12, var uParam13, var uParam14, var uParam15, int iParam16, bool bParam17)//Position - 0x2D749
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7[3];
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	var uVar12[3];
	var uVar13[3];
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	vector3 vVar19;
	int iVar20;
	int iVar21;
	
	iVar4 = 0;
	uParam0->f_11[0] = uParam1;
	uParam0->f_11[1] = uParam2;
	uParam0->f_11[2] = uParam3;
	uParam0->f_10 = uParam1;
	uVar12[0] = uParam4;
	uVar12[1] = uParam5;
	uVar12[2] = uParam6;
	uVar13[0] = uParam13;
	uVar13[1] = uParam14;
	uVar13[2] = uParam15;
	iVar6 = 1;
	iVar1 = 0;
	iVar2 = 0;
	iVar3 = 0;
	iVar7[0] = 0;
	iVar7[1] = 0;
	iVar7[2] = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
		{
			iVar3++;
		}
		if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 29) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 28))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_USING_ACTION_MODE(uParam0->f_11[iVar0], 1, 4294967295, 0);
				}
				if (iVar0 == 2)
				{
					MISC::SET_BIT(&(uParam0->f_D), 28);
				}
			}
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 29) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 28))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
			{
				PED::SET_PED_USING_ACTION_MODE(uParam0->f_11[iVar0], 0, 4294967295, 0);
			}
			if (iVar0 == 2)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 28);
			}
		}
		iVar0++;
	}
	if (iVar3 == 0)
	{
		return 1;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 26))
	{
		bVar14 = false;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			iVar16 = 64;
			iVar16 |= 65536;
			iVar16 |= 2048;
			iVar16 |= 1;
			iVar16 |= 2;
			iVar16 |= 4;
			iVar16 |= 32;
			iVar16 |= 16;
			iVar16 |= 8;
			iVar15 = VEHICLE::GET_CLOSEST_VEHICLE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 50f, 0, iVar16);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar15, 0))
			{
				uParam0->f_15 = iVar15;
			}
		}
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(uParam0->f_15, 0))
		{
			if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), unk_0x8000C77B5F336760(uParam0->f_15, true)) < 400f)
			{
				if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
				{
					if (!PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0) || !bParam17)
					{
						if (func_307(uParam0->f_15, uParam0, iVar3))
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
								{
									PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_11[iVar0], 1f);
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
									}
									if (BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 2500551826) == 7 && !func_324(uParam0->f_11[iVar0], uParam0->f_15))
									{
										if (!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0]))
										{
											ENTITY::SET_ENTITY_HEALTH(uParam0->f_11[iVar0], true);
											BRAIN::TASK_ENTER_VEHICLE(uParam0->f_11[iVar0], uParam0->f_15, 60000, iVar0, 1f, 1, 0);
											PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], iVar0);
										}
									}
								}
								iVar0++;
							}
							return 1;
						}
						else
						{
							bVar14 = true;
						}
					}
					else
					{
						bVar14 = true;
					}
				}
				else
				{
					bVar14 = true;
				}
			}
			else
			{
				bVar14 = true;
			}
		}
		else
		{
			bVar14 = true;
		}
		if (bVar14)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 26);
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					if (!PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0]) && !uParam0->f_F)
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_11[iVar0]);
					}
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
					{
						if (func_322(uParam0, uParam0->f_11[iVar0], fParam8, 1))
						{
							PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_202());
						}
					}
				}
				iVar0++;
			}
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 26))
	{
		if ((!func_321(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330())) && !ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			iVar10 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar10, 0))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 13))
				{
					if (iParam16 == 4 || iParam16 == 5)
					{
					}
					if (!func_303(uParam0, 2))
					{
						iVar17 = 0;
						iVar18 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
							{
								iVar17++;
							}
							iVar0++;
						}
						iVar18 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar17);
						if (!PED::IS_PED_INJURED(uParam0->f_11[iVar18]))
						{
							func_298(uParam0->f_11[iVar18], "NEED_A_BIGGER_VEHICLE", 3);
						}
						func_300(uParam0, "MORE_SEATS", 0);
						MISC::SET_BIT(&(uParam0->f_D), 13);
					}
				}
				bVar9 = true;
			}
		}
		else
		{
			bVar9 = false;
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 13);
			func_308("MORE_SEATS");
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam10))
		{
			if ((!PED::IS_PED_INJURED(uParam0->f_11[0]) || !PED::IS_PED_INJURED(uParam0->f_11[1])) || !PED::IS_PED_INJURED(uParam0->f_11[2]))
			{
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 31))
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()) && !func_303(uParam0, 2))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
						if (func_320(iVar10, uParam0))
						{
							func_300(uParam0, "CMN_VEHSUIT", 0);
							MISC::SET_BIT(&(uParam0->f_D), 31);
						}
					}
				}
				else if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 31);
					func_308("CMN_VEHSUIT");
				}
			}
		}
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
		{
			if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0, 75))
				{
					MISC::SET_BIT(&(uParam0->f_D), 21);
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 21))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 21);
			}
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_11[iVar0], 1);
					}
					else
					{
						PED::SET_PED_DIES_IN_WATER(uParam0->f_11[iVar0], 0);
					}
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
					{
						iVar10 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar10, 0))
						{
							if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
							{
								if (!func_321(uParam0) && PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
								{
									if (!func_319(uParam0->f_11[iVar0]))
									{
										PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
									}
								}
							}
						}
						if (iVar10 != iParam10 && !ENTITY::IS_ENTITY_DEAD(iVar10, 0))
						{
							if (PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_11[iVar0], iVar10))
							{
								if (ENTITY::IS_ENTITY_IN_WATER(iVar10) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iVar10))
								{
									vVar19 = { unk_0x8000C77B5F336760(iVar10, true) };
									if (vVar19.z < -1f)
									{
										BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
									}
								}
							}
						}
					}
					bVar8 = true;
					if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
					{
						if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
						{
							iVar10 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_11[iVar0], 0);
							if (!ENTITY::IS_ENTITY_DEAD(iVar10, 0))
							{
								if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
								{
									if (iVar10 != iParam10)
									{
										if (!PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar10))
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
								else
								{
									if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
									{
										iVar20 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
									}
									if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar20, 0))
									{
										if (iVar10 != iVar20)
										{
											if (ENTITY::GET_ENTITY_SPEED(iVar10) > 5f)
											{
												BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 4160);
											}
											else
											{
												BRAIN::TASK_LEAVE_VEHICLE(uParam0->f_11[iVar0], iVar10, 64);
											}
											bVar8 = false;
										}
									}
								}
							}
						}
					}
					if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
					{
						iVar21 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
						if (ENTITY::DOES_ENTITY_EXIST(iVar21))
						{
							if (func_307(iVar21, uParam0, 0))
							{
								if (func_318(iVar0, uParam0) || !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 27))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], iVar0);
									func_203(iVar0, uParam0);
									iVar4++;
									if (iVar4 >= iVar3)
									{
										MISC::SET_BIT(&(uParam0->f_D), 27);
									}
								}
							}
							else if (!func_318(iVar0, uParam0))
							{
								if (ENTITY::GET_ENTITY_MODEL(iVar21) == joaat("SENTINEL2"))
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], 4);
								}
								else
								{
									PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(uParam0->f_11[iVar0], 2);
								}
								func_317(iVar0, uParam0);
							}
						}
					}
					if ((!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()) && !func_316(uParam0->f_11[iVar0], iParam10)) && !func_315(uParam0->f_11[iVar0], iParam10))
					{
						if (func_322(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
							{
								if (((!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0]))
								{
									iVar11 = BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 2500551826);
									if (iVar11 == 7)
									{
										NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_11[iVar0]);
									}
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_202());
									bVar8 = false;
								}
							}
						}
						if (bVar8)
						{
							if (!HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								uParam0->f_B = MISC::GET_GAME_TIMER();
								uParam0->f_1[iVar0] = func_287(uParam0->f_11[iVar0], 0, 0);
								HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
								if (bParam9)
								{
									func_296(uParam0->f_1[iVar0], uParam0);
								}
							}
						}
						iVar6 = 0;
					}
					else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
					{
						if (((func_293(uParam0->f_11[iVar0], 1) || func_316(uParam0->f_11[iVar0], iParam10)) || iParam12) || (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0) && !PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10, 0)))
						{
							if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
							{
								HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
								func_308(uVar12[iVar0]);
							}
						}
						else
						{
							if (bParam9)
							{
								func_296(uParam0->f_1[iVar0], uParam0);
							}
							iVar6 = 0;
						}
					}
					else if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam10, 0))
					{
						if (!PED::IS_PED_SITTING_IN_VEHICLE(uParam0->f_11[iVar0], iParam10))
						{
							if ((ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], iParam10, 20f, 20f, 5f, 0, 1, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 11)) && !((bParam17 && PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0)) && !PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10, 0)))
							{
								if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
								{
									if (!PED::IS_PED_IN_VEHICLE(uParam0->f_11[iVar0], iParam10, 0))
									{
										if (!func_293(uParam0->f_11[iVar0], 1))
										{
											if (func_292(uParam0->f_11[iVar0]))
											{
												iVar11 = BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 451360105);
												if (iVar11 == 7)
												{
													BRAIN::TASK_LEAVE_ANY_VEHICLE(uParam0->f_11[iVar0], 0, 0);
												}
											}
										}
									}
								}
								else
								{
									if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
									{
										if ((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0])) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->f_11[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
										}
									}
									iVar11 = BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 2500551826);
									if (iVar11 == 7 && !func_324(uParam0->f_11[iVar0], iParam10))
									{
										if (((((!unk_0xBF3C2E756849EEF4(uParam0->f_11[iVar0]) && !unk_0xBF3C2E756849EEF4(AUDIO::_0x0626A247D2405330())) && !func_314(uParam0->f_11[iVar0], 2f)) && !PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0])) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0])) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
										{
											ENTITY::SET_ENTITY_HEALTH(uParam0->f_11[iVar0], true);
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 10))
											{
												PED::SET_PED_MAX_MOVE_BLEND_RATIO(uParam0->f_11[iVar0], 1f);
											}
											BRAIN::TASK_ENTER_VEHICLE(uParam0->f_11[iVar0], iParam10, 60000, iVar0, 2f, 1, 0);
											PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_11[iVar0], 0);
										}
									}
									else if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10, 0))
									{
										uParam0->f_1[iVar0] = func_287(uParam0->f_11[iVar0], 0, 0);
										HUD::SET_BLIP_DISPLAY(uParam0->f_1[iVar0], 2);
										iVar6 = 0;
									}
								}
							}
							else if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
							{
								if (func_322(uParam0, uParam0->f_11[iVar0], fParam8, bParam11))
								{
									if (!PED::IS_PED_RAGDOLL(uParam0->f_11[iVar0]) && !BRAIN::IS_PED_GETTING_UP(uParam0->f_11[iVar0]))
									{
										iVar11 = BRAIN::GET_SCRIPT_TASK_STATUS(uParam0->f_11[iVar0], 2500551826);
										if (iVar11 == 7)
										{
											NETWORK::_0x5E3AA4CA2B6FB0EE(uParam0->f_11[iVar0]);
										}
										ENTITY::SET_ENTITY_HEALTH(uParam0->f_11[iVar0], false);
										PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_202());
									}
								}
							}
						}
						else if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam10))
						{
							if (!PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()))
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 21))
								{
									PED::SET_PED_AS_GROUP_MEMBER(uParam0->f_11[iVar0], func_202());
								}
							}
							else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 21))
							{
								PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
								MISC::SET_BIT(&(uParam0->f_D), 21);
							}
						}
						else if (PED::IS_PED_GROUP_MEMBER(uParam0->f_11[iVar0], func_202()) && !FIRE::IS_ENTITY_ON_FIRE(iParam10))
						{
							PED::REMOVE_PED_FROM_GROUP(uParam0->f_11[iVar0]);
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_308(uVar12[iVar0]);
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
			{
				iVar7[iVar0] = 1;
				iVar1++;
			}
			iVar0++;
		}
		if (!func_303(uParam0, 2))
		{
			if (iVar1 > 0)
			{
				iVar0 = 0;
				while (iVar0 < 3)
				{
					if (iVar7[iVar0])
					{
						if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
						{
							if (func_319(uParam0->f_11[iVar0]) || ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], AUDIO::_0x0626A247D2405330(), uParam0->f_8, uParam0->f_8, uParam0->f_8, 0, 1, 0))
							{
								iVar1 = (iVar1 - 1);
								iVar7[iVar0] = 0;
							}
						}
					}
					else if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
					{
						if (!ENTITY::IS_ENTITY_AT_ENTITY(uParam0->f_11[iVar0], AUDIO::_0x0626A247D2405330(), (uParam0->f_8 * 0.85f), (uParam0->f_8 * 0.85f), uParam0->f_8, 0, 1, 0) && !func_319(uParam0->f_11[iVar0]))
						{
						}
					}
					iVar0++;
				}
			}
			iVar5 = MISC::GET_GAME_TIMER();
			if ((iVar5 - uParam0->f_B) > 1500 || iVar3 == 1)
			{
				if (iVar1 > 0)
				{
					if (uParam0->f_C < iVar1)
					{
						if ((iVar1 == iVar3 || (iVar2 + iVar1) == iVar3) && iVar3 > 1)
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 5))
							{
								func_300(uParam0, sParam7, 0);
								MISC::SET_BIT(&(uParam0->f_D), 5);
								uParam0->f_C = iVar1;
							}
							else
							{
								uParam0->f_C = iVar1;
							}
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 3)
							{
								if (iVar7[iVar0])
								{
									if (!func_313(iVar0, uParam0))
									{
										if (!MISC::IS_STRING_NULL(uVar13[iVar0]))
										{
											if (!MISC::ARE_STRINGS_EQUAL(uVar13[iVar0], ""))
											{
												func_311(uParam0, uVar12[iVar0], uVar13[iVar0], 0);
												func_310(iVar0, uParam0);
												uParam0->f_C = iVar1;
											}
										}
										if (!func_313(iVar0, uParam0))
										{
											func_300(uParam0, uVar12[iVar0], 0);
											func_310(iVar0, uParam0);
											uParam0->f_C = iVar1;
										}
									}
									else
									{
										uParam0->f_C = iVar1;
									}
								}
								iVar0++;
							}
						}
					}
				}
				else
				{
					uParam0->f_C = 0;
				}
			}
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_D), 10);
		if (iVar6 && !bVar9)
		{
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (HUD::DOES_BLIP_EXIST(uParam0->f_1[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uParam0->f_1[iVar0]));
					func_308(uVar12[iVar0]);
				}
				iVar0++;
			}
			func_308("MORE_SEATS");
			return 1;
		}
	}
	return 0;
}

void func_310(int iParam0, var uParam1)//Position - 0x2E7BE
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_D), 14);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_D), 15);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_D), 16);
			break;
	}
}

void func_311(var uParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x2E806
{
	if (!bParam3)
	{
		if (!MISC::IS_STRING_NULL(sParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(sParam1, ""))
			{
				func_312(sParam1, iParam2, 7500, 1);
			}
		}
	}
	uParam0->f_A = MISC::GET_GAME_TIMER();
}

void func_312(char* sParam0, int iParam1, int iParam2, int iParam3)//Position - 0x2E840
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, 1);
}

int func_313(int iParam0, var uParam1)//Position - 0x2E85F
{
	switch (iParam0)
	{
		case 0:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 14);
		
		case 1:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 15);
		
		case 2:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 16);
		
		default:
	}
	return 0;
}

int func_314(int iParam0, float fParam1)//Position - 0x2E8A8
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, 0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar0) > fParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_315(int iParam0, int iParam1)//Position - 0x2E8DF
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!PED::IS_PED_GROUP_MEMBER(iParam0, func_202()))
		{
			iVar0 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(iParam0);
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iParam1, (20f + 10f), (20f + 10f), 10f, 0, 1, 0))
				{
					if (iVar0 == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_316(int iParam0, int iParam1)//Position - 0x2E946
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
			{
				if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_317(int iParam0, var uParam1)//Position - 0x2E97B
{
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(uParam1->f_D), 17);
			break;
		
		case 1:
			MISC::SET_BIT(&(uParam1->f_D), 18);
			break;
		
		case 2:
			MISC::SET_BIT(&(uParam1->f_D), 19);
			break;
	}
}

int func_318(int iParam0, var uParam1)//Position - 0x2E9C3
{
	switch (iParam0)
	{
		case 0:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 17);
		
		case 1:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 18);
		
		case 2:
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_D, 19);
		
		default:
	}
	return 0;
}

int func_319(int iParam0)//Position - 0x2EA0C
{
	int iVar0;
	int iVar1;
	
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			if (!PED::IS_PED_INJURED(iParam0))
			{
				iVar1 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar1, 0))
				{
					if (iVar0 == iVar1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam0, 20f, 20f, 20f, 0, 1, 0) && ENTITY::IS_ENTITY_AT_ENTITY(iParam0, iVar1, 20f, 20f, 20f, 0, 1, 0))
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

int func_320(int iParam0, var uParam1)//Position - 0x2EA99
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS") || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("COACH"))
		{
			iVar0 = 0;
			iVar1 = 0;
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < 3)
			{
				if (!PED::IS_PED_INJURED(uParam1->f_11[iVar2]))
				{
					iVar0++;
				}
				iVar2++;
			}
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar3))
			{
				if ((iVar3 == uParam1->f_11[0] || iVar3 == uParam1->f_11[1]) || iVar3 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 1, 0);
			if (!PED::IS_PED_INJURED(iVar4))
			{
				if ((iVar4 == uParam1->f_11[0] || iVar4 == uParam1->f_11[1]) || iVar4 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 2, 0);
			if (!PED::IS_PED_INJURED(iVar5))
			{
				if ((iVar5 == uParam1->f_11[0] || iVar5 == uParam1->f_11[1]) || iVar5 == uParam1->f_11[2])
				{
					iVar1++;
				}
			}
			else
			{
				iVar1++;
			}
			if (iVar1 < iVar0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_321(var uParam0)//Position - 0x2EBF9
{
	int iVar0;
	
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
		if (func_307(iVar0, uParam0, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_322(var uParam0, int iParam1, float fParam2, bool bParam3)//Position - 0x2EC28
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam1))
	{
		if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam1, 0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar0))
					{
						if (func_321(uParam0))
						{
							return 1;
						}
					}
					else if (bParam3)
					{
						return 1;
					}
				}
				else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
				{
					return 1;
				}
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iParam1, fParam2, fParam2, 3f, 0, 1, 0))
		{
			if (!bParam3)
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (func_307(iVar0, uParam0, 0))
					{
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
						{
							if (func_323(iVar0))
							{
								return 1;
							}
						}
					}
				}
				else
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
	return 0;
}

int func_323(int iParam0)//Position - 0x2ED06
{
	float fVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
		if (fVar0 > -0.5f && fVar0 < 0.5f)
		{
			return 1;
		}
	}
	return 0;
}

int func_324(int iParam0, int iParam1)//Position - 0x2ED3E
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_USING(iParam0);
			if (iVar0 == iParam1)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_325()//Position - 0x2ED6E
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		iVar0 = PED::SET_EXCLUSIVE_PHONE_RELATIONSHIPS(AUDIO::_0x0626A247D2405330());
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, 0);
			if (!PED::IS_PED_INJURED(iVar1))
			{
				if (iVar1 != AUDIO::_0x0626A247D2405330())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						if (!PED::IS_PED_HEADTRACKING_ENTITY(iVar1, AUDIO::_0x0626A247D2405330()))
						{
							BRAIN::TASK_LOOK_AT_ENTITY(iVar1, AUDIO::_0x0626A247D2405330(), 2000, 2048, 2);
						}
					}
				}
			}
		}
	}
}

void func_326(var uParam0)//Position - 0x2EDDB
{
	int iVar0;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_D, 25))
	{
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 32, false);
		}
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
			{
				if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 32, false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 305, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_11[iVar0], 268, true);
					PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_11[iVar0], 0);
				}
			}
			iVar0++;
		}
		MISC::SET_BIT(&(uParam0->f_D), 25);
	}
}

void func_327(var uParam0)//Position - 0x2EE7E
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_11[iVar0]))
		{
			if (!PED::IS_PED_INJURED(uParam0->f_11[iVar0]))
			{
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_11[iVar0]))
				{
					PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(uParam0->f_11[iVar0], 0);
					PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(uParam0->f_11[iVar0], 0);
				}
			}
		}
		iVar0++;
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(AUDIO::_0x0626A247D2405330(), 0);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(AUDIO::_0x0626A247D2405330(), 0);
			}
		}
	}
}

Vector3 func_328()//Position - 0x2EF14
{
	vector3 vVar0;
	
	return vVar0;
}

int func_329(int iParam0, int iParam1, bool bParam2)//Position - 0x2EF20
{
	int iVar0;
	
	iVar0 = BRAIN::GET_SCRIPT_TASK_STATUS(iParam0, iParam1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	else if (!bParam2)
	{
		if (iVar0 == 2 || iVar0 == 3)
		{
			return 1;
		}
	}
	return 0;
}

int func_330(var uParam0, int iParam1)//Position - 0x2EF66
{
	int iVar0;
	int iVar1;
	
	if (iParam1 == 0)
	{
		return 0;
	}
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0 /*5*/])
		{
			if ((uParam0[iVar0 /*5*/])->f_4 == iParam1)
			{
				(uParam0[iVar0 /*5*/])->f_2 = 0;
				if (!(uParam0[iVar0 /*5*/])->f_1)
				{
					uParam0->f_3D6 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == 4294967295)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		STREAMING::REQUEST_MODEL(iParam1);
		(*uParam0)[iVar1 /*5*/] = 1;
		(uParam0[iVar1 /*5*/])->f_3 = MISC::GET_GAME_TIMER();
		(uParam0[iVar1 /*5*/])->f_4 = iParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

void func_331(var uParam0, int iParam1, char* sParam2, int iParam3)//Position - 0x2F00F
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
	}
	else
	{
		Var2 = 12;
		Var2.f_D = 12;
		Var2.f_1A = 12;
		Var2.f_27 = 9;
		Var2.f_31 = 9;
		func_209(iParam1, &Var2, 1, 4294967295);
		iVar0 = 0;
		while (iVar0 < 12)
		{
			func_333(uParam0, sParam2, iVar0, Var2.f_D[iVar0], Var2[iVar0], iParam3);
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_332(uParam0, sParam2, iVar1, Var2.f_27[iVar1], Var2.f_31[iVar1], iParam3);
			iVar1++;
		}
	}
}

void func_332(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2F0C4
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
	}
	else
	{
		iVar1 = 4294967295;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*82*/]))
			{
				if (iVar1 == 4294967295)
				{
					iVar1 = iVar0;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam1, uParam0[iVar0 /*82*/]) && iParam5 == (uParam0[iVar0 /*82*/])->f_10)
			{
				if ((uParam0[iVar0 /*82*/])->f_11.f_27[iParam2] != iParam3 || (uParam0[iVar0 /*82*/])->f_11.f_31[iParam2] != iParam4)
				{
					if ((uParam0[iVar0 /*82*/])->f_11.f_27[iParam2] == 4294967295 && (uParam0[iVar0 /*82*/])->f_11.f_31[iParam2] == 4294967295)
					{
					}
					(uParam0[iVar0 /*82*/])->f_11.f_27[iParam2] = iParam3;
					(uParam0[iVar0 /*82*/])->f_11.f_31[iParam2] = iParam4;
				}
				return;
			}
			iVar0++;
		}
		if (iVar1 != 4294967295)
		{
			StringCopy(uParam0[iVar1 /*82*/], sParam1, 64);
			(uParam0[iVar1 /*82*/])->f_10 = iParam5;
			iVar2 = 0;
			while (iVar2 < 12)
			{
				(uParam0[iVar1 /*82*/])->f_11.f_D[iVar2] = 4294967295;
				(uParam0[iVar1 /*82*/])->f_11[iVar2] = 4294967295;
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 < 9)
			{
				(uParam0[iVar1 /*82*/])->f_11.f_27[iVar3] = 4294967295;
				(uParam0[iVar1 /*82*/])->f_11.f_31[iVar3] = 4294967295;
				iVar3++;
			}
			(uParam0[iVar1 /*82*/])->f_11.f_27[iParam2] = iParam3;
			(uParam0[iVar1 /*82*/])->f_11.f_31[iParam2] = iParam4;
		}
	}
}

void func_333(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2F23F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
	}
	else
	{
		iVar1 = 4294967295;
		iVar0 = 0;
		while (iVar0 < *uParam0)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0[iVar0 /*82*/]))
			{
				if (iVar1 == 4294967295)
				{
					iVar1 = iVar0;
				}
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam1, uParam0[iVar0 /*82*/]) && iParam5 == (uParam0[iVar0 /*82*/])->f_10)
			{
				if ((uParam0[iVar0 /*82*/])->f_11.f_D[iParam2] != iParam3 || (uParam0[iVar0 /*82*/])->f_11[iParam2] != iParam4)
				{
					if ((uParam0[iVar0 /*82*/])->f_11.f_D[iParam2] == 4294967295 && (uParam0[iVar0 /*82*/])->f_11[iParam2] == 4294967295)
					{
					}
					(uParam0[iVar0 /*82*/])->f_11.f_D[iParam2] = iParam3;
					(uParam0[iVar0 /*82*/])->f_11[iParam2] = iParam4;
				}
				return;
			}
			iVar0++;
		}
		if (iVar1 != 4294967295)
		{
			StringCopy(uParam0[iVar1 /*82*/], sParam1, 64);
			(uParam0[iVar1 /*82*/])->f_10 = iParam5;
			iVar2 = 0;
			while (iVar2 < 12)
			{
				(uParam0[iVar1 /*82*/])->f_11.f_D[iVar2] = 4294967295;
				(uParam0[iVar1 /*82*/])->f_11[iVar2] = 4294967295;
				iVar2++;
			}
			iVar3 = 0;
			while (iVar3 < 9)
			{
				(uParam0[iVar1 /*82*/])->f_11.f_27[iVar3] = 4294967295;
				(uParam0[iVar1 /*82*/])->f_11.f_31[iVar3] = 4294967295;
				iVar3++;
			}
			(uParam0[iVar1 /*82*/])->f_11.f_D[iParam2] = iParam3;
			(uParam0[iVar1 /*82*/])->f_11[iParam2] = iParam4;
		}
	}
}

void func_334(bool bParam0, bool bParam1, char[4] cParam2, bool bParam3)//Position - 0x2F3B2
{
	int iVar0;
	int iVar1;
	struct<50> Var2;
	
	if (iLocal_2313 == 0)
	{
		func_333(&uLocal_1278, cParam2, 7, 0, 0, joaat("cs_mrk"));
	}
	else
	{
		func_333(&uLocal_1278, cParam2, 7, 1, iLocal_2313, joaat("cs_mrk"));
	}
	func_333(&uLocal_1278, cParam2, 3, 1, 0, joaat("cs_mrk"));
	func_333(&uLocal_1278, cParam2, 8, 0, 0, joaat("cs_mrk"));
	if (iLocal_72[0])
	{
		func_333(&uLocal_1278, cParam2, 0, 0, 2, joaat("cs_mrk"));
	}
	else
	{
		func_333(&uLocal_1278, cParam2, 0, 0, 1, joaat("cs_mrk"));
	}
	if (iLocal_72[2])
	{
		func_333(&uLocal_1278, cParam2, 6, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		func_333(&uLocal_1278, cParam2, 6, 0, 0, joaat("cs_mrk"));
	}
	if (iLocal_72[3])
	{
		func_333(&uLocal_1278, cParam2, 11, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		func_333(&uLocal_1278, cParam2, 11, 0, 0, joaat("cs_mrk"));
	}
	if (iLocal_72[4])
	{
		func_333(&uLocal_1278, cParam2, 1, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		func_333(&uLocal_1278, cParam2, 1, 0, 0, joaat("cs_mrk"));
	}
	if (iLocal_72[1])
	{
		func_333(&uLocal_1278, cParam2, 10, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		func_333(&uLocal_1278, cParam2, 10, 0, 0, joaat("cs_mrk"));
	}
	if (iLocal_72[5])
	{
		func_333(&uLocal_1278, cParam2, 9, 1, 0, joaat("cs_mrk"));
	}
	else
	{
		func_333(&uLocal_1278, cParam2, 9, 0, 0, joaat("cs_mrk"));
	}
	if (!bParam3)
	{
		func_333(&uLocal_1278, cLocal_175, 3, 0, 1, 0);
		func_333(&uLocal_1278, cLocal_175, 4, 0, 1, 0);
		if (bParam0)
		{
			Var2 = { func_335(bParam1) };
			iVar0 = 0;
			while (iVar0 < 12)
			{
				func_333(&uLocal_1278, cLocal_162, iVar0, Var2.f_D[iVar0], Var2[iVar0], 0);
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < 9)
			{
				func_332(&uLocal_1278, cLocal_162, iVar1, Var2.f_27[iVar1], Var2.f_31[iVar1], 0);
				iVar1++;
			}
		}
	}
}

struct<65> func_335(bool bParam0)//Position - 0x2F5AF
{
	struct<65> Var0;
	
	Var0 = 12;
	Var0.f_D = 12;
	Var0.f_1A = 12;
	Var0.f_27 = 9;
	Var0.f_31 = 9;
	Var0.f_D[0] = 0;
	Var0[0] = 0;
	Var0.f_D[2] = 0;
	Var0[2] = 0;
	Var0.f_D[1] = 0;
	Var0[1] = 0;
	Var0.f_D[3] = 0;
	Var0[3] = 2;
	Var0.f_D[4] = 0;
	Var0[4] = 3;
	Var0.f_D[6] = 0;
	Var0[6] = 0;
	Var0.f_D[8] = 0;
	Var0[8] = 0;
	Var0.f_D[9] = 0;
	Var0[9] = 0;
	Var0.f_D[5] = 0;
	Var0[5] = 0;
	Var0.f_D[10] = 0;
	Var0[10] = 0;
	Var0.f_D[11] = 0;
	Var0[11] = 0;
	Var0.f_27[0] = 4294967295;
	Var0.f_31[0] = 0;
	if (bParam0)
	{
		Var0.f_27[1] = 0;
		Var0.f_31[1] = 0;
	}
	else
	{
		Var0.f_27[1] = 4294967295;
		Var0.f_31[1] = 0;
	}
	Var0.f_27[2] = 4294967295;
	Var0.f_31[2] = 0;
	Var0.f_27[8] = 4294967295;
	Var0.f_31[8] = 0;
	Var0.f_27[4] = 4294967295;
	Var0.f_31[4] = 0;
	Var0.f_27[6] = 4294967295;
	Var0.f_31[6] = 0;
	Var0.f_27[5] = 4294967295;
	Var0.f_31[5] = 0;
	Var0.f_27[7] = 4294967295;
	Var0.f_31[7] = 0;
	Var0.f_27[3] = 4294967295;
	Var0.f_31[3] = 0;
	return Var0;
}

float func_336(int iParam0, vector3 vParam1, bool bParam2)//Position - 0x2F72C
{
	vector3 vVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, true) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vParam1, bParam2);
}

void func_337(int iParam0)//Position - 0x2F766
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_PED_CAN_BE_DRAGGED_OUT(iParam0, 0);
			PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, 0);
			if (iParam0 != AUDIO::_0x0626A247D2405330())
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_2601);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 14, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 8, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 9, false);
			PED::SET_PED_ALERTNESS(iParam0, 0);
			PED::SET_PED_COMBAT_ABILITY(iParam0, 0);
			PED::SET_PED_COMBAT_RANGE(iParam0, 0);
			PED::SET_PED_GENERATES_DEAD_BODY_EVENTS(iParam0, 0);
			PED::SET_PED_SEEING_RANGE(iParam0, 0f);
			PED::SET_PED_HEARING_RANGE(iParam0, 0f);
		}
	}
}

void func_338()//Position - 0x2F7F6
{
	func_339(func_26(), 0, "MICHAEL");
	func_339(func_189(), 2, "TREVOR");
	func_339(iLocal_2568, 3, "STEVE");
	func_339(iLocal_2569, 4, "DAVE");
	func_339(iLocal_2567, 5, "MisterK");
}

void func_339(int iParam0, int iParam1, char* sParam2)//Position - 0x2F83C
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
	{
		func_341(&uLocal_2402, iParam1, iParam0, sParam2, 0, 1);
	}
	else
	{
		func_340(&uLocal_2402, iParam1);
		func_341(&uLocal_2402, iParam1, 0, sParam2, 0, 1);
	}
}

void func_340(var uParam0, int iParam1)//Position - 0x2F882
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_341(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x2F89F
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

void func_342(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x2F93A
{
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar4;
	var uVar5;
	int iVar6;
	
	if (iParam3 == 1)
	{
		if (!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
		}
	}
	iVar0 = 0;
	if (iParam3 == 1)
	{
		if (iParam0 != Global_16C55)
		{
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_16C55)
	{
		iVar0 = 1;
	}
	if (iVar0 == 1)
	{
		func_412(1);
		if (iParam0 <= Global_16C55)
		{
		}
		iVar1 = func_410(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		if (iVar1 != 4294967295 && iVar1 != 94)
		{
			Global_19E56.f_2361.f_14A[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_408(iVar1);
			cVar3 = { Global_14893[iVar1 /*34*/].f_8 };
			if (iVar1 == 90)
			{
				switch (Global_19E56.f_2361.f_63.f_CD[7])
				{
					case 1:
						StringConCat(&cVar3, "A", 8);
						break;
					
					case 2:
						StringConCat(&cVar3, "B", 8);
						break;
					}
			}
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&cVar3, iVar2, Global_16C55, iParam0);
		}
		else
		{
			iVar4 = func_403(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
			if (iVar4 != 4294967295)
			{
				Global_19E56.f_4872[iVar4 /*6*/].f_4 = 0;
				MemCopy(&uVar5, {func_402(iVar4)}, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&uVar5, 0, Global_16C55, iParam0);
			}
			else
			{
				iVar6 = func_401(&(Global_16C30.f_3));
				if (iVar6 > 4294967295)
				{
					Global_19E56.f_617E.f_4[iVar6] = 0;
				}
			}
		}
		Global_155D1 = iParam2;
		Global_16C55 = iParam0;
		func_343(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_16C55)
	{
	}
}

void func_343(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x2FAB0
{
	func_344(&Global_18531, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_344(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x2FACC
{
	int iVar0;
	int iVar1;
	
	*uParam0 = func_190();
	uParam0->f_1 = func_390();
	MISC::_GET_WEATHER_TYPE_TRANSITION(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		func_363(&(uParam0->f_B35), 0);
		func_362(AUDIO::_0x0626A247D2405330());
		func_24(AUDIO::_0x0626A247D2405330(), 0);
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), &(uParam0->f_2), 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object"))
		{
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		uParam0->f_11[iVar1] = Global_19E56.f_933.f_21B.f_126[iVar1];
		if (iVar1 == func_361())
		{
			func_209(AUDIO::_0x0626A247D2405330(), &(uParam0->f_268[iVar1 /*65*/]), 1, 4294967295);
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < 12)
			{
				uParam0->f_268[iVar1 /*65*/][iVar0] = Global_16B5E[iVar1 /*65*/][iVar0];
				uParam0->f_268[iVar1 /*65*/].f_D[iVar0] = Global_16B5E[iVar1 /*65*/].f_D[iVar0];
				iVar0++;
			}
			uParam0->f_268[iVar1 /*65*/].f_3B = Global_16B5E[iVar1 /*65*/].f_3B;
			uParam0->f_268[iVar1 /*65*/].f_3C = Global_16B5E[iVar1 /*65*/].f_3C;
			uParam0->f_268[iVar1 /*65*/].f_3D = Global_16B5E[iVar1 /*65*/].f_3D;
			uParam0->f_268[iVar1 /*65*/].f_3E = Global_16B5E[iVar1 /*65*/].f_3E;
			uParam0->f_268[iVar1 /*65*/].f_3F = Global_16B5E[iVar1 /*65*/].f_3F;
			uParam0->f_268[iVar1 /*65*/].f_40 = Global_16B5E[iVar1 /*65*/].f_40;
			iVar0 = 0;
			while (iVar0 < 9)
			{
				uParam0->f_268[iVar1 /*65*/].f_27[iVar0] = Global_16B5E[iVar1 /*65*/].f_27[iVar0];
				uParam0->f_268[iVar1 /*65*/].f_31[iVar0] = Global_16B5E[iVar1 /*65*/].f_31[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44)
		{
			uParam0->f_32C[iVar1 /*472*/][iVar0 /*5*/] = { Global_19E56.f_933.f_21B.f_12A[iVar1 /*472*/][iVar0 /*5*/] };
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50)
		{
			uParam0->f_32C[iVar1 /*472*/].f_DD[iVar0 /*5*/] = { Global_19E56.f_933.f_21B.f_12A[iVar1 /*472*/].f_DD[iVar0 /*5*/] };
			iVar0++;
		}
		switch (iVar1)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp0_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), 4294967295);
				break;
			
			case 1:
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp1_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), 4294967295);
				break;
			
			case 2:
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/][0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/][1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[2]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[3]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_addon_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_5[4]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_0"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[0]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_1"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[1]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_2"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[2]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_3"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[3]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_4"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[4]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_5"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[5]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_6"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[6]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_7"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[7]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_8"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[8]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_9"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[9]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_10"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[10]), 4294967295);
				STATS::STAT_GET_INT(joaat("sp2_weap_tint_purch_11"), &(uParam0->f_8B5[iVar1 /*32*/].f_10[11]), 4294967295);
				break;
		}
		uParam0->f_9[iVar1] = Global_19E56.f_5038.f_E9[iVar1 /*69*/].f_1;
		uParam0->f_D[iVar1] = Global_D06B[iVar1];
		uParam0->f_19[0 /*295*/][iVar1 /*98*/] = { Global_19E56.f_933.f_21B.f_953[0 /*295*/][iVar1 /*98*/] };
		uParam0->f_19[1 /*295*/][iVar1 /*98*/] = { Global_19E56.f_933.f_21B.f_953[1 /*295*/][iVar1 /*98*/] };
		iVar0 = 0;
		while (iVar0 <= 3)
		{
			uParam0->f_B07[iVar1 /*15*/][iVar0] = Global_19E56.f_933.f_1ED[iVar1 /*15*/][iVar0];
			uParam0->f_B07[iVar1 /*15*/].f_5[iVar0] = Global_19E56.f_933.f_1ED[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_B07[iVar1 /*15*/].f_A[iVar0] = Global_19E56.f_933.f_1ED[iVar1 /*15*/].f_A[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			uParam0->f_91A[iVar1 /*164*/][iVar0] = Global_19E56.f_933[iVar1 /*164*/][iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_4[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_8[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_10[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_10[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_14[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_14[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_18[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_18[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_1C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_1C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_20[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_24[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_28[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_2C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_2C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_30[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_30[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_34[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_34[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_38[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_38[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_3C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_3C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_40[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_44[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_48[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_4C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_4C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_50[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_50[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_54[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_54[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_58[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_58[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_5C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_5C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_60[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_64[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_68[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_6C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_6C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_70[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_70[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_74[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_74[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_78[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_78[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_7C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_7C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_80[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_84[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_88[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_8C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_8C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_90[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_90[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_94[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_94[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_98[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_98[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_9C[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_9C[iVar0];
			uParam0->f_91A[iVar1 /*164*/].f_A0[iVar0] = Global_19E56.f_933[iVar1 /*164*/].f_A0[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	STATS::STAT_GET_INT(joaat("sp0_special_ability"), &(uParam0->f_916[0]), 4294967295);
	STATS::STAT_GET_INT(joaat("sp1_special_ability"), &(uParam0->f_916[1]), 4294967295);
	STATS::STAT_GET_INT(joaat("sp2_special_ability"), &(uParam0->f_916[2]), 4294967295);
	uParam0->f_5 = 145;
	if (iParam4 == 1)
	{
		func_346(&(uParam0->f_B3B), uParam0, iParam5, 1, 1, 0);
	}
	func_345(&(uParam0->f_B95));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

int func_345(var uParam0)//Position - 0x30957
{
	*uParam0 = Global_15C58;
	uParam0->f_1 = Global_15C59;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_346(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x30979
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		iParam2 = AUDIO::_0x0626A247D2405330();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		uParam1->f_5 = func_22(iParam2);
	}
	if (func_358(iParam2, &iVar0, iParam3, iParam5))
	{
		func_347(uParam0, uParam1, iVar0, iParam4);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
		{
			if (VEHICLE::IS_VEHICLE_MODEL(iVar0, joaat("SKYLIFT")) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar0, 0))
			{
				func_347(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

int func_347(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x30A01
{
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam2, 0))
	{
		func_349(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_348(iParam2))
		{
			uParam1->f_3 = 1;
		}
		else
		{
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

int func_348(int iParam0)//Position - 0x30A41
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (Global_16C30.f_16[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_349(var uParam0, int iParam1, int iParam2)//Position - 0x30A6F
{
	func_353(iParam1, &(uParam0->f_C));
	uParam0->f_7 = func_352(iParam1, 145, 0);
	uParam0->f_B = func_351(iParam1);
	if (!uParam0->f_7)
	{
		if (!uParam0->f_A)
		{
			uParam0->f_A = func_350(iParam1);
		}
	}
	if (iParam2 == 1)
	{
		*uParam0 = { unk_0x8000C77B5F336760(iParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(iParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(iParam1) };
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
		if (Global_11511 == iParam1)
		{
			uParam0->f_9 = 1;
		}
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
	{
		uParam0->f_8 = 1;
	}
	else
	{
		uParam0->f_8 = 0;
	}
}

int func_350(int iParam0)//Position - 0x30B4B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[iVar0]))
		{
			if (iParam0 == Global_11188.f_1E4[iVar0])
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_351(int iParam0)//Position - 0x30B8D
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			if (Global_16222[iVar0] == iParam0)
			{
				return Global_1622C[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

int func_352(int iParam0, int iParam1, int iParam2)//Position - 0x30BF0
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]))
		{
			if (Global_16222[iVar0] == iParam0)
			{
				if (iParam1 == 145 || iParam1 == Global_1622C[iVar0])
				{
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(iParam0) == func_36(iParam1, iParam2))
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

void func_353(int iParam0, var uParam1)//Position - 0x30C7E
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		func_357(uParam1);
		uParam1->f_42 = ENTITY::GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		VEHICLE::GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_3E), &(uParam1->f_3F), &(uParam1->f_40));
		uParam1->f_41 = VEHICLE::GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_43 = VEHICLE::GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_45 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_46 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		VEHICLE::_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_4A), &(uParam1->f_4B), &(uParam1->f_4C));
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 28);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 29);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 30);
		}
		if (VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 31);
		}
		if (uParam1->f_41 == 4294967295 && !func_356(uParam1->f_42))
		{
			uParam1->f_41 = 0;
		}
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_44 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_42))
		{
			if (VEHICLE::_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						MISC::SET_BIT(&(uParam1->f_4D), 22);
						break;
					
					case 4:
					case 1:
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 23);
						GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 22);
						break;
					
					case 5:
						MISC::SET_BIT(&(uParam1->f_4D), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_4D), 23);
			}
		}
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 9);
		}
		if (VEHICLE::IS_VEHICLE_STOLEN(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 10);
		}
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_47), &(uParam1->f_48), &(uParam1->f_49));
		}
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 12);
		}
		func_355(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_354(iVar0 + 1));
			}
			iVar0++;
		}
		if (GRAPHICS::_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 11);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 11);
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			MISC::SET_BIT(&(uParam1->f_4D), 27);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_4D), 27);
		}
	}
}

int func_354(int iParam0)//Position - 0x30F29
{
	switch (iParam0)
	{
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 2;
			break;
		
		case 4:
			return 3;
			break;
		
		case 5:
			return 4;
			break;
		
		case 6:
			return 5;
			break;
		
		case 7:
			return 6;
			break;
		
		case 8:
			return 7;
			break;
		
		case 9:
			return 8;
			break;
		
		case 10:
			return 24;
			break;
		
		case 11:
			return 25;
			break;
		
		case 12:
			return 26;
			break;
	}
	return 0;
}

int func_355(int iParam0, var uParam1, var uParam2)//Position - 0x30FD9
{
	int iVar0;
	int iVar1;
	
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		return 0;
	}
	if (VEHICLE::GET_NUM_MOD_KITS(*iParam0) == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		iVar1 = iVar0;
		if ((((iVar1 == 17 || iVar1 == 18) || iVar1 == 19) || iVar1 == 20) || iVar1 == 21)
		{
			(*uParam1)[iVar0] = 0;
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*iParam0, iVar1))
			{
				switch (unk_0x3DFF319A831E0CDB(*iParam0))
				{
					case 255:
						(*uParam1)[iVar0] = 1;
						break;
					
					case 0:
						(*uParam1)[iVar0] = 2;
						break;
					
					case 1:
						(*uParam1)[iVar0] = 3;
						break;
					
					case 2:
						(*uParam1)[iVar0] = 4;
						break;
					
					case 3:
						(*uParam1)[iVar0] = 5;
						break;
					
					case 4:
						(*uParam1)[iVar0] = 6;
						break;
					
					case 5:
						(*uParam1)[iVar0] = 7;
						break;
					
					case 6:
						(*uParam1)[iVar0] = 8;
						break;
					
					case 7:
						(*uParam1)[iVar0] = 9;
						break;
					
					case 8:
						(*uParam1)[iVar0] = 10;
						break;
					
					case 9:
						(*uParam1)[iVar0] = 11;
						break;
					
					case 10:
						(*uParam1)[iVar0] = 12;
						break;
					
					case 11:
						(*uParam1)[iVar0] = 13;
						break;
					
					case 12:
						(*uParam1)[iVar0] = 14;
						break;
					
					case 13:
						(*uParam1)[iVar0] = 15;
						break;
				}
			}
			else
			{
				(*uParam1)[iVar0] = 0;
			}
		}
		else
		{
			(*uParam1)[iVar0] = VEHICLE::GET_VEHICLE_MOD(*iParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_356(int iParam0)//Position - 0x311CC
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return 1;
		
		default:
	}
	return 0;
}

void func_357(var uParam0)//Position - 0x311EC
{
	int iVar0;
	
	uParam0->f_42 = 0;
	uParam0->f_4D = 0;
	uParam0->f_41 = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	uParam0->f_40 = 0;
	uParam0->f_4A = 0;
	uParam0->f_4B = 0;
	uParam0->f_4C = 0;
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49)
	{
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_3B[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_45 = 0;
	uParam0->f_46 = 1;
	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	uParam0->f_49 = 0;
}

int func_358(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x3129D
{
	char* sVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam0 == AUDIO::_0x0626A247D2405330())
			{
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			}
			else
			{
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, 1);
			}
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*uParam1, 0))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(*uParam1, true), unk_0x8000C77B5F336760(iParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("TAXI")))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, 4294967295, 0) != iParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, 4294967295, 0) != 0)
							{
								return 0;
							}
						}
						if (func_359(*uParam1, func_190(), 1))
						{
							sVar0 = SCRIPT::GET_THIS_SCRIPT_NAME();
							if (!MISC::ARE_STRINGS_EQUAL(sVar0, "save_anywhere"))
							{
								return 0;
							}
							else if (!PED::IS_PED_IN_ANY_VEHICLE(iParam0, 1))
							{
								return 0;
							}
						}
						if (iParam3 == 1)
						{
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
							{
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
								{
									return 0;
								}
							}
						}
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("BLIMP")))
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_359(int iParam0, int iParam1, bool bParam2)//Position - 0x313CC
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_360(iParam1, iVar0, &sVar1, &iVar2))
	{
		if (!bParam2 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iVar2], 0))
		{
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_360(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x3143D
{
	StringCopy(sParam2, "", 32);
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return 1;
			}
			break;
		
		case 1:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return 1;
			}
			break;
		
		case 2:
			if (iParam1 == 0)
			{
				StringCopy(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return 1;
			}
			else if (iParam1 == 1)
			{
				StringCopy(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return 1;
			}
			else if (iParam1 == 2)
			{
				StringCopy(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return 1;
			}
			break;
	}
	return 0;
}

int func_361()//Position - 0x31516
{
	func_191();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_362(int iParam0)//Position - 0x3152F
{
	int iVar0;
	
	iVar0 = func_22(iParam0);
	if (func_21(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_19E56.f_933.f_21B.f_126[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_363(var uParam0, int iParam1)//Position - 0x3156B
{
	int iVar0;
	vector3 vVar1;
	var uVar2;
	int iVar3;
	
	*uParam0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330());
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
	}
	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.472f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("finale_choice")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 5))
	{
		*uParam0 = { -745.4462f, 5595.146f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 6))
	{
		*uParam0 = { -1675.521f, -1125.59f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 7))
	{
		*uParam0 = { -1631.219f, -1112.805f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.659f, -1715.467f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.956f, -1725.189f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -415.4365f, 2068.289f, 113.3002f, -564.9516f, 1884.703f, 134.0403f, 258.75f, 0, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -596.4706f, 2089.921f, 125.4128f, -581.2134f, 2036.256f, 136.2836f, 9.5f, 0, true, 0))
	{
		*uParam0 = { -601.59f, 2099.197f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.376f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.932f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.93f, 2594.153f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1)
	{
		if (func_367(&iVar0))
		{
			if (func_365(iVar0, &vVar1, &uVar2))
			{
				vVar1.z = (vVar1.z + 1f);
				*uParam0 = { vVar1 };
				uParam0->f_3 = uVar2;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 207.4336f, -1019.795f, -100.4728f, 189.9338f, -1019.623f, -95.56883f, 17.1875f, 0, true, 0))
		{
			iVar3 = func_190();
			if (iVar3 == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar3 == 1)
			{
				*uParam0 = { -68.5531f, -1824.377f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar3 == 2)
			{
				*uParam0 = { -220.8189f, -1162.302f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 483.7175f, -1326.63f, 28.2135f, 474.9644f, -1307.998f, 34.49498f, 12f, 0, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.08f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), -1146.77f, -1534.22f, 3.37f, -1158.453f, -1517.75f, 6.374244f, 13f, 0, true, 0))
		{
			*uParam0 = { -1160.095f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(AUDIO::_0x0626A247D2405330(), 439.5432f, -996.9769f, 24.88307f, 428.2935f, -997.0192f, 28.57458f, 8.5f, 0, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_364(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}
}

int func_364(vector3 vParam0, char* sParam1, vector3 vParam2)//Position - 0x31AC6
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(vParam0))
	{
		iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vParam2, sParam1);
		if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
		{
			return 0;
		}
		iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
		if (iVar1 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_365(int iParam0, var uParam1, var uParam2)//Position - 0x31B0A
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
		
		case 1:
			*uParam1 = { 129.8484f, -1716.528f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
		
		case 2:
			*uParam1 = { -1296.913f, -1120.999f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
		
		case 3:
			*uParam1 = { 1938.028f, 3718.736f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
		
		case 4:
			*uParam1 = { 1197.866f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
		
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
		
		case 6:
			*uParam1 = { -287.7696f, 6238.081f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
		
		case 7:
			*uParam1 = { 99.2876f, -1395.16f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
		
		case 8:
			*uParam1 = { 1679.445f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
		
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
		
		case 10:
			*uParam1 = { -1088.054f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
		
		case 11:
			*uParam1 = { 1194.163f, 2695.644f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
		
		case 12:
			*uParam1 = { -821.2829f, -1088.027f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
		
		case 13:
			*uParam1 = { -3.3416f, 6521.303f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
		
		case 14:
			*uParam1 = { -1208.417f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
		
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
		
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
		
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
		
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
		
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
		
		case 20:
			*uParam1 = { -1461.355f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
		
		case 21:
			*uParam1 = { -1347.739f, -1278.573f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
		
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
		
		case 23:
			*uParam1 = { 1858.774f, 3742.393f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
		
		case 24:
			*uParam1 = { -286.3272f, 6202.802f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
		
		case 25:
			*uParam1 = { -1161.596f, -1417.7f, 3.712f };
			*uParam2 = 246.9161f;
			break;
		
		case 26:
			*uParam1 = { 1308.952f, -1660.611f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
		
		case 27:
			*uParam1 = { -3161.585f, 1074.214f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
		
		case 28:
			*uParam1 = { 28.423f, -1110.814f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
		
		case 29:
			*uParam1 = { 1704.966f, 3749.709f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
		
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
		
		case 31:
			*uParam1 = { 837.7854f, -1017.963f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
		
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
		
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
		
		case 34:
			*uParam1 = { -1323.06f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
		
		case 35:
			*uParam1 = { -1106.102f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
		
		case 36:
			*uParam1 = { -3157.932f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
		
		case 37:
			*uParam1 = { 2562.882f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
		
		case 38:
			*uParam1 = { 822.48f, -2142.875f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
		
		case 39:
			*uParam1 = { -1137.053f, -1993.916f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
		
		case 40:
			*uParam1 = { 717.8107f, -1084.081f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
		
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
		
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
		
		case 43:
			*uParam1 = { 1201.709f, 2664.813f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
		
		case 44:
			*uParam1 = { -200.1521f, -1297.502f, 30.296f };
			*uParam2 = 269.0687f;
			break;
		
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
		
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}
	return !func_366(*uParam1, 0f, 0f, 0f, 0);
}

bool func_366(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x321E9
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_367(var uParam0)//Position - 0x32230
{
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (func_389())
		{
			*uParam0 = func_372(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), 6, 4294967295, 0, 1, 4294967295);
			if (func_371(*uParam0) && !func_368(*uParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_368(int iParam0)//Position - 0x3228B
{
	return func_369(iParam0, 0, 1);
}

int func_369(int iParam0, int iParam1, bool bParam2)//Position - 0x3229B
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	if (bParam2)
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_16C64.f_538[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_198() == 0)
		{
			return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(func_118(func_370(iParam0), 4294967295, 0), iParam1);
		}
	}
	else
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_29C[iParam0], iParam1);
	}
	return 0;
}

int func_370(int iParam0)//Position - 0x32305
{
	switch (iParam0)
	{
		case 0:
			return 827;
			break;
		
		case 1:
			return 828;
			break;
		
		case 2:
			return 829;
			break;
		
		case 3:
			return 830;
			break;
		
		case 4:
			return 831;
			break;
		
		case 5:
			return 832;
			break;
		
		case 6:
			return 833;
			break;
		
		case 7:
			return 834;
			break;
		
		case 8:
			return 835;
			break;
		
		case 9:
			return 836;
			break;
		
		case 10:
			return 837;
			break;
		
		case 11:
			return 838;
			break;
		
		case 12:
			return 839;
			break;
		
		case 13:
			return 840;
			break;
		
		case 14:
			return 841;
			break;
		
		case 15:
			return 843;
			break;
		
		case 16:
			return 844;
			break;
		
		case 17:
			return 845;
			break;
		
		case 18:
			return 846;
			break;
		
		case 19:
			return 847;
			break;
		
		case 20:
			return 848;
			break;
		
		case 21:
			return 849;
			break;
		
		case 22:
			return 850;
			break;
		
		case 23:
			return 851;
			break;
		
		case 24:
			return 852;
			break;
		
		case 25:
			return 853;
			break;
		
		case 26:
			return 854;
			break;
		
		case 27:
			return 855;
			break;
		
		case 28:
			return 856;
			break;
		
		case 29:
			return 857;
			break;
		
		case 30:
			return 858;
			break;
		
		case 31:
			return 859;
			break;
		
		case 32:
			return 860;
			break;
		
		case 33:
			return 861;
			break;
		
		case 34:
			return 862;
			break;
		
		case 35:
			return 863;
			break;
		
		case 36:
			return 864;
			break;
		
		case 37:
			return 865;
			break;
		
		case 38:
			return 866;
			break;
		
		case 39:
			return 867;
			break;
		
		case 40:
			return 871;
			break;
		
		case 41:
			return 872;
			break;
		
		case 42:
			return 873;
			break;
		
		case 43:
			return 874;
			break;
		
		case 44:
			return 8488;
			break;
		
		case 45:
			return 3808;
			break;
		
		case 46:
			return 5383;
			break;
		
		case 47:
			return 6155;
			break;
		
		case 48:
			return 7232;
			break;
		
		case 49:
			return 7878;
			break;
		
		default:
			break;
	}
	return 9954;
}

int func_371(int iParam0)//Position - 0x32608
{
	return func_369(iParam0, 5, 1);
}

int func_372(vector3 vParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5)//Position - 0x32618
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 4294967295;
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (iParam1 == 6 || iParam1 == func_388(iVar0))
		{
			if (!bParam3 || func_387(iVar0))
			{
				fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_373(iVar0, 0), true);
				if (((fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam2) || iParam2 == 4294967295)) && (iParam4 || iVar0 != 21)) && iVar0 != iParam5)
				{
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

Vector3 func_373(int iParam0, bool bParam1)//Position - 0x326BA
{
	switch (iParam0)
	{
		case 4294967295:
			return 0f, 0f, 0f;
			break;
		
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
			break;
		
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
			break;
		
		case 2:
			return -1287.082f, -1116.558f, 5.9901f;
			break;
		
		case 3:
			return 1933.119f, 3726.079f, 31.8444f;
			break;
		
		case 4:
			return 1208.333f, -470.917f, 65.208f;
			break;
		
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
			break;
		
		case 6:
			return -280.8165f, 6231.771f, 30.6955f;
			break;
		
		case 7:
			return 80.665f, -1391.669f, 28.3761f;
			break;
		
		case 8:
			return 1687.881f, 4820.55f, 41.0096f;
			break;
		
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
			break;
		
		case 10:
			return -1094.049f, 2704.171f, 18.0873f;
			break;
		
		case 11:
			return 1197.972f, 2704.22f, 37.1572f;
			break;
		
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
			break;
		
		case 13:
			return -0.2361f, 6516.045f, 30.8684f;
			break;
		
		case 14:
			return -1199.809f, -776.6886f, 16.3237f;
			break;
		
		case 15:
			return 618.1857f, 2752.567f, 41.0881f;
			break;
		
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
			break;
		
		case 17:
			return -3168.966f, 1055.287f, 19.8632f;
			break;
		
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
			break;
		
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
			break;
		
		case 20:
			return -1455.005f, -233.1862f, 48.7936f;
			break;
		
		case 21:
			return -1335.973f, -1278.555f, 3.8598f;
			break;
		
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
			break;
		
		case 23:
			return 1861.685f, 3750.08f, 32.0318f;
			break;
		
		case 24:
			return -290.1603f, 6199.095f, 30.4871f;
			break;
		
		case 25:
			return -1153.948f, -1425.019f, 3.9544f;
			break;
		
		case 26:
			return 1322.455f, -1651.125f, 51.1885f;
			break;
		
		case 27:
			return -3169.42f, 1074.727f, 19.8343f;
			break;
		
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
			break;
		
		case 29:
			return 1697.979f, 3753.2f, 33.7053f;
			break;
		
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
			break;
		
		case 31:
			return 844.1248f, -1025.571f, 27.1948f;
			break;
		
		case 32:
			return -325.8904f, 6077.026f, 30.4548f;
			break;
		
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
			break;
		
		case 34:
			return -1313.948f, -390.9637f, 35.592f;
			break;
		
		case 35:
			return -1111.238f, 2688.463f, 17.6131f;
			break;
		
		case 36:
			return -3165.231f, 1082.855f, 19.8438f;
			break;
		
		case 37:
			return 2569.612f, 302.576f, 107.7349f;
			break;
		
		case 38:
			return 811.8699f, -2149.102f, 28.6363f;
			break;
		
		case 39:
			return -1147.314f, -1992.434f, 12.1803f;
			break;
		
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
			break;
		
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
			break;
		
		case 42:
			return 113.2615f, 6624.28f, 30.7871f;
			break;
		
		case 43:
			return 1174.707f, 2644.45f, 36.7552f;
			break;
		
		case 44:
			if (bParam1)
			{
				return -211.5f, -1324.2f, 30.296f;
			}
			else
			{
				return -205.6654f, -1311.113f, 30.296f;
			}
			break;
		
		case 45:
			return func_384(Global_17447);
			break;
		
		case 46:
			if (Global_184157 != func_383())
			{
				if (func_382(Global_184157))
				{
					return func_375(2, 2);
				}
				else if (func_374(Global_184157))
				{
					return func_375(45, 3);
				}
				else
				{
					return 1000000f, 1000000f, 1000000f;
				}
			}
			else
			{
				return 1000000f, 1000000f, 1000000f;
			}
			break;
		
		case 47:
			return 510.1f, 4749.5f, -69f;
			break;
		
		case 48:
			return -1422.197f, -3015.803f, -79.1603f;
			break;
		
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
			break;
	}
	return 1000000f, 1000000f, 1000000f;
}

int func_374(int iParam0)//Position - 0x32C8F
{
	if (iParam0 != func_383())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 1)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 2))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_375(int iParam0, int iParam1)//Position - 0x32CED
{
	vector3 vVar0;
	vector3 vVar1;
	
	vVar1 = { 1000000f, 1000000f, 1000000f };
	if (Global_184157 != func_383())
	{
		if (iParam1 == 3)
		{
			if (func_376(iParam0, 1, &vVar0, 0, 0))
			{
				vVar1 = { vVar0 };
			}
		}
		else if (iParam1 == 2)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[Global_184157 /*790*/].f_111.f_FA, 4))
			{
				if (func_376(iParam0, 1, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[Global_184157 /*790*/].f_111.f_FA, 5))
			{
				if (func_376(iParam0, 2, &vVar0, 0, 0))
				{
					vVar1 = { vVar0 };
				}
			}
		}
	}
	return vVar1;
}

int func_376(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)//Position - 0x32D9B
{
	struct<4> Var0;
	vector3 vVar1;
	struct<4> Var2;
	vector3 vVar3;
	
	if (!func_381(iParam3, &Var0))
	{
		return 0;
	}
	if (!func_381(iParam1, &vVar1))
	{
		return 0;
	}
	if (!bParam4)
	{
		Var2 = { func_379(iParam0) };
	}
	else
	{
		Var2 = { func_378(iParam0) };
	}
	vVar3 = { Var2 - Var0 };
	vVar3 = { func_377(vVar3, -Var0.f_3.f_2) };
	vVar3 = { func_377(vVar3, vVar1.f_3.f_2) };
	*uParam2 = { OBJECT::_GET_OBJECT_OFFSET_FROM_COORDS(vVar1, 0f, vVar3) };
	uParam2->f_3 = { Var2.f_3 };
	return 1;
}

Vector3 func_377(vector3 vParam0, float fParam1)//Position - 0x32E30
{
	vector3 vVar0;
	float fVar1;
	float fVar2;
	
	fVar1 = SYSTEM::SIN(fParam1);
	fVar2 = SYSTEM::COS(fParam1);
	vVar0.x = ((vParam0.x * fVar2) - (vParam0.y * fVar1));
	vVar0.y = ((vParam0.x * fVar1) + (vParam0.y * fVar2));
	vVar0.z = vParam0.z;
	return vVar0;
}

struct<6> func_378(int iParam0)//Position - 0x32E74
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 1:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 2:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 3:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 4:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 5:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 6:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 7:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 8:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
	}
	return Var0;
}

struct<6> func_379(int iParam0)//Position - 0x32FF8
{
	return func_380(iParam0);
}

struct<6> func_380(int iParam0)//Position - 0x33006
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0 = { 1105.22f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 1:
			Var0 = { 1104.105f, -3013.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 19:
			Var0 = { 1105.22f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 20:
			Var0 = { 1104.105f, -3005.985f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 2:
			Var0 = { 1102f, -3011.925f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 3:
			Var0 = { 1103f, -3010f, -38.125f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 4:
			Var0 = { 1103.213f, -3013.483f, -39.03f };
			Var0.f_3 = { 0f, 0f, 31.32f };
			break;
		
		case 5:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1101.408f, -3012.32f, -38.45339f };
			break;
		
		case 6:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1103.037f, -3012.318f, -39.99874f };
			break;
		
		case 7:
			Var0 = { 1105.645f, -3012.04f, -39.542f };
			Var0.f_3 = { 0f, 0f, -86.04f };
			break;
		
		case 8:
			Var0.f_3 = { 0f, 0f, 0f };
			Var0 = { 1104.063f, -3012.368f, -39.99875f };
			break;
		
		case 9:
			Var0 = { 1105.665f, -3012.334f, -38.50835f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 10:
			Var0 = { 1102.504f, -3012.35f, -39.341f };
			Var0.f_3 = { 0f, 0f, -96.48f };
			break;
		
		case 11:
			Var0 = { 1102.928f, -3012.693f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 12:
			Var0 = { 1102.942f, -3011.315f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 61:
			Var0 = { 1101.994f, -3012.878f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 62:
			Var0 = { 1103.152f, -3013.032f, -38.24946f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 13:
			Var0 = { 1102.465f, -3009.515f, -39.341f };
			Var0.f_3 = { 0f, 0f, -12.96f };
			break;
		
		case 14:
			Var0 = { 1102.917f, -3009.525f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 15:
			Var0 = { 1102.922f, -3010.887f, -37.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 63:
			Var0 = { 1101.682f, -3009.227f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 64:
			Var0 = { 1102.453f, -3008.51f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 16:
			Var0 = { 1104.684f, -3009.561f, -39.341f };
			Var0.f_3 = { 0f, 0f, 169.56f };
			break;
		
		case 17:
			Var0 = { 1104.34f, -3008.698f, -39.99945f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 18:
			Var0 = { 1104.344f, -3009.618f, -37.98172f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 65:
			Var0 = { 1105.459f, -3009.793f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 66:
			Var0 = { 1104.783f, -3010.433f, -38.2f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 44:
			Var0 = { 1104.025f, -3007.316f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 21:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 22:
			Var0 = { 1103.562f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 23:
			Var0 = { 1102.1f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 115.92f };
			break;
		
		case 24:
			Var0 = { 1105.05f, -3010.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -103.32f };
			break;
		
		case 25:
			Var0 = { 1105.05f, -3008.75f, -39.35f };
			Var0.f_3 = { 0f, 0f, -77.76f };
			break;
		
		case 26:
			Var0 = { 1102.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 27:
			Var0 = { 1102.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 28:
			Var0 = { 1105.05f, -3012.653f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 29:
			Var0 = { 1105.05f, -3011.717f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 30:
			Var0 = { 1102.1f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, 102.96f };
			break;
		
		case 31:
			Var0 = { 1105.05f, -3002.1f, -39.35f };
			Var0.f_3 = { 0f, 0f, -101.88f };
			break;
		
		case 32:
			Var0 = { 1105.05f, -3000.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -81.36f };
			break;
		
		case 33:
			Var0 = { 1102.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 34:
			Var0 = { 1102.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 35:
			Var0 = { 1105.05f, -3004.541f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 36:
			Var0 = { 1105.05f, -3003.592f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 37:
			Var0 = { 1102.1f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, 103.32f };
			break;
		
		case 38:
			Var0 = { 1105.05f, -2994.2f, -39.35f };
			Var0.f_3 = { 0f, 0f, -109.8f };
			break;
		
		case 39:
			Var0 = { 1105.05f, -2992.65f, -39.35f };
			Var0.f_3 = { 0f, 0f, -84.96f };
			break;
		
		case 40:
			Var0 = { 1102.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 41:
			Var0 = { 1102.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, 90f };
			break;
		
		case 42:
			Var0 = { 1105.05f, -2996.501f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 43:
			Var0 = { 1105.05f, -2995.582f, -39.35f };
			Var0.f_3 = { 0f, 0f, -90f };
			break;
		
		case 45:
			Var0 = { 1101f, -3011.9f, -39.95f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 46:
			Var0 = { 1102f, -3010f, -38.115f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 47:
			Var0 = { 1105.174f, -3004.16f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 48:
			Var0 = { 1105.175f, -3005.818f, -37.91948f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 49:
			Var0 = { 1106.6f, -3000.847f, -39.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 50:
			Var0 = { 1106.601f, -3002.171f, -37.89988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 51:
			Var0 = { 1101.95f, -3011.9f, -39.2f };
			Var0.f_3 = { 0f, 0f, 49.5f };
			break;
		
		case 52:
			Var0 = { 1101.95f, -3010f, -39.2f };
			Var0.f_3 = { 0f, 0f, 130.32f };
			break;
		
		case 53:
			Var0 = { 1105.16f, -3009.06f, -39.2f };
			Var0.f_3 = { 0f, 0f, -44.64f };
			break;
		
		case 54:
			Var0 = { 1102.476f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 55:
			Var0 = { 1099f, -3008.508f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 56:
			Var0 = { 1103.593f, -3008.27f, -39.9987f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 57:
			Var0 = { 1103.565f, -3014f, -39.988f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 58:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 59:
			Var0 = { 1103.565f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 60:
			Var0 = { 1103.55f, -3014f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 67:
			Var0 = { 1103.55f, -3013.762f, -40f };
			Var0.f_3 = { 0f, 0f, 180f };
			break;
		
		case 68:
			Var0 = { 1103.55f, -3006.186f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
		
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			Var0 = { 1103.6f, -3013.933f, -40f };
			Var0.f_3 = { 0f, 0f, 0f };
			break;
	}
	return Var0;
}

int func_381(int iParam0, var uParam1)//Position - 0x33ACD
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return 1;
		
		default:
	}
	return 0;
}

int func_382(int iParam0)//Position - 0x33B4F
{
	if (iParam0 != func_383())
	{
		if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 3) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 4)) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[iParam0 /*790*/].f_111.f_FA, 5))
		{
			return 1;
		}
	}
	return 0;
}

int func_383()//Position - 0x33BAD
{
	return 4294967295;
}

Vector3 func_384(int iParam0)//Position - 0x33BB6
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
			break;
		
		case 2:
			return 1060f, -2990f, -35f;
			break;
		
		case 3:
			return 974.9542f, -3000.091f, -35f;
			break;
		
		case 6:
			return -1586.36f, -566.6f, 106.17f;
			break;
		
		case 7:
			return -1389.87f, -465.17f, 82.68f;
			break;
		
		case 8:
			return -145.81f, -590.2f, 171.13f;
			break;
		
		case 9:
			return -62.49f, -823.55f, 288.74f;
			break;
		
		case 4:
			return 1102.515f, -3158.888f, -38.5186f;
			break;
		
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
			break;
		
		case 10:
			return 1103.562f, -3000f, -40f;
			break;
		
		case 11:
			return 938.3077f, -3196.112f, -100f;
			break;
		
		case 12:
			return -1266.802f, -3014.836f, -49.4895f;
			break;
		
		case 13:
			return 520.0001f, 4750f, -70f;
			break;
		
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
			break;
		
		case 15:
			return -1604.664f, -3012.583f, -79.9999f;
			break;
		
		case 16:
			return -1421.015f, -3012.587f, -80f;
			break;
		
		case 17:
			if (func_385() == 0)
			{
				return 205f, 5180f, -90f;
			}
			else
			{
				return 170f, 5190f, 10f;
			}
			break;
		
		default:
			return 0f, 0f, -200f;
			break;
	}
	return 0f, 0f, -200f;
}

int func_385()//Position - 0x33DC1
{
	return func_386(CAM::_0xDC9DA9E8789F5246());
}

var func_386(int iParam0)//Position - 0x33DD1
{
	return MISC::GET_BITS_IN_RANGE(Global_24FBF9[iParam0 /*413*/].f_135.f_3, 28, 31);
}

int func_387(int iParam0)//Position - 0x33DEE
{
	return func_369(iParam0, 0, 0);
}

int func_388(int iParam0)//Position - 0x33DFE
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

bool func_389()//Position - 0x340A5
{
	return Global_16C64.f_147 > 0;
}

var func_390()//Position - 0x340B6
{
	var uVar0;
	
	func_400(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_399(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_398(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_393(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_392(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_391(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_391(var uParam0, int iParam1)//Position - 0x340FC
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

void func_392(var uParam0, int iParam1)//Position - 0x34182
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_393(var uParam0, int iParam1)//Position - 0x341B5
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_397(*uParam0);
	iVar1 = func_395(*uParam0);
	if (iParam1 < 1 || iParam1 > func_394(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_394(int iParam0, int iParam1)//Position - 0x34206
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

var func_395(int iParam0)//Position - 0x342A8
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_396(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_396(bool bParam0, int iParam1, int iParam2)//Position - 0x342CD
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_397(var uParam0)//Position - 0x342E4
{
	return uParam0 & 15;
}

void func_398(var uParam0, int iParam1)//Position - 0x342F1
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_399(var uParam0, int iParam1)//Position - 0x3432B
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_400(var uParam0, int iParam1)//Position - 0x34366
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_401(char* sParam0)//Position - 0x343A2
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
	{
		return 0;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
	{
		return 2;
	}
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
	{
		return 3;
	}
	return 4294967295;
}

struct<2> func_402(int iParam0)//Position - 0x343FC
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_403(char* sParam0, int iParam1)//Position - 0x34888
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	
	iVar2 = MISC::GET_HASH_KEY(sParam0);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < 63)
	{
		iVar0 = iVar3;
		func_404(iVar0, &sVar1);
		if (MISC::GET_HASH_KEY(sVar1) == iVar2)
		{
			return iVar0;
		}
		iVar3++;
	}
	if (iParam1 == 0)
	{
	}
	return 4294967295;
}

void func_404(int iParam0, var uParam1)//Position - 0x348D1
{
	switch (iParam0)
	{
		case 0:
			func_405(uParam1, "Abigail1", func_407(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 1:
			func_405(uParam1, "Abigail2", func_407(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, 4294967295, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 2:
			func_405(uParam1, "Barry1", func_407(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 3:
			func_405(uParam1, "Barry2", func_407(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 4:
			func_405(uParam1, "Barry3", func_407(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", 4294967295, 0, "", 164, 1, 4294967295, 0, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 5:
			func_405(uParam1, "Barry3A", func_407(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 6:
			func_405(uParam1, "Barry3C", func_407(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 7:
			func_405(uParam1, "Barry4", func_407(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, 4294967295, 4, 2, 800, 2000, func_406(iParam0), 0, 0);
			break;
		
		case 8:
			func_405(uParam1, "Dreyfuss1", func_407(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 9:
			func_405(uParam1, "Epsilon1", func_407(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 10:
			func_405(uParam1, "Epsilon2", func_407(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 11:
			func_405(uParam1, "Epsilon3", func_407(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 12:
			func_405(uParam1, "Epsilon4", func_407(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 13:
			func_405(uParam1, "Epsilon5", func_407(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 14:
			func_405(uParam1, "Epsilon6", func_407(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 15:
			func_405(uParam1, "Epsilon7", func_407(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", 4294967295, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 16:
			func_405(uParam1, "Epsilon8", func_407(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, 4294967295, 4, 1, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 17:
			func_405(uParam1, "Extreme1", func_407(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", 4294967295, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 18:
			func_405(uParam1, "Extreme2", func_407(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 19:
			func_405(uParam1, "Extreme3", func_407(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 20:
			func_405(uParam1, "Extreme4", func_407(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 21:
			func_405(uParam1, "Fanatic1", func_407(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, 4294967295, 4, 1, 700, 2000, func_406(iParam0), 1, 0);
			break;
		
		case 22:
			func_405(uParam1, "Fanatic2", func_407(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 700, 2000, func_406(iParam0), 1, 0);
			break;
		
		case 23:
			func_405(uParam1, "Fanatic3", func_407(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 2, 700, 2000, func_406(iParam0), 0, 1);
			break;
		
		case 24:
			func_405(uParam1, "Hao1", func_407(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", 4294967295, 0, "controller_Races", 13, 1, 4294967295, 4, 2, 2000, 500, func_406(iParam0), 0, 1);
			break;
		
		case 25:
			func_405(uParam1, "Hunting1", func_407(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", 4294967295, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 26:
			func_405(uParam1, "Hunting2", func_407(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 27:
			func_405(uParam1, "Josh1", func_407(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", 4294967295, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 28:
			func_405(uParam1, "Josh2", func_407(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 29:
			func_405(uParam1, "Josh3", func_407(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 4294967295, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 30:
			func_405(uParam1, "Josh4", func_407(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", 4294967295, 36, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 31:
			func_405(uParam1, "Maude1", func_407(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", 4294967295, 0, "BailBond_Launcher", 0, 1, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 32:
			func_405(uParam1, "Minute1", func_407(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", 4294967295, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 33:
			func_405(uParam1, "Minute2", func_407(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", 4294967295, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 34:
			func_405(uParam1, "Minute3", func_407(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", 4294967295, 10, "", 0, 0, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 35:
			func_405(uParam1, "MrsPhilips1", func_407(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", 4294967295, 0, "ambient_MrsPhilips", 0, 1, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 36:
			func_405(uParam1, "MrsPhilips2", func_407(iParam0), 0, 11, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 1, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 37:
			func_405(uParam1, "Nigel1", func_407(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", 4294967295, 0, "", 177, 1, 4294967295, 1, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 38:
			func_405(uParam1, "Nigel1A", func_407(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 39:
			func_405(uParam1, "Nigel1B", func_407(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_406(iParam0), 1, 1);
			break;
		
		case 40:
			func_405(uParam1, "Nigel1C", func_407(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_406(iParam0), 1, 1);
			break;
		
		case 41:
			func_405(uParam1, "Nigel1D", func_407(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_406(iParam0), 1, 1);
			break;
		
		case 42:
			func_405(uParam1, "Nigel2", func_407(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", 4294967295, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 43:
			func_405(uParam1, "Nigel3", func_407(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", 4294967295, 16, "postRC_Nigel3", 0, 0, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 1, 1);
			break;
		
		case 44:
			func_405(uParam1, "Omega1", func_407(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", 4294967295, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 45:
			func_405(uParam1, "Omega2", func_407(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 46:
			func_405(uParam1, "Paparazzo1", func_407(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", 4294967295, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 47:
			func_405(uParam1, "Paparazzo2", func_407(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", 4294967295, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 48:
			func_405(uParam1, "Paparazzo3", func_407(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", 4294967295, 8, "", 183, 1, 4294967295, 2, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 49:
			func_405(uParam1, "Paparazzo3A", func_407(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 50:
			func_405(uParam1, "Paparazzo3B", func_407(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 51:
			func_405(uParam1, "Paparazzo4", func_407(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", 4294967295, 8, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 52:
			func_405(uParam1, "Rampage1", func_407(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", 4294967295, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 54:
			func_405(uParam1, "Rampage3", func_407(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", 4294967295, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 55:
			func_405(uParam1, "Rampage4", func_407(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", 4294967295, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 56:
			func_405(uParam1, "Rampage5", func_407(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", 4294967295, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_406(iParam0), 0, 0);
			break;
		
		case 53:
			func_405(uParam1, "Rampage2", func_407(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", 4294967295, 0, "rampage_controller", 0, 0, 4294967295, 4, 4, 0, 2359, func_406(iParam0), 1, 0);
			break;
		
		case 57:
			func_405(uParam1, "TheLastOne", func_407(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, 4294967295, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 58:
			func_405(uParam1, "Tonya1", func_407(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", 4294967295, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 59:
			func_405(uParam1, "Tonya2", func_407(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 60:
			func_405(uParam1, "Tonya3", func_407(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 61:
			func_405(uParam1, "Tonya4", func_407(iParam0), 0, 17, 4, 0f, 0f, 0f, 4294967295, "", 4294967295, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		case 62:
			func_405(uParam1, "Tonya5", func_407(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", 4294967295, 48, "", 0, 0, 4294967295, 4, 2, 0, 2359, func_406(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_405(var uParam0, char* sParam1, struct<2> Param2, int iParam3, int iParam4, int iParam5, vector3 vParam6, int iParam7, char* sParam8, int iParam9, int iParam10, char* sParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, var uParam19, int iParam20, int iParam21)//Position - 0x35B6C
{
	uParam0->f_4 = iParam4;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam3;
	uParam0->f_5 = iParam5;
	uParam0->f_6 = { vParam6 };
	uParam0->f_9 = iParam7;
	StringCopy(&(uParam0->f_A), sParam8, 16);
	uParam0->f_E = iParam9;
	uParam0->f_F = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 24);
	uParam0->f_16 = iParam12;
	uParam0->f_17 = iParam13;
	uParam0->f_18 = iParam14;
	uParam0->f_19 = iParam15;
	uParam0->f_1A = iParam16;
	uParam0->f_1B = iParam17;
	uParam0->f_1C = iParam18;
	uParam0->f_1D = uParam19;
	uParam0->f_1E = iParam20;
	uParam0->f_1F = iParam21;
}

int func_406(int iParam0)//Position - 0x35BFD
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_407(int iParam0)//Position - 0x35F43
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_402(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

int func_408(int iParam0)//Position - 0x35F7C
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_409(Global_19E56.f_2361.f_63.f_CD[10]);
			break;
		
		case 74:
		case 75:
			return func_409(Global_19E56.f_2361.f_63.f_CD[8]);
			break;
		
		case 84:
		case 85:
			return func_409(Global_19E56.f_2361.f_63.f_CD[11]);
			break;
		
		case 90:
			return func_409(Global_19E56.f_2361.f_63.f_CD[7]);
			break;
		
		case 93:
			return func_409(Global_19E56.f_2361.f_63.f_CD[9]);
			break;
	}
	return 0;
}

int func_409(int iParam0)//Position - 0x36038
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
			break;
		
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
			break;
	}
	return 4294967295;
}

int func_410(char* sParam0, bool bParam1)//Position - 0x3608C
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = func_411(iVar0, 1);
	if (iVar1 == 4294967295 && !bParam1)
	{
	}
	return iVar1;
}

int func_411(int iParam0, bool bParam1)//Position - 0x360B6
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 94)
	{
		if (Global_14893[iVar0 /*34*/].f_6 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	if (!bParam1)
	{
	}
	return 4294967295;
}

void func_412(bool bParam0)//Position - 0x360EC
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
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 = Global_19E56.f_5038.f_E9[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_D073[iVar0 /*3*/][0] = Global_19E56.f_5038[iVar0];
		Global_D073.f_1F[iVar0 /*3*/][0] = Global_19E56.f_5038.f_B[iVar0];
		Global_D073.f_3E[iVar0 /*3*/][0] = Global_19E56.f_5038.f_16[iVar0];
		Global_D073.f_5D[iVar0 /*3*/][0] = Global_19E56.f_5038.f_21[iVar0];
		Global_D073.f_7C[iVar0 /*3*/][0] = Global_19E56.f_5038.f_2C[iVar0];
		Global_D073.f_9B[iVar0 /*3*/][0] = Global_19E56.f_5038.f_37[iVar0];
		Global_D073.f_BA[iVar0 /*3*/][0] = Global_19E56.f_5038.f_42[iVar0];
		Global_D073.f_D9[iVar0 /*3*/][0] = Global_19E56.f_5038.f_4D[iVar0];
		Global_D073.f_F8[iVar0 /*3*/][0] = Global_19E56.f_5038.f_58[iVar0];
		if (!bParam0)
		{
			Global_D073[iVar0 /*3*/][1] = Global_19E56.f_5038[iVar0];
			Global_D073.f_1F[iVar0 /*3*/][1] = Global_19E56.f_5038.f_B[iVar0];
			Global_D073.f_3E[iVar0 /*3*/][1] = Global_19E56.f_5038.f_16[iVar0];
			Global_D073.f_5D[iVar0 /*3*/][1] = Global_19E56.f_5038.f_21[iVar0];
			Global_D073.f_7C[iVar0 /*3*/][1] = Global_19E56.f_5038.f_2C[iVar0];
			Global_D073.f_9B[iVar0 /*3*/][1] = Global_19E56.f_5038.f_37[iVar0];
			Global_D073.f_BA[iVar0 /*3*/][1] = Global_19E56.f_5038.f_42[iVar0];
			Global_D073.f_D9[iVar0 /*3*/][1] = Global_19E56.f_5038.f_4D[iVar0];
			Global_D073.f_F8[iVar0 /*3*/][1] = Global_19E56.f_5038.f_58[iVar0];
		}
		iVar0++;
	}
}

void func_413()//Position - 0x3636E
{
	RECORDING::_0xAF66DCEE6609B148();
	if (!iLocal_2162)
	{
		func_342(10, "10. Michael Kills Target", 0, 0, 0, 1);
		func_564();
		HUD::DISPLAY_RADAR(false);
		func_39(1);
		func_338();
		iLocal_2270 = 0;
		iLocal_2269 = 0;
		iLocal_72[5] = 0;
		func_563(303, 0);
		AUDIO::TRIGGER_MUSIC_EVENT("FBI3_BACK_TO_MICHAEL");
		bLocal_2265 = true;
		iLocal_2162 = 1;
		iLocal_2341 = 0;
		iLocal_2273 = 0;
		iLocal_2622 = 0;
		iLocal_2260 = 4294967295;
	}
	if (iLocal_2162)
	{
		if (bLocal_2265)
		{
			func_561(1);
			func_558();
			func_557();
		}
		if (iLocal_2264 != 0)
		{
			if (func_556(sLocal_183, 0, 0))
			{
				HUD::CLEAR_PRINTS();
			}
		}
		if (iLocal_2264 == 0 || iLocal_2264 == 1)
		{
			if ((!iLocal_2270 && ENTITY::DOES_ENTITY_EXIST(Local_228[15 /*2*/])) && PED::IS_PED_INJURED(Local_228[15 /*2*/]))
			{
				if (!RECORDING::_IS_RECORDING())
				{
					RECORDING::_0x293220DA1B46CEBC(4f, 4f, 4);
				}
				func_258();
				iLocal_2270 = 1;
			}
		}
		if (iLocal_2264 == 0)
		{
			switch (iLocal_2341)
			{
				case 0:
					if (iLocal_2289)
					{
						iLocal_2289 = 0;
						iLocal_2341 = 2;
					}
					else if (!PED::IS_PED_INJURED(Local_228[15 /*2*/]))
					{
						if (func_281())
						{
							if (iLocal_2257[4] || (iLocal_2260 != 4294967295 && MISC::GET_GAME_TIMER() > iLocal_2260))
							{
								iLocal_2341++;
							}
							else if (!iLocal_2256[0])
							{
								func_270("F3_SCOPE3", 0, 0);
								iLocal_2256[0] = 1;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_2315) > 5000)
							{
								func_270("F3_ZOOMD", 0, 0);
							}
						}
					}
					break;
				
				case 1:
					if (func_281())
					{
						func_270("F3_SPOT3", 0, 0);
						iLocal_2341++;
					}
					break;
				
				case 2:
					if (func_281())
					{
						func_270("F3_SPOT3l", 0, 0);
						iLocal_2341++;
					}
					break;
				
				case 3:
					if (ENTITY::DOES_ENTITY_EXIST(Local_228[15 /*2*/]) && !PED::IS_PED_INJURED(Local_228[15 /*2*/]))
					{
						if (bLocal_2287)
						{
							func_258();
							func_270("F3_SPOT3b", 0, 0);
							iLocal_2341++;
						}
					}
					break;
				
				case 4:
					if (func_281())
					{
						func_270("F3_SPOT3c", 0, 0);
						iLocal_2269 = 1;
						iLocal_2341++;
					}
					break;
			}
		}
		else if (func_555())
		{
			if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				if (MISC::ARE_STRINGS_EQUAL(cLocal_181, sLocal_177))
				{
					AUDIO::SET_CUTSCENE_AUDIO_OVERRIDE("_TOOTHLESS");
				}
				CUTSCENE::REQUEST_CUTSCENE("fbi_3_mcs_7", 8);
				func_334(0, 0, cLocal_181, 0);
			}
			if (func_415(10))
			{
				iLocal_272 = 11;
			}
		}
		if (iLocal_272 != 10)
		{
			func_414(0, 4294967295);
			func_56();
			func_39(0);
			iLocal_2162 = 0;
		}
	}
}

void func_414(bool bParam0, int iParam1)//Position - 0x36615
{
	int iVar0;
	
	if (Global_DB7D)
	{
	}
	Global_DB7D = 0;
	if (bParam0)
	{
		Global_DB7E = 1;
	}
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iVar0 = 0;
		while (iVar0 < Global_10AB4)
		{
			if (Global_DC56[Global_10AB5[iVar0 /*9*/] /*13*/] == 4)
			{
				Global_10AB5[iVar0 /*9*/].f_5 = 0;
				return;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_10AB4)
		{
			if (Global_10AB5[iVar0 /*9*/] > 0)
			{
				if (Global_10AB5[iVar0 /*9*/] == iParam1)
				{
					Global_10AB5[iVar0 /*9*/].f_5 = 0;
					return;
				}
			}
			iVar0++;
		}
	}
}

int func_415(int iParam0)//Position - 0x366AF
{
	bool bVar0;
	char cVar1[64];
	char cVar2[64];
	int iVar3;
	
	if (!iLocal_2277)
	{
		switch (iParam0)
		{
			case 4:
			case 6:
			case 8:
				func_554(&uLocal_293, vLocal_76, 10f, 1);
				func_552(0, 0);
				break;
			
			case 10:
				func_554(&uLocal_293, vLocal_76, 10f, 1);
				func_551(&uLocal_293, cLocal_159, &iLocal_2602, 0);
				break;
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_189(), 1, 1);
		STREAMING::SET_GAME_PAUSES_FOR_STREAMING(0);
		Global_434C.f_71 = 1;
		iLocal_2279 = 0;
		iLocal_2275 = 0;
		iLocal_2277 = 1;
		iLocal_2284 = 0;
		iLocal_2281 = 0;
		iLocal_2191 = 0;
		iLocal_2622 = 0;
		iLocal_2291 = 4294967295;
	}
	if (iLocal_2277 && iLocal_2273)
	{
		if (!bLocal_2276)
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				switch (iParam0)
				{
					case 4:
						if ((!func_900() && !CAM::IS_SCREEN_FADING_OUT()) && func_490(0, 0, 0))
						{
							func_258();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_189(), "Trevor", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_2569, cLocal_162, 1, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_175, 2, joaat("ig_stevehains"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_181, 2, iLocal_123, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_182, 3, iLocal_123, 0);
							func_488(1, 1);
							func_487();
							func_31(1, 1, 1);
							iLocal_2272 = 1;
							bLocal_2271 = false;
							bLocal_2265 = false;
							bLocal_2276 = true;
							iLocal_2190 = 0;
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_DRIVE_CHUMASH"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_DRIVE_CHUMASH");
							}
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(2048);
							CAM::_SET_CAM_EFFECT();
							AUDIO::SET_MICROPHONE_POSITION(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
						}
						break;
					
					case 6:
					case 8:
						if ((STREAMING::IS_NEW_LOAD_SCENE_LOADED() && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(func_189())) && func_490(0, 0, 0))
						{
							if (CAM::IS_SCREEN_FADED_IN())
							{
								iLocal_2291 = 4294967295;
								if (!func_216(&iLocal_2358, 0, 1))
								{
									func_486(&iLocal_2358, 2, 1);
									func_485(&iLocal_2358, 2, 11);
									if (!iLocal_2275)
									{
										func_301(sLocal_183, 7500, 1);
										iLocal_2275 = 1;
									}
								}
								else
								{
									bVar0 = true;
								}
							}
							else if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (!func_900())
								{
									bVar0 = true;
								}
							}
						}
						else if (!func_900())
						{
							if (iLocal_2291 == 4294967295)
							{
								iLocal_2291 = MISC::GET_GAME_TIMER();
							}
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if ((MISC::GET_GAME_TIMER() - iLocal_2291) > 7000 && !func_900())
								{
									func_484(800);
								}
								StringCopy(&cVar1, "iSwitchFailTimer: ", 64);
								StringIntConCat(&cVar1, (MISC::GET_GAME_TIMER() - iLocal_2291), 64);
								GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar1, 0.05f, 0.5f, 0f, 0, 0, 0, 255);
							}
							else if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (func_190() != 2)
								{
									unk_0x346478B12F69D4E3(func_26(), true);
									func_224(&iLocal_2358, 2);
									func_443(&iLocal_2358, 1, 0, 0);
									func_67(0);
									CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
									if (CAM::DOES_CAM_EXIST(Local_251))
									{
										CAM::DESTROY_CAM(Local_251, 0);
									}
									if (CAM::DOES_CAM_EXIST(Local_251.f_1))
									{
										CAM::DESTROY_CAM(Local_251.f_1, 0);
									}
								}
							}
						}
						if (bVar0)
						{
							func_258();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_189(), "Trevor", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_175, 2, joaat("ig_stevehains"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_181, 2, iLocal_123, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_182, 3, iLocal_123, 0);
							func_487();
							func_488(1, 0);
							func_31(1, 1, 1);
							iLocal_2272 = 1;
							bLocal_2271 = false;
							bLocal_2265 = false;
							bLocal_2276 = true;
							iLocal_2280 = 0;
							if (iLocal_272 == 6)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_1"))
								{
									AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_1");
								}
							}
							else if (iLocal_272 == 8)
							{
								if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_2"))
								{
									AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_2");
								}
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_SNIPER_SCOPE"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_SNIPER_SCOPE");
							}
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(2052);
							AUDIO::SET_MICROPHONE_POSITION(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
							AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE");
							iLocal_2190 = 1;
						}
						break;
					
					case 10:
						if (((STREAMING::IS_NEW_LOAD_SCENE_LOADED() && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(func_189())) && HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2304)) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_2602))
						{
							if (!func_900())
							{
								if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADED_OUT())
								{
									bVar0 = true;
								}
							}
						}
						else
						{
							if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sLocal_2304))
							{
								HUD::REGISTER_NAMED_RENDERTARGET(sLocal_2304, 0);
								if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iLocal_146))
								{
									HUD::LINK_NAMED_RENDERTARGET(iLocal_146);
								}
								iLocal_2303 = HUD::GET_NAMED_RENDERTARGET_RENDER_ID(sLocal_2304);
							}
							if (CAM::IS_SCREEN_FADED_IN())
							{
								if (!func_900())
								{
									if (iLocal_2291 == 4294967295)
									{
										iLocal_2291 = MISC::GET_GAME_TIMER();
									}
									if ((MISC::GET_GAME_TIMER() - iLocal_2291) > 7000)
									{
										func_484(800);
									}
								}
								StringCopy(&cVar2, "iSwitchFailTimer: ", 64);
								StringIntConCat(&cVar2, (MISC::GET_GAME_TIMER() - iLocal_2291), 64);
								GRAPHICS::DRAW_DEBUG_TEXT_2D(&cVar2, 0.05f, 0.5f, 0f, 0, 0, 0, 255);
							}
							else if (CAM::IS_SCREEN_FADED_OUT())
							{
								if (func_190() != 2)
								{
									unk_0x346478B12F69D4E3(func_26(), true);
									func_224(&iLocal_2358, 2);
									func_443(&iLocal_2358, 1, 0, 0);
									func_67(0);
									CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
									if (CAM::DOES_CAM_EXIST(Local_251))
									{
										CAM::DESTROY_CAM(Local_251, 0);
									}
									if (CAM::DOES_CAM_EXIST(Local_251.f_1))
									{
										CAM::DESTROY_CAM(Local_251.f_1, 0);
									}
								}
							}
						}
						if (bVar0)
						{
							func_258();
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_189(), "Trevor", 0, 0, 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, cLocal_181, 2, joaat("ig_mrk"), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_163, 2, func_36(2, 0), 0);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, sLocal_182, 3, iLocal_123, 0);
							func_487();
							func_488(0, 0);
							iLocal_72[7] = 0;
							func_31(1, 1, 1);
							iLocal_2272 = 1;
							bLocal_2271 = false;
							bLocal_2265 = false;
							bLocal_2276 = true;
							iLocal_2280 = 0;
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_VANTAGE_POINT_3"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_VANTAGE_POINT_3");
							}
							if (AUDIO::IS_AUDIO_SCENE_ACTIVE("FBI_3_MICHAEL_SNIPER_SCOPE_TARGET"))
							{
								AUDIO::STOP_AUDIO_SCENE("FBI_3_MICHAEL_SNIPER_SCOPE_TARGET");
							}
							CUTSCENE::SET_CUTSCENE_FADE_VALUES(0, 0, 0, 0);
							CUTSCENE::START_CUTSCENE(0);
							AUDIO::SET_MICROPHONE_POSITION(0, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f);
							VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							MISC::CLEAR_AREA_OF_VEHICLES(vLocal_84, 500f, 0, 0, 0, 0, false, 0);
						}
						break;
					}
			}
		}
		else
		{
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			switch (iParam0)
			{
				case 4:
					if (!iLocal_2279)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							func_67(0);
							func_442(0);
							func_440(1);
							if (CUTSCENE::GET_CUTSCENE_TIME() >= 13600)
							{
								if ((!iLocal_2190 && CUTSCENE::GET_CUTSCENE_TIME() < 14600) && CUTSCENE::_0x708BDD8CD795B043())
								{
									AUDIO::TRIGGER_MUSIC_EVENT("FBI3_TORTURE");
									iLocal_2190 = 1;
									GRAPHICS::_START_SCREEN_EFFECT("SwitchSceneTrevor", 0, 0);
									unk_0x1190AB7024CBD8CB(4294967295, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								}
								bLocal_2184 = true;
							}
							CUTSCENE::_0xC61B86C9F61EB404(1);
						}
						func_438(1);
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							bLocal_2285 = true;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							unk_0x346478B12F69D4E3(func_26(), true);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_189(), 0, 1);
							func_224(&iLocal_2358, 2);
							func_443(&iLocal_2358, 1, 0, 0);
							unk_0x346478B12F69D4E3(func_189(), false);
							iLocal_2189 = 0;
							func_424();
							func_420();
							func_417(0, 1, 0, 1148846080, 3296329728, 0, 0);
							AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_2");
							func_256(800);
							iLocal_2279 = 1;
							iLocal_2284 = 1;
						}
					}
					else
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						func_416(&uLocal_293);
						iLocal_2272 = 0;
						bLocal_2276 = false;
						iLocal_2277 = 0;
						iLocal_2622 = 0;
						return 1;
					}
					break;
				
				case 6:
				case 8:
					if (!iLocal_2279)
					{
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (!iLocal_2280)
							{
								GRAPHICS::_START_SCREEN_EFFECT("SwitchSceneTrevor", 0, 0);
								unk_0x1190AB7024CBD8CB(4294967295, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_2280 = 1;
							}
							func_67(0);
							func_442(0);
							func_440(0);
							CUTSCENE::_0xC61B86C9F61EB404(1);
							bLocal_2184 = true;
							if (!iLocal_2191)
							{
								func_256(800);
								iLocal_2191 = 1;
							}
						}
						func_438(1);
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(0))
						{
							bLocal_2285 = true;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							unk_0x346478B12F69D4E3(func_26(), true);
							if (func_190() != 2)
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_189(), 0, 1);
								func_224(&iLocal_2358, 2);
								func_443(&iLocal_2358, 1, 0, 0);
							}
							unk_0x346478B12F69D4E3(func_189(), false);
							iLocal_2189 = 0;
							func_424();
							func_420();
							func_417(0, 1, 0, 1148846080, 3296329728, 0, 0);
							if (iLocal_272 == 6)
							{
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_3");
							}
							else if (iLocal_272 == 8)
							{
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_4");
							}
							func_256(800);
							iLocal_2284 = 1;
							iLocal_2279 = 1;
						}
					}
					else
					{
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						func_416(&uLocal_293);
						iLocal_2279 = 0;
						iLocal_2272 = 0;
						bLocal_2276 = false;
						iLocal_2277 = 0;
						iLocal_2622 = 0;
						return 1;
					}
					break;
				
				case 10:
					if (!iLocal_2279)
					{
						VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
						if (!iLocal_2281)
						{
							STREAMING::SET_FOCUS_ENTITY(func_189());
							func_416(&uLocal_293);
							func_554(&uLocal_293, 130.6803f, -2193.349f, 5.0325f, 500f, 0);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, 1, 0, 0);
							CAM::DESTROY_ALL_CAMS(0);
							iLocal_2281 = 1;
						}
						if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
						{
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								INTERIOR::UNPIN_INTERIOR(iLocal_2300);
								func_416(&uLocal_293);
							}
						}
						if (CUTSCENE::IS_CUTSCENE_PLAYING())
						{
							if (!iLocal_2280)
							{
								GRAPHICS::_START_SCREEN_EFFECT("SwitchSceneTrevor", 0, 0);
								unk_0x1190AB7024CBD8CB(4294967295, "Hit_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
								iLocal_2280 = 1;
							}
							if (CUTSCENE::GET_CUTSCENE_TIME() < 38750)
							{
								bLocal_2184 = true;
								if (CUTSCENE::GET_CUTSCENE_TIME() > 15540)
								{
									bLocal_2183 = true;
								}
							}
							else
							{
								bLocal_2184 = false;
								bLocal_2183 = false;
								AUDIO::STOP_SOUND(vLocal_2621[0 /*3*/]);
								func_59(0);
							}
							if (!iLocal_2191)
							{
								func_256(800);
								iLocal_2191 = 1;
							}
							func_67(0);
							func_442(joaat("ig_mrk"));
							if (!ENTITY::DOES_ENTITY_EXIST(iLocal_2575))
							{
								iVar3 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(sLocal_163, func_36(2, 0));
								if (ENTITY::DOES_ENTITY_EXIST(iVar3))
								{
									iLocal_2575 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar3);
								}
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(1))
						{
							bLocal_2285 = true;
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(cLocal_181, 0))
						{
							if (!PED::IS_PED_IN_VEHICLE(iLocal_2567, iLocal_2575, 0))
							{
								PED::SET_PED_INTO_VEHICLE(iLocal_2567, iLocal_2575, 0);
							}
						}
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
						{
							unk_0x346478B12F69D4E3(func_26(), true);
							if (func_190() != 2)
							{
								ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(func_189(), 0, 1);
								func_224(&iLocal_2358, 2);
								func_443(&iLocal_2358, 1, 0, 0);
							}
							unk_0x346478B12F69D4E3(func_189(), false);
							if (!PED::IS_PED_IN_VEHICLE(func_189(), iLocal_2575, 0))
							{
								PED::SET_PED_INTO_VEHICLE(func_189(), iLocal_2575, 4294967295);
							}
							ENTITY::SET_ENTITY_COORDS(iLocal_2575, vLocal_104, 1, false, 0, 1);
							ENTITY::SET_ENTITY_HEADING(iLocal_2575, 311.4299f);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_2575, 0, 1);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_2575, 1, 1);
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
							VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_2575, 1084227584);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							HUD::DISPLAY_RADAR(true);
							func_438(0);
							PED::DELETE_PED(&(iLocal_2358[0]));
							iLocal_2284 = 1;
							iLocal_2279 = 1;
							bLocal_2183 = false;
							if (CAM::IS_SCREEN_FADED_OUT())
							{
								INTERIOR::UNPIN_INTERIOR(iLocal_2300);
								func_416(&uLocal_293);
							}
						}
					}
					else if (CAM::IS_SCREEN_FADED_OUT())
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							func_554(&uLocal_293, 130.6803f, -2193.349f, 5.0325f, 100f, 1);
						}
						else if ((STREAMING::IS_NEW_LOAD_SCENE_LOADED() && PED::_0x7350823473013C02(func_189())) && PED::_0x7350823473013C02(iLocal_2567))
						{
							func_256(800);
						}
					}
					else
					{
						HUD::SET_MULTIPLAYER_BANK_CASH();
						STREAMING::SET_GAME_PAUSES_FOR_STREAMING(1);
						func_416(&uLocal_293);
						iLocal_2272 = 0;
						bLocal_2276 = false;
						iLocal_2277 = 0;
						iLocal_2279 = 0;
						iLocal_2622 = 0;
						bLocal_2183 = false;
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

void func_416(var uParam0)//Position - 0x371E1
{
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		BRAIN::ENABLE_SCRIPT_BRAIN_SET();
		func_63(&(uParam0->f_364));
	}
}

int func_417(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, int iParam6)//Position - 0x371FD
{
	struct<26> Var0;
	struct<24> Var1;
	int iVar2;
	struct<16> Var3;
	struct<16> Var4;
	char* sVar5;
	
	if ((func_419(iParam0) && !iLocal_2193) && !iLocal_2192)
	{
		Var0.f_17 = 1;
		if (func_418(iParam0, &Var0) && !Var0.f_19)
		{
			if (CAM::IS_SCREEN_FADED_OUT() && !bLocal_2163)
			{
				fParam3 = 1000f;
				Var0.f_18 = 1;
				func_256(250);
			}
			iLocal_2599[iParam0] = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_84, vLocal_85, 2);
			PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iLocal_2599[iParam0], true);
			if (Var0.f_16)
			{
				iLocal_2599[37] = PED::CREATE_SYNCHRONIZED_SCENE(vLocal_84, vLocal_85, 2);
				PED::_SET_SYNCHRONIZED_SCENE_OCCLUSION_PORTAL(iLocal_2599[37], true);
			}
			WEAPON::SET_PED_CURRENT_WEAPON_VISIBLE(func_189(), 0, 1, 1, 0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_1))
			{
				if (!Var0.f_15)
				{
					BRAIN::TASK_SYNCHRONIZED_SCENE(func_189(), iLocal_2599[iParam0], Var0, Var0.f_1, fParam3, fParam4, iParam5, 0, 1148846080, 0);
				}
				else
				{
					Var1.f_17 = 1;
					if (func_418(0, &Var1) && MISC::ARE_STRINGS_EQUAL(Var0, Var1))
					{
						BRAIN::TASK_PLAY_ANIM_ADVANCED(func_189(), Var1, Var1.f_1, 144.053f, -2203.052f, 4.706f, 0f, 0f, 180f, 1000f, -1000f, 4294967295, 5129, 0f, 2, 0);
					}
				}
			}
			if (Var0.f_16)
			{
				iVar2 = 37;
			}
			else
			{
				iVar2 = iParam0;
			}
			if (!MISC::IS_STRING_NULL(Var0.f_2))
			{
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2567, Var0, Var0.f_2, 3))
				{
					BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_2567, iLocal_2599[iVar2], Var0, Var0.f_2, fParam3, fParam4, iParam6, 0, 1148846080, 0);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_6))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2584))
				{
					ENTITY::DETACH_ENTITY(iLocal_2584, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2584, Var0, Var0.f_6, 3))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_2584, iLocal_2599[iVar2], Var0.f_6, Var0, fParam3, fParam4, iParam6, 1148846080);
					iLocal_2188 = 1;
				}
			}
			else
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2584))
				{
					ENTITY::DETACH_ENTITY(iLocal_2584, 0, 1);
				}
				if (iLocal_2188)
				{
					ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_2584, fParam4, 0);
					iLocal_2188 = 0;
				}
				ENTITY::SET_ENTITY_COORDS(iLocal_2584, vLocal_82, 1, false, 0, 1);
				ENTITY::SET_ENTITY_ROTATION(iLocal_2584, vLocal_83, 2, 1);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_9) && !MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_A))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2587))
				{
					ENTITY::DETACH_ENTITY(iLocal_2587, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2587, Var0, Var0.f_9, 3))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_2587, iLocal_2599[iVar2], Var0.f_9, Var0, fParam3, fParam4, iParam6, 1148846080);
				}
				if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2588))
				{
					ENTITY::DETACH_ENTITY(iLocal_2588, 0, 1);
				}
				if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_2588, Var0, Var0.f_A, 3))
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_2588, iLocal_2599[iVar2], Var0.f_A, Var0, fParam3, fParam4, iParam6, 1148846080);
				}
				iLocal_2252 = 1;
			}
			if (iParam0 != 0)
			{
				func_54(&(Local_230[iLocal_2301 /*36*/]), fParam4);
				if (iLocal_2301 == 4)
				{
					func_54(&(Local_230[iLocal_2301 /*36*/]), fParam4);
				}
				if (Var0.f_17)
				{
					if (!ENTITY::IS_ENTITY_ATTACHED(Local_230[iLocal_2301 /*36*/]))
					{
						ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_230[iLocal_2301 /*36*/], func_189(), PED::GET_PED_BONE_INDEX(func_189(), 28422), Local_230[iLocal_2301 /*36*/].f_9, Local_230[iLocal_2301 /*36*/].f_C, 0, 0, 0, 0, 2, 1);
					}
					if (iLocal_2301 == 3)
					{
						if (!ENTITY::IS_ENTITY_ATTACHED(Local_230[4 /*36*/]))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(Local_230[4 /*36*/], func_189(), PED::GET_PED_BONE_INDEX(func_189(), 60309), Local_230[4 /*36*/].f_9, Local_230[4 /*36*/].f_C, 0, 0, 0, 0, 2, 1);
						}
					}
				}
				else
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[iLocal_2301 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[iLocal_2301 /*36*/], 0, 1);
					}
					if (iLocal_2301 == 3)
					{
						if (ENTITY::IS_ENTITY_ATTACHED(Local_230[4 /*36*/]))
						{
							ENTITY::DETACH_ENTITY(Local_230[4 /*36*/], 0, 1);
						}
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_5))
				{
					StringCopy(&Var3, Var0.f_5, 64);
					StringCopy(&Var4, Var0.f_5, 64);
					if (iLocal_2301 == 3)
					{
						StringConCat(&Var3, "_R_Clip", 64);
						StringConCat(&Var4, "_L_Clip", 64);
					}
					if (!Var0.f_17)
					{
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[iLocal_2301 /*36*/], iLocal_2599[iParam0], &Var3, Var0, fParam3, fParam4, iParam5, 1148846080);
						Local_230[iLocal_2301 /*36*/].f_10 = "";
						StringCopy(&(Local_230[iLocal_2301 /*36*/].f_11), "", 64);
						Local_230[iLocal_2301 /*36*/].f_F = 1;
						if (iLocal_2301 == 3)
						{
							ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[4 /*36*/], iLocal_2599[iParam0], &Var4, Var0, fParam3, fParam4, iParam5, 1148846080);
							Local_230[4 /*36*/].f_10 = "";
							StringCopy(&(Local_230[4 /*36*/].f_11), "", 64);
							Local_230[4 /*36*/].f_F = 1;
						}
					}
					else
					{
						ENTITY::PLAY_ENTITY_ANIM(Local_230[iLocal_2301 /*36*/], &Var3, Var0, fParam3, iParam1, 1, 0, iParam2, 0);
						Local_230[4 /*36*/].f_10 = Var0;
						Local_230[4 /*36*/].f_11 = { Var3 };
						Local_230[4 /*36*/].f_F = 1;
						if (iLocal_2301 == 4)
						{
							func_54(&(Local_230[iLocal_2301 /*36*/]), fParam4);
						}
						if (iLocal_2301 == 3)
						{
							ENTITY::PLAY_ENTITY_ANIM(Local_230[4 /*36*/], &Var4, Var0, fParam3, iParam1, 1, 0, iParam2, 0);
							Local_230[4 /*36*/].f_10 = Var0;
							Local_230[4 /*36*/].f_11 = { Var4 };
							Local_230[4 /*36*/].f_F = 1;
						}
					}
				}
			}
			if (iParam0 == 0)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_B))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[5 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[5 /*36*/], 1, 1);
					}
					func_54(&(Local_230[5 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_230[5 /*36*/], Var0.f_B, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_230[5 /*36*/].f_10 = "missfbi3_weapon_select";
					StringCopy(&(Local_230[5 /*36*/].f_11), Var0.f_B, 64);
					Local_230[5 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[5 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_F))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[2 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[2 /*36*/], 1, 1);
					}
					func_54(&(Local_230[2 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_230[2 /*36*/], Var0.f_F, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_230[2 /*36*/].f_10 = "missfbi3_weapon_select";
					StringCopy(&(Local_230[2 /*36*/].f_11), Var0.f_F, 64);
					Local_230[2 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[2 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_C))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[3 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[3 /*36*/], 1, 1);
					}
					func_54(&(Local_230[3 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_230[3 /*36*/], Var0.f_C, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_230[3 /*36*/].f_10 = "missfbi3_weapon_select";
					StringCopy(&(Local_230[3 /*36*/].f_11), Var0.f_C, 64);
					Local_230[3 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[3 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_D))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[4 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[4 /*36*/], 1, 1);
					}
					func_54(&(Local_230[4 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_230[4 /*36*/], Var0.f_D, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_230[4 /*36*/].f_10 = "missfbi3_weapon_select";
					StringCopy(&(Local_230[4 /*36*/].f_11), Var0.f_D, 64);
					Local_230[4 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[4 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_E))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[0 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[0 /*36*/], 1, 1);
					}
					func_54(&(Local_230[0 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_230[0 /*36*/], Var0.f_E, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_230[0 /*36*/].f_10 = "missfbi3_weapon_select";
					StringCopy(&(Local_230[0 /*36*/].f_11), Var0.f_E, 64);
					Local_230[0 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[0 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_13))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[1 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[1 /*36*/], 1, 1);
					}
					func_54(&(Local_230[1 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_230[1 /*36*/], Var0.f_13, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_230[1 /*36*/].f_10 = "missfbi3_weapon_select";
					StringCopy(&(Local_230[1 /*36*/].f_11), Var0.f_13, 64);
					Local_230[1 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[1 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_12))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[6 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[6 /*36*/], 1, 1);
					}
					func_54(&(Local_230[6 /*36*/]), -1000f);
					ENTITY::PLAY_ENTITY_ANIM(Local_230[6 /*36*/], Var0.f_12, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					Local_230[6 /*36*/].f_10 = "missfbi3_weapon_select";
					StringCopy(&(Local_230[6 /*36*/].f_11), Var0.f_12, 64);
					Local_230[6 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[6 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_11))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2581))
					{
						ENTITY::DETACH_ENTITY(iLocal_2581, 1, 1);
					}
					ENTITY::PLAY_ENTITY_ANIM(iLocal_2581, Var0.f_11, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2581);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_10))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2583))
					{
						ENTITY::DETACH_ENTITY(iLocal_2583, 1, 1);
					}
					ENTITY::PLAY_ENTITY_ANIM(iLocal_2583, Var0.f_10, "missfbi3_weapon_select", fParam3, 1, 1, 0, 0, 0);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2583);
				}
			}
			else
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_14))
				{
					sVar5 = Var0.f_14;
				}
				else
				{
					sVar5 = "missfbi3_weapon_select_trolley";
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_B))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[5 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[5 /*36*/], 1, 1);
					}
					func_54(&(Local_230[5 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[5 /*36*/], iLocal_2599[iParam0], Var0.f_B, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_230[5 /*36*/].f_10 = "";
					StringCopy(&(Local_230[5 /*36*/].f_11), "", 64);
					Local_230[5 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[5 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_C))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[3 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[3 /*36*/], 1, 1);
					}
					func_54(&(Local_230[3 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[3 /*36*/], iLocal_2599[iParam0], Var0.f_C, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_230[3 /*36*/].f_10 = "";
					StringCopy(&(Local_230[3 /*36*/].f_11), "", 64);
					Local_230[3 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[3 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_D))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[4 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[4 /*36*/], 1, 1);
					}
					func_54(&(Local_230[4 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[4 /*36*/], iLocal_2599[iParam0], Var0.f_D, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_230[4 /*36*/].f_10 = "";
					StringCopy(&(Local_230[4 /*36*/].f_11), "", 64);
					Local_230[4 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[4 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_F))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[2 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[2 /*36*/], 1, 1);
					}
					func_54(&(Local_230[2 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[2 /*36*/], iLocal_2599[iParam0], Var0.f_F, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_230[2 /*36*/].f_10 = "";
					StringCopy(&(Local_230[2 /*36*/].f_11), "", 64);
					Local_230[2 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[2 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_E))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[0 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[0 /*36*/], 1, 1);
					}
					func_54(&(Local_230[0 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[0 /*36*/], iLocal_2599[iParam0], Var0.f_E, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_230[0 /*36*/].f_10 = "";
					StringCopy(&(Local_230[0 /*36*/].f_11), "", 64);
					Local_230[0 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[0 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_12))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[6 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[6 /*36*/], 1, 1);
					}
					func_54(&(Local_230[6 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[6 /*36*/], iLocal_2599[iParam0], Var0.f_12, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_230[6 /*36*/].f_10 = "";
					StringCopy(&(Local_230[6 /*36*/].f_11), "", 64);
					Local_230[6 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[6 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_13))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(Local_230[1 /*36*/]))
					{
						ENTITY::DETACH_ENTITY(Local_230[1 /*36*/], 1, 1);
					}
					func_54(&(Local_230[1 /*36*/]), -1000f);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[1 /*36*/], iLocal_2599[iParam0], Var0.f_13, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					Local_230[1 /*36*/].f_10 = "";
					StringCopy(&(Local_230[1 /*36*/].f_11), "", 64);
					Local_230[1 /*36*/].f_F = 1;
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[1 /*36*/]);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_11))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2581))
					{
						ENTITY::DETACH_ENTITY(iLocal_2581, 1, 1);
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_2581, iLocal_2599[iParam0], Var0.f_11, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2581);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_10))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_2583))
					{
						ENTITY::DETACH_ENTITY(iLocal_2583, 1, 1);
					}
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_2583, iLocal_2599[iParam0], Var0.f_10, sVar5, fParam3, fParam4, iParam5 | 64, 1148846080);
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2583);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_3))
			{
				BRAIN::TASK_SYNCHRONIZED_SCENE(iLocal_2568, iLocal_2599[iParam0], Var0, Var0.f_3, fParam3, fParam4, 0, 0, 1148846080, 0);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(iLocal_2568, 0) && BRAIN::GET_SCRIPT_TASK_STATUS(iLocal_2568, 242628503) != 1)
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_2568);
				ENTITY::SET_ENTITY_COORDS(iLocal_2568, vLocal_105, 1, false, 0, 1);
				ENTITY::SET_ENTITY_HEADING(iLocal_2568, 190.2745f);
				BRAIN::OPEN_SEQUENCE_TASK(&uLocal_2589);
				BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_a", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 786440, 0, 2, 0);
				BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_a", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
				BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_b", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
				BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_a", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
				BRAIN::TASK_PLAY_ANIM_ADVANCED(0, cLocal_151, "steve_phone_idle_b", vLocal_105, 0f, 0f, 190.2745f, 8f, -8f, 4294967295, 262152, 0, 2, 0);
				BRAIN::SET_SEQUENCE_TO_REPEAT(uLocal_2589, 1);
				CUTSCENE::_0x8D9DF6ECA8768583(uLocal_2589);
				BRAIN::TASK_PERFORM_SEQUENCE(iLocal_2568, uLocal_2589);
				BRAIN::CLEAR_SEQUENCE_TASK(&uLocal_2589);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_2580))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_2580))
				{
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_2580, iLocal_2568, PED::GET_PED_BONE_INDEX(iLocal_2568, 60309), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0, 0, 0, 2, 1);
				}
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_4))
			{
				if (!CAM::DOES_CAM_EXIST(iLocal_2610))
				{
					iLocal_2610 = CAM::CREATE_CAMERA(964613260, 0);
					CAM::SET_CAM_DEBUG_NAME(iLocal_2610, "Torture Cam");
				}
				else
				{
					CAM::STOP_CAM_SHAKING(iLocal_2610, 1);
				}
				CAM::SET_CAM_ACTIVE(iLocal_2610, true);
				CAM::PLAY_SYNCHRONIZED_CAM_ANIM(iLocal_2610, iLocal_2599[iParam0], Var0.f_4, Var0);
				if (!CAM::IS_SCRIPT_GLOBAL_SHAKING())
				{
					CAM::_0xC2EAE3FB8CDBED31("SHAKE_CAM_medium", "medium", "", fLocal_2337);
				}
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
			}
			if (!MISC::IS_STRING_NULL_OR_EMPTY(Var0.f_8))
			{
				if (ENTITY::IS_ENTITY_ATTACHED(Local_230[1 /*36*/]))
				{
					ENTITY::DETACH_ENTITY(Local_230[1 /*36*/], 0, 1);
				}
				func_54(&(Local_230[1 /*36*/]), fParam4);
				if (iLocal_2301 == 0)
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[1 /*36*/], iLocal_2599[iParam0], Var0.f_8, Var0, fParam3, fParam4, iParam5 | 64, 1148846080);
				}
				else
				{
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(Local_230[1 /*36*/], iLocal_2599[iParam0], Var0.f_8, "missfbi3_weapon_select_trolley", fParam3, fParam4, iParam5 | 64, 1148846080);
				}
				Local_230[1 /*36*/].f_F = 1;
				if (Var0.f_18)
				{
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[1 /*36*/]);
				}
			}
			PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2599[iParam0], iParam1);
			if (Var0.f_16)
			{
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_2599[37], 1);
			}
			if (Var0.f_18 || fParam3 == 1000f)
			{
				MISC::_0x1327E2FE9746BAEE(func_189(), 0, 0);
				MISC::_0x1327E2FE9746BAEE(iLocal_2567, 0, 0);
				MISC::_0x1327E2FE9746BAEE(iLocal_2568, 0, 0);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2584);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[iLocal_2301 /*36*/]);
				if (iLocal_2301 == 3)
				{
					ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_230[4 /*36*/]);
				}
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2587);
				ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_2588);
				iLocal_2192 = 1;
			}
			iLocal_2186 = iParam0;
			return 1;
		}
	}
	return 0;
}

int func_418(int iParam0, char[4] cParam1)//Position - 0x382D6
{
	if (func_419(iParam0))
	{
		switch (iParam0)
		{
			case 19:
			case 23:
			case 24:
			case 25:
			case 20:
				*cParam1 = "MISSFBI3_electrocute";
				break;
			
			case 21:
				*cParam1 = "MISSFBI3_electrocute";
				cParam1->f_1 = "Electrocute_Spark_Player";
				cParam1->f_2 = "Electrocute_Spark_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Electrocute_Spark_Cam";
				cParam1->f_5 = "Electrocute_Spark";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Electrocute_Spark_hand_l";
				cParam1->f_A = "Electrocute_Spark_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 22:
				*cParam1 = "MISSFBI3_electrocute";
				cParam1->f_1 = "Electrocute_Both_Outro_Player";
				cParam1->f_2 = "Electrocute_Both_Outro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Electrocute_Both_Outro_Cam";
				cParam1->f_5 = "Electrocute_Both_Outro";
				cParam1->f_6 = "Electrocute_Both_Outro_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Electrocute_Both_Outro_hand_l";
				cParam1->f_A = "Electrocute_Both_Outro_hand_r";
				cParam1->f_18 = 1;
				break;
			
			case 15:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Idle_Player";
				cParam1->f_2 = "Pull_Tooth_Idle_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Idle_Cam";
				cParam1->f_5 = "Pull_Tooth_Idle_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Idle_hand_l";
				cParam1->f_A = "Pull_Tooth_Idle_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 12:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Intro_Player";
				cParam1->f_2 = "Pull_Tooth_Intro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Intro_Cam";
				cParam1->f_5 = "Pull_Tooth_Intro_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Intro_hand_l";
				cParam1->f_A = "Pull_Tooth_Intro_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 11:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Loop_Weak_Player";
				cParam1->f_2 = "Pull_Tooth_Loop_Weak_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Loop_Weak_Cam";
				cParam1->f_5 = "Pull_Tooth_Loop_Weak_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Loop_Weak_hand_l";
				cParam1->f_A = "Pull_Tooth_Loop_Weak_hand_r";
				cParam1->f_18 = 0;
				cParam1->f_19 = 1;
				break;
			
			case 10:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Loop_Player";
				cParam1->f_2 = "Pull_Tooth_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Loop_Cam";
				cParam1->f_5 = "Pull_Tooth_Loop_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Loop_hand_l";
				cParam1->f_A = "Pull_Tooth_Loop_hand_r";
				cParam1->f_18 = 0;
				cParam1->f_19 = 1;
				break;
			
			case 13:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Outro_Player";
				cParam1->f_2 = "Pull_Tooth_Outro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Outro_Cam";
				cParam1->f_5 = "Pull_Tooth_Outro_Pliers";
				cParam1->f_6 = "Pull_Tooth_Outro_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Outro_hand_l";
				cParam1->f_A = "Pull_Tooth_Outro_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 14:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Outro_B_Player";
				cParam1->f_2 = "Pull_Tooth_Outro_B_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Outro_B_Cam";
				cParam1->f_5 = "Pull_Tooth_Outro_B_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Outro_B_hand_l";
				cParam1->f_A = "Pull_Tooth_Outro_B_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 16:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Ready_Intro_Player";
				cParam1->f_2 = "Pull_Tooth_Ready_Intro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Ready_Intro_Cam";
				cParam1->f_5 = "Pull_Tooth_Ready_Intro_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Ready_Intro_hand_l";
				cParam1->f_A = "Pull_Tooth_Ready_Intro_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 17:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Ready_Loop_Player";
				cParam1->f_2 = "Pull_Tooth_Ready_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Ready_Loop_Cam";
				cParam1->f_5 = "Pull_Tooth_Ready_Loop_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Ready_Loop_hand_l";
				cParam1->f_A = "Pull_Tooth_Ready_Loop_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 18:
				*cParam1 = "MISSFBI3_TOOTHPULL";
				cParam1->f_1 = "Pull_Tooth_Ready_Outro_Player";
				cParam1->f_2 = "Pull_Tooth_Ready_Outro_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Pull_Tooth_Ready_Outro_Cam";
				cParam1->f_5 = "Pull_Tooth_Ready_Outro_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Pull_Tooth_Ready_Outro_hand_l";
				cParam1->f_A = "Pull_Tooth_Ready_Outro_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 35:
				*cParam1 = "MISSFBI3_SYRINGE";
				cParam1->f_1 = "Syringe_Idle_Player";
				cParam1->f_2 = "flatline_loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Syringe_Idle_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "flatline_loop_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "flatline_loop_hand_l";
				cParam1->f_A = "flatline_loop_hand_r";
				cParam1->f_18 = 1;
				break;
			
			case 34:
				*cParam1 = "MISSFBI3_SYRINGE";
				cParam1->f_1 = "Syringe_Use_Player";
				cParam1->f_2 = "Syringe_Use_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Syringe_Use_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Syringe_Use_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Syringe_Use_hand_l";
				cParam1->f_A = "Syringe_Use_hand_r";
				cParam1->f_18 = 1;
				break;
			
			case 26:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_kick_Player";
				cParam1->f_2 = "Waterboard_Kick_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Kick_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Kick_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Kick_Rag";
				cParam1->f_9 = "Waterboard_Kick_hand_l";
				cParam1->f_A = "Waterboard_Kick_hand_r";
				cParam1->f_18 = 1;
				break;
			
			case 27:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Idle_Player";
				cParam1->f_2 = "Waterboard_Idle_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Idle_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Idle_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Idle_Rag";
				cParam1->f_9 = "Waterboard_Idle_hand_l";
				cParam1->f_A = "Waterboard_Idle_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 31:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Loop_To_Ready_Player";
				cParam1->f_2 = "Waterboard_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Loop_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Loop_Rag";
				cParam1->f_9 = "Waterboard_Loop_hand_l";
				cParam1->f_A = "Waterboard_Loop_hand_r";
				cParam1->f_18 = 0;
				cParam1->f_16 = 1;
				break;
			
			case 32:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Outro_Player";
				cParam1->f_2 = "Waterboard_Outro_Victim";
				cParam1->f_3 = "Waterboard_Outro_Steve";
				cParam1->f_4 = "Waterboard_Outro_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Outro_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Outro_Rag";
				cParam1->f_9 = "Waterboard_Outro_hand_l";
				cParam1->f_A = "Waterboard_Outro_hand_r";
				cParam1->f_18 = 1;
				break;
			
			case 29:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Loop_Player";
				cParam1->f_2 = "Waterboard_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Loop_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Loop_Rag";
				cParam1->f_9 = "Waterboard_Loop_hand_l";
				cParam1->f_A = "Waterboard_Loop_hand_r";
				cParam1->f_18 = 1;
				break;
			
			case 28:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Ready_To_Loop_Player";
				cParam1->f_2 = "Waterboard_Ready_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Ready_To_Loop_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Ready_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Ready_To_Loop_Rag";
				cParam1->f_9 = "Waterboard_Ready_Loop_hand_l";
				cParam1->f_A = "Waterboard_Ready_Loop_hand_r";
				cParam1->f_18 = 0;
				cParam1->f_16 = 1;
				break;
			
			case 30:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Loop_To_Ready_Player";
				cParam1->f_2 = "Waterboard_Ready_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Loop_To_Ready_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Ready_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Loop_To_Ready_Rag";
				cParam1->f_9 = "Waterboard_Ready_Loop_hand_l";
				cParam1->f_A = "Waterboard_Ready_Loop_hand_r";
				cParam1->f_18 = 1;
				cParam1->f_16 = 1;
				break;
			
			case 33:
				*cParam1 = "MISSFBI3_WATERBOARD";
				cParam1->f_1 = "Waterboard_Ready_Loop_Player";
				cParam1->f_2 = "Waterboard_Ready_Loop_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Waterboard_Ready_Loop_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "Waterboard_Ready_Loop_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Waterboard_Ready_Loop_Rag";
				cParam1->f_9 = "Waterboard_Ready_Loop_hand_l";
				cParam1->f_A = "Waterboard_Ready_Loop_hand_r";
				cParam1->f_18 = 0;
				break;
			
			case 9:
				*cParam1 = "MISSFBI3_WRENCH";
				cParam1->f_1 = "Wrench_Idle_Player";
				cParam1->f_2 = "Wrench_Idle_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Wrench_Idle_Cam";
				cParam1->f_5 = "Wrench_Idle_Wrench";
				cParam1->f_6 = "Wrench_Idle_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Wrench_Idle_hand_l";
				cParam1->f_A = "Wrench_Idle_hand_r";
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				break;
			
			case 6:
				*cParam1 = "MISSFBI3_WRENCH";
				cParam1->f_1 = "Wrench_Attack_Left_Player";
				cParam1->f_2 = "Wrench_Attack_Left_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Wrench_Attack_Left_Cam";
				cParam1->f_5 = "Wrench_Attack_Left_Wrench";
				cParam1->f_6 = "Wrench_Attack_Left_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Wrench_Attack_Left_hand_l";
				cParam1->f_A = "Wrench_Attack_Left_hand_r";
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				break;
			
			case 7:
				*cParam1 = "MISSFBI3_WRENCH";
				cParam1->f_1 = "Wrench_Attack_Mid_Player";
				cParam1->f_2 = "Wrench_Attack_Mid_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Wrench_Attack_Mid_Cam";
				cParam1->f_5 = "Wrench_Attack_Mid_Wrench";
				cParam1->f_6 = "Wrench_Attack_Mid_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Wrench_Attack_Mid_hand_l";
				cParam1->f_A = "Wrench_Attack_Mid_hand_r";
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				break;
			
			case 8:
				*cParam1 = "MISSFBI3_WRENCH";
				cParam1->f_1 = "Wrench_Attack_Right_Player";
				cParam1->f_2 = "Wrench_Attack_Right_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Wrench_Attack_Right_Cam";
				cParam1->f_5 = "Wrench_Attack_Right_Wrench";
				cParam1->f_6 = "Wrench_Attack_Right_Chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Wrench_Attack_Right_hand_l";
				cParam1->f_A = "Wrench_Attack_Right_hand_r";
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				break;
			
			case 0:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Loop";
				cParam1->f_2 = "waterboard_idle_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "";
				cParam1->f_5 = "";
				cParam1->f_6 = "waterboard_idle_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "waterboard_idle_hand_l";
				cParam1->f_A = "waterboard_idle_hand_r";
				cParam1->f_15 = 1;
				cParam1->f_16 = 0;
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				cParam1->f_B = "weapon_select_bench_wrench";
				cParam1->f_C = "weapon_select_bench_clip1";
				cParam1->f_D = "weapon_select_bench_clip2";
				cParam1->f_E = "weapon_select_bench_can";
				cParam1->f_F = "weapon_select_bench_pliers";
				cParam1->f_10 = "weapon_select_bench_battery";
				cParam1->f_11 = "weapon_select_bench_bench";
				cParam1->f_12 = "weapon_select_bench_syringe";
				cParam1->f_13 = "weapon_select_bench_rag";
				break;
			
			case 3:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Electrocute_Player";
				cParam1->f_2 = "waterboard_idle_Victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Electrocute_Cam";
				cParam1->f_5 = "Weapon_Select_Electrocute";
				cParam1->f_6 = "waterboard_idle_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "waterboard_idle_hand_l";
				cParam1->f_A = "waterboard_idle_hand_r";
				cParam1->f_15 = 0;
				cParam1->f_16 = 1;
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				break;
			
			case 2:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Pliers_Player";
				cParam1->f_2 = "weapon_select_pliers_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Pliers_Cam";
				cParam1->f_5 = "Weapon_Select_Pliers_Pliers";
				cParam1->f_6 = "";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "Weapon_Select_Pliers_hand_l";
				cParam1->f_A = "Weapon_Select_Pliers_hand_r";
				cParam1->f_15 = 0;
				cParam1->f_16 = 0;
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				cParam1->f_B = "weapon_bench_toothpull_wrench";
				cParam1->f_C = "weapon_bench_toothpull_clip1";
				cParam1->f_D = "weapon_bench_toothpull_clip2";
				cParam1->f_E = "weapon_bench_toothpull_can";
				cParam1->f_F = "";
				cParam1->f_10 = "weapon_bench_toothpull_battery";
				cParam1->f_11 = "weapon_bench_toothpull_trolley";
				cParam1->f_12 = "weapon_bench_toothpull_syringe";
				cParam1->f_13 = "weapon_bench_toothpull_rag";
				break;
			
			case 5:
				*cParam1 = "MISSFBI3_SYRINGE";
				cParam1->f_1 = "Weapon_Select_Syringe_Player";
				cParam1->f_2 = "flatline_intro_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Syringe_Cam";
				cParam1->f_5 = "";
				cParam1->f_6 = "flatline_intro_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "flatline_intro_hand_l";
				cParam1->f_A = "flatline_intro_hand_r";
				cParam1->f_15 = 0;
				cParam1->f_16 = 0;
				cParam1->f_19 = 0;
				cParam1->f_17 = 1;
				cParam1->f_B = "weapon_bench_syringe_wrench";
				cParam1->f_C = "weapon_bench_syringe_clip1";
				cParam1->f_D = "weapon_bench_syringe_clip2";
				cParam1->f_E = "weapon_bench_syringe_can";
				cParam1->f_F = "weapon_bench_syringe_pliers";
				cParam1->f_10 = "weapon_bench_syringe_battery";
				cParam1->f_11 = "weapon_bench_syringe_trolley";
				cParam1->f_12 = "";
				cParam1->f_13 = "weapon_bench_syringe_rag";
				break;
			
			case 4:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Waterboard_Player";
				cParam1->f_2 = "waterboard_idle_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Waterboard_Cam";
				cParam1->f_5 = "Weapon_Select_Waterboard_jerryCan";
				cParam1->f_6 = "waterboard_idle_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "Weapon_Select_Waterboard_rag";
				cParam1->f_9 = "waterboard_idle_hand_l";
				cParam1->f_A = "waterboard_idle_hand_r";
				cParam1->f_15 = 0;
				cParam1->f_16 = 1;
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				cParam1->f_B = "weapon_bench_waterboard_wrench";
				cParam1->f_C = "weapon_bench_waterboard_clip1";
				cParam1->f_D = "weapon_bench_waterboard_clip2";
				cParam1->f_E = "";
				cParam1->f_F = "weapon_bench_waterboard_pliers";
				cParam1->f_10 = "weapon_bench_waterboard_battery";
				cParam1->f_11 = "weapon_bench_waterboard_trolley";
				cParam1->f_12 = "weapon_bench_waterboard_syringe";
				cParam1->f_13 = "";
				break;
			
			case 1:
				*cParam1 = "MISSFBI3_WEAPON_SELECT";
				cParam1->f_1 = "Weapon_Select_Wrench_Player";
				cParam1->f_2 = "waterboard_idle_victim";
				cParam1->f_3 = "";
				cParam1->f_4 = "Weapon_Select_Wrench_Cam";
				cParam1->f_5 = "Weapon_Select_Wrench_Wrench";
				cParam1->f_6 = "waterboard_idle_chair";
				cParam1->f_7 = "";
				cParam1->f_8 = "";
				cParam1->f_9 = "waterboard_idle_hand_l";
				cParam1->f_A = "waterboard_idle_hand_r";
				cParam1->f_15 = 0;
				cParam1->f_16 = 1;
				cParam1->f_18 = 1;
				cParam1->f_17 = 0;
				cParam1->f_B = "";
				cParam1->f_C = "weapon_bench_wrench_clip1";
				cParam1->f_D = "weapon_bench_wrench_clip2";
				cParam1->f_E = "weapon_bench_wrench_can";
				cParam1->f_F = "weapon_bench_wrench_pliers";
				cParam1->f_10 = "weapon_bench_wrench_battery";
				cParam1->f_11 = "weapon_bench_wrench_trolley";
				cParam1->f_12 = "weapon_bench_wrench_syringe";
				cParam1->f_13 = "weapon_bench_wrench_rag";
				break;
		}
		return 1;
	}
	return 0;
}

int func_419(int iParam0)//Position - 0x39259
{
	switch (iParam0)
	{
		case 19:
		case 23:
		case 22:
		case 24:
		case 20:
		case 21:
		case 12:
		case 15:
		case 10:
		case 13:
		case 14:
		case 11:
		case 16:
		case 17:
		case 18:
		case 35:
		case 34:
		case 26:
		case 27:
		case 31:
		case 32:
		case 29:
		case 30:
		case 28:
		case 33:
		case 9:
		case 6:
		case 7:
		case 8:
		case 0:
		case 3:
		case 2:
		case 5:
		case 4:
		case 1:
			return 1;
			break;
	}
	return 0;
}

void func_420()//Position - 0x39342
{
	func_421(&vLocal_231, 142.3567f, -2202.379f, 6.6759f, -41.1685f, -9.3446f, -125.0095f, 29.0273f, 142.2558f, -2202.592f, 6.7048f, -42.4644f, -9.3446f, -118.1968f, 29.0273f, 10000, 1, sLocal_157, 0.1f, "WEAP_SEL");
}

void func_421(var uParam0, vector3 vParam1, vector3 vParam2, float fParam3, vector3 vParam4, vector3 vParam5, float fParam6, int iParam7, int iParam8, char* sParam9, float fParam10, char* sParam11)//Position - 0x393A8
{
	vector3 vVar0[24];
	vector3 vVar1[24];
	
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::DESTROY_CAM(*uParam0, 0);
	}
	*uParam0 = CAM::CREATE_CAMERA(26379945, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		StringCopy(&cVar0, sParam11, 24);
		StringConCat(&cVar0, "_Init", 24);
		CAM::SET_CAM_DEBUG_NAME(*uParam0, &cVar0);
	}
	CAM::SET_CAM_AFFECTS_AIMING(*uParam0, 0);
	if (CAM::DOES_CAM_EXIST(uParam0->f_1))
	{
		CAM::DESTROY_CAM(uParam0->f_1, 0);
	}
	uParam0->f_1 = CAM::CREATE_CAMERA(26379945, 0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		StringCopy(&cVar1, sParam11, 24);
		StringConCat(&cVar1, "_Dest", 24);
		CAM::SET_CAM_DEBUG_NAME(uParam0->f_1, &cVar1);
	}
	CAM::SET_CAM_AFFECTS_AIMING(uParam0->f_1, 0);
	uParam0->f_3 = { vParam1 };
	uParam0->f_6 = { vParam2 };
	uParam0->f_9 = fParam3;
	uParam0->f_A = { vParam4 };
	uParam0->f_D = { vParam5 };
	uParam0->f_10 = fParam6;
	uParam0->f_11 = iParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_13 = sParam9;
	uParam0->f_14 = fParam10;
	uParam0->f_15 = 0;
	func_423(uParam0, &(uParam0->f_1), uParam0->f_3, uParam0->f_6, uParam0->f_9, uParam0->f_A, uParam0->f_D, uParam0->f_10, (uParam0->f_11 / 2), 1, 0);
	uParam0->f_15 = 1;
	if (uParam0->f_12)
	{
		func_422(*uParam0, uParam0->f_1, sParam9, fParam10);
	}
	SYSTEM::SETTIMERA(0);
}

void func_422(int iParam0, int iParam1, char* sParam2, float fParam3)//Position - 0x394EA
{
	if (CAM::DOES_CAM_EXIST(iParam0))
	{
		CAM::SHAKE_CAM(iParam0, sParam2, fParam3);
	}
	if (CAM::DOES_CAM_EXIST(iParam1))
	{
		CAM::SHAKE_CAM(iParam1, sParam2, fParam3);
	}
}

void func_423(int iParam0, int iParam1, vector3 vParam2, vector3 vParam3, float fParam4, vector3 vParam5, vector3 vParam6, float fParam7, int iParam8, int iParam9, char* sParam10)//Position - 0x39518
{
	vector3 vVar0[24];
	vector3 vVar1[24];
	
	if (CAM::DOES_CAM_EXIST(*iParam0))
	{
		CAM::DETACH_CAM(*iParam0);
		CAM::STOP_CAM_POINTING(*iParam0);
	}
	else
	{
		*iParam0 = CAM::CREATE_CAMERA(26379945, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		{
			StringCopy(&cVar0, sParam10, 24);
			StringConCat(&cVar0, "_Init", 24);
			CAM::SET_CAM_DEBUG_NAME(*iParam0, &cVar0);
		}
	}
	CAM::SET_CAM_COORD(*iParam0, vParam2);
	CAM::SET_CAM_ROT(*iParam0, vParam3, 2);
	CAM::SET_CAM_FOV(*iParam0, fParam4);
	CAM::SET_CAM_ACTIVE(*iParam0, true);
	if (CAM::DOES_CAM_EXIST(*iParam1))
	{
		CAM::DETACH_CAM(*iParam1);
		CAM::STOP_CAM_POINTING(*iParam1);
	}
	else
	{
		*iParam1 = CAM::CREATE_CAMERA(26379945, 0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
		{
			StringCopy(&cVar1, sParam10, 24);
			StringConCat(&cVar1, "_Dest", 24);
			CAM::SET_CAM_DEBUG_NAME(*iParam1, &cVar1);
		}
	}
	CAM::SET_CAM_COORD(*iParam1, vParam5);
	CAM::SET_CAM_ROT(*iParam1, vParam6, 2);
	CAM::SET_CAM_FOV(*iParam1, fParam7);
	CAM::SET_CAM_ACTIVE(*iParam1, false);
	CAM::SET_CAM_ACTIVE_WITH_INTERP(*iParam1, *iParam0, iParam8, iParam9, iParam9);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, 1, 0, 0);
}

int func_424()//Position - 0x39620
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	struct<2> Var13;
	struct<2> Var14;
	struct<2> Var15;
	char cVar16[192];
	bool bVar17;
	
	if (iLocal_2272)
	{
		return 0;
	}
	bVar8 = false;
	if (!func_30(23))
	{
		func_29(23, 1);
	}
	if (iLocal_2342 < 2)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
		}
		if (iLocal_2342 == 0)
		{
			CAM::DESTROY_CAM(iLocal_2606, 0);
			CAM::DESTROY_CAM(iLocal_2607, 0);
		}
		if (vLocal_231.z)
		{
			func_437(&vLocal_231);
		}
	}
	switch (iLocal_2342)
	{
		case 0:
			if (!func_213(iLocal_2599[0]))
			{
				func_417(0, 1, 0, 1148846080, 3296329728, 0, 0);
			}
			func_420();
			func_437(&vLocal_231);
			iVar9 = 4294967295;
			iVar10 = 0;
			while (iVar10 <= 3)
			{
				switch (iVar10)
				{
					case 0:
						iVar11 = 2;
						break;
					
					case 1:
						iVar11 = 3;
						break;
					
					case 2:
						iVar11 = 5;
						break;
					
					case 3:
						iVar11 = 0;
						break;
				}
				if (iVar9 == 4294967295 || (iVar9 >= 0 && Local_230[iVar11 /*36*/].f_22 < Local_230[iVar9 /*36*/].f_22))
				{
					iVar9 = iVar11;
				}
				iVar10++;
			}
			if (iVar9 != 4294967295)
			{
				iLocal_2301 = iVar9;
			}
			if (iLocal_2301 == 5)
			{
				fVar6 = 0.06f;
			}
			else if (iLocal_2301 == 2)
			{
				fVar6 = 0.06f;
			}
			else if (iLocal_2301 == 3)
			{
				fVar6 = 0.06f;
			}
			else if (iLocal_2301 == 4)
			{
				fVar6 = 0.06f;
			}
			else if (iLocal_2301 == 0)
			{
				fVar6 = 0.04f;
			}
			else
			{
				fVar6 = 0.02f;
			}
			if (bLocal_2218)
			{
				ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_230[iLocal_2301 /*36*/], Local_230[iLocal_2301 /*36*/].f_2 + Vector(fVar6, 0f, 0f), 0, 0, 1);
				Local_230[iLocal_2301 /*36*/].f_8 = 1;
			}
			iLocal_2248 = MISC::GET_GAME_TIMER();
			iLocal_2249 = 5000;
			func_256(250);
			func_436("FBI3 MINIGAME SELECT");
			iLocal_2307 = 0;
			iLocal_2342++;
			break;
		
		case 1:
			func_435();
			if (!bLocal_2255)
			{
				if (MISC::IS_PC_VERSION() && PAD::_IS_INPUT_DISABLED(2))
				{
					if (!func_434("hlp_MENU2"))
					{
						func_433("hlp_MENU2");
					}
				}
				else if (!func_434(sLocal_215))
				{
					func_433(sLocal_215);
				}
			}
			PAD::_DISABLE_INPUT_GROUP(2);
			func_432(&iVar2, &iVar3, &uVar0, &uVar1, 0);
			if (((((iVar2 > 50 || iVar3 > 50) && !bLocal_2255) || func_431(235, 1, 1)) || func_431(233, 1, 1)) && !iLocal_2216)
			{
				iLocal_2216 = 1;
				bVar8 = true;
				if (bLocal_2218)
				{
					iLocal_2301++;
					if (iLocal_2301 >= 6)
					{
						iLocal_2301 = 0;
					}
					while (!Local_230[iLocal_2301 /*36*/].f_21)
					{
						iLocal_2301++;
						if (iLocal_2301 >= 6)
						{
							iLocal_2301 = 0;
						}
					}
				}
			}
			else if (iVar2 <= 50 && iVar3 <= 50)
			{
				iLocal_2216 = 0;
			}
			if (((((iVar2 < 4294967246 || iVar3 < 4294967246) && !bLocal_2255) || func_431(234, 1, 1)) || func_431(232, 1, 1)) && !iLocal_2217)
			{
				iLocal_2217 = 1;
				bVar8 = true;
				if (bLocal_2218)
				{
					iLocal_2301 = (iLocal_2301 - 1);
					if (iLocal_2301 < 0)
					{
						iLocal_2301 = (6 - 1);
					}
					while (!Local_230[iLocal_2301 /*36*/].f_21)
					{
						iLocal_2301 = (iLocal_2301 - 1);
						if (iLocal_2301 < 0)
						{
							iLocal_2301 = (6 - 1);
						}
					}
				}
			}
			else if (iVar2 >= 4294967246 && iVar3 >= 4294967246)
			{
				iLocal_2217 = 0;
			}
			if (bVar8)
			{
				switch (iLocal_2301)
				{
					case 5:
						func_245(18, sLocal_219, Local_230[iLocal_2301 /*36*/], 0, 0);
						break;
					
					case 2:
						func_245(16, sLocal_217, Local_230[iLocal_2301 /*36*/], 0, 0);
						break;
					
					case 3:
						func_245(15, sLocal_216, Local_230[iLocal_2301 /*36*/], 0, 0);
						break;
					
					case 0:
						func_245(17, sLocal_218, Local_230[iLocal_2301 /*36*/], 0, 0);
						break;
				}
				bLocal_2218 = true;
			}
			iVar12 = 0;
			while (iVar12 <= (7 - 1))
			{
				Local_230[iVar12 /*36*/].f_8 = 0;
				iVar12++;
			}
			iVar12 = 0;
			while (iVar12 <= (7 - 1))
			{
				if (bLocal_2218)
				{
					if (iVar12 == iLocal_2301)
					{
						Local_230[iVar12 /*36*/].f_8 = 1;
						if (iVar12 == 3)
						{
							Local_230[4 /*36*/].f_8 = 1;
						}
						else if (iVar12 == 0)
						{
							Local_230[1 /*36*/].f_8 = 1;
						}
					}
				}
				iVar12++;
			}
			iVar12 = 0;
			while (iVar12 <= (7 - 1))
			{
				if (Local_230[iVar12 /*36*/].f_8)
				{
					if (iVar12 == 5)
					{
						fVar6 = 0.06f;
					}
					else if (iVar12 == 2)
					{
						fVar6 = 0.06f;
					}
					else if (iVar12 == 3)
					{
						fVar6 = 0.08f;
					}
					else if (iVar12 == 4)
					{
						fVar6 = 0.06f;
					}
					else if (iVar12 == 0 || iVar12 == 1)
					{
						fVar6 = 0.04f;
					}
					else
					{
						fVar6 = 0.02f;
					}
					vVar4 = { unk_0x8000C77B5F336760(Local_230[iVar12 /*36*/], true) };
					fVar5 = (((Local_230[iVar12 /*36*/].f_2.f_2 + fVar6) - vVar4.z) / 2f);
					fVar5 = (SYSTEM::SQRT((fVar5 * fVar5)) / 3f);
					OBJECT::SLIDE_OBJECT(Local_230[iVar12 /*36*/], Local_230[iVar12 /*36*/].f_2 + Vector(fVar6, 0f, 0f), 0f, 0f, fVar5, 0);
					if (iVar12 != 4)
					{
						vVar4 = { unk_0x8000C77B5F336760(Local_230[iVar12 /*36*/], true) };
						if (iVar12 == 5)
						{
							vVar4 = { 144.0282f, -2203.534f, 4.7336f };
						}
						if (iVar12 != 1)
						{
							if (iVar12 != 0)
							{
								GRAPHICS::DRAW_LIGHT_WITH_RANGE(vVar4.x, vVar4.y, (vVar4.z + 0.05f), 255, 255, 255, 0.2f, 0.5f);
							}
							GRAPHICS::DRAW_LIGHT_WITH_RANGE(vVar4.x, vVar4.y, 4.69f, 255, 255, 255, 0.2f, 0.5f);
						}
					}
				}
				else
				{
					vVar4 = { unk_0x8000C77B5F336760(Local_230[iVar12 /*36*/], true) };
					fVar5 = ((Local_230[iVar12 /*36*/].f_2.f_2 - vVar4.z) / 2f);
					fVar5 = (SYSTEM::SQRT((fVar5 * fVar5)) / 3f);
					OBJECT::SLIDE_OBJECT(Local_230[iVar12 /*36*/], Local_230[iVar12 /*36*/].f_2, 0f, 0f, fVar5, 0);
				}
				iVar12++;
			}
			if (PAD::IS_CONTROL_JUST_PRESSED(2, 223) && !bLocal_2164)
			{
				if (iLocal_2301 != 5)
				{
					if (iLocal_2301 == 2)
					{
						func_430(1, 2, iLocal_2313 + 1);
					}
					else
					{
						func_430(1, iLocal_2301, 0);
					}
				}
				if (MISC::IS_PC_VERSION())
				{
					if (iLocal_2301 == 3)
					{
						func_436("FBI3 MINIGAME ELECTRODES");
					}
					else
					{
						func_436("FBI3 MINIGAME DEFAULT");
					}
				}
				Local_230[iLocal_2301 /*36*/].f_22++;
				func_282();
				fLocal_2244 = 0f;
				iLocal_2247 = 0;
				func_31(0, 1, 1);
				iLocal_2307 = 0;
				iLocal_2342++;
			}
			else if (func_281() && (MISC::GET_GAME_TIMER() - iLocal_2248) >= iLocal_2249)
			{
				switch (iLocal_272)
				{
					case 3:
						StringCopy(&Var13, "F3_HMM1", 16);
						StringCopy(&Var14, "F3_TORGO1", 16);
						StringCopy(&Var15, "F3_KMENU", 16);
						break;
					
					case 5:
						StringCopy(&Var13, "F3_HMM2", 16);
						StringCopy(&Var14, "F3_TORGO2", 16);
						StringCopy(&Var15, "F3_WTF2", 16);
						break;
					
					case 7:
						StringCopy(&Var13, "F3_HMM3", 16);
						StringCopy(&Var14, "F3_TORGO3", 16);
						StringCopy(&Var15, "F3_WTF3", 16);
						break;
					
					case 9:
						StringCopy(&Var13, "F3_HMM4", 16);
						StringCopy(&Var14, "F3_TORGO4", 16);
						StringCopy(&Var15, "F3_WTF4", 16);
						break;
				}
				switch (iLocal_2307)
				{
					case 0:
						if (func_281())
						{
							func_270(&Var14, 0, 0);
							iLocal_2307++;
						}
						break;
					
					case 1:
					case 2:
					case 4:
					case 5:
					case 6:
						if (func_281() && (MISC::GET_GAME_TIMER() - iLocal_2315) > 1000)
						{
							func_270(&Var15, "", 1);
							iLocal_2307++;
						}
						break;
					
					case 3:
						if (func_281())
						{
							func_270(&Var13, 0, 0);
							iLocal_2307++;
						}
						break;
				}
				if (iLocal_2307 > 6)
				{
					iLocal_2307 = 0;
				}
			}
			break;
		
		case 2:
			if (!iLocal_2189)
			{
				cVar16.f_17 = 1;
				switch (iLocal_2301)
				{
					case 5:
						if (func_417(1, 0, fLocal_2244, 1148846080, 3296329728, 0, 0))
						{
							if (func_418(9, &cVar16))
							{
								func_429(&uLocal_293, cVar16);
								func_428(&uLocal_293, cLocal_193);
								func_427("FBI3_WRENCH_HIT");
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_WRENCH");
								if (func_418(1, &cVar16))
								{
									ENTITY::FIND_ANIM_EVENT_PHASE(cVar16, cVar16.f_1, sLocal_197, &fLocal_2244, &uVar7);
								}
								if (func_281())
								{
									switch (iLocal_272)
									{
										case 3:
											func_270("F3_WREN1", "", 1);
											break;
										
										case 5:
											func_270("F3_WREN2", "", 1);
											break;
										
										case 7:
											func_270("F3_WREN3", "", 1);
											break;
										
										case 9:
											func_270("F3_WREN4", "", 1);
											break;
										}
								}
								iLocal_2189 = 1;
							}
						}
						break;
					
					case 3:
						if (func_417(3, 0, fLocal_2244, 1148846080, 3296329728, 0, 0))
						{
							if (func_418(19, &cVar16))
							{
								func_429(&uLocal_293, cVar16);
								func_428(&uLocal_293, cLocal_190);
								func_427("FBI3_BATTERY_GRIPPED");
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_ELECTRIC");
								if (func_418(3, &cVar16))
								{
									ENTITY::FIND_ANIM_EVENT_PHASE(cVar16, cVar16.f_1, sLocal_197, &fLocal_2244, &uVar7);
								}
								if (func_281())
								{
									func_270("F3_EWAIT", 0, 0);
								}
								iLocal_2189 = 1;
							}
						}
						break;
					
					case 2:
						if (func_417(2, 0, fLocal_2244, 1148846080, 3296329728, 0, 0))
						{
							if (func_418(15, &cVar16))
							{
								func_429(&uLocal_293, cVar16);
								func_330(&uLocal_293, iLocal_143);
								func_428(&uLocal_293, cLocal_191);
								func_428(&uLocal_293, "FBI_03_Torture_Teeth_Pain");
								func_427("FBI3_TOOTH_PULLED");
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_PLIERS");
								if (func_418(2, &cVar16))
								{
									ENTITY::FIND_ANIM_EVENT_PHASE(cVar16, cVar16.f_1, sLocal_197, &fLocal_2244, &uVar7);
								}
								if (func_281())
								{
									func_270("F3_PWAIT", 0, 0);
								}
								iLocal_2189 = 1;
							}
						}
						break;
					
					case 0:
						if (func_417(4, 0, fLocal_2244, 1148846080, 3296329728, 0, 0))
						{
							if (func_418(27, &cVar16))
							{
								func_429(&uLocal_293, cVar16);
								func_428(&uLocal_293, cLocal_192);
								func_427("FBI3_WATER_BOARDED");
								AUDIO::START_AUDIO_SCENE("FBI_3_TREVOR_TORTURE_WATER");
								if (func_418(4, &cVar16))
								{
									ENTITY::FIND_ANIM_EVENT_PHASE(cVar16, cVar16.f_1, sLocal_197, &fLocal_2244, &uVar7);
								}
								if (func_281())
								{
									func_270("F3_KWAIT", 0, 0);
								}
								iLocal_2189 = 1;
							}
						}
						break;
				}
				if (iLocal_2189)
				{
					if (func_418(35, &cVar16))
					{
						func_429(&uLocal_293, cVar16);
					}
				}
			}
			else
			{
				bVar17 = false;
				if (iLocal_2301 == 6)
				{
					if (!func_213(iLocal_2599[5]))
					{
						bVar17 = true;
					}
				}
				else if ((((!func_213(iLocal_2599[1]) && !func_213(iLocal_2599[2])) && !func_213(iLocal_2599[3])) && !func_213(iLocal_2599[4])) && !func_213(iLocal_2599[5]))
				{
					bVar17 = true;
				}
				if (bVar17)
				{
					iLocal_2342 = 0;
					return 1;
				}
				else
				{
					if (func_425(1000) && !bLocal_2164)
					{
						func_484(250);
					}
					if (func_213(iLocal_2599[1]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_258();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[1], 1f);
						}
						else if (func_281())
						{
							switch (iLocal_2307)
							{
								case 0:
									func_270("F3_NOWREN", "", 1);
									iLocal_2307++;
									break;
								
								case 1:
									if ((MISC::GET_GAME_TIMER() - iLocal_2315) > 2000)
									{
										func_270("F3_NOWREN", "", 1);
									}
									break;
								}
							}
					}
					if (func_213(iLocal_2599[2]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_258();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[2], 1f);
						}
						else if (func_281())
						{
							switch (iLocal_2307)
							{
								case 0:
									func_270("F3_NOPLI", "", 1);
									iLocal_2307++;
									break;
								
								case 1:
									if ((MISC::GET_GAME_TIMER() - iLocal_2315) > 2000)
									{
										func_270("F3_NOPLI", "", 1);
									}
									break;
								}
							}
					}
					if (func_213(iLocal_2599[4]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_258();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[4], 1f);
						}
						else if (func_281())
						{
							switch (iLocal_2307)
							{
								case 0:
									func_270("F3_NOCAN", "", 1);
									iLocal_2307++;
									break;
								
								case 1:
									func_270("F3_CAN", "", 1);
									iLocal_2307++;
									break;
								
								case 2:
									if ((MISC::GET_GAME_TIMER() - iLocal_2315) > 2000)
									{
										func_270("F3_CAN", "", 1);
									}
									break;
								}
							}
					}
					if (func_213(iLocal_2599[5]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_258();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[5], 1f);
						}
					}
					if (func_213(iLocal_2599[3]))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_258();
							PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_2599[3], 1f);
						}
						else if (func_281())
						{
							switch (iLocal_2307)
							{
								case 0:
									func_270("F3_NOJUMP", "", 1);
									iLocal_2307++;
									break;
								
								case 1:
									func_270("F3_JUMP", "", 1);
									iLocal_2307++;
									break;
								
								case 2:
									if ((MISC::GET_GAME_TIMER() - iLocal_2315) > 2000)
									{
										func_270("F3_JUMP", "", 1);
									}
									break;
								}
							}
						}
					}
			}
			break;
	}
	return 0;
}

int func_425(int iParam0)//Position - 0x3A3BD
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if ((MISC::GET_GAME_TIMER() - Global_1C) > iParam0)
		{
			Global_1B = MISC::GET_GAME_TIMER();
		}
		Global_1C = MISC::GET_GAME_TIMER();
		if ((MISC::GET_GAME_TIMER() - Global_1B) > iParam0)
		{
			if (func_426())
			{
				Global_1B = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	}
	return 0;
}

int func_426()//Position - 0x3A407
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(0, 18) || PAD::IS_CONTROL_JUST_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_427(char* sParam0)//Position - 0x3A439
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_2166))
	{
		if (!MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_2166))
		{
			AUDIO::CANCEL_MUSIC_EVENT(sLocal_2166);
			sLocal_2166 = sParam0;
			AUDIO::PREPARE_MUSIC_EVENT(sLocal_2166);
		}
	}
	else
	{
		sLocal_2166 = sParam0;
		AUDIO::PREPARE_MUSIC_EVENT(sLocal_2166);
	}
}

int func_428(var uParam0, char* sParam1)//Position - 0x3A47E
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2E1)
	{
		if (uParam0->f_2E1[iVar0 /*5*/])
		{
			if (MISC::ARE_STRINGS_EQUAL(uParam0->f_2E1[iVar0 /*5*/].f_4, sParam1))
			{
				uParam0->f_2E1[iVar0 /*5*/].f_2 = 0;
				if (!uParam0->f_2E1[iVar0 /*5*/].f_1)
				{
					uParam0->f_3D6 = 1;
					return 1;
				}
				else
				{
					return 1;
				}
			}
		}
		else if (iVar1 == 4294967295)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, false, 4294967295);
		uParam0->f_2E1[iVar1 /*5*/] = 1;
		uParam0->f_2E1[iVar1 /*5*/].f_3 = MISC::GET_GAME_TIMER();
		uParam0->f_2E1[iVar1 /*5*/].f_4 = sParam1;
		uParam0->f_3D6 = 1;
		return 1;
	}
	return 0;
}

int func_429(var uParam0, char* sParam1)//Position - 0x3A548
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar1 = 4294967295;
	iVar0 = 0;
	while (iVar0 < uParam0->f_111)
	{
		{
			{
	}