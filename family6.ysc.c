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
	var uLocal_66 = 0;
	vector3 vLocal_67 = { 0f, 0f, 0f };
	vector3 vLocal_68 = { 0f, 0f, 0f };
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	float fLocal_71 = 0f;
	float fLocal_72 = 0f;
	float fLocal_73 = 0f;
	float fLocal_74 = 0f;
	float fLocal_75 = 0f;
	var uLocal_76 = 3;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 3;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 2;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 3;
	var uLocal_88 = 15;
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
	var uLocal_104 = 15;
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
	var uLocal_120 = 15;
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
	var uLocal_136 = 3;
	var uLocal_137 = 7;
	var uLocal_138 = 2;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 2;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 2;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 2;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 2;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 2;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 2;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 7;
	var uLocal_160 = 2;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 2;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 2;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 2;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 2;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 2;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 2;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 7;
	var uLocal_182 = 2;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 2;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 2;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 2;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 2;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 2;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 2;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 3;
	var uLocal_204 = 7;
	var uLocal_205 = 2;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 2;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 2;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 2;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 2;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 2;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 2;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 7;
	var uLocal_227 = 2;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 2;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 2;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 2;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 2;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 2;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 2;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 7;
	var uLocal_249 = 2;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 2;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 2;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 2;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 2;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 2;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 2;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 2;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 2;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 2;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 8;
	var uLocal_288 = 2;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 2;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	var uLocal_302 = 2;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 2;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 2;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 2;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 2;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 2;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 8;
	var uLocal_345 = 2;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 2;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 2;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 2;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 2;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 2;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 2;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 2;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 8;
	var uLocal_402 = 2;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 2;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 2;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 2;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 2;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 2;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 2;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 2;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 8;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 8;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 8;
	var uLocal_445 = 3;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 3;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 3;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 3;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 3;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 3;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 3;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 3;
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
	int iLocal_493 = 0;
	int iLocal_494 = 0;
	bool bLocal_495 = 0;
	float fLocal_496 = 0f;
	float fLocal_497 = 0f;
	vector3 vLocal_498 = { 0f, 0f, 0f };
	vector3 vLocal_499 = { 0f, 0f, 0f };
	vector3 vLocal_500 = { 0f, 0f, 0f };
	vector3 vLocal_501 = { 0f, 0f, 0f };
	vector3 vLocal_502 = { 0f, 0f, 0f };
	vector3 vLocal_503 = { 0f, 0f, 0f };
	vector3 vLocal_504 = { 0f, 0f, 0f };
	vector3 vLocal_505 = { 0f, 0f, 0f };
	vector3 vLocal_506 = { 0f, 0f, 0f };
	vector3 vLocal_507 = { 0f, 0f, 0f };
	vector3 vLocal_508 = { 0f, 0f, 0f };
	vector3 vLocal_509 = { 0f, 0f, 0f };
	vector3 vLocal_510 = { 0f, 0f, 0f };
	vector3 vLocal_511 = { 0f, 0f, 0f };
	vector3 vLocal_512 = { 0f, 0f, 0f };
	vector3 vLocal_513 = { 0f, 0f, 0f };
	int iLocal_514 = 0;
	var uLocal_515 = 0;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	int iLocal_518 = 0;
	struct<11> Local_519 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_520 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_521 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_522 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_523 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<11> Local_524 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_525 = { 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	struct<7> Local_530 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_531 = { 0, 0, 0, 0, 0, 0, 0 } ;
	struct<6> Local_532 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	struct<6> Local_538 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	struct<6> Local_544 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	struct<6> Local_550 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	struct<6> Local_556 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	struct<6> Local_562 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	struct<6> Local_568 = { 0, 0, 0, 0, 0, 0 } ;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	vector3 vLocal_574 = { 0f, 0f, 0f };
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	vector3 vLocal_583 = { 0f, 0f, 0f };
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	struct<22> Local_592 = { 0, 3, 0, 0, 0, 0, 0, 1092616192, 1101004800, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0 } ;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	vector3 vLocal_596 = { 0f, 0f, 0f };
	var uLocal_597 = 0;
	struct<12> Local_598 = { 0, 0, 0, 0, 0, 0, 0, 21, 6, 0, 0, 0 } ;
	var uLocal_599 = 16;
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
	int iLocal_764 = 0;
	int iLocal_765 = 0;
	int iLocal_766 = 0;
	int iLocal_767 = 0;
	int iLocal_768 = 0;
	int iLocal_769 = 0;
	var uLocal_770 = 0;
	int iLocal_771 = 0;
	int iLocal_772 = 0;
	bool bLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	int iLocal_776 = 0;
	int iLocal_777 = 0;
	int iLocal_778 = 0;
	bool bLocal_779 = 0;
	int iLocal_780 = 0;
	int iLocal_781 = 0;
	int iLocal_782 = 0;
	int iLocal_783 = 0;
	int iLocal_784 = 0;
	int iLocal_785 = 0;
	int iLocal_786 = 0;
	bool bLocal_787 = 0;
	int iLocal_788 = 0;
	int iLocal_789 = 0;
	int iLocal_790 = 0;
	int iLocal_791 = 0;
	var uLocal_792 = 0;
	int iLocal_793 = 0;
	int iLocal_794 = 0;
	int iLocal_795 = 0;
	int iLocal_796 = 0;
	int iLocal_797 = 0;
	int iLocal_798 = 0;
	float fLocal_799 = 0f;
	float fLocal_800 = 0f;
	bool bLocal_801 = 0;
	bool bLocal_802 = 0;
	int iLocal_803 = 0;
	int iLocal_804 = 0;
	int iLocal_805 = 0;
	int iLocal_806 = 0;
	int iLocal_807 = 0;
	int iLocal_808 = 0;
	int iLocal_809 = 0;
	int iLocal_810 = 0;
	int iLocal_811 = 0;
	int iLocal_812 = 0;
	int iLocal_813 = 0;
	int iLocal_814 = 0;
	int iLocal_815 = 0;
	int iLocal_816 = 0;
	int iLocal_817 = 0;
	int iLocal_818 = 0;
	int iLocal_819 = 0;
	int iLocal_820 = 0;
	int iLocal_821 = 0;
	int iLocal_822 = 0;
	int iLocal_823 = 0;
	int iLocal_824 = 0;
	int iLocal_825 = 0;
	int iLocal_826 = 0;
	int iLocal_827 = 0;
	int iLocal_828 = 0;
	struct<6> Local_829 = { 0, 0, 0, 0, 0, 0 } ;
	char cLocal_830[48] = "";
	int iLocal_831 = 0;
	int iLocal_832 = 0;
	int iLocal_833 = 0;
	int iLocal_834 = 0;
	int iLocal_835 = 0;
	int iLocal_836 = 0;
	int iLocal_837 = 0;
	struct<2> Local_838 = { 0, 0 } ;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	int iLocal_841 = 0;
	int iLocal_842 = 0;
	int iLocal_843[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_844 = 0;
	int iLocal_845[14] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_846 = 10;
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
	var uLocal_857 = 8;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
	var uLocal_865 = 0;
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
	uLocal_46 = HUD::_0x4A9923385BDB9DAD();
	iLocal_47 = HUD::_GET_BLIP_INFO_ID_ITERATOR();
	vLocal_67 = { 0f, 0f, 0f };
	vLocal_68 = { 0f, 0f, 0f };
	iLocal_69 = 4294967295;
	fLocal_71 = 0.5f;
	fLocal_72 = 0.88f;
	fLocal_73 = 0.609375f;
	fLocal_74 = 0.266666f;
	fLocal_75 = 1.2f;
	fLocal_496 = 0.6f;
	fLocal_497 = 0.795f;
	vLocal_498 = { -824.89f, 180.72f, 70.57f };
	vLocal_499 = { -632.3f, 255.25f, 80.46f };
	vLocal_500 = { 299.31f, 174.02f, 102.98f };
	vLocal_501 = { 320.84f, 177.82f, 102.56f };
	vLocal_502 = { -1899.75f, -561.64f, 10.78f };
	vLocal_503 = { -1903.6f, -573.2f, 19.1f };
	vLocal_504 = { -626.917f, 244.277f, 80.9f };
	vLocal_505 = { 0f, 0f, -6.53f };
	vLocal_506 = { 320.57f, 181.39f, 103.79f };
	vLocal_507 = { 0f, 0f, -111.08f };
	vLocal_508 = { 322.2f, 180.99f, 102.6f };
	vLocal_509 = { 0f, 0f, 80f };
	vLocal_510 = { 323.225f, 179.725f, 103.6f };
	vLocal_511 = { 0f, 0f, 113.4f };
	vLocal_512 = { 321.525f, 182.075f, 103.57f };
	vLocal_513 = { 0f, 0f, -162.72f };
	iLocal_793 = 4294967295;
	iLocal_794 = 4294967295;
	iLocal_795 = 4294967295;
	iLocal_796 = 4294967295;
	StringCopy(&Local_838, "FAM6_SHRINK", 16);
	MISC::SET_MISSION_FLAG(1);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_998();
		func_997();
		HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
	}
	if (func_996())
	{
		func_994(&iLocal_514, func_995());
		iLocal_771 = 1;
		if (Global_155D0 == 1)
		{
			iLocal_514 = func_993(iLocal_514);
		}
	}
	else
	{
		func_959(0, "STAGE 0: DRIVE TO BEAN", 0, 0, 0, 1);
	}
	if (func_958(0))
	{
		if (!func_996())
		{
			iLocal_514 = 1;
			iLocal_771 = 1;
		}
	}
	iLocal_790 = 0;
	while (true)
	{
		if (iLocal_772 == 1)
		{
			func_957(&iLocal_514, &uLocal_515);
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					func_956(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 4294967295);
					func_955(PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330()), 4294967295);
				}
				else
				{
					func_956(0, 4294967295);
					func_955(0, 4294967295);
				}
			}
		}
		RECORDING::_0x208784099002BC30("M_ReuniteFamily", 0);
		switch (iLocal_514)
		{
			case 0:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				RECORDING::_0xAF66DCEE6609B148();
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_894(&iLocal_765))
					{
						func_893();
						iLocal_514 = 1;
					}
				}
				break;
			
			case 1:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_873(&iLocal_765))
					{
						func_893();
						iLocal_514 = 2;
					}
				}
				break;
			
			case 2:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_870(&iLocal_765))
					{
						func_893();
						iLocal_514 = 3;
					}
				}
				break;
			
			case 3:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_868(&iLocal_765))
					{
						func_893();
						iLocal_514 = 4;
					}
				}
				break;
			
			case 4:
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), vLocal_499, true) < 150f)
				{
					PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
					VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				}
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_811(&iLocal_765))
					{
						func_893();
						iLocal_514 = 5;
					}
				}
				break;
			
			case 5:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_809(&iLocal_765))
					{
						func_893();
						iLocal_514 = 6;
					}
				}
				break;
			
			case 6:
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_799(&iLocal_765))
					{
						func_893();
						iLocal_514 = 7;
					}
				}
				break;
			
			case 7:
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_798(&iLocal_765))
					{
						func_893();
						iLocal_514 = 8;
					}
				}
				break;
			
			case 8:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_795(&iLocal_765))
					{
						func_893();
						iLocal_514 = 9;
					}
				}
				break;
			
			case 9:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_794(&iLocal_765))
					{
						func_893();
						iLocal_514 = 10;
					}
				}
				break;
			
			case 10:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_779(&iLocal_765))
					{
						func_893();
						iLocal_514 = 11;
					}
				}
				break;
			
			case 11:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_777(&iLocal_765))
					{
						func_893();
						iLocal_514 = 12;
					}
				}
				break;
			
			case 12:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_774(&iLocal_765))
					{
						func_893();
						iLocal_514 = 13;
					}
				}
				break;
			
			case 13:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.5f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_772(&iLocal_765))
					{
						func_893();
						iLocal_514 = 14;
					}
				}
				break;
			
			case 14:
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_756(&iLocal_765))
					{
						func_893();
						iLocal_514 = 15;
					}
				}
				break;
			
			case 15:
				PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.75f);
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_713(&iLocal_765))
					{
						func_893();
						iLocal_514 = 16;
					}
				}
				break;
			
			case 16:
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_626(&iLocal_765))
					{
						func_893();
						iLocal_514 = 17;
					}
				}
				break;
			
			case 17:
				if (func_895(iLocal_514, &iLocal_764, &iLocal_772, &uLocal_770, &iLocal_771))
				{
					if (func_603(&iLocal_765))
					{
						func_893();
						iLocal_514 = 18;
					}
				}
				break;
			
			case 18:
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				HUD::CLEAR_PRINTS();
				func_601();
				func_599(0, 0);
				if (!func_958(0))
				{
					func_45(280, 1);
					func_19(&(Global_19E56.f_933.f_21B), 0, 34);
				}
				func_997();
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
				break;
			
			case 19:
				func_2(&uLocal_515);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				HUD::CLEAR_PRINTS();
				func_601();
				while (!func_1())
				{
					SYSTEM::WAIT(0);
				}
				func_997();
				HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

int func_1()//Position - 0x77D
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

void func_2(var uParam0)//Position - 0x7AA
{
	switch (*uParam0)
	{
		case 3:
			func_3("CMN_JDIED");
			break;
		
		case 4:
			func_3("CMN_TCDIED");
			break;
		
		case 1:
			func_3("CMN_ADIED");
			break;
		
		case 2:
			func_3("FAM6_FAILFD");
			break;
		
		case 5:
			func_3("FAM6_FAILLAZ");
			break;
		
		case 7:
			func_3("FAM6_FAILBMA");
			break;
		
		case 6:
			func_3("FAM6_FAILACD");
			break;
		
		case 11:
			func_3("FAM6_FFAMILY");
			break;
		
		case 9:
			func_3("CMN_JLEFT");
			break;
		
		case 10:
			func_3("CMN_TCLEFT");
			break;
		
		case 8:
			func_3("CMN_ALEFT");
			break;
		
		case 12:
			func_3("FAM6_FBMSMASH");
			break;
		
		case 0:
		case 13:
			func_3("FAM6_FAILDB");
			break;
	}
}

void func_3(char* sParam0)//Position - 0x890
{
	func_18(sParam0);
	func_4(0);
}

void func_4(int iParam0)//Position - 0x8A3
{
	int iVar0;
	
	if (Global_19E56.f_2361 || func_958(0))
	{
		iVar0 = func_17();
		if (!func_5(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_1486F[iVar0 /*5*/].f_1), 5);
		Global_16C54 = iParam0;
	}
}

int func_5(int iParam0)//Position - 0x8E8
{
	int iVar0;
	int iVar1;
	
	func_10();
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		PLAYER::START_FIRING_AMNESTY(5000);
	}
	iVar0 = Global_1486F[iParam0 /*5*/];
	iVar1 = Global_11732.f_6D[iVar0 /*4*/];
	func_9(iVar1, 1);
	PLAYER::_0xC9A763D8FE87436A(CAM::_0xDC9DA9E8789F5246());
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(CAM::_0xDC9DA9E8789F5246());
	func_6(&(Global_19E56.f_933.f_21B), iVar1);
	if (Global_155CE == Global_16C55)
	{
		Global_19E56.f_2361.f_14A[iVar1 /*6*/].f_1++;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14893[iVar1 /*34*/].f_F, 1))
	{
		if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		}
	}
	Global_19E56.f_2361.f_14A[iVar1 /*6*/].f_2++;
	Global_155CE = Global_16C55;
	if (iParam0 == 4294967295)
	{
		if (Global_19E56.f_2361)
		{
		}
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iParam0 /*5*/].f_1, 4))
	{
		return 0;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iParam0 /*5*/].f_1, 5))
	{
		return 0;
	}
	return 1;
}

void func_6(var uParam0, int iParam1)//Position - 0x9FF
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
			if (!func_8(Global_19E56.f_4849[iVar0], &vVar2, &fVar3))
			{
				Global_19E56.f_4849[iVar0] = 318;
				func_7(&(uParam0->f_8E4[iVar0]));
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

void func_7(var uParam0)//Position - 0xBC8
{
	*uParam0 = 4294967281;
}

int func_8(int iParam0, var uParam1, float fParam2)//Position - 0xBD6
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
			return func_8(8, uParam1, fParam2);
			break;
		
		case 10:
			return func_8(8, uParam1, fParam2);
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

void func_9(int iParam0, bool bParam1)//Position - 0x1545
{
	if (bParam1)
	{
		if ((iParam0 != 88 && iParam0 != 89) && iParam0 != 92)
		{
			Global_15510[iParam0 /*2*/] = 1;
		}
	}
	else
	{
		Global_15510[iParam0 /*2*/] = 0;
	}
}

void func_10()//Position - 0x1583
{
	Global_16C53 = 1;
	if (PLAYER::IS_PLAYER_BEING_ARRESTED(CAM::_0xDC9DA9E8789F5246(), 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1170D))
		{
			switch (func_11())
			{
				case 0:
					StringCopy(&Global_1170D, "CMN_MARRE", 16);
					break;
				
				case 1:
					StringCopy(&Global_1170D, "CMN_FARRE", 16);
					break;
				
				case 2:
					StringCopy(&Global_1170D, "CMN_TARRE", 16);
					break;
			}
			StringCopy(&Global_11711, "", 16);
		}
		Global_16C53 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_1170D))
		{
			switch (func_11())
			{
				case 0:
					StringCopy(&Global_1170D, "CMN_MDIED", 16);
					break;
				
				case 1:
					StringCopy(&Global_1170D, "CMN_FDIED", 16);
					break;
				
				case 2:
					StringCopy(&Global_1170D, "CMN_TDIED", 16);
					break;
			}
			StringCopy(&Global_11711, "", 16);
		}
		Global_16C53 = 0;
		MISC::SET_BIT(&(Global_16C30.f_14), 25);
	}
}

int func_11()//Position - 0x166B
{
	func_12();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_12()//Position - 0x1684
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_16(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_15(AUDIO::_0x0626A247D2405330());
			if (func_14(iVar0) && (!func_13(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_14(Global_19E56.f_933.f_21B.f_10CD))
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

bool func_13(int iParam0)//Position - 0x1781
{
	return Global_8D15 == iParam0;
}

bool func_14(int iParam0)//Position - 0x178F
{
	return iParam0 < 3;
}

int func_15(int iParam0)//Position - 0x179B
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_16(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_16(int iParam0)//Position - 0x17D8
{
	if (func_14(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

int func_17()//Position - 0x1802
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

void func_18(char* sParam0)//Position - 0x1837
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			StringCopy(&Global_1170D, sParam0, 16);
			StringCopy(&Global_11711, "", 16);
			if (RECORDING::_IS_RECORDING())
			{
				RECORDING::_STOP_RECORDING_AND_SAVE_CLIP();
			}
		}
	}
}

int func_19(var uParam0, int iParam1, int iParam2)//Position - 0x1876
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
	uParam0->f_8E4[iParam1] = func_34();
	if (!func_8(iParam2, &(uParam0->f_8E8[iParam1 /*3*/]), &(uParam0->f_8F2[iParam1])))
	{
		return 0;
	}
	if (!func_33(uParam0->f_8E8[iParam1 /*3*/], 0f, 0f, 0f, 0))
	{
		if (!func_33(Global_16658[iParam2 /*3*/], 0f, 0f, 0f, 0))
		{
			Var1.f_B = 12;
			Var1.f_1F = 49;
			Var1.f_51 = 2;
			if (func_20(iParam1, iParam2, &Var1, &uVar2, &uVar3, &uVar4, &uVar5))
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

int func_20(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1996
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
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_16B4C[iParam0 /*3*/], -829.7478f, 192.117f, 76.73248f, -827.1384f, 153.8595f, 59.96172f, 33.25f, 0, 1))
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
			func_22(iParam0, uParam2, 0);
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
			return func_20(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 10:
			return func_20(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 13:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 14:
			func_22(iParam0, uParam2, 2);
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
			func_22(iParam0, uParam2, 0);
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
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return 1;
			break;
		
		case 17:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 18:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 19:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 20:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 23:
			return func_20(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 24:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 67:
			func_22(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return 1;
			break;
		
		case 58:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 59:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 60:
			func_22(iParam0, uParam2, 0);
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
			func_22(iParam0, uParam2, 1);
			uParam2->f_5B = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 38:
			func_22(iParam0, uParam2, 2);
			uParam2->f_5B = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 41:
			func_22(iParam0, uParam2, 0);
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
			func_21(iParam0, uParam2, 1);
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
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return 1;
			break;
		
		case 75:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 76:
			func_22(iParam0, uParam2, 0);
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
			func_22(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 48:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = (164.2466f - 180f);
			return 1;
			break;
		
		case 50:
			func_22(iParam0, uParam2, 0);
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
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 66:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return 1;
			break;
		
		case 61:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 62:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return 1;
			break;
		
		case 63:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return 1;
			break;
		
		case 64:
			func_22(iParam0, uParam2, 0);
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
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 113:
			if (func_20(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
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
			if (func_20(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return 1;
			}
			break;
		
		case 120:
			if (func_20(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
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
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return 1;
			break;
		
		case 105:
			func_22(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 106:
			return func_20(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 107:
			return func_20(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 98:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 99:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return 1;
			break;
		
		case 100:
			return func_20(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 101:
			return func_20(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 102:
			return func_20(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 123:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return 1;
			break;
		
		case 125:
			func_22(iParam0, uParam2, 0);
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
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 91:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return 1;
			break;
		
		case 93:
			if (func_20(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return 1;
			}
			break;
		
		case 121:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return 1;
			break;
		
		case 115:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.517f, -33.7052f, -531.6035f) - Vector(45.6141f, -21.87f, -511.73f) };
			*uParam4 = ((177.259f - 180f) - 69f);
			return 1;
			break;
		
		case 116:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return 1;
			break;
		
		case 117:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return 1;
			break;
		
		case 94:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return 1;
			break;
		
		case 96:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return 1;
			break;
		
		case 108:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return 1;
			break;
		
		case 109:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return 1;
			break;
		
		case 135:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 136:
			if (func_20(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 137:
			if (func_20(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 138:
			if (func_20(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return 1;
			}
			break;
		
		case 139:
			if (func_20(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return 1;
			}
			break;
		
		case 140:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 141:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return 1;
			}
			break;
		
		case 142:
			func_22(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return 1;
			break;
		
		case 143:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 144:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 145:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 146:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 147:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return 1;
			}
			break;
		
		case 148:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 149:
			if (func_20(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return 1;
			}
			break;
		
		case 151:
			if (func_20(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return 1;
			}
			break;
		
		case 162:
			if (func_20(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return 1;
			}
			break;
		
		case 158:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return 1;
			break;
		
		case 166:
			return func_20(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 170:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return 1;
			break;
		
		case 171:
			return func_20(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 172:
			return func_20(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 208:
			func_22(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return 1;
			break;
		
		case 209:
			return func_20(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 210:
			return func_20(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 211:
			func_21(iParam0, uParam2, 2);
			uParam2->f_5B = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return 1;
			break;
		
		case 212:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return 1;
			break;
		
		case 213:
			if (func_20(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return 1;
			}
			break;
		
		case 214:
			func_21(iParam0, uParam2, 1);
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
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(43.5168f, -33.5909f, -531.4f) - Vector(45.2617f, -28.54f, -521.13f) };
			*uParam4 = (357.1407f - 84.96f);
			return 1;
			break;
		
		case 216:
			if (func_20(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return 1;
			}
			break;
		
		case 217:
			if (func_20(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return 1;
			}
			break;
		
		case 232:
		case 233:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { Vector(28.225f, -1015.11f, -70.4456f) - Vector(27.5447f, -1019.235f, -78.4023f) };
			*uParam4 = (162.098f - 109.0206f);
			return 1;
			break;
		
		case 192:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.7514f, -1573.632f, -1174.458f) };
			*uParam4 = (302.182f - 105.981f);
			return 1;
			break;
		
		case 193:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.403f, -1531.113f, -1190.017f) - Vector(4.3599f, -1573.692f, -1175.298f) };
			*uParam4 = (302.182f - 172.9187f);
			return 1;
			break;
		
		case 194:
			if (func_20(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return 1;
			}
			break;
		
		case 195:
			if (func_20(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return 1;
			}
			break;
		
		case 200:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.4055f, -1607.568f, 44.4802f) - Vector(((28.2858f - 0.5f) + 1.5f), -1607.286f, 2.8895f) };
			*uParam4 = (318.2674f - (310.879f - 180f));
			return 1;
			break;
		
		case 201:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.1773f, -1592.787f, 3.6009f) - Vector(29.2903f, -1607.286f, 2.8895f) };
			*uParam4 = (322.6286f - 130.879f);
			return 1;
			break;
		
		case 202:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return 1;
			break;
		
		case 222:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return 1;
			break;
		
		case 223:
			if (func_20(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return 1;
			}
			break;
		
		case 224:
			return func_20(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 226:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7f, -1356.9f, 24.6f) - Vector(29.3437f, -1351.412f, 28.986f) };
			*uParam4 = ((270.1767f - 160f) - 180f);
			return 1;
			break;
		
		case 227:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return 1;
			break;
		
		case 228:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return 1;
			break;
		
		case 229:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return 1;
			break;
		
		case 230:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return 1;
			break;
		
		case 238:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return 1;
			break;
		
		case 250:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return 1;
			break;
		
		case 251:
			if (func_20(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return 1;
			}
			break;
		
		case 252:
			if (func_20(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return 1;
			}
			break;
		
		case 253:
			if (func_20(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return 1;
			}
			break;
		
		case 281:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 282:
			if (func_20(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 283:
			if (func_20(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				return 1;
			}
			break;
		
		case 284:
			if (func_20(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_61 = 0;
				*uParam2 = joaat("FAGGIO2");
				uParam2->f_5B = 0;
				return 1;
			}
			break;
		
		case 275:
			func_21(iParam0, uParam2, 1);
			uParam2->f_5B = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return 1;
			break;
		
		case 276:
			return func_20(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
			break;
		
		case 277:
			return func_20(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
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
			func_22(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, (0.9455f - 1.7f) };
			*uParam4 = -138.6056f;
			return 1;
			break;
		
		case 305:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.8797f, 3597.047f, 1399.662f) - Vector(37.9419f, 3602.284f, 1394.208f) };
			*uParam4 = (315.9865f - 122.5269f);
			return 1;
			break;
		
		case 310:
			func_22(iParam0, uParam2, 0);
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
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(7.1164f, -1094.205f, -1243.65f) - Vector(7.1f, -1105.15f, -1242.68f) };
			*uParam4 = (14.0848f - 120f);
			return 1;
			break;
		
		case 257:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.8143f, -930.5448f, -1672.535f) - Vector(6.479f, -974.7168f, -1667.148f) };
			*uParam4 = (144.9416f - 171.253f);
			return 1;
			break;
		
		case 258:
			func_22(iParam0, uParam2, 0);
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
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.5629f, -387.5143f, -147.166f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (341.4322f - 133f);
			return 1;
			break;
		
		case 111:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(24.4283f, -689.1462f, -1306.782f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (214.6826f - 33f);
			return 1;
			break;
		
		case 153:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -176.25f);
			return 1;
			break;
		
		case 154:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.3324f, 254.0631f, -708.9244f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (115.2022f - -147.192f);
			return 1;
			break;
		
		case 165:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.0054f, -441.1681f, -1100.878f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (297.5568f - -144.622f);
			return 1;
			break;
		
		case 159:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.3852f, -199.5354f, -825.3141f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (29.4869f - -62.5f);
			return 1;
			break;
		
		case 160:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(36.2086f, -144.1027f, -730.8218f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (28.532f - 119f);
			return 1;
			break;
		
		case 167:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(31.7307f, -523.2257f, -1144.174f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (299.2956f - -22.32f);
			return 1;
			break;
		
		case 152:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9436f, 314.6989f, -1421.8f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (335.4134f - 72f);
			return 1;
			break;
		
		case 157:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.469f, 255.3143f, -706.187f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (117.3069f - 37.27f);
			return 1;
			break;
		
		case 225:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.7165f, -1677.734f, 185.4888f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (54.2538f - -83.8f);
			return 1;
			break;
		
		case 218:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.3218f, -1405.159f, -17.556f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (91.3098f - -70.4124f);
			return 1;
			break;
		
		case 219:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.2611f, -1492.151f, -219.3172f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (139.2572f - -12f);
			return 1;
			break;
		
		case 220:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(25.3018f, -1811.693f, -22.6138f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (141.0423f - -117.356f);
			return 1;
			break;
		
		case 206:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(208.5337f, 773.6719f, 164.1308f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (136.3104f - -36f);
			return 1;
			break;
		
		case 207:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(108.9995f, 396.924f, -263.3745f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (284.4611f - -95.588f);
			return 1;
			break;
		
		case 274:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(139.5782f, 2030.446f, -1883.836f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (340.5746f - 9f);
			return 1;
			break;
		
		case 312:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.0296f, 6560.557f, -200.684f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (134.5505f - 110.5931f);
			return 1;
			break;
		
		case 271:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(6.4647f, -1083.751f, -1278.023f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (115.8919f - 26.3597f);
			return 1;
			break;
		
		case 248:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(102.4417f, 164.5124f, 325.8113f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (68.4108f - 10.77f);
			return 1;
			break;
		
		case 242:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(56.616f, -122.9896f, -1622.22f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (210.8653f - 13.7207f);
			return 1;
			break;
		
		case 254:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.0019f, -213.7796f, 172.442f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (250.3032f - -40f);
			return 1;
			break;
		
		case 287:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(17.3426f, -836.0328f, -887.9977f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (270.8607f - -81f);
			return 1;
			break;
		
		case 286:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.8359f, -1182.704f, -1264.218f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (298.4328f - -150f);
			return 1;
			break;
		
		case 239:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(104.8218f, 289.0073f, -80.4564f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (247.6446f - -122f);
			return 1;
			break;
		
		case 243:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (228.6353f - 18f);
			return 1;
			break;
		
		case 244:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2762f, -1477.282f, 434.9171f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (228.6353f - -51f);
			return 1;
			break;
		
		case 249:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(103.1881f, 177.7729f, 288.977f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (68.9831f - (138f - 180f));
			return 1;
			break;
		
		case 273:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(32.7794f, -432.4635f, -161.4589f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (340.0368f - -153f);
			return 1;
			break;
		
		case 92:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(202.1143f, 828.3607f, -806.8813f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (101.1612f - -54.347f);
			return 1;
			break;
		
		case 103:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.0174f, -1108.081f, -1724.72f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (319.8931f - 143.4931f);
			return 1;
			break;
		
		case 109:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.2248f, -628.4899f, -1859.505f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (229.0784f - 99f);
			return 1;
			break;
		
		case 81:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(53.1469f, 90.4242f, -1393.442f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (123.1782f - -45f);
			return 1;
			break;
		
		case 95:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(101.921f, 186.1865f, 370.5876f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (159.7861f - 70f);
			return 1;
			break;
		
		case 97:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(45.9871f, -188.5636f, -1391.156f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (36.5172f - -45f);
			return 1;
			break;
		
		case 134:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(46.0567f, 3076.742f, 2001.918f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (328.101f - -33.128f);
			return 1;
			break;
		
		case 88:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(60.9442f, 314.7191f, -1421.821f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (336.5938f - -132f);
			return 1;
			break;
		
		case 306:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(37.4888f, 5643.726f, -569.3535f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f));
			return 1;
			break;
		
		case 307:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(47.4526f, 4717.728f, -1555.593f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f));
			return 1;
			break;
		
		case 308:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(22.7549f, 4629.148f, -1553.861f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f));
			return 1;
			break;
		
		case 278:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(35.9161f, -1009.745f, 631.8275f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (98.8128f - -33.77f);
			return 1;
			break;
		
		case 279:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(234.6825f, 900.8749f, -111.9033f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (6.1087f - 155.68f);
			return 1;
			break;
		
		case 240:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(33.5351f, 3636.151f, 1546.323f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (298.4009f - -4.124f);
			return 1;
			break;
		
		case 241:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(30.512f, 6439.667f, -179.4242f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (225.5593f - 108f);
			return 1;
			break;
		
		case 264:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.2977f, -1390.545f, 486.7419f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (178.298f - -90f);
			return 1;
			break;
		
		case 266:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(10.5662f, 143.2342f, -3052.895f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (85.3429f - 68.8227f);
			return 1;
			break;
		
		case 267:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(39.9155f, 4934.08f, 2202.375f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (314.2654f - 56.2037f);
			return 1;
			break;
		
		case 269:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(28.149f, -782.0952f, 401.2502f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (179.9905f - -106.6605f);
			return 1;
			break;
		
		case 246:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(3.3919f, -1534.507f, -1195.256f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (305.8221f - -165f);
			return 1;
			break;
		
		case 263:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(12.8792f, -1241.213f, -573.3765f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (316.9941f - -171f);
			return 1;
			break;
		
		case 259:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(4.0002f, -1298.539f, -724.429f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (230.5715f - -32.488f);
			return 1;
			break;
		
		case 260:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(61.203f, 250.8387f, -1309.114f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (10.7756f - -29.093f);
			return 1;
			break;
		
		case 261:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(79.764f, 60.3233f, 917.6678f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = (148.021f - 229.6085f);
			return 1;
			break;
		
		case 270:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { Vector(350f, 8588f, 2919f) - Global_16658[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return 1;
			break;
		
		case 289:
			func_22(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return 1;
			break;
	}
	return 0;
}

void func_21(int iParam0, var uParam1, int iParam2)//Position - 0x4E81
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

int func_22(int iParam0, var uParam1, int iParam2)//Position - 0x50DD
{
	if (Global_16A1D[iParam0 /*98*/] == 0)
	{
		func_21(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (Global_16A1D[iParam0 /*98*/] == joaat("BLIMP"))
	{
		func_21(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (func_32(iParam0))
	{
		func_21(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_16A1D[iParam0 /*98*/]))
	{
		func_21(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_16A1D[iParam0 /*98*/]))
	{
		func_21(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_16A1D[iParam0 /*98*/]))
	{
		func_21(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_16A1D[iParam0 /*98*/]))
	{
		func_21(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_16A1D[iParam0 /*98*/]))
		{
			func_21(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_16A1D[iParam0 /*98*/]))
		{
			func_21(iParam0, uParam1, iParam2);
			uParam1->f_5B = iParam2;
			return 1;
		}
	}
	if (!func_23(Global_16A1D[iParam0 /*98*/], 0))
	{
		func_21(iParam0, uParam1, iParam2);
		uParam1->f_5B = iParam2;
		return 1;
	}
	if (iParam2 != 0)
	{
		func_21(iParam0, uParam1, iParam2);
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
		func_21(iParam0, uParam1, 1);
		uParam1->f_5B = 1;
		if (Global_16A1D[iParam0 /*98*/] == *uParam1)
		{
			func_21(iParam0, uParam1, 1);
			uParam1->f_5B = 1;
			return 1;
		}
		func_21(iParam0, uParam1, 2);
		uParam1->f_5B = 2;
		if (Global_16A1D[iParam0 /*98*/] == *uParam1)
		{
			func_21(iParam0, uParam1, 2);
			uParam1->f_5B = 2;
			return 1;
		}
		*uParam1 = { Global_16A1D[iParam0 /*98*/] };
		uParam1->f_5B = 0;
		return 0;
	}
	func_21(iParam0, uParam1, iParam2);
	uParam1->f_5B = iParam2;
	return 1;
}

int func_23(int iParam0, bool bParam1)//Position - 0x5314
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
		if (!func_31())
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
		if ((((!func_30() && !func_29()) && !func_28()) && !func_27()) && !func_31())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_28())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_26(iParam0))
		{
			return 0;
		}
	}
	if (!func_24(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_24(int iParam0)//Position - 0x5494
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_25())
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

int func_25()//Position - 0x5560
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_26(int iParam0)//Position - 0x5577
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

int func_27()//Position - 0x7272
{
	return 0;
}

int func_28()//Position - 0x727B
{
	return 1;
}

int func_29()//Position - 0x7284
{
	return 1;
}

int func_30()//Position - 0x728D
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_31()//Position - 0x72A6
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

int func_32(int iParam0)//Position - 0x7361
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

bool func_33(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x75E1
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

int func_34()//Position - 0x7628
{
	var uVar0;
	
	func_44(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_43(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_42(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_37(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_36(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_35(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_35(var uParam0, int iParam1)//Position - 0x766E
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

void func_36(var uParam0, int iParam1)//Position - 0x76F4
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_37(var uParam0, int iParam1)//Position - 0x7727
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_41(*uParam0);
	iVar1 = func_39(*uParam0);
	if (iParam1 < 1 || iParam1 > func_38(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_38(int iParam0, int iParam1)//Position - 0x7778
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

int func_39(int iParam0)//Position - 0x781A
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_40(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_40(bool bParam0, int iParam1, int iParam2)//Position - 0x783F
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_41(int iParam0)//Position - 0x7856
{
	return iParam0 & 15;
}

void func_42(var uParam0, int iParam1)//Position - 0x7863
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_43(var uParam0, int iParam1)//Position - 0x789D
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_44(var uParam0, int iParam1)//Position - 0x78D8
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

void func_45(int iParam0, int iParam1)//Position - 0x7914
{
	struct<97> Var0;
	int iVar1;
	int iVar2;
	
	Var0.f_1 = 4294967295;
	Var0.f_11 = 4;
	Var0.f_11.f_8 = 4;
	Var0.f_11.f_D = 4;
	Var0.f_11.f_12 = 4;
	Var0.f_11.f_18 = 4;
	Var0.f_11.f_1D = 4;
	Var0.f_11.f_22 = 4;
	Var0.f_3E = 8;
	Var0.f_60.f_7 = 21;
	Var0.f_60.f_8 = 6;
	Var0.f_11.f_5 = 0;
	Var0.f_11.f_6 = 0;
	Var0 = 0;
	Var0.f_2 = iParam0;
	Var0.f_3E.f_F = 0;
	func_598(Var0.f_2, &(Var0.f_3));
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (func_597(iParam1, 64))
		{
			func_596(Global_16658[iParam0 /*3*/], 3212836864, 350, 1114636288, 0);
			if (!func_595(Var0.f_3))
			{
				iVar1 = func_594(Var0.f_3);
				while (!func_590(iVar1, 1))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	}
	iVar2 = 1;
	while (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()) && iVar2)
	{
		if (!func_46(&Var0, iParam1))
		{
		}
		else
		{
			iVar2 = 0;
		}
		SYSTEM::WAIT(0);
	}
}

bool func_46(var uParam0, var uParam1)//Position - 0x7A1C
{
	return func_47(uParam0, 601993/*func_589*/, 601822/*func_588*/, uParam1);
}

int func_47(var uParam0, int iParam1, int iParam2, var uParam3)//Position - 0x7A34
{
	int iVar0;
	struct<97> Var1;
	vector3 vVar2;
	int iVar3;
	vector3 vVar4;
	var uVar5;
	vector3 vVar6;
	vector3 vVar7;
	float fVar8;
	char* sVar9;
	char[] cVar10[8];
	char* sVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;
	var uVar16;
	var uVar17;
	char* sVar18;
	char* sVar19;
	int iVar20;
	float fVar21;
	float fVar22;
	int iVar23;
	struct<65> Var24;
	bool bVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	float fVar30;
	float fVar31;
	bool bVar32;
	bool bVar33;
	struct<6> Var34;
	bool bVar35;
	struct<8> Var36;
	char* sVar37;
	char cVar38[64];
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	char* sVar43;
	bool bVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	
	if (!uParam0->f_3E.f_13)
	{
		PAD::DISABLE_CONTROL_ACTION(0, 75, 1);
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (iVar0 >= (Global_8F3C - 1000))
	{
		func_587(2666);
	}
	Var1.f_1 = 4294967295;
	Var1.f_11 = 4;
	Var1.f_11.f_8 = 4;
	Var1.f_11.f_D = 4;
	Var1.f_11.f_12 = 4;
	Var1.f_11.f_18 = 4;
	Var1.f_11.f_1D = 4;
	Var1.f_11.f_22 = 4;
	Var1.f_3E = 8;
	Var1.f_60.f_7 = 21;
	Var1.f_60.f_8 = 6;
	vVar2 = { 5f, 5f, 4f };
	if (*uParam0 == 0)
	{
		iVar3 = func_585(&(uParam0->f_1), 0, 17, 1, 0);
		if (iVar3 == 1)
		{
			STATS::STAT_INCREMENT(joaat("sp_ambient_switch_count"), 1f);
			*uParam0 = 1;
		}
		if (!*uParam0 == 1)
		{
			if (!Global_1172B == 4294967295)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_14893[Global_1172B /*34*/]), SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					*uParam0 = 1;
				}
			}
			else if (func_578() == 36)
			{
				*uParam0 = 1;
			}
		}
	}
	if (*uParam0 == 1)
	{
		uParam0->f_60.f_2 = 0;
		uParam0->f_60.f_3 = 0;
		func_577();
		uParam0->f_3D = func_594(uParam0->f_3);
		if (func_571(uParam0->f_2, &(uParam0->f_4), &(uParam0->f_7), &(uParam0->f_8)))
		{
			func_564(1);
			if (func_561(uParam0, &vVar4, &uVar5))
			{
				uParam0->f_4 = { vVar4 };
				uParam0->f_7 = uVar5;
				Global_19E56.f_933.f_21B.f_8E8[uParam0->f_3 /*3*/] = { vVar4 };
				Global_19E56.f_933.f_21B.f_8F2[uParam0->f_3] = uVar5;
				if (Global_16B44[uParam0->f_3] == 2)
				{
					Global_16B4C[uParam0->f_3 /*3*/] = { vVar4 };
					Global_16B56[uParam0->f_3] = uVar5;
				}
			}
			Global_1650F = uParam0->f_2;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
			{
				uParam0->f_10 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
			}
			else if (!INTERIOR::_ARE_COORDS_COLLIDING_WITH_EXTERIOR(uParam0->f_4))
			{
				uParam0->f_10 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
			}
			else
			{
				uParam0->f_10 = 0;
			}
			if (uParam0->f_10 != 0)
			{
				if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_10))
				{
					INTERIOR::_LOAD_INTERIOR(uParam0->f_10);
				}
			}
			if ((uParam0->f_2 == 222 || uParam0->f_2 == 223) || uParam0->f_2 == 224)
			{
				func_554(21, 0);
			}
			func_553(uParam0->f_2);
			if (func_552(uParam0->f_2, &vVar6, &vVar7, &fVar8))
			{
				if ((func_551(uParam0->f_2, &sVar9, &cVar10) || func_550(uParam0->f_2, &sVar11, &uVar12, &uVar13, &uVar14, &uVar15, &uVar16, &uVar17)) || func_549(uParam0->f_2, &sVar18))
				{
					uParam0->f_3E.f_A = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
					CAM::SET_CAM_COORD(uParam0->f_3E.f_A, vVar6);
					CAM::SET_CAM_ROT(uParam0->f_3E.f_A, vVar7, 2);
					CAM::SET_CAM_FOV(uParam0->f_3E.f_A, fVar8);
					PED::SET_PED_NON_CREATION_AREA(vVar6 - vVar2, vVar6 + vVar2);
					uParam0->f_6C = PED::ADD_SCENARIO_BLOCKING_AREA(vVar6 - vVar2, vVar6 + vVar2, 0, 1, 1, 1);
					MISC::CLEAR_AREA(vVar6, SYSTEM::VMAG(vVar2), 1, 0, 0, false);
				}
			}
			func_548();
			if (func_547(uParam0->f_2, &sVar19))
			{
				func_548();
			}
			Global_16A1C = uParam0->f_2;
			iVar20 = func_11();
			if (iVar20 != 145)
			{
				if (!ENTITY::IS_ENTITY_DEAD(Global_16B48[iVar20], 0))
				{
					fVar21 = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Global_16B48[iVar20]);
					fVar22 = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(Global_16B48[iVar20]);
					if (fVar21 < (-1000f * 0.75f))
					{
						VEHICLE::SET_VEHICLE_ENGINE_HEALTH(Global_16B48[iVar20], (-1000f * 0.25f));
					}
					if (fVar22 < (-1000f * 0.75f))
					{
						unk_0xD3F329A16C0E5B2B(Global_16B48[iVar20], (-1000f * 0.25f));
					}
				}
				func_540(AUDIO::_0x0626A247D2405330(), &(Global_16A1D[iVar20 /*98*/]), &(Global_16B4C[iVar20 /*3*/]), &(Global_16B56[iVar20]), &(Global_16B44[iVar20]), &(Global_41220F[iVar20]));
				func_539(AUDIO::_0x0626A247D2405330(), 0);
				func_532(AUDIO::_0x0626A247D2405330());
			}
			else if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
			{
				ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar6, 0, false, 0, 1);
				unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
			}
			func_529(uParam0->f_3, uParam0->f_2);
			iLocal_70 = 0;
			Global_63A2 = MISC::GET_GAME_TIMER();
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(CAM::_0xDC9DA9E8789F5246(), 10f);
			STREAMING::REQUEST_MODEL(func_16(uParam0->f_3));
			*uParam0 = 3;
		}
		else
		{
			return 1;
		}
	}
	if (*uParam0 == 2)
	{
		*uParam0 = 3;
		iLocal_70++;
		STREAMING::REQUEST_MODEL(func_16(uParam0->f_3));
		if (uParam0->f_10 != 0)
		{
			if (!INTERIOR::IS_INTERIOR_READY(uParam0->f_10))
			{
				INTERIOR::_LOAD_INTERIOR(uParam0->f_10);
				*uParam0 = 2;
				if (iLocal_70 > 150)
				{
					iLocal_70 = 0;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
					{
						uParam0->f_10 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(uParam0->f_4, &(uParam0->f_8));
					}
					else
					{
						uParam0->f_10 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_4);
					}
					*uParam0 = 3;
				}
			}
		}
	}
	if (*uParam0 == 3)
	{
		if (uParam0->f_2 == 1)
		{
			iVar23 = func_528(uParam0->f_3D);
			if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_11[iVar23], 0))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uParam0->f_11[iVar23], 1))
				{
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_11[iVar23]));
				}
			}
			uParam0->f_11[uParam0->f_3D] = 0;
			uParam0->f_2 = 1;
		}
		if (func_523(uParam0, 0))
		{
			Var24 = { Global_19E56.f_933.f_21B[uParam0->f_3D /*65*/] };
			bVar25 = false;
			if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
			{
				bVar25 = true;
			}
			if (func_224(&(uParam0->f_11[uParam0->f_3D]), uParam0->f_3, uParam0->f_4, uParam0->f_7, 1, 0, bVar25))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
					if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3E.f_D) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3E.f_C)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(unk_0x8000C77B5F336760(uParam0->f_3E.f_D, false), unk_0x8000C77B5F336760(uParam0->f_3E.f_C, false)) != 3)
					{
						Global_19E56.f_933.f_21B[uParam0->f_3D /*65*/] = { Var24 };
					}
				}
				func_222(uParam0->f_11[uParam0->f_3D]);
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
				else
				{
					ENTITY::SET_ENTITY_VISIBLE(uParam0->f_11[uParam0->f_3D], false, 0);
				}
				unk_0x346478B12F69D4E3(uParam0->f_11[uParam0->f_3D], true);
				func_221(uParam0);
				uParam0->f_11.f_27 = 1;
				uParam0->f_11.f_7 = uParam0->f_3D;
				uParam0->f_3E.f_C = uParam0->f_11[uParam0->f_3D];
				Global_16B5D = 4294967295;
				func_218(uParam0->f_2);
				if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_3E.f_D) && ENTITY::DOES_ENTITY_EXIST(uParam0->f_3E.f_C)) && STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(unk_0x8000C77B5F336760(uParam0->f_3E.f_D, false), unk_0x8000C77B5F336760(uParam0->f_3E.f_C, false)) == 3)
				{
					if (!PED::_0x66680A92700F43DF(uParam0->f_11[uParam0->f_3D]))
					{
						iVar26 = MISC::GET_GAME_TIMER();
						while (iVar26 + 500 < MISC::GET_GAME_TIMER() && iVar26 > 0)
						{
							if (PED::_0x66680A92700F43DF(uParam0->f_11[uParam0->f_3D]))
							{
								iVar26 = 4294967295;
							}
							SYSTEM::WAIT(0);
						}
						if (!iVar26 == 4294967295)
						{
						}
					}
				}
				ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_3E.f_C, 1);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3E.f_C, 1, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_3E.f_C, 0);
				PED::_0x5AAB586FFEC0FD96(uParam0->f_11[uParam0->f_3D]);
				Stack.Push(uParam0);
				Call_Loc(iParam1);
				*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
				*uParam0 = 4;
			}
		}
		else
		{
			uParam0->f_11.f_27 = 1;
			uParam0->f_11.f_7 = uParam0->f_3D;
			uParam0->f_3E.f_C = uParam0->f_11[uParam0->f_3D];
			if (uParam0->f_3E.f_C != AUDIO::_0x0626A247D2405330())
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_3E.f_C, true, 1);
			}
			ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_3E.f_C, 1);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3E.f_C, 1, 1);
			PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_3E.f_C, 0);
			MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_4, 10f, 0);
			if (!func_217(uParam0->f_4, unk_0x8000C77B5F336760(uParam0->f_3E.f_C, true), 5f, 0) && !func_217(uParam0->f_4, 0f, 0f, 0f, 5f, 0))
			{
				if ((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)
				{
				}
			}
			Global_16B5D = 4294967295;
			func_218(uParam0->f_2);
			PED::_0x5AAB586FFEC0FD96(uParam0->f_11[uParam0->f_3D]);
			Stack.Push(uParam0);
			Call_Loc(iParam1);
			*uParam0 = { StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal, StackVal };
			*uParam0 = 4;
		}
	}
	if (*uParam0 == 4)
	{
		bVar27 = false;
		bVar28 = false;
		iVar29 = 0;
		fVar30 = 0f;
		fVar31 = 0f;
		bVar32 = false;
		bVar33 = false;
		func_215(uParam0, &bVar27, &bVar28, &iVar29, &fVar30, &fVar31, &bVar32, &bVar33, &uParam3);
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8)))
		{
			if (func_549(uParam0->f_2, &Var34))
			{
				MemCopy(&(uParam0->f_8), {Var34}, 8);
			}
		}
		if (uParam0->f_2 == 231)
		{
			if (!bVar32)
			{
				bVar32 = true;
			}
		}
		bVar35 = false;
		if (!CAM::DOES_CAM_EXIST(uParam0->f_3E.f_A))
		{
			if (func_214(&(uParam0->f_3E), iVar29, uParam3, fVar30, fVar31, bVar32, bVar33, &(uParam0->f_8), 0, 0))
			{
				bVar35 = true;
			}
		}
		else
		{
			MemCopy(&Var36, {uParam0->f_8}, 16);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var36))
			{
				func_551(uParam0->f_2, &sVar37, &cVar38);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar38))
				{
					StringConCat(&Var36, &cVar38, 64);
				}
			}
			if (func_184(&(uParam0->f_3E), uParam0->f_3E.f_A, iVar29, uParam3, fVar30, fVar31, bVar32, bVar33, &Var36, 2))
			{
				bVar35 = true;
			}
		}
		if (bVar35)
		{
			iVar40 = 3;
			iVar41 = 8;
			if (Global_3)
			{
				iVar40 = 7;
				iVar41 = 7;
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar39 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if ((iVar39 == 8 || iVar39 == 11) || ((STREAMING::GET_PLAYER_SWITCH_TYPE() == 2 && iVar39 == 3) && !((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7)))
				{
					if (STREAMING::_0x78C0D93253149435() == 0)
					{
						if (Global_16B5C > 0)
						{
							if (Global_16B5D < 0)
							{
								Global_16B5D = MISC::GET_GAME_TIMER();
							}
							else
							{
								iVar42 = 12500;
								if (iVar39 == 11)
								{
									iVar42 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar42) * 1.75f));
								}
								if (func_547(uParam0->f_2, &sVar43))
								{
									iVar42 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar42) * 1.75f));
								}
								if (MISC::GET_GAME_TIMER() > (Global_16B5D + iVar42))
								{
									func_182();
									STREAMING::_0x74DE2E8739086740();
									Global_16B5D = 4294967295;
								}
							}
						}
					}
				}
			}
			else
			{
				iVar39 = iVar40;
				iVar41 = iVar40;
			}
			func_157(uParam0);
			if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
			{
				if (iVar39 != 1)
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
			if (func_597(uParam3, 512))
			{
				if (iVar39 == 1)
				{
					Stack.Push(uParam0);
					Stack.Push(&Var1);
					Stack.Push(uParam3);
					Call_Loc(iParam2);
				}
			}
			if (iVar39 >= iVar40)
			{
				Stack.Push(uParam0);
				Stack.Push(&Var1);
				Stack.Push(uParam3);
				Call_Loc(iParam2);
				if (StackVal)
				{
					if (!uParam0->f_3E.f_13)
					{
						if (uParam0->f_3E.f_12 && iVar39 >= iVar41)
						{
							bVar44 = false;
							if (func_94(&(uParam0->f_11), bVar27, bVar28, 0))
							{
								bVar44 = true;
							}
							if (bVar44)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3E.f_D))
								{
									ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3E.f_D, 1, 1);
								}
								func_93(&(uParam0->f_11));
								func_157(uParam0);
								func_81();
								PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(CAM::_0xDC9DA9E8789F5246(), 1f);
								Global_162B5 = { uParam0->f_11 };
								uParam0->f_3E.f_13 = 1;
							}
						}
					}
				}
			}
			if (iVar39 >= 3)
			{
				PAD::SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(0);
			}
			if (Global_1620E)
			{
				if (uParam0->f_3E.f_13)
				{
					if (func_79(uParam0))
					{
						Global_1620E = 0;
					}
				}
			}
		}
		else
		{
			*uParam0 = 5;
		}
	}
	if (*uParam0 == 5)
	{
		if (CAM::DOES_CAM_EXIST(uParam0->f_3E.f_A))
		{
			if (CAM::IS_CAM_ACTIVE(uParam0->f_3E.f_A))
			{
				if (CAM::IS_CAM_INTERPOLATING(uParam0->f_3E.f_A))
				{
				}
				else
				{
					CAM::SET_CAM_ACTIVE(uParam0->f_3E.f_A, false);
					CAM::DESTROY_CAM(uParam0->f_3E.f_A, 0);
				}
			}
			else
			{
				CAM::SET_CAM_ACTIVE(uParam0->f_3E.f_A, false);
				CAM::DESTROY_CAM(uParam0->f_3E.f_A, 0);
			}
			PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_6C, 0);
			unk_0x02DD9F29D9655E48();
		}
		else
		{
			if (CAM::DOES_CAM_EXIST(uParam0->f_3E.f_9))
			{
				CAM::DESTROY_CAM(uParam0->f_3E.f_9, 0);
			}
			if (uParam0->f_3E.f_18 > 0)
			{
				iVar45 = 0;
				while (iVar45 <= (uParam0->f_3E.f_18 - 1))
				{
					if (CAM::DOES_CAM_EXIST(uParam0->f_3E[iVar45]))
					{
						CAM::DESTROY_CAM(uParam0->f_3E[iVar45], 0);
					}
					iVar45++;
				}
			}
			if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
			{
				func_564(uParam0->f_3E.f_15);
			}
			uParam0->f_3E.f_F = 0;
			uParam0->f_3E.f_10 = 0;
			uParam0->f_3E.f_11 = 0;
			uParam0->f_3E.f_12 = 0;
			uParam0->f_3E.f_13 = 0;
			uParam0->f_3E.f_14 = 0;
			uParam0->f_3E.f_18 = 0;
			if (!Global_9175)
			{
				CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
				CAM::CUSTOM_MENU_COORDINATES(0f);
				CAM::_0x0225778816FDC28C(0f);
			}
			CAM::RENDER_SCRIPT_CAMS(false, true, 1000, 1, 0, 0);
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
				PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 0);
				ENTITY::SET_ENTITY_VISIBLE(AUDIO::_0x0626A247D2405330(), true, 0);
				unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
				PED::SET_PED_CAN_BE_TARGETTED(AUDIO::_0x0626A247D2405330(), true);
				PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(CAM::_0xDC9DA9E8789F5246(), 1f);
				if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
				{
					ENTITY::SET_ENTITY_COLLISION(AUDIO::_0x0626A247D2405330(), true, 0);
				}
			}
			func_78(0);
			if (!PED::IS_PED_INJURED(uParam0->f_3E.f_D))
			{
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3E.f_D, 0, 1);
				ENTITY::_SET_ENTITY_SOMETHING(uParam0->f_3E.f_D, 1);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_3E.f_C, 1);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_3E.f_C))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_3E.f_C, false);
				PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(uParam0->f_3E.f_C, 1);
				if (uParam0->f_3E.f_C != AUDIO::_0x0626A247D2405330())
				{
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uParam0->f_3E.f_C, 0, 1);
				}
			}
			*uParam0 = 6;
		}
	}
	if (*uParam0 == 6)
	{
		if (uParam0->f_10 != 0)
		{
			INTERIOR::UNPIN_INTERIOR(uParam0->f_10);
		}
		HUD::SET_MULTIPLAYER_BANK_CASH();
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_16(uParam0->f_3));
		iVar46 = func_11();
		if (iVar46 != 145)
		{
			if (!ENTITY::IS_ENTITY_DEAD(Global_16B48[iVar46], 0))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_16B48[iVar46], 1))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_16B48[iVar46]));
				}
			}
			iVar47 = Global_16A1D[iVar46 /*98*/];
			if (iVar47 != 0)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar47);
			}
		}
		func_77(uParam0->f_3);
		if ((((((uParam0->f_2 != 5 && uParam0->f_2 != 6) && uParam0->f_2 != 7) && uParam0->f_2 != 2) && uParam0->f_2 != 3) && uParam0->f_2 != 4) && uParam0->f_2 != 1)
		{
			Global_19E56.f_4849[uParam0->f_3] = uParam0->f_2;
			func_75(uParam0->f_3, uParam0->f_2);
		}
		if (uParam0->f_2 == 1)
		{
			func_6(&(Global_19E56.f_933.f_21B), 4294967295);
		}
		func_74(uParam0->f_3);
		func_54(uParam0, &Var1);
		func_52(uParam0);
		func_49(uParam0->f_2);
		func_7(&Global_1406D0);
		func_7(&(Global_19E56.f_933.f_21B.f_8E4[uParam0->f_3]));
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("TOD_SHIFT_SCENE"))
		{
			AUDIO::STOP_SOUND(uParam0->f_60.f_A);
			AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
			AUDIO::STOP_AUDIO_SCENE("TOD_SHIFT_SCENE");
		}
		Global_19E56.f_933.f_21B.f_8E8[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_19E56.f_933.f_21B.f_8F2[uParam0->f_3] = 0f;
		Global_19E56.f_933.f_21B.f_8F6[uParam0->f_3] = 0;
		Global_19E56.f_933.f_21B.f_8FA[uParam0->f_3 /*3*/] = { 0f, 0f, 0f };
		Global_1620E = 0;
		Global_16B5D = 4294967295;
		func_48(&(uParam0->f_1));
		if (((uParam0->f_2 != 8 && uParam0->f_2 != 9) && uParam0->f_2 != 10) && uParam0->f_2 != 55)
		{
			func_564(0);
		}
		return 1;
	}
	return 0;
}

void func_48(var uParam0)//Position - 0x8A0A
{
	if (*uParam0 == 4294967295)
	{
		return;
	}
	if (!*uParam0 == Global_8CEF)
	{
		*uParam0 = 4294967295;
		return;
	}
	*uParam0 = 4294967295;
	Global_8CEE = 0;
	Global_8CF0 = 0;
	Global_8D15 = 15;
	Global_DB72 = 0;
	Global_DB73 = 0;
}

int func_49(int iParam0)//Position - 0x8A47
{
	char* sVar0;
	char[] cVar1[8];
	char* sVar2;
	char[] cVar3[8];
	char[] cVar4[8];
	var uVar5;
	var uVar6;
	
	if (func_551(iParam0, &sVar0, &cVar1))
	{
		if (func_50(iParam0, &sVar2, &cVar3, &cVar4, &uVar5, &uVar6))
		{
			STREAMING::REMOVE_ANIM_DICT(&sVar2);
			return 1;
		}
	}
	return 0;
}

int func_50(int iParam0, char* sParam1, char* sParam2, char* sParam3, var uParam4, var uParam5)//Position - 0x8A7A
{
	*uParam4 = 9;
	*uParam5 = 0;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "SWITCH@FRANKLIN@STRIPCLUB", 64);
			StringCopy(sParam2, "002113_02_FRAS_15_STRIPCLUB_IDLE", 64);
			StringCopy(sParam3, "002113_02_FRAS_15_STRIPCLUB_EXIT", 64);
			return 1;
			break;
		
		case 124:
			StringCopy(sParam1, "SWITCH@MICHAEL@WASH_FACE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 234:
			StringCopy(sParam1, "SWITCH@TREVOR@ON_TOILET", 64);
			StringCopy(sParam2, "trev_on_toilet_loop", 64);
			StringCopy(sParam3, "trev_on_toilet_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 316:
			StringCopy(sParam1, "SWITCH@TREVOR@JERKING_OFF", 64);
			StringCopy(sParam2, "trev_jerking_off_loop", 64);
			StringCopy(sParam3, "trev_jerking_off_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 77:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 1;
			break;
		
		case 78:
			StringCopy(sParam1, "SWITCH@MICHAEL@BEDROOM2", 64);
			StringCopy(sParam2, "BED_LOOP_Michael", 64);
			StringCopy(sParam3, "BED_EXIT_Michael", 64);
			return 1;
			break;
		
		case 79:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_3", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 80:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 1;
			break;
		
		case 82:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCREAMING", 64);
			StringCopy(sParam2, "001671_02_MICS2_1_WAKES_UP_SCREAMING_IDLE", 64);
			StringCopy(sParam3, "001671_02_MICS2_1_WAKES_UP_SCREAMING_EXIT", 64);
			return 1;
			break;
		
		case 84:
			StringCopy(sParam1, "SAVECountryside@", 64);
			StringCopy(sParam2, "M_Sleep_Loop_countryside", 64);
			StringCopy(sParam3, "M_GetOut_countryside", 64);
			return 1;
			break;
		
		case 83:
			StringCopy(sParam1, "SWITCH@MICHAEL@WAKES_UP_SCARED", 64);
			StringCopy(sParam2, "001672_02_MICS2_1_WAKES_UP_SCARED_IDLE", 64);
			StringCopy(sParam3, "001672_02_MICS2_1_WAKES_UP_SCARED_EXIT", 64);
			return 1;
			break;
		
		case 85:
			StringCopy(sParam1, "SWITCH@MICHAEL@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 291:
			StringCopy(sParam1, "SWITCH@TREVOR@WATCHING_TV", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			return 1;
			break;
		
		case 128:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING", 64);
			StringCopy(sParam2, "IDLE", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			return 1;
			break;
		
		case 86:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SOFA", 64);
			StringCopy(sParam2, "BASE_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 87:
		case 88:
		case 184:
		case 185:
			StringCopy(sParam1, "SWITCH@MICHAEL@SUNLOUNGER", 64);
			StringCopy(sParam2, "SunLounger_Idle", 64);
			StringCopy(sParam3, "SunLounger_GetUp", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 89:
		case 90:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_MICHAEL", 64);
			return 1;
			break;
		
		case 127:
			StringCopy(sParam1, "SWITCH@MICHAEL@SLEEP_IN_CAR", 64);
			StringCopy(sParam2, "BASE_PREMIER_MICHAEL", 64);
			StringCopy(sParam3, "SLEEP_IN_CAR_PREMIER_MICHAEL", 64);
			return 1;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
		case 126:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 95:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXIT_RESTAURANT", 64);
			StringCopy(sParam2, "mic_exit_restaurant_loop", 64);
			StringCopy(sParam3, "mic_exit_restaurant_exit", 64);
			return 1;
			break;
		
		case 134:
			StringCopy(sParam1, "SWITCH@MICHAEL@DRUNK_BAR", 64);
			StringCopy(sParam2, "Drunk_Idle_PED", 64);
			StringCopy(sParam3, "Drunk_Exit_PED", 64);
			return 1;
			break;
		
		case 108:
		case 109:
			StringCopy(sParam1, "SWITCH@MICHAEL@PARKBENCH_SMOKE_RANGER", 64);
			StringCopy(sParam2, "parkbench_smoke_ranger_loop", 64);
			StringCopy(sParam3, "parkbench_smoke_ranger_exit", 64);
			return 1;
			break;
		
		case 112:
		case 113:
		case 123:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_BONNET", 64);
			StringCopy(sParam2, "sitting_on_car_bonnet_loop", 64);
			StringCopy(sParam3, "sitting_on_car_bonnet_exit", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
			break;
		
		case 41:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			StringCopy(sParam1, "SWITCH@MICHAEL@SITTING_ON_CAR_PREMIERE", 64);
			StringCopy(sParam2, "SITTING_ON_CAR_PREMIERE_LOOP_PLAYER", 64);
			StringCopy(sParam3, "SITTING_ON_CAR_PREMIERE_EXIT_PLAYER", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
			break;
		
		case 114:
			StringCopy(sParam1, "SWITCH@MICHAEL@PHARMACY", 64);
			StringCopy(sParam2, "mics1_ig_11_loop", 64);
			StringCopy(sParam3, "mics1_ig_11_exit", 64);
			return 1;
			break;
		
		case 105:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_Aggitated", 64);
			*uParam5 |= 32;
			return 1;
			break;
		
		case 106:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitWheel", 64);
			*uParam5 |= 32;
			return 1;
			break;
		
		case 107:
			StringCopy(sParam1, "SWITCH@MICHAEL@STUCKINTRAFFIC", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "StuckInTraffic_HitHorn", 64);
			*uParam5 |= 32;
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMANDA_EXITS_CAR", 64);
			StringCopy(sParam2, "000606_02_MICS1_5_AMANDA_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "000606_02_MICS1_5_AMANDA_EXITS_CAR_EXIT_MIC", 64);
			return 1;
			break;
		
		case 170:
			StringCopy(sParam1, "SWITCH@MICHAEL@OPENS_DOOR_FOR_AMA", 64);
			StringCopy(sParam2, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_IDLE_MIC", 64);
			StringCopy(sParam3, "001895_02_MICS3_17_OPENS_DOOR_FOR_AMA_EXIT_MIC", 64);
			return 1;
			break;
		
		case 171:
			StringCopy(sParam1, "SWITCH@MICHAEL@DROPPING_OFF_JMY", 64);
			StringCopy(sParam2, "001839_02_MICS3_20_DROPPING_OFF_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001839_02_MICS3_20_DROPPING_OFF_JMY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "SWITCH@MICHAEL@TRACY_EXITS_CAR", 64);
			StringCopy(sParam2, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_IDLE_MIC", 64);
			StringCopy(sParam3, "001840_01_MICS3_IG_21_TRACY_EXITS_CAR_MIC", 64);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "SWITCH@MICHAEL@PIER", 64);
			StringCopy(sParam2, "pier_lean_smoke_idle", 64);
			StringCopy(sParam3, "pier_lean_smoke_outro", 64);
			*uParam5 |= 68;
			return 1;
			break;
		
		case 121:
			StringCopy(sParam1, "SWITCH@MICHAEL@MARINA", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "SWITCH@MICHAEL@ARGUE_WITH_AMANDA", 64);
			StringCopy(sParam2, "argue_with_amanda_loop_michael", 64);
			StringCopy(sParam3, "argue_with_amanda_exit_michael", 64);
			return 1;
			break;
		
		case 125:
			StringCopy(sParam1, "SWITCH@MICHAEL@WALK_AND_TALK", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "Im_A_Married_Man_Michael", 64);
			return 1;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			StringCopy(sParam1, "SWITCH@MICHAEL@CAFE", 64);
			StringCopy(sParam2, "Cafe_Idle_PED", 64);
			StringCopy(sParam3, "Cafe_Exit_PED", 64);
			return 1;
			break;
		
		case 110:
		case 111:
		case 131:
		case 132:
			StringCopy(sParam1, "SWITCH@MICHAEL@BENCH", 64);
			StringCopy(sParam2, "bench_on_phone_idle", 64);
			StringCopy(sParam3, "EXIT_FORWARD", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1026;
			return 1;
			break;
		
		case 129:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_CLUBCHAIR", 64);
			StringCopy(sParam2, "Switch_ON_CLUBCHAIR_BASE", 64);
			StringCopy(sParam3, "Switch_ON_CLUBCHAIR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 130:
			StringCopy(sParam1, "SAFE@MICHAEL@IG_5", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_1_MICHAEL", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 150:
			StringCopy(sParam1, "SWITCH@MICHAEL@RONEX_IG_5_P2", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "RONEX_IG5_P2_MICHAEL", 64);
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "SWITCH@MICHAEL@RESTAURANT", 64);
			StringCopy(sParam2, "001510_02_GC_MICS3_IG_1_BASE_MICHAEL", 64);
			StringCopy(sParam3, "001510_02_GC_MICS3_IG_1_EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 152:
			StringCopy(sParam1, "SWITCH@MICHAEL@LOUNGE_CHAIRS", 64);
			StringCopy(sParam2, "001523_01_MICS3_9_LOUNGE_CHAIRS_IDLE_MIC", 64);
			StringCopy(sParam3, "001523_01_MICS3_9_LOUNGE_CHAIRS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 153:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "001400_01_MICS3_5_BYE_TO_SOLOMAN_IDLE", 64);
			StringCopy(sParam3, "001400_01_MICS3_5_BYE_TO_SOLOMAN_EXIT", 64);
			return 1;
			break;
		
		case 154:
			StringCopy(sParam1, "SWITCH@MICHAEL@GOODBYE_TO_SOLOMAN", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 155:
			StringCopy(sParam1, "SWITCH@MICHAEL@AMA_TENNIS", 64);
			StringCopy(sParam2, "001833_01_MICS3_18_AMA_TENNIS_IDLE_MIC", 64);
			StringCopy(sParam3, "001833_01_MICS3_18_AMA_TENNIS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 156:
			StringCopy(sParam1, "SWITCH@MICHAEL@AROUND_THE_TABLE_SELFISH", 64);
			StringCopy(sParam2, "AROUND_THE_TABLE_SELFISH_BASE_Michael", 64);
			StringCopy(sParam3, "AROUND_THE_TABLE_SELFISH_Michael", 64);
			return 1;
			break;
		
		case 157:
			StringCopy(sParam1, "SWITCH@MICHAEL@REJECTED_ENTRY", 64);
			StringCopy(sParam2, "001396_01_MICS3_6_REJECTED_ENTRY_IDLE_MIC", 64);
			StringCopy(sParam3, "001396_01_MICS3_6_REJECTED_ENTRY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 159:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_BARBER", 64);
			StringCopy(sParam2, "001406_01_MICS3_7_EXITS_BARBER_IDLE", 64);
			StringCopy(sParam3, "001406_01_MICS3_7_EXITS_BARBER_EXIT", 64);
			return 1;
			break;
		
		case 160:
			StringCopy(sParam1, "SWITCH@MICHAEL@EXITS_FANCYSHOP", 64);
			StringCopy(sParam2, "001405_01_MICS3_8_EXITS_FANCYSHOP_IDLE", 64);
			StringCopy(sParam3, "001405_01_MICS3_8_EXITS_FANCYSHOP_EXIT", 64);
			return 1;
			break;
		
		case 161:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 163:
			StringCopy(sParam1, "SWITCH@MICHAEL@GETS_READY", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_GETS_READY_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_GETS_READY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 164:
			StringCopy(sParam1, "SWITCH@MICHAEL@READS_SCRIPT", 64);
			StringCopy(sParam2, "001404_01_MICS3_16_READS_SCRIPT_IDLE", 64);
			StringCopy(sParam3, "001404_01_MICS3_16_READS_SCRIPT_EXIT", 64);
			return 1;
			break;
		
		case 165:
			StringCopy(sParam1, "SWITCH@MICHAEL@BAR_EMPLOYEE_CONVO", 64);
			StringCopy(sParam2, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_IDLE_MIC", 64);
			StringCopy(sParam3, "001387_03_MICS3_2_BAR_EMPLOYEE_CONVO_EXIT_MIC", 64);
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "SWITCH@MICHAEL@PROSTITUTE", 64);
			StringCopy(sParam2, "BASE_MICHAEL", 64);
			StringCopy(sParam3, "EXIT_MICHAEL", 64);
			return 1;
			break;
		
		case 166:
			StringCopy(sParam1, "SWITCH@MICHAEL@TALKS_TO_GUARD", 64);
			StringCopy(sParam2, "001393_02_MICS3_3_TALKS_TO_GUARD_IDLE_MIC", 64);
			StringCopy(sParam3, "001393_02_MICS3_3_TALKS_TO_GUARD_EXIT_MIC", 64);
			return 1;
			break;
		
		case 167:
			StringCopy(sParam1, "SWITCH@MICHAEL@ON_SET_W_JMY", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "001513_03_GC_MICS3_IG_4_ON_SET_W_JMY_EXIT_MIC", 64);
			return 1;
			break;
		
		case 168:
			StringCopy(sParam1, "SWITCH@MICHAEL@TV_W_KIDS", 64);
			StringCopy(sParam2, "001520_02_MICS3_14_TV_W_KIDS_IDLE_MIC", 64);
			StringCopy(sParam3, "001520_02_MICS3_14_TV_W_KIDS_EXIT_MIC", 64);
			return 1;
			break;
		
		case 173:
			StringCopy(sParam1, "SWITCH@MICHAEL@BIKING_WITH_JIMMY", 64);
			StringCopy(sParam2, "LOOP_Michael", 64);
			StringCopy(sParam3, "EXIT_Michael", 64);
			return 1;
			break;
		
		case 169:
			StringCopy(sParam1, "SWITCH@MICHAEL@GAMING_W_JMY", 64);
			StringCopy(sParam2, "001518_02_MICS3_11_GAMING_W_JMY_IDLE_MIC", 64);
			StringCopy(sParam3, "001518_02_MICS3_11_GAMING_W_JMY_EXIT_MIC", 64);
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 186:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_APT", 64);
			StringCopy(sParam2, "001918_01_FRAS_V2_1_CLEANING_APT_IDLE", 64);
			StringCopy(sParam3, "001918_01_FRAS_V2_1_CLEANING_APT_EXIT", 64);
			return 1;
			break;
		
		case 187:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_CELL", 64);
			StringCopy(sParam2, "001914_01_FRAS_V2_2_ON_CELL_IDLE", 64);
			StringCopy(sParam3, "001914_01_FRAS_V2_2_ON_CELL_EXIT", 64);
			return 1;
			break;
		
		case 188:
			StringCopy(sParam1, "SWITCH@FRANKLIN@SNACKING", 64);
			StringCopy(sParam2, "001922_01_FRAS_V2_3_SNACKING_IDLE", 64);
			StringCopy(sParam3, "001922_01_FRAS_V2_3_SNACKING_EXIT", 64);
			return 1;
			break;
		
		case 189:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ON_LAPTOP", 64);
			StringCopy(sParam2, "001927_01_FRAS_V2_4_ON_LAPTOP_IDLE", 64);
			StringCopy(sParam3, "001927_01_FRAS_V2_4_ON_LAPTOP_EXIT", 64);
			return 1;
			break;
		
		case 190:
			StringCopy(sParam1, "SWITCH@FRANKLIN@IRONING", 64);
			StringCopy(sParam2, "001947_01_GC_FRAS_V2_IG_6_BASE", 64);
			StringCopy(sParam3, "001947_01_GC_FRAS_V2_IG_6_EXIT", 64);
			return 1;
			break;
		
		case 191:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WATCHING_TV", 64);
			StringCopy(sParam2, "001915_01_FRAS_V2_8_WATCHING_TV_IDLE", 64);
			StringCopy(sParam3, "001915_01_FRAS_V2_8_WATCHING_TV_EXIT", 64);
			return 1;
			break;
		
		case 175:
		case 176:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Sleep_LOOP", 64);
			StringCopy(sParam3, "Sleep_GetUp_RubEyes", 64);
			return 1;
			break;
		
		case 177:
			StringCopy(sParam1, "SWITCH@FRANKLIN@NAPPING", 64);
			StringCopy(sParam2, "002333_01_FRAS_V2_10_NAPPING_IDLE", 64);
			StringCopy(sParam3, "002333_01_FRAS_V2_10_NAPPING_EXIT", 64);
			return 1;
			break;
		
		case 178:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GETTING_READY", 64);
			StringCopy(sParam2, "002334_02_FRAS_V2_11_GETTING_DRESSED_IDLE", 64);
			StringCopy(sParam3, "002334_02_FRAS_V2_11_GETTING_DRESSED_EXIT", 64);
			return 1;
			break;
		
		case 179:
		case 180:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BED", 64);
			StringCopy(sParam2, "Bed_Reading_LOOP", 64);
			StringCopy(sParam3, "Bed_Reading_GetUp", 64);
			return 1;
			break;
		
		case 181:
		case 182:
		case 183:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PRESS_UPS", 64);
			StringCopy(sParam2, "PressUps_LOOP", 64);
			StringCopy(sParam3, "PressUps_OUT", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 192:
			StringCopy(sParam1, "SWITCH@FRANKLIN@002110_04_MAGD_3_WEED_EXCHANGE", 64);
			StringCopy(sParam2, "002110_04_MAGD_3_WEED_EXCHANGE_SHOPKEEPER", 64);
			StringCopy(sParam3, "002110_04_MAGD_3_WEED_EXCHANGE_FRANKLIN", 64);
			return 1;
			break;
		
		case 193:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro_ped", 64);
			return 1;
			break;
		
		case 194:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 1;
			break;
		
		case 195:
			StringCopy(sParam1, "SWITCH@FRANKLIN@DISPENSARY", 64);
			StringCopy(sParam2, "exit_dispensary_idle", 64);
			StringCopy(sParam3, "exit_dispensary_outro", 64);
			return 1;
			break;
		
		case 198:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 1;
			break;
		
		case 199:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GARBAGE_B", 64);
			StringCopy(sParam2, "Garbage_Idle_PLYR", 64);
			StringCopy(sParam3, "Garbage_Toss_PLYR", 64);
			return 1;
			break;
		
		case 200:
			StringCopy(sParam1, "SWITCH@FRANKLIN@THROW_CUP", 64);
			StringCopy(sParam2, "throw_cup_loop", 64);
			StringCopy(sParam3, "throw_cup_exit", 64);
			return 1;
			break;
		
		case 201:
			StringCopy(sParam1, "SWITCH@FRANKLIN@HIT_CUP_HAND", 64);
			StringCopy(sParam2, "hit_cup_hand_loop", 64);
			StringCopy(sParam3, "hit_cup_hand_exit", 64);
			return 1;
			break;
		
		case 202:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GYM", 64);
			StringCopy(sParam2, "001942_02_GC_FRAS_IG_5_BASE", 64);
			StringCopy(sParam3, "001942_02_GC_FRAS_IG_5_EXIT", 64);
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 1;
			break;
		
		case 204:
		case 205:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PLAYS_W_DOG", 64);
			StringCopy(sParam2, "001916_01_FRAS_V2_9_PLAYS_W_DOG_IDLE", 64);
			StringCopy(sParam3, "001916_01_FRAS_V2_9_PLAYS_W_DOG_EXIT", 64);
			return 1;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			StringCopy(sParam1, "SWITCH@FRANKLIN@ADMIRE_MOTORCYCLE", 64);
			StringCopy(sParam2, "BASE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 1;
			break;
		
		case 212:
		case 214:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CLEANING_CAR", 64);
			StringCopy(sParam2, "001946_01_GC_FRAS_V2_IG_5_BASE", 64);
			StringCopy(sParam3, "001946_01_GC_FRAS_V2_IG_5_EXIT", 64);
			return 1;
			break;
		
		case 196:
			StringCopy(sParam1, "SWITCH@FRANKLIN@TANISHA_ARGUE", 64);
			StringCopy(sParam2, "BASE_Franklin", 64);
			StringCopy(sParam3, "Tanisha_Argue_Franklin", 64);
			return 1;
			break;
		
		case 197:
			StringCopy(sParam1, "SWITCH@FRANKLIN@WALK_AROUND_HOUSE", 64);
			StringCopy(sParam2, "IDLE_FRANKLIN", 64);
			StringCopy(sParam3, "EXIT_FRANKLIN", 64);
			return 1;
			break;
		
		case 215:
			StringCopy(sParam1, "SWITCH@FRANKLIN@BYE_TAXI", 64);
			StringCopy(sParam2, "001938_01_FRAS_V2_7_BYE_TAXI_IDLE_FRA", 64);
			StringCopy(sParam3, "001938_01_FRAS_V2_7_BYE_TAXI_EXIT_FRA", 64);
			return 1;
			break;
		
		case 221:
			StringCopy(sParam1, "SWITCH@FRANKLIN@PICKUP_LINE", 64);
			StringCopy(sParam2, "base_Franklin", 64);
			StringCopy(sParam3, "switch_P1_Franklin", 64);
			return 1;
			break;
		
		case 222:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "CheckShoe", 64);
			return 1;
			break;
		
		case 223:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeHands", 64);
			return 1;
			break;
		
		case 224:
			StringCopy(sParam1, "SWITCH@FRANKLIN@CHOPSHOP", 64);
			StringCopy(sParam2, "BASE", 64);
			StringCopy(sParam3, "WipeRight", 64);
			return 1;
			break;
		
		case 226:
		case 227:
		case 230:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_01", 64);
			return 1;
			break;
		
		case 228:
		case 229:
			StringCopy(sParam1, "SWITCH@FRANKLIN@EXIT_BUILDING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "switch_02", 64);
			return 1;
			break;
		
		case 218:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P1", 64);
			StringCopy(sParam2, "gang_taunt_loop_franklin", 64);
			StringCopy(sParam3, "gang_taunt_exit_franklin", 64);
			return 1;
			break;
		
		case 219:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "gang_taunt_with_lamar_loop_frank", 64);
			StringCopy(sParam3, "gang_taunt_with_lamar_exit_frank", 64);
			return 1;
			break;
		
		case 220:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P5", 64);
			StringCopy(sParam2, "fras_ig_6_p5_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_6_p5_exit_frank", 64);
			return 1;
			break;
		
		case 225:
			StringCopy(sParam1, "SWITCH@FRANKLIN@GANG_TAUNT_P3", 64);
			StringCopy(sParam2, "fras_ig_10_p3_loop_frank", 64);
			StringCopy(sParam3, "fras_ig_10_p3_exit_frank", 64);
			return 1;
			break;
		
		case 232:
		case 233:
			StringCopy(sParam1, "missheist_agency2aig_9", 64);
			StringCopy(sParam2, "Franklin_call_Michael_IDLE_PLAYER", 64);
			StringCopy(sParam3, "Franklin_call_Michael_EXIT_PLAYER", 64);
			return 1;
			break;
		
		case 235:
			StringCopy(sParam1, "SWITCH@TREVOR@MOCKS_LAPDANCE", 64);
			StringCopy(sParam2, "001443_01_TRVS_28_IDLE_TRV", 64);
			StringCopy(sParam3, "001443_01_TRVS_28_EXIT_TRV", 64);
			return 1;
			break;
		
		case 236:
			StringCopy(sParam1, "SWITCH@TREVOR@BAR", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 237:
			StringCopy(sParam1, "SWITCH@TREVOR@CHASE_STRIPPERS", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 238:
			StringCopy(sParam1, "SWITCH@TREVOR@STRIPCLUB", 64);
			StringCopy(sParam2, "trev_leave_stripclub_idle", 64);
			StringCopy(sParam3, "trev_leave_stripclub_outro", 64);
			return 1;
			break;
		
		case 239:
			StringCopy(sParam1, "SWITCH@TREVOR@ESCORTED_OUT", 64);
			StringCopy(sParam2, "001215_02_TRVS_12_ESCORTED_OUT_IDLE_TRV", 64);
			StringCopy(sParam3, "001215_02_TRVS_12_ESCORTED_OUT_EXIT_TRV", 64);
			return 1;
			break;
		
		case 273:
		case 274:
			StringCopy(sParam1, "SWITCH@TREVOR@PUKING_INTO_FOUNTAIN", 64);
			StringCopy(sParam2, "trev_fountain_puke_loop", 64);
			StringCopy(sParam3, "trev_fountain_puke_exit", 64);
			return 1;
			break;
		
		case 245:
		case 40:
			StringCopy(sParam1, "SWITCH@TREVOR@TREV_SMOKING_METH", 64);
			StringCopy(sParam2, "TREV_SMOKING_METH_LOOP", 64);
			StringCopy(sParam3, "TREV_SMOKING_METH_EXIT", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 315:
			StringCopy(sParam1, "SWITCH@TREVOR@HEAD_IN_SINK", 64);
			StringCopy(sParam2, "trev_sink_idle", 64);
			StringCopy(sParam3, "trev_sink_exit", 64);
			*uParam4 = 1545;
			*uParam5 = 1544;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			StringCopy(sParam1, "SWITCH@TREVOR@AT_THE_DOCKS", 64);
			StringCopy(sParam2, "001209_01_TRVS_3_AT_THE_DOCKS_IDLE", 64);
			StringCopy(sParam3, "001209_01_TRVS_3_AT_THE_DOCKS_EXIT", 64);
			return 1;
			break;
		
		case 262:
			StringCopy(sParam1, "SWITCH@TREVOR@KO_NEIGHBOUR", 64);
			StringCopy(sParam2, "001500_03_TRVS_19_KO_NEIGHBOUR_LOOP_TRV", 64);
			StringCopy(sParam3, "001500_03_TRVS_19_KO_NEIGHBOUR_EXIT_TRV", 64);
			return 1;
			break;
		
		case 243:
			StringCopy(sParam1, "SWITCH@TREVOR@GARBAGE_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 244:
			StringCopy(sParam1, "SWITCH@TREVOR@THROW_FOOD", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 271:
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
		case 279:
		case 240:
		case 241:
		case 242:
			StringCopy(sParam1, "SWITCH@TREVOR@SLOUCHED_GET_UP", 64);
			StringCopy(sParam2, "TREV_SLOUCHED_GET_UP_IDLE", 64);
			StringCopy(sParam3, "TREV_SLOUCHED_GET_UP_EXIT", 64);
			return 1;
			break;
		
		case 280:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ISLAND", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 246:
			StringCopy(sParam1, "SWITCH@TREVOR@PUSHES_BODYBUILDER", 64);
			StringCopy(sParam2, "001426_03_TRVS_5_PUSHES_BODYBUILDER_IDLE_TRV", 64);
			StringCopy(sParam3, "001426_03_TRVS_5_PUSHES_BODYBUILDER_EXIT_TRV", 64);
			return 1;
			break;
		
		case 286:
			StringCopy(sParam1, "SWITCH@TREVOR@RUDE_AT_CAFE", 64);
			StringCopy(sParam2, "001218_03_TRVS_23_RUDE_AT_CAFE_IDLE_TRV", 64);
			StringCopy(sParam3, "001218_03_TRVS_23_RUDE_AT_CAFE_EXIT_TRV", 64);
			return 1;
			break;
		
		case 247:
			StringCopy(sParam1, "SWITCH@TREVOR@ANNOYS_SUNBATHERS", 64);
			StringCopy(sParam2, "trev_annoys_sunbathers_loop_trevor", 64);
			StringCopy(sParam3, "trev_annoys_sunbathers_exit_trevor", 64);
			return 1;
			break;
		
		case 263:
			StringCopy(sParam1, "SWITCH@TREVOR@SCARES_TRAMP", 64);
			StringCopy(sParam2, "TREV_SCARES_TRAMP_IDLE_TREVOR", 64);
			StringCopy(sParam3, "TREV_SCARES_TRAMP_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 278:
			StringCopy(sParam1, "SWITCH@TREVOR@NAKED_ON_BRIDGE", 64);
			StringCopy(sParam2, "002055_01_TRVS_17_NAKED_ON_BRIDGE_IDLE", 64);
			StringCopy(sParam3, "002055_01_TRVS_17_NAKED_ON_BRIDGE_EXIT", 64);
			return 1;
			break;
		
		case 264:
			StringCopy(sParam1, "SWITCH@TREVOR@DUMPSTER", 64);
			StringCopy(sParam2, "002002_01_TRVS_14_DUMPSTER_IDLE", 64);
			StringCopy(sParam3, "002002_01_TRVS_14_DUMPSTER_EXIT", 64);
			return 1;
			break;
		
		case 255:
			StringCopy(sParam1, "SWITCH@TREVOR@FUNERAL_HOME", 64);
			StringCopy(sParam2, "trvs_ig_11_loop", 64);
			StringCopy(sParam3, "trvs_ig_11_exit", 64);
			return 1;
			break;
		
		case 285:
			StringCopy(sParam1, "SWITCH@TREVOR@BRIDGE", 64);
			StringCopy(sParam2, "HOLD_LOOP_trevor", 64);
			StringCopy(sParam3, "THROW_EXIT_trevor", 64);
			return 1;
			break;
		
		case 259:
			StringCopy(sParam1, "SWITCH@TREVOR@YELLS_AT_DOORMAN", 64);
			StringCopy(sParam2, "001430_01_TRVS_21_YELLS_AT_DOORMAN_IDLE_TRV", 64);
			StringCopy(sParam3, "001430_01_TRVS_21_YELLS_AT_DOORMAN_EXIT_TRV", 64);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "SWITCH@TREVOR@BLOCK_CAMERA", 64);
			StringCopy(sParam2, "001220_03_GC_TRVS_IG_7_BASE_TREVOR", 64);
			StringCopy(sParam3, "001220_03_GC_TRVS_IG_7_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "SWITCH@TREVOR@GUITAR_BEATDOWN", 64);
			StringCopy(sParam2, "001370_02_TRVS_8_GUITAR_BEATDOWN_IDLE_TRV", 64);
			StringCopy(sParam3, "001370_02_TRVS_8_GUITAR_BEATDOWN_EXIT_TRV", 64);
			return 1;
			break;
		
		case 254:
			StringCopy(sParam1, "SWITCH@TREVOR@LINGERIE_SHOP", 64);
			StringCopy(sParam2, "trev_exit_lingerie_shop_idle", 64);
			StringCopy(sParam3, "trev_exit_lingerie_shop_outro", 64);
			return 1;
			break;
		
		case 287:
			StringCopy(sParam1, "SWITCH@TREVOR@RAND_TEMPLE", 64);
			StringCopy(sParam2, "", 64);
			StringCopy(sParam3, "TAI_CHI_Trevor", 64);
			return 1;
			break;
		
		case 288:
			StringCopy(sParam1, "SWITCH@TREVOR@UNDER_PIER", 64);
			StringCopy(sParam2, "LOOP_Trevor", 64);
			StringCopy(sParam3, "EXIT_Trevor", 64);
			return 1;
			break;
		
		case 289:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 290:
			StringCopy(sParam1, "SWITCH@TREVOR@DRUNK_HOWLING_SC", 64);
			StringCopy(sParam2, "loop", 64);
			StringCopy(sParam3, "exit", 64);
			return 1;
			break;
		
		case 292:
		case 295:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_1_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 293:
		case 294:
			StringCopy(sParam1, "SWITCH@TREVOR@BED", 64);
			StringCopy(sParam2, "Bed_Sleep_TREVOR", 64);
			StringCopy(sParam3, "Bed_GetUp_2_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 299:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Wasnt_Fun_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			StringCopy(sParam1, "SWITCH@TREVOR@FLOYD_CRYING", 64);
			StringCopy(sParam2, "Console_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Console_Get_Along_TREVOR", 64);
			*uParam4 |= 1024;
			*uParam5 |= 1024;
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_IN_FLOYDS_FACE", 64);
			StringCopy(sParam2, "bear_in_floyds_face_loop_trev", 64);
			StringCopy(sParam3, "bear_in_floyds_face_exit_trev", 64);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "SWITCH@TREVOR@BEAR_FLOYDS_FACE_SMELL", 64);
			StringCopy(sParam2, "bear_floyds_face_smell_loop_trev", 64);
			StringCopy(sParam3, "bear_floyds_face_smell_exit_trev", 64);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "SWITCH@TREVOR@PINEAPPLE", 64);
			StringCopy(sParam2, "Pineapple_LOOP_TREVOR", 64);
			StringCopy(sParam3, "Pineapple_EXIT_TREVOR", 64);
			return 1;
			break;
		
		case 304:
			StringCopy(sParam1, "SWITCH@MICHAEL@SMOKING2", 64);
			StringCopy(sParam2, "LOOP", 64);
			StringCopy(sParam3, "EXIT", 64);
			*uParam4 |= 1536;
			*uParam5 |= 1536;
			return 1;
			break;
		
		case 305:
			func_51(iParam0, sParam1, sParam2, sParam3);
			return 1;
			break;
		
		case 310:
			StringCopy(sParam1, "SWITCH@TREVOR@DIGGING", 64);
			StringCopy(sParam2, "001433_01_TRVS_26_DIGGING_IDLE", 64);
			StringCopy(sParam3, "001433_01_TRVS_26_DIGGING_EXIT", 64);
			*uParam5 |= 32768;
			return 1;
			break;
		
		case 311:
			StringCopy(sParam1, "SWITCH@TREVOR@FLUSHES_FOOT", 64);
			StringCopy(sParam2, "002057_03_TRVS_27_FLUSHES_FOOT_IDLE", 64);
			StringCopy(sParam3, "002057_03_TRVS_27_FLUSHES_FOOT_EXIT", 64);
			*uParam5 |= 32768;
			return 1;
			break;
		
		default:
			StringCopy(sParam1, "NULL", 64);
			StringCopy(sParam2, "NULL", 64);
			StringCopy(sParam3, "NULL", 64);
			return 0;
			break;
	}
	StringCopy(sParam1, "NULL", 64);
	StringCopy(sParam2, "NULL", 64);
	StringCopy(sParam3, "NULL", 64);
	return 0;
}

void func_51(int iParam0, char* sParam1, char* sParam2, char* sParam3)//Position - 0xA1BD
{
	StringCopy(sParam1, "AMB@WORLD_HUMAN_SMOKING@MALE@MALE_A@IDLE_A", 64);
	StringCopy(sParam2, "IDLE_A", 64);
	StringCopy(sParam3, "IDLE_A", 64);
}

int func_52(var uParam0)//Position - 0xA1DD
{
	if (!PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		return 0;
	}
	PLAYER::_0xBC9490CA15AEA8FB(CAM::_0xDC9DA9E8789F5246());
	switch (uParam0->f_2)
	{
		case 5:
		case 6:
		case 7:
			func_53(AUDIO::_0x0626A247D2405330());
			return 1;
			break;
		
		case 275:
		case 276:
		case 277:
			PLAYER::SET_PLAYER_WANTED_LEVEL_NO_DROP(CAM::_0xDC9DA9E8789F5246(), 2, 0);
			HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
			return 1;
			break;
		
		default:
			PLAYER::CLEAR_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
			HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
			return 0;
			break;
	}
	return 0;
}

void func_53(int iParam0)//Position - 0xA26C
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == AUDIO::_0x0626A247D2405330())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246(), Global_19E56.f_933.f_21B.f_904[iVar0], 0);
			HUD::_0x84698AB38D0C6636(CAM::_0xDC9DA9E8789F5246(), 0);
		}
	}
}

int func_54(var uParam0, var uParam1)//Position - 0xA2BD
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	char[] cVar4[8];
	char[] cVar5[8];
	char[] cVar6[8];
	var uVar7;
	int iVar8;
	
	if (func_71(*uParam0, uParam1))
	{
		iVar0 = uParam0->f_3;
		iVar1 = uParam1->f_6F;
		if (iVar1 < 144)
		{
			if (func_69(iVar0, iVar1))
			{
				iVar2 = 1;
				func_63(iVar0, iVar1, iVar2);
				return 1;
			}
		}
		else if (func_55(uParam0->f_2, &sVar3, &cVar4, &cVar5, &cVar6, &uVar7))
		{
			switch (MISC::GET_HASH_KEY(&cVar4))
			{
				case 838283101:
					iVar1 = 17;
					break;
				
				case 3928144973:
					iVar1 = 19;
					break;
				
				default:
					return 0;
					break;
			}
			if (func_69(iVar0, iVar1))
			{
				iVar8 = 0;
				func_63(iVar0, iVar1, iVar8);
				return 1;
			}
		}
	}
	return 0;
}

int func_55(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, var uParam5)//Position - 0xA363
{
	var uVar0;
	var uVar1;
	var uVar2;
	
	StringCopy(sParam3, "PRSAUD", 16);
	StringCopy(sParam2, "", 16);
	*uParam5 = 0f;
	switch (iParam0)
	{
		case 11:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_D", 16);
			StringCopy(sParam2, "TANISHA", 16);
			return 1;
			break;
		
		case 8:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_A", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		
		case 9:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_B", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		
		case 10:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_ARM3_C", 16);
			StringCopy(sParam2, "LAMAR", 16);
			return 1;
			break;
		
		case 13:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FAM3", 16);
			return 1;
			break;
		
		case 15:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FBI2", 16);
			return 1;
			break;
		
		case 12:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FAM1", 16);
			return 1;
			break;
		
		case 16:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI4_0", 16);
			return 1;
			break;
		
		case 17:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBI4_0", 16);
			return 1;
			break;
		
		case 18:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBI3", 16);
			return 1;
			break;
		
		case 19:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI4", 16);
			return 1;
			break;
		
		case 20:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI5", 16);
			return 1;
			break;
		
		case 22:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FAM4", 16);
			return 1;
			break;
		
		case 23:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGE1", 16);
			return 1;
			break;
		
		case 24:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGEp", 16);
			return 1;
			break;
		
		case 58:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FRA2", 16);
			return 1;
			break;
		
		case 59:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FRA2", 16);
			return 1;
			break;
		
		case 60:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FBIend", 16);
			return 1;
			break;
		
		case 25:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_CARST1", 16);
			return 1;
			break;
		
		case 26:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CARST1", 16);
			return 1;
			break;
		
		case 27:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_AGE2", 16);
			return 1;
			break;
		
		case 28:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CARST2", 16);
			return 1;
			break;
		
		case 38:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_RUR2A", 16);
			return 1;
			break;
		
		case 41:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_RUR1", 16);
			return 1;
			break;
		
		case 47:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_EXILE2", 16);
			return 1;
			break;
		
		case 49:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FBI5b", 16);
			return 1;
			break;
		
		case 48:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_EXILE3", 16);
			return 1;
			break;
		
		case 124:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_MIC2", 16);
			return 1;
			break;
		
		case 51:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_MIC3b", 16);
			return 1;
			break;
		
		case 52:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_DOC2A", 16);
			return 1;
			break;
		
		case 66:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_DOC2A", 16);
			return 1;
			break;
		
		case 61:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_DOC2B", 16);
			return 1;
			break;
		
		case 62:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FIN1", 16);
			return 1;
			break;
		
		case 69:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2A", 16);
			return 1;
			break;
		
		case 64:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_FIN2B", 16);
			return 1;
			break;
		
		case 65:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2B", 16);
			return 1;
			break;
		
		case 40:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_MRSP", 16);
			return 1;
			break;
		
		case 54:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN1", 16);
			return 1;
			break;
		
		case 55:
			StringCopy(sParam3, "MIFLAUD", 16);
			StringCopy(sParam4, "MIFL_CALL3", 16);
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam2, "LESTER", 16);
			return 1;
			break;
		
		case 56:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_FIN2i", 16);
			return 1;
			break;
		
		case 57:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIN2i", 16);
			return 1;
			break;
		
		case 94:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { func_62("MICS1_IG_4", 3) };
			return 1;
			break;
		
		case 98:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_5", 16);
			return 1;
			break;
		
		case 110:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_9a", 16);
			return 1;
			break;
		
		case 111:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_9b", 16);
			return 1;
			break;
		
		case 103:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS_BEACH", 16);
			return 1;
			break;
		
		case 105:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_7", 16);
			return 1;
			break;
		
		case 106:
			return func_55(105, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 107:
			return func_55(105, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 108:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_8", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		
		case 109:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_8b", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		
		case 114:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_11", 16);
			*uParam5 = 0.15f;
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		
		case 121:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS1_IG_16", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		
		case 122:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { func_62("MICS1_IG_18", 3) };
			*uParam5 = 0f;
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18a"))
			{
				*uParam5 = 0.05f;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18b"))
			{
				*uParam5 = 0.05f;
			}
			if (MISC::ARE_STRINGS_EQUAL(sParam4, "MICS1_IG_18c"))
			{
				*uParam5 = 0.05f;
			}
			return 1;
			break;
		
		case 197:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam2, "LESTER", 16);
			StringCopy(sParam4, "FRAS2_IG_12", 16);
			return 1;
			break;
		
		case 95:
			if (!Global_3)
			{
				StringCopy(sParam1, "MICHAEL", 16);
				StringCopy(sParam4, "PSM_4REST", 16);
				*uParam5 = 0.2f;
				return 1;
			}
			break;
		
		case 96:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_4LUNCHb", 16);
			return 1;
			break;
		
		case 97:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_4LUNCHc", 16);
			*uParam5 = 0.45f;
			return 1;
			break;
		
		case 125:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_HOOKM", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 84:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS_DESERT", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		
		case 151:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_7LUNCHa", 16);
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		
		case 152:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { func_62("MICS3_IG_9", 3) };
			return 1;
		
		case 153:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_5a", 16);
			*uParam5 = 0.2f;
			return 1;
			break;
		
		case 154:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_5b", 16);
			return 1;
			break;
		
		case 155:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_18", 16);
			StringCopy(sParam2, "AMANDA", 16);
			return 1;
			break;
		
		case 157:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_6", 16);
			return 1;
			break;
		
		case 158:
			StringCopy(sParam1, "MICHAEL", 16);
			*sParam4 = { func_62("PSM_7HOOKER", 3) };
			StringCopy(sParam2, "HOOKER", 16);
			return 1;
			break;
		
		case 161:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_13", 16);
			return 1;
			break;
		
		case 115:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM2_COFFEE", 16);
			return 1;
			break;
		
		case 116:
			return func_55(115, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 117:
			return func_55(115, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 162:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM7_COFFEE", 16);
			return 1;
			break;
		
		case 163:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "PSM_7SVHOUSE", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		
		case 166:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_3", 16);
			return 1;
			break;
		
		case 167:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { func_62("PSM_7LOT_C", 3) };
			return 1;
			break;
		
		case 85:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_2", 16);
			return 1;
			break;
		
		case 168:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS3_IG_15", 16);
			return 1;
			break;
		
		case 169:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { func_62("MICS3_IG_11", 3) };
			*uParam5 = 0.2f;
			return 1;
		
		case 170:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "AMANDA", 16);
			*sParam4 = { func_62("MICS3_IG_17", 3) };
			return 1;
		
		case 171:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			StringCopy(sParam4, "PSM_7SHOPb", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 172:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { func_62("MICS3_IG_21", 3) };
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 175:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1", 16);
			return 1;
			break;
		
		case 176:
			return func_55(175, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 181:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1c", 16);
			return 1;
			break;
		
		case 182:
			return func_55(181, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 183:
			return func_55(181, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 179:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_1b", 16);
			return 1;
			break;
		
		case 180:
			return func_55(179, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 220:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam2, "LAMAR", 16);
			StringCopy(sParam4, "FRAS_IG_6_P5", 16);
			return 1;
			break;
		
		case 193:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_2", 16);
			return 1;
			break;
		
		case 194:
			return func_55(193, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 195:
			return func_55(193, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 211:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSF_BIKEa", 16);
			return 1;
			break;
		
		case 213:
			return func_55(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 216:
			return func_55(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 217:
			return func_55(211, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 198:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_3", 16);
			return 1;
			break;
		
		case 199:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "PSM_TRASH", 16);
			return 1;
			break;
		
		case 221:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_IG_8", 16);
			*uParam5 = 0.35f;
			return 1;
			break;
		
		case 208:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_TRAFF", 16);
			return 1;
			break;
		
		case 209:
			return func_55(208, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 210:
			return func_55(208, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 203:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_9", 16);
			return 1;
			break;
		
		case 204:
			return func_55(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 206:
			return func_55(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 207:
			return func_55(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 205:
			return func_55(203, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 226:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_BAR", 16);
			return 1;
			break;
		
		case 227:
			return func_55(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 228:
			return func_55(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 229:
			return func_55(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 230:
			return func_55(226, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 235:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_28b", 16);
			return 1;
			break;
		
		case 239:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12a", 16);
			return 1;
			break;
		
		case 240:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12b", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 241:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12c", 16);
			return 1;
			break;
		
		case 242:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_12d", 16);
			return 1;
			break;
		
		case 246:
			StringCopy(sParam1, "TREVOR", 16);
			*sParam4 = { func_62("TRVS_IG_5", 3) };
			return 1;
			break;
		
		case 247:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_6", 16);
			*uParam5 = 0.45f;
			return 1;
			break;
		
		case 285:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_29", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 278:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_BRDGEWKa", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 279:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_BRDGEWKb", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 280:
			StringCopy(sParam1, "TREVOR", 16);
			if (!Global_3)
			{
				StringCopy(sParam4, "PST_BRDGEWKc", 16);
			}
			else
			{
				StringCopy(sParam4, "PST_MAGDEMO", 16);
			}
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 272:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WSTRIP", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 265:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHb", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 266:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHc", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 267:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHd", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 268:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHe", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 269:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHf", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 270:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_WTRASHg", 16);
			*uParam5 = 0.39f;
			return 1;
			break;
		
		case 255:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_11", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 282:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRb", 16);
			return 1;
			break;
		
		case 248:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_7", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 249:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_8", 16);
			*uParam5 = 0.25f;
			return 1;
			break;
		
		case 281:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRa", 16);
			return 1;
			break;
		
		case 283:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRc", 16);
			return 1;
			break;
		
		case 284:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_CHSCRd", 16);
			return 1;
			break;
		
		case 275:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLa", 16);
			return 1;
			break;
		
		case 276:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLb", 16);
			return 1;
			break;
		
		case 277:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_POLc", 16);
			return 1;
			break;
		
		case 273:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_PARK", 16);
			*uParam5 = 0.5f;
			return 1;
			break;
		
		case 274:
			return func_55(273, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 254:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_9", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 256:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARa", 16);
			return 1;
			break;
		
		case 257:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARb", 16);
			return 1;
			break;
		
		case 258:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIBARc", 16);
			return 1;
			break;
		
		case 259:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_21", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 260:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIYAUGHb", 16);
			return 1;
			break;
		
		case 261:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FIYAUGHc", 16);
			return 1;
			break;
		
		case 286:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_23", 16);
			return 1;
			break;
		
		case 288:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_22", 16);
			*uParam5 = 0.3f;
			return 1;
			break;
		
		case 262:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_19", 16);
			return 1;
			break;
		
		case 263:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_20", 16);
			return 1;
			break;
		
		case 289:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_18", 16);
			*uParam5 = 0.214f;
			return 1;
			break;
		
		case 290:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_HSTRIP", 16);
			return 1;
			break;
		
		case 292:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30a", 16);
			return 1;
			break;
		
		case 293:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30b", 16);
			return 1;
			break;
		
		case 294:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30c", 16);
			return 1;
			break;
		
		case 295:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_30d", 16);
			return 1;
			break;
		
		case 299:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34a", 16);
			return 1;
			break;
		
		case 300:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34b", 16);
			return 1;
			break;
		
		case 301:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34c", 16);
			return 1;
			break;
		
		case 302:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34d", 16);
			return 1;
			break;
		
		case 303:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_34e", 16);
			return 1;
			break;
		
		case 296:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_31", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		
		case 297:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_32", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		
		case 298:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_33", 16);
			StringCopy(sParam2, "FLOYD", 16);
			return 1;
			break;
		
		case 305:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_METH", 16);
			return 1;
			break;
		
		case 306:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_HUNT", 16);
			return 1;
			break;
		
		case 307:
			return func_55(306, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 308:
			return func_55(306, sParam1, sParam2, sParam3, sParam4, uParam5);
			break;
		
		case 309:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_ARMS", 16);
			return 1;
			break;
		
		case 312:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_PIER", 16);
			return 1;
			break;
		
		case 314:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "PST_FLY", 16);
			return 1;
			break;
		
		case 82:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_1", 16);
			*uParam5 = 0.15f;
			return 1;
			break;
		
		case 83:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam4, "MICS2_IG_1", 16);
			return 1;
			break;
		
		case 187:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_2", 16);
			return 1;
			break;
		
		case 287:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_24", 16);
			return 1;
			break;
		
		case 316:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_2c", 16);
			return 1;
			break;
		
		case 311:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam4, "TRVS_IG_27", 16);
			return 1;
			break;
		
		case 215:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS2_IG_7", 16);
			StringCopy(sParam2, "PRLADY", 16);
			return 1;
			break;
		
		case 188:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam4, "FRAS_CRISP", 16);
			*uParam5 = 0.75f;
			return 1;
			break;
	}
	switch (iParam0)
	{
		case 99:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { func_62("PSM_SHOPb_", 3) };
			return 1;
			break;
		
		case 100:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "TRACEY", 16);
			*sParam4 = { func_62("PSM_SHOPc_", 3) };
			return 1;
			break;
		
		case 101:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { func_62("PSM_SHOPd_", 3) };
			return 1;
			break;
		
		case 102:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "JIMMY", 16);
			*sParam4 = { func_62("PSM_SHOPe_", 3) };
			return 1;
			break;
		
		case 131:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "MIC_IG_4", 16);
			*sParam4 = { func_62(sParam4, 3) };
			return 1;
			break;
		
		case 132:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "MIC_IG_4", 16);
			*sParam4 = { func_62(sParam4, 3) };
			return 1;
			break;
		
		case 129:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, "", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, func_57(108, &uVar0, &uVar1, &uVar2), 16);
			return 1;
			break;
		
		case 233:
			StringCopy(sParam1, "FRANKLIN", 16);
			StringCopy(sParam3, "FB3aAUD", 16);
			StringCopy(sParam4, "F3A_INTRO", 16);
			return 1;
			break;
			break;
		
		case 150:
			StringCopy(sParam1, "MICHAEL", 16);
			StringCopy(sParam2, func_56(10), 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "RONEX_IG_5", 16);
			*sParam4 = { func_62(sParam4, 2) };
			return 1;
			break;
			break;
		
		case 234:
			StringCopy(sParam1, "TREVOR", 16);
			StringCopy(sParam3, "FMTAUD", 16);
			StringCopy(sParam4, "TRV_IG_4", 16);
			return 1;
			break;
			break;
	}
	StringCopy(sParam1, "null", 16);
	StringCopy(sParam3, "null", 16);
	StringCopy(sParam4, "null", 16);
	*uParam5 = -1f;
	return 0;
}

char* func_56(int iParam0)//Position - 0xBC6F
{
	switch (iParam0)
	{
		case 0:
			return "JIMMY";
			break;
		
		case 1:
			return "TRACEY";
			break;
		
		case 2:
			return "AMANDA";
			break;
		
		case 3:
			return "MAID";
			break;
		
		case 4:
			return "GARDENER";
			break;
		
		case 5:
			return "DENISE";
			break;
		
		case 6:
			return "LAMAR";
			break;
		
		case 7:
			return "STRETCH";
			break;
		
		case 10:
			return "NERVOUSRON";
			break;
		
		case 8:
			return "MICHAEL";
			break;
		
		case 9:
			return "TREVOR";
			break;
		
		case 11:
			return "PATRICIA";
			break;
		
		case 12:
			return "TREVORMOM";
			break;
		
		case 13:
			return "FLOYD";
			break;
		
		case 14:
			return "WADE";
			break;
	}
	return "NULL";
}

char* func_57(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0xBD70
{
	func_60(uParam2, 85);
	switch (iParam0)
	{
		case 0:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 1:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "MIC4_IG_1";
			break;
		
		case 2:
			func_60(uParam2, 32);
			func_58(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_0";
			break;
		
		case 3:
			func_60(uParam2, 32);
			func_58(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM7_9_1";
			break;
		
		case 4:
			func_60(uParam2, 32);
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_9_2";
			break;
		
		case 19:
			*uParam1 = 0;
			*uParam3 = 1;
			return "";
			break;
		
		case 18:
			*uParam1 = 12;
			*uParam3 = 1;
			return "FMM_0_0";
			break;
		
		case 5:
			func_60(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_2a";
			break;
		
		case 6:
			func_60(uParam2, 2);
			*uParam1 = 22;
			*uParam3 = 1;
			return "FMM_0_2";
			break;
		
		case 7:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 8:
			func_60(uParam2, 2);
			func_58(uParam2, 16);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 9:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_3";
			break;
		
		case 10:
			func_58(uParam2, 64);
			*uParam1 = 4;
			*uParam3 = 1;
			return "FMM_0_6";
			break;
		
		case 11:
			func_58(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "JIM_IG_5";
			break;
		
		case 12:
			func_60(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 13:
			func_60(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 14:
			func_60(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 15:
			func_60(uParam2, 34);
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM_0_8";
			break;
		
		case 16:
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_1";
			break;
		
		case 17:
			func_60(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "JIM_IG_4";
			break;
		
		case 20:
			*uParam1 = 9;
			*uParam3 = 1;
			return "FAMR_IG_2a";
			break;
		
		case 21:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 22:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 23:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 24:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_5";
			break;
		
		case 25:
			func_60(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_0_6";
			break;
		
		case 26:
			func_60(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_3";
			break;
		
		case 32:
			if (!Global_3)
			{
				func_60(uParam2, 2);
				func_58(uParam2, 64);
				*uParam1 = 3;
				*uParam3 = 1;
				return "TRA_IG_5";
			}
			else
			{
				func_60(uParam2, 2);
				func_58(uParam2, 64);
				*uParam1 = 5;
				*uParam3 = 1;
				return "TRA_IG_MD";
			}
			break;
		
		case 27:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 41:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_3";
			break;
		
		case 33:
			func_58(uParam2, 16);
			func_60(uParam2, 8);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 38:
			func_60(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_7";
			break;
		
		case 29:
			func_58(uParam2, 64);
			func_60(uParam2, 8);
			func_60(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_6";
			break;
		
		case 30:
			return func_57(29, uParam1, uParam2, uParam3);
			break;
		
		case 31:
			func_60(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_8";
			break;
		
		case 34:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_9";
			break;
		
		case 35:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_15";
			break;
		
		case 37:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 39:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_1_11";
			break;
		
		case 40:
			*uParam1 = 15;
			*uParam3 = 1;
			return "";
			break;
		
		case 36:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_1";
			break;
		
		case 28:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRA_IG_6";
			break;
		
		case 42:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 43:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 44:
			*uParam1 = 15;
			*uParam3 = 1;
			return "FMM7_1_0";
			break;
		
		case 45:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_1_1";
			break;
		
		case 46:
			func_60(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 47:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 48:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_10";
			break;
		
		case 68:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_10";
			break;
		
		case 49:
			return func_57(140, uParam1, uParam2, uParam3);
			break;
		
		case 50:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_4";
			break;
		
		case 69:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_4";
			break;
		
		case 51:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 52:
			func_58(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 67:
			func_58(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 53:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_8";
			break;
		
		case 54:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_5";
			break;
		
		case 70:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_5";
			break;
		
		case 55:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		
		case 71:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_1";
			break;
		
		case 56:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 57:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 58:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 59:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_11";
			break;
		
		case 72:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_11";
			break;
		
		case 60:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 61:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 62:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 63:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AMr_IG_6";
			break;
		
		case 64:
			*uParam1 = 5;
			*uParam3 = 1;
			return "AM_IG_1";
			break;
		
		case 65:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 66:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 73:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 74:
			func_58(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 75:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_1";
			break;
		
		case 76:
			return func_57(75, uParam1, uParam2, uParam3);
			break;
		
		case 77:
			return func_57(75, uParam1, uParam2, uParam3);
			break;
		
		case 78:
			return func_57(75, uParam1, uParam2, uParam3);
			break;
		
		case 79:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 80:
			*uParam1 = 5;
			*uParam3 = 1;
			return "MA_IG_1b";
			break;
		
		case 81:
			*uParam1 = 3;
			*uParam3 = 1;
			return "MA_IG_2";
			break;
		
		case 82:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 83:
			*uParam1 = 3;
			*uParam3 = 1;
			return "";
			break;
		
		case 84:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_3_0";
			break;
		
		case 85:
			*uParam1 = 6;
			*uParam3 = 1;
			return "FMM7_surface";
			break;
		
		case 86:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM7_window";
			break;
		
		case 87:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_0";
			break;
		
		case 88:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 89:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_4";
			break;
		
		case 90:
			*uParam1 = 5;
			*uParam3 = 1;
			return "FMM_4_3";
			break;
		
		case 91:
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_5";
			break;
		
		case 92:
			*uParam1 = 4;
			*uParam3 = 1;
			return "GAR_IG_6";
			break;
		
		case 93:
			func_60(uParam2, 2);
			*uParam1 = 5;
			*uParam3 = 1;
			return "GAR_IG_7";
			break;
		
		case 94:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_1";
			break;
		
		case 95:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_2";
			break;
		
		case 96:
			*uParam1 = 3;
			*uParam3 = 2;
			return "DEN_IG_3";
			break;
		
		case 97:
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_IG_4";
			break;
		
		case 98:
			func_58(uParam2, 64);
			func_60(uParam2, 130);
			*uParam1 = 5;
			*uParam3 = 2;
			return "DEN_RETURN";
			break;
		
		case 99:
			*uParam1 = 5;
			*uParam3 = 2;
			return "";
			break;
		
		case 100:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_1";
			break;
		
		case 101:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_2";
			break;
		
		case 102:
			func_58(uParam2, 64);
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_3";
			break;
		
		case 103:
			return func_57(102, uParam1, uParam2, uParam3);
			break;
		
		case 104:
			*uParam1 = 3;
			*uParam3 = 4;
			return "RON_IG_4";
			break;
		
		case 105:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_5";
			break;
		
		case 106:
			*uParam1 = 5;
			*uParam3 = 4;
			return "RON_IG_6";
			break;
		
		case 107:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_1";
			break;
		
		case 108:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_2";
			break;
		
		case 109:
			*uParam1 = 5;
			*uParam3 = 4;
			return "MIC_IG_3";
			break;
		
		case 110:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 111:
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 116:
			func_58(uParam2, 64);
			func_60(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_1";
			break;
		
		case 117:
			func_58(uParam2, 64);
			func_60(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_2";
			break;
		
		case 112:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_3";
			break;
		
		case 113:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_4";
			break;
			func_58(uParam2, 64);
			func_58(uParam2, 16);
			func_60(uParam2, 32);
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 114:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_6";
			break;
		
		case 115:
			*uParam1 = 5;
			*uParam3 = 1;
			return "TRV_IG_7";
			break;
		
		case 118:
			*uParam1 = 5;
			*uParam3 = 1;
			return "RONEX_IG_1";
			break;
		
		case 119:
			*uParam1 = 5;
			*uParam3 = 5;
			return "";
			break;
		
		case 120:
			*uParam1 = 5;
			*uParam3 = 7;
			return "";
			break;
		
		case 121:
			*uParam1 = 5;
			*uParam3 = 5;
			return "RONEX_IG_4";
			break;
		
		case 122:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_1";
			break;
		
		case 123:
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_2";
			break;
		
		case 124:
			func_60(uParam2, 32);
			func_58(uParam2, 64);
			*uParam1 = 5;
			*uParam3 = 5;
			return "PAT_IG_3";
			break;
		
		case 125:
			*uParam1 = 5;
			*uParam3 = 4;
			func_58(uParam2, 64);
			return "";
			break;
		
		case 126:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_1";
			break;
		
		case 127:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		
		case 128:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_2";
			break;
		
		case 129:
			*uParam1 = 0;
			*uParam3 = 4;
			return "";
			break;
		
		case 130:
			*uParam1 = 12;
			*uParam3 = 4;
			return "FL_IG_3a";
			break;
		
		case 131:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 132:
			*uParam1 = 5;
			*uParam3 = 4;
			return "";
			break;
		
		case 133:
			return func_57(132, uParam1, uParam2, uParam3);
			break;
		
		case 134:
			return func_57(132, uParam1, uParam2, uParam3);
			break;
		
		case 135:
			*uParam1 = 5;
			*uParam3 = 4;
			return "FL_IG_5";
			break;
		
		case 136:
			*uParam1 = 9;
			*uParam3 = 4;
			return "FL_IG_7";
			break;
		
		case 137:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 138:
			*uParam1 = 5;
			*uParam3 = 1;
			return "";
			break;
		
		case 141:
			*uParam1 = 5;
			*uParam3 = 0;
			return "";
			break;
	}
	*uParam1 = 4294967295;
	*uParam3 = 0;
	return "NULL";
}

void func_58(var uParam0, int iParam1)//Position - 0xCF23
{
	func_59(uParam0, iParam1);
}

void func_59(var uParam0, var uParam1)//Position - 0xCF33
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

void func_60(var uParam0, int iParam1)//Position - 0xCF48
{
	func_61(uParam0, iParam1);
}

void func_61(var uParam0, var uParam1)//Position - 0xCF58
{
	*uParam0 = (*uParam0 || uParam1);
}

struct<4> func_62(char* sParam0, int iParam1)//Position - 0xCF69
{
	struct<4> Var0;
	
	StringCopy(&Var0, sParam0, 16);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iParam1))
	{
		case 0:
			StringConCat(&Var0, "a", 16);
			break;
		
		case 1:
			StringConCat(&Var0, "b", 16);
			break;
		
		case 2:
			StringConCat(&Var0, "c", 16);
			break;
		
		default:
			StringConCat(&Var0, "X", 16);
			break;
	}
	return Var0;
}

void func_63(int iParam0, int iParam1, int iParam2)//Position - 0xCFC5
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	iVar2 = func_67(iVar0, iVar1);
	if (iVar2 != 10)
	{
		func_64(&(Global_19E56.f_469B.f_AF[iVar2 /*19*/].f_5));
		Global_19E56.f_469B.f_AF[iVar2 /*19*/].f_8 = iParam2;
	}
}

void func_64(int iParam0)//Position - 0xD012
{
	func_65(iParam0, 0f);
}

void func_65(int iParam0, float fParam1)//Position - 0xD021
{
	iParam0->f_1 = (func_66(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_66(bool bParam0)//Position - 0xD04F
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = HUD::_0x13C4B962653A5280();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

int func_67(int iParam0, int iParam1)//Position - 0xD0A7
{
	int iVar0;
	
	if ((iParam0 != 0 && iParam0 != 1) && iParam0 != 2)
	{
		if ((iParam1 == 0 || iParam1 == 1) || iParam1 == 2)
		{
			iVar0 = iParam1;
			iParam1 = iParam0;
			iParam0 = iVar0;
		}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 10;
					break;
				
				case 1:
					return 0;
					break;
				
				case 2:
					return 2;
					break;
				
				case 3:
					return 10;
					break;
				
				case 4:
					return 5;
					break;
				
				case 5:
					return 8;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return 0;
					break;
				
				case 1:
					return 10;
					break;
				
				case 2:
					return 1;
					break;
				
				case 3:
					return 3;
					break;
				
				case 4:
					return 6;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2;
					break;
				
				case 1:
					return 1;
					break;
				
				case 2:
					return 10;
					break;
				
				case 3:
					return 4;
					break;
				
				case 4:
					return 7;
					break;
				
				case 5:
					return 10;
					break;
				
				default:
					return 10;
					break;
			}
			break;
	}
	return 10;
}

int func_68(int iParam0)//Position - 0xD231
{
	if (iParam0 == 145)
	{
		return 7;
	}
	if (iParam0 < 157)
	{
		return Global_19E56.f_6D76[iParam0 /*29*/].f_B;
	}
	if (iParam0 == 144)
	{
		return 7;
	}
	if (iParam0 == 157)
	{
		return 6;
	}
	if (iParam0 == 158)
	{
		return 6;
	}
	return 6;
}

int func_69(int iParam0, int iParam1)//Position - 0xD28C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if ((iParam0 >= 157 || iParam1 >= 157) || iParam0 == iParam1)
	{
		return 0;
	}
	iVar0 = func_68(iParam0);
	iVar1 = func_68(iParam1);
	if (iVar0 != 7 && iVar1 != 7)
	{
		iVar2 = func_67(iVar0, iVar1);
		if (iVar2 != 10)
		{
			if (func_70(iVar2) != 4294967295)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_70(int iParam0)//Position - 0xD2F6
{
	if (iParam0 < 9)
	{
		return Global_15C5F[iParam0 /*2*/];
	}
	return 4294967295;
}

int func_71(struct<109> Param0, var uParam1)//Position - 0xD314
{
	uParam1->f_77 = 0;
	switch (Param0.f_2)
	{
		case 0:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1435919172;
			uParam1->f_6E = 1435919172;
			func_73(uParam1);
			uParam1->f_76 = 0;
			return 0;
			break;
		
		case 1:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 0;
			return 1;
			break;
		
		case 2:
			*uParam1 = { Global_16510[0 /*109*/] };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = Global_16B44[0];
			return 1;
			break;
		
		case 3:
			*uParam1 = { Global_16510[1 /*109*/] };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = Global_16B44[1];
			return 1;
			break;
		
		case 4:
			*uParam1 = { Global_16510[2 /*109*/] };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = Global_16B44[2];
			return 1;
			break;
		
		case 5:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = Global_16B44[Param0.f_3];
			return 1;
			break;
		
		case 6:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = Global_16B44[Param0.f_3];
			return 1;
			break;
		
		case 7:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = Global_16B44[Param0.f_3];
			return 1;
			break;
		
		case 8:
		case 9:
		case 10:
			*uParam1 = { Param0 };
			uParam1->f_6D = 936589729;
			uParam1->f_6E = 936589729;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 11:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 14:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 13:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 15:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 54:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 55:
			*uParam1 = { Param0 };
			uParam1->f_6D = 936589729;
			uParam1->f_6E = 936589729;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 56:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 57:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 12:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 451360105;
			func_72(uParam1, 144, 3312640106, 3312640106, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 16:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 17:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 18:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 19:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 20:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 22:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 74:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 67:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 58:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 59:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 60:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 25:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 26:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 27:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 28:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 38:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 40:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 42:
		case 43:
		case 44:
		case 45:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2335118350;
			uParam1->f_6E = 2335118350;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 47:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 49:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 48:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 2500551826;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 50:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 51:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 52:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 66:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 61:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 62:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 63:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 69:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 64:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 65:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 234:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 316:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 315:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 75:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 4059134695;
			func_72(uParam1, 30, 3312640106, 3312640106, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 76:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 4059134695;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 77:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, -0.7035f, -0.0282f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 78:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 79:
		case 80:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 2277090178, 2277090178, Vector(2.6407f, 8.164f, -14.1564f) + Vector(-1f, 0.03f, -2.16f), (-66f + -56f));
			if (Param0.f_2 == 80)
			{
				func_73(uParam1);
			}
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 124:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 82:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 84:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 83:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 85:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 291:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 86:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 87:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 88:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 89:
		case 90:
		case 127:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 91:
		case 92:
		case 93:
		case 104:
		case 81:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			if (Param0.f_2 == 92)
			{
				uParam1->f_76 = 1;
			}
			if (Param0.f_2 == 104)
			{
				uParam1->f_76 = 0;
			}
			if (Param0.f_2 == 81)
			{
				func_73(uParam1);
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 94:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			if (Param0.f_2 == 94)
			{
				func_72(uParam1, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			}
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 95:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 96:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 2106541073;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 134:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 108:
		case 109:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 41:
		case 112:
		case 113:
		case 123:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
		case 148:
		case 149:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 150:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 20, 1785177548, 1785177548, 0.98f, 0.8017f, -0.42f, -180f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 118:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 119:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 120:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 114:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 105:
		case 106:
		case 107:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 2277090178;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 98:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 99:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_72(uParam1, 15, 3312640106, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 100:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_72(uParam1, 15, 3312640106, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 101:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_72(uParam1, 14, 3312640106, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 102:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_72(uParam1, 14, 3312640106, 451360105, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 103:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 121:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 122:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, -2.04f, -0.15f, 0f, 14.4f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 125:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 115:
		case 116:
		case 117:
		case 97:
		case 162:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 110:
		case 111:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 131:
		case 132:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 126:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 128:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 129:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 130:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 133:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 151:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, -1.71f, 1.05f, 0f, -138f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 152:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, 1.1779f, 2.4276f, 0f, 162.1022f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 153:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 154:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 155:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 156:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 14, 1785177548, 1785177548, 0.3427f, 1.1592f, 1.0351f, 139.912f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 157:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 158:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 159:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 160:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 161:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 163:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, -3.03f, -0.72f, 0.08f, 168f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 164:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 165:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 166:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 167:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 14, 3312640106, 1785177548, -0.8472f, 0.155f, 0f, 152.556f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 168:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 169:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 14, 1785177548, 1785177548, -0.3577f, -0.8968f, -0.0003f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 170:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 17, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 171:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 14, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 172:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 15, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 173:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 174:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 0;
			return 1;
			break;
	}
	switch (Param0.f_2)
	{
		case 175:
		case 176:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 177:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 178:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 179:
		case 180:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 181:
		case 182:
		case 183:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 192:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, 1f, 1f, 0f, 0f);
			uParam1->f_76 = 1;
			if (Global_3)
			{
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 193:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 3312640106, 1785177548, 4.2943f, -6.7858f, 0f, -133.5332f);
			uParam1->f_76 = 1;
			if (Global_3)
			{
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 194:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_73(uParam1);
			uParam1->f_76 = 1;
			if (Global_3)
			{
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 195:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_73(uParam1);
			uParam1->f_76 = 1;
			if (Global_3)
			{
				uParam1->f_76 = 1;
			}
			return 1;
			break;
		
		case 198:
		case 199:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 200:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 201:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 202:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 184:
		case 185:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 186:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 187:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 188:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 189:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 190:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 191:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 196:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 43, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 197:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 203:
		case 206:
		case 207:
		case 204:
		case 205:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			if (Param0.f_2 != 205)
			{
				uParam1->f_70 = { 3.4381f, -0.8269f, 0f };
				uParam1->f_73 = -87.6612f;
			}
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 23:
		case 208:
		case 209:
		case 210:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 24:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 211:
		case 213:
		case 216:
		case 217:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 212:
		case 214:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
			break;
		
		case 215:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, 3.4381f, -0.8269f, 0f, -87.6612f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 221:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, -0.7949f, -0.508f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 222:
		case 223:
		case 224:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 226:
		case 227:
		case 228:
		case 229:
		case 230:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 218:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 219:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 19, 1785177548, 1785177548, 1.29f, 1.41f, 0f, 57.52f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 220:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 19, 1785177548, 1785177548, 0.5504f, -0.2322f, 0f, -9.9741f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 225:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 19, 1785177548, 1785177548, 1.23f, 0.6f, -1f, 34.56f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 231:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 0;
			return 1;
			break;
		
		case 232:
		case 233:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 235:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 236:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 237:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, 1.5033f, 1.2118f, 0f, -78.0449f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 238:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 239:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 240:
		case 241:
		case 242:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 273:
		case 274:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 245:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 250:
		case 251:
		case 252:
		case 253:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 243:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 244:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 271:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 280:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			uParam1->f_76 = 1;
			func_73(uParam1);
			return 1;
			break;
		
		case 272:
		case 265:
		case 266:
		case 267:
		case 268:
		case 269:
		case 270:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			uParam1->f_76 = 1;
			func_73(uParam1);
			if (Param0.f_2 == 265)
			{
				uParam1->f_76 = 1;
			}
			if (Param0.f_2 == 268)
			{
				uParam1->f_76 = 0;
			}
			if (Param0.f_2 == 267)
			{
				func_72(uParam1, 144, 3312640106, 2106541073, -2.4166f, -0.15f, 0f, -148.7555f);
			}
			if (Param0.f_2 == 266)
			{
				func_72(uParam1, 144, 2106541073, 2106541073, -5.7915f, -11.0439f, 0.67f, -72.589f);
			}
			return 1;
			break;
		
		case 246:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 247:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 263:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 278:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 279:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 264:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 255:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 248:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 249:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f));
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 281:
		case 282:
		case 283:
		case 284:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 4059134695;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 275:
		case 276:
		case 277:
			*uParam1 = { Param0 };
			uParam1->f_6D = 4059134695;
			uParam1->f_6E = 4059134695;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
		
		case 254:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 285:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 256:
		case 257:
		case 258:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 259:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 260:
		case 261:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 286:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 287:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 288:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 262:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 289:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 144, 2277090178, 2277090178, -3.264f, -14.7895f, 14.1815f, -0.6311f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 290:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 292:
		case 295:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 293:
		case 294:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 32, 1785177548, 1785177548, 0f, 0f, 0f, 0f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 299:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 300:
		case 301:
		case 302:
		case 303:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 32, 1785177548, 1785177548, 0.24f, 0.33f, -0.5f, -11.88f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 296:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 32, 1785177548, 1785177548, 1.41f, 1.35f, 0f, 168f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 297:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 32, 1785177548, 1785177548, 1.7491f, 0.6423f, 0f, 166.479f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 298:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_72(uParam1, 32, 1785177548, 1785177548, 0.72f, -0.69f, 0f, 172.44f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 304:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 305:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2277090178;
			uParam1->f_6E = 2277090178;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 306:
		case 307:
		case 308:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 309:
			*uParam1 = { Param0 };
			uParam1->f_6D = 3312640106;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 310:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 311:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1785177548;
			uParam1->f_6E = 1785177548;
			func_73(uParam1);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 312:
			*uParam1 = { Param0 };
			uParam1->f_6D = 1630799643;
			uParam1->f_6E = 1630799643;
			func_72(uParam1, 144, 474215631, 2775823996, -9.5443f, -3.191f, -0.3f, 180f);
			uParam1->f_76 = 1;
			return 1;
			break;
		
		case 313:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2106541073;
			uParam1->f_6E = 3312640106;
			func_73(uParam1);
			uParam1->f_76 = 0;
			return 1;
			break;
		
		case 314:
			*uParam1 = { Param0 };
			uParam1->f_6D = 2477085294;
			uParam1->f_6E = 2477085294;
			func_73(uParam1);
			uParam1->f_76 = 2;
			return 1;
			break;
	}
	*uParam1 = { Param0 };
	uParam1->f_6D = 1435919172;
	uParam1->f_6E = 1435919172;
	func_73(uParam1);
	uParam1->f_76 = 0;
	return 0;
}

void func_72(var uParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam5)//Position - 0x10692
{
	uParam0->f_6F = iParam1;
	uParam0->f_74 = iParam2;
	uParam0->f_75 = iParam3;
	uParam0->f_70 = { vParam4 };
	uParam0->f_73 = fParam5;
}

void func_73(var uParam0)//Position - 0x106BC
{
	func_72(uParam0, 145, 1435919172, 1435919172, 0f, 0f, 0f, 0f);
}

int func_74(int iParam0)//Position - 0x106DA
{
	if ((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((((Global_19E56.f_4849[iParam0] == 11 || Global_19E56.f_4849[iParam0] == 8) || Global_19E56.f_4849[iParam0] == 9) || Global_19E56.f_4849[iParam0] == 10) || Global_19E56.f_4849[iParam0] == 13) || Global_19E56.f_4849[iParam0] == 14) || Global_19E56.f_4849[iParam0] == 15) || Global_19E56.f_4849[iParam0] == 12) || Global_19E56.f_4849[iParam0] == 16) || Global_19E56.f_4849[iParam0] == 17) || Global_19E56.f_4849[iParam0] == 21) || Global_19E56.f_4849[iParam0] == 18) || Global_19E56.f_4849[iParam0] == 19) || Global_19E56.f_4849[iParam0] == 20) || Global_19E56.f_4849[iParam0] == 22) || Global_19E56.f_4849[iParam0] == 23) || Global_19E56.f_4849[iParam0] == 24) || Global_19E56.f_4849[iParam0] == 67) || Global_19E56.f_4849[iParam0] == 25) || Global_19E56.f_4849[iParam0] == 26) || Global_19E56.f_4849[iParam0] == 27) || Global_19E56.f_4849[iParam0] == 28) || Global_19E56.f_4849[iParam0] == 29) || Global_19E56.f_4849[iParam0] == 30) || Global_19E56.f_4849[iParam0] == 31) || Global_19E56.f_4849[iParam0] == 32) || Global_19E56.f_4849[iParam0] == 33) || Global_19E56.f_4849[iParam0] == 34) || Global_19E56.f_4849[iParam0] == 35) || Global_19E56.f_4849[iParam0] == 36) || Global_19E56.f_4849[iParam0] == 37) || Global_19E56.f_4849[iParam0] == 58) || Global_19E56.f_4849[iParam0] == 59) || Global_19E56.f_4849[iParam0] == 60) || Global_19E56.f_4849[iParam0] == 38) || Global_19E56.f_4849[iParam0] == 39) || Global_19E56.f_4849[iParam0] == 40) || Global_19E56.f_4849[iParam0] == 41) || Global_19E56.f_4849[iParam0] == 42) || Global_19E56.f_4849[iParam0] == 43) || Global_19E56.f_4849[iParam0] == 44) || Global_19E56.f_4849[iParam0] == 45) || Global_19E56.f_4849[iParam0] == 46) || Global_19E56.f_4849[iParam0] == 47) || Global_19E56.f_4849[iParam0] == 49) || Global_19E56.f_4849[iParam0] == 48) || Global_19E56.f_4849[iParam0] == 50) || Global_19E56.f_4849[iParam0] == 51) || Global_19E56.f_4849[iParam0] == 52) || Global_19E56.f_4849[iParam0] == 66) || Global_19E56.f_4849[iParam0] == 53) || Global_19E56.f_4849[iParam0] == 54) || Global_19E56.f_4849[iParam0] == 55) || Global_19E56.f_4849[iParam0] == 56) || Global_19E56.f_4849[iParam0] == 57) || Global_19E56.f_4849[iParam0] == 61) || Global_19E56.f_4849[iParam0] == 62) || Global_19E56.f_4849[iParam0] == 63) || Global_19E56.f_4849[iParam0] == 68) || Global_19E56.f_4849[iParam0] == 69) || Global_19E56.f_4849[iParam0] == 64) || Global_19E56.f_4849[iParam0] == 65) || Global_19E56.f_4849[iParam0] == 70) || Global_19E56.f_4849[iParam0] == 71) || Global_19E56.f_4849[iParam0] == 72) || Global_19E56.f_4849[iParam0] == 73) || Global_19E56.f_4849[iParam0] == 74)
	{
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 36)
		{
			if (Global_19E56.f_4849[1] == 37)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 37)
		{
			if (Global_19E56.f_4849[0] == 36)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 58)
		{
			if (Global_19E56.f_4849[2] == 59)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_19E56.f_4849[2] == 59)
		{
			if (Global_19E56.f_4849[0] == 58)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 46)
		{
			if (Global_19E56.f_4849[1] == 47)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 47)
		{
			if (Global_19E56.f_4849[0] == 46)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 1 && Global_19E56.f_4849[1] == 25)
		{
			if (Global_19E56.f_4849[2] == 26)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_19E56.f_4849[2] == 26)
		{
			if (Global_19E56.f_4849[1] == 25)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		if (iParam0 == 1 && (((Global_19E56.f_4849[1] == 42 || Global_19E56.f_4849[1] == 43) || Global_19E56.f_4849[1] == 44) || Global_19E56.f_4849[1] == 45))
		{
			if (((Global_19E56.f_4849[2] == 42 || Global_19E56.f_4849[2] == 43) || Global_19E56.f_4849[2] == 44) || Global_19E56.f_4849[2] == 45)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && (((Global_19E56.f_4849[2] == 42 || Global_19E56.f_4849[2] == 43) || Global_19E56.f_4849[2] == 44) || Global_19E56.f_4849[2] == 45))
		{
			if (((Global_19E56.f_4849[1] == 42 || Global_19E56.f_4849[1] == 43) || Global_19E56.f_4849[1] == 44) || Global_19E56.f_4849[1] == 45)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_19E56.f_4849[1] == 16)
		{
			if (Global_19E56.f_4849[0] == 17)
			{
				Global_19E56.f_4849[0] = 318;
			}
		}
		else if (iParam0 == 0 && Global_19E56.f_4849[0] == 17)
		{
			if (Global_19E56.f_4849[1] == 16)
			{
				Global_19E56.f_4849[1] = 318;
			}
		}
		if (iParam0 == 2 && Global_19E56.f_4849[2] == 30)
		{
			if (Global_19E56.f_4849[1] == 19)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 19)
		{
			if (Global_19E56.f_4849[2] == 30)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 21)
		{
			if (Global_19E56.f_4849[1] == 20)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 20)
		{
			if (Global_19E56.f_4849[0] == 21)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 1 && Global_19E56.f_4849[1] == 38)
		{
			if (Global_19E56.f_4849[2] == 39)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_19E56.f_4849[2] == 39)
		{
			if (Global_19E56.f_4849[1] == 38)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_19E56.f_4849[1] == 29)
		{
			if (Global_19E56.f_4849[2] == 15)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_19E56.f_4849[2] == 15)
		{
			if (Global_19E56.f_4849[1] == 29)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		if (iParam0 == 1 && Global_19E56.f_4849[1] == 56)
		{
			if (Global_19E56.f_4849[2] == 57)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_19E56.f_4849[2] == 57)
		{
			if (Global_19E56.f_4849[1] == 56)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 68)
		{
			if (Global_19E56.f_4849[2] == 69)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_19E56.f_4849[2] == 69)
		{
			if (Global_19E56.f_4849[0] == 68)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 64)
		{
			if (Global_19E56.f_4849[2] == 65)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_19E56.f_4849[2] == 65)
		{
			if (Global_19E56.f_4849[0] == 64)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 72)
		{
			if (Global_19E56.f_4849[1] == 73)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 73)
		{
			if (Global_19E56.f_4849[0] == 72)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 2 && Global_19E56.f_4849[2] == 51)
		{
			if (Global_19E56.f_4849[1] == 50)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 50)
		{
			if (Global_19E56.f_4849[2] == 51)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 52)
		{
			if (Global_19E56.f_4849[1] == 66)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 66)
		{
			if (Global_19E56.f_4849[0] == 52)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 61)
		{
			if (Global_19E56.f_4849[1] == 31)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 31)
		{
			if (Global_19E56.f_4849[0] == 61)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
		}
		if (iParam0 == 0 && Global_19E56.f_4849[0] == 62)
		{
			if (Global_19E56.f_4849[1] == 53)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
			if (Global_19E56.f_4849[2] == 54)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 1 && Global_19E56.f_4849[1] == 53)
		{
			if (Global_19E56.f_4849[0] == 62)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
			if (Global_19E56.f_4849[2] == 54)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[2]));
				Global_19E56.f_4849[2] = 318;
			}
		}
		else if (iParam0 == 2 && Global_19E56.f_4849[2] == 54)
		{
			if (Global_19E56.f_4849[0] == 62)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[0]));
				Global_19E56.f_4849[0] = 318;
			}
			if (Global_19E56.f_4849[1] == 53)
			{
				func_7(&(Global_19E56.f_933.f_21B.f_8E4[1]));
				Global_19E56.f_4849[1] = 318;
			}
		}
		Global_16A10 = 4294967295;
		Global_19E56.f_4849[iParam0] = 318;
		return 1;
	}
	Global_16A10 = 4294967295;
	return 0;
}

int func_75(int iParam0, int iParam1)//Position - 0x1184C
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4;
	while (iVar0 > 0)
	{
		Global_19E56.f_4849.f_4[iParam0 /*6*/][iVar0] = Global_19E56.f_4849.f_4[iParam0 /*6*/][(iVar0 - 1)];
		iVar0 = (iVar0 - 1);
	}
	Global_19E56.f_4849.f_4[iParam0 /*6*/][0] = iParam1;
	if (func_76(iParam1, &iVar1))
	{
		MISC::SET_BIT(&(Global_19E56.f_4849.f_17), iVar1);
	}
	return 1;
}

int func_76(int iParam0, var uParam1)//Position - 0x118B7
{
	switch (iParam0)
	{
		case 114:
			*uParam1 = 1;
			return 1;
			break;
		
		case 108:
			*uParam1 = 2;
			return 1;
			break;
		
		case 109:
			*uParam1 = 3;
			return 1;
			break;
		
		case 110:
			*uParam1 = 4;
			return 1;
			break;
		
		case 218:
			*uParam1 = 5;
			return 1;
			break;
		
		case 221:
			*uParam1 = 6;
			return 1;
			break;
		
		case 187:
			*uParam1 = 7;
			return 1;
			break;
		
		case 196:
			*uParam1 = 8;
			return 1;
			break;
		
		case 197:
			*uParam1 = 9;
			return 1;
			break;
		
		case 246:
			*uParam1 = 10;
			return 1;
			break;
		
		case 283:
			*uParam1 = 11;
			return 1;
			break;
		
		case 124:
			*uParam1 = 12;
			return 1;
			break;
		
		case 8:
			*uParam1 = 13;
			return 1;
			break;
		
		case 9:
			*uParam1 = 13;
			return 1;
			break;
		
		case 10:
			*uParam1 = 13;
			return 1;
			break;
	}
	*uParam1 = 4294967295;
	return 0;
}

int func_77(int iParam0)//Position - 0x119D2
{
	if (Global_19E56.f_4849[iParam0] == 32)
	{
		func_19(&(Global_19E56.f_933.f_21B), 0, 34);
		return 1;
	}
	if (Global_19E56.f_4849[iParam0] == 74)
	{
		func_19(&(Global_19E56.f_933.f_21B), 0, 72);
		func_19(&(Global_19E56.f_933.f_21B), 1, 73);
		return 1;
	}
	return 0;
}

void func_78(int iParam0)//Position - 0x11A39
{
	if (iParam0 == 0)
	{
		Global_258B09 = 0;
	}
	Global_1406D2.f_12 = iParam0;
}

int func_79(var uParam0)//Position - 0x11A54
{
	float fVar0;
	char* sVar1;
	char[] cVar2[8];
	
	if (!func_80())
	{
	}
	else
	{
		return 1;
	}
	fVar0 = -1f;
	if (STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
	{
		fVar0 = (SYSTEM::TO_FLOAT(STREAMING::GET_PLAYER_SWITCH_STATE()) / SYSTEM::TO_FLOAT(9));
	}
	if (func_551(uParam0->f_2, &sVar1, &cVar2))
	{
		if (fVar0 >= 1f)
		{
			return 1;
		}
		return 0;
	}
	if (fVar0 >= 0.95f)
	{
		return 1;
	}
	return 0;
}

int func_80()//Position - 0x11AB5
{
	if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
	{
		return 0;
	}
	if (STREAMING::GET_PLAYER_SWITCH_STATE() > 8)
	{
		if (STREAMING::GET_PLAYER_SWITCH_STATE() != 11)
		{
			return 0;
		}
		if (STREAMING::GET_PLAYER_SWITCH_STATE() == 11)
		{
			if (STREAMING::SET_PLAYER_INVERTED_UP() > 0)
			{
				if (STREAMING::_0x5B48A06DD0E792A5() > 100)
				{
					return 0;
				}
			}
		}
	}
	return 1;
}

int func_81()//Position - 0x11B0A
{
	func_84(AUDIO::_0x0626A247D2405330());
	func_82(1);
	return 1;
}

void func_82(bool bParam0)//Position - 0x11B20
{
	CAM::CUSTOM_MENU_COORDINATES(0f);
	CAM::_0x0225778816FDC28C(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
	unk_0x3B35C0FF76598EE9(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(1);
	AUDIO::_0x12561FCBB62D5B9C(0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_9181))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_9181))
		{
			AUDIO::STOP_AUDIO_SCENE(&Global_9181);
		}
	}
	if (CAM::DOES_CAM_EXIST(Global_9176))
	{
		if (CAM::IS_CAM_SHAKING(Global_9176))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_9176, 0f);
			CAM::STOP_CAM_SHAKING(Global_9176, 1);
		}
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (bParam0)
	{
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != 4294967295 || GRAPHICS::_0x459FD2C8D0AB78BC() != 4294967295)
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		}
	}
	Global_917C = 0f;
	StringCopy(&Global_917D, "", 16);
	StringCopy(&Global_9181, "", 64);
	StringCopy(&Global_9191, "", 16);
	func_83();
}

void func_83()//Position - 0x11BFC
{
	Global_9175 = 0;
	Global_9176 = 0;
	Global_9177 = 0;
	Global_9178 = 30000;
	Global_9179 = 0f;
	Global_917B = 0f;
	Global_917A = 0f;
	Global_917C = 0f;
	StringCopy(&Global_917D, "", 16);
}

void func_84(int iParam0)//Position - 0x11C2E
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
	iVar0 = func_92(iParam0);
	if (!iVar0 == 4294967295)
	{
		iVar1 = Global_90C2[iVar0 /*5*/];
		func_87(1, iVar1, 1);
		return;
	}
	iVar2 = func_86(iParam0);
	if (iVar2 == 4294967295)
	{
		return;
	}
	func_85(iVar2);
}

void func_85(int iParam0)//Position - 0x11C87
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

int func_86(int iParam0)//Position - 0x11D0A
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

void func_87(int iParam0, int iParam1, int iParam2)//Position - 0x11D3B
{
	func_88(iParam0, iParam1, iParam2, 0, 0, 1);
}

void func_88(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x11D50
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
	if (func_90(iParam0, iParam1, iParam2))
	{
		return;
	}
	iVar0 = func_89();
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

int func_89()//Position - 0x11DD2
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

int func_90(int iParam0, int iParam1, int iParam2)//Position - 0x11E03
{
	if (func_91(iParam0, iParam1, iParam2) == 4294967295)
	{
		return 0;
	}
	return 1;
}

int func_91(int iParam0, int iParam1, int iParam2)//Position - 0x11E1E
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

int func_92(int iParam0)//Position - 0x11E6A
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

void func_93(var uParam0)//Position - 0x11EB3
{
	if (!PED::IS_PED_INJURED((*uParam0)[uParam0->f_5]))
	{
		PED::SET_PED_CAN_BE_TARGETTED((*uParam0)[uParam0->f_5], false);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH((*uParam0)[uParam0->f_5], 1862763509);
	}
}

int func_94(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x11EE9
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	char cVar6[64];
	int iVar7;
	var uVar8;
	char* sVar9;
	
	if (!uParam0->f_27)
	{
		if (uParam0->f_7 == 4)
		{
			return 1;
		}
	}
	if ((!PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) && (*uParam0)[uParam0->f_7] != AUDIO::_0x0626A247D2405330())
	{
		if (!bParam2)
		{
			if ((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) && !FIRE::IS_ENTITY_ON_FIRE(AUDIO::_0x0626A247D2405330())) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(AUDIO::_0x0626A247D2405330()))
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY(AUDIO::_0x0626A247D2405330());
			}
			else
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
			}
			if ((PED::IS_PED_RAGDOLL((*uParam0)[uParam0->f_7]) && !FIRE::IS_ENTITY_ON_FIRE((*uParam0)[uParam0->f_7])) && !PED::IS_PED_GETTING_INTO_A_VEHICLE((*uParam0)[uParam0->f_7]))
			{
				BRAIN::CLEAR_PED_TASKS_IMMEDIATELY((*uParam0)[uParam0->f_7]);
			}
			else
			{
				NETWORK::_0x5E3AA4CA2B6FB0EE((*uParam0)[uParam0->f_7]);
			}
		}
		iVar0 = AUDIO::_0x0626A247D2405330();
		iVar1 = func_11();
		if (!uParam0->f_17)
		{
			func_144(iVar0, 0);
		}
		func_142(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = func_528(uParam0->f_7);
		func_144((*uParam0)[uParam0->f_7], 0);
		fVar3 = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH((*uParam0)[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH((*uParam0)[uParam0->f_7])) - 100f)) * 100f);
		switch (func_15(AUDIO::_0x0626A247D2405330()))
		{
			case 0:
				if (GRAPHICS::_GET_SCREEN_EFFECT_IS_ACTIVE("BulletTime"))
				{
					GRAPHICS::_STOP_SCREEN_EFFECT("BulletTime");
				}
				if (GRAPHICS::_GET_SCREEN_EFFECT_IS_ACTIVE("BulletTimeOut"))
				{
					GRAPHICS::_STOP_SCREEN_EFFECT("BulletTimeOut");
				}
				break;
			
			case 1:
				if (GRAPHICS::_GET_SCREEN_EFFECT_IS_ACTIVE("DrivingFocus"))
				{
					GRAPHICS::_STOP_SCREEN_EFFECT("DrivingFocus");
				}
				if (GRAPHICS::_GET_SCREEN_EFFECT_IS_ACTIVE("DrivingFocusOut"))
				{
					GRAPHICS::_STOP_SCREEN_EFFECT("DrivingFocusOut");
				}
				break;
			
			case 2:
				if (GRAPHICS::_GET_SCREEN_EFFECT_IS_ACTIVE("REDMIST"))
				{
					GRAPHICS::_STOP_SCREEN_EFFECT("REDMIST");
				}
				if (GRAPHICS::_GET_SCREEN_EFFECT_IS_ACTIVE("REDMISTOut"))
				{
					GRAPHICS::_STOP_SCREEN_EFFECT("REDMISTOut");
				}
				break;
		}
		if (func_14(func_11()))
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
			}
		}
		PLAYER::CHANGE_PLAYER_PED(CAM::_0xDC9DA9E8789F5246(), (*uParam0)[uParam0->f_7], bParam2, 0);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		if (iParam3 & 1 != 0)
		{
			PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 210, false);
		}
		if (func_139(0) || func_139(3))
		{
			if (Global_434C.f_D)
			{
				iVar4 = 0;
				while (iVar4 < 7)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1486F[iVar4 /*5*/].f_1, 2))
					{
						iVar5 = Global_1486F[iVar4 /*5*/];
						StringCopy(&cVar6, "MISS_SWITCH_", 64);
						StringConCat(&cVar6, &(Global_14893[Global_11732.f_6D[iVar5 /*4*/] /*34*/]), 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&cVar6), 1f);
					}
					iVar4++;
				}
			}
		}
		Global_434C.f_D = 0;
		uParam0->f_5 = func_594(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = func_594(iVar2);
		uParam0->f_7 = 4;
		iVar7 = AUDIO::_0x0626A247D2405330();
		ENTITY::SET_ENTITY_VISIBLE(AUDIO::_0x0626A247D2405330(), true, 0);
		func_138(iVar7);
		PED::_0xE861D0B05C7662B8(iVar7, 0, 0);
		if (fVar3 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(AUDIO::_0x0626A247D2405330()))
		{
			unk_0x65E471E4A2D56226(AUDIO::_0x0626A247D2405330(), SYSTEM::ROUND((((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(AUDIO::_0x0626A247D2405330())) - 100f)) + 100f)), 0);
		}
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				ENTITY::SET_ENTITY_VISIBLE(iVar0, true, 0);
				func_138(iVar0);
				PED::_0xE861D0B05C7662B8(iVar0, 0, 0);
				PED::SET_PED_STEALTH_MOVEMENT(iVar0, 0, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			sVar9 = ENTITY::GET_ENTITY_SCRIPT(iVar0, &uVar8);
			if (!MISC::IS_STRING_NULL(sVar9))
			{
				if (!MISC::ARE_STRINGS_EQUAL(sVar9, SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, false, 1);
				}
				PED::DELETE_PED(&iVar0);
			}
		}
		Global_161F1 = 1;
		func_136(AUDIO::_0x0626A247D2405330());
		func_135();
		func_134(iVar2);
		func_125();
		func_119(iVar2);
		func_102(func_117(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(CAM::_0xDC9DA9E8789F5246());
		unk_0xF82197F205B9D8FD(AUDIO::_0x0626A247D2405330(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(AUDIO::_0x0626A247D2405330(), 1);
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(CAM::_0xDC9DA9E8789F5246(), func_101(67));
		}
		if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::_0xD2B315B6689D537D(CAM::_0xDC9DA9E8789F5246(), func_101(68));
		}
		func_98(iVar2, &iVar7);
		if (((func_13(0) || func_13(3)) || func_13(2)) || func_13(4))
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, false);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar7, 32, true);
			PED::SET_PED_CONFIG_FLAG(iVar7, 250, true);
		}
		if (!func_97())
		{
			func_95();
		}
		Global_16086 = 0;
		return 1;
	}
	else
	{
		if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
		}
		if (PED::IS_PED_INJURED((*uParam0)[uParam0->f_7]))
		{
		}
		if (AUDIO::_0x0626A247D2405330() == (*uParam0)[uParam0->f_7])
		{
		}
	}
	return 0;
}

void func_95()//Position - 0x123C7
{
	if (Global_1620F)
	{
		func_12();
		GRAPHICS::_0xBF59707B3E5ED531(func_96(Global_19E56.f_933.f_21B.f_10CD));
	}
	else
	{
		GRAPHICS::_0xBF59707B3E5ED531("");
	}
}

char* func_96(int iParam0)//Position - 0x123F9
{
	iParam0 = iParam0;
	return "";
}

bool func_97()//Position - 0x12408
{
	return Global_434A;
}

void func_98(int iParam0, int iParam1)//Position - 0x12413
{
	switch (iParam0)
	{
		case 0:
			func_99(4, *iParam1);
			func_99(7, *iParam1);
			func_99(8, *iParam1);
			func_99(11, *iParam1);
			break;
		
		case 1:
			if (Global_19E56.f_2361.f_14A[2 /*6*/])
			{
				func_99(4, *iParam1);
			}
			func_99(7, *iParam1);
			func_99(8, *iParam1);
			func_99(11, *iParam1);
			if (Global_19E56.f_2361.f_63.f_3A[126])
			{
				func_99(12, *iParam1);
			}
			break;
		
		case 2:
			if (Global_19E56.f_2361.f_14A[20 /*6*/])
			{
				func_99(4, *iParam1);
			}
			func_99(7, *iParam1);
			func_99(8, *iParam1);
			func_99(11, *iParam1);
			break;
	}
}

void func_99(int iParam0, int iParam1)//Position - 0x124DF
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (func_100(iParam0, iParam1))
	{
		return;
	}
	if (Global_89A8[iParam0 /*31*/].f_18 < 5)
	{
		Global_89A8[iParam0 /*31*/].f_19[Global_89A8[iParam0 /*31*/].f_18] = iParam1;
		Global_89A8[iParam0 /*31*/].f_18++;
	}
	else
	{
		bVar2 = false;
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = Global_89A8[iParam0 /*31*/].f_19[iVar0];
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_INJURED(iVar1))
			{
				Global_89A8[iParam0 /*31*/].f_19[iVar0] = iParam1;
				bVar2 = true;
				iVar0 = 6;
			}
			iVar0++;
		}
		if (!bVar2)
		{
		}
	}
}

int func_100(int iParam0, int iParam1)//Position - 0x12591
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_89A8[iParam0 /*31*/].f_18)
	{
		if (iParam1 == Global_89A8[iParam0 /*31*/].f_19[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_101(int iParam0)//Position - 0x125CA
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

void func_102(int iParam0)//Position - 0x125F7
{
	if (iParam0 == 10)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&(Global_7CA0[(38 / 32)]), (38 % 32));
			func_103(38, 0);
			MISC::SET_BIT(&(Global_7CA0[(41 / 32)]), (41 % 32));
			func_103(41, 0);
			MISC::SET_BIT(&(Global_7CA0[(43 / 32)]), (43 % 32));
			func_103(43, 0);
			MISC::SET_BIT(&(Global_7CA0[(42 / 32)]), (42 % 32));
			func_103(42, 0);
			MISC::SET_BIT(&(Global_7CA0[(44 / 32)]), (44 % 32));
			func_103(44, 0);
			break;
		
		case 1:
			MISC::SET_BIT(&(Global_7CA0[(51 / 32)]), (51 % 32));
			func_103(51, 0);
			break;
		
		case 2:
			MISC::SET_BIT(&(Global_7CA0[(51 / 32)]), (51 % 32));
			func_103(51, 0);
			break;
		
		case 3:
			MISC::SET_BIT(&(Global_7CA0[(53 / 32)]), (53 % 32));
			func_103(53, 0);
			break;
		
		case 4:
			MISC::SET_BIT(&(Global_7CA0[(81 / 32)]), (81 % 32));
			func_103(81, 0);
			MISC::SET_BIT(&(Global_7CA0[(82 / 32)]), (82 % 32));
			func_103(82, 0);
			break;
		
		case 5:
			MISC::SET_BIT(&(Global_7CA0[(47 / 32)]), (47 % 32));
			func_103(47, 0);
			MISC::SET_BIT(&(Global_7CA0[(50 / 32)]), (50 % 32));
			func_103(50, 0);
			break;
		
		case 6:
			MISC::SET_BIT(&(Global_7CA0[(50 / 32)]), (50 % 32));
			func_103(50, 0);
			break;
	}
}

void func_103(int iParam0, int iParam1)//Position - 0x12787
{
	int iVar0;
	
	if (iParam0 != 226)
	{
		if (Global_11625)
		{
			iVar0 = Global_252F9E.f_4B[iParam0];
		}
		else
		{
			iVar0 = Global_19E56.f_1C41[iParam0];
		}
		if (iVar0 != iParam1 || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA0[(iParam0 / 32)], (iParam0 % 32)))
		{
			if ((((iParam1 == 4 || iParam1 == 3) || iParam1 == 5) || iParam1 == 6) || iParam1 == 2)
			{
				MISC::SET_BIT(&(Global_7CA9[(iParam0 / 32)]), (iParam0 % 32));
				Global_7E78[iParam0] = iParam1;
			}
			else if (Global_11625)
			{
				Global_252F9E.f_4B[iParam0] = iParam1;
			}
			else
			{
				Global_19E56.f_1C41[iParam0] = iParam1;
			}
			MISC::SET_BIT(&(Global_7CA0[(iParam0 / 32)]), (iParam0 % 32));
			func_105(iParam0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA0[(iParam0 / 32)], (iParam0 % 32)))
			{
				func_104(iParam0);
			}
		}
	}
}

void func_104(int iParam0)//Position - 0x12880
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_804F.f_E4[(iParam0 / 32)], (iParam0 % 23)))
	{
		MISC::SET_BIT(&(Global_804F.f_E4[(iParam0 / 32)]), (iParam0 % 23));
		Global_804F[Global_804F.f_E3] = iParam0;
		Global_804F.f_E3++;
	}
}

void func_105(int iParam0)//Position - 0x128CE
{
	struct<7> Var0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	
	if (!func_114())
	{
		return;
	}
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return;
	}
	Var0 = { func_113(iParam0) };
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var0.f_4, 2))
	{
		func_110(iParam0, &Var0);
	}
	if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return;
		}
	}
	bVar1 = false;
	bVar2 = false;
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true), true);
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA9[(iParam0 / 32)], (iParam0 % 32)) && Global_7E78[iParam0] == 2) && fVar4 > 210f)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_7CA9[(iParam0 / 32)]), (iParam0 % 32));
		Global_7CB2[iParam0] = 0;
	}
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning")) == 0)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7D95[(iParam0 / 32)], (iParam0 % 32)))
		{
			if (fVar4 < 25f)
			{
				if (Global_16C64.f_145 == 0)
				{
					if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
					{
						Global_16C64.f_145 = INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330());
					}
				}
				iVar5 = Global_16C64.f_145;
				iVar6 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
				if (iVar5 == iVar6 && iVar5 != 0)
				{
					MISC::SET_BIT(&(Global_7CA9[(iParam0 / 32)]), (iParam0 % 32));
					Global_7E78[iParam0] = 3;
					MISC::SET_BIT(&(Global_7CA0[(iParam0 / 32)]), (iParam0 % 32));
				}
			}
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_7D95[(iParam0 / 32)]), (iParam0 % 32));
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA9[(iParam0 / 32)], (iParam0 % 32)))
	{
		iVar3 = Global_7E78[iParam0];
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var0.f_4, 0))
	{
		if (Global_19E56.f_2361)
		{
			iVar3 = func_107(iParam0);
		}
		else
		{
			iVar3 = 0;
		}
		if (func_13(14))
		{
			iVar3 = 0;
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon")) == 0)
	{
		if (func_106())
		{
			iVar3 = 0;
		}
		else
		{
			iVar3 = 1;
		}
	}
	else
	{
		iVar3 = Global_19E56.f_1C41[iParam0];
	}
	if (Global_7F5B[iParam0] != iVar3)
	{
		bVar1 = true;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA0[(iParam0 / 32)], (iParam0 % 32)))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA9[(iParam0 / 32)], (iParam0 % 32)) || (Global_7CB2[iParam0] == 0 && Global_7E78[iParam0] != 2))
		{
			bVar1 = true;
		}
	}
	if (bVar1)
	{
		if (!Global_7C9F)
		{
		}
		else
		{
			if (!OBJECT::_DOES_DOOR_EXIST(Var0.f_5))
			{
				OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, 0, 0, 0);
			}
			switch (iVar3)
			{
				case 1:
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Var0.f_4, 3))
					{
						bVar7 = true;
					}
					else if (fVar4 > 3f || MISC::ABSF(OBJECT::_0x65499865FCA6E5EC(Var0.f_5)) <= 0.015f)
					{
						iVar8 = INTERIOR::GET_INTERIOR_FROM_ENTITY(AUDIO::_0x0626A247D2405330());
						iVar9 = INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
						if (iVar8 != iVar9 || iVar8 == 0)
						{
							bVar7 = true;
						}
					}
					if (bVar7)
					{
						if (Var0.f_6 != 0f)
						{
							OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
						}
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
						bVar2 = true;
					}
					break;
				
				case 4:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 2:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 0:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 1);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 3:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, 0, 0, 1);
					bVar2 = true;
					break;
				
				case 5:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				case 6:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				
				default:
					if (Var0.f_6 != 0f)
					{
						OBJECT::_0x9BA001CB45CBF627(Var0.f_5, Var0.f_6, 0, 0);
					}
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(Var0.f_5, iVar3, 0, 1);
					bVar2 = true;
					break;
				}
		}
		if (bVar2)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_7CA0[(iParam0 / 32)]), (iParam0 % 32));
			Global_7F5B[iParam0] = iVar3;
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_7CA9[(iParam0 / 32)], (iParam0 % 32)) && Global_7E78[iParam0] != 2)
	{
		MISC::SET_BIT(&(Global_7CA0[(iParam0 / 32)]), (iParam0 % 32));
		func_104(iParam0);
		if (Global_7CB2[iParam0] < 2)
		{
			Global_7CB2[iParam0]++;
		}
	}
}

int func_106()//Position - 0x12DB1
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(CAM::_0xDC9DA9E8789F5246(), 0))
	{
		return 0;
	}
	switch (func_11())
	{
		case 0:
			if (Global_19E56.f_2361.f_63.f_3A[65])
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_19E56.f_2361.f_63.f_3A[66])
			{
				return 1;
			}
			break;
		
		case 2:
			if (Global_19E56.f_2361.f_63.f_3A[65])
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_107(int iParam0)//Position - 0x12E30
{
	int iVar0;
	
	iVar0 = func_11();
	if (func_108(iParam0))
	{
		return 1;
	}
	if (iParam0 == 49)
	{
		if (iVar0 == 1)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[5], 0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[6], 0))
			{
				return 0;
			}
		}
		if (func_14(iVar0))
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[5], iVar0))
			{
				return 0;
			}
		}
	}
	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (iVar0 == 0)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[0], 0))
				{
					return 0;
				}
			}
			if (func_14(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[0], iVar0))
				{
					if (iParam0 != 40)
					{
						return 0;
					}
					else
					{
						return 1;
					}
				}
			}
			break;
		
		case 47:
		case 48:
		case 49:
			if (iVar0 == 1)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[5], 0))
				{
					return 0;
				}
			}
			if (func_14(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[5], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 50:
			if (iVar0 == 1)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[6], 0))
				{
					return 0;
				}
			}
			if (func_14(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[6], iVar0))
				{
					return 0;
				}
			}
			break;
		
		case 51:
		case 52:
			if (iVar0 == 2)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[2], 0))
				{
					return 0;
				}
				if (func_14(iVar0))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[2], iVar0))
					{
						return 0;
					}
				}
			}
			else if (iVar0 == 0)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[1], 0))
				{
					return 0;
				}
				if (func_14(iVar0))
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[1], iVar0))
					{
						return 0;
					}
				}
			}
			break;
		
		case 53:
			if (iVar0 == 2)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[3], 0))
				{
					return 0;
				}
			}
			if (func_14(iVar0))
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_15922[3], iVar0))
				{
					return 0;
				}
			}
			break;
		
		default:
			return 0;
			break;
	}
	return 1;
}

int func_108(int iParam0)//Position - 0x13085
{
	int iVar0;
	
	if ((iParam0 == 40 || iParam0 == 49) || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
			{
				iVar0 = ENTITY::GET_ENTITY_MODEL(func_109(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1)));
				switch (iVar0)
				{
					case joaat("UTILLITRUCK"):
					case joaat("MONSTER"):
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

int func_109(int iParam0)//Position - 0x130F1
{
	return iParam0;
}

void func_110(int iParam0, var uParam1)//Position - 0x130FB
{
	int iVar0;
	int iVar1;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_4, 2))
	{
		return;
	}
	iVar0 = func_34();
	iVar1 = func_112(iVar0);
	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_111(iParam0))
			{
				if (iVar1 < 19)
				{
					if (iVar1 >= 7)
					{
						Global_19E56.f_1C41[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 19)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), *uParam1) >= 12f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), *uParam1) >= 12f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_111(iParam0))
			{
				if (iVar1 < 18)
				{
					if (iVar1 >= 7)
					{
						Global_19E56.f_1C41[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 18)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), *uParam1) >= 12f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 7)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), *uParam1) >= 12f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 141:
		case 142:
			if (func_111(iParam0))
			{
				if ((SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0) && !Global_19E56.f_2361.f_63.f_3A[4])
				{
					if (iVar1 < 21)
					{
						if (iVar1 >= 7)
						{
							Global_19E56.f_1C41[iParam0] = 0;
							OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_19E56.f_2361.f_63.f_3A[4])
				{
					Global_19E56.f_1C41[iParam0] = 0;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (Global_19E56.f_2361.f_63.f_3A[4])
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist")) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1")) == 0)
			{
				if (iVar1 >= 21)
				{
					if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), *uParam1) >= 18f)
					{
						Global_19E56.f_1C41[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
				else if (iVar1 < 7)
				{
					if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), *uParam1) >= 18f)
					{
						Global_19E56.f_1C41[iParam0] = 1;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
			}
			break;
		
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_111(iParam0))
			{
				if (iVar1 < 20)
				{
					if (iVar1 >= 9)
					{
						Global_19E56.f_1C41[iParam0] = 0;
						OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
					}
				}
				else
				{
					return;
				}
			}
			else if (iVar1 >= 20)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), *uParam1) >= 40f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (iVar1 < 9)
			{
				if (SYSTEM::VDIST(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), false), *uParam1) >= 40f)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 147:
		case 148:
			if (!func_111(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_111(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) == 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0)
			{
				Global_19E56.f_1C41[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 158:
		case 159:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[70 /*34*/].f_6) == 0)
			{
				if (!func_111(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 160:
		case 161:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2")) == 0)
			{
				if (!func_111(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 70:
		case 71:
		case 72:
			if (!func_111(iParam0) && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[26 /*34*/].f_6) == 0)
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			else
			{
				return;
			}
			break;
		
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_111(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[43 /*34*/].f_6) == 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 190:
		case 191:
			if (!func_111(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 193:
			if (!func_111(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[93 /*34*/].f_6) > 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 198:
			if (!func_111(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 80:
			if (!func_111(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[8 /*34*/].f_6) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[10 /*34*/].f_6) == 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 205:
		case 206:
			if (!func_111(iParam0))
			{
				if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[47 /*34*/].f_6) == 0)
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			else
			{
				return;
			}
			break;
		
		case 207:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[70 /*34*/].f_6) == 0)
			{
				if (!func_111(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[48 /*34*/].f_6) == 0)
			{
				if (!func_111(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 99:
		case 100:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(Global_14893[39 /*34*/].f_6) == 0)
			{
				if (!func_111(iParam0))
				{
					Global_19E56.f_1C41[iParam0] = 1;
					OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
				}
			}
			break;
		
		case 216:
			if (!func_111(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 217:
		case 218:
			if (!func_111(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 1;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
		
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_111(iParam0))
			{
				Global_19E56.f_1C41[iParam0] = 0;
				OBJECT::_SET_DOOR_ACCELERATION_LIMIT(uParam1->f_5, Global_19E56.f_1C41[iParam0], 1, 1);
			}
			break;
	}
}

bool func_111(int iParam0)//Position - 0x13A96
{
	struct<7> Var0;
	int iVar1;
	
	Var0 = { func_113(iParam0) };
	iVar1 = OBJECT::_0x160AA1B32F6139B8(Var0.f_5);
	return ((iVar1 == 1 || iVar1 == 4) || iVar1 == 2);
}

int func_112(int iParam0)//Position - 0x13ACA
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

struct<7> func_113(int iParam0)//Position - 0x13ADD
{
	struct<7> Var0;
	
	switch (iParam0)
	{
		case 0:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 133f, -1711f, 29f };
			Var0.f_5 = 1804701345;
			break;
		
		case 1:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -1287.857f, -1115.742f, 7.1401f };
			Var0.f_5 = 1403601067;
			break;
		
		case 2:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1932.952f, 3725.154f, 32.9944f };
			Var0.f_5 = 2263827800;
			break;
		
		case 3:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { 1207.873f, -470.063f, 66.358f };
			Var0.f_5 = 1796834809;
			break;
		
		case 4:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -29.8692f, -148.1571f, 57.2265f };
			Var0.f_5 = 96153298;
			break;
		
		case 5:
			Var0.f_3 = joaat("v_ilev_bs_door");
			Var0 = { -280.7851f, 6232.782f, 31.8455f };
			Var0.f_5 = 4013886342;
			break;
		
		case 6:
			Var0.f_3 = joaat("v_ilev_hd_door_l");
			Var0 = { -824f, -187f, 38f };
			Var0 = { -823.2001f, -187.0831f, 37.819f };
			Var0.f_5 = 183249434;
			break;
		
		case 7:
			Var0.f_3 = joaat("v_ilev_hd_door_r");
			Var0 = { -823f, -188f, 38f };
			Var0 = { -822.4442f, -188.3924f, 37.819f };
			Var0.f_5 = 758345384;
			break;
		
		case 8:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 82.3186f, -1392.752f, 29.5261f };
			Var0.f_5 = 3225704655;
			break;
		
		case 9:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 82.3186f, -1390.476f, 29.5261f };
			Var0.f_5 = 1968521986;
			break;
		
		case 10:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1686.983f, 4821.741f, 42.2131f };
			Var0.f_5 = 2151260995;
			break;
		
		case 11:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1687.282f, 4819.484f, 42.2131f };
			Var0.f_5 = 2891545474;
			break;
		
		case 12:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 418.637f, -806.457f, 29.6396f };
			Var0.f_5 = 2344829626;
			break;
		
		case 13:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 418.637f, -808.733f, 29.6396f };
			Var0.f_5 = 1226259807;
			break;
		
		case 14:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -1096.661f, 2705.446f, 19.2578f };
			Var0.f_5 = 1090833557;
			break;
		
		case 15:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1094.965f, 2706.964f, 19.2578f };
			Var0.f_5 = 897332612;
			break;
		
		case 16:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { 1196.825f, 2703.221f, 38.3726f };
			Var0.f_5 = 1095946640;
			break;
		
		case 17:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { 1199.101f, 2703.221f, 38.3726f };
			Var0.f_5 = 801975945;
			break;
		
		case 18:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -818.7642f, -1079.544f, 11.4781f };
			Var0.f_5 = 4126970749;
			break;
		
		case 19:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -816.7932f, -1078.406f, 11.4781f };
			Var0.f_5 = 2359148733;
			break;
		
		case 20:
			Var0.f_3 = joaat("v_ilev_cs_door01");
			Var0 = { -0.0564f, 6517.461f, 32.0278f };
			Var0.f_5 = 1891185217;
			break;
		
		case 21:
			Var0.f_3 = joaat("v_ilev_cs_door01_r");
			Var0 = { -1.7253f, 6515.914f, 32.0278f };
			Var0.f_5 = 1236591681;
			break;
		
		case 22:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -1201.435f, -776.8566f, 17.9918f };
			Var0.f_5 = 1980808685;
			break;
		
		case 23:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 617.2458f, 2751.022f, 42.7578f };
			Var0.f_5 = 1352749757;
			break;
		
		case 24:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { 127.8201f, -211.8274f, 55.2275f };
			Var0.f_5 = 3728412843;
			break;
		
		case 25:
			Var0.f_3 = joaat("v_ilev_clothmiddoor");
			Var0 = { -3167.75f, 1055.536f, 21.5329f };
			Var0.f_5 = 1284749450;
			break;
		
		case 26:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -716.6754f, -155.42f, 37.6749f };
			Var0.f_5 = 261851994;
			break;
		
		case 27:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -715.6154f, -157.2561f, 37.6749f };
			Var0.f_5 = 217646625;
			break;
		
		case 28:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -157.0924f, -306.4413f, 39.994f };
			Var0.f_5 = 1801139578;
			break;
		
		case 29:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -156.4022f, -304.4366f, 39.994f };
			Var0.f_5 = 2171691430;
			break;
		
		case 30:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1454.782f, -231.7927f, 50.0565f };
			Var0.f_5 = 1312689981;
			break;
		
		case 31:
			Var0.f_3 = joaat("v_ilev_ch_glassdoor");
			Var0 = { -1456.201f, -233.3682f, 50.0565f };
			Var0.f_5 = 3699911635;
			break;
		
		case 32:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 321.81f, 178.36f, 103.68f };
			Var0.f_5 = 4029706399;
			break;
		
		case 33:
			Var0.f_3 = 3082015943;
			Var0 = { 1859.89f, 3749.79f, 33.18f };
			Var0.f_5 = 3010099808;
			break;
		
		case 34:
			Var0.f_3 = 3082015943;
			Var0 = { -289.1752f, 6199.112f, 31.637f };
			Var0.f_5 = 302307081;
			break;
		
		case 35:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -1155.454f, -1424.008f, 5.0461f };
			Var0.f_5 = 3613081281;
			break;
		
		case 36:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { 1321.286f, -1650.597f, 52.3663f };
			Var0.f_5 = 2208410796;
			break;
		
		case 37:
			Var0.f_3 = joaat("v_ilev_ta_door");
			Var0 = { -3167.789f, 1074.767f, 20.9209f };
			Var0.f_5 = 2798580600;
			break;
		
		case 38:
			Var0.f_3 = joaat("v_ilev_mm_doorm_l");
			Var0 = { -817f, 179f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2197927507;
			break;
		
		case 39:
			Var0.f_3 = joaat("v_ilev_mm_doorm_r");
			Var0 = { -816f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2167550640;
			break;
		
		case 40:
			Var0.f_3 = joaat("prop_ld_garaged_01");
			Var0 = { -815f, 186f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2308383443;
			Var0.f_6 = 6.5f;
			break;
		
		case 41:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -797f, 177f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 776026812;
			break;
		
		case 42:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -795f, 178f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 698422331;
			break;
		
		case 43:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_l");
			Var0 = { -793f, 181f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 535076355;
			break;
		
		case 44:
			Var0.f_3 = joaat("prop_bh1_48_backdoor_r");
			Var0 = { -794f, 183f, 73f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 474675599;
			break;
		
		case 45:
			Var0.f_3 = joaat("prop_bh1_48_gate_1");
			Var0 = { -849f, 179f, 70f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2316539780;
			break;
		
		case 46:
			Var0.f_3 = joaat("v_ilev_mm_windowwc");
			Var0 = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2594591465;
			break;
		
		case 47:
			Var0.f_3 = joaat("v_ilev_fa_frontdoor");
			Var0 = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 613961892;
			break;
		
		case 48:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 4022396662;
			break;
		
		case 49:
			Var0.f_3 = joaat("prop_sc1_21_g_door_01");
			Var0 = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 3254291302;
			break;
		
		case 50:
			Var0.f_3 = joaat("v_ilev_fh_frontdoor");
			Var0 = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1201219326;
			break;
		
		case 51:
			Var0.f_3 = joaat("v_ilev_trevtraildr");
			Var0 = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 1736361794;
			break;
		
		case 52:
			Var0.f_3 = joaat("prop_cs4_10_tr_gd_01");
			Var0 = { 1972.787f, 3824.554f, 32.5831f };
			Var0.f_5 = 1113956670;
			Var0.f_6 = 12f;
			break;
		
		case 53:
			Var0.f_3 = joaat("v_ilev_trev_doorfront");
			Var0 = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(Var0.f_4), 0);
			Var0.f_5 = 2933350250;
			break;
	}
	switch (iParam0)
	{
		case 54:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -1145.9f, -1991.14f, 14.18f };
			Var0.f_5 = 2423886370;
			Var0.f_6 = 25f;
			break;
		
		case 55:
			Var0.f_3 = joaat("prop_id2_11_gdoor");
			Var0 = { 723.12f, -1088.83f, 23.28f };
			Var0.f_5 = 1168079979;
			Var0.f_6 = 25f;
			break;
		
		case 56:
			Var0.f_3 = joaat("prop_com_ls_door_01");
			Var0 = { -356.09f, -134.77f, 40.01f };
			Var0.f_5 = 1206354175;
			Var0.f_6 = 25f;
			break;
		
		case 57:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 108.8502f, 6617.876f, 32.673f };
			Var0.f_5 = 3256786569;
			Var0.f_6 = 25f;
			break;
		
		case 58:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 114.3206f, 6623.226f, 32.7161f };
			Var0.f_5 = 1200466273;
			Var0.f_6 = 25f;
			break;
		
		case 59:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1182.305f, 2645.242f, 38.807f };
			Var0.f_5 = 1391004277;
			Var0.f_6 = 25f;
			break;
		
		case 60:
			Var0.f_3 = joaat("v_ilev_carmod3door");
			Var0 = { 1174.654f, 2645.242f, 38.6826f };
			Var0.f_5 = 3835768287;
			Var0.f_6 = 25f;
			break;
		
		case 225:
			Var0.f_3 = 3867468406;
			Var0 = { -205.7007f, -1310.692f, 30.2957f };
			Var0.f_5 = 4006203073;
			Var0.f_6 = 25f;
			break;
		
		case 61:
			Var0.f_3 = joaat("v_ilev_janitor_frontdoor");
			Var0 = { -107.5401f, -9.0258f, 70.6696f };
			Var0.f_5 = 4042683452;
			break;
		
		case 62:
			Var0.f_3 = joaat("v_ilev_ss_door8");
			Var0 = { 717f, -975f, 25f };
			Var0.f_5 = 3468894434;
			break;
		
		case 63:
			Var0.f_3 = joaat("v_ilev_ss_door7");
			Var0 = { 719f, -975f, 25f };
			Var0.f_5 = 763780711;
			break;
		
		case 64:
			Var0.f_3 = joaat("v_ilev_ss_door02");
			Var0 = { 709.9813f, -963.5311f, 30.5453f };
			Var0.f_5 = 3420115991;
			break;
		
		case 65:
			Var0.f_3 = joaat("v_ilev_ss_door03");
			Var0 = { 709.9894f, -960.6675f, 30.5453f };
			Var0.f_5 = 2814147131;
			break;
		
		case 66:
			Var0.f_3 = joaat("v_ilev_store_door");
			Var0 = { 707.8046f, -962.4564f, 30.5453f };
			Var0.f_5 = 949391213;
			break;
		
		case 67:
			Var0.f_3 = 3082015943;
			Var0 = { 1393f, 3599f, 35f };
			Var0.f_5 = 212192855;
			break;
		
		case 68:
			Var0.f_3 = 3082015943;
			Var0 = { 1395f, 3600f, 35f };
			Var0.f_5 = 4168492544;
			break;
		
		case 69:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1387f, 3614f, 39f };
			Var0.f_5 = 1765671336;
			break;
		
		case 70:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1083.547f, -1975.435f, 31.6222f };
			Var0.f_5 = 792295685;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 71:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1065.237f, -2006.079f, 32.2329f };
			Var0.f_5 = 563273144;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 72:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1085.307f, -2018.561f, 41.6289f };
			Var0.f_5 = 3567974253;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 73:
			Var0.f_3 = joaat("v_ilev_bank4door02");
			Var0 = { -111f, 6464f, 32f };
			Var0.f_5 = 178228075;
			break;
		
		case 74:
			Var0.f_3 = joaat("v_ilev_bank4door01");
			Var0 = { -110f, 6462f, 32f };
			Var0.f_5 = 1852297978;
			break;
		
		case 75:
			Var0.f_3 = joaat("v_ilev_lester_doorfront");
			Var0 = { 1274f, -1721f, 55f };
			Var0.f_5 = 3729941218;
			break;
		
		case 76:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1271.89f, -1707.57f, 53.79f };
			Var0.f_5 = 1646172266;
			break;
		
		case 77:
			Var0.f_3 = joaat("v_ilev_lester_doorveranda");
			Var0 = { 1270.77f, -1708.1f, 53.75f };
			Var0.f_5 = 204467342;
			break;
		
		case 78:
			Var0.f_3 = joaat("v_ilev_deviantfrontdoor");
			Var0 = { -127.5f, -1456.18f, 37.94f };
			Var0.f_5 = 2047070410;
			break;
		
		case 79:
			Var0.f_3 = joaat("prop_com_gar_door_01");
			Var0 = { 483.56f, -1316.08f, 32.18f };
			Var0.f_5 = 1417775309;
			break;
		
		case 80:
			Var0.f_3 = joaat("v_ilev_cs_door");
			Var0 = { 483f, -1312f, 29f };
			Var0.f_5 = 4188492670;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 81:
			Var0.f_3 = joaat("prop_strip_door_01");
			Var0 = { 128f, -1299f, 29f };
			Var0.f_5 = 1840510598;
			break;
		
		case 82:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 96f, -1285f, 29f };
			Var0.f_5 = 1382825971;
			break;
		
		case 83:
			Var0.f_3 = joaat("prop_motel_door_09");
			Var0 = { 549f, -1773f, 34f };
			Var0.f_5 = 232536303;
			break;
		
		case 84:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 974f, -1839f, 36f };
			Var0.f_5 = 1267246609;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 85:
			Var0.f_3 = joaat("v_ilev_gangsafedoor");
			Var0 = { 977f, -105f, 75f };
			Var0.f_5 = 2394729325;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 86:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1391f, 1163f, 114f };
			Var0.f_5 = 2077901353;
			break;
		
		case 87:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1391f, 1161f, 114f };
			Var0.f_5 = 2192888170;
			break;
		
		case 88:
			Var0.f_3 = joaat("prop_cs6_03_door_l");
			Var0 = { 1396f, 1143f, 115f };
			Var0.f_5 = 2389174084;
			break;
		
		case 89:
			Var0.f_3 = joaat("prop_cs6_03_door_r");
			Var0 = { 1396f, 1141f, 115f };
			Var0.f_5 = 2497934791;
			break;
		
		case 90:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1409f, 1146f, 114f };
			Var0.f_5 = 4232732129;
			break;
		
		case 91:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1409f, 1148f, 114f };
			Var0.f_5 = 2567779133;
			break;
		
		case 92:
			Var0.f_3 = joaat("v_ilev_ra_door1_l");
			Var0 = { 1408f, 1159f, 114f };
			Var0.f_5 = 3732218423;
			break;
		
		case 93:
			Var0.f_3 = joaat("v_ilev_ra_door1_r");
			Var0 = { 1408f, 1161f, 114f };
			Var0.f_5 = 1976429759;
			break;
		
		case 94:
			Var0.f_3 = joaat("prop_gar_door_01");
			Var0 = { -1067f, -1666f, 5f };
			Var0.f_5 = 1341041543;
			break;
		
		case 95:
			Var0.f_3 = joaat("prop_gar_door_02");
			Var0 = { -1065f, -1669f, 5f };
			Var0.f_5 = 2663500076;
			break;
		
		case 96:
			Var0.f_3 = joaat("prop_map_door_01");
			Var0 = { -1104.66f, -1638.48f, 4.68f };
			Var0.f_5 = 2506494167;
			break;
		
		case 97:
			Var0.f_3 = joaat("v_ilev_fib_door1");
			Var0 = { -31.72f, -1101.85f, 26.57f };
			Var0.f_5 = 2463679010;
			break;
		
		case 98:
			Var0.f_3 = joaat("v_ilev_tort_door");
			Var0 = { 134.4f, -2204.1f, 7.52f };
			Var0.f_5 = 963876966;
			break;
		
		case 99:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3628f, 3747f, 28f };
			Var0.f_5 = 1773088812;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 100:
			Var0.f_3 = joaat("v_ilev_bl_shutter2");
			Var0 = { 3621f, 3752f, 28f };
			Var0.f_5 = 2962865768;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 101:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -608.73f, -1610.32f, 27.16f };
			Var0.f_5 = 2483203582;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 102:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -611.32f, -1610.09f, 27.16f };
			Var0.f_5 = 1608500665;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 103:
			Var0.f_3 = joaat("v_ilev_rc_door3_l");
			Var0 = { -592.94f, -1631.58f, 27.16f };
			Var0.f_5 = 2838918956;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 104:
			Var0.f_3 = joaat("v_ilev_rc_door3_r");
			Var0 = { -592.71f, -1628.99f, 27.16f };
			Var0.f_5 = 943854909;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 105:
			Var0.f_3 = joaat("v_ilev_ss_door04");
			Var0 = { 1991f, 3053f, 47f };
			Var0.f_5 = 4205901940;
			break;
		
		case 106:
			Var0.f_3 = 479144380;
			Var0 = { 1988.353f, 3054.411f, 47.3204f };
			Var0.f_5 = 3369475456;
			break;
		
		case 107:
			Var0.f_3 = joaat("prop_epsilon_door_l");
			Var0 = { -700.17f, 47.31f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 108:
			Var0.f_3 = joaat("prop_epsilon_door_r");
			Var0 = { -697.94f, 48.35f, 44.3f };
			Var0.f_5 = 1999872275;
			break;
		
		case 109:
			Var0.f_3 = 3064524526;
			Var0 = { 241.3574f, 361.0488f, 105.8963f };
			Var0.f_5 = 1538555582;
			break;
		
		case 110:
			Var0.f_3 = joaat("prop_ch2_09c_garage_door");
			Var0 = { -689.11f, 506.97f, 110.64f };
			Var0.f_5 = 3332973110;
			break;
		
		case 111:
			Var0.f_3 = joaat("v_ilev_door_orangesolid");
			Var0 = { -1055.96f, -236.43f, 44.17f };
			Var0.f_5 = 2522494448;
			break;
		
		case 112:
			Var0.f_3 = joaat("prop_magenta_door");
			Var0 = { 29f, 3661f, 41f };
			Var0.f_5 = 4248592646;
			break;
		
		case 113:
			Var0.f_3 = joaat("prop_cs4_05_tdoor");
			Var0 = { 32f, 3667f, 41f };
			Var0.f_5 = 3936664535;
			break;
		
		case 114:
			Var0.f_3 = joaat("v_ilev_housedoor1");
			Var0 = { 87f, -1959f, 21f };
			Var0.f_5 = 3057031255;
			break;
		
		case 115:
			Var0.f_3 = joaat("v_ilev_fh_frntdoor");
			Var0 = { 0f, -1823f, 30f };
			Var0.f_5 = 1487374207;
			break;
		
		case 116:
			Var0.f_3 = joaat("p_cut_door_03");
			Var0 = { 23.34f, -1897.6f, 23.05f };
			Var0.f_5 = 4095840997;
			break;
		
		case 117:
			Var0.f_3 = joaat("p_cut_door_02");
			Var0 = { 524.2f, 3081.14f, 41.16f };
			Var0.f_5 = 3397895433;
			break;
		
		case 118:
			Var0.f_3 = joaat("v_ilev_po_door");
			Var0 = { -1910.58f, -576.01f, 19.25f };
			Var0.f_5 = 3430501521;
			break;
		
		case 119:
			Var0.f_3 = joaat("prop_ss1_10_door_l");
			Var0 = { -720.39f, 256.86f, 80.29f };
			Var0.f_5 = 4086527816;
			break;
		
		case 120:
			Var0.f_3 = joaat("prop_ss1_10_door_r");
			Var0 = { -718.42f, 257.79f, 80.29f };
			Var0.f_5 = 3293878491;
			break;
		
		case 121:
			Var0.f_3 = joaat("v_ilev_fibl_door02");
			Var0 = { 106.38f, -742.7f, 46.18f };
			Var0.f_5 = 756894459;
			break;
		
		case 122:
			Var0.f_3 = joaat("v_ilev_fibl_door01");
			Var0 = { 105.76f, -746.65f, 46.18f };
			Var0.f_5 = 476981677;
			break;
		
		case 123:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2343.53f, 3265.37f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 124:
			Var0.f_3 = joaat("v_ilev_ct_door01");
			Var0 = { -2342.23f, 3267.62f, 32.96f };
			Var0.f_5 = 2081647379;
			break;
		
		case 125:
			Var0.f_3 = joaat("ap1_02_door_l");
			Var0 = { -1041.933f, -2748.167f, 22.0308f };
			Var0.f_5 = 169965357;
			break;
		
		case 126:
			Var0.f_3 = joaat("ap1_02_door_r");
			Var0 = { -1044.841f, -2746.489f, 22.0308f };
			Var0.f_5 = 311232516;
			break;
		
		case 128:
			Var0.f_3 = joaat("v_ilev_fb_doorshortl");
			Var0 = { -1045.12f, -232.004f, 39.4379f };
			Var0.f_5 = 2731839567;
			break;
		
		case 129:
			Var0.f_3 = joaat("v_ilev_fb_doorshortr");
			Var0 = { -1046.516f, -229.3581f, 39.4379f };
			Var0.f_5 = 759145763;
			break;
		
		case 130:
			Var0.f_3 = joaat("v_ilev_fb_door01");
			Var0 = { -1083.62f, -260.4167f, 38.1867f };
			Var0.f_5 = 4210568117;
			break;
		
		case 131:
			Var0.f_3 = joaat("v_ilev_fb_door02");
			Var0 = { -1080.974f, -259.0204f, 38.1867f };
			Var0.f_5 = 3833069237;
			break;
		
		case 127:
			Var0.f_3 = joaat("v_ilev_gtdoor");
			Var0 = { -1042.57f, -240.6f, 38.11f };
			Var0.f_5 = 1259065971;
			break;
		
		case 132:
			Var0.f_3 = joaat("prop_damdoor_01");
			Var0 = { 1385.258f, -2079.949f, 52.7638f };
			Var0.f_5 = 3410916080;
			break;
		
		case 133:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 1656.57f, 4849.66f, 42.35f };
			Var0.f_5 = 243782214;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 134:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 1656.25f, 4852.24f, 42.35f };
			Var0.f_5 = 714115627;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 135:
			Var0.f_3 = 3110450777;
			Var0 = { -1051.402f, -474.6847f, 36.6199f };
			Var0.f_5 = 1668106976;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 136:
			Var0.f_3 = 3110450777;
			Var0 = { -1049.285f, -476.6376f, 36.7584f };
			Var0.f_5 = 1382347031;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 137:
			Var0.f_3 = 1230099731;
			Var0 = { -1210.957f, -580.8765f, 27.2373f };
			Var0.f_5 = 3328176348;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 138:
			Var0.f_3 = 1230099731;
			Var0 = { -1212.445f, -578.4401f, 27.2373f };
			Var0.f_5 = 2226217164;
			MISC::SET_BIT(&(Var0.f_4), 1);
			break;
		
		case 139:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -565.1712f, 276.6259f, 83.2863f };
			Var0.f_5 = 2578434112;
			break;
		
		case 140:
			Var0.f_3 = joaat("v_ilev_roc_door4");
			Var0 = { -561.2863f, 293.5043f, 87.7771f };
			Var0.f_5 = 2146505927;
			break;
		
		case 141:
			Var0.f_3 = joaat("p_jewel_door_l");
			Var0 = { -631.96f, -236.33f, 38.21f };
			Var0.f_5 = 1874948872;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 142:
			Var0.f_3 = joaat("p_jewel_door_r1");
			Var0 = { -630.43f, -238.44f, 38.21f };
			Var0.f_5 = 2329946445;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 145:
			Var0.f_3 = 2551709571;
			Var0 = { 231.62f, 216.23f, 106.4f };
			Var0.f_5 = 1951546856;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 146:
			Var0.f_3 = 2551709571;
			Var0 = { 232.72f, 213.88f, 106.4f };
			Var0.f_5 = 3863585245;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 143:
			Var0.f_3 = 110411286;
			Var0 = { 258.32f, 203.84f, 106.43f };
			Var0.f_5 = 4000992086;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 144:
			Var0.f_3 = 110411286;
			Var0 = { 260.76f, 202.95f, 106.43f };
			Var0.f_5 = 3509752007;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 148:
			Var0.f_3 = 4072696575;
			Var0 = { 256.31f, 220.66f, 106.43f };
			Var0.f_5 = 3928823518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 147:
			Var0.f_3 = joaat("v_ilev_bk_door");
			Var0 = { 266.36f, 217.57f, 110.43f };
			Var0.f_5 = 440819155;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 149:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -442.66f, 6015.222f, 31.8663f };
			Var0.f_5 = 3706472053;
			break;
		
		case 150:
			Var0.f_3 = joaat("v_ilev_shrf2door");
			Var0 = { -444.4985f, 6017.06f, 31.8663f };
			Var0.f_5 = 1815504139;
			break;
		
		case 151:
			Var0.f_3 = joaat("v_ilev_shrfdoor");
			Var0 = { 1855.685f, 3683.93f, 34.5928f };
			Var0.f_5 = 1344911780;
			break;
		
		case 152:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1223.35f, -172.41f, 39.98f };
			Var0.f_5 = 3974076073;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 153:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1220.93f, -173.68f, 39.98f };
			Var0.f_5 = 1511747875;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 154:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1211.99f, -190.57f, 39.98f };
			Var0.f_5 = 2777245193;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 155:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1213.26f, -192.98f, 39.98f };
			Var0.f_5 = 3201767584;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 156:
			Var0.f_3 = joaat("prop_bhhotel_door_l");
			Var0 = { -1217.77f, -201.54f, 39.98f };
			Var0.f_5 = 1902048492;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 157:
			Var0.f_3 = joaat("prop_bhhotel_door_r");
			Var0 = { -1219.04f, -203.95f, 39.98f };
			Var0.f_5 = 3850198311;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 158:
			Var0.f_3 = joaat("prop_ch3_04_door_01l");
			Var0 = { 2514.32f, -317.34f, 93.32f };
			Var0.f_5 = 404057594;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 159:
			Var0.f_3 = joaat("prop_ch3_04_door_01r");
			Var0 = { 2512.42f, -319.26f, 93.32f };
			Var0.f_5 = 2877494483;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 160:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_l");
			Var0 = { 2333.23f, 2574.97f, 47.03f };
			Var0.f_5 = 2918882817;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 161:
			Var0.f_3 = joaat("prop_ch3_01_trlrdoor_r");
			Var0 = { 2329.65f, 2576.64f, 47.03f };
			Var0.f_5 = 457472151;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 162:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 16.1279f, -1114.605f, 29.9469f };
			Var0.f_5 = 1071759151;
			break;
		
		case 163:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 18.572f, -1115.495f, 29.9469f };
			Var0.f_5 = 2175943379;
			break;
		
		case 165:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 1698.176f, 3751.506f, 34.8553f };
			Var0.f_5 = 2806476823;
			break;
		
		case 166:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 1699.937f, 3753.42f, 34.8553f };
			Var0.f_5 = 3783779483;
			break;
		
		case 167:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 244.7274f, -44.0791f, 70.91f };
			Var0.f_5 = 4046397901;
			break;
		
		case 168:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 243.8379f, -46.5232f, 70.91f };
			Var0.f_5 = 989443413;
			break;
		
		case 169:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 845.3624f, -1024.539f, 28.3448f };
			Var0.f_5 = 2022251829;
			break;
		
		case 170:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 842.7684f, -1024.539f, 23.3448f };
			Var0.f_5 = 649820567;
			break;
		
		case 171:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -326.1122f, 6075.27f, 31.6047f };
			Var0.f_5 = 537455378;
			break;
		
		case 172:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -324.273f, 6077.109f, 31.6047f };
			Var0.f_5 = 1121431731;
			break;
		
		case 173:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -665.2424f, -944.3256f, 21.9792f };
			Var0.f_5 = 2857586858;
			break;
		
		case 174:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -662.6414f, -944.3256f, 21.9792f };
			Var0.f_5 = 3348630331;
			break;
		
		case 175:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1313.826f, -389.1259f, 36.8457f };
			Var0.f_5 = 1893144650;
			break;
		
		case 176:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1314.465f, -391.6472f, 36.8457f };
			Var0.f_5 = 435841678;
			break;
		
		case 177:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -1114.009f, 2689.77f, 18.7041f };
			Var0.f_5 = 948508314;
			break;
		
		case 178:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -1112.071f, 2691.505f, 18.7041f };
			Var0.f_5 = 2498252631;
			break;
		
		case 179:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { -3164.845f, 1081.392f, 20.9887f };
			Var0.f_5 = 3139720051;
			break;
		
		case 180:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { -3163.812f, 1083.778f, 20.9887f };
			Var0.f_5 = 782482084;
			break;
		
		case 181:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 2570.905f, 303.3556f, 108.8848f };
			Var0.f_5 = 3100496495;
			break;
		
		case 182:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 2568.304f, 303.3556f, 108.8848f };
			Var0.f_5 = 2165269235;
			break;
		
		case 183:
			Var0.f_3 = joaat("v_ilev_gc_door04");
			Var0 = { 813.1779f, -2148.27f, 29.7689f };
			Var0.f_5 = 1071759151;
			break;
		
		case 184:
			Var0.f_3 = joaat("v_ilev_gc_door03");
			Var0 = { 810.5769f, -2148.27f, 29.7689f };
			Var0.f_5 = 2175943379;
			break;
		
		case 164:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 6.8179f, -1098.209f, 29.9469f };
			Var0.f_5 = 1487704245;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 185:
			Var0.f_3 = joaat("v_ilev_gc_door01");
			Var0 = { 827.5342f, -2160.493f, 29.7688f };
			Var0.f_5 = 1529812051;
			MISC::SET_BIT(&(Var0.f_4), 3);
			break;
		
		case 186:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1107.01f, 289.38f, 64.76f };
			Var0.f_5 = 904342475;
			break;
		
		case 187:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1101.62f, 290.36f, 64.76f };
			Var0.f_5 = 3499548916;
			break;
		
		case 188:
			Var0.f_3 = joaat("prop_lrggate_01c_l");
			Var0 = { -1138.64f, 300.82f, 67.18f };
			Var0.f_5 = 2792509962;
			break;
		
		case 189:
			Var0.f_3 = joaat("prop_lrggate_01c_r");
			Var0 = { -1137.05f, 295.59f, 67.18f };
			Var0.f_5 = 2300778356;
			break;
		
		case 190:
			Var0.f_3 = joaat("v_ilev_bl_doorel_l");
			Var0 = { -2053.16f, 3239.49f, 30.5f };
			Var0.f_5 = 3673197175;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 191:
			Var0.f_3 = joaat("v_ilev_bl_doorel_r");
			Var0 = { -2054.39f, 3237.23f, 30.5f };
			Var0.f_5 = 1018580481;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 192:
			Var0.f_3 = joaat("v_ilev_cbankcountdoor01");
			Var0 = { -108.91f, 6469.11f, 31.91f };
			Var0.f_5 = 421926217;
			break;
		
		case 193:
			Var0.f_3 = joaat("prop_fnclink_03gate5");
			Var0 = { -182.91f, 6168.37f, 32.14f };
			Var0.f_5 = 2963414922;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
	}
	switch (iParam0)
	{
		case 196:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -59.89f, -1092.95f, 26.88f };
			Var0.f_5 = 4001826019;
			break;
		
		case 197:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -60.55f, -1094.75f, 26.89f };
			Var0.f_5 = 506750037;
			break;
		
		case 194:
			Var0.f_3 = joaat("v_ilev_csr_door_l");
			Var0 = { -39.13f, -1108.22f, 26.72f };
			Var0.f_5 = 1496005418;
			break;
		
		case 195:
			Var0.f_3 = joaat("v_ilev_csr_door_r");
			Var0 = { -37.33f, -1108.87f, 26.72f };
			Var0.f_5 = 2431888086;
			break;
		
		case 198:
			Var0.f_3 = joaat("prop_ron_door_01");
			Var0 = { 1943.73f, 3803.63f, 32.31f };
			Var0.f_5 = 2276055512;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 199:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { 316.39f, -276.49f, 54.52f };
			Var0.f_5 = 4201033024;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 200:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { 313.96f, -275.6f, 54.52f };
			Var0.f_5 = 667682830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 201:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -2965.71f, 484.22f, 16.05f };
			Var0.f_5 = 1876735830;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 202:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -2965.82f, 481.63f, 16.05f };
			Var0.f_5 = 2182110125;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 205:
			Var0.f_3 = joaat("v_ilev_abbmaindoor");
			Var0 = { 962.1f, -2183.83f, 31.06f };
			Var0.f_5 = 2046930518;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 206:
			Var0.f_3 = joaat("v_ilev_abbmaindoor2");
			Var0 = { 961.79f, -2187.08f, 31.06f };
			Var0.f_5 = 1208502884;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 207:
			Var0.f_3 = joaat("prop_ch3_04_door_02");
			Var0 = { 2508.43f, -336.63f, 115.76f };
			Var0.f_5 = 1986432421;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 208:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2255.19f, 322.26f, 184.93f };
			Var0.f_5 = 3572168310;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 209:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2254.06f, 319.7f, 184.93f };
			Var0.f_5 = 204301578;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 210:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2301.13f, 336.91f, 184.93f };
			Var0.f_5 = 3974826836;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 211:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2298.57f, 338.05f, 184.93f };
			Var0.f_5 = 65222916;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 212:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2222.32f, 305.86f, 184.93f };
			Var0.f_5 = 3374939974;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 213:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2221.19f, 303.3f, 184.93f };
			Var0.f_5 = 4236535295;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 214:
			Var0.f_3 = joaat("prop_ch1_07_door_01l");
			Var0 = { -2280.6f, 265.43f, 184.93f };
			Var0.f_5 = 2287588667;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 215:
			Var0.f_3 = joaat("prop_ch1_07_door_01r");
			Var0 = { -2278.04f, 266.57f, 184.93f };
			Var0.f_5 = 418772613;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 216:
			Var0.f_3 = joaat("prop_gar_door_04");
			Var0 = { 778.31f, -1867.49f, 30.66f };
			Var0.f_5 = 1679064921;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 217:
			Var0.f_3 = joaat("prop_gate_tep_01_l");
			Var0 = { -721.35f, 91.01f, 56.68f };
			Var0.f_5 = 412198396;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 218:
			Var0.f_3 = joaat("prop_gate_tep_01_r");
			Var0 = { -728.84f, 88.64f, 56.68f };
			Var0.f_5 = 3241211708;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 219:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2287.62f, 363.9f, 174.93f };
			Var0.f_5 = 4241521157;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 220:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2289.78f, 362.91f, 174.93f };
			Var0.f_5 = 1333960556;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 221:
			Var0.f_3 = joaat("prop_artgallery_02_dr");
			Var0 = { -2289.86f, 362.88f, 174.93f };
			Var0.f_5 = 4253180803;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 222:
			Var0.f_3 = joaat("prop_artgallery_02_dl");
			Var0 = { -2292.01f, 361.89f, 174.93f };
			Var0.f_5 = 1750120734;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 223:
			Var0.f_3 = joaat("prop_fnclink_07gate1");
			Var0 = { 1803.94f, 3929.01f, 33.72f };
			Var0.f_5 = 1661506222;
			break;
		
		case 203:
			Var0.f_3 = joaat("v_ilev_genbankdoor2");
			Var0 = { -348.81f, -47.26f, 49.39f };
			Var0.f_5 = 2178851150;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 204:
			Var0.f_3 = joaat("v_ilev_genbankdoor1");
			Var0 = { -351.26f, -46.41f, 49.39f };
			Var0.f_5 = 4220884158;
			MISC::SET_BIT(&(Var0.f_4), 2);
			break;
		
		case 224:
			Var0.f_3 = joaat("prop_abat_slide");
			Var0 = { 962.9084f, -2105.814f, 34.6432f };
			Var0.f_5 = 2624881939;
			break;
	}
	return Var0;
}

int func_114()//Position - 0x166E8
{
	if ((func_116() == 4294967295 || func_116() == 999) && !func_115() == 0)
	{
		return 1;
	}
	return 0;
}

int func_115()//Position - 0x16718
{
	return Global_6374;
}

int func_116()//Position - 0x16723
{
	return Global_6373;
}

int func_117(vector3 vParam0, int iParam1, int iParam2)//Position - 0x1672E
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = 1000000f;
	iVar3 = 10;
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		if (Global_1592D[iVar0 /*10*/].f_7 != 263)
		{
			if (Global_1592D[iVar0 /*10*/].f_9 == iParam1 || iParam1 == 145)
			{
				if (func_118(iVar0) || iParam2 == 0)
				{
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_1592D[iVar0 /*10*/].f_3, true);
					if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_118(int iParam0)//Position - 0x167BD
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_1C21[iParam0], 0);
}

void func_119(int iParam0)//Position - 0x167D5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_120(iParam0, iVar0);
		iVar0++;
	}
}

void func_120(int iParam0, int iParam1)//Position - 0x167F8
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (((iParam0 != 0 || iParam0 != 1) || iParam0 != 2) || iParam0 != 3)
	{
		return;
	}
	func_124(iParam0, iParam1, &iVar2, &iVar3);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = func_121(iVar3, 4294967295, 0);
	}
	else
	{
		STATS::STAT_GET_INT(iVar2, &iVar0, 4294967295);
	}
	switch (iParam1)
	{
		case 2:
			fVar1 = (0.8f + (0.4f * (SYSTEM::TO_FLOAT(iVar0) / 100f)));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(CAM::_0xDC9DA9E8789F5246(), fVar1, 1);
			break;
		
		case 7:
			if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("armenian3")) != 0 || SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("trevor3")) != 0)
			{
				Global_161F2 = 1;
			}
			else
			{
				fVar1 = (1f - (SYSTEM::TO_FLOAT(iVar0) / 100f));
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(CAM::_0xDC9DA9E8789F5246(), fVar1);
				unk_0x9F2796007DC5EEF5(CAM::_0xDC9DA9E8789F5246(), fVar1);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(CAM::_0xDC9DA9E8789F5246(), fVar1);
			}
			break;
	}
}

int func_121(int iParam0, int iParam1, int iParam2)//Position - 0x168E5
{
	int iVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	iVar0 = Global_26B05F[iParam0 /*3*/][func_122(iParam1)];
	if (STATS::STAT_GET_INT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

int func_122(var uParam0)//Position - 0x16917
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == 4294967295)
	{
		iVar1 = func_123();
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

int func_123()//Position - 0x1694B
{
	return Global_1407E0;
}

void func_124(int iParam0, int iParam1, var uParam2, var uParam3)//Position - 0x16957
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp0_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp0_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp0_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp0_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp0_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp0_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp0_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp0_stealth_ability");
					break;
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp1_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp1_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp1_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp1_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp1_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp1_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp1_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp1_stealth_ability");
					break;
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("sp2_special_ability_unlocked");
					break;
				
				case 1:
					*uParam2 = joaat("sp2_stamina");
					break;
				
				case 3:
					*uParam2 = joaat("sp2_lung_capacity");
					break;
				
				case 2:
					*uParam2 = joaat("sp2_strength");
					break;
				
				case 4:
					*uParam2 = joaat("sp2_wheelie_ability");
					break;
				
				case 5:
					*uParam2 = joaat("sp2_flying_ability");
					break;
				
				case 6:
					*uParam2 = joaat("sp2_shooting_ability");
					break;
				
				case 7:
					*uParam2 = joaat("sp2_stealth_ability");
					break;
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
				
				case 1:
					*uParam3 = 65;
					break;
				
				case 3:
					*uParam3 = 67;
					break;
				
				case 2:
					*uParam3 = 66;
					break;
				
				case 4:
					*uParam3 = 68;
					break;
				
				case 5:
					*uParam3 = 69;
					break;
				
				case 6:
					*uParam3 = 70;
					break;
				
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}
}

void func_125()//Position - 0x16BAE
{
	struct<50> Var0;
	
	if ((PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) || !func_14(func_11())) || !func_131())
	{
		return;
	}
	Var0 = 12;
	Var0.f_D = 12;
	Var0.f_1A = 12;
	Var0.f_27 = 9;
	Var0.f_31 = 9;
	func_127(AUDIO::_0x0626A247D2405330(), &Var0, 1, 4294967295);
	func_126(1306, Var0[0], 4294967295, 1);
	func_126(1307, Var0[1], 4294967295, 1);
	func_126(1308, Var0[2], 4294967295, 1);
	func_126(1309, Var0[3], 4294967295, 1);
	func_126(1310, Var0[4], 4294967295, 1);
	func_126(1311, Var0[5], 4294967295, 1);
	func_126(1312, Var0[6], 4294967295, 1);
	func_126(1313, Var0[7], 4294967295, 1);
	func_126(1314, Var0[8], 4294967295, 1);
	func_126(1315, Var0[9], 4294967295, 1);
	func_126(1316, Var0[10], 4294967295, 1);
	func_126(1317, Var0[11], 4294967295, 1);
	func_126(1318, Var0.f_D[0], 4294967295, 1);
	func_126(1319, Var0.f_D[1], 4294967295, 1);
	func_126(1320, Var0.f_D[2], 4294967295, 1);
	func_126(1321, Var0.f_D[3], 4294967295, 1);
	func_126(1322, Var0.f_D[4], 4294967295, 1);
	func_126(1323, Var0.f_D[5], 4294967295, 1);
	func_126(1324, Var0.f_D[6], 4294967295, 1);
	func_126(1325, Var0.f_D[7], 4294967295, 1);
	func_126(1326, Var0.f_D[8], 4294967295, 1);
	func_126(1327, Var0.f_D[9], 4294967295, 1);
	func_126(1328, Var0.f_D[10], 4294967295, 1);
	func_126(1329, Var0.f_D[11], 4294967295, 1);
	func_126(1330, Var0.f_1A[0], 4294967295, 1);
	func_126(1331, Var0.f_1A[1], 4294967295, 1);
	func_126(1332, Var0.f_1A[2], 4294967295, 1);
	func_126(1333, Var0.f_1A[3], 4294967295, 1);
	func_126(1334, Var0.f_1A[4], 4294967295, 1);
	func_126(1335, Var0.f_1A[5], 4294967295, 1);
	func_126(1336, Var0.f_1A[6], 4294967295, 1);
	func_126(1337, Var0.f_1A[7], 4294967295, 1);
	func_126(1338, Var0.f_1A[8], 4294967295, 1);
	func_126(1339, Var0.f_1A[9], 4294967295, 1);
	func_126(1340, Var0.f_1A[10], 4294967295, 1);
	func_126(1341, Var0.f_1A[11], 4294967295, 1);
	func_126(1342, Var0.f_27[0], 4294967295, 1);
	func_126(1343, Var0.f_27[1], 4294967295, 1);
	func_126(1344, Var0.f_27[2], 4294967295, 1);
	func_126(1345, Var0.f_27[3], 4294967295, 1);
	func_126(1346, Var0.f_27[4], 4294967295, 1);
	func_126(1347, Var0.f_27[5], 4294967295, 1);
	func_126(1348, Var0.f_27[6], 4294967295, 1);
	func_126(1349, Var0.f_27[7], 4294967295, 1);
	func_126(1350, Var0.f_27[8], 4294967295, 1);
	func_126(1351, Var0.f_31[0], 4294967295, 1);
	func_126(1352, Var0.f_31[1], 4294967295, 1);
	func_126(1353, Var0.f_31[2], 4294967295, 1);
	func_126(1354, Var0.f_31[3], 4294967295, 1);
	func_126(1355, Var0.f_31[4], 4294967295, 1);
	func_126(1356, Var0.f_31[5], 4294967295, 1);
	func_126(1357, Var0.f_31[6], 4294967295, 1);
	func_126(1358, Var0.f_31[7], 4294967295, 1);
	func_126(1359, Var0.f_31[8], 4294967295, 1);
	func_126(1360, func_11(), 4294967295, 1);
	STATS::STAT_SET_BOOL(joaat("clo_stored_initial"), 1, 1);
	Global_19E56.f_933.f_21B.f_10C7 = 1;
}

var func_126(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x16FC2
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_123();
	}
	if (iParam1 < 0)
	{
		iParam1 = 255;
	}
	iVar0 = 0;
	iVar1 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam2);
		iVar1 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam2);
		iVar1 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar1 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar1 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam2);
		iVar1 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar1 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam2, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
		iVar1 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam2, "_LRPSTAT_INT");
		iVar1 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam2, "_APAPSTAT_INT");
		iVar1 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam2, "_LR2PSTAT_INT");
		iVar1 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam2, "_BIKEPSTAT_INT");
		iVar1 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam2, "_IMPEXPPSTAT_INT");
		iVar1 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam2, "_GUNRPSTAT_INT");
		iVar1 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam2, "_DLCSMUGCHARPSTAT_INT");
		iVar1 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam2, "_GANGOPSPSTAT_INT");
		iVar1 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam2, "_BUSINESSBATPSTAT_INT");
		iVar1 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam2, "_ARENAWARSPSTAT_INT");
		iVar1 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam2, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
		iVar1 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	uVar2 = STATS::STAT_SET_MASKED_INT(iVar0, iParam1, iVar1, 8, iParam3);
	return uVar2;
}

void func_127(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x17500
{
	int iVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_15(iParam0);
		iVar1 = 0;
		while (iVar1 < 12)
		{
			func_130(iParam0, iVar1, &(uParam1->f_D[iVar1]), uParam1[iVar1], &(uParam1->f_1A[iVar1]), iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9)
		{
			func_129(iParam0, iVar1, &(uParam1->f_27[iVar1]), &(uParam1->f_31[iVar1]), iParam2, 145);
			iVar1++;
		}
		if (func_14(iVar0))
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
			if (func_128(161, iParam3))
			{
				uParam1->f_3B = func_121(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_3B = func_121(752, iParam3, 0);
			}
			uParam1->f_3C = func_121(753, iParam3, 0);
			uParam1->f_3D = func_121(754, iParam3, 0);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == AUDIO::_0x0626A247D2405330())
		{
			if (func_128(161, iParam3))
			{
				uParam1->f_3B = func_121(2051, iParam3, 0);
			}
			else
			{
				uParam1->f_3B = func_121(752, iParam3, 0);
			}
		}
	}
}

int func_128(int iParam0, int iParam1)//Position - 0x176A0
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_2727B6[iParam0 /*3*/][func_122(iParam1)];
	if (STATS::STAT_GET_BOOL(uVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0;
}

void func_129(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x176CC
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
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

void func_130(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6)//Position - 0x17C14
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
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

int func_131()//Position - 0x17E55
{
	if (func_133() && func_132(0))
	{
		return 1;
	}
	return 0;
}

var func_132(int iParam0)//Position - 0x17E73
{
	return Global_140675[iParam0];
}

var func_133()//Position - 0x17E83
{
	return func_132(func_123() + 1);
}

void func_134(int iParam0)//Position - 0x17E95
{
	switch (iParam0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 2429016672);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 2429016672, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590C);
			break;
		
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, 2429016672);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 2429016672, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590C);
			break;
		
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, 2429016672);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 2429016672, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590A, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590A);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590B, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590B);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1590C, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_1590C);
			break;
		
		default:
			break;
	}
}

void func_135()//Position - 0x1804E
{
	int iVar0;
	int iVar1;
	
	func_12();
	iVar0 = HUD::GET_MAIN_PLAYER_BLIP_ID();
	if (HUD::DOES_BLIP_EXIST(iVar0))
	{
		iVar1 = Global_19E56.f_933.f_21B.f_10CD;
		if (func_13(14))
		{
			iVar1 = func_15(AUDIO::_0x0626A247D2405330());
		}
		if (iVar1 == 0)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_MICHAEL");
		}
		else if (iVar1 == 1)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_FRANKLIN");
		}
		else if (iVar1 == 2)
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_TREV");
		}
		else
		{
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, "BLIP_PLAYER");
		}
	}
}

void func_136(int iParam0)//Position - 0x180D1
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;
	
	iVar0 = 0;
	while (iVar0 < 44)
	{
		iVar2 = func_137(iVar0);
		if (iVar2 != 0)
		{
			iVar3 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, iVar2);
			if ((iVar3 != 0 && iVar3 != joaat("weapon_unarmed")) && iVar3 != joaat("object"))
			{
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == 4294967295)
				{
					if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
					{
						WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, iVar3);
					}
				}
			}
		}
		iVar0++;
	}
	iVar5 = FILE::GET_NUM_DLC_WEAPONS();
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (FILE::GET_DLC_WEAPON_DATA(iVar4, &Var6))
		{
			iVar3 = Var6.f_1;
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(iParam0, iVar3) == 4294967295)
			{
				if (WEAPON::GET_MAX_AMMO(iParam0, iVar3, &uVar1))
				{
					WEAPON::SET_PED_INFINITE_AMMO(iParam0, 0, iVar3);
				}
			}
		}
		iVar4++;
	}
}

int func_137(int iParam0)//Position - 0x18193
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

void func_138(int iParam0)//Position - 0x18407
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == AUDIO::_0x0626A247D2405330() && PED::GET_PED_MAX_HEALTH(iParam0) == 200)
		{
			PED::SET_PED_MAX_HEALTH(iParam0, SYSTEM::ROUND((IntToFloat(PED::GET_PED_MAX_HEALTH(iParam0)) * Global_40001.f_69)));
		}
		if (Global_19E56.f_933.f_21B.f_122[iVar0] <= 0f)
		{
			Global_19E56.f_933.f_21B.f_122[iVar0] = 100f;
		}
		else if (Global_19E56.f_933.f_21B.f_122[iVar0] <= 10f)
		{
			Global_19E56.f_933.f_21B.f_122[iVar0] = 10f;
		}
		unk_0x65E471E4A2D56226(iParam0, SYSTEM::ROUND((((Global_19E56.f_933.f_21B.f_122[iVar0] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) + 100f)), 0);
	}
}

int func_139(int iParam0)//Position - 0x184F4
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_140(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_140(int iParam0)//Position - 0x18516
{
	return func_141(iParam0, Global_8D15);
}

int func_141(int iParam0, int iParam1)//Position - 0x18527
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

void func_142(int iParam0, int iParam1)//Position - 0x18708
{
	switch (iParam0)
	{
		case 0:
			func_143(4, *iParam1, 0);
			func_143(7, *iParam1, 0);
			func_143(8, *iParam1, 0);
			func_143(11, *iParam1, 0);
			break;
		
		case 1:
			func_143(4, *iParam1, 0);
			func_143(7, *iParam1, 0);
			func_143(8, *iParam1, 0);
			func_143(11, *iParam1, 0);
			if (Global_19E56.f_2361.f_63.f_3A[126])
			{
				func_143(12, *iParam1, 0);
			}
			break;
		
		case 2:
			func_143(4, *iParam1, 0);
			func_143(7, *iParam1, 0);
			func_143(8, *iParam1, 0);
			func_143(11, *iParam1, 0);
			break;
	}
}

void func_143(int iParam0, int iParam1, bool bParam2)//Position - 0x187C0
{
	int iVar0;
	bool bVar1;
	
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
	}
	if (Global_89A8[iParam0 /*31*/].f_18 == 0)
	{
		return;
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < Global_89A8[iParam0 /*31*/].f_18)
	{
		if (bVar1)
		{
			Global_89A8[iParam0 /*31*/].f_19[(iVar0 - 1)] = Global_89A8[iParam0 /*31*/].f_19[iVar0];
			Global_89A8[iParam0 /*31*/].f_19[iVar0] = 0;
		}
		else if (iParam1 == Global_89A8[iParam0 /*31*/].f_19[iVar0])
		{
			Global_89A8[iParam0 /*31*/].f_19[iVar0] = 0;
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_89A8[iParam0 /*31*/].f_18 = (Global_89A8[iParam0 /*31*/].f_18 - 1);
	}
}

void func_144(int iParam0, bool bParam1)//Position - 0x1887C
{
	func_156(iParam0);
	func_150(iParam0, bParam1);
	func_149(iParam0);
	func_148(iParam0);
	func_147(iParam0);
	func_146(iParam0);
	func_145(iParam0);
}

void func_145(int iParam0)//Position - 0x188B0
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == AUDIO::_0x0626A247D2405330())
		{
			Global_19E56.f_933.f_21B.f_904[iVar0] = PLAYER::GET_PLAYER_WANTED_LEVEL(CAM::_0xDC9DA9E8789F5246());
		}
	}
}

void func_146(int iParam0)//Position - 0x188F7
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_19E56.f_933.f_21B.f_8FA[iVar0 /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(iParam0) };
	}
}

void func_147(int iParam0)//Position - 0x18935
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
		{
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
			{
				return;
			}
		}
		Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/] = { unk_0x8000C77B5F336760(iParam0, true) };
		Global_19E56.f_933.f_21B.f_8F2[iVar0] = ENTITY::GET_ENTITY_HEADING(iParam0);
		Global_19E56.f_933.f_21B.f_8F6[iVar0] = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(iParam0);
		if (Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/] >= 8000f)
		{
			Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/] = 7500f;
		}
		else if (Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/] <= -8000f)
		{
			Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/] = -7500f;
		}
		if (Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/].f_1 >= 8000f)
		{
			Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/].f_1 = 7500f;
		}
		else if (Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/].f_1 <= -8000f)
		{
			Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/].f_1 = -7500f;
		}
		if (Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/].f_2 >= 2500f)
		{
			Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/].f_2 = 2000f;
		}
	}
}

void func_148(int iParam0)//Position - 0x18AC2
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_19E56.f_933.f_21B.f_126[iVar0] = PED::GET_PED_ARMOUR(iParam0);
	}
}

void func_149(int iParam0)//Position - 0x18AFE
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_19E56.f_933.f_21B.f_122[iVar0] = (((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(iParam0)) - 100f)) * 100f);
	}
}

void func_150(int iParam0, bool bParam1)//Position - 0x18B5B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		if (iParam0 == AUDIO::_0x0626A247D2405330())
		{
			func_151(iParam0, &(Global_19E56.f_933.f_21B.f_12A[iVar0 /*472*/]));
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

void func_151(int iParam0, var uParam1)//Position - 0x18C4E
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
			iVar3 = func_137(iVar0);
			if (iVar3 != 0)
			{
				Var4 = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(iParam0, func_137(iVar0));
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
					iVar2 = func_154(Var4, iVar1);
					while (iVar2 != 0)
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(iParam0, Var4, iVar2))
						{
							MISC::SET_BIT(&(Var4.f_2), iVar1);
						}
						iVar1++;
						iVar2 = func_154(Var4, iVar1);
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
			if ((FILE::GET_DLC_WEAPON_DATA(iVar5, &Var7) && !func_153(Var7.f_1)) && iVar9 < 50)
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
							if (!func_152(Var8.f_3))
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

int func_152(int iParam0)//Position - 0x18ED8
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

int func_153(int iParam0)//Position - 0x18F73
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

int func_154(int iParam0, int iParam1)//Position - 0x190F9
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
				iVar1 = func_155(iParam0, &uVar4);
				if (iVar1 != 4294967295)
				{
					iVar2 = 0;
					while (iVar2 < FILE::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1))
					{
						if (FILE::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var5))
						{
							if (!func_152(Var5.f_3))
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

int func_155(int iParam0, var uParam1)//Position - 0x19C6A
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

void func_156(int iParam0)//Position - 0x19CA5
{
	int iVar0;
	
	iVar0 = func_15(iParam0);
	if (func_14(iVar0) && !PED::IS_PED_INJURED(iParam0))
	{
		Global_19E56.f_933.f_21B.f_8E4[iVar0] = func_34();
	}
}

int func_157(var uParam0)//Position - 0x19CDF
{
	int iVar0;
	float fVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	char* sVar8;
	char* sVar9;
	
	iVar0 = uParam0->f_2;
	uParam0->f_60.f_4 = uParam0->f_3E.f_9;
	switch (iVar0)
	{
		case 234:
			if (Global_3)
			{
				if (func_181(uParam0, &fVar1))
				{
					return func_165(19, 0, "EXTRASUNNY", "Cirrus", &(uParam0->f_60), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 192:
			if (Global_3)
			{
				if (func_181(uParam0, &fVar1))
				{
					return func_165(9, 0, "Overcast", "RAIN", &(uParam0->f_60), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 75:
			if (Global_3)
			{
				if (func_181(uParam0, &fVar1))
				{
					return func_165(19, 45, "SMOG", "Wispy", &(uParam0->f_60), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 95:
			if (Global_3)
			{
				if (func_181(uParam0, &fVar1))
				{
					return func_165(22, 0, "SMOG", "", &(uParam0->f_60), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 280:
			if (Global_3)
			{
				if (func_181(uParam0, &fVar1))
				{
					return func_165(18, 0, "SMOG", "", &(uParam0->f_60), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 76:
			if (Global_3)
			{
				if (func_181(uParam0, &fVar1))
				{
					return func_165(22, 0, "SMOG", "", &(uParam0->f_60), fVar1, 0, 1, 5f);
				}
			}
			break;
		
		case 174:
			if (func_181(uParam0, &fVar1))
			{
				func_164(20, &uVar3, &iVar2);
				return func_165(iVar2, 0, "", "", &(uParam0->f_60), fVar1, 0, 1, 5f);
			}
			break;
		
		case 231:
			if (func_181(uParam0, &fVar1))
			{
				func_164(15, &uVar5, &iVar4);
				return func_165(iVar4, 0, "", "", &(uParam0->f_60), fVar1, 0, 1, 5f);
			}
			break;
	}
	if (func_161(Global_1406D0))
	{
		iVar6 = func_112(Global_1406D0);
		iVar7 = func_160(Global_1406D0);
		sVar8 = "";
		sVar9 = "";
		if (!func_159())
		{
			sVar8 = "SMOG";
		}
		if (func_158(&fVar1, 5f))
		{
			return func_165(iVar6, iVar7, sVar8, sVar9, &(uParam0->f_60), fVar1, 0, 1, 5f);
		}
	}
	else if (!func_159())
	{
	}
	return 0;
}

int func_158(float fParam0, float fParam1)//Position - 0x19F0E
{
	int iVar0;
	int iVar1;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (iLocal_69 == 4294967295)
	{
		iLocal_69 = iVar0;
	}
	iVar1 = (iVar0 - iLocal_69);
	*fParam0 = (SYSTEM::TO_FLOAT(iVar1) / (fParam1 * 1000f));
	if (*fParam0 < 0f)
	{
		*fParam0 = 0f;
	}
	if (*fParam0 > 1f)
	{
		*fParam0 = 1f;
	}
	return 1;
}

int func_159()//Position - 0x19F58
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	MISC::_GET_WEATHER_TYPE_TRANSITION(&iVar0, &iVar1, &uVar2);
	switch (iVar0)
	{
		case 4021743606:
		case 603685163:
		case 2764706598:
		case 669657108:
			return 0;
			break;
	}
	switch (iVar1)
	{
		case 4021743606:
		case 603685163:
		case 2764706598:
		case 669657108:
			return 0;
			break;
	}
	return 1;
}

int func_160(int iParam0)//Position - 0x19FB7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_161(int iParam0)//Position - 0x19FCA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == 4294967281)
	{
		return 0;
	}
	iVar0 = func_163(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_160(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_112(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_39(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_41(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_162(iParam0);
	if (iVar5 < 1 || iVar5 > func_38(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_162(int iParam0)//Position - 0x1A0A6
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_163(int iParam0)//Position - 0x1A0B8
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

void func_164(int iParam0, var uParam1, var uParam2)//Position - 0x1A0CB
{
	switch (iParam0)
	{
		case 65:
			*uParam1 = 20;
			*uParam2 = 22;
			break;
		
		case 27:
			*uParam1 = 20;
			*uParam2 = 20;
			break;
		
		default:
			*uParam1 = Global_14893[iParam0 /*34*/].f_E;
			*uParam2 = Global_14893[iParam0 /*34*/].f_D;
			break;
	}
}

int func_165(int iParam0, int iParam1, char* sParam2, char* sParam3, var uParam4, float fParam5, int iParam6, bool bParam7, float fParam8)//Position - 0x1A11D
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = -1f;
	switch (uParam4->f_3)
	{
		case 0:
			*uParam4 = func_34();
			iVar5 = func_34();
			func_42(&iVar5, iParam0);
			func_43(&iVar5, iParam1);
			func_44(&iVar5, 0);
			if (func_180(*uParam4, iVar5))
			{
				func_178(&iVar5, 0, 0, 0, 1, 0, 0);
			}
			func_176(*uParam4, iVar5, &iVar1, &iVar2, &iVar3, &uVar6, &uVar7, &uVar8);
			uParam4->f_B = ((iVar1 + iVar2 * 60) + (iVar3 + iParam6) * 3600);
			func_171((SYSTEM::TO_FLOAT(uParam4->f_B) / 3600f));
			if (bParam7)
			{
				GRAPHICS::_0x5F0F3F56635809EF(0.6f);
				unk_0x66F05C65F48B55AF(0);
				GRAPHICS::_0x0AE73D8DF3A762B2(0);
			}
			func_170();
			uParam4->f_A = AUDIO::GET_SOUND_ID();
			unk_0x1190AB7024CBD8CB(uParam4->f_A, "TIME_LAPSE_MASTER", 0, 1);
			AUDIO::START_AUDIO_SCENE("TOD_SHIFT_SCENE");
			func_169();
			uParam4->f_3++;
			break;
		
		case 1:
		case 2:
			if ((CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4)) || !(fParam5 >= 0.99f || fParam5 == -1f))
			{
				if (CAM::DOES_CAM_EXIST(uParam4->f_4) && CAM::IS_CAM_INTERPOLATING(uParam4->f_4))
				{
					fVar0 = CAM::GET_CAM_SPLINE_PHASE(uParam4->f_4);
				}
				else if (!(fParam5 >= 0.99f || fParam5 == -1f))
				{
					fVar0 = fParam5;
				}
				else
				{
					fVar0 = -1f;
				}
				if (fVar0 >= 0.5f)
				{
					if (uParam4->f_3 == 1)
					{
						if (MISC::GET_HASH_KEY(sParam2) != 0)
						{
							MISC::_SET_WEATHER_TYPE_OVER_TIME(sParam2, fParam8);
						}
						if (MISC::GET_HASH_KEY(sParam3) != 0)
						{
							unk_0x5D4CFAB81AB232CA();
							MISC::_SET_CLOUD_HAT_TRANSITION(sParam3, 0);
						}
						uParam4->f_3 = 2;
					}
				}
			}
			if (fVar0 >= 0.99f || fVar0 == -1f)
			{
				iVar5 = *uParam4;
				func_178(&iVar5, uParam4->f_B, 0, 0, 0, 0, 0);
				CLOCK::SET_CLOCK_TIME(func_112(iVar5), func_160(iVar5), func_163(iVar5));
				if (bParam7)
				{
					CAM::_SET_CAM_EFFECT();
				}
				AUDIO::STOP_SOUND(uParam4->f_A);
				AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("TIME_LAPSE");
				if (bParam7)
				{
					GRAPHICS::_0x0AE73D8DF3A762B2(1);
					unk_0x66F05C65F48B55AF(1);
				}
				return 1;
			}
			fVar11 = fVar0;
			fVar9 = 0.1f;
			fVar10 = 0.9f;
			fVar12 = func_168(((fVar11 - fVar9) / (fVar10 - fVar9)), 0f, 1f);
			iVar4 = SYSTEM::ROUND((IntToFloat(uParam4->f_B) * fVar12));
			iVar5 = *uParam4;
			func_178(&iVar5, iVar4, 0, 0, 0, 0, 0);
			CLOCK::SET_CLOCK_TIME(func_112(iVar5), func_160(iVar5), func_163(iVar5));
			if (func_162(iVar5) != CLOCK::GET_CLOCK_DAY_OF_MONTH())
			{
				CLOCK::SET_CLOCK_DATE(func_162(iVar5), func_41(iVar5), func_39(iVar5));
			}
			func_166();
			GRAPHICS::_0xE3E2C1B4C59DBC77(6);
			break;
	}
	return 0;
}

void func_166()//Position - 0x1A3B2
{
	RECORDING::_STOP_RECORDING_THIS_FRAME();
	func_167();
}

void func_167()//Position - 0x1A3C2
{
	Global_434C.f_86 = 1;
}

float func_168(float fParam0, float fParam1, float fParam2)//Position - 0x1A3D0
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

void func_169()//Position - 0x1A3F7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 35)
	{
		HUD::_REMOVE_NOTIFICATION(Global_19E56.f_3721[iVar0 /*104*/].f_10);
		iVar0++;
	}
}

int func_170()//Position - 0x1A423
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		return 0;
	}
	if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
	{
		return 0;
	}
	AUDIO::SET_VEH_RADIO_STATION(iVar0, "OFF");
	return 1;
}

void func_171(float fParam0)//Position - 0x1A471
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_175(&(Global_19E56.f_469B.f_AF[iVar0 /*19*/].f_5)))
		{
			func_172(&(Global_19E56.f_469B.f_AF[iVar0 /*19*/].f_5), (fParam0 * 60f));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		if (func_175(&(Global_19E56.f_469B.f_16A[iVar1 /*3*/])))
		{
			func_172(&(Global_19E56.f_469B.f_16A[iVar1 /*3*/]), (fParam0 * 60f));
		}
		iVar1++;
	}
	AUDIO::SKIP_RADIO_FORWARD();
}

void func_172(int iParam0, float fParam1)//Position - 0x1A502
{
	if (func_175(iParam0))
	{
		func_65(iParam0, (func_173(iParam0) + fParam1));
	}
}

float func_173(var uParam0)//Position - 0x1A525
{
	if (func_175(uParam0))
	{
		if (func_174(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_66(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_174(var uParam0)//Position - 0x1A564
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 2);
}

bool func_175(var uParam0)//Position - 0x1A574
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*uParam0, 1);
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)//Position - 0x1A584
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_180(iParam0, iParam1))
	{
		iVar0 = func_41(iParam1);
		iVar1 = func_39(iParam0);
		iVar2 = (func_39(iParam0) - func_39(iParam1));
		iVar3 = (func_41(iParam0) - func_41(iParam1));
		iVar4 = (func_162(iParam0) - func_162(iParam1));
		iVar5 = (func_112(iParam0) - func_112(iParam1));
		iVar6 = (func_160(iParam0) - func_160(iParam1));
		iVar7 = (func_163(iParam0) - func_163(iParam1));
	}
	else
	{
		iVar0 = func_41(iParam0);
		iVar1 = func_39(iParam1);
		iVar2 = (func_39(iParam1) - func_39(iParam0));
		iVar3 = (func_41(iParam1) - func_41(iParam0));
		iVar4 = (func_162(iParam1) - func_162(iParam0));
		iVar5 = (func_112(iParam1) - func_112(iParam0));
		iVar6 = (func_160(iParam1) - func_160(iParam0));
		iVar7 = (func_163(iParam1) - func_163(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_38(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_177(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_177(float fParam0, float fParam1, float fParam2)//Position - 0x1A785
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_178(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A7C7
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_39(*iParam0);
	iVar1 = func_41(*iParam0);
	iVar2 = func_162(*iParam0);
	iVar3 = func_112(*iParam0);
	iVar4 = func_160(*iParam0);
	iVar5 = func_163(*iParam0);
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
	iVar6 = func_38(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_38(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_179(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1A949
{
	func_44(uParam0, iParam1);
	func_43(uParam0, iParam2);
	func_42(uParam0, iParam3);
	func_36(uParam0, iParam5);
	func_37(uParam0, iParam4);
	func_35(uParam0, iParam6);
}

int func_180(int iParam0, int iParam1)//Position - 0x1A981
{
	int iVar0;
	int iVar1;
	
	if (!func_161(iParam1) || !func_161(iParam0))
	{
		return 1;
	}
	iVar0 = func_39(iParam0);
	iVar1 = func_39(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_41(iParam0);
	iVar1 = func_41(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_162(iParam0);
	iVar1 = func_162(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_112(iParam0);
	iVar1 = func_112(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_160(iParam0);
	iVar1 = func_160(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_163(iParam0);
	iVar1 = func_163(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_181(var uParam0, float fParam1)//Position - 0x1AA8D
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	float fVar4;
	
	vVar0 = { vLocal_67 };
	vVar1 = { vLocal_68 };
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3E.f_D, 0))
	{
		vLocal_67 = { unk_0x8000C77B5F336760(uParam0->f_3E.f_D, true) };
		vVar0 = { vLocal_67 };
	}
	if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3E.f_C, 0))
	{
		vLocal_68 = { unk_0x8000C77B5F336760(uParam0->f_3E.f_C, true) };
		vVar1 = { vLocal_68 };
	}
	vVar2 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, false);
	fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar2, false);
	*fParam1 = (fVar4 / fVar3);
	if (*fParam1 < 0f)
	{
		*fParam1 = 0f;
	}
	if (*fParam1 > 1f)
	{
		*fParam1 = 1f;
	}
	return 1;
}

void func_182()//Position - 0x1AB38
{
	func_183((Global_16B5C - 1));
}

void func_183(int iParam0)//Position - 0x1AB4A
{
	Global_16B5C = iParam0;
}

int func_184(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9)//Position - 0x1AB58
{
	return func_185(uParam0, iParam1, iParam2, uParam3, fParam4, fParam5, bParam6, bParam7, sParam8, iParam9, 0, 0, 0);
	return 1;
}

int func_185(var uParam0, int iParam1, int iParam2, var uParam3, float fParam4, float fParam5, bool bParam6, bool bParam7, char* sParam8, int iParam9, bool bParam10, bool bParam11, int iParam12)//Position - 0x1AB7F
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	float fVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = uParam3;
	if (!uParam0->f_10)
	{
		if (STREAMING::_0x71E7B2E657449AAD())
		{
			if (!bParam10)
			{
				uParam0->f_D = AUDIO::_0x0626A247D2405330();
			}
			if ((!PED::IS_PED_INJURED(uParam0->f_D) || bParam10) && !PED::IS_PED_INJURED(uParam0->f_C))
			{
				uParam0->f_1B = 0;
				Global_16086 = 1;
				if (!bParam10)
				{
					if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_D))
					{
						iVar1 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_D, 0);
						func_213(iVar1, 0);
					}
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_D, true);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_C, true);
				}
				uParam0->f_15 = func_212();
				func_564(1);
				if (bParam6)
				{
					iVar0 |= 4;
				}
				if (bParam7)
				{
					iVar0 |= 8;
				}
				if (CAM::DOES_CAM_EXIST(iParam1) || !MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					iVar0 |= 2;
				}
				if (func_211())
				{
					iVar0 |= 1;
				}
				if (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				{
					STREAMING::START_PLAYER_SWITCH(uParam0->f_D, uParam0->f_C, iVar0, iParam2);
					if (bParam11)
					{
						STREAMING::_0x5F2013F8BC24EE69(iParam12);
					}
					switch (func_15(uParam0->f_D))
					{
						case 0:
							GRAPHICS::_0xD2209BE128B5418C("SwitchHUDMichaelOut");
							break;
						
						case 1:
							GRAPHICS::_0xD2209BE128B5418C("SwitchHUDMichaelOut");
							break;
						
						case 2:
							GRAPHICS::_0xD2209BE128B5418C("SwitchHUDTrevorOut");
							break;
					}
					GRAPHICS::_0xD2209BE128B5418C("SwitchHUDOut");
				}
				else if (STREAMING::_0x933BBEEB8C61B5F4())
				{
					STREAMING::_SWITCH_IN_PLAYER(uParam0->f_C);
					func_78(0);
				}
				else
				{
					return 0;
				}
				if (CAM::DOES_CAM_EXIST(iParam1))
				{
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(unk_0x8000C77B5F336760(uParam0->f_D, true), unk_0x8000C77B5F336760(uParam0->f_C, true)) != 3)
					{
						STREAMING::SET_PLAYER_SWITCH_OUTRO(CAM::GET_CAM_COORD(iParam1), CAM::GET_CAM_ROT(iParam1, iParam9), CAM::GET_CAM_FOV(iParam1), CAM::GET_CAM_FAR_CLIP(iParam1), iParam9);
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					STREAMING::_0x0FDE9DBFC0A6BC65(sParam8);
				}
				if (!Global_434C.f_6F)
				{
					AUDIO::PLAY_SOUND(4294967295, "CHARACTER_CHANGE_UP_MASTER", 0, 0, 0, 1);
					if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(unk_0x8000C77B5F336760(uParam0->f_D, true), unk_0x8000C77B5F336760(uParam0->f_C, true)) == 3)
					{
						AUDIO::PLAY_SOUND(4294967295, "slow", "SHORT_PLAYER_SWITCH_SOUND_SET", 0, 0, 1);
					}
					if (Global_434C.f_6D == 4294967295)
					{
						Global_434C.f_6D = AUDIO::GET_SOUND_ID();
					}
					Global_434C.f_6E = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
					AUDIO::PLAY_SOUND(Global_434C.f_6D, "CHARACTER_CHANGE_SKY_MASTER", 0, 0, 0, 1);
					AUDIO::START_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
					if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
					{
					}
				}
				if (Global_434C.f_6D != 4294967295 && Global_434C.f_6E == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
				{
					AUDIO::STOP_SOUND(Global_434C.f_6D);
					AUDIO::RELEASE_SOUND_ID(Global_434C.f_6D);
					Global_434C.f_6D = 4294967295;
					Global_434C.f_6E = 0;
				}
				uParam0->f_19 = MISC::GET_GAME_TIMER();
				uParam0->f_10 = 1;
				func_210(1);
				HUD::KEY_HUD_COLOUR(1, uParam0->f_D);
				if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(1);
				}
				if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3)
				{
					CAM::SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(1);
				}
				if (!bParam10)
				{
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_C) == func_16(0))
					{
						GRAPHICS::_0xBF59707B3E5ED531(func_96(0));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_C) == func_16(2))
					{
						GRAPHICS::_0xBF59707B3E5ED531(func_96(2));
					}
					else if (ENTITY::GET_ENTITY_MODEL(uParam0->f_C) == func_16(1))
					{
						GRAPHICS::_0xBF59707B3E5ED531(func_96(1));
					}
					else
					{
						GRAPHICS::_0xBF59707B3E5ED531("");
					}
					GRAPHICS::_0xBDEB86F4D5809204(0f);
				}
			}
			else
			{
				uParam0->f_11 = 1;
			}
		}
		else
		{
			uParam0->f_11 = 1;
		}
	}
	if (uParam0->f_10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			if (!Global_434C.f_6F)
			{
			}
			if (func_597(uParam3, 512))
			{
				if (!STREAMING::_0xDFA80CB25D0A19B3())
				{
				}
				else if (Global_16B5C == 0)
				{
					STREAMING::_0xAD5FDF34B81BFE79();
				}
			}
			if (STREAMING::GET_PLAYER_SWITCH_TYPE() == 3)
			{
				if (STREAMING::GET_PLAYER_SHORT_SWITCH_STATE() >= 1)
				{
					if (!uParam0->f_12)
					{
						func_169();
						uParam0->f_12 = 1;
					}
					if (!uParam0->f_16)
					{
						func_189(0, 1);
						uParam0->f_16 = 1;
					}
				}
			}
			else
			{
				if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 8)
				{
					if (!uParam0->f_12)
					{
						func_169();
						uParam0->f_12 = 1;
					}
				}
				if (!uParam0->f_12)
				{
					if (STREAMING::DESTROY_PLAYER_IN_PAUSE_MENU() && STREAMING::GET_PLAYER_SWITCH_STATE() == 3)
					{
						vVar2 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), true) };
						vVar3 = { CAM::_GET_GAMEPLAY_CAM_COORDS() };
						fVar4 = 20f;
						fVar5 = SYSTEM::VDIST2(vVar2, vVar3);
						if (fVar5 < (fVar4 * fVar4))
						{
							func_169();
							uParam0->f_12 = 1;
						}
					}
				}
				if (!uParam0->f_16)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() > 2)
					{
						func_189(0, 1);
						uParam0->f_16 = 1;
					}
				}
				if (!uParam0->f_17)
				{
					if (STREAMING::GET_PLAYER_SWITCH_STATE() >= 3)
					{
						GRAPHICS::_0xB11D94BC55F41932("CSM_ST_BOX3x3");
						uParam0->f_17 = 1;
					}
				}
			}
		}
		else
		{
			if (!uParam0->f_12)
			{
				uParam0->f_12 = 1;
				func_169();
			}
			if (!uParam0->f_16)
			{
				func_189(0, 1);
				uParam0->f_16 = 1;
			}
			uParam0->f_11 = 1;
		}
	}
	if (uParam0->f_11)
	{
		iVar6 = func_187();
		if (((iVar6 != 8 && iVar6 != 9) && iVar6 != 10) && iVar6 != 55)
		{
			func_564(uParam0->f_15);
		}
		if (uParam0->f_17)
		{
			GRAPHICS::_0x27CB772218215325();
			uParam0->f_17 = 0;
		}
		uParam0->f_10 = 0;
		uParam0->f_11 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 0;
		uParam0->f_14 = 0;
		uParam0->f_18 = 0;
		uParam0->f_1B = 0;
		if (Global_434C.f_6D != 4294967295 && Global_434C.f_6E == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_434C.f_6D);
			AUDIO::RELEASE_SOUND_ID(Global_434C.f_6D);
			Global_434C.f_6D = 4294967295;
			Global_434C.f_6E = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CHARACTER_CHANGE_IN_SKY_SCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CHARACTER_CHANGE_IN_SKY_SCENE");
		}
		if (Global_434C.f_6B != 4294967295 && Global_434C.f_6C == MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()))
		{
			AUDIO::STOP_SOUND(Global_434C.f_6B);
			AUDIO::RELEASE_SOUND_ID(Global_434C.f_6B);
			Global_434C.f_6B = 4294967295;
			Global_434C.f_6C = 0;
		}
		if (fParam5 <= 360f && fParam5 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam5);
		}
		if (fParam4 <= 360f && fParam4 >= -360f)
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam4, 1065353216);
		}
		if (!Global_9175)
		{
			CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
			CAM::CUSTOM_MENU_COORDINATES(0f);
			CAM::_0x0225778816FDC28C(0f);
		}
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_D))
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_D, true, 0);
				PED::SET_PED_CAN_BE_TARGETTED(uParam0->f_D, true);
				if (!PED::IS_PED_IN_ANY_VEHICLE(uParam0->f_D, 0))
				{
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_D, true, 0);
				}
				if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(uParam0->f_D))
				{
					iVar7 = PED::GET_VEHICLE_PED_IS_IN(uParam0->f_D, 0);
					func_213(iVar7, 1);
				}
			}
		}
		func_78(0);
		if (!bParam10)
		{
			if (!PED::IS_PED_INJURED(uParam0->f_D) || bParam10)
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_D, false);
			}
			if (!PED::IS_PED_INJURED(uParam0->f_C))
			{
				ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_C, false);
			}
			PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
			func_186();
			GRAPHICS::_0xBBF327DED94E4DEB(func_96(func_11()));
		}
		func_210(0);
		HUD::KEY_HUD_COLOUR(0, 0);
		return 0;
	}
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	return 1;
}

void func_186()//Position - 0x1B214
{
	if (Global_255F11.f_18CA)
	{
		Global_255F11.f_18CA = 0;
	}
}

int func_187()//Position - 0x1B22E
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return Global_1650F;
	}
	if (func_188())
	{
		return Global_1650F;
	}
	return 318;
}

int func_188()//Position - 0x1B255
{
	if (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_189(bool bParam0, bool bParam1)//Position - 0x1B26F
{
	if (bParam1)
	{
		func_208(bParam0, 0);
	}
	func_206(0);
	func_190(65);
}

void func_190(int iParam0)//Position - 0x1B28E
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	iVar0 = func_205();
	if (Global_140859)
	{
		sVar1 = func_204(iParam0);
		iVar2 = MISC::GET_HASH_KEY(sVar1);
		func_203(&Global_258B1A, 1, 0);
		unk_0xB6EA616387C016A8(iVar2, 1, iVar0, iParam0, 0);
	}
	if (iParam0 == 2)
	{
		func_191();
	}
	Global_140818 = iParam0;
}

void func_191()//Position - 0x1B2DA
{
	if (Global_2581F8)
	{
		if (func_193())
		{
			CAM::DO_SCREEN_FADE_OUT(0);
			func_192();
		}
	}
}

void func_192()//Position - 0x1B2FC
{
	if (Global_2581F5)
	{
		if (!Global_2581F4)
		{
			Global_2581F4 = 1;
			Global_2581FA = MISC::GET_GAME_TIMER();
			Global_2581F9 = 1;
		}
	}
}

int func_193()//Position - 0x1B325
{
	if (Global_255F11.f_18CA && Global_2581F5)
	{
		if (func_196())
		{
			if (func_194() && !CAM::IS_SCREEN_FADED_OUT())
			{
				if (Global_255F11.f_18DE == 122)
				{
					return 1;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_44.f_2, 26))
				{
					return 1;
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_44.f_2, 27))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_194()//Position - 0x1B3AA
{
	if (func_195() == 0)
	{
		return 1;
	}
	return 0;
}

int func_195()//Position - 0x1B3BF
{
	return Global_1406D2.f_12;
}

int func_196()//Position - 0x1B3CD
{
	if (func_199(CAM::_0xDC9DA9E8789F5246()) && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_197632.f_CF3, 22))
	{
		return 0;
	}
	if (Global_141356)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (func_198())
	{
		return 0;
	}
	if ((Global_2581F6 && func_197()) || Global_2581F6 == 0)
	{
		return 1;
	}
	if (Global_2581F7)
	{
		if (Global_255F11.f_18DE == 122)
		{
			return 1;
		}
	}
	return 0;
}

bool func_197()//Position - 0x1B450
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_440000.f_23D58, 12);
}

bool func_198()//Position - 0x1B468
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_255C02.f_2, 11);
}

int func_199(int iParam0)//Position - 0x1B47C
{
	if (iParam0 != func_202())
	{
		if (func_201(iParam0, 1, 1))
		{
			if (Global_24FBF9[iParam0 /*413*/].f_135.f_4 != 4294967295)
			{
				return func_200(Global_24FBF9[iParam0 /*413*/].f_135.f_4) == 13;
			}
		}
	}
	return 0;
}

int func_200(int iParam0)//Position - 0x1B4C3
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

int func_201(int iParam0, bool bParam1, bool bParam2)//Position - 0x1B81D
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

int func_202()//Position - 0x1B867
{
	return 4294967295;
}

void func_203(var uParam0, bool bParam1, bool bParam2)//Position - 0x1B870
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

char* func_204(int iParam0)//Position - 0x1B8AD
{
	switch (iParam0)
	{
		case 0:
			return "TRANSITION_STATE_EMPTY";
		
		case 1:
			return "TRANSITION_STATE_SP_SWOOP_UP";
		
		case 2:
			return "TRANSITION_STATE_MP_SWOOP_UP";
		
		case 3:
			return "TRANSITION_STATE_CREATOR_SWOOP_UP";
		
		case 4:
			return "TRANSITION_STATE_PRE_HUD_CHECKS";
		
		case 5:
			return "TRANSITION_STATE_WAIT_HUD_EXIT";
		
		case 7:
			return "TRANSITION_STATE_SP_SWOOP_DOWN";
		
		case 8:
			return "TRANSITION_STATE_MP_SWOOP_DOWN";
		
		case 6:
			return "TRANSITION_STATE_WAIT_FOR_SUMMON";
		
		case 9:
			return "TRANSITION_STATE_CANCEL_JOINING";
		
		case 15:
			return "TRANSITION_STATE_WAIT_ON_INVITE";
		
		case 10:
			return "TRANSITION_STATE_RETRY_LOADING";
		
		case 11:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_1";
		
		case 12:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_2";
		
		case 13:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_3";
		
		case 14:
			return "TRANSITION_STATE_RETRY_LOADING_SLOT_4";
		
		case 16:
			return "TRANSITION_STATE_PREJOINING_FM_SESSION_CHECKS";
		
		case 17:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_FM";
		
		case 18:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_FM";
		
		case 19:
			return "TRANSITION_STATE_CONFIRM_FM_SESSION_JOINING";
		
		case 21:
			return "TRANSITION_STATE_CREATION_ENTER_SESSION";
		
		case 22:
			return "TRANSITION_STATE_PRE_FM_LAUNCH_SCRIPT";
		
		case 23:
			return "TRANSITION_STATE_FM_TEAMFULL_CHECK";
		
		case 24:
			return "TRANSITION_STATE_START_FM_LAUNCH_SCRIPT";
		
		case 25:
			return "TRANSITION_STATE_FM_TRANSITION_CREATE_PLAYER";
		
		case 26:
			return "TRANSITION_STATE_IS_FM_AND_TRANSITION_READY";
		
		case 27:
			return "TRANSITION_STATE_FM_SWOOP_DOWN";
		
		case 28:
			return "TRANSITION_STATE_FM_FINAL_SETUP_PLAYER";
		
		case 29:
			return "TRANSITION_STATE_MOVE_FM_TO_RUNNING_STATE";
		
		case 30:
			return "TRANSITION_STATE_FM_HOW_TO_TERMINATE";
		
		case 20:
			return "TRANSITION_STATE_WAIT_JOIN_FM_SESSION";
		
		case 31:
			return "TRANSITION_STATE_START_CREATOR_PRE_LAUNCH_SCRIPT_CHECK";
		
		case 32:
			return "TRANSITION_STATE_START_CREATOR_LAUNCH_SCRIPT";
		
		case 33:
			return "TRANSITION_STATE_CREATOR_TRANSITION_CREATE_PLAYER";
		
		case 34:
			return "TRANSITION_STATE_IS_CREATOR_AND_TRANSITION_READY";
		
		case 35:
			return "TRANSITION_STATE_CREATOR_SWOOP_DOWN";
		
		case 36:
			return "TRANSITION_STATE_CREATOR_FINAL_SETUP_PLAYER";
		
		case 37:
			return "TRANSITION_STATE_MOVE_CREATOR_TO_RUNNING_STATE";
		
		case 38:
			return "TRANSITION_STATE_PREJOINING_TESTBED_SESSION_CHECKS";
		
		case 39:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_JOIN_TESTBED";
		
		case 40:
			return "TRANSITION_STATE_LOOK_FOR_FRESH_HOST_TESTBED";
		
		case 41:
			return "TRANSITION_STATE_LOOK_TO_JOIN_ANOTHER_SESSION_TESTBED";
		
		case 42:
			return "TRANSITION_STATE_LOOK_TO_HOST_SESSION_TESTBED";
		
		case 43:
			return "TRANSITION_STATE_CONFIRM_TESTBED_SESSION_JOINING";
		
		case 45:
			return "TRANSITION_STATE_START_TESTBED_LAUNCH_SCRIPT";
		
		case 46:
			return "TRANSITION_STATE_TESTBED_TRANSITION_CREATE_PLAYER";
		
		case 47:
			return "TRANSITION_STATE_IS_TESTBED_AND_TRANSITION_READY";
		
		case 48:
			return "TRANSITION_STATE_TESTBED_SWOOP_DOWN";
		
		case 49:
			return "TRANSITION_STATE_TESTBED_FINAL_SETUP_PLAYER";
		
		case 50:
			return "TRANSITION_STATE_MOVE_TESTBED_TO_RUNNING_STATE";
		
		case 51:
			return "TRANSITION_STATE_TESTBED_HOW_TO_TERMINATE";
		
		case 44:
			return "TRANSITION_STATE_WAIT_JOIN_TESTBED_SESSION";
		
		case 53:
			return "TRANSITION_STATE_WAIT_FOR_TRANSITION_SESSION_TO_SETUP";
		
		case 52:
			return "TRANSITION_STATE_QUIT_CURRENT_SESSION_PROMPT";
		
		case 54:
			return "TRANSITION_STATE_TERMINATE_SP";
		
		case 55:
			return "TRANSITION_STATE_WAIT_TERMINATE_SP";
		
		case 56:
			return "TRANSITION_STATE_KICK_TERMINATE_SESSION";
		
		case 57:
			return "TRANSITION_STATE_TERMINATE_SESSION";
		
		case 58:
			return "TRANSITION_STATE_WAIT_TERMINATE_SESSION";
		
		case 59:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_HOLD";
		
		case 60:
			return "TRANSITION_STATE_TERMINATE_SESSION_AND_MOVE_INTO_HOLDING_STATE";
		
		case 61:
			return "TRANSITION_STATE_TEAM_SWAPPING_CHECKS";
		
		case 62:
			return "TRANSITION_STATE_RETURN_TO_SINGLEPLAYER";
		
		case 63:
			return "TRANSITION_STATE_WAIT_FOR_SINGLEPLAYER_TO_START";
		
		case 64:
			return "TRANSITION_STATE_WAITING_FOR_EXTERNAL_TERMINATION_CALL";
		
		case 65:
			return "TRANSITION_STATE_TERMINATE_MAINTRANSITION";
		
		case 66:
			return "TRANSITION_STATE_WAIT_FOR_DIRTY_LOAD_CONFIRM";
		
		default:
	}
	return "";
}

var func_205()//Position - 0x1BC26
{
	return Global_140818;
}

void func_206(int iParam0)//Position - 0x1BC32
{
	int iVar0;
	
	iVar0 = func_207();
	Global_140817 = iParam0;
}

int func_207()//Position - 0x1BC46
{
	return Global_140817;
}

void func_208(bool bParam0, bool bParam1)//Position - 0x1BC52
{
	int iVar0;
	
	func_209(&Global_42FC, bParam1);
	GRAPHICS::_0x22A249A53034450A(0);
	iVar0 = 1;
	if (bParam0)
	{
		if (iVar0 == 1)
		{
			STREAMING::STOP_PLAYER_SWITCH();
			func_78(0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_141337))
			{
				if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_141337, 0))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(Global_141337))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_141337, false, 0);
					}
					PED::DELETE_PED(&Global_141337);
				}
			}
		}
	}
}

void func_209(var uParam0, bool bParam1)//Position - 0x1BCB7
{
	uParam0->f_F = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	if (CAM::DOES_CAM_EXIST(uParam0->f_9))
	{
		if (CAM::IS_CAM_ACTIVE(uParam0->f_9))
		{
			func_210(0);
		}
		CAM::DESTROY_CAM(uParam0->f_9, 0);
	}
	if (!Global_9175)
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(1);
		CAM::CUSTOM_MENU_COORDINATES(0f);
		CAM::_0x0225778816FDC28C(0f);
	}
	Global_24B2CE.f_253 = 0f;
	if (!bParam1)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 0, 1, 0, 0);
	}
}

void func_210(int iParam0)//Position - 0x1BD2F
{
	Global_434A = iParam0;
}

bool func_211()//Position - 0x1BD3C
{
	return Global_140859;
}

int func_212()//Position - 0x1BD48
{
	if (Global_38B1.f_1 == 1)
	{
		return 1;
	}
	return 0;
}

void func_213(int iParam0, int iParam1)//Position - 0x1BD61
{
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		VEHICLE::_0xC50CE861B55EAB8B(iParam0, iParam1);
	}
	else
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, 0);
		VEHICLE::_0xC50CE861B55EAB8B(iParam0, iParam1);
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
}

int func_214(var uParam0, int iParam1, var uParam2, float fParam3, float fParam4, bool bParam5, bool bParam6, char* sParam7, bool bParam8, int iParam9)//Position - 0x1BD93
{
	return func_185(uParam0, 0, iParam1, uParam2, fParam3, fParam4, bParam5, bParam6, sParam7, 2, 0, bParam8, iParam9);
	return 1;
}

void func_215(var uParam0, int iParam1, int iParam2, int iParam3, float fParam4, float fParam5, int iParam6, int iParam7, var uParam8)//Position - 0x1BDBA
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	
	*iParam1 = 1;
	*iParam2 = 0;
	*iParam3 = 0;
	if (uParam0->f_11.f_5 < 3 && uParam0->f_11.f_6 < 3)
	{
		if (uParam0->f_11.f_5 != uParam0->f_11.f_6)
		{
			iVar0 = func_528(uParam0->f_11.f_5);
			iVar1 = func_528(uParam0->f_11.f_6);
			vVar2 = { Global_19E56.f_933.f_21B.f_8E8[iVar0 /*3*/] };
			vVar3 = { Global_19E56.f_933.f_21B.f_8E8[iVar1 /*3*/] };
			if (SYSTEM::VDIST2(vVar2, vVar3) < (150f * 150f))
			{
				*iParam2 = 1;
			}
		}
	}
	if (func_11() == 145)
	{
		*iParam1 = 0;
	}
	if (Global_3)
	{
		*iParam1 = 0;
	}
	if (func_597(*uParam8, 64))
	{
		if (!func_597(*uParam8, 512))
		{
			func_60(uParam8, 512);
		}
		*iParam3 = 2;
		*iParam1 = 0;
	}
	if (((uParam0->f_2 == 174 || uParam0->f_2 == 232) || uParam0->f_2 == 233) || uParam0->f_2 == 231)
	{
		if (*iParam3 == 0)
		{
			*iParam3 = 1;
		}
		*iParam1 = 0;
	}
	if (Global_1625C)
	{
		*iParam1 = 0;
	}
	if (!((uParam0->f_2 == 5 || uParam0->f_2 == 6) || uParam0->f_2 == 7))
	{
		if (*iParam3 == 0)
		{
			*iParam3 = 1;
		}
	}
	else if (*iParam3 == 0)
	{
		iVar4 = uParam0->f_3E.f_D;
		if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			iVar4 = AUDIO::_0x0626A247D2405330();
		}
		if (STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(unk_0x8000C77B5F336760(iVar4, false), unk_0x8000C77B5F336760(uParam0->f_3E.f_C, false)) == 3)
		{
			if (*iParam3 == 0)
			{
				if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_3E.f_C, 0))
				{
					if (!PED::_0x66680A92700F43DF(uParam0->f_3E.f_C))
					{
						*iParam3 = 2;
					}
				}
			}
			if (*iParam3 == 0)
			{
				iVar5 = 0;
				iVar6 = 0;
				iVar7 = INTERIOR::GET_INTERIOR_FROM_ENTITY(iVar4);
				if (INTERIOR::IS_VALID_INTERIOR(iVar7))
				{
					iVar5 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar7);
				}
				if (INTERIOR::IS_VALID_INTERIOR(uParam0->f_10))
				{
					iVar6 = INTERIOR::GET_INTERIOR_GROUP_ID(uParam0->f_10);
				}
				if (iVar5 != iVar6)
				{
					*iParam3 = 2;
				}
				else
				{
					if (iVar5 != 0)
					{
					}
					if (iVar6 != 0)
					{
					}
				}
			}
		}
	}
	if (!func_216(uParam0->f_2, fParam4, &uVar8, fParam5))
	{
	}
	*iParam6 = 0;
	*iParam7 = 0;
	if (Global_16B5C > 0)
	{
		*iParam7 = 1;
	}
}

int func_216(int iParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1BFF3
{
	*uParam2 = 1f;
	if (CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == 4)
	{
		switch (iParam0)
		{
			case 211:
			case 213:
				*uParam3 = -0.0922f;
				*uParam1 = -32.8439f;
				return 1;
				break;
			
			case 291:
				*uParam3 = -0.092f;
				*uParam1 = -3.5553f;
				return 1;
				break;
			
			case 299:
				*uParam3 = -0.0916f;
				*uParam1 = -1.4212f;
				return 1;
				break;
			
			case 293:
			case 294:
				*uParam3 = -0.0944f;
				*uParam1 = -4.2087f;
				return 1;
				break;
			
			case 292:
			case 295:
				*uParam3 = -0.092f;
				*uParam1 = -2.1053f;
				return 1;
				break;
			
			case 312:
				*uParam3 = 0f;
				*uParam1 = -7.6775f;
				return 1;
				break;
		}
		*uParam3 = 0f;
		*uParam1 = 0f;
		return 1;
	}
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
			*uParam1 = 999f;
			*uParam3 = 999f;
			return 0;
			break;
		
		case 134:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 105:
			*uParam3 = -325.239f;
			*uParam1 = -9.9f;
			return 1;
			break;
		
		case 280:
			if (!Global_3)
			{
				*uParam3 = -60f;
				*uParam1 = 0f;
				return 1;
			}
			break;
		
		case 224:
			return func_216(222, uParam1, uParam2, uParam3);
			break;
		
		case 193:
			*uParam3 = -9f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 236:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 289:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 290:
			return func_216(289, uParam1, uParam2, uParam3);
			break;
		
		case 278:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 271:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 245:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 40:
			return func_216(245, uParam1, uParam2, uParam3);
			break;
		
		case 192:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 89:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 90:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
		
		case 127:
			*uParam3 = 0f;
			*uParam1 = 0f;
			return 1;
			break;
	}
	*uParam1 = 999f;
	*uParam3 = 999f;
	return 0;
}

int func_217(vector3 vParam0, vector3 vParam1, float fParam2, bool bParam3)//Position - 0x1C2AA
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

int func_218(int iParam0)//Position - 0x1C325
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case 231:
			iVar0 = joaat("a_m_m_hillbilly_02");
			iVar1 = func_220();
			iVar2 = joaat("BALLER");
			iVar3 = joaat("DUBSTA");
			STREAMING::REQUEST_MODEL(iVar2);
			STREAMING::REQUEST_MODEL(iVar3);
			STREAMING::REQUEST_MODEL(iVar0);
			STREAMING::REQUEST_MODEL(iVar1);
			STREAMING::REQUEST_MODEL(joaat("RADI"));
			STREAMING::REQUEST_MODEL(joaat("SABREGT"));
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexile2");
			VEHICLE::REQUEST_VEHICLE_RECORDING(1, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(2, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(3, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(4, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(5, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(6, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(7, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(8, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(9, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(10, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(11, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(12, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(13, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(14, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(15, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(16, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(17, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(18, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(19, "lkexcile2_chase");
			VEHICLE::REQUEST_VEHICLE_RECORDING(100, "lkexcile2_chase");
			STREAMING::REQUEST_ANIM_DICT("missexile2");
			STREAMING::REQUEST_ANIM_DICT("missexile2switch");
			STREAMING::REQUEST_ANIM_DICT("missswitch");
			STREAMING::REQUEST_ANIM_DICT("shake_cam_all@");
			func_219(15);
			return 1;
			break;
	}
	return 0;
}

void func_219(int iParam0)//Position - 0x1C489
{
	if (Global_1608B == 4294967295)
	{
		Global_1608B = iParam0;
	}
}

int func_220()//Position - 0x1C4A2
{
	return joaat("a_c_chop");
}

int func_221(var uParam0)//Position - 0x1C4AF
{
	char* sVar0;
	
	if (uParam0->f_10 != 0)
	{
		switch (uParam0->f_2)
		{
			case 187:
			case default:
		}
		sVar0 = "";
		return 0;
		INTERIOR::FORCE_ROOM_FOR_ENTITY(uParam0->f_11[uParam0->f_3D], uParam0->f_10, MISC::GET_HASH_KEY(sVar0));
		return 1;
	}
	return 0;
}

void func_222(int iParam0)//Position - 0x1C4F7
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = func_223(iVar1);
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (Global_19E56.f_933.f_21B[iVar2 /*65*/].f_D[iVar0] != 4294967295 && Global_19E56.f_933.f_21B[iVar2 /*65*/][iVar0] != 4294967295)
		{
			PED::_0x39D55A620FCB6A3A(iParam0, iVar0, Global_19E56.f_933.f_21B[iVar2 /*65*/].f_D[iVar0], Global_19E56.f_933.f_21B[iVar2 /*65*/][iVar0]);
		}
		iVar0++;
	}
}

int func_223(int iParam0)//Position - 0x1C583
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

int func_224(int iParam0, int iParam1, vector3 vParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x1C5BE
{
	int iVar0;
	
	if (func_14(iParam1))
	{
		iVar0 = func_16(iParam1);
		STREAMING::REQUEST_MODEL(iVar0);
		if (STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				PED::DELETE_PED(iParam0);
			}
			*iParam0 = PED::CREATE_PED(26, iVar0, vParam2, fParam3, 0, false);
			func_522(*iParam0, iParam1, bParam5);
			PED::_0xE861D0B05C7662B8(*iParam0, 0, 0);
			func_515(*iParam0);
			func_505(*iParam0, 1, 0);
			func_504(*iParam0);
			func_501(*iParam0);
			func_226(*iParam0, bParam6);
			func_225(*iParam0);
			if (bParam4)
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar0);
			}
			return 1;
		}
	}
	return 0;
}

void func_225(int iParam0)//Position - 0x1C65D
{
	int iVar0;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16248[iVar0]) && Global_16248[iVar0] == iParam0)
		{
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_16248[iVar0]))
		{
			Global_16248[iVar0] = iParam0;
			return;
		}
		iVar0++;
	}
}

int func_226(int iParam0, bool bParam1)//Position - 0x1C6D6
{
	int iVar0;
	bool bVar1;
	
	iVar0 = func_15(iParam0);
	if (func_500(iVar0))
	{
		func_499(iVar0, 0);
		func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		func_316(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (func_314(iParam0))
		{
			func_499(iVar0, 0);
			func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
			func_316(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (iVar0)
	{
		case 0:
			if (Global_19E56.f_2361.f_63.f_3A[120] && !Global_19E56.f_2361.f_63.f_3A[122])
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				Global_19E56.f_2361.f_63.f_3A[121] = 1;
				return 1;
			}
			if (Global_19E56.f_2361.f_63.f_3A[123])
			{
				Global_19E56.f_2361.f_63.f_3A[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_295(iParam0, 3, 169))
					{
						func_485(iParam0, 3, 85, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_295(iParam0, 12, 6))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 12, 17))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 20))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 21))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 22))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 11))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 12, 10))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 12, 50))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 14, 59))
			{
				func_485(iParam0, 14, 1, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				bVar1 = true;
			}
			if (func_295(iParam0, 8, 22))
			{
				func_485(iParam0, 8, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_295(iParam0, 12, 14))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			break;
		
		case 1:
			if (func_295(iParam0, 12, 13))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 14))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 15))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 4))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 12, 3))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 14, 82))
			{
				func_485(iParam0, 14, 1, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				bVar1 = true;
			}
			if (func_295(iParam0, 8, 76))
			{
				func_485(iParam0, 8, 26, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_295(iParam0, 12, 1))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			break;
		
		case 2:
			if (func_295(iParam0, 12, 12))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 12, 15))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_295(iParam0, 3, 71))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 17))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 18))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 19))
			{
				if (!func_227(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					return 1;
				}
			}
			if (func_295(iParam0, 12, 7))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 12, 6))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			if (func_295(iParam0, 14, 88))
			{
				func_485(iParam0, 14, 1, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				bVar1 = true;
			}
			if (func_295(iParam0, 8, 17))
			{
				func_485(iParam0, 8, 15, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_295(iParam0, 12, 11))
			{
				func_485(iParam0, 12, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_227(int iParam0, int iParam1, int iParam2)//Position - 0x1CD34
{
	Global_11569[1 /*14*/] = { func_228(iParam0, iParam1, iParam2, 4294967295) };
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1);
}

struct<14> func_228(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x1CD5F
{
	func_294();
	if (iParam0 == joaat("player_zero"))
	{
		func_276(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_one"))
	{
		func_257(iParam1, iParam2);
	}
	else if (iParam0 == joaat("player_two"))
	{
		func_229(iParam1, iParam2);
	}
	return Global_11569[0 /*14*/];
}

void func_229(int iParam0, int iParam1)//Position - 0x1CDB1
{
	switch (iParam0)
	{
		case 0:
			func_256(iParam1);
			break;
		
		case 2:
			func_255(iParam1);
			break;
		
		case 3:
			func_252(iParam1);
			break;
		
		case 4:
			func_251(iParam1);
			break;
		
		case 6:
			func_250(iParam1);
			break;
		
		case 5:
			func_249(iParam1);
			break;
		
		case 8:
			func_248(iParam1);
			break;
		
		case 9:
			func_247(iParam1);
			break;
		
		case 10:
			func_246(iParam1);
			break;
		
		case 1:
			func_245(iParam1);
			break;
		
		case 7:
			func_244(iParam1);
			break;
		
		case 11:
			func_243(iParam1);
			break;
		
		case 12:
			func_242(iParam1);
			break;
		
		case 13:
			func_241(iParam1);
			break;
		
		case 14:
			func_230(iParam1);
			break;
	}
}

void func_230(int iParam0)//Position - 0x1CEA1
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
			func_239(iVar7, iParam0, 155, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_231(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)//Position - 0x1E118
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
	uParam0->f_C = func_238(iParam8);
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
		if (func_13(14))
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
			if (!func_236(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_236(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_236(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_236(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
		else
		{
			if (!func_236(Global_280004, 1, 1, 1, 4294967295))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_6), 2);
			}
			if (!func_236(Global_280004, 2, 1, 1, 4294967295))
			{
				MISC::SET_BIT(&(uParam0->f_6), 4);
			}
		}
	}
	else if (uParam0->f_5 >= 0 && uParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		MISC::SET_BIT(&(uParam0->f_6), 5);
		if (func_235(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 1);
		}
		if (func_235(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 2);
		}
		if (!func_235(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0))
		{
			MISC::SET_BIT(&(uParam0->f_6), 4);
		}
	}
	else
	{
		MISC::SET_BIT(&(uParam0->f_6), 0);
		if ((((((((((iParam1 == 11 || iParam1 == 4) || iParam1 == 6) || iParam1 == 1) || iParam1 == 14) || iParam1 == 2) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 7) || iParam1 == 12)
		{
			if (func_13(14))
			{
				return;
			}
			iVar0 = func_121(func_234(iParam1, uParam0->f_2), Global_11566, 0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 1);
			}
			iVar0 = func_121(func_233(iParam1, uParam0->f_2), Global_11566, 0);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar0, uParam0->f_1))
			{
				MISC::SET_BIT(&(uParam0->f_6), 2);
			}
			if (func_232(iParam1, uParam0->f_2, &iVar1))
			{
				iVar0 = func_121(iVar1, Global_11566, 0);
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

bool func_232(int iParam0, int iParam1, var uParam2)//Position - 0x1E4A9
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

int func_233(int iParam0, int iParam1)//Position - 0x1E8AE
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

int func_234(int iParam0, int iParam1)//Position - 0x1ECA9
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

int func_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1F0A4
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

int func_236(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)//Position - 0x1FFC2
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
	if (func_237(iParam0, iParam1, &iVar2, &iVar1, bParam2, bParam3))
	{
		iVar3 = func_121(iVar2, iVar0, 0);
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar3, iVar1);
	}
	return 0;
}

bool func_237(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x20004
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

int func_238(int iParam0)//Position - 0x21ABD
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

void func_239(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x21B91
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
					func_231(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, 4294967295, 2, 1);
					return;
				}
				iVar4++;
			}
			iVar3++;
		}
	}
	else if (iParam0 == 13)
	{
		func_231(&(Global_11569[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, 4294967295, 2, 1);
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
					func_231(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var6.f_9), Var6.f_3, Var6.f_4, Var6.f_5, FILE::_0x341DE7ED1D2A1BFD(Var6.f_1, 2244334710, 0), iVar7, 2, Var6.f_1 != 0);
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
			func_231(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILE::_0x341DE7ED1D2A1BFD(Var11.f_1, 2244334710, 0), 4294967295, 2, Var11.f_1 != 0);
			return;
		}
		iVar13 = 0;
		iVar14 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iVar1, 6, 4294967295, 0, 4294967295, func_240(iParam0));
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
					func_231(&(Global_11569[0 /*14*/]), iParam0, iParam1, &(Var11.f_9), Var11.f_3, Var11.f_4, Var11.f_5, FILE::_0x341DE7ED1D2A1BFD(Var11.f_1, 2244334710, 0), 4294967295, 2, Var11.f_1 != 0);
					return;
				}
				iVar13++;
			}
			iVar12++;
		}
	}
}

int func_240(int iParam0)//Position - 0x21E6A
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

void func_241(int iParam0)//Position - 0x21F1A
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
			func_239(iVar7, iParam0, 9, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_242(int iParam0)//Position - 0x22071
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
			func_239(iVar7, iParam0, 48, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_243(int iParam0)//Position - 0x2257F
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
			func_239(iVar7, iParam0, 1, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_244(int iParam0)//Position - 0x225F4
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
			func_239(iVar7, iParam0, 1, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_245(int iParam0)//Position - 0x22668
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
			func_239(iVar7, iParam0, 6, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_246(int iParam0)//Position - 0x2274F
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
			func_239(iVar7, iParam0, 33, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_247(int iParam0)//Position - 0x22AB2
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
			func_239(iVar7, iParam0, 17, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_248(int iParam0)//Position - 0x22CC3
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
			func_239(iVar7, iParam0, 18, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_249(int iParam0)//Position - 0x22EF3
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
			func_239(iVar7, iParam0, 7, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_250(int iParam0)//Position - 0x23003
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
			func_239(iVar7, iParam0, 84, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_251(int iParam0)//Position - 0x239A2
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
			func_239(iVar7, iParam0, 104, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_252(int iParam0)//Position - 0x24516
{
	if (iParam0 < 136)
	{
		func_254(iParam0);
	}
	else
	{
		func_253(iParam0);
	}
	if (Global_11569[0 /*14*/].f_2 == 4294967295)
	{
		func_239(3, iParam0, 242, 4294967295);
	}
}

void func_253(int iParam0)//Position - 0x2454B
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
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_254(int iParam0)//Position - 0x2514F
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
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_255(int iParam0)//Position - 0x2605D
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
			func_239(iVar7, iParam0, 9, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_256(int iParam0)//Position - 0x2618A
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
			func_239(iVar7, iParam0, 7, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_257(int iParam0, int iParam1)//Position - 0x26288
{
	switch (iParam0)
	{
		case 0:
			func_275(iParam1);
			break;
		
		case 2:
			func_274(iParam1);
			break;
		
		case 3:
			func_270(iParam1);
			break;
		
		case 4:
			func_269(iParam1);
			break;
		
		case 6:
			func_268(iParam1);
			break;
		
		case 5:
			func_267(iParam1);
			break;
		
		case 8:
			func_266(iParam1);
			break;
		
		case 9:
			func_265(iParam1);
			break;
		
		case 10:
			func_264(iParam1);
			break;
		
		case 1:
			func_263(iParam1);
			break;
		
		case 7:
			func_262(iParam1);
			break;
		
		case 11:
			func_261(iParam1);
			break;
		
		case 12:
			func_260(iParam1);
			break;
		
		case 13:
			func_259(iParam1);
			break;
		
		case 14:
			func_258(iParam1);
			break;
	}
}

void func_258(int iParam0)//Position - 0x26378
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
			func_239(iVar7, iParam0, 175, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_259(int iParam0)//Position - 0x27869
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
			func_239(iVar7, iParam0, 9, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_260(int iParam0)//Position - 0x279BA
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
			func_239(iVar7, iParam0, 47, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_261(int iParam0)//Position - 0x27EC5
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
			func_239(iVar7, iParam0, 63, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_262(int iParam0)//Position - 0x28646
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
			func_239(iVar7, iParam0, 1, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_263(int iParam0)//Position - 0x286BA
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
			func_239(iVar7, iParam0, 5, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_264(int iParam0)//Position - 0x2878A
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
			func_239(iVar7, iParam0, 53, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_265(int iParam0)//Position - 0x28CBA
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
			func_239(iVar7, iParam0, 12, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_266(int iParam0)//Position - 0x28E51
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
			func_239(iVar7, iParam0, 77, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_267(int iParam0)//Position - 0x2964F
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
			func_239(iVar7, iParam0, 7, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_268(int iParam0)//Position - 0x2975F
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
			func_239(iVar7, iParam0, 134, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_269(int iParam0)//Position - 0x2A68A
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
			func_239(iVar7, iParam0, 117, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_270(int iParam0)//Position - 0x2B347
{
	if (iParam0 < 107)
	{
		func_273(iParam0);
	}
	else if (iParam0 < 227)
	{
		func_272(iParam0);
	}
	else
	{
		func_271(iParam0);
	}
	if (Global_11569[0 /*14*/].f_2 == 4294967295)
	{
		func_239(3, iParam0, 318, 4294967295);
	}
}

void func_271(int iParam0)//Position - 0x2B38D
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
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_272(int iParam0)//Position - 0x2BE32
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
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_273(int iParam0)//Position - 0x2CDC8
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
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_274(int iParam0)//Position - 0x2DA61
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
			func_239(iVar7, iParam0, 21, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_275(int iParam0)//Position - 0x2DCEE
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
			func_239(iVar7, iParam0, 10, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_276(int iParam0, int iParam1)//Position - 0x2DE34
{
	switch (iParam0)
	{
		case 0:
			func_293(iParam1);
			break;
		
		case 2:
			func_292(iParam1);
			break;
		
		case 3:
			func_289(iParam1);
			break;
		
		case 4:
			func_288(iParam1);
			break;
		
		case 6:
			func_287(iParam1);
			break;
		
		case 5:
			func_286(iParam1);
			break;
		
		case 8:
			func_285(iParam1);
			break;
		
		case 9:
			func_284(iParam1);
			break;
		
		case 10:
			func_283(iParam1);
			break;
		
		case 1:
			func_282(iParam1);
			break;
		
		case 7:
			func_281(iParam1);
			break;
		
		case 11:
			func_280(iParam1);
			break;
		
		case 12:
			func_279(iParam1);
			break;
		
		case 13:
			func_278(iParam1);
			break;
		
		case 14:
			func_277(iParam1);
			break;
	}
}

void func_277(int iParam0)//Position - 0x2DF24
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
			func_239(iVar7, iParam0, 113, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_278(int iParam0)//Position - 0x2ECE4
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
			func_239(iVar7, iParam0, 10, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_279(int iParam0)//Position - 0x2EE5E
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
			func_239(iVar7, iParam0, 53, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_280(int iParam0)//Position - 0x2F404
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
			func_239(iVar7, iParam0, 45, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_281(int iParam0)//Position - 0x2F959
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
			func_239(iVar7, iParam0, 1, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_282(int iParam0)//Position - 0x2F9CD
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
			func_239(iVar7, iParam0, 5, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_283(int iParam0)//Position - 0x2FAA2
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
			func_239(iVar7, iParam0, 48, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_284(int iParam0)//Position - 0x2FF82
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
			func_239(iVar7, iParam0, 20, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_285(int iParam0)//Position - 0x30241
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
			func_239(iVar7, iParam0, 24, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_286(int iParam0)//Position - 0x30519
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
			func_239(iVar7, iParam0, 14, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_287(int iParam0)//Position - 0x306E2
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
			func_239(iVar7, iParam0, 99, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_288(int iParam0)//Position - 0x3128B
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
			func_239(iVar7, iParam0, 113, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_289(int iParam0)//Position - 0x31F2E
{
	if (iParam0 < 60)
	{
		func_291(iParam0);
	}
	else
	{
		func_290(iParam0);
	}
	if (Global_11569[0 /*14*/].f_2 == 4294967295)
	{
		func_239(3, iParam0, 181, 4294967295);
	}
}

void func_290(int iParam0)//Position - 0x31F63
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
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_291(int iParam0)//Position - 0x32D6F
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
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_292(int iParam0)//Position - 0x3342D
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
			func_239(iVar7, iParam0, 6, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_293(int iParam0)//Position - 0x33519
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
			func_239(iVar7, iParam0, 7, 4294967295);
			return;
			break;
	}
	func_231(&(Global_11569[0 /*14*/]), iVar7, iParam0, &Var2, iVar3, iVar4, iVar1, bVar0, iVar5, iVar6, 0);
}

void func_294()//Position - 0x33617
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

int func_295(int iParam0, int iParam1, int iParam2)//Position - 0x33690
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
	Global_11569[1 /*14*/] = { func_228(iVar0, iParam1, iParam2, 4294967295) };
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar5 = { func_310(iVar0, iParam2) };
		iVar2 = 0;
		while (iVar2 <= 14)
		{
			if ((uVar5[iVar2] != 4294967197 && iVar2 != 12) && iVar2 != 14)
			{
				if (!func_295(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { func_306(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_295(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_11569[2 /*14*/] = { func_228(iVar0, 14, iVar4, 4294967295) };
									if (Global_11569[2 /*14*/].f_C == iVar3)
									{
										if (func_295(iParam0, 14, iVar4))
										{
											if (!func_298(iVar0, iParam2, 14, iVar4, &uVar5, &(Global_11569[2 /*14*/])))
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
						iVar1 = func_296(iParam0, iVar2);
						Global_11569[2 /*14*/] = { func_228(iVar0, iVar2, iVar1, 4294967295) };
						if (!func_298(iVar0, iParam2, iVar2, iVar1, &uVar5, &(Global_11569[2 /*14*/])))
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
		uVar8 = { func_306(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 <= 8)
		{
			if (!func_295(iParam0, 14, uVar8[iVar7]))
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
	else if (Global_11569[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_240(iParam1)) && Global_11569[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_240(iParam1)))
	{
		return 1;
	}
	return 0;
}

int func_296(int iParam0, int iParam1)//Position - 0x338EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (((iParam1 == 12 || iParam1 == 13) || iParam1 == 14) || PED::IS_PED_INJURED(iParam0))
	{
		return 4294967197;
	}
	iVar0 = func_240(iParam1);
	iVar1 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, iVar0);
	iVar2 = PED::GET_PED_TEXTURE_VARIATION(iParam0, iVar0);
	return func_297(iParam0, iVar1, iVar2, iParam1);
}

int func_297(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3394B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_240(iParam3);
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

int func_298(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5)//Position - 0x339CF
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
		uVar0 = { func_306(iParam0, (*uParam4)[13]) };
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
	if (func_305(iParam0, iParam2, iParam3))
	{
		return 1;
	}
	if (iParam0 == joaat("player_zero"))
	{
		if (func_304(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((((((iParam1 == 1 || iParam1 == 2) || iParam1 == 10) || iParam1 == 11) || iParam1 == 12) || iParam1 == 18) || iParam1 == 50)
			{
				return 0;
			}
			return 1;
		}
		else if (func_303(iParam0, iParam2, iParam3, 4294967295))
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
		else if (func_299(iParam0, iParam2, iParam3, 4294967295))
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
		if (func_304(iParam0, iParam2, iParam3, 4294967295))
		{
			if ((iParam1 == 3 || iParam1 == 5) || iParam1 == 7)
			{
				return 0;
			}
			return 1;
		}
		else if (func_303(iParam0, iParam2, iParam3, 4294967295))
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
		else if (func_299(iParam0, iParam2, iParam3, 4294967295))
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
		if (func_304(iParam0, iParam2, iParam3, 4294967295))
		{
			if (((((iParam1 == 1 || iParam1 == 2) || iParam1 == 6) || iParam1 == 8) || iParam1 == 45) || iParam1 == 12)
			{
				return 0;
			}
			return 1;
		}
		else if (func_303(iParam0, iParam2, iParam3, 4294967295))
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
		else if (func_299(iParam0, iParam2, iParam3, 4294967295))
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

int func_299(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x33FD3
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
							iParam3 = func_300(iParam0, iParam2, 14, 3);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 1) || FILE::_0x341DE7ED1D2A1BFD(func_300(iParam0, iParam2, 14, 3), 2452280943, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_300(iParam0, iParam2, 1, 3);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(func_300(iParam0, iParam2, 1, 3), 2452280943, 0));
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
							iParam3 = func_300(iParam0, iParam2, 14, 4);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 1) || FILE::_0x341DE7ED1D2A1BFD(func_300(iParam0, iParam2, 14, 4), 2452280943, 1));
					}
					break;
				
				case 1:
					if (iParam2 >= 26)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_300(iParam0, iParam2, 1, 4);
						}
						return (FILE::_0x341DE7ED1D2A1BFD(iParam3, 2537416713, 0) || FILE::_0x341DE7ED1D2A1BFD(func_300(iParam0, iParam2, 1, 4), 2452280943, 0));
					}
					break;
			}
			break;
	}
	return 0;
}

int func_300(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34251
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
		iVar3 = (iParam1 - func_302(iParam0));
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
		iVar8 = (iParam1 - func_301(iParam0, func_240(iParam2)));
		if (iVar8 < 0)
		{
			return 4294967295;
		}
		if ((iParam0 == Global_115E3.f_1A[iParam2] && iParam1 == Global_115E3[iParam2]) && Global_115E3.f_D[iParam2] != 0)
		{
			return Global_115E3.f_D[iParam2];
		}
		iVar9 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 0, 4294967295, func_240(iParam2));
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

int func_301(int iParam0, int iParam1)//Position - 0x343AD
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

int func_302(int iParam0)//Position - 0x34754
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

int func_303(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x347B5
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
						iParam3 = func_300(iParam0, iParam2, 1, 3);
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
						iParam3 = func_300(iParam0, iParam2, 1, 4);
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

int func_304(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x34BDA
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
						iParam3 = func_300(iParam0, iParam2, 14, 3);
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
						iParam3 = func_300(iParam0, iParam2, 14, 4);
					}
					return FILE::_0x341DE7ED1D2A1BFD(iParam3, 97230661, 1);
				}
			}
			break;
	}
	return 0;
}

int func_305(int iParam0, int iParam1, int iParam2)//Position - 0x34ECD
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

struct<10> func_306(int iParam0, int iParam1)//Position - 0x34F66
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
					func_309(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_309(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_309(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_309(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_309(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_309(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_309(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_309(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_309(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_309(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_309(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_307(&Var1, iParam0, iParam1, 10);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 31:
					func_309(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_309(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_309(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_309(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_309(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_309(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_309(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_309(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_309(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_309(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_307(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 31:
					func_309(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_309(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_309(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_309(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_309(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_309(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_309(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_309(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_309(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_309(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_307(&Var1, iParam0, iParam1, 9);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_309(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_309(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_309(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_309(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_309(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_309(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_309(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_309(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_309(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_309(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_309(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_309(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_309(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_309(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_309(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 14:
					func_309(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_309(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_309(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_309(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_309(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_309(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_309(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_309(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_309(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_309(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 24:
					func_309(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_307(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 31:
					func_309(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 0:
					func_309(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 1:
					func_309(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 2:
					func_309(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 3:
					func_309(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 4:
					func_309(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 5:
					func_309(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 6:
					func_309(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 7:
					func_309(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 8:
					func_309(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 9:
					func_309(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 10:
					func_309(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 11:
					func_309(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 12:
					func_309(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 13:
					func_309(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
				
				case 14:
					func_309(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 15:
					func_309(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 16:
					func_309(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 17:
					func_309(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 18:
					func_309(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 19:
					func_309(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 20:
					func_309(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 21:
					func_309(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 22:
					func_309(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				case 23:
					func_309(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
				
				default:
					func_307(&Var1, iParam0, iParam1, 25);
					break;
			}
			break;
	}
	return Var1;
}

void func_307(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x35895
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
						(*iParam0)[vVar2.z] = func_308(iParam1, vVar2.x, 14, iVar0);
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

int func_308(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x359BF
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
					return (func_302(iParam0) + iVar2);
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
		iVar7 = FILE::_GET_NUM_PROPS_FROM_OUTFIT(iParam3, 6, 4294967295, 0, 4294967295, func_240(iParam2));
		iVar5 = 0;
		while (iVar5 < iVar7)
		{
			FILE::GET_SHOP_PED_QUERY_COMPONENT(iVar5, &Var4);
			if (!FILE::_IS_DLC_DATA_EMPTY(Var4))
			{
				if (iParam1 == Var4.f_1)
				{
					return (func_301(iParam0, func_240(iParam2)) + iVar6);
				}
				iVar6++;
			}
			iVar5++;
		}
	}
	return 4294967197;
}

void func_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x35A9F
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

struct<17> func_310(int iParam0, int iParam1)//Position - 0x35AE7
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
						func_313(&Var1, 4294967197, 4294967197, 1, 1, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					}
					else
					{
						func_313(&Var1, 4294967197, 4294967197, 0, 0, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					}
					break;
				
				case 1:
					func_313(&Var1, 4294967197, 4294967197, 16, 16, 6, 1, 1, 0, 1, 4294967197, 0, 0, 0);
					break;
				
				case 2:
					func_313(&Var1, 4294967197, 4294967197, 36, 21, 6, 1, 5, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 3:
					func_313(&Var1, 4294967197, 4294967197, 65, 36, 6, 0, 2, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 4:
					func_313(&Var1, 4294967197, 4294967197, 61, 32, 6, 0, 0, 7, 3, 4294967197, 0, 0, 2);
					break;
				
				case 5:
					func_313(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[0], Global_19E56.f_933.f_21B.f_C8[0], 6, 3, 0, 0, 0, 4294967197, 0, 0, 3);
					break;
				
				case 6:
					func_313(&Var1, 4294967197, 4294967197, 92, 72, 7, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 7:
					func_313(&Var1, 4294967197, 4294967197, 85, 95, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 8:
					func_313(&Var1, 4294967197, 4294967197, 170, 80, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 9:
					func_313(&Var1, 4294967197, 4294967197, 171, 89, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_313(&Var1, 4294967197, 4294967197, 33, 18, 8, 10, 3, 8, 0, 4294967197, 0, 0, 4);
					break;
				
				case 11:
					func_313(&Var1, 4294967197, 4294967197, 33, 18, 17, 10, 4, 8, 0, 4294967197, 0, 0, 5);
					break;
				
				case 12:
					func_313(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 23, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_313(&Var1, 4294967197, 4294967197, 69, 40, 13, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_313(&Var1, 4294967197, 4294967197, 62, 33, 38, 0, 8, 0, 0, 4294967197, 0, 0, 6);
					break;
				
				case 15:
					func_313(&Var1, 4294967197, 4294967197, 63, 34, 6, 10, 0, 0, 4, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_313(&Var1, 4294967197, 4294967197, 174, 93, 18, 0, 18, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_313(&Var1, 4294967197, 4294967197, 76, 46, 6, 10, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_313(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 0, 4, 0, 4294967197, 0, 0, 7);
					break;
				
				case 19:
					func_313(&Var1, 4294967197, 4294967197, 64, 35, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_313(&Var1, 4294967197, 4294967197, 66, 37, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_313(&Var1, 4294967197, 4294967197, 67, 38, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 22:
					func_313(&Var1, 4294967197, 4294967197, 68, 39, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 23:
					func_313(&Var1, 4294967197, 4294967197, 177, 94, 19, 9, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 24:
					func_313(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 4, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 25:
					func_313(&Var1, 4294967197, 4294967197, 97, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 26:
					func_313(&Var1, 4294967197, 4294967197, 3, 3, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 27:
					func_313(&Var1, 4294967197, 4294967197, 129, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 28:
					func_313(&Var1, 4294967197, 4294967197, 170, 80, 6, 0, 13, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 29:
					func_313(&Var1, 4294967197, 4294967197, 2, 2, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 30:
					func_313(&Var1, 4294967197, 4294967197, 161, 3, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 31:
					func_313(&Var1, 4294967197, 4294967197, 3, 3, 0, 12, 0, 0, 0, 4294967197, 0, 1, 31);
					break;
				
				case 32:
					func_313(&Var1, 4294967197, 4294967197, 85, 55, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 33:
					func_313(&Var1, 4294967197, 4294967197, 86, 4, 20, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 34:
					func_313(&Var1, 4294967197, 4294967197, 44, 97, 6, 0, 0, 0, 0, 4294967197, 0, 2, 31);
					break;
				
				case 35:
					func_313(&Var1, 4294967197, 4294967197, 85, 81, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 36:
					func_313(&Var1, 4294967197, 4294967197, 4, 4, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 37:
					func_313(&Var1, 4294967197, 4294967197, 5, 5, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 38:
					func_313(&Var1, 4294967197, 4294967197, 6, 6, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_313(&Var1, 4294967197, 4294967197, 7, 7, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_313(&Var1, 4294967197, 4294967197, 8, 8, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_313(&Var1, 4294967197, 4294967197, 9, 9, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_313(&Var1, 4294967197, 4294967197, 10, 10, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_313(&Var1, 4294967197, 4294967197, 11, 11, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 44:
					func_313(&Var1, 4294967197, 4294967197, 12, 12, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 45:
					func_313(&Var1, 4294967197, 4294967197, 13, 13, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 46:
					func_313(&Var1, 4294967197, 4294967197, 14, 14, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 47:
					func_313(&Var1, 4294967197, 4294967197, 15, 15, 0, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 48:
					func_313(&Var1, 4294967197, 4294967197, 91, 71, 14, 13, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 49:
					func_313(&Var1, 4294967197, 4294967197, 35, 20, 9, 10, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 50:
					func_313(&Var1, 4294967197, 4294967197, 33, 18, 8, 10, 3, 8, 0, 4294967197, 0, 0, 9);
					break;
				
				case 51:
					func_313(&Var1, 4294967197, 4294967197, 169, 95, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 52:
					func_313(&Var1, 4294967197, 4294967197, 169, 72, 6, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_311(&Var1, iParam0, iParam1, 53);
					break;
			}
			break;
		
		case joaat("player_one"):
			switch (iParam1)
			{
				case 0:
					func_313(&Var1, 4294967197, 4294967197, 73, 24, 18, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 1:
					func_313(&Var1, 4294967197, 4294967197, 22, 10, 64, 0, 24, 0, 0, 4294967197, 0, 43, 31);
					break;
				
				case 2:
					func_313(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[1], Global_19E56.f_933.f_21B.f_C8[1], 17, 2, 26, 0, 0, 4294967197, 0, 45, 31);
					break;
				
				case 3:
					func_313(&Var1, 4294967197, 4294967197, 23, 11, 13, 5, 2, 4, 0, 4294967197, 0, 0, 1);
					break;
				
				case 4:
					func_313(&Var1, 4294967197, 4294967197, 23, 11, 34, 5, 26, 0, 0, 4294967197, 0, 0, 2);
					break;
				
				case 5:
					func_313(&Var1, 4294967197, 20, 159, 69, 17, 5, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 6:
					func_313(&Var1, 4294967197, 4294967197, 40, 13, 14, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 7:
					func_313(&Var1, 4294967197, 4294967197, 90, 32, 17, 1, 8, 0, 1, 4294967197, 0, 0, 3);
					break;
				
				case 8:
					func_313(&Var1, 4294967197, 4294967197, 17, 5, 12, 0, 26, 0, 2, 4294967197, 0, 0, 5);
					break;
				
				case 9:
					func_313(&Var1, 4294967197, 4294967197, 16, 4, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_313(&Var1, 4294967197, 4294967197, 208, 71, 17, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 11:
					func_313(&Var1, 4294967197, 4294967197, 259, 10, 35, 0, 24, 0, 0, 4294967197, 0, 43, 31);
					break;
				
				case 12:
					func_313(&Var1, 4294967197, 4294967197, 18, 6, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_313(&Var1, 4294967197, 4294967197, 19, 7, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_313(&Var1, 4294967197, 4294967197, 20, 8, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 15:
					func_313(&Var1, 4294967197, 4294967197, 21, 9, 12, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_313(&Var1, 4294967197, 4294967197, 135, 40, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_313(&Var1, 4294967197, 4294967197, 74, 24, 52, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_313(&Var1, 4294967197, 4294967197, 176, 53, 26, 5, 26, 0, 0, 4294967197, 0, 41, 31);
					break;
				
				case 19:
					func_313(&Var1, 4294967197, 4294967197, 125, 24, 18, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_313(&Var1, 4294967197, 4294967197, 162, 24, 36, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_313(&Var1, 4294967197, 4294967197, 75, 24, 36, 0, 26, 0, 0, 4294967197, 0, 0, 4);
					break;
				
				case 22:
					func_313(&Var1, 4294967197, 4294967197, 227, 53, 25, 0, 27, 0, 0, 4294967197, 0, 25, 31);
					break;
				
				case 23:
					func_313(&Var1, 4294967197, 4294967197, 228, 54, 25, 0, 28, 0, 0, 4294967197, 0, 26, 31);
					break;
				
				case 24:
					func_313(&Var1, 4294967197, 4294967197, 229, 55, 25, 0, 29, 0, 0, 4294967197, 0, 27, 31);
					break;
				
				case 25:
					func_313(&Var1, 4294967197, 4294967197, 230, 56, 25, 0, 30, 0, 0, 4294967197, 0, 28, 31);
					break;
				
				case 26:
					func_313(&Var1, 4294967197, 4294967197, 231, 57, 25, 0, 31, 0, 0, 4294967197, 0, 29, 31);
					break;
				
				case 27:
					func_313(&Var1, 4294967197, 4294967197, 232, 58, 25, 0, 32, 0, 0, 4294967197, 0, 30, 31);
					break;
				
				case 28:
					func_313(&Var1, 4294967197, 4294967197, 233, 59, 25, 0, 33, 0, 0, 4294967197, 0, 31, 31);
					break;
				
				case 29:
					func_313(&Var1, 4294967197, 4294967197, 234, 60, 25, 0, 34, 0, 0, 4294967197, 0, 32, 31);
					break;
				
				case 30:
					func_313(&Var1, 4294967197, 4294967197, 235, 61, 25, 0, 35, 0, 0, 4294967197, 0, 33, 31);
					break;
				
				case 31:
					func_313(&Var1, 4294967197, 4294967197, 236, 62, 25, 0, 36, 0, 0, 4294967197, 0, 34, 31);
					break;
				
				case 32:
					func_313(&Var1, 4294967197, 4294967197, 237, 63, 25, 0, 37, 0, 0, 4294967197, 0, 35, 31);
					break;
				
				case 33:
					func_313(&Var1, 4294967197, 4294967197, 238, 64, 25, 0, 38, 0, 0, 4294967197, 0, 36, 31);
					break;
				
				case 34:
					func_313(&Var1, 4294967197, 4294967197, 239, 65, 25, 0, 39, 0, 0, 4294967197, 0, 37, 31);
					break;
				
				case 35:
					func_313(&Var1, 4294967197, 4294967197, 240, 66, 25, 0, 40, 0, 0, 4294967197, 0, 38, 31);
					break;
				
				case 36:
					func_313(&Var1, 4294967197, 4294967197, 241, 67, 25, 0, 41, 0, 0, 4294967197, 0, 39, 31);
					break;
				
				case 37:
					func_313(&Var1, 4294967197, 4294967197, 242, 68, 25, 0, 42, 0, 0, 4294967197, 0, 40, 31);
					break;
				
				case 38:
					func_313(&Var1, 4294967197, 4294967197, 260, 72, 17, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_313(&Var1, 4294967197, 4294967197, 125, 24, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_313(&Var1, 4294967197, 4294967197, 123, 24, 0, 0, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_313(&Var1, 4294967197, 4294967197, 159, 69, 17, 5, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_313(&Var1, 4294967197, 4294967197, 89, 22, 15, 6, 26, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_313(&Var1, 4294967197, 4294967197, 317, 69, 17, 0, 0, 0, 51, 4294967197, 0, 0, 6);
					break;
				
				case 44:
					func_313(&Var1, 4294967197, 4294967197, 30, 23, 16, 0, 0, 0, 0, 4294967197, 0, 0, 7);
					break;
				
				case 45:
					func_313(&Var1, 4294967197, 4294967197, 106, 70, 17, 5, 26, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 46:
					func_313(&Var1, 4294967197, 4294967197, 117, 24, 20, 5, 26, 0, 52, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_311(&Var1, iParam0, iParam1, 47);
					break;
			}
			break;
		
		case joaat("player_two"):
			switch (iParam1)
			{
				case 0:
					func_313(&Var1, 4294967197, 4294967197, 0, 91, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 1:
					func_313(&Var1, 4294967197, 4294967197, 17, 5, 8, 2, 3, 0, 0, 4294967197, 0, 0, 8);
					break;
				
				case 2:
					func_313(&Var1, 4294967197, 4294967197, 43, 8, 12, 3, 5, 0, 0, 4294967197, 0, 0, 1);
					break;
				
				case 3:
					func_313(&Var1, 4294967197, 4294967197, 50, 14, 8, 0, 15, 6, 3, 4294967197, 0, 0, 2);
					break;
				
				case 4:
					func_313(&Var1, 4294967197, 4294967197, Global_19E56.f_933.f_21B.f_C4[2], Global_19E56.f_933.f_21B.f_C8[2], 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 5:
					func_313(&Var1, 4294967197, 4294967197, 95, 33, 8, 0, 15, 0, 0, 4294967197, 0, 0, 6);
					break;
				
				case 6:
					func_313(&Var1, 4294967197, 4294967197, 49, 13, 10, 4, 6, 0, 0, 4294967197, 0, 0, 3);
					break;
				
				case 7:
					func_313(&Var1, 4294967197, 4294967197, 49, 13, 14, 4, 15, 0, 0, 4294967197, 0, 0, 4);
					break;
				
				case 8:
					func_313(&Var1, 4294967197, 4294967197, 79, 32, 8, 5, 7, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 9:
					func_313(&Var1, 4294967197, 4294967197, 53, 17, 11, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 10:
					func_313(&Var1, 4294967197, 4294967197, 96, 81, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 11:
					func_313(&Var1, 4294967197, 4294967197, 51, 15, 33, 0, 8, 0, 0, 4294967197, 0, 0, 5);
					break;
				
				case 12:
					func_313(&Var1, 4294967197, 4294967197, 0, 93, 29, 0, 13, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 13:
					func_313(&Var1, 4294967197, 4294967197, 52, 16, 30, 5, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 14:
					func_313(&Var1, 4294967197, 4294967197, 241, 92, 16, 0, 12, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 15:
					func_313(&Var1, 4294967197, 4294967197, 97, 34, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 16:
					func_313(&Var1, 4294967197, 4294967197, 44, 9, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 17:
					func_313(&Var1, 4294967197, 4294967197, 45, 10, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 18:
					func_313(&Var1, 4294967197, 4294967197, 46, 11, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 19:
					func_313(&Var1, 4294967197, 4294967197, 47, 12, 12, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 20:
					func_313(&Var1, 4294967197, 4294967197, 161, 53, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 21:
					func_313(&Var1, 4294967197, 4294967197, 0, 44, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 22:
					func_313(&Var1, 4294967197, 4294967197, 98, 0, 28, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 23:
					func_313(&Var1, 4294967197, 4294967197, 27, 0, 31, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 24:
					func_313(&Var1, 4294967197, 4294967197, 190, 71, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 25:
					func_313(&Var1, 4294967197, 4294967197, 191, 72, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 26:
					func_313(&Var1, 4294967197, 4294967197, 192, 73, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 27:
					func_313(&Var1, 4294967197, 4294967197, 193, 74, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 28:
					func_313(&Var1, 4294967197, 4294967197, 194, 75, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 29:
					func_313(&Var1, 4294967197, 4294967197, 195, 76, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 30:
					func_313(&Var1, 4294967197, 4294967197, 196, 77, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 31:
					func_313(&Var1, 4294967197, 4294967197, 197, 78, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 32:
					func_313(&Var1, 4294967197, 4294967197, 198, 79, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 33:
					func_313(&Var1, 4294967197, 4294967197, 199, 80, 8, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 34:
					func_313(&Var1, 4294967197, 4294967197, 200, 62, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 35:
					func_313(&Var1, 4294967197, 4294967197, 201, 63, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 36:
					func_313(&Var1, 4294967197, 4294967197, 202, 64, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 37:
					func_313(&Var1, 4294967197, 4294967197, 203, 65, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 38:
					func_313(&Var1, 4294967197, 4294967197, 204, 66, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 39:
					func_313(&Var1, 4294967197, 4294967197, 205, 67, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 40:
					func_313(&Var1, 4294967197, 4294967197, 206, 68, 16, 0, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 41:
					func_313(&Var1, 4294967197, 4294967197, 2, 43, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 42:
					func_313(&Var1, 4294967197, 4294967197, 55, 0, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 43:
					func_313(&Var1, 4294967197, 4294967197, 0, 52, 8, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 44:
					func_313(&Var1, 4294967197, 4294967197, 70, 30, 32, 6, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 45:
					func_313(&Var1, 4294967197, 4294967197, 19, 91, 28, 0, 0, 0, 0, 4294967197, 0, 0, 7);
					break;
				
				case 46:
					func_313(&Var1, 4294967197, 4294967197, 0, 0, 28, 0, 0, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				case 47:
					func_313(&Var1, 4294967197, 4294967197, 79, 32, 8, 5, 15, 0, 0, 4294967197, 0, 0, 31);
					break;
				
				default:
					func_311(&Var1, iParam0, iParam1, 48);
					break;
			}
			break;
		
		case joaat("mp_m_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_313(&Var1, 4294967197, 4294967197, 0, 0, 10, 4294967197, 0, 4294967197, 4294967197, 0, 0, 0, 31);
					break;
				
				case 1:
					func_313(&Var1, 4294967197, 4294967197, 1, 127, 38, 4294967197, 2, 0, 0, 0, 0, 62, 0);
					break;
				
				case 2:
					func_313(&Var1, 4294967197, 4294967197, 0, 248, 45, 4294967197, 240, 0, 0, 0, 0, 144, 1);
					break;
				
				case 3:
					func_313(&Var1, 4294967197, 4294967197, 4, 31, 25, 4294967197, 240, 0, 0, 0, 0, 231, 2);
					break;
				
				case 4:
					func_313(&Var1, 4294967197, 4294967197, 1, 66, 10, 4294967197, 21, 0, 0, 0, 0, 123, 3);
					break;
				
				case 5:
					func_313(&Var1, 4294967197, 4294967197, 1, 93, 141, 4294967197, 3, 0, 0, 0, 0, 114, 4);
					break;
				
				case 6:
					func_313(&Var1, 4294967197, 4294967197, 1, 116, 113, 4294967197, 7, 0, 0, 0, 0, 113, 5);
					break;
				
				case 7:
					func_313(&Var1, 4294967197, 4294967197, 1, 61, 136, 4294967197, 27, 0, 0, 0, 0, 61, 6);
					break;
				
				case 8:
					func_313(&Var1, 4294967197, 4294967197, 0, 112, 10, 4294967197, 240, 0, 0, 0, 0, 8, 7);
					break;
				
				case 9:
					func_313(&Var1, 4294967197, 4294967197, 4, 131, 24, 4294967197, 240, 0, 0, 0, 0, 223, 8);
					break;
				
				case 10:
					func_313(&Var1, 4294967197, 4294967197, 1, 209, 188, 4294967197, 208, 0, 0, 0, 0, 64, 9);
					break;
				
				case 11:
					func_313(&Var1, 4294967197, 4294967197, 1, 209, 160, 4294967197, 211, 0, 0, 0, 43, 157, 10);
					break;
				
				case 12:
					func_313(&Var1, 4294967197, 4294967197, 1, 162, 174, 4294967197, 201, 0, 0, 0, 0, 158, 11);
					break;
				
				case 13:
					func_313(&Var1, 4294967197, 4294967197, 1, 4, 240, 4294967197, 34, 0, 0, 0, 0, 97, 12);
					break;
				
				case 14:
					func_313(&Var1, 4294967197, 4294967197, 1, 128, 232, 4294967197, 43, 0, 0, 0, 0, 102, 13);
					break;
				
				case 15:
					func_313(&Var1, 4294967197, 4294967197, 1, 66, 65, 4294967197, 224, 0, 0, 0, 0, 100, 14);
					break;
				
				case 16:
					func_313(&Var1, 4294967197, 4294967197, 1, 65, 172, 4294967197, 202, 0, 0, 0, 0, 64, 15);
					break;
				
				case 17:
					func_313(&Var1, 4294967197, 4294967197, 1, 64, 10, 4294967197, 1, 0, 0, 0, 0, 66, 16);
					break;
				
				case 18:
					func_313(&Var1, 4294967197, 4294967197, 5, 98, 80, 4294967197, 240, 0, 0, 0, 0, 87, 17);
					break;
				
				case 19:
					func_313(&Var1, 4294967197, 4294967197, 5, 192, 96, 4294967197, 240, 0, 0, 0, 0, 80, 18);
					break;
				
				case 20:
					func_313(&Var1, 4294967197, 4294967197, 1, 124, 96, 4294967197, 11, 0, 0, 0, 0, 110, 19);
					break;
				
				case 21:
					func_313(&Var1, 4294967197, 4294967197, 0, 80, 114, 4294967197, 240, 0, 0, 0, 0, 2, 20);
					break;
				
				case 22:
					func_313(&Var1, 4294967197, 4294967197, 6, 43, 112, 4294967197, 82, 0, 0, 0, 0, 48, 21);
					break;
				
				case 23:
					func_313(&Var1, 4294967197, 4294967197, 1, 116, 144, 4294967197, 2, 0, 0, 0, 0, 108, 22);
					break;
				
				case 24:
					func_313(&Var1, 4294967197, 4294967197, 1, 63, 38, 4294967197, 3, 0, 0, 0, 0, 63, 23);
					break;
				
				case 25:
					func_313(&Var1, 4294967197, 4294967197, 2, 64, 10, 4294967197, 240, 0, 0, 0, 0, 41, 24);
					break;
				
				default:
					func_311(&Var1, iParam0, iParam1, 26);
					break;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 0:
					func_313(&Var1, 4294967197, 4294967197, 0, 0, 0, 4294967197, 0, 4294967197, 4294967197, 0, 4294967197, 0, 31);
					break;
				
				case 1:
					func_313(&Var1, 4294967197, 4294967197, 5, 136, 241, 4294967197, 47, 0, 0, 0, 0, 21, 31);
					break;
				
				case 2:
					func_313(&Var1, 4294967197, 4294967197, 4, 1, 96, 4294967197, 32, 0, 0, 0, 7, 215, 0);
					break;
				
				case 3:
					func_313(&Var1, 4294967197, 4294967197, 1, 73, 241, 4294967197, 3, 0, 0, 0, 0, 25, 1);
					break;
				
				case 4:
					func_313(&Var1, 4294967197, 4294967197, 2, 88, 217, 4294967197, 32, 0, 0, 0, 0, 33, 2);
					break;
				
				case 5:
					func_313(&Var1, 4294967197, 4294967197, 9, 7, 98, 4294967197, 32, 0, 0, 0, 7, 153, 3);
					break;
				
				case 6:
					func_313(&Var1, 4294967197, 4294967197, 1, 140, 241, 4294967197, 7, 0, 0, 0, 31, 16, 4);
					break;
				
				case 7:
					func_313(&Var1, 4294967197, 4294967197, 4, 139, 112, 4294967197, 32, 0, 0, 0, 49, 78, 5);
					break;
				
				case 8:
					func_313(&Var1, 4294967197, 4294967197, 1, 193, 48, 4294967197, 108, 0, 0, 0, 0, 17, 6);
					break;
				
				case 9:
					func_313(&Var1, 4294967197, 4294967197, 5, 114, 97, 4294967197, 103, 0, 0, 0, 0, 98, 7);
					break;
				
				case 10:
					func_313(&Var1, 4294967197, 4294967197, 9, 134, 239, 4294967197, 32, 0, 0, 0, 2, 144, 8);
					break;
				
				case 11:
					func_313(&Var1, 4294967197, 4294967197, 5, 152, 96, 4294967197, 10, 0, 0, 0, 31, 96, 9);
					break;
				
				case 12:
					func_313(&Var1, 4294967197, 4294967197, 6, 129, 1, 4294967197, 96, 0, 0, 0, 5, 120, 10);
					break;
				
				case 13:
					func_313(&Var1, 4294967197, 4294967197, 5, 0, 0, 4294967197, 10, 0, 0, 0, 0, 130, 31);
					break;
				
				case 14:
					func_313(&Var1, 4294967197, 4294967197, 4, 159, 96, 4294967197, 32, 0, 0, 0, 22, 214, 11);
					break;
				
				case 15:
					func_313(&Var1, 4294967197, 4294967197, 9, 232, 213, 4294967197, 32, 0, 0, 0, 22, 147, 12);
					break;
				
				case 16:
					func_313(&Var1, 4294967197, 4294967197, 2, 8, 98, 4294967197, 32, 0, 0, 0, 33, 39, 13);
					break;
				
				case 17:
					func_313(&Var1, 4294967197, 4294967197, 5, 150, 235, 4294967197, 106, 0, 0, 0, 0, 128, 14);
					break;
				
				case 18:
					func_313(&Var1, 4294967197, 4294967197, 6, 96, 97, 4294967197, 7, 0, 0, 0, 32, 114, 15);
					break;
				
				case 19:
					func_313(&Var1, 4294967197, 4294967197, 4, 48, 64, 4294967197, 32, 0, 0, 0, 0, 89, 16);
					break;
				
				case 20:
					func_313(&Var1, 4294967197, 4294967197, 4, 62, 64, 4294967197, 32, 0, 0, 0, 0, 78, 17);
					break;
				
				case 21:
					func_313(&Var1, 4294967197, 4294967197, 4, 49, 65, 4294967197, 32, 0, 0, 0, 8, 80, 31);
					break;
				
				case 22:
					func_313(&Var1, 4294967197, 4294967197, 3, 20, 16, 4294967197, 32, 0, 0, 0, 0, 49, 18);
					break;
				
				case 23:
					func_313(&Var1, 4294967197, 4294967197, 0, 73, 178, 4294967197, 32, 0, 0, 0, 38, 11, 19);
					break;
				
				case 24:
					func_313(&Var1, 4294967197, 4294967197, 5, 135, 53, 4294967197, 9, 0, 0, 0, 29, 27, 20);
					break;
				
				case 25:
					func_313(&Var1, 4294967197, 4294967197, 7, 233, 176, 4294967197, 120, 0, 0, 0, 11, 160, 21);
					break;
				
				case 26:
					func_313(&Var1, 4294967197, 4294967197, 4, 34, 179, 4294967197, 32, 0, 0, 0, 0, 77, 22);
					break;
				
				case 27:
					func_313(&Var1, 4294967197, 4294967197, 15, 131, 93, 4294967197, 32, 0, 0, 0, 0, 250, 23);
					break;
				
				default:
					func_311(&Var1, iParam0, iParam1, 28);
					break;
			}
			break;
	}
	return Var1;
}

void func_311(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3792F
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
						(*uParam0)[func_312(vVar2.z)] = vVar2.x;
						uParam0->f_10 = 1;
					}
					else
					{
						(*uParam0)[func_312(vVar2.z)] = func_308(iParam1, vVar2.x, func_312(vVar2.z), iVar0);
					}
				}
				else if (vVar2.y != 4294967295)
				{
					(*uParam0)[func_312(vVar2.z)] = vVar2.y;
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

int func_312(int iParam0)//Position - 0x37B19
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

void func_313(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x37BC9
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

bool func_314(int iParam0)//Position - 0x37C3A
{
	int iVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar0 = func_296(iParam0, 4);
	return func_315(iVar1, 4, iVar0);
}

int func_315(int iParam0, int iParam1, int iParam2)//Position - 0x37C5C
{
	if (iParam0 == joaat("player_zero"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 79)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 169 || (iParam2 >= 92 && iParam2 <= 96))
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_one"))
	{
		if (iParam1 == 4)
		{
			if (iParam2 >= 72 && iParam2 <= 77)
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 260)
			{
				return 1;
			}
		}
	}
	else if (iParam0 == joaat("player_two"))
	{
		if (iParam1 == 4)
		{
			if ((iParam2 >= 81 && iParam2 <= 90) || (iParam2 >= 94 && iParam2 <= 103))
			{
				return 1;
			}
		}
		else if (iParam1 == 3)
		{
			if (iParam2 == 96)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_316(int iParam0, int iParam1)//Position - 0x37D45
{
	int iVar0;
	int iVar1;
	struct<65> Var2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = func_15(iParam0);
		if (func_14(iVar0))
		{
			if (iVar0 == 2)
			{
				iVar1 = func_484(iParam0, 4, 4294967295);
				if (iVar1 == 93)
				{
					func_483(iVar0);
					func_318(iParam0, &(Global_19E56.f_933.f_21B[iVar0 /*65*/]), 0, 0, 1, 0);
				}
			}
			Var2 = 12;
			Var2.f_D = 12;
			Var2.f_1A = 12;
			Var2.f_27 = 9;
			Var2.f_31 = 9;
			func_127(iParam0, &Var2, 1, 4294967295);
			Global_16B5E[iVar0 /*65*/] = { Var2 };
			if (iParam0 == AUDIO::_0x0626A247D2405330())
			{
				func_125();
			}
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != MISC::GET_HASH_KEY("clothes_shop_sp") || (SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("lester1")) == 0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("michael4")) == 0))
			{
				if (iParam1 || ((((((!func_13(0) && !func_13(1)) && !func_13(2)) && !func_13(3)) && !func_13(4)) && !func_13(9)) && !func_13(10)))
				{
					Global_19E56.f_933.f_21B[iVar0 /*65*/] = { Var2 };
					Global_19E56.f_933.f_21B.f_943[iVar0] = func_317(iParam0);
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_19E56.f_933.f_21B.f_CC[iVar3 /*4*/][iVar0] = func_296(iParam0, func_312(iVar3));
						iVar3++;
					}
					iVar3 = 0;
					while (iVar3 < 12)
					{
						Global_19E56.f_933.f_21B.f_CC[iVar3 /*4*/][iVar0] = func_296(iParam0, func_312(iVar3));
						iVar3++;
					}
					if (iVar0 == 0)
					{
						if (Global_19E56.f_2361.f_63.f_3A[121])
						{
							Global_19E56.f_2361.f_63.f_3A[122] = 1;
						}
					}
				}
			}
		}
	}
}

int func_317(int iParam0)//Position - 0x37F2E
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
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar4 = iVar1;
		iVar3 = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar4);
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar4, iVar2));
			iVar2++;
		}
		iVar1++;
	}
	iVar5 = 0;
	while (iVar5 < 9)
	{
		iVar8 = iVar5;
		iVar7 = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar8);
		iVar6 = 0;
		while (iVar6 < iVar7)
		{
			iVar0 = (iVar0 + PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar8, iVar6));
			iVar6++;
		}
		iVar5++;
	}
	return iVar0;
}

void func_318(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x37FC1
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
	struct<5> Var12;
	
	if (!PED::IS_PED_INJURED(iParam0) || iParam5)
	{
		iVar0 = func_15(iParam0);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar3 = 0;
		while (iVar3 < 12)
		{
			if (iVar3 != 1 || (iVar3 == 1 && !bParam2))
			{
				if (bParam4)
				{
					if (uParam1->f_D[iVar3] != 0 && uParam1->f_D[iVar3] >= PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_D[iVar3] = 0;
					}
					if ((*uParam1)[iVar3] != 0 && (*uParam1)[iVar3] >= PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_D[iVar3]))
					{
						(*uParam1)[iVar3] = 0;
					}
				}
				PED::SET_PED_COMPONENT_VARIATION(iParam0, iVar3, uParam1->f_D[iVar3], (*uParam1)[iVar3], uParam1->f_1A[iVar3]);
			}
			iVar3++;
		}
		iVar3 = 0;
		while (iVar3 < 9)
		{
			if (bParam4)
			{
				if (uParam1->f_27[iVar3] != 4294967295 && uParam1->f_27[iVar3] != 255)
				{
					if (uParam1->f_27[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(iParam0, iVar3))
					{
						uParam1->f_27[iVar3] = 4294967295;
					}
					else if (uParam1->f_31[iVar3] >= PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(iParam0, iVar3, uParam1->f_27[iVar3]))
					{
						uParam1->f_31[iVar3] = 0;
					}
				}
			}
			if (uParam1->f_27[iVar3] != 4294967295 && uParam1->f_27[iVar3] != 255)
			{
				PED::SET_PED_PROP_INDEX(iParam0, iVar3, uParam1->f_27[iVar3], uParam1->f_31[iVar3], false);
			}
			else
			{
				PED::CLEAR_PED_PROP(iParam0, iVar3);
			}
			iVar3++;
		}
		if (func_14(iVar0))
		{
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3B = uParam1->f_3B;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3C = uParam1->f_3C;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3D = uParam1->f_3D;
			if (func_482(iParam0, iVar1, &iVar2, 0))
			{
				func_485(iParam0, 2, iVar2, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
			}
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3E = uParam1->f_3E;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_3F = uParam1->f_3F;
			Global_19E56.f_933.f_21B[iVar0 /*65*/].f_40 = uParam1->f_40;
			if (func_481(iParam0, iVar1, &iVar2))
			{
				func_485(iParam0, 1, iVar2, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			bVar4 = func_478(iParam0);
			func_477(753, uParam1->f_3C, Global_11566, 1, 0);
			func_477(754, uParam1->f_3D, Global_11566, 1, 0);
			iVar5 = func_297(iParam0, uParam1->f_D[2], (*uParam1)[2], 2);
			if (iVar5 != 4294967197)
			{
				iVar6 = 4294967197;
				if (iVar1 == joaat("mp_m_freemode_01"))
				{
					iVar6 = func_475(iVar5);
				}
				else if (iVar1 == joaat("mp_f_freemode_01"))
				{
					iVar6 = func_473(iVar5);
				}
				if (iVar6 != 4294967197 && iVar5 != iVar6)
				{
					iVar5 = iVar6;
				}
			}
			func_324(iParam0, 2, iVar5, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, Global_11566, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = func_297(iParam0, uParam1->f_D[1], (*uParam1)[1], 1);
				func_324(iParam0, 1, iVar7, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, Global_11566, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = func_321(iParam0, uParam1->f_27[0], uParam1->f_31[0], 0);
				func_324(iParam0, 14, iVar8, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, Global_11566, bVar4, 0, 0);
			}
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && iParam0 == AUDIO::_0x0626A247D2405330())
		{
			iVar9 = uParam1->f_3B;
			if (iVar1 == joaat("mp_m_freemode_01"))
			{
				iVar9 = func_475(iVar9);
			}
			else
			{
				iVar9 = func_473(iVar9);
			}
			func_477(752, iVar9, Global_11566, 1, 0);
			func_477(2051, iVar9, Global_11566, 1, 0);
			func_319(161, 1, 4294967295, 1);
		}
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar10 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
			iVar11 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, 1, PED::GET_PED_PROP_INDEX(iParam0, 1), PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, 1));
			if (iVar10 == 1551873674 || iVar10 == 1058287519)
			{
				if (!FILE::_0x341DE7ED1D2A1BFD(iVar11, 2191515025, 1))
				{
					FILE::INIT_SHOP_PED_PROP(&Var12);
					if (iVar10 == 1551873674)
					{
						FILE::GET_SHOP_PED_QUERY_PROP(3776431392, &Var12);
					}
					else
					{
						FILE::GET_SHOP_PED_QUERY_PROP(530896308, &Var12);
					}
					PED::SET_PED_PROP_INDEX(iParam0, 1, Var12.f_3, Var12.f_4, false);
				}
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar11, 2191515025, 1))
			{
				PED::CLEAR_PED_PROP(iParam0, 1);
			}
		}
	}
}

void func_319(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3844D
{
	int iVar0;
	
	if (func_320())
	{
		iVar0 = Global_2727B6[iParam0 /*3*/][func_122(iParam2)];
		if (iVar0 != 0)
		{
			STATS::STAT_SET_BOOL(iVar0, iParam1, iParam3);
		}
	}
}

int func_320()//Position - 0x3847F
{
	return 1;
	return 0;
}

int func_321(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3848C
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
		return func_323(iParam3);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar1 = FILE::GET_HASH_NAME_FOR_PROP(iParam0, iParam3, iParam1, iParam2);
	if (iVar1 != 4294967295 && iVar1 != 0)
	{
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			return func_308(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 3);
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			return func_308(ENTITY::GET_ENTITY_MODEL(iParam0), iVar1, 14, 4);
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
					iVar3 = (iVar3 + func_322(iParam0, iParam3));
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
	return func_323(iParam3);
}

int func_322(int iParam0, int iParam1)//Position - 0x38588
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

int func_323(int iParam0)//Position - 0x386C6
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

int func_324(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x3874C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
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
	int iVar18;
	var uVar19;
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
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	float fVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	int iVar62;
	int iVar63;
	int iVar64;
	var uVar65;
	int iVar66;
	int iVar67;
	int iVar68;
	int iVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	var uVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if ((Global_140817 != 4 && Global_140817 != 5) && Global_140817 != 7)
		{
			return 0;
		}
	}
	if (PED::IS_PED_INJURED(iParam0) || iParam2 == 4294967197)
	{
		return 0;
	}
	if (iParam0 == AUDIO::_0x0626A247D2405330() && Global_24FBF9[CAM::_0xDC9DA9E8789F5246() /*413*/].f_DE == 2)
	{
		if (!bParam12)
		{
			return 0;
		}
	}
	if (iParam10 == 4294967295)
	{
		iParam10 = Global_11566;
	}
	Global_11567++;
	iVar5 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar6 = 4294967197;
	iVar7 = 4294967197;
	iVar8 = 4294967295;
	iVar9 = 4294967197;
	iVar10 = 4294967197;
	iVar11 = 4294967295;
	iVar12 = 4294967295;
	if (iParam5 == 0)
	{
		Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
		if (!func_439(iParam3))
		{
			Global_11567 = (Global_11567 - 1);
			return 0;
		}
		func_436(iVar5, iParam1, iParam2, 1);
	}
	if (iParam1 == 12)
	{
		uVar13 = Global_280004;
		uVar14 = Global_280005;
		PED::CLEAR_ALL_PED_PROPS(iParam0);
		uVar15 = 15;
		if (iParam5 == 1)
		{
			uVar15 = { Global_11594 };
		}
		else
		{
			uVar15 = { func_310(iVar5, iParam2) };
		}
		iVar0 = 0;
		while (iVar0 <= 14)
		{
			if (uVar15[iVar0] != 4294967197)
			{
				if (iVar0 == 10 && uVar15.f_10)
				{
					Global_11569[1 /*14*/] = { func_440(iVar5, 10, 0, 4294967295) };
					if (iParam4 == 4294967295)
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_240(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_240(iVar0)));
					}
					else
					{
						PED::SET_PED_COMPONENT_VARIATION(iParam0, func_240(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
					}
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
					{
						func_436(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_11569[1 /*14*/] = { func_440(iVar5, iVar0, uVar15[iVar0], 4294967295) };
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0) || iVar0 == 13)
					{
						if (iVar0 == 13)
						{
							uVar16 = 9;
							if (iParam5 == 1)
							{
								uVar16 = { Global_115A5 };
							}
							else
							{
								uVar16 = { func_306(iVar5, uVar15[iVar0]) };
							}
							iVar1 = 0;
							while (iVar1 <= 8)
							{
								Global_11569[1 /*14*/] = { func_440(iVar5, 14, uVar16[iVar1], 4294967295) };
								func_435(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
								if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
								{
									func_436(iVar5, iVar0, uVar15[iVar0], 1);
								}
								iVar1++;
							}
						}
						else if (iVar0 != 14 && iVar0 != 12)
						{
							if (iVar0 != 1)
							{
								if (iParam4 == 4294967295)
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_240(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_240(iVar0)));
								}
								else
								{
									PED::SET_PED_COMPONENT_VARIATION(iParam0, func_240(iVar0), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
								}
							}
							else
							{
								func_324(iParam0, iVar0, uVar15[iVar0], 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
							{
								func_436(iVar5, iVar0, uVar15[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_11569[1 /*14*/] = { func_440(iVar5, iVar0, func_433(iParam0, iVar0, 4294967295), 4294967295) };
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 3))
				{
					uVar17 = { func_310(iVar5, 0) };
					func_324(iParam0, iVar0, uVar17[iVar0], 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			iVar0++;
		}
		Global_280004 = uVar13;
		Global_280005 = uVar14;
		if (iParam5 == 0)
		{
			iVar18 = func_432();
			if (iVar18 != 4294967295)
			{
				func_429(iVar18, 0, iParam10);
			}
			func_427(iParam0, 11, uVar15[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar19 = { func_306(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_11569[1 /*14*/] = { func_440(iVar5, 14, uVar19[iVar1], 4294967295) };
			func_435(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
			{
				func_436(iVar5, 14, uVar19[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_11567 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = func_425(iParam0, iVar5, 14, uVar19[iVar1], iVar2, 0);
						if (iVar3 != 4294967197)
						{
							func_324(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
						iVar2++;
					}
				}
			}
			iVar1++;
		}
	}
	else if (iParam1 == 14)
	{
		func_435(iParam0, Global_11569[1 /*14*/].f_C, Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4);
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 1))
		{
			func_436(iVar5, iParam1, iParam2, 1);
		}
		if (Global_11569[1 /*14*/].f_C == 0)
		{
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 537651880, 1))
			{
			}
			else
			{
				iVar20 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1), PED::GET_PED_TEXTURE_VARIATION(iParam0, 1));
				if (FILE::_0x341DE7ED1D2A1BFD(iVar20, 66092876, 0))
				{
					func_324(iParam0, 1, 0, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
				}
			}
		}
		if (Global_11569[1 /*14*/].f_C == 0)
		{
			func_420(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_11567 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_425(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != 4294967197)
					{
						func_324(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = func_425(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != 4294967197)
				{
					func_324(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
		}
	}
	else
	{
		if (iParam1 == 11)
		{
			if (iParam5 == 0)
			{
				iVar21 = 4294967295;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 2298592124, 11))
				{
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 0);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 1);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 2);
					PED::_0xCC9682B8951C5229(iParam0, Global_140CDE, Global_140CDF, Global_140CE0, 3);
				}
				iVar22 = func_296(iParam0, 11);
				iVar23 = func_296(iParam0, 8);
				iVar24 = func_296(iParam0, 4);
				iVar8 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
				if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar21 = func_300(iVar5, iParam2, 11, 3);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar21 = func_300(iVar5, iParam2, 11, 4);
					}
					if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar21, 320460654, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2276967906, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2884070230, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3468832093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2439348822, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2874141894, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3995877949, 0))
					{
					}
					else
					{
						iVar9 = func_296(iParam0, 8);
					}
				}
				iVar25 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
				if (FILE::_0x341DE7ED1D2A1BFD(iVar25, 3938320434, 0))
				{
					iVar26 = func_419(iVar5, iVar23, iVar22, iVar24);
					if (iVar26 == 4294967197)
					{
						iVar26 = func_425(iParam0, iVar5, 11, iVar22, 3, 0);
					}
					switch (iVar25)
					{
						case 1165919867:
						case 1606204151:
						case 1774276352:
						case 1934254610:
						case 980775017:
						case 399321881:
							iVar26 = 11;
							iVar21 = func_300(iVar5, iParam2, 11, 4);
							if (!FILE::_0x341DE7ED1D2A1BFD(iVar21, 3764877471, 0))
							{
								iVar26 = 4294967197;
							}
							break;
					}
					if (iVar26 != 4294967197)
					{
						iVar27 = 0;
						while (iVar27 < 17)
						{
							if (func_418(iVar5, iVar26, iVar27) == iVar25)
							{
								iVar11 = iVar27;
								iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
							}
							iVar27++;
						}
					}
				}
				iVar21 = 4294967295;
				if ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 256) && FILE::_0x341DE7ED1D2A1BFD(func_300(iVar5, iParam2, 11, 4), 3094454078, 0))
				{
					iVar22 = func_296(iParam0, 11);
					if (iVar22 >= 256)
					{
						iVar21 = func_300(iVar5, iVar22, 11, 4);
					}
					if (iVar22 >= 256 && FILE::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0))
					{
						iVar28 = func_416(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
						if (iVar28 != 4294967197)
						{
							func_324(iParam0, 8, iVar28, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
						}
					}
				}
				else if (func_415(iVar5, iParam2, 4294967295))
				{
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						if (iVar22 >= 237)
						{
							iVar21 = func_300(iVar5, iVar22, 11, 3);
						}
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						if (iVar22 >= 256)
						{
							iVar21 = func_300(iVar5, iVar22, 11, 4);
						}
					}
					iVar9 = 4294967197;
					if (!func_415(iVar5, iVar22, 4294967295))
					{
						if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && (FILE::_0x341DE7ED1D2A1BFD(iVar21, 3094454078, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 1965569012, 0)))
						{
						}
						else if ((iVar5 == joaat("mp_f_freemode_01") && iVar22 >= 256) && ((((((((FILE::_0x341DE7ED1D2A1BFD(iVar21, 684992453, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3474242399, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 153792394, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3422517591, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 700658917, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 3745123536, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar21, 1830529185, 0)))
						{
						}
						else
						{
							iVar29 = func_414(iParam0, iParam2);
							iVar30 = func_416(iVar5, iVar22, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar30 != 4294967197)
							{
								func_324(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
								iVar9 = 4294967197;
							}
							else if (iVar29 != 4294967197 && (iParam0 == AUDIO::_0x0626A247D2405330() || iParam0 == Global_411802))
							{
								func_324(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
							}
							else
							{
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar31 = func_413(iVar5, 11, 4294967295);
									Global_11569[1 /*14*/] = { func_440(iVar5, 11, iVar31, 4294967295) };
									iVar30 = func_416(iVar5, iVar31, iParam2, Global_11569[1 /*14*/].f_4);
									if (iVar30 == 4294967197 || FILE::_0x341DE7ED1D2A1BFD(func_300(iVar5, iParam2, 11, 3), 3057068164, 0))
									{
										iVar30 = 240;
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_300(iVar5, iParam2, 11, 4), 3057068164, 0))
									{
										iVar30 = 120;
									}
									else
									{
										iVar30 = 48;
									}
								}
								func_324(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
								Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
							}
						}
					}
					else
					{
						Global_11569[1 /*14*/] = { func_440(iVar5, 11, iVar22, 4294967295) };
						iVar32 = Global_11569[1 /*14*/].f_3;
						Global_11569[1 /*14*/] = { func_440(iVar5, 11, iParam2, 4294967295) };
						iVar33 = Global_11569[1 /*14*/].f_3;
						if (iVar32 != iVar33)
						{
							iVar35 = func_414(iParam0, iParam2);
							Global_11569[1 /*14*/] = { func_440(iVar5, 8, iVar23, 4294967295) };
							iVar34 = Global_11569[1 /*14*/].f_4;
							iVar36 = func_412(iVar5, iVar23, iVar34);
							if (iVar35 != 4294967197 && (iParam0 == AUDIO::_0x0626A247D2405330() || iParam0 == Global_411802))
							{
								iVar37 = iVar35;
							}
							else if (iVar36 == 4294967197)
							{
								iVar37 = iVar23;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar38 = func_300(iVar5, iParam2, 11, 3);
									if (((iParam2 >= 96 && iParam2 <= 107) || func_411(iVar38) == 6) || FILE::_0x341DE7ED1D2A1BFD(iVar38, 3057068164, 0))
									{
										iVar36 = func_413(iVar5, 11, 4294967295);
										Global_11569[1 /*14*/] = { func_440(iVar5, 11, iVar36, 4294967295) };
										iVar37 = func_416(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("mp_f_freemode_01") && (iVar23 == 32 || iVar23 == 33))
								{
									if (!FILE::_0x341DE7ED1D2A1BFD(func_300(iVar5, iParam2, 11, 4), 3803378421, 0))
									{
										iVar36 = func_413(iVar5, 11, 4294967295);
										Global_11569[1 /*14*/] = { func_440(iVar5, 11, iVar36, 4294967295) };
										iVar37 = func_416(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
									}
								}
								iVar39 = 4294967295;
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									iVar39 = func_300(iVar5, iVar23, 8, 3);
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									iVar39 = func_300(iVar5, iVar23, 8, 4);
								}
								if (FILE::_0x341DE7ED1D2A1BFD(iVar39, 3978471604, 0))
								{
									iVar36 = func_413(iVar5, 11, 4294967295);
									Global_11569[1 /*14*/] = { func_440(iVar5, 11, iVar36, 4294967295) };
									iVar37 = func_416(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
								}
							}
							else
							{
								iVar37 = func_416(iVar5, iVar36, iParam2, iVar34);
								if (iVar5 == joaat("mp_m_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_300(iVar5, iParam2, 11, 3), 2575628572, 0))
									{
										if (!func_410(iVar5, func_296(iParam0, 4), iVar36))
										{
											iVar37 = 240;
										}
									}
								}
								else if (iVar5 == joaat("mp_f_freemode_01"))
								{
									if (FILE::_0x341DE7ED1D2A1BFD(func_300(iVar5, iParam2, 11, 4), 2575628572, 0))
									{
										if (!func_410(iVar5, func_296(iParam0, 4), iVar36))
										{
											iVar37 = 48;
										}
									}
								}
							}
							if (iVar37 != 4294967197)
							{
								func_324(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_m_freemode_01"))
							{
								iVar36 = func_413(iVar5, 11, 4294967295);
								Global_11569[1 /*14*/] = { func_440(iVar5, 11, iVar36, 4294967295) };
								iVar37 = func_416(iVar5, iVar36, iParam2, Global_11569[1 /*14*/].f_4);
								if (iVar37 == 4294967197)
								{
									iVar37 = 240;
								}
								func_324(iParam0, 8, iVar37, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							else if (iVar5 == joaat("mp_f_freemode_01"))
							{
								func_324(iParam0, 8, 48, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
							}
							Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
						}
					}
				}
				func_407(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_427(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_419(iVar5, func_433(iParam0, 8, 4294967295), iParam2, func_433(iParam0, 4, 4294967295));
			}
		}
		else if (iParam1 == 2)
		{
			if (iParam5 == 0)
			{
				if (iParam8 == 4294967295)
				{
					iParam8 = func_121(2151, iParam10, 0);
				}
				if (iParam9 == 4294967295)
				{
					iParam9 = func_121(2158, iParam10, 0);
				}
				PED::_SET_PED_HAIR_COLOR(iParam0, iParam8, iParam9);
			}
			if (iParam7 == 0)
			{
				if (iParam2 != 4294967197)
				{
					iVar40 = 4294967197;
					if (iVar5 == joaat("mp_m_freemode_01"))
					{
						iVar40 = func_475(iParam2);
					}
					else if (iVar5 == joaat("mp_f_freemode_01"))
					{
						iVar40 = func_473(iParam2);
					}
					if (iVar40 != 4294967197 && iParam2 != iVar40)
					{
						iParam2 = iVar40;
					}
				}
				func_366(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar41 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILE::_0x341DE7ED1D2A1BFD(iVar41, 3938320434, 0))
			{
				iVar42 = func_296(iParam0, 11);
				iVar43 = func_296(iParam0, 4);
				iVar44 = func_419(iVar5, iParam2, iVar42, iVar43);
				if (iVar44 == 4294967197)
				{
					iVar44 = func_425(iParam0, iVar5, 11, iVar42, 3, 0);
				}
				switch (iVar41)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar44 = 11;
						iVar45 = func_300(iVar5, iParam2, 11, 4);
						if (!FILE::_0x341DE7ED1D2A1BFD(iVar45, 3764877471, 0))
						{
							iVar44 = 4294967197;
						}
						break;
				}
				if (iVar44 != 4294967197)
				{
					iVar46 = 0;
					while (iVar46 < 17)
					{
						if (func_418(iVar5, iVar44, iVar46) == iVar41)
						{
							iVar11 = iVar46;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar46++;
					}
				}
			}
			func_427(iParam0, iParam1, iParam2, iParam6, 0);
			iVar47 = func_296(iParam0, 11);
			if (func_415(iVar5, iVar47, 4294967295))
			{
				iVar48 = func_412(iVar5, iParam2, Global_11569[1 /*14*/].f_4);
				func_407(iVar5, iVar48);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_419(iVar5, iParam2, func_296(iParam0, 11), func_296(iParam0, 4));
			}
		}
		else if (iParam1 == 9)
		{
			if (iParam2 >= 1 && iParam2 <= 41)
			{
				iVar49 = func_296(iParam0, 7);
				if (!func_363(iVar5, iVar49, 9, 4294967197, 4294967197, 4294967197, iParam0, 0, iParam2, 4294967197, 4294967197, 4294967197))
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, func_240(7), 0, 0, 0);
				}
			}
		}
		else if (iParam1 == 1)
		{
			if (((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 26) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3373257213, 0)) || ((iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 26) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3373257213, 0)))
			{
				iVar50 = func_121(2098, iParam10, 0);
				iVar51 = func_121(2099, iParam10, 0);
				iVar52 = func_121(2100, iParam10, 0);
				fVar53 = func_362(135, iParam10);
				if (iVar5 == joaat("mp_m_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 0, 0, 0, iVar50, iVar51, iVar52, 0f, fVar53, 0f, false);
				}
				else if (iVar5 == joaat("mp_f_freemode_01"))
				{
					PED::SET_PED_HEAD_BLEND_DATA(iParam0, 21, 0, 0, iVar50, iVar51, iVar52, 0f, fVar53, 0f, false);
				}
				iVar54 = 0;
				while (iVar54 < 20)
				{
					PED::_SET_PED_FACE_FEATURE(iParam0, iVar54, 0f);
					iVar54++;
				}
			}
			else
			{
				func_346(iParam0, iParam10);
			}
		}
		else if (iParam1 == 4)
		{
			iVar55 = func_296(iParam0, 11);
			iVar56 = func_296(iParam0, 8);
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(func_300(iVar5, iVar55, 11, 3), 2575628572, 0))
				{
					if (!func_410(iVar5, iParam2, func_412(iVar5, iVar56, 0)))
					{
						func_324(iParam0, 8, 240, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
					}
				}
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(func_300(iVar5, iVar55, 11, 4), 2575628572, 0))
				{
					if (!func_410(iVar5, iParam2, func_412(iVar5, iVar56, 0)))
					{
						func_324(iParam0, 8, 78, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						Global_11569[1 /*14*/] = { func_440(iVar5, iParam1, iParam2, 4294967295) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_419(iVar5, func_296(iParam0, 8), func_296(iParam0, 11), iParam2);
			}
			iVar57 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILE::_0x341DE7ED1D2A1BFD(iVar57, 3938320434, 0))
			{
				iVar58 = func_419(iVar5, iVar56, iVar55, iParam2);
				if (iVar58 == 4294967197)
				{
					iVar58 = func_425(iParam0, iVar5, 11, iVar55, 3, 0);
				}
				switch (iVar57)
				{
					case 1165919867:
					case 1606204151:
					case 1774276352:
					case 1934254610:
					case 980775017:
					case 399321881:
						iVar58 = 11;
						iVar59 = func_300(iVar5, iParam2, 11, 4);
						if (!FILE::_0x341DE7ED1D2A1BFD(iVar59, 3764877471, 0))
						{
							iVar58 = 4294967197;
						}
						break;
				}
				if (iVar58 != 4294967197)
				{
					iVar60 = 0;
					while (iVar60 < 17)
					{
						if (func_418(iVar5, iVar58, iVar60) == iVar57)
						{
							iVar11 = iVar60;
							iVar12 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 3);
						}
						iVar60++;
					}
				}
			}
		}
		if (iParam4 == 4294967295)
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_240(iParam1), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, PED::GET_PED_PALETTE_VARIATION(iParam0, func_240(iParam1)));
		}
		else
		{
			PED::SET_PED_COMPONENT_VARIATION(iParam0, func_240(iParam1), Global_11569[1 /*14*/].f_3, Global_11569[1 /*14*/].f_4, iParam4);
		}
		if (iParam5 == 0)
		{
			if (Global_11567 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = func_425(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != 4294967197)
					{
						func_324(iParam0, iVar2, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, iParam1 == 10);
						if (iVar2 == 3)
						{
							switch (Global_280004)
							{
								case 1165919867:
								case 1606204151:
								case 1774276352:
								case 1934254610:
								case 980775017:
								case 399321881:
									iVar11 = 4294967295;
									break;
							}
						}
						else if (iVar2 == 8)
						{
							if (iVar6 != 4294967197)
							{
								iVar6 = func_419(iVar5, iVar3, func_296(iParam0, 11), func_296(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = func_425(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != 4294967197)
				{
					func_324(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
				}
			}
			if ((iParam1 == 11 || iParam1 == 8) || iParam1 == 4)
			{
				if (func_345(iParam0))
				{
					iVar61 = func_343(iParam0, iVar5, iParam1, iParam2);
					if (iVar61 > 0)
					{
						iVar61 = (iVar61 + PED::GET_PED_TEXTURE_VARIATION(iParam0, 9));
						if (!func_342(iParam0, 9, iVar61))
						{
							func_324(iParam0, 9, iVar61, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
					}
					else
					{
						func_324(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar8 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
					if (FILE::_0x341DE7ED1D2A1BFD(iVar8, 240476421, 8))
					{
						func_324(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 8)
			{
				iVar62 = func_121(2040, 4294967295, 0);
				if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 5) != 0)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, func_336(iParam0, iVar62), func_335(iParam0, iVar62), func_334(iParam0, iVar62));
				}
				if (iParam0 == AUDIO::_0x0626A247D2405330())
				{
					PLAYER::SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(CAM::_0xDC9DA9E8789F5246(), 5, func_336(AUDIO::_0x0626A247D2405330(), iVar62), func_335(AUDIO::_0x0626A247D2405330(), iVar62), 0);
					PLAYER::SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), func_334(AUDIO::_0x0626A247D2405330(), iVar62));
					func_333(CAM::_0xDC9DA9E8789F5246(), iVar62);
				}
			}
			if (iParam1 == 7)
			{
				if ((iVar5 == joaat("mp_m_freemode_01") && iParam2 >= 92) || (iVar5 == joaat("mp_f_freemode_01") && iParam2 >= 55))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3975398423, 0))
					{
						func_324(iParam0, 9, 0, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("mp_f_freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar63 = func_433(iParam0, 4, 4294967295);
					iVar64 = iParam2;
				}
				else
				{
					iVar63 = iParam2;
					iVar64 = func_433(iParam0, 11, 4294967295);
				}
				if (func_332(iVar5, 11, iVar64, 4294967295))
				{
					if (!func_331(iVar5, 4, iVar63, 4294967295))
					{
						if (func_330(iVar5, 4, iVar63, &uVar65))
						{
							func_324(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
						}
					}
				}
				else if (func_331(iVar5, 4, iVar63, 4294967295))
				{
					if (func_329(iVar5, 4, iVar63, &uVar65))
					{
						func_324(iParam0, 4, uVar65, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
			if (iParam1 == 4 || iParam1 == 6)
			{
				iVar66 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 6);
				iVar67 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 6);
				iVar68 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 6, iVar66, iVar67);
				iVar69 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4);
				iVar70 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 4);
				iVar71 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, iVar69, iVar70);
				iVar72 = func_296(iParam0, 4);
				iVar73 = func_296(iParam0, 6);
				if (func_328(iVar5, iVar68))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar68, 1812005517, 0) != func_327(iVar5, iVar72, iVar68))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar68);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar68, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 6)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar73 = func_308(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_324(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_308(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_324(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar71, 2252324139, 0) != func_326(iVar5, iVar73, iVar71))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar71);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar71, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 4)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_308(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_324(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_308(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_324(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
				if (func_328(iVar5, iVar71))
				{
					if (FILE::_0x341DE7ED1D2A1BFD(iVar71, 2252324139, 0) != func_326(iVar5, iVar73, iVar71))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar71);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar71, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 4)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar72 = func_308(iVar5, iVar76, 4, 3);
										iVar71 = iVar76;
										func_324(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar72 = func_308(iVar5, iVar76, 4, 4);
										iVar71 = iVar76;
										func_324(iParam0, 4, iVar72, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
					else if (FILE::_0x341DE7ED1D2A1BFD(iVar68, 1812005517, 0) != func_327(iVar5, iVar72, iVar68))
					{
						iVar74 = FILE::_0xC17AD0E5752BECDA(iVar68);
						iVar75 = 0;
						while (iVar75 < iVar74)
						{
							FILE::GET_VARIANT_COMPONENT(iVar68, iVar75, &iVar76, &uVar77, &iVar78);
							if (iVar78 == 6)
							{
								if (iVar76 != 0 && iVar76 != 1849449579)
								{
									if (iVar5 == joaat("mp_m_freemode_01"))
									{
										iVar73 = func_308(iVar5, iVar76, 6, 3);
										iVar68 = iVar76;
										func_324(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									else if (iVar5 == joaat("mp_f_freemode_01"))
									{
										iVar73 = func_308(iVar5, iVar76, 6, 4);
										iVar68 = iVar76;
										func_324(iParam0, 6, iVar73, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
									}
									iVar75 = iVar74 + 1;
								}
							}
							iVar75++;
						}
					}
				}
			}
			if (iParam1 == 11 || iParam1 == 1)
			{
				func_420(iParam0);
				iVar79 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar80 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar81 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar79, iVar80);
				if (FILE::_0x341DE7ED1D2A1BFD(iVar81, 838607662, 0))
				{
					iVar3 = func_425(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != 4294967197)
					{
						func_324(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
					iVar3 = func_425(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != 4294967197)
					{
						func_324(iParam0, 14, iVar3, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_325(iParam0, &uVar4))
		{
			func_324(iParam0, 2, uVar4, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
		}
	}
	if (iVar6 != 4294967197 && !bParam13)
	{
		func_324(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar9 != 4294967197)
	{
		func_324(iParam0, 8, iVar9, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar7 != 4294967197)
	{
		func_324(iParam0, 1, iVar7, 0, 4294967295, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
	}
	if (iVar11 != 4294967295)
	{
		iVar82 = func_418(iVar5, func_433(iParam0, 3, 4294967295), iVar11);
		if (iVar82 != 4294967295)
		{
			if (iVar5 == joaat("mp_m_freemode_01"))
			{
				iVar10 = func_308(iVar5, iVar82, 3, 3);
			}
			else if (iVar5 == joaat("mp_f_freemode_01"))
			{
				iVar10 = func_308(iVar5, iVar82, 3, 4);
			}
			if (iVar10 != 4294967197)
			{
				iVar10 = (iVar10 + iVar12);
				func_324(iParam0, 3, iVar10, 0, iParam4, 0, 0, 0, 4294967295, 4294967295, 4294967295, 0, 0, 0);
			}
		}
	}
	Global_11567 = (Global_11567 - 1);
	return 1;
}

int func_325(int iParam0, var uParam1)//Position - 0x3A4DD
{
	int iVar0;
	int iVar1;
	
	*uParam1 = func_433(AUDIO::_0x0626A247D2405330(), 2, 4294967295);
	if (func_121(753, Global_11566, 0) != 4294967197 && func_131())
	{
		if (func_207() == 4)
		{
			return 1;
		}
		if (func_121(753, Global_11566, 0) == 0 && func_121(754, Global_11566, 0) == 0)
		{
			if (func_128(161, Global_11566))
			{
				if (func_121(2051, Global_11566, 0) == 0)
				{
					return 0;
				}
			}
			else if (func_121(752, Global_11566, 0) == 0)
			{
				return 0;
			}
		}
		iVar0 = func_121(753, Global_11566, 0);
		iVar1 = func_121(754, Global_11566, 0);
		if (!func_342(iParam0, iVar1, iVar0))
		{
			if (func_128(161, Global_11566))
			{
				*uParam1 = func_121(2051, Global_11566, 0);
			}
			else
			{
				*uParam1 = func_121(752, Global_11566, 0);
			}
			func_477(753, 4294967197, Global_11566, 1, 0);
			func_477(754, 2, Global_11566, 1, 0);
			return 1;
		}
	}
	return 0;
}

int func_326(int iParam0, int iParam1, int iParam2)//Position - 0x3A5F1
{
	int iVar0;
	
	iVar0 = 4294967295;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_300(iParam0, iParam1, 6, 3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3930719226, 0))
			{
				if ((FILE::_0x341DE7ED1D2A1BFD(iParam2, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2874141894, 0))
				{
					return 0;
				}
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if ((((((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3581268889, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3930719226, 0))
				{
					return 1;
				}
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_300(iParam0, iParam1, 6, 4);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if (((((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3581268889, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 140732128, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3028409363, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3985067549, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
	return 0;
}

int func_327(int iParam0, int iParam1, int iParam2)//Position - 0x3A822
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 4294967295;
	iVar1 = 4294967295;
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_300(iParam0, iParam1, 4, 3);
				iVar1 = func_411(iVar0);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				iVar2 = 1;
				if ((((((((((((((((((((((iParam1 >= 32 && iParam1 <= 47) || (iParam1 >= 64 && iParam1 <= 79)) || (iParam1 >= 96 && iParam1 <= 111)) || (iParam1 >= 176 && iParam1 <= 191)) || (iParam1 >= 192 && iParam1 <= 207)) || (iParam1 >= 224 && iParam1 <= 239)) || (iParam1 >= 240 && iParam1 <= 255)) || iVar1 == 2) || iVar1 == 4) || iVar1 == 6) || iVar1 == 11) || iVar1 == 12) || iVar1 == 14) || iVar1 == 15) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0))) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0))) || (FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0) && !FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0)))
				{
					iVar2 = 0;
				}
				switch (iVar0)
				{
					case 3855202361:
					case 1858824227:
					case 4250699079:
					case 301706885:
					case 1283072893:
					case 2704788731:
					case 1995307108:
					case 1029014836:
					case 3929399030:
					case 4156520969:
					case 2260244477:
					case 3075454234:
					case 153704652:
					case 356276239:
					case 586511233:
					case 1558996842:
					case 1183988406:
					case 1000678684:
					case 761792674:
					case 4149288057:
					case 686423978:
					case 3531559638:
					case 74266289:
					case 987390769:
					case 1591372991:
					case 1834027448:
					case 913054691:
					case 1142372153:
					case 2596955306:
					case 2851865357:
					case 2133699953:
					case 2370455978:
					case 3819435620:
					case 4057830099:
					case 754461254:
					case 3139126914:
					case 629180074:
					case 859251223:
					case 1610316715:
					case 901392169:
					case 4201984160:
					case 1346362420:
					case 485782942:
					case 312004063:
					case 6695290:
					case 1724446270:
					case 3846861623:
					case 3683868617:
					case 3183879215:
					case 2888597756:
					case 2382808253:
					case 2076516410:
					case 1919618438:
					case 45227112:
					case 2165873043:
					case 3873596709:
					case 3619604190:
						iVar2 = 0;
						break;
				}
				if (((FILE::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 713391749, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 434101562, 0))
				{
					if ((((((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 4025701093, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 201427653, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 967829025, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3609928037, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
					{
						iVar2 = 1;
					}
				}
				return iVar2;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (iParam1 >= 256)
			{
				iVar0 = func_300(iParam0, iParam1, 4, 4);
				iVar1 = func_411(iVar0);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 4238699116, 0))
			{
				if ((FILE::_0x341DE7ED1D2A1BFD(iVar0, 3214390491, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2907508806, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2874141894, 0))
				{
					if ((((FILE::_0x341DE7ED1D2A1BFD(iParam2, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 3315498572, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 2481756905, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 1248753945, 0)) || FILE::_0x341DE7ED1D2A1BFD(iParam2, 481861038, 0))
					{
						return 1;
					}
					return 0;
				}
				if (((((((((((((((((((((((((iParam1 >= 16 && iParam1 <= 31) || (iParam1 >= 48 && iParam1 <= 63)) || (iParam1 >= 96 && iParam1 <= 111)) || iVar1 == 1) || iVar1 == 3) || iVar1 == 6) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1863955539, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2106216756, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3533503320, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 684992453, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 916636514, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2355588846, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 264959411, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3167131331, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3175734607, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3087683953, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3445128205, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2206820464, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2848634098, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3864636947, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 3191922138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1055526375, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2274210138, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 2969153612, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar0, 1052059919, 0))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_328(int iParam0, int iParam1)//Position - 0x3AEDB
{
	switch (iParam0)
	{
		case joaat("mp_m_freemode_01"):
			if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam1, 4238699116, 0))
			{
				return 1;
			}
			break;
		
		case joaat("mp_f_freemode_01"):
			if (FILE::_0x341DE7ED1D2A1BFD(iParam1, 3930719226, 0) || FILE::_0x341DE7ED1D2A1BFD(iParam1, 4238699116, 0))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_329(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3AF47
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_300(iParam0, iParam2, iParam1, 4);
						if (iVar0 != 4294967295)
						{
							iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (!FILE::_0x341DE7ED1D2A1BFD(iVar3, 3194159983, 0))
										{
											*uParam3 = func_308(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_330(int iParam0, int iParam1, int iParam2, var uParam3)//Position - 0x3AFF0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						iVar0 = func_300(iParam0, iParam2, iParam1, 4);
						if (iVar0 != 4294967295)
						{
							iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
							iVar2 = 0;
							while (iVar2 < iVar1)
							{
								FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
								if (iVar5 == 4)
								{
									if (iVar3 != 0 && iVar3 != 1849449579)
									{
										if (FILE::_0x341DE7ED1D2A1BFD(iVar3, 3194159983, 0))
										{
											*uParam3 = func_308(iParam0, iVar3, iParam1, 4);
											return 1;
										}
									}
								}
								iVar2++;
							}
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_331(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B098
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_300(iParam0, iParam2, 4, 4);
						}
						if (FILE::_0x341DE7ED1D2A1BFD(iParam3, 3194159983, 0))
						{
							return 1;
						}
					}
					break;
			}
			break;
	}
	return 0;
}

int func_332(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3B0EE
{
	switch (iParam0)
	{
		case joaat("mp_f_freemode_01"):
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (iParam3 == 4294967295)
						{
							iParam3 = func_300(iParam0, iParam2, 11, 4);
						}
						return FILE::_0x341DE7ED1D2A1BFD(iParam3, 3764877471, 0);
					}
					break;
			}
			break;
	}
	return 0;
}

void func_333(int iParam0, int iParam1)//Position - 0x3B141
{
	if (iParam1 > 61)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 3746739837);
	}
	else if (iParam1 > 51)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else if (iParam1 > 46)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1766664132);
	}
	else if (iParam1 > 26)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1277738372);
	}
	else if (iParam1 > 0)
	{
		PLAYER::SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0, 1269440357);
	}
	else
	{
		PLAYER::CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(iParam0);
	}
}

int func_334(int iParam0, int iParam1)//Position - 0x3B1B7
{
	return 0;
}

int func_335(int iParam0, int iParam1)//Position - 0x3B1C0
{
	if (iParam1 >= 62)
	{
		return (iParam1 - 62);
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

var func_336(int iParam0, int iParam1)//Position - 0x3B222
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	bVar0 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != false;
	iVar1 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	iVar2 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 11), PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
	iVar3 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4));
	if ((((!bVar0 == Global_1160A || !iParam1 == Global_1160B) || !iVar1 == Global_1160C) || !iVar2 == Global_1160D) || !iVar3 == Global_1160E)
	{
		Global_1160A = bVar0;
		Global_1160B = iParam1;
		Global_1160C = iVar1;
		Global_1160D = iVar2;
		Global_1160E = iVar3;
		Global_1160F = func_337(iParam0, iParam1);
	}
	return Global_1160F;
}

int func_337(int iParam0, int iParam1)//Position - 0x3B2F2
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
		iVar3 = 69;
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
	iVar4 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8));
	if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 240476421, 8))
	{
		if (iVar2 == joaat("mp_m_freemode_01"))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2795734084, 8))
			{
				return (2 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3407826235, 8))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2795734084, 8))
			{
				return (7 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 350281921, 8))
			{
				return (8 + iVar3);
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3407826235, 8))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 3109595566, 8))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			if (FILE::_0x341DE7ED1D2A1BFD(iVar4, 2170337719, 8))
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		return func_341(iParam0, iParam1);
	}
	if (func_340(iParam0))
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
		iVar5 = FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 11, iVar0, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
		if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 655081063, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3764877471, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3581268889, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2412047274, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3977318242, 0))
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
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3315498572, 0))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
			{
				return func_341(iParam0, iParam1) + 15;
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1536649085, 0) && !FILE::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			iVar6 = func_339(iVar5, 0);
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
						iVar0 = func_411(iVar5);
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
						iVar0 = func_411(iVar5);
						break;
					}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 248194463, 0))
		{
			if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2947481270, 0))
			{
				return (3 + iVar3);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 396458410, 0))
		{
			iVar7 = func_338(iVar5, 0);
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
					iVar0 = func_411(iVar5);
					break;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3515131827, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3175734607, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2192107526, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1784133476, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2687017741, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1976716889, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2099109084, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2806526264, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2575799735, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1431529976, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3020868293, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1723403459, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2887353267, 0))
				{
					return func_341(iParam0, iParam1) + 15;
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 912543594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (2 + iVar3);
			}
		}
		else if ((FILE::_0x341DE7ED1D2A1BFD(iVar5, 3208708908, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 103539798, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 3300263412, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2044466679, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2274210138, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3230704479, 0))
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
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2875160829, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3241125037, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2936078416, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3853675954, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3547384111, 0))
		{
			if (iVar2 == joaat("mp_f_freemode_01"))
			{
				if (bVar1)
				{
					return func_341(iParam0, iParam1);
				}
				else
				{
					return (2 + iVar3);
				}
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2308552066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2206820464, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3422517591, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 700658917, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1714969731, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 745826556, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1055526375, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 144417099, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 492620493, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3878346342, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4192142290, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3561175191, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 137011325, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3653355204, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (6 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2943480357, 0))
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
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (2 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2175211152, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2787434379, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (7 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 947651647, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2788596422, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 1927516484, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2508519779, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3284162009, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2969153612, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3745123536, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3466488725, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1690933245, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else if (bVar1)
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1360588936, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2136821028, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1830529185, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4025701093, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 201427653, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 967829025, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3609928037, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3028409363, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3315498572, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2481756905, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 263623295, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3985067549, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4205963378, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3547108821, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return func_341(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 490219883, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1208450825, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 297865853, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 602650322, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 905042630, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1204125293, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 310055897, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 606713654, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return func_341(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1831422288, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3456830450, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 655638019, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 970679185, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 83294665, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 382246252, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4195902460, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3597311137, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3896754259, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1380605304, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3988198483, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 4236554734, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1711219157, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1466664110, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2326391594, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 245429010, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (48 + iVar3);
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 15161247, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2044923487, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3379614369, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3756588945, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2155823279, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3859427410, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 695107163, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				iVar0 = 7;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2795734084, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 350281921, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return (8 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2170337719, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1877382859, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2919088559, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2947481270, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (1 + iVar3);
			}
			else
			{
				return (1 + iVar3);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3754530791, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1207461955, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return func_341(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3509027759, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (8 + iVar3);
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2308552066, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return (4 + iVar3);
			}
			else
			{
				return func_341(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2631096120, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2827124116, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return func_341(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 3355441939, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1);
			}
			else
			{
				return func_341(iParam0, iParam1) + 15;
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 398019854, 0))
		{
			if (iVar2 == joaat("mp_m_freemode_01"))
			{
				return func_341(iParam0, iParam1) + 15;
			}
			else
			{
				return func_341(iParam0, iParam1);
			}
		}
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 1965569012, 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2026620439, 0) && iVar2 == joaat("mp_f_freemode_01"))
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
		else if (FILE::_0x341DE7ED1D2A1BFD(iVar5, 2884070230, 0))
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
		else if ((FILE::_0x341DE7ED1D2A1BFD(iVar5, 2276967906, 0) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 320460654, 0)) || FILE::_0x341DE7ED1D2A1BFD(iVar5, 3468832093, 0))
		{
			return (7 + iVar3);
		}
		else
		{
			iVar8 = iVar0;
			iVar0 = func_411(iVar5);
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

int func_338(int iParam0, int iParam1)//Position - 0x3D4EC
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 140732128, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1863955539, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2106216756, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3533503320, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1627756587, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 684992453, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 916636514, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2355588846, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 441715397, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 264959411, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3167131331, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3474242399, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 153792394, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3622096127, iParam1))
	{
		iVar0 = 13;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 572416369, iParam1))
	{
		iVar0 = 14;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 4098852308, iParam1))
	{
		iVar0 = 15;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1322269404, iParam1))
	{
		iVar0 = 16;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 548036233, iParam1))
	{
		iVar0 = 17;
	}
	return iVar0;
}

int func_339(int iParam0, int iParam1)//Position - 0x3D68C
{
	int iVar0;
	
	iVar0 = 4294967295;
	if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3424892835, iParam1))
	{
		iVar0 = 0;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3120042828, iParam1))
	{
		iVar0 = 1;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3426269137, iParam1))
	{
		iVar0 = 2;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 3117486850, iParam1))
	{
		iVar0 = 3;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2947481270, iParam1))
	{
		iVar0 = 4;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2639813129, iParam1))
	{
		iVar0 = 5;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 2189108303, iParam1))
	{
		iVar0 = 6;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1893564692, iParam1))
	{
		iVar0 = 7;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1710451520, iParam1))
	{
		iVar0 = 8;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1416808511, iParam1))
	{
		iVar0 = 9;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 1641506460, iParam1))
	{
		iVar0 = 10;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 699233865, iParam1))
	{
		iVar0 = 11;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 393400788, iParam1))
	{
		iVar0 = 12;
	}
	else if (FILE::_0x341DE7ED1D2A1BFD(iParam0, 216120498, iParam1))
	{
		iVar0 = 13;
	}
	return iVar0;
}

int func_340(int iParam0)//Position - 0x3D7D0
{
	if (FILE::_0x341DE7ED1D2A1BFD(FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 4, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 4), PED::GET_PED_TEXTURE_VARIATION(iParam0, 4)), 1052059919, 0))
	{
		return 1;
	}
	return 0;
}

int func_341(int iParam0, int iParam1)//Position - 0x3D7FF
{
	if (iParam1 > 69)
	{
		return 69;
	}
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

int func_342(int iParam0, int iParam1, int iParam2)//Position - 0x3D87D
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	var uVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	int iVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	struct<5> Var17;
	var uVar18;
	
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	Global_11569[1 /*14*/] = { func_440(iVar0, iParam1, iParam2, 4294967295) };
	uVar2 = Global_280004;
	uVar3 = Global_280005;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 0))
	{
		return 0;
	}
	if (iParam1 == 12)
	{
		uVar8 = { func_310(iVar0, iParam2) };
		iVar7 = 0;
		while (iVar7 < 7)
		{
			switch (iVar7)
			{
				case 0:
					iVar4 = 1;
					break;
				
				case 1:
					iVar4 = 4;
					break;
				
				case 2:
					iVar4 = 6;
					break;
				
				case 3:
					iVar4 = 7;
					break;
				
				case 4:
					iVar4 = 8;
					break;
				
				case 5:
					iVar4 = 11;
					break;
				
				case 6:
					iVar4 = 13;
					break;
			}
			if (uVar8[iVar4] != 4294967197)
			{
				if (!func_342(iParam0, iVar4, uVar8[iVar4]))
				{
					Global_280004 = uVar2;
					Global_280005 = uVar3;
					return 0;
					if (iVar4 == 13)
					{
						uVar9 = { func_306(iVar0, uVar8[iVar4]) };
						iVar5 = 0;
						while (iVar5 <= 8)
						{
							if (!func_342(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_11569[2 /*14*/] = { func_440(iVar0, 14, iVar6, 4294967295) };
									if (Global_11569[2 /*14*/].f_C == iVar5)
									{
										if (func_342(iParam0, 14, iVar6))
										{
											if (!func_298(iVar0, iParam2, 14, iVar6, &uVar8, &(Global_11569[2 /*14*/])))
											{
												Global_280004 = uVar2;
												Global_280005 = uVar3;
												return 0;
											}
										}
									}
									iVar6++;
								}
							}
							iVar5++;
						}
					}
					else
					{
						iVar1 = func_296(iParam0, iVar4);
						Global_11569[2 /*14*/] = { func_440(iVar0, iVar4, iVar1, 4294967295) };
						if (!func_298(iVar0, iParam2, iVar4, iVar1, &uVar8, &(Global_11569[2 /*14*/])))
						{
							Global_280004 = uVar2;
							Global_280005 = uVar3;
							return 0;
						}
					}
				}
			}
			iVar7++;
		}
		if ((uVar8[10] != 0 && uVar8[10] != 1849449579) && uVar8.f_10)
		{
			if (func_121(1757, Global_11566, 0) != uVar8[10])
			{
				Global_280004 = uVar2;
				Global_280005 = uVar3;
				return 0;
			}
		}
		Global_280004 = uVar2;
		Global_280005 = uVar3;
		return 1;
	}
	else if (iParam1 == 13)
	{
		uVar11 = { func_306(iVar0, iParam2) };
		iVar10 = 0;
		while (iVar10 <= 8)
		{
			if (!func_342(iParam0, 14, uVar11[iVar10]))
			{
				return 0;
			}
			iVar10++;
		}
		return 1;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(iParam0, Global_11569[1 /*14*/].f_C) == Global_11569[1 /*14*/].f_3 && (PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_11569[1 /*14*/].f_C) == Global_11569[1 /*14*/].f_4 || Global_11569[1 /*14*/].f_3 == 4294967295))
		{
			return 1;
		}
		if (((Global_11569[1 /*14*/].f_C == 0 && INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11569[1 /*14*/].f_6, 6)) && FILE::_0x341DE7ED1D2A1BFD(Global_280004, 3261533395, 1)) && unk_0x10B86AFFB106342E(Global_280004) > 0)
		{
			iVar16 = unk_0x10B86AFFB106342E(Global_280004);
			iVar12 = 0;
			while (iVar12 < iVar16)
			{
				unk_0xB316418AA9C1867B(Global_280004, iVar12, &iVar13, &uVar14, &uVar15);
				if (iVar13 != 0 && iVar13 != 1849449579)
				{
					FILE::INIT_SHOP_PED_PROP(&Var17);
					FILE::_0x5D5CAFF661DDF6FC(iVar13, &Var17);
					if (Var17.f_3 == PED::GET_PED_PROP_INDEX(iParam0, Global_11569[1 /*14*/].f_C) && Var17.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(iParam0, Global_11569[1 /*14*/].f_C))
					{
						return 1;
					}
				}
				iVar12++;
			}
		}
	}
	else
	{
		if (Global_11569[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(iParam0, func_240(iParam1)) && Global_11569[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(iParam0, func_240(iParam1)))
		{
			return 1;
		}
		if (iParam1 == 4)
		{
			Global_11568++;
			if (Global_11568 == 1)
			{
				if (func_332(iVar0, 11, func_296(iParam0, 11), 4294967295))
				{
					if (func_330(iVar0, 4, iParam2, &uVar18))
					{
						return func_342(iParam0, 4, uVar18);
					}
				}
				else if (func_329(iVar0, 4, iParam2, &uVar18))
				{
					return func_342(iParam0, 4, uVar18);
				}
			}
			Global_11568 = (Global_11568 - 1);
		}
	}
	return 0;
}

int func_343(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x3DCDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (func_340(iParam0))
	{
		return 4294967197;
	}
	if (func_344(iParam0))
	{
		return 4294967197;
	}
	if (iParam2 == 11)
	{
		if (iParam1 == joaat("mp_m_freemode_01"))
		{
			if (((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 16 && iParam3 <= 31)) || (iParam3 >= 80 && iParam3 <= 95)) || (iParam3 >= 140 && iParam3 <= 155)) || (iParam3 >= 188 && iParam3 <= 203))
			{
				return 1;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (((iParam3 >= 48 && iParam3 <= 63) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 108 && iParam3 <= 123))
			{
				return 11;
			}
			else if (iParam3 >= 96 && iParam3 <= 107)
			{
				return 41;
			}
			else if (iParam3 >= 156 && iParam3 <= 171)
			{
				return 36;
			}
			else if (iParam3 >= 172 && iParam3 <= 187)
			{
				return 31;
			}
			else if (iParam3 >= 204 && iParam3 <= 219)
			{
				return 16;
			}
			else if ((iParam3 >= 220 && iParam3 <= 235) || (iParam3 >= 124 && iParam3 <= 139))
			{
				return 26;
			}
			else if (iParam3 == 236)
			{
				return 21;
			}
			else if (iParam3 >= 237)
			{
				iVar0 = func_300(iParam1, iParam3, 11, 3);
				if (iVar0 != 4294967295)
				{
					iVar1 = FILE::_0xC17AD0E5752BECDA(iVar0);
					iVar2 = 0;
					while (iVar2 < iVar1)
					{
						FILE::GET_VARIANT_COMPONENT(iVar0, iVar2, &iVar3, &uVar4, &iVar5);
						if (iVar5 == 9)
						{
							if (iVar3 != 0 && iVar3 != 1849449579)
							{
								return func_308(iParam1, iVar3, 9, 3);
							}
							else
							{
								return uVar4;
							}
						}
						iVar2++;
					}
				}
				return 4294967197;
			}
		}
		else if (iParam1 == joaat("mp_f_freemode_01"))
		{
			if ((((((iParam3 >= 0 && iParam3 <= 15) || (iParam3 >= 64 && iParam3 <= 79)) || (iParam3 >= 176 && iParam3 <= 191)) || (iParam3 >= 192 && iParam3 <= 207)) || (iParam3 >= 208 && iParam3 <= 223)) || (iParam3 >= 240 && iParam3 <= 255))
			{
				return 1;
			}
			else if (((iParam3 >= 16 && iParam3 <= 31) || (iParam3 >= 112 && iParam3 <= 127)) || (iParam3 >= 128 && iParam3 <= 143))
			{
				return 16;
			}
			else if (iParam3 >= 32 && iParam3 <= 47)
			{
				return 6;
			}
			else if (iParam3 >= 48 && iParam3 <= 63)
			{
				return 11;
			}
			else if ((iParam3 >= 96 && iParam3 <= 111) || (iParam3 >= 160 && iParam3 <= 175))
			{
				return 21;
			}
			else if (iParam3 >= 224 && iParam3 <= 239)
			{
				return 26;
			}
			else if (iParam3 >= 144 && iParam3 <= 159)
			{
				return 0;
			}
			else if (iParam3 >= 80 && iParam3 <= 95)
			{
				return 31;
			}
			else if (iParam3 >= 256)
			{
				iVar6 = func_300(iParam1, iParam3, 11, 4);
				if (iVar6 != 4294967295)
				{
					iVar7 = FILE::_0xC17AD0E5752BECDA(iVar6);
					iVar8 = 0;
					while (iVar8 < iVar7)
					{
						FILE::GET_VARIANT_COMPONENT(iVar6, iVar8, &iVar9, &uVar10, &iVar11);
						if (iVar11 == 9)
						{
							if (iVar9 != 0 && iVar9 != 1849449579)
							{
								return func_308(iParam1, iVar9, 9, 4);
							}
							else
							{
								return uVar10;
							}
						}
						iVar8++;
					}
				}
				return 4294967197;
			}
		}
	}
	return 4294967197;
}

int func_344(int iParam0)//Position - 0x3E0FC
{
	if (FILE::_0x341DE7ED1D2A1BFD(FILE::GET_HASH_NAME_FOR_COMPONENT(iParam0, 8, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 8), PED::GET_PED_TEXTURE_VARIATION(iParam0, 8)), 2170337719, 0))
	{
		return 1;
	}
	return 0;
}

int func_345(int iParam0)//Position - 0x3E12E
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (iVar0 == joaat("mp_m_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
		else if (iVar0 == joaat("mp_f_freemode_01"))
		{
			if (PED::GET_PED_DRAWABLE_VARIATION(iParam0, 9) != 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_346(int iParam0, int iParam1)//Position - 0x3E180
{
	struct<10> Var0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	
	if (!PED::HAS_PED_HEAD_BLEND_FINISHED(iParam0))
	{
	}
	PED::_GET_PED_HEAD_BLEND_DATA(iParam0, &Var0);
	iVar1 = func_121(2095, iParam1, 0);
	iVar2 = func_121(2096, iParam1, 0);
	iVar3 = func_121(2097, iParam1, 0);
	iVar4 = func_121(2098, iParam1, 0);
	iVar5 = func_121(2099, iParam1, 0);
	iVar6 = func_121(2100, iParam1, 0);
	fVar7 = func_362(134, iParam1);
	fVar8 = func_362(135, iParam1);
	fVar9 = func_362(136, iParam1);
	bVar10 = func_128(160, iParam1);
	if (((((((((Var0 != iVar1 || Var0.f_1 != iVar2) || Var0.f_2 != iVar3) || Var0.f_3 != iVar4) || Var0.f_4 != iVar5) || Var0.f_5 != iVar6) || Var0.f_6 != fVar7) || Var0.f_7 != fVar8) || Var0.f_8 != fVar9) || Var0.f_9 != bVar10)
	{
		PED::SET_PED_HEAD_BLEND_DATA(iParam0, iVar1, iVar2, iVar3, iVar4, iVar5, iVar6, fVar7, fVar8, fVar9, bVar10);
		iVar11 = func_121(2101, iParam1, 0);
		if (iVar11 > 0)
		{
			func_347(iParam0, iParam1, 0);
		}
	}
}

void func_347(int iParam0, int iParam1, bool bParam2)//Position - 0x3E2C0
{
	int iVar0;
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
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	
	iVar0 = 0;
	while (iVar0 < 20)
	{
		iVar1 = iVar0;
		iVar2 = func_361(iVar1);
		if (!bParam2)
		{
			fVar3 = func_362(iVar2, iParam1);
		}
		else
		{
			fVar3 = func_360(iVar2, iParam1);
		}
		PED::_SET_PED_FACE_FEATURE(iParam0, iVar1, fVar3);
		iVar0++;
	}
	iVar4 = 0;
	while (iVar4 < 13)
	{
		iVar5 = func_359(iVar4);
		iVar6 = func_358(iVar5);
		iVar7 = func_357(iVar5);
		if (iVar6 != 4294967295 && iVar7 != 4294967295)
		{
			if (!bParam2)
			{
				iVar10 = func_354(iVar6, iParam1, 4294967295);
				fVar11 = func_362(iVar7, iParam1);
			}
			else
			{
				iVar10 = func_353(iVar6, iParam1);
				fVar11 = func_360(iVar7, iParam1);
			}
			PED::SET_PED_HEAD_OVERLAY(iParam0, iVar5, iVar10, fVar11);
			iVar8 = func_352(iVar5);
			iVar9 = func_351(iVar5);
			if (iVar8 != 4294967295)
			{
				if (!bParam2)
				{
					iVar13 = func_121(iVar8, iParam1, 0);
					iVar14 = func_121(iVar9, iParam1, 0);
				}
				else
				{
					iVar13 = func_350(iVar8, iParam1);
					iVar14 = func_350(iVar9, iParam1);
				}
				func_349(iVar13, &iVar12, &iVar15);
				PED::_SET_PED_HEAD_OVERLAY_COLOR(iParam0, iVar5, iVar15, iVar12, iVar14);
			}
		}
		iVar4++;
	}
	func_348(&iParam0, iParam1, bParam2);
}

void func_348(int iParam0, int iParam1, bool bParam2)//Position - 0x3E3F2
{
	float fVar0;
	
	if (!bParam2)
	{
		fVar0 = func_362(157, iParam1);
	}
	else
	{
		fVar0 = func_360(157, iParam1);
	}
	if (*iParam0 == AUDIO::_0x0626A247D2405330())
	{
	}
	PED::_SET_PED_EYE_COLOR(*iParam0, SYSTEM::ROUND(fVar0));
}

void func_349(int iParam0, var uParam1, var uParam2)//Position - 0x3E431
{
	int iVar0;
	
	*uParam1 = SYSTEM::SHIFT_RIGHT(iParam0, 16);
	iVar0 = iParam0 & 65535;
	*uParam2 = iVar0;
}

int func_350(int iParam0, int iParam1)//Position - 0x3E452
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_26B05F[iParam0 /*3*/][func_122(iParam1)];
	if (unk_0x4FB93AB9FE7E9240(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0;
}

int func_351(int iParam0)//Position - 0x3E47D
{
	switch (iParam0)
	{
		case 2:
			return 2159;
		
		case 1:
			return 2160;
		
		case 5:
			return 2161;
		
		case 8:
			return 2162;
		
		case 10:
			return 2157;
		
		default:
	}
	return 4294967295;
}

int func_352(int iParam0)//Position - 0x3E4C9
{
	switch (iParam0)
	{
		case 2:
			return 2152;
		
		case 1:
			return 2153;
		
		case 5:
			return 2154;
		
		case 8:
			return 2155;
		
		case 10:
			return 2156;
		
		default:
	}
	return 4294967295;
}

int func_353(int iParam0, int iParam1)//Position - 0x3E515
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_123();
	}
	iVar1 = 0;
	iVar2 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
		iVar2 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
		iVar2 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
		iVar2 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar1 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
		iVar2 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar1 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
		iVar2 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar1 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
		iVar2 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
		iVar2 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_MP_NGPSTAT_INT");
		iVar2 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_MP_LRPSTAT_INT");
		iVar2 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_MP_APAPSTAT_INT");
		iVar2 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_MP_LR2PSTAT_INT");
		iVar2 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_MP_BIKEPSTAT_INT");
		iVar2 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_MP_IMPEXPPSTAT_INT");
		iVar2 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_MP_GUNRPSTAT_INT");
		iVar2 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_MP_NGDLCPSTAT_INT");
		iVar2 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
		iVar2 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
		iVar2 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
		iVar2 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar1 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
		iVar2 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	if (!HUD::_0x90A6526CF0381030(iVar1, &iVar0, iVar2, 8))
	{
		iVar0 = 0;
	}
	if (iParam0 == 384)
	{
	}
	return iVar0;
}

int func_354(int iParam0, int iParam1, int iParam2)//Position - 0x3EA5F
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_123();
	}
	iVar0 = 0;
	iVar1 = func_356(iParam0, iParam1);
	iVar2 = func_355(iParam0);
	if (0 != iVar1)
	{
		if (!STATS::STAT_GET_MASKED_INT(iVar1, &iVar0, iVar2, 8, iParam2))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_355(int iParam0)//Position - 0x3EAA5
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = ((iParam0 - 384) - STATS::_0x94F12ABF9C79E339((iParam0 - 384)) * 8) * 8;
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = ((iParam0 - 457) - STATS::_0x94F12ABF9C79E339((iParam0 - 457)) * 8) * 8;
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = ((iParam0 - 1281) - STATS::_0x94F12ABF9C79E339((iParam0 - 1281)) * 8) * 8;
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = ((iParam0 - 1305) - STATS::_0x94F12ABF9C79E339((iParam0 - 1305)) * 8) * 8;
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = ((iParam0 - 1361) - STATS::_0x94F12ABF9C79E339((iParam0 - 1361)) * 8) * 8;
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = ((iParam0 - 1393) - STATS::_0x94F12ABF9C79E339((iParam0 - 1393)) * 8) * 8;
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = ((iParam0 - 4143) - STATS::_0x94F12ABF9C79E339((iParam0 - 4143)) * 8) * 8;
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = ((iParam0 - 3879) - STATS::_0x94F12ABF9C79E339((iParam0 - 3879)) * 8) * 8;
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = ((iParam0 - 4399) - STATS::_0x94F12ABF9C79E339((iParam0 - 4399)) * 8) * 8;
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = ((iParam0 - 6413) - STATS::_0x94F12ABF9C79E339((iParam0 - 6413)) * 8) * 8;
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = ((iParam0 - 7262) - STATS::_0x94F12ABF9C79E339((iParam0 - 7262)) * 8) * 8;
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = ((iParam0 - 7681) - STATS::_0x94F12ABF9C79E339((iParam0 - 7681)) * 8) * 8;
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = ((iParam0 - 9553) - STATS::_0x94F12ABF9C79E339((iParam0 - 9553)) * 8) * 8;
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = ((iParam0 - 15265) - STATS::_0x94F12ABF9C79E339((iParam0 - 15265)) * 8) * 8;
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = ((iParam0 - 7313) - STATS::_0x94F12ABF9C79E339((iParam0 - 7313)) * 8) * 8;
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = ((iParam0 - 7641) - STATS::_0x94F12ABF9C79E339((iParam0 - 7641)) * 8) * 8;
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = ((iParam0 - 16010) - STATS::_0x94F12ABF9C79E339((iParam0 - 16010)) * 8) * 8;
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = ((iParam0 - 18162) - STATS::_0x94F12ABF9C79E339((iParam0 - 18162)) * 8) * 8;
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = ((iParam0 - 19018) - STATS::_0x94F12ABF9C79E339((iParam0 - 19018)) * 8) * 8;
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = ((iParam0 - 22194) - STATS::_0x94F12ABF9C79E339((iParam0 - 22194)) * 8) * 8;
	}
	return iVar0;
}

int func_356(int iParam0, int iParam1)//Position - 0x3EE47
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_123();
	}
	iVar0 = 0;
	if (iParam0 >= 384 && iParam0 < 457)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 384), 0, 1, iParam1);
	}
	else if (iParam0 >= 457 && iParam0 < 513)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 457), 1, 1, iParam1);
	}
	else if (iParam0 >= 1281 && iParam0 < 1305)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1281), 0, 0, 0);
	}
	else if (iParam0 >= 1305 && iParam0 < 1361)
	{
		iVar0 = STATS::_GET_PSTAT_INT_HASH((iParam0 - 1305), 1, 0, 0);
	}
	else if (iParam0 >= 1361 && iParam0 < 1393)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1361), 0, 0, 0);
	}
	else if (iParam0 >= 1393 && iParam0 < 2919)
	{
		iVar0 = STATS::_GET_TUPSTAT_INT_HASH((iParam0 - 1393), 0, 1, iParam1);
	}
	else if (iParam0 >= 4143 && iParam0 < 4207)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4143), 0, 0, 0, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 3879 && iParam0 < 4143)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 3879), 0, 1, iParam1, "_NGPSTAT_INT");
	}
	else if (iParam0 >= 4399 && iParam0 < 6028)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 4399), 0, 1, iParam1, "_LRPSTAT_INT");
	}
	else if (iParam0 >= 6413 && iParam0 < 7262)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 6413), 0, 1, iParam1, "_APAPSTAT_INT");
	}
	else if (iParam0 >= 7262 && iParam0 < 7313)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7262), 0, 1, iParam1, "_LR2PSTAT_INT");
	}
	else if (iParam0 >= 7681 && iParam0 < 9361)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7681), 0, 1, iParam1, "_BIKEPSTAT_INT");
	}
	else if (iParam0 >= 9553 && iParam0 < 15265)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 9553), 0, 1, iParam1, "_IMPEXPPSTAT_INT");
	}
	else if (iParam0 >= 15265 && iParam0 < 15369)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 15265), 0, 1, iParam1, "_GUNRPSTAT_INT");
	}
	else if (iParam0 >= 7313 && iParam0 < 7321)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7313), 0, 0, 0, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 7641 && iParam0 < 7681)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 7641), 0, 1, iParam1, "_NGDLCPSTAT_INT");
	}
	else if (iParam0 >= 16010 && iParam0 < 18098)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 16010), 0, 1, iParam1, "_DLCSMUGCHARPSTAT_INT");
	}
	else if (iParam0 >= 18162 && iParam0 < 19018)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 18162), 0, 1, iParam1, "_GANGOPSPSTAT_INT");
	}
	else if (iParam0 >= 19018 && iParam0 < 22066)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 19018), 0, 1, iParam1, "_BUSINESSBATPSTAT_INT");
	}
	else if (iParam0 >= 22194 && iParam0 < 24962)
	{
		iVar0 = STATS::_GET_NGSTAT_INT_HASH((iParam0 - 22194), 0, 1, iParam1, "_ARENAWARSPSTAT_INT");
	}
	return iVar0;
}

int func_357(int iParam0)//Position - 0x3F19C
{
	switch (iParam0)
	{
		case 3:
			return 90;
		
		case 7:
			return 93;
		
		case 0:
			return 87;
		
		case 6:
			return 92;
		
		case 2:
			return 89;
		
		case 1:
			return 88;
		
		case 4:
			return 91;
		
		case 8:
			return 158;
		
		case 9:
			return 159;
		
		case 5:
			return 160;
		
		case 10:
			return 163;
		
		case 11:
			return 161;
		
		case 12:
			return 162;
		
		default:
	}
	return 4294967295;
}

int func_358(int iParam0)//Position - 0x3F23B
{
	switch (iParam0)
	{
		case 3:
			return 450;
		
		case 7:
			return 453;
		
		case 0:
			return 447;
		
		case 6:
			return 452;
		
		case 2:
			return 449;
		
		case 1:
			return 448;
		
		case 4:
			return 451;
		
		case 8:
			return 3940;
		
		case 9:
			return 3941;
		
		case 5:
			return 3942;
		
		case 10:
			return 3943;
		
		case 11:
			return 3944;
		
		case 12:
			return 3945;
		
		default:
	}
	return 4294967295;
}

int func_359(int iParam0)//Position - 0x3F2E7
{
	switch (iParam0)
	{
		case 0:
			return 7;
		
		case 1:
			return 3;
		
		case 2:
			return 9;
		
		case 3:
			return 6;
		
		case 4:
			return 0;
		
		case 5:
			return 4;
		
		case 6:
			return 5;
		
		case 7:
			return 2;
		
		case 8:
			return 1;
		
		case 9:
			return 8;
		
		case 10:
			return 10;
		
		case 11:
			return 11;
		
		case 12:
			return 12;
		
		default:
	}
	return 4294967295;
}

float func_360(int iParam0, int iParam1)//Position - 0x3F37E
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_272506[iParam0 /*3*/][func_122(iParam1)];
	if (HUD::_0x5FBD7095FE7AE57F(uVar0, &uVar1))
	{
		return uVar1;
	}
	return 0f;
}

int func_361(int iParam0)//Position - 0x3F3A9
{
	switch (iParam0)
	{
		case 0:
			return 137;
		
		case 1:
			return 138;
		
		case 2:
			return 139;
		
		case 3:
			return 140;
		
		case 4:
			return 141;
		
		case 5:
			return 142;
		
		case 6:
			return 143;
		
		case 7:
			return 144;
		
		case 8:
			return 145;
		
		case 9:
			return 146;
		
		case 10:
			return 147;
		
		case 11:
			return 148;
		
		case 12:
			return 149;
		
		case 13:
			return 150;
		
		case 14:
			return 151;
		
		case 15:
			return 152;
		
		case 16:
			return 153;
		
		case 17:
			return 154;
		
		case 18:
			return 155;
		
		case 19:
			return 156;
		
		default:
	}
	return 4294967295;
}

float func_362(int iParam0, int iParam1)//Position - 0x3F495
{
	int iVar0;
	var uVar1;
	
	iVar0 = Global_272506[iParam0 /*3*/][func_122(iParam1)];
	if (STATS::STAT_GET_FLOAT(iVar0, &uVar1, 4294967295))
	{
		return uVar1;
	}
	return 0f;
}

int func_363(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11)//Position - 0x3F4C1
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
	struct<7> Var21;
	int iVar22;
	
	if (iParam0 == joaat("mp_m_freemode_01"))
	{
		iVar1 = 4294967295;
		iVar2 = 4294967295;
		if (Global_4116E2 == iParam1)
		{
			iVar2 = Global_4116E1;
			iVar1 = Global_4116E0;
		}
		else if (iParam1 >= 92)
		{
			iVar2 = func_300(iParam0, iParam1, 7, 3);
			iVar1 = func_411(iVar2);
			Global_4116E2 = iParam1;
			Global_4116E1 = iVar2;
			Global_4116E0 = iVar1;
		}
		iVar3 = 4294967295;
		iVar4 = 4294967295;
		if (Global_4116E5 == iParam3)
		{
			iVar4 = Global_4116E4;
			iVar3 = Global_4116E3;
		}
		else if (iParam3 >= 237)
		{
			iVar4 = func_300(iParam0, iParam3, 11, 3);
			iVar3 = func_411(iVar4);
			Global_4116E5 = iParam3;
			Global_4116E4 = iVar4;
		}
		{