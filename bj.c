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
	int iLocal_43 = 0;
	int iLocal_44 = 0;
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
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 10;
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
	var uLocal_74 = 2;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 8;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 8;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	float fLocal_96 = 0f;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	struct<68> Local_100 = { 0, 0, 1132396544, 1132396544, 1132396544, 0, -1082130432, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 1092616192 } ;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	vector3 vLocal_170 = { 0f, 0f, 0f };
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 3;
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
	var uLocal_224 = 4;
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
	var uLocal_289 = 2;
	var uLocal_290 = 0;
	var uLocal_291 = 4;
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
	var uLocal_357 = 4;
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
	var uLocal_428 = 12;
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
	var uLocal_609 = 3;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	int iLocal_613 = 0;
	int iLocal_614 = 0;
	int iLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 16;
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
	var uScriptParam_96 = 0;
	var uScriptParam_97 = 0;
	var uScriptParam_98 = 0;
	var uScriptParam_99 = 0;
	var uScriptParam_100 = 0;
	var uScriptParam_101 = 0;
	var uScriptParam_102 = 0;
	var uScriptParam_103 = 0;
	var uScriptParam_104 = 0;
	var uScriptParam_105 = 0;
	var uScriptParam_106 = 0;
	var uScriptParam_107 = 0;
	var uScriptParam_108 = 0;
	var uScriptParam_109 = 0;
	var uScriptParam_110 = 0;
	var uScriptParam_111 = 0;
	var uScriptParam_112 = 0;
	var uScriptParam_113 = 0;
	var uScriptParam_114 = 0;
	var uScriptParam_115 = 0;
	var uScriptParam_116 = 0;
	var uScriptParam_117 = 0;
	var uScriptParam_118 = 0;
	var uScriptParam_119 = 0;
	var uScriptParam_120 = 0;
	var uScriptParam_121 = 0;
	var uScriptParam_122 = 0;
	var uScriptParam_123 = 0;
	var uScriptParam_124 = 0;
	var uScriptParam_125 = 0;
	var uScriptParam_126 = 0;
	var uScriptParam_127 = 0;
	var uScriptParam_128 = 0;
	var uScriptParam_129 = 0;
	var uScriptParam_130 = 0;
	var uScriptParam_131 = 0;
	var uScriptParam_132 = 0;
	var uScriptParam_133 = 0;
	var uScriptParam_134 = 0;
	var uScriptParam_135 = 0;
	var uScriptParam_136 = 0;
	var uScriptParam_137 = 0;
	var uScriptParam_138 = 0;
	var uScriptParam_139 = 0;
	var uScriptParam_140 = 0;
	var uScriptParam_141 = 0;
	var uScriptParam_142 = 0;
	var uScriptParam_143 = 0;
	var uScriptParam_144 = 0;
	var uScriptParam_145 = 0;
	var uScriptParam_146 = 0;
	var uScriptParam_147 = 0;
	var uScriptParam_148 = 0;
	var uScriptParam_149 = 0;
	var uScriptParam_150 = 0;
	var uScriptParam_151 = 0;
	var uScriptParam_152 = 0;
	var uScriptParam_153 = 0;
	var uScriptParam_154 = 0;
	var uScriptParam_155 = 0;
	var uScriptParam_156 = 0;
	var uScriptParam_157 = 0;
	var uScriptParam_158 = 0;
	var uScriptParam_159 = 0;
	var uScriptParam_160 = 0;
	var uScriptParam_161 = 0;
	var uScriptParam_162 = 0;
	var uScriptParam_163 = 0;
	var uScriptParam_164 = 0;
	var uScriptParam_165 = 0;
	var uScriptParam_166 = 0;
	var uScriptParam_167 = 0;
	var uScriptParam_168 = 0;
	var uScriptParam_169 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	var uVar14;
	var uVar15;
	struct<13> Var16;
	var uVar101;
	var uVar107;
	struct<27> Var111;
	int iVar715;
	int iVar716;
	int iVar717;
	var uVar718;
	struct<11> Var723;
	var uVar862;
	int iVar868;
	int iVar869;
	var uVar870;
	var uVar871;
	var uVar874;
	var uVar877;
	var uVar880;
	var uVar883;
	var uVar886;
	var uVar889;
	var uVar892;
	var uVar895;
	var uVar898;
	var uVar901;
	vector3 vVar904;
	var uVar907;
	var uVar910;
	var uVar913;
	var uVar916;
	var uVar919;
	int iVar1084;
	var uVar1085;
	var uVar1086;
	var uVar1087;
	var uVar1088;
	var uVar1089;
	int iVar1090[3];
	var uVar1094;
	var uVar1095;
	var uVar1096;
	var uVar1097;
	int iVar1098[6];
	var uVar1105;
	var uVar1106;
	var uVar1107;
	var uVar1108;
	var uVar1109;
	var uVar1110;
	var uVar1111;
	var uVar1112;
	char[] cVar1113[8];
	char* sVar1114;
	struct<4> Var1115;
	vector3 vVar1119;
	vector3 vVar1122;
	vector3 vVar1125;
	vector3 vVar1128;
	var uVar1131;
	vector3 vVar1134;
	vector3 vVar1137;
	var uVar1140;
	var uVar1143;
	float fVar1144;
	var uVar1145;
	var uVar1146;
	var uVar1147;
	float fVar1148;
	int iVar1149;
	int iVar1150;
	int iVar1151;
	int iVar1152;
	int iVar1153;
	int iVar1154;
	int iVar1155;
	int iVar1156;
	var uVar1157;
	int iVar1158;
	int iVar1159;
	int iVar1160;
	int iVar1161;
	int iVar1162;
	int iVar1163;
	var uVar1164;
	var uVar1165;
	var uVar1166;
	var uVar1167;
	int iVar1168;
	bool bVar1169;
	bool bVar1170;
	int iVar1171;
	bool bVar1172;
	bool bVar1173;
	var uVar1174;
	bool bVar1175;
	bool bVar1176;
	bool bVar1177;
	bool bVar1178;
	bool bVar1179;
	bool bVar1180;
	bool bVar1181;
	bool bVar1182;
	bool bVar1183;
	bool bVar1184;
	bool bVar1185;
	bool bVar1186;
	bool bVar1187;
	bool bVar1188;
	bool bVar1189;
	bool bVar1190;
	bool bVar1191;
	bool bVar1192;
	var uVar1193;
	vector3 vVar1194;
	int iVar1197;
	bool bVar1198;
	
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
	fLocal_96 = ((0.05f + 0.275f) - 0.01f);
	vLocal_170 = { 500f, 500f, 500f };
	uVar0 = 13;
	Var16.f_12 = 12;
	uVar107 = 2;
	Var111.f_3 = 8;
	Var111.f_12 = 8;
	Var111.f_21 = 4;
	Var111.f_26.f_32 = 3;
	Var111.f_26.f_36 = 1;
	Var111.f_26.f_53 = 2;
	Var111.f_26.f_57 = 13;
	Var111.f_26.f_71 = 13;
	Var111.f_26.f_280 = 13;
	Var111.f_26.f_489 = 13;
	Var111.f_26.f_503 = 13;
	Var111.f_26.f_517 = 13;
	Var111.f_26.f_531 = 13;
	Var723.f_10.f_2 = 8;
	Var723.f_10.f_2.f_1.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	Var723.f_10.f_2.f_1.f_15.f_15.f_15.f_15.f_15.f_15.f_15.f_3 = 4;
	iVar869 = -1;
	uVar919 = 16;
	iVar1084 = ScriptParam_0;
	uVar1096 = ScriptParam_0.f_3;
	cVar1113 = "BJ_FAIL";
	sVar1114 = "";
	vVar1128 = { 5f, 5f, 10f };
	fVar1144 = 1f;
	fVar1148 = -1f;
	iVar1149 = -1;
	iVar1152 = -1;
	iVar1156 = Global_106565.f_18961;
	iVar1159 = 1;
	iVar1160 = -1;
	bVar1179 = false;
	bVar1184 = true;
	bVar1186 = false;
	bVar1187 = false;
	bVar1189 = true;
	bVar1190 = false;
	bVar1191 = false;
	bVar1192 = false;
	if (DOES_ENTITY_EXIST(ScriptParam_0.f_1))
	{
		uVar1094 = ScriptParam_0.f_1;
	}
	else
	{
		uVar1094 = GET_PLAYERS_LAST_VEHICLE();
	}
	bVar1190 = HAS_PED_GOT_WEAPON(PLAYER_PED_ID(), joaat("gadget_parachute"), 0);
	bVar1191 = GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER_ID());
	if (bVar1190)
	{
		GET_PLAYER_PARACHUTE_TINT_INDEX(PLAYER_ID(), &uVar1165);
		GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER_ID(), &uVar1166);
	}
	if (bVar1191)
	{
		GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(PLAYER_ID(), &uVar1167);
	}
	if (DOES_ENTITY_EXIST(uVar1094))
	{
		SET_ENTITY_AS_MISSION_ENTITY(uVar1094, 1, 1);
	}
	if (IS_SCRIPT_GLOBAL_SHAKING())
	{
		STOP_SCRIPT_GLOBAL_SHAKING(0);
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_546(&Var16, &uVar1111, &iVar1084, &uVar1085, &uVar1087, &iVar1090, &uVar1094, &uVar919, &uVar1096, &uVar1097, &iVar1098, uVar1164, &iVar1159, uVar1105, uVar1106, iVar868, &uVar1095, bVar1190);
	}
	if (iVar1156 < 0)
	{
		return;
	}
	if (IS_BIT_SET(Global_106565.f_18961.f_1, iVar1156))
	{
		fVar1144 = 0.1f;
	}
	iVar868 = iVar1156;
	func_545(0);
	CLEAR_HELP(1);
	SET_MISSION_FLAG(1);
	func_544(23, 1);
	_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(1500f, 0, 21);
	func_518(&Var16, iVar868);
	if (DOES_ENTITY_EXIST(uVar1096))
	{
		SET_ENTITY_AS_MISSION_ENTITY(uVar1096, 1, 1);
	}
	if (DOES_ENTITY_EXIST(iVar1084))
	{
		SET_ENTITY_AS_MISSION_ENTITY(iVar1084, 1, 1);
		if (func_517(&Var16) != 0 && GET_ENTITY_MODEL(iVar1084) == func_517(&Var16))
		{
			uVar1087 = iVar1084;
			iVar1084 = 0;
		}
	}
	while (true)
	{
		if (!bVar1184)
		{
			WAIT(0);
		}
		else
		{
			bVar1184 = false;
		}
		if ((iVar715 >= 6 && iVar715 <= 10) && !IS_PED_INJURED(PLAYER_PED_ID()))
		{
			uVar870 = func_506();
		}
		if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
		{
			SET_PED_RESET_FLAG(PLAYER_PED_ID(), 177, 1);
		}
		func_505();
		func_497(&uVar101);
		func_493(&Var111, iVar715);
		func_489(&Var111, iVar715, iVar868, bVar1172);
		switch (iVar715)
		{
			case 0:
				func_488();
				if (IS_SCREEN_FADING_OUT())
				{
					break;
				}
				func_482();
				func_481(1);
				func_477("AM_H_BASEJ", 1);
				CLEAR_PRINTS();
				CLEAR_HELP(1);
				if (iVar868 == 0)
				{
					SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 1, 0, 1);
					uVar1095 = _0x54B0F614960F4A5F(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f);
				}
				else if (iVar868 == 5)
				{
					SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 1, 0, 1);
				}
				else if (iVar868 == 4)
				{
					func_473(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					CLEAR_AREA(-74.9632f, -827.4467f, 324.9521f, 25f, 1, 0, 0, 0);
				}
				else if (iVar868 == 8)
				{
					func_473(-74.9632f, -827.4467f, 324.9521f, 25f, 1);
					CLEAR_AREA(-807.073f, 330.8846f, 232.6766f, 25f, 1, 0, 0, 0);
				}
				if (DOES_ENTITY_EXIST(iVar1084))
				{
					func_472(&uVar892);
				}
				if ((iVar868 == 6 || iVar868 == 12) || iVar868 == 5)
				{
					if (DOES_ENTITY_EXIST(ScriptParam_0.f_2))
					{
						SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0.f_2, 1, 1);
						DELETE_OBJECT(&(ScriptParam_0.f_2));
					}
					func_463(&uVar107, &Var16, iVar868, iVar868 == 6);
					bVar1181 = true;
				}
				iVar715 = 1;
				break;
			
			case 1:
				if (IS_SCREEN_FADED_OUT() || (((iVar868 == 5 || iVar868 == 6) || iVar868 == 12) && !bVar1172))
				{
					if (!bVar1172)
					{
						if ((iVar868 != 5 && iVar868 != 6) && iVar868 != 12)
						{
							vVar1122 = { func_462(iVar868) };
							vVar1122 = { func_461(COS(vVar1122.z), SIN(vVar1122.z), TAN(vVar1122.x)) };
							if (func_460(iVar868))
							{
								NEW_LOAD_SCENE_START(func_459(iVar868), vVar1122, 4000f, 0);
							}
						}
						func_453(&Var16, iVar868, &uVar0, &uVar14, &uVar15, &uVar1111, &iVar1163);
					}
					else if (func_451(func_452(iVar868)))
					{
						vVar1137 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -COS((-97.4239f + func_450(&Var16))), SIN((-97.4239f + func_450(&Var16)))) };
						vVar1134 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1084, 1.12046f, -0.317773f, 1.3385f) };
						vVar1137 = { func_449(vVar1137, 8.909f) };
						if (func_460(iVar868))
						{
							NEW_LOAD_SCENE_START(vVar1134 + vVar1137, vVar1137, 4000f, 0);
						}
					}
					else
					{
						vVar1122 = { -10f, 0f, func_450(&Var16) };
						vVar1122 = { func_461(COS(vVar1122.z), SIN(vVar1122.z), TAN(vVar1122.x)) };
						if (func_460(iVar868))
						{
							NEW_LOAD_SCENE_START(func_459(iVar868), vVar1122, 4000f, 0);
						}
					}
					if (((bVar1172 || iVar868 == 4) || iVar868 == 8) || iVar868 == 3)
					{
						if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
						{
							_0xF9ACF4A08098EA25(PLAYER_PED_ID(), 1);
						}
						SET_ENTITY_COORDS(PLAYER_PED_ID(), func_459(iVar868), 0, 0, 0, 1);
						SET_ENTITY_HEADING(PLAYER_PED_ID(), func_450(&Var16));
						FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 1);
						SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
					}
					iVar715 = 2;
				}
				else if (!IS_SCREEN_FADING_OUT() && (!func_448(&uVar892) || func_447(&uVar892) > 0.05f))
				{
					if (IS_PED_IN_ANY_HELI(PLAYER_PED_ID()))
					{
						DO_SCREEN_FADE_OUT(2500);
					}
					else
					{
						DO_SCREEN_FADE_OUT(800);
					}
				}
				break;
			
			case 2:
				if (func_445(&uVar0, &uVar871, &uVar1111, iVar868, iVar1163, ((iVar868 != 5 && iVar868 != 6) && iVar868 != 12)))
				{
					func_444(&uVar871);
					func_421(&Var16, &uVar919, &iVar1151, &iVar1084, &uVar1085, &uVar1087, &uVar1086, &uVar1088, &uVar1096, &uVar1097, uVar14, uVar15, &uVar880, iVar868, &iVar1160);
					_0x2208438012482A1A(PLAYER_PED_ID(), 1, 0);
					if (!bVar1172 && !bVar1181)
					{
						func_463(&uVar107, &Var16, iVar868, 0);
					}
					iVar715 = 3;
				}
				break;
			
			case 3:
				if (!func_448(&uVar871) && !bVar1172)
				{
					func_420(0, 0, 1);
					func_472(&uVar871);
				}
				else if ((func_448(&uVar871) && func_447(&uVar871) > 0.2f) || bVar1172)
				{
					if (func_451(func_452(iVar868)) && !IS_ENTITY_PLAYING_ANIM(PLAYER_PED_ID(), "oddjobs@basejump@", "Heli_door_loop", 3))
					{
					}
					else if (bVar1172)
					{
						DO_SCREEN_FADE_OUT(800);
						if (func_448(&uVar871))
						{
							func_444(&uVar871);
						}
						if (func_517(&Var16) != 0)
						{
							FREEZE_ENTITY_POSITION(uVar1087, 0);
							func_472(&uVar889);
						}
						iVar715 = 4;
					}
					else
					{
						func_444(&uVar871);
						if (IS_SCREEN_FADED_OUT())
						{
							WAIT(1000);
							SET_CAM_ACTIVE_WITH_INTERP(func_419(&uVar107, 1), func_419(&uVar107, 0), 10000, 1, 1);
							RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
							DO_SCREEN_FADE_IN(800);
						}
						NEW_LOAD_SCENE_STOP();
						if (func_451(func_452(iVar868)))
						{
							vVar1137 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -COS((-97.4239f + func_450(&Var16))), SIN((-97.4239f + func_450(&Var16)))) };
							vVar1134 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar1084, 1.12046f, -0.317773f, 1.3385f) };
							vVar1137 = { func_449(vVar1137, 8.909f) };
							if (func_460(iVar868))
							{
								NEW_LOAD_SCENE_START(vVar1134 + vVar1137, vVar1137, 4000f, 0);
							}
						}
						else
						{
							vVar1122 = { -10f, 0f, func_450(&Var16) };
							vVar1122 = { func_461(COS(vVar1122.z), SIN(vVar1122.z), TAN(vVar1122.x)) };
							if (func_460(iVar868))
							{
								NEW_LOAD_SCENE_START(func_459(iVar868), vVar1122, 4000f, 0);
							}
						}
						if (!func_417(func_418(iVar868)) && !IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
						{
							CLEAR_PED_TASKS(PLAYER_PED_ID());
							SET_PED_RESET_FLAG(PLAYER_PED_ID(), 177, 1);
							if (GET_PED_STEALTH_MOVEMENT(PLAYER_PED_ID()))
							{
								SET_PED_STEALTH_MOVEMENT(PLAYER_PED_ID(), 0, 0);
							}
							SET_ENTITY_COORDS(PLAYER_PED_ID(), func_418(iVar868), 1, 0, 0, 1);
							SET_ENTITY_HEADING(PLAYER_PED_ID(), func_416(func_418(iVar868), func_459(iVar868)));
							SET_PED_RESET_FLAG(PLAYER_PED_ID(), 177, 1);
							if (func_414() == 0)
							{
								SET_PED_COMPONENT_VARIATION(PLAYER_PED_ID(), 9, 5, 0, 0);
							}
							else if (func_414() == 1)
							{
								SET_PED_COMPONENT_VARIATION(PLAYER_PED_ID(), 8, 1, 0, 0);
							}
							else if (func_414() == 2)
							{
								SET_PED_COMPONENT_VARIATION(PLAYER_PED_ID(), 8, 3, 0, 0);
							}
							OPEN_SEQUENCE_TASK(&uVar1108);
							if (func_413(iVar868) > 0)
							{
								TASK_STAND_STILL(0, func_413(iVar868));
							}
							TASK_GO_STRAIGHT_TO_COORD(0, func_459(iVar868), 1f, -1, func_450(&Var16), 1056964608);
							CLOSE_SEQUENCE_TASK(uVar1108);
							TASK_PERFORM_SEQUENCE(PLAYER_PED_ID(), uVar1108);
							CLEAR_SEQUENCE_TASK(&uVar1108);
						}
						if (!func_451(func_452(iVar868)))
						{
							if (!IS_PED_INJURED(PLAYER_PED_ID()))
							{
								GET_PED_NEARBY_VEHICLES(PLAYER_PED_ID(), &iVar1090);
							}
							iVar1161 = 0;
							while (iVar1161 < iVar1090)
							{
								if (DOES_ENTITY_EXIST(iVar1090[iVar1161]) && !IS_ENTITY_DEAD(iVar1090[iVar1161], 0))
								{
									if (VDIST2(GET_ENTITY_COORDS(iVar1090[iVar1161], 0), GET_ENTITY_COORDS(PLAYER_PED_ID(), 0)) < 2500f)
									{
										SET_ENTITY_LOD_DIST(iVar1090[iVar1161], 1000);
										SET_VEHICLE_LOD_MULTIPLIER(iVar1090[iVar1161], 5f);
										SET_ENTITY_LOAD_COLLISION_FLAG(iVar1090[iVar1161], 1, 1);
									}
								}
								iVar1161++;
							}
						}
						if (func_517(&Var16) != 0)
						{
							func_472(&uVar889);
						}
						if (!IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
						{
							FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
						}
						if (func_412(iVar868, iVar1163) > 0f)
						{
							func_472(&uVar907);
						}
						iVar715 = 4;
					}
				}
				break;
			
			case 4:
				if (iVar868 == 0)
				{
					_0xBC3CCA5844452B06(200f);
				}
				if (bVar1175 || bVar1176)
				{
					if (IS_SCREEN_FADED_OUT() || IS_SCREEN_FADING_OUT())
					{
						DO_SCREEN_FADE_IN(300);
						WAIT(300);
					}
					CLEAR_HELP(1);
					CLEAR_PRINTS();
					RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 1, 0);
					SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
					iVar715 = 10;
				}
				else if (IS_SCREEN_FADED_OUT())
				{
					func_404(0, 1, 1, 0, 0, 0);
					if (func_451(func_452(iVar868)))
					{
						func_403(&uVar107, &Var16, &vVar1119, &vVar1134, &vVar1137, iVar1084, &uVar1140, &uVar1143);
						uVar1164 = GET_SOUND_ID();
						if (bVar1189)
						{
							PLAY_SOUND_FROM_ENTITY(uVar1164, "Helicopter_Wind_Idle", iVar1084, "BASEJUMPS_SOUNDS", 0, 0);
						}
						if (bVar1188)
						{
							_0x70B8EC8FC108A634(1, 300362576);
						}
					}
					else
					{
						if (IS_SCRIPT_GLOBAL_SHAKING())
						{
							STOP_SCRIPT_GLOBAL_SHAKING(0);
						}
						RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 1, 0);
						SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
					}
					CLEAR_PED_WETNESS(PLAYER_PED_ID());
					_0x6585D955A68452A5(PLAYER_PED_ID());
					CLEAR_PED_BLOOD_DAMAGE(PLAYER_PED_ID());
					RESET_PED_VISIBLE_DAMAGE(PLAYER_PED_ID());
					DISPLAY_RADAR(0);
					DISPLAY_HUD(0);
					iVar715 = 5;
				}
				else
				{
					if (!bVar1183)
					{
						if (!func_448(&uVar913))
						{
							func_472(&uVar913);
						}
						else if (func_447(&uVar913) > 4f || (func_451(func_452(iVar868)) && func_447(&uVar913) > 0.5f))
						{
							func_392(&uVar919, "OJBJAUD", func_402(&Var16), 8, 0, 0, 0);
							bVar1183 = true;
						}
					}
					if (!IS_SCREEN_FADING_OUT() && !bVar1172)
					{
						if (func_370(&Var16, iVar868, &uVar1087, &uVar107, &uVar101, &uVar874, &uVar877, &uVar889, &uVar907, iVar1163, &bVar1173, &bVar1185, bVar1177))
						{
							CLEAR_HELP(1);
							bVar1177 = false;
							if (func_369(&Var16))
							{
								DO_SCREEN_FADE_OUT(800);
							}
							else
							{
								DISPLAY_RADAR(0);
								DISPLAY_HUD(0);
								iVar715 = 5;
							}
						}
					}
				}
				break;
			
			case 5:
				if (iVar868 == 0)
				{
					_0xBC3CCA5844452B06(200f);
				}
				func_367();
				func_366();
				if (IS_SCREEN_FADED_OUT())
				{
					if (bVar1172 && bVar1182)
					{
						SET_CLOCK_TIME(func_365(uVar870), func_364(uVar870), func_363(uVar870));
					}
					WAIT(2000);
					if (bVar1172)
					{
						FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
						func_362(&uVar910);
						if (!IS_PED_INJURED(PLAYER_PED_ID()))
						{
							SET_PED_RESET_FLAG(PLAYER_PED_ID(), 177, 1);
						}
						while (func_447(&uVar910) < 1.1f)
						{
							WAIT(0);
							if (!IS_PED_INJURED(PLAYER_PED_ID()))
							{
								SET_PED_RESET_FLAG(PLAYER_PED_ID(), 177, 1);
							}
						}
						func_444(&uVar910);
					}
					DO_SCREEN_FADE_IN(800);
				}
				if (DOES_ENTITY_EXIST(uVar1085) && !IS_ENTITY_DEAD(uVar1085, 0))
				{
					uVar1105 = ADD_BLIP_FOR_COORD(GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uVar1085, func_361(&Var16)));
					SET_BLIP_COLOUR(uVar1105, 5);
					_0x75A16C3DA34F1245(uVar1105, 1);
					SET_BLIP_NAME_FROM_TEXT_FILE(uVar1105, "BJ_BLIP_TGT");
				}
				else
				{
					uVar1105 = ADD_BLIP_FOR_COORD(func_360(&Var16, 0));
					SET_BLIP_COLOUR(uVar1105, 5);
					if (iVar1151 == 1)
					{
						SET_BLIP_NAME_FROM_TEXT_FILE(uVar1105, "BJ_BLIP_TGT");
					}
					else
					{
						SET_BLIP_NAME_FROM_TEXT_FILE(uVar1105, "BJ_BLIP_CHK");
					}
				}
				SET_BLIP_SCALE(uVar1105, 1.2f);
				if (iVar1151 > 1)
				{
					uVar1106 = ADD_BLIP_FOR_COORD(func_360(&Var16, 1));
					SET_BLIP_COLOUR(uVar1106, 5);
					_0x75A16C3DA34F1245(uVar1105, 1);
					SET_BLIP_SCALE(uVar1106, 0.7f);
					if (iVar1151 == 2)
					{
						SET_BLIP_NAME_FROM_TEXT_FILE(uVar1106, "BJ_BLIP_TGT");
					}
					else
					{
						SET_BLIP_NAME_FROM_TEXT_FILE(uVar1106, "BJ_BLIP_CHK");
					}
				}
				if (DOES_ENTITY_EXIST(uVar1085) && !IS_ENTITY_DEAD(uVar1085, 0))
				{
					SET_ENTITY_LOD_DIST(uVar1085, 2000);
					if (DOES_ENTITY_EXIST(uVar1097) && !IS_PED_INJURED(uVar1097))
					{
						CLEAR_PED_TASKS(uVar1097);
					}
					if (func_358(func_359(&Var16)))
					{
						DELETE_MISSION_TRAIN(&uVar1085);
					}
					else
					{
						SET_ENTITY_COORDS(uVar1085, func_360(&Var16, 0), 1, 0, 0, 1);
					}
				}
				if (IS_BIT_SET(Global_106565.f_18961.f_1, (func_357(&Var16) - 125)))
				{
					SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER_ID(), 1);
					SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(PLAYER_ID(), GET_RANDOM_INT_IN_RANGE(0, 256), GET_RANDOM_INT_IN_RANGE(0, 256), GET_RANDOM_INT_IN_RANGE(0, 256));
				}
				if (func_356(func_452(iVar868)))
				{
					func_355(1, 1, 1);
					CLEAR_PED_TASKS(PLAYER_PED_ID());
					func_362(&uVar880);
					iVar715 = 6;
					func_354(88, 1);
				}
				else if (func_451(func_452(iVar868)))
				{
					func_355(0, 0, 1);
					FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
					iVar715 = 7;
					func_354(88, 1);
				}
				else
				{
					func_355(1, 1, 1);
					CLEAR_PED_TASKS(PLAYER_PED_ID());
					SET_PED_RESET_FLAG(PLAYER_PED_ID(), 177, 1);
					iVar715 = 6;
					func_354(88, 1);
				}
				if (iVar868 == 5)
				{
					SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 146, 1);
				}
				if (!bVar1173 && DOES_ENTITY_EXIST(uVar1087))
				{
					func_353(&uVar1087, 1);
					bVar1173 = true;
				}
				if (!func_369(&Var16))
				{
					if (func_451(func_452(iVar868)))
					{
						func_403(&uVar107, &Var16, &vVar1119, &vVar1134, &vVar1137, iVar1084, &uVar1140, &uVar1143);
					}
					else
					{
						if ((func_352(&Var16) && !bVar1185) && !bVar1172)
						{
							_RENDER_FIRST_PERSON_CAM(1, 0, 3, 0);
						}
						else if (iVar868 == 4 && !func_351())
						{
							SET_CAM_COORD(func_419(&uVar107, 0), -76.7226f, -829.9866f, 326.0427f);
							SET_CAM_ROT(func_419(&uVar107, 0), 0.8541f, 0f, -17.012f, 2);
							SET_CAM_FOV(func_419(&uVar107, 0), 53.883f);
							SET_CAM_ACTIVE(func_419(&uVar107, 0), 1);
						}
						else
						{
							if (IS_SCRIPT_GLOBAL_SHAKING())
							{
								STOP_SCRIPT_GLOBAL_SHAKING(0);
							}
							RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 1, 0);
						}
						SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
						SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
						NEW_LOAD_SCENE_STOP();
					}
				}
				if (!IS_PED_INJURED(PLAYER_PED_ID()))
				{
					if (bVar1190)
					{
						if (!HAS_PED_GOT_WEAPON(PLAYER_PED_ID(), joaat("gadget_parachute"), 0))
						{
							GIVE_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_unarmed"), 1, 0, 1);
						}
						SET_PED_PARACHUTE_TINT_INDEX(PLAYER_PED_ID(), uVar1165);
						if (bVar1191)
						{
							if (!GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER_ID()))
							{
								SET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER_ID());
							}
							SET_PED_RESERVE_PARACHUTE_TINT_INDEX(PLAYER_PED_ID(), uVar1167);
						}
					}
					else
					{
						GIVE_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_unarmed"), 1, 0, 1);
						SET_PED_PARACHUTE_TINT_INDEX(PLAYER_PED_ID(), (GET_RANDOM_INT_IN_RANGE(0, 65535) % 8));
					}
				}
				REQUEST_ANIM_DICT("skydive@base");
				REQUEST_ANIM_DICT("skydive@freefall");
				REQUEST_ANIM_DICT("skydive@parachute@chute");
				REQUEST_ANIM_DICT("skydive@parachute@");
				break;
			
			case 6:
				if (IS_PED_INJURED(PLAYER_PED_ID()))
				{
					iVar715 = 12;
					break;
				}
				else if ((bVar1176 || bVar1175) || func_350(&Var16, iVar868, &bVar1178))
				{
					CLEAR_HELP(1);
					CLEAR_PRINTS();
					iVar715 = 10;
				}
				else
				{
					if (iVar868 == 5)
					{
						SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 146, IS_ENTITY_IN_AREA(PLAYER_PED_ID(), -118.4f, -973.1f, 295.2f, -117.1f, -975.7f, 297.7f, 0, 1, 0));
					}
					if (bVar1177)
					{
						vVar1125 = { func_360(&Var16, (iVar1151 - 1)) };
						vVar1125.z = (vVar1125.z + 100f);
						SET_ENTITY_COORDS(PLAYER_PED_ID(), vVar1125, 1, 0, 0, 1);
						bVar1177 = false;
					}
					if (!bVar1180)
					{
						if (iVar868 == 4)
						{
							if (((((IS_CONTROL_PRESSED(0, 71) || IS_CONTROL_PRESSED(0, 72)) || IS_CONTROL_PRESSED(0, 1)) || IS_CONTROL_PRESSED(0, 2)) || IS_CONTROL_PRESSED(0, 75)) || !IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
							{
								RENDER_SCRIPT_CAMS(0, 1, 1300, 1, 1, 0);
								bVar1180 = true;
							}
						}
					}
					func_349(&uVar880);
					func_339(&Var16, uVar1085, uVar1096, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
					func_338(&uVar1112);
					if (func_448(&uVar871))
					{
						if (func_447(&uVar871) > 10f)
						{
							func_334(&uVar883, &iVar1159);
						}
					}
					else
					{
						func_333(&uVar871, 0f);
					}
					if (DOES_ENTITY_EXIST(uVar1087) && !IS_ENTITY_DEAD(uVar1087, 0))
					{
						if (!IS_ENTITY_ON_SCREEN(uVar1087) && VDIST2(GET_ENTITY_COORDS(uVar1087, 1), GET_ENTITY_COORDS(PLAYER_PED_ID(), 1)) > 40000f)
						{
							uVar1193 = GET_PED_IN_VEHICLE_SEAT(uVar1087, -1, 0);
							if (!IS_PED_INJURED(uVar1193))
							{
								DELETE_PED(&uVar1193);
							}
							DELETE_VEHICLE(&uVar1087);
						}
					}
					if (!IS_BIT_SET(uVar1157, 0))
					{
						if (IS_MESSAGE_BEING_DISPLAYED() || !func_448(&uVar916))
						{
							func_362(&uVar916);
						}
						else if (func_447(&uVar916) > 0.25f)
						{
							Var1115 = { func_332(iVar868) };
							func_331(&Var1115, 7500, 0);
							func_444(&uVar916);
							SET_BIT(&uVar1157, 0);
						}
					}
					if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0))
					{
						func_330(&Var111, 1);
						uVar1089 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 1);
						if (IS_VEHICLE_DRIVEABLE(uVar1089, 0) && IS_ENTITY_IN_AIR(uVar1089))
						{
							if (!IS_BIT_SET(uVar1157, 1))
							{
								if (!func_448(&uVar895))
								{
									func_472(&uVar895);
								}
								else if (func_447(&uVar895) > 0.15f)
								{
									func_329("BJ_VEHHELP", -1);
									func_444(&uVar895);
									SET_BIT(&uVar1157, 1);
								}
							}
						}
						else
						{
							CLEAR_BIT(&uVar1157, 1);
							if (func_328("BJ_VEHHELP"))
							{
								CLEAR_HELP(1);
							}
							if (func_448(&uVar895))
							{
								func_444(&uVar895);
							}
						}
					}
					else
					{
						func_330(&Var111, 0);
						CLEAR_BIT(&uVar1157, 1);
						if (func_328("BJ_VEHHELP"))
						{
							CLEAR_HELP(1);
						}
						if (func_448(&uVar895))
						{
							func_444(&uVar895);
						}
					}
					if (GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) != -1)
					{
						if (iVar868 == 5)
						{
							SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 146, 0);
						}
						_0x6DDBF9DFFC4AC080(1);
						SET_AUDIO_FLAG("DisableFlightMusic", 0);
						iVar715 = 9;
						func_444(&uVar871);
					}
				}
				break;
			
			case 7:
				if (iVar868 == 0)
				{
					_0xBC3CCA5844452B06(200f);
				}
				if (bVar1175 || bVar1176)
				{
					if (IS_SCREEN_FADED_OUT() || IS_SCREEN_FADING_OUT())
					{
						DO_SCREEN_FADE_IN(300);
						WAIT(300);
					}
					CLEAR_HELP(1);
					CLEAR_PRINTS();
					if (IS_SCRIPT_GLOBAL_SHAKING())
					{
						STOP_SCRIPT_GLOBAL_SHAKING(0);
					}
					RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
					SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
					iVar715 = 10;
				}
				else
				{
					func_349(&uVar880);
					func_339(&Var16, uVar1085, uVar1096, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
					func_338(&uVar1112);
					if (func_451(func_452(iVar868)) && !IS_ENTITY_DEAD(iVar1084, 0))
					{
						func_327(iVar1084, func_459(iVar868));
					}
					if (func_448(&uVar871))
					{
						if (func_447(&uVar871) > 10f)
						{
							func_334(&uVar883, &iVar1159);
						}
					}
					else
					{
						func_333(&uVar871, 0f);
					}
					if (func_323(&Var16, &uVar107, &uVar101, &uVar877, &vVar1119, &uVar1131, vVar1134, vVar1137) || bVar1177)
					{
						func_444(&uVar871);
						CLEAR_HELP(1);
						if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
						{
							if (DOES_ENTITY_EXIST(iVar1084) && !IS_ENTITY_DEAD(iVar1084, 0))
							{
								SET_ENTITY_COORDS(iVar1084, func_459(iVar868), 1, 0, 0, 1);
								SET_ENTITY_HEADING(iVar1084, func_450(&Var16));
								FREEZE_ENTITY_POSITION(iVar1084, 1);
								iVar1160 = CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
								ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iVar1160, iVar1084, GET_ENTITY_BONE_INDEX_BY_NAME(iVar1084, "Chassis"));
								TASK_SYNCHRONIZED_SCENE(PLAYER_PED_ID(), iVar1160, "oddjobs@basejump@", "Heli_jump", 4f, -4f, 7, 0, 1148846080, 0);
								SET_SYNCHRONIZED_SCENE_PHASE(iVar1160, 0.6f);
								func_321(iVar1084, &uVar107, &uVar874);
								NEW_LOAD_SCENE_STOP();
							}
						}
						if (bVar1188)
						{
							_0x70B8EC8FC108A634(0, 300362576);
						}
						PLAY_SOUND_FROM_ENTITY(uVar1164, "Helicopter_Wind", iVar1084, "BASEJUMPS_SOUNDS", 0, 0);
						bVar1177 = false;
						iVar715 = 8;
					}
				}
				break;
			
			case 8:
				if (iVar868 == 0)
				{
					_0xBC3CCA5844452B06(200f);
				}
				func_349(&uVar880);
				func_339(&Var16, uVar1085, uVar1096, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
				if (IS_SYNCHRONIZED_SCENE_RUNNING(iVar1160))
				{
					if (GET_SYNCHRONIZED_SCENE_PHASE(iVar1160) > 0.92f)
					{
						OPEN_SEQUENCE_TASK(&uVar1107);
						TASK_FORCE_MOTION_STATE(0, -1161760501, 0);
						TASK_PARACHUTE(0, 1, 0);
						CLOSE_SEQUENCE_TASK(uVar1107);
						TASK_PERFORM_SEQUENCE(PLAYER_PED_ID(), uVar1107);
						CLEAR_SEQUENCE_TASK(&uVar1107);
					}
				}
				if (DOES_ENTITY_EXIST(iVar1084))
				{
					if (func_320(&uVar107, &uVar874, vVar1134, vVar1137, vVar1119, &uVar1140, &uVar1143))
					{
						SET_ENTITY_NO_COLLISION_ENTITY(PLAYER_PED_ID(), iVar1084, 0);
						if (!IS_ENTITY_PLAYING_ANIM(PLAYER_PED_ID(), "oddjobs@basejump@", "Heli_jump", 3))
						{
							SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
							DISPLAY_RADAR(1);
							if (IS_SCRIPT_GLOBAL_SHAKING())
							{
								STOP_SCRIPT_GLOBAL_SHAKING(0);
							}
							SET_AUDIO_FLAG("DisableFlightMusic", 0);
							_0x6DDBF9DFFC4AC080(1);
							iVar715 = 9;
						}
					}
				}
				break;
			
			case 9:
				if (iVar868 == 0)
				{
					_0xBC3CCA5844452B06(200f);
				}
				if (Global_17272.f_135)
				{
					DISABLE_CONTROL_ACTION(0, 144, 1);
				}
				if (Global_17272.f_135)
				{
					DISABLE_CONTROL_ACTION(0, 144, 1);
				}
				if (IS_PED_INJURED(PLAYER_PED_ID()))
				{
					iVar715 = 12;
					break;
				}
				if (bVar1175 || bVar1176)
				{
					CLEAR_HELP(1);
					CLEAR_PRINTS();
					iVar715 = 10;
				}
				else if (func_319(&uVar101, 3, 1000) && !Global_17272.f_135)
				{
					SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 1);
					SET_PLAYER_CONTROL(PLAYER_ID(), 0, 256);
					DO_SCREEN_FADE_OUT(800);
					while (IS_SCREEN_FADING_OUT())
					{
						func_339(&Var16, uVar1085, uVar1097, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
						WAIT(0);
					}
					func_273(&Var16, &uVar1111, &Var111, &uVar1157, &uVar1097, &iVar1098, &uVar1094, &uVar1085, &uVar1086, &uVar1087, &iVar1090, &uVar1109, &uVar1110, uVar1105, uVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, iVar868, &iVar716, &iVar869, &uVar886, &vVar904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
					bVar1172 = true;
					iVar715 = 0;
				}
				else
				{
					func_270(&uVar901, &iVar1098);
					if (bVar1177)
					{
						vVar1125 = { func_360(&Var16, (iVar1151 - 1)) };
						func_268(PLAYER_PED_ID(), vVar1125);
						bVar1177 = false;
					}
					func_349(&uVar880);
					if (func_358(func_359(&Var16)))
					{
						if (!DOES_ENTITY_EXIST(uVar1085) && GET_DISTANCE_BETWEEN_COORDS(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), func_360(&Var16, 0), 0) <= 200f)
						{
							uVar1085 = CREATE_MISSION_TRAIN(6, func_360(&Var16, 0), 1);
							if (!IS_ENTITY_DEAD(uVar1085, 0))
							{
								SET_TRAIN_CRUISE_SPEED(uVar1085, 7.5f);
							}
						}
					}
					else if ((DOES_ENTITY_EXIST(uVar1085) && !IS_ENTITY_DEAD(uVar1085, 0)) && !func_417(func_360(&Var16, 0)))
					{
						IS_PED_INJURED(uVar1097);
						if (func_267(PLAYER_PED_ID(), uVar1085, 0) <= 325f)
						{
							if (iVar868 == 5)
							{
								vVar1194 = { 28.8687f, -299.1065f, 46.5693f };
							}
							else
							{
								vVar1194 = { -819.7591f, -1512.229f, 0.1336f };
							}
							if (GET_SCRIPT_TASK_STATUS(uVar1097, -1273030092) != 1)
							{
								if (iVar868 == 5)
								{
									TASK_VEHICLE_MISSION_COORS_TARGET(uVar1097, uVar1085, vVar1194, 4, 5f, 16785408, 5f, 10f, 1);
								}
								else
								{
									TASK_VEHICLE_MISSION_COORS_TARGET(uVar1097, uVar1085, vVar1194, 4, 5f, 16777216, 4f, -1f, 1);
								}
							}
							else
							{
								func_262(&uVar1085);
							}
						}
					}
					iVar716 = func_339(&Var16, uVar1085, uVar1097, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 1, 1, fVar1144);
					if (iVar716 == 1 || iVar716 >= 2)
					{
						TASK_CLEAR_LOOK_AT(PLAYER_PED_ID());
						if (iVar716 >= 2)
						{
							if (IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								CLEAR_HELP(1);
							}
							if (IS_MESSAGE_BEING_DISPLAYED())
							{
								CLEAR_PRINTS();
							}
						}
						SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
						if (iVar868 == 5)
						{
							CLEAR_PED_TASKS(uVar1097);
							SET_PED_CONFIG_FLAG(uVar1097, 296, 1);
						}
						iVar1197 = 0;
						while (iVar1197 < iVar1098)
						{
							if (DOES_ENTITY_EXIST(iVar1098[iVar1197]) && !IS_ENTITY_DEAD(iVar1098[iVar1197], 0))
							{
								CLEAR_PED_TASKS(iVar1098[iVar1197]);
								iVar1098[iVar1197] = 0;
							}
							iVar1197++;
						}
						iVar715 = 10;
					}
					func_261(&Var111, &Var16, iVar868, iVar1151);
				}
				break;
			
			case 10:
				if (iVar868 == 0)
				{
					_0xBC3CCA5844452B06(200f);
				}
				if (DOES_ENTITY_EXIST(uVar1097) && !IS_ENTITY_DEAD(uVar1097, 0))
				{
					if (GET_SCRIPT_TASK_STATUS(uVar1097, -982327190) != 0 && GET_SCRIPT_TASK_STATUS(uVar1097, -982327190) != 1)
					{
						CLEAR_PED_TASKS(uVar1097);
						TASK_STAND_STILL(uVar1097, -1);
					}
				}
				if ((!bVar1175 && !bVar1176) && !bVar1178)
				{
					if (!func_448(&uVar886))
					{
						if (!func_448(&uVar877))
						{
							func_472(&uVar877);
						}
						if (DOES_BLIP_EXIST(uVar1105))
						{
							REMOVE_BLIP(&uVar1105);
						}
						if (DOES_BLIP_EXIST(uVar1106))
						{
							REMOVE_BLIP(&uVar1106);
						}
						if (iVar1152 > -1)
						{
							DELETE_CHECKPOINT(uVar1109);
							DELETE_CHECKPOINT(uVar1110);
							iVar1152 = -1;
						}
						func_333(&uVar886, 0f);
					}
					if (!func_448(&vVar904))
					{
						func_472(&vVar904);
					}
					if (func_359(&Var16) == 0)
					{
						func_260(func_360(&Var16, (iVar1151 - 1)), vVar904);
					}
					if (!IS_PED_INJURED(PLAYER_PED_ID()))
					{
						if (((((DOES_ENTITY_EXIST(uVar1085) && !IS_ENTITY_DEAD(uVar1085, 0)) && !IS_ENTITY_DEAD(PLAYER_PED_ID(), 0)) && IS_ENTITY_AT_ENTITY(PLAYER_PED_ID(), uVar1085, vVar1128, 0, 1, 0)) || IS_ENTITY_AT_COORD(PLAYER_PED_ID(), func_360(&Var16, iVar1150), vVar1128, 0, 1, 0)) || IS_ENTITY_IN_AIR(PLAYER_PED_ID()))
						{
							bVar1198 = false;
							if (IS_ENTITY_IN_AIR(PLAYER_PED_ID()) && (DOES_ENTITY_EXIST(uVar1085) && !IS_ENTITY_TOUCHING_ENTITY(PLAYER_PED_ID(), uVar1085)))
							{
								bVar1198 = true;
							}
							else if (!IS_PED_INJURED(PLAYER_PED_ID()) && IS_PED_RAGDOLL(PLAYER_PED_ID()))
							{
								bVar1198 = true;
							}
							if (bVar1198)
							{
								if (func_319(&uVar101, 3, 1000) && !Global_17272.f_135)
								{
									SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 1);
									SET_PLAYER_CONTROL(PLAYER_ID(), 0, 256);
									DO_SCREEN_FADE_OUT(800);
									while (IS_SCREEN_FADING_OUT())
									{
										func_339(&Var16, uVar1085, uVar1097, &iVar1098, &uVar1109, &uVar1110, &iVar1150, &iVar1152, &iVar1153, iVar1151, &iVar1154, &uVar1105, &uVar1106, &iVar1149, &iVar869, &uVar1145, &uVar1146, &uVar1147, &uVar1174, 0, 1, fVar1144);
										WAIT(0);
									}
									func_273(&Var16, &uVar1111, &Var111, &uVar1157, &uVar1097, &iVar1098, &uVar1094, &uVar1085, &uVar1086, &uVar1087, &iVar1090, &uVar1109, &uVar1110, uVar1105, uVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, iVar868, &iVar716, &iVar869, &uVar886, &vVar904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
									bVar1172 = true;
									iVar715 = 0;
								}
								break;
							}
						}
					}
				}
				if (IS_PED_INJURED(PLAYER_PED_ID()))
				{
					iVar715 = 12;
					break;
				}
				if (((bVar1175 || bVar1176) || bVar1178) || (func_448(&uVar886) && func_447(&uVar886) > 0.25f))
				{
					if (func_448(&uVar886) && func_447(&uVar886) > 0.25f)
					{
						func_256(func_360(&Var16, iVar1150), uVar1085, uVar1097, &iVar716, &iVar1154, &fVar1148);
					}
					func_444(&uVar886);
					if (bVar1175 || iVar716 == 1)
					{
						uVar718 = func_255();
						while (!HAS_SCALEFORM_MOVIE_LOADED(uVar718))
						{
							WAIT(0);
							if (func_359(&Var16) == 0)
							{
								func_260(func_360(&Var16, (iVar1151 - 1)), vVar904);
							}
							uVar718 = func_255();
						}
						if (iVar868 == 0)
						{
							if (!IS_PED_INJURED(uVar1097))
							{
								func_392(&uVar919, "OJBJAUD", "BJ_01D", 8, 1, 1, 0);
							}
						}
						iVar715 = 11;
						if (!func_254(&Var111, 7))
						{
							iVar1158 = 125;
							SET_BIT(&(Global_106565.f_18961.f_1), (func_357(&Var16) - iVar1158));
							func_253(func_357(&Var16), 1);
							iVar1168 = 1;
							bVar1169 = true;
							bVar1170 = true;
							iVar1162 = 0;
							while (iVar1162 < 13)
							{
								if (!IS_BIT_SET(Global_106565.f_18961.f_1, iVar1162))
								{
									if (func_451(func_452(iVar1162)))
									{
										bVar1170 = false;
									}
									else
									{
										bVar1169 = false;
									}
									iVar1168 = 0;
								}
								iVar1162++;
							}
							if (iVar1168 && !func_252(98))
							{
								func_251(98, 1);
							}
							if (bVar1169)
							{
								func_248(128, 0, 0);
							}
							if (bVar1170)
							{
								func_248(129, 0, 0);
							}
							func_212(&iVar1153, iVar1151, &iVar1154, &iVar1155, fVar1144);
							if (!IS_PED_INJURED(PLAYER_PED_ID()))
							{
								SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
							}
							func_211(&Var111, 7, 1);
							func_210(1, 0);
							func_472(&uVar898);
							func_209();
						}
					}
					else if ((bVar1176 || bVar1178) || iVar716 >= 2)
					{
						CLEAR_HELP(1);
						CLEAR_PRINTS();
						if (!bVar1178)
						{
							func_206();
						}
						if (IS_PED_INJURED(PLAYER_PED_ID()))
						{
							iVar1171 = 1;
						}
						if (IS_PLAYER_ONLINE())
						{
							func_204(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 359, 0, 359, 0);
						}
						else
						{
							func_211(&Var111, 27, 1);
							func_204(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 359, 0);
						}
						iVar715 = 12;
					}
					func_444(&uVar877);
				}
				break;
			
			case 11:
				DISABLE_CONTROL_ACTION(2, 200, 1);
				if (!bVar1175 && !bVar1176)
				{
					if (func_203() && !func_254(&Var111, 26))
					{
						func_192(iVar868);
						if (func_180(iVar868, iVar1154, fVar1148, iVar1155))
						{
							func_204(&Var111, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 359, 0);
							func_211(&Var111, 26, 1);
						}
					}
				}
				if (!IS_PED_INJURED(PLAYER_PED_ID()))
				{
					bVar1187 = IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0);
				}
				if (func_359(&Var16) == 0)
				{
					func_260(func_360(&Var16, (iVar1151 - 1)), vVar904);
				}
				if (!bVar1192)
				{
					iVar717 = func_74(iVar868, &Var111, &uVar1111, &uVar101, iVar1153, iVar1151, iVar1154, &iVar1155, fVar1144, &bVar1179);
					bVar1192 = iVar717 == true;
				}
				if (IS_PED_INJURED(PLAYER_PED_ID()))
				{
					if (iVar1156 == 0)
					{
						SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
					}
					else if (iVar1156 == 5)
					{
						SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
					}
					func_73(&Var16, &uVar1111, &iVar1084, &uVar1085, &uVar1087, &iVar1090, uVar1094, &uVar919, &uVar1096, &uVar1097, &iVar1098, uVar1164, &iVar1159, uVar1105, uVar1106, iVar868, &uVar1095, bVar1190);
				}
				else if (!IS_SCREEN_FADING_OUT() && (!func_72() || func_447(&uVar898) >= 2f))
				{
					DISABLE_CONTROL_ACTION(0, 22, 1);
					DISABLE_CONTROL_ACTION(0, 21, 1);
					DISABLE_CONTROL_ACTION(0, 55, 1);
					DISABLE_CONTROL_ACTION(0, 140, 1);
					DISABLE_CONTROL_ACTION(0, 142, 1);
					DISABLE_CONTROL_ACTION(0, 141, 1);
					DISABLE_CONTROL_ACTION(0, 80, 1);
					DISABLE_CONTROL_ACTION(0, 95, 1);
					DISABLE_CONTROL_ACTION(0, 96, 1);
					DISABLE_CONTROL_ACTION(0, 97, 1);
					DISABLE_CONTROL_ACTION(0, 98, 1);
					DISABLE_CONTROL_ACTION(0, 0, 1);
					if (func_448(&uVar877))
					{
						if ((iVar717 == 1 || func_447(&uVar877) >= 60f) || ((!IS_PED_INJURED(PLAYER_PED_ID()) && IS_PED_JACKING(PLAYER_PED_ID())) || (!bVar1187 && IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))))
						{
							if (!bVar1192)
							{
								func_71(&(Var111.f_26));
								bVar1192 = true;
							}
							if (func_45(&(Var111.f_26), 0, 1065353216, 0, 0, 0))
							{
								if (!bVar1175 && !bVar1176)
								{
									if (func_203() && !func_254(&Var111, 26))
									{
										if (func_180(iVar868, iVar1154, fVar1148, iVar1155))
										{
											func_211(&Var111, 26, 1);
										}
									}
								}
								func_42(&(Var111.f_26));
								func_444(&uVar898);
								if (iVar868 == 0)
								{
									SET_ROADS_IN_ANGLED_AREA(-832.271f, -1525.112f, -100f, -1187.833f, -1876.646f, 100f, 50f, 0, 1, 1);
								}
								else if (iVar868 == 5)
								{
									SET_ROADS_IN_ANGLED_AREA(-129.031f, -726.381f, 35f, -38.185f, -465.801f, 100f, 75f, 0, 1, 1);
								}
								func_73(&Var16, &uVar1111, &iVar1084, &uVar1085, &uVar1087, &iVar1090, uVar1094, &uVar919, &uVar1096, &uVar1097, &iVar1098, uVar1164, &iVar1159, uVar1105, uVar1106, iVar868, &uVar1095, bVar1190);
							}
						}
						else if (iVar717 == 0)
						{
							if (!bVar1175 && !bVar1176)
							{
								if (func_203() && !func_254(&Var111, 26))
								{
									if (func_180(iVar868, iVar1154, fVar1148, iVar1155))
									{
										func_211(&Var111, 26, 1);
									}
								}
							}
							func_42(&(Var111.f_26));
							func_444(&uVar898);
							func_211(&Var111, 5, 0);
							SET_PLAYER_CONTROL(PLAYER_ID(), 0, 256);
							DO_SCREEN_FADE_OUT(800);
							while (IS_SCREEN_FADING_OUT())
							{
								WAIT(0);
								if (func_359(&Var16) == 0)
								{
									func_260(func_360(&Var16, (iVar1151 - 1)), vVar904);
								}
							}
							func_273(&Var16, &uVar1111, &Var111, &uVar1157, &uVar1097, &iVar1098, &uVar1094, &uVar1085, &uVar1086, &uVar1087, &iVar1090, &uVar1109, &uVar1110, uVar1105, uVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, iVar868, &iVar716, &iVar869, &uVar886, &vVar904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
							bVar1172 = true;
							iVar715 = 0;
							break;
						}
						else if (bVar1179)
						{
							if (func_447(&uVar877) > (60f - 5f))
							{
								func_40(&uVar877, (60f - 5f));
							}
						}
					}
					else
					{
						func_333(&uVar877, 0f);
					}
				}
				break;
			
			case 12:
				if (!IS_PED_INJURED(PLAYER_PED_ID()))
				{
					bVar1187 = IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0);
				}
				DISABLE_CONTROL_ACTION(2, 200, 1);
				if (iVar1155 > 0)
				{
					iVar1155 = 0;
				}
				if (!bVar1175 && !bVar1176)
				{
					if (func_203() && !func_254(&Var111, 26))
					{
						func_192(iVar868);
						if (func_180(iVar868, iVar1154, fVar1148, iVar1155))
						{
							func_204(&Var111, 0, 201, "BJ_CONTINUE", 203, "BJ_RETRY", 211, "HUD_INPUT68", 359, 0);
							func_211(&Var111, 26, 1);
						}
					}
				}
				if (!func_254(&Var111, 24))
				{
					if (IS_PED_INJURED(PLAYER_PED_ID()))
					{
						bVar1182 = true;
					}
					else
					{
						bVar1182 = false;
					}
					CANCEL_MUSIC_EVENT("OJBJ_START");
					CANCEL_MUSIC_EVENT("OJBJ_JUMPED");
					CANCEL_MUSIC_EVENT("OJBJ_LANDED");
					TRIGGER_MUSIC_EVENT("OJBJ_STOP");
					if (DOES_BLIP_EXIST(uVar1105))
					{
						REMOVE_BLIP(&uVar1105);
					}
					if (DOES_BLIP_EXIST(uVar1106))
					{
						REMOVE_BLIP(&uVar1106);
					}
					if (iVar868 == 0)
					{
						_0xBC3CCA5844452B06(200f);
					}
					uVar718 = func_255();
					while (!HAS_SCALEFORM_MOVIE_LOADED(uVar718))
					{
						if (func_359(&Var16) == 0)
						{
							func_260(func_360(&Var16, (iVar1151 - 1)), vVar904);
						}
						WAIT(0);
						uVar718 = func_255();
					}
					if (bVar1182)
					{
						func_39(&uVar862, 0);
					}
					else
					{
						func_38(&Var723, 1050253722, 1073741824);
					}
					func_211(&Var111, 24, 1);
				}
				if (!bVar1182 && IS_PED_INJURED(PLAYER_PED_ID()))
				{
					func_211(&Var111, 24, 0);
					break;
				}
				if (func_359(&Var16) == 0)
				{
					func_260(func_360(&Var16, (iVar1151 - 1)), vVar904);
				}
				if (IS_PED_INJURED(PLAYER_PED_ID()))
				{
					switch (func_35(PLAYER_PED_ID()))
					{
						case 0:
							sVar1114 = "BJ_FAIL_M";
							break;
						
						case 1:
							sVar1114 = "BJ_FAIL_F";
							break;
						
						case 2:
							sVar1114 = "BJ_FAIL_T";
							break;
					}
				}
				else if (bVar1178)
				{
					sVar1114 = "BJ_FAIL_02";
				}
				else
				{
					sVar1114 = "BJ_FAIL_01";
				}
				bVar1186 = false;
				DISABLE_CONTROL_ACTION(0, 0, 1);
				DISABLE_CONTROL_ACTION(0, 80, 1);
				if (bVar1182)
				{
					bVar1186 = func_16(&uVar862, &Var723, &uVar718, cVar1113, sVar1114, &bVar1172, 78);
				}
				else
				{
					bVar1186 = func_3(&uVar718, &Var723, cVar1113, sVar1114, &bVar1172, 79, 7, 1, 1097859072, 1);
				}
				if (bVar1186)
				{
					if (bVar1172)
					{
						if (!bVar1175 && !bVar1176)
						{
							if (func_203() && !func_254(&Var111, 26))
							{
								if (func_180(iVar868, iVar1154, fVar1148, iVar1155))
								{
									func_211(&Var111, 26, 1);
								}
							}
						}
						func_273(&Var16, &uVar1111, &Var111, &uVar1157, &uVar1097, &iVar1098, &uVar1094, &uVar1085, &uVar1086, &uVar1087, &iVar1090, &uVar1109, &uVar1110, uVar1105, uVar1106, &iVar1150, &iVar1152, &iVar1153, &iVar1159, &iVar1154, iVar868, &iVar716, &iVar869, &uVar886, &vVar904, &uVar1131, &uVar1145, &uVar1146, &uVar1147, &uVar1174, &bVar1173, &bVar1175, &bVar1176, &bVar1177, &bVar1179, &iVar1171, &uVar1095);
						iVar715 = 0;
					}
					else
					{
						if (!bVar1175 && !bVar1176)
						{
							if (func_203() && !func_254(&Var111, 26))
							{
								if (func_180(iVar868, iVar1154, fVar1148, iVar1155))
								{
									func_211(&Var111, 26, 1);
								}
							}
						}
						func_2(bVar1182, &Var16, &uVar1111, &iVar1084, &uVar1085, &uVar1087, &iVar1090, uVar1094, &uVar919, &uVar1096, &uVar1097, &iVar1098, uVar1164, &iVar1159, uVar1105, uVar1106, iVar868, &uVar1095, bVar1190);
					}
					func_1(&uVar718);
				}
				iVar716 = 0;
				break;
		}
	}
}

void func_1(var uParam0)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
}

void func_2(bool bParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, var uParam12, int iParam13, var uParam14, var uParam15, int iParam16, var uParam17, bool bParam18)
{
	if (bParam0)
	{
		func_546(uParam1, uParam2, iParam3, uParam4, uParam5, iParam6, &uParam7, uParam8, uParam9, uParam10, iParam11, uParam12, iParam13, uParam14, uParam15, iParam16, uParam17, bParam18);
	}
	else
	{
		func_546(uParam1, uParam2, iParam3, uParam4, uParam5, iParam6, &uParam7, uParam8, uParam9, uParam10, iParam11, uParam12, iParam13, uParam14, uParam15, iParam16, uParam17, bParam18);
	}
}

int func_3(var uParam0, var uParam1, char[4] cParam2, char* sParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, float fParam8, bool bParam9)
{
	switch (*uParam1)
	{
		case 0:
			if (!IS_SCREEN_FADED_OUT() || IS_SCREEN_FADING_OUT())
			{
				DO_SCREEN_FADE_OUT(2500);
				_STOP_RECORDING_THIS_FRAME();
			}
			if (bParam9)
			{
				SET_NO_LOADING_SCREEN(1);
			}
			SET_TIME_SCALE(0.2f);
			if (func_15(iParam5, 4))
			{
				if (REQUEST_SCRIPT_AUDIO_BANK("generic_failed", 0, -1))
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
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SHOW_CENTERED_MP_MESSAGE_LARGE");
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
			_SET_NOTIFICATION_COLOR_NEXT(6);
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(cParam2);
			END_TEXT_COMMAND_SCALEFORM_STRING();
			func_14(sParam3);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			_END_SCALEFORM_MOVIE_METHOD_RETURN();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			if (!func_15(iParam5, 1))
			{
				DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			func_13(&(uParam1->f_10), 0, 1, 1, 1);
			func_12(&(uParam1->f_10), "IB_RETRY", 2, 201, 1, 1, 0);
			func_12(&(uParam1->f_10), "FE_HLP16", 2, 202, 1, 1, 0);
			if (func_15(iParam5, 4))
			{
				PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "MissionFailedSounds", 1);
			}
			if (func_15(iParam5, 8))
			{
				switch (func_414())
				{
					case 0:
						_START_SCREEN_EFFECT("MinigameEndMichael", 500, 0);
						break;
					
					case 1:
						_START_SCREEN_EFFECT("MinigameEndFranklin", 500, 0);
						break;
					
					case 2:
						_START_SCREEN_EFFECT("MinigameEndTrevor", 500, 0);
						break;
					}
			}
			if (!func_448(&(uParam1->f_1)))
			{
				func_472(&(uParam1->f_1));
			}
			if (func_15(iParam5, 2))
			{
				if (!func_448(&(uParam1->f_4)))
				{
					func_472(&(uParam1->f_4));
				}
			}
			*uParam1 = 2;
			break;
		
		case 2:
			HIDE_LOADING_ON_FADE_THIS_FRAME();
			if (func_15(iParam5, 32))
			{
				if (!uParam1->f_136)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TRANSITION_UP");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam1->f_134);
					END_SCALEFORM_MOVIE_METHOD();
					uParam1->f_136 = 1;
				}
			}
			SET_SCRIPT_GFX_DRAW_ORDER(iParam6);
			func_11(uParam0, 0, 0);
			if (!func_15(iParam5, 16) && (func_447(&(uParam1->f_1)) >= uParam1->f_135 || IS_SCREEN_FADED_OUT()))
			{
				func_5(&(uParam1->f_10), 1128792064, iParam6, bParam7, 1, 1065353216);
				_SHOW_CURSOR_THIS_FRAME();
				if (IS_CONTROL_JUST_RELEASED(2, 201))
				{
					uParam1->f_138 = 1;
					PLAY_SOUND_FRONTEND(-1, "YES", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
				else if (IS_CONTROL_JUST_RELEASED(2, 202))
				{
					uParam1->f_138 = 0;
					PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			if (func_15(iParam5, 2))
			{
				if (func_447(&(uParam1->f_4)) >= fParam8)
				{
					uParam1->f_138 = 0;
					PLAY_SOUND_FRONTEND(-1, "NO", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					if (!func_15(iParam5, 1))
					{
						ENABLE_ALL_CONTROL_ACTIONS(0);
					}
					func_4(&(uParam1->f_10));
					*uParam1 = 3;
					return 0;
				}
			}
			break;
		
		case 3:
			func_11(uParam0, 0, 0);
			SET_TIME_SCALE(1f);
			if (uParam1->f_138 || !((ARE_STRINGS_EQUAL("stunt_plane_races", GET_THIS_SCRIPT_NAME()) || ARE_STRINGS_EQUAL("pilot_school", GET_THIS_SCRIPT_NAME())) || (ARE_STRINGS_EQUAL("bj", GET_THIS_SCRIPT_NAME()) && IS_PED_INJURED(PLAYER_PED_ID()))))
			{
				DO_SCREEN_FADE_IN(2500);
			}
			if (func_15(iParam5, 64) && uParam1->f_138)
			{
				DO_SCREEN_FADE_OUT(500);
			}
			func_362(&(uParam1->f_4));
			if (bParam9)
			{
				SET_NO_LOADING_SCREEN(0);
			}
			*uParam1 = 4;
			break;
		
		case 4:
			if (func_447(&(uParam1->f_4)) <= 0.1f)
			{
				func_11(uParam0, 0, 0);
			}
			else
			{
				*bParam4 = uParam1->f_138;
				return 1;
			}
			break;
	}
	return 0;
}

void func_4(var uParam0)
{
	if (*uParam0 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
}

void func_5(var uParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, int iParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;
	
	if (((IS_SCREEN_FADING_OUT() || IS_SCREEN_FADING_IN()) || IS_SCREEN_FADED_OUT()) || IS_FRONTEND_FADING())
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
	HIDE_LOADING_ON_FADE_THIS_FRAME();
	SET_SCRIPT_GFX_DRAW_ORDER(uParam2);
	if (!func_15(uParam0->f_1, 256) || (func_15(uParam0->f_1, 8192) && _0x6CD79468A1E595C6(2)))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam1);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(iParam5);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		END_SCALEFORM_MOVIE_METHOD();
		if (IS_PC_VERSION())
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_15(uParam0->f_1, 4096));
			END_SCALEFORM_MOVIE_METHOD();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123)
		{
			switch (uParam0->f_2[iVar6 /*15*/].f_2)
			{
				case 0:
					bVar4 = true;
					break;
				
				case 1:
					bVar4 = _IS_INPUT_DISABLED(2);
					break;
				
				case 2:
					bVar4 = !_IS_INPUT_DISABLED(2);
					break;
				
				default:
					bVar4 = false;
					break;
			}
			if (bVar4)
			{
				if (BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT"))
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14)
					{
						uVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						uVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						uVar2 = IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!IS_BIT_SET(uParam0->f_2[iVar6 /*15*/].f_12, iVar7))
						{
							uVar3 = GET_CONTROL_INSTRUCTIONAL_BUTTON(uVar0, uVar1, uVar2);
						}
						else
						{
							uVar3 = _0x80C2FD58D720C801(uVar0, uVar1, uVar2);
						}
						if (!IS_STRING_NULL_OR_EMPTY(uVar3))
						{
							func_9(uVar3);
						}
						iVar7++;
					}
					if (!IS_STRING_NULL_OR_EMPTY(uParam0->f_2[iVar6 /*15*/]))
					{
						func_14(uParam0->f_2[iVar6 /*15*/]);
					}
					if (IS_PC_VERSION())
					{
						if (func_15(uParam0->f_1, 4096))
						{
							if (uParam0->f_2[iVar6 /*15*/].f_1)
							{
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else
							{
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
								SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
							}
						}
					}
					END_SCALEFORM_MOVIE_METHOD();
				}
			}
			iVar6++;
		}
		fVar8 = func_8(bParam4, func_8(func_15(uParam0->f_1, 32), 1f, 0f), -1f);
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar8);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		END_SCALEFORM_MOVIE_METHOD();
		func_7(&(uParam0->f_1), 256);
		func_6(&(uParam0->f_1), 128);
	}
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
}

void func_6(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_7(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_8(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_9(var uParam0)
{
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

int func_10(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_7(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

int func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (!func_448(&(uParam0->f_2)))
	{
		func_362(&(uParam0->f_2));
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(14);
	if (!bParam2)
	{
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	else if (bParam2)
	{
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 255, 0);
	}
	if (bParam1)
	{
		if (IS_CONTROL_PRESSED(2, 201))
		{
			return 0;
		}
	}
	if (uParam0->f_1 == -1)
	{
		return 1;
	}
	if (func_447(&(uParam0->f_2)) * 1000f) > TO_FLOAT(uParam0->f_1)
	{
		func_444(&(uParam0->f_2));
		return 0;
	}
	return 1;
}

int func_12(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	iVar1 = uParam0->f_123;
	if (iVar1 < 8)
	{
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1)
		{
			SET_BIT(&(uParam0->f_2[iVar1 /*15*/].f_13), 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

void func_13(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 == 0)
	{
		*uParam0 = REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (bParam1)
	{
		func_7(&(uParam0->f_1), 32);
	}
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_7(&(uParam0->f_1), 1);
		if (bParam2)
		{
			SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(*uParam0, 1);
		}
	}
	if (IS_PC_VERSION())
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

void func_14(char* sParam0)
{
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	END_TEXT_COMMAND_SCALEFORM_STRING();
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_16(var uParam0, var uParam1, var uParam2, char* sParam3, char* sParam4, bool bParam5, int iParam6)
{
	switch (*uParam0)
	{
		case 0:
			*uParam0 = 1;
			START_AUDIO_SCENE("DEATH_SCENE");
			PLAY_SOUND_FRONTEND(-1, "ScreenFlash", "WastedSounds", 1);
			func_34(&(uParam0->f_1));
			func_33();
			func_38(uParam1, (0.15f * 0.075f), 0.5f);
			SET_NO_LOADING_SCREEN(1);
			break;
		
		case 1:
			if (func_24() || IS_SCREEN_FADED_OUT())
			{
				*uParam0 = 2;
			}
			if (!func_23(uParam0->f_4, 4))
			{
				if (REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1))
				{
					PLAY_SOUND_FRONTEND(-1, "Bed", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 4);
				}
			}
			if (IntToFloat(TIMERA()) > (1500f * 0.2f))
			{
				if (!func_23(uParam0->f_4, 2))
				{
					PLAY_SOUND_FRONTEND(-1, "TextHit", "WastedSounds", 1);
					func_21(&(uParam0->f_4), 2);
				}
				func_3(uParam2, uParam1, sParam3, sParam4, bParam5, ((iParam6 - 4 & iParam6) - 2 & iParam6) | 16, 7, 1, 1097859072, 0);
			}
			break;
		
		case 2:
			if (func_3(uParam2, uParam1, sParam3, sParam4, bParam5, (((iParam6 - 8 & iParam6) - 4 & iParam6) - 2 & iParam6), 7, 1, 1097859072, 1))
			{
				func_20(0, 1);
				func_18(0, 1);
				func_33();
				if (*bParam5)
				{
					IGNORE_NEXT_RESTART(1);
				}
				else if (!uParam0->f_5)
				{
					func_17(0);
				}
				SET_NO_LOADING_SCREEN(0);
				_DISABLE_AUTOMATIC_RESPAWN(0);
				*uParam0 = 3;
			}
			break;
		
		case 3:
			if (IS_PLAYER_PLAYING(PLAYER_ID()))
			{
				SET_FADE_IN_AFTER_DEATH_ARREST(1);
				func_20(0, 1);
				func_18(0, 1);
				STOP_AUDIO_SCENE("DEATH_SCENE");
				SET_NO_LOADING_SCREEN(0);
				return 1;
			}
			break;
		
		case 4:
			SET_NO_LOADING_SCREEN(0);
			return 1;
			break;
	}
	return 0;
}

void func_17(bool bParam0)
{
	if ((Global_36425 == 9 || Global_36425 == 10) || Global_36425 == 5)
	{
		Global_105214 = bParam0;
		if (bParam0)
		{
		}
	}
	else
	{
		if (bParam0)
		{
		}
		Global_105214 = 0;
	}
}

void func_18(int iParam0, int iParam1)
{
	if (iParam0 == 1)
	{
		func_20(0, 0);
		_START_SCREEN_EFFECT("DeathFailOut", 0, 0);
		SET_BIT(&iLocal_43, 1);
		func_19(1, 2, 0);
		_SET_CAM_EFFECT(2);
	}
	else
	{
		if (IS_BIT_SET(iLocal_43, 1) || iParam1)
		{
			_STOP_SCREEN_EFFECT("DeathFailOut");
			func_19(0, 2, 1);
			_SET_CAM_EFFECT(0);
		}
		CLEAR_BIT(&iLocal_43, 1);
	}
}

void func_19(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 == 1)
	{
		SET_BIT(&iLocal_43, 2);
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (iParam1 == 1)
			{
				SET_TIME_SCALE(0.2f);
			}
			else
			{
				SET_TIME_SCALE(0.075f);
			}
		}
	}
	else
	{
		if (IS_BIT_SET(iLocal_43, 2) || iParam2)
		{
			if (!NETWORK_IS_GAME_IN_PROGRESS())
			{
				SET_TIME_SCALE(1f);
			}
		}
		CLEAR_BIT(&iLocal_43, 2);
	}
}

void func_20(int iParam0, int iParam1)
{
	char* sVar0;
	
	switch (func_414())
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
		if (!IS_BIT_SET(iLocal_43, 0) || iParam1)
		{
			_START_SCREEN_EFFECT(sVar0, 0, 0);
			SET_BIT(&iLocal_43, 0);
			func_19(1, 1, 0);
			_SET_CAM_EFFECT(1);
		}
	}
	else
	{
		if (IS_BIT_SET(iLocal_43, 0) || iParam1)
		{
			_STOP_SCREEN_EFFECT(sVar0);
			func_19(0, 1, 1);
			_SET_CAM_EFFECT(0);
		}
		CLEAR_BIT(&iLocal_43, 0);
	}
}

void func_21(var uParam0, int iParam1)
{
	func_22(uParam0, iParam1);
}

void func_22(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_23(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_24()
{
	if (!IS_BIT_SET(iLocal_43, 0) && !IS_BIT_SET(iLocal_43, 1))
	{
		SETTIMERA(0);
		func_20(1, 0);
	}
	if (!IS_CUTSCENE_PLAYING())
	{
		CLEAR_PRINTS();
	}
	DISABLE_CONTROL_ACTION(2, 199, 1);
	DISABLE_CONTROL_ACTION(0, 59, 1);
	DISABLE_CONTROL_ACTION(0, 60, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
	DISABLE_CONTROL_ACTION(0, 25, 1);
	_0x5A7F62FDA59759BD();
	if (IntToFloat(TIMERA()) > (1500f * 0.2f))
	{
		if (!IS_BIT_SET(iLocal_43, 1))
		{
			func_18(1, 0);
			SETTIMERB(0);
		}
		else if (IntToFloat(TIMERB()) > (1500f * 0.075f) || IS_SCREEN_FADED_OUT())
		{
			if (!IS_SCREEN_FADED_OUT())
			{
				if (!IS_SCREEN_FADING_OUT())
				{
					DO_SCREEN_FADE_OUT(1500);
				}
			}
			else if (iLocal_44 == 0)
			{
				iLocal_44 = GET_GAME_TIMER() + 1000;
				if (IS_PLAYER_PLAYING(PLAYER_ID()))
				{
					SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
				}
				func_19(0, 2, 1);
				func_404(1, 1, 1, 0, 0, 0);
				func_26(1);
				SET_FRONTEND_ACTIVE(0);
				SET_PAUSE_MENU_ACTIVE(0);
				CLEAR_HELP(1);
				CLEAR_PRINTS();
				if (IS_PLAYER_PLAYING(PLAYER_ID()))
				{
					SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
				}
				func_20(0, 0);
				func_25(0);
			}
			else if (GET_GAME_TIMER() < iLocal_44)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_25(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (iVar0 == 0)
	{
		if (iParam0 == 1)
		{
			if (!IS_BIT_SET(iLocal_43, 3))
			{
				SET_GAME_PAUSED(1);
				SET_BIT(&iLocal_43, 3);
			}
		}
		else if (IS_BIT_SET(iLocal_43, 3))
		{
			SET_GAME_PAUSED(0);
			CLEAR_BIT(&iLocal_43, 3);
		}
	}
}

void func_26(bool bParam0)
{
	if (bParam0)
	{
		func_32();
		if (Global_14553.f_1 == 10 || Global_14553.f_1 == 9)
		{
			SET_BIT(&Global_2424, 16);
		}
		Global_14553.f_1 = 1;
		if (func_31(0))
		{
			func_27(0);
		}
	}
	else if (Global_14553.f_1 == 1)
	{
		if (!Global_14553.f_1 == 0)
		{
			Global_14553.f_1 = 3;
		}
	}
}

void func_27(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (Global_14725)
	{
		func_29(0, 0);
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
	if (!func_28())
	{
		Global_14553.f_1 = 3;
	}
}

int func_28()
{
	if (Global_14553.f_1 == 1 || Global_14553.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_29(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_31(0))
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

bool func_30()
{
	return IS_BIT_SET(Global_1681628, 19);
}

int func_31(int iParam0)
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

void func_32()
{
	if (Global_14553.f_1 == 9 || Global_14553.f_1 == 10)
	{
		Global_15919 = 0;
		Global_15915 = 1;
	}
}

void func_33()
{
	iLocal_43 = 0;
	iLocal_44 = 0;
	func_404(0, 1, 1, 0, 0, 0);
	func_26(1);
}

void func_34(var uParam0)
{
	if (!func_448(uParam0))
	{
		func_472(uParam0);
	}
	else
	{
		func_362(uParam0);
	}
}

int func_35(var uParam0)
{
	int iVar0;
	int iVar1;
	
	if (DOES_ENTITY_EXIST(uParam0))
	{
		iVar1 = GET_ENTITY_MODEL(uParam0);
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

int func_36(int iParam0)
{
	if (func_37(iParam0))
	{
		return Global_106565.f_28044[iParam0 /*29*/];
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

bool func_37(int iParam0)
{
	return iParam0 < 3;
}

void func_38(var uParam0, int iParam1, int iParam2)
{
	if (func_448(&(uParam0->f_1)))
	{
		func_444(&(uParam0->f_1));
	}
	if (func_448(&(uParam0->f_4)))
	{
		func_444(&(uParam0->f_4));
	}
	func_4(&(uParam0->f_10));
	uParam0->f_134 = iParam1;
	uParam0->f_135 = iParam2;
	uParam0->f_137 = 1;
	uParam0->f_136 = 0;
	*uParam0 = 0;
}

void func_39(var uParam0, int iParam1)
{
	*uParam0 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = iParam1;
	REQUEST_SCRIPT_AUDIO_BANK("OFFMISSION_WASTED", 0, -1);
}

void func_40(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_41(IS_BIT_SET(*uParam0, 4)) - fParam1);
	SET_BIT(uParam0, 1);
	CLEAR_BIT(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_41(bool bParam0)
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

void func_42(var uParam0)
{
	if (uParam0->f_1 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_1));
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0)
	{
		if (IS_PC_VERSION())
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(0);
			END_SCALEFORM_MOVIE_METHOD();
		}
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_4));
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564)
	{
		SET_NO_LOADING_SCREEN(0);
		uParam0->f_564 = 0;
	}
	if (!Global_71858)
	{
		if (!IS_PLAYER_DEAD(GET_PLAYER_INDEX()))
		{
			if (!Global_71859)
			{
				if (IS_SCREEN_FADED_OUT() && !func_44(0))
				{
					DO_SCREEN_FADE_IN(800);
				}
			}
		}
	}
	func_43(0);
}

void func_43(int iParam0)
{
	Global_71850 = iParam0;
	Global_71851 = iParam0;
}

int func_44(bool bParam0)
{
	if (!bParam0 && _GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return IS_BIT_SET(Global_71838, 0);
}

int func_45(var uParam0, bool bParam1, float fParam2, int iParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	
	if (GET_FRAME_COUNT() == uParam0->f_574)
	{
		return uParam0->f_575;
	}
	uParam0->f_574 = GET_FRAME_COUNT();
	if (!NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_PED_DEAD_OR_DYING(GET_PLAYER_PED(GET_PLAYER_INDEX()), 1))
		{
			uParam0->f_575 = 1;
			return 1;
		}
		if (IS_PED_BEING_ARRESTED(GET_PLAYER_PED(GET_PLAYER_INDEX())))
		{
			uParam0->f_575 = 1;
			return 1;
		}
	}
	if (!uParam0->f_564)
	{
		if (IS_SCREEN_FADED_OUT() || IS_SCREEN_FADING_OUT())
		{
			SET_NO_LOADING_SCREEN(1);
			uParam0->f_564 = 1;
		}
	}
	if (IS_PLAYER_PLAYING(PLAYER_ID()))
	{
		if (!NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (IS_SPECIAL_ABILITY_ACTIVE(PLAYER_ID()))
			{
				SPECIAL_ABILITY_DEACTIVATE(PLAYER_ID());
			}
		}
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(19);
	DISABLE_CONTROL_ACTION(2, 19, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
	DISABLE_CONTROL_ACTION(0, 21, 1);
	DISABLE_CONTROL_ACTION(0, 28, 1);
	DISABLE_CONTROL_ACTION(0, 29, 1);
	DISABLE_CONTROL_ACTION(0, 171, 1);
	func_70(0);
	if (_IS_INPUT_DISABLED(2))
	{
		if (_IS_PLAYER_CAM_CONTROL_DISABLED() || (IS_SCREEN_FADED_OUT() && !IS_SCREEN_FADING_IN()))
		{
			_SHOW_CURSOR_THIS_FRAME();
		}
	}
	Global_36975 = 1;
	if (!uParam0->f_563)
	{
		switch (func_35(GET_PLAYER_PED(GET_PLAYER_INDEX())))
		{
			case 1:
				_START_SCREEN_EFFECT("SuccessFranklin", 1000, 0);
				break;
			
			case 2:
				_START_SCREEN_EFFECT("SuccessTrevor", 1000, 0);
				break;
			
			default:
				_START_SCREEN_EFFECT("SuccessMichael", 1000, 0);
				break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0)
	{
		uParam0->f_558 = (uParam0->f_572 + FLOOR((15000f * fParam2)));
	}
	if (iParam4 && uParam0->f_572 >= (uParam0->f_558 - 1500))
	{
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f)
	{
		uParam0->f_560 = (uParam0->f_560 + func_69(30f));
		uParam0->f_560 = (uParam0->f_560 + (IntToFloat(uParam0->f_56) * func_69(25f)));
		if (uParam0->f_56 > 0)
		{
			uParam0->f_560 = (uParam0->f_560 + func_69((25f * 0.5f)));
		}
		if (uParam0->f_549)
		{
			uParam0->f_560 = (uParam0->f_560 + (func_69(30f) - func_69(2f)));
		}
	}
	bVar0 = true;
	while (bVar0)
	{
		func_43(1);
		uParam0->f_572 = (uParam0->f_572 + ROUND((0f + (1000f * TIMESTEP()))));
		func_48(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 666) - (15000f * fParam2)))
		{
			if (uParam0->f_30 < 1f)
			{
				uParam0->f_30 = (uParam0->f_30 + (0f + ((1f / 0.225f) * TIMESTEP())));
			}
		}
		uParam0->f_30 = func_47(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_565)
				{
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_547 = (uParam0->f_547 - (0f + ((1f / 1.215f) * TIMESTEP())));
			}
		}
		uParam0->f_547 = func_47(uParam0->f_547, 0f, 1f);
		if ((uParam0->f_547 <= 0.7f && !uParam0->f_545) && uParam0->f_1 != 0)
		{
			BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_OUT");
			END_SCALEFORM_MOVIE_METHOD();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > (uParam0->f_558 - 333))
		{
			if (!uParam0->f_561)
			{
				if (uParam0->f_548 < 1f)
				{
					uParam0->f_548 = (uParam0->f_548 + (0f + ((1f / 0.3f) * TIMESTEP())));
				}
			}
		}
		uParam0->f_548 = func_47(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562)
		{
			if (_0x6CD79468A1E595C6(2))
			{
				if (HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
				{
					if (!uParam0->f_567)
					{
						func_46(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
					}
				}
			}
		}
		if (IS_CONTROL_JUST_PRESSED(2, 216) && uParam0->f_558 > uParam0->f_572 + 333)
		{
			if (((!uParam0->f_566 && uParam0->f_56 != 0) && HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4)) && IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (!uParam0->f_565)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > (uParam0->f_558 - 5000))
					{
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (bParam5)
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_UP_BACKGROUND");
					END_SCALEFORM_MOVIE_METHOD();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_46(uParam0, (!uParam0->f_565 && uParam0->f_56 > 0));
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0)
		{
			if (IntToFloat(uParam0->f_572) > (IntToFloat(uParam0->f_558 + 1165) - (15000f * fParam2)))
			{
				if (uParam0->f_566 && !uParam0->f_565)
				{
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					END_SCALEFORM_MOVIE_METHOD();
				}
				uParam0->f_559 = func_47((uParam0->f_559 + (((1f / 0.3f) * uParam0->f_573) * TIMESTEP())), 0f, 1f);
				uParam0->f_573 = func_47((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
			}
		}
		else
		{
			uParam0->f_559 = func_47((uParam0->f_559 - ((((1f / 0.3f) * uParam0->f_573) * 0.01f) * TIMESTEP())), 0f, 1f);
			uParam0->f_573 = func_47((uParam0->f_573 + 0.07f), 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558)
		{
			if (uParam0->f_561)
			{
				if (!uParam0->f_567)
				{
					if (IS_CONTROL_JUST_PRESSED(2, 215))
					{
						uParam0->f_561 = 0;
					}
				}
			}
			else if ((uParam0->f_572 - uParam0->f_546) > 1000 && uParam0->f_545)
			{
				bVar0 = false;
			}
		}
		uParam0->f_575 = !bVar0;
		if (bParam1)
		{
			WAIT(0);
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

void func_46(var uParam0, bool bParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	END_SCALEFORM_MOVIE_METHOD();
	if (IS_PC_VERSION())
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		END_SCALEFORM_MOVIE_METHOD();
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_9(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 215, 1));
	func_14("ES_HELP");
	if (IS_PC_VERSION())
	{
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(215);
	}
	END_SCALEFORM_MOVIE_METHOD();
	if (bParam1)
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
		func_9(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 216, 1));
		func_14("ES_XPAND");
		if (IS_PC_VERSION())
		{
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
			SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(216);
		}
		END_SCALEFORM_MOVIE_METHOD();
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	END_SCALEFORM_MOVIE_METHOD();
}

float func_47(float fParam0, float fParam1, float fParam2)
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

void func_48(var uParam0, float fParam1, var uParam2)
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
	var uVar13;
	var uVar14;
	var uVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;
	
	iVar0 = ROUND((uParam0->f_547 * 255f));
	fVar1 = (func_68() * 0.25f);
	if (HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1))
	{
		if (uParam0->f_30 >= 0f)
		{
			if (!uParam0->f_2)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_14(&(uParam0->f_5));
				if (uParam0->f_556 == 4)
				{
					func_67(&(uParam0->f_13));
				}
				else
				{
					func_14(&(uParam0->f_13));
				}
				if (NETWORK_IS_GAME_IN_PROGRESS())
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(150);
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(100);
				}
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				if (uParam0->f_556 == 4)
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT((uParam0->f_56 - 1));
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_56);
				}
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(uParam2);
				if (uParam0->f_556 == 4 || uParam0->f_556 == 3)
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				}
				else
				{
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(69);
				}
				END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_2 = 1;
			}
			if ((uParam0->f_56 > 0 && !uParam0->f_3) && uParam0->f_572 > 600)
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_1, "TRANSITION_UP");
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.15f);
				SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
				END_SCALEFORM_MOVIE_METHOD();
				uParam0->f_3 = 1;
			}
		}
		func_66();
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = ((uParam0->f_560 * uParam0->f_559) * (1f - uParam0->f_548));
	fVar3 = 0f;
	if (uParam0->f_567)
	{
		fVar3 = (((0.1388889f + func_69((2f * 2f))) * uParam0->f_568) * (1f - uParam0->f_548));
		fVar2 = (fVar2 + (3f * fVar3));
	}
	if (uParam0->f_548 != 0f)
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
		if (uParam0->f_30 >= 0.975f)
		{
			if (fVar2 < fVar5)
			{
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = (0.3f * func_68());
	if (uParam0->f_12)
	{
		fVar1 = 0.5f;
	}
	fVar6 = (*uParam0 * 2f);
	if (uParam0->f_556 != 4)
	{
		fVar7 = func_65(&(uParam0->f_13));
		if (fVar6 < fVar7)
		{
			fVar6 = (fVar7 + (3f * 0.006f));
		}
		if (_GET_ASPECT_RATIO(0) < 1.4f)
		{
			fVar6 = (fVar6 * 1.3f);
		}
		fVar7 = func_65(&(uParam0->f_550));
		fVar8 = (((0.119f + 0.05f) / func_68()) / 2.5f);
		if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0)
		{
			if (fVar6 < (fVar7 + (2.6f * fVar8)))
			{
				fVar6 = (fVar7 + (2.6f * fVar8));
			}
		}
		else if (uParam0->f_556 == 5)
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
	SET_INPUT_EXCLUSIVE(2, 215);
	SET_INPUT_EXCLUSIVE(2, 216);
	SET_INPUT_EXCLUSIVE(2, 200);
	DISABLE_CONTROL_ACTION(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567)
	{
		if ((IntToFloat(uParam0->f_558) - (14000f * fParam1)) < IntToFloat(uParam0->f_572) || ((uParam0->f_567 && uParam0->f_559 > 0.95f) && (uParam0->f_558 - 10000) < uParam0->f_572))
		{
			if (uParam0->f_567)
			{
				if (uParam0->f_570 < 0)
				{
					uParam0->f_570 = (uParam0->f_570 * -1);
					uParam0->f_570 = (uParam0->f_572 + uParam0->f_570);
				}
				if (uParam0->f_570 > 0)
				{
					if ((uParam0->f_570 - uParam0->f_572) > 0)
					{
						func_62((uParam0->f_570 - uParam0->f_572), "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, -1);
					}
					else
					{
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f)
				{
					uParam0->f_568 = (uParam0->f_568 + (0f + ((1f / 0.166f) * TIMESTEP())));
					if (uParam0->f_568 > 1f)
					{
						uParam0->f_568 = 1f;
					}
				}
			}
			if (IS_SCREEN_FADED_OUT())
			{
				HIDE_LOADING_ON_FADE_THIS_FRAME();
			}
			if ((uParam0->f_4 != 0 && uParam0->f_548 < 0.1f) && uParam0->f_572 <= uParam0->f_558)
			{
				HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HIDE_HUD_COMPONENT_THIS_FRAME(6);
				DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567)
			{
				DISABLE_CONTROL_ACTION(0, 140, 1);
				DISABLE_CONTROL_ACTION(0, 141, 1);
				DISABLE_CONTROL_ACTION(0, 142, 1);
				DISABLE_CONTROL_ACTION(2, 188, 1);
				if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 188))
				{
					PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				DISABLE_CONTROL_ACTION(2, 187, 1);
				if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 187))
				{
					PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				DISABLE_CONTROL_ACTION(2, 202, 1);
				if (IS_DISABLED_CONTROL_JUST_PRESSED(2, 202))
				{
					PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562)
			{
				HIDE_HUD_COMPONENT_THIS_FRAME(7);
				HIDE_HUD_COMPONENT_THIS_FRAME(8);
				HIDE_HUD_COMPONENT_THIS_FRAME(9);
				HIDE_HUD_COMPONENT_THIS_FRAME(6);
				DISABLE_CONTROL_ACTION(0, 140, 1);
				DISABLE_CONTROL_ACTION(0, 141, 1);
				DISABLE_CONTROL_ACTION(0, 142, 1);
				if (IS_CONTROL_JUST_PRESSED(2, 215) || IS_DISABLED_CONTROL_JUST_PRESSED(2, 200))
				{
					PLAY_SOUND_FRONTEND(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					PLAY_SOUND_FRONTEND(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	GET_HUD_COLOUR(1, &uVar13, &uVar14, &uVar15, &iVar16);
	SET_TEXT_COLOUR(uVar13, uVar14, uVar15, iVar0);
	SET_TEXT_WRAP(fVar9, fVar10);
	SET_TEXT_JUSTIFICATION(0);
	SET_TEXT_SCALE(1f, 0.4f);
	fVar1 = (fVar1 - func_69(6f));
	fVar1 = (fVar1 + (func_69(30f) - func_69((2f * 2f))));
	fVar11 = (fVar2 - func_69((2f * 14f)));
	if (fVar11 >= 0f)
	{
		fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
		func_66();
		DRAW_RECT(0.5f, (fVar1 - (func_69((2f - 0.5f)) - 0.001388889f)), fVar6, func_61(1f), uVar13, uVar14, uVar15, ROUND((fVar12 * IntToFloat(iVar16))), 0);
	}
	else
	{
		return;
	}
	fVar1 = (fVar1 + func_69((2f * 0.3f)));
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56)
	{
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_47((fVar11 / (0.8f * func_69(25f))), 0f, 1f);
			func_58(uParam0, iVar17, (fVar1 + func_69(2f)), fVar9, fVar10, ROUND((IntToFloat(iVar0) * fVar12)));
		}
		else
		{
			return;
		}
		fVar1 = (fVar1 + func_69(25f));
		if (uParam0->f_556 == 4)
		{
			if (iVar17 == (uParam0->f_576 - 1))
			{
				fVar1 = (fVar1 + func_69((25f * 0.2f)));
				fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
				if (fVar11 >= 0f)
				{
					fVar1 = (fVar1 + func_69(2f));
					fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
					func_66();
					DRAW_RECT(0.5f, (fVar1 + func_69((2f * 0.5f))), fVar6, func_61(1f), uVar13, uVar14, uVar15, ROUND((fVar12 * IntToFloat(iVar16))), 0);
					fVar1 = (fVar1 + func_69((2f * 0.3f)));
					if (uParam0->f_56 > 0)
					{
						fVar1 = (fVar1 + func_69((25f * 0.2f)));
					}
				}
			}
		}
		iVar17++;
	}
	if (uParam0->f_556 == 4)
	{
		return;
	}
	if (uParam0->f_56 > 0)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar1 = (fVar1 + func_69(2f));
			fVar12 = func_47((fVar11 / (0.6f * func_69(25f))), 0f, 1f);
			func_66();
			DRAW_RECT(0.5f, (fVar1 + func_69((2f * 0.5f))), fVar6, func_61(1f), uVar13, uVar14, uVar15, ROUND((fVar12 * IntToFloat(iVar16))), 0);
		}
	}
	if (uParam0->f_549)
	{
		fVar1 = (fVar1 + func_69((25f * 0.2f)));
		fVar11 = (fVar2 - (fVar1 - (0.3f * func_68())));
		if (fVar11 >= 0f)
		{
			fVar12 = func_47((fVar11 / (0.8f * func_69(25f))), 0f, 1f);
			SET_TEXT_COLOUR(uVar13, uVar14, uVar15, ROUND((fVar12 * IntToFloat(iVar0))));
			func_51(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk_0x83D607D7994DEF3A() == 0)
			{
				fVar20 = (fVar9 + ((0.119f / func_68()) / 2.5f));
				fVar21 = (fVar10 - ((0.119f / func_68()) / 2.5f));
				if (uParam0->f_556 == 1)
				{
					fVar20 = (fVar9 + (((0.119f + 0.05f) / func_68()) / 2.5f));
					fVar21 = (fVar10 - (((0.119f + 0.05f) / func_68()) / 2.5f));
				}
			}
			if (uParam0->f_557 == 0)
			{
				fVar20 = (fVar20 + (((fVar18 * 0.28f) + 0.006f) / 2f));
				fVar21 = (fVar21 + (((fVar18 * 0.28f) + 0.006f) / 2f));
			}
			if (uParam0->f_556 != 3)
			{
				SET_TEXT_WRAP(fVar20, fVar21);
				SET_TEXT_JUSTIFICATION(1);
			}
			else
			{
				fVar20 = 0.5f;
				SET_TEXT_JUSTIFICATION(0);
			}
			SET_TEXT_SCALE(1f, 0.4f);
			func_50(&(uParam0->f_550), fVar20, (fVar1 + func_69((2f * 2f))), 0, 0, 0);
			SET_TEXT_WRAP(fVar20, fVar21);
			SET_TEXT_JUSTIFICATION(2);
			SET_TEXT_SCALE(1f, 0.4f);
			SET_TEXT_CENTRE(0);
			func_66();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 = (fVar22 - ((fVar18 * 0.28f) + 0.006f));
			SET_TEXT_WRAP(fVar20, fVar22);
			SET_TEXT_COLOUR(uVar13, uVar14, uVar15, ROUND((fVar12 * IntToFloat(iVar0))));
			switch (uParam0->f_556)
			{
				case 0:
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 1:
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_555);
					END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 2:
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT("MTPHPER_XPNO");
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_554);
					END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
				
				case 5:
					BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
					ADD_TEXT_COMPONENT_FORMATTED_INTEGER(uParam0->f_554, 1);
					END_TEXT_COMMAND_DISPLAY_TEXT(fVar20, (fVar1 + func_69((2f * 2f))), 0);
					break;
			}
			if (uParam0->f_557 != 0)
			{
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557)
				{
					case 1:
						GET_HUD_COLOUR(107, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 3:
						GET_HUD_COLOUR(109, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
					
					case 2:
						GET_HUD_COLOUR(108, &iVar35, &iVar36, &iVar37, &iVar38);
						break;
				}
				fVar39 = (0.001388889f * 5f);
				fVar40 = ((0.00078125f * 16f) * 2f);
				fVar41 = ((0.001388889f * 16f) * 2f);
				fVar42 = ((fVar21 + func_49(4f)) - 0.006f);
				fVar43 = ((fVar1 + func_69(10f)) + fVar39);
				if (uParam0->f_556 == -1)
				{
					fVar42 = (fVar42 - (0.006f * 6f));
				}
				fVar40 = (fVar40 * 0.65f);
				fVar41 = (fVar41 * 0.65f);
				DRAW_SPRITE(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37, ROUND((fVar12 * IntToFloat(iVar0))), 0);
			}
			fVar1 = (fVar1 + (func_69(30f) - 2f));
		}
	}
}

float func_49(float fParam0)
{
	return (fParam0 * 0.00078125f);
}

void func_50(var uParam0, float fParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	SET_TEXT_CENTRE(iParam3);
	SET_TEXT_FONT(iParam5);
	func_66();
	if (bParam4)
	{
		BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam0);
	}
	else
	{
		BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam0);
	}
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam1, fParam2, 0);
}

int func_51(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;
	
	StringCopy(&cVar0, func_57(iParam0), 64);
	StringCopy(&cVar16, func_54(iParam0, bParam1), 64);
	if (GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		if (bParam5)
		{
			_GET_ACTIVE_SCREEN_RESOLUTION(&iVar32, &iVar33);
			fVar35 = _GET_ASPECT_RATIO(0);
			if (func_53())
			{
				iVar32 = ROUND((TO_FLOAT(iVar33) * fVar35));
			}
			fVar36 = (TO_FLOAT(iVar32) / TO_FLOAT(iVar33));
			fVar34 = (fVar36 / fVar35);
			if (func_53())
			{
				fVar34 = 1f;
			}
			if (_GET_NUMBER_OF_INSTANCES_OF_SCRIPT_WITH_NAME_HASH(joaat("director_mode")) > 0)
			{
				GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
			}
			iVar32 = ROUND((TO_FLOAT(iVar32) / fVar34));
			iVar33 = ROUND((TO_FLOAT(iVar33) / fVar34));
		}
		else
		{
			GET_SCREEN_RESOLUTION(&iVar32, &iVar33);
		}
		vVar37 = { GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		vVar37.x = (vVar37.x * (func_52(iParam0) / fVar34));
		vVar37.y = (vVar37.y * (func_52(iParam0) / fVar34));
		if (!bParam2)
		{
			vVar37.x = (vVar37.x - 2f);
			vVar37.y = (vVar37.y - 2f);
		}
		if (iParam0 == 30)
		{
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && GET_HASH_KEY(&(Global_17411.f_6997[29 /*16*/])) == -1487683087)
		{
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = ((vVar37.x / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((vVar37.y / IntToFloat(iVar33)) / (vVar37.x / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GET_IS_WIDESCREEN() && iParam0 != 30)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 29)
		{
			if (*fParam3 > Global_17410)
			{
				*fParam4 = (*fParam4 * (Global_17410 / *fParam3));
				*fParam3 = Global_17410;
			}
		}
		return 1;
	}
	return 0;
}

float func_52(int iParam0)
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
		case 51:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
			return 0.5f;
			break;
		
		case 60:
			return 0.8f;
			break;
	}
	return 1f;
}

int func_53()
{
	var uVar0;
	var uVar1;
	float fVar2;
	
	_GET_ACTIVE_SCREEN_RESOLUTION(&uVar0, &uVar1);
	fVar2 = (TO_FLOAT(uVar0) / TO_FLOAT(uVar1));
	if (fVar2 > 3.5f)
	{
		return 1;
	}
	return 0;
}

var func_54(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6997[iParam0 /*16*/])))
	{
		if (GET_HASH_KEY(&(Global_17411.f_6997[iParam0 /*16*/])) == -1487683087)
		{
			Var19 = { func_56(PLAYER_ID()) };
			if (_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_55(&uVar3);
			}
		}
		else
		{
			return func_55(&(Global_17411.f_6997[iParam0 /*16*/]));
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
		
		case 50:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 51:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 53:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 54:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 55:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 56:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 57:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 58:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 59:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 60:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
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

var func_55(var uParam0)
{
	return uParam0;
}

struct<13> func_56(var uParam0)
{
	struct<13> Var0;
	
	NETWORK_HANDLE_FROM_PLAYER(uParam0, &Var0, 13);
	return Var0;
}

char* func_57(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!IS_STRING_NULL_OR_EMPTY(&(Global_17411.f_6020[iParam0 /*16*/])))
	{
		if (GET_HASH_KEY(&(Global_17411.f_6020[iParam0 /*16*/])) == -1487683087)
		{
			Var16 = { func_56(PLAYER_ID()) };
			_NETWORK_GET_PLAYER_CREW_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_55(&uVar0);
		}
		else
		{
			return func_55(&(Global_17411.f_6020[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 50)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_58(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	
	GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	SET_TEXT_COLOUR(uVar0, uVar1, uVar2, uParam5);
	SET_TEXT_WRAP(fParam3, fParam4);
	SET_TEXT_JUSTIFICATION(1);
	SET_TEXT_SCALE(1f, func_60(14f));
	SET_TEXT_CENTRE(0);
	SET_TEXT_FONT(0);
	func_66();
	if (uParam0->f_531[iParam1])
	{
		BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
		ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_71[iParam1 /*16*/]));
	}
	else
	{
		BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(uParam0->f_71[iParam1 /*16*/]));
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17)
		{
			ADD_TEXT_COMPONENT_INTEGER(uParam0->f_489[iParam1]);
		}
	}
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1])
	{
		case 0:
			break;
		
		case 1:
			func_51(7, 0, 1, &fVar5, &fVar6, 0);
			DRAW_SPRITE("CommonMenu", func_54(7, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, uParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 2:
			func_51(5, 0, 1, &fVar5, &fVar6, 0);
			DRAW_SPRITE("CommonMenu", func_54(5, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, uParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
		
		case 3:
			func_51(6, 0, 1, &fVar5, &fVar6, 0);
			DRAW_SPRITE("CommonMenu", func_54(6, 0), (fParam4 - 0.006f), ((fParam2 + func_69(2f)) + (0.25f * fVar6)), fVar5, fVar6, 0f, 255, 255, 255, uParam5, 0);
			fVar4 = (fVar4 - ((fVar5 * 0.38f) + 0.006f));
			break;
	}
	if (uParam0->f_57[iParam1] == 0)
	{
		return;
	}
	if (uParam0->f_57[iParam1] == 15)
	{
		SET_TEXT_JUSTIFICATION(1);
	}
	else
	{
		SET_TEXT_JUSTIFICATION(2);
	}
	SET_TEXT_SCALE(1f, func_60(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4)
	{
		SET_TEXT_WRAP(fParam3, (fVar4 - (0.00078125f * 3f)));
	}
	else
	{
		SET_TEXT_WRAP(fParam3, (fVar4 + (0.00078125f * 2f)));
	}
	SET_TEXT_COLOUR(uVar0, uVar1, uVar2, uParam5);
	func_59(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &(uParam0->f_280[iParam1 /*16*/]), uParam0->f_57[iParam1]);
}

void func_59(int iParam0, var uParam1, float fParam2, float fParam3, var uParam4, int iParam5)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = 1;
	SET_TEXT_CENTRE(0);
	SET_TEXT_FONT(0);
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
			SET_TEXT_SCALE(1f, func_60(18f));
			SET_TEXT_FONT(4);
			if (iParam0 < 0)
			{
				_BEGIN_TEXT_COMMAND_WIDTH("ESMINDOLLA");
				ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
				fVar1 = _END_TEXT_COMMAND_GET_WIDTH(0);
			}
			else
			{
				_BEGIN_TEXT_COMMAND_WIDTH("ESDOLLA");
				ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
				fVar1 = _END_TEXT_COMMAND_GET_WIDTH(0);
			}
			fVar1 = (fVar1 - (fVar1 % 0.00078125f));
			DRAW_SPRITE("CommonMenu", "BettingBox_Left", (fParam2 - fVar1), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			DRAW_SPRITE("CommonMenu", "BettingBox_Centre", ((fParam2 - (fVar1 * 0.5f)) - (0.00078125f * 2f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), (fVar1 - (fVar2 * 0.5f)), fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			DRAW_SPRITE("CommonMenu", "BettingBox_Right", (fParam2 - (0.00078125f * 4f)), ((fParam3 + (fVar3 * 0.6f)) + (0.001388889f * 2f)), fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255, 0);
			SET_TEXT_SCALE(1f, func_60(14f));
			break;
	}
	_SET_NOTIFICATION_COLOR_NEXT(iVar0);
	switch (iParam5)
	{
		case 11:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("PERCENTAGE");
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 1:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_NUM");
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 2:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("FO_TWO_NUM");
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			ADD_TEXT_COMPONENT_INTEGER(uParam1);
			break;
		
		case 4:
		case 5:
			SET_TEXT_SCALE(1f, func_60(18f));
		
		case 3:
			if (iParam0 < 0)
			{
				BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESMINDOLLA");
				ADD_TEXT_COMPONENT_FORMATTED_INTEGER((-1 * iParam0), 1);
			}
			else
			{
				BEGIN_TEXT_COMMAND_DISPLAY_TEXT("ESDOLLA");
				ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam0, 1);
			}
			break;
		
		case 6:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam4);
			break;
		
		case 7:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(uParam4);
			break;
		
		case 8:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 14);
			break;
		
		case 9:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 6);
			break;
		
		case 10:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 18:
			SET_TEXT_FONT(5);
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 2055);
			break;
		
		case 12:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT("AHD_DIST");
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			break;
		
		case 13:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam4);
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			ADD_TEXT_COMPONENT_INTEGER(uParam1);
			break;
		
		case 15:
		case 14:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam4);
			ADD_TEXT_COMPONENT_INTEGER(iParam0);
			ADD_TEXT_COMPONENT_INTEGER(uParam1);
			break;
		
		case 16:
			BEGIN_TEXT_COMMAND_DISPLAY_TEXT(uParam4);
			ADD_TEXT_COMPONENT_INTEGER(uParam1);
			break;
	}
	if (iParam5 != 17)
	{
		if (iParam5 == 4 || iParam5 == 5)
		{
			END_TEXT_COMMAND_DISPLAY_TEXT((fParam2 - (0.00078125f * 4f)), fParam3, 0);
			SET_TEXT_SCALE(1f, func_60(14f));
		}
		else
		{
			END_TEXT_COMMAND_DISPLAY_TEXT(fParam2, fParam3, 0);
		}
	}
}

float func_60(float fParam0)
{
	return (fParam0 * 0.025f);
}

float func_61(float fParam0)
{
	return (fParam0 * 0.0009259259f);
}

void func_62(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (iVar0 == -1)
		{
			if (func_64(7, iVar1) == 0)
			{
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1)
	{
		Global_1373453.f_1 = 1;
		func_63(7, iVar0);
		Global_1373453.f_4453[iVar0] = iParam0;
		StringCopy(&(Global_1373453.f_4453.f_11[iVar0 /*16*/]), sParam1, 64);
		Global_1373453.f_4453.f_172[iVar0] = iParam2;
		Global_1373453.f_4453.f_216[iVar0] = iParam3;
		Global_1373453.f_4453.f_183[iVar0] = iParam4;
		Global_1373453.f_4453.f_194[iVar0] = iParam5;
		Global_1373453.f_4453.f_249[iVar0] = iParam6;
		Global_1373453.f_4453.f_260[iVar0] = iParam7;
		Global_1373453.f_4453.f_205[iVar0] = iParam8;
		Global_1373453.f_4453.f_314[iVar0] = iParam9;
		Global_1373453.f_4453.f_325[iVar0] = iParam10;
		Global_1373453.f_4453.f_357[iVar0] = iParam11;
		Global_1373453.f_4453.f_238[iVar0] = iParam12;
		Global_1373453.f_4453.f_271[iVar0] = iParam13;
		Global_1373453.f_4453.f_368[iVar0] = iParam14;
		Global_1373453.f_4453.f_379[iVar0] = iParam15;
		Global_1373453.f_4453.f_390[iVar0] = iParam16;
		Global_1373453.f_4453.f_227[iVar0] = iParam17;
	}
}

void func_63(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1373453.f_6184[iParam0]), iParam1);
}

int func_64(int iParam0, int iParam1)
{
	return IS_BIT_SET(Global_1373453.f_6184[iParam0], iParam1);
}

float func_65(var uParam0)
{
	_BEGIN_TEXT_COMMAND_WIDTH(uParam0);
	return (_END_TEXT_COMMAND_GET_WIDTH(1) / 2f);
}

void func_66()
{
	SET_SCRIPT_GFX_DRAW_ORDER(1);
	if (IS_SCREEN_FADING_OUT() || IS_SCREEN_FADED_OUT())
	{
		SET_SCRIPT_GFX_DRAW_ORDER(7);
	}
	SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(0);
}

void func_67(var uParam0)
{
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam0);
}

float func_68()
{
	float fVar0;
	
	fVar0 = 1f;
	if (IS_PC_VERSION())
	{
	}
	return fVar0;
}

float func_69(float fParam0)
{
	return (fParam0 * 0.001388889f);
}

void func_70(int iParam0)
{
	if (func_30())
	{
		return;
	}
	if (!Global_14553.f_1 == 1)
	{
		if (func_31(0))
		{
			func_27(iParam0);
		}
		SET_BIT(&Global_2424, 2);
	}
}

void func_71(var uParam0)
{
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558)
	{
		uParam0->f_561 = 0;
		uParam0->f_558 = (uParam0->f_572 - 1);
	}
}

bool func_72()
{
	return Global_93721.f_1;
}

void func_73(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, var uParam11, int iParam12, var uParam13, var uParam14, int iParam15, var uParam16, bool bParam17)
{
	func_546(uParam0, uParam1, iParam2, uParam3, uParam4, iParam5, &uParam6, uParam7, uParam8, uParam9, iParam10, uParam11, iParam12, uParam13, uParam14, iParam15, uParam16, bParam17);
}

int func_74(int iParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, float fParam8, int iParam9)
{
	if (!func_254(uParam1, 5))
	{
		CLEAR_HELP(1);
		func_175(uParam1, func_179(iParam0), iParam4, (iParam5 - 1), iParam6, iParam7, fParam8);
		func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 359, 0, 359, 0);
		func_211(uParam1, 5, 1);
		SETTIMERA(0);
	}
	if (!func_254(uParam1, 6))
	{
		if (func_171(&(uParam1->f_26), 0, 0))
		{
			func_211(uParam1, 6, 1);
		}
		else
		{
			return 2;
		}
	}
	if (func_254(uParam1, 27) && IS_PLAYER_ONLINE())
	{
		if (!func_254(uParam1, 26))
		{
			func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 359, 0, 359, 0);
		}
		func_211(uParam1, 27, 0);
	}
	if (TIMERA() > 1000)
	{
		if (*iParam9)
		{
			if (IS_PLAYER_ONLINE())
			{
				func_93(uParam2, iParam0);
				func_89(uParam1);
			}
			else if (func_76(&iLocal_613, 0))
			{
				iLocal_613 = 0;
				*iParam9 = 0;
				func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 359, 0);
			}
		}
		else
		{
			if (!func_254(uParam1, 10))
			{
				PLAY_SOUND_FRONTEND(-1, "BASE_JUMP_PASSED", "HUD_AWARDS", 1);
				func_211(uParam1, 10, 1);
			}
			func_45(&(uParam1->f_26), 0, 1065353216, 0, 1, 0);
			func_89(uParam1);
		}
		if (*iParam9)
		{
			if (IS_PLAYER_ONLINE())
			{
				if (!func_254(uParam1, 28) && func_75(&uLocal_176))
				{
					func_211(uParam1, 28, 1);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 359, 0, 359, 0);
				}
			}
			if (func_319(uParam3, 7, 1000))
			{
				*iParam9 = 0;
				func_204(uParam1, 0, 215, "BJ_CONTINUE", 216, "BJ_RETRY", 211, "HUD_INPUT68", 359, 0);
			}
		}
		else if (func_319(uParam3, 5, 1000))
		{
			func_71(&(uParam1->f_26));
			return 1;
		}
		else if (func_319(uParam3, 4, 1000))
		{
			return 0;
		}
		else if ((!*iParam9 && func_319(uParam3, 8, 1000)) && (!IS_PLAYER_ONLINE() || func_254(uParam1, 26)))
		{
			*iParam9 = 1;
			if (IS_PLAYER_ONLINE())
			{
				if (func_75(&uLocal_176))
				{
					func_211(uParam1, 28, 1);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 217, "SCLB_PROFILE", 359, 0, 359, 0);
				}
				else
				{
					func_211(uParam1, 28, 0);
					func_204(uParam1, 0, 202, "HUD_INPUT53", 359, 0, 359, 0, 359, 0);
				}
			}
		}
	}
	return 2;
}

int func_75(var uParam0)
{
	if ((IS_BIT_SET(uParam0->f_42, 1) && Global_1835392.f_2704[0] > 0) && uParam0->f_246.f_1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_76(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 2;
	if (Global_1840924.f_2 + 5 < GET_FRAME_COUNT() && Global_1840924.f_2 > 0)
	{
		func_88(&Global_1840924);
		func_88(&(Global_1840924.f_49));
		*uParam0 = 0;
		Global_1840924.f_2 = 0;
		func_87(0);
	}
	Global_1840924.f_2 = GET_FRAME_COUNT();
	iVar1 = -1;
	if (IS_ORBIS_VERSION())
	{
		if (_0xBD545D44CCE70597() == 0)
		{
			iVar1 = _0x74FB3E29E6D10FA9();
		}
	}
	if ((IS_ORBIS_VERSION() && (((iVar1 == 4 || iVar1 == 2) || iVar1 == 1) || iVar1 == 5)) || (!func_85() && NETWORK_IS_SIGNED_ONLINE()))
	{
		if (_NETWORK_IS_PSN_AVAILABLE())
		{
			func_82(&(Global_1840924.f_3), func_84(&(Global_1840924.f_3)));
			if (!IS_BIT_SET(*uParam0, 4))
			{
				SET_BIT(uParam0, 4);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_80(&(Global_1840924.f_3), 0);
			}
		}
		else
		{
			if (iVar1 == 4)
			{
				SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_PROFILECHNG", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 2)
			{
				SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_GAMEUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 1)
			{
				SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "HUD_SYSTUPD_G", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (iVar1 == 5)
			{
				SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			else if (!func_85())
			{
				SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_ROS", iVar0, 0, 0, -1, 0, 0, 1, 0);
			}
			if (!IS_BIT_SET(*uParam0, 0))
			{
				if (!IS_CONTROL_PRESSED(2, 201))
				{
					SET_BIT(uParam0, 0);
				}
			}
			else if (IS_CONTROL_JUST_RELEASED(2, 201))
			{
				func_88(&(Global_1840924.f_49));
				func_88(&Global_1840924);
				*uParam0 = 0;
				Global_1840924.f_2 = 0;
				func_87(0);
				return 1;
			}
		}
	}
	else
	{
		func_82(&(Global_1840924.f_3), func_84(&(Global_1840924.f_3)));
		if ((func_79(&(Global_1840924.f_49)) && !func_77(&(Global_1840924.f_49), 2000, 1)) && !NETWORK_IS_SIGNED_ONLINE())
		{
			SET_BIT(uParam0, 3);
			StringCopy(&(Global_1840924.f_3.f_1), "", 64);
			func_80(&(Global_1840924.f_3), 0);
		}
		else if (!IS_BIT_SET(*uParam0, 3))
		{
			if (!IS_BIT_SET(*uParam0, 1))
			{
				DISPLAY_SYSTEM_SIGNIN_UI(0);
				SET_BIT(uParam0, 1);
				StringCopy(&(Global_1840924.f_3.f_1), "", 64);
				func_80(&(Global_1840924.f_3), 0);
			}
		}
		if (func_79(&Global_1840924))
		{
			if (!func_77(&Global_1840924, 4000, 1))
			{
				bVar2 = true;
			}
		}
		if (!bVar2)
		{
			if (bParam1)
			{
				if (!NETWORK_IS_SIGNED_ONLINE())
				{
					if (_0x66B59CFFD78467AF())
					{
						SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "STORE_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					else
					{
						SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
					}
					if (!IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						if (!IS_BIT_SET(*uParam0, 0))
						{
							if (!IS_CONTROL_PRESSED(2, 201))
							{
								SET_BIT(uParam0, 0);
							}
						}
						else if (IS_CONTROL_JUST_RELEASED(2, 201))
						{
							func_88(&Global_1840924);
							*uParam0 = 0;
							Global_1840924.f_2 = 0;
							func_87(0);
							return 1;
						}
					}
				}
				else
				{
					func_88(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_87(0);
					return 1;
				}
			}
			else if (IS_BIT_SET(*uParam0, 3))
			{
				if (_0x66B59CFFD78467AF())
				{
					SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_SIGN_OUT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!IS_BIT_SET(*uParam0, 0))
				{
					if (!IS_CONTROL_PRESSED(2, 201))
					{
						SET_BIT(uParam0, 0);
					}
				}
				else if (IS_CONTROL_JUST_RELEASED(2, 201))
				{
					func_88(&(Global_1840924.f_49));
					func_88(&Global_1840924);
					*uParam0 = 0;
					Global_1840924.f_2 = 0;
					func_87(0);
					return 1;
				}
			}
			else
			{
				if (_0x66B59CFFD78467AF())
				{
					SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NOT_ONL", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				else
				{
					SET_WARNING_MESSAGE_WITH_HEADER("PM_INF_QMFT", "SCLB_NO_INT", iVar0, 0, 0, -1, 0, 0, 1, 0);
				}
				if (!IS_SYSTEM_UI_BEING_DISPLAYED())
				{
					if (!IS_BIT_SET(*uParam0, 0))
					{
						if (!IS_CONTROL_PRESSED(2, 201))
						{
							SET_BIT(uParam0, 0);
						}
					}
					else if (IS_CONTROL_JUST_RELEASED(2, 201))
					{
						func_88(&(Global_1840924.f_49));
						func_88(&Global_1840924);
						*uParam0 = 0;
						Global_1840924.f_2 = 0;
						func_87(0);
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_77(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_78(uParam0, bParam2, 0);
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (ABSI(GET_TIME_DIFFERENCE(GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (ABSI(GET_TIME_DIFFERENCE(GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_78(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
	{
		if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
		{
			if (!bParam2)
			{
				*uParam0 = GET_NETWORK_TIME();
			}
			else
			{
				*uParam0 = GET_NETWORK_TIME_ACCURATE();
			}
		}
		else
		{
			*uParam0 = GET_GAME_TIMER();
		}
		uParam0->f_1 = 1;
	}
}

bool func_79(var uParam0)
{
	return uParam0->f_1;
}

void func_80(var uParam0, bool bParam1)
{
	func_81(uParam0);
	if (bParam1)
	{
		func_87(0);
	}
	uParam0->f_35 = 1;
}

void func_81(var uParam0)
{
	struct<46> Var0;
	
	Var0.f_41 = 1;
	*uParam0 = { Var0 };
}

void func_82(var uParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		*uParam0 = 0;
		func_83(uParam0);
	}
	if (*uParam0 == 0)
	{
		if (uParam0->f_36)
		{
			_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_37)
		{
			_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_39)
		{
			_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			ADD_TEXT_COMPONENT_INTEGER(uParam0->f_33);
			ADD_TEXT_COMPONENT_INTEGER(uParam0->f_34);
			_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_38)
		{
			_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_17));
			_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else if (uParam0->f_40)
		{
			_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam0->f_33, 70);
			_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		else
		{
			_BEGIN_TEXT_COMMAND_BUSY_STRING(&(uParam0->f_1));
			_END_TEXT_COMMAND_BUSY_STRING(uParam0->f_41);
		}
		*uParam0 = 1;
	}
	if (*uParam0 == 1)
	{
	}
}

void func_83(var uParam0)
{
	uParam0->f_35 = 0;
}

int func_84(var uParam0)
{
	return uParam0->f_35;
}

int func_85()
{
	if (func_86())
	{
		return 0;
	}
	if (NETWORK_IS_CLOUD_AVAILABLE() == 0)
	{
		return 0;
	}
	return 1;
}

bool func_86()
{
	return Global_2459114;
}

void func_87(bool bParam0)
{
	_REMOVE_LOADING_PROMPT();
	if (bParam0)
	{
		_0xC65AB383CD91DF98();
	}
}

void func_88(var uParam0)
{
	uParam0->f_1 = 0;
}

void func_89(var uParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;
	
	if (!func_92(uParam0))
	{
		return;
	}
	DRAW_SCALEFORM_MOVIE_FULLSCREEN(*uParam0, 255, 255, 255, 0, 0);
	if (_0x6CD79468A1E595C6(2))
	{
		iVar0 = 0;
		while (iVar0 < uParam0->f_3)
		{
			if (uParam0->f_3[iVar0] != 359)
			{
				uParam0->f_12[iVar0] = GET_CONTROL_INSTRUCTIONAL_BUTTON(2, uParam0->f_3[iVar0], 1);
			}
			iVar0++;
		}
		func_90(&(uParam0->f_1), 4);
	}
	if (!func_23(uParam0->f_1, 4))
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_CLEAR_SPACE");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(200f);
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT_EMPTY");
		END_SCALEFORM_MOVIE_METHOD();
		fVar1 = 0f;
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (!IS_STRING_NULL_OR_EMPTY(uParam0->f_21[iVar2]))
			{
				if (!IS_STRING_NULL_OR_EMPTY(uParam0->f_12[iVar2 + 4]))
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar1);
					func_9(uParam0->f_12[iVar2 + 4]);
					func_9(uParam0->f_12[iVar2]);
					func_14(uParam0->f_21[iVar2]);
					END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(fVar1);
					func_9(uParam0->f_12[iVar2]);
					func_14(uParam0->f_21[iVar2]);
					END_SCALEFORM_MOVIE_METHOD();
				}
				fVar1 = (fVar1 + 1f);
			}
			iVar2++;
		}
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(TO_FLOAT(uParam0->f_2));
		END_SCALEFORM_MOVIE_METHOD();
		BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_BACKGROUND_COLOUR");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0f);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(80f);
		END_SCALEFORM_MOVIE_METHOD();
		func_21(&(uParam0->f_1), 4);
	}
}

void func_90(var uParam0, int iParam1)
{
	func_91(uParam0, iParam1);
}

void func_91(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

int func_92(var uParam0)
{
	if (*uParam0 != 0)
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			func_21(&(uParam0->f_1), 1);
			return 1;
		}
	}
	return 0;
}

void func_93(var uParam0, int iParam1)
{
	func_94(uParam0, &uLocal_176);
}

void func_94(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	var uVar2[3];
	int iVar6;
	bool bVar7;
	bool bVar8;
	char cVar9[64];
	char[] cVar25[8];
	int iVar27[3];
	int iVar31;
	struct<13> Var32;
	var uVar45;
	vector3 vVar51[24];
	vector3 vVar57[24];
	bool bVar63;
	
	func_170(&(Global_1840924.f_49), 1, 0);
	HIDE_HELP_TEXT_THIS_FRAME();
	func_169();
	func_70(0);
	HIDE_HUD_AND_RADAR_THIS_FRAME();
	func_167(1);
	HIDE_HUD_COMPONENT_THIS_FRAME(10);
	func_166(1);
	func_165(1);
	if (!func_162())
	{
		if (!IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
		{
			START_AUDIO_SCENE("LEADERBOARD_SCENE");
		}
	}
	if (!IS_BIT_SET(uParam1->f_42, 3))
	{
		*uParam0 = func_161();
		SET_BIT(&(uParam1->f_42), 3);
	}
	Var32 = { func_56(PLAYER_ID()) };
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		if (((!_NETWORK_ARE_ROS_AVAILABLE() || !IS_PLAYER_ONLINE()) || (!NETWORK_HAVE_ONLINE_PRIVILEGES() && _0x1353F87E89946207())) || Global_1835392.f_2832 != 0)
		{
			if (!IS_PLAYER_ONLINE())
			{
				if (Global_1835392.f_2829 != 2)
				{
					CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 2;
				}
			}
			else if (!NETWORK_HAVE_ONLINE_PRIVILEGES() && _0x1353F87E89946207())
			{
				if (Global_1835392.f_2829 != 3)
				{
					CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 3;
				}
			}
			else if (!_NETWORK_ARE_ROS_AVAILABLE())
			{
				if (Global_1835392.f_2829 != 4)
				{
					CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 4;
				}
			}
			else if (Global_1835392.f_2832 != 0)
			{
				if (Global_1835392.f_2829 != 5)
				{
					CLEAR_BIT(&(uParam1->f_42), 1);
					Global_1835392.f_2829 = 5;
				}
			}
			if (!IS_BIT_SET(uParam1->f_42, 1))
			{
				BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
				END_SCALEFORM_MOVIE_METHOD();
				func_160(*uParam0, Global_1835392.f_2780);
				if (DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
				{
					if (!func_159(uParam1->f_44))
					{
						if (Global_1835392.f_2780.f_26 > 0)
						{
							cVar9 = { Global_1835392.f_2780.f_9 };
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else if (!Global_1835392.f_2780.f_27)
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					else
					{
						StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
						if (Global_1835392.f_2780.f_26 > 0)
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
						}
						else
						{
							func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
						}
					}
					func_157(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
				}
				iVar31 = 0;
				SET_BIT(&iVar31, 4);
				func_156(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				SET_BIT(&iVar31, 5);
				func_156(*uParam0, &iVar6, iVar31, 1, 1);
				iVar31 = 0;
				SET_BIT(&iVar31, 6);
				func_156(*uParam0, &iVar6, iVar31, 1, 1);
				SET_BIT(&(uParam1->f_42), 1);
				func_155(*uParam0);
				CLEAR_BIT(&(uParam1->f_42), 2);
				CLEAR_HELP(1);
			}
			else
			{
				func_155(*uParam0);
			}
		}
		else
		{
			if (Global_1835392.f_2829 != 1)
			{
				CLEAR_BIT(&(uParam1->f_42), 1);
				Global_1835392.f_2829 = 1;
			}
			if (!func_119(uParam1))
			{
				uParam1->f_246.f_1 = -1;
				CLEAR_BIT(&(uParam1->f_42), 1);
				if (!IS_BIT_SET(uParam1->f_42, 0))
				{
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					END_SCALEFORM_MOVIE_METHOD();
					func_160(*uParam0, Global_1835392.f_2780);
					if (DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_159(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_157(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					SET_BIT(&(uParam1->f_42), 0);
					CLEAR_BIT(&(uParam1->f_42), 2);
				}
				iVar6 = 0;
				iVar0 = 0;
				if (Global_1835392.f_2825 == -1)
				{
					StringCopy(&cVar51, "SC_LB_DL0", 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							SET_BIT(&iVar31, 4);
							func_156(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							SET_BIT(&iVar31, 5);
							func_156(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							SET_BIT(&iVar31, 6);
							func_156(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						SET_BIT(&iVar31, 7);
						func_118(*uParam0, iVar6, iVar31, &cVar51);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825 = 1;
					func_88(&(Global_1835392.f_2823));
				}
				else if (func_77(&(Global_1835392.f_2823), 300, 0))
				{
					StringCopy(&cVar57, "SC_LB_DL", 24);
					StringIntConCat(&cVar57, Global_1835392.f_2825, 24);
					iVar0 = 0;
					while (iVar0 < 3)
					{
						if (iVar0 == 0)
						{
							iVar31 = 0;
							SET_BIT(&iVar31, 4);
							func_156(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 1)
						{
							iVar31 = 0;
							SET_BIT(&iVar31, 5);
							func_156(*uParam0, &iVar6, iVar31, 0, 0);
						}
						else if (iVar0 == 2)
						{
							iVar31 = 0;
							SET_BIT(&iVar31, 6);
							func_156(*uParam0, &iVar6, iVar31, 0, 0);
						}
						iVar31 = 0;
						SET_BIT(&iVar31, 7);
						func_118(*uParam0, iVar6, iVar31, &cVar57);
						iVar6++;
						iVar0++;
					}
					Global_1835392.f_2825++;
					if (Global_1835392.f_2825 > 3)
					{
						Global_1835392.f_2825 = 0;
					}
					func_88(&(Global_1835392.f_2823));
				}
				func_155(*uParam0);
			}
			else
			{
				CLEAR_BIT(&(uParam1->f_42), 0);
				if (!IS_BIT_SET(uParam1->f_42, 1))
				{
					iVar0 = 0;
					while (iVar0 < 3)
					{
						uParam1->f_246.f_187[iVar0] = 0;
						iVar0++;
					}
					BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL_SLOTS");
					END_SCALEFORM_MOVIE_METHOD();
					func_160(*uParam0, Global_1835392.f_2780);
					if (DOES_TEXT_LABEL_EXIST(&(Global_1835392.f_2780.f_1)))
					{
						if (!func_159(uParam1->f_44))
						{
							if (Global_1835392.f_2780.f_26 > 0)
							{
								cVar9 = { Global_1835392.f_2780.f_9 };
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &cVar9, 1, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar25, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else if (!Global_1835392.f_2780.f_27)
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB5", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						else
						{
							StringCopy(&cVar9, "FMMC_COR_SCLB6", 64);
							if (Global_1835392.f_2780.f_26 > 0)
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, Global_1835392.f_2780.f_26);
							}
							else
							{
								func_158(*uParam0, &(Global_1835392.f_2780.f_1), &cVar9, &(Global_1835392.f_2780.f_9), Global_1835392.f_2780.f_25, -1);
							}
						}
						func_157(*uParam0, "SCLB_C_RANK", &(Global_1835392.f_2717), Global_1835392.f_2708);
					}
					if (!IS_BIT_SET(uParam1->f_42, 6))
					{
						func_117(&Global_1839723);
						func_113(uParam1, &Global_1839723);
						func_112(uParam1, &Global_1839723);
					}
					iVar6 = 0;
					uParam1->f_246.f_2 = 0;
					if ((Global_1835392.f_2704[0] > 1 || (Global_1835392.f_2704[0] > 0 && Global_1835392.f_2775[0] != -1)) || (((Global_1835392.f_2704[0] > 0 && Global_1835392.f_2780.f_27) && func_159(uParam1->f_44)) && Global_1835392.f_2775[0] != -1))
					{
						uParam1->f_246.f_1 = -1;
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 12)
						{
							bVar63 = false;
							if (Global_1839723[iVar0 /*100*/].f_75 == 1)
							{
								if (!iVar27[0])
								{
									iVar31 = 0;
									SET_BIT(&iVar31, 4);
									func_156(*uParam0, &iVar6, iVar31, 0, 0);
									iVar27[0] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 2)
							{
								if (!iVar27[1])
								{
									iVar31 = 0;
									SET_BIT(&iVar31, 5);
									if ((Global_1835392.f_2704[1] < 1 && Global_1835392.f_2775[1] == -1) && !(((Global_1835392.f_2704[1] > 0 && Global_1835392.f_2780.f_27) && func_159(uParam1->f_44)) && Global_1835392.f_2775[1] != -1))
									{
										func_156(*uParam0, &iVar6, iVar31, 1, 0);
										bVar63 = true;
									}
									else
									{
										func_156(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[1] = 1;
								}
							}
							else if (Global_1839723[iVar0 /*100*/].f_75 == 3)
							{
								if (!iVar27[2])
								{
									iVar31 = 0;
									SET_BIT(&iVar31, 6);
									if (!_0x67A5589628E0CFF6())
									{
										bVar63 = true;
									}
									else if (!_0xBA9775570DB788CF())
									{
										bVar63 = true;
									}
									if ((Global_1835392.f_2704[2] < 2 && Global_1835392.f_2775[2] == -1) && !(((Global_1835392.f_2704[2] > 0 && Global_1835392.f_2780.f_27) && func_159(uParam1->f_44)) && Global_1835392.f_2775[2] != -1))
									{
										bVar63 = true;
									}
									if (bVar63)
									{
										func_156(*uParam0, &iVar6, iVar31, 1, 0);
									}
									else
									{
										func_156(*uParam0, &iVar6, iVar31, 0, 0);
									}
									iVar27[2] = 1;
								}
							}
							if (func_111(Global_1839723[iVar0 /*100*/].f_32))
							{
								if (func_159(uParam1->f_44))
								{
									NETWORK_PLAYER_GET_USERID(PLAYER_ID(), &uVar45);
									if (!Global_1839723[iVar0 /*100*/].f_74 && ARE_STRINGS_EQUAL(&(uParam1->f_44.f_3.f_1[1 /*16*/].f_8), &uVar45))
									{
										bVar63 = true;
									}
								}
								if (!bVar63)
								{
									iVar31 = 0;
									if (!Global_1835392.f_2780.f_27)
									{
										if (func_110(&(Global_1839723[iVar0 /*100*/].f_32), &Var32))
										{
											SET_BIT(&iVar31, 1);
											if (uParam1->f_246.f_1 == -1)
											{
												bVar7 = true;
												uParam1->f_246.f_1 = iVar0;
												SET_BIT(&iVar31, 3);
											}
										}
									}
									if (func_159(uParam1->f_44))
									{
										cVar9 = { Global_1839723[iVar0 /*100*/] };
										if (!IS_STRING_NULL_OR_EMPTY(&(Global_1839723[iVar0 /*100*/].f_84)) && !ARE_STRINGS_EQUAL(&(Global_1839723[iVar0 /*100*/].f_84), ""))
										{
											StringConCat(&cVar9, "/", 64);
											StringConCat(&cVar9, &(Global_1839723[iVar0 /*100*/].f_84), 64);
										}
										func_109(*uParam0, iVar6, iVar31, Global_1839723[iVar0 /*100*/].f_59, &cVar9, &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									else
									{
										func_109(*uParam0, iVar6, iVar31, Global_1839723[iVar0 /*100*/].f_59, &(Global_1839723[iVar0 /*100*/]), &(Global_1839723[iVar0 /*100*/].f_80));
										uParam1->f_246.f_6[iVar0 /*15*/] = iVar6;
										uParam1->f_246.f_6[iVar0 /*15*/].f_1 = iVar31;
										uParam1->f_246.f_6[iVar0 /*15*/].f_2 = { Global_1839723[iVar0 /*100*/].f_32 };
										uParam1->f_246.f_2++;
									}
									iVar1 = 0;
									while (iVar1 < Global_1835392.f_2708)
									{
										bVar8 = false;
										if (IS_BIT_SET(Global_1835392.f_2770, iVar1))
										{
											if (IS_BIT_SET(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2754[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_103(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], 0, Global_1839723[iVar0 /*100*/].f_58);
											}
											else
											{
												func_103(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_67[iVar1], Global_1839723[iVar0 /*100*/].f_74, Global_1839723[iVar0 /*100*/].f_58);
											}
										}
										else
										{
											if (IS_BIT_SET(Global_1835392.f_2768, iVar1))
											{
												if (Global_1835392.f_2761[iVar1] == Global_1839723[iVar0 /*100*/].f_67[iVar1])
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_100(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], 0);
											}
											else
											{
												func_100(Global_1835392.f_2780, iVar1, Global_1839723[iVar0 /*100*/].f_60[iVar1], Global_1839723[iVar0 /*100*/].f_74);
											}
										}
										iVar1++;
									}
									func_99();
									uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)]++;
									if (uVar2[(Global_1839723[iVar0 /*100*/].f_75 - 1)] == 2)
									{
										if (Global_1839723[iVar0 /*100*/].f_59 > 2)
										{
											SET_BIT(&iVar31, 2);
											SET_BIT(&(uParam1->f_246.f_6[0 /*15*/].f_1), 2);
											func_98(*uParam0, (iVar6 - 1), iVar31);
										}
									}
									iVar6++;
								}
							}
							iVar0++;
						}
						iVar0 = 0;
						iVar0 = 0;
						while (iVar0 < 3)
						{
							uParam1->f_246.f_187[iVar0] = uVar2[iVar0];
							iVar0++;
						}
					}
					else
					{
						iVar31 = 0;
						SET_BIT(&iVar31, 4);
						func_156(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						SET_BIT(&iVar31, 5);
						func_156(*uParam0, &iVar6, iVar31, 1, 0);
						iVar31 = 0;
						SET_BIT(&iVar31, 6);
						func_156(*uParam0, &iVar6, iVar31, 1, 0);
					}
					SET_BIT(&(uParam1->f_42), 1);
					CLEAR_BIT(&(uParam1->f_42), 2);
					func_155(*uParam0);
					CLEAR_HELP(1);
					if (uParam1->f_246.f_1 == -1 && !bVar7 == 1)
					{
						if (Global_1835392.f_2704[0] > 1)
						{
							uParam1->f_246.f_1 = 0;
							SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
							func_98(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
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

void func_95(var uParam0, var uParam1)
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
	
	iVar1 = uParam1->f_246.f_1;
	if (_IS_INPUT_DISABLED(2))
	{
		_SHOW_CURSOR_THIS_FRAME();
		SET_INPUT_EXCLUSIVE(2, 239);
		SET_INPUT_EXCLUSIVE(2, 240);
		SET_INPUT_EXCLUSIVE(2, 237);
		SET_INPUT_EXCLUSIVE(2, 238);
		DISABLE_CONTROL_ACTION(2, 200, 1);
		if (IS_DISABLED_CONTROL_PRESSED(2, 241))
		{
			_SET_CONTROL_NORMAL(2, 188, 1f);
		}
		if (IS_DISABLED_CONTROL_PRESSED(2, 242))
		{
			_SET_CONTROL_NORMAL(2, 187, 1f);
		}
		if (_0x632B2940C67F4EA9(*uParam0, &iVar2, &iVar3, &uVar4))
		{
			if (iVar2 == 5)
			{
				if (iVar3 > uParam1->f_246.f_187[0])
				{
					if (iVar3 <= (uParam1->f_246.f_187[0] + uParam1->f_246.f_187[1]) + 2)
					{
						iVar3 = (iVar3 - 2);
					}
					else
					{
						iVar3 = (iVar3 - 4);
					}
				}
				iVar3 = (iVar3 - 1);
				if (uParam1->f_246.f_1 != iVar3)
				{
					uParam1->f_246.f_1 = iVar3;
					PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
					bVar0 = true;
				}
				else
				{
					_SET_CONTROL_NORMAL(2, 217, 1f);
				}
			}
		}
	}
	if (!_IS_INPUT_DISABLED(2))
	{
		func_97(&uVar5, &iVar6, &uVar7, &uVar8, 0);
	}
	if (uParam1->f_246.f_2 > 0)
	{
		if (!IS_BIT_SET(uParam1->f_246, 0))
		{
			if ((IS_CONTROL_PRESSED(2, 188) || IS_DISABLED_CONTROL_PRESSED(2, 188)) || iVar6 < -100)
			{
				PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1 = (uParam1->f_246.f_1 + -1);
				SET_BIT(&(uParam1->f_246), 0);
				func_88(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_96(uParam1, 188))
		{
			CLEAR_BIT(&(uParam1->f_246), 0);
		}
		if (!IS_BIT_SET(uParam1->f_246, 1))
		{
			if ((IS_CONTROL_PRESSED(2, 187) || IS_DISABLED_CONTROL_PRESSED(2, 187)) || iVar6 > 100)
			{
				PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", 1);
				uParam1->f_246.f_1++;
				SET_BIT(&(uParam1->f_246), 1);
				func_88(&(uParam1->f_246.f_3));
				bVar0 = true;
			}
		}
		else if (func_96(uParam1, 187))
		{
			CLEAR_BIT(&(uParam1->f_246), 1);
		}
	}
	if (bVar0)
	{
		if (uParam1->f_246.f_1 < 0)
		{
			uParam1->f_246.f_1 = (uParam1->f_246.f_2 - 1);
		}
		if (uParam1->f_246.f_1 >= uParam1->f_246.f_2)
		{
			uParam1->f_246.f_1 = 0;
		}
	}
	if (!IS_BIT_SET(uParam1->f_246, 3))
	{
		if ((IS_CONTROL_PRESSED(2, 204) || IS_DISABLED_CONTROL_JUST_PRESSED(2, 204)) || IS_CONTROL_JUST_PRESSED(2, 237))
		{
			SET_BIT(&(uParam1->f_246), 3);
			func_88(&(uParam1->f_246.f_3));
			bVar0 = true;
		}
	}
	else if (func_96(uParam1, 204))
	{
		CLEAR_BIT(&(uParam1->f_246), 3);
	}
	if (uParam1->f_246.f_1 >= 0)
	{
		if (uParam1->f_246.f_1 != iVar1)
		{
			if (iVar1 >= 0)
			{
				CLEAR_BIT(&(uParam1->f_246.f_6[iVar1 /*15*/].f_1), 3);
				func_98(*uParam0, uParam1->f_246.f_6[iVar1 /*15*/], uParam1->f_246.f_6[iVar1 /*15*/].f_1);
			}
			SET_BIT(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1), 3);
			func_98(*uParam0, uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/], uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_1);
			CLEAR_BIT(&(uParam1->f_42), 2);
		}
		if (func_111(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2))
		{
			if (!IS_BIT_SET(uParam1->f_246, 2))
			{
				if (IS_CONTROL_PRESSED(2, 217) || IS_DISABLED_CONTROL_JUST_PRESSED(2, 217))
				{
					if (!IS_SYSTEM_UI_BEING_DISPLAYED())
					{
						PLAY_SOUND_FRONTEND(-1, "SELECT", "HUD_FRONTEND_MP_SOUNDSET", 1);
						SET_BIT(&(uParam1->f_246), 2);
						NETWORK_SHOW_PROFILE_UI(&(uParam1->f_246.f_6[uParam1->f_246.f_1 /*15*/].f_2));
					}
				}
			}
			else if (!IS_CONTROL_PRESSED(2, 217))
			{
				CLEAR_BIT(&(uParam1->f_246), 2);
			}
		}
	}
}

int func_96(var uParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;
	var uVar3;
	
	if (iParam1 == 188 || iParam1 == 187)
	{
		func_97(&uVar0, &iVar1, &uVar2, &uVar3, 0);
		if (((!IS_CONTROL_PRESSED(2, iParam1) && !IS_DISABLED_CONTROL_PRESSED(2, iParam1)) && (iVar1 < 75 && iVar1 > -75)) || func_77(&(uParam0->f_246.f_3), 250, 0))
		{
			return 1;
		}
	}
	else if ((!IS_CONTROL_PRESSED(2, iParam1) && !IS_DISABLED_CONTROL_PRESSED(2, iParam1)) || func_77(&(uParam0->f_246.f_3), 250, 0))
	{
		return 1;
	}
	return 0;
}

void func_97(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	*uParam0 = FLOOR((GET_CONTROL_NORMAL(2, 218) * 127f));
	*uParam1 = FLOOR((GET_CONTROL_NORMAL(2, 219) * 127f));
	*uParam2 = FLOOR((GET_CONTROL_NORMAL(2, 220) * 127f));
	*uParam3 = FLOOR((GET_CONTROL_NORMAL(2, 221) * 127f));
	if (bParam4)
	{
		if (IntToFloat(*uParam0) == 0f && IntToFloat(*uParam1) == 0f)
		{
			*uParam0 = FLOOR((GET_DISABLED_CONTROL_NORMAL(2, 218) * 127f));
			*uParam1 = FLOOR((GET_DISABLED_CONTROL_NORMAL(2, 219) * 127f));
		}
		if (IntToFloat(*uParam2) == 0f && IntToFloat(*uParam3) == 0f)
		{
			*uParam2 = FLOOR((GET_DISABLED_CONTROL_NORMAL(2, 220) * 127f));
			*uParam3 = FLOOR((GET_DISABLED_CONTROL_NORMAL(2, 221) * 127f));
		}
	}
}

void func_98(var uParam0, int iParam1, int iParam2)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT_STATE");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	END_SCALEFORM_MOVIE_METHOD();
}

void func_99()
{
	END_SCALEFORM_MOVIE_METHOD();
}

void func_100(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, float fParam44, bool bParam45)
{
	switch (Param0.f_29[iParam43])
	{
		case 4:
			if (bParam45)
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 12:
			if (bParam45)
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				ADD_TEXT_COMPONENT_INTEGER(FLOOR(fParam44));
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 17:
		case 19:
		case 18:
		case 20:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 18 || Param0.f_29[iParam43] == 20)
				{
					fParam44 = (fParam44 * -1f);
				}
				if (!SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_29[iParam43] == 19 || Param0.f_29[iParam43] == 20)
					{
						fParam44 = func_102(fParam44);
					}
					else
					{
						fParam44 = func_101(fParam44);
					}
				}
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				ADD_TEXT_COMPONENT_FLOAT(fParam44, 2);
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

float func_101(float fParam0)
{
	return (fParam0 / 0.3048f);
}

float func_102(float fParam0)
{
	return (fParam0 / 1609.344f);
}

void func_103(struct<30> Param0, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, int iParam43, int iParam44, bool bParam45, bool bParam46)
{
	struct<4> Var0;
	
	if (iParam44 == 2147483647 || iParam44 == -2147483647)
	{
		bParam45 = false;
	}
	StringCopy(&Var0, "", 16);
	switch (Param0.f_29[iParam43])
	{
		case 5:
			if (bParam45)
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				ADD_TEXT_COMPONENT_INTEGER(iParam44);
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 7:
			if (bParam45)
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				ADD_TEXT_COMPONENT_INTEGER(-iParam44);
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 1:
		case 9:
		case 11:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 11 && iParam44 < 0)
				{
					iParam44 = (iParam44 * -1);
				}
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[iParam43] == 9)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 6);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 6:
			if (bParam45)
			{
				if (iParam44 == 2147483647)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 2:
		case 10:
			if (bParam45)
			{
				iParam44 = (iParam44 * -1);
				if (iParam44 >= 3600000 || iParam44 <= -3600000)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 14);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else if (Param0.f_29[iParam43] == 10)
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 6);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
					ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam44, 2055);
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 3:
			if (bParam46)
			{
				if (IS_MODEL_IN_CDIMAGE(iParam44))
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SCLB_VEH_CUST");
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam44));
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				else
				{
					BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
					END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			}
			else if (IS_MODEL_IN_CDIMAGE(iParam44))
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING(GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(iParam44));
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 8:
			if (func_108(iParam44) != 0)
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING(func_105(func_108(iParam44), 0));
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 13:
		case 15:
		case 14:
		case 16:
			if (bParam45)
			{
				if (Param0.f_29[iParam43] == 14 || Param0.f_29[iParam43] == 16)
				{
					iParam44 = (iParam44 * -1);
				}
				if (!SHOULD_USE_METRIC_MEASUREMENTS())
				{
					if (Param0.f_29[iParam43] == 15 || Param0.f_29[iParam43] == 16)
					{
						iParam44 = FLOOR(func_102(TO_FLOAT(iParam44)));
					}
					else
					{
						iParam44 = FLOOR(func_101(TO_FLOAT(iParam44)));
					}
				}
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
				ADD_TEXT_COMPONENT_INTEGER(iParam44);
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 21:
			if (iParam44 > 20)
			{
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			else
			{
				Var0 = { func_104(iParam44) };
				BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Var0);
				END_TEXT_COMMAND_SCALEFORM_STRING();
			}
			break;
		
		case 0:
			break;
	}
}

struct<4> func_104(int iParam0)
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

char* func_105(int iParam0, bool bParam1)
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
		
		case joaat("ammo_rpg"):
			if (bParam1)
			{
				return "WTU_A_RPG";
			}
			else
			{
				return "WT_A_RPG";
			}
			break;
		
		case joaat("ammo_tank"):
			if (bParam1)
			{
				return "WTU_A_TANK";
			}
			else
			{
				return "WT_A_TANK";
			}
			break;
		
		case joaat("ammo_space_rocket"):
			if (bParam1)
			{
				return "WTU_A_SPACERKT";
			}
			else
			{
				return "WT_A_SPACERKT";
			}
			break;
		
		case joaat("ammo_player_laser"):
			if (bParam1)
			{
				return "WTU_A_PLRLSR";
			}
			else
			{
				return "WT_A_PLRLSR";
			}
			break;
		
		case joaat("ammo_enemy_laser"):
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
		
		case joaat("weapon_autoshotgun"):
			if (bParam1)
			{
				return "WTU_AUTOSHGN";
			}
			else
			{
				return "WT_AUTOSHGN";
			}
			break;
		
		case joaat("weapon_battleaxe"):
			if (bParam1)
			{
				return "WTU_BATTLEAXE";
			}
			else
			{
				return "WT_BATTLEAXE";
			}
			break;
		
		case joaat("weapon_compactlauncher"):
			if (bParam1)
			{
				return "WTU_CMPGL";
			}
			else
			{
				return "WT_CMPGL";
			}
			break;
		
		case joaat("weapon_minismg"):
			if (bParam1)
			{
				return "WTU_MINISMG";
			}
			else
			{
				return "WT_MINISMG";
			}
			break;
		
		case joaat("weapon_pipebomb"):
			if (bParam1)
			{
				return "WTU_PIPEBOMB";
			}
			else
			{
				return "WT_PIPEBOMB";
			}
			break;
		
		case joaat("weapon_poolcue"):
			if (bParam1)
			{
				return "WTU_POOLCUE";
			}
			else
			{
				return "WT_POOLCUE";
			}
			break;
		
		case joaat("weapon_wrench"):
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
		
		case -159960575:
			return "WT_VEH_WEP";
			break;
		
		case joaat("weapon_pistol_mk2"):
			if (bParam1)
			{
				return "WTU_PIST2";
			}
			else
			{
				return "WT_PIST2";
			}
			break;
		
		case joaat("weapon_smg_mk2"):
			if (bParam1)
			{
				return "WTU_SMG2";
			}
			else
			{
				return "WT_SMG2";
			}
			break;
		
		case joaat("weapon_heavysniper_mk2"):
			if (bParam1)
			{
				return "WTU_SNIP_HVY2";
			}
			else
			{
				return "WT_SNIP_HVY2";
			}
			break;
		
		case joaat("weapon_combatmg_mk2"):
			if (bParam1)
			{
				return "WTU_MG_CBT2";
			}
			else
			{
				return "WT_MG_CBT2";
			}
			break;
		
		case joaat("weapon_assaultrifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_ASL2";
			}
			else
			{
				return "WT_RIFLE_ASL2";
			}
			break;
		
		case joaat("weapon_carbinerifle_mk2"):
			if (bParam1)
			{
				return "WTU_RIFLE_CBN2";
			}
			else
			{
				return "WT_RIFLE_CBN2";
			}
			break;
		
		case joaat("weapon_pumpshotgun_mk2"):
			if (bParam1)
			{
				return "WTU_SG_PMP2";
			}
			else
			{
				return "WT_SG_PMP2";
			}
			break;
		
		case joaat("weapon_specialcarbine_mk2"):
			if (bParam1)
			{
				return "WTU_SPCARBINE2";
			}
			else
			{
				return "WT_SPCARBINE2";
			}
			break;
		
		case joaat("weapon_snspistol_mk2"):
			if (bParam1)
			{
				return "WTU_SNSPISTOL2";
			}
			else
			{
				return "WT_SNSPISTOL2";
			}
			break;
		
		case joaat("weapon_marksmanrifle_mk2"):
			if (bParam1)
			{
				return "WTU_MKRIFLE2";
			}
			else
			{
				return "WT_MKRIFLE2";
			}
			break;
		
		case joaat("weapon_revolver_mk2"):
			if (bParam1)
			{
				return "WTU_REVOLVER2";
			}
			else
			{
				return "WT_REVOLVER2";
			}
			break;
		
		case joaat("weapon_bullpuprifle_mk2"):
			if (bParam1)
			{
				return "WTU_BULLRIFLE2";
			}
			else
			{
				return "WT_BULLRIFLE2";
			}
			break;
		
		case joaat("weapon_doubleaction"):
			if (bParam1)
			{
				return "WTU_REV_DA";
			}
			else
			{
				return "WT_REV_DA";
			}
			break;
		
		case joaat("weapon_stone_hatchet"):
			if (bParam1)
			{
				return "WTU_SHATCHET";
			}
			else
			{
				return "WT_SHATCHET";
			}
			break;
		
		case joaat("weapon_raypistol"):
			if (bParam1)
			{
				return "WTU_RAYPISTOL";
			}
			else
			{
				return "WT_RAYPISTOL";
			}
			break;
		
		case joaat("weapon_raycarbine"):
			if (bParam1)
			{
				return "WTU_RAYCARBINE";
			}
			else
			{
				return "WT_RAYCARBINE";
			}
			break;
		
		case joaat("weapon_rayminigun"):
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
			if (func_107(iParam0, &Var0) != -1)
			{
				if (bParam1)
				{
					return func_106(&(Var0.f_31));
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

var func_106(var uParam0)
{
	return uParam0;
}

int func_107(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = GET_NUM_DLC_WEAPONS();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (GET_DLC_WEAPON_DATA(iVar0, uParam1))
		{
			if (uParam1->f_1 == iParam0)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_108(int iParam0)
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
		return -572349828;
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
		return -947031628;
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

void func_109(var uParam0, int iParam1, int iParam2, int iParam3, char[4] cParam4, var uParam5)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (iParam3 > 0)
	{
		BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
		ADD_TEXT_COMPONENT_INTEGER(iParam3);
		END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		BEGIN_TEXT_COMMAND_SCALEFORM_STRING("SC_LB_EMPTY");
		END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(cParam4);
	_PUSH_SCALEFORM_MOVIE_METHOD_PARAMETER_BUTTON_NAME(uParam5);
}

int func_110(var uParam0, var uParam1)
{
	if (!func_111(*uParam0))
	{
		return 0;
	}
	if (!func_111(*uParam1))
	{
		return 0;
	}
	if (NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1))
	{
		return 1;
	}
	return 0;
}

bool func_111(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12)
{
	return NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

void func_112(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	var uVar77;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	if (!IS_BIT_SET(uParam0->f_42, 5) && !IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if ((uParam1[iVar0 /*100*/])->f_75 != 0)
			{
				iVar1 = iVar0 + 1;
				while (iVar1 <= 11)
				{
					if ((uParam1[iVar1 /*100*/])->f_75 != 0)
					{
						if ((uParam1[iVar1 /*100*/])->f_75 < (uParam1[iVar0 /*100*/])->f_75)
						{
							uVar77 = (uParam1[iVar1 /*100*/])->f_75;
							(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
							(uParam1[iVar0 /*100*/])->f_75 = uVar77;
							Var2 = { *(uParam1[iVar1 /*100*/]) };
							*(uParam1[iVar1 /*100*/]) = { *(uParam1[iVar0 /*100*/]) };
							*(uParam1[iVar0 /*100*/]) = { Var2 };
						}
						else if ((uParam1[iVar1 /*100*/])->f_75 == (uParam1[iVar0 /*100*/])->f_75)
						{
							if ((uParam1[iVar1 /*100*/])->f_59 != -1)
							{
								if ((uParam1[iVar1 /*100*/])->f_59 < (uParam1[iVar0 /*100*/])->f_59 || (uParam1[iVar0 /*100*/])->f_59 == -1)
								{
									uVar77 = (uParam1[iVar1 /*100*/])->f_75;
									(uParam1[iVar1 /*100*/])->f_75 = (uParam1[iVar0 /*100*/])->f_75;
									(uParam1[iVar0 /*100*/])->f_75 = uVar77;
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

void func_113(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	int iVar4;
	
	if (!IS_BIT_SET(uParam0->f_42, 5) && !IS_BIT_SET(uParam0->f_42, 6))
	{
		iVar4 = 0;
		while (iVar4 < 12)
		{
			if (func_116(uParam1, iVar3, &uVar0, 0))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 1;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_116(uParam1, iVar3, &uVar1, 1))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 2;
				iVar3++;
				if (iVar3 >= 12)
				{
					return;
				}
			}
			if (func_116(uParam1, iVar3, &uVar2, 2))
			{
				(uParam1[iVar3 /*100*/])->f_75 = 3;
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

void func_114(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar16;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2704[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = -1;
		iVar0++;
	}
	Var3 = { func_56(PLAYER_ID()) };
	if (LEADERBOARDS_GET_CACHE_EXISTS(Global_1835392.f_2826))
	{
		iVar16 = _0x58A651CD201D89AD(Global_1835392.f_2826);
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < iVar16)
		{
			if (iVar0 < 12)
			{
				func_115(&Global_1839593);
				iVar2 = 0;
				LEADERBOARDS_GET_CACHE_DATA_ROW(Global_1835392.f_2826, iVar0, &Global_1839593);
				*(uParam0[iVar0 /*100*/]) = { Global_1839593.f_1 };
				(uParam0[iVar0 /*100*/])->f_16 = { Global_1839593.f_17 };
				(uParam0[iVar0 /*100*/])->f_32 = { Global_1839593.f_33 };
				(uParam0[iVar0 /*100*/])->f_45 = { Global_1839593.f_46 };
				(uParam0[iVar0 /*100*/])->f_58 = Global_1839593.f_59;
				(uParam0[iVar0 /*100*/])->f_59 = Global_1839593.f_60;
				Global_1835392.f_2708 = Global_1839593.f_62;
				Global_1835392.f_2769 = Global_1839593.f_63;
				iVar2 = 0;
				if (IS_BIT_SET(Global_1839593.f_61, 1))
				{
					iVar2 = 1;
				}
				else if (IS_BIT_SET(Global_1839593.f_61, 2))
				{
					iVar2 = 2;
				}
				else if (IS_BIT_SET(Global_1839593.f_61, 3))
				{
					iVar2 = 3;
				}
				Global_1835392.f_2704[(iVar2 - 1)]++;
				(uParam0[iVar0 /*100*/])->f_75 = iVar2;
				if ((uParam0[iVar0 /*100*/])->f_59 != -1)
				{
					if (IS_BIT_SET(Global_1839593.f_61, 0))
					{
						(uParam0[iVar0 /*100*/])->f_74 = 1;
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_74 = 0;
					}
					if (func_110(&((uParam0[iVar0 /*100*/])->f_32), &Var3))
					{
						Global_1835392.f_2775[(iVar2 - 1)] = 0;
					}
				}
				iVar1 = 0;
				while (iVar1 < Global_1839593.f_62)
				{
					if (IS_BIT_SET(Global_1839593.f_63, iVar1))
					{
						(uParam0[iVar0 /*100*/])->f_67[iVar1] = Global_1839593.f_97[iVar1];
					}
					else
					{
						(uParam0[iVar0 /*100*/])->f_60[iVar1] = Global_1839593.f_64[iVar1];
					}
					iVar1++;
				}
			}
			iVar0++;
		}
	}
}

void func_115(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 64);
	StringCopy(&(uParam0->f_17), "", 64);
	uParam0->f_33 = { Var0 };
	uParam0->f_46 = { Var0 };
	uParam0->f_59 = 0;
	uParam0->f_60 = 0;
	uParam0->f_61 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	iVar13 = 0;
	while (iVar13 < 32)
	{
		uParam0->f_64[iVar13] = 0f;
		uParam0->f_97[iVar13] = 0;
		iVar13++;
	}
}

int func_116(var uParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	if (*uParam2 == 0)
	{
		if (Global_1835392[iParam3 /*901*/][0 /*75*/].f_59 > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536[iParam3 /*16*/] = { Global_1835392[iParam3 /*901*/][0 /*75*/] };
			Global_1839536.f_49[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_67[Global_1835392.f_2779];
			Global_1839536.f_53[iParam3] = Global_1835392[iParam3 /*901*/][0 /*75*/].f_60[Global_1835392.f_2779];
			*uParam2++;
			return 1;
		}
	}
	else if (*uParam2 == 1)
	{
		if (Global_1835392.f_2775[iParam3] > 0)
		{
			*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][Global_1835392.f_2775[iParam3] /*75*/] };
			*uParam2++;
			return 1;
		}
		else
		{
			if (Global_1835392.f_2775[iParam3] < 0)
			{
				StringCopy(uParam0[iParam1 /*100*/], GET_PLAYER_NAME(PLAYER_ID()), 64);
				(uParam0[iParam1 /*100*/])->f_32 = { func_56(PLAYER_ID()) };
				(uParam0[iParam1 /*100*/])->f_59 = -1;
				(uParam0[iParam1 /*100*/])->f_67[0] = -1;
				(uParam0[iParam1 /*100*/])->f_67[1] = -1;
				(uParam0[iParam1 /*100*/])->f_67[2] = -1;
				(uParam0[iParam1 /*100*/])->f_67[3] = -1;
				(uParam0[iParam1 /*100*/])->f_60[0] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[1] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[2] = -1f;
				(uParam0[iParam1 /*100*/])->f_60[3] = -1f;
				*uParam2++;
				return 1;
			}
			*uParam2++;
		}
	}
	else if ((*uParam2 % 2) == 0)
	{
		iVar0 = (*uParam2 / 2);
		if ((Global_1835392.f_2775[iParam3] - iVar0) >= 1)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/].f_59 > 0)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] - iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	else
	{
		iVar0 = FLOOR(TO_FLOAT((*uParam2 / 2)));
		if ((Global_1835392.f_2775[iParam3] + iVar0) < 12 && (Global_1835392.f_2775[iParam3] + iVar0) > 0)
		{
			if (Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/].f_59 > 1)
			{
				*(uParam0[iParam1 /*100*/]) = { Global_1835392[iParam3 /*901*/][(Global_1835392.f_2775[iParam3] + iVar0) /*75*/] };
				*uParam2++;
				return 1;
			}
		}
	}
	*uParam2++;
	return 0;
}

void func_117(var uParam0)
{
	struct<13> Var0;
	int iVar13;
	int iVar14;
	
	iVar13 = 0;
	while (iVar13 < 12)
	{
		StringCopy(uParam0[iVar13 /*100*/], "", 64);
		StringCopy(&((uParam0[iVar13 /*100*/])->f_16), "", 64);
		(uParam0[iVar13 /*100*/])->f_32 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_45 = { Var0 };
		(uParam0[iVar13 /*100*/])->f_58 = 0;
		(uParam0[iVar13 /*100*/])->f_59 = 0;
		iVar14 = 0;
		while (iVar14 < 6)
		{
			(uParam0[iVar13 /*100*/])->f_60[iVar14] = 0f;
			(uParam0[iVar13 /*100*/])->f_67[iVar14] = 0;
			iVar14++;
		}
		(uParam0[iVar13 /*100*/])->f_75 = 0;
		(uParam0[iVar13 /*100*/])->f_74 = 0;
		(uParam0[iVar13 /*100*/])->f_76 = 0;
		(uParam0[iVar13 /*100*/])->f_77 = 0;
		(uParam0[iVar13 /*100*/])->f_78 = 0;
		(uParam0[iVar13 /*100*/])->f_79 = 0;
		StringCopy(&((uParam0[iVar13 /*100*/])->f_80), "", 16);
		iVar13++;
	}
	func_88(&(Global_1835392.f_2830));
}

void func_118(var uParam0, int iParam1, int iParam2, char[4] cParam3)
{
	SET_BIT(&iParam2, 7);
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(cParam3);
	_END_TEXT_COMMAND_SCALEFORM_STRING_2();
	END_SCALEFORM_MOVIE_METHOD();
}

int func_119(var uParam0)
{
	if (!Global_1835388)
	{
		if (!func_79(&(Global_1835392.f_2827)))
		{
			func_78(&(Global_1835392.f_2827), 1, 0);
			return 0;
		}
		else if (!func_77(&(Global_1835392.f_2827), 1000, 1))
		{
			return 0;
		}
	}
	if (((!_NETWORK_ARE_ROS_AVAILABLE() || !IS_PLAYER_ONLINE()) || (!NETWORK_HAVE_ONLINE_PRIVILEGES() && _0x1353F87E89946207())) || Global_1835392.f_2832 != 0)
	{
		CLEAR_BIT(&(uParam0->f_42), 4);
		return 1;
	}
	if (!IS_BIT_SET(uParam0->f_42, 4))
	{
		func_154(uParam0);
		SET_BIT(&(uParam0->f_42), 4);
		return 0;
	}
	else if (IS_BIT_SET(uParam0->f_42, 5))
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
	if (!IS_BIT_SET(uParam0->f_42, 6))
	{
		func_117(&Global_1839723);
		func_113(uParam0, &Global_1839723);
		func_112(uParam0, &Global_1839723);
		SET_BIT(&(uParam0->f_42), 6);
	}
	if (!IS_BIT_SET(uParam0->f_42, 7))
	{
		if (!func_79(&(Global_1835392.f_2830)))
		{
			func_78(&(Global_1835392.f_2830), 1, 0);
		}
		else if (func_77(&(Global_1835392.f_2830), 30000, 1))
		{
			SET_BIT(&(uParam0->f_42), 7);
		}
		if (func_133(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_130(&Global_1839723))
		{
		}
		else
		{
			return 0;
		}
		if (func_124(&Global_1839723))
		{
			func_120(&Global_1839723);
			SET_BIT(&(uParam0->f_42), 7);
			func_120(&Global_1839723);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_120(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar2 = func_123(Global_1835392.f_2826);
	if (Global_1838577.f_81[iVar2] != 0)
	{
		func_122(-1, iVar2);
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_115(&Global_1839593);
		if ((uParam0[iVar0 /*100*/])->f_75 != 0)
		{
			Global_1839593 = Global_1835392.f_2826;
			Global_1839593.f_1 = { *(uParam0[iVar0 /*100*/]) };
			if (ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*100*/])->f_16), ""))
			{
				Global_1839593.f_17 = { *(uParam0[iVar0 /*100*/]) };
			}
			else
			{
				Global_1839593.f_17 = { (uParam0[iVar0 /*100*/])->f_16 };
			}
			Global_1839593.f_33 = { (uParam0[iVar0 /*100*/])->f_32 };
			if (func_111((uParam0[iVar0 /*100*/])->f_45))
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_45 };
			}
			else
			{
				Global_1839593.f_46 = { (uParam0[iVar0 /*100*/])->f_32 };
			}
			Global_1839593.f_59 = (uParam0[iVar0 /*100*/])->f_58;
			Global_1839593.f_60 = (uParam0[iVar0 /*100*/])->f_59;
			Global_1839593.f_62 = Global_1835392.f_2708;
			Global_1839593.f_63 = Global_1835392.f_2770;
			if ((uParam0[iVar0 /*100*/])->f_74)
			{
				SET_BIT(&(Global_1839593.f_61), 0);
			}
			else
			{
				CLEAR_BIT(&(Global_1839593.f_61), 0);
			}
			SET_BIT(&(Global_1839593.f_61), (uParam0[iVar0 /*100*/])->f_75);
			iVar1 = 0;
			while (iVar1 < Global_1839593.f_62)
			{
				if (IS_BIT_SET(Global_1839593.f_63, iVar1))
				{
					Global_1839593.f_97[iVar1] = (uParam0[iVar0 /*100*/])->f_67[iVar1];
				}
				else
				{
					Global_1839593.f_64[iVar1] = (uParam0[iVar0 /*100*/])->f_60[iVar1];
				}
				iVar1++;
			}
			Global_1838577.f_81[iVar2] = Global_1835392.f_2826;
			LEADERBOARDS_CACHE_DATA_ROW(&Global_1839593);
		}
		iVar0++;
	}
	Global_1838577.f_87[iVar2 /*3*/] = { func_121(PLAYER_ID()) };
}

Vector3 func_121(var uParam0)
{
	return GET_ENTITY_COORDS(GET_PLAYER_PED(uParam0), 0);
}

void func_122(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 != -1)
	{
		if (LEADERBOARDS_GET_CACHE_EXISTS(Global_1838577.f_81[iParam1]))
		{
			_0x8EC74CEB042E7CFF(Global_1838577.f_81[iParam1]);
		}
		Global_1838577.f_81[iParam1] = 0;
	}
	else if (iParam0 != -1)
	{
		if (LEADERBOARDS_GET_CACHE_EXISTS(iParam0))
		{
			_0x8EC74CEB042E7CFF(iParam0);
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (Global_1838577.f_81[iVar0] == iParam0)
			{
				Global_1838577.f_81[iVar0] = 0;
			}
			iVar0++;
		}
	}
}

int func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_1838577.f_81[iVar0] == 0)
		{
			return iVar0;
		}
		else if (LEADERBOARDS_GET_CACHE_EXISTS(Global_1838577.f_81[iVar0]))
		{
			iVar3 = LEADERBOARDS_GET_CACHE_TIME(Global_1838577.f_81[iVar0]);
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

int func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	
	switch ((uParam0[0 /*100*/])->f_76)
	{
		case 0:
			func_128(uParam0);
			if (IS_ORBIS_VERSION() && !_0x72D918C99BCACC54(0))
			{
				(uParam0[0 /*100*/])->f_76 = 3;
				return 0;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				if (func_111((uParam0[iVar0 /*100*/])->f_32))
				{
					if (!func_127(&((uParam0[iVar0 /*100*/])->f_32), &Global_1841022))
					{
						Global_1841022[Global_1841022.f_206 /*13*/] = { (uParam0[iVar0 /*100*/])->f_32 };
						Global_1841022.f_206++;
					}
				}
				iVar0++;
			}
			if (Global_1841022.f_206 > 0)
			{
				(uParam0[0 /*100*/])->f_76 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_76 = 3;
			}
			break;
		
		case 1:
			if (func_125(&((uParam0[1 /*100*/])->f_76), &(Global_1841022.f_206), &Global_1841022, &(Global_1841022.f_157)))
			{
				(uParam0[0 /*100*/])->f_76 = 2;
			}
			break;
		
		case 2:
			if (Global_1841022.f_206 > 12)
			{
				Global_1841022.f_206 = 12;
			}
			iVar0 = 0;
			while (iVar0 < 12)
			{
				iVar1 = 0;
				while (iVar1 < Global_1841022.f_206)
				{
					if (func_111((uParam0[iVar0 /*100*/])->f_32) && func_111(Global_1841022[iVar1 /*13*/]))
					{
						if (NETWORK_ARE_HANDLES_THE_SAME(&((uParam0[iVar0 /*100*/])->f_32), &(Global_1841022[iVar1 /*13*/])))
						{
							(uParam0[iVar0 /*100*/])->f_80 = { Global_1841022.f_157[iVar1 /*4*/] };
						}
					}
					iVar1++;
				}
				iVar0++;
			}
			(uParam0[0 /*100*/])->f_76 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_125(var uParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	int iVar35;
	
	switch (*uParam0)
	{
		case 0:
			if (NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
			}
			else
			{
				NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
				NETWORK_GET_PRIMARY_CLAN_DATA_START(uParam2, *uParam1);
				*uParam0 = 1;
			}
			break;
		
		case 1:
			if (!NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				if (NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS())
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
			iVar35 = 0;
			while (iVar35 < *uParam1)
			{
				if (NETWORK_GET_PRIMARY_CLAN_DATA_NEW(uParam2[iVar35 /*13*/], &uVar0))
				{
					func_126(&uVar0, uParam3[iVar35 /*4*/]);
				}
				iVar35++;
			}
			if (NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
			{
				NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
			}
			else
			{
				NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
			}
			*uParam0 = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

void func_126(var uParam0, var uParam1)
{
	_0xF45352426FF3A4F0(uParam0, 35, uParam1);
}

int func_127(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_111(*(uParam1[iVar0 /*13*/])))
		{
			if (NETWORK_ARE_HANDLES_THE_SAME(uParam0, uParam1[iVar0 /*13*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_128(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_129(&(Global_1841022[iVar0 /*13*/]));
		StringCopy(&(Global_1841022.f_157[iVar0 /*4*/]), "", 16);
		iVar0++;
	}
	if ((uParam0[0 /*100*/])->f_76 > 0)
	{
		(uParam0[0 /*100*/])->f_76 = 0;
		(uParam0[1 /*100*/])->f_76 = 0;
		if (!NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
		{
			NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR();
		}
	}
	if (NETWORK_GET_PRIMARY_CLAN_DATA_PENDING())
	{
		NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL();
	}
	Global_1841022.f_206 = 0;
}

void func_129(var uParam0)
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

int func_130(var uParam0)
{
	int iVar0;
	
	if (IS_PC_VERSION())
	{
		return 1;
	}
	else if (IS_DURANGO_VERSION() || IS_ORBIS_VERSION())
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
			if (!func_131(&((uParam0[iVar0 /*100*/])->f_78), &((uParam0[iVar0 /*100*/])->f_32), uParam0[iVar0 /*100*/]))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_131(var uParam0, var uParam1, char* sParam2)
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
				if (!NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
				{
					if (IS_DURANGO_VERSION() || IS_ORBIS_VERSION())
					{
						if (NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else if (IS_XBOX360_VERSION())
					{
						if (NETWORK_GAMERTAG_FROM_HANDLE_START(uParam1))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam2, NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
						if (IS_PS3_VERSION())
						{
						}
						else if (IS_ORBIS_VERSION())
						{
						}
						else if (IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam2, GET_PLAYER_NAME(NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK_IS_GAMER_IN_MY_SESSION(uParam1))
			{
				if (!NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam2, NETWORK_GET_GAMERTAG_FROM_HANDLE(uParam1), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam2, GET_PLAYER_NAME(NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_132(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!IS_DURANGO_VERSION() && !IS_ORBIS_VERSION())
	{
		return 1;
	}
	if ((uParam0[0 /*100*/])->f_78 == 2)
	{
		return 1;
	}
	switch ((uParam0[0 /*100*/])->f_78)
	{
		case 0:
			Global_1835392.f_3183 = 0;
			iVar1 = 0;
			while (iVar1 < 12)
			{
				StringCopy(&(Global_1835392.f_2833[iVar1 /*16*/]), "", 64);
				func_129(&(Global_1835392.f_3026[iVar1 /*13*/]));
				if (func_111((uParam0[iVar1 /*100*/])->f_32))
				{
					Global_1835392.f_3026[Global_1835392.f_3183 /*13*/] = { (uParam0[iVar1 /*100*/])->f_32 };
					Global_1835392.f_3183++;
				}
				iVar1++;
			}
			if (Global_1835392.f_3183 > 0)
			{
				(uParam0[0 /*100*/])->f_79 = _0xD66C9E72B3CC4982(&(Global_1835392.f_3026), Global_1835392.f_3183);
				(uParam0[0 /*100*/])->f_78 = 1;
			}
			else
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			break;
		
		case 1:
			iVar0 = _0x58CC181719256197((uParam0[0 /*100*/])->f_79, &(Global_1835392.f_2833), Global_1835392.f_3183);
			if (iVar0 == 0)
			{
				iVar1 = 0;
				while (iVar1 < 12)
				{
					if (func_111((uParam0[iVar1 /*100*/])->f_32))
					{
						*(uParam0[iVar1 /*100*/]) = { Global_1835392.f_2833[iVar2 /*16*/] };
						iVar2++;
					}
					iVar1++;
				}
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else if (iVar0 == -1)
			{
				(uParam0[0 /*100*/])->f_78 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			(uParam0[0 /*100*/])->f_79 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_133(var uParam0)
{
	int iVar0;
	
	if (IS_DURANGO_VERSION() || IS_ORBIS_VERSION())
	{
		iVar0 = 0;
		while (iVar0 < 12)
		{
			if (!func_135(&((uParam0[iVar0 /*100*/])->f_77), &((uParam0[iVar0 /*100*/])->f_16), &((uParam0[iVar0 /*100*/])->f_84), &(Global_1835392.f_2833), &((uParam0[iVar0 /*100*/])->f_79)))
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
			if (!func_134(&((uParam0[iVar0 /*100*/])->f_77), (uParam0[iVar0 /*100*/])->f_16, &((uParam0[iVar0 /*100*/])->f_84)))
			{
				return 0;
			}
			iVar0++;
		}
	}
	return 1;
}

int func_134(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, char* sParam17)
{
	struct<13> Var0;
	
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (IS_STRING_NULL_OR_EMPTY(&uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK_HANDLE_FROM_USER_ID(&uParam1, &Var0, 13);
	switch (*uParam0)
	{
		case 0:
			if (func_111(Var0))
			{
				if (!NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
				{
					if ((IS_XBOX360_VERSION() || IS_DURANGO_VERSION()) || IS_ORBIS_VERSION())
					{
						if (NETWORK_GAMERTAG_FROM_HANDLE_START(&Var0))
						{
							*uParam0 = 1;
						}
					}
					else
					{
						StringCopy(sParam17, NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
						if (IS_PS3_VERSION())
						{
						}
						else if (IS_ORBIS_VERSION())
						{
						}
						else if (IS_PC_VERSION())
						{
						}
						*uParam0 = 2;
					}
				}
				else
				{
					StringCopy(sParam17, GET_PLAYER_NAME(NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			if (!NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
			{
				if (!NETWORK_GAMERTAG_FROM_HANDLE_PENDING())
				{
					if (NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED())
					{
						StringCopy(sParam17, NETWORK_GET_GAMERTAG_FROM_HANDLE(&Var0), 64);
					}
					*uParam0 = 2;
					return 1;
				}
			}
			else
			{
				StringCopy(sParam17, GET_PLAYER_NAME(NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0)), 64);
				*uParam0 = 2;
			}
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_135(var uParam0, var uParam1, char* sParam2, var uParam3, var uParam4)
{
	int iVar0;
	struct<13> Var1[1];
	
	if (!IS_DURANGO_VERSION() && !IS_ORBIS_VERSION())
	{
		return 1;
	}
	if (*uParam0 == 2)
	{
		return 1;
	}
	else if (IS_STRING_NULL_OR_EMPTY(uParam1))
	{
		*uParam0 = 2;
		return 1;
	}
	NETWORK_HANDLE_FROM_USER_ID(uParam1, &(Var1[0 /*13*/]), 13);
	switch (*uParam0)
	{
		case 0:
			StringCopy(uParam3[0 /*16*/], "", 64);
			if (func_111(Var1[0 /*13*/]))
			{
				if (!NETWORK_IS_GAMER_IN_MY_SESSION(&(Var1[0 /*13*/])))
				{
					*uParam4 = _0xD66C9E72B3CC4982(&Var1, 1);
					*uParam0 = 1;
				}
				else
				{
					StringCopy(sParam2, GET_PLAYER_NAME(NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var1[0 /*13*/]))), 64);
					*uParam0 = 2;
				}
			}
			else
			{
				*uParam0 = 2;
			}
			break;
		
		case 1:
			iVar0 = _0x58CC181719256197(*uParam4, uParam3, 1);
			if (iVar0 == 0)
			{
				*sParam2 = { *(uParam3[0 /*16*/]) };
				*uParam0 = 2;
			}
			else if (iVar0 == -1)
			{
				*uParam0 = 2;
			}
			else
			{
				return 0;
			}
			break;
		
		case 2:
			*uParam4 = -1;
			return 1;
			break;
	}
	return 0;
}

int func_136(var uParam0)
{
	struct<97> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	bool bVar112;
	int iVar113;
	bool bVar114;
	int iVar115;
	struct<13> Var116;
	
	Var0.f_19.f_1 = 4;
	iVar109 = -1;
	iVar113 = 2;
	Var116 = { func_56(PLAYER_ID()) };
	switch ((*uParam0)[iVar113])
	{
		case 0:
			Global_1835392.f_2775[iVar113] = -1;
			Global_1835392.f_2704[iVar113] = 0;
			Global_1835013.f_374 = -1;
			if (_NETWORK_PLAYER_IS_IN_CLAN())
			{
				if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var116))
				{
					if (NETWORK_CLAN_PLAYER_GET_DESC(&(uParam0->f_7), 35, &Var116))
					{
						uParam0->f_44.f_2 = uParam0->f_7;
						uParam0->f_44.f_1 = 3;
						(*uParam0)[iVar113] = 1;
						return 0;
					}
				}
				else
				{
					(*uParam0)[iVar113] = 3;
					return 1;
				}
			}
			else
			{
				(*uParam0)[iVar113] = 3;
				return 1;
			}
			break;
		
		case 1:
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var116, func_149(), 0, 0, 0))
			{
				func_147(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && _0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar111 = 0;
						iVar106 = 0;
						if (func_149())
						{
							iVar111 = 0;
							while (iVar111 < Var98.f_3)
							{
								_0x34770B9CE0E03B91(iVar111, &Var0);
								if (Global_1835013.f_374 < 0)
								{
									if (func_110(&Var0, &Var116) || func_110(&Var0, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var0.f_96;
									}
								}
								if (iVar109 < 0)
								{
									if (IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= _0x88578F6EC36B4A3A(iVar111, 0))
										{
											iVar109 = iVar111;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= _0x38491439B6BA7F7D(iVar111, 0))
									{
										iVar109 = iVar111;
									}
								}
								func_146(&Var0);
								iVar111++;
							}
							if (iVar109 < 0)
							{
								iVar109 = Var98.f_3;
							}
						}
						iVar111 = 0;
						_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_149() && iVar109 == 0)
								{
									func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Var0.f_96);
									Global_1835392.f_2775[iVar113] = 0;
									Global_1835392.f_2704[iVar113]++;
								}
								if (func_149() && (func_110(&Var0, &Var116) || func_110(&Var0, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_110(&Var0, &Var116))
									{
										iVar109 = 0;
										Global_1835392.f_2775[iVar113] = 0;
									}
									MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									if (func_144(uParam0->f_44))
									{
										iVar108 = _0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_159(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_67[iVar107] = _0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_60[iVar107] = _0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									Global_1835392.f_2704[iVar113]++;
								}
								bVar112 = true;
							}
						}
						if (!bVar112)
						{
							Global_1835392.f_2704[iVar113]++;
						}
						if (!func_149())
						{
							iVar109 = Var98.f_5;
						}
						if (iVar109 > 6)
						{
							iVar110 = (iVar109 - 6);
						}
						else if (bVar112)
						{
							iVar110 = 1;
						}
						else
						{
							iVar110 = 0;
						}
						iVar111 = iVar110;
						func_146(&Var0);
						iVar111 = iVar110;
						while (iVar111 <= (Var98.f_3 - 1))
						{
							_0x34770B9CE0E03B91(iVar111, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_149() && iVar109 == iVar111)
								{
									if (!func_110(&(Global_1835392[iVar113 /*901*/][0 /*75*/].f_32), &Var116))
									{
										func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_149() && (func_110(&Var0, &Var116) || func_110(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									if (func_111(Var0) && !func_110(&Var0, &(Global_1835392[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_110(&Var0, &Var116))
										{
											if (Global_1835392.f_2775[iVar113] < 0)
											{
												Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
											}
										}
										MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_32 = { Var0 };
										Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
										Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_74 = 1;
										if (func_144(uParam0->f_44))
										{
											iVar108 = _0x88578F6EC36B4A3A(iVar111, Global_1835392.f_2709);
											if (iVar108 == 1)
											{
												Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_67[iVar106] = _0x88578F6EC36B4A3A(iVar111, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_60[iVar106] = _0x38491439B6BA7F7D(iVar111, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[iVar113]++;
									}
								}
							}
							func_146(&Var0);
							iVar111++;
						}
						_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar112)
						{
							if (Global_1835392.f_2775[iVar113] == -1 && func_149())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[iVar113] = 3;
						}
						else
						{
							(*uParam0)[iVar113] = 2;
						}
					}
					else
					{
						if (!bVar112)
						{
							Global_1835392.f_2704[iVar113]++;
						}
						_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar113] = -1;
						(*uParam0)[iVar113] = 2;
					}
				}
				else
				{
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar113] = -1;
					(*uParam0)[iVar113] = 2;
					SET_BIT(&(Global_1835392.f_2832), iVar113);
				}
			}
			break;
		
		case 2:
			if (Global_1835392.f_2775[iVar113] == -1)
			{
				iVar115 = 11;
			}
			else
			{
				iVar115 = 1;
			}
			uParam0->f_44.f_1 = 3;
			Var98 = uParam0->f_44;
			Var98.f_1 = uParam0->f_44.f_1;
			if (func_138(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar115))
			{
				func_147(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && _0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						iVar106 = 0;
						while (iVar106 < Var98.f_3)
						{
							_0x34770B9CE0E03B91(iVar106, &Var0);
							bVar114 = false;
							if (Global_1835392[iVar113 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar113 /*901*/][0 /*75*/].f_59 <= 0)
							{
								bVar114 = true;
							}
							if (Global_1835392.f_2704[iVar113] < 11 || bVar114)
							{
								if (func_149() && (func_110(&Var0, &Var116) || func_110(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (iVar106 == 0 || bVar114)
								{
									MemCopy(&(Global_1835392[iVar113 /*901*/][0 /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar113 /*901*/][0 /*75*/].f_32 = { Var0 };
									Global_1835392[iVar113 /*901*/][0 /*75*/].f_59 = Var0.f_96;
									if (func_144(uParam0->f_44))
									{
										iVar108 = _0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113 /*901*/][0 /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113 /*901*/][0 /*75*/].f_58 = 0;
										}
									}
									if (func_159(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113 /*901*/][0 /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar113 /*901*/][0 /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113 /*901*/][0 /*75*/].f_67[iVar107] = _0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113 /*901*/][0 /*75*/].f_60[iVar107] = _0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (Global_1835392.f_2704[iVar113] == 0)
									{
										if (bVar114)
										{
										}
										else
										{
											Global_1835392.f_2704[iVar113]++;
										}
									}
								}
								else if (Global_1835392.f_2704[iVar113] < 11)
								{
									MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_32 = { Var0 };
									if (func_144(uParam0->f_44))
									{
										iVar108 = _0x88578F6EC36B4A3A(iVar106, Global_1835392.f_2709);
										if (iVar108 == 1)
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 0;
										}
									}
									if (func_159(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_59 = Var0.f_96;
									Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_74 = 1;
									iVar107 = 0;
									iVar107 = 0;
									while (iVar107 < Global_1835392.f_2708)
									{
										if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar107]))
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_67[iVar107] = _0x88578F6EC36B4A3A(iVar106, Global_1835392.f_2710[iVar107]);
										}
										else
										{
											Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_60[iVar107] = _0x38491439B6BA7F7D(iVar106, Global_1835392.f_2710[iVar107]);
										}
										iVar107++;
									}
									if (iVar106 != 0)
									{
										Global_1835392.f_2704[iVar113]++;
									}
								}
							}
							func_146(&Var0);
							iVar106++;
						}
					}
					_0x71B008056E5692D6();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar113] = 3;
				}
				else
				{
					_0x71B008056E5692D6();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					SET_BIT(&(Global_1835392.f_2832), iVar113);
					Global_1835392.f_2704[iVar113] = 0;
					(*uParam0)[iVar113] = 3;
				}
				if (Global_1835392.f_2775[iVar113] == -1 && func_149())
				{
					if (Global_1835392.f_2704[iVar113] >= 1)
					{
						func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
					}
					else
					{
						func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
					}
					Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
					Global_1835392.f_2704[iVar113]++;
				}
			}
			break;
		
		case 3:
			func_137(iVar113, Global_1835013.f_374);
			(*uParam0)[iVar113] = 4;
			break;
		
		case 4:
			return 1;
			break;
	}
	return 0;
}

void func_137(int iParam0, int iParam1)
{
	int iVar0;
	
	if ((func_149() && Global_1835392.f_2704[iParam0] > Global_1835392.f_2775[iParam0]) && Global_1835392.f_2775[iParam0] >= 0)
	{
		if (iParam1 != Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
		{
			iVar0 = 0;
			while (iVar0 < Global_1835392.f_2704[iParam0])
			{
				if (iVar0 != Global_1835392.f_2775[iParam0])
				{
					if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 >= Global_1835392[iParam0 /*901*/][Global_1835392.f_2775[iParam0] /*75*/].f_59)
					{
						if (Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59 < iParam1 || iParam1 == -1)
						{
							Global_1835392[iParam0 /*901*/][iVar0 /*75*/].f_59++;
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
		if (Global_1835392.f_2704[iParam0] <= Global_1835392.f_2775[iParam0])
		{
		}
		if (Global_1835392.f_2775[iParam0] < 0)
		{
		}
	}
}

int func_138(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (LEADERBOARDS2_READ_BY_RANK(uParam2, iParam3, iParam4))
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
			if (!LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
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

void func_139(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	Global_1835008 = 1;
	func_170(&(Global_1835008.f_1), 1, 0);
	Global_1835008.f_3 = Param0;
	Global_1835008.f_4 = Param0.f_1;
}

int func_140()
{
	if (IS_PAUSE_MENU_ACTIVE() && !func_162())
	{
		return 1;
	}
	return 0;
}

int func_141()
{
	if (_0xA31FD15197B192BD() || Global_1835008)
	{
		func_142();
		return 1;
	}
	return 0;
}

void func_142()
{
	if (func_77(&(Global_1835008.f_1), 120000, 1))
	{
		LEADERBOARDS_READ_CLEAR(Global_1835008.f_3, Global_1835008.f_4, -1);
		Global_1835008 = 0;
		func_88(&(Global_1835008.f_1));
	}
}

void func_143(var uParam0, var uParam1, var uParam2)
{
	*uParam0 = 0;
	*uParam1 = 0;
	Global_1835008 = 0;
	func_88(&(Global_1835008.f_1));
	LEADERBOARDS_READ_CLEAR(*uParam2, uParam2->f_1, -1);
}

int func_144(int iParam0)
{
	if ((((((iParam0 == 815 || iParam0 == 824) || iParam0 == 825) || iParam0 == 826) || iParam0 == 827) || iParam0 == 828) || iParam0 == 849)
	{
		return 1;
	}
	return 0;
}

void func_145(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (func_159(uParam0->f_44))
	{
		MemCopy(sParam1, {Global_1835013.f_355}, 16);
		sParam1->f_32 = { Global_1835013.f_361 };
		MemCopy(&(sParam1->f_16), {Global_1835013.f_349}, 16);
	}
	else
	{
		StringCopy(sParam1, GET_PLAYER_NAME(PLAYER_ID()), 64);
		sParam1->f_32 = { func_56(PLAYER_ID()) };
	}
	sParam1->f_59 = iParam2;
	if (func_144(uParam0->f_44))
	{
		iVar0 = Global_1835013.f_211.f_36[Global_1835392.f_2709];
		if (iVar0 == 1)
		{
			sParam1->f_58 = 1;
		}
		else
		{
			sParam1->f_58 = 0;
		}
	}
	sParam1->f_74 = 1;
	iVar1 = 0;
	while (iVar1 < Global_1835392.f_2708)
	{
		if (IS_BIT_SET(Global_1835013.f_142.f_2, Global_1835392.f_2710[iVar1]))
		{
			sParam1->f_67[iVar1] = Global_1835013.f_211.f_36[Global_1835392.f_2710[iVar1]];
		}
		else
		{
			sParam1->f_60[iVar1] = Global_1835013.f_211.f_3[Global_1835392.f_2710[iVar1]];
		}
		iVar1++;
	}
}

void func_146(var uParam0)
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
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	StringCopy(&(uParam0->f_13), "", 24);
	uParam0->f_19 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_19.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_85 = 0;
	StringCopy(&(uParam0->f_86), "", 32);
	StringCopy(&(uParam0->f_94), "", 8);
	uParam0->f_96 = 0;
	uParam0->f_97 = 0;
}

void func_147(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_1 = uParam1->f_1;
	uParam0->f_2 = 0;
}

int func_148(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, bool bParam5, bool bParam6, int iParam7, int iParam8)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_1835013.f_211.f_36[0];
	uVar1 = Global_1835013.f_211.f_3[0];
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
					if (IS_BIT_SET(Global_1835013.f_142.f_2, 0))
					{
						if (LEADERBOARDS2_READ_BY_SCORE_INT(uParam2, uVar0, iParam3))
						{
							*uParam0++;
						}
						else
						{
							*uParam1 = 0;
							*uParam0 = 3;
						}
					}
					else if (LEADERBOARDS2_READ_BY_SCORE_FLOAT(uParam2, uVar1, iParam3))
					{
						*uParam0++;
					}
					else
					{
						*uParam1 = 0;
						*uParam0 = 3;
					}
				}
				else if (LEADERBOARDS2_READ_BY_RADIUS(uParam2, iParam3, uParam4))
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
			if (!LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
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

int func_149()
{
	if (Global_1835388 && Global_1835389)
	{
		return 1;
	}
	return 0;
}

int func_150(var uParam0)
{
	struct<20> Var0;
	struct<6> Var98;
	int iVar106;
	int iVar107;
	int iVar108;
	int iVar109;
	int iVar110;
	int iVar111;
	int iVar112;
	int iVar113;
	struct<13> Var114;
	
	Var0.f_19.f_1 = 4;
	iVar108 = -1;
	iVar113 = 1;
	Var114 = { func_56(PLAYER_ID()) };
	switch ((*uParam0)[1])
	{
		case 0:
			iVar107 = NETWORK_GET_FRIEND_COUNT();
			Global_1835392.f_2775[1] = -1;
			Global_1835013.f_374 = -1;
			Global_1835392.f_2704[iVar113] = 0;
			if (iVar107 > 0)
			{
				if (func_149())
				{
					iVar112 = 0;
				}
				else
				{
					iVar112 = 1;
				}
				if (func_151(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &(uParam0->f_113), uParam0->f_113[0 /*66*/], iVar112, 0, 100))
				{
					func_147(&Var98, &(uParam0->f_44));
					if (uParam0->f_5 && _0xA0F93D5465B3094D(&Var98))
					{
						if (func_149())
						{
							iVar110 = 0;
							iVar110 = 0;
							while (iVar110 < Var98.f_3)
							{
								if (iVar108 < 0)
								{
									_0x34770B9CE0E03B91(iVar110, &Var0);
									if (func_159(uParam0->f_44))
									{
										if (Global_1835013.f_374 < 0)
										{
											if (func_110(&Var0, &(Global_1835013.f_361)))
											{
												Global_1835013.f_374 = Var0.f_96;
											}
										}
									}
									if (IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= _0x88578F6EC36B4A3A(iVar110, 0))
										{
											iVar108 = iVar110;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= _0x38491439B6BA7F7D(iVar110, 0))
									{
										iVar108 = iVar110;
									}
									func_146(&Var0);
								}
								iVar110++;
							}
							if (iVar108 < 0)
							{
								iVar108 = Var98.f_3;
							}
						}
						iVar110 = 0;
						if (func_149() && iVar108 == 0)
						{
							if (Global_1835392.f_2704[iVar113] < 11)
							{
								func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
								Global_1835392.f_2775[iVar113] = 0;
								Global_1835392.f_2704[iVar113]++;
							}
						}
						if (Var98.f_3 > 0)
						{
							_0x34770B9CE0E03B91(0, &Var0);
							if (func_149() && (func_110(&Var0, &Var114) || func_110(&Var0, &(Global_1835013.f_361))))
							{
							}
							else if (func_111(Var0) && Global_1835392.f_2704[iVar113] < 11)
							{
								if (func_110(&Var0, &Var114))
								{
									iVar108 = 0;
									Global_1835392.f_2775[1] = 0;
								}
								MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), {Var0.f_13}, 16);
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_32 = { Var0 };
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_59 = 1;
								if (func_144(uParam0->f_44))
								{
									iVar111 = _0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
									if (iVar111 == 1)
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 1;
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_58 = 0;
									}
								}
								if (func_159(uParam0->f_44))
								{
									MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
								}
								Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_74 = 1;
								iVar106 = 0;
								while (iVar106 < Global_1835392.f_2708)
								{
									if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_67[iVar106] = _0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar106]);
									}
									else
									{
										Global_1835392[1 /*901*/][Global_1835392.f_2704[iVar113] /*75*/].f_60[iVar106] = _0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar106]);
									}
									iVar106++;
								}
								Global_1835392.f_2704[1]++;
							}
							else
							{
								func_146(&Var0);
								_0x71B008056E5692D6();
								func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
								Global_1835392.f_2704[1] = 0;
								(*uParam0)[1] = 1;
								if (Global_1835392.f_2775[iVar113] == -1 && func_149())
								{
									if (Global_1835392.f_2704[iVar113] >= 1)
									{
										func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
									}
									else
									{
										func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
									}
									Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
									Global_1835392.f_2704[iVar113]++;
								}
								return 0;
							}
							func_146(&Var0);
						}
						else
						{
							Global_1835392.f_2704[1] = 0;
							func_146(&Var0);
							_0x71B008056E5692D6();
							func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
							if (Global_1835392.f_2775[iVar113] == -1 && func_149())
							{
								if (Global_1835392.f_2704[iVar113] >= 1)
								{
									func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
								Global_1835392.f_2704[iVar113]++;
							}
							(*uParam0)[1] = 1;
							return 0;
						}
						if (!func_149())
						{
							iVar108 = Var98.f_5;
						}
						if (iVar108 > 6)
						{
							iVar109 = (iVar108 - 6);
						}
						else
						{
							iVar109 = 1;
						}
						iVar110 = iVar109;
						iVar110 = iVar109;
						while (iVar110 <= (Var98.f_3 - 1))
						{
							_0x34770B9CE0E03B91(iVar110, &Var0);
							if (Global_1835392.f_2704[iVar113] < 11 && Var0.f_96 > 1)
							{
								if (func_149() && iVar108 == iVar110)
								{
									if (!func_110(&(Global_1835392[iVar113 /*901*/][0 /*75*/].f_32), &Var114))
									{
										func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Var0.f_96);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
										Global_1835392.f_2704[iVar113]++;
									}
								}
								if (func_149() && (func_110(&Var0, &Var114) || func_110(&Var0, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[1] < 12)
								{
									if (func_111(Var0) && !func_110(&Var0, &(Global_1835392[iVar113 /*901*/][0 /*75*/].f_32)))
									{
										if (func_110(&Var0, &Var114))
										{
											if (Global_1835392.f_2775[1] < 0)
											{
												Global_1835392.f_2775[1] = Global_1835392.f_2704[1];
											}
										}
										MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/]), {Var0.f_13}, 16);
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_32 = { Var0 };
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_59 = iVar110 + 1;
										Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_74 = 1;
										if (func_144(uParam0->f_44))
										{
											iVar111 = _0x88578F6EC36B4A3A(iVar110, Global_1835392.f_2709);
											if (iVar111 == 1)
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_16), {Var0.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar106 = 0;
										while (iVar106 < Global_1835392.f_2708)
										{
											if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar106]))
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_67[iVar106] = _0x88578F6EC36B4A3A(iVar110, Global_1835392.f_2710[iVar106]);
											}
											else
											{
												Global_1835392[1 /*901*/][Global_1835392.f_2704[1] /*75*/].f_60[iVar106] = _0x38491439B6BA7F7D(iVar110, Global_1835392.f_2710[iVar106]);
											}
											iVar106++;
										}
										Global_1835392.f_2704[1]++;
									}
								}
							}
							func_146(&Var0);
							iVar110++;
						}
						_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						(*uParam0)[1] = 1;
						if (Global_1835392.f_2775[iVar113] == -1 && func_149())
						{
							if (Global_1835392.f_2704[iVar113] >= 1)
							{
								func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), Global_1835392[iVar113 /*901*/][(Global_1835392.f_2704[iVar113] - 1) /*75*/].f_59 + 1);
							}
							else
							{
								func_145(uParam0, &(Global_1835392[iVar113 /*901*/][Global_1835392.f_2704[iVar113] /*75*/]), 1);
							}
							Global_1835392.f_2775[iVar113] = Global_1835392.f_2704[iVar113];
							Global_1835392.f_2704[iVar113]++;
						}
						return 0;
					}
					else
					{
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2704[1] = 0;
						(*uParam0)[1] = 1;
						SET_BIT(&(Global_1835392.f_2832), 1);
						return 0;
					}
				}
			}
			else
			{
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
				Global_1835392.f_2704[1] = 0;
				(*uParam0)[1] = 1;
				return 0;
			}
			break;
		
		case 1:
			func_137(iVar113, Global_1835013.f_374);
			(*uParam0)[1] = 2;
			break;
		
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_151(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, int iParam7)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (LEADERBOARDS2_READ_FRIENDS_BY_ROW(uParam2, uParam3, uParam4, iParam5, iParam6, iParam7))
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
			if (!LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
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

int func_152(var uParam0)
{
	struct<13> Var0;
	struct<97> Var13;
	struct<6> Var111;
	int iVar119;
	int iVar120;
	int iVar121;
	int iVar122;
	int iVar123;
	int iVar124;
	bool bVar125;
	int iVar126;
	bool bVar127;
	int iVar128;
	
	Var13.f_19.f_1 = 4;
	iVar122 = -1;
	iVar126 = 0;
	Var0 = { func_56(PLAYER_ID()) };
	switch ((*uParam0)[iVar126])
	{
		case 0:
			Global_1835392.f_2775[iVar126] = -1;
			Global_1835392.f_2704[iVar126] = 0;
			Global_1835013.f_374 = -1;
			Global_1835389 = 0;
			if (func_153(uParam0->f_44))
			{
				if (!Global_1835389)
				{
					Global_1835389 = 1;
				}
			}
			else if (Global_1835389)
			{
				Global_1835389 = 0;
			}
			if (!Global_1835389)
			{
			}
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 11, &Var0, func_149(), 0, 0, 0))
			{
				func_147(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && _0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar124 = 0;
						iVar119 = 0;
						if (func_149())
						{
							iVar124 = 0;
							while (iVar124 < Var111.f_3)
							{
								_0x34770B9CE0E03B91(iVar124, &Var13);
								if (Global_1835013.f_374 < 0)
								{
									if (func_110(&Var13, &Var0) || func_110(&Var13, &(Global_1835013.f_361)))
									{
										Global_1835013.f_374 = Var13.f_96;
									}
								}
								if (iVar122 < 0)
								{
									if (IS_BIT_SET(Global_1835013.f_142.f_2, 0))
									{
										if (Global_1835013.f_211.f_36[0] >= _0x88578F6EC36B4A3A(iVar124, 0))
										{
											iVar122 = iVar124;
										}
									}
									else if (Global_1835013.f_211.f_3[0] >= _0x38491439B6BA7F7D(iVar124, 0))
									{
										iVar122 = iVar124;
									}
								}
								func_146(&Var13);
								iVar124++;
							}
							if (iVar122 < 0)
							{
								iVar122 = Var111.f_3;
							}
						}
						iVar124 = 0;
						_0x34770B9CE0E03B91(0, &Var13);
						if (Var13.f_96 <= 1)
						{
							if (Global_1835392.f_2704[iVar126] < 11)
							{
								if (func_149() && iVar122 == 0)
								{
									func_145(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), Var13.f_96);
									Global_1835392.f_2775[iVar126] = 0;
									Global_1835392.f_2704[iVar126]++;
								}
								if (func_149() && (func_110(&Var13, &Var0) || func_110(&Var13, &(Global_1835013.f_361))))
								{
								}
								else
								{
									if (func_110(&Var13, &Var0))
									{
										iVar122 = 0;
										Global_1835392.f_2775[iVar126] = 0;
									}
									MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
									Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_32 = { Var13 };
									Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
									if (func_144(uParam0->f_44))
									{
										iVar121 = _0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
										if (iVar121 == 1)
										{
											Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 1;
										}
										else
										{
											Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 0;
										}
									}
									if (func_159(uParam0->f_44))
									{
										MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
									}
									Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_74 = 1;
									iVar119 = 0;
									while (iVar119 < Global_1835392.f_2708)
									{
										if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
										{
											Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_67[iVar119] = _0x88578F6EC36B4A3A(0, Global_1835392.f_2710[iVar119]);
										}
										else
										{
											Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_60[iVar119] = _0x38491439B6BA7F7D(0, Global_1835392.f_2710[iVar119]);
										}
										iVar119++;
									}
									Global_1835392.f_2704[iVar126]++;
								}
								bVar125 = true;
							}
						}
						if (!bVar125)
						{
							Global_1835392.f_2704[iVar126]++;
						}
						if (!func_149())
						{
							iVar122 = Var111.f_5;
						}
						if (iVar122 > 6)
						{
							iVar123 = (iVar122 - 6);
						}
						else if (bVar125)
						{
							iVar123 = 1;
						}
						else
						{
							iVar123 = 0;
						}
						iVar124 = iVar123;
						func_146(&Var13);
						iVar124 = iVar123;
						while (iVar124 <= (Var111.f_3 - 1))
						{
							_0x34770B9CE0E03B91(iVar124, &Var13);
							if (Global_1835392.f_2704[iVar126] < 11 && Var13.f_96 > 1)
							{
								if (func_149() && iVar122 == iVar124)
								{
									if (!func_110(&(Global_1835392[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										func_145(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), Var13.f_96);
										Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
										Global_1835392.f_2704[iVar126]++;
									}
								}
								if (func_149() && (func_110(&Var13, &Var0) || func_110(&Var13, &(Global_1835013.f_361))))
								{
								}
								else if (Global_1835392.f_2704[iVar126] < 11)
								{
									if (func_111(Var13) && !func_110(&(Global_1835392[iVar126 /*901*/][0 /*75*/].f_32), &Var13))
									{
										if (func_110(&Var13, &Var0))
										{
											if (Global_1835392.f_2775[iVar126] < 0)
											{
												Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
											}
										}
										MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_74 = 1;
										if (func_144(uParam0->f_44))
										{
											iVar121 = _0x88578F6EC36B4A3A(iVar124, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										iVar119 = 0;
										iVar119 = 0;
										while (iVar119 < Global_1835392.f_2708)
										{
											if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar119]))
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_67[iVar119] = _0x88578F6EC36B4A3A(iVar124, Global_1835392.f_2710[iVar119]);
											}
											else
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_60[iVar119] = _0x38491439B6BA7F7D(iVar124, Global_1835392.f_2710[iVar119]);
											}
											iVar119++;
										}
										Global_1835392.f_2704[iVar126]++;
									}
								}
							}
							func_146(&Var13);
							iVar124++;
						}
						_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						if (bVar125)
						{
							if (Global_1835392.f_2775[iVar126] == -1 && func_149())
							{
								if (Global_1835392.f_2704[iVar126] >= 1)
								{
									func_145(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), Global_1835392[iVar126 /*901*/][(Global_1835392.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
								}
								else
								{
									func_145(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), 1);
								}
								Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
								Global_1835392.f_2704[iVar126]++;
							}
							(*uParam0)[iVar126] = 2;
						}
						else
						{
							(*uParam0)[iVar126] = 1;
						}
					}
					else
					{
						if (!bVar125)
						{
							Global_1835392.f_2704[iVar126]++;
						}
						_0x71B008056E5692D6();
						func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
						Global_1835392.f_2775[iVar126] = -1;
						(*uParam0)[iVar126] = 1;
					}
				}
				else
				{
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2775[iVar126] = -1;
					(*uParam0)[iVar126] = 1;
					SET_BIT(&(Global_1835392.f_2832), iVar126);
				}
			}
			break;
		
		case 1:
			if (Global_1835392.f_2775[iVar126] == -1)
			{
				iVar128 = 11;
			}
			else
			{
				iVar128 = 1;
			}
			if (func_138(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, iVar128))
			{
				func_147(&Var111, &(uParam0->f_44));
				if (uParam0->f_5 && _0xA0F93D5465B3094D(&Var111))
				{
					if (Var111.f_3 > 0)
					{
						iVar119 = 0;
						while (iVar119 < Var111.f_3)
						{
							_0x34770B9CE0E03B91(iVar119, &Var13);
							if (func_149() && (func_110(&Var13, &Var0) || func_110(&Var13, &(Global_1835013.f_361))))
							{
							}
							else
							{
								bVar127 = false;
								if (Global_1835392[iVar126 /*901*/][0 /*75*/].f_59 > 1 || Global_1835392[iVar126 /*901*/][0 /*75*/].f_59 <= 0)
								{
									bVar127 = true;
								}
								if (Global_1835392.f_2704[iVar126] < 11 || bVar127)
								{
									if (iVar119 == 0 || bVar127)
									{
										MemCopy(&(Global_1835392[iVar126 /*901*/][0 /*75*/]), {Var13.f_13}, 16);
										Global_1835392[iVar126 /*901*/][0 /*75*/].f_32 = { Var13 };
										Global_1835392[iVar126 /*901*/][0 /*75*/].f_59 = Var13.f_96;
										if (func_144(uParam0->f_44))
										{
											iVar121 = _0x88578F6EC36B4A3A(0, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126 /*901*/][0 /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126 /*901*/][0 /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126 /*901*/][0 /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar126 /*901*/][0 /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[iVar126 /*901*/][iVar119 /*75*/].f_67[iVar120] = _0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[iVar126 /*901*/][iVar119 /*75*/].f_60[iVar120] = _0x38491439B6BA7F7D(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (Global_1835392.f_2704[iVar126] == 0)
										{
											if (bVar127)
											{
											}
											else
											{
												Global_1835392.f_2704[iVar126]++;
											}
										}
										else if (Global_1835392.f_2704[iVar126] == 1 && Global_1835392.f_2775[iVar126] == -1)
										{
											Global_1835392.f_2704[iVar126]++;
										}
									}
									else if (Global_1835392.f_2704[iVar126] < 11)
									{
										MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), {Var13.f_13}, 16);
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_32 = { Var13 };
										if (func_144(uParam0->f_44))
										{
											iVar121 = _0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2709);
											if (iVar121 == 1)
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 1;
											}
											else
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_58 = 0;
											}
										}
										if (func_159(uParam0->f_44))
										{
											MemCopy(&(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_16), {Var13.f_19.f_1[1 /*16*/].f_8}, 16);
										}
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_59 = Var13.f_96;
										Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_74 = 1;
										iVar120 = 0;
										iVar120 = 0;
										while (iVar120 < Global_1835392.f_2708)
										{
											if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar120]))
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_67[iVar120] = _0x88578F6EC36B4A3A(iVar119, Global_1835392.f_2710[iVar120]);
											}
											else
											{
												Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/].f_60[iVar120] = _0x38491439B6BA7F7D(iVar119, Global_1835392.f_2710[iVar120]);
											}
											iVar120++;
										}
										if (iVar119 != 0)
										{
											Global_1835392.f_2704[iVar126]++;
										}
									}
								}
							}
							func_146(&Var13);
							iVar119++;
						}
					}
					_0x71B008056E5692D6();
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					(*uParam0)[iVar126] = 2;
				}
				else
				{
					SET_BIT(&(Global_1835392.f_2832), iVar126);
					func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
					Global_1835392.f_2704[iVar126] = 0;
					(*uParam0)[iVar126] = 2;
					Global_1835392.f_2704[1] = 0;
					(*uParam0)[1] = 1;
					Global_1835392.f_2704[2] = 0;
					(*uParam0)[2] = 3;
				}
			}
			if (Global_1835392.f_2775[iVar126] == -1 && func_149())
			{
				if (Global_1835392.f_2704[iVar126] >= 1)
				{
					func_145(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), Global_1835392[iVar126 /*901*/][(Global_1835392.f_2704[iVar126] - 1) /*75*/].f_59 + 1);
				}
				else
				{
					func_145(uParam0, &(Global_1835392[iVar126 /*901*/][Global_1835392.f_2704[iVar126] /*75*/]), 1);
				}
				Global_1835392.f_2775[iVar126] = Global_1835392.f_2704[iVar126];
				Global_1835392.f_2704[iVar126]++;
			}
			break;
		
		case 2:
			func_137(iVar126, Global_1835013.f_374);
			(*uParam0)[iVar126] = 3;
			break;
		
		case 3:
			return 1;
			break;
	}
	return 0;
}

int func_153(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68)
{
	int iVar0;
	
	if (Global_1835388)
	{
		if (Global_1835013.f_5 != 0)
		{
			if (Global_1835013.f_5 == Param0)
			{
				if (Global_1835013.f_5.f_2 == Param0.f_3)
				{
					iVar0 = 0;
					while (iVar0 < Param0.f_3)
					{
						if (!ARE_STRINGS_EQUAL(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/]), &(Param0.f_3.f_1[iVar0 /*16*/])) || !ARE_STRINGS_EQUAL(&(Global_1835013.f_5.f_2.f_1[iVar0 /*16*/].f_8), &(Param0.f_3.f_1[iVar0 /*16*/].f_8)))
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

void func_154(var uParam0)
{
	int iVar0;
	
	if (LEADERBOARDS_GET_CACHE_EXISTS(Global_1835392.f_2826))
	{
		iVar0 = LEADERBOARDS_GET_CACHE_TIME(Global_1835392.f_2826);
		if (iVar0 < 300000)
		{
			SET_BIT(&(uParam0->f_42), 5);
		}
		else
		{
			CLEAR_BIT(&(uParam0->f_42), 5);
			func_122(Global_1835392.f_2826, -1);
		}
	}
}

void func_155(var uParam0)
{
	if (HAS_SCALEFORM_MOVIE_LOADED(uParam0))
	{
		DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0, 255, 255, 255, 0, 0);
	}
}

void func_156(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char* sVar0;
	struct<2> Var1;
	struct<16> Var36;
	bool bVar52;
	struct<13> Var53;
	int iVar66;
	struct<13> Var67;
	int iVar80;
	
	sVar0 = "";
	if (IS_BIT_SET(iParam2, 4))
	{
		sVar0 = "SCLB_GLOBAL";
	}
	else if (IS_BIT_SET(iParam2, 5))
	{
		*iParam1++;
		sVar0 = "SCLB_FRIENDS";
	}
	else if (IS_BIT_SET(iParam2, 6))
	{
		*iParam1++;
		if (NETWORK_IS_SIGNED_ONLINE() && _NETWORK_PLAYER_IS_IN_CLAN())
		{
			if (IS_ORBIS_VERSION() && !_0x72D918C99BCACC54(0))
			{
				sVar0 = "SCLB_CREW";
			}
			else
			{
				Var53 = { func_56(PLAYER_ID()) };
				if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var53))
				{
					NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var53);
					if (!IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
					{
						sVar0 = "STRING";
						Var36 = { Var1.f_1 };
						bVar52 = true;
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
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	if (bVar52)
	{
		BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		_ADD_TEXT_COMPONENT_SCALEFORM(&Var36);
		END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	else
	{
		BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		END_TEXT_COMMAND_SCALEFORM_STRING();
	}
	END_SCALEFORM_MOVIE_METHOD();
	*iParam1++;
	if (bParam4)
	{
		iVar66 = 0;
		SET_BIT(&iVar66, 7);
		BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar66);
		if (!NETWORK_IS_SIGNED_ONLINE())
		{
			sVar0 = "SCLB_NOT_ONL";
		}
		else if (!_NETWORK_ARE_ROS_AVAILABLE())
		{
			sVar0 = "SCLB_NO_ROS";
		}
		else if (Global_1835392.f_2832 != 0)
		{
			sVar0 = "SCLB_READ_FAIL";
		}
		else
		{
			sVar0 = "HUD_PERM";
		}
		BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
		_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
	else if (bParam3)
	{
		if (IS_BIT_SET(iParam2, 4))
		{
			sVar0 = "SCLB_NO_GLOBAL";
		}
		else if (IS_BIT_SET(iParam2, 5))
		{
			if (NETWORK_GET_FRIEND_COUNT() > 0)
			{
				sVar0 = "SCLB_NO_FRNDS";
			}
			else
			{
				sVar0 = "SCLB_NO_FRNDSb";
			}
		}
		else if (IS_BIT_SET(iParam2, 6))
		{
			if (_0x67A5589628E0CFF6())
			{
				if (_0xBA9775570DB788CF())
				{
					if (NETWORK_IS_SIGNED_ONLINE() && _NETWORK_PLAYER_IS_IN_CLAN())
					{
						if (IS_ORBIS_VERSION() && !_0x72D918C99BCACC54(0))
						{
							sVar0 = "SCLB_NO_CREWc";
						}
						else
						{
							Var67 = { func_56(PLAYER_ID()) };
							if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var67))
							{
								NETWORK_CLAN_PLAYER_GET_DESC(&Var1, 35, &Var67);
								if (!IS_STRING_NULL_OR_EMPTY(&(Var1.f_1)))
								{
									sVar0 = "SCLB_NO_CREWb";
									Var36 = { Var1.f_1 };
									bVar52 = true;
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
		iVar80 = 0;
		SET_BIT(&iVar80, 7);
		BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_SLOT");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(*iParam1);
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar80);
		if (bVar52)
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			_ADD_TEXT_COMPONENT_SCALEFORM(&Var36);
			_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		else
		{
			BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sVar0);
			_END_TEXT_COMMAND_SCALEFORM_STRING_2();
		}
		END_SCALEFORM_MOVIE_METHOD();
		*iParam1++;
	}
}

void func_157(var uParam0, char* sParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_TITLE");
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam1);
	END_TEXT_COMMAND_SCALEFORM_STRING();
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam2[iVar0 /*6*/]);
		END_TEXT_COMMAND_SCALEFORM_STRING();
		iVar0++;
	}
	END_SCALEFORM_MOVIE_METHOD();
}

void func_158(var uParam0, var uParam1, char[4] cParam2, var uParam3, bool bParam4, int iParam5)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_MULTIPLAYER_TITLE");
	BEGIN_TEXT_COMMAND_SCALEFORM_STRING(uParam1);
	if (!IS_STRING_NULL_OR_EMPTY(cParam2))
	{
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(cParam2);
	}
	if (iParam5 == -1)
	{
		if (bParam4)
		{
			if (!IS_STRING_NULL_OR_EMPTY(uParam3))
			{
				_ADD_TEXT_COMPONENT_SCALEFORM(uParam3);
			}
		}
		else if (!IS_STRING_NULL_OR_EMPTY(uParam3))
		{
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam3);
		}
	}
	else
	{
		if (bParam4)
		{
			if (!IS_STRING_NULL_OR_EMPTY(uParam3))
			{
				_ADD_TEXT_COMPONENT_SCALEFORM(uParam3);
			}
		}
		else if (!IS_STRING_NULL_OR_EMPTY(uParam3))
		{
			ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(uParam3);
		}
		ADD_TEXT_COMPONENT_INTEGER(iParam5);
	}
	END_TEXT_COMMAND_SCALEFORM_STRING();
	END_SCALEFORM_MOVIE_METHOD();
}

int func_159(int iParam0)
{
	if (iParam0 == 825 || iParam0 == 828)
	{
		return 1;
	}
	return 0;
}

void func_160(var uParam0, var uParam1)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0, "SET_DISPLAY_TYPE");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam1);
	END_SCALEFORM_MOVIE_METHOD();
}

var func_161()
{
	return REQUEST_SCALEFORM_MOVIE("SC_LEADERBOARD");
}

bool func_162()
{
	return func_163(PLAYER_ID());
}

int func_163(int iParam0)
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

int func_164(int iParam0)
{
	return Global_1589819[iParam0 /*818*/].f_196;
}

void func_165(int iParam0)
{
	Global_1315706 = iParam0;
}

void func_166(int iParam0)
{
	Global_1373453.f_1100 = iParam0;
}

void func_167(bool bParam0)
{
	if (bParam0)
	{
		func_169();
	}
	func_168(4, -1);
	func_168(6, -1);
	func_168(7, -1);
	func_168(3, -1);
	func_168(1, -1);
	func_168(2, -1);
	func_168(11, -1);
	func_168(13, -1);
	func_168(14, -1);
	func_168(16, -1);
}

void func_168(int iParam0, int iParam1)
{
	SET_BIT(&(Global_1371947.f_1047), iParam0);
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				Global_1371947.f_170[iParam1] = 1;
			}
			break;
	}
}

void func_169()
{
	Global_2528542.f_4523 = 0;
}

void func_170(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

int func_171(var uParam0, bool bParam1, int iParam2)
{
	uParam0->f_12 = iParam2;
	func_174(uParam0);
	func_173(uParam0);
	if (ARE_STRINGS_EQUAL(&(uParam0->f_550), "SPR_RESULT") || (ARE_STRINGS_EQUAL(&(uParam0->f_550), "") && uParam0->f_56 > 0))
	{
		uParam0->f_566 = 1;
	}
	if (NETWORK_IS_GAME_IN_PROGRESS())
	{
		REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
	}
	if (uParam0->f_1 == 0)
	{
		REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", 0);
		REQUEST_STREAMED_TEXTURE_DICT("MPLeaderboard", 0);
		REQUEST_STREAMED_TEXTURE_DICT("MPHud", 0);
		uParam0->f_1 = REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	if (bParam1)
	{
		while (((!HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			WAIT(0);
		}
		if (uParam0->f_562 || uParam0->f_567)
		{
			while (!HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				WAIT(0);
			}
		}
	}
	else
	{
		if (((!HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_1) || !HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu")) || !HAS_STREAMED_TEXTURE_DICT_LOADED("MPLeaderboard")) || !HAS_STREAMED_TEXTURE_DICT_LOADED("MPHud"))
		{
			return 0;
		}
		if (uParam0->f_562)
		{
			if (!HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_4))
			{
				return 0;
			}
		}
	}
	if (uParam0->f_562)
	{
		if (uParam0->f_567)
		{
			func_172(uParam0);
		}
		else if (uParam0->f_56 != 0)
		{
			func_46(uParam0, 1);
		}
		else
		{
			func_46(uParam0, 0);
		}
	}
	Global_71851 = 1;
	return 1;
}

void func_172(var uParam0)
{
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "CLEAR_ALL");
	END_SCALEFORM_MOVIE_METHOD();
	if (IS_PC_VERSION())
	{
		BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(1);
		END_SCALEFORM_MOVIE_METHOD();
	}
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	func_9(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 188, 1));
	func_14("ES_HELP_TU");
	END_SCALEFORM_MOVIE_METHOD();
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	func_9(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 187, 1));
	func_14("ES_HELP_TD");
	END_SCALEFORM_MOVIE_METHOD();
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "SET_DATA_SLOT");
	SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	func_9(GET_CONTROL_INSTRUCTIONAL_BUTTON(2, 202, 1));
	func_14("ES_HELP_AB");
	END_SCALEFORM_MOVIE_METHOD();
	BEGIN_SCALEFORM_MOVIE_METHOD(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	END_SCALEFORM_MOVIE_METHOD();
}

void func_173(var uParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 0f;
	SET_TEXT_JUSTIFICATION(0);
	SET_TEXT_SCALE(1f, func_60(16f));
	if (uParam0->f_31 == 0)
	{
		if (uParam0->f_29)
		{
			_BEGIN_TEXT_COMMAND_WIDTH("STRING");
			ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_13));
			fVar0 = _END_TEXT_COMMAND_GET_WIDTH(1);
		}
		else
		{
			_BEGIN_TEXT_COMMAND_WIDTH(&(uParam0->f_13));
			fVar0 = _END_TEXT_COMMAND_GET_WIDTH(1);
		}
	}
	else
	{
		_BEGIN_TEXT_COMMAND_WIDTH("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < uParam0->f_31)
		{
			switch (uParam0->f_32[iVar3])
			{
				case 0:
					ADD_TEXT_COMPONENT_INTEGER(uParam0->f_53[iVar1]);
					iVar1++;
					break;
				
				case 1:
					ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
				
				case 2:
					ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam0->f_36[iVar2 /*16*/]));
					iVar2++;
					break;
			}
			iVar3++;
		}
		fVar0 = _END_TEXT_COMMAND_GET_WIDTH(1);
	}
	if (fVar0 > ((0.1125f * 2f) - (0.006f * 2f)))
	{
		*uParam0 = ((fVar0 / 2f) + (0.006f * 2f));
	}
}

void func_174(var uParam0)
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

void func_175(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, var uParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (func_254(uParam0, 4))
	{
		return;
	}
	else
	{
		func_178(&(uParam0->f_26));
		func_177(&(uParam0->f_26), "BJ_SC_PASS", sParam1, 0);
		func_211(uParam0, 4, 1);
	}
	*uParam5 = 0;
	if (iParam3 > 1)
	{
		if (iParam2 == iParam3)
		{
			iVar0 = CEIL((100f * fParam6));
		}
	}
	iVar3 = CEIL((IntToFloat(iParam2 * 30) * fParam6));
	iVar1 = CEIL((fParam6 * 50f));
	iVar2 = CEIL(((fParam6 * 1.5f) * TO_FLOAT(iParam4)));
	*uParam5 = (((iVar1 + iVar2) + iVar0) + iVar3);
	if (iParam3 > 1)
	{
		if (iVar0 > 0)
		{
			func_176(&(uParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", iVar0, 0, 2, 0);
		}
		else
		{
			func_176(&(uParam0->f_26), 3, "BJ_SC_ALLG_RWD", "", 0, 0, 1, 0);
		}
		func_176(&(uParam0->f_26), 2, "BJ_SC_GATES", "", iParam2, iParam3, 0, 0);
	}
	func_176(&(uParam0->f_26), 11, "BJ_SC_LAND_ACC", "", iParam4, 0, 0, 0);
	if (iParam3 > 1)
	{
		func_176(&(uParam0->f_26), 3, "BJ_SC_GATE_RWD", "", iVar3, 0, 0, 0);
	}
	func_176(&(uParam0->f_26), 3, "BJ_SC_ACC_RWD", "", ROUND(((50f + (1.5f * IntToFloat(iParam4))) * fParam6)), 0, 0, 0);
	func_176(&(uParam0->f_26), 3, "BJ_SC_TOT_RWD", "", *uParam5, 0, 0, 0);
}

void func_176(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	
	if (uParam0->f_56 == 13)
	{
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&(uParam0->f_71[iVar0 /*16*/]), sParam2, 64);
	StringCopy(&(uParam0->f_280[iVar0 /*16*/]), sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

void func_177(var uParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&(uParam0->f_5), sParam1, 16);
	StringCopy(&(uParam0->f_13), sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

void func_178(var uParam0)
{
	func_174(uParam0);
	uParam0->f_570 = 0;
	uParam0->f_31 = 0;
	uParam0->f_56 = 0;
	uParam0->f_567 = 0;
	uParam0->f_569 = 0;
}

char* func_179(int iParam0)
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

int func_180(int iParam0, int iParam1, float fParam2, int iParam3)
{
	if (Global_1835013.f_1 && !Global_1835013.f_2)
	{
		func_189(iParam0, iParam1, fParam2, iParam3);
		Global_1835013.f_2 = 1;
	}
	if (func_181(&uLocal_176))
	{
		Global_1835388 = 1;
		return 1;
	}
	return 0;
}

int func_181(var uParam0)
{
	struct<98> Var0;
	struct<4> Var98;
	struct<37> Var106;
	struct<13> Var175;
	int iVar188;
	
	Var0.f_19.f_1 = 4;
	Var106.f_3 = 32;
	Var106.f_36 = 32;
	if (func_159(uParam0->f_44))
	{
		Var175 = { Global_1835013.f_361 };
	}
	else
	{
		Var175 = { func_56(PLAYER_ID()) };
	}
	switch (Global_1835013)
	{
		case 0:
			if (func_188(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), &Var175))
			{
				func_147(&Var98, &(uParam0->f_44));
				Global_1835013.f_142 = uParam0->f_44;
				Global_1835013.f_142.f_1 = LEADERBOARDS_GET_NUMBER_OF_COLUMNS(uParam0->f_44, 0);
				iVar188 = 0;
				while (iVar188 < Global_1835013.f_142.f_1)
				{
					if (!func_187(uParam0->f_44, iVar188))
					{
						if (func_186(uParam0->f_44, 4, iVar188))
						{
							SET_BIT(&(Global_1835013.f_142.f_2), iVar188);
						}
						else
						{
							CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar188);
						}
					}
					iVar188++;
				}
				if (uParam0->f_5 && _0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						_0x34770B9CE0E03B91(0, &Var0);
						if (Var0.f_97 != Global_1835013.f_142.f_1)
						{
						}
						if (!func_111(Var0))
						{
							Global_1835013.f_4 = 1;
						}
						else
						{
							iVar188 = 0;
							while (iVar188 < Global_1835013.f_142.f_1)
							{
								if (!func_187(uParam0->f_44, iVar188))
								{
									if (func_186(uParam0->f_44, 4, iVar188))
									{
										Global_1835013.f_73.f_36[iVar188] = _0x88578F6EC36B4A3A(0, iVar188);
										if (Global_1835013.f_73.f_36[iVar188] == -1)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_36[iVar188] = 0;
											}
										}
									}
									else
									{
										Global_1835013.f_73.f_3[iVar188] = _0x38491439B6BA7F7D(0, iVar188);
										if (Global_1835013.f_73.f_3[iVar188] == -1f)
										{
											if (iVar188 > Var0.f_97)
											{
												Global_1835013.f_73.f_3[iVar188] = 0f;
											}
										}
									}
								}
								iVar188++;
							}
						}
					}
					else
					{
						Global_1835013.f_4 = 1;
					}
					_0x71B008056E5692D6();
				}
				else
				{
					Global_1835013.f_4 = 1;
				}
				Global_1835013 = 1;
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 1:
			Global_1835013.f_1 = 1;
			if (Global_1835013.f_2)
			{
				func_185();
				if (Global_1835013.f_4)
				{
					if (func_184(uParam0->f_44))
					{
						Global_1835013 = 3;
					}
					else
					{
						Global_1835013 = 2;
					}
				}
				else
				{
					Global_1835013 = 2;
				}
			}
			break;
		
		case 2:
			_0xC38DC1E90D22547C(&(Global_1835013.f_73), &(Global_1835013.f_142), &(Global_1835013.f_211));
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 3:
			Global_1835013.f_211 = { Global_1835013.f_142 };
			Global_1835013 = 4;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 4:
			if (NETWORK_IS_GAME_IN_PROGRESS() && func_183())
			{
				if (func_182())
				{
					Global_1835013 = 99;
				}
				else
				{
					Global_1835013 = 999;
					return 1;
				}
			}
			else
			{
				Global_1835013 = 999;
				return 1;
			}
			break;
		
		case 99:
			if (func_184(uParam0->f_44))
			{
				Global_1835013.f_280 = { Global_1835013.f_142 };
			}
			else
			{
				Var106 = Global_1835013.f_142;
				Var106.f_1 = Global_1835013.f_142.f_1;
				Var106.f_2 = Global_1835013.f_142.f_2;
				_0xC38DC1E90D22547C(&Var106, &(Global_1835013.f_142), &(Global_1835013.f_280));
			}
			Global_1835013 = 100;
			uParam0->f_4 = 0;
			uParam0->f_5 = 0;
			break;
		
		case 100:
			if (func_148(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44), 1, &Var175, 1, 1, Global_1835013.f_280.f_36[0], Global_1835013.f_280.f_3[0]))
			{
				func_147(&Var98, &(uParam0->f_44));
				if (uParam0->f_5 && _0xA0F93D5465B3094D(&Var98))
				{
					if (Var98.f_3 > 0)
					{
						_0x34770B9CE0E03B91(0, &Var0);
						if (ARE_STRINGS_EQUAL(&(Var0.f_13), ""))
						{
							Global_968147.f_1 = -1;
						}
						else
						{
							Global_968147.f_1 = Var0.f_96;
						}
					}
					else
					{
						Global_968147.f_1 = -1;
					}
					_0x71B008056E5692D6();
				}
				else
				{
					Global_968147.f_1 = -1;
				}
				Global_1835013 = 999;
				func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
			}
			break;
		
		case 999:
			return 1;
			break;
	}
	return 0;
}

bool func_182()
{
	return IS_BIT_SET(Global_959568.f_8, 1);
}

var func_183()
{
	return Global_2456885.f_3;
}

int func_184(int iParam0)
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

void func_185()
{
	Global_1835013.f_73 = Global_1835013.f_142;
	Global_1835013.f_73.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_73.f_2 = Global_1835013.f_142.f_2;
	Global_1835013.f_211 = Global_1835013.f_142;
	Global_1835013.f_211.f_1 = Global_1835013.f_142.f_1;
	Global_1835013.f_211.f_2 = Global_1835013.f_142.f_2;
}

int func_186(int iParam0, int iParam1, int iParam2)
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
	iVar0 = LEADERBOARDS_GET_COLUMN_TYPE(iParam0, iParam1, iParam2);
	switch (iVar0)
	{
		case 1:
		case 2:
			return 1;
			break;
	}
	return 0;
}

int func_187(int iParam0, int iParam1)
{
	if (LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iParam1) == 156)
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

int func_188(var uParam0, var uParam1, var uParam2, var uParam3)
{
	switch (*uParam0)
	{
		case 0:
			if (!func_141() && !func_140())
			{
				func_139(*uParam2);
				if (LEADERBOARDS2_READ_BY_HANDLE(uParam2, uParam3))
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
			if (!LEADERBOARDS_READ_PENDING(*uParam2, uParam2->f_1, -1))
			{
				*uParam0++;
			}
			break;
		
		case 2:
			if (LEADERBOARDS_READ_SUCCESSFUL(*uParam2, uParam2->f_1, 0))
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

void func_189(int iParam0, int iParam1, float fParam2, int iParam3)
{
	struct<6> Var0[1];
	struct<8> Var7[1];
	
	StringCopy(&(Var7[0 /*8*/]), "Location", 32);
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
	if (func_191(274, &Var0, &Var7, 1, -1, 1, 0))
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

void func_190(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!bParam4)
	{
		_0x0BCA1D2C47B0D269(iParam1, iParam2, fParam3);
	}
	if (!Global_1835013.f_3)
	{
		Global_1835013.f_142 = iParam0;
		Global_1835013.f_142.f_1 = LEADERBOARDS_GET_NUMBER_OF_COLUMNS(Global_1835013.f_142, 0);
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (iVar1 < Global_1835013.f_142.f_1)
			{
				if (iParam1 == 156)
				{
				}
				else if (func_186(iParam0, 4, iVar1))
				{
					SET_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
				else
				{
					CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
				}
			}
			else
			{
				CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar1);
			}
			iVar1++;
		}
		Global_1835013.f_3 = 1;
	}
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iParam1 == LEADERBOARDS_GET_COLUMN_ID(iParam0, 4, iVar1))
		{
			iVar0 = iVar1;
			iVar1 = 32;
		}
		iVar1++;
	}
	Global_1835013.f_142.f_36[iVar0] = iParam2;
	Global_1835013.f_142.f_3[iVar0] = fParam3;
	if (iParam2 != 0)
	{
		SET_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
	else if (fParam3 != 0f)
	{
		CLEAR_BIT(&(Global_1835013.f_142.f_2), iVar0);
	}
}

int func_191(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<68> Var0;
	int iVar68;
	struct<13> Var69;
	var uVar82;
	
	if (!NETWORK_IS_SIGNED_ONLINE())
	{
	}
	if ((!NETWORK_PLAYER_IS_CHEATER() && (NETWORK_HAVE_ONLINE_PRIVILEGES() || !_0x1353F87E89946207())) && _0xA699957E60D80214())
	{
		Var0.f_2.f_1 = 4;
		Var0 = iParam0;
		if (iParam4 == -1)
		{
			if (_NETWORK_PLAYER_IS_IN_CLAN())
			{
				Var69 = { func_56(PLAYER_ID()) };
				if (NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var69))
				{
					if (NETWORK_CLAN_PLAYER_GET_DESC(&uVar82, 35, &Var69))
					{
						Var0.f_1 = uVar82;
					}
				}
			}
		}
		else
		{
			Var0.f_1 = iParam4;
		}
		Var0.f_2 = iParam3;
		iVar68 = 0;
		while (iVar68 < iParam3)
		{
			Var0.f_2.f_1[iVar68 /*16*/] = { *(uParam2[iVar68 /*8*/]) };
			MemCopy(&(Var0.f_2.f_1[iVar68 /*16*/].f_8), {*(uParam1[iVar68 /*6*/])}, 8);
			iVar68++;
		}
		if (bParam5)
		{
			Global_1835013.f_5 = { Var0 };
		}
		if (!bParam6)
		{
			if (NETWORK_IS_GAME_IN_PROGRESS() && Global_2456885.f_3)
			{
				_0xC980E62E33DF1D5C(&Var0, &(Global_1657223.f_10));
			}
			else
			{
				LEADERBOARDS2_WRITE_DATA(&Var0);
			}
		}
		return 1;
	}
	if (NETWORK_PLAYER_IS_CHEATER())
	{
	}
	if (!NETWORK_HAVE_ONLINE_PRIVILEGES())
	{
	}
	if (_0x1353F87E89946207())
	{
	}
	if (!_0xA699957E60D80214())
	{
	}
	return 0;
}

void func_192(int iParam0)
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
	func_193(&uLocal_176, 85, &vVar0, func_179(iParam0), iParam0, -1, 0, 0);
}

void func_193(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	struct<6> Var17;
	
	if (!IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		StringCopy(&Var0, sParam2, 32);
	}
	if (bParam7)
	{
	}
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	Global_1835392.f_2768 = 0;
	switch (iParam1)
	{
		case 2:
			if (iParam4 == 0)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = 826;
				}
				else
				{
					uParam0->f_44 = 815;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 1)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = 827;
				}
				else
				{
					uParam0->f_44 = 824;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_GRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 5;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 6;
					Global_1835392.f_2708 = 2;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 5;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 6;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 2)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = 828;
				}
				else
				{
					uParam0->f_44 = 825;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 2;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (!bParam6)
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "", 32);
				}
				else
				{
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "CoDriver", 32);
					NETWORK_PLAYER_GET_USERID(PLAYER_ID(), &Var17);
					MemCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), {Var17}, 8);
					Global_1835392.f_2780.f_27 = 1;
				}
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44.f_3 = 3;
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[2 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RRCE_NN", 32);
					}
				}
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					Global_1835392.f_2709 = 4;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 10 || iParam4 == 11)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = 928;
				}
				else
				{
					uParam0->f_44 = 849;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44.f_3 = 2;
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Laps", 32);
					StringCopy(&Var8, "", 32);
					StringIntConCat(&Var8, iParam5, 32);
					uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var8 };
					Global_1835392.f_2780.f_26 = iParam5;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN_LM", 32);
					}
				}
				else
				{
					Global_1835392.f_2780.f_26 = -1;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_FRCE_NN", 32);
					}
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 0;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 0;
					Global_1835392.f_2708 = 1;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 2;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			else if (iParam4 == 3)
			{
				if (iParam5 > 0 && !func_202())
				{
					uParam0->f_44 = (998 + (iParam5 - 1));
				}
				else
				{
					uParam0->f_44 = 975;
				}
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				if (iParam5 > 0 && !func_202())
				{
					Global_1835392.f_2780.f_26 = iParam5;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						if (iParam5 == 1)
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_L1", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
						else
						{
							StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_LM", 32);
							StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
						}
					}
					else if (iParam5 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_L1", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN_LM", 32);
					}
				}
				else
				{
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_RCE_NN", 32);
					}
					Global_1835392.f_2780.f_26 = -1;
				}
				Global_1835392.f_2780 = 1;
				if (iParam5 <= 0 || func_202())
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 2;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 3;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 2;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2709 = 4;
					Global_1835392.f_2708 = 3;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 1;
					Global_1835392.f_2780.f_29[2] = 3;
					Global_1835392.f_2780.f_29[3] = 5;
				}
				Global_1835392.f_2779 = 0;
			}
			break;
		
		case 1:
			if (iParam4 == 0 || iParam4 == 3)
			{
				uParam0->f_44 = 762;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 3)
				{
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_KOTH_NN", 32);
					}
				}
				else if (!IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_DM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 1 || iParam4 == 4)
			{
				uParam0->f_44 = 822;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (iParam4 == 4)
				{
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH", 32);
						StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TKOTH_NN", 32);
					}
				}
				else if (!IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_TDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			else if (iParam4 == 2)
			{
				uParam0->f_44 = 823;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_VEHDM_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KD", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[5 /*6*/]), "SCLB_C_DEATH", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 6;
				Global_1835392.f_2710[3] = 3;
				Global_1835392.f_2710[4] = 1;
				Global_1835392.f_2710[5] = 2;
				Global_1835392.f_2708 = 6;
				CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 4;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 4;
				Global_1835392.f_2780.f_29[4] = 5;
				Global_1835392.f_2780.f_29[5] = 5;
			}
			break;
		
		case 11:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 94:
			uParam0->f_44 = 193;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_GOLF", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_GOLF0", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_GOLF1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 7;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 92:
			uParam0->f_44 = 811;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_HUNTING", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), "CMSW", 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_HSCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIMEHUNT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_EKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_PHOTOS", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MONEY", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2710[4] = 6;
			Global_1835392.f_2708 = 5;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 6;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 6;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 15:
			uParam0->f_44 = 749;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_ARM", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 14:
			uParam0->f_44 = 190;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			if (iParam4 == -1)
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			}
			else
			{
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			}
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_DARTS", 32);
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2710[2] = 5;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 12:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "MP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			if (IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_TENNIS", 64);
				StringIntConCat(&(Global_1835392.f_2780.f_9), iParam4 + 1, 64);
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 87:
			uParam0->f_44 = 283;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TENNIS", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_LOSES", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TEN1", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TEN2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_TEN0", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 9;
			Global_1835392.f_2710[2] = 7;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 2;
			Global_1835392.f_2708 = 5;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			break;
		
		case 13:
			uParam0->f_44 = 912;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 2;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "GRID", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEb", 32);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "COVERED", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEc", 32);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "RANDOM", 32);
					StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGEa", 32);
					break;
			}
			switch (iParam5)
			{
				case 0:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
				
				case 1:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "SMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SMG", 64);
					break;
				
				case 2:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "AssaultRifles", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_ASSAULT", 64);
					break;
				
				case 3:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Shotguns", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_SHOTGUN", 64);
					break;
				
				case 4:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "LMGs", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_LMG", 64);
					break;
				
				case 5:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Heavies", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_HEAVY", 64);
					break;
				
				default:
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "WeaponId", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "Pistols", 32);
					StringCopy(&(Global_1835392.f_2780.f_9), "HUD_MG_PISTOL", 64);
					break;
			}
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_HITS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_SHOTS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_ACC", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 2;
			Global_1835392.f_2710[2] = 1;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 4;
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
			uParam0->f_44 = 203;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Type", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_RANGE", 32);
			MemCopy(&(Global_1835392.f_2780.f_9), {func_201(iParam1)}, 16);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WEAP", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 7;
			Global_1835392.f_2708 = 2;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 4;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 8;
			break;
		
		case 69:
		case 71:
		case 70:
			uParam0->f_44 = 202;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "HUD_MG_TRI", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			Global_1835392.f_2780.f_25 = 0;
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_RANK", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 0;
			Global_1835392.f_2710[2] = 0;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 1;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 2;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 0;
			Global_1835392.f_2780.f_29[3] = 0;
			break;
		
		case 80:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "OffroadRace", 32);
			Global_1835392.f_2780.f_25 = 0;
			Global_1835392.f_2780 = 1;
			StringCopy(&(Global_1835392.f_2780.f_1), "OFFR_TITLE", 32);
			StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 3;
			Global_1835392.f_2708 = 1;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 3:
			uParam0->f_44 = 791;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HRD_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WAVE", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_TKILLS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TDEATH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 0:
			if (iParam4 == 7 || iParam4 == 1)
			{
				uParam0->f_44 = 1200;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (iParam4 == 1)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTP", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (iParam4 == 1)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEIST_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_HEISTPNN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_HEADSHOT", 24);
				StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_KILLS", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 5;
				Global_1835392.f_2710[4] = 6;
				Global_1835392.f_2708 = 3;
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
				Global_1835392.f_2780.f_28 = 6;
				Global_1835392.f_2780.f_29[0] = 5;
				Global_1835392.f_2780.f_29[1] = 11;
				Global_1835392.f_2780.f_29[2] = 4;
				Global_1835392.f_2780.f_29[3] = 5;
				Global_1835392.f_2780.f_29[4] = 5;
			}
			else if (Global_4456448.f_62 == 1)
			{
				uParam0->f_44 = 777;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
				Global_1835392.f_2710[0] = 0;
				Global_1835392.f_2710[1] = 1;
				Global_1835392.f_2710[2] = 2;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2708 = 3;
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 2;
				Global_1835392.f_2780.f_29[1] = 5;
				Global_1835392.f_2780.f_29[2] = 5;
				Global_1835392.f_2780.f_29[3] = 5;
			}
			else
			{
				uParam0->f_44 = 780;
				uParam0->f_44.f_1 = 5;
				uParam0->f_44.f_3 = 1;
				StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
				uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
				Global_1835392.f_2780 = 1;
				if (!IS_STRING_NULL_OR_EMPTY(sParam3))
				{
					if (Global_4456448.f_2 == 5)
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS", 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS", 32);
					}
					StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
				}
				else if (Global_4456448.f_2 == 5)
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_LTS_NN", 32);
				}
				else
				{
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
				}
				if (func_200(Global_4456448.f_161209) || func_197(Global_4456448.f_161209))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else if (func_196(Global_4456448.f_161209))
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 2;
					Global_1835392.f_2710[2] = 0;
					Global_1835392.f_2708 = 2;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					Global_1835392.f_2780.f_28 = 4;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
				}
				else
				{
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_DEATH", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 1;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 0;
					Global_1835392.f_2708 = 3;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					Global_1835392.f_2780.f_28 = 5;
					Global_1835392.f_2780.f_29[0] = 5;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
				}
			}
			break;
		
		case 8:
			uParam0->f_44 = 795;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Mission", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_JUMPS", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_RANK", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			SET_BIT(&(Global_1835392.f_2768), 1);
			Global_1835392.f_2754[1] = -1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 0;
			Global_1835392.f_2708 = 3;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 11;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 85:
			uParam0->f_44 = 274;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_BJ_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_CASH", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_TOTCASH", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 3;
			Global_1835392.f_2708 = 2;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
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
							uParam0->f_44 = 965;
							break;
						
						case 9:
							uParam0->f_44 = 966;
							break;
						
						case 4:
							uParam0->f_44 = 967;
							break;
						
						case 8:
							uParam0->f_44 = 968;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 1;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 1:
				case 2:
				case 3:
					switch (iParam4)
					{
						case 1:
							uParam0->f_44 = 969;
							break;
						
						case 2:
							uParam0->f_44 = 970;
							break;
						
						case 3:
							uParam0->f_44 = 973;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 7:
					uParam0->f_44 = 971;
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_AVG_HEI", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 1;
					Global_1835392.f_2710[1] = 4;
					Global_1835392.f_2710[2] = 3;
					Global_1835392.f_2710[3] = 2;
					Global_1835392.f_2708 = 4;
					CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 4;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
				
				case 6:
				case 5:
					switch (iParam4)
					{
						case 6:
							uParam0->f_44 = 972;
							break;
						
						case 5:
							uParam0->f_44 = 974;
							break;
					}
					uParam0->f_44.f_1 = 1;
					uParam0->f_44.f_3 = 0;
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
					Global_1835392.f_2780 = 1;
					if (!IS_STRING_NULL_OR_EMPTY(sParam3))
					{
						StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
					}
					else
					{
						StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
					}
					StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
					StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
					Global_1835392.f_2710[0] = 0;
					Global_1835392.f_2710[1] = 3;
					Global_1835392.f_2710[2] = 2;
					Global_1835392.f_2710[3] = 1;
					Global_1835392.f_2708 = 4;
					CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
					SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
					Global_1835392.f_2780.f_29[0] = 12;
					Global_1835392.f_2780.f_29[1] = 5;
					Global_1835392.f_2780.f_29[2] = 5;
					Global_1835392.f_2780.f_29[3] = 5;
					break;
			}
			break;
		
		case 83:
			uParam0->f_44 = 192;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			if (!IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_DIST", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2710[1] = 5;
			Global_1835392.f_2710[2] = 4;
			Global_1835392.f_2710[3] = 3;
			Global_1835392.f_2708 = 4;
			CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 17;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 82:
			uParam0->f_44 = 850;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 4;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 2;
			Global_1835392.f_2708 = 4;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_29[0] = 10;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 84:
			uParam0->f_44 = 820;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[0 /*16*/].f_8 = { Var0 };
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "PS_TITLE", 32);
				StringCopy(&(Global_1835392.f_2780.f_9), sParam3, 64);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_MIS_NN", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_SCORE", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_TIME", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_ACC", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_MEDAL1", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL2", 24);
			StringCopy(&(Global_1835392.f_2717[4 /*6*/]), "SCLB_C_MEDAL3", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 5;
			Global_1835392.f_2710[4] = 4;
			Global_1835392.f_2710[5] = 3;
			Global_1835392.f_2708 = 6;
			CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[4]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[5]);
			Global_1835392.f_2780.f_29[0] = 4;
			Global_1835392.f_2780.f_29[1] = 9;
			Global_1835392.f_2780.f_29[2] = 4;
			Global_1835392.f_2780.f_29[3] = 5;
			Global_1835392.f_2780.f_29[4] = 5;
			Global_1835392.f_2780.f_29[5] = 5;
			break;
		
		case 86:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			uParam0->f_44.f_3.f_1[1 /*16*/].f_8 = { Var0 };
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StuntPlaneRace", 32);
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2780.f_25 = 0;
			if (!IS_STRING_NULL_OR_EMPTY(sParam3))
			{
				StringCopy(&(Global_1835392.f_2780.f_1), sParam3, 32);
			}
			else
			{
				StringCopy(&(Global_1835392.f_2780.f_1), "SPR_TITLE", 32);
			}
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_TIME", 24);
			Global_1835392.f_2710[0] = 2;
			Global_1835392.f_2708 = 1;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			Global_1835392.f_2780.f_28 = 3;
			Global_1835392.f_2780.f_29[0] = 1;
			break;
		
		case 91:
			uParam0->f_44 = 817;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 3;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "GameType", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/]), "Location", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/]), "Type", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "SP", 32);
			Global_1835392.f_2780 = 1;
			if (iParam5 <= 0)
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 4;
				Global_1835392.f_2710[2] = 1;
				Global_1835392.f_2710[3] = 0;
				Global_1835392.f_2709 = 6;
				Global_1835392.f_2708 = 2;
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				Global_1835392.f_2780.f_28 = 4;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 3;
			}
			else
			{
				StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_RT", 24);
				StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_BL", 24);
				StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_VEH", 24);
				StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "", 24);
				Global_1835392.f_2710[0] = 3;
				Global_1835392.f_2710[1] = 2;
				Global_1835392.f_2710[2] = 4;
				Global_1835392.f_2710[3] = 1;
				Global_1835392.f_2709 = 4;
				Global_1835392.f_2708 = 3;
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
				SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
				Global_1835392.f_2780.f_28 = 5;
				Global_1835392.f_2780.f_29[0] = 1;
				Global_1835392.f_2780.f_29[1] = 1;
				Global_1835392.f_2780.f_29[2] = 3;
			}
			Global_1835392.f_2779 = 0;
			switch (iParam4)
			{
				case 0:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_5", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGCR_6", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "StreetRace", 32);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_1", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_2", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_3", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[1 /*16*/].f_8), "MGSR_4", 32);
					StringCopy(&(uParam0->f_44.f_3.f_1[2 /*16*/].f_8), "SeaRace", 32);
					break;
				
				default:
					break;
			}
			break;
		
		case 888:
			uParam0->f_44 = 1201;
			uParam0->f_44.f_1 = 5;
			uParam0->f_44.f_3 = 1;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "ArenaMode", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_WINS", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_GAMES", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 2;
			Global_1835392.f_2710[3] = 3;
			MemCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), {func_195(iParam4)}, 8);
			Global_1835392.f_2708 = 4;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			switch (iParam4)
			{
				case 1:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BUZZ", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 2:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CARN", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 3:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_FLAGW", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_FLAGS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 4:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_WRECK", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 5:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_BOMBB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_POINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_GOALS", 24);
					break;
				
				case 6:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_GAMEM", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_CPOINTS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_KILLS", 24);
					break;
				
				case 7:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_MNSTR", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_DAMDEALT", 24);
					break;
				
				case 8:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_HOTB", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_PASSES", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TIMESUR", 24);
					Global_1835392.f_2780.f_29[3] = 9;
					break;
				
				case 9:
					StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_TAGT", 32);
					StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_KILLS", 24);
					StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TAGS", 24);
					break;
			}
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 5;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 5;
			break;
		
		case 889:
			uParam0->f_44 = 1202;
			uParam0->f_44.f_1 = 1;
			uParam0->f_44.f_3 = 0;
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/]), "", 32);
			StringCopy(&(uParam0->f_44.f_3.f_1[0 /*16*/].f_8), "", 32);
			StringCopy(&(Global_1835392.f_2780.f_1), "SCLB_ARN_CAREER", 32);
			StringCopy(&(Global_1835392.f_2717[0 /*6*/]), "SCLB_C_CARPT", 24);
			StringCopy(&(Global_1835392.f_2717[1 /*6*/]), "SCLB_C_WLRAT", 24);
			StringCopy(&(Global_1835392.f_2717[2 /*6*/]), "SCLB_C_MATCHES", 24);
			StringCopy(&(Global_1835392.f_2717[3 /*6*/]), "SCLB_C_TITLE", 24);
			Global_1835392.f_2710[0] = 0;
			Global_1835392.f_2710[1] = 1;
			Global_1835392.f_2710[2] = 3;
			Global_1835392.f_2710[3] = 4;
			Global_1835392.f_2780 = 1;
			Global_1835392.f_2708 = 4;
			Global_1835392.f_2780.f_28 = 5;
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[0]);
			CLEAR_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[1]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[2]);
			SET_BIT(&(Global_1835392.f_2769), Global_1835392.f_2710[3]);
			Global_1835392.f_2780.f_28 = 5;
			Global_1835392.f_2780.f_29[0] = 5;
			Global_1835392.f_2780.f_29[1] = 4;
			Global_1835392.f_2780.f_29[2] = 5;
			Global_1835392.f_2780.f_29[3] = 21;
			break;
	}
	iVar16 = 0;
	iVar16 = 0;
	while (iVar16 < Global_1835392.f_2708)
	{
		if (IS_BIT_SET(Global_1835392.f_2769, Global_1835392.f_2710[iVar16]))
		{
			SET_BIT(&(Global_1835392.f_2770), iVar16);
		}
		iVar16++;
	}
	Global_1835392.f_2826 = func_194(Var0, uParam0->f_44, iParam1, iParam4, iParam5, bParam6);
}

var func_194(struct<8> Param0, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12)
{
	char cVar0[64];
	
	MemCopy(&cVar0, {Param0}, 16);
	StringIntConCat(&cVar0, iParam8, 64);
	StringConCat(&cVar0, "_", 64);
	if (func_159(iParam8))
	{
		if (bParam12)
		{
			StringConCat(&cVar0, "CoDri", 64);
		}
		else
		{
			StringConCat(&cVar0, "Dri", 64);
		}
		StringConCat(&cVar0, "_", 64);
	}
	StringIntConCat(&cVar0, iParam9, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam10, 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam11, 64);
	return GET_HASH_KEY(&cVar0);
}

struct<6> func_195(int iParam0)
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

bool func_196(int iParam0)
{
	return iParam0 == 74;
}

var func_197(int iParam0)
{
	return (func_199(iParam0) || func_198(iParam0));
}

bool func_198(int iParam0)
{
	return iParam0 == 44;
}

bool func_199(int iParam0)
{
	return iParam0 == 45;
}

bool func_200(int iParam0)
{
	return iParam0 == 12;
}

struct<6> func_201(int iParam0)
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

int func_202()
{
	if ((((((((((Global_4456448.f_55685 == 1 || Global_4456448.f_55685 == 3) || Global_4456448.f_55685 == 5) || Global_4456448.f_55685 == 7) || Global_4456448.f_55685 == 19) || Global_4456448.f_55685 == 8) || Global_4456448.f_55685 == 9) || Global_4456448.f_55685 == 11) || Global_4456448.f_55685 == 13) || Global_4456448.f_55685 == 21) || Global_4456448.f_55685 == 23)
	{
		return 1;
	}
	return 0;
}

var func_203()
{
	return NETWORK_IS_SIGNED_ONLINE();
}

void func_204(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9)
{
	if (*uParam0 == 0)
	{
		*uParam0 = REQUEST_SCALEFORM_MOVIE_INSTANCE("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_3[0] = iParam2;
	uParam0->f_3[1] = iParam4;
	uParam0->f_3[2] = iParam6;
	uParam0->f_3[3] = iParam8;
	uParam0->f_3[4] = 359;
	uParam0->f_3[5] = 359;
	uParam0->f_3[6] = 359;
	uParam0->f_3[7] = 359;
	uParam0->f_12[0] = func_205(iParam2 != 359, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam2, 1), "");
	uParam0->f_12[1] = func_205(iParam4 != 359, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam4, 1), "");
	uParam0->f_12[2] = func_205(iParam6 != 359, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam6, 1), "");
	uParam0->f_12[3] = func_205(iParam8 != 359, GET_CONTROL_INSTRUCTIONAL_BUTTON(2, iParam8, 1), "");
	uParam0->f_12[4] = 0;
	uParam0->f_12[5] = 0;
	uParam0->f_12[6] = 0;
	uParam0->f_12[7] = 0;
	uParam0->f_21[0] = sParam3;
	uParam0->f_21[1] = sParam5;
	uParam0->f_21[2] = iParam7;
	uParam0->f_21[3] = iParam9;
	if (bParam1)
	{
		uParam0->f_2 = 1;
	}
	else
	{
		uParam0->f_2 = 0;
	}
	if (HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
	{
		func_21(&(uParam0->f_1), 1);
	}
}

char* func_205(bool bParam0, var uParam1, char* sParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return sParam2;
}

void func_206()
{
	func_207(PLAYER_PED_ID(), "GENERIC_CURSE_MED", 24);
}

void func_207(var uParam0, char* sParam1, int iParam2)
{
	_PLAY_AMBIENT_SPEECH1(uParam0, sParam1, func_208(iParam2), 1);
}

int func_208(int iParam0)
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

int func_209()
{
	if (func_44(0))
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

void func_210(int iParam0, int iParam1)
{
	Global_93721.f_7 = iParam0;
	Global_93721.f_8 = iParam1;
}

void func_211(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		SET_BIT(&(uParam0->f_603), iParam1);
	}
	else
	{
		CLEAR_BIT(&(uParam0->f_603), iParam1);
	}
}

int func_212(var uParam0, int iParam1, var uParam2, var uParam3, float fParam4)
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
	*uParam3 = (*uParam3 + CEIL(((fParam4 * 50f) + (fParam4 * IntToFloat(iVar0)))));
	*uParam3 = (*uParam3 + CEIL(((fParam4 * 1.5f) * TO_FLOAT(*uParam2))));
	func_213(func_414(), 1, *uParam3, 0, 0);
	return 1;
}

void func_213(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_214(Global_106565.f_28044[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
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

int func_214(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	func_247();
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
					func_354(99, 1);
					func_246(joaat("sp0_money_total_spent"), iParam3);
					break;
				
				case 1:
					func_246(joaat("sp1_money_total_spent"), iParam3);
					break;
				
				case 2:
					func_246(joaat("sp2_money_total_spent"), iParam3);
					break;
			}
			func_230(0);
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_225(5))
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
							func_246(joaat("sp0_money_spent_on_tattoos"), iParam3);
							break;
						
						case 1:
							func_246(joaat("sp1_money_spent_on_tattoos"), iParam3);
							break;
						
						case 2:
							func_246(joaat("sp2_money_spent_on_tattoos"), iParam3);
							break;
					}
					if (func_225(1))
					{
						fVar0 = 0f;
						iVar1 = 1;
					}
					break;
				
				case 21:
					switch (iParam0)
					{
						case 0:
							func_246(joaat("sp0_money_spent_on_taxis"), iParam3);
							break;
						
						case 1:
							func_246(joaat("sp1_money_spent_on_taxis"), iParam3);
							break;
						
						case 2:
							func_246(joaat("sp2_money_spent_on_taxis"), iParam3);
							break;
					}
					break;
				
				case 25:
					switch (iParam0)
					{
						case 0:
							func_246(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 1:
							func_246(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
							break;
						
						case 2:
							func_246(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
							func_246(joaat("sp0_money_spent_property"), iParam3);
							break;
						
						case 1:
							func_246(joaat("sp1_money_spent_property"), iParam3);
							break;
						
						case 2:
							func_246(joaat("sp2_money_spent_property"), iParam3);
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
									func_246(joaat("sp0_money_spent_in_clothes"), iParam3);
									break;
								
								case 1:
									func_246(joaat("sp1_money_spent_in_clothes"), iParam3);
									break;
								
								case 2:
									func_246(joaat("sp2_money_spent_in_clothes"), iParam3);
									break;
							}
							break;
						
						case joaat("hairdo_shop_sp"):
							switch (iParam0)
							{
								case 0:
									func_246(joaat("sp0_money_spent_on_hairdos"), iParam3);
									break;
								
								case 1:
									func_246(joaat("sp1_money_spent_on_hairdos"), iParam3);
									break;
								
								case 2:
									func_246(joaat("sp2_money_spent_on_hairdos"), iParam3);
									break;
							}
							if (func_225(0))
							{
								fVar0 = 0f;
								iVar1 = 0;
							}
							break;
						
						case joaat("gunclub_shop"):
							switch (iParam0)
							{
								case 0:
									func_246(joaat("sp0_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 1:
									func_246(joaat("sp1_money_spent_in_buying_guns"), iParam3);
									break;
								
								case 2:
									func_246(joaat("sp2_money_spent_in_buying_guns"), iParam3);
									break;
							}
							break;
						
						case joaat("carmod_shop"):
							switch (iParam0)
							{
								case 0:
									func_246(joaat("sp0_money_spent_car_mods"), iParam3);
									break;
								
								case 1:
									func_246(joaat("sp1_money_spent_car_mods"), iParam3);
									break;
								
								case 2:
									func_246(joaat("sp2_money_spent_car_mods"), iParam3);
									break;
							}
							func_224(iParam3);
							break;
					}
					break;
			}
			break;
		
		case 1:
			switch (iParam0)
			{
				case 0:
					func_354(95, iParam3);
					break;
				
				case 1:
					func_354(97, iParam3);
					break;
				
				case 2:
					func_354(96, iParam3);
					break;
			}
			func_354(98, iParam3);
			break;
	}
	iVar2 = iParam0;
	iParam3 = FLOOR((fVar0 * TO_FLOAT(iParam3)));
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
					func_246(joaat("sp0_total_cash_earned"), iParam3);
					break;
				
				case 1:
					func_246(joaat("sp1_total_cash_earned"), iParam3);
					break;
				
				case 2:
					func_246(joaat("sp2_total_cash_earned"), iParam3);
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
	func_216(iParam0);
	if (Global_36425 == 15)
	{
		func_215(0);
	}
	return 1;
}

void func_215(bool bParam0)
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

void func_216(int iParam0)
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

void func_217(int iParam0)
{
	bool bVar0;
	char cVar1[64];
	
	if (iParam0 == 8)
	{
		func_223(129, 0, -1, 1);
		return;
	}
	if (iParam0 == 9)
	{
		func_223(135, 0, -1, 1);
		return;
	}
	if (iParam0 == 10)
	{
		func_223(136, 0, -1, 1);
		return;
	}
	if (iParam0 == 11)
	{
		func_223(137, 0, -1, 1);
		return;
	}
	if (iParam0 == 12)
	{
		func_220(8269, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 13)
	{
		func_220(8270, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 14)
	{
		func_220(8271, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 15)
	{
		func_220(8272, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 16)
	{
		func_220(8273, 0, -1, 1, 0);
		return;
	}
	if (iParam0 == 17)
	{
		func_220(8274, 0, -1, 1, 0);
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
	else if (IS_BIT_SET(Global_106565.f_20558.f_471, iParam0) || IS_BIT_SET(Global_2097152[func_219() /*10778*/].f_6165.f_10, iParam0))
	{
		bVar0 = true;
		CLEAR_BIT(&(Global_106565.f_20558.f_471), iParam0);
		CLEAR_BIT(&(Global_2097152[func_219() /*10778*/].f_6165.f_10), iParam0);
	}
	if (bVar0)
	{
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		_SET_NOTIFICATION_TEXT_ENTRY("COUP_RED");
		ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_218(iParam0));
		_SET_NOTIFICATION_MESSAGE(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

char* func_218(int iParam0)
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

int func_219()
{
	int iVar0;
	
	iVar0 = 0;
	return iVar0;
}

void func_220(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	
	if (bParam4)
	{
	}
	iVar0 = Global_2539502[iParam0 /*3*/][func_221(iParam2)];
	if (iVar0 != 0)
	{
		STAT_SET_INT(iVar0, iParam1, iParam3);
	}
}

int func_221(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_222();
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

int func_222()
{
	return Global_1312745;
}

int func_223(int iParam0, int iParam1, int iParam2, int iParam3)
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
		iParam2 = func_222();
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

void func_224(int iParam0)
{
	func_354(93, iParam0);
	func_354(29, iParam0);
	func_354(30, iParam0);
}

int func_225(int iParam0)
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
		return func_227(129, -1, -1);
	}
	if (iParam0 == 9)
	{
		return func_227(135, -1, -1);
	}
	if (iParam0 == 10)
	{
		return func_227(136, -1, -1);
	}
	if (iParam0 == 11)
	{
		return func_227(137, -1, -1);
	}
	if (iParam0 == 12)
	{
		iVar0 = GET_CLOUD_TIME_AS_INT();
		iVar1 = func_226(8269, -1, 0);
		if (iVar1 == 0 || iVar0 >= iVar1)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 13)
	{
		iVar2 = GET_CLOUD_TIME_AS_INT();
		iVar3 = func_226(8270, -1, 0);
		if (iVar3 == 0 || iVar2 >= iVar3)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 14)
	{
		iVar4 = GET_CLOUD_TIME_AS_INT();
		iVar5 = func_226(8271, -1, 0);
		if (iVar5 == 0 || iVar4 >= iVar5)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 15)
	{
		iVar6 = GET_CLOUD_TIME_AS_INT();
		iVar7 = func_226(8272, -1, 0);
		if (iVar7 == 0 || iVar6 >= iVar7)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 16)
	{
		iVar8 = GET_CLOUD_TIME_AS_INT();
		iVar9 = func_226(8273, -1, 0);
		if (iVar9 == 0 || iVar8 >= iVar9)
		{
			return 0;
		}
		return 1;
	}
	if (iParam0 == 17)
	{
		iVar10 = GET_CLOUD_TIME_AS_INT();
		iVar11 = func_226(8274, -1, 0);
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
	return IS_BIT_SET(Global_2097152[func_219() /*10778*/].f_6165.f_10, iParam0);
}

int func_226(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	var uVar1;
	
	if (iParam2 == 0)
	{
	}
	uVar0 = Global_2539502[iParam0 /*3*/][func_221(iParam1)];
	if (STAT_GET_INT(uVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = 0;
	if (iParam1 == -1)
	{
		iParam1 = func_222();
	}
	iVar1 = func_229(iParam0, iParam1);
	uVar2 = func_228(iParam0);
	if (0 != iVar1)
	{
		iVar0 = STAT_GET_BOOL_MASKED(iVar1, uVar2, iParam2);
	}
	return iVar0;
}

int func_228(int iParam0)
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

int func_229(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == -1)
	{
		iParam1 = func_222();
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

int func_230(bool bParam0)
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
		func_245(27, iVar1);
	}
	if (iVar1 < 200000000)
	{
		return 0;
	}
	func_231(27, 1);
	return 1;
}

int func_231(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_232(iParam0, iParam1);
}

int func_232(int iParam0, int iParam1)
{
	if (func_244(14) && !func_243(iParam0))
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
	if (func_242(&Global_4269608))
	{
		if (func_240(&Global_4269608, iParam0))
		{
			return 0;
		}
		if (func_233(&Global_4269608, iParam0))
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

int func_233(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_244(14) && !func_243(iParam1))
	{
		return 0;
	}
	if (func_240(uParam0, iParam1))
	{
		return 0;
	}
	if (func_239(uParam0) < 0f)
	{
		func_238(uParam0, 0);
	}
	func_236(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_234(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_234(var uParam0, int iParam1)
{
	int iVar0;
	
	if (HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_244(14) && !func_243(iParam1))
	{
		return 0;
	}
	if (func_240(uParam0, iParam1))
	{
		return 0;
	}
	if (func_239(uParam0) < 0f)
	{
		func_238(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_235(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_235(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_236(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_237(uParam0, iVar0);
		iVar0++;
	}
	func_238(uParam0, (Global_4269607 - 0.5f));
}

void func_237(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_238(var uParam0, float fParam1)
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

float func_239(var uParam0)
{
	return uParam0->f_80;
}

bool func_240(var uParam0, int iParam1)
{
	return func_241(uParam0, iParam1) != -1;
}

int func_241(var uParam0, int iParam1)
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

bool func_242(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_243(int iParam0)
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

bool func_244(int iParam0)
{
	return Global_36425 == iParam0;
}

int func_245(int iParam0, int iParam1)
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

void func_246(int iParam0, int iParam1)
{
	int iVar0;
	
	STAT_GET_INT(iParam0, &iVar0, -1);
	iVar0 = (iVar0 + iParam1);
	STAT_SET_INT(iParam0, iVar0, 1);
}

void func_247()
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

void func_248(int iParam0, int iParam1, int iParam2)
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
		func_223((891 + iParam0), 1, -1, 1);
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
		func_249();
	}
}

void func_249()
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
		func_245(13, FLOOR(Global_106565.f_10188.f_3853));
	}
	if (!DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_71590)
		{
			if (func_250() == 2 == 0 && !NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_106299 = 0;
				}
				if (!Global_56494)
				{
					func_209();
				}
			}
		}
	}
}

int func_250()
{
	return Global_25765;
}

void func_251(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_106565.f_9079.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_106565.f_9079.f_99.f_58[iParam0] = iParam1;
}

int func_252(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_106565.f_9079.f_99.f_58[iParam0];
}

void func_253(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
	{
		return;
	}
	if (bParam1 == IS_BIT_SET(Global_26140[iVar0 /*23*/].f_11, 20))
	{
		return;
	}
	if (bParam1)
	{
		SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 20);
	}
	else
	{
		CLEAR_BIT(&(Global_26140[iVar0 /*23*/].f_11), 20);
	}
	if (Global_26137 == 1)
	{
		Global_26138 = 1;
	}
	Global_26137 = 1;
	SET_BIT(&(Global_26140[iVar0 /*23*/].f_11), 20);
}

bool func_254(var uParam0, int iParam1)
{
	return IS_BIT_SET(uParam0->f_603, iParam1);
}

var func_255()
{
	return REQUEST_SCALEFORM_MOVIE("MP_BIG_MESSAGE_FREEMODE");
}

void func_256(vector3 vParam0, var uParam3, var uParam4, int iParam5, var uParam6, float fParam7)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	bool bVar7;
	var uVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	vector3 vVar13;
	vector3 vVar16;
	float fVar19;
	var uVar20;
	vector3 vVar21;
	vector3 vVar24;
	
	uVar0 = PLAYER_PED_ID();
	iVar1 = 0;
	bVar2 = IS_PED_INJURED(uVar0);
	if (bVar2)
	{
		*iParam5 = 2;
		return;
	}
	uVar3 = GET_PED_PARACHUTE_STATE(uVar0);
	uVar4 = GET_PED_PARACHUTE_LANDING_TYPE(uVar0);
	uVar5 = IS_ENTITY_IN_AIR(uVar0);
	uVar6 = IS_PED_RAGDOLL(uVar0);
	bVar7 = DOES_ENTITY_EXIST(uParam3);
	uVar8 = (bVar7 && IS_PED_ON_SPECIFIC_VEHICLE(uVar0, uParam3));
	bVar9 = ((bVar7 && !IS_PED_INJURED(uParam4)) && IS_ENTITY_TOUCHING_ENTITY(uVar0, uParam4));
	bVar10 = (bVar7 && GET_VEHICLE_TRAILER_VEHICLE(uParam3, &iVar1));
	bVar11 = ((bVar10 && !IS_ENTITY_DEAD(iVar1, 0)) && IS_PED_ON_SPECIFIC_VEHICLE(uVar0, iVar1));
	bVar12 = (!bVar7 && !func_417(vParam0));
	if (bVar12)
	{
		vVar13 = { GET_ENTITY_COORDS(uVar0, 1) };
		vVar16 = { vVar13 - vParam0 };
		fVar19 = SQRT(((vVar16.x * vVar16.x) + (vVar16.y * vVar16.y)));
		*fParam7 = fVar19;
		if ((vVar16.z < 5f && vVar16.z > -2f) && fVar19 < 15f)
		{
			*uParam6 = func_259(CEIL(((100f * (15f - fVar19)) / 15f)) + 4, 0, 100);
			*iParam5 = 1;
		}
		else
		{
			*iParam5 = 3;
		}
	}
	if (bVar7)
	{
		if (func_257(uParam3, uParam4))
		{
			*fParam7 = 0f;
			*uParam6 = 100;
			*iParam5 = 1;
		}
		else
		{
			*uParam6 = 0;
			*iParam5 = 3;
		}
	}
	if (bVar10)
	{
		GET_VEHICLE_TRAILER_VEHICLE(uParam3, &uVar20);
		vVar21 = { GET_ENTITY_COORDS(uVar0, 1) };
		vVar24 = { GET_ENTITY_COORDS(uVar20, 1) };
	}
}

int func_257(var uParam0, var uParam1)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	vector3 vVar9;
	
	if ((!IS_PED_INJURED(PLAYER_PED_ID()) && DOES_ENTITY_EXIST(uParam0)) && IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		vVar5 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
		if (func_358(GET_ENTITY_MODEL(uParam0)))
		{
			iVar8 = 0;
			iVar8 = 0;
			while (iVar8 < 6)
			{
				uVar1 = GET_TRAIN_CARRIAGE(uParam0, iVar8);
				if (DOES_ENTITY_EXIST(uVar1))
				{
					vVar2 = { GET_ENTITY_COORDS(uParam0, 1) };
					if (IS_PED_ON_SPECIFIC_VEHICLE(PLAYER_PED_ID(), uVar1))
					{
						return 1;
					}
				}
				iVar8++;
			}
		}
		if (DOES_ENTITY_EXIST(uParam0))
		{
			GET_VEHICLE_TRAILER_VEHICLE(uParam0, &uVar0);
			if ((IS_PED_ON_SPECIFIC_VEHICLE(PLAYER_PED_ID(), uParam0) || IS_ENTITY_TOUCHING_ENTITY(PLAYER_PED_ID(), uParam0)) || ((DOES_ENTITY_EXIST(uParam1) && !IS_ENTITY_DEAD(uParam1, 0)) && IS_ENTITY_TOUCHING_ENTITY(PLAYER_PED_ID(), uParam1)))
			{
				if (vVar2.z < vVar5.z)
				{
					return 1;
				}
			}
		}
		if (DOES_ENTITY_EXIST(uVar0))
		{
			if (!IS_ENTITY_DEAD(uVar0, 0))
			{
				if (IS_PED_ON_SPECIFIC_VEHICLE(PLAYER_PED_ID(), uVar0))
				{
					return 1;
				}
				else if (IS_ENTITY_TOUCHING_ENTITY(PLAYER_PED_ID(), uVar0))
				{
					vVar9 = { GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uVar0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 1)) };
					vVar9.x = func_258((ABSF(vVar9.x) - 1.305f), 0f);
					if (vVar9.y >= 0f)
					{
						vVar9.y = func_258((vVar9.y - 5.98f), 0f);
					}
					else
					{
						vVar9.y = func_258((-vVar9.y - 6.21f), 0f);
					}
					if (vVar9.y == 0f && vVar9.x == 0f)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

float func_258(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_259(int iParam0, int iParam1, int iParam2)
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

void func_260(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	float fVar0;
	int iVar1;
	
	if (!func_448(&uParam3))
	{
		return;
	}
	fVar0 = func_447(&uParam3);
	if (fVar0 > 1.4f)
	{
		return;
	}
	iVar1 = (170 - CEIL(((170f * fVar0) / 1.4f)));
	DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
	DRAW_MARKER(6, vParam0, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, iVar1, 0, 0, 2, 0, 0, 0, 0);
}

void func_261(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_359(uParam1);
	if (func_451(func_452(iParam2)))
	{
		if (!func_254(uParam0, 0))
		{
			if (iParam3 > 1)
			{
				func_331("BJ_MG_MTOBJ", 7500, 1);
			}
			else if (iVar0 != 0)
			{
				if (func_358(iVar0))
				{
					func_331("BJ_MG_TRAIN", 7500, 1);
				}
				else
				{
					func_331("BJ_MG_BOAT", 7500, 1);
				}
			}
			else
			{
				func_331("BJ_MG_STOBJ", 7500, 1);
			}
			func_211(uParam0, 0, 1);
		}
	}
	if (func_328("BJ_FALLHLP") && Global_17272.f_135)
	{
		CLEAR_HELP(1);
		func_211(uParam0, 1, 0);
	}
	if (!func_254(uParam0, 1) && !Global_17272.f_135)
	{
		ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(0);
		CLEAR_HELP(1);
		func_329("BJ_FALLHLP", -1);
		func_211(uParam0, 1, 1);
	}
	else if (!func_254(uParam0, 2))
	{
		if (GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == 1 || GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == 2)
		{
			CLEAR_HELP(1);
			if (_IS_INPUT_DISABLED(0))
			{
				func_329("BJ_PARAHLP_KM", 10000);
			}
			else
			{
				func_329("BJ_PARAHLP", 10000);
			}
			func_211(uParam0, 2, 1);
		}
	}
	else if (!func_254(uParam0, 3))
	{
		if (GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == -1 || GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == 3)
		{
			CLEAR_HELP(1);
			func_211(uParam0, 3, 1);
		}
	}
}

void func_262(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	var uVar15;
	vector3 vVar18;
	float fVar21;
	float fVar22;
	float fVar23;
	var uVar24;
	
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		if (DOES_ENTITY_EXIST(GET_ENTITY_ATTACHED_TO(PLAYER_PED_ID())))
		{
			vVar0 = { GET_ENTITY_SPEED_VECTOR(GET_ENTITY_ATTACHED_TO(PLAYER_PED_ID()), 0) };
		}
		else
		{
			vVar0 = { GET_ENTITY_SPEED_VECTOR(PLAYER_PED_ID(), 1) };
		}
		fVar21 = vVar0.y;
		vVar3 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
		vVar3.z = 0f;
	}
	if (DOES_ENTITY_EXIST(*uParam0) && IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		vVar6 = { GET_ENTITY_COORDS(*uParam0, 1) };
		vVar6.z = 0f;
		vVar18 = { GET_ENTITY_VELOCITY(*uParam0) };
	}
	if (IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		GET_ENTITY_MATRIX(*uParam0, &vVar9, &uVar15, &uVar15, &uVar15);
		vVar9.z = 0f;
	}
	vVar12 = { vVar3 - vVar6 };
	vVar12.z = 0f;
	fVar23 = ABSF(func_266(vVar12, vVar9));
	if (func_265(*uParam0))
	{
		fVar22 = func_47((fVar21 - (fVar23 / fVar21)), 2f, 3f);
	}
	else
	{
		fVar22 = func_47((fVar21 + (fVar23 / fVar21)), 3f, 10f);
	}
	uVar24 = func_47(func_263(vVar18.y, fVar22, 0.5f), vVar18.y, fVar21);
	vVar18.y = func_263(vVar18.y, fVar22, 0.5f);
	if (((DOES_ENTITY_EXIST(*uParam0) && IS_VEHICLE_DRIVEABLE(*uParam0, 0)) && vVar18.y > 2f) && vVar18.y < _GET_VEHICLE_MAX_SPEED(*uParam0))
	{
		SET_DRIVE_TASK_MAX_CRUISE_SPEED(GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, 0), uVar24);
	}
}

float func_263(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	fVar0 = ((1f - COS(func_264((fParam2 * 3.141593f)))) * 0.5f);
	return ((fParam0 * (1f - fVar0)) + (fParam1 * fVar0));
}

float func_264(float fParam0)
{
	return (fParam0 * 57.29578f);
}

int func_265(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar9;
	vector3 vVar12;
	float fVar15;
	
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		vVar0 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
	}
	if (IS_VEHICLE_DRIVEABLE(uParam0, 0))
	{
		GET_ENTITY_MATRIX(uParam0, &vVar12, &uVar6, &uVar6, &vVar3);
	}
	vVar9 = { vVar0 - vVar3 };
	vVar9.z = 0f;
	vVar12.z = 0f;
	fVar15 = func_266(vVar9, vVar12);
	if (fVar15 < 0f)
	{
		return 1;
	}
	return 0;
}

float func_266(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_267(var uParam0, var uParam1, int iParam2)
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

Vector3 func_268(var uParam0, vector3 vParam1)
{
	var uVar0;
	
	vParam1.z = (vParam1.z + 0.15f);
	if (GET_GROUND_Z_FOR_3D_COORD(vParam1, &uVar0, 0, 0))
	{
		vParam1.z = uVar0;
	}
	if (func_269(uParam0))
	{
		SET_ENTITY_COORDS(uParam0, vParam1, 1, 0, 0, 1);
	}
	return vParam1;
}

bool func_269(var uParam0)
{
	if (!DOES_ENTITY_EXIST(uParam0))
	{
		return 0;
	}
	return !IS_ENTITY_DEAD(uParam0, 0);
}

void func_270(var uParam0, var uParam1)
{
	var uVar0[6];
	var uVar7;
	vector3 vVar8;
	float fVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	
	if (!func_448(uParam0))
	{
		func_472(uParam0);
	}
	if (func_447(uParam0) < 1f)
	{
		return;
	}
	if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		return;
	}
	iVar12 = GET_PED_NEARBY_PEDS(PLAYER_PED_ID(), &uVar0, -1);
	iVar13 = 0;
	while (iVar13 < 6)
	{
		if ((DOES_ENTITY_EXIST((*uParam1)[iVar13]) && !IS_ENTITY_DEAD((*uParam1)[iVar13], 0)) && !IS_PED_INJURED((*uParam1)[iVar13]))
		{
			if (func_272((*uParam1)[iVar13], &uVar0) == -1)
			{
				func_271(uParam1[iVar13]);
			}
			else
			{
				vVar8 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) - GET_ENTITY_COORDS((*uParam1)[iVar13], 1) };
				fVar11 = ((vVar8.x * vVar8.x) + (vVar8.y * vVar8.y));
				if (vVar8.z * vVar8.z) < (3f * fVar11)
				{
					func_271(uParam1[iVar13]);
				}
			}
		}
		iVar13++;
	}
	if (iVar12 > 0)
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if ((((DOES_ENTITY_EXIST(uVar0[iVar13]) && !IS_ENTITY_DEAD(uVar0[iVar13], 0)) && !IS_PED_INJURED(uVar0[iVar13])) && IS_PED_HUMAN(uVar0[iVar13])) && !IS_PED_IN_ANY_VEHICLE(uVar0[iVar13], 1))
			{
				if (func_272(uVar0[iVar13], uParam1) == -1)
				{
					vVar8 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) - GET_ENTITY_COORDS(uVar0[iVar13], 1) };
					fVar11 = ((vVar8.x * vVar8.x) + (vVar8.y * vVar8.y));
					if (vVar8.z * vVar8.z) > (3f * fVar11)
					{
						bVar15 = false;
						iVar14 = 0;
						while (iVar14 < *uParam1)
						{
							if (!DOES_ENTITY_EXIST((*uParam1)[iVar14]) || IS_PED_INJURED((*uParam1)[iVar14]))
							{
								(*uParam1)[iVar14] = uVar0[iVar13];
								OPEN_SEQUENCE_TASK(&uVar7);
								TASK_PLAY_ANIM(0, "oddjobs@basejump@", "ped_a_intro", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
								TASK_PLAY_ANIM(0, "oddjobs@basejump@", "ped_a_loop", 8f, -8f, -1, 1, 0, 0, 0, 0);
								CLOSE_SEQUENCE_TASK(uVar7);
								TASK_PERFORM_SEQUENCE(uVar0[iVar13], uVar7);
								CLEAR_SEQUENCE_TASK(&uVar7);
								iVar14 = *uParam1;
								bVar15 = true;
							}
							iVar14++;
						}
						if (!bVar15)
						{
							return;
						}
					}
				}
			}
			iVar13++;
		}
	}
}

void func_271(var uParam0)
{
	CLEAR_PED_TASKS(*uParam0);
	TASK_PLAY_ANIM(*uParam0, "oddjobs@basejump@", "ped_a_exit", 1090519040, -1056964608, -1, 0, 0, 0, 0, 0);
	*uParam0 = 0;
}

int func_272(int iParam0, var uParam1)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(iParam0))
	{
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (DOES_ENTITY_EXIST((*uParam1)[iVar0]))
			{
				if (iParam0 == (*uParam1)[iVar0])
				{
					return iVar0;
				}
			}
			iVar0++;
		}
	}
	return -1;
}

void func_273(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, bool bParam30, bool bParam31, bool bParam32, bool bParam33, bool bParam34, int iParam35, var uParam36)
{
	int iVar0;
	var uVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	
	_0xE30524E1871F481D(*uParam36);
	func_367();
	func_366();
	func_482();
	func_42(&(uParam2->f_26));
	*iParam19 = 0;
	*iParam21 = 0;
	*uParam25 = { 0f, 0f, 0f };
	*iParam22 = -1;
	*uParam29 = 0;
	*bParam30 = 0;
	func_318(uParam2);
	if (func_448(uParam24))
	{
		func_444(uParam24);
	}
	if (func_448(uParam23))
	{
		func_444(uParam23);
	}
	if (DOES_ENTITY_EXIST(*uParam7))
	{
		if (func_358(func_359(uParam0)))
		{
			DELETE_MISSION_TRAIN(uParam7);
		}
		else
		{
			if (!IS_ENTITY_DEAD(*uParam7, 0))
			{
				uVar1 = GET_PED_IN_VEHICLE_SEAT(*uParam7, -1, 0);
				if (DOES_ENTITY_EXIST(uVar1))
				{
					DELETE_PED(&uVar1);
				}
			}
			DELETE_VEHICLE(uParam7);
		}
	}
	iVar2 = 0;
	while (iVar2 < *iParam5)
	{
		if (DOES_ENTITY_EXIST((*iParam5)[iVar2]) && !IS_ENTITY_DEAD((*iParam5)[iVar2], 0))
		{
			CLEAR_PED_TASKS((*iParam5)[iVar2]);
			(*iParam5)[iVar2] = 0;
		}
		iVar2++;
	}
	if (DOES_ENTITY_EXIST(*uParam8))
	{
		DELETE_VEHICLE(uParam8);
	}
	if (DOES_ENTITY_EXIST(*uParam9))
	{
		if (!func_317(*uParam9) && DOES_ENTITY_EXIST(GET_PED_IN_VEHICLE_SEAT(*uParam9, -1, 0)))
		{
			uVar3 = GET_PED_IN_VEHICLE_SEAT(*uParam9, -1, 0);
			DELETE_PED(&uVar3);
		}
		DELETE_VEHICLE(uParam9);
	}
	if (!IS_ENTITY_DEAD(*uParam4, 0))
	{
		SET_PED_AS_NO_LONGER_NEEDED(uParam4);
	}
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
	{
		iVar0 = GET_VEHICLE_PED_IS_USING(PLAYER_PED_ID());
		if (DOES_ENTITY_EXIST(iVar0))
		{
			_0xF9ACF4A08098EA25(PLAYER_PED_ID(), 1);
			SET_ENTITY_COORDS(PLAYER_PED_ID(), GET_ENTITY_COORDS(iVar0, 1) + Vector(0f, 0f, 2f), 1, 0, 0, 1);
			if (DOES_ENTITY_EXIST(*uParam6) && iVar0 == *uParam6)
			{
				SET_PLAYERS_LAST_VEHICLE(*uParam6);
				func_277(*uParam6, func_316(iParam20), func_315(iParam20), 24, 0);
				SET_ENTITY_VELOCITY(iVar0, 0f, 0f, 0f);
				SET_ENTITY_COORDS(iVar0, func_316(iParam20), 1, 0, 0, 1);
				SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 1084227584);
				SET_ENTITY_HEADING(iVar0, func_315(iParam20));
			}
			else
			{
				if (!IS_ENTITY_A_MISSION_ENTITY(iVar0))
				{
					SET_ENTITY_AS_MISSION_ENTITY(iVar0, 1, 0);
				}
				DELETE_VEHICLE(&iVar0);
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
	if (*iParam16 > -1)
	{
		DELETE_CHECKPOINT(*uParam11);
		DELETE_CHECKPOINT(*uParam12);
		*iParam16 = -1;
	}
	if (DOES_BLIP_EXIST(uParam13))
	{
		REMOVE_BLIP(&uParam13);
	}
	if (DOES_BLIP_EXIST(uParam14))
	{
		REMOVE_BLIP(&uParam14);
	}
	iVar4 = 0;
	while (iVar4 < *iParam10)
	{
		if (DOES_ENTITY_EXIST((*iParam10)[iVar4]) && !IS_ENTITY_DEAD((*iParam10)[iVar4], 0))
		{
			SET_VEHICLE_LOD_MULTIPLIER((*iParam10)[iVar4], 1f);
			SET_ENTITY_LOAD_COLLISION_FLAG((*iParam10)[iVar4], 0, 1);
		}
		(*iParam10)[iVar4] = 0;
		iVar4++;
	}
	func_276(uParam2);
	*uParam3 = 0;
	func_275();
	func_274();
	DO_SCREEN_FADE_OUT(800);
}

void func_274()
{
	Global_25909 = 1;
}

void func_275()
{
	int iVar0;
	
	Local_100.f_66 = -1;
	Local_100.f_67 = 10f;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		Local_100.f_9[iVar0 /*7*/].f_3 = -1f;
		Local_100.f_9[iVar0 /*7*/].f_4 = -1f;
		Local_100.f_9[iVar0 /*7*/].f_5 = 0;
		Local_100.f_9[iVar0 /*7*/].f_6 = 0;
		iVar0++;
	}
	Local_100.f_5 = 0;
	Local_100.f_5.f_1 = -1f;
	Local_100.f_5.f_2 = 0;
	Local_100 = 0;
	Local_100.f_1 = 0;
}

void func_276(var uParam0)
{
	uParam0->f_603 = 0;
}

void func_277(int iParam0, vector3 vParam1, var uParam4, int iParam5, bool bParam6)
{
	struct<60> Var0;
	
	if (DOES_ENTITY_EXIST(iParam0) && IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		if (iParam5 != 24 && iParam5 != 25)
		{
			return;
		}
		if (iParam5 == 24)
		{
			if (DOES_ENTITY_EXIST(Global_70409.f_484[25]) && IS_VEHICLE_DRIVEABLE(Global_70409.f_484[25], 0))
			{
				if (Global_70409.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam6)
		{
			if ((IS_BIG_VEHICLE(iParam0) || GET_ENTITY_MODEL(iParam0) == joaat("bus")) || GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		func_314(iParam5);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		func_309(iParam0, &Var0);
		if (func_308(vParam1, 0f, 0f, 0f, 0))
		{
			vParam1 = { GET_ENTITY_COORDS(iParam0, 1) };
			uParam4 = GET_ENTITY_HEADING(iParam0);
		}
		if (iParam5 == 24)
		{
			if (GET_HASH_KEY(GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_71397 = GET_HASH_KEY(GET_THIS_SCRIPT_NAME());
			}
		}
		func_301(iParam5, &Var0, vParam1, uParam4, func_307(iParam0));
		func_278(iParam5, iParam0, 0);
	}
}

void func_278(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_298(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_70409.f_555[0 /*21*/].f_4 != GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_71316 != -1 && Global_71316 != iParam0)
	{
		return;
	}
	if (DOES_ENTITY_EXIST(iParam1))
	{
		if (IS_VEHICLE_DRIVEABLE(iParam1, 0))
		{
			if (!IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				SET_ENTITY_AS_MISSION_ENTITY(iParam1, 1, 1);
			}
			if (iParam0 == 24)
			{
				Global_106565.f_32743.f_4801 = func_506();
			}
			if (iParam1 != Global_70409.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = func_297(iParam0);
					if ((DOES_ENTITY_EXIST(iVar0) && IS_VEHICLE_DRIVEABLE(iVar0, 0)) && iParam1 != iVar0)
					{
						func_279(iVar0, 145);
					}
				}
				Global_71315 = iParam1;
				Global_71316 = iParam0;
				Global_71317 = iParam2;
			}
		}
	}
}

void func_279(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	if (!func_280(iParam0))
	{
		return;
	}
	if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
	{
		uVar0 = GET_PED_IN_VEHICLE_SEAT(iParam0, -1, 0);
		if (!DOES_ENTITY_EXIST(uVar0))
		{
			uVar0 = GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, -1);
		}
		if (DOES_ENTITY_EXIST(uVar0) && !IS_PED_INJURED(uVar0))
		{
			if (GET_ENTITY_MODEL(uVar0) == joaat("player_zero"))
			{
				iParam1 = 0;
			}
			else if (GET_ENTITY_MODEL(uVar0) == joaat("player_one"))
			{
				iParam1 = 1;
			}
			else if (GET_ENTITY_MODEL(uVar0) == joaat("player_two"))
			{
				iParam1 = 2;
			}
		}
		if ((iParam1 != 0 && iParam1 != 1) && iParam1 != 2)
		{
			iParam1 = Global_106565.f_2357.f_539.f_4321;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (GET_ENTITY_MODEL(iParam0) == Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66)
			{
				if (!IS_STRING_NULL_OR_EMPTY(&(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
				{
					if (ARE_STRINGS_EQUAL(GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)))
					{
						Global_106565.f_32743.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_106565.f_32743.f_5592[iVar1] = iVar2;
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
		if (GET_ENTITY_MODEL(iParam0) == Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66)
		{
			if (!IS_STRING_NULL_OR_EMPTY(&(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
			{
				if (ARE_STRINGS_EQUAL(GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), &(Global_106565.f_32743.f_5600[iVar1 /*78*/].f_1)))
				{
					Global_106565.f_32743.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_106565.f_32743.f_5590 = iParam1;
	Global_71314 = iParam0;
	Global_106565.f_32743.f_5588 = 1;
	func_309(iParam0, &(Global_106565.f_32743.f_5510));
}

int func_280(int iParam0)
{
	if ((((((((((!DOES_ENTITY_EXIST(iParam0) || !IS_VEHICLE_DRIVEABLE(iParam0, 0)) || func_295(iParam0, 0, 0)) || func_295(iParam0, 1, 0)) || func_295(iParam0, 2, 0)) || func_307(iParam0) != 145) || func_294(iParam0)) || func_293(iParam0)) || func_292(iParam0)) || func_291(iParam0)) || !func_281(GET_ENTITY_MODEL(iParam0)))
	{
		if (func_293(iParam0))
		{
		}
		if (func_293(iParam0))
		{
		}
		if (func_295(iParam0, 0, 0))
		{
		}
		if (func_295(iParam0, 1, 0))
		{
		}
		if (func_295(iParam0, 2, 0))
		{
		}
		if (func_307(iParam0) != 145)
		{
		}
		return 0;
	}
	return 1;
}

int func_281(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!func_282(iParam0, 0))
	{
		return 0;
	}
	if (((IS_THIS_MODEL_A_BOAT(iParam0) || IS_THIS_MODEL_A_PLANE(iParam0)) || IS_THIS_MODEL_A_HELI(iParam0)) || IS_THIS_MODEL_A_TRAIN(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("bus"):
		case joaat("stretch"):
		case joaat("barracks"):
		case joaat("armytanker"):
		case joaat("rhino"):
		case joaat("armytrailer"):
		case joaat("barracks2"):
		case joaat("flatbed"):
		case joaat("ripley"):
		case joaat("towtruck"):
		case joaat("towtruck2"):
		case joaat("airbus"):
		case joaat("coach"):
		case joaat("rentalbus"):
		case joaat("tourbus"):
		case joaat("firetruk"):
		case joaat("pbus"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("boattrailer"):
		case joaat("biff"):
		case joaat("hauler"):
		case joaat("docktrailer"):
		case joaat("phantom"):
		case joaat("pounder"):
		case joaat("tractor2"):
		case joaat("bulldozer"):
		case joaat("handler"):
		case joaat("tiptruck"):
		case joaat("cutter"):
		case joaat("dump"):
		case joaat("mixer"):
		case joaat("mixer2"):
		case joaat("rubble"):
		case joaat("scrap"):
		case joaat("tiptruck2"):
		case joaat("camper"):
		case joaat("taco"):
		case joaat("boxville"):
		case joaat("boxville2"):
		case joaat("boxville3"):
		case joaat("journey"):
		case joaat("mule"):
		case joaat("mule2"):
		case joaat("police"):
		case joaat("police2"):
		case joaat("police3"):
		case joaat("police4"):
		case joaat("policeb"):
		case joaat("policeold1"):
		case joaat("policeold2"):
		case joaat("policet"):
		case joaat("taxi"):
		case joaat("submersible"):
		case joaat("submersible2"):
		case joaat("monster"):
			return 0;
			break;
	}
	return 1;
}

int func_282(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!IS_MODEL_A_VEHICLE(iParam0))
	{
		return 0;
	}
	if (((((iParam0 == joaat("dominator2") && !NETWORK_IS_GAME_IN_PROGRESS()) || (iParam0 == joaat("buffalo3") && !NETWORK_IS_GAME_IN_PROGRESS())) || (iParam0 == joaat("gauntlet2") && !NETWORK_IS_GAME_IN_PROGRESS())) || iParam0 == joaat("blimp2")) || (iParam0 == joaat("stalion2") && !NETWORK_IS_GAME_IN_PROGRESS()))
	{
		if (!func_290())
		{
			return 0;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < GET_NUM_DLC_VEHICLES())
		{
			if (GET_DLC_VEHICLE_DATA(iVar0, &Var1))
			{
				if (iParam0 == Var1.f_1)
				{
					if (_IS_DLC_DATA_EMPTY(Var1))
					{
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp"))
	{
		if ((((!func_289() && !func_288()) && !func_287()) && !func_286()) && !func_290())
		{
			return 0;
		}
	}
	if ((iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs")) || iParam0 == joaat("khamelion"))
	{
		if ((IS_DURANGO_VERSION() || IS_PC_VERSION()) || IS_ORBIS_VERSION())
		{
		}
		else if (!func_287())
		{
			return 0;
		}
	}
	if (bParam1)
	{
		if (!func_285(iParam0))
		{
			return 0;
		}
	}
	if (!func_283(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_283(int iParam0)
{
	int iVar0;
	var uVar1;
	char cVar2[64];
	
	if (!func_284())
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
		case joaat("dune4"):
			StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64);
			break;
		
		case joaat("voltic2"):
			StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64);
			break;
		
		case joaat("ruiner2"):
			StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64);
			break;
		
		case joaat("phantom2"):
			StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64);
			break;
		
		case joaat("technical2"):
			StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64);
			break;
		
		case joaat("boxville5"):
			StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64);
			break;
		
		case joaat("wastelander"):
			StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64);
			break;
		
		case joaat("blazer5"):
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

int func_284()
{
	if (IS_PC_VERSION())
	{
		return unk_0x773EC73464C84240();
	}
	return 0;
}

int func_285(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2505720)
	{
		return 1;
	}
	iVar0 = 1;
	iVar1 = GET_CLOUD_TIME_AS_INT();
	if (iParam0 == joaat("btype3"))
	{
		if ((!Global_262145.f_6490 && !Global_262145.f_12801) && iVar1 < Global_262145.f_12802)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3"))
	{
		if (!Global_262145.f_14099 && iVar1 < Global_262145.f_14111)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2"))
	{
		if (!Global_262145.f_14095 && iVar1 < Global_262145.f_14107)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2"))
	{
		if (!Global_262145.f_14096 && iVar1 < Global_262145.f_14108)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5"))
	{
		if (!Global_262145.f_14097 && iVar1 < Global_262145.f_14109)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2"))
	{
		if (!Global_262145.f_14098 && iVar1 < Global_262145.f_14110)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3"))
	{
		if (!Global_262145.f_14100 && iVar1 < Global_262145.f_14112)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo"))
	{
		if (!Global_262145.f_14101 && iVar1 < Global_262145.f_14104)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70"))
	{
		if (!Global_262145.f_14102 && iVar1 < Global_262145.f_14105)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811"))
	{
		if (!Global_262145.f_14103 && iVar1 < Global_262145.f_14106)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400"))
	{
		if (!Global_262145.f_16730 && iVar1 < Global_262145.f_16695)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso"))
	{
		if (!Global_262145.f_16725 && iVar1 < Global_262145.f_16690)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger"))
	{
		if (!Global_262145.f_16729 && iVar1 < Global_262145.f_16694)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender"))
	{
		if (!Global_262145.f_16728 && iVar1 < Global_262145.f_16693)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b"))
	{
		if (!Global_262145.f_16722 && iVar1 < Global_262145.f_16687)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis"))
	{
		if (!Global_262145.f_16723 && iVar1 < Global_262145.f_16688)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck"))
	{
		if (!Global_262145.f_16726 && iVar1 < Global_262145.f_16691)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2"))
	{
		if (!Global_262145.f_16727 && iVar1 < Global_262145.f_16692)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos"))
	{
		if (!Global_262145.f_16724 && iVar1 < Global_262145.f_16689)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle"))
	{
		if (!Global_262145.f_16732 && iVar1 < Global_262145.f_16697)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck"))
	{
		if (!Global_262145.f_16733 && iVar1 < Global_262145.f_16698)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2"))
	{
		if (!Global_262145.f_16721 && iVar1 < Global_262145.f_16686)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus"))
	{
		if (!Global_262145.f_16720 && iVar1 < Global_262145.f_16685)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava"))
	{
		if (!Global_262145.f_16719 && iVar1 < Global_262145.f_16684)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx"))
	{
		if (!Global_262145.f_16731 && iVar1 < Global_262145.f_16696)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2"))
	{
		if (!Global_262145.f_16734 && iVar1 < Global_262145.f_16699)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2"))
	{
		if (!Global_262145.f_16735 && iVar1 < Global_262145.f_16700)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2"))
	{
		if (!Global_262145.f_16736 && iVar1 < Global_262145.f_16701)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3"))
	{
		if (!Global_262145.f_16737 && iVar1 < Global_262145.f_16702)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler"))
	{
		if (!Global_262145.f_16882 && iVar1 < Global_262145.f_16904)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade"))
	{
		if (!Global_262145.f_16883 && iVar1 < Global_262145.f_16905)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea"))
	{
		if (!Global_262145.f_16884 && iVar1 < Global_262145.f_16906)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey"))
	{
		if (!Global_262145.f_16885 && iVar1 < Global_262145.f_16907)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus"))
	{
		if (!Global_262145.f_16886 && iVar1 < Global_262145.f_16908)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb"))
	{
		if (!Global_262145.f_16887 && iVar1 < Global_262145.f_16909)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2"))
	{
		if (!Global_262145.f_16889 && iVar1 < Global_262145.f_16910)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex"))
	{
		if (!Global_262145.f_16890 && iVar1 < Global_262145.f_16911)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro"))
	{
		if (!Global_262145.f_16891 && iVar1 < Global_262145.f_16912)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera"))
	{
		if (!Global_262145.f_16892 && iVar1 < Global_262145.f_16913)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor"))
	{
		if (!Global_262145.f_16893 && iVar1 < Global_262145.f_16914)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2"))
	{
		if (!Global_262145.f_16894 && iVar1 < Global_262145.f_16915)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4"))
	{
		if (!Global_262145.f_16895 && iVar1 < Global_262145.f_16916)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6"))
	{
		if (!Global_262145.f_16901 && iVar1 < Global_262145.f_16923)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2"))
	{
		if (!Global_262145.f_16898 && iVar1 < Global_262145.f_16919)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane"))
	{
		if (!Global_262145.f_16899 && iVar1 < Global_262145.f_16920)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3"))
	{
		if (!Global_262145.f_16900 && iVar1 < Global_262145.f_16921)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio"))
	{
		if (!Global_262145.f_16888 && iVar1 < Global_262145.f_16922)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger"))
	{
		if (!Global_262145.f_16902 && iVar1 < Global_262145.f_16924)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus"))
	{
		if (!Global_262145.f_16896 && iVar1 < Global_262145.f_16917)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez"))
	{
		if (!Global_262145.f_16897 && iVar1 < Global_262145.f_16918)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike"))
	{
		if (!Global_262145.f_16903 && iVar1 < Global_262145.f_16925)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2"))
	{
		if (!Global_262145.f_18533 && iVar1 < Global_262145.f_18630)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2"))
	{
		if (!Global_262145.f_18534 && iVar1 < Global_262145.f_18631)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4"))
	{
		if (!Global_262145.f_18535 && iVar1 < Global_262145.f_18632)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5"))
	{
		if (!Global_262145.f_18536 && iVar1 < Global_262145.f_18633)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2"))
	{
		if (!Global_262145.f_18537 && iVar1 < Global_262145.f_18634)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2"))
	{
		if (!Global_262145.f_18538 && iVar1 < Global_262145.f_18635)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5"))
	{
		if (!Global_262145.f_18539 && iVar1 < Global_262145.f_18636)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander"))
	{
		if (!Global_262145.f_18540 && iVar1 < Global_262145.f_18637)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5"))
	{
		if (!Global_262145.f_18541 && iVar1 < Global_262145.f_18638)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2"))
	{
		if (!Global_262145.f_18542 && iVar1 < Global_262145.f_18639)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3"))
	{
		if (!Global_262145.f_18543 && iVar1 < Global_262145.f_18640)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous"))
	{
		if (!Global_262145.f_18544 && iVar1 < Global_262145.f_18641)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2"))
	{
		if (!Global_262145.f_18545 && iVar1 < Global_262145.f_18642)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy"))
	{
		if (!Global_262145.f_18546 && iVar1 < Global_262145.f_18643)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2"))
	{
		if (!Global_262145.f_18547 && iVar1 < Global_262145.f_18644)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr"))
	{
		if (!Global_262145.f_18548 && iVar1 < Global_262145.f_18645)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2"))
	{
		if (!Global_262145.f_18549 && iVar1 < Global_262145.f_18646)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb"))
	{
		if (!Global_262145.f_18550 && iVar1 < Global_262145.f_18647)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2"))
	{
		if (!Global_262145.f_18551 && iVar1 < Global_262145.f_18648)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero"))
	{
		if (!Global_262145.f_18552 && iVar1 < Global_262145.f_18649)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2"))
	{
		if (!Global_262145.f_18553 && iVar1 < Global_262145.f_18650)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator"))
	{
		if (!Global_262145.f_18554 && iVar1 < Global_262145.f_18651)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter"))
	{
		if (!Global_262145.f_18555 && iVar1 < Global_262145.f_18652)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2"))
	{
		if (!Global_262145.f_18556 && iVar1 < Global_262145.f_18653)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta"))
	{
		if (!Global_262145.f_18557 && iVar1 < Global_262145.f_18654)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1"))
	{
		if (!Global_262145.f_19614 && iVar1 < Global_262145.f_19610)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2"))
	{
		if (!Global_262145.f_19615 && iVar1 < Global_262145.f_19611)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston"))
	{
		if (!Global_262145.f_19616 && iVar1 < Global_262145.f_19612)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2"))
	{
		if (!Global_262145.f_19617 && iVar1 < Global_262145.f_19613)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("xa21"))
	{
		if (!Global_262145.f_20493 && iVar1 < Global_262145.f_20501)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheetah2"))
	{
		if (!Global_262145.f_20494 && iVar1 < Global_262145.f_20502)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("torero"))
	{
		if (!Global_262145.f_20495 && iVar1 < Global_262145.f_20503)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vagner"))
	{
		if (!Global_262145.f_20496 && iVar1 < Global_262145.f_20504)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ardent"))
	{
		if (!Global_262145.f_20497 && iVar1 < Global_262145.f_20505)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightshark"))
	{
		if (!Global_262145.f_20498 && iVar1 < Global_262145.f_20506)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("microlight"))
	{
		if (!Global_262145.f_21270 && iVar1 < Global_262145.f_21290)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mogul"))
	{
		if (!Global_262145.f_21282 && iVar1 < Global_262145.f_21302)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rogue"))
	{
		if (!Global_262145.f_21273 && iVar1 < Global_262145.f_21293)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("starling"))
	{
		if (!Global_262145.f_21283 && iVar1 < Global_262145.f_21303)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seabreeze"))
	{
		if (!Global_262145.f_21271 && iVar1 < Global_262145.f_21291)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tula"))
	{
		if (!Global_262145.f_21287 && iVar1 < Global_262145.f_21307)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pyro"))
	{
		if (!Global_262145.f_21285 && iVar1 < Global_262145.f_21305)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("molotok"))
	{
		if (!Global_262145.f_21286 && iVar1 < Global_262145.f_21306)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nokota"))
	{
		if (!Global_262145.f_21281 && iVar1 < Global_262145.f_21301)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bombushka"))
	{
		if (!Global_262145.f_21288 && iVar1 < Global_262145.f_21308)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hunter"))
	{
		if (!Global_262145.f_21284 && iVar1 < Global_262145.f_21304)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("havok"))
	{
		if (!Global_262145.f_21280 && iVar1 < Global_262145.f_21300)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("howard"))
	{
		if (!Global_262145.f_21272 && iVar1 < Global_262145.f_21292)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("alphaz1"))
	{
		if (!Global_262145.f_21274 && iVar1 < Global_262145.f_21294)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cyclone"))
	{
		if (!Global_262145.f_21275 && iVar1 < Global_262145.f_21295)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("visione"))
	{
		if (!Global_262145.f_21276 && iVar1 < Global_262145.f_21296)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vigilante"))
	{
		if (!Global_262145.f_21277 && iVar1 < Global_262145.f_21297)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("retinue"))
	{
		if (!Global_262145.f_21278 && iVar1 < Global_262145.f_21298)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rapidgt3"))
	{
		if (!Global_262145.f_21279 && iVar1 < Global_262145.f_21299)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("deluxo"))
	{
		if (!Global_262145.f_22231 && iVar1 < Global_262145.f_22259)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 886810209)
	{
		if (!Global_262145.f_22232 && iVar1 < Global_262145.f_22260)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riot2"))
	{
		if (!Global_262145.f_22233 && iVar1 < Global_262145.f_22261)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chernobog"))
	{
		if (!Global_262145.f_22234 && iVar1 < Global_262145.f_22262)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("khanjali"))
	{
		if (!Global_262145.f_22235 && iVar1 < Global_262145.f_22263)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("akula"))
	{
		if (!Global_262145.f_22236 && iVar1 < Global_262145.f_22264)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("thruster"))
	{
		if (!Global_262145.f_22237 && iVar1 < Global_262145.f_22265)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("barrage"))
	{
		if (!Global_262145.f_22238 && iVar1 < Global_262145.f_22266)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("volatol"))
	{
		if (!Global_262145.f_22239 && iVar1 < Global_262145.f_22267)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet4"))
	{
		if (!Global_262145.f_22240 && iVar1 < Global_262145.f_22268)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("neon"))
	{
		if (!Global_262145.f_22241 && iVar1 < Global_262145.f_22269)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("streiter"))
	{
		if (!Global_262145.f_22242 && iVar1 < Global_262145.f_22270)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sentinel3"))
	{
		if (!Global_262145.f_22243 && iVar1 < Global_262145.f_22271)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("yosemite"))
	{
		if (!Global_262145.f_22244 && iVar1 < Global_262145.f_22272)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sc1"))
	{
		if (!Global_262145.f_22245 && iVar1 < Global_262145.f_22273)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("autarch"))
	{
		if (!Global_262145.f_22246 && iVar1 < Global_262145.f_22274)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gt500"))
	{
		if (!Global_262145.f_22247 && iVar1 < Global_262145.f_22275)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hustler"))
	{
		if (!Global_262145.f_22248 && iVar1 < Global_262145.f_22276)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("revolter"))
	{
		if (!Global_262145.f_22249 && iVar1 < Global_262145.f_22277)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pariah"))
	{
		if (!Global_262145.f_22250 && iVar1 < Global_262145.f_22278)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raiden"))
	{
		if (!Global_262145.f_22251 && iVar1 < Global_262145.f_22279)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("savestra"))
	{
		if (!Global_262145.f_22252 && iVar1 < Global_262145.f_22280)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("riata"))
	{
		if (!Global_262145.f_22253 && iVar1 < Global_262145.f_22281)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hermes"))
	{
		if (!Global_262145.f_22254 && iVar1 < Global_262145.f_22282)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet5"))
	{
		if (!Global_262145.f_22255 && iVar1 < Global_262145.f_22283)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("z190"))
	{
		if (!Global_262145.f_22256 && iVar1 < Global_262145.f_22284)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("viseris"))
	{
		if (!Global_262145.f_22257 && iVar1 < Global_262145.f_22285)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("kamacho"))
	{
		if (!Global_262145.f_22258 && iVar1 < Global_262145.f_22286)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gb200"))
	{
		if (!Global_262145.f_23439 && iVar1 < Global_262145.f_23455)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fagaloa"))
	{
		if (!Global_262145.f_23440 && iVar1 < Global_262145.f_23456)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ellie"))
	{
		if (!Global_262145.f_23444 && iVar1 < Global_262145.f_23460)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("issi3"))
	{
		if (!Global_262145.f_23447 && iVar1 < Global_262145.f_23463)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("michelli"))
	{
		if (!Global_262145.f_23452 && iVar1 < Global_262145.f_23468)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("flashgt"))
	{
		if (!Global_262145.f_23446 && iVar1 < Global_262145.f_23462)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hotring"))
	{
		if (!Global_262145.f_23438 && iVar1 < Global_262145.f_23454)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tezeract"))
	{
		if (!Global_262145.f_23445 && iVar1 < Global_262145.f_23461)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrant"))
	{
		if (!Global_262145.f_23451 && iVar1 < Global_262145.f_23467)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator3"))
	{
		if (!Global_262145.f_23450 && iVar1 < Global_262145.f_23466)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("taipan"))
	{
		if (!Global_262145.f_23441 && iVar1 < Global_262145.f_23457)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("entity2"))
	{
		if (!Global_262145.f_23443 && iVar1 < Global_262145.f_23459)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("jester3"))
	{
		if (!Global_262145.f_23453 && iVar1 < Global_262145.f_23469)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cheburek"))
	{
		if (!Global_262145.f_23449 && iVar1 < Global_262145.f_23465)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("caracara"))
	{
		if (!Global_262145.f_23442 && iVar1 < Global_262145.f_23458)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seasparrow"))
	{
		if (!Global_262145.f_23448 && iVar1 < Global_262145.f_23464)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == -1988428699)
	{
		if (!Global_262145.f_23529 && iVar1 < Global_262145.f_23516)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pbus2"))
	{
		if (!Global_262145.f_23530 && iVar1 < Global_262145.f_23517)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("mule4"))
	{
		if (!Global_262145.f_23535 && iVar1 < Global_262145.f_23522)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pounder2"))
	{
		if (!Global_262145.f_23534 && iVar1 < Global_262145.f_23521)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("swinger"))
	{
		if (!Global_262145.f_23532 && iVar1 < Global_262145.f_23519)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("menacer"))
	{
		if (!Global_262145.f_23538 && iVar1 < Global_262145.f_23525)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("scramjet"))
	{
		if (!Global_262145.f_23540 && iVar1 < Global_262145.f_23527)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("strikeforce"))
	{
		if (!Global_262145.f_23541 && iVar1 < Global_262145.f_23528)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("oppressor2"))
	{
		if (!Global_262145.f_23539 && iVar1 < Global_262145.f_23526)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("patriot2"))
	{
		if (!Global_262145.f_23531 && iVar1 < Global_262145.f_23518)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stafford"))
	{
		if (!Global_262145.f_23533 && iVar1 < Global_262145.f_23520)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("freecrawler"))
	{
		if (!Global_262145.f_23537 && iVar1 < Global_262145.f_23524)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blimp3"))
	{
		if (!Global_262145.f_23536 && iVar1 < Global_262145.f_23523)
		{
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("monster3"))
	{
	}
	else if (iParam0 == joaat("cerberus"))
	{
	}
	else if (iParam0 == joaat("cerberus2"))
	{
	}
	else if (iParam0 == 1909700336)
	{
	}
	else if (iParam0 == joaat("brutus"))
	{
	}
	else if (iParam0 == joaat("brutus2"))
	{
	}
	else if (iParam0 == 2038858402)
	{
	}
	else if (iParam0 == joaat("scarab"))
	{
	}
	else if (iParam0 == joaat("scarab2"))
	{
	}
	else if (iParam0 == -579747861)
	{
	}
	else if (iParam0 == joaat("imperator"))
	{
	}
	else if (iParam0 == joaat("imperator2"))
	{
	}
	else if (iParam0 == -755532233)
	{
	}
	else if (iParam0 == joaat("zr380"))
	{
	}
	else if (iParam0 == joaat("zr3802"))
	{
	}
	else if (iParam0 == -1478704292)
	{
	}
	else if (iParam0 == joaat("impaler"))
	{
	}
	else if (iParam0 == joaat("deveste"))
	{
		if (!Global_262145.f_25739 && iVar1 < Global_262145.f_25741)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("toros"))
	{
		if (!Global_262145.f_24753 && iVar1 < Global_262145.f_24746)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("clique"))
	{
		if (!Global_262145.f_24754 && iVar1 < Global_262145.f_24747)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigto"))
	{
		if (!Global_262145.f_24755 && iVar1 < Global_262145.f_24748)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("deviant"))
	{
		if (!Global_262145.f_24756 && iVar1 < Global_262145.f_24749)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vamos"))
	{
		if (!Global_262145.f_25740 && iVar1 < Global_262145.f_25742)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tulip"))
	{
		if (!Global_262145.f_24757 && iVar1 < Global_262145.f_24750)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("schlagen"))
	{
		if (!Global_262145.f_24758 && iVar1 < Global_262145.f_24751)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rcbandito"))
	{
		if (!Global_262145.f_24759 && iVar1 < Global_262145.f_24752)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1044193113)
	{
		if (!Global_262145.f_24763 && iVar1 < Global_262145.f_24784)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 686471183)
	{
		if (!Global_262145.f_24764 && iVar1 < Global_262145.f_24785)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -941272559)
	{
		if (!Global_262145.f_24765 && iVar1 < Global_262145.f_24786)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1829436850)
	{
		if (!Global_262145.f_24766 && iVar1 < Global_262145.f_24787)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -682108547)
	{
		if (!Global_262145.f_24767 && iVar1 < Global_262145.f_24788)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 722226637)
	{
		if (!Global_262145.f_24768 && iVar1 < Global_262145.f_24789)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1854776567)
	{
		if (!Global_262145.f_24769 && iVar1 < Global_262145.f_24790)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1862507111)
	{
		if (!Global_262145.f_24770 && iVar1 < Global_262145.f_24791)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -882629065)
	{
		if (!Global_262145.f_24771 && iVar1 < Global_262145.f_24792)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -362150785)
	{
		if (!Global_262145.f_24772 && iVar1 < Global_262145.f_24793)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 310284501)
	{
		if (!Global_262145.f_24773 && iVar1 < Global_262145.f_24794)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 916547552)
	{
		if (!Global_262145.f_24774 && iVar1 < Global_262145.f_24795)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1804415708)
	{
		if (!Global_262145.f_24775 && iVar1 < Global_262145.f_24796)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1934384720)
	{
		if (!Global_262145.f_24776 && iVar1 < Global_262145.f_24797)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1349095620)
	{
		if (!Global_262145.f_24777 && iVar1 < Global_262145.f_24798)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -208911803)
	{
		if (!Global_262145.f_24778 && iVar1 < Global_262145.f_24799)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -324618589)
	{
		if (!Global_262145.f_24779 && iVar1 < Global_262145.f_24800)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -664141241)
	{
		if (!Global_262145.f_24780 && iVar1 < Global_262145.f_24801)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == 1323778901)
	{
		if (!Global_262145.f_24781 && iVar1 < Global_262145.f_24802)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -1620126302)
	{
		if (!Global_262145.f_24782 && iVar1 < Global_262145.f_24803)
		{
			iVar0 = 0;
		}
	}
	else if (iParam0 == -447711397)
	{
		if (!Global_262145.f_24783 && iVar1 < Global_262145.f_24804)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

int func_286()
{
	return 0;
}

int func_287()
{
	return 1;
}

int func_288()
{
	return 1;
}

int func_289()
{
	if (IS_DLC_PRESENT(-1226939934))
	{
		return 1;
	}
	return 0;
}

int func_290()
{
	var uVar0;
	
	if (NETWORK_IS_SIGNED_IN())
	{
		if (_NETWORK_ARE_ROS_AVAILABLE())
		{
			if (_0x91B87C55093DE351())
			{
				STAT_GET_INT(joaat("sp_unlock_exclus_content"), &uVar0, -1);
				SET_BIT(&uVar0, 2);
				SET_BIT(&uVar0, 4);
				SET_BIT(&uVar0, 6);
				SET_BIT(&Global_25, 2);
				SET_BIT(&Global_25, 4);
				SET_BIT(&Global_25, 6);
				STAT_SET_INT(joaat("sp_unlock_exclus_content"), uVar0, 1);
				if (_0x5AA3BEFA29F03AD4())
				{
					uVar0 = GET_PROFILE_SETTING(866);
					SET_BIT(&uVar0, 0);
					_0xDAC073C7901F9E15(uVar0);
				}
				return 1;
			}
		}
	}
	if (Global_145398 == 2)
	{
		return 1;
	}
	else if (Global_145398 == 3)
	{
		return 0;
	}
	if (_0x5AA3BEFA29F03AD4())
	{
		if (IS_BIT_SET(GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_291(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = GET_ENTITY_MODEL(iParam0);
	uVar1 = GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0);
	if (iVar0 == joaat("speedo") && ARE_STRINGS_EQUAL(uVar1, "LAMAR G "))
	{
		return 1;
	}
	if (!func_282(iVar0, 0))
	{
		return 1;
	}
	return 0;
}

int func_292(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (DOES_ENTITY_EXIST(Global_91073[iVar0]))
		{
			if (Global_91073[iVar0] == iParam0)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_293(int iParam0)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(iParam0) && IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		iVar0 = 0;
		while (iVar0 < 9)
		{
			if (DOES_ENTITY_EXIST(Global_91043[iVar0]) && IS_VEHICLE_DRIVEABLE(Global_91043[iVar0], 0))
			{
				if (Global_91043[iVar0] == iParam0 && GET_ENTITY_MODEL(Global_91043[iVar0]) == GET_ENTITY_MODEL(iParam0))
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_294(int iParam0)
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(Global_70409.f_484[24]))
	{
		if (iParam0 == Global_70409.f_484[24])
		{
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (DOES_ENTITY_EXIST(Global_70409.f_484[iVar0]))
		{
			if ((((((((((((iVar0 != 24 && iVar0 != 21) && iVar0 != 22) && iVar0 != 23) && iVar0 != 27) && iVar0 != 30) && iVar0 != 33) && iVar0 != 28) && iVar0 != 31) && iVar0 != 34) && iVar0 != 26) && iVar0 != 29) && iVar0 != 32)
			{
				if (iParam0 == Global_70409.f_484[iVar0])
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_295(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	int iVar9;
	
	if (!DOES_ENTITY_EXIST(iParam0) || !IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (func_296(iParam1, iVar0, &sVar1, &iVar9))
	{
		if (!bParam2 || IS_BIT_SET(Global_106565.f_7223[iVar9], 0))
		{
			if (IS_VEHICLE_IN_GARAGE_AREA(&sVar1, iParam0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_296(int iParam0, int iParam1, char* sParam2, var uParam3)
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

int func_297(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_70409.f_139[iParam0];
}

int func_298(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };
	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_12 = 0;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 1:
			*uParam0 = { 1970.943f, 3801.684f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_299(0, 1);
			uParam0->f_12 = 0;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 2:
			*uParam0 = { -22.6297f, -1439.137f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 3:
			*uParam0 = { -22.5229f, -1434.699f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 19);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_299(1, 1);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_299(1, 2);
			uParam0->f_12 = 1;
			SET_BIT(&(uParam0->f_9), 19);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 6:
			*uParam0 = { 1981.416f, 3808.131f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 7:
			*uParam0 = { -1158.488f, -1529.367f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 8:
			*uParam0 = { 148.2868f, -1270.569f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_299(2, 1);
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 20);
			SET_BIT(&(uParam0->f_9), 7);
			iVar0 = 1;
			break;
		
		case 9:
			*uParam0 = { 1459.509f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("scorcher");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 10:
			*uParam0 = { -1518.947f, -1387.865f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("seashark");
			iVar0 = 1;
			SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 11:
			*uParam0 = { 353.0926f, 3577.593f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("duster");
			iVar0 = 1;
			SET_BIT(&(uParam0->f_9), 6);
			break;
		
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.004f, -3142.348f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.649f, -3380.685f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.586f, 3294.531f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.904f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.609f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.068f, 8.2835f };
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.829f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.957f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 28);
			iVar0 = 1;
			break;
		
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.539f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 14);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 28);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 26:
		case 27:
		case 28:
			iVar1 = (iParam1 - 26);
			uParam0->f_14 = (12 + iVar1);
			*uParam0 = { 196.2794f, -1020.479f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 29:
		case 30:
		case 31:
			iVar1 = (iParam1 - 29);
			uParam0->f_14 = (15 + iVar1);
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 32:
		case 33:
		case 34:
			iVar1 = (iParam1 - 32);
			uParam0->f_14 = (18 + iVar1);
			*uParam0 = { 203.6006f, -1019.776f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = (0 + iVar1);
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 12);
			SET_BIT(&(uParam0->f_9), 7);
			SET_BIT(&(uParam0->f_9), 27);
			SET_BIT(&(uParam0->f_9), 24);
			SET_BIT(&(uParam0->f_9), 29);
			iVar0 = 1;
			break;
		
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 11);
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("tailgater");
			SET_BIT(&(uParam0->f_9), 10);
			SET_BIT(&(uParam0->f_9), 11);
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 12);
			iVar0 = 1;
			break;
		
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("proptrailer");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 36:
			*uParam0 = { -55.7984f, -1096.586f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("bjxl");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			SET_BIT(&(uParam0->f_9), 9);
			SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("velum");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			SET_BIT(&(uParam0->f_9), 9);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 13);
			iVar0 = 1;
			break;
		
		case 38:
			*uParam0 = { 1744.308f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("cargobob3");
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 39:
			*uParam0 = { 1751.44f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("submersible");
			SET_BIT(&(uParam0->f_9), 23);
			iVar0 = 1;
			break;
		
		case 41:
			*uParam0 = { 1377.104f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("towtruck");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 40:
			*uParam0 = { 1380.42f, -2072.77f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("trash");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 42:
			*uParam0 = { 1359.389f, 3618.441f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("barracks");
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 43:
			*uParam0 = { 693.1154f, -1018.155f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("firetruk");
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 8);
			iVar0 = 1;
			break;
		
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("vacca");
			iVar0 = 1;
			break;
		
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("surano");
			iVar0 = 1;
			break;
		
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("tornado2");
			iVar0 = 1;
			break;
		
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("superd");
			iVar0 = 1;
			break;
		
		case 48:
			*uParam0 = { -1321.519f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 49:
			*uParam0 = { -1267.999f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 50:
			*uParam0 = { -1062.076f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("double");
			iVar0 = 1;
			break;
		
		case 51:
			*uParam0 = { 68.16914f, -1558.958f, 29.46904f };
			uParam0->f_3 = 49.90575f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 52:
			*uParam0 = { 589.4399f, 2736.708f, 42.03316f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 53:
			*uParam0 = { -488.774f, -344.5721f, 34.36356f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 54:
			*uParam0 = { 288.8808f, -585.4728f, 43.15428f };
			uParam0->f_3 = -20.80707f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 55:
			*uParam0 = { 304.8294f, -1383.674f, 31.67744f };
			uParam0->f_3 = -41.11603f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 56:
			*uParam0 = { 1126.194f, -1481.486f, 34.7016f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("rumpo2");
			uParam0->f_12 = 2;
			SET_BIT(&(uParam0->f_9), 26);
			iVar0 = 1;
			break;
		
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("submersible");
			uParam0->f_13 = 308;
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("dinghy");
			uParam0->f_13 = 404;
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 22);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 59:
			*uParam0 = { 2116.571f, 4763.279f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("bfinjection");
			iVar0 = 1;
			break;
		
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
			if (func_290())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 1);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
			if (func_290())
			{
				uParam0->f_4 = joaat("blimp2");
			}
			else
			{
				uParam0->f_4 = joaat("blimp");
			}
			uParam0->f_13 = 401;
			SET_BIT(&(uParam0->f_9), 13);
			SET_BIT(&(uParam0->f_9), 2);
			SET_BIT(&(uParam0->f_9), 1);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 21);
			iVar0 = 1;
			break;
		
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("blazer3");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("submersible2");
			uParam0->f_13 = 308;
			SET_BIT(&(uParam0->f_9), 0);
			SET_BIT(&(uParam0->f_9), 21);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			SET_BIT(&(uParam0->f_9), 30);
			iVar0 = 1;
			break;
		
		case 64:
			*uParam0 = { 1257.729f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("dukes2");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("dukes2");
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("dodo");
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
		
		case 67:
			*uParam0 = { 1333.875f, 4262.226f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("dodo");
			SET_BIT(&(uParam0->f_9), 30);
			SET_BIT(&(uParam0->f_9), 23);
			SET_BIT(&(uParam0->f_9), 6);
			iVar0 = 1;
			break;
	}
	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_106565.f_32743.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14)
		{
			if (((((uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra")) || uParam0->f_4 == joaat("luxor")) || uParam0->f_4 == joaat("shamal")) || uParam0->f_4 == joaat("titan")) || uParam0->f_4 == joaat("luxor2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_308(Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_32743.f_1864[uParam0->f_14 /*3*/] };
		}
		if (Global_106565.f_32743.f_1934[uParam0->f_14] != -1f)
		{
			uParam0->f_3 = Global_106565.f_32743.f_1934[uParam0->f_14];
		}
	}
	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_308(Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_308(Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0))
		{
			*uParam0 = { Global_106565.f_2357.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_106565.f_2357.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

int func_299(int iParam0, int iParam1)
{
	struct<82> Var0;
	
	if (func_37(iParam0))
	{
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_300(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

void func_300(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = joaat("tailgater");
			if (Global_106565.f_9079.f_99.f_58[128] && !Global_106565.f_9079.f_99.f_58[131])
			{
				iVar0 = joaat("premier");
			}
			switch (iVar0)
			{
				case joaat("tailgater"):
					*uParam1 = iVar0;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					StringCopy(&(uParam1->f_27), "5MDS003", 16);
					break;
				
				case joaat("premier"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					StringCopy(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
		
		case 2:
			iVar0 = joaat("bodhi2");
			switch (iVar0)
			{
				case joaat("bodhi2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "BETTY 32", 16);
					if (Global_106565.f_9079.f_99.f_58[119])
					{
						uParam1->f_11[1] = 1;
					}
					break;
			}
			break;
		
		case 1:
			if (iParam2 == 1)
			{
				iVar0 = joaat("buffalo2");
			}
			else if (iParam2 == 2)
			{
				iVar0 = joaat("bagger");
			}
			else if (Global_106565.f_9079.f_99.f_58[118])
			{
				iVar0 = joaat("bagger");
			}
			else
			{
				iVar0 = joaat("buffalo2");
			}
			switch (iVar0)
			{
				case joaat("bagger"):
					*uParam1 = iVar0;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					StringCopy(&(uParam1->f_27), "FC88", 16);
					break;
				
				case joaat("buffalo2"):
					*uParam1 = iVar0;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					StringCopy(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
		
		default:
			break;
	}
}

void func_301(int iParam0, var uParam1, vector3 vParam2, var uParam5, int iParam6)
{
	if (func_298(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 10))
		{
			func_306(iParam0);
			func_305(uParam1, &(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]));
			if (IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 11))
			{
				Global_106565.f_32743.f_1864[Global_70409.f_555[0 /*21*/].f_14 /*3*/] = { vParam2 };
				Global_106565.f_32743.f_1934[Global_70409.f_555[0 /*21*/].f_14] = uParam5;
			}
			else
			{
				Global_106565.f_32743.f_1864[Global_70409.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_106565.f_32743.f_1934[Global_70409.f_555[0 /*21*/].f_14] = -1f;
			}
			Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_302(iParam0, 1);
		}
	}
}

void func_302(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_304(iParam0, 0))
		{
			func_303(iParam0, 1, 0);
			func_303(iParam0, 2, 0);
			func_303(iParam0, 3, 0);
			func_303(iParam0, 4, 0);
			func_303(iParam0, 0, 1);
			Global_70409[iParam0] = 1;
		}
	}
	else
	{
		func_303(iParam0, 0, 0);
	}
}

void func_303(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		SET_BIT(&(Global_106565.f_32743[iParam0]), iParam1);
	}
	else
	{
		CLEAR_BIT(&(Global_106565.f_32743[iParam0]), iParam1);
	}
}

int func_304(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return IS_BIT_SET(Global_106565.f_32743[iParam0], iParam1);
}

void func_305(var uParam0, var uParam1)
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

void func_306(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_298(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (DOES_ENTITY_EXIST(Global_70409.f_139[iParam0]))
		{
			SET_ENTITY_AS_MISSION_ENTITY(Global_70409.f_139[iParam0], 1, 1);
			SET_VEHICLE_AS_NO_LONGER_NEEDED(&(Global_70409.f_139[iParam0]));
			Global_70409.f_139[iParam0] = 0;
		}
		if (IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			func_302(iParam0, 0);
		}
	}
}

int func_307(int iParam0)
{
	int iVar0;
	
	if (!DOES_ENTITY_EXIST(iParam0))
	{
		return 145;
	}
	if (!IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (DOES_ENTITY_EXIST(Global_91043[iVar0]))
		{
			if (Global_91043[iVar0] == iParam0)
			{
				return Global_91053[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

bool func_308(vector3 vParam0, vector3 vParam3, bool bParam6)
{
	if (bParam6)
	{
		return (vParam0.x == vParam3.x && vParam0.y == vParam3.y);
	}
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_309(int iParam0, var uParam1)
{
	int iVar0;
	
	if (IS_VEHICLE_DRIVEABLE(iParam0, 0))
	{
		func_313(uParam1);
		uParam1->f_66 = GET_ENTITY_MODEL(iParam0);
		StringCopy(&(uParam1->f_1), GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0), 16);
		*uParam1 = GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(iParam0);
		GET_VEHICLE_COLOURS(iParam0, &(uParam1->f_5), &(uParam1->f_6));
		GET_VEHICLE_EXTRA_COLOURS(iParam0, &(uParam1->f_7), &(uParam1->f_8));
		GET_VEHICLE_TYRE_SMOKE_COLOR(iParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = GET_VEHICLE_WINDOW_TINT(iParam0);
		uParam1->f_67 = GET_VEHICLE_LIVERY(iParam0);
		uParam1->f_69 = GET_VEHICLE_WHEEL_TYPE(iParam0);
		uParam1->f_70 = GET_VEHICLE_DOOR_LOCK_STATUS(iParam0);
		GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		_GET_VEHICLE_NEON_LIGHTS_COLOUR(iParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 2))
		{
			SET_BIT(&(uParam1->f_77), 28);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 3))
		{
			SET_BIT(&(uParam1->f_77), 29);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 0))
		{
			SET_BIT(&(uParam1->f_77), 30);
		}
		if (_IS_VEHICLE_NEON_LIGHT_ENABLED(iParam0, 1))
		{
			SET_BIT(&(uParam1->f_77), 31);
		}
		if (uParam1->f_65 == -1 && !func_312(uParam1->f_66))
		{
			uParam1->f_65 = 0;
		}
		if (IS_VEHICLE_A_CONVERTIBLE(iParam0, 0))
		{
			uParam1->f_68 = GET_CONVERTIBLE_ROOF_STATE(iParam0);
		}
		if (IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (_VEHICLE_HAS_LANDING_GEAR(iParam0))
			{
				switch (GET_LANDING_GEAR_STATE(iParam0))
				{
					case 3:
					case 0:
						CLEAR_BIT(&(uParam1->f_77), 23);
						SET_BIT(&(uParam1->f_77), 22);
						break;
					
					case 4:
					case 1:
						CLEAR_BIT(&(uParam1->f_77), 23);
						CLEAR_BIT(&(uParam1->f_77), 22);
						break;
					
					case 5:
						SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				SET_BIT(&(uParam1->f_77), 23);
			}
		}
		if (!GET_VEHICLE_TYRES_CAN_BURST(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 9);
		}
		if (IS_VEHICLE_STOLEN(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 10);
		}
		if (GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 13);
			GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(iParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
		if (GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(iParam0))
		{
			SET_BIT(&(uParam1->f_77), 12);
		}
		func_311(&iParam0, &(uParam1->f_9), &(uParam1->f_59));
		iVar0 = 0;
		while (iVar0 <= 11)
		{
			if (IS_VEHICLE_EXTRA_TURNED_ON(iParam0, iVar0 + 1))
			{
				SET_BIT(&(uParam1->f_77), func_310(iVar0 + 1));
			}
			iVar0++;
		}
		if (_DOES_VEHICLE_HAVE_DECAL(iParam0, 0))
		{
			SET_BIT(&(uParam1->f_77), 11);
		}
		else
		{
			CLEAR_BIT(&(uParam1->f_77), 11);
		}
		if (DECOR_EXIST_ON(iParam0, "IgnoredByQuickSave") && DECOR_GET_BOOL(iParam0, "IgnoredByQuickSave"))
		{
			SET_BIT(&(uParam1->f_77), 27);
		}
		else
		{
			CLEAR_BIT(&(uParam1->f_77), 27);
		}
	}
}

int func_310(int iParam0)
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

int func_311(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	
	if (!IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return 0;
	}
	if (GET_NUM_MOD_KITS(*uParam0) == 0)
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
			if (IS_TOGGLE_MOD_ON(*uParam0, iVar1))
			{
				(*uParam1)[iVar0] = 1;
			}
		}
		else if (iVar1 == 22)
		{
			if (IS_TOGGLE_MOD_ON(*uParam0, iVar1))
			{
				switch (_GET_VEHICLE_HEADLIGHTS_COLOUR(*uParam0))
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
			(*uParam1)[iVar0] = GET_VEHICLE_MOD(*uParam0, iVar0) + 1;
			if (iVar0 == 23)
			{
				(*uParam2)[0] = GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			}
			else if (iVar0 == 24)
			{
				(*uParam2)[1] = GET_VEHICLE_MOD_VARIATION(*uParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

int func_312(int iParam0)
{
	switch (iParam0)
	{
		case joaat("granger"):
		case joaat("visione"):
			return 1;
		
		default:
	}
	return 0;
}

void func_313(var uParam0)
{
	int iVar0;
	
	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
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
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

void func_314(int iParam0)
{
	if (iParam0 != 24 && iParam0 != 25)
	{
	}
	func_306(iParam0);
	func_302(iParam0, 0);
}

float func_315(int iParam0)
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

Vector3 func_316(int iParam0)
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

int func_317(var uParam0)
{
	if (DOES_ENTITY_EXIST(uParam0))
	{
		if (IS_ENTITY_DEAD(uParam0, 0))
		{
			return 1;
		}
		else if (!IS_VEHICLE_DRIVEABLE(uParam0, 0))
		{
			if (!IS_ENTITY_ON_FIRE(uParam0))
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

void func_318(var uParam0)
{
	if (*uParam0 != 0)
	{
		SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(uParam0);
		*uParam0 = 0;
	}
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_12[0] = 0;
	uParam0->f_12[1] = 0;
	uParam0->f_12[2] = 0;
	uParam0->f_12[3] = 0;
	uParam0->f_12[4] = 0;
	uParam0->f_12[5] = 0;
	uParam0->f_12[6] = 0;
	uParam0->f_12[7] = 0;
	uParam0->f_3[0] = 359;
	uParam0->f_3[1] = 359;
	uParam0->f_3[2] = 359;
	uParam0->f_3[3] = 359;
	uParam0->f_3[4] = 359;
	uParam0->f_3[5] = 359;
	uParam0->f_3[6] = 359;
	uParam0->f_3[7] = 359;
	uParam0->f_21[0] = 0;
	uParam0->f_21[1] = 0;
	uParam0->f_21[2] = 0;
	uParam0->f_21[3] = 0;
}

int func_319(var uParam0, int iParam1, int iParam2)
{
	if ((GET_GAME_TIMER() - uParam0->f_5) > iParam2)
	{
		uParam0->f_4 = GET_GAME_TIMER();
	}
	uParam0->f_5 = GET_GAME_TIMER();
	if ((GET_GAME_TIMER() - uParam0->f_4) > iParam2)
	{
		if (IS_BIT_SET(uParam0->f_2, iParam1) && !IS_BIT_SET(uParam0->f_3, iParam1))
		{
			uParam0->f_4 = GET_GAME_TIMER();
			return 1;
		}
	}
	return 0;
}

int func_320(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, var uParam11, var uParam12)
{
	vector3 vVar0;
	
	switch (uParam0->f_3)
	{
		case 0:
			if (func_447(uParam1) >= 0f)
			{
				vParam8.z = func_47(vParam8.z, -8.909f, 8.909f);
				uParam11->f_2 = (uParam11->f_2 + vParam8.z);
				vVar0 = { func_449(vParam5, vParam8.z) };
				SET_CAM_PARAMS(func_419(uParam0, 0), vParam2 + vVar0, *uParam11, *uParam12, 300, 1, 1, 2);
				SET_CAM_ACTIVE_WITH_INTERP(func_419(uParam0, 1), func_419(uParam0, 0), FLOOR((1000f * (1.1f - 0f))), 2, 1);
				uParam0->f_3 = 1;
			}
			break;
		
		case 1:
			if (func_447(uParam1) >= 0f)
			{
				SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
				SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
				RENDER_SCRIPT_CAMS(0, 1, FLOOR((1000f * (1.1f - 0f))), 0, 0, 0);
				uParam0->f_3 = 2;
			}
			break;
		
		case 2:
			if (func_447(uParam1) >= 1.1f)
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

void func_321(int iParam0, var uParam1, var uParam2)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	vector3 vVar5;
	
	uVar3 = func_419(uParam1, 0);
	uVar4 = func_419(uParam1, 1);
	SET_CAM_NEAR_CLIP(uVar4, func_322());
	vVar5 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 2f, -0.3f, -7.7824f) };
	SET_CAM_COORD(uVar4, vVar5);
	vVar0 = { GET_CAM_ROT(uVar3, 2) };
	vVar0.x = 0f;
	SET_CAM_ROT(uVar4, vVar0, 2);
	SET_CAM_FOV(uVar4, GET_CAM_FOV(uVar3));
	RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	uParam1->f_3 = 0;
	func_362(uParam2);
}

float func_322()
{
	if (IS_PC_VERSION())
	{
		return 0.5f;
	}
	return 0.84f;
}

int func_323(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, vector3 vParam6, vector3 vParam9)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	
	uVar0 = func_419(uParam1, 0);
	vVar1 = { func_326(uParam2) };
	if (IS_LOOK_INVERTED())
	{
		vVar1.y = (vVar1.y * -1f);
	}
	if (!_IS_INPUT_DISABLED(2))
	{
		uParam5->f_2 = (uParam5->f_2 - ((vVar1.x * GET_FRAME_TIME()) * 100f));
		*uParam5 = (*uParam5 + ((vVar1.y * GET_FRAME_TIME()) * 100f));
		if (ABSF(uParam5->f_2) > 0.001f)
		{
			uParam5->f_2 = (uParam5->f_2 - ((uParam5->f_2 * GET_FRAME_TIME()) * 4f));
		}
		else
		{
			uParam5->f_2 = 0f;
		}
		if (ABSF(*uParam5) > 0.001f)
		{
			*uParam5 = (*uParam5 - ((*uParam5 * GET_FRAME_TIME()) * 5f));
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
	uParam4->f_2 = (uParam4->f_2 + (uParam5->f_2 * GET_FRAME_TIME()));
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
	*uParam4 = (*uParam4 + (*uParam5 * GET_FRAME_TIME()));
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
	vVar4 = { func_449(vParam9, uParam4->f_2) };
	SET_CAM_COORD(uVar0, vParam6 + vVar4);
	SET_CAM_ROT(uVar0, (-33f + *uParam4), 0f, ((-88.515f + func_450(uParam0)) + uParam4->f_2), 2);
	SET_CAM_NEAR_CLIP(uVar0, func_322());
	if (!IS_SCREEN_FADED_IN() || !func_448(uParam3))
	{
		func_362(uParam3);
	}
	else
	{
		if (!IS_HELP_MESSAGE_BEING_DISPLAYED())
		{
			func_325("BJ_VLOOKHLP");
		}
		if (func_448(uParam3) && func_447(uParam3) > 0.5f)
		{
			if (func_324(uParam2, 1))
			{
				func_444(uParam3);
				DETACH_CAM(uVar0);
				return 1;
			}
		}
	}
	return 0;
}

bool func_324(var uParam0, int iParam1)
{
	return (IS_BIT_SET(uParam0->f_2, iParam1) && !IS_BIT_SET(uParam0->f_3, iParam1));
}

void func_325(char* sParam0)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 1, 1, -1);
}

Vector3 func_326(var uParam0)
{
	return *uParam0, uParam0->f_1, 0f;
}

void func_327(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = (0.006f * SIN((((0.25f * 0.5f) * TO_FLOAT(GET_GAME_TIMER())) + 1.5f)));
	fVar1 = (0.006f * SIN((((0.25f * 0.4f) * TO_FLOAT(GET_GAME_TIMER())) + 3f)));
	fVar2 = (0.006f * SIN(((0.25f * 1f) * TO_FLOAT(GET_GAME_TIMER()))));
	if (!IS_ENTITY_DEAD(iParam0, 0))
	{
		SET_ENTITY_COORDS(iParam0, vParam1 + Vector(fVar2, fVar1, fVar0), 1, 0, 0, 1);
	}
}

bool func_328(char* sParam0)
{
	BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_329(char* sParam0, int iParam1)
{
	BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	END_TEXT_COMMAND_DISPLAY_HELP(0, 0, 1, iParam1);
}

void func_330(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (IS_AUDIO_SCENE_ACTIVE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT"))
		{
			STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
			func_211(uParam0, 20, 0);
		}
	}
	else if (IS_AUDIO_SCENE_ACTIVE("BASEJUMPS_PREP_FOR_JUMP_MOTO"))
	{
		STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_MOTO");
		func_211(uParam0, 20, 0);
	}
}

void func_331(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	BEGIN_TEXT_COMMAND_PRINT(sParam0);
	END_TEXT_COMMAND_PRINT(iParam1, 1);
}

struct<4> func_332(int iParam0)
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

void func_333(var uParam0, float fParam1)
{
	if (!func_448(uParam0))
	{
		func_40(uParam0, fParam1);
	}
}

void func_334(var uParam0, int iParam1)
{
	if (func_448(uParam0))
	{
		if (func_336(uParam0, (7.5f * IntToFloat(*iParam1))))
		{
			*iParam1++;
			func_207(PLAYER_PED_ID(), "BASEJUMP_ABOUT_TO_JUMP", 24);
		}
	}
	else if (!func_335())
	{
		func_333(uParam0, 0f);
	}
}

int func_335()
{
	if (Global_15866 != 0 || IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

int func_336(var uParam0, float fParam1)
{
	if (func_337(uParam0, fParam1))
	{
		func_444(uParam0);
		return 1;
	}
	return 0;
}

int func_337(var uParam0, float fParam1)
{
	if (func_448(uParam0))
	{
		if (func_447(uParam0) > fParam1)
		{
			return 1;
		}
	}
	return 0;
}

void func_338(var uParam0)
{
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		GET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), uParam0, 1);
		if ((((*uParam0 != 0 && *uParam0 != joaat("weapon_unarmed")) && *uParam0 != joaat("weapon_electric_fence")) && *uParam0 != joaat("gadget_parachute")) && *uParam0 != joaat("object"))
		{
			GIVE_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("weapon_unarmed"), -1, 0, 1);
		}
		DISABLE_CONTROL_ACTION(0, 37, 1);
		DISABLE_CONTROL_ACTION(0, 66, 1);
		DISABLE_CONTROL_ACTION(0, 67, 1);
		DISABLE_CONTROL_ACTION(0, 68, 1);
		DISABLE_CONTROL_ACTION(0, 99, 1);
		DISABLE_CONTROL_ACTION(0, 100, 1);
		HIDE_HUD_COMPONENT_THIS_FRAME(19);
	}
}

int func_339(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, int iParam6, int iParam7, var uParam8, int iParam9, var uParam10, var uParam11, var uParam12, int iParam13, int iParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20, float fParam21)
{
	vector3 vVar0;
	var uVar3;
	var uVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;
	vector3 vVar30;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	var uVar39;
	var uVar40;
	var uVar41;
	var uVar42;
	var uVar43;
	var uVar44;
	
	vVar12 = { func_360(uParam0, *iParam6) };
	bVar37 = *iParam6 == (iParam9 - 1);
	(*iParam3)[0] = (*iParam3)[0];
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		GET_ENTITY_MATRIX(PLAYER_PED_ID(), &vVar0, &uVar3, &uVar6, &vVar9);
	}
	if (bVar37)
	{
		if (DOES_ENTITY_EXIST(uParam1) && !IS_ENTITY_DEAD(uParam1, 0))
		{
			vVar27 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1, func_361(uParam0)) };
			fVar36 = (vVar27.z - vVar12.z);
			if (bParam20)
			{
				if (DOES_BLIP_EXIST(*uParam11))
				{
					SET_BLIP_COORDS(*uParam11, vVar27);
				}
				else
				{
					*uParam11 = ADD_BLIP_FOR_COORD(vVar27);
					SET_BLIP_COLOUR(*uParam11, 5);
					SET_BLIP_SCALE(*uParam11, 1.2f);
					SET_BLIP_NAME_FROM_TEXT_FILE(*uParam11, "BJ_BLIP_TGT");
				}
			}
			vVar30 = { func_360(uParam0, 0) };
			vVar27.z = (vVar30.z + fVar36);
			vVar12 = { vVar27 };
		}
		else if (func_359(uParam0) != 0)
		{
			vVar27 = { func_360(uParam0, 0) };
			vVar12 = { vVar27 };
		}
		else
		{
			vVar27 = { vVar12 };
		}
		vVar18 = { vVar9 - vVar12 };
		if (func_359(uParam0) == 0)
		{
			DRAW_MARKER(6, vVar27, 0f, 0f, 1f, 0f, 0f, 0f, 4f, 4f, 4f, 240, 200, 80, func_348(vVar27, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			DRAW_MARKER(6, vVar27, 0f, 0f, 1f, 0f, 0f, 0f, 9f, 9f, 9f, 240, 200, 80, func_348(vVar27, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			DRAW_MARKER(6, vVar27, 0f, 0f, 1f, 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_348(vVar27, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*iParam7 != -1)
		{
			DELETE_CHECKPOINT(*uParam4);
			*iParam7 = -1;
		}
	}
	else
	{
		GET_HUD_COLOUR(134, &uVar39, &uVar40, &uVar41, &uVar42);
		vVar18 = { vVar9 - vVar12 };
		vVar15 = { func_360(uParam0, *iParam6 + 1) };
		DRAW_MARKER(6, vVar12, func_461(vVar18), 0f, 0f, 0f, 14f, 14f, 14f, 240, 200, 80, func_348(vVar12, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		if (*iParam7 != *iParam6)
		{
			if (*iParam7 >= 0)
			{
				DELETE_CHECKPOINT(*uParam4);
				*uParam4 = 0;
				if (*iParam7 < (iParam9 - 2))
				{
					DELETE_CHECKPOINT(*uParam5);
					*uParam4 = 0;
				}
			}
			*uParam4 = CREATE_CHECKPOINT(15, vVar12, vVar15, 9f, uVar39, uVar40, uVar41, func_348(vVar27, 25, CEIL((200f * (TO_FLOAT(113) / TO_FLOAT(170))))), 0);
			if (*iParam6 < (iParam9 - 2))
			{
				*uParam5 = CREATE_CHECKPOINT(15, vVar15, func_360(uParam0, *iParam6 + 2), (9f * 0.5f), uVar39, uVar40, uVar41, func_348(vVar27, 25, CEIL((200f * (TO_FLOAT(113) / TO_FLOAT(170))))), 0);
			}
			*iParam7 = *iParam6;
		}
		if (*iParam6 + 1 == (iParam9 - 1))
		{
			DRAW_MARKER(6, vVar15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 4f), (0.5f * 4f), (0.5f * 4f), 240, 200, 80, func_348(vVar15, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			DRAW_MARKER(6, vVar15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 9f), (0.5f * 9f), (0.5f * 9f), 240, 200, 80, func_348(vVar15, 170, 200), 0, 0, 2, 0, 0, 0, 0);
			DRAW_MARKER(6, vVar15, 0f, 0f, 1f, 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_348(vVar15, 170, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		else
		{
			DRAW_MARKER(6, vVar15, func_461(vVar9 - vVar15), 0f, 0f, 0f, (0.5f * 14f), (0.5f * 14f), (0.5f * 14f), 240, 200, 80, func_348(vVar15, 25, 200), 0, 0, 2, 0, 0, 0, 0);
		}
		if (*uParam4 != 0)
		{
			SET_CHECKPOINT_RGBA(*uParam4, uVar39, uVar40, uVar41, func_348(vVar12, 25, CEIL((200f * (TO_FLOAT(113) / TO_FLOAT(170))))));
		}
		if (*uParam5 != 0)
		{
			SET_CHECKPOINT_RGBA(*uParam5, uVar39, uVar40, uVar41, func_348(vVar15, 25, CEIL((200f * (TO_FLOAT(113) / TO_FLOAT(170))))));
		}
	}
	if (!bParam19)
	{
		return 0;
	}
	if ((GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == 0 || GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == 1) || (GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == 2 && !IS_CONTROL_PRESSED(0, 80)))
	{
		if (!GET_SCREEN_COORD_FROM_WORLD_COORD(vVar12, &uVar43, &uVar44))
		{
			if (iLocal_614)
			{
				func_346(vVar12, uParam15, uParam16, uParam17);
				if (func_448(&uLocal_616))
				{
					func_444(&uLocal_616);
				}
			}
			else if (func_448(&uLocal_616))
			{
				if (func_344(&uLocal_616) > 0.5f)
				{
					func_444(&uLocal_616);
					iLocal_614 = 1;
				}
			}
			else
			{
				func_472(&uLocal_616);
			}
		}
		else if (iLocal_614)
		{
			func_346(vVar12, uParam15, uParam16, uParam17);
			if (func_448(&uLocal_616))
			{
				if (func_344(&uLocal_616) > 0.5f)
				{
					func_444(&uLocal_616);
					iLocal_614 = 0;
				}
			}
			else
			{
				func_472(&uLocal_616);
			}
		}
		else if (func_448(&uLocal_616))
		{
			func_444(&uLocal_616);
		}
	}
	else
	{
		iLocal_614 = 0;
	}
	if (func_343(iParam14, uParam18, &uParam1))
	{
		if (DOES_BLIP_EXIST(*uParam11))
		{
			REMOVE_BLIP(uParam11);
		}
		if (DOES_BLIP_EXIST(*uParam12))
		{
			REMOVE_BLIP(uParam12);
		}
		if (!bVar37)
		{
			return 2;
		}
		fVar34 = SQRT(((vVar18.x * vVar18.x) + (vVar18.y * vVar18.y)));
		if (((vVar18.z < 5f && vVar18.z > -2f) && fVar34 < 15f) || func_257(uParam1, uParam2))
		{
			*uParam10 = func_259(CEIL(((100f * (15f - fVar34)) / 15f)) + 4, 0, 100);
			return 1;
		}
		else
		{
			return 3;
		}
	}
	else if (func_342())
	{
		if (GET_PLAYER_INVINCIBLE(PLAYER_ID()))
		{
			SET_PLAYER_INVINCIBLE(PLAYER_ID(), 0);
		}
	}
	else if (!bVar37)
	{
		fVar33 = VMAG2(vVar18);
		if (fVar33 < (22f * 22f))
		{
			if (fVar33 < (10f * 10f))
			{
				bVar38 = true;
			}
			else if (func_266(vVar0, -vVar18 / FtoV(SQRT(fVar33))) < 0.08f)
			{
				bVar38 = true;
			}
			if (bVar38)
			{
				*uParam8++;
				func_341(iParam13, 1);
				func_213(func_414(), 1, FLOOR((30f * fParam21)), 0, 0);
				iLocal_615 = 0;
			}
			if (!bVar38 && !iLocal_615)
			{
				iLocal_615 = 1;
			}
		}
		else if (GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == 0 || GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == -1)
		{
			if (vVar18.z < -22f)
			{
				func_341(iParam13, 0);
				bVar38 = true;
			}
		}
		else
		{
			vVar24 = { GET_ENTITY_FORWARD_VECTOR(PLAYER_PED_ID()) };
			vVar24.z = 0f;
			vVar24 = { func_461(vVar24) };
			vVar21 = { -vVar18.x, -vVar18.y, 0f };
			vVar21 = { func_461(vVar21) };
			fVar35 = ((vVar9.z - 32f) + (32f * func_340(vVar24, vVar21)));
			fVar34 = SQRT(((vVar18.x * vVar18.x) + (vVar18.y * vVar18.y)));
			if ((vVar9.z - fVar35) < fVar34)
			{
				fVar35 = (fVar35 - (0.05f * ((fVar35 - vVar9.z) + fVar34)));
				if (fVar35 < (vVar12.z - 22f))
				{
					func_341(iParam13, 0);
					bVar38 = true;
				}
			}
		}
		if (iLocal_615)
		{
			if (VMAG2(vVar18) >= (22f * 22f))
			{
				*uParam8++;
				func_341(iParam13, 1);
				func_213(func_414(), 1, FLOOR((30f * fParam21)), 0, 0);
				bVar38 = true;
				iLocal_615 = 0;
			}
		}
		if (bVar38)
		{
			*iParam6++;
			if (DOES_BLIP_EXIST(*uParam11))
			{
				REMOVE_BLIP(uParam11);
			}
			if (DOES_BLIP_EXIST(*uParam12))
			{
				*uParam11 = *uParam12;
				*uParam12 = 0;
				SET_BLIP_SCALE(*uParam11, 1.2f);
				if (*iParam6 >= (iParam9 - 1))
				{
					SET_BLIP_NAME_FROM_TEXT_FILE(*uParam11, "BJ_BLIP_TGT");
				}
				else
				{
					SET_BLIP_NAME_FROM_TEXT_FILE(*uParam11, "BJ_BLIP_CHK");
				}
			}
			if (*iParam6 < (iParam9 - 1))
			{
				if (!DOES_BLIP_EXIST(*uParam12))
				{
					*uParam12 = ADD_BLIP_FOR_COORD(func_360(uParam0, *iParam6 + 1));
					SET_BLIP_COLOUR(*uParam12, 5);
					SET_BLIP_SCALE(*uParam12, 0.7f);
					if (*iParam6 + 1 >= (iParam9 - 1))
					{
						SET_BLIP_NAME_FROM_TEXT_FILE(*uParam12, "BJ_BLIP_TGT");
					}
					else
					{
						SET_BLIP_NAME_FROM_TEXT_FILE(*uParam12, "BJ_BLIP_CHK");
					}
				}
			}
			else
			{
				*uParam12 = 0;
			}
			TASK_LOOK_AT_COORD(PLAYER_PED_ID(), func_360(uParam0, *iParam6), -1, 0, 2);
		}
	}
	return 0;
}

float func_340(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return ((Param0 * Param3) + (Param0.f_1 * Param3.f_1));
}

void func_341(var uParam0, bool bParam1)
{
	*uParam0 = GET_SOUND_ID();
	if (bParam1)
	{
		PLAY_SOUND_FRONTEND(*uParam0, "CHECKPOINT_NORMAL", "HUD_MINI_GAME_SOUNDSET", 1);
	}
	else
	{
		func_331("BJ_MISSED", 7500, 1);
		PLAY_SOUND_FRONTEND(*uParam0, "CHECKPOINT_MISSED", "HUD_MINI_GAME_SOUNDSET", 1);
	}
}

int func_342()
{
	if (((IS_PED_RAGDOLL(PLAYER_PED_ID()) && (GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == 3 || GET_PED_PARACHUTE_STATE(PLAYER_PED_ID()) == -1)) && GET_ENTITY_HEIGHT_ABOVE_GROUND(PLAYER_PED_ID()) > 50f) && !GET_PLAYER_HAS_RESERVE_PARACHUTE(PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

bool func_343(var uParam0, var uParam1, var uParam2)
{
	var uVar0;
	int iVar1;
	
	if (IS_PED_INJURED(PLAYER_PED_ID()))
	{
		return 1;
	}
	uVar0 = PLAYER_PED_ID();
	if (!*uParam1)
	{
		iVar1 = GET_PED_PARACHUTE_LANDING_TYPE(uVar0);
		if (iVar1 != -1 && !IS_ENTITY_IN_AIR(uVar0))
		{
			*uParam1 = 1;
			*uParam0 = iVar1;
		}
	}
	return (((IS_ENTITY_IN_WATER(PLAYER_PED_ID()) || (GET_PED_PARACHUTE_STATE(uVar0) == 3 && !IS_ENTITY_IN_AIR(uVar0))) || (GET_PED_PARACHUTE_STATE(uVar0) == -1 && !IS_ENTITY_IN_AIR(uVar0))) || (((DOES_ENTITY_EXIST(*uParam2) && !IS_PED_INJURED(uVar0)) && !IS_ENTITY_DEAD(*uParam2, 0)) && IS_PED_ON_SPECIFIC_VEHICLE(uVar0, *uParam2)));
}

float func_344(var uParam0)
{
	if (func_448(uParam0))
	{
		if (func_345(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_41(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return 0f;
}

bool func_345(var uParam0)
{
	return IS_BIT_SET(*uParam0, 2);
}

void func_346(vector3 vParam0, var uParam3, var uParam4, var uParam5)
{
	var uVar0;
	var uVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	var uVar8;
	var uVar9;
	
	if (GET_SCREEN_COORD_FROM_WORLD_COORD(vParam0, &uVar0, &uVar1))
	{
	}
	fVar4 = 0f;
	fVar5 = 0.05f;
	fVar6 = 0.05f;
	func_347(vParam0, &fVar2, &fVar3);
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
		GET_SCREEN_RESOLUTION(&uVar8, &uVar9);
		fVar7 = (TO_FLOAT(uVar8) / TO_FLOAT(uVar9));
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
		if ((fVar4 != *uParam5 || (*uParam3 == 0f && *uParam4 == 0f)) || (ABSF((fVar2 - *uParam3)) < 0.04f && ABSF((fVar3 - *uParam4)) < 0.04f))
		{
			DRAW_SPRITE("basejumping", "Arrow_Pointer", fVar2, fVar3, fVar6, fVar5, fVar4, 240, 200, 80, 170, 0);
		}
		*uParam5 = fVar4;
	}
	*uParam3 = fVar2;
	*uParam4 = fVar3;
}

void func_347(vector3 vParam0, var uParam3, var uParam4)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	
	if (!func_308(vParam0, 0f, 0f, 0f, 0))
	{
		_GET_2D_COORD_FROM_3D_COORD(vParam0, &fVar0, &fVar1);
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
	func_461(vVar2);
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
	*uParam3 = fVar0;
	*uParam4 = fVar1;
}

int func_348(vector3 vParam0, int iParam3, int iParam4)
{
	float fVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	fVar0 = 100f;
	iVar1 = 50;
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		fVar2 = GET_DISTANCE_BETWEEN_COORDS(vParam0, GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), 1);
		if (fVar2 > fVar0)
		{
			iVar1 = iParam4;
		}
		else
		{
			fVar3 = ((fVar0 - fVar2) / fVar0);
			iVar1 = (iParam4 - CEIL((IntToFloat((iParam4 - iParam3)) * fVar3)));
		}
	}
	if (iVar1 < iParam3)
	{
		iVar1 = iParam3;
	}
	return iVar1;
}

void func_349(var uParam0)
{
	if (func_448(uParam0) && func_447(uParam0) > 7.5f)
	{
		func_444(uParam0);
	}
}

int func_350(var uParam0, int iParam1, var uParam2)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	
	if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		return 0;
	}
	if (IS_PED_IN_FLYING_VEHICLE(PLAYER_PED_ID()))
	{
		*uParam2 = 1;
		return 1;
	}
	vVar1 = { GET_ENTITY_COORDS(PLAYER_PED_ID(), 1) };
	if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1))
	{
		uVar0 = GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 1);
		if (IS_ENTITY_IN_AIR(uVar0))
		{
			return 0;
		}
		else if (!GET_GROUND_Z_FOR_3D_COORD(GET_ENTITY_COORDS(uVar0, 1), &fVar7, 0, 0))
		{
			return 0;
		}
		else if (vVar1.z >= (fVar7 + 1.5f))
		{
			return 0;
		}
	}
	if (IS_ENTITY_IN_AIR(PLAYER_PED_ID()))
	{
		return 0;
	}
	else if (!GET_GROUND_Z_FOR_3D_COORD(vVar1, &fVar7, 0, 0))
	{
		return 0;
	}
	else if (vVar1.z >= (fVar7 + 1.5f))
	{
		return 0;
	}
	vVar4 = { func_360(uParam0, 0) };
	if (vVar1.z < (vVar4.z + 5f))
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
		if (VDIST2(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), func_459(iParam1)) > 3600f)
		{
			*uParam2 = 1;
			return 1;
		}
	}
	return 0;
}

int func_351()
{
	if (_0xEE778F8C7E1142E2(_0x19CAFA3C87F7C2FF()) == 4)
	{
		return 1;
	}
	return 0;
}

var func_352(var uParam0)
{
	return uParam0->f_84;
}

void func_353(var uParam0, bool bParam1)
{
	var uVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	float fVar8;
	
	if (!IS_VEHICLE_DRIVEABLE(*uParam0, 0))
	{
		return;
	}
	vVar2 = { GET_ENTITY_COORDS(*uParam0, 1) };
	fVar8 = _GET_VEHICLE_MAX_SPEED(*uParam0);
	uVar1 = GET_PED_IN_VEHICLE_SEAT(*uParam0, -1, 0);
	FREEZE_ENTITY_POSITION(*uParam0, 0);
	OPEN_SEQUENCE_TASK(&uVar0);
	if (!bParam1)
	{
		TASK_VEHICLE_MISSION_COORS_TARGET(0, *uParam0, GET_ENTITY_COORDS(*uParam0, 1), 4, 0f, 786469, 2f, 0f, 1);
	}
	TASK_VEHICLE_MISSION_COORS_TARGET(0, *uParam0, vVar2 + Vector(5f, 5f, 5f) * GET_ENTITY_FORWARD_VECTOR(*uParam0) + Vector(20f, 0f, 0f), 4, (0.3f * fVar8), 786469, 5f, 10f, 1);
	vVar5 = { Vector(1000f, 1000f, 1000f) * GET_ENTITY_FORWARD_VECTOR(*uParam0) };
	vVar5.z = 200f;
	TASK_VEHICLE_MISSION_COORS_TARGET(0, *uParam0, vVar2 + vVar5, 4, fVar8, 262144, 15f, 10f, 1);
	CLOSE_SEQUENCE_TASK(uVar0);
	CLEAR_PED_TASKS(uVar1);
	TASK_PERFORM_SEQUENCE(uVar1, uVar0);
	CLEAR_SEQUENCE_TASK(&uVar0);
}

void func_354(int iParam0, int iParam1)
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

void func_355(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0)
	{
		SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 1, 0);
	}
	_0xC61B86C9F61EB404(1);
	func_404(0, 1, iParam2, 0, 0, 0);
	if (bParam1)
	{
		DISPLAY_RADAR(1);
		DISPLAY_HUD(1);
	}
	func_544(23, 0);
}

int func_356(int iParam0)
{
	switch (iParam0)
	{
		case joaat("bmx"):
		case joaat("scorcher"):
		case joaat("tribike"):
		case joaat("tribike2"):
		case joaat("tribike3"):
		case joaat("vader"):
		case joaat("akuma"):
		case joaat("bagger"):
		case joaat("ruffian"):
		case joaat("bati"):
		case joaat("bati2"):
		case joaat("blazer"):
		case joaat("blazer2"):
		case joaat("cruiser"):
		case joaat("hexer"):
		case joaat("nemesis"):
		case joaat("pcj"):
		case joaat("policeb"):
			return 1;
		
		default:
	}
	return 0;
}

int func_357(var uParam0)
{
	return *uParam0;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case joaat("freight"):
		case joaat("metrotrain"):
			return 1;
		
		default:
	}
	return 0;
}

int func_359(var uParam0)
{
	return uParam0->f_1;
}

Vector3 func_360(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return 0f, 0f, 0f;
	}
	return uParam0->f_12[iParam1 /*3*/];
}

Vector3 func_361(var uParam0)
{
	return uParam0->f_6;
}

void func_362(var uParam0)
{
	func_40(uParam0, 0f);
}

int func_363(var uParam0)
{
	return SHIFT_RIGHT(uParam0, 20) & 63;
}

int func_364(var uParam0)
{
	return SHIFT_RIGHT(uParam0, 14) & 63;
}

int func_365(var uParam0)
{
	return SHIFT_RIGHT(uParam0, 9) & 31;
}

void func_366()
{
	int iVar0;
	
	LEADERBOARDS_CLEAR_CACHE_DATA();
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_1838577.f_81[iVar0] = 0;
		iVar0++;
	}
}

void func_367()
{
	struct<68> Var0;
	
	Global_1835013 = 0;
	Global_1835013.f_1 = 0;
	Global_1835013.f_2 = 0;
	Global_1835013.f_3 = 0;
	Global_1835013.f_4 = 0;
	func_368(&(Global_1835013.f_73));
	func_368(&(Global_1835013.f_142));
	func_368(&(Global_1835013.f_211));
	func_368(&(Global_1835013.f_280));
	StringCopy(&(Global_1835013.f_349), "", 24);
	StringCopy(&(Global_1835013.f_355), "", 24);
	func_129(&(Global_1835013.f_361));
	Global_1835013.f_374 = -1;
	Global_1835388 = 0;
	Global_1835389 = 0;
	Var0.f_2.f_1 = 4;
	Global_1835013.f_5 = { Var0 };
}

void func_368(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		uParam0->f_3[iVar0] = 0f;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

bool func_369(var uParam0)
{
	return uParam0->f_83;
}

int func_370(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, int iParam9, var uParam10, var uParam11, var uParam12)
{
	if (IS_CAM_INTERPOLATING(func_419(uParam3, 1)))
	{
		func_362(uParam5);
	}
	if (!*uParam10)
	{
		if (func_448(uParam7) && func_447(uParam7) >= func_391(uParam0))
		{
			func_353(uParam2, 0);
			func_444(uParam7);
			*uParam10 = 1;
		}
	}
	else if (IS_VEHICLE_DRIVEABLE(*uParam2, 0))
	{
		SET_HELI_BLADES_SPEED(*uParam2, 0.7f);
	}
	if (func_448(uParam5) && func_447(uParam5) > 0.2f)
	{
		func_444(uParam5);
		func_444(uParam6);
		return 1;
	}
	if (!func_448(uParam6))
	{
		func_472(uParam6);
	}
	else if ((uParam12 && IS_SCREEN_FADED_IN()) || (func_447(uParam6) > 0.5f && func_324(uParam4, 2)))
	{
		*uParam11 = 1;
		func_444(uParam5);
		func_444(uParam6);
		return 1;
	}
	HIDE_HUD_COMPONENT_THIS_FRAME(2);
	if (func_448(uParam8))
	{
		if (func_452(iParam1) != 0)
		{
			func_444(uParam8);
		}
		else if (func_447(uParam8) > func_412(iParam1, iParam9))
		{
			switch (iParam9)
			{
				case 0:
					TASK_PLAY_ANIM(PLAYER_PED_ID(), "amb@world_human_hiker_standing@male@idle_a", "idle_a", 8f, -1.4f, -1, 48, 0, 0, 0, 0);
					break;
				
				case 1:
					TASK_PLAY_ANIM(PLAYER_PED_ID(), "amb@world_human_muscle_flex@arms_at_side@base", "base", 8f, -1.4f, -1, 48, 0.681f, 0, 0, 0);
					break;
				
				case 2:
					TASK_PLAY_ANIM(PLAYER_PED_ID(), "playidles_cold", "blow_hands", 8f, -1.4f, -1, 48, 0.537f, 0, 0, 0);
					break;
			}
			func_444(uParam8);
		}
	}
	if (IS_SCREEN_FADED_IN())
	{
		func_371();
	}
	else
	{
		func_362(uParam6);
	}
	return 0;
}

void func_371()
{
	struct<6> Var0;
	int iVar6;
	
	iVar6 = Global_106565.f_18961;
	func_372(Var0, 0, 0, 0, 0, iVar6);
}

void func_372(struct<6> Param0, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	int iVar12;
	
	if (Global_71844 != 6)
	{
		if (Global_71846 == -1)
		{
			if (func_386(1, Param0))
			{
				if (Global_71847 == 3)
				{
					fVar0 = 1.5f;
				}
				else
				{
					fVar0 = 2.5f;
				}
				if (fLocal_21 > fVar0)
				{
					Global_71846 = GET_GAME_TIMER();
					vLocal_22 = { GET_HUD_COMPONENT_POSITION(15) };
					fLocal_21 = 0f;
				}
				else
				{
					fLocal_21 = (fLocal_21 + GET_FRAME_TIME());
				}
			}
			else
			{
				fLocal_21 = 0f;
			}
		}
		else
		{
			if (!func_386(0, Param0))
			{
				Global_71846 = (GET_GAME_TIMER() - 9000);
			}
			HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HIDE_HUD_COMPONENT_THIS_FRAME(9);
			iVar1 = (GET_GAME_TIMER() - Global_71846);
			if (iVar1 < 9000 && !IS_SCREEN_FADED_OUT())
			{
				iVar2 = 255;
				if (iVar1 < 1000)
				{
					iVar2 = CEIL(((TO_FLOAT(iVar1) / 1000f) * 255f));
				}
				else
				{
					iVar3 = (9000 - iVar1);
					if (iVar3 < 1000)
					{
						iVar2 = CEIL(((TO_FLOAT(iVar3) / 1000f) * 255f));
					}
				}
				switch (Global_71844)
				{
					case 3:
					case 5:
						if (iParam6 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.07f;
						}
						else if (iParam7 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.077f;
						}
						else if (iParam8 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.05f;
						}
						else if (iParam9 == 1)
						{
							fVar6 = 0f;
							fVar7 = -0.035f;
						}
						else
						{
							fVar6 = 0f;
							fVar7 = -0.014f;
						}
						break;
					
					default:
						fVar6 = 0f;
						fVar7 = -0.014f;
						break;
				}
				SET_SCRIPT_GFX_ALIGN(82, 66);
				SET_TEXT_FONT(1);
				SET_TEXT_JUSTIFICATION(2);
				iVar12 = func_414();
				if (Global_71847 == 1 && Global_71845 == 62)
				{
					iVar12 = Global_106565.f_2357.f_539.f_4322;
				}
				switch (iVar12)
				{
					case 0:
						GET_HUD_COLOUR(143, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 1:
						GET_HUD_COLOUR(144, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					case 2:
						GET_HUD_COLOUR(145, &iVar8, &iVar9, &iVar10, &uVar11);
						break;
					
					default:
						iVar8 = 240;
						iVar9 = 200;
						iVar10 = 80;
				}
				SET_TEXT_COLOUR(iVar8, iVar9, iVar10, iVar2);
				SET_TEXT_DROP_SHADOW();
				Var4 = { func_375(Global_71845, Global_71847, iParam10) };
				if (fVar7 == -0.014f)
				{
				}
				SET_SCRIPT_GFX_ALIGN_PARAMS(fVar6, fVar7, 0f, 0.01f);
				SET_TEXT_SCALE(0.67f, 0.67f);
				if (!GET_IS_WIDESCREEN() && !GET_IS_HIDEF())
				{
					fLocal_26 = 0.14f;
				}
				else
				{
					fLocal_26 = 0.17f;
				}
				if (fVar7 == -0.014f)
				{
					if (func_374(&Var4) > fLocal_26)
					{
						if (IS_HUD_COMPONENT_ACTIVE(15))
						{
							SET_HUD_COMPONENT_POSITION(15, vLocal_22.x, (vLocal_22.y + fLocal_25));
							Global_71849 = 1;
						}
					}
				}
				BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Var4);
				END_TEXT_COMMAND_DISPLAY_TEXT(fVar6, fVar7, 0);
				RESET_SCRIPT_GFX_ALIGN();
				if (Global_71848 == 1)
				{
					func_373();
					fLocal_21 = 0f;
				}
			}
			else
			{
				func_373();
				fLocal_21 = 0f;
			}
		}
	}
}

void func_373()
{
	if (Global_71844 != 6)
	{
	}
	if (Global_71849)
	{
		RESET_HUD_COMPONENT_VALUES(15);
		Global_71849 = 0;
		Global_17411.f_8353 = 0;
	}
	Global_71844 = 6;
	Global_71846 = -1;
	Global_71845 = -1;
}

float func_374(var uParam0)
{
	_BEGIN_TEXT_COMMAND_WIDTH(uParam0);
	return _END_TEXT_COMMAND_GET_WIDTH(1);
}

struct<2> func_375(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;
	int iVar2;
	
	StringCopy(&Var0, "", 8);
	switch (iParam1)
	{
		case 1:
			Var0 = { func_385(iParam0) };
			break;
		
		case 7:
			Var0 = { func_383(iParam0) };
			break;
		
		case 3:
			iVar2 = iParam0;
			switch (iVar2)
			{
				case 0:
					Var0 = { func_382(iParam2) };
					break;
				
				case 8:
					Var0 = { func_381(iParam2) };
					break;
				
				case 7:
					Var0 = { func_380(iParam2) };
					break;
				
				case 10:
					Var0 = { func_379(iParam2) };
					break;
				
				case 5:
					Var0 = { func_378(iParam2) };
					break;
				
				case 4:
					Var0 = { func_377(iParam2) };
					break;
				
				default:
					StringCopy(&Var0, func_376(iVar2), 8);
					break;
			}
			break;
		
		default:
			break;
	}
	return Var0;
}

char* func_376(int iParam0)
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

struct<2> func_377(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGOR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_378(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGFS_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_379(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSP_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_380(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGSR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_381(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (IS_STRING_NULL_OR_EMPTY(&cVar2) || iParam0 == 3)
	{
	}
	else
	{
		StringCopy(&Var0, "MGCR_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_382(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	IntToString(&cVar2, iParam0, 8);
	if (IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "MGBJ_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_383(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_384(iParam0) };
	if (IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_384(int iParam0)
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

struct<2> func_385(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "M_", 8);
	StringConCat(&Var0, &(Global_84500[iParam0 /*34*/].f_8), 8);
	if (iParam0 == 90)
	{
		switch (Global_106565.f_9079.f_99.f_205[7])
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

int func_386(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (((!func_388(0) || Global_71859) || Global_71848 == 1) || !IS_SCREEN_FADED_IN())
	{
		return 0;
	}
	switch (Global_71844)
	{
		case 0:
			if (ARE_STRINGS_EQUAL(&uParam1, "NONE") || IS_STRING_NULL_OR_EMPTY(&uParam1))
			{
				Global_71844 = 3;
			}
			else
			{
				Global_71844 = 1;
			}
			break;
		
		case 1:
			if (HAS_CUTSCENE_LOADED())
			{
				Global_71844 = 2;
			}
			break;
		
		case 2:
			if (IS_CUTSCENE_PLAYING())
			{
				Global_71844 = 4;
				return 1;
			}
			else if (!IS_CUTSCENE_ACTIVE())
			{
				Global_71844 = 3;
			}
			break;
		
		case 3:
			if (IS_CUTSCENE_PLAYING())
			{
			}
			else
			{
				Global_71844 = 5;
				return 1;
			}
			break;
		
		case 4:
			if (IS_CUTSCENE_PLAYING())
			{
				return 1;
			}
			else if (iParam0 == 1)
			{
				Global_71844 = 5;
			}
			break;
		
		case 5:
			if ((IS_CUTSCENE_PLAYING() || func_31(0)) || func_387(1))
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

bool func_387(bool bParam0)
{
	if (bParam0)
	{
		return (Global_17272.f_4 && Global_17272.f_104 == 4);
	}
	return Global_17272.f_4;
}

int func_388(int iParam0)
{
	if (Global_36425 == 15)
	{
		return 0;
	}
	if (func_389(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_389(int iParam0)
{
	return func_390(iParam0, Global_36425);
}

int func_390(int iParam0, int iParam1)
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

float func_391(var uParam0)
{
	return uParam0->f_80;
}

int func_392(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_401(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_393(sParam2, iParam3, 0);
}

int func_393(char* sParam0, int iParam1, bool bParam2)
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
					func_400();
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
		if (func_399(8, -1))
		{
			return 0;
		}
		Global_15942 = { Global_15936 };
		func_398();
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
				func_397();
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
				if (func_396())
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
			if (func_28())
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
			func_395();
			Global_15876 = bParam2;
		}
		Global_15868 = iParam1;
		StringCopy(&Global_15485, sParam0, 24);
		Global_14732 = 0;
		func_394();
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
		func_400();
	}
	return 0;
}

void func_394()
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

void func_395()
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

int func_396()
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

void func_397()
{
	if (func_244(14))
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
		Global_14553 = func_414();
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

void func_398()
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

bool func_399(int iParam0, int iParam1)
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

void func_400()
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

void func_401(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_15320 = { *uParam0 };
	Global_1739 = iParam1;
	StringCopy(&Global_15936, sParam2, 24);
	Global_16855 = uParam5;
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

var func_402(var uParam0)
{
	return uParam0->f_4;
}

void func_403(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, var uParam6, var uParam7)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	
	uVar0 = func_419(uParam0, 0);
	if (DOES_ENTITY_EXIST(iParam5) && !IS_ENTITY_DEAD(iParam5, 0))
	{
		*uParam2 = { 10.2986f, 0f, 8.909f };
		*uParam4 = { Vector(1.2f, 1.2f, 1.2f) * Vector(0f, -COS((-97.4239f + func_450(uParam1))), SIN((-97.4239f + func_450(uParam1)))) };
		*uParam3 = { GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam5, 1.12046f, -0.317773f, 1.3385f) };
		vVar1 = { func_449(*uParam4, uParam2->f_2) };
		vVar7 = { *uParam3 + vVar1 };
		*uParam6 = { (-33f + *uParam2), 0f, (-88.515f + func_450(uParam1)) };
		*uParam7 = 26f;
		vVar4 = { *uParam6 };
		vVar4.z = (vVar4.z + uParam2->f_2);
		SET_CAM_COORD(uVar0, vVar7);
		SET_CAM_ROT(uVar0, vVar4, 2);
		SET_CAM_FOV(uVar0, *uParam7);
		SET_CAM_NEAR_CLIP(uVar0, func_322());
	}
	SET_CAM_ACTIVE(uVar0, 1);
	RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
}

void func_404(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (bParam0)
	{
		SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER_ID());
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 1);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 1);
		func_411(1);
		_0xA8FDB297A8D25FBA();
		_0xFDB423997FA30340();
		if (Global_14553.f_1 > 3)
		{
			if (IS_MOBILE_PHONE_CALL_ONGOING())
			{
				STOP_SCRIPTED_CONVERSATION(0);
			}
			if (!func_28())
			{
				Global_14553.f_1 = 3;
			}
			Global_15866 = 5;
		}
		func_410(1, iParam3, iParam2, 0);
		Global_56500 = 1;
		Global_68810 = 1;
		Global_71588 = 1;
	}
	else
	{
		func_411(0);
		_0xE1CD1E48E025E661();
		Global_56500 = 0;
		if (bParam1)
		{
			_0x03FC694AE06C5A20();
		}
		SET_ALL_RANDOM_PEDS_FLEE(PLAYER_ID(), 0);
		SET_POLICE_IGNORE_PLAYER(PLAYER_ID(), 0);
		func_410(0, iParam3, iParam2, 0);
		if (NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (((((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_408(PLAYER_ID())) && !func_406(PLAYER_ID(), 0)) && !func_405()) && !bParam4) && !bParam5)
			{
				SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
			}
		}
		else if (((!IS_PED_INJURED(PLAYER_PED_ID()) && !func_408(PLAYER_ID())) && !bParam4) && !bParam5)
		{
			SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
		}
		Global_71588 = 0;
	}
}

bool func_405()
{
	return IS_BIT_SET(Global_1589819[PLAYER_ID() /*818*/].f_39.f_18, 14);
}

bool func_406(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (iParam0 == PLAYER_ID())
	{
		bVar0 = func_407(-1, 0) == 8;
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

int func_407(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_222();
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

int func_408(int iParam0)
{
	if (func_406(iParam0, 0))
	{
		return 1;
	}
	if (func_409())
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

bool func_409()
{
	return IS_BIT_SET(Global_2359302, 3);
}

int func_410(int iParam0, var uParam1, var uParam2, int iParam3)
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

void func_411(int iParam0)
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

float func_412(int iParam0, int iParam1)
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

int func_413(int iParam0)
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

int func_414()
{
	func_415();
	return Global_106565.f_2357.f_539.f_4321;
}

void func_415()
{
	int iVar0;
	
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()))
	{
		if (func_36(Global_106565.f_2357.f_539.f_4321) != GET_ENTITY_MODEL(PLAYER_PED_ID()))
		{
			iVar0 = func_35(PLAYER_PED_ID());
			if (func_37(iVar0) && (!func_244(14) || Global_105516))
			{
				if (Global_106565.f_2357.f_539.f_4321 != iVar0 && func_37(Global_106565.f_2357.f_539.f_4321))
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

var func_416(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

int func_417(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return 1;
	}
	return 0;
}

Vector3 func_418(int iParam0)
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

int func_419(var uParam0, int iParam1)
{
	if (iParam1 >= 2)
	{
		return 0;
	}
	return (*uParam0)[iParam1];
}

void func_420(int iParam0, int iParam1, int iParam2)
{
	SET_PLAYER_CONTROL(GET_PLAYER_INDEX(), 0, iParam0);
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		STOP_FIRE_IN_RANGE(GET_ENTITY_COORDS(PLAYER_PED_ID(), 1), 15f);
	}
	_0xC61B86C9F61EB404(iParam1);
	func_27(0);
	func_404(1, 1, iParam2, 0, 0, 0);
	DISPLAY_RADAR(0);
	DISPLAY_HUD(0);
	func_544(23, 1);
}

void func_421(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, int iParam13, int iParam14)
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	var uVar7;
	
	if (IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		return;
	}
	if (func_417(func_443(uParam0)))
	{
	}
	else
	{
		SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(func_443(uParam0), func_442(uParam0), 0, 1);
	}
	iVar5 = 0;
	while (iVar5 < 12)
	{
		if (!func_417(func_360(uParam0, iVar5)))
		{
			*uParam2 = iVar5 + 1;
		}
		else
		{
			iVar5 = 999999;
		}
		iVar5++;
	}
	SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
	SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
	GIVE_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
	SET_ENTITY_INVINCIBLE(PLAYER_PED_ID(), 0);
	if (iParam13 == 4)
	{
		uVar1 = GET_PLAYERS_LAST_VEHICLE();
		if (DOES_ENTITY_EXIST(uVar1))
		{
			if (IS_ENTITY_DEAD(uVar1, 0))
			{
				DELETE_VEHICLE(&uVar1);
			}
			else
			{
				vVar2 = { GET_ENTITY_COORDS(uVar1, 1) };
				if (((((vVar2.z > 320f && vVar2.z < 340f) && vVar2.x > -103f) && vVar2.x < -45f) && vVar2.y > -850f) && vVar2.y < -787f)
				{
					SET_ENTITY_COORDS(uVar1, -89.794f, -742.6727f, 43.7472f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(uVar1, -109.33f);
					SET_VEHICLE_DOORS_SHUT(uVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 3)
	{
		uVar1 = GET_PLAYERS_LAST_VEHICLE();
		if (DOES_ENTITY_EXIST(uVar1))
		{
			if (IS_ENTITY_DEAD(uVar1, 0))
			{
				DELETE_VEHICLE(&uVar1);
			}
			else
			{
				vVar2 = { GET_ENTITY_COORDS(uVar1, 1) };
				if (((((vVar2.z > 689.4f && vVar2.z < 701.8875f) && vVar2.x > 404.6f) && vVar2.x < 413.4f) && vVar2.y > 5700.6f) && vVar2.y < 5711.9f)
				{
					SET_ENTITY_COORDS(uVar1, -215.2838f, 6543.57f, 10.0967f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(uVar1, 145.5732f);
					SET_VEHICLE_DOORS_SHUT(uVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 5)
	{
		uVar1 = GET_PLAYERS_LAST_VEHICLE();
		if (DOES_ENTITY_EXIST(uVar1))
		{
			if (IS_ENTITY_DEAD(uVar1, 0))
			{
				DELETE_VEHICLE(&uVar1);
			}
			else
			{
				vVar2 = { GET_ENTITY_COORDS(uVar1, 1) };
				if (((((vVar2.z > 294.5f && vVar2.z < 298.9f) && vVar2.x > -121.3f) && vVar2.x < -116.5f) && vVar2.y > -978.1f) && vVar2.y < -973.2f)
				{
					SET_ENTITY_COORDS(uVar1, -118.1021f, -947.3954f, 27.3296f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(uVar1, 341.9614f);
					SET_VEHICLE_DOORS_SHUT(uVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 6)
	{
		uVar1 = GET_PLAYERS_LAST_VEHICLE();
		if (DOES_ENTITY_EXIST(uVar1))
		{
			if (IS_ENTITY_DEAD(uVar1, 0))
			{
				DELETE_VEHICLE(&uVar1);
			}
			else
			{
				vVar2 = { GET_ENTITY_COORDS(uVar1, 1) };
				if (((((vVar2.z > 182.7f && vVar2.z < 202.7f) && vVar2.x > -1252.7f) && vVar2.x < -1227.9f) && vVar2.y > 4525.8f) && vVar2.y < 4549.3f)
				{
					SET_ENTITY_COORDS(uVar1, -1237.022f, 4559.404f, 185.9418f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(uVar1, 172.2123f);
					SET_VEHICLE_DOORS_SHUT(uVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 8)
	{
		uVar1 = GET_PLAYERS_LAST_VEHICLE();
		if (DOES_ENTITY_EXIST(uVar1))
		{
			if (IS_ENTITY_DEAD(uVar1, 0))
			{
				DELETE_VEHICLE(&uVar1);
			}
			else
			{
				vVar2 = { GET_ENTITY_COORDS(uVar1, 1) };
				if (((((vVar2.z > 230f && vVar2.z < 244.5f) && vVar2.x > -809.6f) && vVar2.x < -747.7f) && vVar2.y > 310.6f) && vVar2.y < 346.6f)
				{
					SET_ENTITY_COORDS(uVar1, -1351.805f, 133.95f, 55.2558f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(uVar1, 0.8373f);
					SET_VEHICLE_DOORS_SHUT(uVar1, 1);
				}
			}
		}
	}
	else if (iParam13 == 12)
	{
		uVar1 = GET_PLAYERS_LAST_VEHICLE();
		if (DOES_ENTITY_EXIST(uVar1))
		{
			if (IS_ENTITY_DEAD(uVar1, 0))
			{
				DELETE_VEHICLE(&uVar1);
			}
			else
			{
				vVar2 = { GET_ENTITY_COORDS(uVar1, 1) };
				if (((((vVar2.z > 143.6f && vVar2.z < 154.5f) && vVar2.x > -777f) && vVar2.x < -758.9f) && vVar2.y > 4328.3f) && vVar2.y < 4344f)
				{
					SET_ENTITY_COORDS(uVar1, -765.8775f, 4294.807f, 145.6581f, 1, 0, 0, 1);
					SET_ENTITY_HEADING(uVar1, 349.2306f);
					SET_VEHICLE_DOORS_SHUT(uVar1, 1);
				}
			}
		}
	}
	if (!IS_PED_INJURED(PLAYER_PED_ID()))
	{
		SET_PLAYER_CONTROL(PLAYER_ID(), 0, 0);
		SET_CURRENT_PED_WEAPON(PLAYER_PED_ID(), joaat("weapon_unarmed"), 0);
		GIVE_WEAPON_TO_PED(PLAYER_PED_ID(), joaat("gadget_parachute"), 1, 0, 0);
	}
	iVar0 = func_452(iParam13);
	if (iVar0 != 0)
	{
		if (!IS_ENTITY_DEAD(*iParam3, 0) || DOES_ENTITY_EXIST(*iParam3))
		{
			SET_VEHICLE_FIXED(*iParam3);
			SET_ENTITY_COORDS(*iParam3, func_459(iParam13), 1, 0, 0, 1);
			SET_ENTITY_HEADING(*iParam3, func_450(uParam0));
		}
		else
		{
			*iParam3 = CREATE_VEHICLE(iVar0, func_459(iParam13), func_450(uParam0), 1, 1, 0);
		}
		if (func_451(iVar0))
		{
			if (!DOES_ENTITY_EXIST(*uParam8) || IS_ENTITY_DEAD(*uParam8, 0))
			{
				*uParam8 = CREATE_PED_INSIDE_VEHICLE(*iParam3, 26, uParam10, -1, 1, 1);
				SET_PED_HELMET(*uParam8, 0);
				func_441(*uParam8, iParam13);
				SET_ENTITY_INVINCIBLE(*uParam8, 1);
			}
			_0xF4C8CF9E353AFECA("SKY_DIVING_SHAKE", 0.15f);
			func_439(uParam1, *uParam8, func_440(iParam13));
			func_436(uParam1, PLAYER_PED_ID(), func_438());
			SET_HELI_BLADES_SPEED(*iParam3, 0.7f);
			FREEZE_ENTITY_POSITION(*iParam3, 1);
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				if (!IS_PED_IN_VEHICLE(PLAYER_PED_ID(), *iParam3, 0))
				{
					DETACH_ENTITY(PLAYER_PED_ID(), 1, 1);
					FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
					SET_PED_INTO_VEHICLE(PLAYER_PED_ID(), *iParam3, 2);
				}
				else if (func_435(PLAYER_PED_ID(), *iParam3) == 1)
				{
					FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
					SET_PED_INTO_VEHICLE(PLAYER_PED_ID(), *iParam3, 2);
				}
			}
			if (!IS_ENTITY_DEAD(*iParam3, 0))
			{
				*iParam14 = CREATE_SYNCHRONIZED_SCENE(0f, 0f, 0f, 0f, 0f, 0f, 2);
				ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(*iParam14, *iParam3, GET_ENTITY_BONE_INDEX_BY_NAME(*iParam3, "Chassis"));
				TASK_SYNCHRONIZED_SCENE(PLAYER_PED_ID(), *iParam14, "oddjobs@basejump@", "Heli_door_loop", 4f, -4f, 65, 0, 1148846080, 0);
				SET_SYNCHRONIZED_SCENE_LOOPED(*iParam14, 1);
			}
			func_472(uParam12);
		}
		else if (func_356(iVar0))
		{
			func_436(uParam1, PLAYER_PED_ID(), func_438());
			FREEZE_ENTITY_POSITION(PLAYER_PED_ID(), 0);
			SET_PED_INTO_VEHICLE(PLAYER_PED_ID(), *iParam3, -1);
			GIVE_PED_HELMET(PLAYER_PED_ID(), 0, 4096, -1);
			func_472(uParam12);
		}
	}
	else
	{
		func_436(uParam1, PLAYER_PED_ID(), func_438());
		if (func_369(uParam0))
		{
			if (!IS_PED_INJURED(PLAYER_PED_ID()) && (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 1) || IS_PED_ON_VEHICLE(PLAYER_PED_ID())))
			{
				_0xF9ACF4A08098EA25(PLAYER_PED_ID(), 1);
			}
			SET_ENTITY_COORDS(PLAYER_PED_ID(), func_459(iParam13), 1, 0, 0, 1);
			SET_ENTITY_HEADING(PLAYER_PED_ID(), func_450(uParam0));
			TASK_STAND_STILL(PLAYER_PED_ID(), -1);
			if (DOES_ENTITY_EXIST(*iParam3))
			{
				iVar6 = -1;
				while (iVar6 <= (GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*iParam3) - 1))
				{
					if (!IS_VEHICLE_SEAT_FREE(*iParam3, iVar6, 0))
					{
						uVar7 = GET_PED_IN_VEHICLE_SEAT(*iParam3, iVar6, 0);
						DELETE_PED(&uVar7);
					}
					iVar6++;
				}
				DELETE_VEHICLE(iParam3);
			}
		}
	}
	SET_PED_RESET_FLAG(PLAYER_PED_ID(), 177, 1);
	SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 36, 1);
	if (func_517(uParam0) != 0)
	{
		func_431(uParam0, uParam5, iParam13);
	}
	if (func_430(uParam0) != 0)
	{
		func_427(uParam0, uParam7);
	}
	iVar0 = func_359(uParam0);
	if (func_358(iVar0))
	{
		DELETE_ALL_TRAINS();
		SET_RANDOM_TRAINS(0);
	}
	else if (iVar0 != 0)
	{
		CLEAR_AREA(func_360(uParam0, 0), 100f, 1, 0, 0, 0);
		if (DOES_ENTITY_EXIST(*uParam4) && IS_ENTITY_DEAD(*uParam4, 0))
		{
			DELETE_VEHICLE(uParam4);
		}
		if (!DOES_ENTITY_EXIST(*uParam4))
		{
			*uParam4 = CREATE_VEHICLE(iVar0, func_360(uParam0, 0), func_426(uParam0), 1, 1, 0);
			if (func_425(func_359(uParam0)))
			{
				SET_VEHICLE_COLOUR_COMBINATION(*uParam4, 11);
			}
			else if (func_424(func_359(uParam0)))
			{
				SET_VEHICLE_EXTRA(*uParam4, 1, 1);
				SET_VEHICLE_COLOUR_COMBINATION(*uParam4, 6);
				SET_VEHICLE_LIGHTS(*uParam4, 2);
				_0xBC3CCA5844452B06(200f);
				SET_ENTITY_LOD_DIST(*uParam4, 1000);
			}
			SET_ENTITY_LOAD_COLLISION_FLAG(*uParam4, 1, 1);
		}
		else if (!IS_ENTITY_DEAD(*uParam4, 0))
		{
			SET_VEHICLE_FIXED(*uParam4);
			SET_ENTITY_COORDS(*uParam4, func_360(uParam0, 0), 1, 0, 0, 1);
			SET_ENTITY_HEADING(*uParam4, func_426(uParam0));
		}
		if (func_425(func_359(uParam0)))
		{
			if (DOES_ENTITY_EXIST(*uParam6) && IS_ENTITY_DEAD(*uParam6, 0))
			{
				DELETE_VEHICLE(uParam6);
			}
			if (!DOES_ENTITY_EXIST(*uParam6))
			{
				*uParam6 = CREATE_VEHICLE(joaat("trflat"), GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(*uParam4, 0f, -10f, 0f), func_426(uParam0), 1, 1, 0);
				SET_ENTITY_LOAD_COLLISION_FLAG(*uParam6, 1, 1);
				SET_ENTITY_LOD_DIST(*uParam6, 2000);
			}
			else if (!IS_ENTITY_DEAD(*uParam6, 0))
			{
				SET_VEHICLE_FIXED(*uParam6);
			}
			if (!IS_VEHICLE_ATTACHED_TO_TRAILER(*uParam4))
			{
				ATTACH_VEHICLE_TO_TRAILER(*uParam4, *uParam6, 1065353216);
			}
		}
		if (DOES_ENTITY_EXIST(*uParam9) && IS_ENTITY_DEAD(*uParam9, 0))
		{
			DELETE_PED(uParam9);
		}
		if (!DOES_ENTITY_EXIST(*uParam9))
		{
			*uParam9 = CREATE_PED_INSIDE_VEHICLE(*uParam4, 26, uParam11, -1, 1, 1);
			SET_ENTITY_AS_MISSION_ENTITY(*uParam9, 1, 0);
			SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam9, 1);
			func_423(*uParam9, iParam13);
			if (iParam13 == 0)
			{
				func_422(uParam1, 2, *uParam9, "EX3MERC1", 0, 1);
			}
		}
		else
		{
			SET_ENTITY_HEALTH(*uParam9, GET_ENTITY_MAX_HEALTH(*uParam9), 0);
			RESET_PED_VISIBLE_DAMAGE(*uParam9);
			CLEAR_PED_TASKS(*uParam9);
			if (!IS_PED_IN_VEHICLE(*uParam9, *uParam4, 0) || GET_PED_IN_VEHICLE_SEAT(*uParam4, -1, 0) != *uParam9)
			{
				if (IS_PED_IN_ANY_VEHICLE(*uParam9, 1))
				{
					_0xF9ACF4A08098EA25(*uParam9, 1);
				}
				SET_PED_INTO_VEHICLE(*uParam9, *uParam4, -1);
			}
		}
		SET_ENTITY_LOAD_COLLISION_FLAG(*uParam9, 1, 1);
	}
	if (func_414() == 0)
	{
		SET_PED_COMPONENT_VARIATION(PLAYER_PED_ID(), 9, 5, 0, 0);
	}
	else if (func_414() == 1)
	{
		SET_PED_COMPONENT_VARIATION(PLAYER_PED_ID(), 8, 1, 0, 0);
	}
	else if (func_414() == 2)
	{
		SET_PED_COMPONENT_VARIATION(PLAYER_PED_ID(), 8, 3, 0, 0);
	}
}

void func_422(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_423(var uParam0, int iParam1)
{
	if (IS_ENTITY_DEAD(uParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 0, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 0, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 2, 0);
			CLEAR_PED_PROP(uParam0, 0);
			SET_PED_PROP_INDEX(uParam0, 1, 1, 0, 0);
			break;
		
		case 5:
			SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 1, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 2, 0, 1, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 3, 1, 2, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 4, 1, 1, 0);
			CLEAR_PED_PROP(uParam0, 0);
			CLEAR_PED_PROP(uParam0, 1);
			break;
		
		case 7:
			SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 1, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 2, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 2, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 8, 0, 1, 0);
			SET_PED_PROP_INDEX(uParam0, 0, 0, 2, 0);
			break;
	}
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case joaat("seashark"):
		case joaat("seashark2"):
		case joaat("dinghy"):
		case joaat("jetmax"):
		case joaat("marquis"):
		case joaat("squalo"):
		case joaat("suntrap"):
		case joaat("tropic"):
		case joaat("predator"):
			return 1;
		
		default:
	}
	return 0;
}

int func_425(int iParam0)
{
	switch (iParam0)
	{
		case joaat("hauler"):
		case joaat("biff"):
		case joaat("packer"):
		case joaat("trash"):
		case joaat("benson"):
		case joaat("phantom"):
		case joaat("pounder"):
			return 1;
		
		default:
	}
	return 0;
}

var func_426(var uParam0)
{
	return uParam0->f_77;
}

void func_427(var uParam0, var uParam1)
{
	if (!DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = CREATE_VEHICLE(func_430(uParam0), func_429(uParam0), func_428(uParam0), 1, 1, 0);
	}
	else if (IS_ENTITY_DEAD(*uParam1, 0))
	{
		DELETE_VEHICLE(uParam1);
		*uParam1 = CREATE_VEHICLE(func_430(uParam0), func_429(uParam0), func_428(uParam0), 1, 1, 0);
	}
	else
	{
		SET_VEHICLE_FIXED(*uParam1);
	}
}

var func_428(var uParam0)
{
	return uParam0->f_79;
}

Vector3 func_429(var uParam0)
{
	return uParam0->f_9;
}

int func_430(var uParam0)
{
	return uParam0->f_3;
}

void func_431(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (DOES_ENTITY_EXIST(*uParam1))
	{
		if (!func_317(*uParam1) && DOES_ENTITY_EXIST(GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0)))
		{
			uVar1 = GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, 0);
		}
		uVar2 = *uParam1;
	}
	iVar0 = func_434(iParam2);
	if (iVar0 != 0)
	{
		if (!DOES_ENTITY_EXIST(uVar2))
		{
			uVar2 = CREATE_VEHICLE(func_517(uParam0), func_433(uParam0), func_432(uParam0), 1, 1, 0);
		}
		else
		{
			SET_ENTITY_COORDS(uVar2, func_433(uParam0), 1, 0, 0, 1);
			SET_ENTITY_HEADING(uVar2, func_432(uParam0));
		}
		FREEZE_ENTITY_POSITION(uVar2, 1);
		if (!DOES_ENTITY_EXIST(uVar1))
		{
			uVar1 = CREATE_PED_INSIDE_VEHICLE(uVar2, 26, iVar0, -1, 1, 1);
		}
		SET_PED_HELMET(uVar1, 0);
		func_441(uVar1, iParam2);
	}
	else
	{
		if (!DOES_ENTITY_EXIST(uVar2))
		{
			uVar2 = CREATE_VEHICLE(func_517(uParam0), func_433(uParam0), func_432(uParam0), 1, 1, 0);
		}
		else
		{
			SET_ENTITY_COORDS(uVar2, func_433(uParam0), 1, 0, 0, 1);
			SET_ENTITY_HEADING(uVar2, func_432(uParam0));
		}
		FREEZE_ENTITY_POSITION(uVar2, 1);
		if (!DOES_ENTITY_EXIST(uVar1))
		{
			uVar1 = CREATE_PED_INSIDE_VEHICLE(uVar2, 26, joaat("s_m_y_pilot_01"), -1, 1, 1);
		}
		SET_PED_HELMET(uVar1, 0);
		SET_PED_PROP_INDEX(uVar1, 0, 2, 0, 0);
		SET_PED_PROP_INDEX(uVar1, 1, 0, 0, 0);
	}
	SET_VEHICLE_ENGINE_ON(uVar2, 1, 1, 0);
	SET_HELI_BLADES_SPEED(uVar2, 0.7f);
	CLEAR_PED_TASKS(uVar1);
	TASK_STAND_STILL(uVar1, -1);
	*uParam1 = uVar2;
}

var func_432(var uParam0)
{
	return uParam0->f_78;
}

Vector3 func_433(var uParam0)
{
	return uParam0->f_70;
}

int func_434(int iParam0)
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

int func_435(int iParam0, var uParam1)
{
	if (!IS_ENTITY_DEAD(iParam0, 0) && !IS_ENTITY_DEAD(uParam1, 0))
	{
		if (IS_PED_SITTING_IN_VEHICLE(iParam0, uParam1))
		{
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, -1, 0) == iParam0)
			{
				return -1;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 0, 0) == iParam0)
			{
				return 0;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 1, 0) == iParam0)
			{
				return 1;
			}
			if (GET_PED_IN_VEHICLE_SEAT(uParam1, 2, 0) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_436(var uParam0, int iParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = func_437();
	if (!IS_PED_INJURED(iParam1))
	{
		func_422(uParam0, iVar0, iParam1, sParam2, 1, 1);
	}
	else
	{
		func_422(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

int func_437()
{
	if (func_414() == 1)
	{
		return 2;
	}
	if (func_414() == 2)
	{
		return 3;
	}
	return 1;
}

char* func_438()
{
	int iVar0;
	
	iVar0 = func_35(PLAYER_PED_ID());
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

void func_439(var uParam0, var uParam1, char* sParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (!IS_PED_INJURED(uParam1))
	{
		func_422(uParam0, iVar0, uParam1, sParam2, 1, 1);
	}
	else
	{
		func_422(uParam0, iVar0, 0, sParam2, 0, 1);
	}
}

char* func_440(int iParam0)
{
	return "EXT1HELIPILOT";
}

void func_441(var uParam0, int iParam1)
{
	if (IS_ENTITY_DEAD(uParam0, 0))
	{
		return;
	}
	switch (iParam1)
	{
		case 7:
			SET_PED_COMPONENT_VARIATION(uParam0, 0, 0, 1, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 2, 1, 0, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 3, 0, 0, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 0, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 8, 1, 0, 0);
			SET_PED_PROP_INDEX(uParam0, 1, 0, 0, 0);
			break;
		
		case 11:
			SET_PED_COMPONENT_VARIATION(uParam0, 0, 1, 0, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 2, 2, 0, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 3, 1, 0, 0);
			SET_PED_COMPONENT_VARIATION(uParam0, 4, 0, 2, 0);
			SET_PED_PROP_INDEX(uParam0, 0, 1, 2, 0);
			SET_PED_PROP_INDEX(uParam0, 1, 1, 0, 0);
			break;
	}
}

Vector3 func_442(var uParam0)
{
	return uParam0->f_67;
}

Vector3 func_443(var uParam0)
{
	return uParam0->f_64;
}

void func_444(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_445(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	char cVar0[64];
	
	if (!func_451(func_452(iParam3)))
	{
		REQUEST_ADDITIONAL_COLLISION_AT_COORD(func_459(iParam3));
	}
	if (func_448(uParam1))
	{
		if (func_447(uParam1) >= 5f)
		{
			return 1;
		}
	}
	else
	{
		func_333(uParam1, 0f);
	}
	if (IS_SCREEN_FADED_OUT())
	{
		if (!IS_NEW_LOAD_SCENE_LOADED())
		{
			return 0;
		}
	}
	if (func_451(func_452(iParam3)))
	{
		if (!HAS_ANIM_DICT_LOADED("veh@helicopter@rps@base"))
		{
			return 0;
		}
	}
	if (func_412(iParam3, 0) > 0f)
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
		if (!HAS_ANIM_DICT_LOADED(&cVar0))
		{
			return 0;
		}
	}
	if (func_446(uParam0))
	{
		if (HAS_SCALEFORM_MOVIE_LOADED(*uParam2))
		{
			if (HAS_ADDITIONAL_TEXT_LOADED(2))
			{
				if (HAS_STREAMED_TEXTURE_DICT_LOADED("basejumping"))
				{
					if (((HAS_ANIM_DICT_LOADED("oddjobs@basejump@") && HAS_ANIM_DICT_LOADED("skydive@freefall")) && HAS_ANIM_DICT_LOADED("skydive@parachute@chute")) && HAS_ANIM_DICT_LOADED("skydive@parachute@"))
					{
						if (CAN_CREATE_RANDOM_PED(0))
						{
							if (!bParam5 || IS_SCREEN_FADED_OUT())
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

int func_446(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			if (!HAS_MODEL_LOADED((*uParam0)[iVar0]))
			{
				if (!HAS_MODEL_LOADED((*uParam0)[iVar0]))
				{
				}
				return 0;
			}
		}
		iVar0++;
	}
	return 1;
}

float func_447(var uParam0)
{
	if (func_448(uParam0))
	{
		if (func_345(uParam0))
		{
			return uParam0->f_2;
		}
		else
		{
			return (func_41(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
		}
	}
	return uParam0->f_1;
}

bool func_448(var uParam0)
{
	return IS_BIT_SET(*uParam0, 1);
}

Vector3 func_449(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	
	fVar3 = SIN(fParam3);
	fVar4 = COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.y = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.z = vParam0.z;
	return vVar0;
}

float func_450(var uParam0)
{
	return uParam0->f_76;
}

int func_451(int iParam0)
{
	switch (iParam0)
	{
		case joaat("annihilator"):
		case joaat("buzzard"):
		case joaat("buzzard2"):
		case joaat("cargobob"):
		case joaat("cargobob2"):
		case joaat("frogger"):
		case joaat("maverick"):
		case joaat("polmav"):
		case joaat("skylift"):
			return 1;
		
		default:
	}
	return 0;
}

int func_452(int iParam0)
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
			return joaat("maverick");
			break;
		
		case 4:
			return joaat("bati");
			break;
	}
	return 0;
}

void func_453(var uParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;
	
	func_26(1);
	SET_FRONTEND_RADIO_ACTIVE(0);
	if (!IS_ENTITY_DEAD(PLAYER_PED_ID(), 0))
	{
		SET_PED_LOD_MULTIPLIER(PLAYER_PED_ID(), 2f);
	}
	switch (iParam1)
	{
		case 0:
			ADD_SCENARIO_BLOCKING_AREA(-901.2005f, 4422.489f, 19.3471f, -906.842f, 4424.97f, 300.017f, 0, 1, 1, 1);
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
			func_458(1, 1);
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
	if (IS_SCREEN_FADED_OUT())
	{
		CLEAR_AREA(func_459(iParam1), 5000f, 1, 0, 0, 0);
	}
	REQUEST_ADDITIONAL_TEXT("BJUMP", 2);
	iVar0 = func_452(iParam1);
	if (iVar0 != 0)
	{
		if (func_451(iVar0))
		{
			REQUEST_ANIM_DICT("veh@helicopter@rps@base");
			*uParam3 = func_434(iParam1);
			func_456(uParam2, *uParam3);
		}
		func_456(uParam2, iVar0);
	}
	if (func_517(uParam0) != 0)
	{
		func_456(uParam2, func_517(uParam0));
		if (func_434(iParam1) != 0)
		{
			func_456(uParam2, func_434(iParam1));
		}
		else
		{
			func_456(uParam2, joaat("s_m_y_pilot_01"));
		}
	}
	iVar1 = func_359(uParam0);
	if (iVar1 != 0)
	{
		*uParam4 = func_455(iParam1);
		func_456(uParam2, *uParam4);
		func_456(uParam2, iVar1);
		func_456(uParam2, joaat("trflat"));
	}
	if (func_358(iVar1))
	{
		func_456(uParam2, joaat("freight"));
		func_456(uParam2, joaat("freightcar"));
		func_456(uParam2, joaat("freightgrain"));
		func_456(uParam2, joaat("freightcont1"));
		func_456(uParam2, joaat("freightcont2"));
		func_456(uParam2, joaat("tankercar"));
		func_456(uParam2, joaat("metrotrain"));
	}
	if (func_430(uParam0) != 0)
	{
		func_456(uParam2, func_430(uParam0));
	}
	*uParam5 = func_161();
	func_454(uParam2);
	REQUEST_ANIM_DICT("oddjobs@basejump@");
	REQUEST_ANIM_DICT("skydive@freefall");
	REQUEST_ANIM_DICT("skydive@parachute@chute");
	REQUEST_ANIM_DICT("skydive@parachute@");
	REQUEST_STREAMED_TEXTURE_DICT("basejumping", 0);
	if (func_412(iParam1, 0) > 0f)
	{
		*uParam6 = GET_RANDOM_INT_IN_RANGE(0, 2);
		switch (*uParam6)
		{
			case 0:
				REQUEST_ANIM_DICT("amb@world_human_hiker_standing@male@idle_a");
				break;
			
			case 1:
				REQUEST_ANIM_DICT("amb@world_human_muscle_flex@arms_at_side@base");
				break;
			}
	}
	if (func_452(iParam1) == 0)
	{
		REQUEST_ADDITIONAL_COLLISION_AT_COORD(func_459(iParam1));
	}
}

void func_454(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] != 0)
		{
			REQUEST_MODEL((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

int func_455(int iParam0)
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

int func_456(var uParam0, int iParam1)
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
	iVar1 = func_457(uParam0);
	if (iVar1 < 0 || iVar1 >= *uParam0)
	{
		return 0;
	}
	(*uParam0)[iVar1] = iParam1;
	return 1;
}

int func_457(var uParam0)
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
	return -1;
}

void func_458(int iParam0, int iParam1)
{
	SET_BIT(&Global_25923, iParam0);
	StringCopy(&(Global_25924[iParam0 /*6*/]), GET_THIS_SCRIPT_NAME(), 24);
	Global_25979[iParam0] = iParam1;
}

Vector3 func_459(int iParam0)
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

int func_460(int iParam0)
{
	if (IS_SCREEN_FADED_OUT())
	{
		if (IS_ENTITY_AT_COORD(PLAYER_PED_ID(), func_459(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
		SET_ENTITY_COORDS(PLAYER_PED_ID(), func_459(iParam0), 0, 0, 0, 1);
		if (IS_ENTITY_AT_COORD(PLAYER_PED_ID(), func_459(iParam0), 15f, 15f, 15f, 0, 1, 0))
		{
			return 1;
		}
	}
	return 0;
}

Vector3 func_461(vector3 vParam0)
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

Vector3 func_462(int iParam0)
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

void func_463(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	vector3 vVar7;
	
	vVar0 = { func_471(uParam1) };
	vVar3 = { func_470(uParam1) };
	uVar6 = func_469(uParam1);
	if (!DOES_CAM_EXIST(func_419(uParam0, 0)))
	{
		func_468(uParam0, 0, CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar3, 1115815936, 0, 2), 1);
	}
	else
	{
		SET_CAM_COORD(func_419(uParam0, 0), vVar0);
		SET_CAM_ROT(func_419(uParam0, 0), vVar3, 2);
	}
	SET_CAM_FOV(func_419(uParam0, 0), uVar6);
	SET_CAM_ACTIVE(func_419(uParam0, 0), 1);
	if (bParam3)
	{
		vVar7 = { vVar0 };
		vVar7.z = (vVar7.z + 8f);
		SET_CAM_PARAMS(func_419(uParam0, 0), vVar7, vVar3, uVar6, func_467(iParam2), 1, 1, 2);
	}
	vVar0 = { func_466(uParam1) };
	vVar3 = { func_465(uParam1) };
	uVar6 = func_464(uParam1);
	if (!DOES_CAM_EXIST(func_419(uParam0, 1)))
	{
		func_468(uParam0, 1, CREATE_CAMERA_WITH_PARAMS(26379945, vVar0, vVar3, 1115815936, 0, 2), 1);
	}
	else
	{
		SET_CAM_COORD(func_419(uParam0, 1), vVar0);
		SET_CAM_ROT(func_419(uParam0, 1), vVar3, 2);
	}
	SET_CAM_FOV(func_419(uParam0, 1), uVar6);
	if (!IS_SCREEN_FADED_OUT())
	{
		SET_CAM_ACTIVE_WITH_INTERP(func_419(uParam0, 1), func_419(uParam0, 0), func_467(iParam2), 1, 1);
	}
	RENDER_SCRIPT_CAMS(1, 0, 3000, 1, 0, 0);
	_0xF4C8CF9E353AFECA("HAND_SHAKE", 0.2f);
	DISPLAY_RADAR(0);
	DISPLAY_HUD(0);
}

var func_464(var uParam0)
{
	return uParam0->f_82;
}

Vector3 func_465(var uParam0)
{
	return uParam0->f_58;
}

Vector3 func_466(var uParam0)
{
	return uParam0->f_55;
}

int func_467(int iParam0)
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

void func_468(var uParam0, int iParam1, var uParam2, int iParam3)
{
	if (iParam1 >= 2)
	{
		return;
	}
	if (iParam3 && !DOES_CAM_EXIST(uParam2))
	{
		return;
	}
	(*uParam0)[iParam1] = uParam2;
}

var func_469(var uParam0)
{
	return uParam0->f_81;
}

Vector3 func_470(var uParam0)
{
	return uParam0->f_52;
}

Vector3 func_471(var uParam0)
{
	return uParam0->f_49;
}

void func_472(var uParam0)
{
	if (!func_448(uParam0))
	{
		func_362(uParam0);
	}
}

void func_473(vector3 vParam0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 68)
	{
		if (func_298(&(Global_70409.f_555[0 /*21*/]), iVar0))
		{
			if (GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_70409.f_555[0 /*21*/], iParam4) <= fParam3)
			{
				func_474(iVar0);
			}
		}
		iVar0++;
	}
}

void func_474(int iParam0)
{
	bool bVar0;
	
	if (iParam0 == -1)
	{
		return;
	}
	if (func_298(&(Global_70409.f_555[0 /*21*/]), iParam0))
	{
		if (DOES_ENTITY_EXIST(Global_70409.f_139[iParam0]))
		{
			bVar0 = true;
			if (!IS_PED_INJURED(PLAYER_PED_ID()))
			{
				if (IS_VEHICLE_DRIVEABLE(Global_70409.f_139[iParam0], 0))
				{
					if (IS_PED_IN_VEHICLE(PLAYER_PED_ID(), Global_70409.f_139[iParam0], 0))
					{
						bVar0 = false;
					}
				}
			}
			if (bVar0)
			{
				SET_ENTITY_AS_MISSION_ENTITY(Global_70409.f_139[iParam0], 1, 1);
				DELETE_VEHICLE(&(Global_70409.f_139[iParam0]));
			}
		}
		Global_70409[iParam0] = 1;
		if (IS_BIT_SET(Global_70409.f_555[0 /*21*/].f_9, 13))
		{
			if (((((iParam0 == 24 && func_304(iParam0, 0)) && Global_71318.f_66 == 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] != 0) && Global_106565.f_32743.f_1958[Global_70409.f_555[0 /*21*/].f_14] > 3) && (!func_475(0, Global_70409.f_555[0 /*21*/].f_12) || !func_475(1, Global_70409.f_555[0 /*21*/].f_12)))
			{
				func_305(&(Global_106565.f_32743.f_69[Global_70409.f_555[0 /*21*/].f_14 /*78*/]), &Global_71318);
				Global_71396 = Global_106565.f_32743.f_5591;
			}
			func_302(iParam0, 0);
		}
	}
}

int func_475(int iParam0, int iParam1)
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
	if (iParam0 < 0 || iParam0 >= func_476(&(Global_106565.f_32743.f_5038[iVar0 /*157*/])))
	{
		return 0;
	}
	return func_282(Global_106565.f_32743.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

int func_476(var uParam0)
{
	return *uParam0;
}

void func_477(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_105205 && iParam1)
	{
		if (func_328(sParam0) && !IS_HELP_MESSAGE_FADING_OUT())
		{
			CLEAR_HELP(0);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (ARE_STRINGS_EQUAL(sParam0, &(Global_106565.f_20404[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_106565.f_20404.f_145 - 2))
			{
				func_480(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_479((Global_106565.f_20404.f_145 - 1));
			Global_106565.f_20404.f_145 = (Global_106565.f_20404.f_145 - 1);
			func_478();
			return;
		}
		iVar0++;
	}
}

void func_478()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_106565.f_20404.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_106565.f_20404.f_145)
	{
		if (IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 0))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[0])
			{
				Global_106565.f_20404.f_146[0] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 1))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[1])
			{
				Global_106565.f_20404.f_146[1] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		if (IS_BIT_SET(Global_106565.f_20404[iVar0 /*16*/].f_11, 2))
		{
			if (Global_106565.f_20404[iVar0 /*16*/].f_12 > Global_106565.f_20404.f_146[2])
			{
				Global_106565.f_20404.f_146[2] = Global_106565.f_20404[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_479(int iParam0)
{
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_106565.f_20404[iParam0 /*16*/].f_4), "", 16);
	Global_106565.f_20404[iParam0 /*16*/].f_8 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = -1;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = 0;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = 0;
}

void func_480(int iParam0, int iParam1)
{
	Global_106565.f_20404[iParam0 /*16*/] = { Global_106565.f_20404[iParam1 /*16*/] };
	Global_106565.f_20404[iParam0 /*16*/].f_4 = { Global_106565.f_20404[iParam1 /*16*/].f_4 };
	Global_106565.f_20404[iParam0 /*16*/].f_8 = Global_106565.f_20404[iParam1 /*16*/].f_8;
	Global_106565.f_20404[iParam0 /*16*/].f_10 = Global_106565.f_20404[iParam1 /*16*/].f_10;
	Global_106565.f_20404[iParam0 /*16*/].f_9 = Global_106565.f_20404[iParam1 /*16*/].f_9;
	Global_106565.f_20404[iParam0 /*16*/].f_11 = Global_106565.f_20404[iParam1 /*16*/].f_11;
	Global_106565.f_20404[iParam0 /*16*/].f_12 = Global_106565.f_20404[iParam1 /*16*/].f_12;
	Global_106565.f_20404[iParam0 /*16*/].f_13 = Global_106565.f_20404[iParam1 /*16*/].f_13;
	Global_106565.f_20404[iParam0 /*16*/].f_14 = Global_106565.f_20404[iParam1 /*16*/].f_14;
	Global_106565.f_20404[iParam0 /*16*/].f_15 = Global_106565.f_20404[iParam1 /*16*/].f_15;
}

void func_481(bool bParam0)
{
	if (bParam0)
	{
		SET_FADE_IN_AFTER_DEATH_ARREST(0);
		_DISABLE_AUTOMATIC_RESPAWN(1);
		SET_FADE_OUT_AFTER_DEATH(0);
		func_17(1);
		Global_88970 = 1;
	}
	else
	{
		SET_FADE_IN_AFTER_DEATH_ARREST(1);
		_DISABLE_AUTOMATIC_RESPAWN(0);
		SET_FADE_OUT_AFTER_DEATH(1);
		func_17(0);
		Global_88970 = 0;
	}
}

void func_482()
{
	func_483(&uLocal_176, 0);
}

void func_483(var uParam0, int iParam1)
{
	if (uParam0->f_4 != 0)
	{
		func_143(&(uParam0->f_4), &(uParam0->f_5), &(uParam0->f_44));
	}
	if ((((*uParam0)[0] != 0 || (*uParam0)[1] != 0) || (*uParam0)[2] != 0) || iParam1 == 1)
	{
		func_487(uParam0);
		func_486(uParam0);
		func_117(&Global_1839723);
	}
	if (Global_1835392.f_2708 != 0 || Global_1835392.f_3184)
	{
		func_484();
	}
	if (IS_AUDIO_SCENE_ACTIVE("LEADERBOARD_SCENE"))
	{
		STOP_AUDIO_SCENE("LEADERBOARD_SCENE");
	}
	if (NETWORK_IS_SIGNED_ONLINE())
	{
		func_88(&(Global_1840924.f_49));
	}
	Global_2528542.f_3958 = 0;
}

void func_484()
{
	int iVar0;
	int iVar1;
	struct<75> Var2;
	
	Var2.f_60 = 6;
	Var2.f_67 = 6;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = 0;
		while (iVar1 < 12)
		{
			Global_1835392[iVar0 /*901*/][iVar1 /*75*/] = { Var2 };
			iVar1++;
		}
		Global_1835392.f_2704[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2708 = 0;
	Global_1835392.f_2709 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1835392.f_2710[iVar0] = 0;
		StringCopy(&(Global_1835392.f_2717[iVar0 /*6*/]), "", 24);
		Global_1835392.f_2754[iVar0] = 0;
		Global_1835392.f_2761[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2768 = 0;
	Global_1835392.f_2769 = 0;
	Global_1835392.f_2770 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_1835392.f_2771[iVar0] = 0;
		Global_1835392.f_2775[iVar0] = 0;
		iVar0++;
	}
	Global_1835392.f_2779 = 0;
	func_485(&(Global_1835392.f_2780));
	func_88(&(Global_1835392.f_2823));
	Global_1835392.f_2825 = -1;
	Global_1835392.f_2826 = 0;
	func_88(&(Global_1835392.f_2827));
	Global_1835392.f_2829 = 0;
	func_88(&(Global_1835392.f_2830));
	Global_1835392.f_2832 = 0;
	Global_1835392.f_2780.f_28 = 0;
	Global_1835392.f_2780.f_27 = 0;
	Global_1835392.f_3184 = 0;
}

void func_485(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	StringCopy(&(uParam0->f_1), "", 32);
	StringCopy(&(uParam0->f_9), "", 64);
	uParam0->f_25 = 1;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		uParam0->f_29[iVar0] = 0;
		uParam0->f_36[iVar0] = 0;
		iVar0++;
	}
}

void func_486(var uParam0)
{
	int iVar0;
	struct<13> Var1;
	
	uParam0->f_246 = 0;
	uParam0->f_246.f_1 = -1;
	uParam0->f_246.f_2 = 0;
	func_88(&(uParam0->f_246.f_3));
	uParam0->f_246.f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		uParam0->f_246.f_6[iVar0 /*15*/] = -1;
		uParam0->f_246.f_6[iVar0 /*15*/].f_1 = 0;
		uParam0->f_246.f_6[iVar0 /*15*/].f_2 = { Var1 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		uParam0->f_246.f_187[iVar0] = 0;
		iVar0++;
	}
}

void func_487(var uParam0)
{
	int iVar0;
	struct<35> Var1;
	
	(*uParam0)[0] = 0;
	(*uParam0)[1] = 0;
	(*uParam0)[2] = 0;
	uParam0->f_4 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = { Var1 };
	uParam0->f_42 = 0;
	uParam0->f_43 = 0;
	uParam0->f_44 = 0;
	uParam0->f_44.f_1 = 0;
	uParam0->f_44.f_2 = 0;
	uParam0->f_44.f_3 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_44.f_3.f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
	uParam0->f_113[0 /*66*/] = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/]), "", 32);
		StringCopy(&(uParam0->f_113[0 /*66*/].f_1[iVar0 /*16*/].f_8), "", 32);
		iVar0++;
	}
}

void func_488()
{
	Global_17272.f_5 = 1;
}

void func_489(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam1 < 11)
	{
		if (!func_254(uParam0, 19))
		{
			if ((iParam1 == 4 && !bParam3) && (IS_SCREEN_FADED_IN() || IS_SCREEN_FADING_IN()))
			{
				if (func_491(func_492(iParam2, 19), "", &(uParam0->f_603), 19))
				{
				}
			}
		}
		if (!func_254(uParam0, 20))
		{
			if (iParam1 > 4)
			{
				if (func_491(func_492(iParam2, 20), func_492(iParam2, 19), &(uParam0->f_603), 20))
				{
				}
			}
		}
		else if (!func_254(uParam0, 21))
		{
			if (iParam1 == 9)
			{
				if (func_491(func_492(iParam2, 21), func_492(iParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
			else if (iParam1 == 8)
			{
				if (func_491(func_492(iParam2, 21), func_492(iParam2, 20), &(uParam0->f_603), 21))
				{
				}
			}
		}
		else if (!func_254(uParam0, 22))
		{
			if (iParam1 == 9)
			{
				iVar0 = GET_PED_PARACHUTE_STATE(PLAYER_PED_ID());
				if (iVar0 == 1 || iVar0 == 2)
				{
					if (func_491(func_492(iParam2, 22), func_492(iParam2, 21), &(uParam0->f_603), 22))
					{
					}
				}
			}
		}
		else if (iParam1 == 10 && !func_254(uParam0, 23))
		{
			func_490(func_492(iParam2, 22), &(uParam0->f_603), 23);
		}
		else if (!func_254(uParam0, 23) && !IS_PLAYER_PLAYING(PLAYER_ID()))
		{
			STOP_AUDIO_SCENES();
		}
	}
}

void func_490(char* sParam0, var uParam1, int iParam2)
{
	if (!IS_BIT_SET(*uParam1, iParam2))
	{
		STOP_AUDIO_SCENE(sParam0);
		SET_BIT(uParam1, iParam2);
	}
}

int func_491(char* sParam0, char* sParam1, var uParam2, int iParam3)
{
	if (!IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (IS_AUDIO_SCENE_ACTIVE(sParam1))
		{
			STOP_AUDIO_SCENE(sParam1);
		}
	}
	if (!IS_BIT_SET(*uParam2, iParam3))
	{
		if (START_AUDIO_SCENE(sParam0))
		{
			SET_BIT(uParam2, iParam3);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_492(int iParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam1)
	{
		case 19:
			return "BASEJUMPS_OVERVIEW_CUTSCENE";
		
		case 20:
			if (func_451(func_452(iParam0)))
			{
				sVar0 = "BASEJUMPS_PREP_FOR_JUMP_HELI";
			}
			else if (IS_PED_IN_ANY_VEHICLE(PLAYER_PED_ID(), 0) && func_356(GET_ENTITY_MODEL(GET_VEHICLE_PED_IS_IN(PLAYER_PED_ID(), 0))))
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

void func_493(var uParam0, int iParam1)
{
	if (iParam1 < 11)
	{
		if (!func_254(uParam0, 15))
		{
			if (iParam1 >= 4 && (IS_SCREEN_FADED_IN() || IS_SCREEN_FADING_IN()))
			{
				if (func_495(func_496(11), &(uParam0->f_603), 11))
				{
					func_494(func_496(15), &(uParam0->f_603), 15);
				}
			}
		}
		else if (!func_254(uParam0, 16))
		{
			if (iParam1 == 9)
			{
				if (func_495(func_496(12), &(uParam0->f_603), 12))
				{
					func_494(func_496(16), &(uParam0->f_603), 16);
				}
			}
			else if (iParam1 == 8)
			{
				if (func_495(func_496(12), &(uParam0->f_603), 12))
				{
					func_494(func_496(16), &(uParam0->f_603), 16);
				}
			}
		}
		else if (iParam1 == 10 && !func_254(uParam0, 17))
		{
			if (func_495(func_496(13), &(uParam0->f_603), 13))
			{
				func_494(func_496(17), &(uParam0->f_603), 17);
			}
		}
	}
}

int func_494(var uParam0, var uParam1, int iParam2)
{
	if (!IS_BIT_SET(*uParam1, iParam2))
	{
		if (PREPARE_MUSIC_EVENT(uParam0))
		{
			if (TRIGGER_MUSIC_EVENT(uParam0))
			{
				SET_BIT(uParam1, iParam2);
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

int func_495(var uParam0, var uParam1, int iParam2)
{
	if (!IS_BIT_SET(*uParam1, iParam2))
	{
		if (PREPARE_MUSIC_EVENT(uParam0))
		{
			SET_BIT(uParam1, iParam2);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

char* func_496(int iParam0)
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

void func_497(var uParam0)
{
	struct<2> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	
	_DISABLE_INPUT_GROUP(0);
	_DISABLE_INPUT_GROUP(2);
	func_504(&uVar3, &uVar4, &uVar5, &uVar6, IS_PLAYER_CONTROL_ON(PLAYER_ID()), _IS_INPUT_DISABLED(2));
	Var0 = (TO_FLOAT(uVar5) / 128f);
	Var0.f_1 = (TO_FLOAT(uVar6) / -128f);
	func_501(uParam0, Var0, Var0.f_1);
	func_500(uParam0);
	if (IS_CONTROL_PRESSED(2, 224))
	{
		func_499(uParam0, 0, 1);
	}
	if (IS_CONTROL_PRESSED(0, 22) || IS_DISABLED_CONTROL_PRESSED(0, 22))
	{
		func_499(uParam0, 1, 1);
	}
	if (func_498())
	{
		func_499(uParam0, 2, 1);
	}
	if (IS_DISABLED_CONTROL_PRESSED(2, 22))
	{
		func_499(uParam0, 3, 1);
	}
	if (IS_CONTROL_PRESSED(2, 216))
	{
		func_499(uParam0, 4, 1);
	}
	if (IS_CONTROL_PRESSED(2, 215) || IS_DISABLED_CONTROL_PRESSED(2, 200))
	{
		func_499(uParam0, 5, 1);
	}
	if (IS_CONTROL_PRESSED(2, 201))
	{
		func_499(uParam0, 6, 1);
	}
	if (IS_CONTROL_PRESSED(2, 202))
	{
		func_499(uParam0, 7, 1);
	}
	if (IS_CONTROL_PRESSED(2, 211))
	{
		func_499(uParam0, 8, 1);
	}
}

int func_498()
{
	if (IS_PAUSE_MENU_ACTIVE())
	{
		return 0;
	}
	if (IS_CONTROL_PRESSED(0, 18) || IS_CONTROL_PRESSED(2, 18))
	{
		return 1;
	}
	return 0;
}

void func_499(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		SET_BIT(&(uParam0->f_2), iParam1);
	}
	else
	{
		CLEAR_BIT(&(uParam0->f_2), iParam1);
	}
}

void func_500(var uParam0)
{
	uParam0->f_3 = uParam0->f_2;
	uParam0->f_2 = 0;
}

void func_501(var uParam0, var uParam1, var uParam2)
{
	func_503(uParam0, uParam1);
	func_502(uParam0, uParam2);
}

void func_502(var uParam0, var uParam1)
{
	uParam0->f_1 = uParam1;
}

void func_503(var uParam0, var uParam1)
{
	*uParam0 = uParam1;
}

void func_504(var uParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	
	if (iParam5 == 0)
	{
		if (bParam4)
		{
			fVar0 = GET_CONTROL_NORMAL(0, 218);
			fVar1 = GET_CONTROL_NORMAL(0, 219);
			fVar2 = GET_CONTROL_NORMAL(0, 220);
			fVar3 = GET_CONTROL_NORMAL(0, 221);
		}
		else
		{
			fVar0 = GET_DISABLED_CONTROL_NORMAL(0, 218);
			fVar1 = GET_DISABLED_CONTROL_NORMAL(0, 219);
			fVar2 = GET_DISABLED_CONTROL_NORMAL(0, 220);
			fVar3 = GET_DISABLED_CONTROL_NORMAL(0, 221);
		}
	}
	else if (bParam4)
	{
		fVar0 = _0x5B84D09CEC5209C5(0, 218);
		fVar1 = _0x5B84D09CEC5209C5(0, 219);
		fVar2 = _0x5B84D09CEC5209C5(0, 220);
		fVar3 = _0x5B84D09CEC5209C5(0, 221);
	}
	else
	{
		fVar0 = _0x4F8A26A890FD62FB(0, 218);
		fVar1 = _0x4F8A26A890FD62FB(0, 219);
		fVar2 = _0x4F8A26A890FD62FB(0, 220);
		fVar3 = _0x4F8A26A890FD62FB(0, 221);
	}
	*uParam0 = ROUND((128f * fVar0));
	*uParam1 = ROUND((128f * fVar1));
	*uParam2 = ROUND((128f * fVar2));
	*uParam3 = ROUND((128f * fVar3));
}

void func_505()
{
	DISABLE_CONTROL_ACTION(0, 81, 1);
	DISABLE_CONTROL_ACTION(0, 82, 1);
	DISABLE_CONTROL_ACTION(0, 85, 1);
	DISABLE_CONTROL_ACTION(0, 37, 1);
	DISABLE_CONTROL_ACTION(0, 12, 1);
	DISABLE_CONTROL_ACTION(0, 13, 1);
	DISABLE_CONTROL_ACTION(0, 14, 1);
	DISABLE_CONTROL_ACTION(0, 15, 1);
	DISABLE_CONTROL_ACTION(0, 16, 1);
	DISABLE_CONTROL_ACTION(0, 17, 1);
	DISABLE_CONTROL_ACTION(0, 25, 1);
	DISABLE_CONTROL_ACTION(0, 24, 1);
	DISABLE_CONTROL_ACTION(0, 50, 1);
	DISABLE_CONTROL_ACTION(0, 53, 1);
	DISABLE_CONTROL_ACTION(0, 54, 1);
	HIDE_HUD_COMPONENT_THIS_FRAME(19);
	HIDE_HUD_COMPONENT_THIS_FRAME(2);
	HIDE_HUD_COMPONENT_THIS_FRAME(14);
	HIDE_HUD_COMPONENT_THIS_FRAME(16);
	HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

var func_506()
{
	var uVar0;
	
	func_516(&uVar0, GET_CLOCK_SECONDS());
	func_515(&uVar0, GET_CLOCK_MINUTES());
	func_514(&uVar0, GET_CLOCK_HOURS());
	func_509(&uVar0, GET_CLOCK_DAY_OF_MONTH());
	func_508(&uVar0, GET_CLOCK_MONTH());
	func_507(&uVar0, GET_CLOCK_YEAR());
	return uVar0;
}

void func_507(var uParam0, int iParam1)
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

void func_508(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_509(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_513(*uParam0);
	iVar1 = func_511(*uParam0);
	if (iParam1 < 1 || iParam1 > func_510(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 4));
}

int func_510(int iParam0, int iParam1)
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

var func_511(var uParam0)
{
	return (SHIFT_RIGHT(uParam0, 26) & 31 * func_512(IS_BIT_SET(uParam0, 31), -1, 1)) + 2011;
}

int func_512(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_513(var uParam0)
{
	return uParam0 & 15;
}

void func_514(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 9));
}

void func_515(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 14));
}

void func_516(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SHIFT_LEFT(iParam1, 20));
}

int func_517(var uParam0)
{
	return uParam0->f_2;
}

void func_518(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_35(PLAYER_PED_ID());
	switch (iParam1)
	{
		case 0:
			func_543(uParam0, 125);
			func_542(uParam0, joaat("squalo"));
			func_541(uParam0, 41.0737f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, -1039.712f, -1731.145f, 1f);
			func_532(uParam0, 317.8872f);
			func_531(uParam0, 0f, -2f, 0f);
			func_530(uParam0, "BJ_01P");
			func_528(uParam0, func_529(0));
			func_527(uParam0, func_462(0));
			func_526(uParam0, 53.4142f);
			func_525(uParam0, -1151.402f, -1864.369f, 214.9385f);
			func_524(uParam0, -55.1298f, -0.0328f, -19.7985f);
			func_523(uParam0, 39.6124f);
			func_522(uParam0, 0);
			func_521(uParam0, 0);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 1:
			func_543(uParam0, 126);
			func_542(uParam0, 0);
			func_541(uParam0, 10.5f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, 978.232f, -397.611f, 416.607f);
			func_533(uParam0, 1, 873.389f, -183.851f, 302.972f);
			func_533(uParam0, 2, 1082.347f, -86.822f, 174.287f);
			func_533(uParam0, 3, 1151.098f, 124.6955f, 81.4805f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			func_530(uParam0, "BJ_02P");
			func_528(uParam0, func_529(1));
			func_527(uParam0, func_462(1));
			func_526(uParam0, 52.5984f);
			func_525(uParam0, 886.5799f, -442.7917f, 535.8002f);
			func_524(uParam0, -41.778f, 0.0092f, -13.8287f);
			func_523(uParam0, 41.3305f);
			func_522(uParam0, 0);
			func_521(uParam0, 0);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 2:
			func_543(uParam0, 127);
			func_542(uParam0, 0);
			func_541(uParam0, 289.2623f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, 2028.516f, 1759.102f, 424.7939f);
			func_533(uParam0, 1, 2230.78f, 1600.25f, 318.384f);
			func_533(uParam0, 2, 2410.55f, 1739.71f, 253.494f);
			func_533(uParam0, 3, 2273.787f, 1885.168f, 152.702f);
			func_533(uParam0, 4, 2111.912f, 1887.456f, 92.5308f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			func_530(uParam0, "BJ_03P");
			func_528(uParam0, func_529(2));
			func_527(uParam0, func_462(2));
			func_526(uParam0, 31.9702f);
			func_525(uParam0, 2038.807f, 1971.563f, 591.7618f);
			func_524(uParam0, -79.6953f, 0.0213f, 159.6313f);
			func_523(uParam0, 50.8804f);
			func_522(uParam0, 0);
			func_521(uParam0, 0);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 3:
			func_543(uParam0, 128);
			func_542(uParam0, 0);
			func_541(uParam0, 60.1427f);
			func_540(uParam0, joaat("frogger"));
			func_539(uParam0, 402.6013f, 5736.451f, 696.3928f);
			func_538(uParam0, 119.8889f);
			func_537(uParam0, 5f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, 320.69f, 5808.49f, 550.56f);
			func_533(uParam0, 1, 220.59f, 5943.149f, 415.514f);
			func_533(uParam0, 2, 30.63f, 6117.63f, 227.9f);
			func_533(uParam0, 3, -80.95f, 6440.43f, 100.48f);
			func_533(uParam0, 4, -273.773f, 6633.584f, 6.533f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_530(uParam0, "BJ_04M");
			}
			else if (iVar0 == 1)
			{
				func_530(uParam0, "BJ_04F");
			}
			else
			{
				func_530(uParam0, "BJ_04T");
			}
			func_528(uParam0, func_529(3));
			func_527(uParam0, func_462(3));
			func_526(uParam0, 44.3626f);
			func_525(uParam0, 409.9299f, 5701.477f, 696.7185f);
			func_524(uParam0, -5.0705f, 0f, 20.8267f);
			func_523(uParam0, 43.8549f);
			func_522(uParam0, 0);
			func_521(uParam0, 1);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 4:
			func_543(uParam0, 129);
			func_542(uParam0, 0);
			func_541(uParam0, 1.8891f);
			func_540(uParam0, joaat("skylift"));
			func_539(uParam0, -75.3f, -823.9f, 329.2f);
			func_538(uParam0, 150f);
			func_537(uParam0, 4f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, -77.2067f, -444.208f, 37f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_530(uParam0, "BJ_05M");
			}
			else if (iVar0 == 1)
			{
				func_530(uParam0, "BJ_05F");
			}
			else
			{
				func_530(uParam0, "BJ_05T");
			}
			func_528(uParam0, func_529(4));
			func_527(uParam0, func_462(4));
			func_526(uParam0, 26.7726f);
			func_525(uParam0, -111.8981f, -862.3896f, 334.5773f);
			func_524(uParam0, -5.4775f, 0.0397f, -29.0222f);
			func_523(uParam0, 30.0131f);
			func_522(uParam0, 0);
			func_521(uParam0, 0);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 5:
			func_543(uParam0, 130);
			func_542(uParam0, joaat("hauler"));
			func_541(uParam0, 358.9586f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, -96.9738f, -662.5833f, 34.7843f);
			func_532(uParam0, -18.6f);
			func_531(uParam0, 0f, -6f, 0f);
			if (iVar0 == 0)
			{
				func_530(uParam0, "BJ_06M");
			}
			else if (iVar0 == 1)
			{
				func_530(uParam0, "BJ_06F");
			}
			else
			{
				func_530(uParam0, "BJ_06T");
			}
			func_528(uParam0, func_529(5));
			func_527(uParam0, func_462(5));
			func_526(uParam0, 55.7667f);
			func_525(uParam0, -117.2447f, -977.6218f, 297.0984f);
			func_524(uParam0, -7.6574f, 0f, 0.8528f);
			func_523(uParam0, 60f);
			func_522(uParam0, 0);
			func_521(uParam0, 1);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 6:
			func_543(uParam0, 131);
			func_542(uParam0, 0);
			func_541(uParam0, 164.6178f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, joaat("blazer"));
			func_535(uParam0, -1310.948f, 4330.126f, 7.2444f);
			func_534(uParam0, 87.84f);
			func_533(uParam0, 0, -1246.49f, 4482.091f, 100.349f);
			func_533(uParam0, 1, -1309.67f, 4400.428f, 50.542f);
			func_533(uParam0, 2, -1304.67f, 4348.428f, 5.75f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_530(uParam0, "BJ_07M");
			}
			else if (iVar0 == 1)
			{
				func_530(uParam0, "BJ_07F");
			}
			else
			{
				func_530(uParam0, "BJ_07T");
			}
			func_528(uParam0, func_529(6));
			func_527(uParam0, func_462(6));
			func_526(uParam0, 47.1789f);
			func_525(uParam0, -1242.731f, 4536.298f, 186.6862f);
			func_524(uParam0, -13.6409f, 0f, 172.0553f);
			func_523(uParam0, 47.1789f);
			func_522(uParam0, 0);
			func_521(uParam0, 1);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 7:
			func_543(uParam0, 132);
			func_542(uParam0, joaat("freight"));
			func_541(uParam0, 112.6f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, -487.5452f, 4252.192f, 87.712f);
			func_532(uParam0, 10.8894f);
			func_531(uParam0, 0f, -20f, 4f);
			func_530(uParam0, "BJ_08P");
			func_528(uParam0, func_529(7));
			func_527(uParam0, func_462(7));
			func_526(uParam0, 24.3623f);
			func_525(uParam0, -337.5233f, 4110.16f, 315.6679f);
			func_524(uParam0, -29.1422f, 0.0324f, 47.5813f);
			func_523(uParam0, 37.0424f);
			func_522(uParam0, 0);
			func_521(uParam0, 0);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 8:
			func_543(uParam0, 133);
			func_542(uParam0, 0);
			func_541(uParam0, 104.207f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, -1154.443f, 204.1726f, 64.4915f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_530(uParam0, "BJ_09M");
			}
			else if (iVar0 == 1)
			{
				func_530(uParam0, "BJ_09F");
			}
			else
			{
				func_530(uParam0, "BJ_09T");
			}
			func_528(uParam0, func_529(8));
			func_527(uParam0, func_462(8));
			func_526(uParam0, 50f);
			func_525(uParam0, -805.2963f, 332.5761f, 234.6604f);
			func_524(uParam0, -19.7458f, 0f, 116.6405f);
			func_523(uParam0, 55.2882f);
			func_522(uParam0, 0);
			func_521(uParam0, 1);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 9:
			func_543(uParam0, 134);
			func_542(uParam0, 0);
			func_541(uParam0, 329.4791f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, joaat("blazer"));
			func_535(uParam0, -818.3042f, 4405.675f, 20.1095f);
			func_534(uParam0, -89.36f);
			func_533(uParam0, 0, -1200f, 3616f, 964f);
			func_533(uParam0, 1, -1240f, 3307f, 854f);
			func_533(uParam0, 2, -1552f, 3456f, 655f);
			func_533(uParam0, 3, -1616f, 3808f, 505f);
			func_533(uParam0, 4, -1157.684f, 4128.348f, 288.607f);
			func_533(uParam0, 5, -1063.995f, 4246.137f, 163.291f);
			func_533(uParam0, 6, -938.541f, 4360.14f, 82.372f);
			func_533(uParam0, 7, -828.1418f, 4413.562f, 20.062f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			func_530(uParam0, "BJ_10P");
			func_528(uParam0, func_529(9));
			func_527(uParam0, func_462(9));
			func_526(uParam0, 31.7648f);
			func_525(uParam0, -1286.976f, 3660.137f, 1082.208f);
			func_524(uParam0, -47.0453f, 0.0328f, -13.4198f);
			func_523(uParam0, 39.6786f);
			func_522(uParam0, 0);
			func_521(uParam0, 0);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 10:
			func_543(uParam0, 135);
			func_542(uParam0, 0);
			func_541(uParam0, 0f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, 0);
			func_535(uParam0, 0f, 0f, 0f);
			func_534(uParam0, 0f);
			func_533(uParam0, 0, 1239.342f, 4008.389f, 1135.372f);
			func_533(uParam0, 1, 1374.479f, 4156.592f, 1019.694f);
			func_533(uParam0, 2, 1391.31f, 4362.621f, 909.212f);
			func_533(uParam0, 3, 1240.832f, 4598.044f, 758.002f);
			func_533(uParam0, 4, 1382.169f, 4377.629f, 600.013f);
			func_533(uParam0, 5, 1624.116f, 4207.519f, 471.225f);
			func_533(uParam0, 6, 1910.345f, 4175.518f, 362.862f);
			func_533(uParam0, 7, 2236.975f, 4282.967f, 218.116f);
			func_533(uParam0, 8, 2330.282f, 4534.43f, 90f);
			func_533(uParam0, 9, 2473.344f, 4715.347f, 33.524f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			func_530(uParam0, "BJ_11P");
			func_528(uParam0, func_529(10));
			func_527(uParam0, func_462(10));
			func_526(uParam0, 27.2187f);
			func_525(uParam0, 1012.673f, 3960.436f, 1367.701f);
			func_524(uParam0, -54.7868f, 0f, -90.128f);
			func_523(uParam0, 35.5634f);
			func_522(uParam0, 0);
			func_521(uParam0, 0);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 11:
			func_543(uParam0, 136);
			func_542(uParam0, 0);
			func_541(uParam0, 24.92f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, joaat("sanchez"));
			func_535(uParam0, 1280.933f, -50.6157f, 61.8195f);
			func_534(uParam0, 130.39f);
			func_533(uParam0, 0, 1829.46f, -260.665f, 1141.852f);
			func_533(uParam0, 1, 1816.46f, -10.665f, 1033.084f);
			func_533(uParam0, 2, 1688.46f, 218.335f, 924.307f);
			func_533(uParam0, 3, 1503.46f, 382.335f, 815.529f);
			func_533(uParam0, 4, 1554.46f, 598.335f, 706.751f);
			func_533(uParam0, 5, 1813.46f, 724.335f, 597.973f);
			func_533(uParam0, 6, 1975.46f, 519.335f, 486.196f);
			func_533(uParam0, 7, 1946.46f, 125.335f, 364.417f);
			func_533(uParam0, 8, 1663.46f, -15.665f, 241.64f);
			func_533(uParam0, 9, 1396.64f, -62.665f, 118f);
			func_533(uParam0, 10, 1278.5f, -41.05f, 61.7f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			func_530(uParam0, "BJ_12P");
			func_528(uParam0, func_529(11));
			func_527(uParam0, func_462(11));
			func_526(uParam0, 18.9374f);
			func_525(uParam0, 1628.156f, -431.2605f, 1332.761f);
			func_524(uParam0, -54.5827f, 0f, -2.0463f);
			func_523(uParam0, 56.4495f);
			func_522(uParam0, 0);
			func_521(uParam0, 0);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
		
		case 12:
			func_543(uParam0, 137);
			func_542(uParam0, 0);
			func_541(uParam0, 359.2885f);
			func_540(uParam0, 0);
			func_539(uParam0, 0f, 0f, 0f);
			func_538(uParam0, 0f);
			func_537(uParam0, 0f);
			func_536(uParam0, joaat("sanchez"));
			func_535(uParam0, -885.2659f, 4433.592f, 20.381f);
			func_534(uParam0, 104.35f);
			func_533(uParam0, 0, -771.9196f, 4400.453f, 60.5786f);
			func_533(uParam0, 1, -892.6581f, 4427.487f, 19.8561f);
			func_532(uParam0, 0f);
			func_531(uParam0, 0f, 0f, 0f);
			if (iVar0 == 0)
			{
				func_530(uParam0, "BJ_13M");
			}
			else if (iVar0 == 1)
			{
				func_530(uParam0, "BJ_13F");
			}
			else
			{
				func_530(uParam0, "BJ_13T");
			}
			func_528(uParam0, func_529(12));
			func_527(uParam0, func_462(12));
			func_526(uParam0, 48.3921f);
			func_525(uParam0, -765.6544f, 4332.836f, 149.0282f);
			func_524(uParam0, -18.0357f, 0f, 6.0212f);
			func_523(uParam0, 48.3921f);
			func_522(uParam0, 0);
			func_521(uParam0, 1);
			func_520(uParam0, 0f, 0f, 0f);
			func_519(uParam0, 0f, 0f, 0f);
			break;
	}
}

void func_519(var uParam0, vector3 vParam1)
{
	uParam0->f_67 = { vParam1 };
}

void func_520(var uParam0, vector3 vParam1)
{
	uParam0->f_64 = { vParam1 };
}

void func_521(var uParam0, int iParam1)
{
	uParam0->f_84 = iParam1;
}

void func_522(var uParam0, int iParam1)
{
	uParam0->f_83 = iParam1;
}

void func_523(var uParam0, float fParam1)
{
	uParam0->f_82 = fParam1;
}

void func_524(var uParam0, vector3 vParam1)
{
	uParam0->f_58 = { vParam1 };
}

void func_525(var uParam0, vector3 vParam1)
{
	uParam0->f_55 = { vParam1 };
}

void func_526(var uParam0, float fParam1)
{
	uParam0->f_81 = fParam1;
}

void func_527(var uParam0, vector3 vParam1)
{
	uParam0->f_52 = { vParam1 };
}

void func_528(var uParam0, vector3 vParam1)
{
	uParam0->f_49 = { vParam1 };
}

Vector3 func_529(int iParam0)
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

void func_530(var uParam0, char* sParam1)
{
	uParam0->f_4 = sParam1;
}

void func_531(var uParam0, vector3 vParam1)
{
	uParam0->f_6 = { vParam1 };
}

void func_532(var uParam0, float fParam1)
{
	uParam0->f_77 = fParam1;
}

void func_533(var uParam0, int iParam1, vector3 vParam2)
{
	if (iParam1 < 0 || iParam1 >= 12)
	{
		return;
	}
	uParam0->f_12[iParam1 /*3*/] = { vParam2 };
}

void func_534(var uParam0, float fParam1)
{
	uParam0->f_79 = fParam1;
}

void func_535(var uParam0, vector3 vParam1)
{
	uParam0->f_9 = { vParam1 };
}

void func_536(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_537(var uParam0, float fParam1)
{
	uParam0->f_80 = fParam1;
}

void func_538(var uParam0, float fParam1)
{
	uParam0->f_78 = fParam1;
}

void func_539(var uParam0, vector3 vParam1)
{
	uParam0->f_70 = { vParam1 };
}

void func_540(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_541(var uParam0, float fParam1)
{
	uParam0->f_76 = fParam1;
}

void func_542(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_543(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_544(int iParam0, bool bParam1)
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

void func_545(int iParam0)
{
	func_373();
	Global_71845 = iParam0;
	Global_71844 = 0;
	Global_71847 = 3;
}

void func_546(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, var uParam13, var uParam14, int iParam15, var uParam16, bool bParam17)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	func_367();
	func_366();
	func_482();
	func_552(uParam1);
	func_544(23, 0);
	func_551(*uParam1);
	_0xE30524E1871F481D(*uParam16);
	CANCEL_MUSIC_EVENT("OJBJ_START");
	CANCEL_MUSIC_EVENT("OJBJ_JUMPED");
	CANCEL_MUSIC_EVENT("OJBJ_LANDED");
	TRIGGER_MUSIC_EVENT("OJBJ_STOP");
	STOP_AUDIO_SCENE("BASEJUMPS_OPEN_PARACHUTE");
	STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_ON_FOOT");
	STOP_AUDIO_SCENE("BASEJUMPS_PREP_FOR_JUMP_MOTO");
	STOP_AUDIO_SCENE("BASEJUMPS_SKYDIVE");
	STOP_AUDIO_SCENE("BASEJUMPS_OPEN_PARACHUTE");
	STOP_AUDIO_SCENES();
	uParam11 = uParam11;
	Global_88969 = 0;
	Global_88970 = 0;
	Global_88971 = 0;
	func_20(0, 1);
	func_18(0, 1);
	func_17(0);
	SET_FADE_OUT_AFTER_DEATH(1);
	_DISABLE_AUTOMATIC_RESPAWN(0);
	IGNORE_NEXT_RESTART(0);
	while (IS_SCREEN_FADING_OUT())
	{
		WAIT(0);
	}
	if (IS_SCRIPT_GLOBAL_SHAKING())
	{
		STOP_SCRIPT_GLOBAL_SHAKING(1);
	}
	if (DOES_BLIP_EXIST(uParam13))
	{
		REMOVE_BLIP(&uParam13);
	}
	if (DOES_BLIP_EXIST(uParam14))
	{
		REMOVE_BLIP(&uParam14);
	}
	func_373();
	func_26(0);
	SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(PLAYER_ID(), 0);
	func_550(1, 1);
	if (func_417(func_443(uParam0)))
	{
	}
	else
	{
		_0x0A436B8643716D14();
	}
	REMOVE_SCENARIO_BLOCKING_AREAS();
	func_548(uParam7);
	func_274();
	_SET_MINIMAP_ATTITUDE_INDICATOR_LEVEL(0f, 0, 21);
	_0x6DDBF9DFFC4AC080(0);
	func_210(0, 0);
	SET_PLAYER_CONTROL(PLAYER_ID(), 1, 0);
	if (iParam15 == 5)
	{
		SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 146, 0);
	}
	if (DOES_ENTITY_EXIST(PLAYER_PED_ID()) && !IS_PED_INJURED(PLAYER_PED_ID()))
	{
		SET_PED_RESET_FLAG(PLAYER_PED_ID(), 177, 0);
		SET_PED_CONFIG_FLAG(PLAYER_PED_ID(), 36, 0);
		SET_PLAYER_INVINCIBLE(PLAYER_ID(), 0);
		SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER_PED_ID(), 0);
		if (!bParam17)
		{
			REMOVE_WEAPON_FROM_PED(PLAYER_PED_ID(), joaat("gadget_parachute"));
		}
		SET_PED_LOD_MULTIPLIER(PLAYER_PED_ID(), 1f);
		SET_PED_HELMET(PLAYER_PED_ID(), 1);
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (DOES_ENTITY_EXIST((*uParam10)[iVar1]) && !IS_ENTITY_DEAD((*uParam10)[iVar1], 0))
		{
			CLEAR_PED_TASKS((*uParam10)[iVar1]);
			(*uParam10)[iVar1] = 0;
		}
		iVar1++;
	}
	if ((DOES_ENTITY_EXIST(*uParam6) && *uParam6 != GET_PLAYERS_LAST_VEHICLE()) && !IS_ENTITY_DEAD(*uParam6, 0))
	{
		SET_PLAYERS_LAST_VEHICLE(*uParam6);
		func_277(*uParam6, func_316(iParam15), func_315(iParam15), 24, 0);
	}
	if (!IS_PED_INJURED(*uParam8))
	{
		if (!IS_ENTITY_ON_SCREEN(*uParam8))
		{
			DELETE_PED(uParam8);
		}
		else
		{
			SET_PED_AS_NO_LONGER_NEEDED(uParam8);
		}
	}
	if (!IS_PED_INJURED(*uParam9))
	{
		CLEAR_PED_TASKS(*uParam9);
		SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam9, 1);
	}
	if (DOES_ENTITY_EXIST(*uParam2))
	{
		if (func_451(func_452(iParam15)))
		{
			if ((!IS_ENTITY_DEAD(*uParam2, 0) && !IS_PED_INJURED(PLAYER_PED_ID())) && IS_PED_IN_VEHICLE(PLAYER_PED_ID(), *uParam2, 0))
			{
				_0xF9ACF4A08098EA25(PLAYER_PED_ID(), 1);
			}
			if (!IS_ENTITY_ON_SCREEN(*uParam2))
			{
				DELETE_VEHICLE(uParam2);
			}
			else
			{
				SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam2);
			}
		}
		else
		{
			SET_VEHICLE_AS_NO_LONGER_NEEDED(uParam2);
		}
	}
	if (DOES_ENTITY_EXIST(*uParam3))
	{
		if (func_358(func_359(uParam0)))
		{
			SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(uParam3, 0);
			SET_RANDOM_TRAINS(1);
		}
	}
	if (DOES_ENTITY_EXIST(*uParam4) && !IS_ENTITY_DEAD(*uParam4, 0))
	{
		uVar0 = GET_PED_IN_VEHICLE_SEAT(*uParam4, -1, 0);
		if (DOES_ENTITY_EXIST(uVar0))
		{
			DELETE_PED(&uVar0);
		}
		DELETE_VEHICLE(uParam4);
	}
	iVar2 = 0;
	while (iVar2 < *uParam5)
	{
		if (DOES_ENTITY_EXIST((*uParam5)[iVar2]) && !IS_ENTITY_DEAD((*uParam5)[iVar2], 0))
		{
			SET_VEHICLE_LOD_MULTIPLIER((*uParam5)[iVar2], 1f);
			SET_ENTITY_LOAD_COLLISION_FLAG((*uParam5)[iVar2], 0, 1);
		}
		iVar2++;
	}
	*iParam12 = 1;
	CLEAR_HELP(1);
	RENDER_SCRIPT_CAMS(0, 0, 3000, 1, 0, 0);
	DISPLAY_RADAR(1);
	DISPLAY_HUD(1);
	SET_FRONTEND_RADIO_ACTIVE(1);
	func_547();
	SET_NO_LOADING_SCREEN(0);
	Global_106565.f_18961 = -1;
	TERMINATE_THIS_THREAD();
}

void func_547()
{
	Global_17272.f_5 = 0;
}

void func_548(var uParam0)
{
	func_549(uParam0, 0);
	func_549(uParam0, 1);
	func_549(uParam0, 2);
}

void func_549(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

void func_550(int iParam0, bool bParam1)
{
	if (IS_BIT_SET(Global_25923, iParam0))
	{
		if (!bParam1)
		{
			CLEAR_BIT(&Global_25923, iParam0);
			StringCopy(&(Global_25924[iParam0 /*6*/]), "NULL", 24);
			Global_25979[iParam0] = bParam1;
		}
	}
}

void func_551(var uParam0)
{
	SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&uParam0);
}

void func_552(var uParam0)
{
	func_551(*uParam0);
}

