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
	vector3 vLocal_22 = { 0f, 0f, 0f };
	float fLocal_23 = 0f;
	float fLocal_24 = 0f;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	float fLocal_29 = 0f;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	var uLocal_43 = 0;
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
	struct<68> Local_98 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	vector3 vLocal_101 = { 0f, 0f, 0f };
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 3;
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
	var uLocal_153 = 4;
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
	var uLocal_218 = 2;
	var uLocal_219 = 0;
	var uLocal_220 = 4;
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
	var uLocal_286 = 4;
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
	var uLocal_357 = 12;
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
	var uLocal_538 = 3;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	int iLocal_542 = 0;
	int iLocal_543 = 0;
	int iLocal_544 = 0;
	int iLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	struct<4> Local_548 = { 0, 0, 0, 0 } ;
	var uLocal_549 = 16;
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
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 0;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
	var uScriptParam_23 = 0;
	var uScriptParam_24 = 0;
	var uScriptParam_25 = 0;
	var uScriptParam_26 = 0;
	var uScriptParam_27 = 0;
	var uScriptParam_28 = 0;
	var uScriptParam_29 = 0;
	var uScriptParam_30 = 0;
	var uScriptParam_31 = 0;
	var uScriptParam_32 = 0;
	var uScriptParam_33 = 0;
	var uScriptParam_34 = 0;
	var uScriptParam_35 = 0;
	var uScriptParam_36 = 0;
	var uScriptParam_37 = 0;
	var uScriptParam_38 = 0;
	var uScriptParam_39 = 0;
	var uScriptParam_40 = 0;
	var uScriptParam_41 = 0;
	var uScriptParam_42 = 0;
	var uScriptParam_43 = 0;
	var uScriptParam_44 = 0;
	var uScriptParam_45 = 0;
	var uScriptParam_46 = 0;
	var uScriptParam_47 = 0;
	var uScriptParam_48 = 0;
	var uScriptParam_49 = 0;
	var uScriptParam_50 = 0;
	var uScriptParam_51 = 0;
	var uScriptParam_52 = 0;
	var uScriptParam_53 = 0;
	var uScriptParam_54 = 0;
	var uScriptParam_55 = 0;
	var uScriptParam_56 = 0;
	var uScriptParam_57 = 0;
	var uScriptParam_58 = 0;
	var uScriptParam_59 = 0;
	var uScriptParam_60 = 0;
	var uScriptParam_61 = 0;
	var uScriptParam_62 = 0;
	var uScriptParam_63 = 0;
	var uScriptParam_64 = 0;
	var uScriptParam_65 = 0;
	var uScriptParam_66 = 0;
	var uScriptParam_67 = 0;
	var uScriptParam_68 = 0;
	var uScriptParam_69 = 0;
	var uScriptParam_70 = 0;
	var uScriptParam_71 = 0;
	var uScriptParam_72 = 0;
	var uScriptParam_73 = 0;
	var uScriptParam_74 = 0;
	var uScriptParam_75 = 0;
	var uScriptParam_76 = 0;
	var uScriptParam_77 = 0;
	var uScriptParam_78 = 0;
	var uScriptParam_79 = 0;
	var uScriptParam_80 = 0;
	var uScriptParam_81 = 0;
	var uScriptParam_82 = 0;
	var uScriptParam_83 = 0;
	var uScriptParam_84 = 0;
	var uScriptParam_85 = 0;
	var uScriptParam_86 = 0;
	var uScriptParam_87 = 0;
	var uScriptParam_88 = 0;
	var uScriptParam_89 = 0;
	var uScriptParam_90 = 0;
	var uScriptParam_91 = 0;
	var uScriptParam_92 = 0;
	var uScriptParam_93 = 0;
	var uScriptParam_94 = 0;
	var uScriptParam_95 = 0;
#endregion

void __EntryFunction__()//Position - 0x0
{
	var uVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	var uVar4;
	var uVar5;
	struct<27> Var6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	struct<11> Var11;
	var uVar12;
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
	vector3 vVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	var uVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39[3];
	int iVar40;
	var uVar41;
	int iVar42;
	int iVar43;
	int iVar44[6];
	int iVar45;
	int iVar46;
	var uVar47;
	var uVar48;
	var uVar49;
	var uVar50;
	var uVar51;
	var uVar52;
	int iVar53;
	char* sVar54;
	struct<4> Var55;
	vector3 vVar56;
	vector3 vVar57;
	vector3 vVar58;
	vector3 vVar59;
	var uVar60;
	vector3 vVar61;
	vector3 vVar62;
	var uVar63;
	var uVar64;
	float fVar65;
	var uVar66;
	var uVar67;
	var uVar68;
	float fVar69;
	int iVar70;
	int iVar71;
	int iVar72;
	int iVar73;
	int iVar74;
	int iVar75;
	int iVar76;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	int iVar83;
	int iVar84;
	int iVar85;
	int iVar86;
	var uVar87;
	var uVar88;
	int iVar89;
	bool bVar90;
	bool bVar91;
	int iVar92;
	bool bVar93;
	bool bVar94;
	var uVar95;
	bool bVar96;
	bool bVar97;
	bool bVar98;
	bool bVar99;
	bool bVar100;
	bool bVar101;
	bool bVar102;
	bool bVar103;
	bool bVar104;
	bool bVar105;
	bool bVar106;
	bool bVar107;
	bool bVar108;
	bool bVar109;
	bool bVar110;
	bool bVar111;
	bool bVar112;
	bool bVar113;
	int iVar114;
	vector3 vVar115;
	int iVar116;
	bool bVar117;
	
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
	fLocal_23 = -0.0375f;
	fLocal_24 = 0.17f;
	iLocal_26 = 3;
	fLocal_29 = 80f;
	fLocal_30 = 140f;
	fLocal_31 = 180f;
	iLocal_37 = 1;
	iLocal_38 = 65;
	iLocal_39 = 49;
	iLocal_40 = 64;
	fLocal_94 = ((0.05f + 0.275f) - 0.01f);
	vLocal_101 = { 500f, 500f, 500f };
	uVar0 = 13;
	Var3.f_C = 12;
	uVar5 = 2;
	Var6.f_3 = 8;
	Var6.f_C = 8;
	Var6.f_15 = 4;
	Var6.f_1A.f_20 = 3;
	Var6.f_1A.f_24 = 1;
	Var6.f_1A.f_35 = 2;
	Var6.f_1A.f_39 = 13;
	Var6.f_1A.f_47 = 13;
	Var6.f_1A.f_118 = 13;
	Var6.f_1A.f_1E9 = 13;
	Var6.f_1A.f_1F7 = 13;
	Var6.f_1A.f_205 = 13;
	Var6.f_1A.f_213 = 13;
	Var11.f_A.f_2 = 8;
	Var11.f_A.f_2.f_1.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	Var11.f_A.f_2.f_1.f_F.f_F.f_F.f_F.f_F.f_F.f_F.f_3 = 4;
	iVar14 = 4294967295;
	uVar32 = 16;
	iVar33 = ScriptParam_548;
	iVar42 = ScriptParam_548.f_3;
	iVar53 = "BJ_FAIL";
	sVar54 = "";
	vVar59 = { 5f, 5f, 10f };
	fVar65 = 1f;
	fVar69 = -1f;
	iVar70 = 4294967295;
	iVar73 = 4294967295;
	iVar77 = Global_19E56.f_49FB;
	iVar80 = 1;
	iVar81 = 4294967295;
	bVar100 = false;
	bVar105 = true;
	bVar107 = false;
	bVar108 = false;
	bVar110 = true;
	bVar111 = false;
	bVar112 = false;
	bVar113 = false;
	if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_548.f_1))
	{
		iVar40 = ScriptParam_548.f_1;
	}
	else
	{
		iVar40 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	}
	bVar111 = WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"), 0);
	bVar112 = PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(CAM::_0xDC9DA9E8789F5246());
	if (bVar111)
	{
		PLAYER::GET_PLAYER_PARACHUTE_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), &iVar86);
		PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), &uVar87);
	}
	if (bVar112)
	{
		PLAYER::GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(CAM::_0xDC9DA9E8789F5246(), &uVar88);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar40))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar40, true, 1);
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_543(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, &iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
	}
	if (iVar77 < 0)
	{
		return;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_49FB.f_1, iVar77))
	{
		fVar65 = 0.1f;
	}
	iVar13 = iVar77;
	func_542(0);
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	MISC::SET_MISSION_FLAG(1);
	func_541(23, 1);
	HUD::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(1500f, 0, 21);
	func_515(&Var3, iVar13);
	if (ENTITY::DOES_ENTITY_EXIST(iVar42))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar42, true, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar33))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar33, true, 1);
		if (func_514(&Var3) != 0 && ENTITY::GET_ENTITY_MODEL(iVar33) == func_514(&Var3))
		{
			iVar36 = iVar33;
			iVar33 = 0;
		}
	}
	while (true)
	{
		if (!bVar105)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			bVar105 = false;
		}
		if ((iVar7 >= 6 && iVar7 <= 10) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
		{
			iVar15 = func_503();
		}
		if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
		{
			PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
		}
		func_502();
		func_494(&uVar4);
		func_490(&Var6, iVar7);
		func_486(&Var6, iVar7, iVar13, bVar93);
		switch (iVar7)
		{
			case 0:
				func_485();
				if (CAM::IS_SCREEN_FADING_OUT())
				{
					break;
				}
				func_479();
				func_478(1);
				func_474("AM_H_BASEJ", 1);
				HUD::CLEAR_PRINTS();
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				if (iVar13 == 0)
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 1, 0, 1);
					uVar41 = VEHICLE::_0x54B0F614960F4A5F(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
				}
				else if (iVar13 == 5)
				{
					PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 1, 0, 1);
				}
				else if (iVar13 == 4)
				{
					func_470(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					MISC::CLEAR_AREA(-74.9632f, -827.4467f, 324.9521f, 25f, 1, 0, 0, false);
				}
				else if (iVar13 == 8)
				{
					func_470(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					MISC::CLEAR_AREA(-807.073f, 330.8846f, 232.6766f, 25f, 1, 0, 0, false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar33))
				{
					func_469(&iVar23);
				}
				if ((iVar13 == 6 || iVar13 == 12) || iVar13 == 5)
				{
					if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_548.f_2))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_548.f_2, true, 1);
						OBJECT::DELETE_OBJECT(&(ScriptParam_548.f_2));
					}
					func_460(&uVar5, &Var3, iVar13, iVar13 == 6);
					bVar102 = true;
				}
				iVar7 = 1;
				break;
			
			case 1:
				if (CAM::IS_SCREEN_FADED_OUT() || (((iVar13 == 5 || iVar13 == 6) || iVar13 == 12) && !bVar93))
				{
					if (!bVar93)
					{
						if ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)
						{
							vVar57 = { func_459(iVar13) };
							vVar57 = { func_458(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), MISC::TAN(vVar57.x)) };
							if (func_457(iVar13))
							{
								STREAMING::NEW_LOAD_SCENE_START(func_456(iVar13), vVar57, 4000f, 0);
							}
						}
						func_450(&Var3, iVar13, &uVar0, &iVar1, &iVar2, &uVar51, &iVar84);
					}
					else if (func_448(func_449(iVar13)))
					{
						vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_447(&Var3))), SYSTEM::SIN((-97.4239f + func_447(&Var3)))) };
						vVar61 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar33, 1.12046f, -0.317773f, 1.3385f) };
						vVar62 = { func_446(vVar62, 8.909f) };
						if (func_457(iVar13))
						{
							STREAMING::NEW_LOAD_SCENE_START(vVar61 + vVar62, vVar62, 4000f, 0);
						}
					}
					else
					{
						vVar57 = { -10f, 0f, func_447(&Var3) };
						vVar57 = { func_458(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), MISC::TAN(vVar57.x)) };
						if (func_457(iVar13))
						{
							STREAMING::NEW_LOAD_SCENE_START(func_456(iVar13), vVar57, 4000f, 0);
						}
					}
					if (((bVar93 || iVar13 == 4) || iVar13 == 8) || iVar13 == 3)
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
						{
							PED::_0xF9ACF4A08098EA25(AUDIO::_0x0626A247D2405330(), 1);
						}
						ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), func_456(iVar13), 0, 0, 0, 1);
						ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), func_447(&Var3));
						unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), true);
						PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
					}
					iVar7 = 2;
				}
				else if (!CAM::IS_SCREEN_FADING_OUT() && (!func_445(&iVar23) || func_444(&iVar23) > 0.05f))
				{
					if (PED::IS_PED_IN_ANY_HELI(AUDIO::_0x0626A247D2405330()))
					{
						CAM::DO_SCREEN_FADE_OUT(2500);
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(800);
					}
				}
				break;
			
			case 2:
				if (func_442(&uVar0, &iVar16, &uVar51, iVar13, iVar84, ((iVar13 != 5 && iVar13 != 6) && iVar13 != 12)))
				{
					func_441(&iVar16);
					func_418(&Var3, &uVar32, &iVar72, &iVar33, &iVar34, &iVar36, &iVar35, &iVar37, &iVar42, &iVar43, iVar1, iVar2, &iVar19, iVar13, &iVar81);
					MISC::_0x1327E2FE9746BAEE(AUDIO::_0x0626A247D2405330(), 1, 0);
					if (!bVar93 && !bVar102)
					{
						func_460(&uVar5, &Var3, iVar13, 0);
					}
					iVar7 = 3;
				}
				break;
			
			case 3:
				if (!func_445(&iVar16) && !bVar93)
				{
					func_417(0, 0, 1);
					func_469(&iVar16);
				}
				else if ((func_445(&iVar16) && func_444(&iVar16) > 0.2f) || bVar93)
				{
					if (func_448(func_449(iVar13)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "oddjobs@basejump@", "Heli_door_loop", 3))
					{
					}
					else if (bVar93)
					{
						CAM::DO_SCREEN_FADE_OUT(800);
						if (func_445(&iVar16))
						{
							func_441(&iVar16);
						}
						if (func_514(&Var3) != 0)
						{
							unk_0x346478B12F69D4E3(iVar36, false);
							func_469(&iVar22);
						}
						iVar7 = 4;
					}
					else
					{
						func_441(&iVar16);
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							SYSTEM::WAIT(1000);
							CAM::SET_CAM_ACTIVE_WITH_INTERP(func_416(&uVar5, 1), func_416(&uVar5, 0), 10000, 1, 1);
							CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
							CAM::DO_SCREEN_FADE_IN(800);
						}
						BRAIN::ENABLE_SCRIPT_BRAIN_SET();
						if (func_448(func_449(iVar13)))
						{
							vVar62 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_447(&Var3))), SYSTEM::SIN((-97.4239f + func_447(&Var3)))) };
							vVar61 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar33, 1.12046f, -0.317773f, 1.3385f) };
							vVar62 = { func_446(vVar62, 8.909f) };
							if (func_457(iVar13))
							{
								STREAMING::NEW_LOAD_SCENE_START(vVar61 + vVar62, vVar62, 4000f, 0);
							}
						}
						else
						{
							vVar57 = { -10f, 0f, func_447(&Var3) };
							vVar57 = { func_458(SYSTEM::COS(vVar57.z), SYSTEM::SIN(vVar57.z), MISC::TAN(vVar57.x)) };
							if (func_457(iVar13))
							{
								STREAMING::NEW_LOAD_SCENE_START(func_456(iVar13), vVar57, 4000f, 0);
							}
						}
						if (!func_414(func_415(iVar13)) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
						{
							NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
							PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
							if (PED::GET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330()))
							{
								PED::SET_PED_STEALTH_MOVEMENT(AUDIO::_0x0626A247D2405330(), 0, 0);
							}
							ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), func_415(iVar13), 1, 0, 0, 1);
							ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), func_413(func_415(iVar13), func_456(iVar13)));
							PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
							if (func_411() == 0)
							{
								PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 9, 5, 0, 0);
							}
							else if (func_411() == 1)
							{
								PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 8, 1, 0, 0);
							}
							else if (func_411() == 2)
							{
								PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 8, 3, 0, 0);
							}
							BRAIN::OPEN_SEQUENCE_TASK(&uVar48);
							if (func_410(iVar13) > 0)
							{
								BRAIN::TASK_STAND_STILL(0, func_410(iVar13));
							}
							BRAIN::TASK_GO_STRAIGHT_TO_COORD(0, func_456(iVar13), 1f, 4294967295, func_447(&Var3), 1056964608);
							CUTSCENE::_0x8D9DF6ECA8768583(uVar48);
							BRAIN::TASK_PERFORM_SEQUENCE(AUDIO::_0x0626A247D2405330(), uVar48);
							BRAIN::CLEAR_SEQUENCE_TASK(&uVar48);
						}
						if (!func_448(func_449(iVar13)))
						{
							if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
							{
								PED::GET_PED_NEARBY_VEHICLES(AUDIO::_0x0626A247D2405330(), &iVar39);
							}
							iVar82 = 0;
							while (iVar82 < iVar39)
							{
								if (ENTITY::DOES_ENTITY_EXIST(iVar39[iVar82]) && !ENTITY::IS_ENTITY_DEAD(iVar39[iVar82], 0))
								{
									if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(iVar39[iVar82], 0), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 0)) < 2500f)
									{
										ENTITY::SET_ENTITY_LOD_DIST(iVar39[iVar82], 1000);
										VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(iVar39[iVar82], 5f);
										ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iVar39[iVar82], 1, 1);
									}
								}
								iVar82++;
							}
						}
						if (func_514(&Var3) != 0)
						{
							func_469(&iVar22);
						}
						if (!PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
						{
							unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
						}
						if (func_409(iVar13, iVar84) > 0f)
						{
							func_469(&iVar28);
						}
						iVar7 = 4;
					}
				}
				break;
			
			case 4:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (bVar96 || bVar97)
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(300);
						SYSTEM::WAIT(300);
					}
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					HUD::CLEAR_PRINTS();
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 1, 0);
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
					iVar7 = 10;
				}
				else if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_401(0, 1, 1, 0, 0);
					if (func_448(func_449(iVar13)))
					{
						func_400(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
						iVar85 = AUDIO::GET_SOUND_ID();
						if (bVar110)
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(iVar85, "Helicopter_Wind_Idle", iVar33, "BASEJUMPS_SOUNDS", 0, 0);
						}
						if (bVar109)
						{
							AUDIO::_0x70B8EC8FC108A634(1, 300362576);
						}
					}
					else
					{
						if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
						{
							CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
						}
						CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 1, 0);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					PED::CLEAR_PED_WETNESS(AUDIO::_0x0626A247D2405330());
					PED::_0x6585D955A68452A5(AUDIO::_0x0626A247D2405330());
					PED::CLEAR_PED_BLOOD_DAMAGE(AUDIO::_0x0626A247D2405330());
					PED::RESET_PED_VISIBLE_DAMAGE(AUDIO::_0x0626A247D2405330());
					HUD::DISPLAY_RADAR(false);
					unk_0x59B038076F830627(false);
					iVar7 = 5;
				}
				else
				{
					if (!bVar104)
					{
						if (!func_445(&iVar30))
						{
							func_469(&iVar30);
						}
						else if (func_444(&iVar30) > 4f || (func_448(func_449(iVar13)) && func_444(&iVar30) > 0.5f))
						{
							func_389(&uVar32, "OJBJAUD", func_399(&Var3), 8, 0, 0, 0);
							bVar104 = true;
						}
					}
					if (!CAM::IS_SCREEN_FADING_OUT() && !bVar93)
					{
						if (func_367(&Var3, iVar13, &iVar36, &uVar5, &uVar4, &iVar17, &iVar18, &iVar22, &iVar28, iVar84, &bVar94, &bVar106, bVar98))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							bVar98 = false;
							if (func_366(&Var3))
							{
								CAM::DO_SCREEN_FADE_OUT(800);
							}
							else
							{
								HUD::DISPLAY_RADAR(false);
								unk_0x59B038076F830627(false);
								iVar7 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				func_364();
				func_363();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					if (bVar93 && bVar103)
					{
						CLOCK::SET_CLOCK_TIME(func_362(iVar15), func_361(iVar15), func_360(iVar15));
					}
					SYSTEM::WAIT(2000);
					if (bVar93)
					{
						unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
						func_359(&iVar29);
						if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
						}
						while (func_444(&iVar29) < 1.1f)
						{
							SYSTEM::WAIT(0);
							if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
							{
								PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
							}
						}
						func_441(&iVar29);
					}
					CAM::DO_SCREEN_FADE_IN(800);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_DEAD(iVar34, 0))
				{
					iVar45 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar34, func_358(&Var3)));
					HUD::SET_BLIP_COLOUR(iVar45, 5);
					HUD::_0x75A16C3DA34F1245(iVar45, 1);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar45, "BJ_BLIP_TGT");
				}
				else
				{
					iVar45 = HUD::ADD_BLIP_FOR_COORD(func_357(&Var3, 0));
					HUD::SET_BLIP_COLOUR(iVar45, 5);
					if (iVar72 == 1)
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar45, "BJ_BLIP_TGT");
					}
					else
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar45, "BJ_BLIP_CHK");
					}
				}
				HUD::SET_BLIP_SCALE(iVar45, 1.2f);
				if (iVar72 > 1)
				{
					iVar46 = HUD::ADD_BLIP_FOR_COORD(func_357(&Var3, 1));
					HUD::SET_BLIP_COLOUR(iVar46, 5);
					HUD::_0x75A16C3DA34F1245(iVar45, 1);
					HUD::SET_BLIP_SCALE(iVar46, 0.7f);
					if (iVar72 == 2)
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar46, "BJ_BLIP_TGT");
					}
					else
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar46, "BJ_BLIP_CHK");
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_DEAD(iVar34, 0))
				{
					ENTITY::SET_ENTITY_LOD_DIST(iVar34, 2000);
					if (ENTITY::DOES_ENTITY_EXIST(iVar43) && !PED::IS_PED_INJURED(iVar43))
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iVar43);
					}
					if (func_355(func_356(&Var3)))
					{
						VEHICLE::DELETE_MISSION_TRAIN(&iVar34);
					}
					else
					{
						ENTITY::SET_ENTITY_COORDS(iVar34, func_357(&Var3, 0), 1, 0, 0, 1);
					}
				}
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_49FB.f_1, (func_354(&Var3) - 125)))
				{
					PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(CAM::_0xDC9DA9E8789F5246(), true);
					PLAYER::SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(CAM::_0xDC9DA9E8789F5246(), MISC::GET_RANDOM_INT_IN_RANGE(0, 256), MISC::GET_RANDOM_INT_IN_RANGE(0, 256), MISC::GET_RANDOM_INT_IN_RANGE(0, 256));
				}
				if (func_353(func_449(iVar13)))
				{
					func_352(1, 1, 1);
					NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
					func_359(&iVar19);
					iVar7 = 6;
					func_351(88, 1);
				}
				else if (func_448(func_449(iVar13)))
				{
					func_352(0, 0, 1);
					unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
					iVar7 = 7;
					func_351(88, 1);
				}
				else
				{
					func_352(1, 1, 1);
					NETWORK::_0x5E3AA4CA2B6FB0EE(AUDIO::_0x0626A247D2405330());
					PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
					iVar7 = 6;
					func_351(88, 1);
				}
				if (iVar13 == 5)
				{
					PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 146, true);
				}
				if (!bVar94 && ENTITY::DOES_ENTITY_EXIST(iVar36))
				{
					func_350(&iVar36, 1);
					bVar94 = true;
				}
				if (!func_366(&Var3))
				{
					if (func_448(func_449(iVar13)))
					{
						func_400(&uVar5, &Var3, &vVar56, &vVar61, &vVar62, iVar33, &uVar63, &uVar64);
					}
					else
					{
						if ((func_349(&Var3) && !bVar106) && !bVar93)
						{
							CAM::_RENDER_FIRST_PERSON_CAM(1, 0, 3, 0);
						}
						else if (iVar13 == 4 && !func_348())
						{
							CAM::SET_CAM_COORD(func_416(&uVar5, 0), -76.7226f, -829.9866f, 326.0427f);
							CAM::SET_CAM_ROT(func_416(&uVar5, 0), 0.8541f, 0f, -17.012f, 2);
							CAM::SET_CAM_FOV(func_416(&uVar5, 0), 53.883f);
							CAM::SET_CAM_ACTIVE(func_416(&uVar5, 0), true);
						}
						else
						{
							if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
							{
								CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
							}
							CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 1, 0);
						}
						CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						BRAIN::ENABLE_SCRIPT_BRAIN_SET();
					}
				}
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if (bVar111)
					{
						if (!WEAPON::HAS_PED_GOT_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"), 0))
						{
							WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), 1, false, true);
						}
						PED::SET_PED_PARACHUTE_TINT_INDEX(AUDIO::_0x0626A247D2405330(), iVar86);
						if (bVar112)
						{
							if (!PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(CAM::_0xDC9DA9E8789F5246()))
							{
								PLAYER::SET_PLAYER_HAS_RESERVE_PARACHUTE(CAM::_0xDC9DA9E8789F5246());
							}
							PED::SET_PED_RESERVE_PARACHUTE_TINT_INDEX(AUDIO::_0x0626A247D2405330(), uVar88);
						}
					}
					else
					{
						WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), 1, false, true);
						PED::SET_PED_PARACHUTE_TINT_INDEX(AUDIO::_0x0626A247D2405330(), (MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) % 8));
					}
				}
				STREAMING::REQUEST_ANIM_DICT("skydive@base");
				STREAMING::REQUEST_ANIM_DICT("skydive@freefall");
				STREAMING::REQUEST_ANIM_DICT("skydive@parachute@chute");
				STREAMING::REQUEST_ANIM_DICT("skydive@parachute@");
				break;
			
			case 6:
				if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					iVar7 = 12;
					break;
				}
				else if ((bVar97 || bVar96) || func_347(&Var3, iVar13, &bVar99))
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					HUD::CLEAR_PRINTS();
					iVar7 = 10;
				}
				else
				{
					if (iVar13 == 5)
					{
						PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 146, ENTITY::IS_ENTITY_IN_AREA(AUDIO::_0x0626A247D2405330(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0, 1, 0));
					}
					if (bVar98)
					{
						vVar58 = { func_357(&Var3, (iVar72 - 1)) };
						vVar58.z = (vVar58.z + 100f);
						ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), vVar58, 1, 0, 0, 1);
						bVar98 = false;
					}
					if (!bVar101)
					{
						if (iVar13 == 4)
						{
							if (((((PAD::IS_CONTROL_PRESSED(0, 71) || PAD::IS_CONTROL_PRESSED(0, 72)) || PAD::IS_CONTROL_PRESSED(0, 1)) || PAD::IS_CONTROL_PRESSED(0, 2)) || PAD::IS_CONTROL_PRESSED(0, 75)) || !PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
							{
								CAM::RENDER_SCRIPT_CAMS(false, 1, 1300, 1, 1, 0);
								bVar101 = true;
							}
						}
					}
					func_346(&iVar19);
					func_336(&Var3, iVar34, iVar42, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_335(&uVar52);
					if (func_445(&iVar16))
					{
						if (func_444(&iVar16) > 10f)
						{
							func_331(&iVar20, &iVar80);
						}
					}
					else
					{
						func_330(&iVar16, 0f);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar36) && !ENTITY::IS_ENTITY_DEAD(iVar36, 0))
					{
						if (!ENTITY::IS_ENTITY_ON_SCREEN(iVar36) && SYSTEM::VDIST2(unk_0x8000C77B5F336760(iVar36, 1), unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1)) > 40000f)
						{
							iVar114 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar36, 4294967295, 0);
							if (!PED::IS_PED_INJURED(iVar114))
							{
								PED::DELETE_PED(&iVar114);
							}
							VEHICLE::DELETE_VEHICLE(&iVar36);
						}
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar78, 0))
					{
						if (HUD::IS_MESSAGE_BEING_DISPLAYED() || !func_445(&iVar31))
						{
							func_359(&iVar31);
						}
						else if (func_444(&iVar31) > 0.25f)
						{
							Var55 = { func_329(iVar13) };
							func_328(&Var55, 7500, 0);
							func_441(&iVar31);
							MISC::SET_BIT(&iVar78, 0);
						}
					}
					if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0))
					{
						func_327(&Var6, 1);
						iVar38 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1);
						if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar38, 0) && ENTITY::IS_ENTITY_IN_AIR(iVar38))
						{
							if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iVar78, 1))
							{
								if (!func_445(&iVar24))
								{
									func_469(&iVar24);
								}
								else if (func_444(&iVar24) > 0.15f)
								{
									func_326("BJ_VEHHELP", 4294967295);
									func_441(&iVar24);
									MISC::SET_BIT(&iVar78, 1);
								}
							}
						}
						else
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&iVar78, 1);
							if (func_325("BJ_VEHHELP"))
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
							if (func_445(&iVar24))
							{
								func_441(&iVar24);
							}
						}
					}
					else
					{
						func_327(&Var6, 0);
						GRAPHICS::_0x35FB78DC42B7BD21(&iVar78, 1);
						if (func_325("BJ_VEHHELP"))
						{
							GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						}
						if (func_445(&iVar24))
						{
							func_441(&iVar24);
						}
					}
					if (PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) != 4294967295)
					{
						if (iVar13 == 5)
						{
							PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 146, false);
						}
						GRAPHICS::_0x6DDBF9DFFC4AC080(1);
						AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
						iVar7 = 9;
						func_441(&iVar16);
					}
				}
				break;
			
			case 7:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (bVar96 || bVar97)
				{
					if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(300);
						SYSTEM::WAIT(300);
					}
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					HUD::CLEAR_PRINTS();
					if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
					{
						CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
					}
					CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
					iVar7 = 10;
				}
				else
				{
					func_346(&iVar19);
					func_336(&Var3, iVar34, iVar42, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
					func_335(&uVar52);
					if (func_448(func_449(iVar13)) && !ENTITY::IS_ENTITY_DEAD(iVar33, 0))
					{
						func_324(iVar33, func_456(iVar13));
					}
					if (func_445(&iVar16))
					{
						if (func_444(&iVar16) > 10f)
						{
							func_331(&iVar20, &iVar80);
						}
					}
					else
					{
						func_330(&iVar16, 0f);
					}
					if (func_320(&Var3, &uVar5, &uVar4, &iVar18, &vVar56, &uVar60, vVar61, vVar62) || bVar98)
					{
						func_441(&iVar16);
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar33) && !ENTITY::IS_ENTITY_DEAD(iVar33, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iVar33, func_456(iVar13), 1, 0, 0, 1);
								ENTITY::SET_ENTITY_HEADING(iVar33, func_447(&Var3));
								unk_0x346478B12F69D4E3(iVar33, true);
								iVar81 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iVar81, iVar33, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar33, "Chassis"));
								BRAIN::TASK_SYNCHRONIZED_SCENE(AUDIO::_0x0626A247D2405330(), iVar81, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
								PED::SET_SYNCHRONIZED_SCENE_PHASE(iVar81, 0.6f);
								func_318(iVar33, &uVar5, &iVar17);
								BRAIN::ENABLE_SCRIPT_BRAIN_SET();
							}
						}
						if (bVar109)
						{
							AUDIO::_0x70B8EC8FC108A634(0, 300362576);
						}
						AUDIO::PLAY_SOUND_FROM_ENTITY(iVar85, "Helicopter_Wind", iVar33, "BASEJUMPS_SOUNDS", 0, 0);
						bVar98 = false;
						iVar7 = 8;
					}
				}
				break;
			
			case 8:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				func_346(&iVar19);
				func_336(&Var3, iVar34, iVar42, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iVar81))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar81) > 0.92f)
					{
						BRAIN::OPEN_SEQUENCE_TASK(&uVar47);
						BRAIN::TASK_FORCE_MOTION_STATE(0, 3133206795, 0);
						BRAIN::TASK_PARACHUTE(0, 1, 0);
						CUTSCENE::_0x8D9DF6ECA8768583(uVar47);
						BRAIN::TASK_PERFORM_SEQUENCE(AUDIO::_0x0626A247D2405330(), uVar47);
						BRAIN::CLEAR_SEQUENCE_TASK(&uVar47);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar33))
				{
					if (func_317(&uVar5, &iVar17, vVar61, vVar62, vVar56, &uVar63, &uVar64))
					{
						ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(AUDIO::_0x0626A247D2405330(), iVar33, 0);
						if (!ENTITY::IS_ENTITY_PLAYING_ANIM(AUDIO::_0x0626A247D2405330(), "oddjobs@basejump@", "Heli_jump", 3))
						{
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
							HUD::DISPLAY_RADAR(true);
							if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
							{
								CAM::STOP_SCRIPT_GLOBAL_SHAKING(0);
							}
							AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", 0);
							GRAPHICS::_0x6DDBF9DFFC4AC080(1);
							iVar7 = 9;
						}
					}
				}
				break;
			
			case 9:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (Global_434C.f_87)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
				}
				if (Global_434C.f_87)
				{
					PAD::DISABLE_CONTROL_ACTION(0, 144, 1);
				}
				if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					iVar7 = 12;
					break;
				}
				if (bVar96 || bVar97)
				{
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					HUD::CLEAR_PRINTS();
					iVar7 = 10;
				}
				else if (func_316(&uVar4, 3, 1000) && !Global_434C.f_87)
				{
					ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), true);
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 256);
					CAM::DO_SCREEN_FADE_OUT(800);
					while (CAM::IS_SCREEN_FADING_OUT())
					{
						func_336(&Var3, iVar34, iVar43, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
						SYSTEM::WAIT(0);
					}
					func_270(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &uVar49, &uVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
					bVar93 = true;
					iVar7 = 0;
				}
				else
				{
					func_267(&iVar26, &iVar44);
					if (bVar98)
					{
						vVar58 = { func_357(&Var3, (iVar72 - 1)) };
						func_265(AUDIO::_0x0626A247D2405330(), vVar58);
						bVar98 = false;
					}
					func_346(&iVar19);
					if (func_355(func_356(&Var3)))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iVar34) && MISC::GET_DISTANCE_BETWEEN_COORDS(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), func_357(&Var3, 0), false) <= 200f)
						{
							iVar34 = VEHICLE::CREATE_MISSION_TRAIN(6, func_357(&Var3, 0), 1);
							if (!ENTITY::IS_ENTITY_DEAD(iVar34, 0))
							{
								VEHICLE::SET_TRAIN_CRUISE_SPEED(iVar34, 7.5f);
							}
						}
					}
					else if ((ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_DEAD(iVar34, 0)) && !func_414(func_357(&Var3, 0)))
					{
						PED::IS_PED_INJURED(iVar43);
						if (func_264(AUDIO::_0x0626A247D2405330(), iVar34, 0) <= 325f)
						{
							if (iVar13 == 5)
							{
								vVar115 = { 28.8687f, -299.1065f, 46.5693f };
							}
							else
							{
								vVar115 = { -819.7591f, -1512.229f, 0.1336f };
							}
							if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar43, 3021937204) != 1)
							{
								if (iVar13 == 5)
								{
									BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(iVar43, iVar34, vVar115, 4, 5f, 16785408, 5f, 10f, 1);
								}
								else
								{
									BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(iVar43, iVar34, vVar115, 4, 5f, 16777216, 4f, -1f, 1);
								}
							}
							else
							{
								func_259(&iVar34);
							}
						}
					}
					iVar8 = func_336(&Var3, iVar34, iVar43, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 1, 1, fVar65);
					if (iVar8 == 1 || iVar8 >= 2)
					{
						BRAIN::TASK_CLEAR_LOOK_AT(AUDIO::_0x0626A247D2405330());
						if (iVar8 >= 2)
						{
							if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
							}
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								HUD::CLEAR_PRINTS();
							}
						}
						WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), false);
						if (iVar13 == 5)
						{
							NETWORK::_0x5E3AA4CA2B6FB0EE(iVar43);
							PED::SET_PED_CONFIG_FLAG(iVar43, 296, true);
						}
						iVar116 = 0;
						while (iVar116 < iVar44)
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar44[iVar116]) && !ENTITY::IS_ENTITY_DEAD(iVar44[iVar116], 0))
							{
								NETWORK::_0x5E3AA4CA2B6FB0EE(iVar44[iVar116]);
								iVar44[iVar116] = 0;
							}
							iVar116++;
						}
						iVar7 = 10;
					}
					func_258(&Var6, &Var3, iVar13, iVar72);
				}
				break;
			
			case 10:
				if (iVar13 == 0)
				{
					VEHICLE::_0xBC3CCA5844452B06(200f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar43) && !ENTITY::IS_ENTITY_DEAD(iVar43, 0))
				{
					if (BRAIN::GET_SCRIPT_TASK_STATUS(iVar43, 3312640106) != 0 && BRAIN::GET_SCRIPT_TASK_STATUS(iVar43, 3312640106) != 1)
					{
						NETWORK::_0x5E3AA4CA2B6FB0EE(iVar43);
						BRAIN::TASK_STAND_STILL(iVar43, 4294967295);
					}
				}
				if ((!bVar96 && !bVar97) && !bVar99)
				{
					if (!func_445(&iVar21))
					{
						if (!func_445(&iVar18))
						{
							func_469(&iVar18);
						}
						if (HUD::DOES_BLIP_EXIST(iVar45))
						{
							HUD::REMOVE_BLIP(&iVar45);
						}
						if (HUD::DOES_BLIP_EXIST(iVar46))
						{
							HUD::REMOVE_BLIP(&iVar46);
						}
						if (iVar73 > 4294967295)
						{
							GRAPHICS::DELETE_CHECKPOINT(uVar49);
							GRAPHICS::DELETE_CHECKPOINT(uVar50);
							iVar73 = 4294967295;
						}
						func_330(&iVar21, 0f);
					}
					if (!func_445(&vVar27))
					{
						func_469(&vVar27);
					}
					if (func_356(&Var3) == 0)
					{
						func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
					}
					if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						if (((((ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_DEAD(iVar34, 0)) && !ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0)) && ENTITY::IS_ENTITY_AT_ENTITY(AUDIO::_0x0626A247D2405330(), iVar34, vVar59, 0, 1, 0)) || ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), func_357(&Var3, iVar71), vVar59, 0, 1, 0)) || ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330()))
						{
							bVar117 = false;
							if (ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330()) && (ENTITY::DOES_ENTITY_EXIST(iVar34) && !ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iVar34)))
							{
								bVar117 = true;
							}
							else if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()))
							{
								bVar117 = true;
							}
							if (bVar117)
							{
								if (func_316(&uVar4, 3, 1000) && !Global_434C.f_87)
								{
									ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), true);
									PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 256);
									CAM::DO_SCREEN_FADE_OUT(800);
									while (CAM::IS_SCREEN_FADING_OUT())
									{
										func_336(&Var3, iVar34, iVar43, &iVar44, &uVar49, &uVar50, &iVar71, &iVar73, &iVar74, iVar72, &iVar75, &iVar45, &iVar46, &iVar70, &iVar14, &uVar66, &uVar67, &uVar68, &uVar95, 0, 1, fVar65);
										SYSTEM::WAIT(0);
									}
									func_270(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &uVar49, &uVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
									bVar93 = true;
									iVar7 = 0;
								}
								break;
							}
						}
					}
				}
				if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					iVar7 = 12;
					break;
				}
				if (((bVar96 || bVar97) || bVar99) || (func_445(&iVar21) && func_444(&iVar21) > 0.25f))
				{
					if (func_445(&iVar21) && func_444(&iVar21) > 0.25f)
					{
						func_253(func_357(&Var3, iVar71), iVar34, iVar43, &iVar8, &iVar75, &fVar69);
					}
					func_441(&iVar21);
					if (bVar96 || iVar8 == 1)
					{
						iVar10 = func_252();
						while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iVar10))
						{
							SYSTEM::WAIT(0);
							if (func_356(&Var3) == 0)
							{
								func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
							}
							iVar10 = func_252();
						}
						if (iVar13 == 0)
						{
							if (!PED::IS_PED_INJURED(iVar43))
							{
								func_389(&uVar32, "OJBJAUD", "BJ_01D", 8, 1, 1, 0);
							}
						}
						iVar7 = 11;
						if (!func_251(&Var6, 7))
						{
							iVar79 = 125;
							MISC::SET_BIT(&(Global_19E56.f_49FB.f_1), (func_354(&Var3) - iVar79));
							func_250(func_354(&Var3), 1);
							iVar89 = 1;
							bVar90 = true;
							bVar91 = true;
							iVar83 = 0;
							while (iVar83 < 13)
							{
								if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_49FB.f_1, iVar83))
								{
									if (func_448(func_449(iVar83)))
									{
										bVar91 = false;
									}
									else
									{
										bVar90 = false;
									}
									iVar89 = 0;
								}
								iVar83++;
							}
							if (iVar89 && !func_249(98))
							{
								func_248(98, 1);
							}
							if (bVar90)
							{
								func_245(128, 0, 0);
							}
							if (bVar91)
							{
								func_245(129, 0, 0);
							}
							func_212(&iVar74, iVar72, &iVar75, &iVar76, fVar65);
							if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
							{
								WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), false);
							}
							func_211(&Var6, 7, 1);
							func_210(1, 0);
							func_469(&iVar25);
							func_209();
						}
					}
					else if ((bVar97 || bVar99) || iVar8 >= 2)
					{
						GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
						HUD::CLEAR_PRINTS();
						if (!bVar99)
						{
							func_206();
						}
						if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
						{
							iVar92 = 1;
						}
						if (PLAYER::IS_PLAYER_ONLINE())
						{
							func_204(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 358, 0, 358, 0);
						}
						else
						{
							func_211(&Var6, 27, 1);
							func_204(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
						}
						iVar7 = 12;
					}
					func_441(&iVar18);
				}
				break;
			
			case 11:
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
				if (!bVar96 && !bVar97)
				{
					if (func_203() && !func_251(&Var6, 26))
					{
						func_192(iVar13);
						if (func_180(iVar13, iVar75, fVar69, iVar76))
						{
							func_204(&Var6, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
							func_211(&Var6, 26, 1);
						}
					}
				}
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					bVar108 = PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0);
				}
				if (func_356(&Var3) == 0)
				{
					func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
				}
				if (!bVar113)
				{
					iVar9 = func_74(iVar13, &Var6, &uVar51, &uVar4, iVar74, iVar72, iVar75, &iVar76, fVar65, &bVar100);
					bVar113 = iVar9 == true;
				}
				if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					if (iVar77 == 0)
					{
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
					}
					else if (iVar77 == 5)
					{
						PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
					}
					func_73(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
				}
				else if (!CAM::IS_SCREEN_FADING_OUT() && (!func_72() || func_444(&iVar25) >= 2f))
				{
					PAD::DISABLE_CONTROL_ACTION(0, 22, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 55, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 95, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 96, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 97, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 98, 1);
					PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
					if (func_445(&iVar18))
					{
						if ((iVar9 == 1 || func_444(&iVar18) >= 60f) || ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && PED::IS_PED_JACKING(AUDIO::_0x0626A247D2405330())) || (!bVar108 && PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))))
						{
							if (!bVar113)
							{
								func_71(&(Var6.f_1A));
								bVar113 = true;
							}
							if (func_45(&(Var6.f_1A), 0, 1065353216, 0, 0, 0))
							{
								if (!bVar96 && !bVar97)
								{
									if (func_203() && !func_251(&Var6, 26))
									{
										if (func_180(iVar13, iVar75, fVar69, iVar76))
										{
											func_211(&Var6, 26, 1);
										}
									}
								}
								func_42(&(Var6.f_1A));
								func_441(&iVar25);
								if (iVar13 == 0)
								{
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
								}
								else if (iVar13 == 5)
								{
									PATHFIND::SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
								}
								func_73(&Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
							}
						}
						else if (iVar9 == 0)
						{
							if (!bVar96 && !bVar97)
							{
								if (func_203() && !func_251(&Var6, 26))
								{
									if (func_180(iVar13, iVar75, fVar69, iVar76))
									{
										func_211(&Var6, 26, 1);
									}
								}
							}
							func_42(&(Var6.f_1A));
							func_441(&iVar25);
							func_211(&Var6, 5, 0);
							PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 256);
							CAM::DO_SCREEN_FADE_OUT(800);
							while (CAM::IS_SCREEN_FADING_OUT())
							{
								SYSTEM::WAIT(0);
								if (func_356(&Var3) == 0)
								{
									func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
								}
							}
							func_270(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &uVar49, &uVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
							bVar93 = true;
							iVar7 = 0;
							break;
						}
						else if (bVar100)
						{
							if (func_444(&iVar18) > (60f - 5f))
							{
								func_40(&iVar18, (60f - 5f));
							}
						}
					}
					else
					{
						func_330(&iVar18, 0f);
					}
				}
				break;
			
			case 12:
				if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					bVar108 = PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
				if (iVar76 > 0)
				{
					iVar76 = 0;
				}
				if (!bVar96 && !bVar97)
				{
					if (func_203() && !func_251(&Var6, 26))
					{
						func_192(iVar13);
						if (func_180(iVar13, iVar75, fVar69, iVar76))
						{
							func_204(&Var6, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
							func_211(&Var6, 26, 1);
						}
					}
				}
				if (!func_251(&Var6, 24))
				{
					if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
					{
						bVar103 = true;
					}
					else
					{
						bVar103 = false;
					}
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_START");
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_JUMPED");
					AUDIO::CANCEL_MUSIC_EVENT("OJBJ_LANDED");
					AUDIO::TRIGGER_MUSIC_EVENT("OJBJ_STOP");
					if (HUD::DOES_BLIP_EXIST(iVar45))
					{
						HUD::REMOVE_BLIP(&iVar45);
					}
					if (HUD::DOES_BLIP_EXIST(iVar46))
					{
						HUD::REMOVE_BLIP(&iVar46);
					}
					if (iVar13 == 0)
					{
						VEHICLE::_0xBC3CCA5844452B06(200f);
					}
					iVar10 = func_252();
					while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iVar10))
					{
						if (func_356(&Var3) == 0)
						{
							func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
						}
						SYSTEM::WAIT(0);
						iVar10 = func_252();
					}
					if (bVar103)
					{
						func_39(&uVar12, 0);
					}
					else
					{
						func_38(&Var11, 1050253722, 1073741824);
					}
					func_211(&Var6, 24, 1);
				}
				if (!bVar103 && PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					func_211(&Var6, 24, 0);
					break;
				}
				if (func_356(&Var3) == 0)
				{
					func_257(func_357(&Var3, (iVar72 - 1)), vVar27);
				}
				if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
				{
					switch (func_35(AUDIO::_0x0626A247D2405330()))
					{
						case 0:
							sVar54 = "BJ_FAIL_M";
							break;
						
						case 1:
							sVar54 = "BJ_FAIL_F";
							break;
						
						case 2:
							sVar54 = "BJ_FAIL_T";
							break;
					}
				}
				else if (bVar99)
				{
					sVar54 = "BJ_FAIL_02";
				}
				else
				{
					sVar54 = "BJ_FAIL_01";
				}
				bVar107 = false;
				PAD::DISABLE_CONTROL_ACTION(0, 0, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 80, 1);
				if (bVar103)
				{
					bVar107 = func_16(&uVar12, &Var11, &iVar10, iVar53, sVar54, &bVar93, 78);
				}
				else
				{
					bVar107 = func_3(&iVar10, &Var11, iVar53, sVar54, &bVar93, 79, 7, 1, 1097859072, 1);
				}
				if (bVar107)
				{
					if (bVar93)
					{
						if (!bVar96 && !bVar97)
						{
							if (func_203() && !func_251(&Var6, 26))
							{
								if (func_180(iVar13, iVar75, fVar69, iVar76))
								{
									func_211(&Var6, 26, 1);
								}
							}
						}
						func_270(&Var3, &uVar51, &Var6, &iVar78, &iVar43, &iVar44, &iVar40, &iVar34, &iVar35, &iVar36, &iVar39, &uVar49, &uVar50, iVar45, iVar46, &iVar71, &iVar73, &iVar74, &iVar80, &iVar75, iVar13, &iVar8, &iVar14, &iVar21, &vVar27, &uVar60, &uVar66, &uVar67, &uVar68, &uVar95, &bVar94, &bVar96, &bVar97, &bVar98, &bVar100, &iVar92, &uVar41);
						iVar7 = 0;
					}
					else
					{
						if (!bVar96 && !bVar97)
						{
							if (func_203() && !func_251(&Var6, 26))
							{
								if (func_180(iVar13, iVar75, fVar69, iVar76))
								{
									func_211(&Var6, 26, 1);
								}
							}
						}
						func_2(bVar103, &Var3, &uVar51, &iVar33, &iVar34, &iVar36, &iVar39, iVar40, &uVar32, &iVar42, &iVar43, &iVar44, iVar85, &iVar80, iVar45, iVar46, iVar13, &uVar41, bVar111);
					}
					func_1(&iVar10);
				}
				iVar8 = 0;
				break;
		}
	}
}

void func_1(int iParam0)//Position - 0x2BB5
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		*iParam0 = 0;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, var uParam17, bool bParam18)//Position - 0x2BD1
{
	if (bParam0)
	{
		func_543(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
	else
	{
		func_543(uParam1, uParam2, iParam3, iParam4, iParam5, iParam6, &iParam7, uParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, iParam16, uParam17, bParam18);
	}
}

int func_3(int iParam0, var uParam1, int iParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)//Position - 0x2C31
{
	switch (*uParam1)
	{
		case 0:
			if (!CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(2500);
				RECORDING::_STOP_RECORDING_THIS_FRAME();
			}
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(true);
			}
			MISC::SET_TIME_SCALE(0.2f);
			if (func_15(iParam5, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("generic_failed", false, 4294967295))
				{
					*uParam1 = 1;
				}
			}
			else
			{
				*uParam1 = 1;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			HUD::_SET_NOTIFICATION_COLOR_NEXT(6);
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(iParam2);
			CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			func_14(sParam3);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(100);
			GRAPHICS::SET_SEETHROUGH(true);
			GRAPHICS::_END_SCALEFORM_MOVIE_METHOD_RETURN();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam1->f_86);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					uParam1->f_88 = 1;
				}
			}
			if (!func_15(iParam5, 1))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_13(&(uParam1->f_A), 0, 1, 1, 1);
			func_12(&(uParam1->f_A), "IB_RETRY", 2, 201, 1, 1, 0);
			func_12(&(uParam1->f_A), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_15(iParam5, 4))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_15(iParam5, 8))
			{
				switch (func_411())
				{
					case 0:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						GRAPHICS::_START_SCREEN_EFFECT("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_445(&(uParam1->f_1)))
			{
				func_469(&(uParam1->f_1));
			}
			if (func_15(iParam5, 2))
			{
				if (!func_445(&(uParam1->f_4)))
				{
					func_469(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_88)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "TRANSITION_UP");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(uParam1->f_86);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					uParam1->f_88 = 1;
				}
			}
			GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			func_11(iParam0, 0, 0);
			if (!func_15(iParam5, 16) && (func_444(&(uParam1->f_1)) >= uParam1->f_87 || CAM::IS_SCREEN_FADED_OUT()))
			{
				func_5(&(uParam1->f_A), 1128792064, iParam6, bParam7, 1, 1065353216);
				HUD::_SHOW_CURSOR_THIS_FRAME();
				if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_8A = 1;
					unk_0x1190AB7024CBD8CB(4294967295, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_8A = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_15(iParam5, 2))
			{
				if (func_444(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_8A = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						PAD::ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_A));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_11(iParam0, 0, 0);
			MISC::SET_TIME_SCALE(1f);
			if (uParam1->f_8A || !((MISC::ARE_STRINGS_EQUAL("stunt_plane_races", SCRIPT::GET_THIS_SCRIPT_NAME()) || MISC::ARE_STRINGS_EQUAL("pilot_school", SCRIPT::GET_THIS_SCRIPT_NAME())) || (MISC::ARE_STRINGS_EQUAL("bj", SCRIPT::GET_THIS_SCRIPT_NAME()) && PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))))
			{
				CAM::DO_SCREEN_FADE_IN(2500);
			}
			if (func_15(iParam5, 64) && uParam1->f_8A)
			{
				CAM::DO_SCREEN_FADE_OUT(500);
			}
			func_359(&(uParam1->f_4));
			if (bParam9)
			{
				SCRIPT::SET_NO_LOADING_SCREEN(false);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_444(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(iParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_8A;
				return 1;
			}
			break;
	}
	return 0;
}

void func_4(int iParam0)//Position - 0x3014
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_7B = 0;
}

void func_5(var uParam0, float fParam1, int iParam2, bool bParam3, bool bParam4, float fParam5)//Position - 0x3037
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADED_OUT()) || MISC::IS_FRONTEND_FADING())
	{
		if (!bParam3)
		{
			return;
		}
	}
	if (!func_10(uParam0))
	{
		return;
	}
	HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(iParam2);
	if (!func_15(uParam0->f_1, 256) || (func_15(uParam0->f_1, 8192) && PAD::_0x6CD79468A1E595C6(2)))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam1);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fParam5);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SET_SEETHROUGH(func_15(uParam0->f_1, 4096));
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_7B)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = PAD::_IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !PAD::_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_E)
					{
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						bVar2 = INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2[iVar6 /*15*/].f_D, iVar7);
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2[iVar6 /*15*/].f_C, iVar7))
						{
							sVar3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(iVar0, iVar1, bVar2);
						}
						else
						{
							sVar3 = PAD::_0x80C2FD58D720C801(iVar0, iVar1, bVar2);
						}
						if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar3))
						{
							func_9(sVar3);
						}
						iVar7++;
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_14(uParam0->f_2[iVar6 /*15*/]);
					}
					if (MISC::IS_PC_VERSION())
					{
						if (func_15(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								GRAPHICS::SET_SEETHROUGH(true);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								GRAPHICS::SET_SEETHROUGH(false);
								GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(4294967295);
							}
						}
					}
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
			}
			iVar6++;
		}
		fVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 32), 1f, 0f), -1f);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar8);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(80f);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		func_7(&(uParam0->f_1), 256);
		func_6(&(uParam0->f_1), 128);
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_6(var uParam0, int iParam1)//Position - 0x32F7
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)//Position - 0x330C
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)//Position - 0x331D
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(char* sParam0)//Position - 0x3334
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

int func_10(var uParam0)//Position - 0x3342
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_7(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_11(var uParam0, bool bParam1, bool bParam2)//Position - 0x3369
{
	if (!func_445(&(uParam0->f_2)))
	{
		func_359(&(uParam0->f_2));
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == 4294967295)
	{
		return 1;
	}
	if (func_444(&(uParam0->f_2)) * 1000f) > SYSTEM::TO_FLOAT(uParam0->f_1)
	{
		func_441(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x33FB
{
	int iVar0;
	int iVar1;
	
	if (*uParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1)
	{
		iVar0 = 1;
	}
	iVar1 = uParam0->f_7B;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_C = 0;
		uParam0->f_2[iVar1 /*15*/].f_D = 0;
		uParam0->f_2[iVar1 /*15*/].f_E = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			MISC::SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_D), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_E++;
		uParam0->f_7B++;
		return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x34C4
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_7B = 0;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 32);
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_7(&(uParam0->f_1), 1);
		if (bParam2)
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (bParam3)
		{
			func_7(&(uParam0->f_1), 4096);
		}
	}
	if (bParam4)
	{
		func_7(&(uParam0->f_1), 8192);
	}
}

void func_14(char* sParam0)//Position - 0x353E
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
}

bool func_15(var uParam0, int iParam1)//Position - 0x3550
{
	return (uParam0 && iParam1) != 0;
}

int func_16(var uParam0, var uParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6)//Position - 0x355F
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			AUDIO::START_AUDIO_SCENE("DEATH_SCENE");
			unk_0x1190AB7024CBD8CB(4294967295, "ScreenFlash", "WastedSounds", 1);
			func_34(&(uParam0->f_1));
			func_33();
			func_38(uParam1, (0.15f * 0.075f), 0.5f);
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			break;
		
		case 1:
			if (func_24() || CAM::IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_23(uParam0->f_4, 4))
			{
				if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, 4294967295))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "Bed", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 2))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "TextHit", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 2);
				}
				func_3(iParam2, uParam1, iParam3, sParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_3(iParam2, uParam1, iParam3, sParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_20(0, 1);
				func_18(0, 1);
				func_33();
				if (*bParam5)
				{
					MISC::IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_17(0);
				}
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				MISC::_DISABLE_AUTOMATIC_RESPAWN(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
			{
				MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_20(0, 1);
				func_18(0, 1);
				AUDIO::STOP_AUDIO_SCENE("DEATH_SCENE");
				SCRIPT::SET_NO_LOADING_SCREEN(false);
				return 1;
			}
			break;
		
		case 4:
			SCRIPT::SET_NO_LOADING_SCREEN(false);
			return 1;
			break;
	}
	return 0;
}

void func_17(bool bParam0)//Position - 0x3720
{
	if ((Global_8D15 == 9 || Global_8D15 == 10) || Global_8D15 == 5)
	{
		Global_1990F = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_1990F = 0;
	}
}

void func_18(int iParam0, int iParam1)//Position - 0x3766
{
	if (iParam0 == 1)
	{
		func_20(0, 0);
		GRAPHICS::_START_SCREEN_EFFECT("DeathFailOut", 0, 0);
		MISC::SET_BIT(&iLocal_41, 1);
		func_19(1, 2, 0);
		unk_0xEBFF48776C732268(2);
	}
	else
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 1) || iParam1)
		{
			GRAPHICS::_STOP_SCREEN_EFFECT("DeathFailOut");
			func_19(0, 2, 1);
			unk_0xEBFF48776C732268(0);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 1);
	}
}

void func_19(int iParam0, int iParam1, int iParam2)//Position - 0x37C7
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&iLocal_41, 2);
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				MISC::SET_TIME_SCALE(0.2f);
			}
			else
			{
				MISC::SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 2) || iParam2)
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				MISC::SET_TIME_SCALE(1f);
			}
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 2);
	}
}

void func_20(int iParam0, int iParam1)//Position - 0x3828
{
	char* sVar0;
	
	switch (func_411())
	{
		case 0:
			sVar0 = "DeathFailMichaelIn";
			break;
		
		case 1:
			sVar0 = "DeathFailFranklinIn";
			break;
		
		case 2:
			sVar0 = "DeathFailTrevorIn";
			break;
	}
	if (iParam0 == 1)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 0) || iParam1)
		{
			GRAPHICS::_START_SCREEN_EFFECT(sVar0, 0, 0);
			MISC::SET_BIT(&iLocal_41, 0);
			func_19(1, 1, 0);
			unk_0xEBFF48776C732268(1);
		}
	}
	else
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 0) || iParam1)
		{
			GRAPHICS::_STOP_SCREEN_EFFECT(sVar0);
			func_19(0, 1, 1);
			unk_0xEBFF48776C732268(0);
		}
		GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 0);
	}
}

void func_21(var uParam0, int iParam1)//Position - 0x38C8
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, var uParam1)//Position - 0x38D8
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_23(var uParam0, int iParam1)//Position - 0x38E9
{
	return (uParam0 && iParam1) != 0;
}

int func_24()//Position - 0x38F8
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 0) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 1))
	{
		SYSTEM::SETTIMERA(0);
		func_20(1, 0);
	}
	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		HUD::CLEAR_PRINTS();
	}
	PAD::DISABLE_CONTROL_ACTION(2, 199, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 59, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 60, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PED::_0x5A7F62FDA59759BD();
	if (IntToFloat(SYSTEM::TIMERA()) > (1500f * 0.2f))
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 1))
		{
			func_18(1, 0);
			SYSTEM::SETTIMERB(0);
		}
		else if (IntToFloat(SYSTEM::TIMERB()) > (1500f * 0.075f) || CAM::IS_SCREEN_FADED_OUT())
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (!CAM::IS_SCREEN_FADING_OUT())
				{
					CAM::DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_42 == 0)
			{
				iLocal_42 = MISC::GET_GAME_TIMER() + 1000;
				if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
				{
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
				}
				func_19(0, 2, 1);
				func_401(1, 1, 1, 0, 0);
				func_26(1);
				HUD::SET_FRONTEND_ACTIVE(0);
				HUD::SET_PAUSE_MENU_ACTIVE(0);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
				HUD::CLEAR_PRINTS();
				if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
				{
					PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
				}
				func_20(0, 0);
				func_25(0);
			}
			else if (MISC::GET_GAME_TIMER() < iLocal_42)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_25(int iParam0)//Position - 0x3A3D
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 3))
			{
				MISC::SET_GAME_PAUSED(1);
				MISC::SET_BIT(&iLocal_41, 3);
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iLocal_41, 3))
		{
			MISC::SET_GAME_PAUSED(0);
			GRAPHICS::_0x35FB78DC42B7BD21(&iLocal_41, 3);
		}
	}
}

void func_26(bool bParam0)//Position - 0x3A84
{
	if (bParam0)
	{
		func_32();
		if (Global_38B1.f_1 == 10 || Global_38B1.f_1 == 9)
		{
			MISC::SET_BIT(&Global_950, 16);
		}
		Global_38B1.f_1 = 1;
		if (func_31(0))
		{
			func_27(0);
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

void func_27(int iParam0)//Position - 0x3AE7
{
	if (func_30())
	{
		return;
	}
	if (Global_3959)
	{
		func_29(0, 0);
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
	if (!func_28())
	{
		Global_38B1.f_1 = 3;
	}
}

int func_28()//Position - 0x3B61
{
	if (Global_38B1.f_1 == 1 || Global_38B1.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1)//Position - 0x3B88
{
	if (bParam0)
	{
		if (func_31(0))
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

bool func_30()//Position - 0x3BFC
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_199D01, 19);
}

int func_31(int iParam0)//Position - 0x3C0E
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

void func_32()//Position - 0x3C68
{
	if (Global_38B1.f_1 == 9 || Global_38B1.f_1 == 10)
	{
		Global_3E03 = 0;
		Global_3DFF = 1;
	}
}

void func_33()//Position - 0x3C91
{
	iLocal_41 = 0;
	iLocal_42 = 0;
	func_401(0, 1, 1, 0, 0);
	func_26(1);
}

void func_34(int iParam0)//Position - 0x3CAD
{
	if (!func_445(iParam0))
	{
		func_469(iParam0);
	}
	else
	{
		func_359(iParam0);
	}
}

int func_35(int iParam0)//Position - 0x3CCE
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_36(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_36(int iParam0)//Position - 0x3D0B
{
	if (func_37(iParam0))
	{
		return Global_19E56.f_6D76[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_37(int iParam0)//Position - 0x3D35
{
	return iParam0 < 3;
}

void func_38(var uParam0, int iParam1, int iParam2)//Position - 0x3D41
{
	if (func_445(&(uParam0->f_1)))
	{
		func_441(&(uParam0->f_1));
	}
	if (func_445(&(uParam0->f_4)))
	{
		func_441(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_A));
	uParam0->f_86 = iParam1;
	uParam0->f_87 = iParam2;
	uParam0->f_89 = 1;
	uParam0->f_88 = 0;
	*uParam0 = 0;
}

void func_39(var uParam0, int iParam1)//Position - 0x3D91
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", false, 4294967295);
}

void func_40(int iParam0, float fParam1)//Position - 0x3DB3
{
	iParam0->f_1 = (func_41(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, 1);
	GRAPHICS::_0x35FB78DC42B7BD21(iParam0, 2);
	iParam0->f_2 = 0f;
}

float func_41(bool bParam0)//Position - 0x3DE1
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

void func_42(var uParam0)//Position - 0x3E39
{
	if (uParam0->f_1 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_232 && uParam0->f_4 != 0)
	{
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			GRAPHICS::SET_SEETHROUGH(false);
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		}
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_234)
	{
		SCRIPT::SET_NO_LOADING_SCREEN(false);
		uParam0->f_234 = 0;
	}
	if (!Global_11731)
	{
		if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		{
			if (!Global_11732)
			{
				if (CAM::IS_SCREEN_FADED_OUT() && !func_44(0))
				{
					CAM::DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_43(0);
}

void func_43(int iParam0)//Position - 0x3EE0
{
	Global_11729 = iParam0;
	Global_1172A = iParam0;
}

bool func_44(bool bParam0)//Position - 0x3EF4
{
	if (!bParam0 && SCRIPT::_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1171D, 0);
}

int func_45(var uParam0, bool bParam1, float fParam2, bool bParam3, int iParam4, bool bParam5)//Position - 0x3F1F
{
	bool bVar0;
	
	if (MISC::GET_FRAME_COUNT() == uParam0->f_23E)
	{
		return uParam0->f_23F;
	}
	uParam0->f_23E = MISC::GET_FRAME_COUNT();
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_23F = 1;
			return 1;
		}
		if (BRAIN::IS_PED_BEING_ARRESTED(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			uParam0->f_23F = 1;
			return 1;
		}
	}
	if (!uParam0->f_234)
	{
		if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
		{
			SCRIPT::SET_NO_LOADING_SCREEN(true);
			uParam0->f_234 = 1;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(CAM::_0xDC9DA9E8789F5246()))
			{
				PLAYER::SPECIAL_ABILITY_DEACTIVATE(CAM::_0xDC9DA9E8789F5246());
			}
		}
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	PAD::DISABLE_CONTROL_ACTION(2, 19, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 21, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 28, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 29, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 171, 1);
	func_70(0);
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		if (PLAYER::_IS_PLAYER_CAM_CONTROL_DISABLED() || (CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_IN()))
		{
			HUD::_SHOW_CURSOR_THIS_FRAME();
		}
	}
	Global_8F3B = 1;
	if (!uParam0->f_233)
	{
		switch (func_35(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())))
		{
			case 1:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessTrevor", 1000, 0);
				break;
			
			default:
				GRAPHICS::_START_SCREEN_EFFECT("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_233 = 1;
	}
	if (uParam0->f_22E == 0)
	{
		uParam0->f_22E = (uParam0->f_23C + SYSTEM::FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_23C >= (uParam0->f_22E - 1500))
	{
		uParam0->f_22E = uParam0->f_23C + 3000;
	}
	if (uParam0->f_230 == 0f)
	{
		uParam0->f_230 = (uParam0->f_230 + func_69(30f));
		uParam0->f_230 = (uParam0->f_230 + (IntToFloat(uParam0->f_38) * func_69(25f)));
		if (uParam0->f_38 > 0)
		{
			uParam0->f_230 = (uParam0->f_230 + func_69((25f * 0.5f)));
		}
		if (uParam0->f_225)
		{
			uParam0->f_230 = (uParam0->f_230 + (func_69(30f) - func_69(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_43(1);
		uParam0->f_23C = (uParam0->f_23C + SYSTEM::ROUND((0f + (1000f * SYSTEM::TIMESTEP()))));
		func_48(uParam0, fParam2, bParam3);
		if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_1E < 1f)
			{
				uParam0->f_1E = (uParam0->f_1E + (0f + ((1f / 0.225f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_1E = func_47(uParam0->f_1E, 0f, 1f);
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_235)
				{
					uParam0->f_235 = 0;
					uParam0->f_236 = 0;
					uParam0->f_23D = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				uParam0->f_223 = (uParam0->f_223 - (0f + ((1f / 1.215f) * SYSTEM::TIMESTEP())));
			}
		}
		uParam0->f_223 = func_47(uParam0->f_223, 0f, 1f);
		if ((uParam0->f_223 <= 0.7f && !uParam0->f_221) && uParam0->f_1 != 0)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
			uParam0->f_222 = uParam0->f_23C;
			uParam0->f_221 = 1;
		}
		if (uParam0->f_23C > (uParam0->f_22E - 333))
		{
			if (!uParam0->f_231)
			{
				if (uParam0->f_224 < 1f)
				{
					uParam0->f_224 = (uParam0->f_224 + (0f + ((1f / 0.3f) * SYSTEM::TIMESTEP())));
				}
			}
		}
		uParam0->f_224 = func_47(uParam0->f_224, 0f, 1f);
		if (uParam0->f_232)
		{
			if (PAD::_0x6CD79468A1E595C6(2))
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_237)
					{
						func_46(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
					}
				}
			}
		}
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_22E > uParam0->f_23C + 333)
		{
			if (((!uParam0->f_236 && uParam0->f_38 != 0) && GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_235)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					if (uParam0->f_23C > (uParam0->f_22E - 5000))
					{
						uParam0->f_22E = uParam0->f_23C + 5000;
					}
				}
				else if (bParam5)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					uParam0->f_235 = 0;
					uParam0->f_23D = 0.75f;
				}
				func_46(uParam0, (!uParam0->f_235 && uParam0->f_38 > 0));
			}
		}
		if ((uParam0->f_235 || uParam0->f_236) && uParam0->f_38 != 0)
		{
			if (IntToFloat(uParam0->f_23C) > (IntToFloat(uParam0->f_22E + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_236 && !uParam0->f_235)
				{
					uParam0->f_235 = 1;
					uParam0->f_23D = 0.75f;
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				uParam0->f_22F = func_47((uParam0->f_22F + (((1f / 0.3f) * uParam0->f_23D) * SYSTEM::TIMESTEP())), 0f, 1f);
				uParam0->f_23D = func_47((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_22F = func_47((uParam0->f_22F - ((((1f / 0.3f) * uParam0->f_23D) * 0.01f) * SYSTEM::TIMESTEP())), 0f, 1f);
			uParam0->f_23D = func_47((uParam0->f_23D + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_23C > uParam0->f_22E)
		{
			if (uParam0->f_231)
			{
				if (!uParam0->f_237)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_231 = 0;
					}
				}
			}
			else if ((uParam0->f_23C - uParam0->f_222) > 1000 && uParam0->f_221)
			{
				bVar0 = false;
			}
		}
		uParam0->f_23F = !bVar0;
		if (bParam1)
		{
			SYSTEM::WAIT(0);
		}
		else
		{
			if (!bVar0)
			{
				func_43(0);
			}
			return !bVar0;
		}
	}
	func_43(0);
	return 1;
}

void func_46(var uParam0, bool bParam1)//Position - 0x4579
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SET_SEETHROUGH(true);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, true));
	func_14("ES_HELP");
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::SET_SEETHROUGH(true);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(215);
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	if (bParam1)
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
		func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, true));
		func_14("ES_XPAND");
		if (MISC::IS_PC_VERSION())
		{
			GRAPHICS::SET_SEETHROUGH(true);
			GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(216);
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

float func_47(float fParam0, float fParam1, float fParam2)//Position - 0x463D
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

void func_48(var uParam0, float fParam1, bool bParam2)//Position - 0x4664
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
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar24[32];
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	float fVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	
	iVar0 = SYSTEM::ROUND((uParam0->f_223 * 255f));
	fVar1 = (func_68() * 0.25f);
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_1E >= 0f)
		{
			if (!uParam0->f_2)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_22C == 4)
				{
					func_67(&(uParam0->f_D));
				}
				else
				{
					func_14(&(uParam0->f_D));
				}
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(150);
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(100);
				}
				GRAPHICS::SET_SEETHROUGH(true);
				if (uParam0->f_22C == 4)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE((uParam0->f_38 - 1));
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(uParam0->f_38);
				}
				GRAPHICS::SET_SEETHROUGH(bParam2);
				if (uParam0->f_22C == 4 || uParam0->f_22C == 3)
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
				}
				else
				{
					GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(69);
				}
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_38 > 0 && !uParam0->f_3) && uParam0->f_23C > 600)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0.15f);
				GRAPHICS::SET_SEETHROUGH(true);
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				uParam0->f_3 = 1;
			}
		}
		func_66();
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_230 * uParam0->f_22F) * (1f - uParam0->f_224));
	fVar3 = 0f;
	if (uParam0->f_237)
	{
		fVar3 = (((0.1388889f + func_69((2f * 2f))) * uParam0->f_238) * (1f - uParam0->f_224));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_224 != 0f)
	{
		fVar4 = 0f;
		if (fVar2 < fVar4)
		{
			fVar2 = fVar4;
		}
	}
	else
	{
		fVar5 = 0f;
		if (uParam0->f_1E >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_68());
	if (uParam0->f_C)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_22C != 4)
	{
		fVar7 = func_65(&(uParam0->f_D));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (GRAPHICS::_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_65(&(uParam0->f_226));
		fVar8 = (((0.119f + 0.05f) / func_68()) / 2.5f);
		if ((uParam0->f_22C == 1 || uParam0->f_22C == 0) && uParam0->f_22D != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_22C == 5)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (fVar6 < (fVar7 + (1.9f * fVar8)))
		{
			fVar6 = (fVar7 + (2f * fVar8));
		}
	}
	fVar9 = ((0.499f - (fVar6 / 2f)) + 0.006f);
	fVar10 = ((0.499f + (fVar6 / 2f)) - 0.006f);
	PAD::SET_INPUT_EXCLUSIVE(2, 215);
	PAD::SET_INPUT_EXCLUSIVE(2, 216);
	PAD::SET_INPUT_EXCLUSIVE(2, 200);
	PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_232 || uParam0->f_237)
	{
		if ((IntToFloat(uParam0->f_22E) - (14000f * fParam1)) < IntToFloat(uParam0->f_23C) || ((uParam0->f_237 && uParam0->f_22F > 0.95f) && (uParam0->f_22E - 10000) < uParam0->f_23C))
		{
			if (uParam0->f_237)
			{
				if (uParam0->f_23A < 0)
				{
					uParam0->f_23A = (uParam0->f_23A * 4294967295);
					uParam0->f_23A = (uParam0->f_23C + uParam0->f_23A);
				}
				if (uParam0->f_23A > 0)
				{
					if ((uParam0->f_23A - uParam0->f_23C) > 0)
					{
						func_62((uParam0->f_23A - uParam0->f_23C), "TIMER_TIME", 0, 0, 4294967295, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						uParam0->f_23A = 0;
						uParam0->f_239 = 1;
						uParam0->f_237 = 0;
						uParam0->f_231 = 0;
						uParam0->f_232 = 0;
						uParam0->f_22E = uParam0->f_23C + 500;
						uParam0->f_23A = 0;
					}
				}
				if (uParam0->f_238 < 1f)
				{
					uParam0->f_238 = (uParam0->f_238 + (0f + ((1f / 0.166f) * SYSTEM::TIMESTEP())));
					if (uParam0->f_238 > 1f)
					{
						uParam0->f_238 = 1f;
					}
				}
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				HUD::HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_224 < 0.1f) && uParam0->f_23C <= uParam0->f_22E)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_237)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				PAD::DISABLE_CONTROL_ACTION(2, 188, 1);
				if (NETWORK::_0x5C497525F803486B(2, 188))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 3;
					uParam0->f_23A = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 187, 1);
				if (NETWORK::_0x5C497525F803486B(2, 187))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 4;
					uParam0->f_23A = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				PAD::DISABLE_CONTROL_ACTION(2, 202, 1);
				if (NETWORK::_0x5C497525F803486B(2, 202))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_237 = 0;
					uParam0->f_231 = 0;
					uParam0->f_232 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					uParam0->f_239 = 2;
					uParam0->f_23A = 0;
					unk_0x1190AB7024CBD8CB(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_232)
			{
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
				PAD::DISABLE_CONTROL_ACTION(0, 140, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 141, 1);
				PAD::DISABLE_CONTROL_ACTION(0, 142, 1);
				if (PAD::IS_CONTROL_JUST_PRESSED(2, 215) || NETWORK::_0x5C497525F803486B(2, 200))
				{
					unk_0x1190AB7024CBD8CB(4294967295, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_232 = 0;
					uParam0->f_231 = 0;
					uParam0->f_22E = uParam0->f_23C + 500;
					unk_0x1190AB7024CBD8CB(4294967295, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	HUD::GET_HUD_COLOUR(1, &iVar13, &iVar14, &iVar15, &iVar16);
	HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, iVar0);
	HUD::SET_TEXT_WRAP(fVar9, fVar10);
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_69(6f));
	fVar1 = (fVar1 + (func_69(30f) - func_69((2f * 2f))));
	fVar11 = (fVar2 - func_69((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
		func_66();
		GRAPHICS::DRAW_RECT(0.5f, (fVar1 - (func_69((2f - 0.5f)) - 0.001388889f)), fVar6, func_61(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_69((2f * 0.3f)));
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_38)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_47((fVar11 / (0.8f * func_69(25f))), 0f, 1f);
			func_58(uParam0, iVar17, (fVar1 + func_69(2f)), fVar9, fVar10, SYSTEM::ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_69(25f));
		if (uParam0->f_22C == 4)
		{
			if (iVar17 == (uParam0->f_240 - 1))
			{
				fVar1 = (fVar1 + func_69((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_69(2f));
					fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
					func_66();
					GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_69((2f * 0.5f))), fVar6, func_61(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_69((2f * 0.3f)));
					if (uParam0->f_38 > 0)
					{
						fVar1 = (fVar1 + func_69((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_22C == 4)
	{
		return;
	}
	if (uParam0->f_38 > 0)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_69(2f));
			fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
			func_66();
			GRAPHICS::DRAW_RECT(0.5f, (fVar1 + func_69((2f * 0.5f))), fVar6, func_61(1f), iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_225)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_47((fVar11 / (0.8f * func_69(25f))), 0f, 1f);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			func_51(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (UNK::_GET_CURRENT_LANGUAGE_ID() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_68()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_68()) / 2.5f));
				if (uParam0->f_22C == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_68()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_68()) / 2.5f));
				}
			}
			if (uParam0->f_22D == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_22C != 3)
			{
				HUD::SET_TEXT_WRAP(fVar20, fVar21);
				HUD::SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				HUD::SET_TEXT_JUSTIFICATION(0);
			}
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			func_50(&(uParam0->f_226), fVar20, (fVar1 + func_69((2f * 2f))), 0, 0, 0);
			HUD::SET_TEXT_WRAP(fVar20, fVar21);
			HUD::SET_TEXT_JUSTIFICATION(2);
			HUD::SET_TEXT_SCALE(1f, 0.4f);
			HUD::SET_TEXT_CENTRE(0);
			func_66();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar24, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			HUD::SET_TEXT_WRAP(fVar20, fVar22);
			HUD::SET_TEXT_COLOUR(iVar13, iVar14, iVar15, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_22C)
			{
				case 0:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 1:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22B);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 2:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22A);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 5:
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_22A, 1);
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_22D != 0)
			{
				iVar25 = 255;
				iVar26 = 255;
				iVar27 = 255;
				iVar28 = iVar0;
				switch (uParam0->f_22D)
				{
					case 1:
						HUD::GET_HUD_COLOUR(107, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 3:
						HUD::GET_HUD_COLOUR(109, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(108, &iVar25, &iVar26, &iVar27, &iVar28);
						break;
				}
				fVar29 = (0.001388889f * 5f);
				fVar30 = ((0.00078125f * 16f) * 2f);
				fVar31 = ((0.001388889f * 16f) * 2f);
				fVar32 = ((fVar21 + func_49(4f)) - 0.006f);
				fVar33 = ((fVar1 + func_69(10f)) + fVar29);
				if (uParam0->f_22C == 4294967295)
				{
					fVar32 = (fVar32 - (0.006f * 6f));
				}
				fVar30 = (fVar30 * 0.65f);
				fVar31 = (fVar31 * 0.65f);
				GRAPHICS::DRAW_SPRITE(&cVar23, &cVar24, fVar32, fVar33, fVar30, fVar31, 0f, iVar25, iVar26, iVar27, SYSTEM::ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_69(30f) - 2f));
		}
	}
}

float func_49(float fParam0)//Position - 0x52F4
{
	return (fParam0 * 0.00078125f);
}

void func_50(char* sParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)//Position - 0x5304
{
	HUD::SET_TEXT_CENTRE(iParam3);
	HUD::SET_TEXT_FONT(iParam5);
	func_66();
	if (bParam4)
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam0);
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_51(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)//Position - 0x5341
{
	char cVar0[64];
	char cVar1[64];
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	vector3 vVar7;
	
	StringCopy(&cVar0, func_57(iParam0), 64);
	StringCopy(&cVar1, func_54(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar1) != 0)
	{
		fVar4 = 1f;
		if (bParam5)
		{
			GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar2, &iVar3);
			fVar5 = GRAPHICS::_GET_ASPECT_RATIO(0);
			if (func_53())
			{
				iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar3) * fVar5));
			}
			fVar6 = (SYSTEM::TO_FLOAT(iVar2) / SYSTEM::TO_FLOAT(iVar3));
			fVar4 = (fVar6 / fVar5);
			if (func_53())
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
		vVar7.x = (vVar7.x * (func_52(iParam0) / fVar4));
		vVar7.y = (vVar7.y * (func_52(iParam0) / fVar4));
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
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[29 /*16*/])) == 2807284209)
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
			if (*fParam3 > Global_43D6)
			{
				*fParam4 = (*fParam4 * (Global_43D6 / *fParam3));
				*fParam3 = Global_43D6;
			}
		}
		return 1;
	}
	return 0;
}

float func_52(int iParam0)//Position - 0x54F2
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

int func_53()//Position - 0x5591
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

var func_54(int iParam0, bool bParam1)//Position - 0x55C3
{
	char* sVar0[2];
	var uVar1;
	struct<13> Var2;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_1ACF[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_1ACF[iParam0 /*16*/])) == 2807284209)
		{
			Var2 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
			if (NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var2, &uVar1))
			{
				return func_55(&uVar1);
			}
		}
		else
		{
			return func_55(&(Global_43D7.f_1ACF[iParam0 /*16*/]));
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
		
		case 52:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
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

var func_55(var uParam0)//Position - 0x5A2E
{
	return uParam0;
}

struct<13> func_56(int iParam0)//Position - 0x5A38
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_57(int iParam0)//Position - 0x5A4F
{
	var uVar0;
	struct<13> Var1;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_43D7.f_177E[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_43D7.f_177E[iParam0 /*16*/])) == 2807284209)
		{
			Var1 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
			NETWORK::_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var1, &uVar0);
			return func_55(&uVar0);
		}
		else
		{
			return func_55(&(Global_43D7.f_177E[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 48)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_58(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5)//Position - 0x5AC4
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &uVar3);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	HUD::SET_TEXT_WRAP(fParam3, fParam4);
	HUD::SET_TEXT_JUSTIFICATION(1);
	HUD::SET_TEXT_SCALE(1f, func_60(14f));
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_66();
	if (uParam0->f_213[iParam1])
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_47[iParam1 /*16*/]));
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_47[iParam1 /*16*/]));
		if (uParam0->f_39[iParam1] == 16 || uParam0->f_39[iParam1] == 17)
		{
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_1E9[iParam1]);
		}
	}
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_205[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_51(7, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_54(7, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_51(5, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_54(5, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_51(6, 0, 1, &fVar5, &fVar6, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", func_54(6, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_39[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_39[iParam1] == 15)
	{
		HUD::SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		HUD::SET_TEXT_JUSTIFICATION(2);
	}
	HUD::SET_TEXT_SCALE(1f, func_60(14f));
	if (uParam0->f_39[iParam1] == 5 || uParam0->f_39[iParam1] == 4)
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		HUD::SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iParam5);
	func_59(uParam0->f_1E9[iParam1], uParam0->f_1F7[iParam1], fParam4, fParam2, &(uParam0->f_118[iParam1 /*16*/]), uParam0->f_39[iParam1]);
}

void func_59(int iParam0, int iParam1, float fParam2, float fParam3, char* sParam4, int iParam5)//Position - 0x5D4F
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	HUD::SET_TEXT_CENTRE(0);
	HUD::SET_TEXT_FONT(0);
	func_66();
	fVar1 = 0f;
	fVar2 = (8f * 0.00078125f);
	fVar3 = (16f * 0.001388889f);
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4)
	{
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5)
	{
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_60(18f));
			HUD::SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				HUD::_BEGIN_TEXT_COMMAND_WIDTH("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((4294967295 * iParam0), 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				HUD::_BEGIN_TEXT_COMMAND_WIDTH("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = HUD::_END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			GRAPHICS::DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			HUD::SET_TEXT_SCALE(1f, func_60(14f));
			break;
	}
	HUD::_SET_NOTIFICATION_COLOR_NEXT(iVar0);
	switch (iParam5)
	{
		case 11:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 4:
		case 5:
			HUD::SET_TEXT_SCALE(1f, func_60(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER((4294967295 * iParam0), 1);
			}
			else
			{
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			break;
		
		case 7:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam4);
			break;
		
		case 8:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			HUD::SET_TEXT_FONT(5);
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 15:
		case 14:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
		
		case 16:
			HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam4);
			HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			HUD::SET_TEXT_SCALE(1f, func_60(14f));
		}
		else
		{
			HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_60(float fParam0)//Position - 0x60C8
{
	return (fParam0 * 0.025f);
}

float func_61(float fParam0)//Position - 0x60D8
{
	return (fParam0 * 0.0009259259f);
}

void func_62(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)//Position - 0x60E8
{
	int iVar0;
	int iVar1;
	
	iVar0 = 4294967295;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == 4294967295)
		{
			if (func_64(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > 4294967295)
	{
		Global_14E696.f_1 = 1;
		func_63(7, iVar0);
		Global_14E696.f_112F[iVar0] = iParam0;
		StringCopy(&(Global_14E696.f_112F.f_B[iVar0 /*16*/]), sParam1, 64);
		Global_14E696.f_112F.f_AC[iVar0] = iParam2;
		Global_14E696.f_112F.f_D8[iVar0] = iParam3;
		Global_14E696.f_112F.f_B7[iVar0] = iParam4;
		Global_14E696.f_112F.f_C2[iVar0] = iParam5;
		Global_14E696.f_112F.f_F9[iVar0] = iParam6;
		Global_14E696.f_112F.f_104[iVar0] = iParam7;
		Global_14E696.f_112F.f_CD[iVar0] = iParam8;
		Global_14E696.f_112F.f_13A[iVar0] = iParam9;
		Global_14E696.f_112F.f_145[iVar0] = iParam10;
		Global_14E696.f_112F.f_165[iVar0] = iParam11;
		Global_14E696.f_112F.f_EE[iVar0] = iParam12;
		Global_14E696.f_112F.f_10F[iVar0] = iParam13;
		Global_14E696.f_112F.f_170[iVar0] = iParam14;
		Global_14E696.f_112F.f_17B[iVar0] = iParam15;
		Global_14E696.f_112F.f_186[iVar0] = iParam16;
	}
}

void func_63(int iParam0, int iParam1)//Position - 0x6236
{
	MISC::SET_BIT(&(Global_14E696.f_17F2[iParam0]), iParam1);
}

bool func_64(int iParam0, int iParam1)//Position - 0x624F
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_14E696.f_17F2[iParam0], iParam1);
}

float func_65(char* sParam0)//Position - 0x6268
{
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return (HUD::_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_66()//Position - 0x627D
{
	GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	unk_0x6AEB48E3B648804A(0);
}

void func_67(char* sParam0)//Position - 0x62A5
{
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam0);
}

float func_68()//Position - 0x62B3
{
	float fVar0;
	
	fVar0 = 1f;
	if (MISC::IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_69(float fParam0)//Position - 0x62C7
{
	return (fParam0 * 0.001388889f);
}

void func_70(int iParam0)//Position - 0x62D7
{
	if (func_30())
	{
		return;
	}
	if (!Global_38B1.f_1 == 1)
	{
		if (func_31(0))
		{
			func_27(iParam0);
		}
		MISC::SET_BIT(&Global_950, 2);
	}
}

void func_71(var uParam0)//Position - 0x630A
{
	if (uParam0->f_231 || uParam0->f_23C <= uParam0->f_22E)
	{
		uParam0->f_231 = 0;
		uParam0->f_22E = (uParam0->f_23C - 1);
	}
}

bool func_72()//Position - 0x633D
{
	return Global_16C57.f_1;
}

void func_73(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, var uParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)//Position - 0x634B
{
	func_543(uParam0, uParam1, iParam2, iParam3, iParam4, iParam5, &iParam6, uParam7, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, iParam15, uParam16, bParam17);
}

int func_74(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)//Position - 0x637B
{
	if (!func_251(uParam1, 5))
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		func_175(uParam1, func_179(iParam0), iParam4, (iParam5 - 1), iParam6, iParam7, fParam8);
		func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 358, 0, 358, 0);
		func_211(uParam1, 5, 1);
		SYSTEM::SETTIMERA(0);
	}
	if (!func_251(uParam1, 6))
	{
		if (func_171(&(uParam1->f_1A), 0, 0))
		{
			func_211(uParam1, 6, 1);
		}
		else
		{
			return 2;
		}
	}
	if (func_251(uParam1, 27) && PLAYER::IS_PLAYER_ONLINE())
	{
		if (!func_251(uParam1, 26))
		{
			func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 358, 0, 358, 0);
		}
		func_211(uParam1, 27, 0);
	}
	if (SYSTEM::TIMERA() > 1000)
	{
		if (*iParam9)
		{
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				func_93(uParam2, iParam0);
				func_89(uParam1);
			}
			else if (func_76(&iLocal_542, 0))
			{
				iLocal_542 = 0;
				*iParam9 = 0;
				func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
			}
		}
		else
		{
			if (!func_251(uParam1, 10))
			{
				unk_0x1190AB7024CBD8CB(4294967295, "BASE_JUMP_PASSED", "HUD_AWARDS", 1);
				func_211(uParam1, 10, 1);
			}
			func_45(&(uParam1->f_1A), 0, 1065353216, 0, 1, 0);
			func_89(uParam1);
		}
		if (*iParam9)
		{
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				if (!func_251(uParam1, 28) && func_75(&uLocal_105))
				{
					func_211(uParam1, 28, 1);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 358, 0, 358, 0);
				}
			}
			if (func_316(uParam3, 7, 1000))
			{
				*iParam9 = 0;
				func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 358, 0);
			}
		}
		else if (func_316(uParam3, 5, 1000))
		{
			func_71(&(uParam1->f_1A));
			return 1;
		}
		else if (func_316(uParam3, 4, 1000))
		{
			return 0;
		}
		else if ((!*iParam9 && func_316(uParam3, 8, 1000)) && (!PLAYER::IS_PLAYER_ONLINE() || func_251(uParam1, 26)))
		{
			*iParam9 = 1;
			if (PLAYER::IS_PLAYER_ONLINE())
			{
				if (func_75(&uLocal_105))
				{
					func_211(uParam1, 28, 1);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 358, 0, 358, 0);
				}
				else
				{
					func_211(uParam1, 28, 0);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 358, 0, 358, 0, 358, 0);
				}
			}
		}
	}
	return 2;
}

int func_75(var uParam0)//Position - 0x660A
{
	if ((INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 1) && Global_1C0180.f_A90[0] > 0) && uParam0->f_F6.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_76(int iParam0, bool bParam1)//Position - 0x6641
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1C171C.f_2 + 5 < MISC::GET_FRAME_COUNT() && Global_1C171C.f_2 > 0)
	{
		func_88(&Global_1C171C);
		func_88(&(Global_1C171C.f_31));
		*iParam0 = 0;
		Global_1C171C.f_2 = 0;
		func_87(0);
	}
	Global_1C171C.f_2 = MISC::GET_FRAME_COUNT();
	iVar1 = 4294967295;
	if (MISC::IS_ORBIS_VERSION())
	{
		if (NETWORK::_0xBD545D44CCE70597() == 0)
		{
			iVar1 = NETWORK::_0x74FB3E29E6D10FA9();
		}
	}
	if ((MISC::IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_85() && NETWORK::NETWORK_IS_SIGNED_ONLINE()))
	{
		if (NETWORK::_NETWORK_IS_PSN_AVAILABLE())
		{
			func_82(&(Global_1C171C.f_3), func_84(&(Global_1C171C.f_3)));
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4))
			{
				MISC::SET_BIT(iParam0, 4);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_80(&(Global_1C171C.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			else if (!func_85())
			{
				HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
			{
				if (!PAD::IS_CONTROL_PRESSED(2, 201))
				{
					MISC::SET_BIT(iParam0, 0);
				}
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_88(&(Global_1C171C.f_31));
				func_88(&Global_1C171C);
				*iParam0 = 0;
				Global_1C171C.f_2 = 0;
				func_87(0);
				return 1;
			}
		}
	}
	else
	{
		func_82(&(Global_1C171C.f_3), func_84(&(Global_1C171C.f_3)));
		if ((func_79(&(Global_1C171C.f_31)) && !func_77(&(Global_1C171C.f_31), 2000, 1)) && !NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			MISC::SET_BIT(iParam0, 3);
			StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
			func_80(&(Global_1C171C.f_3), 0);
		}
		else if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 3))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 1))
			{
				PLAYER::DISPLAY_SYSTEM_SIGNIN_UI(0);
				MISC::SET_BIT(iParam0, 1);
				StringCopy(&(Global_1C171C.f_3.f_1), "", 64);
				func_80(&(Global_1C171C.f_3), 0);
			}
		}
		if (func_79(&Global_1C171C))
		{
			if (!func_77(&Global_1C171C, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
				{
					if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
					}
					else
					{
						HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
					}
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
						{
							if (!PAD::IS_CONTROL_PRESSED(2, 201))
							{
								MISC::SET_BIT(iParam0, 0);
							}
						}
						else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_88(&Global_1C171C);
							*iParam0 = 0;
							Global_1C171C.f_2 = 0;
							func_87(0);
							return 1;
						}
					}
				}
				else
				{
					func_88(&Global_1C171C);
					*iParam0 = 0;
					Global_1C171C.f_2 = 0;
					func_87(0);
					return 1;
				}
			}
			else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 3))
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
				{
					if (!PAD::IS_CONTROL_PRESSED(2, 201))
					{
						MISC::SET_BIT(iParam0, 0);
					}
				}
				else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_88(&(Global_1C171C.f_31));
					func_88(&Global_1C171C);
					*iParam0 = 0;
					Global_1C171C.f_2 = 0;
					func_87(0);
					return 1;
				}
			}
			else
			{
				if (NETWORK::NETWORK_IS_CABLE_CONNECTED())
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				else
				{
					HUD::SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, 4294967295, 0, 0, 1, 0);
				}
				if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 0))
					{
						if (!PAD::IS_CONTROL_PRESSED(2, 201))
						{
							MISC::SET_BIT(iParam0, 0);
						}
					}
					else if (PAD::IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_88(&(Global_1C171C.f_31));
						func_88(&Global_1C171C);
						*iParam0 = 0;
						Global_1C171C.f_2 = 0;
						func_87(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_77(var uParam0, int iParam1, bool bParam2)//Position - 0x6AB5
{
	if (iParam1 == 4294967295)
	{
		return 1;
	}
	func_78(uParam0, bParam2, 0);
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

void func_78(var uParam0, bool bParam1, bool bParam2)//Position - 0x6B13
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

bool func_79(var uParam0)//Position - 0x6B58
{
	return uParam0->f_1;
}

void func_80(var uParam0, bool bParam1)//Position - 0x6B64
{
	func_81(uParam0);
	if (bParam1)
	{
		func_87(0);
	}
	uParam0->f_23 = 1;
}

void func_81(var uParam0)//Position - 0x6B81
{
	struct<46> Var0;
	
	Var0.f_29 = 1;
	*uParam0 = { Var0 };
}

void func_82(var uParam0, int iParam1)//Position - 0x6B9C
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_83(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_24)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_25)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_27)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_21);
			HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_22);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_26)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_11));
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else if (uParam0->f_28)
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_21, 70);
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			HUD::_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_29);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_83(var uParam0)//Position - 0x6C9A
{
	uParam0->f_23 = 0;
}

int func_84(var uParam0)//Position - 0x6CA7
{
	return uParam0->f_23;
}

int func_85()//Position - 0x6CB3
{
	if (func_86())
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_86()//Position - 0x6CD3
{
	return Global_258443;
}

void func_87(bool bParam0)//Position - 0x6CDF
{
	HUD::_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		unk_0xDC1A2868428162E5();
	}
}

void func_88(var uParam0)//Position - 0x6CF4
{
	uParam0->f_1 = 0;
}

void func_89(var uParam0)//Position - 0x6D01
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!func_92(uParam0))
	{
		return;
	}
	GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
	if (PAD::_0x6CD79468A1E595C6(2))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_3)
		{
			if (uParam0->f_3[iVar0] != 358)
			{
				uParam0->f_C[iVar0] = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, uParam0->f_3[iVar0], true);
			}
			iVar0++;
		}
		func_90(&(uParam0->f_1), 4);
	}
	if (!func_23(uParam0->f_1, 4))
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(200f);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_15[iVar2]))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_C[iVar2 + 4]))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar1);
					func_9(uParam0->f_C[iVar2 + 4]);
					func_9(uParam0->f_C[iVar2]);
					func_14(uParam0->f_15[iVar2]);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(fVar1);
					func_9(uParam0->f_C[iVar2]);
					func_14(uParam0->f_15[iVar2]);
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				}
				fVar1 = (fVar1 + 1f);
			}
			iVar2++;
		}
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_2));
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(0f);
		GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_FLOAT(80f);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		func_21(&(uParam0->f_1), 4);
	}
}

void func_90(var uParam0, int iParam1)//Position - 0x6E9A
{
	func_91(uParam0, iParam1);
}

void func_91(var uParam0, var uParam1)//Position - 0x6EAA
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_92(var uParam0)//Position - 0x6EBF
{
	if (*uParam0 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_21(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_93(var uParam0, int iParam1)//Position - 0x6EE6
{
	func_94(uParam0, &uLocal_105);
}

void func_94(var uParam0, var uParam1)//Position - 0x6EF6
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	char[] cVar7[8];
	int iVar8[3];
	int iVar9;
	struct<13> Var10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar13;
	bool bVar14;
	
	func_170(&(Global_1C171C.f_31), 1, 0);
	HUD::HIDE_HELP_TEXT_THIS_FRAME();
	func_169();
	func_70(0);
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_167(1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_166(1);
	func_165(1);
	if (!func_162())
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			AUDIO::START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 3))
	{
		*uParam0 = func_161();
		MISC::SET_BIT(&(uParam1->f_2A), 3);
	}
	Var10 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())) || Global_1C0180.f_B10 != 0)
		{
			if (!PLAYER::IS_PLAYER_ONLINE())
			{
				if (Global_1C0180.f_B0D != 2)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 2;
				}
			}
			else if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())
			{
				if (Global_1C0180.f_B0D != 3)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 3;
				}
			}
			else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
			{
				if (Global_1C0180.f_B0D != 4)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 4;
				}
			}
			else if (Global_1C0180.f_B10 != 0)
			{
				if (Global_1C0180.f_B0D != 5)
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
					Global_1C0180.f_B0D = 5;
				}
			}
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 1))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
				func_160(*uParam0, Global_1C0180.f_ADC);
				if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C0180.f_ADC.f_1)))
				{
					if (!func_159(uParam1->f_2C))
					{
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							Var6 = { Global_1C0180.f_ADC.f_9 };
							func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					else if (!Global_1C0180.f_ADC.f_1B)
					{
						StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					else
					{
						StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
						if (Global_1C0180.f_ADC.f_1A > 0)
						{
							func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
						}
						else
						{
							func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
						}
					}
					func_157(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
				}
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 4);
				func_156(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 5);
				func_156(*uParam0, &iVar3, iVar9, 1, 1);
				iVar9 = 0;
				MISC::SET_BIT(&iVar9, 6);
				func_156(*uParam0, &iVar3, iVar9, 1, 1);
				MISC::SET_BIT(&(uParam1->f_2A), 1);
				func_155(*uParam0);
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 2);
				GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			}
			else
			{
				func_155(*uParam0);
			}
		}
		else
		{
			if (Global_1C0180.f_B0D != 1)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
				Global_1C0180.f_B0D = 1;
			}
			if (!func_119(uParam1))
			{
				uParam1->f_F6.f_1 = 4294967295;
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 1);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					func_160(*uParam0, Global_1C0180.f_ADC);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_159(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						func_157(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					MISC::SET_BIT(&(uParam1->f_2A), 0);
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 2);
				}
				iVar3 = 0;
				iVar0 = 0;
				if (Global_1C0180.f_B09 == 4294967295)
				{
					StringCopy(&vVar12, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_118(*uParam0, iVar3, iVar9, &vVar12);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09 = 1;
					func_88(&(Global_1C0180.f_B07));
				}
				else if (func_77(&(Global_1C0180.f_B07), 300, 0))
				{
					StringCopy(&vVar13, "SC_LB_DL", 24);
					StringIntConCat(&vVar13, Global_1C0180.f_B09, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 4);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 5);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar9 = 0;
							MISC::SET_BIT(&iVar9, 6);
							func_156(*uParam0, &iVar3, iVar9, 0, 0);
						}
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 7);
						func_118(*uParam0, iVar3, iVar9, &vVar13);
						iVar3++;
						iVar0++;
					}
					Global_1C0180.f_B09++;
					if (Global_1C0180.f_B09 > 3)
					{
						Global_1C0180.f_B09 = 0;
					}
					func_88(&(Global_1C0180.f_B07));
				}
				func_155(*uParam0);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 0);
				if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_F6.f_BB[iVar0] = 0;
						iVar0++;
					}
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
					func_160(*uParam0, Global_1C0180.f_ADC);
					if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_1C0180.f_ADC.f_1)))
					{
						if (!func_159(uParam1->f_2C))
						{
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								Var6 = { Global_1C0180.f_ADC.f_9 };
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &Var6, 1, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &cVar7, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else if (!Global_1C0180.f_ADC.f_1B)
						{
							StringCopy(&Var6, "FMMC_COR_SCLB5", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						else
						{
							StringCopy(&Var6, "FMMC_COR_SCLB6", 64);
							if (Global_1C0180.f_ADC.f_1A > 0)
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, Global_1C0180.f_ADC.f_1A);
							}
							else
							{
								func_158(*uParam0, &(Global_1C0180.f_ADC.f_1), &Var6, &(Global_1C0180.f_ADC.f_9), Global_1C0180.f_ADC.f_19, 4294967295);
							}
						}
						func_157(*uParam0, "SCLB_C_RANK", &(Global_1C0180.f_A9D), Global_1C0180.f_A94);
					}
					if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_2A, 6))
					{
						func_117(&Global_1C126B);
						func_113(uParam1, &Global_1C126B);
						func_112(uParam1, &Global_1C126B);
					}
					iVar3 = 0;
					uParam1->f_F6.f_2 = 0;
					if ((Global_1C0180.f_A90[0] > 1 || (Global_1C0180.f_A90[0] > 0 && Global_1C0180.f_AD7[0] != 4294967295)) || (((Global_1C0180.f_A90[0] > 0 && Global_1C0180.f_ADC.f_1B) && func_159(uParam1->f_2C)) && Global_1C0180.f_AD7[0] != 4294967295))
					{
						uParam1->f_F6.f_1 = 4294967295;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar14 = false;
							if (Global_1C126B[iVar0 /*100*/].f_4B == 1)
							{
								if (!iVar8[0])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 4);
									func_156(*uParam0, &iVar3, iVar9, 0, 0);
									iVar8[0] = 1;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 2)
							{
								if (!iVar8[1])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 5);
									if ((Global_1C0180.f_A90[1] < 1 && Global_1C0180.f_AD7[1] == 4294967295) && !(((Global_1C0180.f_A90[1] > 0 && Global_1C0180.f_ADC.f_1B) && func_159(uParam1->f_2C)) && Global_1C0180.f_AD7[1] != 4294967295))
									{
										func_156(*uParam0, &iVar3, iVar9, 1, 0);
										bVar14 = true;
									}
									else
									{
										func_156(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[1] = 1;
								}
							}
							else if (Global_1C126B[iVar0 /*100*/].f_4B == 3)
							{
								if (!iVar8[2])
								{
									iVar9 = 0;
									MISC::SET_BIT(&iVar9, 6);
									if (!NETWORK::_0x67A5589628E0CFF6())
									{
										bVar14 = true;
									}
									else if (!NETWORK::_0xBA9775570DB788CF())
									{
										bVar14 = true;
									}
									if ((Global_1C0180.f_A90[2] < 2 && Global_1C0180.f_AD7[2] == 4294967295) && !(((Global_1C0180.f_A90[2] > 0 && Global_1C0180.f_ADC.f_1B) && func_159(uParam1->f_2C)) && Global_1C0180.f_AD7[2] != 4294967295))
									{
										bVar14 = true;
									}
									if (bVar14)
									{
										func_156(*uParam0, &iVar3, iVar9, 1, 0);
									}
									else
									{
										func_156(*uParam0, &iVar3, iVar9, 0, 0);
									}
									iVar8[2] = 1;
								}
							}
							if (func_111(Global_1C126B[iVar0 /*100*/].f_20))
							{
								if (func_159(uParam1->f_2C))
								{
									NETWORK::NETWORK_PLAYER_GET_USERID(CAM::_0xDC9DA9E8789F5246(), &uVar11);
									if (!Global_1C126B[iVar0 /*100*/].f_4A && MISC::ARE_STRINGS_EQUAL(&(uParam1->f_2C.f_3.f_1[1 /*16*/].f_8), &uVar11))
									{
										bVar14 = true;
									}
								}
								if (!bVar14)
								{
									iVar9 = 0;
									if (!Global_1C0180.f_ADC.f_1B)
									{
										if (func_110(&(Global_1C126B[iVar0 /*100*/].f_20), &Var10))
										{
											MISC::SET_BIT(&iVar9, 1);
											if (uParam1->f_F6.f_1 == 4294967295)
											{
												bVar4 = true;
												uParam1->f_F6.f_1 = iVar0;
												MISC::SET_BIT(&iVar9, 3);
											}
										}
									}
									if (func_159(uParam1->f_2C))
									{
										Var6 = { Global_1C126B[iVar0 /*100*/] };
										if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1C126B[iVar0 /*100*/].f_54)) && !MISC::ARE_STRINGS_EQUAL(&(Global_1C126B[iVar0 /*100*/].f_54), ""))
										{
											StringConCat(&Var6, "/", 64);
											StringConCat(&Var6, &(Global_1C126B[iVar0 /*100*/].f_54), 64);
										}
										func_109(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &Var6, &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									else
									{
										func_109(*uParam0, iVar3, iVar9, Global_1C126B[iVar0 /*100*/].f_3B, &(Global_1C126B[iVar0 /*100*/]), &(Global_1C126B[iVar0 /*100*/].f_50));
										uParam1->f_F6.f_6[iVar0 /*15*/] = iVar3;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_1 = iVar9;
										uParam1->f_F6.f_6[iVar0 /*15*/].f_2 = { Global_1C126B[iVar0 /*100*/].f_20 };
										uParam1->f_F6.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1C0180.f_A94)
									{
										bVar5 = false;
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD2, iVar1))
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD0, iVar1))
											{
												if (Global_1C0180.f_AC2[iVar1] == Global_1C126B[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_103(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], 0, Global_1C126B[iVar0 /*100*/].f_3A);
											}
											else
											{
												func_103(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_43[iVar1], Global_1C126B[iVar0 /*100*/].f_4A, Global_1C126B[iVar0 /*100*/].f_3A);
											}
										}
										else
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD0, iVar1))
											{
												if (Global_1C0180.f_AC9[iVar1] == Global_1C126B[iVar0 /*100*/].f_43[iVar1])
												{
													bVar5 = true;
												}
											}
											if (bVar5)
											{
												func_100(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], 0);
											}
											else
											{
												func_100(Global_1C0180.f_ADC, iVar1, Global_1C126B[iVar0 /*100*/].f_3C[iVar1], Global_1C126B[iVar0 /*100*/].f_4A);
											}
										}
										iVar1++;
									}
									func_99();
									uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 1)]++;
									if (uVar2[(Global_1C126B[iVar0 /*100*/].f_4B - 1)] == 2)
									{
										if (Global_1C126B[iVar0 /*100*/].f_3B > 2)
										{
											MISC::SET_BIT(&iVar9, 2);
											MISC::SET_BIT(&(uParam1->f_F6.f_6[0 /*15*/].f_1), 2);
											func_98(*uParam0, (iVar3 - 1), iVar9);
										}
									}
									iVar3++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_F6.f_BB[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 4);
						func_156(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 5);
						func_156(*uParam0, &iVar3, iVar9, 1, 0);
						iVar9 = 0;
						MISC::SET_BIT(&iVar9, 6);
						func_156(*uParam0, &iVar3, iVar9, 1, 0);
					}
					MISC::SET_BIT(&(uParam1->f_2A), 1);
					GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 2);
					func_155(*uParam0);
					GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
					if (uParam1->f_F6.f_1 == 4294967295 && !bVar4 == 1)
					{
						if (Global_1C0180.f_A90[0] > 1)
						{
							uParam1->f_F6.f_1 = 0;
							MISC::SET_BIT(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
							func_98(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
						}
					}
				}
				else
				{
					func_155(*uParam0);
					func_95(uParam0, uParam1);
				}
			}
		}
	}
}

void func_95(var uParam0, var uParam1)//Position - 0x7ED3
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	var uVar7;
	var uVar8;
	
	iVar1 = uParam1->f_F6.f_1;
	if (PAD::_IS_INPUT_DISABLED(2))
	{
		HUD::_SHOW_CURSOR_THIS_FRAME();
		PAD::SET_INPUT_EXCLUSIVE(2, 239);
		PAD::SET_INPUT_EXCLUSIVE(2, 240);
		PAD::SET_INPUT_EXCLUSIVE(2, 237);
		PAD::SET_INPUT_EXCLUSIVE(2, 238);
		PAD::DISABLE_CONTROL_ACTION(2, 200, 1);
		if (unk_0xE11F00B4AC919F45(2, 241))
		{
			PAD::_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (unk_0xE11F00B4AC919F45(2, 242))
		{
			PAD::_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (HUD::_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_F6.f_BB[0])
				{
					if (iVar3 <= (uParam1->f_F6.f_BB[0] + uParam1->f_F6.f_BB[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_F6.f_1 != iVar3)
				{
					uParam1->f_F6.f_1 = iVar3;
					unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					PAD::_SET_CONTROL_NORMAL(2, 217, 1f);
				}
			}
		}
	}
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		func_97(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_F6.f_2 > 0)
	{
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_F6, 0))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 188) || unk_0xE11F00B4AC919F45(2, 188)) || iVar6 < 4294967196)
			{
				unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1 = (uParam1->f_F6.f_1 + 4294967295);
				MISC::SET_BIT(&(uParam1->f_F6), 0);
				func_88(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_96(uParam1, 188))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6), 0);
		}
		if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_F6, 1))
		{
			if ((PAD::IS_CONTROL_PRESSED(2, 187) || unk_0xE11F00B4AC919F45(2, 187)) || iVar6 > 100)
			{
				unk_0x1190AB7024CBD8CB(4294967295, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_F6.f_1++;
				MISC::SET_BIT(&(uParam1->f_F6), 1);
				func_88(&(uParam1->f_F6.f_3));
				bVar0 = true;
			}
		}
		else if (func_96(uParam1, 187))
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_F6.f_1 < 0)
		{
			uParam1->f_F6.f_1 = (uParam1->f_F6.f_2 - 1);
		}
		if (uParam1->f_F6.f_1 >= uParam1->f_F6.f_2)
		{
			uParam1->f_F6.f_1 = 0;
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_F6, 3))
	{
		if ((PAD::IS_CONTROL_PRESSED(2, 204) || NETWORK::_0x5C497525F803486B(2, 204)) || PAD::IS_CONTROL_JUST_PRESSED(2, 237))
		{
			MISC::SET_BIT(&(uParam1->f_F6), 3);
			func_88(&(uParam1->f_F6.f_3));
			bVar0 = true;
		}
	}
	else if (func_96(uParam1, 204))
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6), 3);
	}
	if (uParam1->f_F6.f_1 >= 0)
	{
		if (uParam1->f_F6.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6.f_6[iVar1 /*15*/].f_1), 3);
				func_98(*uParam0, uParam1->f_F6.f_6[iVar1 /*15*/], uParam1->f_F6.f_6[iVar1 /*15*/].f_1);
			}
			MISC::SET_BIT(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1), 3);
			func_98(*uParam0, uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/], uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_1);
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_2A), 2);
		}
		if (func_111(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2))
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam1->f_F6, 2))
			{
				if (PAD::IS_CONTROL_PRESSED(2, 217) || NETWORK::_0x5C497525F803486B(2, 217))
				{
					if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						unk_0x1190AB7024CBD8CB(4294967295, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						MISC::SET_BIT(&(uParam1->f_F6), 2);
						NETWORK::NETWORK_SHOW_PROFILE_UI(&(uParam1->f_F6.f_6[uParam1->f_F6.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!PAD::IS_CONTROL_PRESSED(2, 217))
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(uParam1->f_F6), 2);
			}
		}
	}
}

int func_96(var uParam0, int iParam1)//Position - 0x8276
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_97(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !unk_0xE11F00B4AC919F45(2, iParam1)) && (iVar1 < 75 && iVar1 > 4294967221)) || func_77(&(uParam0->f_F6.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!PAD::IS_CONTROL_PRESSED(2, iParam1) && !unk_0xE11F00B4AC919F45(2, iParam1)) || func_77(&(uParam0->f_F6.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_97(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)//Position - 0x8315
{
	*uParam0 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = SYSTEM::FLOOR((PAD::GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = SYSTEM::FLOOR((PAD::GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_98(int iParam0, int iParam1, int iParam2)//Position - 0x83EA
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT_STATE");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_99()//Position - 0x840D
{
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_100(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, float fParam15, bool bParam16)//Position - 0x8419
{
	switch (Param0.f_1D[iParam14])
	{
		case 4:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 12:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(SYSTEM::FLOOR(fParam15));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 18 || Param0.f_1D[iParam14] == 20)
				{
					fParam15 = (fParam15 * -1f);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_1D[iParam14] == 19 || Param0.f_1D[iParam14] == 20)
					{
						fParam15 = func_102(fParam15);
					}
					else
					{
						fParam15 = func_101(fParam15);
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_FLOAT(fParam15, 2);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 0:
			break;
	}
}

float func_101(float fParam0)//Position - 0x853B
{
	return (fParam0 / 0.3048f);
}

float func_102(float fParam0)//Position - 0x854B
{
	return (fParam0 / 1609.344f);
}

void func_103(struct<30> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, bool bParam16, bool bParam17)//Position - 0x855B
{
	struct<4> Var0;
	
	if (iParam15 == 2147483647 || iParam15 == 2147483649)
	{
		bParam16 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_1D[iParam14])
	{
		case 5:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 7:
			if (bParam16)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(-iParam15);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 11 && iParam15 < 0)
				{
					iParam15 = (iParam15 * 4294967295);
				}
				if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (Param0.f_1D[iParam14] == 9)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 6:
			if (bParam16)
			{
				if (iParam15 == 2147483647)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 2:
		case 10:
			if (bParam16)
			{
				iParam15 = (iParam15 * 4294967295);
				if (iParam15 >= 3600000 || iParam15 <= 4291367296)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 14);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else if (Param0.f_1D[iParam14] == 10)
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 6);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam15, 2055);
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 3:
			if (bParam17)
			{
				if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
				else
				{
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
				}
			}
			else if (STREAMING::IS_MODEL_IN_CDIMAGE(iParam15))
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam15));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 8:
			if (func_108(iParam15) != 0)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_105(func_108(iParam15), 0));
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam16)
			{
				if (Param0.f_1D[iParam14] == 14 || Param0.f_1D[iParam14] == 16)
				{
					iParam15 = (iParam15 * 4294967295);
				}
				if (!MISC::SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_1D[iParam14] == 15 || Param0.f_1D[iParam14] == 16)
					{
						iParam15 = SYSTEM::FLOOR(func_102(SYSTEM::TO_FLOAT(iParam15)));
					}
					else
					{
						iParam15 = SYSTEM::FLOOR(func_101(SYSTEM::TO_FLOAT(iParam15)));
					}
				}
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				HUD::ADD_TEXT_COMPONENT_INTEGER(iParam15);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 21:
			if (iParam15 > 20)
			{
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			else
			{
				Var0 = { func_104(iParam15) };
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var0);
				CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_104(int iParam0)//Position - 0x892F
{
	struct<4> Var0;
	
	StringCopy(&Var0, "ARENA_C_SL", 16);
	if (iParam0 > 20)
	{
		StringCopy(&Var0, "**INVALID**", 16);
		return Var0;
	}
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	StringIntConCat(&Var0, iParam0, 16);
	return Var0;
}

char* func_105(int iParam0, bool bParam1)//Position - 0x8968
{
	struct<32> Var0;
	
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				return "WTU_INVALID";
			}
			else
			{
				return "WT_INVALID";
			}
			break;
		
		case joaat("weapon_unarmed"):
			if (bParam1)
			{
				return "WTU_UNARMED";
			}
			else
			{
				return "WT_UNARMED";
			}
			break;
		
		case joaat("weapon_pistol"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_combatpistol"):
			if (bParam1)
			{
				return "WTU_PIST_CBT";
			}
			else
			{
				return "WT_PIST_CBT";
			}
			break;
		
		case joaat("weapon_appistol"):
			if (bParam1)
			{
				return "WTU_PIST_AP";
			}
			else
			{
				return "WT_PIST_AP";
			}
			break;
		
		case joaat("weapon_smg"):
			if (bParam1)
			{
				return "WTU_SMG";
			}
			else
			{
				return "WT_SMG";
			}
			break;
		
		case joaat("weapon_microsmg"):
			if (bParam1)
			{
				return "WTU_SMG_MCR";
			}
			else
			{
				return "WT_SMG_MCR";
			}
			break;
		
		case joaat("weapon_assaultrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL";
			}
			else
			{
				return "WT_RIFLE_ASL";
			}
			break;
		
		case joaat("weapon_carbinerifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN";
			}
			else
			{
				return "WT_RIFLE_CBN";
			}
			break;
		
		case joaat("weapon_advancedrifle"):
			if (bParam1)
			{
				return "WTU_RIFLE_ADV";
			}
			else
			{
				return "WT_RIFLE_ADV";
			}
			break;
		
		case joaat("weapon_mg"):
			if (bParam1)
			{
				return "WTU_MG";
			}
			else
			{
				return "WT_MG";
			}
			break;
		
		case joaat("weapon_combatmg"):
			if (bParam1)
			{
				return "WTU_MG_CBT";
			}
			else
			{
				return "WT_MG_CBT";
			}
			break;
		
		case joaat("weapon_pumpshotgun"):
			if (bParam1)
			{
				return "WTU_SG_PMP";
			}
			else
			{
				return "WT_SG_PMP";
			}
			break;
		
		case joaat("weapon_sawnoffshotgun"):
			if (bParam1)
			{
				return "WTU_SG_SOF";
			}
			else
			{
				return "WT_SG_SOF";
			}
			break;
		
		case joaat("weapon_assaultshotgun"):
			if (bParam1)
			{
				return "WTU_SG_ASL";
			}
			else
			{
				return "WT_SG_ASL";
			}
			break;
		
		case joaat("weapon_heavysniper"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY";
			}
			else
			{
				return "WT_SNIP_HVY";
			}
			break;
		
		case joaat("weapon_remotesniper"):
			if (bParam1)
			{
				return "WTU_SNIP_RMT";
			}
			else
			{
				return "WT_SNIP_RMT";
			}
			break;
		
		case joaat("weapon_sniperrifle"):
			if (bParam1)
			{
				return "WTU_SNIP_RIF";
			}
			else
			{
				return "WT_SNIP_RIF";
			}
			break;
		
		case joaat("weapon_grenadelauncher"):
			if (bParam1)
			{
				return "WTU_GL";
			}
			else
			{
				return "WT_GL";
			}
			break;
		
		case joaat("weapon_rpg"):
			if (bParam1)
			{
				return "WTU_RPG";
			}
			else
			{
				return "WT_RPG";
			}
			break;
		
		case joaat("weapon_minigun"):
			if (bParam1)
			{
				return "WTU_MINIGUN";
			}
			else
			{
				return "WT_MINIGUN";
			}
			break;
		
		case joaat("weapon_grenade"):
			if (bParam1)
			{
				return "WTU_GNADE";
			}
			else
			{
				return "WT_GNADE";
			}
			break;
		
		case joaat("weapon_smokegrenade"):
			if (bParam1)
			{
				return "WTU_GNADE_SMK";
			}
			else
			{
				return "WT_GNADE_SMK";
			}
			break;
		
		case joaat("weapon_stickybomb"):
			if (bParam1)
			{
				return "WTU_GNADE_STK";
			}
			else
			{
				return "WT_GNADE_STK";
			}
			break;
		
		case joaat("weapon_molotov"):
			if (bParam1)
			{
				return "WTU_MOLOTOV";
			}
			else
			{
				return "WT_MOLOTOV";
			}
			break;
		
		case joaat("weapon_stungun"):
			if (bParam1)
			{
				return "WTU_STUN";
			}
			else
			{
				return "WT_STUN";
			}
			break;
		
		case joaat("weapon_petrolcan"):
			if (bParam1)
			{
				return "WTU_PETROL";
			}
			else
			{
				return "WT_PETROL";
			}
			break;
		
		case joaat("weapon_electric_fence"):
			if (bParam1)
			{
				return "WTU_ELCFEN";
			}
			else
			{
				return "WT_ELCFEN";
			}
			break;
		
		case joaat("vehicle_weapon_tank"):
			if (bParam1)
			{
				return "WTU_V_TANK";
			}
			else
			{
				return "WT_V_TANK";
			}
			break;
		
		case joaat("vehicle_weapon_space_rocket"):
			if (bParam1)
			{
				return "WTU_V_SPACERKT";
			}
			else
			{
				return "WT_V_SPACERKT";
			}
			break;
		
		case joaat("vehicle_weapon_player_laser"):
			if (bParam1)
			{
				return "WTU_V_PLRLSR";
			}
			else
			{
				return "WT_V_PLRLSR";
			}
			break;
		
		case joaat("object"):
			if (bParam1)
			{
				return "WTU_OBJECT";
			}
			else
			{
				return "WT_OBJECT";
			}
			break;
		
		case joaat("gadget_parachute"):
			if (bParam1)
			{
				return "WTU_PARA";
			}
			else
			{
				return "WT_PARA";
			}
			break;
		
		case 1742569970:
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case 2820358688:
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case 527765612:
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case 4129609738:
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case 2922292364:
			if (bParam1)
			{
				return "WTU_A_ENMYLSR";
			}
			else
			{
				return "WT_A_ENMYLSR";
			}
			break;
		
		case joaat("weapon_knife"):
			if (bParam1)
			{
				return "WTU_KNIFE";
			}
			else
			{
				return "WT_KNIFE";
			}
			break;
		
		case joaat("weapon_nightstick"):
			if (bParam1)
			{
				return "WTU_NGTSTK";
			}
			else
			{
				return "WT_NGTSTK";
			}
			break;
		
		case joaat("weapon_hammer"):
			if (bParam1)
			{
				return "WTU_HAMMER";
			}
			else
			{
				return "WT_HAMMER";
			}
			break;
		
		case joaat("weapon_bat"):
			if (bParam1)
			{
				return "WTU_BAT";
			}
			else
			{
				return "WT_BAT";
			}
			break;
		
		case joaat("weapon_crowbar"):
			if (bParam1)
			{
				return "WTU_CROWBAR";
			}
			else
			{
				return "WT_CROWBAR";
			}
			break;
		
		case joaat("weapon_golfclub"):
			if (bParam1)
			{
				return "WTU_GOLFCLUB";
			}
			else
			{
				return "WT_GOLFCLUB";
			}
			break;
		
		case joaat("weapon_rammed_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_run_over_by_car"):
			if (bParam1)
			{
				return "WTU_PIST";
			}
			else
			{
				return "WT_PIST";
			}
			break;
		
		case joaat("weapon_assaultsmg"):
			if (bParam1)
			{
				return "WTU_SMG_ASL";
			}
			else
			{
				return "WT_SMG_ASL";
			}
			break;
		
		case joaat("weapon_bullpupshotgun"):
			if (bParam1)
			{
				return "WTU_SG_BLP";
			}
			else
			{
				return "WT_SG_BLP";
			}
			break;
		
		case joaat("weapon_pistol50"):
			if (bParam1)
			{
				return "WTU_PIST_50";
			}
			else
			{
				return "WT_PIST_50";
			}
			break;
		
		case joaat("weapon_bottle"):
			if (bParam1)
			{
				return "WTU_BOTTLE";
			}
			else
			{
				return "WT_BOTTLE";
			}
			break;
		
		case joaat("weapon_gusenberg"):
			if (bParam1)
			{
				return "WTU_GUSENBERG";
			}
			else
			{
				return "WT_GUSENBERG";
			}
			break;
		
		case joaat("weapon_snspistol"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL";
			}
			else
			{
				return "WT_SNSPISTOL";
			}
			break;
		
		case joaat("weapon_vintagepistol"):
			if (bParam1)
			{
				return "WTU_VPISTOL";
			}
			else
			{
				return "WT_VPISTOL";
			}
			break;
		
		case joaat("weapon_dagger"):
			if (bParam1)
			{
				return "WTU_DAGGER";
			}
			else
			{
				return "WT_DAGGER";
			}
			break;
		
		case joaat("weapon_flaregun"):
			if (bParam1)
			{
				return "WTU_FLAREGUN";
			}
			else
			{
				return "WT_FLAREGUN";
			}
			break;
		
		case joaat("weapon_heavypistol"):
			if (bParam1)
			{
				return "WTU_HEAVYPSTL";
			}
			else
			{
				return "WT_HEAVYPSTL";
			}
			break;
		
		case joaat("weapon_specialcarbine"):
			if (bParam1)
			{
				return "WTU_RIFLE_SCBN";
			}
			else
			{
				return "WT_RIFLE_SCBN";
			}
			break;
		
		case joaat("weapon_musket"):
			if (bParam1)
			{
				return "WTU_MUSKET";
			}
			else
			{
				return "WT_MUSKET";
			}
			break;
		
		case joaat("weapon_firework"):
			if (bParam1)
			{
				return "WTU_FWRKLNCHR";
			}
			else
			{
				return "WT_FWRKLNCHR";
			}
			break;
		
		case joaat("weapon_marksmanrifle"):
			if (bParam1)
			{
				return "WTU_MKRIFLE";
			}
			else
			{
				return "WT_MKRIFLE";
			}
			break;
		
		case joaat("weapon_heavyshotgun"):
			if (bParam1)
			{
				return "WTU_HVYSHOT";
			}
			else
			{
				return "WT_HVYSHOT";
			}
			break;
		
		case joaat("weapon_proxmine"):
			if (bParam1)
			{
				return "WTU_PRXMINE";
			}
			else
			{
				return "WT_PRXMINE";
			}
			break;
		
		case joaat("weapon_hominglauncher"):
			if (bParam1)
			{
				return "WTU_HOMLNCH";
			}
			else
			{
				return "WT_HOMLNCH";
			}
			break;
		
		case joaat("weapon_hatchet"):
			if (bParam1)
			{
				return "WTU_HATCHET";
			}
			else
			{
				return "WT_HATCHET";
			}
			break;
		
		case joaat("weapon_railgun"):
			if (bParam1)
			{
				return "WTU_RAILGUN";
			}
			else
			{
				return "WT_RAILGUN";
			}
			break;
		
		case joaat("weapon_combatpdw"):
			if (bParam1)
			{
				return "WTU_COMBATPDW";
			}
			else
			{
				return "WT_COMBATPDW";
			}
			break;
		
		case joaat("weapon_knuckle"):
			if (bParam1)
			{
				return "WTU_KNUCKLE";
			}
			else
			{
				return "WT_KNUCKLE";
			}
			break;
		
		case joaat("weapon_marksmanpistol"):
			if (bParam1)
			{
				return "WTU_MKPISTOL";
			}
			else
			{
				return "WT_MKPISTOL";
			}
			break;
		
		case joaat("weapon_bullpuprifle"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE";
			}
			else
			{
				return "WT_BULLRIFLE";
			}
			break;
		
		case joaat("weapon_machete"):
			if (bParam1)
			{
				return "WTU_MACHETE";
			}
			else
			{
				return "WT_MACHETE";
			}
			break;
		
		case joaat("weapon_machinepistol"):
			if (bParam1)
			{
				return "WTU_MCHPIST";
			}
			else
			{
				return "WT_MCHPIST";
			}
			break;
		
		case joaat("weapon_flashlight"):
			if (bParam1)
			{
				return "WTU_FLASHLIGHT";
			}
			else
			{
				return "WT_FLASHLIGHT";
			}
			break;
		
		case joaat("weapon_dbshotgun"):
			if (bParam1)
			{
				return "WTU_DBSHGN";
			}
			else
			{
				return "WT_DBSHGN";
			}
			break;
		
		case joaat("weapon_compactrifle"):
			if (bParam1)
			{
				return "WTU_CMPRIFLE";
			}
			else
			{
				return "WT_CMPRIFLE";
			}
			break;
		
		case joaat("weapon_switchblade"):
			if (bParam1)
			{
				return "WTU_SWBLADE";
			}
			else
			{
				return "WT_SWBLADE";
			}
			break;
		
		case joaat("weapon_revolver"):
			if (bParam1)
			{
				return "WTU_REVOLVER";
			}
			else
			{
				return "WT_REVOLVER";
			}
			break;
		
		case 317205821:
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case 3441901897:
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case 125959754:
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case 3173288789:
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case 3125143736:
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case 2484171525:
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case 419712736:
			if (bParam1)
			{
				return "WTU_WRENCH";
			}
			else
			{
				return "WT_WRENCH";
			}
			break;
		
		case joaat("weapon_cougar"):
			return "WT_RAGE";
			break;
		
		case 4135006721:
			return "WT_VEH_WEP";
			break;
		
		case 3219281620:
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case 2024373456:
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case 177293209:
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case 3686625920:
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case 961495388:
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case 4208062921:
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case 1432025498:
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case 2526821735:
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case 2285322324:
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case 1785463520:
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case 3415619887:
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case 2228681469:
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case 2548703416:
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case 940833800:
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case 2939590305:
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case 1198256469:
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case 3056410471:
			if (bParam1)
			{
				return "WTU_RAYMINIGUN";
			}
			else
			{
				return "WT_RAYMINIGUN";
			}
			break;
		
		default:
			if (func_107(iParam0, &Var0) != 4294967295)
			{
				if (bParam1)
				{
					return func_106(&(Var0.f_1F));
				}
				else
				{
					return func_106(&(Var0.f_7));
				}
			}
			break;
	}
	return "WT_INVALID";
}

var func_106(var uParam0)//Position - 0x95E4
{
	return uParam0;
}

int func_107(int iParam0, var uParam1)//Position - 0x95EE
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

int func_108(int iParam0)//Position - 0x9629
{
	if (iParam0 == 600)
	{
		return joaat("weapon_railgun");
	}
	else if (iParam0 == 500)
	{
		return joaat("weapon_minigun");
	}
	else if (iParam0 == 400)
	{
		return joaat("weapon_mg");
	}
	else if (iParam0 == 401)
	{
		return joaat("weapon_combatmg");
	}
	else if (iParam0 == 402)
	{
		return 3722617468;
	}
	else if (iParam0 == 300)
	{
		return joaat("weapon_assaultrifle");
	}
	else if (iParam0 == 301)
	{
		return joaat("weapon_carbinerifle");
	}
	else if (iParam0 == 302)
	{
		return joaat("weapon_advancedrifle");
	}
	else if (iParam0 == 303)
	{
		return 3347935668;
	}
	else if (iParam0 == 200)
	{
		return joaat("weapon_pumpshotgun");
	}
	else if (iParam0 == 201)
	{
		return joaat("weapon_sawnoffshotgun");
	}
	else if (iParam0 == 202)
	{
		return joaat("weapon_assaultshotgun");
	}
	else if (iParam0 == 203)
	{
		return joaat("weapon_bullpupshotgun");
	}
	else if (iParam0 == 100)
	{
		return joaat("weapon_microsmg");
	}
	else if (iParam0 == 101)
	{
		return joaat("weapon_smg");
	}
	else if (iParam0 == 102)
	{
		return joaat("weapon_assaultsmg");
	}
	else if (iParam0 == 0)
	{
		return joaat("weapon_pistol");
	}
	else if (iParam0 == 1)
	{
		return joaat("weapon_combatpistol");
	}
	else if (iParam0 == 2)
	{
		return joaat("weapon_appistol");
	}
	else if (iParam0 == 3)
	{
		return joaat("weapon_pistol50");
	}
	return 0;
}

void func_109(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, char* sParam5)//Position - 0x979C
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	if (iParam3 > 0)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam4);
	GRAPHICS::_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(sParam5);
}

int func_110(var uParam0, var uParam1)//Position - 0x97EE
{
	if (!func_111(*uParam0))
	{
		return 0;
	}
	if (!func_111(*uParam1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)//Position - 0x9828
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_112(var uParam0, var uParam1)//Position - 0x9838
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar3;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 5) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_4B != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_4B != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_4B < (uParam1[iVar0 /*100*/])->f_4B)
						{
							uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
							(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
							(uParam1[iVar0 /*100*/])->f_4B = uVar3;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_4B == (uParam1[iVar0 /*100*/])->f_4B)
						{
							if ((uParam1[iVar1 /*100*/])->f_3B != 4294967295)
							{
								if ((uParam1[iVar1 /*100*/])->f_3B < (uParam1[iVar0 /*100*/])->f_3B || (uParam1[iVar0 /*100*/])->f_3B == 4294967295)
								{
									uVar3 = (uParam1[iVar1 /*100*/])->f_4B;
									(uParam1[iVar1 /*100*/])->f_4B = (uParam1[iVar0 /*100*/])->f_4B;
									(uParam1[iVar0 /*100*/])->f_4B = uVar3;
									Var2 = { *(uParam1[iVar1 /*100*/]) };
									*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
									*(uParam1[iVar0 /*100*/]) = { Var2 };
								}
							}
						}
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_113(var uParam0, var uParam1)//Position - 0x99A9
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 5) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_116(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_116(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_116(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_4B = 3;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			iVar4++;
		}
	}
	else
	{
		func_114(uParam1);
	}
}

void func_114(var uParam0)//Position - 0x9A5E
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar4;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C0180.f_A90[iVar0] = 0;
		Global_1C0180.f_AD7[iVar0] = 4294967295;
		iVar0++;
	}
	Var3 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0180.f_B0A))
	{
		iVar4 = STATS::_0x58A651CD201D89AD(Global_1C0180.f_B0A);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar4)
		{
			if (iVar0 < 12)
			{
				func_115(&Global_1C11E9);
				iVar2 = 0;
				STATS::LEADERBOARDS_GET_CACHE_DATA_ROW(Global_1C0180.f_B0A, iVar0, &Global_1C11E9);
				*(uParam0[iVar0 /*100*/]) = { Global_1C11E9.f_1 };
				(uParam0[iVar0 /*100*/])->f_10 = { Global_1C11E9.f_11 };
				(uParam0[iVar0 /*100*/])->f_20 = { Global_1C11E9.f_21 };
				(uParam0[iVar0 /*100*/])->f_2D = { Global_1C11E9.f_2E };
				(uParam0[iVar0 /*100*/])->f_3A = Global_1C11E9.f_3B;
				(uParam0[iVar0 /*100*/])->f_3B = Global_1C11E9.f_3C;
				Global_1C0180.f_A94 = Global_1C11E9.f_3E;
				Global_1C0180.f_AD1 = Global_1C11E9.f_3F;
				iVar2 = 0;
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3D, 1))
				{
					iVar2 = 1;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3D, 2))
				{
					iVar2 = 2;
				}
				else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3D, 3))
				{
					iVar2 = 3;
				}
				Global_1C0180.f_A90[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_4B = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_3B != 4294967295)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3D, 0))
					{
						(uParam0[iVar0 /*100*/])->f_4A = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_4A = 0;
					}
					if (func_110(&((uParam0[iVar0 /*100*/])->f_20), &Var3))
					{
						Global_1C0180.f_AD7[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1C11E9.f_3E)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3F, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_43[iVar1] = Global_1C11E9.f_61[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_3C[iVar1] = Global_1C11E9.f_40[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_115(var uParam0)//Position - 0x9C7E
{
	struct<13> Var0;
	int iVar1;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_11), "", 64);
	uParam0->f_21 = { Var0 };
	uParam0->f_2E = { Var0 };
	uParam0->f_3B = 0;
	uParam0->f_3C = 0;
	uParam0->f_3D = 0;
	uParam0->f_3E = 0;
	uParam0->f_3F = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		uParam0->f_40[iVar1] = 0f;
		uParam0->f_61[iVar1] = 0;
		iVar1++;
	}
}

int func_116(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0x9CF2
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1C0180[iParam3 /*901*/][0 /*75*/].f_3B > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][0 /*75*/] };
			Global_1C11B0[iParam3 /*16*/] = { Global_1C0180[iParam3 /*901*/][0 /*75*/] };
			Global_1C11B0.f_31[iParam3] = Global_1C0180[iParam3 /*901*/][0 /*75*/].f_43[Global_1C0180.f_ADB];
			Global_1C11B0.f_35[iParam3] = Global_1C0180[iParam3 /*901*/][0 /*75*/].f_3C[Global_1C0180.f_ADB];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1C0180.f_AD7[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][Global_1C0180.f_AD7[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1C0180.f_AD7[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), 64);
				(uParam0[iParam1 /*100*/])->f_20 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
				(uParam0[iParam1 /*100*/])->f_3B = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[0] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[1] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[2] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_43[3] = 4294967295;
				(uParam0[iParam1 /*100*/])->f_3C[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_3C[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1C0180.f_AD7[iParam3] - iVar0) >= 1)
		{
			if (Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] - iVar0) /*75*/].f_3B > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT((*uParam2 / 2)));
		if ((Global_1C0180.f_AD7[iParam3] + iVar0) < 12 && (Global_1C0180.f_AD7[iParam3] + iVar0) > 0)
		{
			if (Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] + iVar0) /*75*/].f_3B > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1C0180[iParam3 /*901*/][(Global_1C0180.f_AD7[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_117(var uParam0)//Position - 0x9F9B
{
	struct<13> Var0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < 12)
	{
		StringCopy(uParam0[iVar1 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar1 /*100*/])->f_10), "", 64);
		(uParam0[iVar1 /*100*/])->f_20 = { Var0 };
		(uParam0[iVar1 /*100*/])->f_2D = { Var0 };
		(uParam0[iVar1 /*100*/])->f_3A = 0;
		(uParam0[iVar1 /*100*/])->f_3B = 0;
		iVar2 = 0;
		while (iVar2 < 6)
		{
			(uParam0[iVar1 /*100*/])->f_3C[iVar2] = 0f;
			(uParam0[iVar1 /*100*/])->f_43[iVar2] = 0;
			iVar2++;
		}
		(uParam0[iVar1 /*100*/])->f_4B = 0;
		(uParam0[iVar1 /*100*/])->f_4A = 0;
		(uParam0[iVar1 /*100*/])->f_4C = 0;
		(uParam0[iVar1 /*100*/])->f_4D = 0;
		(uParam0[iVar1 /*100*/])->f_4E = 0;
		(uParam0[iVar1 /*100*/])->f_4F = 0;
		StringCopy(&((uParam0[iVar1 /*100*/])->f_50), "", 16);
		iVar1++;
	}
	func_88(&(Global_1C0180.f_B0E));
}

void func_118(int iParam0, int iParam1, int iParam2, char* sParam3)//Position - 0xA07A
{
	MISC::SET_BIT(&iParam2, 7);
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam3);
	GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_119(var uParam0)//Position - 0xA0AE
{
	if (!Global_1C017C)
	{
		if (!func_79(&(Global_1C0180.f_B0B)))
		{
			func_78(&(Global_1C0180.f_B0B), 1, 0);
			return 0;
		}
		else if (!func_77(&(Global_1C0180.f_B0B), 1000, 1))
		{
			return 0;
		}
	}
	if (((!NETWORK::_NETWORK_ARE_ROS_AVAILABLE() || !PLAYER::IS_PLAYER_ONLINE()) || (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() && NETWORK::_0x1353F87E89946207())) || Global_1C0180.f_B10 != 0)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_2A), 4);
		return 1;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 4))
	{
		func_154(uParam0);
		MISC::SET_BIT(&(uParam0->f_2A), 4);
		return 0;
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 5))
	{
		(*uParam0)[0] = 2;
		(*uParam0)[1] = 1;
		(*uParam0)[2] = 3;
		return 1;
	}
	if (!func_152(uParam0))
	{
		return 0;
	}
	if (!func_150(uParam0))
	{
		return 0;
	}
	if (!func_136(uParam0))
	{
		return 0;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 6))
	{
		func_117(&Global_1C126B);
		func_113(uParam0, &Global_1C126B);
		func_112(uParam0, &Global_1C126B);
		MISC::SET_BIT(&(uParam0->f_2A), 6);
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2A, 7))
	{
		if (!func_79(&(Global_1C0180.f_B0E)))
		{
			func_78(&(Global_1C0180.f_B0E), 1, 0);
		}
		else if (func_77(&(Global_1C0180.f_B0E), 30000, 1))
		{
			MISC::SET_BIT(&(uParam0->f_2A), 7);
		}
		if (func_133(&Global_1C126B))
		{
		}
		else
		{
			return 0;
		}
		if (func_130(&Global_1C126B))
		{
		}
		else
		{
			return 0;
		}
		if (func_124(&Global_1C126B))
		{
			func_120(&Global_1C126B);
			MISC::SET_BIT(&(uParam0->f_2A), 7);
			func_120(&Global_1C126B);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_120(var uParam0)//Position - 0xA273
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_123(Global_1C0180.f_B0A);
	if (Global_1C0DF1.f_51[iVar2] != 0)
	{
		func_122(4294967295, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_115(&Global_1C11E9);
		if ((uParam0[iVar0 /*100*/])->f_4B != 0)
		{
			Global_1C11E9 = Global_1C0180.f_B0A;
			Global_1C11E9.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_10), ""))
			{
				Global_1C11E9.f_11 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1C11E9.f_11 = { (uParam0[iVar0 /*100*/])->f_10 };
			}
			Global_1C11E9.f_21 = { (uParam0[iVar0 /*100*/])->f_20 };
			if (func_111((uParam0[iVar0 /*100*/])->f_2D))
			{
				Global_1C11E9.f_2E = { (uParam0[iVar0 /*100*/])->f_2D };
			}
			else
			{
				Global_1C11E9.f_2E = { (uParam0[iVar0 /*100*/])->f_20 };
			}
			Global_1C11E9.f_3B = (uParam0[iVar0 /*100*/])->f_3A;
			Global_1C11E9.f_3C = (uParam0[iVar0 /*100*/])->f_3B;
			Global_1C11E9.f_3E = Global_1C0180.f_A94;
			Global_1C11E9.f_3F = Global_1C0180.f_AD2;
			if ((uParam0[iVar0 /*100*/])->f_4A)
			{
				MISC::SET_BIT(&(Global_1C11E9.f_3D), 0);
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C11E9.f_3D), 0);
			}
			MISC::SET_BIT(&(Global_1C11E9.f_3D), (uParam0[iVar0 /*100*/])->f_4B);
			iVar1 = 0;
			while (iVar1 < Global_1C11E9.f_3E)
			{
				if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C11E9.f_3F, iVar1))
				{
					Global_1C11E9.f_61[iVar1] = (uParam0[iVar0 /*100*/])->f_43[iVar1];
				}
				else
				{
					Global_1C11E9.f_40[iVar1] = (uParam0[iVar0 /*100*/])->f_3C[iVar1];
				}
				iVar1++;
			}
			Global_1C0DF1.f_51[iVar2] = Global_1C0180.f_B0A;
			STATS::LEADERBOARDS_CACHE_DATA_ROW(&Global_1C11E9);
		}
		iVar0++;
	}
	Global_1C0DF1.f_57[iVar2 /*3*/] = { func_121(CAM::_0xDC9DA9E8789F5246()) };
}

Vector3 func_121(int iParam0)//Position - 0xA45C
{
	return unk_0x8000C77B5F336760(PLAYER::GET_PLAYER_PED(iParam0), 0);
}

void func_122(int iParam0, int iParam1)//Position - 0xA46F
{
	int iVar0;
	
	if (iParam1 != 4294967295)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0DF1.f_51[iParam1]))
		{
			STATS::_0x8EC74CEB042E7CFF(Global_1C0DF1.f_51[iParam1]);
		}
		Global_1C0DF1.f_51[iParam1] = 0;
	}
	else if (iParam0 != 4294967295)
	{
		if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			STATS::_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1C0DF1.f_51[iVar0] == iParam0)
			{
				Global_1C0DF1.f_51[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_123(int iParam0)//Position - 0xA4EB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DF1.f_51[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1C0DF1.f_51[iVar0] == 0)
		{
			return iVar0;
		}
		else if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0DF1.f_51[iVar0]))
		{
			iVar3 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1C0DF1.f_51[iVar0]);
			if (iVar3 > iVar2)
			{
				iVar1 = iVar0;
				iVar2 = iVar3;
			}
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

int func_124(var uParam0)//Position - 0xA57E
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_4C)
	{
		case 0:
			func_128(uParam0);
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				(uParam0[0 /*100*/])->f_4C = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_111((uParam0[iVar0 /*100*/])->f_20))
				{
					if (!func_127(&((uParam0[iVar0 /*100*/])->f_20), &Global_1C177E))
					{
						Global_1C177E[Global_1C177E.f_CE /*13*/] = { (uParam0[iVar0 /*100*/])->f_20 };
						Global_1C177E.f_CE++;
					}
				}
				iVar0++;
			}
			if (Global_1C177E.f_CE > 0)
			{
				(uParam0[0 /*100*/])->f_4C = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4C = 3;
			}
			break;
		
		case 1:
			if (func_125(&((uParam0[1 /*100*/])->f_4C), &(Global_1C177E.f_CE), &Global_1C177E, &(Global_1C177E.f_9D)))
			{
				(uParam0[0 /*100*/])->f_4C = 2;
			}
			break;
		
		case 2:
			if (Global_1C177E.f_CE > 12)
			{
				Global_1C177E.f_CE = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1C177E.f_CE)
				{
					if (func_111((uParam0[iVar0 /*100*/])->f_20) && func_111(Global_1C177E[iVar1 /*13*/]))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_20), &(Global_1C177E[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_50 = { Global_1C177E.f_9D[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_4C = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_125(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xA721
{
	var uVar0;
	int iVar1;
	
	switch (*uParam0)
	{
		case 0:
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
				{
					*uParam0 = 2;
				}
				else
				{
					*uParam0 = 3;
				}
			}
			break;
		
		case 2:
			iVar1 = 0;
			while (iVar1 < *uParam1)
			{
				if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar1 /*13*/], &uVar0))
				{
					func_126(&uVar0, uParam3[iVar1 /*4*/]);
				}
				iVar1++;
			}
			if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_126(var uParam0, char* sParam1)//Position - 0xA7DA
{
	NETWORK::_0xF45352426FF3A4F0(uParam0, 35, sParam1);
}

int func_127(var uParam0, var uParam1)//Position - 0xA7EC
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_111(*(uParam1[iVar0 /*13*/])))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_128(var uParam0)//Position - 0xA82B
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_129(&(Global_1C177E[iVar0 /*13*/]));
		StringCopy(&(Global_1C177E.f_9D[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_4C > 0)
	{
		(uParam0[0 /*100*/])->f_4C = 0;
		(uParam0[1 /*100*/])->f_4C = 0;
		if (!NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK::NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_1C177E.f_CE = 0;
}

void func_129(var uParam0)//Position - 0xA89B
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

int func_130(var uParam0)//Position - 0xA8E3
{
	int iVar0;
	
	if (MISC::IS_PC_VERSION())
	{
		return 1;
	}
	else if (MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		if (!func_132(uParam0))
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_131(&((uParam0[iVar0 /*100*/])->f_4E), &((uParam0[iVar0 /*100*/])->f_20), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_131(var uParam0, var uParam1, char* sParam2)//Position - 0xA951
{
	if (*uParam0 == 2)
	{
		return 1;
	}
	switch (*uParam0)
	{
		case 0:
			if (func_111(*uParam1))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (MISC::IS_XBOX360_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (MISC::IS_ORBIS_VERSION())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_132(var uParam0)//Position - 0xAA62
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!MISC::IS_DURANGO_VERSION() && !MISC::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_4E == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_4E)
	{
		case 0:
			Global_1C0180.f_C6F = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1C0180.f_B11[iVar1 /*16*/]), "", 64);
				func_129(&(Global_1C0180.f_BD2[iVar1 /*13*/]));
				if (func_111((uParam0[iVar1 /*100*/])->f_20))
				{
					Global_1C0180.f_BD2[Global_1C0180.f_C6F /*13*/] = { (uParam0[iVar1 /*100*/])->f_20 };
					Global_1C0180.f_C6F++;
				}
				iVar1++;
			}
			if (Global_1C0180.f_C6F > 0)
			{
				(uParam0[0 /*100*/])->f_4F = NETWORK::_0xD66C9E72B3CC4982(&(Global_1C0180.f_BD2), Global_1C0180.f_C6F);
				(uParam0[0 /*100*/])->f_4E = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197((uParam0[0 /*100*/])->f_4F, &(Global_1C0180.f_B11), Global_1C0180.f_C6F);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_111((uParam0[iVar1 /*100*/])->f_20))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1C0180.f_B11[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else if (iVar0 == 4294967295)
			{
				(uParam0[0 /*100*/])->f_4E = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_4F = 4294967295;
			return 1;
			break;
	}
	return 0;
}

int func_133(var uParam0)//Position - 0xABF7
{
	int iVar0;
	
	if (MISC::IS_DURANGO_VERSION() || MISC::IS_ORBIS_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_135(&((uParam0[iVar0 /*100*/])->f_4D), &((uParam0[iVar0 /*100*/])->f_10), &((uParam0[iVar0 /*100*/])->f_54), &(Global_1C0180.f_B11), &((uParam0[iVar0 /*100*/])->f_4F)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_134(&((uParam0[iVar0 /*100*/])->f_4D), (uParam0[iVar0 /*100*/])->f_10, &((uParam0[iVar0 /*100*/])->f_54)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_134(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)//Position - 0xAC94
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_111(Var0))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if ((MISC::IS_XBOX360_VERSION() || MISC::IS_DURANGO_VERSION()) || MISC::IS_ORBIS_VERSION())
					{
						if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (MISC::IS_PS3_VERSION())
						{
						}
						else if (MISC::IS_ORBIS_VERSION())
						{
						}
						else if (MISC::IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK::NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK::NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_135(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)//Position - 0xADB6
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!MISC::IS_DURANGO_VERSION() && !MISC::IS_ORBIS_VERSION())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK::NETWORK_HANDLE_FROM_USER_ID(sParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_111(Var1[0 /*13*/]))
			{
				if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/])))
				{
					*uParam4 = NETWORK::_0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = NETWORK::_0x58CC181719256197(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == 4294967295)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = 4294967295;
			return 1;
			break;
	}
	return 0;
}

int func_136(var uParam0)//Position - 0xAEBB
{
	struct<97> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	int iVar11;
	struct<13> Var12;
	
	Var0.f_13.f_1 = 4;
	iVar5 = 4294967295;
	iVar9 = 2;
	Var12 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
	switch ((*uParam0)[iVar9])
	{
		case 0:
			Global_1C0180.f_AD7[iVar9] = 4294967295;
			Global_1C0180.f_A90[iVar9] = 0;
			Global_1C0005.f_176 = 4294967295;
			if (GRAPHICS::_DRAW_SHOWROOM())
			{
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var12))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var12))
					{
						uParam0->f_2C.f_2 = uParam0->f_7;
						uParam0->f_2C.f_1 = 3;
						(*uParam0)[iVar9] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar9] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar9] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var12, func_149(), 0, 0, 0))
			{
				func_147(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar7 = 0;
						iVar2 = 0;
						if (func_149())
						{
							iVar7 = 0;
							while (iVar7 < Var1.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_110(&Var0, &Var12) || func_110(&Var0, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var0.f_60;
									}
								}
								if (iVar5 < 0)
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar7, 0))
										{
											iVar5 = iVar7;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar7, 0))
									{
										iVar5 = iVar7;
									}
								}
								func_146(&Var0);
								iVar7++;
							}
							if (iVar5 < 0)
							{
								iVar5 = Var1.f_3;
							}
						}
						iVar7 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_60 <= 1)
						{
							if (Global_1C0180.f_A90[iVar9] < 12)
							{
								if (func_149() && iVar5 == 0)
								{
									func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
									Global_1C0180.f_AD7[iVar9] = 0;
									Global_1C0180.f_A90[iVar9]++;
								}
								if (func_149() && (func_110(&Var0, &Var12) || func_110(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_110(&Var0, &Var12))
									{
										iVar5 = 0;
										Global_1C0180.f_AD7[iVar9] = 0;
									}
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									if (func_144(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_159(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C0180.f_A90[iVar9]++;
								}
								bVar8 = true;
							}
						}
						if (!bVar8)
						{
							Global_1C0180.f_A90[iVar9]++;
						}
						if (!func_149())
						{
							iVar5 = Var1.f_5;
						}
						if (iVar5 > 6)
						{
							iVar6 = (iVar5 - 6);
						}
						else if (bVar8)
						{
							iVar6 = 1;
						}
						else
						{
							iVar6 = 0;
						}
						iVar7 = iVar6;
						func_146(&Var0);
						iVar7 = iVar6;
						while (iVar7 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar7, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_149() && iVar5 == iVar7)
								{
									if (!func_110(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20), &Var12))
									{
										func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_149() && (func_110(&Var0, &Var12) || func_110(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar9] < 12)
								{
									if (func_111(Var0) && !func_110(&Var0, &(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_110(&Var0, &Var12))
										{
											if (Global_1C0180.f_AD7[iVar9] < 0)
											{
												Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
											}
										}
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
										Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
										if (func_144(uParam0->f_2C))
										{
											iVar4 = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1C0180.f_A95);
											if (iVar4 == 1)
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
											}
										}
										if (func_159(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										iVar2 = 0;
										while (iVar2 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar7, Global_1C0180.f_A96[iVar2]);
											}
											else
											{
												Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(iVar7, Global_1C0180.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C0180.f_A90[iVar9]++;
									}
								}
							}
							func_146(&Var0);
							iVar7++;
						}
						STATS::_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar8)
						{
							if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_149())
							{
								if (Global_1C0180.f_A90[iVar9] >= 1)
								{
									func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[iVar9] = 3;
						}
						else
						{
							(*uParam0)[iVar9] = 2;
						}
					}
					else
					{
						if (!bVar8)
						{
							Global_1C0180.f_A90[iVar9]++;
						}
						STATS::_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar9] = 4294967295;
						(*uParam0)[iVar9] = 2;
					}
				}
				else
				{
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_AD7[iVar9] = 4294967295;
					(*uParam0)[iVar9] = 2;
					MISC::SET_BIT(&(Global_1C0180.f_B10), iVar9);
				}
			}
			break;
		
		case 2:
			if (Global_1C0180.f_AD7[iVar9] == 4294967295)
			{
				iVar11 = 11;
			}
			else
			{
				iVar11 = 1;
			}
			uParam0->f_2C.f_1 = 3;
			Var1 = uParam0->f_2C;
			Var1.f_1 = uParam0->f_2C.f_1;
			if (func_138(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar11))
			{
				func_147(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						iVar2 = 0;
						while (iVar2 < Var1.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar2, &Var0);
							bVar10 = false;
							if (Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B > 1 || Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B <= 0)
							{
								bVar10 = true;
							}
							if (Global_1C0180.f_A90[iVar9] < 12 || bVar10)
							{
								if (func_149() && (func_110(&Var0, &Var12) || func_110(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (iVar2 == 0 || bVar10)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][0 /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20 = { Var0 };
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3B = Var0.f_60;
									if (func_144(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3A = 0;
										}
									}
									if (func_159(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][0 /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][0 /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (Global_1C0180.f_A90[iVar9] == 0)
									{
										if (bVar10)
										{
										}
										else
										{
											Global_1C0180.f_A90[iVar9]++;
										}
									}
								}
								else if (Global_1C0180.f_A90[iVar9] < 12)
								{
									MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
									if (func_144(uParam0->f_2C))
									{
										iVar4 = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1C0180.f_A95);
										if (iVar4 == 1)
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
										}
									}
									if (func_159(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = Var0.f_60;
									Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
									iVar3 = 0;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar2, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(iVar2, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									if (iVar2 != 0)
									{
										Global_1C0180.f_A90[iVar9]++;
									}
								}
							}
							func_146(&Var0);
							iVar2++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar9] = 3;
				}
				else
				{
					STATS::_0x71B008056E5692D6();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					MISC::SET_BIT(&(Global_1C0180.f_B10), iVar9);
					Global_1C0180.f_A90[iVar9] = 0;
					(*uParam0)[iVar9] = 3;
				}
				if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_149())
				{
					if (Global_1C0180.f_A90[iVar9] >= 1)
					{
						func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
					}
					else
					{
						func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
					}
					Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
					Global_1C0180.f_A90[iVar9]++;
				}
			}
			break;
		
		case 3:
			func_137(iVar9, Global_1C0005.f_176);
			(*uParam0)[iVar9] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_137(int iParam0, int iParam1)//Position - 0xBCEE
{
	int iVar0;
	
	if ((func_149() && Global_1C0180.f_A90[iParam0] > Global_1C0180.f_AD7[iParam0]) && Global_1C0180.f_AD7[iParam0] >= 0)
	{
		if (iParam1 != Global_1C0180[iParam0 /*901*/][Global_1C0180.f_AD7[iParam0] /*75*/].f_3B)
		{
			iVar0 = 0;
			while (iVar0 < Global_1C0180.f_A90[iParam0])
			{
				if (iVar0 != Global_1C0180.f_AD7[iParam0])
				{
					if (Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B >= Global_1C0180[iParam0 /*901*/][Global_1C0180.f_AD7[iParam0] /*75*/].f_3B)
					{
						if (Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B < iParam1 || iParam1 == 4294967295)
						{
							Global_1C0180[iParam0 /*901*/][iVar0 /*75*/].f_3B++;
						}
					}
				}
				iVar0++;
			}
		}
	}
	else
	{
		if (!func_149())
		{
		}
		if (Global_1C0180.f_A90[iParam0] <= Global_1C0180.f_AD7[iParam0])
		{
		}
		if (Global_1C0180.f_AD7[iParam0] < 0)
		{
		}
	}
}

int func_138(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0xBE13
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_139(struct<2> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67)//Position - 0xBEC9
{
	Global_1C0000 = 1;
	func_170(&(Global_1C0000.f_1), 1, 0);
	Global_1C0000.f_3 = Param0;
	Global_1C0000.f_4 = Param0.f_1;
}

int func_140()//Position - 0xBEF4
{
	if (HUD::IS_PAUSE_MENU_ACTIVE() && !func_162())
	{
		return 1;
	}
	return 0;
}

int func_141()//Position - 0xBF12
{
	if (STATS::_0xA31FD15197B192BD() || Global_1C0000)
	{
		func_142();
		return 1;
	}
	return 0;
}

void func_142()//Position - 0xBF34
{
	if (func_77(&(Global_1C0000.f_1), 120000, 1))
	{
		STATS::LEADERBOARDS_READ_CLEAR(Global_1C0000.f_3, Global_1C0000.f_4, 4294967295);
		Global_1C0000 = 0;
		func_88(&(Global_1C0000.f_1));
	}
}

void func_143(var uParam0, var uParam1, var uParam2)//Position - 0xBF6F
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1C0000 = 0;
	func_88(&(Global_1C0000.f_1));
	STATS::LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, 4294967295);
}

int func_144(int iParam0)//Position - 0xBF9B
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_145(var uParam0, char* sParam1, int iParam2)//Position - 0xBFF9
{
	int iVar0;
	int iVar1;
	
	if (func_159(uParam0->f_2C))
	{
		MemCopy(sParam1, {Global_1C0005.f_163}, 16);
		sParam1->f_20 = { Global_1C0005.f_169 };
		MemCopy(&(sParam1->f_10), {Global_1C0005.f_15D}, 16);
	}
	else
	{
		StringCopy(sParam1, PLAYER::GET_PLAYER_NAME(CAM::_0xDC9DA9E8789F5246()), 64);
		sParam1->f_20 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
	}
	sParam1->f_3B = iParam2;
	if (func_144(uParam0->f_2C))
	{
		iVar0 = Global_1C0005.f_D3.f_24[Global_1C0180.f_A95];
		if (iVar0 == 1)
		{
			sParam1->f_3A = 1;
		}
		else
		{
			sParam1->f_3A = 0;
		}
	}
	sParam1->f_4A = 1;
	iVar1 = 0;
	while (iVar1 < Global_1C0180.f_A94)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, Global_1C0180.f_A96[iVar1]))
		{
			sParam1->f_43[iVar1] = Global_1C0005.f_D3.f_24[Global_1C0180.f_A96[iVar1]];
		}
		else
		{
			sParam1->f_3C[iVar1] = Global_1C0005.f_D3.f_3[Global_1C0180.f_A96[iVar1]];
		}
		iVar1++;
	}
}

void func_146(var uParam0)//Position - 0xC108
{
	int iVar0;
	
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
	StringCopy(&(uParam0->f_D), "", 24);
	uParam0->f_13 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_13.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_55 = 0;
	StringCopy(&(uParam0->f_56), "", 32);
	StringCopy(&(uParam0->f_5E), "", 8);
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
}

void func_147(var uParam0, var uParam1)//Position - 0xC1B1
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_148(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)//Position - 0xC1CC
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1C0005.f_D3.f_24[0];
	uVar1 = Global_1C0005.f_D3.f_3[0];
	if (bParam6)
	{
		uVar0 = iParam7;
		uVar1 = iParam8;
	}
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (bParam5)
				{
					if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, 0))
					{
						if (STATS::LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (STATS::LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (STATS::LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_149()//Position - 0xC304
{
	if (Global_1C017C && Global_1C017D)
	{
		return 1;
	}
	return 0;
}

int func_150(var uParam0)//Position - 0xC321
{
	struct<20> Var0;
	struct<6> Var1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<13> Var10;
	
	Var0.f_13.f_1 = 4;
	iVar4 = 4294967295;
	iVar9 = 1;
	Var10 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar3 = NETWORK::NETWORK_GET_FRIEND_COUNT();
			Global_1C0180.f_AD7[1] = 4294967295;
			Global_1C0005.f_176 = 4294967295;
			Global_1C0180.f_A90[iVar9] = 0;
			if (iVar3 > 0)
			{
				if (func_149())
				{
					iVar8 = 0;
				}
				else
				{
					iVar8 = 1;
				}
				if (func_151(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &(uParam0->f_71), uParam0->f_71[0 /*66*/], iVar8, 0, 100))
				{
					func_147(&Var1, &(uParam0->f_2C));
					if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
					{
						if (func_149())
						{
							iVar6 = 0;
							iVar6 = 0;
							while (iVar6 < Var1.f_3)
							{
								if (iVar4 < 0)
								{
									STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
									if (func_159(uParam0->f_2C))
									{
										if (Global_1C0005.f_176 < 0)
										{
											if (func_110(&Var0, &(Global_1C0005.f_169)))
											{
												Global_1C0005.f_176 = Var0.f_60;
											}
										}
									}
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar6, 0))
										{
											iVar4 = iVar6;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar6, 0))
									{
										iVar4 = iVar6;
									}
									func_146(&Var0);
								}
								iVar6++;
							}
							if (iVar4 < 0)
							{
								iVar4 = Var1.f_3;
							}
						}
						iVar6 = 0;
						if (func_149() && iVar4 == 0)
						{
							if (Global_1C0180.f_A90[iVar9] < 12)
							{
								func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								Global_1C0180.f_AD7[iVar9] = 0;
								Global_1C0180.f_A90[iVar9]++;
							}
						}
						if (Var1.f_3 > 0)
						{
							STATS::_0x34770B9CE0E03B91(0, &Var0);
							if (func_149() && (func_110(&Var0, &Var10) || func_110(&Var0, &(Global_1C0005.f_169))))
							{
							}
							else if (func_111(Var0) && Global_1C0180.f_A90[iVar9] < 12)
							{
								if (func_110(&Var0, &Var10))
								{
									iVar4 = 0;
									Global_1C0180.f_AD7[1] = 0;
								}
								MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), {Var0.f_D}, 16);
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_20 = { Var0 };
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3B = 1;
								if (func_144(uParam0->f_2C))
								{
									iVar7 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
									if (iVar7 == 1)
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 1;
									}
									else
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3A = 0;
									}
								}
								if (func_159(uParam0->f_2C))
								{
									MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_4A = 1;
								iVar2 = 0;
								while (iVar2 < Global_1C0180.f_A94)
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A96[iVar2]);
									}
									else
									{
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(0, Global_1C0180.f_A96[iVar2]);
									}
									iVar2++;
								}
								Global_1C0180.f_A90[1]++;
							}
							else
							{
								func_146(&Var0);
								STATS::_0x71B008056E5692D6();
								func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
								Global_1C0180.f_A90[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_149())
								{
									if (Global_1C0180.f_A90[iVar9] >= 1)
									{
										func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
									}
									else
									{
										func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
									}
									Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
									Global_1C0180.f_A90[iVar9]++;
								}
								return 0;
							}
							func_146(&Var0);
						}
						else
						{
							Global_1C0180.f_A90[1] = 0;
							func_146(&Var0);
							STATS::_0x71B008056E5692D6();
							func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
							if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_149())
							{
								if (Global_1C0180.f_A90[iVar9] >= 1)
								{
									func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
								Global_1C0180.f_A90[iVar9]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_149())
						{
							iVar4 = Var1.f_5;
						}
						if (iVar4 > 6)
						{
							iVar5 = (iVar4 - 6);
						}
						else
						{
							iVar5 = 1;
						}
						iVar6 = iVar5;
						iVar6 = iVar5;
						while (iVar6 <= (Var1.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar6, &Var0);
							if (Global_1C0180.f_A90[iVar9] < 12 && Var0.f_60 > 1)
							{
								if (func_149() && iVar4 == iVar6)
								{
									if (!func_110(&(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20), &Var10))
									{
										func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Var0.f_60);
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
										Global_1C0180.f_A90[iVar9]++;
									}
								}
								if (func_149() && (func_110(&Var0, &Var10) || func_110(&Var0, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[1] < 12)
								{
									if (func_111(Var0) && !func_110(&Var0, &(Global_1C0180[iVar9 /*901*/][0 /*75*/].f_20)))
									{
										if (func_110(&Var0, &Var10))
										{
											if (Global_1C0180.f_AD7[1] < 0)
											{
												Global_1C0180.f_AD7[1] = Global_1C0180.f_A90[1];
											}
										}
										MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/]), {Var0.f_D}, 16);
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_20 = { Var0 };
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3B = iVar6 + 1;
										Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_4A = 1;
										if (func_144(uParam0->f_2C))
										{
											iVar7 = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1C0180.f_A95);
											if (iVar7 == 1)
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3A = 0;
											}
										}
										if (func_159(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_10), {Var0.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar2 = 0;
										while (iVar2 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_43[iVar2] = STATS::_0x88578F6EC36B4A3A(iVar6, Global_1C0180.f_A96[iVar2]);
											}
											else
											{
												Global_1C0180[1 /*901*/][Global_1C0180.f_A90[1] /*75*/].f_3C[iVar2] = STATS::_0x38491439B6BA7F7D(iVar6, Global_1C0180.f_A96[iVar2]);
											}
											iVar2++;
										}
										Global_1C0180.f_A90[1]++;
									}
								}
							}
							func_146(&Var0);
							iVar6++;
						}
						STATS::_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						(*uParam0)[1] = 1;
						if (Global_1C0180.f_AD7[iVar9] == 4294967295 && func_149())
						{
							if (Global_1C0180.f_A90[iVar9] >= 1)
							{
								func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), Global_1C0180[iVar9 /*901*/][(Global_1C0180.f_A90[iVar9] - 1) /*75*/].f_3B + 1);
							}
							else
							{
								func_145(uParam0, &(Global_1C0180[iVar9 /*901*/][Global_1C0180.f_A90[iVar9] /*75*/]), 1);
							}
							Global_1C0180.f_AD7[iVar9] = Global_1C0180.f_A90[iVar9];
							Global_1C0180.f_A90[iVar9]++;
						}
						return 0;
					}
					else
					{
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_A90[1] = 0;
						(*uParam0)[1] = 1;
						MISC::SET_BIT(&(Global_1C0180.f_B10), 1);
						return 0;
					}
				}
			}
			else
			{
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
				Global_1C0180.f_A90[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_137(iVar9, Global_1C0005.f_176);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)//Position - 0xCD24
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (STATS::LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_152(var uParam0)//Position - 0xCDE0
{
	struct<13> Var0;
	struct<97> Var1;
	struct<6> Var2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	int iVar12;
	
	Var1.f_13.f_1 = 4;
	iVar6 = 4294967295;
	iVar10 = 0;
	Var0 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
	switch ((*uParam0)[iVar10])
	{
		case 0:
			Global_1C0180.f_AD7[iVar10] = 4294967295;
			Global_1C0180.f_A90[iVar10] = 0;
			Global_1C0005.f_176 = 4294967295;
			Global_1C017D = 0;
			if (func_153(uParam0->f_2C))
			{
				if (!Global_1C017D)
				{
					Global_1C017D = 1;
				}
			}
			else if (Global_1C017D)
			{
				Global_1C017D = 0;
			}
			if (!Global_1C017D)
			{
			}
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 11, &Var0, func_149(), 0, 0, 0))
			{
				func_147(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar8 = 0;
						iVar3 = 0;
						if (func_149())
						{
							iVar8 = 0;
							while (iVar8 < Var2.f_3)
							{
								STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
								if (Global_1C0005.f_176 < 0)
								{
									if (func_110(&Var1, &Var0) || func_110(&Var1, &(Global_1C0005.f_169)))
									{
										Global_1C0005.f_176 = Var1.f_60;
									}
								}
								if (iVar6 < 0)
								{
									if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0005.f_8E.f_2, 0))
									{
										if (Global_1C0005.f_D3.f_24[0] >= STATS::_0x88578F6EC36B4A3A(iVar8, 0))
										{
											iVar6 = iVar8;
										}
									}
									else if (Global_1C0005.f_D3.f_3[0] >= STATS::_0x38491439B6BA7F7D(iVar8, 0))
									{
										iVar6 = iVar8;
									}
								}
								func_146(&Var1);
								iVar8++;
							}
							if (iVar6 < 0)
							{
								iVar6 = Var2.f_3;
							}
						}
						iVar8 = 0;
						STATS::_0x34770B9CE0E03B91(0, &Var1);
						if (Var1.f_60 <= 1)
						{
							if (Global_1C0180.f_A90[iVar10] < 12)
							{
								if (func_149() && iVar6 == 0)
								{
									func_145(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
									Global_1C0180.f_AD7[iVar10] = 0;
									Global_1C0180.f_A90[iVar10]++;
								}
								if (func_149() && (func_110(&Var1, &Var0) || func_110(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else
								{
									if (func_110(&Var1, &Var0))
									{
										iVar6 = 0;
										Global_1C0180.f_AD7[iVar10] = 0;
									}
									MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
									if (func_144(uParam0->f_2C))
									{
										iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
										if (iVar5 == 1)
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
										}
										else
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
										}
									}
									if (func_159(uParam0->f_2C))
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
									iVar3 = 0;
									while (iVar3 < Global_1C0180.f_A94)
									{
										if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A96[iVar3]);
										}
										else
										{
											Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(0, Global_1C0180.f_A96[iVar3]);
										}
										iVar3++;
									}
									Global_1C0180.f_A90[iVar10]++;
								}
								bVar9 = true;
							}
						}
						if (!bVar9)
						{
							Global_1C0180.f_A90[iVar10]++;
						}
						if (!func_149())
						{
							iVar6 = Var2.f_5;
						}
						if (iVar6 > 6)
						{
							iVar7 = (iVar6 - 6);
						}
						else if (bVar9)
						{
							iVar7 = 1;
						}
						else
						{
							iVar7 = 0;
						}
						iVar8 = iVar7;
						func_146(&Var1);
						iVar8 = iVar7;
						while (iVar8 <= (Var2.f_3 - 1))
						{
							STATS::_0x34770B9CE0E03B91(iVar8, &Var1);
							if (Global_1C0180.f_A90[iVar10] < 12 && Var1.f_60 > 1)
							{
								if (func_149() && iVar6 == iVar8)
								{
									if (!func_110(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										func_145(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Var1.f_60);
										Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
										Global_1C0180.f_A90[iVar10]++;
									}
								}
								if (func_149() && (func_110(&Var1, &Var0) || func_110(&Var1, &(Global_1C0005.f_169))))
								{
								}
								else if (Global_1C0180.f_A90[iVar10] < 12)
								{
									if (func_111(Var1) && !func_110(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20), &Var1))
									{
										if (func_110(&Var1, &Var0))
										{
											if (Global_1C0180.f_AD7[iVar10] < 0)
											{
												Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
											}
										}
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
										if (func_144(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_159(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										iVar3 = 0;
										iVar3 = 0;
										while (iVar3 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar3]))
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar3] = STATS::_0x88578F6EC36B4A3A(iVar8, Global_1C0180.f_A96[iVar3]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar3] = STATS::_0x38491439B6BA7F7D(iVar8, Global_1C0180.f_A96[iVar3]);
											}
											iVar3++;
										}
										Global_1C0180.f_A90[iVar10]++;
									}
								}
							}
							func_146(&Var1);
							iVar8++;
						}
						STATS::_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						if (bVar9)
						{
							if (Global_1C0180.f_AD7[iVar10] == 4294967295 && func_149())
							{
								if (Global_1C0180.f_A90[iVar10] >= 1)
								{
									func_145(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 1);
								}
								Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
								Global_1C0180.f_A90[iVar10]++;
							}
							(*uParam0)[iVar10] = 2;
						}
						else
						{
							(*uParam0)[iVar10] = 1;
						}
					}
					else
					{
						if (!bVar9)
						{
							Global_1C0180.f_A90[iVar10]++;
						}
						STATS::_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
						Global_1C0180.f_AD7[iVar10] = 4294967295;
						(*uParam0)[iVar10] = 1;
					}
				}
				else
				{
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_AD7[iVar10] = 4294967295;
					(*uParam0)[iVar10] = 1;
					MISC::SET_BIT(&(Global_1C0180.f_B10), iVar10);
				}
			}
			break;
		
		case 1:
			if (Global_1C0180.f_AD7[iVar10] == 4294967295)
			{
				iVar12 = 11;
			}
			else
			{
				iVar12 = 1;
			}
			if (func_138(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, iVar12))
			{
				func_147(&Var2, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var2))
				{
					if (Var2.f_3 > 0)
					{
						iVar3 = 0;
						while (iVar3 < Var2.f_3)
						{
							STATS::_0x34770B9CE0E03B91(iVar3, &Var1);
							if (func_149() && (func_110(&Var1, &Var0) || func_110(&Var1, &(Global_1C0005.f_169))))
							{
							}
							else
							{
								bVar11 = false;
								if (Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B > 1 || Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B <= 0)
								{
									bVar11 = true;
								}
								if (Global_1C0180.f_A90[iVar10] < 12 || bVar11)
								{
									if (iVar3 == 0 || bVar11)
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][0 /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_20 = { Var1 };
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3B = Var1.f_60;
										if (func_144(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(0, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][0 /*75*/].f_3A = 0;
											}
										}
										if (func_159(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][0 /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C0180[iVar10 /*901*/][0 /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar4]))
											{
												Global_1C0180[iVar10 /*901*/][iVar3 /*75*/].f_43[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][iVar3 /*75*/].f_3C[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (Global_1C0180.f_A90[iVar10] == 0)
										{
											if (bVar11)
											{
											}
											else
											{
												Global_1C0180.f_A90[iVar10]++;
											}
										}
										else if (Global_1C0180.f_A90[iVar10] == 1 && Global_1C0180.f_AD7[iVar10] == 4294967295)
										{
											Global_1C0180.f_A90[iVar10]++;
										}
									}
									else if (Global_1C0180.f_A90[iVar10] < 12)
									{
										MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), {Var1.f_D}, 16);
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_20 = { Var1 };
										if (func_144(uParam0->f_2C))
										{
											iVar5 = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C0180.f_A95);
											if (iVar5 == 1)
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 1;
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3A = 0;
											}
										}
										if (func_159(uParam0->f_2C))
										{
											MemCopy(&(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_10), {Var1.f_13.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3B = Var1.f_60;
										Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_4A = 1;
										iVar4 = 0;
										iVar4 = 0;
										while (iVar4 < Global_1C0180.f_A94)
										{
											if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar4]))
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_43[iVar4] = STATS::_0x88578F6EC36B4A3A(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											else
											{
												Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/].f_3C[iVar4] = STATS::_0x38491439B6BA7F7D(iVar3, Global_1C0180.f_A96[iVar4]);
											}
											iVar4++;
										}
										if (iVar3 != 0)
										{
											Global_1C0180.f_A90[iVar10]++;
										}
									}
								}
							}
							func_146(&Var1);
							iVar3++;
						}
					}
					STATS::_0x71B008056E5692D6();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					(*uParam0)[iVar10] = 2;
				}
				else
				{
					MISC::SET_BIT(&(Global_1C0180.f_B10), iVar10);
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
					Global_1C0180.f_A90[iVar10] = 0;
					(*uParam0)[iVar10] = 2;
					Global_1C0180.f_A90[1] = 0;
					(*uParam0)[1] = 1;
					Global_1C0180.f_A90[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1C0180.f_AD7[iVar10] == 4294967295 && func_149())
			{
				if (Global_1C0180.f_A90[iVar10] >= 1)
				{
					func_145(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), Global_1C0180[iVar10 /*901*/][(Global_1C0180.f_A90[iVar10] - 1) /*75*/].f_3B + 1);
				}
				else
				{
					func_145(uParam0, &(Global_1C0180[iVar10 /*901*/][Global_1C0180.f_A90[iVar10] /*75*/]), 1);
				}
				Global_1C0180.f_AD7[iVar10] = Global_1C0180.f_A90[iVar10];
				Global_1C0180.f_A90[iVar10]++;
			}
			break;
		
		case 2:
			func_137(iVar10, Global_1C0005.f_176);
			(*uParam0)[iVar10] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_153(struct<4> Param0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65)//Position - 0xDC1B
{
	int iVar0;
	
	if (Global_1C017C)
	{
		if (Global_1C0005.f_5 != 0)
		{
			if (Global_1C0005.f_5 == Param0)
			{
				if (Global_1C0005.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!MISC::ARE_STRINGS_EQUAL(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !MISC::ARE_STRINGS_EQUAL(&(Global_1C0005.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
						{
							return 0;
						}
						iVar0++;
					}
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_154(var uParam0)//Position - 0xDCB3
{
	int iVar0;
	
	if (STATS::LEADERBOARDS_GET_CACHE_EXISTS(Global_1C0180.f_B0A))
	{
		iVar0 = STATS::LEADERBOARDS_GET_CACHE_TIME(Global_1C0180.f_B0A);
		if (iVar0 < 300000)
		{
			MISC::SET_BIT(&(uParam0->f_2A), 5);
		}
		else
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_2A), 5);
			func_122(Global_1C0180.f_B0A, 4294967295);
		}
	}
}

void func_155(int iParam0)//Position - 0xDD03
{
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iParam0))
	{
		GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iParam0, 255, 255, 255, 0, 0);
	}
}

void func_156(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0xDD23
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var2;
	bool bVar3;
	struct<13> Var4;
	int iVar5;
	struct<13> Var6;
	int iVar7;
	
	sVar0 = "";
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && GRAPHICS::_DRAW_SHOWROOM())
		{
			if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var4 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var4))
				{
					NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var4);
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var2 = { Var1.f_1 };
						bVar3 = true;
					}
					else
					{
						sVar0 = "SCLB_CREW";
					}
				}
				else
				{
					sVar0 = "SCLB_CREW";
				}
			}
		}
		else
		{
			sVar0 = "SCLB_CREW";
		}
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(*iParam1);
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam2);
	if (bVar3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&Var2);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	else
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	*iParam1++;
	if (bParam4)
	{
		iVar5 = 0;
		MISC::SET_BIT(&iVar5, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(*iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar5);
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!NETWORK::_NETWORK_ARE_ROS_AVAILABLE())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1C0180.f_B10 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 5))
		{
			if (NETWORK::NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam2, 6))
		{
			if (NETWORK::_0x67A5589628E0CFF6())
			{
				if (NETWORK::_0xBA9775570DB788CF())
				{
					if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && GRAPHICS::_DRAW_SHOWROOM())
					{
						if (MISC::IS_ORBIS_VERSION() && !NETWORK::_0x72D918C99BCACC54(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var6 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
							if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var6))
							{
								NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var6);
								if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var2 = { Var1.f_1 };
									bVar3 = true;
								}
								else
								{
									sVar0 = "SCLB_NO_CREWc";
								}
							}
							else
							{
								sVar0 = "SCLB_NO_CREWa";
							}
						}
					}
					else
					{
						sVar0 = "SCLB_NO_CREWa";
					}
				}
				else
				{
					sVar0 = "SCLB_NO_CREWe";
				}
			}
			else
			{
				sVar0 = "SCLB_NO_CREWd";
			}
		}
		iVar7 = 0;
		MISC::SET_BIT(&iVar7, 7);
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_SLOT");
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(*iParam1);
		GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iVar7);
		if (bVar3)
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			HUD::_ADD_TEXT_COMPONENT_SCALEFORM(&Var2);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		else
		{
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			GRAPHICS::_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
		*iParam1++;
	}
}

void func_157(int iParam0, char* sParam1, var uParam2, int iParam3)//Position - 0xDFF8
{
	int iVar0;
	
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
		iVar0++;
	}
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_158(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4, int iParam5)//Position - 0xE03A
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_MULTIPLAYER_TITLE");
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
	}
	if (iParam5 == 4294967295)
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::_ADD_TEXT_COMPONENT_SCALEFORM(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				HUD::_ADD_TEXT_COMPONENT_SCALEFORM(sParam3);
			}
		}
		else if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
		{
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam3);
		}
		HUD::ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_159(int iParam0)//Position - 0xE0CA
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_160(int iParam0, int iParam1)//Position - 0xE0EC
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, "SET_DISPLAY_TYPE");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(iParam1);
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

int func_161()//Position - 0xE109
{
	return unk_0x9934FEFB3B8C6DB8("SC_LEADERBOARD");
}

bool func_162()//Position - 0xE119
{
	return func_163(CAM::_0xDC9DA9E8789F5246());
}

int func_163(int iParam0)//Position - 0xE129
{
	switch (func_164(iParam0))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 6:
		case 5:
		case 7:
		case 40:
		case 35:
		case 38:
		case 41:
			return 0;
		
		default:
	}
	return 1;
}

int func_164(int iParam0)//Position - 0xE189
{
	return Global_1841F3[iParam0 /*790*/].f_C4;
}

void func_165(int iParam0)//Position - 0xE19C
{
	Global_141370 = iParam0;
}

void func_166(int iParam0)//Position - 0xE1AA
{
	Global_14E696.f_437 = iParam0;
}

void func_167(bool bParam0)//Position - 0xE1BB
{
	if (bParam0)
	{
		func_169();
	}
	func_168(4, 4294967295);
	func_168(6, 4294967295);
	func_168(7, 4294967295);
	func_168(3, 4294967295);
	func_168(1, 4294967295);
	func_168(2, 4294967295);
	func_168(11, 4294967295);
	func_168(13, 4294967295);
	func_168(14, 4294967295);
	func_168(16, 4294967295);
}

void func_168(int iParam0, int iParam1)//Position - 0xE20C
{
	MISC::SET_BIT(&(Global_14E0B5.f_417), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > 4294967295)
			{
				Global_14E0B5.f_AA[iParam1] = 1;
			}
			break;
	}
}

void func_169()//Position - 0xE242
{
	Global_26862F.f_11A7 = 0;
}

void func_170(var uParam0, bool bParam1, bool bParam2)//Position - 0xE252
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

int func_171(var uParam0, bool bParam1, int iParam2)//Position - 0xE28F
{
	uParam0->f_C = iParam2;
	func_174(uParam0);
	func_173(uParam0);
	if (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_226), "SPR_RESULT") || (MISC::ARE_STRINGS_EQUAL(&(uParam0->f_226), "") && uParam0->f_38 > 0))
	{
		uParam0->f_236 = 1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		unk_0xE2BBD32891C18569("MPHud", false);
	}
	if (uParam0->f_1 == 0)
	{
		unk_0xE2BBD32891C18569("CommonMenu", false);
		unk_0xE2BBD32891C18569("MPLeaderboard", false);
		unk_0xE2BBD32891C18569("MPHud", false);
		uParam0->f_1 = unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			SYSTEM::WAIT(0);
		}
		if (uParam0->f_232 || uParam0->f_237)
		{
			while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				SYSTEM::WAIT(0);
			}
		}
	}
	else
	{
		if (((!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_232)
		{
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_232)
	{
		if (uParam0->f_237)
		{
			func_172(uParam0);
		}
		else if (uParam0->f_38 != 0)
		{
			func_46(uParam0, 1);
		}
		else
		{
			func_46(uParam0, 0);
		}
	}
	Global_1172A = 1;
	return 1;
}

void func_172(var uParam0)//Position - 0xE42E
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	if (MISC::IS_PC_VERSION())
	{
		GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SET_SEETHROUGH(true);
		CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	}
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(2);
	func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, true));
	func_14("ES_HELP_TU");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(1);
	func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, true));
	func_14("ES_HELP_TD");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	GRAPHICS::REMOVE_DECALS_FROM_VEHICLE(0);
	func_9(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, true));
	func_14("ES_HELP_AB");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	CAM::_ENABLE_CROSSHAIR_THIS_FRAME();
}

void func_173(var uParam0)//Position - 0xE4F3
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	HUD::SET_TEXT_JUSTIFICATION(0);
	HUD::SET_TEXT_SCALE(1f, func_60(16f));
	if (uParam0->f_1F == 0)
	{
		if (uParam0->f_1D)
		{
			HUD::_BEGIN_TEXT_COMMAND_WIDTH("STRING");
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_D));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			HUD::_BEGIN_TEXT_COMMAND_WIDTH(&(uParam0->f_D));
			fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		HUD::_BEGIN_TEXT_COMMAND_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_1F)
		{
			switch (uParam0->f_20[iVar3])
			{
				case 0:
					HUD::ADD_TEXT_COMPONENT_INTEGER(uParam0->f_35[iVar1]);
					iVar1++;
					break;
				
				case 1:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_24[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_174(var uParam0)//Position - 0xE5FB
{
	uParam0->f_223 = 1f;
	uParam0->f_222 = 0;
	uParam0->f_238 = 0f;
	uParam0->f_22E = 0;
	uParam0->f_1E = 0f;
	uParam0->f_224 = 0f;
	uParam0->f_22F = 0f;
	uParam0->f_230 = 0f;
	uParam0->f_221 = 0;
	uParam0->f_233 = 0;
	uParam0->f_23C = 0;
	uParam0->f_234 = 0;
	uParam0->f_235 = 0;
	uParam0->f_236 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_23E = 0;
	uParam0->f_23F = 0;
	uParam0->f_23D = 1f;
}

void func_175(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, float fParam6)//Position - 0xE67A
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_251(uParam0, 4))
	{
		return;
	}
	else
	{
		func_178(&(uParam0->f_1A));
		func_177(&(uParam0->f_1A), "BJ_SC_PASS", sParam1, 0);
		func_211(uParam0, 4, 1);
	}
	*uParam5 = 0;
	if (iParam3 > 1)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = SYSTEM::CEIL((100f * fParam6));
		}
	}
	iVar3 = SYSTEM::CEIL((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = SYSTEM::CEIL((fParam6 * 50f));
	iVar2 = SYSTEM::CEIL(((fParam6 * 1.5f) * SYSTEM::TO_FLOAT(iParam4)));
	*uParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 1)
	{
		if (iVar0 > 0)
		{
			func_176(&(uParam0->f_1A), 3, "BJ_SC_ALLG_RWD", "", iVar0, 0, 2, 0);
		}
		else
		{
			func_176(&(uParam0->f_1A), 3, "BJ_SC_ALLG_RWD", "", 0, 0, 1, 0);
		}
		func_176(&(uParam0->f_1A), 2, "BJ_SC_GATES", "", iParam2, iParam3, 0, 0);
	}
	func_176(&(uParam0->f_1A), 11, "BJ_SC_LAND_ACC", "", iParam4, 0, 0, 0);
	if (iParam3 > 1)
	{
		func_176(&(uParam0->f_1A), 3, "BJ_SC_GATE_RWD", "", iVar3, 0, 0, 0);
	}
	func_176(&(uParam0->f_1A), 3, "BJ_SC_ACC_RWD", "", SYSTEM::ROUND(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0, 0, 0);
	func_176(&(uParam0->f_1A), 3, "BJ_SC_TOT_RWD", "", *uParam5, 0, 0, 0);
}

void func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xE7CD
{
	int iVar0;
	
	if (uParam0->f_38 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_38;
	uParam0->f_39[iVar0] = iParam1;
	StringCopy(&(uParam0->f_47[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_118[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_1E9[iVar0] = iParam4;
	uParam0->f_1F7[iVar0] = iParam5;
	uParam0->f_205[iVar0] = iParam6;
	uParam0->f_213[iVar0] = iParam7;
	uParam0->f_38++;
}

void func_177(var uParam0, char* sParam1, char* sParam2, int iParam3)//Position - 0xE840
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_D), sParam2, 64);
	uParam0->f_1D = iParam3;
	uParam0->f_B = 0;
}

void func_178(var uParam0)//Position - 0xE863
{
	func_174(uParam0);
	uParam0->f_23A = 0;
	uParam0->f_1F = 0;
	uParam0->f_38 = 0;
	uParam0->f_237 = 0;
	uParam0->f_239 = 0;
}

char* func_179(int iParam0)//Position - 0xE88D
{
	switch (iParam0)
	{
		case 0:
			return "BJ_JUMP_01";
		
		case 1:
			return "BJ_JUMP_02";
		
		case 2:
			return "BJ_JUMP_03";
		
		case 3:
			return "BJ_JUMP_04";
		
		case 4:
			return "BJ_JUMP_05";
		
		case 5:
			return "BJ_JUMP_06";
		
		case 6:
			return "BJ_JUMP_07";
		
		case 7:
			return "BJ_JUMP_08";
		
		case 8:
			return "BJ_JUMP_09";
		
		case 9:
			return "BJ_JUMP_10";
		
		case 10:
			return "BJ_JUMP_11";
		
		case 11:
			return "BJ_JUMP_12";
		
		case 12:
			return "BJ_JUMP_13";
		
		default:
	}
	return "";
}

int func_180(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xE948
{
	if (Global_1C0005.f_1 && !Global_1C0005.f_2)
	{
		func_189(iParam0, iParam1, fParam2, iParam3);
		Global_1C0005.f_2 = 1;
	}
	if (func_181(&uLocal_105))
	{
		Global_1C017C = 1;
		return 1;
	}
	return 0;
}

int func_181(var uParam0)//Position - 0xE98B
{
	struct<98> Var0;
	struct<4> Var1;
	struct<37> Var2;
	struct<13> Var3;
	int iVar4;
	
	Var0.f_13.f_1 = 4;
	Var2.f_3 = 32;
	Var2.f_24 = 32;
	if (func_159(uParam0->f_2C))
	{
		Var3 = { Global_1C0005.f_169 };
	}
	else
	{
		Var3 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
	}
	switch (Global_1C0005)
	{
		case 0:
			if (func_188(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), &Var3))
			{
				func_147(&Var1, &(uParam0->f_2C));
				Global_1C0005.f_8E = uParam0->f_2C;
				Global_1C0005.f_8E.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_2C, 0);
				iVar4 = 0;
				while (iVar4 < Global_1C0005.f_8E.f_1)
				{
					if (!func_187(uParam0->f_2C, iVar4))
					{
						if (func_186(uParam0->f_2C, 4, iVar4))
						{
							MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar4);
						}
						else
						{
							GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0005.f_8E.f_2), iVar4);
						}
					}
					iVar4++;
				}
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_61 != Global_1C0005.f_8E.f_1)
						{
						}
						if (!func_111(Var0))
						{
							Global_1C0005.f_4 = 1;
						}
						else
						{
							iVar4 = 0;
							while (iVar4 < Global_1C0005.f_8E.f_1)
							{
								if (!func_187(uParam0->f_2C, iVar4))
								{
									if (func_186(uParam0->f_2C, 4, iVar4))
									{
										Global_1C0005.f_49.f_24[iVar4] = STATS::_0x88578F6EC36B4A3A(0, iVar4);
										if (Global_1C0005.f_49.f_24[iVar4] == 4294967295)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_24[iVar4] = 0;
											}
										}
									}
									else
									{
										Global_1C0005.f_49.f_3[iVar4] = STATS::_0x38491439B6BA7F7D(0, iVar4);
										if (Global_1C0005.f_49.f_3[iVar4] == -1f)
										{
											if (iVar4 > Var0.f_61)
											{
												Global_1C0005.f_49.f_3[iVar4] = 0f;
											}
										}
									}
								}
								iVar4++;
							}
						}
					}
					else
					{
						Global_1C0005.f_4 = 1;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_1C0005.f_4 = 1;
				}
				Global_1C0005 = 1;
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 1:
			Global_1C0005.f_1 = 1;
			if (Global_1C0005.f_2)
			{
				func_185();
				if (Global_1C0005.f_4)
				{
					if (func_184(uParam0->f_2C))
					{
						Global_1C0005 = 3;
					}
					else
					{
						Global_1C0005 = 2;
					}
				}
				else
				{
					Global_1C0005 = 2;
				}
			}
			break;
		
		case 2:
			STATS::_0xC38DC1E90D22547C(&(Global_1C0005.f_49), &(Global_1C0005.f_8E), &(Global_1C0005.f_D3));
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1C0005.f_D3 = { Global_1C0005.f_8E };
			Global_1C0005 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_183())
			{
				if (func_182())
				{
					Global_1C0005 = 99;
				}
				else
				{
					Global_1C0005 = 999;
					return 1;
				}
			}
			else
			{
				Global_1C0005 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_184(uParam0->f_2C))
			{
				Global_1C0005.f_118 = { Global_1C0005.f_8E };
			}
			else
			{
				Var2 = Global_1C0005.f_8E;
				Var2.f_1 = Global_1C0005.f_8E.f_1;
				Var2.f_2 = Global_1C0005.f_8E.f_2;
				STATS::_0xC38DC1E90D22547C(&Var2, &(Global_1C0005.f_8E), &(Global_1C0005.f_118));
			}
			Global_1C0005 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C), 1, &Var3, 1, 1, Global_1C0005.f_118.f_24[0], Global_1C0005.f_118.f_3[0]))
			{
				func_147(&Var1, &(uParam0->f_2C));
				if (uParam0->f_5 && STATS::_0xA0F93D5465B3094D(&Var1))
				{
					if (Var1.f_3 > 0)
					{
						STATS::_0x34770B9CE0E03B91(0, &Var0);
						if (MISC::ARE_STRINGS_EQUAL(&(Var0.f_D), ""))
						{
							Global_EC5D3.f_1 = 4294967295;
						}
						else
						{
							Global_EC5D3.f_1 = Var0.f_60;
						}
					}
					else
					{
						Global_EC5D3.f_1 = 4294967295;
					}
					STATS::_0x71B008056E5692D6();
				}
				else
				{
					Global_EC5D3.f_1 = 4294967295;
				}
				Global_1C0005 = 999;
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_182()//Position - 0xEDAE
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_EA450.f_8, 1);
}

var func_183()//Position - 0xEDC1
{
	return Global_257B9F.f_3;
}

int func_184(int iParam0)//Position - 0xEDCF
{
	switch (iParam0)
	{
		case 817:
		case 850:
		case 824:
		case 827:
		case 815:
		case 826:
		case 777:
		case 825:
		case 828:
		case 849:
		case 928:
		case 795:
		case 202:
		case 811:
		case 193:
		case 975:
		case 976:
		case 970:
		case 973:
		case 968:
		case 969:
		case 966:
		case 974:
		case 971:
		case 967:
		case 965:
		case 972:
			return 1;
			break;
	}
	if (iParam0 >= 998 && iParam0 <= 1197)
	{
		return 1;
	}
	return 0;
}

void func_185()//Position - 0xEEA0
{
	Global_1C0005.f_49 = Global_1C0005.f_8E;
	Global_1C0005.f_49.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_49.f_2 = Global_1C0005.f_8E.f_2;
	Global_1C0005.f_D3 = Global_1C0005.f_8E;
	Global_1C0005.f_D3.f_1 = Global_1C0005.f_8E.f_1;
	Global_1C0005.f_D3.f_2 = Global_1C0005.f_8E.f_2;
}

int func_186(int iParam0, int iParam1, int iParam2)//Position - 0xEF00
{
	int iVar0;
	
	if (iParam0 == 190)
	{
		if (iParam2 == 0)
		{
			return 0;
		}
	}
	if (iParam0 == 203)
	{
		if (iParam2 == 3 || iParam2 == 6)
		{
			return 0;
		}
	}
	if (iParam0 == 912)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if ((iParam0 == 762 || iParam0 == 822) || iParam0 == 823)
	{
		if (iParam2 == 0 || iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 791)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	if (iParam0 == 780)
	{
		if (iParam2 == 3)
		{
			return 0;
		}
	}
	if (iParam0 == 777)
	{
		if (iParam2 == 3 || iParam2 == 7)
		{
			return 0;
		}
	}
	if (iParam0 == 1200)
	{
		if (iParam2 == 4)
		{
			return 0;
		}
	}
	iVar0 = STATS::LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_187(int iParam0, int iParam1)//Position - 0xF002
{
	if (STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
	{
		return 1;
	}
	switch (iParam0)
	{
		case 912:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 780:
			if (iParam1 == 4)
			{
				return 1;
			}
			break;
		
		case 1200:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_188(var uParam0, var uParam1, var uParam2, var uParam3)//Position - 0xF05D
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (STATS::LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
				{
					*uParam0++;
				}
				else
				{
					*uParam1 = 0;
					*uParam0 = 3;
				}
			}
			break;
		
		case 1:
			if (!STATS::LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, 4294967295))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (STATS::LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
			{
				*uParam1 = 1;
				*uParam0++;
			}
			else
			{
				*uParam1 = 0;
				*uParam0++;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_189(int iParam0, int iParam1, float fParam2, int iParam3)//Position - 0xF111
{
	struct<6> Var0[1];
	struct<8> Var1[1];
	
	StringCopy(&(Var1[0 /*8*/]), "Location", 32);
	switch (iParam0)
	{
		case 0:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&(Var0[0 /*6*/]), "BJUMP_13", 24);
			break;
	}
	if (func_191(274, &Var0, &Var1, 1, 4294967295, 1, 0))
	{
		func_190(274, 131, iParam3, 0f, 0);
		if (iParam1 == 100)
		{
			func_190(274, 98, 1, 0f, 0);
		}
		else
		{
			func_190(274, 98, 0, 0f, 0);
		}
		func_190(274, 109, 1, 0f, 0);
		func_190(274, 8, iParam3, 0f, 0);
		func_190(274, 93, 0, fParam2, 0);
	}
}

void func_190(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)//Position - 0xF2A0
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		STATS::_0x0BCA1D2C47B0D269(iParam1, iParam2, fParam3);
	}
	if (!Global_1C0005.f_3)
	{
		Global_1C0005.f_8E = iParam0;
		Global_1C0005.f_8E.f_1 = STATS::LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_1C0005.f_8E, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1C0005.f_8E.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_186(iParam0, 4, iVar1))
				{
					MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar1);
				}
				else
				{
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0005.f_8E.f_2), iVar1);
				}
			}
			else
			{
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0005.f_8E.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1C0005.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == STATS::LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1C0005.f_8E.f_24[iVar0] = iParam2;
	Global_1C0005.f_8E.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		MISC::SET_BIT(&(Global_1C0005.f_8E.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0005.f_8E.f_2), iVar0);
	}
}

int func_191(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)//Position - 0xF3BB
{
	struct<68> Var0;
	int iVar1;
	struct<13> Var2;
	var uVar3;
	
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK::NETWORK_PLAYER_IS_CHEATER() && (NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::_0x1353F87E89946207())) && NETWORK::_0x422D396F80A96547())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == 4294967295)
		{
			if (GRAPHICS::_DRAW_SHOWROOM())
			{
				Var2 = { func_56(CAM::_0xDC9DA9E8789F5246()) };
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var2))
				{
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&uVar3, 35, &Var2))
					{
						Var0.f_1 = uVar3;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar1 = 0;
		while (iVar1 < iParam3)
		{
			Var0.f_2.f_1[iVar1 /*16*/] = { *(uParam2[iVar1 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar1 /*16*/].f_8), {*(uParam1[iVar1 /*6*/])}, 8);
			iVar1++;
		}
		if (bParam5)
		{
			Global_1C0005.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_257B9F.f_3)
			{
				STATS::_0xC980E62E33DF1D5C(&Var0, &(Global_193FA3.f_A));
			}
			else
			{
				STATS::LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK::NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (NETWORK::_0x1353F87E89946207())
	{
	}
	if (!NETWORK::_0x422D396F80A96547())
	{
	}
	return 0;
}

void func_192(int iParam0)//Position - 0xF4EF
{
	vector3 vVar0;
	
	switch (iParam0)
	{
		case 0:
			StringCopy(&vVar0, "BJUMP_01", 24);
			break;
		
		case 1:
			StringCopy(&vVar0, "BJUMP_02", 24);
			break;
		
		case 2:
			StringCopy(&vVar0, "BJUMP_03", 24);
			break;
		
		case 3:
			StringCopy(&vVar0, "BJUMP_04", 24);
			break;
		
		case 4:
			StringCopy(&vVar0, "BJUMP_05", 24);
			break;
		
		case 5:
			StringCopy(&vVar0, "BJUMP_06", 24);
			break;
		
		case 6:
			StringCopy(&vVar0, "BJUMP_07", 24);
			break;
		
		case 7:
			StringCopy(&vVar0, "BJUMP_08", 24);
			break;
		
		case 8:
			StringCopy(&vVar0, "BJUMP_09", 24);
			break;
		
		case 9:
			StringCopy(&vVar0, "BJUMP_10", 24);
			break;
		
		case 10:
			StringCopy(&vVar0, "BJUMP_11", 24);
			break;
		
		case 11:
			StringCopy(&vVar0, "BJUMP_12", 24);
			break;
		
		case 12:
			StringCopy(&vVar0, "BJUMP_13", 24);
			break;
	}
	func_193(&uLocal_105, 85, &vVar0, func_179(iParam0), iParam0, 4294967295, 0, 0);
}

void func_193(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)//Position - 0xF5F0
{
	struct<8> Var0;
	struct<8> Var1;
	int iVar2;
	struct<6> Var3;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1C0180.f_AD1 = 0;
	Global_1C0180.f_AD2 = 0;
	Global_1C0180.f_AD0 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C = 826;
				}
				else
				{
					uParam0->f_2C = 815;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C0180.f_ADC.f_1A = 4294967295;
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C = 827;
				}
				else
				{
					uParam0->f_2C = 824;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 5;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 6;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 5;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					Global_1C0180.f_A95 = 6;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C = 828;
				}
				else
				{
					uParam0->f_2C = 825;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 2;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK::NETWORK_PLAYER_GET_USERID(CAM::_0xDC9DA9E8789F5246(), &Var3);
					MemCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), {Var3}, 8);
					Global_1C0180.f_ADC.f_1B = 1;
				}
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C.f_3 = 3;
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[2 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					Global_1C0180.f_A95 = 4;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C = 928;
				}
				else
				{
					uParam0->f_2C = 849;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C.f_3 = 2;
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var1, "", 32);
					StringIntConCat(&Var1, iParam5, 32);
					uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var1 };
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1C0180.f_ADC.f_1A = 4294967295;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 0;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 0;
					Global_1C0180.f_A94 = 1;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_2C = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_2C = 975;
				}
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					Global_1C0180.f_ADC.f_1A = iParam5;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1C0180.f_ADC.f_1A = 4294967295;
				}
				Global_1C0180.f_ADC = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 3;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 2;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A95 = 4;
					Global_1C0180.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 1;
					Global_1C0180.f_ADC.f_1D[2] = 3;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
				Global_1C0180.f_ADB = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0)
			{
				uParam0->f_2C = 762;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 1)
			{
				uParam0->f_2C = 822;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_2C = 823;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 6;
				Global_1C0180.f_A96[3] = 3;
				Global_1C0180.f_A96[4] = 1;
				Global_1C0180.f_A96[5] = 2;
				Global_1C0180.f_A94 = 6;
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 4;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 4;
				Global_1C0180.f_ADC.f_1D[4] = 5;
				Global_1C0180.f_ADC.f_1D[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 7;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 94:
			uParam0->f_2C = 193;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 7;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 92:
			uParam0->f_2C = 811;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), "CMSW", 64);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 4;
			Global_1C0180.f_A96[4] = 6;
			Global_1C0180.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 6;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 6;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 15:
			uParam0->f_2C = 749;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_ARM", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 0;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 4;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 14:
			uParam0->f_2C = 190;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == 4294967295)
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_DARTS", 32);
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 7;
			Global_1C0180.f_A96[2] = 5;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 12:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1C0180.f_ADC.f_9), iParam4 + 1, 64);
			}
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 9;
			Global_1C0180.f_A96[2] = 7;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 2;
			Global_1C0180.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 87:
			uParam0->f_2C = 283;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 9;
			Global_1C0180.f_A96[2] = 7;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 2;
			Global_1C0180.f_A94 = 5;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			break;
		
		case 13:
			uParam0->f_2C = 912;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1C0180.f_ADC.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_ACC", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 2;
			Global_1C0180.f_A96[2] = 1;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 4;
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 4;
			break;
		
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
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
		case 206:
		case 207:
		case 208:
		case 209:
			uParam0->f_2C = 203;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1C0180.f_ADC.f_9), {func_201(iParam1)}, 16);
			Global_1C0180.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 7;
			Global_1C0180.f_A94 = 2;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			Global_1C0180.f_ADC.f_1C = 4;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_2C = 202;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			Global_1C0180.f_ADC.f_19 = 0;
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 0;
			Global_1C0180.f_A96[2] = 0;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 2;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 0;
			Global_1C0180.f_ADC.f_1D[3] = 0;
			break;
		
		case 80:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1C0180.f_ADC.f_19 = 0;
			Global_1C0180.f_ADC = 1;
			StringCopy(&(Global_1C0180.f_ADC.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C0180.f_A96[0] = 3;
			Global_1C0180.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 1;
			break;
		
		case 3:
			uParam0->f_2C = 791;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_2C = 1200;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 1;
				Global_1C0180.f_A96[2] = 4;
				Global_1C0180.f_A96[3] = 5;
				Global_1C0180.f_A96[4] = 6;
				Global_1C0180.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
				Global_1C0180.f_ADC.f_1C = 6;
				Global_1C0180.f_ADC.f_1D[0] = 5;
				Global_1C0180.f_ADC.f_1D[1] = 11;
				Global_1C0180.f_ADC.f_1D[2] = 4;
				Global_1C0180.f_ADC.f_1D[3] = 5;
				Global_1C0180.f_ADC.f_1D[4] = 5;
			}
			else if (Global_440000.f_3D == 1)
			{
				uParam0->f_2C = 777;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1C0180.f_A96[0] = 0;
				Global_1C0180.f_A96[1] = 1;
				Global_1C0180.f_A96[2] = 2;
				Global_1C0180.f_A96[3] = 0;
				Global_1C0180.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 2;
				Global_1C0180.f_ADC.f_1D[1] = 5;
				Global_1C0180.f_ADC.f_1D[2] = 5;
				Global_1C0180.f_ADC.f_1D[3] = 5;
			}
			else
			{
				uParam0->f_2C = 780;
				uParam0->f_2C.f_1 = 5;
				uParam0->f_2C.f_3 = 1;
				StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1C0180.f_ADC = 1;
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_440000.f_2 == 5)
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
				}
				else if (Global_440000.f_2 == 5)
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_200(Global_440000.f_2559E) || func_197(Global_440000.f_2559E))
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 2;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else if (func_196(Global_440000.f_2559E))
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 2;
					Global_1C0180.f_A96[2] = 0;
					Global_1C0180.f_A94 = 2;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					Global_1C0180.f_ADC.f_1C = 4;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 1;
					Global_1C0180.f_A96[2] = 2;
					Global_1C0180.f_A96[3] = 0;
					Global_1C0180.f_A94 = 3;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					Global_1C0180.f_ADC.f_1C = 5;
					Global_1C0180.f_ADC.f_1D[0] = 5;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_2C = 795;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			MISC::SET_BIT(&(Global_1C0180.f_AD0), 1);
			Global_1C0180.f_AC2[1] = 4294967295;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 0;
			Global_1C0180.f_A94 = 3;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 11;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 85:
			uParam0->f_2C = 274;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 3;
			Global_1C0180.f_A94 = 2;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			break;
		
		case 122:
			switch (iParam4)
			{
				case 0:
				case 9:
				case 4:
				case 8:
					switch (iParam4)
					{
						case 0:
							uParam0->f_2C = 965;
							break;
						
						case 9:
							uParam0->f_2C = 966;
							break;
						
						case 4:
							uParam0->f_2C = 967;
							break;
						
						case 8:
							uParam0->f_2C = 968;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 1;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_2C = 969;
							break;
						
						case 2:
							uParam0->f_2C = 970;
							break;
						
						case 3:
							uParam0->f_2C = 973;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 4;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 7:
					uParam0->f_2C = 971;
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 1;
					Global_1C0180.f_A96[1] = 4;
					Global_1C0180.f_A96[2] = 3;
					Global_1C0180.f_A96[3] = 2;
					Global_1C0180.f_A94 = 4;
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 4;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_2C = 972;
							break;
						
						case 5:
							uParam0->f_2C = 974;
							break;
					}
					uParam0->f_2C.f_1 = 1;
					uParam0->f_2C.f_3 = 0;
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1C0180.f_ADC = 1;
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1C0180.f_A96[0] = 0;
					Global_1C0180.f_A96[1] = 3;
					Global_1C0180.f_A96[2] = 2;
					Global_1C0180.f_A96[3] = 1;
					Global_1C0180.f_A94 = 4;
					GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
					MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
					Global_1C0180.f_ADC.f_1D[0] = 12;
					Global_1C0180.f_ADC.f_1D[1] = 5;
					Global_1C0180.f_ADC.f_1D[2] = 5;
					Global_1C0180.f_ADC.f_1D[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_2C = 192;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A96[1] = 5;
			Global_1C0180.f_A96[2] = 4;
			Global_1C0180.f_A96[3] = 3;
			Global_1C0180.f_A94 = 4;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1D[0] = 17;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 82:
			uParam0->f_2C = 850;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 4;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 2;
			Global_1C0180.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1D[0] = 10;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 84:
			uParam0->f_2C = 820;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1C0180.f_ADC.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1C0180.f_A9D[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 5;
			Global_1C0180.f_A96[4] = 4;
			Global_1C0180.f_A96[5] = 3;
			Global_1C0180.f_A94 = 6;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[4]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[5]);
			Global_1C0180.f_ADC.f_1D[0] = 4;
			Global_1C0180.f_ADC.f_1D[1] = 9;
			Global_1C0180.f_ADC.f_1D[2] = 4;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			Global_1C0180.f_ADC.f_1D[4] = 5;
			Global_1C0180.f_ADC.f_1D[5] = 5;
			break;
		
		case 86:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_2C.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_ADC.f_19 = 0;
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1C0180.f_ADC.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1C0180.f_A96[0] = 2;
			Global_1C0180.f_A94 = 1;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			Global_1C0180.f_ADC.f_1C = 3;
			Global_1C0180.f_ADC.f_1D[0] = 1;
			break;
		
		case 91:
			uParam0->f_2C = 817;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 3;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1C0180.f_ADC = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
				Global_1C0180.f_A96[0] = 3;
				Global_1C0180.f_A96[1] = 4;
				Global_1C0180.f_A96[2] = 1;
				Global_1C0180.f_A96[3] = 0;
				Global_1C0180.f_A95 = 6;
				Global_1C0180.f_A94 = 2;
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				Global_1C0180.f_ADC.f_1C = 4;
				Global_1C0180.f_ADC.f_1D[0] = 1;
				Global_1C0180.f_ADC.f_1D[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "", 24);
				Global_1C0180.f_A96[0] = 3;
				Global_1C0180.f_A96[1] = 2;
				Global_1C0180.f_A96[2] = 4;
				Global_1C0180.f_A96[3] = 1;
				Global_1C0180.f_A95 = 4;
				Global_1C0180.f_A94 = 3;
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
				MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
				Global_1C0180.f_ADC.f_1C = 5;
				Global_1C0180.f_ADC.f_1D[0] = 1;
				Global_1C0180.f_ADC.f_1D[1] = 1;
				Global_1C0180.f_ADC.f_1D[2] = 3;
			}
			Global_1C0180.f_ADB = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_2C.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_2C = 1201;
			uParam0->f_2C.f_1 = 5;
			uParam0->f_2C.f_3 = 1;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 2;
			Global_1C0180.f_A96[3] = 3;
			MemCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), {func_195(iParam4)}, 8);
			Global_1C0180.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1C0180.f_ADC.f_1D[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1C0180.f_ADC.f_1D[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_A94 = 4;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 5;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 5;
			break;
		
		case 889:
			uParam0->f_2C = 1202;
			uParam0->f_2C.f_1 = 1;
			uParam0->f_2C.f_3 = 0;
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_2C.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1C0180.f_ADC.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1C0180.f_A9D[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1C0180.f_A9D[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1C0180.f_A9D[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1C0180.f_A9D[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1C0180.f_A96[0] = 0;
			Global_1C0180.f_A96[1] = 1;
			Global_1C0180.f_A96[2] = 3;
			Global_1C0180.f_A96[3] = 4;
			Global_1C0180.f_ADC = 1;
			Global_1C0180.f_A94 = 4;
			Global_1C0180.f_ADC.f_1C = 5;
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[0]);
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[1]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[2]);
			MISC::SET_BIT(&(Global_1C0180.f_AD1), Global_1C0180.f_A96[3]);
			Global_1C0180.f_ADC.f_1C = 5;
			Global_1C0180.f_ADC.f_1D[0] = 5;
			Global_1C0180.f_ADC.f_1D[1] = 4;
			Global_1C0180.f_ADC.f_1D[2] = 5;
			Global_1C0180.f_ADC.f_1D[3] = 21;
			break;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < Global_1C0180.f_A94)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1C0180.f_AD1, Global_1C0180.f_A96[iVar2]))
		{
			MISC::SET_BIT(&(Global_1C0180.f_AD2), iVar2);
		}
		iVar2++;
	}
	Global_1C0180.f_B0A = func_194(Var0, uParam0->f_2C, iParam1, iParam4, iParam5, bParam6);
}

int func_194(struct<8> Param0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x140C8
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam1, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_159(iParam1))
	{
		if (bParam5)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam2, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam3, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam4, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

struct<6> func_195(int iParam0)//Position - 0x1413A
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 1:
			StringCopy(&Var0, "BuzzerBeater", 24);
			break;
		
		case 2:
			StringCopy(&Var0, "Carnage", 24);
			break;
		
		case 3:
			StringCopy(&Var0, "FlagWar", 24);
			break;
		
		case 4:
			StringCopy(&Var0, "WreckIt", 24);
			break;
		
		case 5:
			StringCopy(&Var0, "BombBall", 24);
			break;
		
		case 6:
			StringCopy(&Var0, "GamesMasters", 24);
			break;
		
		case 7:
			StringCopy(&Var0, "Monsters", 24);
			break;
		
		case 8:
			StringCopy(&Var0, "HotBomb", 24);
			break;
		
		case 9:
			StringCopy(&Var0, "TagTeam", 24);
			break;
		
		default:
			break;
	}
	return Var0;
}

bool func_196(int iParam0)//Position - 0x141E9
{
	return iParam0 == 74;
}

var func_197(int iParam0)//Position - 0x141F6
{
	return (func_199(iParam0) || func_198(iParam0));
}

bool func_198(int iParam0)//Position - 0x14210
{
	return iParam0 == 44;
}

bool func_199(int iParam0)//Position - 0x1421D
{
	return iParam0 == 45;
}

bool func_200(int iParam0)//Position - 0x1422A
{
	return iParam0 == 12;
}

struct<6> func_201(int iParam0)//Position - 0x14237
{
	struct<6> Var0;
	
	switch (iParam0)
	{
		case 38:
			StringCopy(&Var0, "HUD_MG_RANGE0", 24);
			break;
		
		case 39:
			StringCopy(&Var0, "HUD_MG_RANGE1", 24);
			break;
		
		case 40:
			StringCopy(&Var0, "HUD_MG_RANGE2", 24);
			break;
		
		case 41:
			StringCopy(&Var0, "HUD_MG_RANGE3", 24);
			break;
		
		case 42:
			StringCopy(&Var0, "HUD_MG_RANGE4", 24);
			break;
		
		case 43:
			StringCopy(&Var0, "HUD_MG_RANGE5", 24);
			break;
		
		case 44:
			StringCopy(&Var0, "HUD_MG_RANGE6", 24);
			break;
		
		case 45:
			StringCopy(&Var0, "HUD_MG_RANGE7", 24);
			break;
		
		case 46:
			StringCopy(&Var0, "HUD_MG_RANGE8", 24);
			break;
		
		case 47:
			StringCopy(&Var0, "HUD_MG_RANGE9", 24);
			break;
		
		case 48:
			StringCopy(&Var0, "HUD_MG_RANGE10", 24);
			break;
		
		case 49:
			StringCopy(&Var0, "HUD_MG_RANGE11", 24);
			break;
		
		case 50:
			StringCopy(&Var0, "HUD_MG_RANGE12", 24);
			break;
		
		case 51:
			StringCopy(&Var0, "HUD_MG_RANGE13", 24);
			break;
		
		case 52:
			StringCopy(&Var0, "HUD_MG_RANGE14", 24);
			break;
		
		case 53:
			StringCopy(&Var0, "HUD_MG_RANGE15", 24);
			break;
		
		case 54:
			StringCopy(&Var0, "HUD_MG_RANGE16", 24);
			break;
		
		case 55:
			StringCopy(&Var0, "HUD_MG_RANGE17", 24);
			break;
		
		case 206:
			StringCopy(&Var0, "HUD_MG_RANGE18", 24);
			break;
		
		case 207:
			StringCopy(&Var0, "HUD_MG_RANGE19", 24);
			break;
		
		case 208:
			StringCopy(&Var0, "HUD_MG_RANGE20", 24);
			break;
		
		case 209:
			StringCopy(&Var0, "HUD_MG_RANGE21", 24);
			break;
	}
	return Var0;
}

int func_202()//Position - 0x143C0
{
	if ((((((((((Global_440000.f_CFE4 == 1 || Global_440000.f_CFE4 == 3) || Global_440000.f_CFE4 == 5) || Global_440000.f_CFE4 == 7) || Global_440000.f_CFE4 == 19) || Global_440000.f_CFE4 == 8) || Global_440000.f_CFE4 == 9) || Global_440000.f_CFE4 == 11) || Global_440000.f_CFE4 == 13) || Global_440000.f_CFE4 == 21) || Global_440000.f_CFE4 == 23)
	{
		return 1;
	}
	return 0;
}

bool func_203()//Position - 0x14497
{
	return NETWORK::NETWORK_IS_SIGNED_ONLINE();
}

void func_204(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)//Position - 0x144A3
{
	if (*uParam0 == 0)
	{
		*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_3[0] = iParam2;
	uParam0->f_3[1] = iParam4;
	uParam0->f_3[2] = iParam6;
	uParam0->f_3[3] = iParam8;
	uParam0->f_3[4] = 358;
	uParam0->f_3[5] = 358;
	uParam0->f_3[6] = 358;
	uParam0->f_3[7] = 358;
	uParam0->f_C[0] = func_205(iParam2 != 358, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam2, true), "");
	uParam0->f_C[1] = func_205(iParam4 != 358, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam4, true), "");
	uParam0->f_C[2] = func_205(iParam6 != 358, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam6, true), "");
	uParam0->f_C[3] = func_205(iParam8 != 358, PAD::GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam8, true), "");
	uParam0->f_C[4] = 0;
	uParam0->f_C[5] = 0;
	uParam0->f_C[6] = 0;
	uParam0->f_C[7] = 0;
	uParam0->f_15[0] = sParam3;
	uParam0->f_15[1] = sParam5;
	uParam0->f_15[2] = iParam7;
	uParam0->f_15[3] = iParam9;
	if (bParam1)
	{
		uParam0->f_2 = 1;
	}
	else
	{
		uParam0->f_2 = 0;
	}
	if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_21(&(uParam0->f_1), 1);
	}
}

char* func_205(bool bParam0, char* sParam1, char* sParam2)//Position - 0x145E7
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

void func_206()//Position - 0x145FE
{
	func_207(AUDIO::_0x0626A247D2405330(), "GENERIC_CURSE_MED", 24);
}

void func_207(int iParam0, char* sParam1, int iParam2)//Position - 0x14614
{
	AUDIO::_PLAY_AMBIENT_SPEECH1(iParam0, sParam1, func_208(iParam2), 1);
}

int func_208(int iParam0)//Position - 0x1462B
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

int func_209()//Position - 0x14820
{
	if (func_44(0))
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

void func_210(int iParam0, int iParam1)//Position - 0x1486B
{
	Global_16C57.f_7 = iParam0;
	Global_16C57.f_8 = iParam1;
}

void func_211(var uParam0, int iParam1, bool bParam2)//Position - 0x14883
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_25B), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_25B), iParam1);
	}
}

int func_212(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)//Position - 0x148A9
{
	int iVar0;
	
	if (iParam1 > 1 && *uParam0 == (iParam1 - 1))
	{
		iVar0 = 100;
	}
	else
	{
		iVar0 = 0;
	}
	*uParam3 = 0;
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*uParam3 = (*uParam3 + SYSTEM::CEIL(((fParam4 * 1.5f) * SYSTEM::TO_FLOAT(*uParam2))));
	func_213(func_411(), 1, *uParam3, 0, 0);
	return 1;
}

void func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)//Position - 0x14917
{
	int iVar0;
	int iVar1;
	
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 3)
	{
		return;
	}
	if (Global_19E56.f_6D76[iParam0 /*29*/].f_11 == 4)
	{
		return;
	}
	func_214(Global_19E56.f_6D76[iParam0 /*29*/].f_11, 1, iParam1, iParam2, 0);
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
		STATS::STAT_GET_INT(iVar1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam2);
		STATS::STAT_SET_INT(iVar1, iVar0, 1);
	}
}

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x149FE
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_244();
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
					func_351(99, 1);
					func_243(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_243(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_243(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_227(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_223(5))
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
							func_243(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_243(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_243(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_223(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_243(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_243(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_243(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_243(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_243(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_243(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_243(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_243(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_243(joaat("sp2_money_spent_property"), iParam3);
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
									func_243(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_243(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_243(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_243(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_243(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_243(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_223(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_243(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_243(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_243(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_243(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_243(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_243(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_222(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_351(95, iParam3);
					break;
				
				case 1:
					func_351(97, iParam3);
					break;
				
				case 2:
					func_351(96, iParam3);
					break;
			}
			func_351(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f)
	{
		func_217(iVar1);
		return 1;
	}
	else if (fVar0 != 1f)
	{
		func_217(iVar1);
	}
	iVar5 = (Global_D06B[iVar2] + iParam3);
	switch (iParam1)
	{
		case 1:
			if (Global_D06B[iVar2] >= 0 && iParam3 > 0)
			{
				if (iVar5 <= 0)
				{
					Global_D06B[iVar2] = 2147483647;
				}
				else
				{
					Global_D06B[iVar2] = (Global_D06B[iVar2] + iParam3);
				}
			}
			switch (iParam0)
			{
				case 0:
					func_243(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_243(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_243(joaat("sp2_total_cash_earned"), iParam3);
					break;
			}
			break;
		
		case 0:
			if (!bParam4)
			{
				if ((Global_D06B[iVar2] - iParam3) < 0)
				{
					return 0;
				}
			}
			iVar3 = Global_D06B[iVar2];
			Global_D06B[iVar2] = (Global_D06B[iVar2] - iParam3);
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
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_2[Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/]++;
		Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1++;
		if (Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 > 10)
		{
			Global_19E56.f_5038.f_E9[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_216(iParam0);
	if (Global_8D15 == 15)
	{
		func_215(0);
	}
	return 1;
}

void func_215(bool bParam0)//Position - 0x14FFD
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

void func_216(int iParam0)//Position - 0x1527F
{
	int iVar0;
	
	iVar0 = Global_D06B[iParam0];
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

void func_217(int iParam0)//Position - 0x152D9
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_220(129, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_220(135, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_220(136, 0, 4294967295, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_220(137, 0, 4294967295, 1);
		return;
	}
	bVar0 = false;
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0))
		{
			bVar0 = true;
			GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0) || INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_219() /*12745*/].f_1FF2.f_A, iParam0))
	{
		bVar0 = true;
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_5038.f_1D7), iParam0);
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_200000[func_219() /*12745*/].f_1FF2.f_A), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		HUD::_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_218(iParam0));
		HUD::_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_218(int iParam0)//Position - 0x153EB
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
		
		default:
	}
	return "";
}

int func_219()//Position - 0x15499
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

int func_220(int iParam0, bool bParam1, int iParam2, int iParam3)//Position - 0x154A6
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
	
	if (iParam2 == 4294967295)
	{
		iParam2 = func_221();
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
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar18 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam2, "_BUSINESSBATPSTAT_BOOL");
		iVar1 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar18, bParam1, iVar1, iParam3);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar19 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam2, "_ARENAWARSPSTAT_BOOL");
		iVar1 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
		iVar0 = STATS::STAT_SET_BOOL_MASKED(iVar19, bParam1, iVar1, iParam3);
	}
	return iVar0;
}

int func_221()//Position - 0x15A0E
{
	return Global_1407E0;
}

void func_222(int iParam0)//Position - 0x15A1A
{
	func_351(93, iParam0);
	func_351(29, iParam0);
	func_351(30, iParam0);
}

bool func_223(int iParam0)//Position - 0x15A3A
{
	if (iParam0 == 8)
	{
		return func_224(129, 4294967295, 4294967295);
	}
	if (iParam0 == 9)
	{
		return func_224(135, 4294967295, 4294967295);
	}
	if (iParam0 == 10)
	{
		return func_224(136, 4294967295, 4294967295);
	}
	if (iParam0 == 11)
	{
		return func_224(137, 4294967295, 4294967295);
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_5038.f_1D7, iParam0);
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_200000[func_219() /*12745*/].f_1FF2.f_A, iParam0);
}

int func_224(int iParam0, int iParam1, int iParam2)//Position - 0x15ABE
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == 4294967295)
	{
		iParam1 = func_221();
	}
	iVar1 = func_226(iParam0, iParam1);
	uVar2 = func_225(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STATS::STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_225(int iParam0)//Position - 0x15AFB
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
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = ((iParam0 - 22066) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 22066)) * 64);
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = ((iParam0 - 24962) - STATS::_0xF4D8E7AC2A27758C((iParam0 - 24962)) * 64);
	}
	return iVar0;
}

int func_226(int iParam0, int iParam1)//Position - 0x15E13
{
	int iVar0;
	
	if (iParam1 == 4294967295)
	{
		iParam1 = func_221();
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
	else if (iParam0 >= 22066 && iParam0 < 22194)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 22066), 0, 1, iParam1, "_BUSINESSBATPSTAT_BOOL");
	}
	else if (iParam0 >= 24962 && iParam0 < 25538)
	{
		iVar0 = STATS::_GET_NGSTAT_BOOL_HASH((iParam0 - 24962), 0, 1, iParam1, "_ARENAWARSPSTAT_BOOL");
	}
	return iVar0;
}

int func_227(bool bParam0)//Position - 0x1610B
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
	{
		return 0;
	}
	if (STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, 4294967295))
	{
		iVar1 = (iVar1 + iVar0);
	}
	if (bParam0)
	{
	}
	iVar2 = 0;
	STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, 4294967295);
	if (iVar1 > 0 && (iVar2 / 2000000) != (iVar1 / 2000000))
	{
		STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, 1);
		func_242(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_228(27, 1);
	return 1;
}

int func_228(int iParam0, int iParam1)//Position - 0x161C2
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_229(iParam0, iParam1);
}

int func_229(int iParam0, int iParam1)//Position - 0x161DD
{
	if (func_241(14) && !func_240(iParam0))
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
	if (func_239(&Global_412216))
	{
		if (func_237(&Global_412216, iParam0))
		{
			return 0;
		}
		if (func_230(&Global_412216, iParam0))
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

int func_230(var uParam0, int iParam1)//Position - 0x1627A
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_241(14) && !func_240(iParam1))
	{
		return 0;
	}
	if (func_237(uParam0, iParam1))
	{
		return 0;
	}
	if (func_236(uParam0) < 0f)
	{
		func_235(uParam0, 0);
	}
	func_233(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_231(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_231(var uParam0, int iParam1)//Position - 0x1632B
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_241(14) && !func_240(iParam1))
	{
		return 0;
	}
	if (func_237(uParam0, iParam1))
	{
		return 0;
	}
	if (func_236(uParam0) < 0f)
	{
		func_235(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_232(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_232(var uParam0, int iParam1)//Position - 0x163A6
{
	return (*uParam0)[iParam1] == 78;
}

void func_233(var uParam0)//Position - 0x163B7
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_234(uParam0, iVar0);
		iVar0++;
	}
	func_235(uParam0, (Global_412215 - 0.5f));
}

void func_234(var uParam0, int iParam1)//Position - 0x163EB
{
	(*uParam0)[iParam1] = 78;
}

void func_235(var uParam0, float fParam1)//Position - 0x163FB
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

float func_236(var uParam0)//Position - 0x16418
{
	return uParam0->f_50;
}

bool func_237(var uParam0, int iParam1)//Position - 0x16424
{
	return func_238(uParam0, iParam1) != 4294967295;
}

int func_238(var uParam0, int iParam1)//Position - 0x16436
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

bool func_239(var uParam0)//Position - 0x16463
{
	return uParam0->f_4F == 1;
}

int func_240(int iParam0)//Position - 0x16471
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

bool func_241(int iParam0)//Position - 0x164C1
{
	return Global_8D15 == iParam0;
}

int func_242(int iParam0, int iParam1)//Position - 0x164CF
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
	iVar0 = PLAYER::_GET_ACHIEVEMENT_PROGRESSION(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::_SET_ACHIEVEMENT_PROGRESSION(iParam0, iParam1);
	}
	return 0;
}

void func_243(int iParam0, int iParam1)//Position - 0x16520
{
	int iVar0;
	
	STATS::STAT_GET_INT(iParam0, &iVar0, 4294967295);
	iVar0 = (iVar0 + iParam1);
	STATS::STAT_SET_INT(iParam0, iVar0, 1);
}

void func_244()//Position - 0x16543
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[0] == iVar0)
		{
			Global_D06B[0] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[1] == iVar0)
		{
			Global_D06B[1] = iVar0;
		}
		STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, 4294967295);
		if (!Global_D06B[2] == iVar0)
		{
			Global_D06B[2] = iVar0;
		}
	}
}

void func_245(int iParam0, int iParam1, int iParam2)//Position - 0x165B8
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
		func_220((891 + iParam0), 1, 4294967295, 1);
	}
	bVar0 = true;
	if (Global_19E56.f_27B6[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_19E56.f_27B6[iParam0 /*12*/].f_6 == 11 || Global_19E56.f_27B6[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_19E56.f_27B6[iParam0 /*12*/].f_5 = 1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_A = iParam1;
		Global_19E56.f_27B6[iParam0 /*12*/].f_B = iParam2;
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
		func_246();
	}
}

void func_246()//Position - 0x166A0
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
	Global_19D4E = 0;
	Global_19D4F = 0;
	Global_19D50 = 0;
	Global_19D51 = 0;
	Global_19D52 = 0;
	Global_19D53 = 0;
	Global_19D54 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_19E56.f_27B6.f_F0D;
	Global_19E56.f_27B6.f_F0D = 0f;
	while (iVar0 < 321)
	{
		if (Global_19E56.f_27B6[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_19E56.f_27B6[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_19D4E++;
					fVar1 = (fVar1 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_19D4F++;
					fVar2 = (fVar2 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_19D50++;
					fVar3 = (fVar3 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_19D51++;
					fVar4 = (fVar4 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_19D52++;
					fVar5 = (fVar5 + (Global_19E56.f_27B6[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_19D53++;
					fVar6 = (fVar6 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_19D54++;
					fVar7 = (fVar7 + Global_19E56.f_27B6[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_19D3D > 0)
	{
		if (Global_19D4E == Global_19D3D)
		{
			fVar1 = 55f;
		}
	}
	if (Global_19D3E > 0)
	{
		if (Global_19D4F == Global_19D3E)
		{
			fVar2 = 10f;
		}
	}
	if (Global_19D3F > 0)
	{
		if (Global_19D50 == Global_19D3F)
		{
			fVar3 = 0f;
		}
	}
	if (Global_19D40 > 0)
	{
		if (Global_19D51 == Global_19D40)
		{
			fVar4 = 10f;
		}
	}
	if (Global_19D41 > 0)
	{
		if (((Global_19D52 == Global_19D41 || (Global_19D41 * 10 / Global_19D52) < 41) || Global_19D52 > Global_19D44) || Global_19D52 == Global_19D44)
		{
			if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_27B6.f_F10, 14))
			{
				if (Global_19D52 == Global_19D41)
				{
					STATS::_0x11FF1C80276097ED(joaat("num_rndevents_completed"), Global_19D41, 0);
					MISC::SET_BIT(&(Global_19E56.f_27B6.f_F10), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_19D42 > 0)
	{
		if (Global_19D53 == Global_19D42)
		{
			fVar6 = 15f;
		}
	}
	if (Global_19D43 > 0)
	{
		if (Global_19D54 == Global_19D43)
		{
			fVar7 = 5f;
		}
	}
	Global_19E56.f_27B6.f_F0D = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_19D52 > Global_19D44 || Global_19D52 == Global_19D44)
	{
		iVar9 = Global_19D44;
	}
	else
	{
		iVar9 = Global_19D52;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_19D4E, 1);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_19D3D, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_19D4F, 1);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_19D3E, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_19D50, 1);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_19D3F, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_19D51, 1);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_19D40, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, 1);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_19D44, 1);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_19D54 + Global_19D53), 1);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_19D43 + Global_19D42), 1);
	Global_19D55 = (Global_19D4E * 100 / Global_19D3D);
	Global_19D57 = ((Global_19D50 + Global_19D4F) * 100 / (Global_19D3F + Global_19D3E));
	Global_19D56 = ((Global_19D51 + iVar9) * 100 / (Global_19D40 + Global_19D44));
	Global_19D58 = ((Global_19D53 + Global_19D54) * 100 / (Global_19D42 + Global_19D43));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_19E56.f_27B6.f_F0D, 1);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_19D55, 1);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_19D56, 1);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_19D57, 1);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D))
	{
		func_242(13, SYSTEM::FLOOR(Global_19E56.f_27B6.f_F0D));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_11625)
		{
			if (func_247() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_19D4C = 0;
				}
				if (!Global_DB75)
				{
					func_209();
				}
			}
		}
	}
}

int func_247()//Position - 0x16B61
{
	return Global_6373;
}

void func_248(int iParam0, int iParam1)//Position - 0x16B6C
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

int func_249(int iParam0)//Position - 0x16BB1
{
	if (iParam0 == 146 || iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_19E56.f_2361.f_63.f_3A[iParam0];
}

void func_250(int iParam0, bool bParam1)//Position - 0x16BDE
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_64EA[iVar0 /*23*/].f_B, 20))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 20);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_64EA[iVar0 /*23*/].f_B), 20);
	}
	if (Global_64E7 == 1)
	{
		Global_64E8 = 1;
	}
	Global_64E7 = 1;
	MISC::SET_BIT(&(Global_64EA[iVar0 /*23*/].f_B), 20);
}

bool func_251(var uParam0, int iParam1)//Position - 0x16C67
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_25B, iParam1);
}

int func_252()//Position - 0x16C7A
{
	return unk_0x9934FEFB3B8C6DB8("MP_BIG_MESSAGE_FREEMODE");
}

void func_253(vector3 vParam0, int iParam1, int iParam2, int iParam3, var uParam4, float fParam5)//Position - 0x16C8A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar14;
	float fVar15;
	int iVar16;
	vector3 vVar17;
	vector3 vVar18;
	
	iVar0 = AUDIO::_0x0626A247D2405330();
	iVar1 = 0;
	bVar2 = PED::IS_PED_INJURED(iVar0);
	if (bVar2)
	{
		*iParam3 = 2;
		return;
	}
	iVar3 = PED::GET_PED_PARACHUTE_STATE(iVar0);
	uVar4 = PED::GET_PED_PARACHUTE_LANDING_TYPE(iVar0);
	bVar5 = ENTITY::IS_ENTITY_IN_AIR(iVar0);
	bVar6 = PED::IS_PED_RAGDOLL(iVar0);
	bVar7 = ENTITY::DOES_ENTITY_EXIST(iParam1);
	bVar8 = (bVar7 && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, iParam1));
	bVar9 = ((bVar7 && !PED::IS_PED_INJURED(iParam2)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iParam2));
	bVar10 = (bVar7 && VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar1));
	bVar11 = ((bVar10 && !ENTITY::IS_ENTITY_DEAD(iVar1, 0)) && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, iVar1));
	bVar12 = (!bVar7 && !func_414(vParam0));
	if (bVar12)
	{
		vVar13 = { unk_0x8000C77B5F336760(iVar0, 1) };
		vVar14 = { vVar13 - vParam0 };
		fVar15 = SYSTEM::SQRT(((vVar14.x * vVar14.x) + (vVar14.y * vVar14.y)));
		*fParam5 = fVar15;
		if ((vVar14.z < 5f && vVar14.z > -2f) && fVar15 < 15f)
		{
			*uParam4 = func_256(SYSTEM::CEIL(((100f * (15f - fVar15)) / 15f)) + 4, 0, 100);
			*iParam3 = 1;
		}
		else
		{
			*iParam3 = 3;
		}
	}
	if (bVar7)
	{
		if (func_254(iParam1, iParam2))
		{
			*fParam5 = 0f;
			*uParam4 = 100;
			*iParam3 = 1;
		}
		else
		{
			*uParam4 = 0;
			*iParam3 = 3;
		}
	}
	if (bVar10)
	{
		VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam1, &iVar16);
		vVar17 = { unk_0x8000C77B5F336760(iVar0, 1) };
		vVar18 = { unk_0x8000C77B5F336760(iVar16, 1) };
	}
}

int func_254(int iParam0, int iParam1)//Position - 0x16E21
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	int iVar4;
	vector3 vVar5;
	
	if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && ENTITY::DOES_ENTITY_EXIST(iParam0)) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		vVar3 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
		if (func_355(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			iVar4 = 0;
			iVar4 = 0;
			while (iVar4 < 6)
			{
				iVar1 = VEHICLE::GET_TRAIN_CARRIAGE(iParam0, iVar4);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					vVar2 = { unk_0x8000C77B5F336760(iParam0, 1) };
					if (PED::IS_PED_ON_SPECIFIC_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar1))
					{
						return 1;
					}
				}
				iVar4++;
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(iParam0, &iVar0);
			if ((PED::IS_PED_ON_SPECIFIC_VEHICLE(AUDIO::_0x0626A247D2405330(), iParam0) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iParam0)) || ((ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0)) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iParam1)))
			{
				if (vVar2.z < vVar3.z)
				{
					return 1;
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, 0))
			{
				if (PED::IS_PED_ON_SPECIFIC_VEHICLE(AUDIO::_0x0626A247D2405330(), iVar0))
				{
					return 1;
				}
				else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(AUDIO::_0x0626A247D2405330(), iVar0))
				{
					vVar5 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iVar0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1)) };
					vVar5.x = func_255((MISC::ABSF(vVar5.x) - 1.305f), 0f);
					if (vVar5.y >= 0f)
					{
						vVar5.y = func_255((vVar5.y - 5.98f), 0f);
					}
					else
					{
						vVar5.y = func_255((-vVar5.y - 6.21f), 0f);
					}
					if (vVar5.y == 0f && vVar5.x == 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_255(float fParam0, float fParam1)//Position - 0x16FD4
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_256(int iParam0, int iParam1, int iParam2)//Position - 0x16FEB
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

void func_257(vector3 vParam0, int iParam1, var uParam2, var uParam3)//Position - 0x17010
{
	float fVar0;
	int iVar1;
	
	if (!func_445(&iParam1))
	{
		return;
	}
	fVar0 = func_444(&iParam1);
	if (fVar0 > 1.4f)
	{
		return;
	}
	iVar1 = (170 - SYSTEM::CEIL(((170f * fVar0) / 1.4f)));
	GRAPHICS::DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	GRAPHICS::DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	GRAPHICS::DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
}

void func_258(var uParam0, var uParam1, int iParam2, int iParam3)//Position - 0x170C7
{
	int iVar0;
	
	iVar0 = func_356(uParam1);
	if (func_448(func_449(iParam2)))
	{
		if (!func_251(uParam0, 0))
		{
			if (iParam3 > 1)
			{
				func_328("BJ_MG_MTOBJ", 7500, 1);
			}
			else if (iVar0 != 0)
			{
				if (func_355(iVar0))
				{
					func_328("BJ_MG_TRAIN", 7500, 1);
				}
				else
				{
					func_328("BJ_MG_BOAT", 7500, 1);
				}
			}
			else
			{
				func_328("BJ_MG_STOBJ", 7500, 1);
			}
			func_211(uParam0, 0, 1);
		}
	}
	if (func_325("BJ_FALLHLP") && Global_434C.f_87)
	{
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		func_211(uParam0, 1, 0);
	}
	if (!func_251(uParam0, 1) && !Global_434C.f_87)
	{
		HUD::ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
		GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
		func_326("BJ_FALLHLP", 4294967295);
		func_211(uParam0, 1, 1);
	}
	else if (!func_251(uParam0, 2))
	{
		if (PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 1 || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2)
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			if (PAD::_IS_INPUT_DISABLED(0))
			{
				func_326("BJ_PARAHLP_KM", 10000);
			}
			else
			{
				func_326("BJ_PARAHLP", 10000);
			}
			func_211(uParam0, 2, 1);
		}
	}
	else if (!func_251(uParam0, 3))
	{
		if (PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 4294967295 || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 3)
		{
			GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
			func_211(uParam0, 3, 1);
		}
	}
}

void func_259(int iParam0)//Position - 0x17229
{
	vector3 vVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	vector3 vVar4;
	var uVar5;
	vector3 vVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	var uVar10;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_ENTITY_ATTACHED_TO(AUDIO::_0x0626A247D2405330())))
		{
			vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(ENTITY::GET_ENTITY_ATTACHED_TO(AUDIO::_0x0626A247D2405330()), 0) };
		}
		else
		{
			vVar0 = { ENTITY::GET_ENTITY_SPEED_VECTOR(AUDIO::_0x0626A247D2405330(), 1) };
		}
		fVar7 = vVar0.y;
		vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
		vVar1.z = 0f;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		vVar2 = { unk_0x8000C77B5F336760(*iParam0, 1) };
		vVar2.z = 0f;
		vVar6 = { ENTITY::GET_ENTITY_VELOCITY(*iParam0) };
	}
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		ENTITY::GET_ENTITY_MATRIX(*iParam0, &vVar3, &uVar5, &uVar5, &uVar5);
		vVar3.z = 0f;
	}
	vVar4 = { vVar1 - vVar2 };
	vVar4.z = 0f;
	fVar9 = MISC::ABSF(func_263(vVar4, vVar3));
	if (func_262(*iParam0))
	{
		fVar8 = func_47((fVar7 - (fVar9 / fVar7)), 2f, 3f);
	}
	else
	{
		fVar8 = func_47((fVar7 + (fVar9 / fVar7)), 3f, 10f);
	}
	uVar10 = func_47(func_260(vVar6.y, fVar8, 0.5f), vVar6.y, fVar7);
	vVar6.y = func_260(vVar6.y, fVar8, 0.5f);
	if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0)) && vVar6.y > 2f) && vVar6.y < VEHICLE::_GET_VEHICLE_MAX_SPEED(*iParam0))
	{
		BRAIN::SET_DRIVE_TASK_MAX_CRUISE_SPEED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 4294967295, 0), uVar10);
	}
}

float func_260(float fParam0, float fParam1, float fParam2)//Position - 0x1739C
{
	float fVar0;
	
	fVar0 = ((1f - SYSTEM::COS(func_261((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_261(float fParam0)//Position - 0x173CB
{
	return (fParam0 * 57.29578f);
}

int func_262(int iParam0)//Position - 0x173DB
{
	vector3 vVar0;
	vector3 vVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	float fVar5;
	
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		vVar0 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
	}
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		ENTITY::GET_ENTITY_MATRIX(iParam0, &vVar4, &uVar2, &uVar2, &vVar1);
	}
	vVar3 = { vVar0 - vVar1 };
	vVar3.z = 0f;
	vVar4.z = 0f;
	fVar5 = func_263(vVar3, vVar4);
	if (fVar5 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_263(vector3 vParam0, vector3 vParam1)//Position - 0x17445
{
	return (((vParam0.x * vParam1.x) + (vParam0.y * vParam1.y)) + (vParam0.z * vParam1.z));
}

float func_264(int iParam0, int iParam1, bool bParam2)//Position - 0x17466
{
	vector3 vVar0;
	vector3 vVar1;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 1) };
	}
	else
	{
		vVar0 = { unk_0x8000C77B5F336760(iParam0, 0) };
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1, 0))
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, 1) };
	}
	else
	{
		vVar1 = { unk_0x8000C77B5F336760(iParam1, 0) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, vVar1, bParam2);
}

Vector3 func_265(int iParam0, vector3 vParam1)//Position - 0x174C4
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_266(iParam0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_266(int iParam0)//Position - 0x1750A
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, 0);
}

void func_267(int iParam0, var uParam1)//Position - 0x17528
{
	var uVar0[6];
	var uVar1;
	vector3 vVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	
	if (!func_445(iParam0))
	{
		func_469(iParam0);
	}
	if (func_444(iParam0) < 1f)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		return;
	}
	iVar4 = PED::GET_PED_NEARBY_PEDS(AUDIO::_0x0626A247D2405330(), &uVar0, 4294967295);
	iVar5 = 0;
	while (iVar5 < 6)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar5]) && !ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar5], 0)) && !PED::IS_PED_INJURED((*uParam1)[iVar5]))
		{
			if (func_269((*uParam1)[iVar5], &uVar0) == 4294967295)
			{
				func_268(uParam1[iVar5]);
			}
			else
			{
				vVar2 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) - unk_0x8000C77B5F336760((*uParam1)[iVar5], 1) };
				fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
				if (vVar2.z * vVar2.z) < (3f * fVar3)
				{
					func_268(uParam1[iVar5]);
				}
			}
		}
		iVar5++;
	}
	if (iVar4 > 0)
	{
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if ((((ENTITY::DOES_ENTITY_EXIST(uVar0[iVar5]) && !ENTITY::IS_ENTITY_DEAD(uVar0[iVar5], 0)) && !PED::IS_PED_INJURED(uVar0[iVar5])) && PED::IS_PED_HUMAN(uVar0[iVar5])) && !PED::IS_PED_IN_ANY_VEHICLE(uVar0[iVar5], 1))
			{
				if (func_269(uVar0[iVar5], uParam1) == 4294967295)
				{
					vVar2 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) - unk_0x8000C77B5F336760(uVar0[iVar5], 1) };
					fVar3 = ((vVar2.x * vVar2.x) + (vVar2.y * vVar2.y));
					if (vVar2.z * vVar2.z) > (3f * fVar3)
					{
						bVar7 = false;
						iVar6 = 0;
						while (iVar6 < *uParam1)
						{
							if (!ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar6]) || PED::IS_PED_INJURED((*uParam1)[iVar6]))
							{
								(*uParam1)[iVar6] = uVar0[iVar5];
								BRAIN::OPEN_SEQUENCE_TASK(&uVar1);
								BRAIN::TASK_PLAY_ANIM(0, "oddjobs@basejump@", "ped_a_intro", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
								BRAIN::TASK_PLAY_ANIM(0, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, 4294967295, 1, 0, 0, 0, 0);
								CUTSCENE::_0x8D9DF6ECA8768583(uVar1);
								BRAIN::TASK_PERFORM_SEQUENCE(uVar0[iVar5], uVar1);
								BRAIN::CLEAR_SEQUENCE_TASK(&uVar1);
								iVar6 = *uParam1;
								bVar7 = true;
							}
							iVar6++;
						}
						if (!bVar7)
						{
							return;
						}
					}
				}
			}
			iVar5++;
		}
	}
}

void func_268(var uParam0)//Position - 0x1776B
{
	NETWORK::_0x5E3AA4CA2B6FB0EE(*uParam0);
	BRAIN::TASK_PLAY_ANIM(*uParam0, "oddjobs@basejump@", "ped_a_exit", 8f, -8f, 4294967295, 0, 0, 0, 0, 0);
	*uParam0 = 0;
}

int func_269(int iParam0, var uParam1)//Position - 0x1779C
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST((*uParam1)[iVar0]))
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return 4294967295;
}

void func_270(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, var uParam11, var uParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)//Position - 0x177E2
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	VEHICLE::_0xE30524E1871F481D(*uParam36);
	func_364();
	func_363();
	func_479();
	func_42(&(uParam2->f_1A));
	*iParam19 = 0;
	*iParam21 = 0;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = 4294967295;
	*uParam29 = 0;
	*bParam30 = 0;
	func_315(uParam2);
	if (func_445(iParam24))
	{
		func_441(iParam24);
	}
	if (func_445(iParam23))
	{
		func_441(iParam23);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam7))
	{
		if (func_355(func_356(uParam0)))
		{
			VEHICLE::DELETE_MISSION_TRAIN(iParam7);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(*iParam7, 0))
			{
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam7, 4294967295, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					PED::DELETE_PED(&iVar1);
				}
			}
			VEHICLE::DELETE_VEHICLE(iParam7);
		}
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam5)[iVar2]) && !ENTITY::IS_ENTITY_DEAD((*iParam5)[iVar2], 0))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0;
		}
		iVar2++;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam8))
	{
		VEHICLE::DELETE_VEHICLE(iParam8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam9))
	{
		if (!func_314(*iParam9) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam9, 4294967295, 0)))
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam9, 4294967295, 0);
			PED::DELETE_PED(&iVar3);
		}
		VEHICLE::DELETE_VEHICLE(iParam9);
	}
	if (!ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam4);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(AUDIO::_0x0626A247D2405330());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::_0xF9ACF4A08098EA25(AUDIO::_0x0626A247D2405330(), 1);
			ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), unk_0x8000C77B5F336760(iVar0, 1) + Vector(0f, 0f, 2f), 1, 0, 0, 1);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam6) && iVar0 == *iParam6)
			{
				VEHICLE::SET_PLAYERS_LAST_VEHICLE(*iParam6);
				func_274(*iParam6, func_313(iParam20), func_312(iParam20), 24, 0);
				ENTITY::SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
				ENTITY::SET_ENTITY_COORDS(iVar0, func_313(iParam20), 1, 0, 0, 1);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				ENTITY::SET_ENTITY_HEADING(iVar0, func_312(iParam20));
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, 0);
				}
				VEHICLE::DELETE_VEHICLE(&iVar0);
			}
		}
	}
	*iParam15 = 0;
	*iParam17 = 0;
	*iParam18 = 1;
	*uParam26 = 0f;
	*uParam27 = 0f;
	*uParam28 = 0f;
	*bParam31 = 0;
	*bParam32 = 0;
	*bParam33 = 0;
	*bParam34 = 0;
	*iParam35 = 0;
	if (*iParam16 > 4294967295)
	{
		GRAPHICS::DELETE_CHECKPOINT(*uParam11);
		GRAPHICS::DELETE_CHECKPOINT(*uParam12);
		*iParam16 = 4294967295;
	}
	if (HUD::DOES_BLIP_EXIST(iParam13))
	{
		HUD::REMOVE_BLIP(&iParam13);
	}
	if (HUD::DOES_BLIP_EXIST(iParam14))
	{
		HUD::REMOVE_BLIP(&iParam14);
	}
	iVar4 = 0;
	while (iVar4 < *iParam10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*iParam10)[iVar4]) && !ENTITY::IS_ENTITY_DEAD((*iParam10)[iVar4], 0))
		{
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER((*iParam10)[iVar4], 1f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*iParam10)[iVar4], 0, 1);
		}
		(*iParam10)[iVar4] = 0;
		iVar4++;
	}
	func_273(uParam2);
	*iParam3 = 0;
	func_272();
	func_271();
	CAM::DO_SCREEN_FADE_OUT(800);
}

void func_271()//Position - 0x17ABC
{
	Global_6403 = 1;
}

void func_272()//Position - 0x17AC8
{
	int iVar0;
	
	Local_98.f_42 = 4294967295;
	Local_98.f_43 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_98.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_98.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_98.f_9[iVar0 /*7*/].f_5 = 0;
		Local_98.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_98.f_5 = 0;
	Local_98.f_5.f_1 = -1f;
	Local_98.f_5.f_2 = 0;
	Local_98 = 0;
	Local_98.f_1 = 0;
}

void func_273(var uParam0)//Position - 0x17B38
{
	uParam0->f_25B = 0;
}

void func_274(int iParam0, vector3 vParam1, float fParam2, int iParam3, bool bParam4)//Position - 0x17B46
{
	struct<60> Var0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[25]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_1E4[25], 0))
			{
				if (Global_11188.f_1E4[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("BUS")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("TOURBUS"))
			{
				return;
			}
		}
		func_311(iParam3);
		Var0.f_9 = 49;
		Var0.f_3B = 2;
		func_306(iParam0, &Var0);
		if (func_305(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { unk_0x8000C77B5F336760(iParam0, 1) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_11564 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		func_298(iParam3, &Var0, vParam1, fParam2, func_304(iParam0));
		func_275(iParam3, iParam0, 0);
	}
}

void func_275(int iParam0, int iParam1, int iParam2)//Position - 0x17C6F
{
	int iVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (!func_295(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 12) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 10))
	{
		if (Global_11188.f_22B[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_11513 != 4294967295 && Global_11513 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam1, 0))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, 1);
			}
			if (iParam0 == 24)
			{
				Global_19E56.f_7F5D.f_12C1 = func_503();
			}
			if (iParam1 != Global_11188.f_8B[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_294(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iVar0, 0)) && iParam1 != iVar0)
					{
						func_276(iVar0, 145);
					}
				}
				Global_11512 = iParam1;
				Global_11513 = iParam0;
				Global_11514 = iParam2;
			}
		}
	}
}

void func_276(int iParam0, int iParam1)//Position - 0x17D8C
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_277(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, 4294967295, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, 4294967295);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !PED::IS_PED_INJURED(iVar0))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_19E56.f_933.f_21B.f_10CD;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_19E56.f_7F5D.f_13AE[iVar1 /*157*/][iVar2 /*78*/].f_42 = 0;
						Global_19E56.f_7F5D.f_15D8[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (ENTITY::GET_ENTITY_MODEL(iParam0) == Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
			{
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_1)))
				{
					Global_19E56.f_7F5D.f_15E0[iVar1 /*78*/].f_42 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_19E56.f_7F5D.f_15D6 = iParam1;
	Global_11511 = iParam0;
	Global_19E56.f_7F5D.f_15D4 = 1;
	func_306(iParam0, &(Global_19E56.f_7F5D.f_1586));
}

int func_277(int iParam0)//Position - 0x17F8E
{
	if ((((((((((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0)) || func_292(iParam0, 0, 0)) || func_292(iParam0, 1, 0)) || func_292(iParam0, 2, 0)) || func_304(iParam0) != 145) || func_291(iParam0)) || func_290(iParam0)) || func_289(iParam0)) || func_288(iParam0)) || !func_278(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (func_290(iParam0))
		{
		}
		if (func_290(iParam0))
		{
		}
		if (func_292(iParam0, 0, 0))
		{
		}
		if (func_292(iParam0, 1, 0))
		{
		}
		if (func_292(iParam0, 2, 0))
		{
		}
		if (func_304(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_278(int iParam0)//Position - 0x1806D
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_279(iParam0, 0))
	{
		return 0;
	}
	if (((VEHICLE::IS_THIS_MODEL_A_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(iParam0)) || VEHICLE::IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return 0;
			break;
	}
	return 1;
}

int func_279(int iParam0, bool bParam1)//Position - 0x1821E
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
		if (!func_287())
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
		if ((((!func_286() && !func_285()) && !func_284()) && !func_283()) && !func_287())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("HOTKNIFE") || iParam0 == joaat("CARBONRS")) || iParam0 == joaat("KHAMELION"))
	{
		if ((MISC::IS_DURANGO_VERSION() || MISC::IS_PC_VERSION()) || MISC::IS_ORBIS_VERSION())
		{
		}
		else if (!func_284())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_282(iParam0))
		{
			return 0;
		}
	}
	if (!func_280(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_280(int iParam0)//Position - 0x1839E
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_281())
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

int func_281()//Position - 0x1846A
{
	if (MISC::IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_282(int iParam0)//Position - 0x18481
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

int func_283()//Position - 0x1A17C
{
	return 0;
}

int func_284()//Position - 0x1A185
{
	return 1;
}

int func_285()//Position - 0x1A18E
{
	return 1;
}

int func_286()//Position - 0x1A197
{
	if (DLC::IS_DLC_PRESENT(3068027362))
	{
		return 1;
	}
	return 0;
}

int func_287()//Position - 0x1A1B0
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

int func_288(int iParam0)//Position - 0x1A26B
{
	int iVar0;
	char* sVar1;
	
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	sVar1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(sVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_279(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_289(int iParam0)//Position - 0x1A2B1
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_16240[iVar0]))
		{
			if (Global_16240[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_290(int iParam0)//Position - 0x1A2EC
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_16222[iVar0]) && OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_16222[iVar0], 0))
			{
				if (Global_16222[iVar0] == iParam0 && ENTITY::GET_ENTITY_MODEL(Global_16222[iVar0]) == ENTITY::GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_291(int iParam0)//Position - 0x1A368
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[24]))
	{
		if (iParam0 == Global_11188.f_1E4[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_1E4[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_11188.f_1E4[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_292(int iParam0, int iParam1, bool bParam2)//Position - 0x1A450
{
	int iVar0;
	char* sVar1;
	int iVar2;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_293(iParam1, iVar0, &sVar1, &iVar2))
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

int func_293(int iParam0, int iParam1, char* sParam2, var uParam3)//Position - 0x1A4C1
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

int func_294(int iParam0)//Position - 0x1A599
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return Global_11188.f_8B[iParam0];
}

int func_295(var uParam0, int iParam1)//Position - 0x1A5B5
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_A = 0;
	uParam0->f_B = 0;
	uParam0->f_C = 145;
	uParam0->f_D = 4294967295;
	uParam0->f_E = 0;
	uParam0->f_F = { 0f, 0f, 0f };
	uParam0->f_12 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_296(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_296(0, 1);
			uParam0->f_C = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_296(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_296(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_296(1, 1);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_296(1, 2);
			uParam0->f_C = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_296(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_296(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_296(2, 1);
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			iVar0 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_E = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_C = 0;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_E = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_C = 1;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_E = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_C = 2;
			uParam0->f_D = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_E = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_C = 0;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_E = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_C = 1;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_E = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_C = 2;
			uParam0->f_D = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_E = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_C = 0;
			uParam0->f_D = 360;
			uParam0->f_F = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_12 = { -738.0606f, -1423.068f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_E = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_C = 1;
			uParam0->f_D = 360;
			uParam0->f_F = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_12 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_E = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_C = 2;
			uParam0->f_D = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_E = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 0;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_E = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 1;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_E = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = 2;
			uParam0->f_D = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_E = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_E = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_E = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_C = (0 + iVar1);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_E = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_E = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_A = 126;
			uParam0->f_B = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_A = 157;
			uParam0->f_B = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_C = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_D = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_287())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_287())
			{
				uParam0->f_4 = joaat("BLIMP2");
			}
			else
			{
				uParam0->f_4 = joaat("BLIMP");
			}
			uParam0->f_D = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_D = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_19E56.f_7F5D.f_45[uParam0->f_E /*78*/].f_42;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA")) || uParam0->f_4 == joaat("LUXOR")) || uParam0->f_4 == joaat("SHAMAL")) || uParam0->f_4 == joaat("TITAN")) || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_305(Global_19E56.f_7F5D.f_748[uParam0->f_E /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_7F5D.f_748[uParam0->f_E /*3*/] };
		}
		if (Global_19E56.f_7F5D.f_78E[uParam0->f_E] != -1f)
		{
			uParam0->f_3 = Global_19E56.f_7F5D.f_78E[uParam0->f_E];
		}
	}
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 19))
	{
		if (!func_305(Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_933.f_21B.f_DF0[1 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19E56.f_933.f_21B.f_E05[1 /*4*/][uParam0->f_C];
		}
	}
	else if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_9, 20))
	{
		if (!func_305(Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_19E56.f_933.f_21B.f_DF0[0 /*10*/][uParam0->f_C /*3*/] };
			uParam0->f_3 = Global_19E56.f_933.f_21B.f_E05[0 /*4*/][uParam0->f_C];
		}
	}
	return iVar0;
}

int func_296(int iParam0, int iParam1)//Position - 0x1BCAC
{
	struct<82> Var0;
	
	if (func_37(iParam0))
	{
		Var0.f_B = 12;
		Var0.f_1F = 49;
		Var0.f_51 = 2;
		func_297(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_297(int iParam0, var uParam1, int iParam2)//Position - 0x1BCEE
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

void func_298(int iParam0, var uParam1, vector3 vParam2, float fParam3, int iParam4)//Position - 0x1BF4A
{
	if (func_295(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 10))
		{
			func_303(iParam0);
			func_302(uParam1, &(Global_19E56.f_7F5D.f_45[Global_11188.f_22B[0 /*21*/].f_E /*78*/]));
			if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 11))
			{
				Global_19E56.f_7F5D.f_748[Global_11188.f_22B[0 /*21*/].f_E /*3*/] = { vParam2 };
				Global_19E56.f_7F5D.f_78E[Global_11188.f_22B[0 /*21*/].f_E] = fParam3;
			}
			else
			{
				Global_19E56.f_7F5D.f_748[Global_11188.f_22B[0 /*21*/].f_E /*3*/] = { 0f, 0f, 0f };
				Global_19E56.f_7F5D.f_78E[Global_11188.f_22B[0 /*21*/].f_E] = -1f;
			}
			Global_19E56.f_7F5D.f_7A6[Global_11188.f_22B[0 /*21*/].f_E] = iParam4 + 1;
			func_299(iParam0, 1);
		}
	}
}

void func_299(int iParam0, bool bParam1)//Position - 0x1C04B
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_301(iParam0, 0))
		{
			func_300(iParam0, 1, 0);
			func_300(iParam0, 2, 0);
			func_300(iParam0, 3, 0);
			func_300(iParam0, 4, 0);
			func_300(iParam0, 0, 1);
			Global_11188[iParam0] = 1;
		}
	}
	else
	{
		func_300(iParam0, 0, 0);
	}
}

void func_300(int iParam0, int iParam1, bool bParam2)//Position - 0x1C0A8
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(Global_19E56.f_7F5D[iParam0]), iParam1);
	}
}

bool func_301(int iParam0, int iParam1)//Position - 0x1C0E3
{
	if (iParam0 == 4294967295)
	{
		return 0;
	}
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_19E56.f_7F5D[iParam0], iParam1);
}

void func_302(var uParam0, var uParam1)//Position - 0x1C106
{
	uParam1->f_42 = uParam0->f_42;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_3B = { uParam0->f_3B };
	uParam1->f_3E = uParam0->f_3E;
	uParam1->f_3F = uParam0->f_3F;
	uParam1->f_40 = uParam0->f_40;
	uParam1->f_41 = uParam0->f_41;
	uParam1->f_4D = uParam0->f_4D;
	uParam1->f_43 = uParam0->f_43;
	uParam1->f_45 = uParam0->f_45;
	uParam1->f_44 = uParam0->f_44;
	uParam1->f_47 = uParam0->f_47;
	uParam1->f_48 = uParam0->f_48;
	uParam1->f_49 = uParam0->f_49;
	uParam1->f_4A = uParam0->f_4A;
	uParam1->f_4B = uParam0->f_4B;
	uParam1->f_4C = uParam0->f_4C;
}

void func_303(int iParam0)//Position - 0x1C1D2
{
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_295(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_8B[iParam0], true, 1);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_11188.f_8B[iParam0]));
			Global_11188.f_8B[iParam0] = 0;
		}
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 13))
		{
			func_299(iParam0, 0);
		}
	}
}

int func_304(int iParam0)//Position - 0x1C24C
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

bool func_305(vector3 vParam0, vector3 vParam1, bool bParam2)//Position - 0x1C2AF
{
	if (bParam2)
	{
		return (vParam0.x == vParam1.x && vParam0.y == vParam1.y);
	}
	return ((vParam0.x == vParam1.x && vParam0.y == vParam1.y) && vParam0.z == vParam1.z);
}

void func_306(int iParam0, var uParam1)//Position - 0x1C2F6
{
	int iVar0;
	
	if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(iParam0, 0))
	{
		func_310(uParam1);
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
		if (uParam1->f_41 == 4294967295 && !func_309(uParam1->f_42))
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
		func_308(&iParam0, &(uParam1->f_9), &(uParam1->f_3B));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				MISC::SET_BIT(&(uParam1->f_4D), func_307(iVar0 + 1));
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

int func_307(int iParam0)//Position - 0x1C5A1
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

int func_308(int iParam0, var uParam1, var uParam2)//Position - 0x1C651
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

int func_309(int iParam0)//Position - 0x1C844
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

void func_310(var uParam0)//Position - 0x1C864
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

void func_311(int iParam0)//Position - 0x1C914
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_303(iParam0);
	func_299(iParam0, 0);
}

float func_312(int iParam0)//Position - 0x1C93B
{
	switch (iParam0)
	{
		case 0:
			return 192.1528f;
		
		case 1:
			return 144.2205f;
		
		case 2:
			return 82.0341f;
		
		case 3:
			return 134.9389f;
		
		case 4:
			return 241.8704f;
		
		case 5:
			return 342.318f;
		
		case 6:
			return 174.9318f;
		
		case 7:
			return 186.4915f;
		
		case 8:
			return 93.0806f;
		
		case 9:
			return 213.7284f;
		
		case 10:
			return 55.5964f;
		
		case 11:
			return 61.2421f;
		
		case 12:
			return 304.1476f;
		
		default:
	}
	return 0f;
	return 0f;
}

Vector3 func_313(int iParam0)//Position - 0x1CA05
{
	switch (iParam0)
	{
		case 0:
			return -835.2823f, -1303.246f, 4.0004f;
		
		case 1:
			return 1236.613f, 143.0208f, 80.8622f;
		
		case 2:
			return 2463.523f, 1495.492f, 34.8794f;
		
		case 3:
			return -262.0742f, 6590.702f, 0.9787f;
		
		case 4:
			return -45.396f, -784.1727f, 43.2721f;
		
		case 5:
			return -182.8192f, -890.5899f, 28.3452f;
		
		case 6:
			return -1236.648f, 4557.094f, 185.7374f;
		
		case 7:
			return -731.5519f, 4497.153f, 75.5991f;
		
		case 8:
			return -790.7881f, 293.895f, 84.7917f;
		
		case 9:
			return -1426.048f, 4408.049f, 46.1198f;
		
		case 10:
			return 2491.808f, 5001.821f, 44.1871f;
		
		case 11:
			return 1067.101f, -198.2404f, 68.6323f;
		
		case 12:
			return -762.3691f, 4301.332f, 145.2817f;
		
		default:
	}
	return 0f, 0f, 0f;
	return 0f, 0f, 0f;
}

int func_314(int iParam0)//Position - 0x1CB55
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

void func_315(int iParam0)//Position - 0x1CB98
{
	if (*uParam0 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*iParam0 = 0;
	}
	iParam0->f_1 = 0;
	iParam0->f_2 = 0;
	iParam0->f_C[0] = 0;
	iParam0->f_C[1] = 0;
	iParam0->f_C[2] = 0;
	iParam0->f_C[3] = 0;
	iParam0->f_C[4] = 0;
	iParam0->f_C[5] = 0;
	iParam0->f_C[6] = 0;
	iParam0->f_C[7] = 0;
	iParam0->f_3[0] = 358;
	iParam0->f_3[1] = 358;
	iParam0->f_3[2] = 358;
	iParam0->f_3[3] = 358;
	iParam0->f_3[4] = 358;
	iParam0->f_3[5] = 358;
	iParam0->f_3[6] = 358;
	iParam0->f_3[7] = 358;
	iParam0->f_15[0] = 0;
	iParam0->f_15[1] = 0;
	iParam0->f_15[2] = 0;
	iParam0->f_15[3] = 0;
}

int func_316(var uParam0, int iParam1, int iParam2)//Position - 0x1CC6B
{
	if ((MISC::GET_GAME_TIMER() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_5 = MISC::GET_GAME_TIMER();
	if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > iParam2)
	{
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2, iParam1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_3, iParam1))
		{
			uParam0->f_4 = MISC::GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

int func_317(var uParam0, int iParam1, vector3 vParam2, vector3 vParam3, vector3 vParam4, var uParam5, var uParam6)//Position - 0x1CCC9
{
	vector3 vVar0;
	
	switch (uParam0->f_3)
	{
		case 0:
			if (func_444(iParam1) >= 0f)
			{
				vParam4.z = func_47(vParam4.z, -8.909f, 8.909f);
				uParam5->f_2 = (uParam5->f_2 + vParam4.z);
				vVar0 = { func_446(vParam3, vParam4.z) };
				CAM::SET_CAM_PARAMS(func_416(uParam0, 0), vParam2 + vVar0, *uParam5, *uParam6, 300, 1, 1, 2);
				CAM::SET_CAM_ACTIVE_WITH_INTERP(func_416(uParam0, 1), func_416(uParam0, 0), SYSTEM::FLOOR((1000f * (1.1f - 0f))), 2, 1);
				uParam0->f_3 = 1;
			}
			break;
		
		case 1:
			if (func_444(iParam1) >= 0f)
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				CAM::RENDER_SCRIPT_CAMS(false, 1, SYSTEM::FLOOR((1000f * (1.1f - 0f))), 0, 0, 0);
				uParam0->f_3 = 2;
			}
			break;
		
		case 2:
			if (func_444(iParam1) >= 1.1f)
			{
				uParam0->f_3 = 3;
				return 1;
			}
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_318(int iParam0, var uParam1, int iParam2)//Position - 0x1CDDD
{
	vector3 vVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	
	iVar1 = func_416(uParam1, 0);
	iVar2 = func_416(uParam1, 1);
	CAM::SET_CAM_NEAR_CLIP(iVar2, func_319());
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 2f, -0.3f, -7.7824f) };
	CAM::SET_CAM_COORD(iVar2, vVar3);
	vVar0 = { CAM::GET_CAM_ROT(iVar1, 2) };
	vVar0.x = 0f;
	CAM::SET_CAM_ROT(iVar2, vVar0, 2);
	CAM::SET_CAM_FOV(iVar2, CAM::GET_CAM_FOV(iVar1));
	CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
	uParam1->f_3 = 0;
	func_359(iParam2);
}

float func_319()//Position - 0x1CE5C
{
	if (MISC::IS_PC_VERSION())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_320(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam7)//Position - 0x1CE78
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	
	iVar0 = func_416(uParam1, 0);
	vVar1 = { func_323(uParam2) };
	if (PAD::IS_LOOK_INVERTED())
	{
		vVar1.y = (vVar1.y * -1f);
	}
	if (!PAD::_IS_INPUT_DISABLED(2))
	{
		uParam5->f_2 = (uParam5->f_2 - ((vVar1.x * MISC::GET_FRAME_TIME()) * 100f));
		*uParam5 = (*uParam5 + ((vVar1.y * MISC::GET_FRAME_TIME()) * 100f));
		if (MISC::ABSF(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * MISC::GET_FRAME_TIME()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (MISC::ABSF(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * MISC::GET_FRAME_TIME()) * 5f));
		}
		else
		{
			*uParam5 = 0f;
		}
	}
	else
	{
		uParam5->f_2 = (-vVar1.x * 130f);
		*uParam5 = (vVar1.y * 130f);
	}
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * MISC::GET_FRAME_TIME()));
	if (uParam4->f_2 > (0.5f * 43.7465f))
	{
		uParam4->f_2 = (0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	else if (uParam4->f_2 < (-0.5f * 43.7465f))
	{
		uParam4->f_2 = (-0.5f * 43.7465f);
		uParam5->f_2 = 0f;
	}
	*uParam4 = (*uParam4 + (*uParam5 * MISC::GET_FRAME_TIME()));
	if (*uParam4 > (0.5f * 21.6f))
	{
		*uParam4 = (0.5f * 21.6f);
		*uParam5 = 0f;
	}
	else if (*uParam4 < (-0.5f * 21.6f))
	{
		*uParam4 = (-0.5f * 21.6f);
		*uParam5 = 0f;
	}
	vVar2 = { func_446(vParam7, uParam4->f_2) };
	CAM::SET_CAM_COORD(iVar0, vParam6 + vVar2);
	CAM::SET_CAM_ROT(iVar0, (-33f + *uParam4), 0f, ((-88.515f + func_447(uParam0)) + uParam4->f_2), 2);
	CAM::SET_CAM_NEAR_CLIP(iVar0, func_319());
	if (!CAM::IS_SCREEN_FADED_IN() || !func_445(iParam3))
	{
		func_359(iParam3);
	}
	else
	{
		if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			func_322("BJ_VLOOKHLP");
		}
		if (func_445(iParam3) && func_444(iParam3) > 0.5f)
		{
			if (func_321(uParam2, 1))
			{
				func_441(iParam3);
				CAM::DETACH_CAM(iVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_321(var uParam0, int iParam1)//Position - 0x1D0B6
{
	return (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_2, iParam1) && !INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(uParam0->f_3, iParam1));
}

void func_322(char* sParam0)//Position - 0x1D0D8
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 1, true, 4294967295);
}

Vector3 func_323(var uParam0)//Position - 0x1D0EE
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_324(int iParam0, vector3 vParam1)//Position - 0x1D0FE
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = (0.006f * SYSTEM::SIN((((0.25f * 0.5f) * SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER())) + 1.5f)));
	fVar1 = (0.006f * SYSTEM::SIN((((0.25f * 0.4f) * SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER())) + 3f)));
	fVar2 = (0.006f * SYSTEM::SIN(((0.25f * 1f) * SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()))));
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		ENTITY::SET_ENTITY_COORDS(iParam0, vParam1 + Vector(fVar2, fVar1, fVar0), 1, 0, 0, 1);
	}
}

int func_325(char* sParam0)//Position - 0x1D18A
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_326(char* sParam0, int iParam1)//Position - 0x1D19D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, 0, true, iParam1);
}

void func_327(var uParam0, bool bParam1)//Position - 0x1D1B4
{
	if (bParam1)
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_211(uParam0, 20, 0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_211(uParam0, 20, 0);
	}
}

void func_328(char* sParam0, int iParam1, int iParam2)//Position - 0x1D1FC
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, 1);
}

struct<4> func_329(int iParam0)//Position - 0x1D215
{
	struct<4> Var0;
	
	switch (iParam0)
	{
		case 3:
		case 12:
		case 6:
			StringCopy(&Var0, "BJ_OBJ_JCL", 16);
			break;
		
		case 4:
			StringCopy(&Var0, "BJ_OBJ_JDB", 16);
			break;
		
		case 5:
			StringCopy(&Var0, "BJ_OBJ_JCR", 16);
			break;
		
		case 8:
			StringCopy(&Var0, "BJ_OBJ_JB", 16);
			break;
		
		default:
			break;
	}
	return Var0;
}

void func_330(int iParam0, float fParam1)//Position - 0x1D27B
{
	if (!func_445(iParam0))
	{
		func_40(iParam0, fParam1);
	}
}

void func_331(int iParam0, int iParam1)//Position - 0x1D295
{
	if (func_445(iParam0))
	{
		if (func_333(iParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_207(AUDIO::_0x0626A247D2405330(), "BASEJUMP_ABOUT_TO_JUMP", 24);
		}
	}
	else if (!func_332())
	{
		func_330(iParam0, 0f);
	}
}

int func_332()//Position - 0x1D2E1
{
	if (Global_3DCE != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_333(int iParam0, float fParam1)//Position - 0x1D303
{
	if (func_334(iParam0, fParam1))
	{
		func_441(iParam0);
		return 1;
	}
	return 0;
}

int func_334(int iParam0, float fParam1)//Position - 0x1D321
{
	if (func_445(iParam0))
	{
		if (func_444(iParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_335(var uParam0)//Position - 0x1D343
{
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), uParam0, 1);
		if ((((*uParam0 != 0 && *uParam0 != joaat("weapon_unarmed")) && *uParam0 != joaat("weapon_electric_fence")) && *uParam0 != joaat("gadget_parachute")) && *uParam0 != joaat("object"))
		{
			WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), 4294967295, false, true);
		}
		PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 66, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 67, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 68, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 99, 1);
		PAD::DISABLE_CONTROL_ACTION(0, 100, 1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	}
}

int func_336(var uParam0, int iParam1, int iParam2, int iParam3, var uParam4, var uParam5, int iParam6, int iParam7, var uParam8, int iParam9, var uParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)//Position - 0x1D3E9
{
	vector3 vVar0;
	var uVar1;
	var uVar2;
	vector3 vVar3;
	vector3 vVar4;
	vector3 vVar5;
	vector3 vVar6;
	vector3 vVar7;
	vector3 vVar8;
	vector3 vVar9;
	vector3 vVar10;
	float fVar11;
	float fVar12;
	float fVar13;
	float fVar14;
	bool bVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	var uVar21;
	var uVar22;
	
	vVar4 = { func_357(uParam0, *iParam6) };
	bVar15 = *iParam6 == (iParam9 - 1);
	(*iParam3)[0] = (*iParam3)[0];
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		ENTITY::GET_ENTITY_MATRIX(AUDIO::_0x0626A247D2405330(), &vVar0, &uVar1, &uVar2, &vVar3);
	}
	if (bVar15)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1, 0))
		{
			vVar9 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam1, func_358(uParam0)) };
			fVar14 = (vVar9.z - vVar4.z);
			if (bParam20)
			{
				if (HUD::DOES_BLIP_EXIST(*iParam11))
				{
					HUD::SET_BLIP_COORDS(*iParam11, vVar9);
				}
				else
				{
					*iParam11 = HUD::ADD_BLIP_FOR_COORD(vVar9);
					HUD::SET_BLIP_COLOUR(*iParam11, 5);
					HUD::SET_BLIP_SCALE(*iParam11, 1.2f);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam11, "BJ_BLIP_TGT");
				}
			}
			vVar10 = { func_357(uParam0, 0) };
			vVar9.z = (vVar10.z + fVar14);
			vVar4 = { vVar9 };
		}
		else if (func_356(uParam0) != 0)
		{
			vVar9 = { func_357(uParam0, 0) };
			vVar4 = { vVar9 };
		}
		else
		{
			vVar9 = { vVar4 };
		}
		vVar6 = { vVar3 - vVar4 };
		if (func_356(uParam0) == 0)
		{
			GRAPHICS::DRAW_MARKER(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, func_345(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			GRAPHICS::DRAW_MARKER(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, func_345(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			GRAPHICS::DRAW_MARKER(6, vVar9, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_345(vVar9, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*iParam7 != 4294967295)
		{
			GRAPHICS::DELETE_CHECKPOINT(*uParam4);
			*iParam7 = 4294967295;
		}
	}
	else
	{
		HUD::GET_HUD_COLOUR(134, &iVar17, &iVar18, &iVar19, &uVar20);
		vVar6 = { vVar3 - vVar4 };
		vVar5 = { func_357(uParam0, *iParam6 + 1) };
		GRAPHICS::DRAW_MARKER(6, vVar4, func_458(vVar6), 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_345(vVar4, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0)
			{
				GRAPHICS::DELETE_CHECKPOINT(*uParam4);
				*uParam4 = 0;
				if (*iParam7 < (iParam9 - 2))
				{
					GRAPHICS::DELETE_CHECKPOINT(*uParam5);
					*uParam4 = 0;
				}
			}
			*uParam4 = GRAPHICS::CREATE_CHECKPOINT(15, vVar4, vVar5, 9f, iVar17, iVar18, iVar19, func_345(vVar9, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			if (*iParam6 < (iParam9 - 2))
			{
				*uParam5 = GRAPHICS::CREATE_CHECKPOINT(15, vVar5, func_357(uParam0, *iParam6 + 2), (9f * 0.5f), iVar17, iVar18, iVar19, func_345(vVar9, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))), 0);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 1))
		{
			GRAPHICS::DRAW_MARKER(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 240, 200, 80, func_345(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			GRAPHICS::DRAW_MARKER(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 240, 200, 80, func_345(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			GRAPHICS::DRAW_MARKER(6, vVar5, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_345(vVar5, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		else
		{
			GRAPHICS::DRAW_MARKER(6, vVar5, func_458(vVar3 - vVar5), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_345(vVar5, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*uParam4 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam4, iVar17, iVar18, iVar19, func_345(vVar4, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
		if (*uParam5 != 0)
		{
			GRAPHICS::SET_CHECKPOINT_RGBA(*uParam5, iVar17, iVar18, iVar19, func_345(vVar5, 25, SYSTEM::CEIL((200f * (SYSTEM::TO_FLOAT(113) / SYSTEM::TO_FLOAT(170))))));
		}
	}
	if (!bParam19)
	{
		return 0;
	}
	if ((PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 0 || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 1) || (PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 2 && !PAD::IS_CONTROL_PRESSED(0, 80)))
	{
		if (!GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar4, &uVar21, &uVar22))
		{
			if (iLocal_543)
			{
				func_343(vVar4, uParam15, uParam16, uParam17);
				if (func_445(&iLocal_545))
				{
					func_441(&iLocal_545);
				}
			}
			else if (func_445(&iLocal_545))
			{
				if (func_341(&iLocal_545) > 0.5f)
				{
					func_441(&iLocal_545);
					iLocal_543 = 1;
				}
			}
			else
			{
				func_469(&iLocal_545);
			}
		}
		else if (iLocal_543)
		{
			func_343(vVar4, uParam15, uParam16, uParam17);
			if (func_445(&iLocal_545))
			{
				if (func_341(&iLocal_545) > 0.5f)
				{
					func_441(&iLocal_545);
					iLocal_543 = 0;
				}
			}
			else
			{
				func_469(&iLocal_545);
			}
		}
		else if (func_445(&iLocal_545))
		{
			func_441(&iLocal_545);
		}
	}
	else
	{
		iLocal_543 = 0;
	}
	if (func_340(iParam14, uParam18, &iParam1))
	{
		if (HUD::DOES_BLIP_EXIST(*iParam11))
		{
			HUD::REMOVE_BLIP(iParam11);
		}
		if (HUD::DOES_BLIP_EXIST(*iParam12))
		{
			HUD::REMOVE_BLIP(iParam12);
		}
		if (!bVar15)
		{
			return 2;
		}
		fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
		if (((vVar6.z < 5f && vVar6.z > -2f) && fVar12 < 15f) || func_254(iParam1, iParam2))
		{
			*uParam10 = func_256(SYSTEM::CEIL(((100f * (15f - fVar12)) / 15f)) + 4, 0, 100);
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_339())
	{
		if (PLAYER::GET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246()))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 0);
		}
	}
	else if (!bVar15)
	{
		fVar11 = SYSTEM::VMAG2(vVar6);
		if (fVar11 < (22f * 22f))
		{
			if (fVar11 < (10f * 10f))
			{
				bVar16 = true;
			}
			else if (func_263(vVar0, -vVar6 / FtoV(SYSTEM::SQRT(fVar11))) < 0.08f)
			{
				bVar16 = true;
			}
			if (bVar16)
			{
				*uParam8++;
				func_338(iParam13, 1);
				func_213(func_411(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				iLocal_544 = 0;
			}
			if (!bVar16 && !iLocal_544)
			{
				iLocal_544 = 1;
			}
		}
		else if (PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 0 || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 4294967295)
		{
			if (vVar6.z < -22f)
			{
				func_338(iParam13, 0);
				bVar16 = true;
			}
		}
		else
		{
			vVar8 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(AUDIO::_0x0626A247D2405330()) };
			vVar8.z = 0f;
			vVar8 = { func_458(vVar8) };
			vVar7 = { -vVar6.x, -vVar6.y, 0f };
			vVar7 = { func_458(vVar7) };
			fVar13 = ((vVar3.z - 32f) + (32f * func_337(vVar8, vVar7)));
			fVar12 = SYSTEM::SQRT(((vVar6.x * vVar6.x) + (vVar6.y * vVar6.y)));
			if ((vVar3.z - fVar13) < fVar12)
			{
				fVar13 = (fVar13 - (0.05f * ((fVar13 - vVar3.z) + fVar12)));
				if (fVar13 < (vVar4.z - 22f))
				{
					func_338(iParam13, 0);
					bVar16 = true;
				}
			}
		}
		if (iLocal_544)
		{
			if (SYSTEM::VMAG2(vVar6) >= (22f * 22f))
			{
				*uParam8++;
				func_338(iParam13, 1);
				func_213(func_411(), 1, SYSTEM::FLOOR((30f * fParam21)), 0, 0);
				bVar16 = true;
				iLocal_544 = 0;
			}
		}
		if (bVar16)
		{
			*iParam6++;
			if (HUD::DOES_BLIP_EXIST(*iParam11))
			{
				HUD::REMOVE_BLIP(iParam11);
			}
			if (HUD::DOES_BLIP_EXIST(*iParam12))
			{
				*iParam11 = *iParam12;
				*iParam12 = 0;
				HUD::SET_BLIP_SCALE(*iParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 1))
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam11, "BJ_BLIP_TGT");
				}
				else
				{
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 1))
			{
				if (!HUD::DOES_BLIP_EXIST(*iParam12))
				{
					*iParam12 = HUD::ADD_BLIP_FOR_COORD(func_357(uParam0, *iParam6 + 1));
					HUD::SET_BLIP_COLOUR(*iParam12, 5);
					HUD::SET_BLIP_SCALE(*iParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 1))
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam12, "BJ_BLIP_TGT");
					}
					else
					{
						HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*iParam12 = 0;
			}
			BRAIN::TASK_LOOK_AT_COORD(AUDIO::_0x0626A247D2405330(), func_357(uParam0, *iParam6), 4294967295, 0, 2);
		}
	}
	return 0;
}

float func_337(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x1DCE5
{
	return ((Param0 * Param2) + (Param0.f_1 * Param2.f_1));
}

void func_338(var uParam0, bool bParam1)//Position - 0x1DCFC
{
	*uParam0 = AUDIO::GET_SOUND_ID();
	if (bParam1)
	{
		unk_0x1190AB7024CBD8CB(*uParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 1);
	}
	else
	{
		func_328("BJ_MISSED", 7500, 1);
		unk_0x1190AB7024CBD8CB(*uParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", 1);
	}
}

int func_339()//Position - 0x1DD3F
{
	if (((PED::IS_PED_RAGDOLL(AUDIO::_0x0626A247D2405330()) && (PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 3 || PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330()) == 4294967295)) && ENTITY::GET_ENTITY_HEIGHT_ABOVE_GROUND(AUDIO::_0x0626A247D2405330()) > 50f) && !PLAYER::GET_PLAYER_HAS_RESERVE_PARACHUTE(CAM::_0xDC9DA9E8789F5246()))
	{
		return 1;
	}
	return 0;
}

bool func_340(var uParam0, var uParam1, int iParam2)//Position - 0x1DD97
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		return 1;
	}
	iVar0 = AUDIO::_0x0626A247D2405330();
	if (!*uParam1)
	{
		iVar1 = PED::GET_PED_PARACHUTE_LANDING_TYPE(iVar0);
		if (iVar1 != 4294967295 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))
		{
			*uParam1 = 1;
			*uParam0 = iVar1;
		}
	}
	return (((ENTITY::IS_ENTITY_IN_WATER(AUDIO::_0x0626A247D2405330()) || (PED::GET_PED_PARACHUTE_STATE(iVar0) == 3 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || (PED::GET_PED_PARACHUTE_STATE(iVar0) == 4294967295 && !ENTITY::IS_ENTITY_IN_AIR(iVar0))) || (((ENTITY::DOES_ENTITY_EXIST(*iParam2) && !PED::IS_PED_INJURED(iVar0)) && !ENTITY::IS_ENTITY_DEAD(*iParam2, 0)) && PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar0, *iParam2)));
}

float func_341(int iParam0)//Position - 0x1DE50
{
	if (func_445(iParam0))
	{
		if (func_342(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_41(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return 0f;
}

bool func_342(int iParam0)//Position - 0x1DE8C
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 2);
}

void func_343(vector3 vParam0, var uParam1, var uParam2, var uParam3)//Position - 0x1DE9C
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	
	if (GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vParam0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_344(vParam0, &fVar2, &fVar3);
	if (fVar2 != 0f && fVar3 != 0f)
	{
		if (fVar2 >= 0.7999f)
		{
			fVar4 = 90f;
		}
		else if (fVar2 <= 0.2f)
		{
			fVar4 = -90f;
		}
		else if (fVar3 <= 0.2f)
		{
			fVar4 = 0f;
		}
		else if (fVar3 >= 0.7999f)
		{
			fVar4 = 180f;
		}
		GRAPHICS::GET_SCREEN_RESOLUTION(&iVar8, &iVar9);
		fVar7 = (SYSTEM::TO_FLOAT(iVar8) / SYSTEM::TO_FLOAT(iVar9));
		if (fVar4 == 0f || fVar4 == 180f)
		{
			fVar5 = ((0.05f * 16f) / 9f);
			fVar6 = (0.05f / fVar7);
		}
		else
		{
			fVar5 = 0.05f;
			fVar6 = (0.05f * ((16f / 9f) / fVar7));
		}
		if ((fVar4 != *uParam3 || (*uParam1 == 0f && *uParam2 == 0f)) || (MISC::ABSF((fVar2 - *uParam1)) < 0.04f && MISC::ABSF((fVar3 - *uParam2)) < 0.04f))
		{
			GRAPHICS::DRAW_SPRITE("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 240, 200, 80, 170, 0);
		}
		*uParam3 = fVar4;
	}
	*uParam1 = fVar2;
	*uParam2 = fVar3;
}

void func_344(vector3 vParam0, var uParam1, var uParam2)//Position - 0x1E00B
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	if (!func_305(vParam0, 0f, 0f, 0f, 0))
	{
		HUD::_GET_SCREEN_COORD_FROM_WORLD_COORD(vParam0, &fVar0, &fVar1);
	}
	if (fVar0 >= 0.5f)
	{
		vVar2.x = (fVar0 - 0.5f);
	}
	else
	{
		vVar2.x = (0.5f - fVar0);
	}
	if (fVar1 >= 0.5f)
	{
		vVar2.y = (fVar1 - 0.5f);
	}
	else
	{
		vVar2.y = (0.5f - fVar1);
	}
	vVar2.z = 0f;
	func_458(vVar2);
	vVar2.x = (vVar2.x * 0.75f);
	vVar2.y = (vVar2.y * 0.75f);
	if (fVar0 >= 0.5f)
	{
		fVar0 = (0.5f + vVar2.x);
	}
	else
	{
		fVar0 = (0.5f - vVar2.x);
	}
	if (fVar1 >= 0.5f)
	{
		fVar1 = (0.5f + vVar2.y);
	}
	else
	{
		fVar1 = (0.5f - vVar2.y);
	}
	*uParam1 = fVar0;
	*uParam2 = fVar1;
}

int func_345(vector3 vParam0, int iParam1, int iParam2)//Position - 0x1E0F2
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), true);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam2;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam2 - SYSTEM::CEIL((IntToFloat((iParam2 - iParam1)) * fVar3)));
		}
	}
	if (iVar1 < iParam1)
	{
		iVar1 = iParam1;
	}
	return iVar1;
}

void func_346(int iParam0)//Position - 0x1E15E
{
	if (func_445(iParam0) && func_444(iParam0) > 7.5f)
	{
		func_441(iParam0);
	}
}

int func_347(var uParam0, int iParam1, var uParam2)//Position - 0x1E186
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	float fVar3;
	
	if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_FLYING_VEHICLE(AUDIO::_0x0626A247D2405330()))
	{
		*uParam2 = 1;
		return 1;
	}
	vVar1 = { unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1) };
	if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 1);
		if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
		{
			return 0;
		}
		else if (!MISC::GET_GROUND_Z_FOR_3D_COORD(unk_0x8000C77B5F336760(iVar0, 1), &fVar3, 0, 0))
		{
			return 0;
		}
		else if (vVar1.z >= (fVar3 + 1.5f))
		{
			return 0;
		}
	}
	if (ENTITY::IS_ENTITY_IN_AIR(AUDIO::_0x0626A247D2405330()))
	{
		return 0;
	}
	else if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar1, &fVar3, 0, 0))
	{
		return 0;
	}
	else if (vVar1.z >= (fVar3 + 1.5f))
	{
		return 0;
	}
	vVar2 = { func_357(uParam0, 0) };
	if (vVar1.z < (vVar2.z + 5f))
	{
		*uParam2 = 1;
		return 1;
	}
	if (iParam1 == 5)
	{
		if (vVar1.z < 288f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 4)
	{
		if (vVar1.z < 305f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 8)
	{
		if (vVar1.z < 227f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	else if (iParam1 == 6 || iParam1 == 12)
	{
		if (SYSTEM::VDIST2(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), func_456(iParam1)) > 3600f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}

int func_348()//Position - 0x1E303
{
	if (CAM::_0xEE778F8C7E1142E2(CAM::_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

var func_349(var uParam0)//Position - 0x1E31C
{
	return uParam0->f_54;
}

void func_350(int iParam0, bool bParam1)//Position - 0x1E328
{
	var uVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar3;
	float fVar4;
	
	if (!OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam0, 0))
	{
		return;
	}
	vVar2 = { unk_0x8000C77B5F336760(*iParam0, 1) };
	fVar4 = VEHICLE::_GET_VEHICLE_MAX_SPEED(*iParam0);
	iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam0, 4294967295, 0);
	unk_0x346478B12F69D4E3(*iParam0, false);
	BRAIN::OPEN_SEQUENCE_TASK(&uVar0);
	if (!bParam1)
	{
		BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, unk_0x8000C77B5F336760(*iParam0, 1), 4, 0f, 786469, 2f, 0f, 1);
	}
	BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, vVar2 + Vector(5f, 5f, 5f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) + Vector(20f, 0f, 0f), 4, (0.3f * fVar4), 786469, 5f, 10f, 1);
	vVar3 = { Vector(1000f, 1000f, 1000f) * ENTITY::GET_ENTITY_FORWARD_VECTOR(*iParam0) };
	vVar3.z = 200f;
	BRAIN::TASK_VEHICLE_MISSION_COORS_TARGET(0, *iParam0, vVar2 + vVar3, 4, fVar4, 262144, 15f, 10f, 1);
	CUTSCENE::_0x8D9DF6ECA8768583(uVar0);
	NETWORK::_0x5E3AA4CA2B6FB0EE(iVar1);
	BRAIN::TASK_PERFORM_SEQUENCE(iVar1, uVar0);
	BRAIN::CLEAR_SEQUENCE_TASK(&uVar0);
}

void func_351(int iParam0, int iParam1)//Position - 0x1E417
{
	int iVar0;
	
	if (iParam1 < 1)
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/].f_2)
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_CAD3[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_CAD3[iParam0 /*7*/].f_1, &iVar0, 4294967295);
		iVar0 = (iVar0 + iParam1);
		STATS::STAT_SET_INT(Global_CAD3[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

void func_352(bool bParam0, bool bParam1, int iParam2)//Position - 0x1E474
{
	if (bParam0)
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0);
	}
	CUTSCENE::_0xC61B86C9F61EB404(1);
	func_401(0, 1, iParam2, 0, 0);
	if (bParam1)
	{
		HUD::DISPLAY_RADAR(true);
		unk_0x59B038076F830627(true);
	}
	func_541(23, 0);
}

int func_353(int iParam0)//Position - 0x1E4B0
{
	switch (iParam0)
	{
		case joaat("BMX"):
		case joaat("SCORCHER"):
		case joaat("TRIBIKE"):
		case joaat("TRIBIKE2"):
		case joaat("TRIBIKE3"):
		case joaat("VADER"):
		case joaat("AKUMA"):
		case joaat("BAGGER"):
		case joaat("RUFFIAN"):
		case joaat("BATI"):
		case joaat("BATI2"):
		case joaat("BLAZER"):
		case joaat("BLAZER2"):
		case joaat("CRUISER"):
		case joaat("HEXER"):
		case joaat("NEMESIS"):
		case joaat("PCJ"):
		case joaat("POLICEB"):
			return 1;
		
		default:
	}
	return 0;
}

int func_354(var uParam0)//Position - 0x1E530
{
	return *uParam0;
}

int func_355(int iParam0)//Position - 0x1E53B
{
	switch (iParam0)
	{
		case joaat("FREIGHT"):
		case joaat("METROTRAIN"):
			return 1;
		
		default:
	}
	return 0;
}

int func_356(var uParam0)//Position - 0x1E55B
{
	return uParam0->f_1;
}

Vector3 func_357(var uParam0, int iParam1)//Position - 0x1E567
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_C[iParam1 /*3*/];
}

Vector3 func_358(var uParam0)//Position - 0x1E591
{
	return uParam0->f_6;
}

void func_359(int iParam0)//Position - 0x1E59F
{
	func_40(iParam0, 0f);
}

int func_360(int iParam0)//Position - 0x1E5AE
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_361(int iParam0)//Position - 0x1E5C1
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_362(int iParam0)//Position - 0x1E5D4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

void func_363()//Position - 0x1E5E7
{
	int iVar0;
	
	STATS::LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1C0DF1.f_51[iVar0] = 0;
		iVar0++;
	}
}

void func_364()//Position - 0x1E610
{
	struct<68> Var0;
	
	Global_1C0005 = 0;
	Global_1C0005.f_1 = 0;
	Global_1C0005.f_2 = 0;
	Global_1C0005.f_3 = 0;
	Global_1C0005.f_4 = 0;
	func_365(&(Global_1C0005.f_49));
	func_365(&(Global_1C0005.f_8E));
	func_365(&(Global_1C0005.f_D3));
	func_365(&(Global_1C0005.f_118));
	StringCopy(&(Global_1C0005.f_15D), "", 24);
	StringCopy(&(Global_1C0005.f_163), "", 24);
	func_129(&(Global_1C0005.f_169));
	Global_1C0005.f_176 = 4294967295;
	Global_1C017C = 0;
	Global_1C017D = 0;
	Var0.f_2.f_1 = 4;
	Global_1C0005.f_5 = { Var0 };
}

void func_365(var uParam0)//Position - 0x1E6B2
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

bool func_366(var uParam0)//Position - 0x1E6ED
{
	return uParam0->f_53;
}

int func_367(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, var uParam11, var uParam12)//Position - 0x1E6F9
{
	if (CAM::IS_CAM_INTERPOLATING(func_416(uParam3, 1)))
	{
		func_359(iParam5);
	}
	if (!*uParam10)
	{
		if (func_445(iParam7) && func_444(iParam7) >= func_388(uParam0))
		{
			func_350(iParam2, 0);
			func_441(iParam7);
			*uParam10 = 1;
		}
	}
	else if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(*iParam2, 0))
	{
		VEHICLE::SET_HELI_BLADES_SPEED(*iParam2, 0.7f);
	}
	if (func_445(iParam5) && func_444(iParam5) > 0.2f)
	{
		func_441(iParam5);
		func_441(iParam6);
		return 1;
	}
	if (!func_445(iParam6))
	{
		func_469(iParam6);
	}
	else if ((uParam12 && CAM::IS_SCREEN_FADED_IN()) || (func_444(iParam6) > 0.5f && func_321(uParam4, 2)))
	{
		*uParam11 = 1;
		func_441(iParam5);
		func_441(iParam6);
		return 1;
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (func_445(iParam8))
	{
		if (func_449(iParam1) != 0)
		{
			func_441(iParam8);
		}
		else if (func_444(iParam8) > func_409(iParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0:
					BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, 4294967295, 48, 0, 0, 0, 0);
					break;
				
				case 1:
					BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, 4294967295, 48, 0.681f, 0, 0, 0);
					break;
				
				case 2:
					BRAIN::TASK_PLAY_ANIM(AUDIO::_0x0626A247D2405330(), "playidles_cold", "blow_hands", 8f, -1.4f, 4294967295, 48, 0.537f, 0, 0, 0);
					break;
			}
			func_441(iParam8);
		}
	}
	if (CAM::IS_SCREEN_FADED_IN())
	{
		func_368();
	}
	else
	{
		func_359(iParam6);
	}
	return 0;
}

void func_368()//Position - 0x1E8BA
{
	struct<6> Var0;
	int iVar1;
	
	iVar1 = Global_19E56.f_49FB;
	func_369(Var0, 0, 0, 0, 0, iVar1);
}

void func_369(struct<6> Param0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x1E8D9
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	var uVar10;
	int iVar11;
	
	if (Global_11723 != 6)
	{
		if (Global_11725 == 4294967295)
		{
			if (func_383(1, Param0))
			{
				if (Global_11726 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_11725 = MISC::GET_GAME_TIMER();
					vLocal_22 = { HUD::GET_HUD_COMPONENT_POSITION(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + MISC::GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_383(0, Param0))
			{
				Global_11725 = (MISC::GET_GAME_TIMER() - 9000);
			}
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (MISC::GET_GAME_TIMER() - Global_11725);
			if (iVar1 < 9000 && !CAM::IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = SYSTEM::CEIL(((SYSTEM::TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_11723)
				{
					case 3:
					case 5:
						if (iParam1 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.07f;
						}
						else if (iParam2 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.077f;
						}
						else if (iParam3 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.05f;
						}
						else if (iParam4 == 1)
						{
							fVar5 = 0f;
							fVar6 = -0.035f;
						}
						else
						{
							fVar5 = 0f;
							fVar6 = -0.014f;
						}
						break;
					
					default:
						fVar5 = 0f;
						fVar6 = -0.014f;
						break;
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
				HUD::SET_TEXT_FONT(1);
				HUD::SET_TEXT_JUSTIFICATION(2);
				iVar11 = func_411();
				if (Global_11726 == 1 && Global_11724 == 62)
				{
					iVar11 = Global_19E56.f_933.f_21B.f_10CE;
				}
				switch (iVar11)
				{
					case 0:
						HUD::GET_HUD_COLOUR(143, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 1:
						HUD::GET_HUD_COLOUR(144, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					case 2:
						HUD::GET_HUD_COLOUR(145, &iVar7, &iVar8, &iVar9, &uVar10);
						break;
					
					default:
						iVar7 = 240;
						iVar8 = 200;
						iVar9 = 80;
				}
				HUD::SET_TEXT_COLOUR(iVar7, iVar8, iVar9, iVar2);
				HUD::SET_TEXT_DROP_SHADOW();
				Var4 = { func_372(Global_11724, Global_11726, iParam5) };
				if (fVar6 == -0.014f)
				{
				}
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(fVar5, fVar6, 0f, 0.01f);
				HUD::SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GRAPHICS::GET_IS_WIDESCREEN() && !GRAPHICS::GET_IS_HIDEF())
				{
					fLocal_24 = 0.14f;
				}
				else
				{
					fLocal_24 = 0.17f;
				}
				if (fVar6 == -0.014f)
				{
					if (func_371(&Var4) > fLocal_24)
					{
						if (HUD::IS_HUD_COMPONENT_ACTIVE(15))
						{
							HUD::SET_HUD_COMPONENT_POSITION(15, vLocal_22.x, (vLocal_22.y + fLocal_23));
							Global_11728 = 1;
						}
					}
				}
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fVar5, fVar6, 0);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
				if (Global_11727 == 1)
				{
					func_370();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_370();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_370()//Position - 0x1EBBE
{
	if (Global_11723 != 6)
	{
	}
	if (Global_11728)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_11728 = 0;
		Global_43D7.f_1F9B = 0;
	}
	Global_11723 = 6;
	Global_11725 = 4294967295;
	Global_11724 = 4294967295;
}

float func_371(char* sParam0)//Position - 0x1EBF6
{
	HUD::_BEGIN_TEXT_COMMAND_WIDTH(sParam0);
	return HUD::_END_TEXT_COMMAND_GET_WIDTH(1);
}

struct<2> func_372(int iParam0, int iParam1, int iParam2)//Position - 0x1EC09
{
	struct<2> Var0;
	int iVar1;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_382(iParam0) };
			break;
		
		case 7:
			Var0 = { func_380(iParam0) };
			break;
		
		case 3:
			iVar1 = iParam0;
			switch (iVar1)
			{
				case 0:
					Var0 = { func_379(iParam2) };
					break;
				
				case 8:
					Var0 = { func_378(iParam2) };
					break;
				
				case 7:
					Var0 = { func_377(iParam2) };
					break;
				
				case 10:
					Var0 = { func_376(iParam2) };
					break;
				
				case 5:
					Var0 = { func_375(iParam2) };
					break;
				
				case 4:
					Var0 = { func_374(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_373(iVar1), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_373(int iParam0)//Position - 0x1ECDF
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJUM";
			break;
		
		case 1:
			return "MG_DART";
			break;
		
		case 2:
			return "MG_GOLF";
			break;
		
		case 3:
			return "MG_HUNT";
			break;
		
		case 4:
			return "MG_OFFR";
			break;
		
		case 5:
			return "MG_PILO";
			break;
		
		case 6:
			return "MG_RMPG";
			break;
		
		case 7:
			return "MG_SERA";
			break;
		
		case 8:
			return "MG_SRAC";
			break;
		
		case 9:
			return "MG_STRP";
			break;
		
		case 10:
			return "MG_STNT";
			break;
		
		case 11:
			return "MG_SHTR";
			break;
		
		case 12:
			return "MG_TAXI";
			break;
		
		case 13:
			return "MG_TENN";
			break;
		
		case 14:
			return "MG_TOWI";
			break;
		
		case 15:
			return "MG_TRFA";
			break;
		
		case 16:
			return "MG_TRFG";
			break;
		
		case 17:
			return "MG_TRIA";
			break;
		
		case 18:
			return "MG_YOGA";
			break;
		
		case 19:
			return "MG_CRCE";
			break;
	}
	return "INVALID!";
}

struct<2> func_374(int iParam0)//Position - 0x1EE32
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_375(int iParam0)//Position - 0x1EE65
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_376(int iParam0)//Position - 0x1EE98
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_377(int iParam0)//Position - 0x1EECB
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_378(int iParam0)//Position - 0x1EEFE
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_379(int iParam0)//Position - 0x1EF3B
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar1, iParam0, 8);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar1, 8);
	}
	return Var0;
}

struct<2> func_380(int iParam0)//Position - 0x1EF6E
{
	struct<2> Var0;
	char[] cVar1[8];
	
	StringCopy(&Var0, "", 8);
	cVar1 = { func_381(iParam0) };
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

struct<2> func_381(int iParam0)//Position - 0x1EFA5
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

struct<2> func_382(int iParam0)//Position - 0x1F3F1
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_14893[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_19E56.f_2361.f_63.f_CD[7])
		{
			case 1:
				StringConCat(&Var0, "A", 8);
				break;
			
			case 2:
				StringConCat(&Var0, "B", 8);
				break;
			
			default:
				StringConCat(&Var0, "A", 8);
				break;
			}
	}
	return Var0;
}

int func_383(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x1F45A
{
	if (((!func_385(0) || Global_11732) || Global_11727 == 1) || !CAM::IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Global_11723)
	{
		case 0:
			if (MISC::ARE_STRINGS_EQUAL(&uParam1, "NONE") || MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
			{
				Global_11723 = 3;
			}
			else
			{
				Global_11723 = 1;
			}
			break;
		
		case 1:
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				Global_11723 = 2;
			}
			break;
		
		case 2:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				Global_11723 = 4;
				return 1;
			}
			else if (!CUTSCENE::IS_CUTSCENE_ACTIVE())
			{
				Global_11723 = 3;
			}
			break;
		
		case 3:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_11723 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_11723 = 5;
			}
			break;
		
		case 5:
			if ((CUTSCENE::IS_CUTSCENE_PLAYING() || func_31(0)) || func_384(1))
			{
			}
			else
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_384(bool bParam0)//Position - 0x1F572
{
	if (bParam0)
	{
		return (Global_434C.f_4 && Global_434C.f_68 == 4);
	}
	return Global_434C.f_4;
}

int func_385(int iParam0)//Position - 0x1F59B
{
	if (Global_8D15 == 15)
	{
		return 0;
	}
	if (func_386(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_386(int iParam0)//Position - 0x1F5BD
{
	return func_387(iParam0, Global_8D15);
}

int func_387(int iParam0, int iParam1)//Position - 0x1F5CE
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

float func_388(var uParam0)//Position - 0x1F7AF
{
	return uParam0->f_50;
}

int func_389(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)//Position - 0x1F7BB
{
	func_398(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_390(sParam2, iParam3, 0);
}

int func_390(char* sParam0, int iParam1, bool bParam2)//Position - 0x1F809
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
					func_397();
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
		if (func_396(8, 4294967295))
		{
			return 0;
		}
		Global_3E1A = { Global_3E14 };
		func_395();
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
				if (func_393())
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
			if (func_28())
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
			func_392();
			Global_3DD8 = bParam2;
		}
		Global_3DD0 = iParam1;
		StringCopy(&Global_3C51, sParam0, 24);
		Global_3960 = 0;
		func_391();
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
		func_397();
	}
	return 0;
}

void func_391()//Position - 0x1FAD5
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

void func_392()//Position - 0x1FB06
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

int func_393()//Position - 0x1FB9B
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

void func_394()//Position - 0x1FC34
{
	if (func_241(14))
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
		Global_38B1 = func_411();
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

void func_395()//Position - 0x1FCD6
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

bool func_396(int iParam0, int iParam1)//Position - 0x1FD2D
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

void func_397()//Position - 0x1FD68
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

void func_398(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)//Position - 0x1FDBF
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

var func_399(var uParam0)//Position - 0x1FE15
{
	return uParam0->f_4;
}

void func_400(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)//Position - 0x1FE21
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar2;
	vector3 vVar3;
	
	iVar0 = func_416(uParam0, 0);
	if (ENTITY::DOES_ENTITY_EXIST(iParam5) && !ENTITY::IS_ENTITY_DEAD(iParam5, 0))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -SYSTEM::COS((-97.4239f + func_447(uParam1))), SYSTEM::SIN((-97.4239f + func_447(uParam1)))) };
		*uParam3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam5, 1.12046f, -0.317773f, 1.3385f) };
		vVar1 = { func_446(*uParam4, uParam2->f_2) };
		vVar3 = { *uParam3 + vVar1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_447(uParam1)) };
		*uParam7 = 26f;
		vVar2 = { *uParam6 };
		vVar2.z = (vVar2.z + uParam2->f_2);
		CAM::SET_CAM_COORD(iVar0, vVar3);
		CAM::SET_CAM_ROT(iVar0, vVar2, 2);
		CAM::SET_CAM_FOV(iVar0, *uParam7);
		CAM::SET_CAM_NEAR_CLIP(iVar0, func_319());
	}
	CAM::SET_CAM_ACTIVE(iVar0, true);
	CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
}

void func_401(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1FF2C
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(CAM::_0xDC9DA9E8789F5246());
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 1);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 1);
		func_408(1);
		HUD::_0xA8FDB297A8D25FBA();
		HUD::_0xFDB423997FA30340();
		if (Global_38B1.f_1 > 3)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
			{
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
			}
			if (!func_28())
			{
				Global_38B1.f_1 = 3;
			}
			Global_3DCE = 5;
		}
		func_407(1, iParam3, iParam2, 0);
		Global_DB7B = 1;
		Global_10B91 = 1;
		Global_11623 = 1;
	}
	else
	{
		func_408(0);
		HUD::_0xE1CD1E48E025E661();
		Global_DB7B = 0;
		if (bParam1)
		{
			CAM::_SET_CAM_EFFECT();
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(CAM::_0xDC9DA9E8789F5246(), 0);
		PLAYER::SET_POLICE_IGNORE_PLAYER(CAM::_0xDC9DA9E8789F5246(), 0);
		func_407(0, iParam3, iParam2, 0);
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if ((((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_405(CAM::_0xDC9DA9E8789F5246())) && !func_403(CAM::_0xDC9DA9E8789F5246(), 0)) && !func_402()) && !bParam4)
			{
				ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
			}
		}
		else if ((!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && !func_405(CAM::_0xDC9DA9E8789F5246())) && !bParam4)
		{
			ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
		}
		Global_11623 = 0;
	}
}

bool func_402()//Position - 0x20056
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_1841F3[CAM::_0xDC9DA9E8789F5246() /*790*/].f_27.f_12, 14);
}

bool func_403(int iParam0, int iParam1)//Position - 0x20073
{
	bool bVar0;
	
	if (iParam0 == CAM::_0xDC9DA9E8789F5246())
	{
		bVar0 = func_404(4294967295, 0) == 8;
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

int func_404(int iParam0, bool bParam1)//Position - 0x200BE
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == 4294967295)
	{
		iVar1 = func_221();
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

int func_405(int iParam0)//Position - 0x200FF
{
	if (func_403(iParam0, 0))
	{
		return 1;
	}
	if (func_406())
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

bool func_406()//Position - 0x20141
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_240006, 3);
}

int func_407(int iParam0, int iParam1, var uParam2, int iParam3)//Position - 0x20152
{
	int iVar0;
	
	iVar0 = 0;
	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::_0xA0FE76168A189DDB() != iParam0 && uParam2)
		{
			CUTSCENE::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_408(int iParam0)//Position - 0x20185
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

float func_409(int iParam0, int iParam1)//Position - 0x201A8
{
	switch (iParam0)
	{
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6f;
				
				case 1:
					return 7.3f;
				
				case 2:
					return 6.8f;
				
				default:
			}
			break;
		
		case 8:
			switch (iParam1)
			{
				case 0:
					return 4.2f;
				
				case 1:
					return 5.5f;
				
				case 2:
					return 5f;
				
				default:
			}
			break;
		
		case 5:
			return 0f;
		
		case 6:
			return 0f;
		
		case 12:
			return 0f;
	}
	return 0f;
}

int func_410(int iParam0)//Position - 0x20242
{
	switch (iParam0)
	{
		case 5:
			return 3000;
		
		case 6:
			return 1500;
		
		case 12:
			return 2000;
		
		default:
	}
	return 0;
}

int func_411()//Position - 0x20276
{
	func_412();
	return Global_19E56.f_933.f_21B.f_10CD;
}

void func_412()//Position - 0x2028F
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()))
	{
		if (func_36(Global_19E56.f_933.f_21B.f_10CD) != ENTITY::GET_ENTITY_MODEL(AUDIO::_0x0626A247D2405330()))
		{
			iVar0 = func_35(AUDIO::_0x0626A247D2405330());
			if (func_37(iVar0) && (!func_241(14) || Global_19A3D))
			{
				if (Global_19E56.f_933.f_21B.f_10CD != iVar0 && func_37(Global_19E56.f_933.f_21B.f_10CD))
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

float func_413(struct<2> Param0, var uParam1, struct<2> Param2, var uParam3)//Position - 0x2038C
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param2 - Param0), (Param2.f_1 - Param0.f_1));
}

int func_414(vector3 vParam0)//Position - 0x203A6
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_415(int iParam0)//Position - 0x203D0
{
	switch (iParam0)
	{
		case 5:
			return -120.0078f, -976.4348f, 295.2008f;
		
		case 6:
			return -1242.709f, 4539.658f, 185.6828f;
		
		case 12:
			return -768.0306f, 4330.409f, 147.6768f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_416(var uParam0, int iParam1)//Position - 0x2042A
{
	if (iParam1 >= 2)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_417(int iParam0, int iParam1, int iParam2)//Position - 0x20442
{
	PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam0);
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		FIRE::STOP_FIRE_IN_RANGE(unk_0x8000C77B5F336760(AUDIO::_0x0626A247D2405330(), 1), 15f);
	}
	CUTSCENE::_0xC61B86C9F61EB404(iParam1);
	func_27(0);
	func_401(1, 1, iParam2, 0, 0);
	HUD::DISPLAY_RADAR(false);
	unk_0x59B038076F830627(false);
	func_541(23, 1);
}

void func_418(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x20499
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		return;
	}
	if (func_414(func_440(uParam0)))
	{
	}
	else
	{
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(func_440(uParam0), func_439(uParam0), false, 1);
	}
	iVar3 = 0;
	while (iVar3 < 12)
	{
		if (!func_414(func_357(uParam0, iVar3)))
		{
			*uParam2 = iVar3 + 1;
		}
		else
		{
			iVar3 = 999999;
		}
		iVar3++;
	}
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
	WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), false);
	WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"), 1, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(AUDIO::_0x0626A247D2405330(), false);
	if (iParam13 == 4)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x8000C77B5F336760(iVar1, 1) };
				if (((((vVar2.z > 320f && vVar2.z < 340f) && vVar2.x > -103f) && vVar2.x < -45f) && vVar2.y > -850f) && vVar2.y < -787f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -89.794f, -742.6727f, 43.7472f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, -109.33f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 3)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x8000C77B5F336760(iVar1, 1) };
				if (((((vVar2.z > 689.4f && vVar2.z < 701.8875f) && vVar2.x > 404.6f) && vVar2.x < 413.4f) && vVar2.y > 5700.6f) && vVar2.y < 5711.9f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -215.2838f, 6543.57f, 10.0967f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 145.5732f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 5)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x8000C77B5F336760(iVar1, 1) };
				if (((((vVar2.z > 294.5f && vVar2.z < 298.9f) && vVar2.x > -121.3f) && vVar2.x < -116.5f) && vVar2.y > -978.1f) && vVar2.y < -973.2f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -118.1021f, -947.3954f, 27.3296f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 341.9614f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 6)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x8000C77B5F336760(iVar1, 1) };
				if (((((vVar2.z > 182.7f && vVar2.z < 202.7f) && vVar2.x > -1252.7f) && vVar2.x < -1227.9f) && vVar2.y > 4525.8f) && vVar2.y < 4549.3f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -1237.022f, 4559.404f, 185.9418f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 172.2123f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 8)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x8000C77B5F336760(iVar1, 1) };
				if (((((vVar2.z > 230f && vVar2.z < 244.5f) && vVar2.x > -809.6f) && vVar2.x < -747.7f) && vVar2.y > 310.6f) && vVar2.y < 346.6f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -1351.805f, 133.95f, 55.2558f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 0.8373f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 12)
	{
		iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1, 0))
			{
				VEHICLE::DELETE_VEHICLE(&iVar1);
			}
			else
			{
				vVar2 = { unk_0x8000C77B5F336760(iVar1, 1) };
				if (((((vVar2.z > 143.6f && vVar2.z < 154.5f) && vVar2.x > -777f) && vVar2.x < -758.9f) && vVar2.y > 4328.3f) && vVar2.y < 4344f)
				{
					ENTITY::SET_ENTITY_COORDS(iVar1, -765.8775f, 4294.807f, 145.6581f, 1, 0, 0, 1);
					ENTITY::SET_ENTITY_HEADING(iVar1, 349.2306f);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar1, 1);
				}
			}
		}
	}
	if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), false, 0);
		WEAPON::SET_CURRENT_PED_WEAPON(AUDIO::_0x0626A247D2405330(), joaat("weapon_unarmed"), false);
		WEAPON::GIVE_WEAPON_TO_PED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"), 1, false, false);
	}
	iVar0 = func_449(iParam13);
	if (iVar0 != 0)
	{
		if (!ENTITY::IS_ENTITY_DEAD(*iParam3, 0) || ENTITY::DOES_ENTITY_EXIST(*iParam3))
		{
			VEHICLE::SET_VEHICLE_FIXED(*iParam3);
			ENTITY::SET_ENTITY_COORDS(*iParam3, func_456(iParam13), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam3, func_447(uParam0));
		}
		else
		{
			*iParam3 = VEHICLE::CREATE_VEHICLE(iVar0, func_456(iParam13), func_447(uParam0), 1, 1, 0);
		}
		if (func_448(iVar0))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam8) || ENTITY::IS_ENTITY_DEAD(*iParam8, 0))
			{
				*iParam8 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam3, 26, iParam10, 4294967295, 1, true);
				PED::SET_PED_HELMET(*iParam8, 0);
				func_438(*iParam8, iParam13);
				ENTITY::FREEZE_ENTITY_POSITION(*iParam8, true);
			}
			CAM::_0xF4C8CF9E353AFECA("SKY_DIVING_SHAKE", 0.15f);
			func_436(uParam1, *iParam8, func_437(iParam13));
			func_433(uParam1, AUDIO::_0x0626A247D2405330(), func_435());
			VEHICLE::SET_HELI_BLADES_SPEED(*iParam3, 0.7f);
			unk_0x346478B12F69D4E3(*iParam3, true);
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (!PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam3, 0))
				{
					ENTITY::DETACH_ENTITY(AUDIO::_0x0626A247D2405330(), 1, 1);
					unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
					PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam3, 2);
				}
				else if (func_432(AUDIO::_0x0626A247D2405330(), *iParam3) == 1)
				{
					unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
					PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam3, 2);
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(*iParam3, 0))
			{
				*iParam14 = PED::CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(*iParam14, *iParam3, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(*iParam3, "Chassis"));
				BRAIN::TASK_SYNCHRONIZED_SCENE(AUDIO::_0x0626A247D2405330(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1148846080, 0);
				PED::SET_SYNCHRONIZED_SCENE_LOOPED(*iParam14, 1);
			}
			func_469(iParam12);
		}
		else if (func_353(iVar0))
		{
			func_433(uParam1, AUDIO::_0x0626A247D2405330(), func_435());
			unk_0x346478B12F69D4E3(AUDIO::_0x0626A247D2405330(), false);
			PED::SET_PED_INTO_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam3, 4294967295);
			PED::GIVE_PED_HELMET(AUDIO::_0x0626A247D2405330(), 0, 4096, 4294967295);
			func_469(iParam12);
		}
	}
	else
	{
		func_433(uParam1, AUDIO::_0x0626A247D2405330(), func_435());
		if (func_366(uParam0))
		{
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()) && (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 1) || PED::IS_PED_ON_VEHICLE(AUDIO::_0x0626A247D2405330())))
			{
				PED::_0xF9ACF4A08098EA25(AUDIO::_0x0626A247D2405330(), 1);
			}
			ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), func_456(iParam13), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(AUDIO::_0x0626A247D2405330(), func_447(uParam0));
			BRAIN::TASK_STAND_STILL(AUDIO::_0x0626A247D2405330(), 4294967295);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam3))
			{
				iVar4 = 4294967295;
				while (iVar4 <= (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*iParam3) - 1))
				{
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(*iParam3, iVar4, 0))
					{
						iVar5 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam3, iVar4, 0);
						PED::DELETE_PED(&iVar5);
					}
					iVar4++;
				}
				VEHICLE::DELETE_VEHICLE(iParam3);
			}
		}
	}
	PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 1);
	PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 36, true);
	if (func_514(uParam0) != 0)
	{
		func_428(uParam0, iParam5, iParam13);
	}
	if (func_427(uParam0) != 0)
	{
		func_424(uParam0, iParam7);
	}
	iVar0 = func_356(uParam0);
	if (func_355(iVar0))
	{
		VEHICLE::DELETE_ALL_TRAINS();
		VEHICLE::SET_RANDOM_TRAINS(0);
	}
	else if (iVar0 != 0)
	{
		MISC::CLEAR_AREA(func_357(uParam0, 0), 100f, 1, 0, 0, false);
		if (ENTITY::DOES_ENTITY_EXIST(*iParam4) && ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
		{
			VEHICLE::DELETE_VEHICLE(iParam4);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam4))
		{
			*iParam4 = VEHICLE::CREATE_VEHICLE(iVar0, func_357(uParam0, 0), func_423(uParam0), 1, 1, 0);
			if (func_422(func_356(uParam0)))
			{
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam4, 11);
			}
			else if (func_421(func_356(uParam0)))
			{
				VEHICLE::SET_VEHICLE_EXTRA(*iParam4, 1, true);
				VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam4, 6);
				VEHICLE::SET_VEHICLE_LIGHTS(*iParam4, 2);
				VEHICLE::_0xBC3CCA5844452B06(200f);
				ENTITY::SET_ENTITY_LOD_DIST(*iParam4, 1000);
			}
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam4, 1, 1);
		}
		else if (!ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
		{
			VEHICLE::SET_VEHICLE_FIXED(*iParam4);
			ENTITY::SET_ENTITY_COORDS(*iParam4, func_357(uParam0, 0), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(*iParam4, func_423(uParam0));
		}
		if (func_422(func_356(uParam0)))
		{
			if (ENTITY::DOES_ENTITY_EXIST(*iParam6) && ENTITY::IS_ENTITY_DEAD(*iParam6, 0))
			{
				VEHICLE::DELETE_VEHICLE(iParam6);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam6))
			{
				*iParam6 = VEHICLE::CREATE_VEHICLE(joaat("TRFLAT"), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*iParam4, 0f, -10f, 0f), func_423(uParam0), 1, 1, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam6, 1, 1);
				ENTITY::SET_ENTITY_LOD_DIST(*iParam6, 2000);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(*iParam6, 0))
			{
				VEHICLE::SET_VEHICLE_FIXED(*iParam6);
			}
			if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(*iParam4))
			{
				VEHICLE::ATTACH_VEHICLE_TO_TRAILER(*iParam4, *iParam6, 1065353216);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(*iParam9) && ENTITY::IS_ENTITY_DEAD(*iParam9, 0))
		{
			PED::DELETE_PED(iParam9);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(*iParam9))
		{
			*iParam9 = PED::CREATE_PED_INSIDE_VEHICLE(*iParam4, 26, iParam11, 4294967295, 1, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*iParam9, true, 0);
			ENTITY::SET_ENTITY_HEALTH(*iParam9, 1);
			func_420(*iParam9, iParam13);
			if (iParam13 == 0)
			{
				func_419(uParam1, 2, *iParam9, "EX3MERC1", 0, 1);
			}
		}
		else
		{
			unk_0x65E471E4A2D56226(*iParam9, ENTITY::GET_ENTITY_MAX_HEALTH(*iParam9), 0);
			PED::RESET_PED_VISIBLE_DAMAGE(*iParam9);
			NETWORK::_0x5E3AA4CA2B6FB0EE(*iParam9);
			if (!PED::IS_PED_IN_VEHICLE(*iParam9, *iParam4, 0) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam4, 4294967295, 0) != *iParam9)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(*iParam9, 1))
				{
					PED::_0xF9ACF4A08098EA25(*iParam9, 1);
				}
				PED::SET_PED_INTO_VEHICLE(*iParam9, *iParam4, 4294967295);
			}
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*iParam9, 1, 1);
	}
	if (func_411() == 0)
	{
		PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 9, 5, 0, 0);
	}
	else if (func_411() == 1)
	{
		PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 8, 1, 0, 0);
	}
	else if (func_411() == 2)
	{
		PED::SET_PED_COMPONENT_VARIATION(AUDIO::_0x0626A247D2405330(), 8, 3, 0, 0);
	}
}

void func_419(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)//Position - 0x20F4C
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

void func_420(int iParam0, int iParam1)//Position - 0x20FE7
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, false);
			break;
		
		case 5:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 1, 0);
			PED::CLEAR_PED_PROP(iParam0, 0);
			PED::CLEAR_PED_PROP(iParam0, 1);
			break;
		
		case 7:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 1, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 2, false);
			break;
	}
}

int func_421(int iParam0)//Position - 0x210B6
{
	switch (iParam0)
	{
		case joaat("SEASHARK"):
		case joaat("SEASHARK2"):
		case joaat("DINGHY"):
		case joaat("JETMAX"):
		case joaat("MARQUIS"):
		case joaat("SQUALO"):
		case joaat("SUNTRAP"):
		case joaat("TROPIC"):
		case joaat("PREDATOR"):
			return 1;
		
		default:
	}
	return 0;
}

int func_422(int iParam0)//Position - 0x21100
{
	switch (iParam0)
	{
		case joaat("HAULER"):
		case joaat("BIFF"):
		case joaat("PACKER"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
			return 1;
		
		default:
	}
	return 0;
}

var func_423(var uParam0)//Position - 0x2113E
{
	return uParam0->f_4D;
}

void func_424(var uParam0, int iParam1)//Position - 0x2114A
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		*iParam1 = VEHICLE::CREATE_VEHICLE(func_427(uParam0), func_426(uParam0), func_425(uParam0), 1, 1, 0);
	}
	else if (ENTITY::IS_ENTITY_DEAD(*iParam1, 0))
	{
		VEHICLE::DELETE_VEHICLE(iParam1);
		*iParam1 = VEHICLE::CREATE_VEHICLE(func_427(uParam0), func_426(uParam0), func_425(uParam0), 1, 1, 0);
	}
	else
	{
		VEHICLE::SET_VEHICLE_FIXED(*iParam1);
	}
}

var func_425(var uParam0)//Position - 0x211B3
{
	return uParam0->f_4F;
}

Vector3 func_426(var uParam0)//Position - 0x211BF
{
	return uParam0->f_9;
}

int func_427(var uParam0)//Position - 0x211CD
{
	return uParam0->f_3;
}

void func_428(var uParam0, var uParam1, int iParam2)//Position - 0x211D9
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		if (!func_314(*uParam1) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, 4294967295, 0)))
		{
			iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, 4294967295, 0);
		}
		iVar2 = *uParam1;
	}
	iVar0 = func_431(iParam2);
	if (iVar0 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			iVar2 = VEHICLE::CREATE_VEHICLE(func_514(uParam0), func_430(uParam0), func_429(uParam0), 1, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iVar2, func_430(uParam0), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar2, func_429(uParam0));
		}
		unk_0x346478B12F69D4E3(iVar2, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iVar2, 26, iVar0, 4294967295, 1, true);
		}
		PED::SET_PED_HELMET(iVar1, 0);
		func_438(iVar1, iParam2);
	}
	else
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			iVar2 = VEHICLE::CREATE_VEHICLE(func_514(uParam0), func_430(uParam0), func_429(uParam0), 1, 1, 0);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iVar2, func_430(uParam0), 1, 0, 0, 1);
			ENTITY::SET_ENTITY_HEADING(iVar2, func_429(uParam0));
		}
		unk_0x346478B12F69D4E3(iVar2, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar1 = PED::CREATE_PED_INSIDE_VEHICLE(iVar2, 26, joaat("s_m_y_pilot_01"), 4294967295, 1, true);
		}
		PED::SET_PED_HELMET(iVar1, 0);
		PED::SET_PED_PROP_INDEX(iVar1, 0, 2, 0, false);
		PED::SET_PED_PROP_INDEX(iVar1, 1, 0, 0, false);
	}
	VEHICLE::SET_VEHICLE_ENGINE_ON(iVar2, true, 1, 0);
	VEHICLE::SET_HELI_BLADES_SPEED(iVar2, 0.7f);
	NETWORK::_0x5E3AA4CA2B6FB0EE(iVar1);
	BRAIN::TASK_STAND_STILL(iVar1, 4294967295);
	*uParam1 = iVar2;
}

var func_429(var uParam0)//Position - 0x21344
{
	return uParam0->f_4E;
}

Vector3 func_430(var uParam0)//Position - 0x21350
{
	return uParam0->f_46;
}

int func_431(int iParam0)//Position - 0x2135E
{
	switch (iParam0)
	{
		case 0:
			return joaat("s_m_y_pilot_01");
		
		case 1:
			return joaat("s_m_y_pilot_01");
		
		case 2:
			return joaat("s_m_y_pilot_01");
		
		case 3:
			return joaat("s_m_y_pilot_01");
		
		case 7:
			return joaat("a_m_y_hippy_01");
		
		case 9:
			return joaat("s_m_y_pilot_01");
		
		case 10:
			return joaat("s_m_y_pilot_01");
		
		case 11:
			return joaat("a_m_m_genfat_02");
		
		default:
	}
	return 0;
}

int func_432(int iParam0, int iParam1)//Position - 0x213DE
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

void func_433(var uParam0, int iParam1, char* sParam2)//Position - 0x21450
{
	int iVar0;
	
	iVar0 = func_434();
	if (!PED::IS_PED_INJURED(iParam1))
	{
		func_419(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_419(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

int func_434()//Position - 0x21486
{
	if (func_411() == 1)
	{
		return 2;
	}
	if (func_411() == 2)
	{
		return 3;
	}
	return 1;
}

char* func_435()//Position - 0x214AD
{
	int iVar0;
	
	iVar0 = func_35(AUDIO::_0x0626A247D2405330());
	switch (iVar0)
	{
		case 0:
			return "MICHAEL";
		
		case 2:
			return "TREVOR";
		
		case 1:
			return "FRANKLIN";
		
		default:
	}
	return "";
}

void func_436(var uParam0, int iParam1, char* sParam2)//Position - 0x214F0
{
	int iVar0;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(iParam1))
	{
		func_419(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_419(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

char* func_437(int iParam0)//Position - 0x21523
{
	return "EXT1HELIPILOT";
}

void func_438(int iParam0, int iParam1)//Position - 0x2152F
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 1, 0, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
			break;
		
		case 11:
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 2, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 2, 0);
			PED::SET_PED_PROP_INDEX(iParam0, 0, 1, 2, false);
			PED::SET_PED_PROP_INDEX(iParam0, 1, 1, 0, false);
			break;
	}
}

Vector3 func_439(var uParam0)//Position - 0x215D6
{
	return uParam0->f_43;
}

Vector3 func_440(var uParam0)//Position - 0x215E4
{
	return uParam0->f_40;
}

void func_441(int iParam0)//Position - 0x215F2
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_442(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x21608
{
	char cVar0[64];
	
	if (!func_448(func_449(iParam3)))
	{
		STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(func_456(iParam3));
	}
	if (func_445(iParam1))
	{
		if (func_444(iParam1) >= 5f)
		{
			return 1;
		}
	}
	else
	{
		func_330(iParam1, 0f);
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (!STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		{
			return 0;
		}
	}
	if (func_448(func_449(iParam3)))
	{
		if (!STREAMING::HAS_ANIM_DICT_LOADED("veh@helicopter@rps@base"))
		{
			return 0;
		}
	}
	if (func_409(iParam3, 0) > 0f)
	{
		switch (iParam4)
		{
			case 0:
				StringCopy(&cVar0, "amb@world_human_hiker_standing@male@idle_a", 64);
				break;
			
			case 1:
				StringCopy(&cVar0, "amb@world_human_muscle_flex@arms_at_side@base", 64);
				break;
			
			case 2:
				StringCopy(&cVar0, "playidles_cold", 64);
				break;
		}
		if (!STREAMING::HAS_ANIM_DICT_LOADED(&cVar0))
		{
			return 0;
		}
	}
	if (func_443(uParam0))
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam2))
		{
			if (HUD::HAS_ADDITIONAL_TEXT_LOADED(2))
			{
				if (GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("basejumping"))
				{
					if (((STREAMING::HAS_ANIM_DICT_LOADED("oddjobs@basejump@") && STREAMING::HAS_ANIM_DICT_LOADED("skydive@freefall")) && STREAMING::HAS_ANIM_DICT_LOADED("skydive@parachute@chute")) && STREAMING::HAS_ANIM_DICT_LOADED("skydive@parachute@"))
					{
						if (PED::CAN_CREATE_RANDOM_PED(0))
						{
							if (!bParam5 || CAM::IS_SCREEN_FADED_OUT())
							{
								return 1;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_443(var uParam0)//Position - 0x2173F
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!STREAMING::HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

float func_444(int iParam0)//Position - 0x21786
{
	if (func_445(iParam0))
	{
		if (func_342(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_41(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

bool func_445(int iParam0)//Position - 0x217C5
{
	return INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam0, 1);
}

Vector3 func_446(vector3 vParam0, float fParam1)//Position - 0x217D5
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

float func_447(var uParam0)//Position - 0x21819
{
	return uParam0->f_4C;
}

int func_448(int iParam0)//Position - 0x21825
{
	switch (iParam0)
	{
		case joaat("ANNIHILATOR"):
		case joaat("BUZZARD"):
		case joaat("BUZZARD2"):
		case joaat("CARGOBOB"):
		case joaat("CARGOBOB2"):
		case joaat("FROGGER"):
		case joaat("MAVERICK"):
		case joaat("POLMAV"):
		case joaat("SKYLIFT"):
			return 1;
		
		default:
	}
	return 0;
}

int func_449(int iParam0)//Position - 0x2186F
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 7:
		case 9:
		case 10:
		case 11:
			return joaat("MAVERICK");
			break;
		
		case 4:
			return joaat("BATI");
			break;
	}
	return 0;
}

void func_450(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x218C5
{
	int iVar0;
	int iVar1;
	
	func_26(1);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(0);
	if (!ENTITY::IS_ENTITY_DEAD(AUDIO::_0x0626A247D2405330(), 0))
	{
		PED::SET_PED_LOD_MULTIPLIER(AUDIO::_0x0626A247D2405330(), 2f);
	}
	switch (iParam1)
	{
		case 0:
			PED::ADD_SCENARIO_BLOCKING_AREA(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0, 1, 1, 1);
			break;
		
		case 1:
			break;
		
		case 2:
			break;
		
		case 3:
			break;
		
		case 4:
			break;
		
		case 5:
			break;
		
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			func_455(1, 1);
			break;
		
		case 9:
			break;
		
		case 10:
			break;
		
		case 11:
			break;
		
		case 12:
			break;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		MISC::CLEAR_AREA(func_456(iParam1), 5000f, 1, 0, 0, false);
	}
	HUD::REQUEST_ADDITIONAL_TEXT("BJUMP", 2);
	iVar0 = func_449(iParam1);
	if (iVar0 != 0)
	{
		if (func_448(iVar0))
		{
			STREAMING::REQUEST_ANIM_DICT("veh@helicopter@rps@base");
			*uParam3 = func_431(iParam1);
			func_453(uParam2, *uParam3);
		}
		func_453(uParam2, iVar0);
	}
	if (func_514(uParam0) != 0)
	{
		func_453(uParam2, func_514(uParam0));
		if (func_431(iParam1) != 0)
		{
			func_453(uParam2, func_431(iParam1));
		}
		else
		{
			func_453(uParam2, joaat("s_m_y_pilot_01"));
		}
	}
	iVar1 = func_356(uParam0);
	if (iVar1 != 0)
	{
		*uParam4 = func_452(iParam1);
		func_453(uParam2, *uParam4);
		func_453(uParam2, iVar1);
		func_453(uParam2, joaat("TRFLAT"));
	}
	if (func_355(iVar1))
	{
		func_453(uParam2, joaat("FREIGHT"));
		func_453(uParam2, joaat("FREIGHTCAR"));
		func_453(uParam2, joaat("FREIGHTGRAIN"));
		func_453(uParam2, joaat("FREIGHTCONT1"));
		func_453(uParam2, joaat("FREIGHTCONT2"));
		func_453(uParam2, joaat("TANKERCAR"));
		func_453(uParam2, joaat("METROTRAIN"));
	}
	if (func_427(uParam0) != 0)
	{
		func_453(uParam2, func_427(uParam0));
	}
	*uParam5 = func_161();
	func_451(uParam2);
	STREAMING::REQUEST_ANIM_DICT("oddjobs@basejump@");
	STREAMING::REQUEST_ANIM_DICT("skydive@freefall");
	STREAMING::REQUEST_ANIM_DICT("skydive@parachute@chute");
	STREAMING::REQUEST_ANIM_DICT("skydive@parachute@");
	unk_0xE2BBD32891C18569("basejumping", false);
	if (func_409(iParam1, 0) > 0f)
	{
		*uParam6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		switch (*uParam6)
		{
			case 0:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_hiker_standing@male@idle_a");
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT("amb@world_human_muscle_flex@arms_at_side@base");
				break;
			}
	}
	if (func_449(iParam1) == 0)
	{
		STREAMING::REQUEST_ADDITIONAL_COLLISION_AT_COORD(func_456(iParam1));
	}
}

void func_451(var uParam0)//Position - 0x21B60
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			STREAMING::REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_452(int iParam0)//Position - 0x21B90
{
	switch (iParam0)
	{
		case 0:
			return joaat("a_m_y_beach_01");
		
		case 5:
			return joaat("s_m_m_trucker_01");
		
		case 7:
			return joaat("a_m_y_beach_01");
		
		default:
	}
	return 0;
}

int func_453(var uParam0, int iParam1)//Position - 0x21BCA
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if ((*uParam0)[iVar0] == iParam1)
			{
				return 0;
			}
		}
		iVar0++;
	}
	iVar1 = func_454(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_454(var uParam0)//Position - 0x21C27
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == 0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4294967295;
}

void func_455(int iParam0, int iParam1)//Position - 0x21C53
{
	MISC::SET_BIT(&Global_6411, iParam0);
	StringCopy(&(Global_6412[iParam0 /*6*/]), SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
	Global_6449[iParam0] = iParam1;
}

Vector3 func_456(int iParam0)//Position - 0x21C7A
{
	switch (iParam0)
	{
		case 0:
			return -1152.053f, -1857.884f, 204.0663f;
		
		case 1:
			return 885.114f, -437.352f, 529.867f;
		
		case 2:
			return 2034.912f, 1971.051f, 582.7461f;
		
		case 3:
			return 409.7498f, 5703.525f, 695.17f;
		
		case 4:
			return -74.9632f, -827.4467f, 324.9521f;
		
		case 5:
			return -117.6998f, -975.571f, 295f;
		
		case 6:
			return -1243.784f, 4534.163f, 184.8471f;
		
		case 7:
			return -359.1f, 4119.5f, 304.1f;
		
		case 8:
			return -807.073f, 330.8846f, 232.6766f;
		
		case 9:
			return -1286.99f, 3668.922f, 1072.466f;
		
		case 10:
			return 1018.441f, 3956.706f, 1354f;
		
		case 11:
			return 1627.196f, -421.7584f, 1321.484f;
		
		case 12:
			return -766.5999f, 4334.805f, 147.1205f;
		
		default:
	}
	return 0f, 0f, 0f;
}

int func_457(int iParam0)//Position - 0x21DC4
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), func_456(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
		ENTITY::SET_ENTITY_COORDS(AUDIO::_0x0626A247D2405330(), func_456(iParam0), 0, 0, 0, 1);
		if (ENTITY::IS_ENTITY_AT_COORD(AUDIO::_0x0626A247D2405330(), func_456(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_458(vector3 vParam0)//Position - 0x21E34
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

Vector3 func_459(int iParam0)//Position - 0x21E73
{
	switch (iParam0)
	{
		case 0:
			return -21.7965f, -0.0328f, 70.0438f;
		
		case 1:
			return -26.5541f, 0.0092f, -86.4416f;
		
		case 2:
			return -11.2825f, 0.0213f, 148.5283f;
		
		case 3:
			return -39.935f, 0f, 12.8174f;
		
		case 4:
			return 0.9749f, 0f, -5.2236f;
		
		case 5:
			return -12.889f, 0f, 1.6227f;
		
		case 6:
			return -48.5605f, 0f, 160.4909f;
		
		case 7:
			return -37.0509f, 0.0324f, 24.0288f;
		
		case 8:
			return -17.4118f, 0f, 117.7175f;
		
		case 9:
			return -15.4633f, 0.0328f, -5.1142f;
		
		case 10:
			return -20.9567f, 0f, 170.5743f;
		
		case 11:
			return 1.9344f, 0f, -55.2084f;
		
		case 12:
			return -46.0342f, 0f, 37.5935f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_460(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x21F9D
{
	vector3 vVar0;
	vector3 vVar1;
	float fVar2;
	vector3 vVar3;
	
	vVar0 = { func_468(uParam1) };
	vVar1 = { func_467(uParam1) };
	fVar2 = func_466(uParam1);
	if (!CAM::DOES_CAM_EXIST(func_416(uParam0, 0)))
	{
		func_465(uParam0, 0, CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		CAM::SET_CAM_COORD(func_416(uParam0, 0), vVar0);
		CAM::SET_CAM_ROT(func_416(uParam0, 0), vVar1, 2);
	}
	CAM::SET_CAM_FOV(func_416(uParam0, 0), fVar2);
	CAM::SET_CAM_ACTIVE(func_416(uParam0, 0), true);
	if (bParam3)
	{
		vVar3 = { vVar0 };
		vVar3.z = (vVar3.z + 8f);
		CAM::SET_CAM_PARAMS(func_416(uParam0, 0), vVar3, vVar1, fVar2, func_464(iParam2), 1, 1, 2);
	}
	vVar0 = { func_463(uParam1) };
	vVar1 = { func_462(uParam1) };
	fVar2 = func_461(uParam1);
	if (!CAM::DOES_CAM_EXIST(func_416(uParam0, 1)))
	{
		func_465(uParam0, 1, CAM::CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar1, 65f, 0, 2), 1);
	}
	else
	{
		CAM::SET_CAM_COORD(func_416(uParam0, 1), vVar0);
		CAM::SET_CAM_ROT(func_416(uParam0, 1), vVar1, 2);
	}
	CAM::SET_CAM_FOV(func_416(uParam0, 1), fVar2);
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::SET_CAM_ACTIVE_WITH_INTERP(func_416(uParam0, 1), func_416(uParam0, 0), func_464(iParam2), 1, 1);
	}
	CAM::RENDER_SCRIPT_CAMS(true, 0, 3000, 1, 0, 0);
	CAM::_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
	HUD::DISPLAY_RADAR(false);
	unk_0x59B038076F830627(false);
}

float func_461(var uParam0)//Position - 0x22123
{
	return uParam0->f_52;
}

Vector3 func_462(var uParam0)//Position - 0x2212F
{
	return uParam0->f_3A;
}

Vector3 func_463(var uParam0)//Position - 0x2213D
{
	return uParam0->f_37;
}

int func_464(int iParam0)//Position - 0x2214B
{
	switch (iParam0)
	{
		case 5:
		case 6:
		case 12:
			return 6000;
			break;
	}
	return 10000;
}

void func_465(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0x22178
{
	if (iParam1 >= 2)
	{
		return;
	}
	if (iParam3 && !CAM::DOES_CAM_EXIST(iParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = iParam2;
}

var func_466(var uParam0)//Position - 0x221A5
{
	return uParam0->f_51;
}

Vector3 func_467(var uParam0)//Position - 0x221B1
{
	return uParam0->f_34;
}

Vector3 func_468(var uParam0)//Position - 0x221BF
{
	return uParam0->f_31;
}

void func_469(int iParam0)//Position - 0x221CD
{
	if (!func_445(iParam0))
	{
		func_359(iParam0);
	}
}

void func_470(vector3 vParam0, float fParam1, bool bParam2)//Position - 0x221E5
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_295(&(Global_11188.f_22B[0 /*21*/]), iVar0))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_11188.f_22B[0 /*21*/], bParam2) <= fParam1)
			{
				func_471(iVar0);
			}
		}
		iVar0++;
	}
}

void func_471(int iParam0)//Position - 0x22235
{
	bool bVar0;
	
	if (iParam0 == 4294967295)
	{
		return;
	}
	if (func_295(&(Global_11188.f_22B[0 /*21*/]), iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_11188.f_8B[iParam0]))
		{
			bVar0 = true;
			if (!PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
			{
				if (OBJECT::_GET_DES_OBJECT_ANIM_PROGRESS(Global_11188.f_8B[iParam0], 0))
				{
					if (PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), Global_11188.f_8B[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_11188.f_8B[iParam0], true, 1);
				VEHICLE::DELETE_VEHICLE(&(Global_11188.f_8B[iParam0]));
			}
		}
		Global_11188[iParam0] = 1;
		if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_11188.f_22B[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_301(iParam0, 0)) && Global_11515.f_42 == 0) && Global_19E56.f_7F5D.f_7A6[Global_11188.f_22B[0 /*21*/].f_E] != 0) && Global_19E56.f_7F5D.f_7A6[Global_11188.f_22B[0 /*21*/].f_E] > 3) && (!func_472(0, Global_11188.f_22B[0 /*21*/].f_C) || !func_472(1, Global_11188.f_22B[0 /*21*/].f_C)))
			{
				func_302(&(Global_19E56.f_7F5D.f_45[Global_11188.f_22B[0 /*21*/].f_E /*78*/]), &Global_11515);
				Global_11563 = Global_19E56.f_7F5D.f_15D7;
			}
			func_299(iParam0, 0);
		}
	}
}

int func_472(int iParam0, int iParam1)//Position - 0x223A7
{
	int iVar0;
	
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		
		case 1:
			iVar0 = 1;
			break;
		
		case 2:
			iVar0 = 2;
			break;
	}
	if (iParam0 < 0 || iParam0 >= func_473(&(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_279(Global_19E56.f_7F5D.f_13AE[iVar0 /*157*/][iParam0 /*78*/].f_42, 0);
}

int func_473(var uParam0)//Position - 0x22419
{
	return *uParam0;
}

void func_474(char* sParam0, int iParam1)//Position - 0x22424
{
	int iVar0;
	int iVar1;
	
	if (Global_19906 && iParam1)
	{
		if (func_325(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
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
				func_477(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_476((Global_19E56.f_4F9E.f_91 - 1));
			Global_19E56.f_4F9E.f_91 = (Global_19E56.f_4F9E.f_91 - 1);
			func_475();
			return;
		}
		iVar0++;
	}
}

void func_475()//Position - 0x224D1
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

void func_476(int iParam0)//Position - 0x225F1
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

void func_477(int iParam0, int iParam1)//Position - 0x2268B
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

void func_478(bool bParam0)//Position - 0x2279B
{
	if (bParam0)
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(0);
		MISC::_DISABLE_AUTOMATIC_RESPAWN(1);
		MISC::SET_FADE_OUT_AFTER_DEATH(0);
		func_17(1);
		Global_15A09 = 1;
	}
	else
	{
		MISC::SET_FADE_IN_AFTER_DEATH_ARREST(1);
		MISC::_DISABLE_AUTOMATIC_RESPAWN(0);
		MISC::SET_FADE_OUT_AFTER_DEATH(1);
		func_17(0);
		Global_15A09 = 0;
	}
}

void func_479()//Position - 0x227DD
{
	func_480(&uLocal_105, 0);
}

void func_480(var uParam0, int iParam1)//Position - 0x227EC
{
	if (uParam0->f_4 != 0)
	{
		func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_2C));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_484(uParam0);
		func_483(uParam0);
		func_117(&Global_1C126B);
	}
	if (Global_1C0180.f_A94 != 0 || Global_1C0180.f_C70)
	{
		func_481();
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		AUDIO::STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		func_88(&(Global_1C171C.f_31));
	}
	Global_26862F.f_F72 = 0;
}

void func_481()//Position - 0x22897
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_3C = 6;
	Var2.f_43 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1C0180[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1C0180.f_A90[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_A94 = 0;
	Global_1C0180.f_A95 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1C0180.f_A96[iVar0] = 0;
		StringCopy(&(Global_1C0180.f_A9D[iVar0 /*6*/]), "", 24);
		Global_1C0180.f_AC2[iVar0] = 0;
		Global_1C0180.f_AC9[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_AD0 = 0;
	Global_1C0180.f_AD1 = 0;
	Global_1C0180.f_AD2 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1C0180.f_AD3[iVar0] = 0;
		Global_1C0180.f_AD7[iVar0] = 0;
		iVar0++;
	}
	Global_1C0180.f_ADB = 0;
	func_482(&(Global_1C0180.f_ADC));
	func_88(&(Global_1C0180.f_B07));
	Global_1C0180.f_B09 = 4294967295;
	Global_1C0180.f_B0A = 0;
	func_88(&(Global_1C0180.f_B0B));
	Global_1C0180.f_B0D = 0;
	func_88(&(Global_1C0180.f_B0E));
	Global_1C0180.f_B10 = 0;
	Global_1C0180.f_ADC.f_1C = 0;
	Global_1C0180.f_ADC.f_1B = 0;
	Global_1C0180.f_C70 = 0;
}

void func_482(var uParam0)//Position - 0x22A02
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_19 = 1;
	uParam0->f_1A = 0;
	uParam0->f_1B = 0;
	uParam0->f_1C = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_1D[iVar0] = 0;
		uParam0->f_24[iVar0] = 0;
		iVar0++;
	}
}

void func_483(var uParam0)//Position - 0x22A58
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_F6 = 0;
	uParam0->f_F6.f_1 = 4294967295;
	uParam0->f_F6.f_2 = 0;
	func_88(&(uParam0->f_F6.f_3));
	uParam0->f_F6.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_F6.f_6[iVar0 /*15*/] = 4294967295;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_F6.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_F6.f_BB[iVar0] = 0;
		iVar0++;
	}
}

void func_484(var uParam0)//Position - 0x22AE0
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_2A = 0;
	uParam0->f_2B = 0;
	uParam0->f_2C = 0;
	uParam0->f_2C.f_1 = 0;
	uParam0->f_2C.f_2 = 0;
	uParam0->f_2C.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_2C.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_71[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_71[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_485()//Position - 0x22BAA
{
	Global_434C.f_5 = 1;
}

void func_486(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x22BB8
{
	int iVar0;
	
	if (iParam1 < 11)
	{
		if (!func_251(uParam0, 19))
		{
			if ((iParam1 == 4 && !bParam3) && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				if (func_488(func_489(iParam2, 19), "", &(uParam0->f_25B), 19))
				{
				}
			}
		}
		if (!func_251(uParam0, 20))
		{
			if (iParam1 > 4)
			{
				if (func_488(func_489(iParam2, 20), func_489(iParam2, 19), &(uParam0->f_25B), 20))
				{
				}
			}
		}
		else if (!func_251(uParam0, 21))
		{
			if (iParam1 == 9)
			{
				if (func_488(func_489(iParam2, 21), func_489(iParam2, 20), &(uParam0->f_25B), 21))
				{
				}
			}
			else if (iParam1 == 8)
			{
				if (func_488(func_489(iParam2, 21), func_489(iParam2, 20), &(uParam0->f_25B), 21))
				{
				}
			}
		}
		else if (!func_251(uParam0, 22))
		{
			if (iParam1 == 9)
			{
				iVar0 = PED::GET_PED_PARACHUTE_STATE(AUDIO::_0x0626A247D2405330());
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (func_488(func_489(iParam2, 22), func_489(iParam2, 21), &(uParam0->f_25B), 22))
					{
					}
				}
			}
		}
		else if (iParam1 == 10 && !func_251(uParam0, 23))
		{
			func_487(func_489(iParam2, 22), &(uParam0->f_25B), 23);
		}
		else if (!func_251(uParam0, 23) && !PLAYER::IS_PLAYER_PLAYING(CAM::_0xDC9DA9E8789F5246()))
		{
			AUDIO::STOP_AUDIO_SCENES();
		}
	}
}

void func_487(char* sParam0, int iParam1, int iParam2)//Position - 0x22D36
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam1, iParam2))
	{
		AUDIO::STOP_AUDIO_SCENE(sParam0);
		MISC::SET_BIT(iParam1, iParam2);
	}
}

int func_488(char* sParam0, char* sParam1, int iParam2, int iParam3)//Position - 0x22D59
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam1))
		{
			AUDIO::STOP_AUDIO_SCENE(sParam1);
		}
	}
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam2, iParam3))
	{
		if (AUDIO::START_AUDIO_SCENE(sParam0))
		{
			MISC::SET_BIT(iParam2, iParam3);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_489(int iParam0, int iParam1)//Position - 0x22DAA
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam1)
	{
		case 19:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		
		case 20:
			if (func_448(func_449(iParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (PED::IS_PED_IN_ANY_VEHICLE(AUDIO::_0x0626A247D2405330(), 0) && func_353(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(AUDIO::_0x0626A247D2405330(), 0))))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_MOTO";
			}
			else
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_ON_FOOT";
			}
			return sVar0;
		
		case 21:
			return "BASEJUMPS_SKYDIVE";
		
		case 22:
			return "BASEJUMPS_OPEN_PARACHUTE";
		
		default:
	}
	return "";
}

void func_490(var uParam0, int iParam1)//Position - 0x22E3A
{
	if (iParam1 < 11)
	{
		if (!func_251(uParam0, 15))
		{
			if (iParam1 >= 4 && (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()))
			{
				if (func_492(func_493(11), &(uParam0->f_25B), 11))
				{
					func_491(func_493(15), &(uParam0->f_25B), 15);
				}
			}
		}
		else if (!func_251(uParam0, 16))
		{
			if (iParam1 == 9)
			{
				if (func_492(func_493(12), &(uParam0->f_25B), 12))
				{
					func_491(func_493(16), &(uParam0->f_25B), 16);
				}
			}
			else if (iParam1 == 8)
			{
				if (func_492(func_493(12), &(uParam0->f_25B), 12))
				{
					func_491(func_493(16), &(uParam0->f_25B), 16);
				}
			}
		}
		else if (iParam1 == 10 && !func_251(uParam0, 17))
		{
			if (func_492(func_493(13), &(uParam0->f_25B), 13))
			{
				func_491(func_493(17), &(uParam0->f_25B), 17);
			}
		}
	}
}

int func_491(char* sParam0, int iParam1, int iParam2)//Position - 0x22F40
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam1, iParam2))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			if (AUDIO::TRIGGER_MUSIC_EVENT(sParam0))
			{
				MISC::SET_BIT(iParam1, iParam2);
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

int func_492(char* sParam0, int iParam1, int iParam2)//Position - 0x22F81
{
	if (!INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(*iParam1, iParam2))
	{
		if (AUDIO::PREPARE_MUSIC_EVENT(sParam0))
		{
			MISC::SET_BIT(iParam1, iParam2);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_493(int iParam0)//Position - 0x22FB3
{
	switch (iParam0)
	{
		case 15:
		case 11:
			return "OJBJ_START";
		
		case 16:
		case 12:
			return "OJBJ_JUMPED";
		
		case 17:
		case 13:
			return "OJBJ_LANDED";
		
		case 18:
		case 14:
			return "OJBJ_STOP";
		
		default:
	}
	return "";
}

void func_494(var uParam0)//Position - 0x23011
{
	struct<2> Var0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	PAD::_DISABLE_INPUT_GROUP(0);
	PAD::_DISABLE_INPUT_GROUP(2);
	func_501(&uVar1, &uVar2, &iVar3, &iVar4, PLAYER::IS_PLAYER_CONTROL_ON(CAM::_0xDC9DA9E8789F5246()), PAD::_IS_INPUT_DISABLED(2));
	Var0 = (SYSTEM::TO_FLOAT(iVar3) / 128f);
	Var0.f_1 = (SYSTEM::TO_FLOAT(iVar4) / -128f);
	func_498(uParam0, Var0, Var0.f_1);
	func_497(uParam0);
	if (PAD::IS_CONTROL_PRESSED(2, 224))
	{
		func_496(uParam0, 0, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(0, 22) || unk_0xE11F00B4AC919F45(0, 22))
	{
		func_496(uParam0, 1, 1);
	}
	if (func_495())
	{
		func_496(uParam0, 2, 1);
	}
	if (unk_0xE11F00B4AC919F45(2, 22))
	{
		func_496(uParam0, 3, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 216))
	{
		func_496(uParam0, 4, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 215) || unk_0xE11F00B4AC919F45(2, 200))
	{
		func_496(uParam0, 5, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 201))
	{
		func_496(uParam0, 6, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 202))
	{
		func_496(uParam0, 7, 1);
	}
	if (PAD::IS_CONTROL_PRESSED(2, 211))
	{
		func_496(uParam0, 8, 1);
	}
}

int func_495()//Position - 0x23126
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (PAD::IS_CONTROL_PRESSED(0, 18) || PAD::IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_496(var uParam0, int iParam1, bool bParam2)//Position - 0x23158
{
	if (bParam2)
	{
		MISC::SET_BIT(&(uParam0->f_2), iParam1);
	}
	else
	{
		GRAPHICS::_0x35FB78DC42B7BD21(&(uParam0->f_2), iParam1);
	}
}

void func_497(var uParam0)//Position - 0x2317C
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0;
}

void func_498(var uParam0, var uParam1, var uParam2)//Position - 0x23191
{
	func_500(uParam0, uParam1);
	func_499(uParam0, uParam2);
}

void func_499(var uParam0, var uParam1)//Position - 0x231A9
{
	uParam0->f_1 = uParam1;
}

void func_500(var uParam0, var uParam1)//Position - 0x231B7
{
	*uParam0 = uParam1;
}

void func_501(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x231C4
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (bParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = PAD::GET_CONTROL_NORMAL(0, 218);
			fVar1 = PAD::GET_CONTROL_NORMAL(0, 219);
			fVar2 = PAD::GET_CONTROL_NORMAL(0, 220);
			fVar3 = PAD::GET_CONTROL_NORMAL(0, 221);
		}
		else
		{
			fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 218);
			fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 219);
			fVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 220);
			fVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = PAD::_0x5B84D09CEC5209C5(0, 218);
		fVar1 = PAD::_0x5B84D09CEC5209C5(0, 219);
		fVar2 = PAD::_0x5B84D09CEC5209C5(0, 220);
		fVar3 = PAD::_0x5B84D09CEC5209C5(0, 221);
	}
	else
	{
		fVar0 = PAD::_0x4F8A26A890FD62FB(0, 218);
		fVar1 = PAD::_0x4F8A26A890FD62FB(0, 219);
		fVar2 = PAD::_0x4F8A26A890FD62FB(0, 220);
		fVar3 = PAD::_0x4F8A26A890FD62FB(0, 221);
	}
	*uParam0 = SYSTEM::ROUND((128f * fVar0));
	*uParam1 = SYSTEM::ROUND((128f * fVar1));
	*uParam2 = SYSTEM::ROUND((128f * fVar2));
	*uParam3 = SYSTEM::ROUND((128f * fVar3));
}

void func_502()//Position - 0x232B1
{
	PAD::DISABLE_CONTROL_ACTION(0, 81, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 82, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 85, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 37, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 12, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 13, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 14, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 15, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 16, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 17, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 25, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 24, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 50, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 53, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 54, 1);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

var func_503()//Position - 0x2335E
{
	var uVar0;
	
	func_513(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_512(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_511(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_506(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_505(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_504(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_504(var uParam0, int iParam1)//Position - 0x233A4
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

void func_505(var uParam0, int iParam1)//Position - 0x2342A
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_506(var uParam0, int iParam1)//Position - 0x2345D
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_510(*uParam0);
	iVar1 = func_508(*uParam0);
	if (iParam1 < 1 || iParam1 > func_507(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_507(int iParam0, int iParam1)//Position - 0x234AE
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

var func_508(int iParam0)//Position - 0x23550
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_509(INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(iParam0, 31), 4294967295, 1)) + 2011;
}

int func_509(bool bParam0, int iParam1, int iParam2)//Position - 0x23575
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_510(var uParam0)//Position - 0x2358C
{
	return uParam0 & 15;
}

void func_511(var uParam0, int iParam1)//Position - 0x23599
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_512(var uParam0, int iParam1)//Position - 0x235D3
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_513(var uParam0, int iParam1)//Position - 0x2360E
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_514(var uParam0)//Position - 0x2364A
{
	return uParam0->f_2;
}

void func_515(var uParam0, int iParam1)//Position - 0x23656
{
	int iVar0;
	
	iVar0 = func_35(AUDIO::_0x0626A247D2405330());
	switch (iParam1)
	{
		case 0:
			func_540(uParam0, 125);
			func_539(uParam0, joaat("SQUALO"));
			func_538(uParam0, 41.0737f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -1039.712f, -1731.145f, 1f);
			func_529(uParam0, 317.8872f);
			func_528(uParam0, 0f, -2f, 0f);
			func_527(uParam0, "BJ_01P");
			func_525(uParam0, func_526(0));
			func_524(uParam0, func_459(0));
			func_523(uParam0, 53.4142f);
			func_522(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_521(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_520(uParam0, 39.6124f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 1:
			func_540(uParam0, 126);
			func_539(uParam0, 0);
			func_538(uParam0, 10.5f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, 978.232f, -397.611f, 416.607f);
			func_530(uParam0, 1, 873.389f, -183.851f, 302.972f);
			func_530(uParam0, 2, 1082.347f, -86.822f, 174.287f);
			func_530(uParam0, 3, 1151.098f, 124.6955f, 81.4805f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_02P");
			func_525(uParam0, func_526(1));
			func_524(uParam0, func_459(1));
			func_523(uParam0, 52.5984f);
			func_522(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_521(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_520(uParam0, 41.3305f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 2:
			func_540(uParam0, 127);
			func_539(uParam0, 0);
			func_538(uParam0, 289.2623f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, 2028.516f, 1759.102f, 424.7939f);
			func_530(uParam0, 1, 2230.78f, 1600.25f, 318.384f);
			func_530(uParam0, 2, 2410.55f, 1739.71f, 253.494f);
			func_530(uParam0, 3, 2273.787f, 1885.168f, 152.702f);
			func_530(uParam0, 4, 2111.912f, 1887.456f, 92.5308f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_03P");
			func_525(uParam0, func_526(2));
			func_524(uParam0, func_459(2));
			func_523(uParam0, 31.9702f);
			func_522(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_521(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_520(uParam0, 50.8804f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 3:
			func_540(uParam0, 128);
			func_539(uParam0, 0);
			func_538(uParam0, 60.1427f);
			func_537(uParam0, joaat("FROGGER"));
			func_536(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_535(uParam0, 119.8889f);
			func_534(uParam0, 5f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, 320.69f, 5808.49f, 550.56f);
			func_530(uParam0, 1, 220.59f, 5943.149f, 415.514f);
			func_530(uParam0, 2, 30.63f, 6117.63f, 227.9f);
			func_530(uParam0, 3, -80.95f, 6440.43f, 100.48f);
			func_530(uParam0, 4, -273.773f, 6633.584f, 6.533f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_04M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_04F");
			}
			else
			{
				func_527(uParam0, "BJ_04T");
			}
			func_525(uParam0, func_526(3));
			func_524(uParam0, func_459(3));
			func_523(uParam0, 44.3626f);
			func_522(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_521(uParam0, -5.0705f, 0f, 20.8267f);
			func_520(uParam0, 43.8549f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 4:
			func_540(uParam0, 129);
			func_539(uParam0, 0);
			func_538(uParam0, 1.8891f);
			func_537(uParam0, joaat("SKYLIFT"));
			func_536(uParam0, -75.3f, -823.9f, 329.2f);
			func_535(uParam0, 150f);
			func_534(uParam0, 4f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -77.2067f, -444.208f, 37f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_05M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_05F");
			}
			else
			{
				func_527(uParam0, "BJ_05T");
			}
			func_525(uParam0, func_526(4));
			func_524(uParam0, func_459(4));
			func_523(uParam0, 26.7726f);
			func_522(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_521(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_520(uParam0, 30.0131f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 5:
			func_540(uParam0, 130);
			func_539(uParam0, joaat("HAULER"));
			func_538(uParam0, 358.9586f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -96.9738f, -662.5833f, 34.7843f);
			func_529(uParam0, -18.6f);
			func_528(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_06M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_06F");
			}
			else
			{
				func_527(uParam0, "BJ_06T");
			}
			func_525(uParam0, func_526(5));
			func_524(uParam0, func_459(5));
			func_523(uParam0, 55.7667f);
			func_522(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_521(uParam0, -7.6574f, 0f, 0.8528f);
			func_520(uParam0, 60f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 6:
			func_540(uParam0, 131);
			func_539(uParam0, 0);
			func_538(uParam0, 164.6178f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, joaat("BLAZER"));
			func_532(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_531(uParam0, 87.84f);
			func_530(uParam0, 0, -1246.49f, 4482.091f, 100.349f);
			func_530(uParam0, 1, -1309.67f, 4400.428f, 50.542f);
			func_530(uParam0, 2, -1304.67f, 4348.428f, 5.75f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_07M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_07F");
			}
			else
			{
				func_527(uParam0, "BJ_07T");
			}
			func_525(uParam0, func_526(6));
			func_524(uParam0, func_459(6));
			func_523(uParam0, 47.1789f);
			func_522(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_521(uParam0, -13.6409f, 0f, 172.0553f);
			func_520(uParam0, 47.1789f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 7:
			func_540(uParam0, 132);
			func_539(uParam0, joaat("FREIGHT"));
			func_538(uParam0, 112.6f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -487.5452f, 4252.192f, 87.712f);
			func_529(uParam0, 10.8894f);
			func_528(uParam0, 0f, -20f, 4f);
			func_527(uParam0, "BJ_08P");
			func_525(uParam0, func_526(7));
			func_524(uParam0, func_459(7));
			func_523(uParam0, 24.3623f);
			func_522(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_521(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_520(uParam0, 37.0424f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 8:
			func_540(uParam0, 133);
			func_539(uParam0, 0);
			func_538(uParam0, 104.207f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, -1154.443f, 204.1726f, 64.4915f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_09M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_09F");
			}
			else
			{
				func_527(uParam0, "BJ_09T");
			}
			func_525(uParam0, func_526(8));
			func_524(uParam0, func_459(8));
			func_523(uParam0, 50f);
			func_522(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_521(uParam0, -19.7458f, 0f, 116.6405f);
			func_520(uParam0, 55.2882f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 9:
			func_540(uParam0, 134);
			func_539(uParam0, 0);
			func_538(uParam0, 329.4791f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, joaat("BLAZER"));
			func_532(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_531(uParam0, -89.36f);
			func_530(uParam0, 0, -1200f, 3616f, 964f);
			func_530(uParam0, 1, -1240f, 3307f, 854f);
			func_530(uParam0, 2, -1552f, 3456f, 655f);
			func_530(uParam0, 3, -1616f, 3808f, 505f);
			func_530(uParam0, 4, -1157.684f, 4128.348f, 288.607f);
			func_530(uParam0, 5, -1063.995f, 4246.137f, 163.291f);
			func_530(uParam0, 6, -938.541f, 4360.14f, 82.372f);
			func_530(uParam0, 7, -828.1418f, 4413.562f, 20.062f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_10P");
			func_525(uParam0, func_526(9));
			func_524(uParam0, func_459(9));
			func_523(uParam0, 31.7648f);
			func_522(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_521(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_520(uParam0, 39.6786f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 10:
			func_540(uParam0, 135);
			func_539(uParam0, 0);
			func_538(uParam0, 0f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0);
			func_532(uParam0, 0f, 0f, 0f);
			func_531(uParam0, 0f);
			func_530(uParam0, 0, 1239.342f, 4008.389f, 1135.372f);
			func_530(uParam0, 1, 1374.479f, 4156.592f, 1019.694f);
			func_530(uParam0, 2, 1391.31f, 4362.621f, 909.212f);
			func_530(uParam0, 3, 1240.832f, 4598.044f, 758.002f);
			func_530(uParam0, 4, 1382.169f, 4377.629f, 600.013f);
			func_530(uParam0, 5, 1624.116f, 4207.519f, 471.225f);
			func_530(uParam0, 6, 1910.345f, 4175.518f, 362.862f);
			func_530(uParam0, 7, 2236.975f, 4282.967f, 218.116f);
			func_530(uParam0, 8, 2330.282f, 4534.43f, 90f);
			func_530(uParam0, 9, 2473.344f, 4715.347f, 33.524f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_11P");
			func_525(uParam0, func_526(10));
			func_524(uParam0, func_459(10));
			func_523(uParam0, 27.2187f);
			func_522(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_521(uParam0, -54.7868f, 0f, -90.128f);
			func_520(uParam0, 35.5634f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 11:
			func_540(uParam0, 136);
			func_539(uParam0, 0);
			func_538(uParam0, 24.92f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, joaat("SANCHEZ"));
			func_532(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_531(uParam0, 130.39f);
			func_530(uParam0, 0, 1829.46f, -260.665f, 1141.852f);
			func_530(uParam0, 1, 1816.46f, -10.665f, 1033.084f);
			func_530(uParam0, 2, 1688.46f, 218.335f, 924.307f);
			func_530(uParam0, 3, 1503.46f, 382.335f, 815.529f);
			func_530(uParam0, 4, 1554.46f, 598.335f, 706.751f);
			func_530(uParam0, 5, 1813.46f, 724.335f, 597.973f);
			func_530(uParam0, 6, 1975.46f, 519.335f, 486.196f);
			func_530(uParam0, 7, 1946.46f, 125.335f, 364.417f);
			func_530(uParam0, 8, 1663.46f, -15.665f, 241.64f);
			func_530(uParam0, 9, 1396.64f, -62.665f, 118f);
			func_530(uParam0, 10, 1278.5f, -41.05f, 61.7f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			func_527(uParam0, "BJ_12P");
			func_525(uParam0, func_526(11));
			func_524(uParam0, func_459(11));
			func_523(uParam0, 18.9374f);
			func_522(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_521(uParam0, -54.5827f, 0f, -2.0463f);
			func_520(uParam0, 56.4495f);
			func_519(uParam0, 0);
			func_518(uParam0, 0);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
		
		case 12:
			func_540(uParam0, 137);
			func_539(uParam0, 0);
			func_538(uParam0, 359.2885f);
			func_537(uParam0, 0);
			func_536(uParam0, 0f, 0f, 0f);
			func_535(uParam0, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, joaat("SANCHEZ"));
			func_532(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_531(uParam0, 104.35f);
			func_530(uParam0, 0, -771.9196f, 4400.453f, 60.5786f);
			func_530(uParam0, 1, -892.6581f, 4427.487f, 19.8561f);
			func_529(uParam0, 0f);
			func_528(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_527(uParam0, "BJ_13M");
			}
			else if (iVar0 == 1)
			{
				func_527(uParam0, "BJ_13F");
			}
			else
			{
				func_527(uParam0, "BJ_13T");
			}
			func_525(uParam0, func_526(12));
			func_524(uParam0, func_459(12));
			func_523(uParam0, 48.3921f);
			func_522(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_521(uParam0, -18.0357f, 0f, 6.0212f);
			func_520(uParam0, 48.3921f);
			func_519(uParam0, 0);
			func_518(uParam0, 1);
			func_517(uParam0, 0f, 0f, 0f);
			func_516(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_516(var uParam0, vector3 vParam1)//Position - 0x24831
{
	uParam0->f_43 = { vParam1 };
}

void func_517(var uParam0, vector3 vParam1)//Position - 0x24843
{
	uParam0->f_40 = { vParam1 };
}

void func_518(var uParam0, int iParam1)//Position - 0x24855
{
	uParam0->f_54 = iParam1;
}

void func_519(var uParam0, int iParam1)//Position - 0x24863
{
	uParam0->f_53 = iParam1;
}

void func_520(var uParam0, float fParam1)//Position - 0x24871
{
	uParam0->f_52 = fParam1;
}

void func_521(var uParam0, vector3 vParam1)//Position - 0x2487F
{
	uParam0->f_3A = { vParam1 };
}

void func_522(var uParam0, vector3 vParam1)//Position - 0x24891
{
	uParam0->f_37 = { vParam1 };
}

void func_523(var uParam0, float fParam1)//Position - 0x248A3
{
	uParam0->f_51 = fParam1;
}

void func_524(var uParam0, vector3 vParam1)//Position - 0x248B1
{
	uParam0->f_34 = { vParam1 };
}

void func_525(var uParam0, vector3 vParam1)//Position - 0x248C3
{
	uParam0->f_31 = { vParam1 };
}

Vector3 func_526(int iParam0)//Position - 0x248D5
{
	switch (iParam0)
	{
		case 0:
			return -1143.586f, -1859.747f, 208.3878f;
		
		case 1:
			return 877.5864f, -436.3322f, 536.9036f;
		
		case 2:
			return 2041.231f, 1978.98f, 585.9358f;
		
		case 3:
			return 405.2326f, 5705.887f, 697.2318f;
		
		case 4:
			return -103.8901f, -870.8046f, 298.7574f;
		
		case 5:
			return -118.2569f, -975.1133f, 297.3781f;
		
		case 6:
			return -1237.465f, 4526.661f, 181.7929f;
		
		case 7:
			return -357.7932f, 4107.914f, 314.8059f;
		
		case 8:
			return -809.6324f, 331.3331f, 233.2818f;
		
		case 9:
			return -1286.926f, 3660.203f, 1076.051f;
		
		case 10:
			return 1022.178f, 3975.738f, 1362.533f;
		
		case 11:
			return 1608.553f, -434.5186f, 1321.916f;
		
		case 12:
			return -756.3533f, 4341.521f, 143.8134f;
		
		default:
	}
	return 0f, 0f, 0f;
}

void func_527(var uParam0, char* sParam1)//Position - 0x24A1F
{
	uParam0->f_4 = sParam1;
}

void func_528(var uParam0, vector3 vParam1)//Position - 0x24A2D
{
	uParam0->f_6 = { vParam1 };
}

void func_529(var uParam0, float fParam1)//Position - 0x24A3F
{
	uParam0->f_4D = fParam1;
}

void func_530(var uParam0, int iParam1, vector3 vParam2)//Position - 0x24A4D
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return;
	}
	uParam0->f_C[iParam1 /*3*/] = { vParam2 };
}

void func_531(var uParam0, float fParam1)//Position - 0x24A78
{
	uParam0->f_4F = fParam1;
}

void func_532(var uParam0, vector3 vParam1)//Position - 0x24A86
{
	uParam0->f_9 = { vParam1 };
}

void func_533(var uParam0, int iParam1)//Position - 0x24A98
{
	uParam0->f_3 = iParam1;
}

void func_534(var uParam0, float fParam1)//Position - 0x24AA6
{
	uParam0->f_50 = fParam1;
}

void func_535(var uParam0, float fParam1)//Position - 0x24AB4
{
	uParam0->f_4E = fParam1;
}

void func_536(var uParam0, vector3 vParam1)//Position - 0x24AC2
{
	uParam0->f_46 = { vParam1 };
}

void func_537(var uParam0, int iParam1)//Position - 0x24AD4
{
	uParam0->f_2 = iParam1;
}

void func_538(var uParam0, float fParam1)//Position - 0x24AE2
{
	uParam0->f_4C = fParam1;
}

void func_539(var uParam0, int iParam1)//Position - 0x24AF0
{
	uParam0->f_1 = iParam1;
}

void func_540(var uParam0, int iParam1)//Position - 0x24AFE
{
	*uParam0 = iParam1;
}

void func_541(int iParam0, bool bParam1)//Position - 0x24B0B
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

void func_542(int iParam0)//Position - 0x24B2D
{
	func_370();
	Global_11724 = iParam0;
	Global_11723 = 0;
	Global_11726 = 3;
}

void func_543(var uParam0, var uParam1, int iParam2, var uParam3, int iParam4, var uParam5, int iParam6, var uParam7, int iParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14, int iParam15, var uParam16, bool bParam17)//Position - 0x24B49
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	func_364();
	func_363();
	func_479();
	func_549(uParam1);
	func_541(23, 0);
	func_548(*uParam1);
	VEHICLE::_0xE30524E1871F481D(*uParam16);
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_START");
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_JUMPED");
	AUDIO::CANCEL_MUSIC_EVENT("OJBJ_LANDED");
	AUDIO::TRIGGER_MUSIC_EVENT("OJBJ_STOP");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_OPEN_PARACHUTE");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_SKYDIVE");
	AUDIO::STOP_AUDIO_SCENE("BASEJUMPS_OPEN_PARACHUTE");
	AUDIO::STOP_AUDIO_SCENES();
	uParam11 = uParam11;
	Global_15A08 = 0;
	Global_15A09 = 0;
	Global_15A0A = 0;
	func_20(0, 1);
	func_18(0, 1);
	func_17(0);
	MISC::SET_FADE_OUT_AFTER_DEATH(1);
	MISC::_DISABLE_AUTOMATIC_RESPAWN(0);
	MISC::IGNORE_NEXT_RESTART(0);
	while (CAM::IS_SCREEN_FADING_OUT())
	{
		SYSTEM::WAIT(0);
	}
	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
	{
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(1);
	}
	if (HUD::DOES_BLIP_EXIST(iParam13))
	{
		HUD::REMOVE_BLIP(&iParam13);
	}
	if (HUD::DOES_BLIP_EXIST(iParam14))
	{
		HUD::REMOVE_BLIP(&iParam14);
	}
	func_370();
	func_26(0);
	PLAYER::SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(CAM::_0xDC9DA9E8789F5246(), false);
	func_547(1, 1);
	if (func_414(func_440(uParam0)))
	{
	}
	else
	{
		VEHICLE::_0x0A436B8643716D14();
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREAS();
	func_545(uParam7);
	func_271();
	HUD::_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
	GRAPHICS::_0x6DDBF9DFFC4AC080(0);
	func_210(0, 0);
	PLAYER::SET_PLAYER_CONTROL(CAM::_0xDC9DA9E8789F5246(), true, 0);
	if (iParam15 == 5)
	{
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 146, false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(AUDIO::_0x0626A247D2405330()) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330()))
	{
		PED::SET_PED_RESET_FLAG(AUDIO::_0x0626A247D2405330(), 177, 0);
		PED::SET_PED_CONFIG_FLAG(AUDIO::_0x0626A247D2405330(), 36, false);
		PLAYER::SET_PLAYER_INVINCIBLE(CAM::_0xDC9DA9E8789F5246(), 0);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(AUDIO::_0x0626A247D2405330(), 0);
		if (!bParam17)
		{
			WEAPON::REMOVE_WEAPON_FROM_PED(AUDIO::_0x0626A247D2405330(), joaat("gadget_parachute"));
		}
		PED::SET_PED_LOD_MULTIPLIER(AUDIO::_0x0626A247D2405330(), 1f);
		PED::SET_PED_HELMET(AUDIO::_0x0626A247D2405330(), 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam10)[iVar1]) && !ENTITY::IS_ENTITY_DEAD((*uParam10)[iVar1], 0))
		{
			NETWORK::_0x5E3AA4CA2B6FB0EE((*uParam10)[iVar1]);
			(*uParam10)[iVar1] = 0;
		}
		iVar1++;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(*iParam6) && *iParam6 != PLAYER::GET_PLAYERS_LAST_VEHICLE()) && !ENTITY::IS_ENTITY_DEAD(*iParam6, 0))
	{
		VEHICLE::SET_PLAYERS_LAST_VEHICLE(*iParam6);
		func_274(*iParam6, func_313(iParam15), func_312(iParam15), 24, 0);
	}
	if (!PED::IS_PED_INJURED(*iParam8))
	{
		if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam8))
		{
			PED::DELETE_PED(iParam8);
		}
		else
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam8);
		}
	}
	if (!PED::IS_PED_INJURED(*uParam9))
	{
		NETWORK::_0x5E3AA4CA2B6FB0EE(*uParam9);
		ENTITY::SET_ENTITY_HEALTH(*uParam9, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam2))
	{
		if (func_448(func_449(iParam15)))
		{
			if ((!ENTITY::IS_ENTITY_DEAD(*iParam2, 0) && !PED::IS_PED_INJURED(AUDIO::_0x0626A247D2405330())) && PED::IS_PED_IN_VEHICLE(AUDIO::_0x0626A247D2405330(), *iParam2, 0))
			{
				PED::_0xF9ACF4A08098EA25(AUDIO::_0x0626A247D2405330(), 1);
			}
			if (!ENTITY::IS_ENTITY_ON_SCREEN(*iParam2))
			{
				VEHICLE::DELETE_VEHICLE(iParam2);
			}
			else
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
			}
		}
		else
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(iParam2);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		if (func_355(func_356(uParam0)))
		{
			VEHICLE::SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(uParam3, 0);
			VEHICLE::SET_RANDOM_TRAINS(1);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam4) && !ENTITY::IS_ENTITY_DEAD(*iParam4, 0))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(*iParam4, 4294967295, 0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		VEHICLE::DELETE_VEHICLE(iParam4);
	}
	iVar2 = 0;
	while (iVar2 < *uParam5)
	{
		if (ENTITY::DOES_ENTITY_EXIST((*uParam5)[iVar2]) && !ENTITY::IS_ENTITY_DEAD((*uParam5)[iVar2], 0))
		{
			VEHICLE::SET_VEHICLE_LOD_MULTIPLIER((*uParam5)[iVar2], 1f);
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG((*uParam5)[iVar2], 0, 1);
		}
		iVar2++;
	}
	*iParam12 = 1;
	GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(1);
	CAM::RENDER_SCRIPT_CAMS(false, 0, 3000, 1, 0, 0);
	HUD::DISPLAY_RADAR(true);
	unk_0x59B038076F830627(true);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(1);
	func_544();
	SCRIPT::SET_NO_LOADING_SCREEN(false);
	Global_19E56.f_49FB = 4294967295;
	HUD::DISPLAY_SNIPER_SCOPE_THIS_FRAME();
}

void func_544()//Position - 0x24F11
{
	Global_434C.f_5 = 0;
}

void func_545(var uParam0)//Position - 0x24F1F
{
	func_546(uParam0, 0);
	func_546(uParam0, 1);
	func_546(uParam0, 2);
}

void func_546(var uParam0, int iParam1)//Position - 0x24F3C
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_547(int iParam0, bool bParam1)//Position - 0x24F59
{
	if (INTERIOR::_GET_ROOM_KEY_FROM_GAMEPLAY_CAM(Global_6411, iParam0))
	{
		if (!bParam1)
		{
			GRAPHICS::_0x35FB78DC42B7BD21(&Global_6411, iParam0);
			StringCopy(&(Global_6412[iParam0 /*6*/]), "NULL", 24);
			Global_6449[iParam0] = bParam1;
		}
	}
}

void func_548(var uParam0)//Position - 0x24F90
{
	GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_549(var uParam0)//Position - 0x24F9E
{
	func_548(*uParam0);
}

