void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	sLocal_363 = "DISABLED_BEGGAR";
	iLocal_441 = 1;
	fLocal_457 = 0f;
	fLocal_460 = 5f;
	fLocal_461 = 7f;
	fLocal_462 = 5f;
	iLocal_515 = 1;
	iLocal_516 = 1;
	iLocal_519 = 1;
	iLocal_520 = 1;
	Local_132.f_3 = func_1(&vScriptParam_0);
	if (has_force_cleanup_occurred(523))
	{
		iLocal_538 = 1;
	}
	if (!bVar536)
	{
		Local_132.f_161 = func_2(vScriptParam_0.z, 2);
		Local_132.f_3 = func_1(&vScriptParam_0);
		Local_132.f_43 = func_3();
		uLocal_438 = uVar436;
		func_4();
		func_5();
		func_6();
		func_7(&Local_132, 1);
		func_8(&(Local_132.f_5));
		Local_132.f_176 = 1;
	}
	while (true)
	{
		func_10(bVar536, 2073, 0);
		if (bVar536)
		{
			wait(0);
		}
		else
		{
			switch (iVar440)
			{
				case 0:
					if (func_11())
					{
						iLocal_442 = 1;
					}
					break;
				case 1:
					if (func_12(&Local_132, &vScriptParam_0, 0, 0, 0, 1, 0, 1))
					{
						func_13(&Local_132, &uLocal_445, &(Local_132.f_51.f_4));
						func_15(&Local_132, uVar443, 3332);
						if ((((Local_132.f_51.f_4 != 4 && Local_132.f_51.f_4 != 5) && Local_132.f_51.f_4 != 6) && Local_132.f_51.f_4 != 8) && Local_132.f_51.f_4 != 10)
						{
							vVar0 = { _get_object_offset_from_coords(Local_132.f_51, Local_132.f_51.f_3, 0f, 0.3f, 0f) };
							Local_132.f_51 = { vVar0 };
						}
						iLocal_442 = 3;
					}
					else if (Local_132.f_160)
					{
						func_9();
					}
					break;
				case 3:
					if (func_16())
					{
						func_17();
						func_18();
						func_19();
						func_20();
						func_21(1);
						if (iVar324 != 1)
						{
						}
						else
						{
							func_22(&(Local_132.f_5), 0);
							func_23(&(Local_132.f_5), 0);
							func_24(&(Local_132.f_5), 0);
							func_25(&(Local_132.f_5), 0);
							func_26(&(Local_132.f_5), 0);
							func_27(&(Local_132.f_5), 0);
							func_28(&(Local_132.f_5), 0);
						}
						func_29(&(Local_132.f_5), 0);
						func_30(&(Local_132.f_5), 1097859072);
						iLocal_442 = 4;
					}
					break;
				case 4:
					if (!func_31(&Local_132, &uLocal_433, iVar324, 1, 1, 0, 0, 0))
					{
						func_9();
					}
					if (!Local_132.f_46)
					{
						if (func_32(get_player_index(), 1, 0, 1))
						{
							func_33(&uLocal_545);
						}
						if ((((func_34(&uLocal_433, &(Local_132.f_5), &iLocal_444, &uLocal_452, 0, 0, 1) || ((iVar324 == 1 && Global_1935630->f_24 == 1) && func_35())) || Global_1935630->f_24 == 1) || (Local_132.f_48 == 1 && is_ped_ragdoll(&(uLocal_433[0])))) || ((iVar324 == 1 && func_36(iVar446, 131072)) && !func_36(iVar446, 524288)))
						{
							iLocal_517 = 1;
							if (func_36(iVar444, 2048))
							{
								if (iVar324 != 1)
								{
								}
								else
								{
									if (has_entity_been_damaged_by_entity(&(uLocal_433[0]), Global_35, 1, 1))
									{
										func_37(1);
									}
									else
									{
										func_37(0);
									}
									func_38(uLocal_435[0]);
								}
							}
							Local_132.f_46 = 1;
							_0xdd1232b332cbb9e7(3, 1, 0);
							if (iVar324 != 1)
							{
								if (iVar324 != 0)
								{
								}
								else
								{
									if (iVar531 != 1)
									{
									}
									else
									{
										func_39(&(uLocal_433[0]), 0);
									}
									if ((((func_36(iVar444, 262144) && !func_36(iVar444, 33554432)) && func_40(&(uLocal_433[0]), 0, 1)) && ((iVar442 == 256 || iVar442 == 8) || iVar442 == 4)) && !has_entity_been_damaged_by_entity(&(uLocal_433[0]), Global_35, 1, 1))
									{
										func_41(&(uLocal_433[0]), 0);
										func_43(&(uLocal_433[0]), Global_35, func_42("SHOOT_STOP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
										func_44(&uLocal_446, 33554432);
										func_45(Local_569[0], 0, 0);
										if (func_46(&uLocal_511))
										{
											func_47(&uLocal_511);
										}
										open_sequence_task(&iLocal_437);
										task_react(0, Global_35, 0f, 0f, 0f, "DEFAULT_SCARED", 10f, 60f, 4);
										_task_smart_flee_style_ped(0, Global_35, 4, 257, -1082130432, -1, 0);
										func_48(&(uLocal_433[0]), &iLocal_437, 0, 0, 1, 1);
									}
									else if (!_0x1f0e401031e20146(iVar325, "PBL_MTH_STEAL_02") && !_0x1f0e401031e20146(iVar325, "PBL_EXIT"))
									{
										if (func_36(iVar444, 2048))
										{
											if (func_49(iVar325, "PBL_COWER_REACT_02") && func_49(iVar325, "PBL_BASE_TO_COWER"))
											{
												iVar3 = 1;
												if (_0x8d81e7824b7753f7(iVar325, "Cower", 1) || _0x8d81e7824b7753f7(iVar325, "base_to_cower", 1))
												{
													func_50(iVar325, "PBL_COWER_REACT_02", "cower_bool", 19, "AGGRO CHECK");
													iVar3 = 1;
													iLocal_537 = 1;
												}
												else
												{
													func_50(iVar325, "PBL_BASE_TO_COWER", "BASE_BOOL", 19, "AGGRO CHECK");
													iVar3 = 0;
												}
												if (does_entity_exist(Local_56[1]->f_8))
												{
													remove_anim_scene_entity(iVar325, "COIN01", Local_56[1]->f_8);
													activate_physics(Local_56[1]->f_8);
												}
												if (does_entity_exist(Local_56[2]->f_8))
												{
													remove_anim_scene_entity(iVar325, "COIN02", Local_56[2]->f_8);
													activate_physics(Local_56[2]->f_8);
												}
												func_45(Local_569[0], 0, 0);
												func_45(Local_569[1], 0, 0);
												if (iVar3 == 0)
												{
													iLocal_440 = 6;
												}
												else
												{
													iLocal_440 = 9;
												}
												func_47(&uLocal_472);
											}
											else
											{
												Local_132.f_46 = 0;
											}
										}
										else
										{
											iLocal_440 = 5;
										}
									}
									else
									{
										func_51(&uLocal_508, 0);
										iLocal_537 = 1;
										_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 1, -1082130432, -1, 0);
										set_ped_keep_task(&(uLocal_433[0]), true);
									}
								}
							}
							else
							{
								iLocal_440 = 5;
							}
						}
					}
					if (!is_any_speech_playing(&(uLocal_433[0])) && iVar324 == 0)
					{
						if (func_52(&uLocal_508, 0.25f))
						{
							if (!func_36(iVar444, 8388608))
							{
								func_41(&(uLocal_433[0]), 0);
								func_43(&(uLocal_433[0]), Global_35, func_42("CONT_AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
							}
							else if (!func_36(iVar445, 8388608))
							{
								func_41(&(uLocal_433[0]), 0);
								func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_44(&uLocal_447, 8388608);
							}
						}
					}
					if (func_53())
					{
						Local_132.f_50 = 1;
						func_9();
					}
					bVar4 = true;
					if ((does_entity_exist(&(uLocal_433[0])) && !func_40(&(uLocal_433[0]), 0, 0)) && get_ped_config_flag(&(uLocal_433[0]), 11, true))
					{
						bVar4 = false;
					}
					if (func_54(&Local_132, &uLocal_433, 1, bVar4, 0, 0, 1, 1, 0, 0, 0, 0, 0))
					{
						Local_132.f_50 = 1;
						func_9();
					}
					break;
			}
			wait(Local_132.f_158);
		}
	}
}

var func_1(var uParam0)
{
	return *uParam0;
}

bool func_2(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_3()
{
	return Global_1894899->f_2;
}

void func_4()
{
	if (func_55(85) == 0)
	{
		iLocal_326 = 0;
	}
	else
	{
		iLocal_326 = 1;
	}
}

void func_5()
{
	if (iVar324 == 0)
	{
		Local_327.f_4 = "script@beat@town@disabledBeggar@con@main";
	}
	else if (iVar324 == 1)
	{
		Local_327.f_4 = "script@beat@town@disabledBeggar@real@main";
	}
}

void func_6()
{
	Local_337 = { 0f, 0f, 0f };
	Local_337.f_3 = Global_35;
	Local_337.f_8 = 4;
	Local_337.f_4 = 21030;
	Local_337.f_19 = 4;
	Local_337.f_20 = 4;
	Local_337.f_21 = 4;
	Local_337.f_22 = 4;
	Local_337.f_17 = 4;
	Local_337.f_18 = 4;
	Local_337.f_7 = 0;
}

void func_7(var uParam0, bool bParam1)
{
	func_8(&(uParam0->f_5));
	if (uParam0->f_161)
	{
		func_56("BEAT_LAUNCHED", 4000, 0, 1, 0, 0, -1, -1, 0);
	}
	allow_sonar_blips(bParam1);
}

void func_8(int iParam0)
{
	func_23(iParam0, 0);
	func_57(iParam0, 0);
	func_58(iParam0, 1);
	func_27(iParam0, 1);
	func_24(iParam0, 0);
	func_59(iParam0, 1);
	func_60(iParam0, 1, 1, 1);
}

void func_9()
{
	func_38(uLocal_435[0]);
	set_ped_config_flag(&(uLocal_433[0]), 6, false);
	if (func_40(&(uLocal_433[0]), 0, 1))
	{
		_0xffebe5aa96bc2e4e(&(uLocal_433[0]), 1352191066, 0);
	}
	func_33(&uLocal_545);
	func_61(uLocal_433[0]);
	func_62(&Local_569, 0, 0, 1, 0);
	if (iVar513 == 0)
	{
		clear_ped_tasks(Global_35, 1, 0);
		set_player_control(get_player_index(), true, 0, false);
		iLocal_515 = 1;
	}
	func_63(&iLocal_453);
	func_64();
	set_wanted_level_multiplier(1f);
	_0x710448d44a64c213(1);
	_0xc805eb785824f712(1);
	func_65(&uLocal_540, &uLocal_546);
	if (_does_volume_exist(iVar540))
	{
		_delete_volume(iVar540);
	}
	if (_0xde0ea444735c1368(iVar539))
	{
		_0x2c87c3e1c7b96ee2(iVar539);
		func_66(iVar540);
	}
	func_66(iVar541);
	display_radar(true);
	display_hud(true);
	func_67(&(uLocal_433[0]), 0, -1082130432, -1082130432, -1, -1, -1, -1082130432);
	if (iVar515 == 0)
	{
		Local_132.f_45 = 0;
		func_68(&Local_132);
		if (iVar324 == 1)
		{
			func_69(&(uLocal_433[0]), 1, 1);
			_0x6569f31a01b4c097(&(uLocal_433[0]), 4, 0);
		}
		else
		{
			if (_0x3ab6c7b0bb0df4b1(&(uLocal_433[0]), iVar325))
			{
				_task_start_scenario_in_place(&(uLocal_433[0]), -442037069, 1000, false, 0, -1f, false);
			}
			func_70(uLocal_433[0], 313807665);
		}
	}
	if (iVar515 == 1)
	{
		if (Local_132.f_44 == 0)
		{
			iVar0 = func_71(85, 0);
			iVar0++;
			if (iVar0 >= 3)
			{
				func_72(85, 0, 0);
				func_73(81, 1, 0, 0, 6, 0, 0, 1);
				Local_132.f_44 = 1;
			}
			else
			{
				func_72(85, 0, iVar0);
			}
		}
		else
		{
			func_72(85, 0, 0);
		}
	}
	func_74(&Local_56);
	func_76(&Local_132, &uLocal_433, &uLocal_435, iVar324, uVar443, func_75(&Local_132), 0, 1, 0, 1);
	func_77(85);
	terminate_this_thread();
}

void func_10(bool bParam0, int iParam1, bool bParam2)
{
	if (bParam0)
	{
		if (!func_78(bParam2) || is_screen_faded_out())
		{
			Call_Loc(iParam1);
		}
	}
}

bool func_11()
{
	switch (iVar437)
	{
		case 0:
			if (func_79(&Local_132))
			{
				func_80();
				func_81();
				func_82();
				func_83();
				func_84(&Local_56);
				_0x91fe941f9fcfb702(-252998940, 0);
				if (iVar324 == 0)
				{
					request_clip_set("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@GIVE");
					request_clip_set("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@STEAL_01");
					request_clip_set("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@STEAL_02");
				}
				else
				{
					request_clip_set("SCRIPT_RE@DISABLED_BEGGAR@REAL@MTH@GIVE");
					request_clip_set("SCRIPT_RE@DISABLED_BEGGAR@REAL@MTH@STEAL");
				}
				iLocal_439 = 1;
			}
			break;
		case 1:
			if (!func_85(&uLocal_438, uVar361))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 1)
			{
				if (!has_model_loaded(Local_99[iVar0]->f_1))
				{
					return false;
				}
				iVar0++;
			}
			if (iVar324 == 0)
			{
				if (!has_clip_set_loaded("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@GIVE"))
				{
					return false;
				}
				if (!has_clip_set_loaded("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@STEAL_01"))
				{
					return false;
				}
				if (!has_clip_set_loaded("SCRIPT_RE@DISABLED_BEGGAR@CON@MTH@STEAL_02"))
				{
					return false;
				}
			}
			else
			{
				if (!has_clip_set_loaded("SCRIPT_RE@DISABLED_BEGGAR@REAL@MTH@GIVE"))
				{
					return false;
				}
				if (!has_clip_set_loaded("SCRIPT_RE@DISABLED_BEGGAR@REAL@MTH@STEAL"))
				{
					return false;
				}
			}
			if (!func_86(&Local_99))
			{
				return false;
			}
			if (!func_87(&uLocal_14))
			{
				return false;
			}
			if (!func_88(&Local_56))
			{
				return false;
			}
			if (!_0xd9130842d7226045("REDIB_Sounds", 0))
			{
				return false;
			}
			_0x91fe941f9fcfb702(-252998940, 0);
			return true;
	}
	return false;
}

bool func_12(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (bParam6 || func_89(*uParam1, &(uParam0->f_51), uParam0->f_161, &(uParam0->f_158), *uParam1, &(uParam0->f_160), 1, iParam3, iParam4))
	{
		if (bParam6 || func_90(uParam0, *uParam1))
		{
			if (uParam0->f_161 && uParam0->f_184)
			{
				fVar0 = 7f;
				if (func_91(uParam0->f_3, 1))
				{
					fVar0 = 20f;
				}
				clear_area(uParam0->f_51, fVar0, 2097152);
			}
			if (iParam5 == 1)
			{
				func_92(uParam0, -1, 0, bParam7);
			}
			_0x9d16896f0dbe78a2(uParam0->f_51, 5f);
			if (bParam2)
			{
				uParam0->f_51.f_3 = func_93(uParam0->f_51);
			}
			return true;
		}
	}
	return false;
}

void func_13(var uParam0, var uParam1, var uParam2)
{
	switch (uParam0->f_51.f_4)
	{
		case 0:
			*uParam1 = 0;
			*uParam2 = 0;
			break;
		case 1:
			*uParam1 = 0;
			*uParam2 = 1;
			break;
		case 2:
			*uParam1 = 0;
			*uParam2 = 2;
			break;
		case 3:
			*uParam1 = 0;
			*uParam2 = 3;
			break;
		case 4:
			*uParam1 = 0;
			*uParam2 = 4;
			break;
		case 5:
			*uParam1 = 0;
			*uParam2 = 6;
			break;
		case 6:
			*uParam1 = 0;
			*uParam2 = 7;
			break;
		case 7:
			*uParam1 = 0;
			*uParam2 = 8;
			break;
		case 8:
			*uParam1 = 0;
			*uParam2 = 9;
			break;
		case 9:
			*uParam1 = 0;
			*uParam2 = 10;
			break;
		case 10:
			*uParam1 = 0;
			*uParam2 = 11;
			break;
	}
}

Vector3 func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 0f, 0f, 94.513f;
				case 1:
					return 0f, 0f, -65f;
				case 2:
					return 0f, 0f, -90f;
				case 3:
					return 0f, 0f, -111.148f;
				case 4:
					return 0f, 0f, -1.3f;
				case 6:
					return 0f, 0f, -172.261f;
				case 7:
					return 0f, 0f, -83.61f;
				case 8:
					return 0f, 0f, 53.512f;
				case 9:
					return 0f, 0f, 271.129f;
				case 10:
					return 0f, 0f, 89.192f;
				case 11:
					return 0f, 0f, 163.562f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_15(var uParam0, var uParam1, int iParam2)
{
	Stack.Push(uParam1);
	Stack.Push(uParam0->f_51.f_4);
	Call_Loc(iParam2);
	vVar0 = { StackVal, StackVal, StackVal };
	uParam0->f_51.f_3 = vVar0.z;
}

bool func_16()
{
	switch (iVar441)
	{
		case 0:
			if (func_96(func_94(&Local_132), func_95(&Local_132), &Local_99, &uLocal_433, 0, 0, -1, 1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_17()
{
	if (func_40(&(uLocal_433[0]), 0, 1))
	{
		func_97(&(uLocal_433[0]));
		func_99(&(uLocal_433[0]), func_98(-95152412));
		remove_all_ped_weapons(&(uLocal_433[0]), true, true);
		func_100();
		_0x946d46cd6dfb9742(get_player_index(), 0, -440666838);
		if (iVar324 == 1)
		{
			_0xae6004120c18df97(&(uLocal_433[0]), 0, 0);
		}
		vVar0 = { _get_object_offset_from_coords(Local_132.f_51, Local_132.f_51.f_3, -0.22f, -0.55f, 1f) };
		task_play_anim_advanced(&(uLocal_433[0]), &(Local_47[1]), Local_47[1]->f_1, vVar0, 0f, 0f, Local_132.f_51.f_3, 1000f, -8f, -1, 1, 0f, 2, 0, 0);
		if (iVar324 == 1)
		{
			func_101(&(uLocal_433[0]), 1);
		}
		func_102(&(uLocal_433[0]), &(Local_99[0]->f_23), 0);
		iLocal_453 = add_shocking_event_for_entity(161068336, &(uLocal_433[0]), 0f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
		_set_ped_component_disabled(&(uLocal_433[0]), -1725579161, 1);
		_update_ped_variation(&(uLocal_433[0]), false, true, true, true, false);
		func_103(&(uLocal_433[0]), &Local_132, 0);
		set_ped_config_flag(&(uLocal_433[0]), 6, true);
	}
}

void func_18()
{
	Local_327 = _create_anim_scene(Local_327.f_4, 0, "pbl_action", false, true);
	vVar0 = { 0f, 180f, -Local_132.f_51.f_3 };
	Local_56[0]->f_8 = _0x9641a9a20310f6b8(-252998940, Local_132.f_51 + Vector(0.13f, 0f, 0f), vVar0, 0, 0, 0);
	Local_56[1]->f_8 = create_object(Local_56[1]->f_7, Local_132.f_51 + Vector(0.2f, 0.02f, 0.02f), true, true, false, false, true);
	Local_56[2]->f_8 = create_object(Local_56[2]->f_7, Local_132.f_51 + Vector(0.2f, 0f, 0f), true, true, false, false, true);
	if (iVar324 == 1)
	{
		set_entity_visible(Local_56[1]->f_8, false);
	}
	else
	{
		set_entity_visible(Local_56[2]->f_8, false);
	}
	set_entity_no_collision_entity(Local_56[0]->f_8, Local_56[1]->f_8, false);
	set_entity_no_collision_entity(Local_56[0]->f_8, Local_56[2]->f_8, false);
	if (!is_string_null_or_empty(Local_327.f_4))
	{
		if (!_is_anim_scene_loaded(iVar325, true, false))
		{
			load_anim_scene(iVar325);
		}
	}
	set_anim_scene_origin(iVar325, Local_132.f_51, 0f, 0f, Local_132.f_51.f_3, 2);
	set_anim_scene_entity(iVar325, "Beggar", &(uLocal_433[0]), 0);
	set_anim_scene_entity(iVar325, "hat", Local_56[0]->f_8, 0);
	set_anim_scene_entity(iVar325, "player", Global_35, 0);
	set_anim_scene_entity(iVar325, "COIN_01", Local_56[1]->f_8, 0);
	set_anim_scene_entity(iVar325, "COIN_02", Local_56[2]->f_8, 0);
	func_44(&uLocal_446, 67108864);
}

void func_19()
{
	uLocal_542 = _0x0eb78c2b156635b1(665633627, get_entity_coords(&(uLocal_433[0]), true, false), 0f, 0f, Local_99[0]->f_9, 1f, 1f, 5f);
	if (_does_volume_exist(iVar540))
	{
		_0x7c00cfc48a782dc0(iVar540, &(uLocal_433[0]), 0f, 0f, -0.1f, 0f, 0f, 0f, 2, 1);
	}
	uLocal_543 = _0x0eb78c2b156635b1(665633627, Local_132.f_51, 0f, 0f, 0f, 2.5f, 2.5f, 5f);
	_0x7c00cfc48a782dc0(iVar541, &(uLocal_433[0]), 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	_0x5b23dff8e0948bb2(iVar541, 0);
	_0xbe551c2cc421185d(iVar541, 1);
	func_104(&uLocal_541, Local_132.f_51, 0f, 0f, 0f, 2f, 2f, 5f, "NAV_BLOCKER");
	if (_does_volume_exist(iVar539))
	{
		if (_0x19c7567d2f2287d6(iVar539, 7))
		{
		}
	}
	vVar0 = { get_offset_from_entity_in_world_coords(&(uLocal_433[0]), 0f, 2f, 0f) };
	func_105(&uLocal_544, vVar0, vLocal_96, 8f, 5f, 5f, "INTERACT_AREA");
	func_106(&uLocal_545, Local_132.f_51, 0f, 0f, 0f, 20f, 20f, 10f, 0, 16384, 0);
	func_107(&uLocal_540, &uLocal_546, Local_132.f_51, 0f, 0f, Local_132.f_51.f_3, 6f, 5f, 5f, 1, 534496, 1, 2, "AmbientBlocker");
	func_108(uVar538, 0);
}

void func_20()
{
	func_109(Local_569[0], "RE_INTER_POS", 0, -163964935, 0, 0, 0, 1, 0);
	func_109(Local_569[1], "RE_INTER_ANTAGONIZE", 0, 648122183, 0, 0, 0, 1, 0);
	iLocal_441 = 0;
	func_110(Local_569[1], 3);
}

void func_21(int iParam0)
{
	func_111(Local_569[0], "RE_DAB_GIVE", 50);
	func_112(Local_569[1], "RE_DAB_STEAL_COIN");
	func_113(Local_547[0], 0);
	func_114(Local_569[0], 1, 0);
	func_114(Local_569[1], 1, 0);
	if ((iVar522 == 1 || ((iVar323 == 0 && iVar523 == 1) && iVar446 >= 2)) || iParam0 == 1)
	{
		func_45(Local_569[0], 0, 0);
	}
	else
	{
		func_45(Local_569[0], 1, 0);
	}
	if ((iVar523 == 1 && (iVar323 == 1 || (iVar323 == 0 && iVar446 > 1))) || iParam0 == 1)
	{
		func_45(Local_569[1], 0, 0);
	}
	else
	{
		func_45(Local_569[1], 1, 0);
	}
	iLocal_441 = 1;
}

void func_22(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_115(&(uParam0->f_1), 8);
	}
	else
	{
		func_116(&(uParam0->f_1), 8);
	}
}

void func_23(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_115(&(uParam0->f_1), 16384);
	}
	else
	{
		func_116(&(uParam0->f_1), 16384);
	}
}

void func_24(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_115(&(iParam0->f_1), 128);
	}
	else
	{
		func_116(&(iParam0->f_1), 128);
	}
}

void func_25(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(iParam0, 8);
	}
	else
	{
		func_115(iParam0, 8);
	}
}

void func_26(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(iParam0, 32);
	}
	else
	{
		func_115(iParam0, 32);
	}
}

void func_27(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(iParam0, 16);
	}
	else
	{
		func_115(iParam0, 67108864);
		func_115(iParam0, 16);
	}
}

void func_28(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(iParam0, 64);
	}
	else
	{
		func_115(iParam0, 64);
	}
}

void func_29(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_115(&(uParam0->f_1), 1024);
	}
	else
	{
		func_116(&(uParam0->f_1), 1024);
	}
}

void func_30(var uParam0, int iParam1)
{
	uParam0->f_26 = iParam1;
}

bool func_31(var uParam0, var uParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	if (!uParam0->f_186)
	{
		func_117(uParam0, iParam2);
	}
	uParam0->f_1 = (uParam0->f_1 % 4);
	func_118(uParam0, uParam1);
	if (bParam4)
	{
		if (uParam0->f_48 && !uParam0->f_5 & 16384 != 0)
		{
			if (uParam0->f_5.f_1 & 256 != 0)
			{
				func_119(&(uParam0->f_5));
			}
			func_116(&(uParam0->f_5), 16384);
		}
	}
	if (!uParam0->f_48 && !func_120(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
		}
	}
	switch (uParam0->f_1)
	{
		case 0:
		case 1:
			if (!uParam0->f_48)
			{
				if (!bParam7)
				{
					if (uParam0->f_193 < 2)
					{
						uParam0->f_193++;
					}
					else
					{
						uParam0->f_193 = 0;
					}
					func_123(uParam0, uParam0->f_193, 2f);
				}
			}
			break;
		case 2:
			if (!func_124(uParam0->f_3, &(uParam0->f_47), uParam0, bParam3))
			{
				bVar0 = true;
			}
			break;
		case 3:
			break;
	}
	if (func_91(uParam0->f_3, 128))
	{
		if ((does_entity_exist(uParam1[0]) && !is_ped_injured(uParam1[0])) && uParam0->f_3 != 49)
		{
			if (!_0xf6a8a652a6b186cd(_0xf6f5447d418daa82(uParam1[0])))
			{
				func_125(uParam0, uParam1[0]);
			}
		}
		if (bParam6)
		{
			if (_is_ped_carrying(Global_35))
			{
				iVar1 = _get_first_entity_ped_is_carrying(Global_35);
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						iVar2 = get_ped_index_from_entity_index(iVar1);
						if (does_entity_exist(iVar2))
						{
							if (_is_ped_hogtied(iVar2) || ((bParam5 || is_ped_human(iVar2)) && is_entity_dead(iVar2)))
							{
								bVar0 = true;
							}
						}
					}
				}
			}
		}
	}
	uParam0->f_158 = 0;
	uParam0->f_1++;
	uParam0->f_2++;
	if (bVar0)
	{
		return false;
	}
	return true;
}

bool func_32(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_126(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225639->f_10)
		{
			if (!Global_1225639->f_11)
			{
				return false;
			}
		}
		else if (!does_entity_exist(get_player_ped(iParam0)))
		{
			return false;
		}
	}
	else if (!does_entity_exist(get_player_ped(iParam0)))
	{
		return false;
	}
	if (_0xad401c63158acbaa(iParam0))
	{
		_0xcbfb4951f2e3934c(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || get_player_wanted_level(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !_0x148e7ac8141c9e64(iParam0) == 1370593166)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (_0x532c5fddb986ee5c(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || _0xdaefdfdb2aeece37(Var18, Var18.f_7) > 0))
			{
				return true;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (_0x69e181772886f48b(iParam0) || _0xf0fbfb9ab15f7734(iParam0, 0, 0))
		{
			if (bParam3 || _0xe083beda81709891(iParam0) > 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_33(var uParam0)
{
	if (!_does_volume_exist(*uParam0))
	{
		return;
	}
	_0x74c2b3dc0b294102(*uParam0);
	_0xa1cfb35069d23c23(*uParam0);
	_delete_volume(*uParam0);
}

bool func_34(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6)
{
	iVar2 = (iParam5 - iParam4) + 1;
	if (iParam6 == 1)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_127(iVar2, iParam6);
	}
	if (*uParam3 < iParam4 || *uParam3 > iParam5)
	{
		*uParam3 = iParam4;
	}
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_128(uParam0[*uParam3], 0, iParam1, iParam2, 0, 0))
		{
			return true;
		}
		*uParam3++;
		if (*uParam3 > iParam5)
		{
			*uParam3 = iParam4;
		}
		iVar1++;
	}
	return false;
}

bool func_35()
{
	iVar0 = 0;
	if (iVar324 == 1 && Global_1935630->f_24 == 1)
	{
		if (_0x09d7afd3716da8e1(&(uLocal_433[0]), 250))
		{
			iVar0 = 1;
		}
		if (is_shocking_event_in_sphere(-587661767, Local_132.f_51, 20f))
		{
			iVar0 = 1;
		}
		if (is_shocking_event_in_sphere(-1507090758, Local_132.f_51, 20f))
		{
			iVar0 = 1;
		}
		if (is_shocking_event_in_sphere(-1102089407, Local_132.f_51, 20f))
		{
			iVar0 = 1;
		}
		if (is_shocking_event_in_sphere(1591069782, Local_132.f_51, 15f))
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_36(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_37(int iParam0)
{
	if (iVar528 == 1)
	{
		func_112(Local_569[0], "INTERACT_ENCOURAGE");
	}
	else
	{
		func_112(Local_569[0], "RE_INTER_POS");
	}
	func_112(Local_569[1], "RE_INTER_ANTAGONIZE");
	func_113(Local_547[0], 0);
	if (iVar518 == 1 || iParam0 == 1)
	{
		func_45(Local_569[0], 0, 0);
	}
	else
	{
		func_45(Local_569[0], 1, 0);
	}
	if (iVar519 == 1 || iParam0 == 1)
	{
		func_45(Local_569[1], 0, 0);
	}
	else
	{
		func_45(Local_569[1], 1, 0);
	}
}

void func_38(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_39(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_129(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_40(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_130(iParam0, iParam1);
}

void func_41(var uParam0, int iParam1)
{
	stop_current_playing_ambient_speech(uParam0, iParam1);
	stop_current_playing_speech(uParam0, iParam1);
}

char* func_42(char* sParam0)
{
	if (iVar323 == 0)
	{
		iVar0 = 1;
	}
	else if (iVar323 == 1)
	{
		iVar0 = 2;
	}
	switch (func_131())
	{
		case 0:
			return func_132("DIB", "NBX", sParam0, iVar0);
		case 4:
			return func_132("DIB", "BLW", sParam0, iVar0);
		default:
			break;
	}
	return "INVALID";
}

bool func_43(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, int iParam14)
{
	return func_133(iParam0, iParam1, sParam2, iParam3, fParam4, iParam5, bParam6, bParam7, iParam8, bParam9, bParam10, iParam11, 0, bParam12, bParam13, iParam14) >= 0;
}

void func_44(var uParam0, int iParam1)
{
	func_134(uParam0, iParam1);
}

void func_45(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_135(iParam0, 13))
	{
		func_136(iParam0, 0);
	}
	else
	{
		func_137(iParam0, 0);
	}
	if (func_138(iParam0->f_6))
	{
		if (bParam2)
		{
			func_139(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_46(var uParam0)
{
	return func_140(*uParam0, 1);
}

void func_47(var uParam0)
{
	func_141(uParam0, 0f);
}

void func_48(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	close_sequence_task(*iParam1);
	if (!bParam5 || !is_entity_dead(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			_task_perform_sequence_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			task_perform_sequence(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		clear_sequence_task(iParam1);
	}
}

bool func_49(int iParam0, char* sParam1)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_metadata_loaded(iParam0, false))
		{
			if (_0xa9016536015de29d(iParam0, sParam1))
			{
				if (!_0x23e33cb9f4a3f547(iParam0, sParam1))
				{
					_0xdf7b5144e25cd3fe(iParam0, sParam1);
				}
				else
				{
					return true;
				}
			}
		}
	}
	iLocal_516 = 0;
	return false;
}

void func_50(int iParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4)
{
	if (func_49(iParam0, sParam1))
	{
		_set_anim_scene_playback_list_bool(iParam0, sParam1, true);
		set_anim_scene_bool(iParam0, sParam2, true, false);
		if (!is_string_null(sParam4))
		{
		}
		if (iParam3 != 20)
		{
			iLocal_335 = iParam3;
		}
		func_47(&uLocal_469);
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (bParam1 || !func_46(uParam0))
	{
		func_47(uParam0);
	}
}

bool func_52(var uParam0, float fParam1)
{
	if (func_142(uParam0, fParam1))
	{
		func_143(uParam0);
		return true;
	}
	return false;
}

bool func_53()
{
	func_144();
	func_145();
	if (Local_132.f_48 == 1)
	{
		func_146();
		if (func_147(Global_35, &(uLocal_433[0]), 1, 1) < 16f)
		{
			func_148();
			func_149();
			func_150();
			func_151();
		}
	}
	if (func_152())
	{
		return true;
	}
	if (iVar513 == 0)
	{
		if (!_0x3ab6c7b0bb0df4b1(Global_35, iVar325) && iVar528 == 1)
		{
			set_player_control(get_player_index(), true, 0, false);
			iLocal_515 = 1;
		}
	}
	if (func_40(&(uLocal_433[0]), 0, 1))
	{
		set_ped_can_play_gesture_anims(&(uLocal_433[0]), 0, 1);
	}
	switch (iVar438)
	{
		case 0:
			if (_is_anim_scene_loaded(iVar325, true, false))
			{
				iLocal_516 = 1;
				func_153(&uLocal_490, 15f, 0);
				if (!_is_anim_scene_started(iVar325, false))
				{
					start_anim_scene(iVar325);
				}
				if (iVar324 == 0)
				{
					func_49(iVar325, "PBL_BASE_REACT_02");
					func_49(iVar325, "PBL_BASE_TO_COWER");
					func_49(iVar325, "PBL_BASE_VAR01");
					func_49(iVar325, "PBL_BASE_VAR02");
					func_49(iVar325, "PBL_COWER_REACT_02");
					func_49(iVar325, "PBL_COWER_TO_BASE");
					func_49(iVar325, "PBL_DIA_01");
					func_49(iVar325, "PBL_DIA_02");
					func_49(iVar325, "PBL_DIA_03");
					func_49(iVar325, "PBL_DIA_04");
					func_49(iVar325, "PBL_DIA_05");
					func_49(iVar325, "PBL_DIA_06");
					func_49(iVar325, "PBL_DIA_07");
					func_49(iVar325, "PBL_DIA_08");
					func_49(iVar325, "PBL_DIA_09");
					func_49(iVar325, "PBL_EXIT");
				}
				else if (iVar324 == 1)
				{
					func_49(iVar325, "PBL_BASE_TO_COWER");
					func_49(iVar325, "PBL_BASE_VAR01");
					func_49(iVar325, "PBL_BASE_VAR02");
					func_49(iVar325, "PBL_COWER_DIA_06");
					func_49(iVar325, "PBL_COWER_DIA_07");
					func_49(iVar325, "PBL_COWER_FLINCH_01");
					func_49(iVar325, "PBL_COWER_FLINCH_02");
					func_49(iVar325, "PBL_COWER_TO_BASE");
					func_49(iVar325, "PBL_DIA_01");
					func_49(iVar325, "PBL_DIA_02");
					func_49(iVar325, "PBL_DIA_03");
					func_49(iVar325, "PBL_DIA_04");
					func_49(iVar325, "PBL_DIA_05");
				}
				iLocal_516 = 1;
				if (iVar514 == 1)
				{
					iLocal_440 = 1;
				}
			}
			break;
		case 1:
			if (Local_132.f_48 == 1)
			{
				func_154();
			}
			vVar0 = { func_155(Global_35, 1065353216) };
			if (does_entity_exist(&(uLocal_433[0])))
			{
				if (!func_36(iVar444, 65536))
				{
					if (func_156(&(uLocal_433[0]), vVar0, 1) < 30f)
					{
						func_44(&uLocal_446, 65536);
						func_44(&uLocal_447, 16);
						if (!func_46(&uLocal_463))
						{
							func_51(&uLocal_463, 0);
						}
					}
				}
				if (func_147(&(uLocal_433[0]), Global_35, 1, 1) < 8f && func_157(&Local_132, 2f, 6f, 8f, 1, 0, 1, -1082130432, 1, 1125515264, 0, 0))
				{
					iLocal_539 = func_158(&(uLocal_433[0]), Global_35, 1060437492);
					if (iVar537 != 1)
					{
						func_44(&uLocal_447, 16);
						if (!func_36(iVar444, 512))
						{
							func_159(&(uLocal_433[0]), uLocal_435[0], -89429847, 1679075994, 0, "RE_INTER_STRANGER");
							func_44(&uLocal_446, 512);
						}
						if ((has_anim_event_fired(&(uLocal_433[0]), -1950704028) || iVar523 == 1) || iVar524 == 1)
						{
							fLocal_457 = 0f;
							iLocal_335 = 4;
							func_47(&uLocal_469);
							iLocal_440 = 2;
						}
					}
				}
			}
			break;
		case 2:
			func_154();
			iLocal_440 = 3;
			break;
		case 3:
			if (Local_132.f_48 == 1)
			{
				func_160();
				func_154();
				func_161();
			}
			if (iVar324 == 0 && !func_36(iVar444, 4096))
			{
				if (func_36(iVar444, 128) && (has_anim_event_fired(&(uLocal_433[0]), -1950704028) || has_anim_event_fired(&(uLocal_433[0]), -1765767514)))
				{
					if ((func_147(&(uLocal_433[0]), Global_35, 1, 1) > 10f && !is_any_speech_playing(&(uLocal_433[0]))) && func_49(iVar325, "PBL_EXIT"))
					{
						func_39(&(uLocal_433[0]), 0);
						func_51(&uLocal_505, 0);
						func_44(&uLocal_446, 4096);
						func_50(iVar325, "PBL_EXIT", "BASE_BOOL", 19, "STATE_INTERACT");
						func_162(&(Local_132.f_5), &iLocal_444);
						Local_132.f_46 = 0;
						func_163(249295937, &(uLocal_433[0]), 1);
						iLocal_441 = 0;
						func_45(Local_569[0], 0, 0);
						func_45(Local_569[1], 0, 0);
						iLocal_528 = 1;
						iLocal_440 = 10;
					}
				}
				if (func_36(iVar444, 256))
				{
					func_162(&(Local_132.f_5), &iLocal_444);
					Local_132.f_46 = 0;
					iLocal_440 = 10;
				}
			}
			if ((iVar528 == 1 && func_164(&uLocal_493) > 1f) && ((has_anim_event_fired(&(uLocal_433[0]), -1950704028) || has_anim_event_fired(&(uLocal_433[0]), -1589193385)) || has_anim_event_fired(&(uLocal_433[0]), -1765767514)))
			{
				func_143(&uLocal_493);
				iLocal_530 = 0;
				func_21(0);
				func_153(&uLocal_487, 5f, 1);
			}
			if (func_46(&uLocal_478))
			{
				if (func_164(&uLocal_478) > 5f && has_anim_event_fired(&(uLocal_433[0]), -1950704028))
				{
					func_143(&uLocal_478);
					if (iVar324 == 1)
					{
						Local_132.f_46 = 0;
						func_162(&(Local_132.f_5), &iLocal_444);
					}
					func_51(&uLocal_481, 0);
					if ((iVar334 == 19 || iVar334 == 5) || iVar334 == 6)
					{
						iLocal_336 = 0;
					}
					func_21(0);
				}
			}
			if (func_46(&uLocal_481))
			{
				if (func_52(&uLocal_481, fVar458))
				{
					iLocal_335 = iVar334;
				}
			}
			break;
		case 5:
			if (_does_volume_exist(iVar540))
			{
				_delete_volume(iVar540);
			}
			func_66(iVar541);
			if (func_36(iVar444, 2048) && iVar324 == 0)
			{
				if (func_49(iVar325, "PBL_BASE_TO_COWER"))
				{
					func_50(iVar325, "PBL_BASE_TO_COWER", "BASE_BOOL", 19, "STATE_ATTACKED - AFTER PED RETURNED TO BASE");
					iLocal_440 = 8;
				}
				return false;
			}
			if (((((((iVar442 == 8 || iVar442 == 256) || iVar442 == 4) || iVar442 == 8192) || Global_1935630->f_24 == 1) && Local_132.f_48 == 1) && func_147(Global_35, &(uLocal_433[0]), 1, 1) < 15f) || iVar324 == 1)
			{
				if (func_49(iVar325, "PBL_BASE_TO_COWER"))
				{
					if (func_36(iVar444, 2048))
					{
						func_165(&uLocal_446, 2048);
					}
					func_47(&uLocal_472);
					func_50(iVar325, "PBL_BASE_TO_COWER", "BASE_BOOL", 19, "STATE_ATTACKED - AGGRO CHECK");
					if (iVar324 == 0)
					{
						if (func_36(iVar444, 2048))
						{
							iLocal_440 = 8;
							func_166(1);
							iLocal_441 = 2;
						}
						else
						{
							iLocal_440 = 6;
							func_166(0);
							iLocal_441 = 2;
						}
					}
					else if (iVar324 == 1)
					{
						iLocal_440 = 7;
						func_166(0);
						iLocal_441 = 2;
					}
				}
			}
			else
			{
				func_51(&uLocal_505, 0);
				func_38(uLocal_435[0]);
				if ((is_ped_ragdoll(&(uLocal_433[0])) || func_167(&(uLocal_433[0]))) && iVar324 == 0)
				{
					func_51(&uLocal_508, 0);
					iLocal_537 = 1;
					if (func_168(&(uLocal_433[0]), 250, 0, 0))
					{
						func_169(&(uLocal_433[0]), 750, 750, 0, 0);
					}
					_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 1, -1082130432, -1, 0);
					if (iVar324 == 0)
					{
						func_51(&uLocal_508, 0);
						iLocal_537 = 1;
					}
					iLocal_440 = 10;
				}
				else if (iVar516 == 1)
				{
					func_50(iVar325, "PBL_COWER_REACT_02", "BASE_BOOL", 19, "STATE_ATTACKED - bCowering = TRUE");
					iLocal_440 = 10;
				}
				else if (iVar516 == 0)
				{
					func_50(iVar325, "PBL_BASE_REACT_02", "BASE_BOOL", 19, "STATE_ATTACKED - bCowering = FALSE");
					iLocal_440 = 10;
				}
			}
			break;
		case 6:
			func_51(&uLocal_505, 0);
			iLocal_444 = 0;
			fLocal_458 = 8f;
			fLocal_459 = 7f;
			if (iVar521 == 1)
			{
				fLocal_458 = 3f;
				fLocal_459 = 4f;
			}
			if (func_40(&(uLocal_433[0]), 0, 1))
			{
				if (!func_46(&uLocal_472))
				{
					func_51(&uLocal_472, 0);
				}
				iVar3 = 0;
				if (is_ped_ragdoll(&(uLocal_433[0])))
				{
					func_51(&uLocal_508, 0);
					iLocal_537 = 1;
					iVar3 = 1;
				}
				if ((func_34(&uLocal_433, &(Local_132.f_5), &iLocal_444, &uLocal_452, 0, 0, 1) || iVar522 == 1) || (func_36(iVar444, 2048) && iVar324 == 0))
				{
					if ((((iVar442 != 8 && iVar442 != 256) && iVar442 != 4) && iVar442 != 8192) && iVar522 == 0)
					{
						_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 1, -1082130432, -1, 0);
						set_ped_keep_task(&(uLocal_433[0]), true);
						iLocal_440 = 10;
						if (iVar324 == 0)
						{
							if (!func_36(iVar445, 8388608))
							{
								func_170(0);
								func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								func_44(&uLocal_447, 8388608);
							}
						}
					}
					else if (((iVar442 == 4 || iVar442 == 256) || (iVar522 == 1 && !is_scripted_speech_playing(Global_35))) || (func_36(iVar444, 2048) && iVar324 == 0))
					{
						if (iVar522 == 1)
						{
						}
						else
						{
							iLocal_524 = 1;
						}
						if ((has_anim_event_fired(&(uLocal_433[0]), -1950704028) && !func_36(iVar444, 2048)) || has_anim_event_fired(&(uLocal_433[0]), -1738742925))
						{
							if (func_49(iVar325, "PBL_COWER_REACT_02"))
							{
								func_50(iVar325, "PBL_COWER_REACT_02", "cower_bool", 20, "STATE_COWER_CON - AGGRO");
								func_47(&uLocal_472);
								func_45(Local_569[0], 0, 0);
								func_45(Local_569[1], 0, 0);
								iLocal_440 = 9;
								return false;
							}
						}
					}
					else if (iVar442 == 8)
					{
						func_47(&uLocal_472);
					}
				}
				if (!func_36(iVar444, 2048))
				{
					if (((func_164(&uLocal_472) > fVar456 && !_0xb7dbb2986b87e230(&(uLocal_433[0]), uVar457)) && !func_32(get_player_index(), 1, 0, 1)) && func_49(iVar325, "PBL_COWER_TO_BASE"))
					{
						func_44(&uLocal_446, 2048);
						func_50(iVar325, "PBL_COWER_TO_BASE", "cower_bool", 19, "STATE_COWER_CON");
						iLocal_440 = 3;
						func_162(&(Local_132.f_5), &iLocal_444);
						func_143(&uLocal_472);
						func_51(&uLocal_478, 0);
						Local_132.f_46 = 0;
						func_171(&Local_569, 0, 0);
					}
				}
				if (iVar3 == 1)
				{
					func_51(&uLocal_508, 0);
					iLocal_537 = 1;
					_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 1, -1082130432, -1, 0);
					set_ped_keep_task(&(uLocal_433[0]), true);
					iLocal_440 = 10;
				}
			}
			break;
		case 7:
			fLocal_458 = 10f;
			fLocal_459 = 9f;
			if (iVar521 == 1)
			{
				fLocal_458 = 6f;
				fLocal_459 = 6f;
			}
			if (iVar522 == 1)
			{
				fLocal_458 = 16f;
				fLocal_459 = 16f;
			}
			if (func_40(&(uLocal_433[0]), 0, 1))
			{
				if (((_0x09d7afd3716da8e1(&(uLocal_433[0]), 250) && has_anim_event_fired(&(uLocal_433[0]), -1950704028)) && _0x8d81e7824b7753f7(iVar325, "Cower", 1)) && func_164(&uLocal_472) > 0.25f)
				{
					func_170(0);
					switch (iVar448)
					{
						case 0:
							if (func_49(iVar325, "PBL_COWER_FLINCH_01"))
							{
								func_50(iVar325, "PBL_COWER_FLINCH_01", "cower_bool", 20, "STATE_COWER_REAL - CASE 0");
								func_43(&(uLocal_433[0]), Global_35, func_42("COWER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_450 = 1;
								func_47(&uLocal_472);
							}
							break;
						case 1:
							if (func_49(iVar325, "PBL_COWER_DIA_06"))
							{
								if (!func_36(iVar445, 16777216))
								{
									func_50(iVar325, "PBL_COWER_DIA_06", "cower_bool", 20, "STATE_COWER_REAL - CASE 1");
									func_47(&uLocal_472);
								}
								else
								{
									func_43(&(uLocal_433[0]), Global_35, func_42("COWER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_450 = 2;
							}
							break;
						case 2:
							if (func_49(iVar325, "PBL_COWER_FLINCH_02"))
							{
								func_50(iVar325, "PBL_COWER_FLINCH_02", "cower_bool", 20, "STATE_COWER_REAL - CASE 2");
								func_43(&(uLocal_433[0]), Global_35, func_42("COWER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								iLocal_450 = 3;
								func_47(&uLocal_472);
							}
							break;
						case 3:
							if (func_49(iVar325, "PBL_COWER_DIA_07"))
							{
								if (!func_36(iVar445, 33554432))
								{
									func_50(iVar325, "PBL_COWER_DIA_07", "cower_bool", 20, "STATE_COWER_REAL - CASE 3");
									func_47(&uLocal_472);
								}
								else
								{
									func_43(&(uLocal_433[0]), Global_35, func_42("COWER"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								}
								iLocal_450 = 0;
							}
							break;
					}
				}
				if (!func_36(iVar444, 2048))
				{
					if (((func_164(&uLocal_472) > fVar456 && !_0xb7dbb2986b87e230(&(uLocal_433[0]), uVar457)) && func_49(iVar325, "PBL_COWER_TO_BASE")) && Global_1935630->f_24 == 0)
					{
						func_44(&uLocal_446, 2048);
						func_50(iVar325, "PBL_COWER_TO_BASE", "cower_bool", 19, 0);
						iLocal_440 = 3;
						func_51(&uLocal_478, 0);
						func_171(&Local_569, 0, 0);
					}
				}
				if (is_ped_ragdoll(&(uLocal_433[0])))
				{
					task_cower(&(uLocal_433[0]), -1, 0, 0);
					set_ped_keep_task(&(uLocal_433[0]), true);
					iLocal_441 = 3;
					func_171(&Local_569, 0, 0);
					func_113(Local_547[0], 0);
					if (!func_36(iVar445, 8388608))
					{
						func_170(0);
						func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_44(&uLocal_447, 8388608);
					}
				}
			}
			break;
		case 8:
			if (Local_132.f_44 == 0)
			{
				func_73(81, 1, 0, 0, 6, 0, 0, 1);
			}
			Local_132.f_44 = 1;
			iLocal_528 = 1;
			if (func_40(&(uLocal_433[0]), 0, 1))
			{
				if (is_ped_ragdoll(&(uLocal_433[0])))
				{
					_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 1, -1082130432, -1, 0);
					set_ped_keep_task(&(uLocal_433[0]), true);
					func_51(&uLocal_508, 0);
					iLocal_537 = 1;
					iLocal_440 = 10;
				}
				if (!func_46(&uLocal_472))
				{
					func_51(&uLocal_472, 0);
				}
				if (func_164(&uLocal_472) > 0.25f && (has_anim_event_fired(&(uLocal_433[0]), -1738742925) || has_anim_event_fired(&(uLocal_433[0]), -1950704028)))
				{
					if (func_49(iVar325, "PBL_COWER_REACT_02"))
					{
						func_50(iVar325, "PBL_COWER_REACT_02", "cower_bool", 19, "STATE_CONFESS");
						func_45(Local_569[0], 0, 0);
						func_45(Local_569[1], 0, 0);
						iLocal_440 = 9;
						func_47(&uLocal_472);
					}
				}
			}
			break;
		case 9:
			if (Local_132.f_44 == 0)
			{
				func_73(81, 1, 0, 0, 6, 0, 0, 1);
			}
			Local_132.f_44 = 1;
			func_38(uLocal_435[0]);
			if (!func_36(iVar444, 32768))
			{
				if (has_anim_event_fired(&(uLocal_433[0]), -759498749))
				{
					if (func_34(&uLocal_433, &(Local_132.f_5), &iLocal_444, &uLocal_452, 0, 0, 1))
					{
						if (iVar442 != 8)
						{
							_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 1, -1082130432, -1, 0);
							if (iVar324 == 0)
							{
								if (!func_36(iVar445, 8388608))
								{
									func_170(0);
									func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									func_44(&uLocal_447, 8388608);
								}
							}
							set_ped_keep_task(&(uLocal_433[0]), true);
							iLocal_440 = 10;
							return false;
						}
					}
				}
			}
			if (iVar517 == 0)
			{
				if (func_36(iVar444, 32768))
				{
					if (func_34(&uLocal_433, &(Local_132.f_5), &iLocal_444, &uLocal_452, 0, 0, 1))
					{
						if (iVar442 == 8)
						{
							func_47(&uLocal_472);
							iLocal_444 = 0;
						}
						else
						{
							_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 1, -1082130432, -1, 0);
							if (iVar324 == 0)
							{
								if (!func_36(iVar445, 8388608))
								{
									func_170(0);
									func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									func_44(&uLocal_447, 8388608);
								}
							}
							set_ped_keep_task(&(uLocal_433[0]), true);
							iLocal_440 = 10;
						}
					}
					if (func_164(&uLocal_472) > 4f || func_164(&uLocal_472) > 20f)
					{
						_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 2, 385, -1082130432, -1, 0);
						set_ped_keep_task(&(uLocal_433[0]), true);
						func_170(0);
						func_43(&(uLocal_433[0]), Global_35, func_42("LEAVING"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_440 = 10;
					}
				}
			}
			if (func_40(&(uLocal_433[0]), 0, 1))
			{
				fVar4 = _get_anim_scene_progress(iVar325);
				if (has_anim_event_fired(&(uLocal_433[0]), 527513388) || fVar4 >= 0.9667f)
				{
				}
				if (((_is_anim_scene_active(iVar325) || _get_anim_scene_progress(iVar325) >= 0.99f) || fVar4 >= 0.9667f) || has_anim_event_fired(&(uLocal_433[0]), 527513388))
				{
					if (iVar517 == 0)
					{
						task_react(&(uLocal_433[0]), Global_35, 0f, 0f, 0f, "DEFAULT_DEFUSE", 60000f, 10f, 4);
						set_ped_keep_task(&(uLocal_433[0]), true);
						func_162(&(Local_132.f_5), &iLocal_444);
						func_44(&uLocal_446, 32768);
						iLocal_528 = 1;
						func_47(&uLocal_472);
						func_51(&uLocal_475, 0);
					}
					else
					{
						_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 2, 385, -1082130432, -1, 0);
						set_ped_keep_task(&(uLocal_433[0]), true);
						func_170(0);
						func_43(&(uLocal_433[0]), Global_35, func_42("LEAVING"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						iLocal_440 = 10;
						func_44(&uLocal_446, 32768);
						iLocal_528 = 1;
						remove_anim_scene_entity(iVar325, "hat", Local_56[0]->f_8);
						activate_physics(Local_56[0]->f_8);
						force_entity_ai_and_animation_update(Local_56[0]->f_8, true);
						if (does_entity_exist(Local_56[1]->f_8))
						{
							remove_anim_scene_entity(iVar325, "COIN01", Local_56[1]->f_8);
							activate_physics(Local_56[1]->f_8);
							set_entity_no_collision_entity(Local_56[1]->f_8, Local_56[0]->f_8, true);
						}
						if (does_entity_exist(Local_56[2]->f_8))
						{
							remove_anim_scene_entity(iVar325, "COIN02", Local_56[2]->f_8);
							activate_physics(Local_56[2]->f_8);
							set_entity_no_collision_entity(Local_56[2]->f_8, Local_56[0]->f_8, true);
						}
						func_37(0);
						iLocal_441 = 0;
					}
				}
			}
			break;
		case 10:
			func_172();
			func_173();
			func_174();
			if (iVar454 > 0)
			{
				if (does_entity_exist(Local_56[0]->f_8))
				{
					apply_force_to_entity(Local_56[0]->f_8, 1, 0f, 0f, 0.1f, 0.25f, 0f, 0f, 1, true, true, true, false, true);
					iLocal_456 = (iVar454 - 1);
				}
			}
			func_33(&uLocal_545);
			if (func_40(&(uLocal_433[0]), 0, 1))
			{
				if (!func_36(iVar444, 262144))
				{
					if ((!_0x3ab6c7b0bb0df4b1(&(uLocal_433[0]), iVar325) || has_anim_event_fired(&(uLocal_433[0]), 527513388)) || has_anim_event_fired(&(uLocal_433[0]), 2118412884))
					{
						func_38(uLocal_435[0]);
						if (does_entity_exist(Local_56[0]->f_8))
						{
							remove_anim_scene_entity(iVar325, "hat", Local_56[0]->f_8);
							activate_physics(Local_56[0]->f_8);
							force_entity_ai_and_animation_update(Local_56[0]->f_8, true);
							apply_force_to_entity(Local_56[0]->f_8, 1, 0f, 0f, 0.1f, 0.5f, 0f, 0f, 1, true, true, true, false, true);
							iLocal_456 = 3;
						}
						if (Local_132.f_46 == 0 && !func_36(iVar446, 32768))
						{
							_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 1, 385, -1082130432, -1, 0);
						}
						else if (Local_132.f_46 == 1 && !func_175(&(uLocal_433[0]), 1435919172))
						{
							_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 385, -1082130432, -1, 0);
							if (iVar324 == 0)
							{
								if (!func_36(iVar445, 8388608))
								{
									func_170(0);
									func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									func_44(&uLocal_447, 8388608);
								}
							}
						}
						set_ped_keep_task(&(uLocal_433[0]), true);
						func_44(&uLocal_446, 262144);
						func_51(&uLocal_511, 0);
						if (_0xde0ea444735c1368(iVar539))
						{
							_0x2c87c3e1c7b96ee2(iVar539);
							func_66(iVar540);
						}
						func_66(iVar541);
					}
				}
				else if (((((func_164(&uLocal_511) > fVar460 && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_433[0]))) && has_entity_clear_los_to_entity(&(uLocal_433[0]), Global_35, 17)) && !_is_ped_lassoed(&(uLocal_433[0]))) && !_is_ped_hogtied(&(uLocal_433[0])))
				{
					switch (iVar453)
					{
						case 0:
							if (func_147(Global_35, &(uLocal_433[0]), 1, 1) < 10f)
							{
								if (((((((func_36(iVar446, 4) || func_36(iVar446, 16)) || func_36(iVar446, 1048576)) || func_36(iVar446, 4096)) || func_36(iVar446, 8)) || func_36(iVar446, 32)) || func_36(iVar446, 2097152)) || func_36(iVar446, 8192))
								{
									func_141(&uLocal_511, 5f);
								}
								else
								{
									func_43(&(uLocal_433[0]), Global_35, "PLAYER_FOLLOWING", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
									func_47(&uLocal_511);
								}
								_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 1, 384, -1082130432, -1, 0);
								set_ped_keep_task(&(uLocal_433[0]), true);
								func_162(&(Local_132.f_5), &iLocal_444);
								uLocal_455 = iVar453 + 1;
							}
							break;
						case 1:
							if (func_147(Global_35, &(uLocal_433[0]), 1, 1) < 15f)
							{
								func_43(&(uLocal_433[0]), Global_35, func_42("RUN_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 2, 384, -1082130432, -1, 0);
								set_ped_keep_task(&(uLocal_433[0]), true);
								func_47(&uLocal_511);
								fLocal_462 = 7f;
								uLocal_455 = iVar453 + 1;
							}
							break;
						case 2:
							if (func_147(Global_35, &(uLocal_433[0]), 1, 1) < 20f)
							{
								func_43(&(uLocal_433[0]), Global_35, func_42("RUN_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 3, 384, -1082130432, -1, 0);
								set_ped_keep_task(&(uLocal_433[0]), true);
								func_47(&uLocal_511);
								fLocal_462 = 8f;
								uLocal_455 = iVar453 + 1;
							}
							break;
						case 3:
							if (func_147(Global_35, &(uLocal_433[0]), 1, 1) < 20f)
							{
								func_43(&(uLocal_433[0]), Global_35, func_42("RUN_C"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
								_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 4, 384, -1082130432, -1, 0);
								set_ped_keep_task(&(uLocal_433[0]), true);
								func_47(&uLocal_511);
								uLocal_455 = iVar453 + 1;
							}
							break;
					}
				}
			}
			break;
	}
	return false;
}

bool func_54(var uParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, int iParam10, int iParam11, int iParam12)
{
	fVar0 = 0f;
	if (uParam0->f_1 >= 4)
	{
		if (bParam6)
		{
			if (func_176())
			{
				return true;
			}
		}
		if (bParam7)
		{
			if (Global_16)
			{
				return true;
			}
		}
		if (!uParam0->f_48)
		{
			if (is_player_riding_train(player_id()))
			{
				return true;
			}
		}
	}
	if (bParam2 || bParam4)
	{
		if (uParam0->f_188 == 0)
		{
			if (bParam5)
			{
				fVar0 = 300f;
				if (!bParam8 && uParam0->f_48)
				{
					fVar0 = (fVar0 - 65f);
				}
			}
			else if (func_177(uParam0->f_3))
			{
				fVar0 = 250f;
			}
			else if (func_91(uParam0->f_3, 131072))
			{
				fVar0 = 70f;
				fVar0 = (fVar0 + 10f);
			}
			else if (func_91(uParam0->f_3, 1) && iParam12 == 0)
			{
				fVar0 = 215f;
				fVar0 = (fVar0 + 20f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 80f);
				}
			}
			else if (func_91(uParam0->f_3, 2) || iParam12 == 1)
			{
				fVar0 = 125f;
				fVar0 = (fVar0 + 10f);
				if (uParam0->f_48)
				{
					fVar0 = (fVar0 - 50f);
				}
			}
			uParam0->f_189 = fVar0;
		}
		else
		{
			fVar0 = uParam0->f_189;
		}
		fVar0 = (fVar0 * fVar0);
		if (bParam2)
		{
			if (uParam0->f_188 < *uParam1)
			{
				if (does_entity_exist(uParam1[uParam0->f_188]))
				{
					if (Global_1935630->f_40 != uParam1[uParam0->f_188])
					{
						if ((bParam3 && !is_entity_dead(uParam1[uParam0->f_188])) || !bParam3)
						{
							if ((&uParam0->f_98[uParam0->f_188] * &uParam0->f_98[uParam0->f_188]) <= fVar0)
							{
								uParam0->f_187 = 0;
							}
						}
					}
				}
				uParam0->f_188++;
			}
			else
			{
				uParam0->f_188 = 0;
				if (uParam0->f_187)
				{
					return true;
				}
				else
				{
					uParam0->f_187 = 1;
				}
			}
		}
		if (bParam4)
		{
			if (fParam9 == 0f)
			{
				if (func_178(Global_36, uParam0->f_51) > fVar0)
				{
					return true;
				}
			}
			else
			{
				vVar1 = { fParam9, iParam10, iParam11 };
				if (func_178(Global_36, vVar1) > fVar0)
				{
					return true;
				}
			}
		}
	}
	if (bParam3)
	{
		if (uParam0->f_191 < *uParam1)
		{
			if (!is_entity_dead(uParam1[uParam0->f_191]))
			{
				uParam0->f_190 = 0;
			}
			uParam0->f_191++;
		}
		else if (uParam0->f_190)
		{
			return true;
		}
		else
		{
			uParam0->f_191 = 0;
			uParam0->f_190 = 1;
		}
	}
	return false;
}

int func_55(int iParam0)
{
	return &(Global_17504.f_42[iParam0]);
}

var func_56(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_179(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_180(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_179(sVar0, iParam1, 0, 0, 1, 1);
}

void func_57(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_115(&(uParam0->f_1), 2048);
	}
	else
	{
		func_116(&(uParam0->f_1), 2048);
	}
}

void func_58(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_115(&(uParam0->f_1), 256);
	}
	else
	{
		func_116(&(uParam0->f_1), 256);
	}
}

void func_59(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(iParam0, 256);
	}
	else
	{
		func_115(iParam0, 256);
	}
}

void func_60(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_116(iParam0, 268435456);
	}
	else
	{
		func_115(iParam0, 268435456);
	}
	if (!bParam2)
	{
		func_116(iParam0, 1073741824);
	}
	else
	{
		func_115(iParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_116(iParam0, 536870912);
	}
	else
	{
		func_115(iParam0, 536870912);
	}
}

void func_61(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_62(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_138((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_139(&((*uParam0)[iVar0]->f_6), 1, 1);
					if (bParam2)
					{
						(*uParam0)[iVar0]->f_7 = 0;
						(*uParam0)[iVar0] = 0;
						(*uParam0)[iVar0]->f_5 = "";
						(*uParam0)[iVar0]->f_14 = 0;
						(*uParam0)[iVar0]->f_13 = "";
						(*uParam0)[iVar0]->f_15 = 0;
						(*uParam0)[iVar0]->f_11 = "";
						(*uParam0)[iVar0]->f_12 = "";
					}
				}
				iVar0++;
			}
		}
	}
}

void func_63(int iParam0)
{
	if (*iParam0 != 0)
	{
		remove_shocking_event(*iParam0);
		*iParam0 = 0;
	}
}

void func_64()
{
	if (iVar512 == 0)
	{
		if (does_entity_exist(Local_56[1]->f_8))
		{
			if (_0x5affa9ddc87846f8(Local_56[1]->f_7))
			{
				_0x78b4567e18b54480(Local_56[1]->f_8);
				start_particle_fx_looped_on_entity("scr_gen_shiny_bling", Local_56[1]->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
			}
		}
		if (does_entity_exist(Local_56[2]->f_8))
		{
			if (_0x5affa9ddc87846f8(Local_56[2]->f_7))
			{
				_0x78b4567e18b54480(Local_56[2]->f_8);
				start_particle_fx_looped_on_entity("scr_gen_shiny_bling", Local_56[1]->f_8, 0f, 0f, 0f, 0f, 0f, 0f, 1f, true, false, false);
			}
		}
		iLocal_514 = 1;
	}
}

void func_65(var uParam0, var uParam1)
{
	if (_does_volume_exist(*uParam0))
	{
		_0x74c2b3dc0b294102(*uParam0);
		_0xa1cfb35069d23c23(*uParam0);
		_delete_volume(*uParam0);
	}
	if (_0x91a5f9cbebb9d936(*uParam1))
	{
		remove_scenario_blocking_area(*uParam1, false);
	}
}

void func_66(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_67(int iParam0, int iParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7)
{
	fVar0 = func_156(iParam0, Global_36, 1);
	switch (iParam1)
	{
		case 1:
			fParam2 = 100f;
			fParam3 = 200f;
			iParam4 = 3000;
			iParam5 = 1000;
			iParam6 = 4000;
			break;
		case 2:
			fParam2 = 60f;
			fParam3 = 120f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1000;
			break;
		case 0:
			fParam2 = 75f;
			fParam3 = 140f;
			iParam4 = 1000;
			iParam5 = 1;
			iParam6 = 1500;
			break;
		case 3:
			if (fParam2 < 0f)
			{
			}
			if (fParam3 < 0f)
			{
			}
			if (iParam4 < 0)
			{
			}
			if (iParam5 < 0)
			{
			}
			break;
	}
	if (fParam2 >= fParam3)
	{
	}
	_0x39a2fc5af55a52b1(iParam0, iParam6);
	if (fParam7 > 0f)
	{
		_0x7c08e7cb8d951b70(iParam0, fParam7);
	}
	_0x36e4b61dc56de77c(iParam0, fParam2, fParam3, iParam4, iParam5);
}

void func_68(var uParam0)
{
	if (uParam0->f_48 && !uParam0->f_45)
	{
		func_181(32);
		func_73(uParam0->f_3, 1, 0, 0, 2, 0, 0, 1);
	}
}

void func_69(int iParam0, bool bParam1, bool bParam2)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			disable_ped_pain_audio(iParam0, true);
		}
		if (bParam2)
		{
			set_ped_config_flag(iParam0, 243, true);
		}
		if (Global_35 == iParam0)
		{
		}
		_set_entity_health(iParam0, 0, 0);
	}
}

void func_70(var uParam0, int iParam1)
{
	_set_ped_body_component(*uParam0, iParam1);
	_update_ped_variation(*uParam0, false, true, true, true, false);
}

int func_71(int iParam0, int iParam1)
{
	iVar0 = func_182(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return Global_17504.f_1003[iVar0]->f_1;
	}
	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_183(iParam0, iParam1);
	Global_17504.f_1003[iVar0]->f_1 = iParam2;
}

void func_73(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_184(iParam0) == 1 && bParam7)
	{
		return;
	}
	if (bParam6)
	{
		if (Global_17504.f_42[iParam0]->f_4 > iVar0)
		{
			return;
		}
	}
	if ((bParam1 || bParam6) || func_185() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

void func_74(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (does_entity_exist((*uParam0)[iVar0]->f_8))
		{
			set_object_as_no_longer_needed(&((*uParam0)[iVar0]->f_8));
		}
		iVar0++;
	}
}

int func_75(var uParam0)
{
	return uParam0->f_51.f_4;
}

void func_76(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (are_strings_equal(_0xf81c53561d15f330(), func_186(uParam0->f_3)))
	{
		_0x1096603b519c905f("");
	}
	if (uParam0->f_48)
	{
		stop_audio_scene("RE_active_location_scene");
		if (!uParam0->f_45 && !uParam0->f_44)
		{
			func_187(uParam0->f_3, 524288);
		}
	}
	if (func_40(player_ped_id(), 0, 1))
	{
		iVar1 = get_mount(Global_35);
		set_ped_config_flag(Global_35, 43, false);
		iVar2 = uParam0->f_98;
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			bVar3 = (bParam8 && decor_exist_on(uParam1[iVar0], "pedRoam_bInPedRoam"));
			if (func_40(uParam1[iVar0], 0, 0))
			{
				func_188(uParam1[iVar0], bVar3);
				if (func_189(uParam0, (*uParam1)[iVar0]))
				{
					func_190((*uParam1)[iVar0]);
				}
			}
			if (!uParam0->f_50)
			{
				if (func_40(uParam1[iVar0], 0, 1))
				{
					if (bParam9)
					{
						if (get_ped_stealth_movement(uParam1[iVar0]))
						{
							set_ped_stealth_movement(uParam1[iVar0], 0, 0, 0);
						}
						else if (_get_ped_crouch_movement(uParam1[iVar0]))
						{
							_set_ped_crouch_movement(uParam1[iVar0], false, 0, false);
						}
					}
					if (!bVar3)
					{
						if (!bParam6)
						{
							func_192(uParam1[iVar0], 1073741824, func_191(iVar0 < iVar2, &(uParam0->f_98[iVar0]), -1f), iVar1, 0);
						}
						else
						{
							task_wander_standard(uParam1[iVar0], 40000f, 0);
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bParam7)
	{
		func_193(uParam0);
	}
	func_194(uParam0);
	if (!uParam0->f_186)
	{
		func_117(uParam0, iParam3);
	}
	if (uParam0->f_186)
	{
		iVar4 = func_195(uParam0->f_3, uParam0->f_185);
		_int_to_string(iVar4, "%u", &uVar5);
		iVar9 = 0;
		if (!uParam0->f_48)
		{
			iVar9 = 2;
		}
		else if (!uParam0->f_44)
		{
			iVar9 = 1;
		}
		func_196(7, iVar4, iVar9);
		uParam0->f_186 = 0;
	}
}

void func_77(int iParam0)
{
	if (!func_197(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

bool func_78(bool bParam0)
{
	iVar0 = get_cause_of_most_recent_force_cleanup();
	if (bParam0)
	{
		return true;
	}
	if (func_198(iVar0))
	{
		return false;
	}
	if (func_199(iVar0, 1) || func_199(iVar0, 2))
	{
		return true;
	}
	return false;
}

bool func_79(var uParam0)
{
	iVar0 = func_200(uParam0->f_3);
	iVar1 = func_201(1);
	if (iVar1 > 0)
	{
		iVar0 = (iVar0 + iVar1);
	}
	_0xed9582b3da8f02b4(iVar0);
	if (_0x5c16855277819bbf() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_80()
{
	switch (func_3())
	{
		case 5:
			if (iVar324 == 0)
			{
				Local_99[0]->f_1 = 533342531;
				Local_99[0] = 4;
				Local_99[0]->f_3 = 257876299;
				StringCopy(&(Local_99[0]->f_23), "FAKE_BEGGAR", 64);
				func_202(&(Local_99[0]->f_22));
			}
			else if (iVar324 == 1)
			{
				Local_99[0]->f_1 = 533342531;
				Local_99[0] = 4;
				Local_99[0]->f_3 = -456291287;
				StringCopy(&(Local_99[0]->f_23), "BLIND_BEGGAR", 64);
				func_202(&(Local_99[0]->f_22));
			}
			break;
	}
}

void func_81()
{
	func_203(&Local_99);
}

void func_82()
{
	if (iVar324 == 0)
	{
		Local_47[0] = "script_re@dark_alley_bum@desp";
		Local_47[0]->f_1 = "breakout_bum";
		Local_47[1] = "script_re@disabled_beggar@con";
		Local_47[1]->f_1 = "BASE_BUM";
	}
	else if (iVar324 == 1)
	{
		Local_47[0] = "script_re@dark_alley_bum@drunk";
		Local_47[0]->f_1 = "breakout_bum";
		Local_47[1] = "script_re@disabled_beggar@real";
		Local_47[1]->f_1 = "BASE_BUM";
	}
	func_204(&(Local_47[1]), &uLocal_14);
}

void func_83()
{
	Local_56[0]->f_7 = 1141233817;
	Local_56[1]->f_7 = -615159064;
	Local_56[2]->f_7 = -615159064;
	request_ptfx_asset();
}

void func_84(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			request_model((*uParam0)[iVar0]->f_7, false);
		}
		iVar0++;
	}
}

bool func_85(var uParam0, var uParam1)
{
	return true;
}

bool func_86(int iParam0)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (!func_205((*iParam0)[iVar0]))
		{
			bVar1 = true;
		}
		iVar0++;
	}
	return !bVar1;
}

bool func_87(var uParam0)
{
	bVar0 = true;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (!is_string_null_or_empty((*uParam0)[iVar1]))
		{
			if (!has_anim_dict_loaded((*uParam0)[iVar1]))
			{
				bVar0 = false;
			}
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_88(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 != 0)
		{
			if (!has_model_loaded((*uParam0)[iVar0]->f_7))
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_89(int iParam0, var uParam1, bool bParam2, var uParam3, struct<7> Param4, var uParam11, bool bParam12, bool bParam13, int iParam14)
{
	if (Param4.f_6 > -1)
	{
		*uParam1 = { func_206(iParam0, Param4.f_6) };
		uParam1->f_4 = Param4.f_6;
		uParam1->f_5 = uParam1->f_4;
		func_207(iParam0, uParam1, bParam2, bParam12, 0);
		*uParam3 = 0;
		return true;
	}
	switch (uParam1->f_9)
	{
		case 0:
			if (func_120(iParam0, 128))
			{
				if (!func_208(iParam0, &(uParam1->f_10)))
				{
					*uParam11 = 1;
					return false;
				}
			}
			else
			{
				func_209(iParam0, &uVar1, &uVar2, &iVar0, 0);
				bVar4 = false;
				*uParam1 = { func_210(&bVar4, iParam0, uVar2, uVar1) };
				if (bVar4)
				{
					*uParam11 = 1;
					return false;
				}
				if (func_211(*uParam1))
				{
					return func_212(uParam1, uParam3, uParam11, bParam2, 12, 1000);
				}
				uParam1->f_4 = func_213(iParam0, *uParam1);
				uParam1->f_5 = uParam1->f_4;
				if (func_2(Param4.f_2, 8))
				{
					func_207(iParam0, uParam1, 0, bParam12, 0);
					*uParam3 = 0;
					return true;
				}
				func_214(uParam1);
			}
			*uParam3 = 0;
			uParam1->f_9 = 2;
			break;
		case 1:
			if (func_215(uParam1, uParam3, uParam11, bParam2, bParam13))
			{
				if (!bParam13 && func_216(vdist(Global_36, *uParam1), iParam0))
				{
					uParam1->f_9 = 2;
				}
				else
				{
					uParam1->f_9 = 5;
				}
			}
			break;
		case 2:
			if (func_120(iParam0, 128))
			{
				if (!func_217(uParam1, &bVar3))
				{
					if (bVar3)
					{
						return func_212(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					return false;
				}
			}
			else
			{
				func_209(iParam0, &uVar1, &uVar2, &iVar0, 0);
				if (vdist2(*uParam1, Global_36) < to_float(iVar0))
				{
					if (!func_214(uParam1))
					{
						return func_212(uParam1, uParam3, uParam11, bParam2, 12, 1000);
					}
					else
					{
						uParam1->f_9 = 3;
					}
				}
				else
				{
					uParam1->f_9 = 3;
				}
			}
			*uParam3 = 0;
			break;
		case 3:
			if (func_218(iParam0, Param4.f_1, uParam1, Param4, iParam14))
			{
				func_207(iParam0, uParam1, bParam2, bParam12, 0);
				*uParam3 = 0;
				return true;
			}
			else
			{
				*uParam3 = 0;
				uParam1->f_9 = 5;
				return func_212(uParam1, uParam3, uParam11, bParam2, 12, 1000);
			}
			break;
		case 5:
			if (uParam1->f_8 < 12)
			{
				uParam1->f_9 = 0;
			}
			break;
	}
	if (bParam2)
	{
		func_56("BEAT_SCAN", 2000, 0, 1, 0, 0, -1, -1, 0);
	}
	if (uParam1->f_8 >= 12)
	{
		if (bParam2)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_56("BEAT_FAIL", 4000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam11 = 1;
	}
	return false;
}

bool func_90(var uParam0, int iParam1)
{
	if (func_91(iParam1, 256))
	{
		if (_does_volume_exist(uParam0->f_172) || func_219(iParam1, func_75(uParam0), &(uParam0->f_172)))
		{
			if (func_40(Global_35, 0, 1))
			{
				return is_entity_in_volume(Global_35, uParam0->f_172, true, 0);
			}
		}
	}
	return true;
}

bool func_91(int iParam0, int iParam1)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

void func_92(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (uParam0->f_176)
	{
		return;
	}
	if (iParam1 != -1)
	{
		func_104(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, IntToFloat(iParam1), IntToFloat(iParam1), 5f, "Custom Sized Ambient Avoidance");
	}
	else if (func_91(uParam0->f_3, 1) && !func_91(uParam0->f_3, 32))
	{
		func_104(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 25f, 25f, 6f, "Ambient Avoidance Wilderness & No Traffic");
	}
	else if (func_91(uParam0->f_3, 2) && !func_91(uParam0->f_3, 32))
	{
		func_104(&(uParam0->f_171), uParam0->f_51, 0f, 0f, 0f, 4f, 4f, 5f, "Ambient Avoidance Town & No Traffic");
	}
	else
	{
		return;
	}
	_0xb56d41a694e42e86(uParam0->f_171, 2228255, 262144, 0, -1, -1, uParam0->f_175);
	_0x18262cafebb5fbe1(uParam0->f_171, 0, 0, 0, -1, -1, 0);
	if (bParam3)
	{
		func_220(uParam0->f_171, 1);
	}
	if (func_91(uParam0->f_3, 1))
	{
		func_104(&(uParam0->f_174), uParam0->f_51, 0f, 0f, 0f, _0x3e2a25b2416dd67e(uParam0->f_171) * Vector(3.5f, 3.5f, 3.5f), "Predator Stay Out");
		func_221(uParam0->f_174, 0, 262144, 0, 0);
	}
	if (iParam2 == 0)
	{
	}
	else if (does_entity_exist(iParam2))
	{
		_0x7c00cfc48a782dc0(uParam0->f_171, iParam2, 0f, 0f, 0f, 0f, 0f, 0f, 2, 1);
	}
}

float func_93(vector3 vParam0)
{
	vVar0 = { Global_36 - vParam0 };
	return get_heading_from_vector_2d(vVar0.x, vVar0.y);
}

Vector3 func_94(var uParam0)
{
	return uParam0->f_51;
}

var func_95(var uParam0)
{
	return uParam0->f_51.f_3;
}

bool func_96(vector3 vParam0, var uParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9)
{
	if (*iParam4 != *iParam5)
	{
		return false;
	}
	if (iParam7 < 0 || iParam7 >= *iParam4)
	{
		iParam7 = 0;
	}
	if (iParam8 < 0 || iParam8 >= *iParam4)
	{
		iParam8 = (*iParam4 - 1);
	}
	iVar0 = iParam7;
	while (iVar0 <= iParam8)
	{
		if (func_222() || !func_223((*iParam4)[iVar0], (*iParam5)[iVar0], vParam0, uParam3, iParam6, fParam9))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_97(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		decor_set_bool(iParam0, "scripted_loot_only", true);
		_0x8c03cd6b5e0e85e8(iParam0, -1143637011);
	}
}

int func_98(int iParam0)
{
	if (func_224())
	{
		return 0;
	}
	if (!func_225(3, &Var0))
	{
	}
	Var0.f_1 = 0;
	Var0.f_2 = -2017996124;
	Var0.f_3 = iParam0;
	Var0.f_4 = 0;
	if (_datafile_get_int(&uVar5, &Var0))
	{
	}
	return uVar5;
}

bool func_99(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_226(iParam0);
		return func_227(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_100()
{
	switch (Local_132.f_51.f_4)
	{
		case 0:
			vLocal_93 = { 2814.41f, -1222.949f, 47.527f };
			vLocal_96 = { 0f, 0f, 94.513f };
			break;
		case 1:
			vLocal_93 = { 2603.891f, -1286.316f, 52.258f };
			vLocal_96 = { 0f, 0f, -65f };
			break;
		case 2:
			vLocal_93 = { 2662.243f, -1192.9f, 53.284f };
			vLocal_96 = { 0f, 0f, -90f };
			break;
		case 3:
			vLocal_93 = { 2752.048f, -1205.806f, 49.335f };
			vLocal_96 = { 0f, 0f, -117f };
			break;
		case 4:
			vLocal_93 = { 2514.196f, -1126.779f, 49.972f };
			vLocal_96 = { 0f, 0f, -179.5f };
			break;
		case 5:
			vLocal_93 = { 2713.135f, -1232.871f, 50.163f };
			vLocal_96 = { 0f, 0f, 89.937f };
			break;
		case 6:
			vLocal_93 = { 2639.69f, -1418.491f, 46.37f };
			vLocal_96 = { 0f, 0f, -172.261f };
			break;
		case 7:
			vLocal_93 = { 2704.596f, -1185.193f, 51.848f };
			vLocal_96 = { 0f, 0f, -90f };
			break;
		case 8:
			vLocal_93 = { 2780.219f, -1277.374f, 47.401f };
			vLocal_96 = { 0f, 0f, 56.512f };
			break;
		case 9:
			vLocal_93 = { 2594.572f, -1207.724f, 53.303f };
			vLocal_96 = { 0f, 0f, -89.871f };
			break;
		case 10:
			vLocal_93 = { 2668.58f, -1113.233f, 50.545f };
			vLocal_96 = { 0f, 0f, 95f };
			break;
		case 11:
			vLocal_93 = { 2481.515f, -1467.387f, 46.201f };
			vLocal_96 = { 0f, 0f, -8.75f };
			break;
	}
}

void func_101(int iParam0, bool bParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (bParam1)
		{
			set_ped_config_flag(iParam0, 263, !bParam1);
		}
		set_ped_config_flag(iParam0, 138, bParam1);
		set_ped_config_flag(iParam0, 488, bParam1);
	}
}

void func_102(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || func_40(iParam0, 0, 0))
	{
		decor_set_bool(iParam0, "HAS_VOICE", true);
		set_ambient_voice_name(iParam0, sParam1);
	}
}

int func_103(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return 0;
	}
	if (func_228(iParam0, &(uParam1->f_121)))
	{
		uParam1->f_120++;
		return 1;
	}
	return 0;
}

void func_104(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_105(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_106(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, bool bParam10, int iParam11, int iParam12)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam10)
		{
			func_229(uParam0, vParam1, vParam4, vParam7);
		}
		else
		{
			func_230(uParam0, vParam1, vParam4, vParam7);
		}
	}
	if (_does_volume_exist(*uParam0))
	{
		_0x18262cafebb5fbe1(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
		_0xb56d41a694e42e86(*uParam0, iParam11, iParam12, 0, -1, -1, 0);
	}
}

void func_107(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, vector3 vParam8, bool bParam11, int iParam12, bool bParam13, int iParam14, char* sParam15)
{
	if (!_does_volume_exist(*uParam0))
	{
		if (bParam11)
		{
			if (is_string_null_or_empty(sParam15))
			{
				func_229(uParam0, vParam2, vParam5, vParam8);
			}
			else
			{
				func_105(uParam0, vParam2, vParam5, vParam8, sParam15);
			}
		}
		else if (is_string_null_or_empty(sParam15))
		{
			func_230(uParam0, vParam2, vParam5, vParam8);
		}
		else
		{
			func_231(uParam0, vParam2, vParam5, vParam8, sParam15);
		}
	}
	if (_does_volume_exist(*uParam0))
	{
		_0x18262cafebb5fbe1(*uParam0, iParam12, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(*uParam0, iParam12, 0, 0, -1, -1, iParam14);
		if (bParam13)
		{
			*uParam1 = _0x4c39c95ae5db1329(*uParam0, 0, 15);
		}
	}
}

void func_108(var uParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(uParam0, iVar0);
}

void func_109(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	iParam0->f_5 = sParam1;
	iParam0->f_7 = iParam3;
	iParam0->f_8 = iParam6;
	iParam0->f_13 = iParam2;
	iParam0->f_15 = iParam8;
	iParam0->f_11 = iParam4;
	iParam0->f_12 = iParam5;
	if (bParam7)
	{
		if (func_138(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_232(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_233(iParam0->f_6, iParam0->f_5, 0);
			}
			func_234(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_112(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

void func_110(int* iParam0, int iParam1)
{
	if (!func_135(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_136(iParam0, 14);
		}
	}
}

void func_111(int* iParam0, char* sParam1, char* sParam2)
{
	if (!is_string_null_or_empty(sParam1))
	{
		if (func_138(iParam0->f_6))
		{
			func_232(iParam0->f_6, sParam1, sParam2, 1);
		}
		iParam0->f_14 = sParam2;
		func_136(iParam0, 1);
		iParam0->f_5 = sParam1;
	}
}

void func_112(int* iParam0, char* sParam1)
{
	if (func_138(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_233(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_137(iParam0, 1);
}

void func_113(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_143(&(iParam0->f_18));
}

void func_114(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		set_bit(iParam0, 20);
		if (bParam2)
		{
			set_bit(iParam0, 21);
		}
		else
		{
			clear_bit(iParam0, 21);
		}
	}
	else
	{
		clear_bit(iParam0, 20);
		clear_bit(iParam0, 21);
	}
}

void func_115(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_116(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_117(var uParam0, int iParam1)
{
	vVar0 = { func_94(uParam0) };
	iVar3 = func_195(uParam0->f_3, iParam1);
	uParam0->f_185 = iParam1;
	_0xca41e86545413b5b(7, 1221649453, -585414509, iVar3, vVar0);
	if (_0x01f4d242765c6b24(iVar3))
	{
		uParam0->f_186 = 1;
	}
}

void func_118(var uParam0, var uParam1)
{
	if (uParam0->f_2 >= *uParam1)
	{
		if (uParam0->f_2 > uParam0->f_98)
		{
		}
		uParam0->f_2 = 0;
	}
	if (does_entity_exist(uParam1[uParam0->f_2]))
	{
		uParam0->f_98[uParam0->f_2] = get_distance_between_coords(get_entity_coords(uParam1[uParam0->f_2], false, false), Global_36, true);
	}
	else
	{
		uParam0->f_98[uParam0->f_2] = 0f;
	}
}

void func_119(var uParam0)
{
	func_58(uParam0, 1);
	func_235(uParam0, 20);
}

bool func_120(int iParam0, int iParam1)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	return ((*Global_1310750)[iParam0]->f_1 && iParam1) != 0;
}

void func_121(var uParam0, var uParam1, int iParam2, int* iParam3)
{
	if (!func_197(iParam2))
	{
		return;
	}
	if (*uParam1)
	{
		return;
	}
	if (func_236())
	{
		func_237(1);
	}
	func_238(iParam2, uParam0->f_43);
	func_239(iParam2, 0, 0, 0, 0);
	if (func_240(iParam2) != -1)
	{
		_set_weather_type_frozen(true);
	}
	start_audio_scene("RE_active_location_scene");
	_0x1096603b519c905f(func_186(uParam0->f_3));
	if (does_blip_exist(*iParam3))
	{
		remove_blip(iParam3);
	}
	func_241(uParam0, 1, 0);
	*uParam1 = 1;
}

void func_122(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0]->f_7 = 0f;
		(*uParam0)[iVar0]->f_8 = 0f;
		iVar0++;
	}
}

void func_123(var uParam0, int iParam1, float fParam2)
{
	bVar0 = false;
	if (uParam0->f_178 && func_242())
	{
		bVar0 = true;
	}
	if (!uParam0->f_48 && !func_120(uParam0->f_3, 262144))
	{
		if (uParam0->f_5 & 2048 != 0)
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
			return;
		}
		if (_does_volume_exist(uParam0->f_173))
		{
			if (!func_243(Global_35, uParam0->f_173, 1, 0))
			{
				return;
			}
		}
		fVar1 = func_244(uParam0, bVar0);
		func_245(uParam0->f_121[iParam1], fVar1, 1082130432, 0, 90f, 0, &(uParam0->f_98[iParam1]));
		if (func_246(&(uParam0->f_121), uParam0->f_120, fParam2))
		{
			func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
			func_122(&(uParam0->f_121));
		}
	}
}

bool func_124(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	fVar0 = 30f;
	fVar1 = 150f;
	if (func_91(uParam2->f_3, 1))
	{
		fVar1 = 150f;
	}
	else
	{
		fVar1 = 70f;
	}
	if (!*uParam1)
	{
		if (iParam0 >= 75 && iParam0 <= 118)
		{
			if (func_247())
			{
				fVar0 = 15f;
			}
		}
		if (func_248(uParam2, fVar0))
		{
			*uParam1 = 1;
		}
	}
	if (!uParam2->f_48)
	{
		if (!bParam3 && func_32(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (!func_248(uParam2, fVar1))
		{
			if (!func_249((*Global_1310750)[uParam2->f_3]->f_38))
			{
				return false;
			}
		}
		if (!func_250(uParam2->f_3, 2) && func_251(2))
		{
			return false;
		}
		if (func_91(iParam0, 4194304) || func_91(iParam0, 33554432))
		{
			if (func_252(1))
			{
				return false;
			}
		}
	}
	if (func_253(Global_35))
	{
		return false;
	}
	if (func_254(0, 1, 1) && !func_255(iParam0))
	{
		return false;
	}
	if (!*uParam1 && func_91(iParam0, 128))
	{
		if (is_player_riding_train(player_id()))
		{
			return false;
		}
		if (func_256(Global_35, 0))
		{
			return false;
		}
		if (Global_16)
		{
			return false;
		}
		if (func_32(player_id(), 1, 0, 1))
		{
			return false;
		}
		if (func_257())
		{
			return false;
		}
		iVar2 = func_258(func_3());
		if (func_259(iVar2))
		{
			if (func_260(Global_36, iVar2))
			{
				return false;
			}
		}
		if (func_261(Global_36) && !uParam2->f_161)
		{
			return false;
		}
		if (!uParam2->f_48)
		{
			if (func_262(&(uParam2->f_91), 0, 1084227584, 1, 1))
			{
				return false;
			}
		}
	}
	return true;
}

void func_125(var uParam0, int iParam1)
{
	if (func_263(uParam0->f_51))
	{
		func_264(uParam0->f_51, 0);
		fVar0 = func_265(uParam0->f_3);
		iVar2 = _create_volume_cylinder_with_custom_name(uParam0->f_51, 0f, 0f, 0f, fVar0, fVar0, fVar0, func_266());
		bVar1 = func_191(!func_91(uParam0->f_3, 1), 20f, -1f);
		uParam0->f_51.f_11 = func_268(iVar2, func_267(uParam0->f_3), 1, iParam1, 8, 0, bVar1);
	}
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1935630->f_18)
	{
		if ((bParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (bParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (bParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_128(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > iParam2->f_5)
	{
		func_269(iParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			iParam2->f_12 = fParam5;
		}
		else
		{
			iParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!iParam2->f_1 & 128 != 0)
		{
			if (func_270(iParam0, iParam2))
			{
				*iParam3 = 128;
				func_271(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!iParam2->f_1 & 8 != 0)
			{
				if (func_272(iParam0, iParam2))
				{
					*iParam3 = 8;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
				else if (func_273(iParam0, iParam1, iParam2))
				{
					*iParam3 = 8;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 32 != 0)
			{
				if (func_274(iParam0, iParam2))
				{
					*iParam3 = 64;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_32(player_id(), 0, 1, iParam2->f_1 & 524288 == 0))
		{
			if (!iParam2->f_1 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_271(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_275(iParam2, 1065353216))
			{
				if (!iParam2->f_1 & 4 != 0)
				{
					if (func_276(Global_35, iParam0, iParam2))
					{
						*iParam3 = 4;
						func_271(iParam0, iParam2, *iParam3);
						return true;
					}
				}
				if (!iParam2->f_1 & 256 != 0)
				{
					if (func_277(Global_35, iParam0, iParam2))
					{
						*iParam3 = 256;
						func_271(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 16 != 0)
		{
			if ((iParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_278(Global_35, iParam0, iParam2, 0))
				{
					*iParam3 = 16;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			else if (func_278(Global_35, iParam0, iParam2, 1))
			{
				*iParam3 = 16;
				func_271(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*iParam2 & 8 != 0)
			{
				if (func_279(iParam0, iParam2))
				{
					*iParam3 = 32;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (*iParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || iParam2->f_12 < 20f)
			{
				if (func_280(&iParam0, iParam2))
				{
					*iParam3 = 4096;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!iParam2->f_1 & 2 != 0)
			{
				if (func_281(iParam2, 4000))
				{
					if ((func_282(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 0, *iParam2 & 256 != 0) && func_283(iParam2, iParam0)) && func_284(iParam2, iParam0))
					{
						*iParam3 = 2;
						func_271(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!iParam2->f_1 & 2 != 0)
		{
			if (iParam2->f_12 < 4f)
			{
				if ((func_282(iParam0, Global_1935630->f_41, *iParam2 & 128 != 0, 1, *iParam2 & 256 != 0) && func_283(iParam2, iParam0)) && func_284(iParam2, iParam0))
				{
					*iParam3 = 2;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*iParam2 & 131072 == 0)
						{
							if (func_285(iParam0, Global_1935630->f_41))
							{
								func_286();
								*iParam3 = 2;
								func_271(iParam0, iParam2, *iParam3);
								return true;
							}
						}
					}
				}
			}
			else if (Global_1935630->f_40 == 0)
			{
				if (Global_1935630->f_41 != 0)
				{
					if (*iParam2 & 131072 == 0)
					{
						if (func_285(iParam0, Global_1935630->f_41))
						{
							func_286();
							*iParam3 = 2;
							func_271(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
			if (iParam2->f_12 < 10f)
			{
				if (func_287(iParam2, iParam0) || (iParam2->f_9 > 0 && (func_288() - iParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_286();
						*iParam3 = 2;
						func_271(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*iParam2 & 131072 == 0)
				{
					if (func_289())
					{
						if (func_285(iParam0, Global_1935630->f_42))
						{
							func_286();
							*iParam3 = 2;
							func_271(iParam0, iParam2, *iParam3);
							return true;
						}
					}
				}
			}
		}
		if (!iParam2->f_1 & 1024 != 0)
		{
			if (func_290(iParam2, iParam0))
			{
				*iParam3 = 1024;
				func_271(iParam0, iParam2, *iParam3);
				return true;
			}
		}
		if (iParam2->f_12 < iParam2->f_26)
		{
			if (!iParam2->f_1 & 2048 != 0)
			{
				if (func_291(iParam0, iParam1, iParam2))
				{
					*iParam3 = 2048;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
			}
			if (*iParam2 & 16 != 0)
			{
				if (iParam2->f_6 == 2)
				{
					if (func_292(iParam0, iParam2))
					{
						*iParam3 = 8192;
						func_271(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
			if (*iParam2 & 64 != 0)
			{
				if (func_293(iParam0, iParam2))
				{
					*iParam3 = 32768;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
		if (iParam2->f_12 < 12f)
		{
			if (*iParam2 & 1048576 != 0)
			{
				if (func_294(iParam2, 4000))
				{
					if (func_295(&iParam0, iParam2))
					{
						*iParam3 = 512;
						func_271(iParam0, iParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (iParam2->f_12 < iParam2->f_19)
		{
			if (*iParam2 & 1024 != 0)
			{
				if (func_296(iParam0, iParam2))
				{
					*iParam3 = 65536;
					iParam2->f_4 = 0;
					func_271(iParam0, iParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!iParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_297(iParam2, iParam0))
			{
				*iParam3 = 1;
				func_271(iParam0, iParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 2139774588:
			return 1;
		case 1142025875:
			return 2;
		case 1587891565:
			return 4;
		case 1877013492:
			return 32;
		case -643014279:
			return 64;
		case -597116214:
			return 128;
		case 551416228:
			return 256;
		case 1022576842:
			return 512;
		case 953325896:
			return 1024;
		case 508358508:
			return 2048;
		case -735200598:
			return 4096;
		case -856432278:
			return 8192;
		case -2010847721:
			return 16384;
		case 446961221:
			return 32768;
		case -1972216640:
			return 65536;
		case 530833824:
			return 131072;
		case 1682361219:
			return 262144;
		case 158959085:
			return 524288;
		case 1919819559:
			return 1048576;
		case 1461411082:
			return 2097152;
		case -549508280:
			return 4194304;
		default:
			break;
	}
	return 0;
}

bool func_130(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_36(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_36(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_36(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_36(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_131()
{
	return Global_1897952->f_41;
}

var func_132(char* sParam0, char* sParam1, char* sParam2, int iParam3)
{
	StringCopy(&cVar0, "RE_", 64);
	StringCopy(&cVar8, sParam1, 32);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, &cVar8, 64);
	if (iParam3 >= 0)
	{
		StringConCat(&cVar0, "_V", 64);
		StringIntConCat(&cVar0, iParam3, 64);
	}
	else
	{
		StringConCat(&cVar0, "_ALL", 64);
	}
	StringConCat(&cVar0, "_", 64);
	StringConCat(&cVar0, sParam2, 64);
	return func_298(cVar0);
}

int func_133(int iParam0, int iParam1, char* sParam2, int iParam3, float fParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13, bool bParam14, int iParam15)
{
	iParam5 = iParam5;
	iParam1 = iParam1;
	if (is_string_null_or_empty(sParam2))
	{
		return -1;
	}
	if (bParam6)
	{
		if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
		{
			if (!has_entity_clear_los_to_entity_in_front(iParam0, iParam1, 17))
			{
				return -1;
			}
		}
		else
		{
			return -1;
		}
	}
	if (fParam4 == -1f)
	{
		if (func_247())
		{
			fParam4 = 50f;
		}
		else
		{
			fParam4 = 75f;
		}
	}
	if (bParam9)
	{
		if (iParam0 != Global_35 && iParam1 != Global_35)
		{
			if (!is_entity_dead(iParam0))
			{
				if (func_299(iParam0, 1, 1) > fParam4)
				{
					return -1;
				}
			}
		}
	}
	bVar0 = (iParam0 == iParam1 || iParam1 == 0);
	if ((!is_entity_dead(iParam0) || iParam11 == 1718175949) || bParam9 == 0)
	{
		if (!bVar0)
		{
			fVar1 = func_147(iParam0, iParam1, 1, 1);
		}
		if (((bVar0 || bParam7) || fVar1 < fParam4) || bParam9 == 0)
		{
			func_47(&uLocal_0);
			if (!bVar0 && bParam10)
			{
				if (!is_entity_dead(iParam1))
				{
					task_look_at_entity(iParam0, iParam1, 7500, 0, 51, 0);
				}
				if (func_300(iParam0, iParam1, fVar1, bParam13))
				{
					task_look_at_entity(iParam1, iParam0, 7500, 48, 31, 0);
				}
			}
			if (bParam12)
			{
				Var3.f_5 = 1;
				Var3.f_6 = 1;
				Var3 = sParam2;
				Var3.f_3 = iParam11;
				Var3.f_4 = iParam1;
				Var3.f_5 = network_is_game_in_progress();
				Var3.f_6 = iParam15;
				Var3.f_2 = iParam5;
				if (bParam14)
				{
					set_bit(&(Var3.f_7), 3);
					set_bit(&(Var3.f_7), 2);
				}
				iVar2 = _0x72e4d1c4639bc465(iParam0, &Var3);
				if (iVar2 >= 0)
				{
					_0xb18fec133c7c6c69(iVar2);
				}
			}
			else
			{
				iVar2 = func_302(func_301(iParam0, sParam2, iParam11, iParam1, network_is_game_in_progress(), 0, iParam5, iParam15), 1, -1);
			}
			if (iVar2 >= 0)
			{
			}
			return iVar2;
		}
	}
	return -1;
}

void func_134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_135(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_136(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_137(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

bool func_138(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if ((*Global_1945938)[iParam0]->f_1 & 2 == 0)
	{
		return false;
	}
	return _uiprompt_is_valid((*Global_1945938)[iParam0]->f_3);
}

void func_139(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_138(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_303(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_304(iVar0);
	*uParam0 = 0;
}

bool func_140(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_141(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_305() - fParam1);
	func_306(uParam0, 1);
	func_307(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_142(var uParam0, float fParam1)
{
	if (!func_46(uParam0))
	{
		return false;
	}
	if (func_308(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_143(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_144()
{
	if (func_36(iVar444, 65536) && func_40(&(uLocal_433[0]), 0, 1))
	{
		if (has_anim_event_fired(&(uLocal_433[0]), 1935919182))
		{
			_0x2e1d6d87346bb7d2(&(uLocal_433[0]), Global_35, 0, 0);
		}
		if (has_anim_event_fired(&(uLocal_433[0]), 905328898))
		{
			func_44(&uLocal_447, 1);
			if (!func_36(iVar444, 2) && !func_36(iVar444, 4))
			{
				func_163(1891783641, &(uLocal_433[0]), 1);
			}
			if (!func_46(&uLocal_463))
			{
				func_51(&uLocal_463, 0);
			}
		}
		if (has_anim_event_fired(&(uLocal_433[0]), -608692325) || func_164(&uLocal_502) > 3f)
		{
			if (!func_36(iVar444, 2) && !func_36(iVar444, 4))
			{
				func_163(1891783641, &(uLocal_433[0]), 1);
			}
			func_143(&uLocal_502);
		}
		if (has_anim_event_fired(&(uLocal_433[0]), -596277762))
		{
			func_44(&uLocal_447, 2);
			if (!func_36(iVar444, 2) && !func_36(iVar444, 4))
			{
				func_163(1891783641, &(uLocal_433[0]), 1);
			}
		}
		if (has_anim_event_fired(&(uLocal_433[0]), 159145995))
		{
			func_44(&uLocal_447, 4);
			if (!func_36(iVar444, 2) && !func_36(iVar444, 4))
			{
				func_163(1891783641, &(uLocal_433[0]), 1);
			}
		}
		if (has_anim_event_fired(&(uLocal_433[0]), -1078014831))
		{
			func_44(&uLocal_447, 8);
			if (!func_36(iVar444, 2) && !func_36(iVar444, 4))
			{
				func_163(1891783641, &(uLocal_433[0]), 1);
			}
		}
		if (iVar324 == 0)
		{
			if (Local_132.f_48 == 1)
			{
				if (has_anim_event_fired(&(uLocal_433[0]), -102563446))
				{
					func_170(0);
					func_43(&(uLocal_433[0]), Global_35, func_42("DROP_COIN"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_44(&uLocal_447, 64);
					if (!func_36(iVar444, 2) && !func_36(iVar444, 4))
					{
						func_163(1891783641, &(uLocal_433[0]), 1);
					}
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 2036889600))
				{
					func_170(0);
					func_43(&(uLocal_433[0]), Global_35, func_42("HERE_WE_ARE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_44(&uLocal_447, 128);
					if (!func_36(iVar444, 2) && !func_36(iVar444, 4))
					{
						func_163(1891783641, &(uLocal_433[0]), 1);
					}
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 673864806))
				{
					if (!func_36(iVar444, 2) && !func_36(iVar444, 4))
					{
						func_163(1891783641, &(uLocal_433[0]), 1);
					}
					func_44(&uLocal_447, 256);
					if (!func_46(&uLocal_463))
					{
						func_51(&uLocal_463, 0);
					}
					iLocal_517 = 1;
				}
				if (has_anim_event_fired(&(uLocal_433[0]), -647642345))
				{
					func_44(&uLocal_447, 512);
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 1946402644))
				{
					func_44(&uLocal_447, 1024);
				}
				if (has_anim_event_fired(&(uLocal_433[0]), -140146567))
				{
					func_44(&uLocal_447, 2048);
					display_radar(true);
					display_hud(true);
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 332513497))
				{
					func_44(&uLocal_447, 4096);
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 629564482))
				{
					func_44(&uLocal_447, 8192);
				}
				if ((has_anim_event_fired(&(uLocal_433[0]), 350994814) && func_309(-7f, 1, 0, 0)) && !is_scripted_speech_playing(Global_35))
				{
				}
				if (has_anim_event_fired(&(uLocal_433[0]), -988448251))
				{
					func_44(&uLocal_447, 16384);
				}
				if (has_anim_event_fired(&(uLocal_433[0]), -689431130))
				{
					func_44(&uLocal_447, 32768);
					iLocal_335 = 5;
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 1622463622))
				{
					func_44(&uLocal_447, 65536);
					func_38(uLocal_435[0]);
				}
				if (has_anim_event_fired(&(uLocal_433[0]), -564989216))
				{
					delete_object(&(Local_56[0]->f_8));
				}
			}
			if (has_anim_event_fired(&(uLocal_433[0]), 730320293))
			{
				if (!func_36(iVar445, 131072))
				{
					func_44(&uLocal_447, 131072);
					func_43(&(uLocal_433[0]), Global_35, func_42("AIM_AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				}
			}
			if (has_anim_event_fired(&(uLocal_433[0]), -748895270))
			{
				func_44(&uLocal_446, 8388608);
			}
			if (has_anim_event_fired(&(uLocal_433[0]), -247854706))
			{
				func_170(0);
				func_43(&(uLocal_433[0]), Global_35, func_42("LEAVING"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			}
			if (has_anim_event_fired(&(uLocal_433[0]), -2141167981))
			{
				if (!func_36(iVar445, 8388608))
				{
					func_170(0);
					func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_44(&uLocal_447, 8388608);
				}
			}
		}
		else if (iVar324 == 1)
		{
			if (Local_132.f_48 == 1)
			{
				if (has_anim_event_fired(&(uLocal_433[0]), -2113988843))
				{
					func_44(&uLocal_447, 524288);
					if (!func_46(&uLocal_463))
					{
						func_51(&uLocal_463, 0);
					}
					iLocal_517 = 1;
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 2010860023))
				{
					func_170(0);
					func_43(&(uLocal_433[0]), Global_35, func_42("IGNORE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_44(&uLocal_447, 65536);
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 509384453))
				{
					func_44(&uLocal_447, 2097152);
				}
				if (has_anim_event_fired(&(uLocal_433[0]), 98839351))
				{
					func_44(&uLocal_447, 4194304);
				}
			}
			if (has_anim_event_fired(&(uLocal_433[0]), -859331566) && !func_36(iVar445, 8388608))
			{
				func_170(0);
				func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_44(&uLocal_447, 8388608);
			}
			if (has_anim_event_fired(&(uLocal_433[0]), 453034119))
			{
				func_170(0);
				func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_44(&uLocal_447, 16777216);
			}
			if (has_anim_event_fired(&(uLocal_433[0]), 294104465))
			{
				func_170(0);
				func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO_C"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_44(&uLocal_447, 33554432);
			}
		}
		if (Local_132.f_48 == 1)
		{
			if (has_anim_event_fired(Global_35, 620191857))
			{
				if (!func_36(iVar445, 268435456))
				{
					func_170(0);
					func_43(Global_35, &(uLocal_433[0]), func_42("PLY_GIVE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_44(&uLocal_447, 268435456);
				}
			}
		}
	}
}

void func_145()
{
	if (func_36(iVar444, 65536))
	{
		if (func_52(&uLocal_469, 0.5f))
		{
			set_anim_scene_bool(iVar325, "BASE_BOOL", false, false);
			set_anim_scene_bool(iVar325, "cower_bool", false, false);
		}
		fVar0 = 8f;
		if (iVar334 != 0)
		{
			fVar0 = 35f;
		}
		switch (iVar333)
		{
			case 0:
				func_310(16, iVar325, "PBL_DIA_01", "BASE_BOOL", 1, 0.5f, 30f);
				break;
			case 1:
				func_310(1, iVar325, "PBL_DIA_02", "BASE_BOOL", 2, 3f, 35f);
				break;
			case 2:
				func_310(2, iVar325, "PBL_DIA_03", "BASE_BOOL", 3, 3f, 35f);
				break;
			case 3:
				if (iVar334 != 0)
				{
					func_310(4, iVar325, "PBL_DIA_04", "BASE_BOOL", 4, 3f, 35f);
				}
				else
				{
					func_310(4, iVar325, "PBL_DIA_04", "BASE_BOOL", 5, 3f, 35f);
				}
				break;
			case 4:
				if (iVar324 == 0)
				{
					func_310(16, iVar325, "PBL_DIA_06", "BASE_BOOL", 10, 1f, fVar0);
				}
				else if (iVar324 == 1)
				{
					func_310(16, iVar325, "PBL_DIA_05", "BASE_BOOL", 10, 7f, fVar0);
				}
				break;
			case 10:
				if (iVar324 == 0)
				{
					func_310(256, iVar325, "PBL_DIA_07", "BASE_BOOL", 11, 4f, fVar0);
				}
				else if (iVar324 == 1)
				{
					func_310(524288, iVar325, "PBL_DIA_06", "BASE_BOOL", 11, 7f, fVar0);
					if ((!func_36(iVar445, 1073741824) && has_anim_event_fired(&(uLocal_433[0]), -1950704028)) && func_36(iVar445, 524288))
					{
						func_170(0);
						func_43(&(uLocal_433[0]), Global_35, "BUMP", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_44(&uLocal_447, 1073741824);
					}
				}
				break;
			case 11:
				if (iVar324 == 0)
				{
					func_310(512, iVar325, "PBL_DIA_08", "BASE_BOOL", 12, 7f, fVar0);
				}
				else if (iVar324 == 1)
				{
					func_310(1073741824, iVar325, "PBL_DIA_07", "BASE_BOOL", 12, 7f, fVar0);
					if (!func_36(iVar445, -2147483648))
					{
						func_170(0);
						func_43(&(uLocal_433[0]), Global_35, func_42("BEG_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_44(&uLocal_447, -2147483648);
					}
				}
				break;
			case 12:
				if (iVar324 == 0)
				{
					func_310(1024, iVar325, "PBL_DIA_05", "BASE_BOOL", 5, 7f, fVar0);
				}
				else if (iVar324 == 1)
				{
					func_310(-2147483648, iVar325, "PBL_DIA_08", "BASE_BOOL", 5, 7f, fVar0);
					if (!func_36(iVar445, 1048576))
					{
						func_170(0);
						func_43(&(uLocal_433[0]), Global_35, "GREET_GENERAL_STRANGER", 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_44(&uLocal_447, 1048576);
					}
				}
				break;
			case 5:
				func_310(67108864, iVar325, "PBL_BASE_VAR02", "BASE_BOOL", 6, 4f, fVar0);
				break;
			case 6:
				func_310(67108864, iVar325, "PBL_BASE_VAR01", "BASE_BOOL", 19, 3f, fVar0);
				break;
			case 7:
				func_50(iVar325, "PBL_BASE_TO_COWER", "BASE_BOOL", 19, "BEG_STATE_BASE_TO_COWER");
				break;
			case 8:
				func_50(iVar325, "PBL_COWER_TO_BASE", "cower_bool", 19, "BEG_STATE_COWER_TO_BASE");
				func_171(&Local_569, 0, 0);
				break;
			case 9:
				func_50(iVar325, "PBL_EXIT", "BASE_BOOL", 19, "BEG_STATE_EXIT");
				break;
			case 13:
				if (iVar324 == 0)
				{
					func_310(64, iVar325, "PBL_DIA_09", "BASE_BOOL", 5, 2f, 1090519040);
				}
				else if (iVar324 == 1)
				{
					if (func_36(iVar446, 1))
					{
						iLocal_335 = 5;
						func_51(&uLocal_469, 0);
						func_44(&uLocal_447, 65536);
					}
					else if (func_49(iVar325, "PBL_BASE_VAR02"))
					{
						_set_anim_scene_playback_list_bool(iVar325, "PBL_BASE_VAR02", true);
						set_anim_scene_bool(iVar325, "BASE_BOOL", true, false);
						iLocal_335 = 5;
						func_51(&uLocal_469, 0);
						func_170(0);
						func_43(&(uLocal_433[0]), Global_35, func_42("PASSER_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_44(&uLocal_447, 65536);
					}
				}
				break;
			case 14:
				if (iVar324 == 1)
				{
					func_50(iVar325, "PBL_COWER_REACT", "cower_bool", 19, "BEG_STATE_COWER_REACT");
				}
				else
				{
					func_50(iVar325, "PBL_COWER_REACT_02", "cower_bool", 19, "BEG_STATE_COWER_REACT");
				}
				break;
			case 15:
				func_50(iVar325, "PBL_COWER_DIA_06", "cower_bool", 19, "BEG_STATE_COWER_A");
				break;
			case 16:
				func_50(iVar325, "PBL_COWER_DIA_07", "cower_bool", 19, "BEG_STATE_COWER_B");
				break;
			case 17:
				func_50(iVar325, "PBL_COWER_FLINCH_01", "cower_bool", 19, "BEG_STATE_COWER_FLINCH_A");
				break;
			case 18:
				func_50(iVar325, "PBL_COWER_FLINCH_02", "cower_bool", 19, "BEG_STATE_COWER_FLINCH_B");
				break;
			case 19:
				break;
		}
	}
}

void func_146()
{
	if (func_52(&uLocal_505, 2f))
	{
		iLocal_533 = 1;
		iLocal_454 = 0;
		_0xffebe5aa96bc2e4e(&(uLocal_433[0]), 1352191066, 1);
	}
	if (iVar324 == 0)
	{
		if (iVar531 == 0)
		{
			if (has_entity_been_damaged_by_entity(&(uLocal_433[0]), Global_35, 1, 1) || is_ped_ragdoll(&(uLocal_433[0])))
			{
				func_39(&(uLocal_433[0]), 0);
				if (is_entity_dead(&(uLocal_433[0])))
				{
					if (iVar533 == 0)
					{
						func_311(3, 1142025875, 0, 0, &(uLocal_433[0]), 0, 1065353216, 0);
						iLocal_535 = 1;
					}
				}
				else if (iVar532 == 0)
				{
					func_311(2, 0, 0, 0, &(uLocal_433[0]), 0, 1065353216, 0);
					iLocal_534 = 1;
				}
			}
		}
	}
	if (iVar525 == 0 && Local_132.f_48 == 1)
	{
		if (has_entity_been_damaged_by_entity(&(uLocal_433[0]), Global_35, 1, 1) || is_ped_ragdoll(&(uLocal_433[0])))
		{
			if (is_ped_ragdoll(&(uLocal_433[0])))
			{
				remove_anim_scene_entity(iVar325, "Beggar", &(uLocal_433[0]));
				if (does_entity_exist(Local_56[1]->f_8))
				{
					remove_anim_scene_entity(iVar325, "COIN01", Local_56[1]->f_8);
					activate_physics(Local_56[1]->f_8);
				}
				if (does_entity_exist(Local_56[2]->f_8))
				{
					remove_anim_scene_entity(iVar325, "COIN02", Local_56[2]->f_8);
					activate_physics(Local_56[2]->f_8);
				}
			}
			iLocal_527 = 1;
			iLocal_441 = 3;
			func_62(&Local_569, 1, 1, 1, 0);
			func_312(Local_547[0], &Local_569);
			func_171(&Local_569, 0, 0);
			func_113(Local_547[0], 0);
			if (iVar324 == 0)
			{
				func_51(&uLocal_508, 0);
				iLocal_537 = 1;
			}
			else if (iVar324 == 1)
			{
				if (is_ped_ragdoll(&(uLocal_433[0])))
				{
					func_39(&(uLocal_433[0]), 0);
					if (get_ped_config_flag(&(uLocal_433[0]), 11, true))
					{
						func_311(2, 1587891565, 0, 0, &(uLocal_433[0]), 0, 1065353216, 0);
					}
					else
					{
						func_311(3, 1142025875, 0, 0, &(uLocal_433[0]), 0, 1065353216, 0);
					}
					func_69(&(uLocal_433[0]), 1, 0);
				}
				else if (!func_36(iVar445, 8388608))
				{
					func_39(&(uLocal_433[0]), 0);
					func_170(0);
					func_43(&(uLocal_433[0]), Global_35, func_42("AGGRO_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
					func_44(&uLocal_447, 8388608);
					func_311(3, 1142025875, 0, 0, &(uLocal_433[0]), 0, 1065353216, 0);
				}
			}
		}
	}
}

float func_147(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1) && bParam3)
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false), bParam2);
}

void func_148()
{
	if (Local_132.f_48 == 1)
	{
		if (iVar324 == 0)
		{
			if (func_40(&(uLocal_433[0]), 0, 1))
			{
				_0x66f9eb44342bb4c5(&(uLocal_433[0]), &Local_337);
			}
		}
	}
}

void func_149()
{
	if (Local_132.f_48 == 1)
	{
		if (((func_40(&(uLocal_433[0]), 0, 1) && func_147(Global_35, &(uLocal_433[0]), 1, 1) < 7f) && !has_entity_been_damaged_by_entity(&(uLocal_433[0]), Global_35, 1, 1)) && is_entity_on_screen(&(uLocal_433[0])))
		{
			set_wanted_level_multiplier(0f);
			_0x710448d44a64c213(0);
			_0xc805eb785824f712(0);
		}
		else
		{
			set_wanted_level_multiplier(1f);
			_0x710448d44a64c213(1);
			_0xc805eb785824f712(1);
		}
	}
}

void func_150()
{
	if (Local_132.f_48 == 1)
	{
		if (has_anim_event_fired(Global_35, 1660197584))
		{
			if (iVar324 == 1)
			{
				set_entity_visible(Local_56[1]->f_8, true);
			}
			else
			{
				set_entity_visible(Local_56[2]->f_8, true);
			}
		}
		if (!func_36(iVar444, 128))
		{
			if (has_anim_event_fired(Global_35, -591523853))
			{
				iVar0 = func_98(-95152412);
				func_313(iVar0, 0, 0, 1, 1);
				if (iVar324 == 1)
				{
					if (func_36(iVar444, 256))
					{
						func_311(12, 0, 0, "RE_HONOR_CHARITY", &(uLocal_433[0]), 0, 1065353216, 0);
					}
					else
					{
						func_311(12, 0, 0, "RE_HONOR_CHARITY", &(uLocal_433[0]), 0, 1065353216, 0);
					}
				}
				else
				{
					func_311(12, 0, 0, "RE_HONOR_CHARITY", &(uLocal_433[0]), 0, 1065353216, 0);
				}
				display_radar(true);
				display_hud(true);
				func_51(&uLocal_466, 0);
				func_38(uLocal_435[0]);
				func_44(&uLocal_446, 128);
			}
		}
		if (!func_36(iVar444, 256))
		{
			if (has_anim_event_fired(Global_35, 627724801))
			{
				func_44(&uLocal_446, 256);
				if (func_36(iVar444, 128))
				{
					if (iVar324 == 1)
					{
						func_311(2, 530833824, 0, 0, &(uLocal_433[0]), 0, 1065353216, 0);
					}
					func_314(func_98(-95152412) * 2, 0, 1065353216, 1, 0, 0, 1, 752097756);
				}
				else
				{
					if (iVar324 == 1)
					{
						func_311(2, 530833824, 0, 0, &(uLocal_433[0]), 0, 1065353216, 0);
					}
					func_315(-95152412, 0, 1065353216, 1, 0, 0);
				}
				if (does_entity_exist(Local_56[1]->f_8))
				{
					if (iVar324 == 1 && !func_36(iVar444, 128))
					{
						set_entity_visible(Local_56[1]->f_8, false);
					}
					else
					{
						delete_object(&(Local_56[1]->f_8));
					}
				}
				if (does_entity_exist(Local_56[2]->f_8))
				{
					delete_object(&(Local_56[2]->f_8));
				}
				iLocal_521 = 0;
				iLocal_522 = 0;
				func_38(uLocal_435[0]);
				display_radar(true);
				display_hud(true);
				func_51(&uLocal_466, 0);
				if (_0xde0ea444735c1368(iVar539))
				{
					_0x2c87c3e1c7b96ee2(iVar539);
					func_66(iVar540);
				}
			}
		}
		if (func_46(&uLocal_466) && func_52(&uLocal_466, 0.5f))
		{
			if ((iVar334 == 19 || iVar334 == 5) || iVar334 == 6)
			{
				iLocal_336 = 0;
			}
			func_51(&uLocal_481, 0);
			fLocal_460 = 15f;
		}
	}
}

void func_151()
{
	func_316();
	if (iVar525 == 1)
	{
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = -1;
	if (iVar439 == 2 && func_32(get_player_index(), 1, 0, 1))
	{
		if (iVar521 == 0)
		{
			iLocal_523 = 1;
			func_45(Local_569[0], 0, 0);
		}
	}
	switch (iVar439)
	{
		case 3:
			iVar2 = func_318(uLocal_433[0], Local_547[0], 15f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, func_317(3, 0, 0) | 64, 0, 0, 2, 1, -1082130432, 0);
			break;
		case 0:
			if (iVar526 == 0)
			{
				if ((func_319(Global_35, iVar542, 0, 1) && func_147(Global_35, &(uLocal_433[0]), 1, 1) <= 5f) && !func_36(iVar444, 8388608))
				{
					func_21(0);
					iLocal_441 = 1;
					func_113(Local_547[0], 0);
					return;
				}
			}
			iVar2 = func_318(uLocal_433[0], Local_547[0], 10f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, func_317(3, 0, 0) | 64, 0, 0, 2, 1, -1082130432, 0);
			if (iVar2 == 0)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iVar1 = 1;
				iLocal_521 = 1;
				func_320(1);
			}
			else if (iVar2 == 1)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iVar1 = 1;
				iLocal_522 = 1;
				func_320(0);
			}
			if (func_309(-6f, 1, 0, 0) && func_52(&uLocal_487, 3f))
			{
				iLocal_520 = 1;
				func_113(Local_547[0], 0);
				if (iVar519 == 0)
				{
					func_45(Local_569[0], 1, 0);
				}
				if (iVar520 == 0)
				{
					func_45(Local_569[1], 1, 0);
				}
			}
			break;
		case 1:
			if (!_0x3ab6c7b0bb0df4b1(&(uLocal_433[0]), iVar325))
			{
				iLocal_441 = 0;
				return;
			}
			if (((!func_36(iVar444, 128) || !func_36(iVar444, 4)) && iVar324 == 1) || iVar324 == 0)
			{
				fVar3 = (Global_36.f_2 - (Local_132.f_51.f_2 + 1f));
				fVar3 = absf(fVar3);
				if ((((((!func_319(Global_35, iVar542, 0, 1) || func_147(Global_35, &(uLocal_433[0]), 1, 1) > 5f) || is_ped_on_mount(Global_35)) || is_ped_in_any_vehicle(Global_35, true)) || func_256(Global_35, 1)) || func_158(&(uLocal_433[0]), Global_35, 1060437492) == 1) || fVar3 >= 1f)
				{
					if (iVar530 == 0)
					{
						func_45(Local_569[0], 0, 0);
						func_45(Local_569[1], 0, 0);
						func_113(Local_547[0], 0);
						iLocal_532 = 1;
					}
				}
				else if (iVar530 == 1)
				{
					if (!func_36(iVar444, 128))
					{
						func_45(Local_569[0], 1, 0);
					}
					if (func_36(iVar444, 4) && iVar324 == 1)
					{
						func_45(Local_569[1], 0, 0);
					}
					else
					{
						func_45(Local_569[1], 1, 0);
					}
					func_113(Local_547[0], 0);
					iLocal_532 = 0;
				}
			}
			if (iVar526 == 0 && iVar324 == 1)
			{
				if (iVar523 == 1 && iVar524 == 1)
				{
					iLocal_528 = 1;
				}
			}
			iVar2 = func_318(uLocal_433[0], Local_547[0], 10f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, func_321() | 64, 0, 0, 2, 1, -1082130432, 0);
			if (iVar2 == 0)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				func_165(&uLocal_446, 16);
				func_44(&uLocal_446, 2);
				func_45(Local_569[0], 0, 0);
				func_45(Local_569[1], 0, 0);
				iLocal_525 = 1;
				func_322();
				iLocal_362 = 0;
				set_anim_scene_bool(iVar325, "BASE_BOOL", false, false);
				iLocal_441 = 3;
				func_171(&Local_569, 0, 0);
				remove_anim_scene_entity(iVar325, "player", Global_35);
				func_113(Local_547[0], 0);
				_0xdf7b5144e25cd3fe(iVar325, "PBL_MTH_GIVE");
			}
			else if (iVar2 == 1)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				uLocal_451 = iVar449 + 1;
				func_165(&uLocal_446, 16);
				func_165(&uLocal_446, 2);
				func_44(&uLocal_446, 4);
				func_45(Local_569[0], 0, 0);
				func_45(Local_569[1], 0, 0);
				iLocal_526 = 1;
				iLocal_362 = 0;
				set_anim_scene_bool(iVar325, "BASE_BOOL", false, false);
				func_113(Local_547[0], 0);
				func_318(uLocal_433[0], Local_547[0], 10f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, func_317(3, 0, 0) | 64, 0, 0, 2, 1, -1082130432, 0);
				func_39(&(uLocal_433[0]), 0);
				if (iVar324 == 0)
				{
					func_51(&uLocal_505, 0);
				}
				func_171(&Local_569, 0, 0);
				iLocal_441 = 3;
				func_171(&Local_569, 0, 0);
				remove_anim_scene_entity(iVar325, "player", Global_35);
				_0xdf7b5144e25cd3fe(iVar325, "PBL_MTH_STEAL_01");
				if (iVar324 == 1)
				{
					func_322();
				}
				if (iVar449 >= 2 && iVar324 == 0)
				{
					func_322();
					iLocal_441 = 0;
					_0xdf7b5144e25cd3fe(iVar325, "PBL_MTH_STEAL_02");
					iLocal_528 = 1;
				}
			}
			if (iVar0 == 1)
			{
				func_323();
				set_player_control(get_player_index(), false, 256, false);
				iLocal_515 = 0;
				if (Local_132.f_44 == 0)
				{
					func_73(81, 1, 0, 0, 6, 0, 0, 1);
				}
				Local_132.f_48 = 1;
				Local_132.f_44 = 1;
				iLocal_336 = iVar333;
				iLocal_335 = 19;
			}
			if (func_309(-6f, 1, 0, 0) && func_52(&uLocal_487, 3f))
			{
				iLocal_520 = 1;
				func_113(Local_547[0], 0);
				iLocal_532 = 1;
			}
			break;
		case 2:
			iVar2 = func_318(uLocal_433[0], Local_547[0], 10f, &Local_569, &(Local_132.f_192), 0f, 1, 0, 0, func_317(3, 0, 0) | 64 | 256 | 2 | 8, 0, 0, 2, 1, -1082130432, 0);
			if (((iVar324 == 0 && !is_any_speech_playing(Global_35)) && !is_any_speech_playing(&(uLocal_433[0]))) && func_52(&uLocal_487, 3f))
			{
				if (iVar522 == 0)
				{
					iLocal_520 = 1;
					func_113(Local_547[0], 0);
					if (iVar521 == 0)
					{
						func_45(Local_569[0], 1, 0);
					}
					if (iVar522 == 0)
					{
						func_45(Local_569[1], 1, 0);
					}
				}
			}
			if (iVar2 == 0)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iVar1 = 1;
				iLocal_523 = 1;
				func_320(1);
				func_45(Local_569[0], 0, 0);
				func_45(Local_569[1], 0, 0);
				_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
			}
			else if (iVar2 == 1)
			{
				iLocal_520 = 0;
				iVar0 = 1;
				iVar1 = 1;
				if (func_46(&uLocal_472))
				{
					func_47(&uLocal_472);
				}
				if (iVar324 == 1)
				{
					iLocal_524 = 1;
				}
				func_320(0);
				func_45(Local_569[0], 0, 0);
				func_45(Local_569[1], 0, 0);
			}
			break;
	}
	if (iVar0 == 1)
	{
		if (func_46(&uLocal_490))
		{
			func_47(&uLocal_490);
		}
		iLocal_517 = 1;
		if (Local_132.f_44 == 0)
		{
			func_73(81, 1, 0, 0, 6, 0, 0, 1);
		}
		Local_132.f_44 = 1;
		if (iVar1 == 1)
		{
			func_51(&uLocal_484, 0);
		}
	}
}

bool func_152()
{
	if (Local_132.f_48 == 1)
	{
		if (!func_40(&(uLocal_433[0]), 0, 0))
		{
			if (get_ped_config_flag(&(uLocal_433[0]), 11, true))
			{
				if (func_147(&(uLocal_433[0]), Global_35, 1, 0) > 25f && is_entity_occluded(&(uLocal_433[0])))
				{
					_0x39a2fc5af55a52b1(&(uLocal_433[0]), -1);
					set_ped_as_no_longer_needed(uLocal_433[0]);
					return true;
				}
			}
			else
			{
				set_ped_config_flag(&(uLocal_433[0]), 6, false);
				iLocal_536 = 1;
			}
			if (!func_46(&uLocal_496))
			{
				func_51(&uLocal_496, 0);
			}
		}
		if (func_46(&uLocal_496))
		{
			if (iVar534 == 1)
			{
				return true;
			}
		}
	}
	return false;
}

void func_153(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_46(uParam0))
	{
		func_141(uParam0, fParam1);
	}
}

void func_154()
{
	if (Local_132.f_48 == 1 && _does_anim_scene_exist(iVar325))
	{
		if (!func_36(iVar444, 32))
		{
			_0xdf7b5144e25cd3fe(iVar325, "PBL_MTH_STEAL_01");
			if (_get_anim_scene_entity_matrix(iVar325, "player", &Local_376, true, "PBL_MTH_STEAL_01", 2))
			{
				if (!func_211(Local_376) && !func_211(Local_376.f_3))
				{
					func_44(&uLocal_446, 32);
				}
			}
		}
		if (!func_36(iVar444, 131072))
		{
			if (iVar324 == 0)
			{
				_0xdf7b5144e25cd3fe(iVar325, "PBL_MTH_STEAL_02");
				if (_get_anim_scene_entity_matrix(iVar325, "player", &Local_388, true, "PBL_MTH_STEAL_02", 2))
				{
					if (!func_211(Local_388) && !func_211(Local_388.f_3))
					{
						func_44(&uLocal_446, 131072);
					}
				}
			}
			else
			{
				func_44(&uLocal_446, 131072);
			}
		}
		if (!func_36(iVar444, 64))
		{
			_0xdf7b5144e25cd3fe(iVar325, "PBL_MTH_GIVE");
			if (_get_anim_scene_entity_matrix(iVar325, "player", &Local_364, true, "PBL_MTH_GIVE", 2))
			{
				if (!func_211(Local_364) && !func_211(Local_364.f_3))
				{
					func_44(&uLocal_446, 64);
				}
			}
		}
	}
}

Vector3 func_155(int iParam0, float fParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { get_entity_coords(iParam0, false, false) };
	if (is_entity_dead(iParam0))
	{
		return vVar0;
	}
	vVar6 = { get_entity_forward_vector(iParam0) };
	func_324(vVar6);
	vVar6 = { FtoV((get_entity_speed(iParam0) * fParam1)) * vVar6 };
	vVar3 = { vVar0 + vVar6 };
	return vVar3;
}

float func_156(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_157(var uParam0, float fParam1, float fParam2, float fParam3, int iParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, bool bParam11)
{
	bVar1 = false;
	fVar2 = func_244(uParam0, bVar1);
	fVar3 = fVar2;
	if (!bParam11 && fVar2 < fParam3)
	{
	}
	if (fParam5 > 0f)
	{
		if (get_entity_speed(Global_35) > fParam5)
		{
			return false;
		}
	}
	if (fParam7 > 0f)
	{
		if (absf((Global_36.f_2 - uParam0->f_51.f_2)) >= fParam7)
		{
			return false;
		}
	}
	if (uParam0->f_178 && func_242())
	{
		bVar1 = true;
		fVar3 = func_191(bVar1, fParam9, fVar2);
	}
	if (uParam0->f_48 && (!bParam10 || (!_does_volume_exist(uParam0->f_173) || is_entity_in_volume(Global_35, uParam0->f_173, true, 0))))
	{
		if (iParam4 > 1)
		{
			iVar0 = 0;
			while (iVar0 < uParam0->f_121)
			{
				func_245(uParam0->f_121[iVar0], fVar3, 1082130432, 1, 90f, 0, 0);
				iVar0++;
			}
		}
		else
		{
			func_245(uParam0->f_121[0], fVar3, 1082130432, 1, 90f, 0, 0);
		}
		if (func_246(&(uParam0->f_121), iParam4, fParam1))
		{
			func_122(&(uParam0->f_121));
			if (uParam0->f_186)
			{
				_0xb2a38826e5886e83(func_195(uParam0->f_3, uParam0->f_185), 0);
			}
			return true;
		}
	}
	fVar4 = (fParam3 * fParam3);
	iVar0 = 0;
	while (iVar0 < uParam0->f_121)
	{
		if (!is_entity_dead(uParam0->f_121[iVar0]->f_6))
		{
			if (vdist2(Global_36, get_entity_coords(uParam0->f_121[iVar0]->f_6, true, false)) < fVar4)
			{
				if (!uParam0->f_48)
				{
					if (_does_volume_exist(uParam0->f_173) && !(bParam8 && _is_ped_getting_into_a_mount_seat(Global_35, true)))
					{
						if (!is_entity_in_volume(Global_35, uParam0->f_173, false, 0))
						{
							return false;
						}
					}
					if (bParam6)
					{
						func_121(uParam0, &(uParam0->f_48), uParam0->f_3, &(uParam0->f_51.f_6));
					}
				}
				func_122(&(uParam0->f_121));
				if (uParam0->f_186)
				{
					_0xb2a38826e5886e83(func_195(uParam0->f_3, uParam0->f_185), 0);
				}
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_158(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam1, false, false) };
	return func_325(iParam0, vVar0, iParam2);
}

void func_159(int iParam0, int* iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!is_entity_dead(iParam0))
	{
		if (does_blip_exist(*iParam1))
		{
			remove_blip(iParam1);
		}
		iVar0 = get_blip_from_entity(iParam0);
		if (does_blip_exist(iVar0))
		{
			remove_blip(&iVar0);
		}
		*iParam1 = _blip_add_for_entity(iParam2, iParam0);
		if (iParam3 != 0)
		{
			_blip_set_modifier(*iParam1, iParam3);
		}
		if (iParam4 != 0)
		{
			set_blip_sprite(*iParam1, iParam4, true);
		}
		if (!is_string_null_or_empty(sParam5))
		{
			set_blip_name_from_text_file(*iParam1, sParam5);
		}
	}
}

void func_160()
{
	if (Local_132.f_48 == 1)
	{
		if (!func_36(iVar444, 8192))
		{
			if (func_40(&(uLocal_433[0]), 0, 1) && func_299(&(uLocal_433[0]), 1, 1) < 6f)
			{
				func_44(&uLocal_446, 8192);
			}
		}
		else if ((!func_36(iVar444, 16384) && !func_36(iVar444, 128)) && !func_36(iVar444, 256))
		{
			if (((func_40(&(uLocal_433[0]), 0, 1) && func_299(&(uLocal_433[0]), 1, 1) > 8f) && !func_36(iVar445, 134217728)) && iVar531 == 0)
			{
				if (has_anim_event_fired(&(uLocal_433[0]), -1950704028) && !is_any_speech_playing(&(uLocal_433[0])))
				{
					if (iVar324 == 0 && func_49(iVar325, "PBL_DIA_09"))
					{
						func_50(iVar325, "PBL_DIA_09", "BASE_BOOL", 19, "HANDLE_PLAYER_IGNORING - CON");
						func_44(&uLocal_446, 16384);
					}
					else if (iVar324 == 1 && func_49(iVar325, "PBL_BASE_VAR02"))
					{
						func_50(iVar325, "PBL_BASE_VAR02", "BASE_BOOL", 5, "HANDLE_PLAYER_IGNORING - REAL");
						func_170(0);
						func_43(&(uLocal_433[0]), Global_35, func_42("PASSER_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						func_44(&uLocal_447, 65536);
						func_44(&uLocal_446, 16384);
					}
				}
			}
		}
	}
}

void func_161()
{
	if ((func_36(iVar444, 8) && !func_36(iVar444, 16)) && !func_175(Global_35, -875674219))
	{
		if (_0xde0ea444735c1368(iVar539))
		{
			_0x2c87c3e1c7b96ee2(iVar539);
			func_66(iVar540);
		}
		if (func_36(iVar444, 2))
		{
			func_49(iVar325, "PBL_MTH_GIVE");
		}
		else if (func_36(iVar444, 4))
		{
			if (iVar447 == 0)
			{
				func_49(iVar325, "PBL_MTH_STEAL_01");
			}
			else
			{
				func_49(iVar325, "PBL_MTH_STEAL_02");
			}
		}
		iVar0 = 0;
		if (func_36(iVar444, 2))
		{
			if (func_326(Global_35, iVar325, "player", "PBL_MTH_GIVE", &iLocal_362, 1065353216, 1, 1, 1))
			{
				iVar0 = 1;
			}
		}
		else if (func_36(iVar444, 4))
		{
			if (iVar447 == 0)
			{
				if (func_326(Global_35, iVar325, "player", "PBL_MTH_STEAL_01", &iLocal_362, 1065353216, 1, 1, 1))
				{
					iVar0 = 1;
				}
			}
			else if (func_326(Global_35, iVar325, "player", "PBL_MTH_STEAL_02", &iLocal_362, 1065353216, 1, 1, 1))
			{
				iVar0 = 1;
			}
		}
		if (iVar0 == 1)
		{
			set_anim_scene_entity(iVar325, "player", Global_35, 0);
			if (func_36(iVar444, 2))
			{
				func_47(&uLocal_469);
				func_44(&uLocal_446, 16);
				if (_does_volume_exist(iVar539))
				{
					if (_0x19c7567d2f2287d6(iVar539, 7))
					{
						uLocal_542 = _0x0eb78c2b156635b1(665633627, get_entity_coords(&(uLocal_433[0]), true, false), 0f, 0f, Local_99[0]->f_9, 1f, 1f, 5f);
					}
				}
				iLocal_530 = 1;
				iLocal_515 = 0;
				func_51(&uLocal_493, 0);
			}
			else if (func_36(iVar444, 4))
			{
				if (iVar447 == 0)
				{
					set_anim_scene_entity(iVar325, "player", Global_35, 0);
					func_47(&uLocal_469);
					func_44(&uLocal_446, 16);
					uLocal_449 = iVar447 + 1;
					if (_does_volume_exist(iVar539))
					{
						if (_0x19c7567d2f2287d6(iVar539, 7))
						{
							uLocal_542 = _0x0eb78c2b156635b1(665633627, get_entity_coords(&(uLocal_433[0]), true, false), 0f, 0f, Local_99[0]->f_9, 1f, 1f, 5f);
						}
					}
					iLocal_530 = 1;
					iLocal_515 = 0;
					func_51(&uLocal_493, 0);
				}
				else if (iVar447 > 0)
				{
					func_47(&uLocal_469);
					func_44(&uLocal_446, 16);
					uLocal_449 = iVar447 + 1;
					func_37(1);
					if (_does_volume_exist(iVar539))
					{
						if (_0x19c7567d2f2287d6(iVar539, 7))
						{
							uLocal_542 = _0x0eb78c2b156635b1(665633627, get_entity_coords(&(uLocal_433[0]), true, false), 0f, 0f, Local_99[0]->f_9, 1f, 1f, 5f);
						}
					}
					iLocal_530 = 1;
					iLocal_515 = 0;
					func_51(&uLocal_493, 0);
				}
			}
		}
		return;
	}
}

void func_162(int iParam0, int iParam1)
{
	if (iParam0->f_16 != 0 || *iParam1 != 0)
	{
		Global_1935630->f_30 = 0;
		Global_1935630->f_31 = 0;
		Global_1935630->f_25 = 0;
		Global_1935630->f_39 = 0;
		iParam0->f_8 = func_288();
		_0xeacebaae0a33fb3f(player_id());
	}
	iParam0->f_2 = 0;
	iParam0->f_3 = 0;
	iParam0->f_5 = 0;
	iParam0->f_10 = 0;
	func_327(iParam0, 0);
	*iParam1 = 0;
	iParam0->f_16 = 0;
}

void func_163(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		allow_sonar_blips(true);
		force_sonar_blips_this_frame();
	}
	_trigger_sonar_blip_2(iParam0, iParam1);
}

float func_164(var uParam0)
{
	if (!func_46(uParam0))
	{
		return 0f;
	}
	if (func_328(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_305() - uParam0->f_1);
}

void func_165(int iParam0, int iParam1)
{
	func_329(iParam0, iParam1);
}

void func_166(int iParam0)
{
	func_112(Local_569[0], "RE_INTER_DEFUSE");
	func_112(Local_569[1], "RE_INTER_ANTAGONIZE");
	func_114(Local_569[0], 0, 0);
	func_114(Local_569[1], 0, 0);
	func_113(Local_547[0], 0);
	func_143(&uLocal_493);
	iLocal_530 = 0;
	if ((iVar520 == 1 || iParam0 == 1) || func_32(get_player_index(), 1, 0, 1))
	{
		func_45(Local_569[0], 0, 0);
	}
	else
	{
		func_45(Local_569[0], 1, 0);
	}
	if (iVar521 == 1 || iParam0 == 1)
	{
		func_45(Local_569[1], 0, 0);
	}
	else
	{
		func_45(Local_569[1], 1, 0);
	}
}

bool func_167(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (_has_entity_been_damaged_by_weapon(iParam0, -1569615261, 0))
		{
			return true;
		}
		if (is_weapon_valid(Global_1935630->f_44) && _is_weapon_melee(Global_1935630->f_44))
		{
			if (_has_entity_been_damaged_by_weapon(iParam0, Global_1935630->f_44, 0))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_168(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !is_entity_dead(iParam0))
	{
		if (_0x9e2d5d6bc97a5f1e(iParam0, -1569615261, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (is_weapon_valid(Global_1935630->f_44))
			{
				if (_is_weapon_melee(Global_1935630->f_44) || Global_1935630->f_44 == -618550132)
				{
					if (_0x9e2d5d6bc97a5f1e(iParam0, Global_1935630->f_44, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_169(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (!is_entity_dead(iParam0))
	{
		set_ped_to_ragdoll(iParam0, iParam1, iParam2, iParam3, false, false, bParam4);
	}
}

void func_170(int iParam0)
{
	func_143(&uLocal_0);
	func_330(1, iParam0, 0);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_331();
}

void func_171(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_45((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

void func_172()
{
	if (Local_132.f_48 == 1)
	{
		if (func_40(&(uLocal_433[0]), 0, 1))
		{
			if (has_anim_event_fired(&(uLocal_433[0]), 217959441))
			{
				if (does_entity_exist(Local_56[1]->f_8))
				{
					delete_object(&(Local_56[1]->f_8));
				}
				if (does_entity_exist(Local_56[2]->f_8))
				{
					delete_object(&(Local_56[2]->f_8));
				}
				func_332(&(uLocal_433[0]), 0, 0);
				iVar0 = func_98(-95152412);
				if (func_36(iVar444, 128))
				{
					iVar0 += 100;
				}
				func_99(&(uLocal_433[0]), iVar0);
				func_112(Local_569[0], "RE_INTER_POS");
				func_112(Local_569[1], "RE_INTER_ANTAGONIZE");
				func_112(Local_569[0], "RE_INTER_POS");
				iLocal_521 = 0;
				func_112(Local_569[1], "RE_INTER_ANTAGONIZE");
				func_113(Local_547[0], 0);
				if (iVar519 == 0)
				{
					func_45(Local_569[0], 1, 0);
				}
				else
				{
					func_45(Local_569[0], 0, 0);
				}
				if (iVar520 == 0)
				{
					func_45(Local_569[1], 1, 0);
				}
				else
				{
					func_45(Local_569[1], 0, 0);
				}
			}
			if (has_anim_event_fired(&(uLocal_433[0]), 263679809))
			{
				_0x2e1d6d87346bb7d2(&(uLocal_433[0]), Global_35, 0, 0);
			}
			if (has_anim_event_fired(&(uLocal_433[0]), 2118412884))
			{
				if (_0x3ab6c7b0bb0df4b1(&(uLocal_433[0]), iVar325))
				{
					if (func_36(iVar444, 128))
					{
						_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 6, 385, -1082130432, -1, 0);
					}
					else
					{
						_task_smart_flee_style_ped(&(uLocal_433[0]), Global_35, 1, 385, -1082130432, -1, 0);
					}
					set_ped_keep_task(&(uLocal_433[0]), true);
				}
			}
		}
	}
}

void func_173()
{
	if (func_147(&(uLocal_433[0]), Global_35, 1, 1) > 20f && !is_entity_on_screen(&(uLocal_433[0])))
	{
		_0x39a2fc5af55a52b1(&(uLocal_433[0]), -1);
		set_ped_as_no_longer_needed(uLocal_433[0]);
	}
}

void func_174()
{
	if (func_40(&(uLocal_433[0]), 0, 0))
	{
		if (!func_36(iVar444, 1048576))
		{
			if (_0x61914209c36efddb(&(uLocal_433[0])) == 1 || _is_ped_hogtied(&(uLocal_433[0])))
			{
				if (!is_any_speech_playing(&(uLocal_433[0])))
				{
					func_41(&(uLocal_433[0]), 0);
					if (iVar531 == 0)
					{
						func_43(&(uLocal_433[0]), Global_35, func_42("HOGTIE_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
						func_44(&uLocal_446, 1048576);
					}
					else
					{
						func_43(&(uLocal_433[0]), Global_35, func_42("RUN_HOGTIE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 1, 0);
						func_44(&uLocal_446, 1048576);
					}
					func_51(&uLocal_499, 0);
					fLocal_461 = 7f;
					return;
				}
			}
		}
		if (!func_36(iVar444, 16777216))
		{
			if (func_333(&(uLocal_433[0])) == 10 && !is_any_speech_playing(&(uLocal_433[0])))
			{
				func_43(&(uLocal_433[0]), Global_35, func_42("HOGTIE_UNTIE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
				func_44(&uLocal_446, 16777216);
				func_47(&uLocal_499);
				return;
			}
		}
		if (((func_36(iVar444, 1048576) && !is_any_speech_playing(&(uLocal_433[0]))) && func_164(&uLocal_499) > fVar459) && (_is_ped_hogtied(&(uLocal_433[0])) || _is_ped_lassoed(&(uLocal_433[0]))))
		{
			if (iVar531 == 0)
			{
				switch (iVar452)
				{
					case 0:
						func_41(&(uLocal_433[0]), 0);
						func_43(&(uLocal_433[0]), Global_35, func_42("HOGTIE_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 10f;
						iLocal_454 = iVar452 + 1;
						break;
					case 1:
						func_41(&(uLocal_433[0]), 0);
						func_43(&(uLocal_433[0]), Global_35, func_42("HOGTIE_C"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 10f;
						iLocal_454 = iVar452 + 1;
						break;
					case 2:
						break;
				}
			}
			else
			{
				switch (iVar452)
				{
					case 0:
						func_41(&(uLocal_433[0]), 0);
						func_43(&(uLocal_433[0]), Global_35, func_42("POST_HOGTIED_A"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 8f;
						iLocal_454 = iVar452 + 1;
						break;
					case 1:
						func_41(&(uLocal_433[0]), 0);
						func_43(&(uLocal_433[0]), Global_35, func_42("POST_HOGTIED_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 6f;
						iLocal_454 = iVar452 + 1;
						break;
					case 2:
						func_41(&(uLocal_433[0]), 0);
						func_43(&(uLocal_433[0]), Global_35, func_42("POST_HOGTIED_C"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 10f;
						iLocal_454 = iVar452 + 1;
						break;
					case 3:
						func_41(&(uLocal_433[0]), 0);
						func_43(&(uLocal_433[0]), Global_35, func_42("POST_HOGTIED_D"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
						fLocal_461 = 10f;
						iLocal_454 = iVar452 + 1;
						break;
					case 4:
						break;
				}
			}
			func_47(&uLocal_499);
		}
	}
}

bool func_175(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0))
		{
			if (iParam1 == 2104565373 && is_driveby_task_underneath_driving_task(iParam0))
			{
				return true;
			}
			if (get_script_task_status(iParam0, iParam1, true) == 1 || get_script_task_status(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_176()
{
	if (!func_334(Global_1395482->f_1))
	{
		return false;
	}
	return func_335(Global_1395482->f_1, 32);
}

bool func_177(int iParam0)
{
	if (func_91(iParam0, 1))
	{
		return false;
	}
	return (1 == func_184(iParam0) || 2 == func_184(iParam0));
}

float func_178(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

var func_179(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_objective(&Var0, &Var13, iParam5);
	return uVar15;
}

char* func_180(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, sParam1, sParam4);
		case 2:
			return _create_var_string(2, sParam1, sParam4, sParam5);
		case 3:
			return _create_var_string(10, sParam1, sParam2);
		case 4:
			return _create_var_string(42, sParam1, sParam2, sParam3);
	}
	return _create_var_string(2, func_336(sParam1));
}

void func_181(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 || iParam0);
}

int func_182(int iParam0, int iParam1)
{
	iVar1 = func_337(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_183(int iParam0, int iParam1)
{
	iVar1 = func_337(iParam0, iParam1);
	iVar0 = 0;
	while (iVar0 < Global_17504.f_1003)
	{
		if (&Global_17504.f_1003[iVar0] == iVar1 || &Global_17504.f_1003[iVar0] == -1)
		{
			Global_17504.f_1003[iVar0] = iVar1;
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_184(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

int func_185()
{
	return Global_1572887->f_12;
}

char* func_186(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "REAA";
		case 75:
			return "REBBR";
		case 1:
			return "REAM";
		case 2:
			return "REAP";
		case 3:
			return "REAMD";
		case 76:
			return "REBE";
		case 4:
			return "REBT";
		case 77:
			return "REBTE";
		case 5:
			return "REBAT";
		case 6:
			return "REBOT";
		case 7:
			return "REBNT";
		case 78:
			return "REBGP";
		case 8:
			return "REBUB";
		case 9:
			return "RECA";
		case 10:
			return "RECG";
		case 11:
			return "RECP";
		case 12:
			return "RECHR";
		case 79:
			return "RECQ";
		case 13:
			return "RECCT";
		case 14:
			return "RECW";
		case 80:
			return "REDAA";
		case 81:
			return "REDAB";
		case 82:
			return "REDAS";
		case 83:
			return "REDEB";
		case 84:
			return "REDJ";
		case 15:
			return "REDLP";
		case 85:
			return "REDIB";
		case 86:
			return "REDOM";
		case 87:
			return "REDM";
		case 16:
			return "REPND";
		case 88:
			return "REDD";
		case 89:
			return "REDB";
		case 90:
			return "REDW";
		case 17:
			return "REESC";
		case 18:
			return "REEX";
		case 91:
			return "REFF";
		case 19:
			return "REFT";
		case 92:
			return "REFR";
		case 20:
			return "REFO";
		case 21:
			return "REFD";
		case 93:
			return "REFND";
		case 22:
			return "REFC";
		case 23:
			return "REGCR";
		case 94:
			return "REGPE";
		case 24:
			return "REGP";
		case 119:
			return "REHOC";
		case 27:
			return "REHOR";
		case 28:
			return "REHR";
		case 29:
			return "REIK";
		case 30:
			return "REIR";
		case 95:
			return "REIT";
		case 31:
			return "REKV";
		case 32:
			return "REKD";
		case 33:
			return "REKR";
		case 34:
			return "REKS";
		case 35:
			return "RELRU";
		case 96:
			return "REETE";
		case 36:
			return "RELK";
		case 37:
			return "RELP";
		case 97:
			return "RELD";
		case 98:
			return "RELDR";
		case 38:
			return "RELF";
		case 39:
			return "RELM";
		case 40:
			return "REMC";
		case 41:
			return "REMUC";
		case 42:
			return "RENS";
		case 99:
			return "REOTE";
		case 100:
			return "REOR";
		case 43:
			return "REOL";
		case 44:
			return "REOT";
		case 101:
			return "REPA";
		case 102:
			return "REPT";
		case 103:
			return "REPP";
		case 45:
			return "RESB";
		case 104:
			return "REPS";
		case 46:
			return "REPCA";
		case 47:
			return "REPCS";
		case 48:
			return "REPO";
		case 105:
			return "REPCH";
		case 49:
			return "REPBR";
		case 50:
			return "REPW";
		case 106:
			return "REPH";
		case 107:
			return "RERI";
		case 51:
			return "RERP";
		case 108:
			return "RERD";
		case 53:
			return "RESA";
		case 54:
			return "RESAF";
		case 56:
			return "RESWA";
		case 55:
			return "RESW";
		case 57:
			return "RESS";
		case 109:
			return "RESO";
		case 58:
			return "RESKP";
		case 110:
			return "RESAM";
		case 59:
			return "RESH";
		case 60:
			return "REHU";
		case 61:
			return "RESSH";
		case 62:
			return "RESR";
		case 111:
			return "RESTF";
		case 112:
			return "REKT";
		case 67:
			return "RETC";
		case 68:
			return "RETP";
		case 113:
			return "REBUR";
		case 114:
			return "RETWC";
		case 115:
			return "RETR";
		case 117:
			return "RETT";
		case 116:
			return "RETWW";
		case 63:
			return "RETA";
		case 64:
			return "RETRB";
		case 65:
			return "RETW";
		case 66:
			return "RETH";
		case 69:
			return "REVC";
		case 70:
			return "REWTH";
		case 71:
			return "REWA";
		case 118:
			return "REWC";
		case 72:
			return "REWH";
		case 73:
			return "REWM";
		case 74:
			return "REWMC";
		default:
			break;
	}
	return "XXXX";
}

void func_187(int iParam0, int iParam1)
{
	if (!func_197(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 || iParam1);
}

void func_188(int iParam0, bool bParam1)
{
	if (func_40(iParam0, 0, 1))
	{
		set_blocking_of_non_temporary_events(iParam0, false);
		func_338(iParam0, 1088421888, 0, 0);
		if (!bParam1)
		{
			set_ped_as_no_longer_needed(&iParam0);
		}
	}
}

bool func_189(var uParam0, var uParam1)
{
	if (func_91(uParam0->f_3, 16777216))
	{
		if (func_339(*uParam1) != -1 || get_entity_model(*uParam1) == 1478983280)
		{
			return true;
		}
	}
	return false;
}

void func_190(var uParam0)
{
	set_ped_config_flag(*uParam0, 6, false);
	set_ped_config_flag(*uParam0, 4, false);
	set_ped_config_flag(*uParam0, 494, true);
}

float func_191(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_192(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4)
{
	if (!Global_1935630->f_12 && (!bParam4 || func_40(iParam0, 0, 1)))
	{
		if (!does_entity_exist(iParam3))
		{
			iParam3 = get_mount(Global_35);
		}
		if (iParam3 != iParam0)
		{
			if (!is_entity_a_mission_entity(iParam0))
			{
				set_entity_as_mission_entity(iParam0, true, false);
			}
			clear_ped_tasks(iParam0, 1, 0);
			clear_ped_secondary_task(iParam0);
			fVar2 = func_191(fParam2 >= 0f, fParam2, vdist(get_entity_coords(iParam0, true, false), Global_36));
			if (fVar2 > 25f && is_entity_occluded(iParam0))
			{
				func_340(&iParam0);
			}
			else if (does_entity_exist(iParam0))
			{
				open_sequence_task(&iVar0);
				task_smart_flee_ped(0, Global_35, 1000f, -1, 0, iParam1, 0);
				close_sequence_task(iVar0);
				_task_perform_sequence_2(iParam0, iVar0, 0.1f, 0.5f);
				clear_sequence_task(&iVar0);
				iVar1 = get_mount(iParam0);
				if (does_entity_exist(iVar1))
				{
					_0x39a2fc5af55a52b1(iVar1, -1);
				}
				_0x39a2fc5af55a52b1(iParam0, -1);
			}
		}
	}
}

void func_193(var uParam0)
{
	if (_does_volume_exist(uParam0->f_171))
	{
		func_341(uParam0->f_171);
		_0xa1cfb35069d23c23(uParam0->f_171);
		_0x74c2b3dc0b294102(uParam0->f_171);
	}
	if (uParam0->f_51.f_7 != 0)
	{
		destroy_tracked_point(uParam0->f_51.f_7);
		uParam0->f_51.f_7 = 0;
	}
	func_342(uParam0);
	func_343(uParam0);
	func_68(uParam0);
	if (!func_344(uParam0))
	{
		if (_0xf6a8a652a6b186cd(uParam0->f_51.f_11))
		{
			_0xfdfecc6ee4491e11(uParam0->f_51.f_11);
		}
		func_264(uParam0->f_51, 0);
	}
	if (does_blip_exist(uParam0->f_51.f_6))
	{
		remove_blip(&(uParam0->f_51.f_6));
	}
	if (uParam0->f_48)
	{
		func_345();
	}
	if (!func_346(uParam0->f_3) && !func_91(uParam0->f_3, 256))
	{
		func_73(uParam0->f_3, 1, 0, 15, 0, 0, 0, 1);
	}
	func_66(uParam0->f_173);
	func_66(uParam0->f_172);
}

void func_194(var uParam0)
{
	if (does_blip_exist(uParam0->f_181))
	{
		remove_blip(&(uParam0->f_181));
	}
}

int func_195(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= 74)
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						return -1361771813;
					case 1:
						return -2064800864;
					case 2:
						return -1459648117;
					default:
						break;
				}
				return 1764738688;
			case 1:
				return -1738452225;
			case 2:
				return -823209843;
			case 3:
				switch (iParam1)
				{
					case 0:
						return 659020347;
					case 1:
						return 1082838675;
					default:
						break;
				}
				return -163609424;
			case 4:
				return -230454431;
			case 5:
				switch (iParam1)
				{
					case 0:
						return -255547597;
					case 1:
						return -779276698;
					default:
						break;
				}
				return 1848195968;
			case 6:
				switch (iParam1)
				{
					case 0:
						return 500453091;
					case 1:
						return -561787596;
					default:
						break;
				}
				return 199182688;
			case 7:
				switch (iParam1)
				{
					case 0:
						return -1050372802;
					case 1:
						return 1805609920;
					default:
						break;
				}
				return -1157729664;
			case 8:
				switch (iParam1)
				{
					case 0:
						return 1085166521;
					case 1:
						return -1805473967;
					default:
						break;
				}
				return -185185008;
			case 9:
				switch (iParam1)
				{
					case 0:
						return 1886894479;
					default:
						break;
				}
				return 1331739776;
			case 10:
				switch (iParam1)
				{
					case 0:
						return 124534071;
					default:
						break;
				}
				return -2125510912;
			case 11:
				switch (iParam1)
				{
					case 0:
						return -1439039856;
					case 1:
						return 1422484995;
					default:
						break;
				}
				return 2012422144;
			case 12:
				return 1004100858;
			case 13:
				switch (iParam1)
				{
					case 0:
						return 1957341991;
					case 1:
						return 1719865048;
					default:
						break;
				}
				return -462840960;
			case 14:
				switch (iParam1)
				{
					case 0:
						return 1333995618;
					case 1:
						return -1541809666;
					default:
						break;
				}
				return -2063125376;
			case 15:
				switch (iParam1)
				{
					case 0:
						return 1037952769;
					case 1:
						return 396925591;
					case 2:
						return -1318629866;
					default:
						break;
				}
				return 237843904;
			case 16:
				return 1583531269;
			case 17:
				return -728402510;
			case 18:
				switch (iParam1)
				{
					case 0:
						return -1622801117;
					case 1:
						return 1895496017;
					default:
						break;
				}
				return -1622801152;
			case 19:
				switch (iParam1)
				{
					case 0:
						return -93589059;
					default:
						break;
				}
				return -110846632;
			case 20:
				switch (iParam1)
				{
					case 0:
						return 1513876565;
					case 1:
						return 136987683;
					case 2:
						return -405984699;
					default:
						break;
				}
				return -1296870656;
			case 21:
				return 856957155;
			case 22:
				return 199192985;
			case 23:
				switch (iParam1)
				{
					case 0:
						return 1607827063;
					case 1:
						return -548752013;
					case 2:
						return -1799015093;
					case 3:
						return -115167180;
					default:
						break;
				}
				return 1480735360;
			case 24:
				switch (iParam1)
				{
					case 0:
						return -1188012136;
					case 1:
						return -195398422;
					default:
						break;
				}
				return 1888284288;
			case 25:
				switch (iParam1)
				{
					case 0:
						return 1245222967;
					case 1:
						return -140925504;
					default:
						break;
				}
				return 1262841600;
			case 26:
				return -1065165983;
			case 27:
				switch (iParam1)
				{
					case 0:
						return -1995068882;
					case 1:
						return -879341975;
					case 2:
						return 812000379;
					default:
						break;
				}
				return 1119637248;
			case 28:
				return -1641231995;
			case 29:
				switch (iParam1)
				{
					case 0:
						return -15789618;
					case 1:
						return -2001368627;
					default:
						break;
				}
				return 1411817728;
			case 30:
				switch (iParam1)
				{
					case 0:
						return 1669447203;
					case 1:
						return -413778780;
					default:
						break;
				}
				return 260689376;
			case 31:
				switch (iParam1)
				{
					case 0:
						return -1593929201;
					case 1:
						return -1268334164;
					default:
						break;
				}
				return 302505024;
			case 32:
				return -800701784;
			case 33:
				return -1599472750;
			case 34:
				return 239043929;
			case 35:
				return -1534174498;
			case 36:
				switch (iParam1)
				{
					case 0:
						return -1457758665;
					case 1:
						return 1873758089;
					default:
						break;
				}
				return 1179130240;
			case 37:
				switch (iParam1)
				{
					case 0:
						return 1820839571;
					case 1:
						return -2073786745;
					default:
						break;
				}
				return -959962496;
			case 38:
				return 1895786957;
			case 39:
				return -2058137475;
			case 40:
				switch (iParam1)
				{
					case 0:
						return -904691578;
					case 1:
						return 149442199;
					case 2:
						return 978666390;
					case 3:
						return -1076604521;
					case 4:
						return 919455489;
					default:
						break;
				}
				return -1427408128;
			case 41:
				return 598461796;
			case 42:
				switch (iParam1)
				{
					case 0:
						return -1171602865;
					case 1:
						return -632377398;
					default:
						break;
				}
				return -190635712;
			case 43:
				switch (iParam1)
				{
					case 0:
						return 1379819153;
					case 1:
						return -456339986;
					case 2:
						return 458545376;
					case 3:
						return 610100918;
					default:
						break;
				}
				return -2132368512;
			case 44:
				return 544369376;
			case 45:
				switch (iParam1)
				{
					case 0:
						return -1386454342;
					case 1:
						return -1472914811;
					default:
						break;
				}
				return 1517869312;
			case 46:
				switch (iParam1)
				{
					case 0:
						return -1244997037;
					case 1:
						return 1336213836;
					default:
						break;
				}
				return 1497529856;
			case 47:
				switch (iParam1)
				{
					case 0:
						return 1723732770;
					default:
						break;
				}
				return 516059168;
			case 48:
				switch (iParam1)
				{
					case 0:
						return -1862350799;
					default:
						break;
				}
				return 138359424;
			case 49:
				return 1602493990;
			case 50:
				switch (iParam1)
				{
					case 0:
						return 155959053;
					case 1:
						return 2125427011;
					case 2:
						return 371707271;
					case 3:
						return -731143567;
					case 4:
						return -742996004;
					default:
						break;
				}
				return -773614592;
			case 51:
				switch (iParam1)
				{
					case 0:
						return -114145497;
					case 1:
						return -770317277;
					default:
						break;
				}
				return -1496303104;
			case 52:
				switch (iParam1)
				{
					case 0:
						return 1512765774;
					case 1:
						return -189901396;
					default:
						break;
				}
				return 855036416;
			case 53:
				switch (iParam1)
				{
					case 0:
						return -1334437481;
					case 1:
						return -316021716;
					default:
						break;
				}
				return 1818026880;
			case 54:
				switch (iParam1)
				{
					case 0:
						return -1743740213;
					case 1:
						return -170394045;
					default:
						break;
				}
				return -1865567744;
			case 55:
				return 1762656414;
			case 56:
				switch (iParam1)
				{
					case 0:
						return -117822482;
					case 1:
						return 2050912022;
					case 2:
						return -631458463;
					default:
						break;
				}
				return 1729892352;
			case 57:
				switch (iParam1)
				{
					case 0:
						return 494567551;
					case 1:
						return 1070551761;
					case 2:
						return -1249279900;
					default:
						break;
				}
				return 1256394752;
			case 58:
				switch (iParam1)
				{
					case 0:
						return 1053173243;
					case 1:
						return -239132243;
					default:
						break;
				}
				return -2137622144;
			case 59:
				return -2018341642;
			case 60:
				switch (iParam1)
				{
					case 0:
						return 1901777355;
					default:
						break;
				}
				return 922910144;
			case 61:
				switch (iParam1)
				{
					case 0:
						return -195996461;
					default:
						break;
				}
				return 1967427328;
			case 62:
				switch (iParam1)
				{
					case 0:
						return 1050124907;
					case 1:
						return 1877863225;
					default:
						break;
				}
				return 1397209856;
			case 63:
				return -1618254924;
			case 64:
				switch (iParam1)
				{
					case 0:
						return 1827343540;
					case 1:
						return 2139528616;
					default:
						break;
				}
				return 1380866816;
			case 65:
				switch (iParam1)
				{
					case 0:
						return -1926993706;
					case 1:
						return 2073650155;
					default:
						break;
				}
				return 1432305280;
			case 66:
				switch (iParam1)
				{
					case 0:
						return 1806437024;
					default:
						break;
				}
				return 1650308608;
			case 67:
				switch (iParam1)
				{
					case 0:
						return -2133679238;
					case 1:
						return -1797377830;
					default:
						break;
				}
				return 685182784;
			case 68:
				switch (iParam1)
				{
					case 0:
						return -1237105013;
					case 1:
						return -522278917;
					default:
						break;
				}
				return -2001177728;
			case 69:
				return -2137572125;
			case 70:
				switch (iParam1)
				{
					case 0:
						return 638370814;
					case 1:
						return -1062366341;
					default:
						break;
				}
				return -948494848;
			case 71:
				return -774894224;
			case 72:
				switch (iParam1)
				{
					case 0:
						return -1267862564;
					case 1:
						return 28828972;
					default:
						break;
				}
				return -1846020608;
			case 73:
				switch (iParam1)
				{
					case 0:
						return 306936642;
					case 1:
						return 460031053;
					case 2:
						return 381656699;
					default:
						break;
				}
				return -188029312;
			case 74:
				switch (iParam1)
				{
					case 0:
						return -211653282;
					default:
						break;
				}
				return -301233792;
		}
	}
	else if (iParam0 >= 75 && iParam0 <= 118)
	{
		switch (iParam0)
		{
			case 75:
				return -346537584;
			case 76:
				switch (iParam1)
				{
					case 0:
						return -550739017;
					default:
						break;
				}
				return -1829585536;
			case 77:
				switch (iParam1)
				{
					case 0:
						return -609376390;
					case 1:
						return -311112952;
					case 2:
						return -682765316;
					case 3:
						return -2127446978;
					default:
						break;
				}
				return 1338777472;
			case 78:
				switch (iParam1)
				{
					case 0:
						return 581221752;
					case 1:
						return 20416722;
					default:
						break;
				}
				return 1293249792;
			case 79:
				switch (iParam1)
				{
					case 0:
						return -1786500412;
					default:
						break;
				}
				return 235904384;
			case 80:
				return -334565466;
			case 81:
				switch (iParam1)
				{
					case 0:
						return 31964051;
					case 1:
						return 245875704;
					default:
						break;
				}
				return 1046770304;
			case 82:
				switch (iParam1)
				{
					case 0:
						return 48921735;
					case 1:
						return 1062398415;
					default:
						break;
				}
				return -2047991552;
			case 83:
				return -1752276745;
			case 84:
				switch (iParam1)
				{
					case 0:
						return 418356694;
					case 1:
						return -1090928636;
					default:
						break;
				}
				return -1021157760;
			case 85:
				switch (iParam1)
				{
					case 0:
						return 278246928;
					case 1:
						return 1092461253;
					default:
						break;
				}
				return 900051136;
			case 86:
				return 1417655457;
			case 87:
				switch (iParam1)
				{
					case 0:
						return 188835226;
					case 1:
						return 220332139;
					default:
						break;
				}
				return 1359760512;
			case 88:
				switch (iParam1)
				{
					case 0:
						return -1638860831;
					case 1:
						return -812497188;
					default:
						break;
				}
				return 1616003072;
			case 89:
				return -69702063;
			case 90:
				switch (iParam1)
				{
					case 0:
						return -479871262;
					default:
						break;
				}
				return -1670654720;
			case 91:
				return -331264815;
			case 92:
				return -1217205534;
			case 93:
				switch (iParam1)
				{
					case 0:
						return -1662432355;
					case 1:
						return -368935814;
					default:
						break;
				}
				return -1021345856;
			case 94:
				switch (iParam1)
				{
					case 0:
						return -735413614;
					case 1:
						return -972169639;
					case 2:
						return -673250821;
					case 3:
						return 161473916;
					default:
						break;
				}
				return -1329933952;
			case 95:
				switch (iParam1)
				{
					case 0:
						return -1645068573;
					default:
						break;
				}
				return 1248360320;
			case 96:
				switch (iParam1)
				{
					case 0:
						return 884363685;
					case 1:
						return 368673822;
					case 2:
						return 578628915;
					case 3:
						return 689154642;
					case 4:
						return 471198511;
					case 5:
						return 967199063;
					case 6:
						return -38616787;
					case 7:
						return -1294637989;
					default:
						break;
				}
				return -84111088;
			case 97:
				switch (iParam1)
				{
					case 0:
						return -1639179308;
					case 1:
						return -436408638;
					default:
						break;
				}
				return 1995021696;
			case 98:
				switch (iParam1)
				{
					case 0:
						return 1464772696;
					case 1:
						return 6449957;
					default:
						break;
				}
				return -1853564800;
			case 99:
				switch (iParam1)
				{
					case 0:
						return 803309489;
					case 1:
						return -31873580;
					case 2:
						return -1922690045;
					case 3:
						return 515105064;
					default:
						break;
				}
				return -1759022208;
			case 100:
				return -307424281;
			case 101:
				switch (iParam1)
				{
					case 0:
						return 1006898715;
					case 1:
						return 1573993134;
					default:
						break;
				}
				return -1402545280;
			case 102:
				return -1979014350;
			case 103:
				return 2096137174;
			case 104:
				switch (iParam1)
				{
					case 0:
						return -861435303;
					case 1:
						return 2076430727;
					case 2:
						return -1266577036;
					default:
						break;
				}
				return 493009408;
			case 105:
				return 1152564685;
			case 106:
				switch (iParam1)
				{
					case 0:
						return 2036836823;
					case 1:
						return 2046057828;
					case 2:
						return -526712830;
					case 3:
						return -242317110;
					case 4:
						return 1729814355;
					case 5:
						return 1868875718;
					case 6:
						return -785635151;
					case 7:
						return 1586170447;
					case 8:
						return -291036947;
					default:
						break;
				}
				return -832026176;
			case 107:
				switch (iParam1)
				{
					case 0:
						return -981210833;
					case 1:
						return 875440489;
					default:
						break;
				}
				return -508430848;
			case 108:
				switch (iParam1)
				{
					case 0:
						return 1491780341;
					case 1:
						return 1920169067;
					default:
						break;
				}
				return -227796128;
			case 109:
				switch (iParam1)
				{
					case 0:
						return -1255044808;
					case 1:
						return -1012076841;
					default:
						break;
				}
				return -871899648;
			case 110:
				switch (iParam1)
				{
					case 0:
						return 792345848;
					case 1:
						return 121209110;
					default:
						break;
				}
				return 14115413;
			case 111:
				switch (iParam1)
				{
					case 0:
						return -1152301466;
					case 1:
						return -1113682855;
					case 2:
						return -1801389871;
					case 3:
						return -180725957;
					case 4:
						return 1811628790;
					default:
						break;
				}
				return 2016864128;
			case 112:
				switch (iParam1)
				{
					case 0:
						return 635397890;
					default:
						break;
				}
				return -717212864;
			case 113:
				return 1487351956;
			case 114:
				switch (iParam1)
				{
					case 0:
						return 1955914312;
					case 1:
						return 1685893021;
					case 2:
						return -711771194;
					case 3:
						return 146337879;
					default:
						break;
				}
				return 205846784;
			case 115:
				switch (iParam1)
				{
					case 0:
						return -775876869;
					case 1:
						return -39469638;
					default:
						break;
				}
				return 1483441280;
			case 116:
				switch (iParam1)
				{
					case 0:
						return 2113065035;
					case 1:
						return -2101774133;
					default:
						break;
				}
				return -815072896;
			case 117:
				return -689015496;
			case 118:
				switch (iParam1)
				{
					case 0:
						return -18903616;
					case 1:
						return -1607469655;
					default:
						break;
				}
				return -640409664;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 119:
				return 1996937952;
		}
	}
	return 1968536545;
}

void func_196(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_185() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_197(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

bool func_198(int iParam0)
{
	if (((func_199(iParam0, 1) && func_199(iParam0, 2)) && func_199(iParam0, 8)) && func_199(iParam0, 512))
	{
		return true;
	}
	return false;
}

bool func_199(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 8;
		case 75:
			return 9;
		case 76:
			return 3;
		case 4:
			return 3;
		case 77:
			return 3;
		case 8:
			return 17;
		case 5:
			return 5;
		case 6:
			return 6;
		case 7:
			return 5;
		case 78:
			return 4;
		case 9:
			return 2;
		case 10:
			return 7;
		case 11:
			return 8;
		case 12:
			return 7;
		case 13:
			return 6;
		case 14:
			return 4;
		case 79:
			return 2;
		case 15:
			return 10;
		case 80:
			return 3;
		case 81:
			return 1;
		case 82:
			return 2;
		case 83:
			return 6;
		case 84:
			return 6;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 2;
		case 16:
			return 1;
		case 88:
			return 1;
		case 89:
			return 6;
		case 90:
			return 14;
		case 18:
			return 6;
		case 17:
			return 2;
		case 91:
			return 2;
		case 19:
			return 3;
		case 92:
			return 6;
		case 20:
			return 2;
		case 21:
			return 5;
		case 93:
			return 1;
		case 22:
			return 5;
		case 23:
			return 1;
		case 94:
			return 1;
		case 24:
			return 2;
		case 119:
			return 2;
		case 27:
			return 6;
		case 28:
			return 6;
		case 29:
			return 6;
		case 95:
			return 7;
		case 30:
			return 2;
		case 112:
			return 5;
		case 31:
			return 3;
		case 32:
			return 4;
		case 33:
			return 17;
		case 34:
			return 4;
		case 35:
			return 14;
		case 96:
			return 3;
		case 36:
			return 4;
		case 37:
			return 1;
		case 97:
			return 3;
		case 98:
			return 3;
		case 38:
			return 4;
		case 39:
			return 1;
		case 40:
			return 3;
		case 41:
			return 14;
		case 42:
			return 1;
		case 99:
			return 6;
		case 100:
			return 2;
		case 43:
			return 6;
		case 44:
			return 13;
		case 101:
			return 5;
		case 102:
			return 4;
		case 103:
			return 2;
		case 45:
			return 2;
		case 104:
			return 3;
		case 46:
			return 4;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 8;
		case 50:
			return 9;
		case 106:
			return 16;
		case 107:
			return 16;
		case 51:
			return 6;
		case 108:
			return 5;
		case 53:
			return 10;
		case 54:
			return 8;
		case 56:
			return 4;
		case 55:
			return 1;
		case 57:
			return 14;
		case 109:
			return 2;
		case 58:
			return 1;
		case 110:
			return 5;
		case 59:
			return 15;
		case 60:
			return 3;
		case 61:
			return 13;
		case 62:
			return 2;
		case 111:
			return 4;
		case 67:
			return 6;
		case 68:
			return 3;
		case 113:
			return 7;
		case 114:
			return 1;
		case 115:
			return 3;
		case 117:
			return 6;
		case 116:
			return 1;
		case 63:
			return 6;
		case 64:
			return 22;
		case 65:
			return 2;
		case 66:
			return 2;
		case 69:
			return 5;
		case 70:
			return 8;
		case 71:
			return 8;
		case 118:
			return 4;
		case 72:
			return 4;
		case 73:
			return 4;
		case 74:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_201(bool bParam0)
{
	if (bParam0)
	{
		return func_347(Global_1359489->f_4);
	}
	get_group_size(func_348(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_348(), iVar3);
		if (func_349(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_202(var uParam0)
{
	func_44(uParam0, 256);
}

void func_203(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_350(&((*iParam0)[iVar0]->f_1));
		func_350(&((*iParam0)[iVar0]->f_12));
		iVar0++;
	}
}

void func_204(char* sParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (is_string_null_or_empty((*uParam1)[iVar0]))
		{
			StringCopy((*uParam1)[iVar0], sParam0, 64);
			request_anim_dict((*uParam1)[iVar0]);
			return;
		}
		iVar0++;
	}
}

bool func_205(var uParam0)
{
	if (!func_351(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_12 != 0)
	{
		if (!func_351(uParam0->f_12))
		{
			return false;
		}
	}
	if (uParam0->f_3 != 41788943)
	{
		if (!_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			uParam0->f_5 = _request_metaped_outfit(uParam0->f_1, uParam0->f_3);
			if (!_is_metaped_outfit_request_valid(uParam0->f_5))
			{
				uParam0->f_3 = 41788943;
			}
			return false;
		}
		else if (!_0x610438375e5d1801(uParam0->f_5))
		{
			return false;
		}
	}
	return true;
}

Vector3 func_206(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0f, 0f, 0f;
	}
	if (!func_197(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (func_352(iParam0) == 0)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = (func_353(iParam0) + iParam1);
	if (iVar0 >= 892)
	{
		return 0f, 0f, 0f;
	}
	return *Global_1310750->f_13358[iVar0];
}

void func_207(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_91(iParam0, 32))
	{
		if (func_354(iParam0, uParam1->f_4, &(uParam1->f_12)))
		{
			if (bParam4)
			{
				vVar1 = { func_355(Global_35, &(uParam1->f_12)) };
				if (!func_211(vVar1))
				{
					*uParam1 = { vVar1 };
				}
			}
		}
	}
	if (bParam2)
	{
		func_356(uParam1, bParam2);
	}
	if (bParam3)
	{
		fVar4 = func_265(iParam0);
		iVar0 = _create_volume_cylinder_with_custom_name(*uParam1, 0f, 0f, 0f, fVar4, fVar4, fVar4, func_266());
		if (func_357(Global_1310750[iParam0], 33554432))
		{
			func_268(iVar0, func_267(iParam0), 1, 0, 2, 0, -1082130432);
		}
		else
		{
			func_268(iVar0, func_267(iParam0), 1, 0, 8, 0, -1082130432);
		}
		if (func_91(iParam0, 1))
		{
			func_358(*uParam1 + Vector(1f, 0f, 0f), 25f, "Beat Inner", 1, 0, 32, 0, -1082130432);
		}
	}
	func_359(iParam0);
}

bool func_208(int iParam0, var uParam1)
{
	*uParam1 = _0x74f0209674864cbd();
	if (!_0x1ac5a8ab50cfaa33(*uParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if ((*Global_1310750)[iParam0]->f_4.f_4[iVar0]->f_1 != -1)
		{
			func_360(uParam1, *(*Global_1310750)[iParam0]->f_4.f_4[iVar0]);
		}
		iVar0++;
	}
	if (func_120(iParam0, 16))
	{
		_0xb8e3486d107f4194(*uParam1, 55f);
		_0x827a58ced9d4d5b4(*uParam1, 180f);
		fVar2 = to_float(func_361(iParam0));
		fVar1 = 60f;
	}
	else
	{
		_0x65d281985f2bdfc2(*uParam1, 35f);
		_0x827a58ced9d4d5b4(*uParam1, 65f);
		fVar2 = to_float(func_361(iParam0));
		fVar1 = 60f;
	}
	_0x9b6a58fdb0024f12(*uParam1, 35f);
	_0x954451ea2d2120fb(*uParam1, fVar2);
	_0x0f4f6c4ce471259d(*uParam1, (fVar2 + fVar1));
	_0x4a7d73989f52eb37(*uParam1, (fVar2 + 10f));
	_0x8f8c84363810691a(*uParam1, 7f);
	_0x2b8af29a78024bd3(*uParam1);
	return true;
}

void func_209(int iParam0, float fParam1, float fParam2, int iParam3, bool bParam4)
{
	switch (func_362(iParam0))
	{
		case 0:
			if (bParam4)
			{
				*fParam1 = 225f;
				*fParam2 = 6400f;
			}
			else
			{
				*fParam1 = 225f;
				*fParam2 = 4900f;
			}
			*iParam3 = 2500;
			break;
		case 1:
			if (!func_91(iParam0, 1))
			{
				if (func_120(iParam0, 2))
				{
				}
			}
			func_363(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 2:
			func_364(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = (*fParam1 * *fParam1);
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		case 3:
			func_364(fParam1, fParam2, iParam3, iParam0, bParam4);
			*fParam1 = 7f;
			*fParam2 = (*fParam2 * *fParam2);
			*iParam3 = (*iParam3 * *iParam3);
			break;
		default:
			break;
	}
	if (func_177(iParam0))
	{
		*fParam2 = 40000f;
	}
}

Vector3 func_210(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	fVar7 = 999999.9f;
	fVar8 = 0f;
	*bParam0 = 1;
	iVar0 = 0;
	while (iVar0 < func_352(iParam1))
	{
		if (!func_365(iParam1, iVar0))
		{
			vVar4 = { func_206(iParam1, iVar0) };
			if (!func_211(vVar4))
			{
				fVar8 = vdist(Global_36, vVar4);
				if (func_216(fVar8, iParam1))
				{
					*bParam0 = 0;
				}
				if (fVar8 < fVar7)
				{
					if (func_366(iParam1, vVar4, uParam2, uParam3))
					{
						fVar7 = vdist(Global_36, vVar4);
						vVar1 = { vVar4 };
					}
				}
			}
		}
		iVar0++;
	}
	if (!func_211(vVar4))
	{
	}
	return vVar1;
}

bool func_211(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_212(var uParam0, var uParam1, var uParam2, bool bParam3, int iParam4, int iParam5)
{
	if (uParam0->f_8 >= iParam4)
	{
		if (bParam3)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_56("BEAT_FAIL", 5000, 0, 1, 0, 0, -1, -1, 0);
		}
		*uParam2 = 1;
	}
	*uParam1 = iParam5;
	uParam0->f_8++;
	return 0;
}

int func_213(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	while (iVar0 < func_352(iParam0))
	{
		vVar1 = { func_206(iParam0, iVar0) };
		if (func_367(vVar1, vParam1, 1056964608, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_214(var uParam0)
{
	if (uParam0->f_7 == 0)
	{
		uParam0->f_7 = create_tracked_point();
		if (uParam0->f_7 == 0)
		{
		}
		set_tracked_point_info(uParam0->f_7, *uParam0, 4f);
	}
	else
	{
		iVar0 = _0xdfe332a5da6fe7c9(uParam0->f_7);
		if (iVar0 == -1)
		{
			return false;
		}
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

int func_215(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)
{
	vVar2 = { *uParam0 };
	func_368(Global_35, *uParam0, &(uParam0->f_37), 1061158912, 0, 0);
	if (func_369(&(uParam0->f_37), 500))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!func_211(*uParam0->f_12[iVar0]))
			{
				vVar5 = { *uParam0->f_12[iVar0] };
				vVar8 = { _0x83acc65d9acec5ef(Global_36, vVar2, vVar5, true) };
				if (vdist2(Global_36, vVar8) <= (35f * 35f) || vdist2(Global_36, *uParam0->f_12[iVar0]) <= (80f * 80f))
				{
					if (bParam4)
					{
						iVar1 = func_370(uParam0);
						if (iVar1 > -1 && iVar1 < 8)
						{
							*uParam0 = { *uParam0->f_12[iVar1] };
						}
					}
					uParam0->f_8 = 0;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return func_212(uParam0, uParam1, uParam2, bParam3, 16, 1000);
}

bool func_216(float fParam0, int iParam1)
{
	fVar3 = (fParam0 * fParam0);
	func_209(iParam1, &fVar0, &fVar1, &uVar2, 1);
	if (fVar3 > fVar1)
	{
		return false;
	}
	if (func_91(iParam1, 1))
	{
		if (fVar3 < fVar0)
		{
			return false;
		}
	}
	return true;
}

bool func_217(var uParam0, bool bParam1)
{
	*bParam1 = 0;
	if (_0x0365000d8bf86531(&(uParam0->f_10)) == 4)
	{
		*bParam1 = 1;
	}
	else if (_0x0365000d8bf86531(&(uParam0->f_10)) == 3)
	{
		*uParam0 = { _0x865732725536ee39(&(uParam0->f_10)) };
		return true;
	}
	return false;
}

bool func_218(int iParam0, var uParam1, var uParam2, struct<7> Param3, bool bParam10)
{
	if (func_371(iParam0, *uParam2))
	{
		return false;
	}
	if (!func_372(iParam0, uParam2))
	{
		return false;
	}
	if (!func_373(Param3))
	{
		return false;
	}
	if (bParam10)
	{
		if (!func_374(*uParam2, Global_35))
		{
			return false;
		}
	}
	return true;
}

bool func_219(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 106:
			switch (iParam1)
			{
				case 1:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -771.7f, -1343.6f, 43.9f, 0f, 0f, 0f, 95f, 140f, 50f);
					_0x39816f6f94f385ad(*uParam2, -852.4f, -1349.5f, 45f, 5f, 0f, 0f, 70f, 130f, 50f);
					_0x39816f6f94f385ad(*uParam2, -907.6f, -1362.1f, 49f, 0f, 0f, 0f, 50f, 100f, 50f);
					return true;
				case 2:
					*uParam2 = _create_volume_aggregate();
					_0x39816f6f94f385ad(*uParam2, -270.606f, 827.282f, 118.4249f, 0f, 0f, 11.275f, 80f, 100.4f, 86.6f);
					_0x39816f6f94f385ad(*uParam2, -235.442f, 653.1498f, 112.3099f, 0f, 0f, 49.575f, 44.4f, 76.775f, 50f);
					_0x39816f6f94f385ad(*uParam2, -236.9004f, 797.5648f, 121.6383f, 0f, 0f, 17.55f, 53.975f, 105.5f, 20f);
					_0x39816f6f94f385ad(*uParam2, -339.8f, 829.675f, 100f, 0f, 0f, 14.975f, 25f, 75f, 50f);
					return true;
			}
			break;
	}
	return false;
}

void func_220(int iParam0, int iParam1)
{
	if (func_375(iParam0))
	{
		return;
	}
	if (func_376(iParam0) == iParam1)
	{
		return;
	}
	if (Global_36602 >= 10)
	{
		Global_36602 = 0;
	}
	Global_36581[Global_36602]->f_1 = iParam1;
	Global_36581[Global_36602] = iParam0;
	Global_36602++;
}

void func_221(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
	if (bParam3)
	{
		func_115(&iParam1, 8192);
	}
	if (bParam4)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
	}
}

bool func_222()
{
	iVar0 = 0;
	while (iVar0 < &Global_1899517)
	{
		if (Global_1899517[iVar0] == get_id_of_this_thread())
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_223(var uParam0, var uParam1, vector3 vParam2, float fParam5, bool bParam6, int iParam7)
{
	if (!does_entity_exist(*uParam1) && uParam0->f_1 != 0)
	{
		if (!does_entity_exist(uParam0->f_11) && uParam0->f_12 != 0)
		{
			if (has_model_loaded(uParam0->f_12))
			{
				Var2 = { func_377(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
				Var2.f_3 = func_378(fParam5, uParam0->f_18, uParam0->f_19);
				uParam0->f_11 = func_379(uParam0->f_12, uParam0, Var2, Var2.f_3, 1, 1, uParam0->f_14, 0, 1);
				if (func_380(uParam0->f_1, 1))
				{
					if (does_entity_exist(uParam0->f_11))
					{
						func_39(uParam0->f_11, 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_12, false);
			}
			return false;
		}
		else
		{
			if (has_model_loaded(uParam0->f_1))
			{
				bVar0 = (does_entity_exist(uParam0->f_11) && uParam0->f_13);
				if (bVar0)
				{
					Var2 = { func_377(vParam2, fParam5, uParam0->f_15, uParam0->f_19) };
					Var2.f_3 = func_378(fParam5, uParam0->f_18, uParam0->f_19);
				}
				else
				{
					bVar1 = (bParam6 || func_381(&(uParam0->f_22)));
					Var2 = { func_377(vParam2, fParam5, uParam0->f_6, bVar1) };
					Var2.f_3 = func_378(fParam5, uParam0->f_9, bVar1);
				}
				*uParam1 = func_379(uParam0->f_1, uParam0, Var2, Var2.f_3, iParam7, _is_this_model_a_horse(uParam0->f_1), uParam0->f_14, 0, 1);
				set_ped_config_flag(*uParam1, 307, true);
				if (!is_entity_dead(*uParam1))
				{
					if (bVar0)
					{
						func_382(*uParam1, uParam0->f_11, 1, -1, 1);
					}
					if (!is_string_null_or_empty(&(uParam0->f_23)))
					{
						func_102(*uParam1, &(uParam0->f_23), 0);
					}
				}
			}
			else
			{
				request_model(uParam0->f_1, false);
			}
			return false;
		}
	}
	return true;
}

bool func_224()
{
	return false;
}

bool func_225(int iParam0, var uParam1)
{
	if (!func_383(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_226(int iParam0)
{
	if (does_entity_exist(iParam0))
	{
		if (is_entity_a_ped(iParam0))
		{
			iVar0 = get_ped_index_from_entity_index(iParam0);
			if (is_ped_human(iVar0))
			{
				if (is_ped_male(iVar0))
				{
					return 536905469;
				}
				else
				{
					return -352521166;
				}
			}
		}
	}
	return 205298116;
}

var func_227(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_228(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!does_entity_exist((*uParam1)[iVar0]->f_6))
		{
			(*uParam1)[iVar0]->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_229(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, func_266());
	}
}

void func_230(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!_does_volume_exist(*uParam0))
	{
		*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, func_266());
	}
}

void func_231(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_sphere_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_232(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_303(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_233(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_303(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_234(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_303(iParam0);
	if (bParam1)
	{
		func_384(iParam0, 4);
		func_385(iVar0, 1);
		func_386(iVar0, 1);
	}
	else
	{
		func_387(iParam0, 4);
		func_386(iVar0, 0);
	}
}

void func_235(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

bool func_236()
{
	return &Global_1935436 == 2;
}

void func_237(int iParam0)
{
	if (iParam0 >= &Global_1935436)
	{
		return;
	}
	Global_1935436->f_1 = iParam0;
}

void func_238(int iParam0, int iParam1)
{
	if (get_random_event_flag())
	{
		return;
	}
	Global_17504.f_3++;
	Global_17504.f_42[iParam0]->f_1++;
	if (func_91(iParam0, 2))
	{
		func_389(iParam0, func_388(iParam1));
	}
	else
	{
		func_390(iParam0, func_131());
	}
	fVar0 = (1f + (to_float((Global_17504.f_42[iParam0]->f_1 / 2)) * 0.1f));
	if (fVar0 > 2f)
	{
		fVar0 = 2f;
	}
	else if (fVar0 < 1f)
	{
		fVar0 = 1f;
	}
	func_391(iParam0, (*Global_1310750)[iParam0]->f_36, fVar0, 1, 0);
	func_392(iParam0, 0);
	func_393(iParam0);
	func_394(1);
	set_ped_config_flag(Global_35, 514, true);
	if (!get_mission_flag())
	{
		set_random_event_flag(true);
	}
	_0x33d51f801cb16e4f();
	(*Global_1310750)[iParam0]->f_110 |= 4;
	Global_17504.f_6 = iParam0;
	Global_17504.f_10 = 1;
	Global_17504.f_7 = 0;
	Global_17504.f_8 = 0;
	if (!func_91(iParam0, 16))
	{
		func_239(iParam0, 0, 0, 0, 0);
	}
}

void func_239(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam1)
	{
	}
	if (func_395() == 0 && !bParam1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = &Global_1310750->f_13321[iVar0];
		if (((func_197(iVar1) && !func_91(iVar1, iParam2)) && (!bParam3 || !func_255(iVar1))) && (!bParam4 || !func_396(iVar1)))
		{
			if (iVar1 != iParam0)
			{
				func_397(iVar0);
			}
		}
		iVar0++;
	}
}

int func_240(int iParam0)
{
	return (*Global_1310750)[iParam0]->f_39;
}

void func_241(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_177 != -1 || func_357(Global_1310750[uParam0->f_3], 16777216))
	{
		if (bParam2)
		{
			if (func_91(uParam0->f_3, 1073741824))
			{
				func_398(2, -1, 0, 0, 0);
			}
			else
			{
				func_398(1, -1, 0, 0, 0);
			}
		}
		else if (bParam1)
		{
			if (uParam0->f_45)
			{
				func_398(8, -1, 0, 0, 0);
			}
		}
		if (uParam0->f_177 != -1)
		{
			if (bParam2)
			{
				if (!func_399(1, uParam0->f_177))
				{
					func_400(16, uParam0->f_177);
					func_401(1, uParam0->f_177);
				}
				compendium_gang_encountered(func_402(uParam0->f_177));
			}
		}
	}
	else if (bParam2 || (bParam1 && uParam0->f_45))
	{
		func_398(8, -1, 0, 0, 0);
	}
}

int func_242()
{
	if (func_403(Global_1935630->f_44))
	{
		if (_is_weapon_sniper(Global_1935630->f_44))
		{
			if (_0xa24c1d341c6e0d53(1, 1, 1))
			{
				if (is_player_free_aiming(player_id()))
				{
					return 1;
				}
			}
		}
		else if (func_404())
		{
			return 1;
		}
	}
	return 0;
}

bool func_243(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, bParam2, iParam3);
}

float func_244(var uParam0, bool bParam1)
{
	if (uParam0->f_119 == -1f)
	{
		if (func_91(uParam0->f_3, 1024))
		{
			fVar0 = 95f;
		}
		else if (func_91(uParam0->f_3, 2048))
		{
			fVar0 = 80f;
		}
		else if (func_91(uParam0->f_3, 4096))
		{
			fVar0 = 65f;
		}
		else if (func_91(uParam0->f_3, 8192))
		{
			fVar0 = 55f;
		}
		else if (func_91(uParam0->f_3, 16384))
		{
			fVar0 = 30f;
		}
		else
		{
			fVar0 = 85f;
		}
		if (func_91(uParam0->f_3, 1))
		{
		}
		else if (func_91(uParam0->f_3, 2))
		{
			fVar0 = (fVar0 - 15f);
		}
		uParam0->f_119 = fVar0;
	}
	fVar0 = uParam0->f_119;
	if (bParam1)
	{
		fVar0 = (fVar0 + 150f);
	}
	return fVar0;
}

int func_245(var uParam0, float fParam1, int iParam2, int iParam3, float fParam4, bool bParam5, int iParam6)
{
	iParam2 = iParam2;
	if (is_entity_dead(uParam0->f_6))
	{
		return 0;
	}
	fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
	switch (*uParam0)
	{
		case 0:
			if (is_entity_a_ped(uParam0->f_6) && !_0x5102307ce88798eb(get_ped_index_from_entity_index(uParam0->f_6)))
			{
				request_ped_visibility_tracking(get_ped_index_from_entity_index(uParam0->f_6));
			}
			else if (func_405(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (is_entity_occluded(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (is_entity_a_ped(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = _0x164cecc59e70df86(get_ped_index_from_entity_index(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = is_tracked_ped_visible(get_ped_index_from_entity_index(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = _0xc8ccdb712fbcba92(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (is_entity_occluded(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !is_entity_a_ped(uParam0->f_6))
					{
						fVar0 = vdist2(Global_36, get_entity_coords(uParam0->f_6, false, false));
					}
					if (func_406(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_305() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_246(var uParam0, int iParam1, float fParam2)
{
	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((does_entity_exist((*uParam0)[iVar0]->f_6) && (*uParam0)[iVar0]->f_7 > 0f) && is_entity_on_screen((*uParam0)[iVar0]->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (*uParam0)[iVar0]->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_122(uParam0);
	return true;
}

bool func_247()
{
	return (Global_1894899 & 1 != 0 && func_3() != -1);
}

bool func_248(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_98)
	{
		if (&uParam0->f_98[iVar0] != 0f)
		{
			if (&uParam0->f_98[iVar0] < fParam1)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_249(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_408(func_407());
	if (func_2(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_2(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_2(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_2(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_2(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_2(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_2(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_2(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_2(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

bool func_250(int iParam0, int iParam1)
{
	return (func_240(iParam0) && iParam1) != 0;
}

bool func_251(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	else if (iParam0 & -1 == -1)
	{
		return true;
	}
	_get_weather_type_transition(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 0.5f)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (iParam0 & 1 == 1 && func_409(iVar3))
	{
		return true;
	}
	if (iParam0 & 2 == 2 && func_410(iVar3))
	{
		return true;
	}
	if (iParam0 & 4 == 4 && func_411(iVar3))
	{
		return true;
	}
	if (iParam0 & 8 == 8 && func_412(iVar3))
	{
		return true;
	}
	if (iParam0 & 16 == 16 && func_413(iVar3))
	{
		return true;
	}
	if (iParam0 & 32 == 32 && func_414(iVar3))
	{
		return true;
	}
	if (iParam0 & 64 == 64 && func_415(iVar3))
	{
		return true;
	}
	return false;
}

bool func_252(bool bParam0)
{
	if (func_416(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_253(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_ped_using_any_scenario(iParam0))
	{
		return false;
	}
	iVar0 = _get_scenario_point_type_ped_is_using(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return true;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = _0xc22aa08a8adb87d4(iParam0);
		if (iVar0 == 970972795)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_254(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_12 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_417())
		{
			return true;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if ((*Global_1055058)[network_player_id_to_int()]->f_114 && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if (Global_1898164->f_1[0]->f_2 == 8)
	{
		iVar0 = func_418(&(Global_1898164->f_1[0]));
		if (func_419(iVar0) && func_420((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_421(&(Global_1898164->f_1[0])))
	{
		return true;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1898438)
		{
			return true;
		}
	}
	switch (Global_1898164->f_1[0]->f_2)
	{
		case 0:
			return false;
		case 1:
			return iParam0 & 1 == 0;
		case 4:
			return iParam0 & 2 == 0;
		case 6:
			return iParam0 & 4 == 0;
		case 2:
			return iParam0 & 16 == 0;
		case 5:
			return iParam0 & 32 == 0;
		case 9:
			return iParam0 & 64 == 0;
		case 8:
			return iParam0 & 8 == 0;
		case 10:
			return iParam0 & 512 == 0;
		case 3:
			return iParam0 & 128 == 0;
		case 11:
			return iParam0 & 256 == 0;
		default:
			break;
	}
	return false;
}

bool func_255(int iParam0)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	if (func_422(64) && func_423(iParam0))
	{
		return true;
	}
	return (*Global_1310750)[iParam0]->f_46;
}

bool func_256(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (!is_ped_injured(iParam0) || !bParam1)
		{
			iVar0 = get_interior_from_entity(iParam0);
			if (is_valid_interior(iVar0))
			{
				if (func_424(iVar0) || func_425(iVar0))
				{
					return false;
				}
				return true;
			}
		}
	}
	return false;
}

bool func_257()
{
	return Global_1894899 & 4 != 0;
}

int func_258(int iParam0)
{
	if (!func_426(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 11:
			return 0;
		case 76:
			return 1;
		case 15:
			return 3;
		case 128:
			return 2;
		default:
			break;
	}
	return -1;
}

bool func_259(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 4)
	{
		return false;
	}
	return true;
}

bool func_260(vector3 vParam0, int iParam3)
{
	if (!func_259(iParam3))
	{
		return false;
	}
	if (_does_volume_exist((*Global_1392194)[iParam3]->f_5))
	{
		return _0xf256a75210c5c0eb((*Global_1392194)[iParam3]->f_5, vParam0);
	}
	return false;
}

bool func_261(vector3 vParam0)
{
	if (func_211(vParam0))
	{
		return false;
	}
	fVar0 = func_191(func_247(), 6f, 22f);
	return _0x769bb7626b8cdb06(vParam0, fVar0, 1, 0, 16384);
}

bool func_262(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_id();
	if (!bParam4)
	{
		if (_0x1a51bfe60708e482(iVar0))
		{
			if (get_player_target_entity(iVar0, &iVar1))
			{
				if (!is_entity_a_mission_entity(iVar1))
				{
					if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
					{
						func_47(uParam0);
						if (bParam3)
						{
							return true;
						}
					}
					if (!bParam3)
					{
						return true;
					}
				}
			}
		}
	}
	if (_0x6c54e69516cc56bd(iVar0) > 0)
	{
		func_47(uParam0);
		return true;
	}
	if (!bParam4)
	{
		if (!func_46(uParam0))
		{
			return false;
		}
		else if (is_scripted_speech_playing(Global_35) || is_any_speech_playing(Global_35))
		{
			return true;
		}
		if (!func_142(uParam0, fParam2))
		{
			return true;
		}
		if (func_46(uParam0))
		{
			func_143(uParam0);
		}
	}
	return false;
}

bool func_263(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

void func_264(vector3 vParam0, int iParam3)
{
	if (func_211(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < &Global_1911670)
	{
		iVar1 = Global_1911670[iVar0];
		if (_0xf6a8a652a6b186cd(iVar1))
		{
			vVar2 = { _0xc4019cf9ae8e931a(iVar1) };
			if (func_367(vVar2, vParam0, 2f, 1))
			{
				if (iParam3 == 0 || _0x769bb7626b8cdb06(vVar2, 2f, 0, iParam3, 16384))
				{
					_0xfdfecc6ee4491e11(iVar1);
					(*Global_1911670)[iVar0] = 0;
				}
			}
		}
		iVar0++;
	}
}

float func_265(int iParam0)
{
	if (!func_197(iParam0))
	{
		return 0f;
	}
	if (!func_427(iParam0))
	{
		return 0f;
	}
	return (*Global_1310750)[iParam0]->f_44;
}

char* func_266()
{
	return "unnamed";
}

char* func_267(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "ANIMAL_ATTACK";
		case 75:
			return "BANDITO_BREAKOUT";
		case 8:
			return "BURNING_BODIES";
		case 1:
			return "ANIMAL_MAULING";
		case 2:
			return "APPROACH";
		case 3:
			return "ARMS_DEAL";
		case 76:
			return "BANDITO_EXECUTION";
		case 4:
			return "BEAR_TRAP";
		case 77:
			return "BGN_TOWN_ENCOUNTER";
		case 5:
			return "BOAT_ATTACK";
		case 6:
			return "BOOBY_TRAP";
		case 7:
			return "BOUNTY TRANSPORT";
		case 78:
			return "BRONTE_PATROL";
		case 9:
			return "CAMPFIRE_AMBUSH";
		case 10:
			return "CHAIN_GANG";
		case 11:
			return "CHECKPOINT";
		case 12:
			return "COACH_ROBBERY";
		case 79:
			return "CONSEQUENCE";
		case 13:
			return "CORPSE_CART";
		case 14:
			return "CRASHED_WAGON";
		case 80:
			return "DARK_ALLEY_AMBUSH";
		case 81:
			return "DARK_ALLEY_BUM";
		case 82:
			return "DARK_ALLEY_STAB";
		case 83:
			return "DEAD_BODIES";
		case 84:
			return "DEAD_JOHN";
		case 15:
			return "DEL_LOBO_POSSE";
		case 85:
			return "DISABLED_BEGGAR";
		case 86:
			return "DOMESTIC_DISPUTE";
		case 87:
			return "DROWN_MURDER";
		case 16:
			return "DRUNK_CAMP";
		case 88:
			return "DRUNK_DUELER";
		case 89:
			return "DUEL_BOASTER";
		case 90:
			return "DUEL_WINNER";
		case 17:
			return "ESCORT";
		case 18:
			return "EXECUTIONS";
		case 91:
			return "FLEEING_FAMILY";
		case 19:
			return "FLEEING_TRESPASSER";
		case 92:
			return "FOOT_ROBBERY";
		case 20:
			return "FRIENDLY_OUTDOORSMAN";
		case 21:
			return "FROZEN_TO_DEATH";
		case 22:
			return "FUSSAR_CHASE";
		case 23:
			return "GANG_CAMP_REMINDER";
		case 94:
			return "GANG_PED_ENCOUNTER";
		case 24:
			return "GOLD_PANNER";
		case 119:
			return "HERBALIST_CAMP";
		case 27:
			return "HORSE_RACE";
		case 28:
			return "HOSTAGE_RESCUE";
		case 29:
			return "INBRED_KIDNAP";
		case 30:
			return "INJURED_RIDER";
		case 95:
			return "INTIMIDATION TACTICS";
		case 31:
			return "KIDNAP_VICTIM";
		case 32:
			return "RALLY_DISPUTE";
		case 33:
			return "RALLY";
		case 34:
			return "RALLY_SETUP";
		case 35:
			return "LARAMIE_GANG_RUSTLING";
		case 96:
			return "LEM_TOWN_ENCOUNTER";
		case 36:
			return "LOCKED_SAFE";
		case 37:
			return "LONE_PRISONER";
		case 97:
			return "LOST_DOG";
		case 98:
			return "LOST_DRUNK";
		case 38:
			return "LOST_FRIEND";
		case 39:
			return "LOST_MAN";
		case 40:
			return "MOONSHINE_CAMP";
		case 41:
			return "MURDER_CAMPFIRE";
		case 42:
			return "NAKED_SWIMMER";
		case 93:
			return "FUNDRAISER";
		case 99:
			return "ODR_TOWN_ENCOUNTER";
		case 100:
			return "ON_THE_RUN";
		case 43:
			return "OUTLAW_LOOTER";
		case 44:
			return "OUTLAW_TRANSPORT";
		case 101:
			return "PARLOR_AMBUSH";
		case 102:
			return "PEEPING_TOM";
		case 103:
			return "PICKPOCKET";
		case 45:
			return "SNAKE_BITE";
		case 104:
			return "PISS_POT";
		case 46:
			return "PLAYER_CAMP_ATTACK";
		case 47:
			return "PLAYER_CAMP_STRANGER";
		case 48:
			return "POISONED";
		case 105:
			return "POLICE_CHASE";
		case 49:
			return "POSSE_BREAKOUT";
		case 50:
			return "PRISON_WAGON";
		case 106:
			return "PUBLIC_HANGING";
		case 107:
			return "RAT_INFESTATION";
		case 51:
			return "RIFLE_PRACTICE";
		case 108:
			return "ROWDY_DRUNKS";
		case 53:
			return "SAVAGE_AFTERMATH";
		case 54:
			return "SAVAGE_FIGHT";
		case 56:
			return "SAVAGE_WAGON";
		case 55:
			return "SAVAGE_WARNING";
		case 57:
			return "SHARP_SHOOTER";
		case 109:
			return "SHOW_OFF";
		case 58:
			return "SKIPPING_STONES";
		case 110:
			return "SLUM_AMBUSH";
		case 59:
			return "SPOOKED_HORSE";
		case 60:
			return "STALKING_HUNTER";
		case 61:
			return "STALKING_SHADOWS";
		case 62:
			return "STRANDED_RIDER";
		case 111:
			return "STREET_FIGHT";
		case 112:
			return "TAUNTING";
		case 67:
			return "TORTURING_CAPTIVE";
		case 68:
			return "TORCH_PROCESSION";
		case 113:
			return "TOWN_BURIAL";
		case 114:
			return "TOWN_CONFRONTATION";
		case 115:
			return "TOWN_ROBBERY";
		case 117:
			return "TOWN_TERROR";
		case 116:
			return "TOWN_WIDOW";
		case 63:
			return "TRAFFIC_ATTACK";
		case 64:
			return "TRAIN_HOLDUP";
		case 65:
			return "TRAPPED_WOMAN";
		case 66:
			return "TREASURE_HUNTER";
		case 69:
			return "VOICE";
		case 70:
			return "WAGON_THREAT";
		case 71:
			return "WASHED_ASHORE";
		case 118:
			return "WEALTHY_COUPLE";
		case 72:
			return "WILDERNESS_HANGING";
		case 73:
			return "WILD_MAN";
		case 74:
			return "WILD_MAN_CAVE";
		default:
			break;
	}
	return "BEAT NO NAME";
}

int func_268(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_358(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

void func_269(int iParam0, bool bParam1, int iParam2)
{
	func_428(iParam2);
	if (Global_1572887->f_12 == -1)
	{
		if (!does_entity_exist(Global_35))
		{
			return;
		}
		if (Global_1935630->f_12)
		{
			return;
		}
	}
	else
	{
		if (!Global_1225639->f_11)
		{
			return;
		}
		if (Global_1225639->f_12)
		{
			return;
		}
	}
	if (bParam1)
	{
		iParam0->f_10 = 0;
	}
	iParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		iParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		iParam0->f_13 = func_429(0);
	}
	switch (iParam0->f_6)
	{
		case 0:
			if (*iParam0 & 16 != 0)
			{
				if (!*iParam0 & 33554432 != 0)
				{
					if (iParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_116(iParam0, 33554432);
						}
					}
					else if (!*iParam0 & 8192 != 0)
					{
						if (func_252(1))
						{
							func_116(iParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_252(1) || *iParam0 & 8192 != 0))
				{
					func_115(iParam0, 33554432);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!iParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(iParam0->f_14))
		{
			if (func_430(iParam0))
			{
				iParam0->f_15 = func_288();
			}
		}
		else if (iParam0->f_15 > 0)
		{
			if ((func_288() - iParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(iParam0->f_14))
				{
					iParam0->f_14 = 0;
					iParam0->f_15 = 0;
				}
			}
		}
	}
	iParam0->f_6++;
	if (iParam0->f_6 >= 4)
	{
		iParam0->f_6 = 0;
		iParam0->f_7++;
		if (iParam0->f_7 > 4)
		{
			iParam0->f_7 = 0;
		}
	}
	func_431(iParam0);
}

bool func_270(int iParam0, int iParam1)
{
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case -196899787:
		case 178452260:
		case 869302489:
		case 1589923363:
			iVar1 = _0x822a001bcea5bd81(iParam0, iVar0, 0, 0);
			if (!is_entity_a_ped(iVar1))
			{
				return false;
			}
			iVar2 = get_ped_index_from_entity_index(iVar1);
			if (!is_ped_human(iVar2))
			{
				return false;
			}
			if (decor_exist_on(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_33)
			{
				return false;
			}
			if (iVar2 == Global_1935630->f_32)
			{
				return false;
			}
			if (!func_432(iParam0, iParam1, iVar2))
			{
				return false;
			}
			if (func_433(iParam0, iVar2) <= func_434(iParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_271(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		iParam1->f_10 = iParam0;
	}
	if (func_435(iParam2, 1, 1, 1, 0))
	{
		func_116(iParam1, 2048);
	}
	iParam1->f_16 = iParam2;
	func_327(iParam1, 1);
	func_345();
}

bool func_272(int iParam0, int iParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_436(iParam0, !*iParam1 & 268435456 != 0, !*iParam1 & 536870912 != 0, !*iParam1 & 1073741824 != 0, 0, 0))
		{
			if (iParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (iParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_437(iParam1);
			if (func_438(iParam1, iParam0, fVar0, fVar1))
			{
				if (iParam1->f_2 == 0)
				{
					iParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - iParam1->f_2);
				iVar3 = func_439(iParam1);
				if (iParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_327(iParam1, 1);
						return true;
					}
					else if (iParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_327(iParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_273(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	fVar0 = 85f;
	if (func_440(iParam1, !*iParam2 & 268435456 != 0, !*iParam2 & 536870912 != 0, !*iParam2 & 1073741824 != 0, 0))
	{
		if (iParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (iParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_437(iParam2);
		if (func_438(iParam2, iParam0, fVar0, fVar1))
		{
			if (iParam2->f_2 == 0)
			{
				iParam2->f_2 = get_game_timer();
			}
			if (iParam2->f_2 != 0)
			{
				if (get_game_timer() - iParam2->f_2) > func_439(iParam2)
				{
					func_327(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_274(int iParam0, int iParam1)
{
	if (!get_entity_player_is_free_aiming_at(player_id(), &iVar0))
	{
		return false;
	}
	if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!is_entity_a_ped(iVar0))
	{
		return false;
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (func_432(iParam0, iParam1, iVar1))
	{
		if (iParam1->f_3 == 0)
		{
			iParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - iParam1->f_3) > func_439(iParam1)
		{
			fVar3 = func_437(iParam1);
			if (iParam1->f_12 < fVar3)
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17) && has_entity_clear_los_to_entity(iParam0, iVar1, 17))
				{
					if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, fVar3, -1f, -1f) && _0x06087579e7aa85a9(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_275(int iParam0, float fParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_288();
	iVar1 = (iVar0 - iParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_276(var uParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_441(iParam2);
			if (!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261)
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
			else if (is_weapon_valid(Global_1935630->f_46) && _0xea522f991e120d45(Global_1935630->f_46))
			{
				_0xd355e2f1bb41087e(iParam1, 5f);
			}
			else
			{
				_0xd355e2f1bb41087e(iParam1, fVar0);
			}
		}
		if ((!is_weapon_valid(Global_1935630->f_46) || Global_1935630->f_46 == -1569615261) || (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (_0x9c81338b2e62ce0a(player_id(), iParam1, iVar1) && _0x285d36c5c72b0569(uParam0) <= fVar2)
		{
			if (func_284(iParam2, iParam1))
			{
				func_327(iParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_277(var uParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 < IntToFloat(func_442(iParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_284(iParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_327(iParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_278(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_443(iParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_327(iParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, iParam2->f_27))
				{
					func_327(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar4, 0, 0);
					if (func_444(iParam1, vVar0, vVar4))
					{
						func_327(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, iParam2->f_22))
				{
					func_327(iParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, iParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, iParam2->f_26, &vVar7, 0, 0);
					if (func_444(iParam1, vVar0, vVar7))
					{
						func_327(iParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_279(int iParam0, int iParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *iParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_432(iParam0, iParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_445(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_446(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						iParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_447(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_448(iParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
			else if (func_449(iParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				iParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_280(int iParam0, int iParam1)
{
	if (!_0x1d1b448d719415ab(*iParam0))
	{
		return false;
	}
	iVar0 = _0x796eecff0c6d39be(*iParam0, 0, 0);
	switch (iVar0)
	{
		case -1695849405:
		case 2044016570:
			iVar1 = _0x822a001bcea5bd81(*iParam0, iVar0, 0, 0);
			iVar2 = _0x38497f139981c5c9(*iParam0, iVar0, 0, 0);
			vVar5 = { get_entity_coords(iVar1, false, false) };
			vVar8 = { get_entity_coords(iVar2, false, false) };
			_0x1a5c5d350068a673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_281(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_288();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_282(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = player_ped_id();
	if (!bParam3)
	{
		if (has_entity_been_damaged_by_any_ped(iParam0) || has_entity_been_damaged_by_any_vehicle(iParam0))
		{
			if (has_entity_been_damaged_by_entity(iParam0, iVar0, 1, 1))
			{
				return 1;
			}
			iVar1 = get_players_last_vehicle();
			if (!is_entity_dead(iVar1))
			{
				if (has_entity_been_damaged_by_entity(iParam0, iVar1, 1, 1))
				{
					return 1;
				}
			}
			if (is_ped_on_mount(iVar0))
			{
				if (!is_entity_dead(get_mount(iVar0)))
				{
					if (has_entity_been_damaged_by_entity(iParam0, get_mount(iVar0), 1, 1))
					{
						return 1;
					}
				}
			}
			else if (does_entity_exist(iParam1))
			{
				if (!is_entity_dead(iParam1))
				{
					if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_450(iVar0, &iVar2))
		{
			if ((is_ped_ragdoll(iParam0) || _0x947e43f544b6ab34(iParam0, player_id(), 10, 1000)) || (!bParam4 && is_entity_touching_entity(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_451(iVar0, iParam0))
	{
		return 1;
	}
	if (_0xd0b7aeb56229d317(player_ped_id()) == iParam0)
	{
		if (_0x0e99e3bf11bb6367(player_ped_id()))
		{
			return 1;
		}
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_being_jacked(iParam0))
		{
			if (get_peds_jacker(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (is_ped_performing_melee_action(iVar0, 8, 0))
	{
		if (get_ped_config_flag(iParam0, 9, true) || is_ped_being_stealth_killed(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_283(int iParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", iParam0->f_5))
		{
		}
	}
	else if (iParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_284(int iParam0, int iParam1)
{
	if (func_452(iParam0))
	{
		return true;
	}
	if (_0x29fce825613fefca(iParam1, 400))
	{
		return true;
	}
	if (is_ped_dead_or_dying(iParam1, true))
	{
		return false;
	}
	if ((is_ped_performing_melee_action(Global_35, 8, 0) || get_ped_config_flag(iParam1, 9, true)) || is_ped_being_stealth_killed(iParam1))
	{
		return false;
	}
	if (is_ped_performing_melee_action(Global_35, 16, 0) || get_ped_config_flag(iParam1, 10, true))
	{
		return false;
	}
	if (_get_lassoed_entity(Global_35) != 0)
	{
		return true;
	}
	if (!is_ped_ragdoll(iParam1))
	{
		return true;
	}
	return false;
}

bool func_285(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_147(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_286()
{
}

bool func_287(int iParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_453(iVar0, iParam1, vVar1))
		{
			iParam0->f_9 = func_288();
			return true;
		}
		else if (_0xa19447d83294e29f(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = _get_ped_in_draft_seat(iVar0, iVar6);
					if (does_entity_exist(iVar7))
					{
						if (func_156(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								iParam0->f_9 = func_288();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_288()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

bool func_289()
{
	if (Global_1935630->f_42 == 0)
	{
		return false;
	}
	if (Global_1935630->f_42 == Global_1935630->f_40)
	{
		return false;
	}
	if (Global_1935630->f_43 <= 0)
	{
		return false;
	}
	if ((func_288() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_290(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_434(iParam0);
	if (iParam0->f_12 > func_454(iParam0) && iParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_455(iParam1);
	iVar1 = func_456(iParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((iParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, 1, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, iParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, iParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, iParam0->f_14, 1, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

bool func_291(int iParam0, int iParam1, int iParam2)
{
	if (iParam2->f_12 > 4f)
	{
		return false;
	}
	bVar0 = *iParam2 & 256 != false;
	bVar1 = *iParam2 & 524288 != false;
	bVar2 = *iParam2 & 128 != false;
	return func_457(iParam0, iParam1, bVar0, bVar2, iParam2->f_12, bVar1);
}

bool func_292(int iParam0, int iParam1)
{
	if (*iParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*iParam1 & 33554432 != 0)
	{
		if (func_458(iParam0, iParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, 1, 0) == 1)
		{
			return true;
		}
	}
	iVar0 = get_jack_target(Global_35);
	if (does_entity_exist(iVar0) && !does_entity_belong_to_this_script(iVar0, true))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!_0x1d1b448d719415ab(iParam0))
	{
		return false;
	}
	iVar1 = _0x796eecff0c6d39be(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case -2027383723:
		case -870494873:
		case 73464052:
		case 1201762715:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (iVar4 != Global_35)
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			if (_0x88ad6cc10d8d35b2(iVar5))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			return true;
		case -1601932249:
			iVar2 = _0x822a001bcea5bd81(iParam0, iVar1, 0, 0);
			iVar3 = _0x38497f139981c5c9(iParam0, iVar1, 0, 0);
			if (!is_entity_a_ped(iVar2) || !is_entity_a_ped(iVar3))
			{
				_0x1a5c5d350068a673(iParam0, 0);
				return false;
			}
			iVar4 = get_ped_index_from_entity_index(iVar2);
			iVar5 = get_ped_index_from_entity_index(iVar3);
			if (_0x06087579e7aa85a9(iParam0, iVar4, -1f, -1f, -1f, -1f) && _0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, iVar4, 17) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!func_459(iParam1, iParam0))
					{
						if (func_156(iVar4, Global_36, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
	}
	return false;
}

bool func_293(int iParam0, int iParam1)
{
	if (!func_460(0))
	{
		return false;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_294(int iParam0, int iParam1)
{
	if (iParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_288();
	iVar1 = (iVar0 - iParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_295(int iParam0, int iParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

bool func_296(int iParam0, int iParam1)
{
	if (!is_ped_human(iParam0))
	{
		return false;
	}
	if (iParam1->f_4 == 0)
	{
		iParam1->f_4 = func_288();
	}
	else if (func_288() - iParam1->f_4) > func_461(iParam1)
	{
		return func_462(iParam0, iParam1, 0, -1082130432);
	}
	return false;
}

bool func_297(int iParam0, int iParam1)
{
	iVar0 = get_ped_source_of_death(iParam1);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (decor_exist_on(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = get_ped_index_from_entity_index(iVar0);
	if (Global_35 == iVar1 || Global_1935630->f_40 == iVar1)
	{
		return true;
	}
	return false;
}

var func_298(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

float func_299(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && is_entity_dead(iParam0))
	{
		return -1f;
	}
	return func_147(Global_35, iParam0, bParam1, bParam2);
}

bool func_300(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!bParam3)
	{
		return false;
	}
	if (fParam2 > 25f)
	{
		return false;
	}
	if (iParam1 == Global_35)
	{
		if (is_ped_in_combat(Global_35, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_301(int iParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_463(iParam0, &Var0);
}

int func_302(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_303(int iParam0)
{
	return iParam0;
}

void func_304(int iParam0)
{
	if (!func_464(iParam0))
	{
		return;
	}
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_delete((*Global_1945938)[iParam0]->f_3);
	}
	(*Global_1945938)[iParam0]->f_4 = 0;
	(*Global_1945938)[iParam0] = 1;
	(*Global_1945938)[iParam0]->f_16 = 0;
	(*Global_1945938)[iParam0]->f_1 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_2 = 1;
	(*Global_1945938)[iParam0]->f_15 = -1f;
}

float func_305()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_306(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_307(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_308(var uParam0)
{
	if (!func_46(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_328(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_305() - uParam0->f_1);
}

bool func_309(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_465(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_466(fParam0))
	{
		return false;
	}
	return true;
}

void func_310(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, float fParam5, float fParam6)
{
	if (func_164(&uLocal_490) > 15f)
	{
		if ((((func_36(iVar438, iParam0) && has_anim_event_fired(&(uLocal_433[0]), -1950704028)) && !is_any_speech_playing(&(uLocal_433[0]))) && func_147(&(uLocal_433[0]), Global_35, 1, 1) < fParam6) && func_164(&uLocal_463) > fVar448)
		{
			if (func_49(iParam1, sParam2))
			{
				_set_anim_scene_playback_list_bool(iParam1, sParam2, true);
				set_anim_scene_bool(iParam1, sParam3, true, false);
				fLocal_457 = fParam5;
				iLocal_335 = iParam4;
				func_47(&uLocal_469);
			}
		}
	}
	if (!has_anim_event_fired(&(uLocal_433[0]), -1950704028))
	{
		func_47(&uLocal_463);
	}
}

void func_311(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_185() != -1)
	{
		return;
	}
	if ((Global_36616 && func_129(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_467(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_468(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
	}
	else
	{
		iVar1 = -1;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar1 < 0)
			{
				if (&Global_1347477->f_155[iVar2] == 0)
				{
					iVar1 = iVar2;
				}
			}
			iVar2++;
		}
		if (iVar1 >= 0)
		{
			func_469(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_468(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

void func_312(int* iParam0, var uParam1)
{
	Var1.f_1 = -1;
	Var1.f_3 = -1;
	Var1.f_6 = -1;
	Var1.f_12 = 1073741824;
	Var1.f_16 = 1;
	Var22.f_2 = 570;
	Var22.f_3 = 1065353216;
	Var22.f_4 = -1082130432;
	Var22.f_9 = 2;
	func_470(iParam0, uParam1, 1);
	func_62(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_313(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_471(iParam0);
	if (bParam3)
	{
		func_472(iParam0, sParam1, iParam2);
	}
}

void func_314(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_473(iParam0, sParam4, iParam5);
	}
	func_474(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_315(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5)
{
	iVar0 = func_98(iParam0);
	if (!bParam1)
	{
		func_473(iVar0, sParam4, iParam5);
	}
	func_474(iVar0, bParam1, fParam2, iParam3, 752097756);
}

void func_316()
{
	if (iVar535 == 1)
	{
		return;
	}
	if ((!is_any_speech_playing(&(uLocal_433[0])) && !is_any_speech_playing(Global_35)) && func_52(&uLocal_484, 2f))
	{
		if (func_36(iVar446, 1) && !func_36(iVar446, 64))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_EARLY_POS_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 64);
		}
		else if (func_36(iVar446, 2) && !func_36(iVar446, 128))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_EARLY_NEG_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 128);
		}
		else if (func_36(iVar446, 4096) && !func_36(iVar446, 16384))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_CAUGHT_POS_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 16384);
			open_sequence_task(&iLocal_437);
			task_react(0, Global_35, 0f, 0f, 0f, "DEFAULT_NERVOUS", 3f, 0f, 4);
			_task_smart_flee_style_ped(0, Global_35, 2, 0, -1082130432, -1, 0);
			func_48(&(uLocal_433[0]), &iLocal_437, 0, 0, 1, 1);
		}
		else if (func_36(iVar446, 8192) && !func_36(iVar446, 32768))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_CAUGHT_NEG_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 32768);
			open_sequence_task(&iLocal_437);
			task_react(0, Global_35, 0f, 0f, 0f, "DEFAULT_NERVOUS", 3f, 0f, 4);
			_task_smart_flee_style_ped(0, Global_35, 3, 0, -1082130432, -1, 0);
			func_48(&(uLocal_433[0]), &iLocal_437, 0, 0, 1, 1);
			set_ped_keep_task(&(uLocal_433[0]), true);
		}
		else if (func_36(iVar446, 4) && !func_36(iVar446, 256))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_GAVE_POS_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 256);
		}
		else if (func_36(iVar446, 8) && !func_36(iVar446, 512))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_GAVE_NEG_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 512);
		}
		else if (func_36(iVar446, 16) && !func_36(iVar446, 1024))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_STOLE_POS_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 1024);
		}
		else if (func_36(iVar446, 32) && !func_36(iVar446, 2048))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_STOLE_NEG_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 2048);
		}
		else if (func_36(iVar446, 1048576) && !func_36(iVar446, 4194304))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_CONFESSED_POS_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 4194304);
		}
		else if (func_36(iVar446, 2097152) && !func_36(iVar446, 8388608))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_CONFESSED_NEG_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 8388608);
		}
		else if ((func_36(iVar446, 65536) && !func_36(iVar446, 262144)) && !func_36(iVar444, 8388608))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_DEFUSE_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 262144);
		}
		else if ((func_36(iVar446, 131072) && !func_36(iVar446, 524288)) && !func_36(iVar444, 8388608))
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_THREATEN_RESP"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 524288);
			if (func_46(&uLocal_472))
			{
				func_47(&uLocal_472);
			}
		}
		else if ((func_36(iVar446, 16777216) && !func_36(iVar446, 33554432)) && iVar324 == 1)
		{
			func_43(&(uLocal_433[0]), Global_35, func_42("ILO_THREATEN_RESP_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			func_44(&uLocal_448, 33554432);
		}
		func_51(&uLocal_487, 0);
	}
}

int func_317(int iParam0, int iParam1, int iParam2)
{
	switch (iParam0)
	{
		case 1:
			iVar0 = 64;
			break;
		case 3:
			iVar0 = 192;
			break;
		case 2:
			iVar0 = 208;
			break;
		case 4:
			iVar0 = 212;
			break;
		case 5:
			iVar0 = 77;
			break;
		case 7:
			iVar0 = 76;
			break;
		case 6:
			iVar0 = 96;
			break;
		default:
			iVar0 = 1;
			break;
	}
	iVar0 |= 16777216;
	if (iParam1 != 0)
	{
		iVar0 = (iVar0 || iParam1);
	}
	if (iParam2 != 0)
	{
		iVar0 = (iVar0 - (iVar0 && iParam2));
	}
	return iVar0;
}

int func_318(var uParam0, int* iParam1, float fParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, float fParam14, bool bParam15)
{
	iVar0 = iParam9;
	func_475(&iVar0);
	if (func_2(iVar0, 16) && !bParam15)
	{
		iParam9 |= 8388608;
	}
	iVar1 = func_476(uParam0, iParam1, fParam2, uParam3, fParam5, iParam6, iParam7, sParam8, iParam9, iParam10, iParam11, iParam12, fParam14);
	if (!func_2(iVar0, 134217728))
	{
		func_477(iParam1, uParam3, uParam0);
	}
	if (!*uParam4)
	{
		if (!is_bit_set(*iParam1, 25))
		{
			if (is_bit_set(*iParam1, 24))
			{
				if (!func_478(558))
				{
					func_479(558, 0);
				}
				set_bit(iParam1, 24);
				set_bit(iParam1, 25);
			}
		}
	}
	return iVar1;
}

bool func_319(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && is_entity_dead(iParam0))
	{
		return false;
	}
	if (!_does_volume_exist(iParam1))
	{
		return false;
	}
	return is_entity_in_volume(iParam0, iParam1, true, 0);
}

void func_320(int iParam0)
{
	if (iParam0 == 1)
	{
		if (iVar438 == 2 && !func_36(iVar445, 65536))
		{
			func_44(&uLocal_448, 65536);
			if (func_46(&uLocal_472))
			{
				func_47(&uLocal_472);
			}
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_DEFUSE"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (func_36(iVar443, 32768))
		{
			func_44(&uLocal_448, 1048576);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_CONFESSED_POS"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (func_36(iVar443, 4096))
		{
			func_44(&uLocal_448, 4096);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_CAUGHT_POS"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (func_36(iVar443, 256))
		{
			func_44(&uLocal_448, 16);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_STOLE_POS"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (func_36(iVar443, 128))
		{
			func_44(&uLocal_448, 4);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_GAVE_POS"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	else if (iParam0 == 0)
	{
		if (iVar438 == 2 && !func_36(iVar445, 131072))
		{
			func_44(&uLocal_448, 131072);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_THREATEN"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			if (func_46(&uLocal_472))
			{
				func_47(&uLocal_472);
			}
			func_41(&(uLocal_433[0]), 250);
		}
		else if ((iVar438 == 2 && func_36(iVar445, 131072)) && !func_36(iVar445, 16777216))
		{
			func_44(&uLocal_448, 16777216);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_THREATEN_B"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_524 = 1;
			if (func_46(&uLocal_472))
			{
				func_47(&uLocal_472);
			}
			func_41(&(uLocal_433[0]), 250);
		}
		else if (func_36(iVar443, 32768))
		{
			func_44(&uLocal_448, 2097152);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_CONFESSED_NEG"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_521 = 1;
			iLocal_522 = 1;
		}
		else if (func_36(iVar443, 4096))
		{
			func_44(&uLocal_448, 8192);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_CAUGHT_NEG"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
			iLocal_441 = 3;
			func_171(&Local_569, 0, 0);
			func_113(Local_547[0], 0);
		}
		else if (func_36(iVar443, 256))
		{
			func_44(&uLocal_448, 32);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_STOLE_NEG"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
		else if (func_36(iVar443, 128))
		{
			func_44(&uLocal_448, 8);
			func_43(Global_35, &(uLocal_433[0]), func_42("ILO_GAVE_NEG"), 0, -1082130432, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
	func_45(Local_569[0], 0, 0);
	func_45(Local_569[1], 0, 0);
}

int func_321()
{
	if ((iVar523 == 1 || (iVar449 >= 2 && iVar324 == 0)) || (iVar449 >= 1 && iVar324 == 1))
	{
		return func_317(1, 0, 0);
	}
	return 90;
}

void func_322()
{
	if (iVar527 == 0)
	{
		iLocal_529 = 1;
		iLocal_521 = 0;
		iLocal_522 = 0;
	}
}

void func_323()
{
	func_480(&Local_400);
	Local_400.f_1 = Global_35;
	if (func_36(iVar444, 2))
	{
		Local_400.f_8 = { Local_364 };
		Local_400.f_19 = Local_364.f_3.f_2;
	}
	else if (func_36(iVar444, 4))
	{
		Local_400.f_8 = { Local_376 };
		Local_400.f_19 = Local_376.f_3.f_2;
	}
	Local_400.f_18 = 0f;
	func_116(&(Local_400.f_23), 1024);
	func_116(&(Local_400.f_23), 1);
	func_44(&uLocal_446, 8);
	uVar4 = 1;
	func_481(&uVar0, &uVar4, 3, Local_132.f_51, 3f);
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= 2)
	{
		if (does_entity_exist(&(uVar0[iVar6])))
		{
			_task_smart_flee_style_coord(&(uVar0[iVar6]), Local_132.f_51, 6, 0, 4f, -1, 0);
		}
		iVar6++;
	}
	display_radar(false);
}

Vector3 func_324(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

int func_325(int iParam0, vector3 vParam1, float fParam4)
{
	if (does_entity_exist(iParam0) && !is_entity_dead(iParam0))
	{
		vVar0 = { get_entity_coords(iParam0, false, false) };
		vVar3 = { get_entity_forward_vector(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_482(vVar3, vVar6);
	if (absf(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_483(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_326(int iParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar5 = 0;
	if (!is_entity_dead(iParam0))
	{
		switch (*iParam4)
		{
			case 0:
				if (bParam8 && is_ped_on_mount(iParam0))
				{
					vVar0 = { func_484(iParam0, iParam1, sParam2, sParam3, 0) };
					if (!func_211(vVar0))
					{
						if (func_483(get_entity_coords(iParam0, true, false), get_entity_coords(iParam0, true, false) + get_entity_forward_vector(iParam0), vVar0))
						{
							iVar5 = 131072;
						}
						else
						{
							iVar5 = 262144;
						}
					}
					task_dismount_animal(iParam0, iVar5, 0, 0, 0, 0);
					*iParam4 = 1;
				}
				else
				{
					if (bParam6)
					{
						_0x4820a6939d7cef28(Global_35, 0);
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar4);
					if (bParam6)
					{
						task_swap_weapon(0, 0, 0, 0, 0);
					}
					if (_is_ped_carrying(iParam0))
					{
						iVar6 = _get_first_entity_ped_is_carrying(iParam0);
						task_place_carried_entity_at_coord(0, iVar6, get_entity_coords(iParam0, true, false), 2f, 8);
					}
					task_enter_anim_scene(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_48(iParam0, &iVar4, 0, 0, 1, 1);
					*iParam4 = 2;
				}
				break;
			case 1:
				if (!is_ped_on_mount(iParam0))
				{
					iVar3 = _get_last_mount(iParam0);
					if (!is_entity_dead(iVar3))
					{
						_task_smart_flee_style_ped(iVar3, iParam0, 6, 0, 4f, -1, 0);
					}
					if (bParam6)
					{
						_0x4820a6939d7cef28(Global_35, 0);
						_hide_ped_weapons(Global_35, 2, false);
					}
					open_sequence_task(&iVar4);
					if (bParam6)
					{
						task_swap_weapon(0, 0, 0, 0, 0);
					}
					task_enter_anim_scene(0, iParam1, sParam2, sParam3, iParam5, bParam7, 0, 20000, -1082130432);
					func_48(iParam0, &iVar4, 0, 0, 1, 1);
					*iParam4 = 2;
				}
				break;
			case 2:
				if (bParam7)
				{
					if (_0x3ab6c7b0bb0df4b1(iParam0, iParam1))
					{
						return true;
					}
				}
				else if (func_175(iParam0, 242628503))
				{
					if (!bParam6 || get_sequence_progress(iParam0) > 0)
					{
						if (_0x23e33cb9f4a3f547(iParam1, sParam3))
						{
							if (!_0x3b393716c3fd8237(iParam0) && _0x337f1cc8ee895601(iParam1, sParam2))
							{
								*iParam4 = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				return true;
		}
	}
	return false;
}

void func_327(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_116(iParam0, 134217728);
	}
	else
	{
		func_115(iParam0, 134217728);
	}
}

bool func_328(var uParam0)
{
	return func_140(*uParam0, 2);
}

void func_329(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_330(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

void func_331()
{
	_0xdd1232b332cbb9e7(4, 1, 0);
}

void func_332(int iParam0, bool bParam1, int iParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_an_object(iParam0))
	{
		return;
	}
	else if (_0x9a100f1cf4546629(iParam0))
	{
		iVar0 = func_485(iParam0);
		func_486(iVar0, _0xc346a546612c49a9(iParam0));
	}
	if (bParam1)
	{
		func_487(iParam0, 0);
	}
}

int func_333(int iParam0)
{
	if (does_entity_exist(iParam0) && !is_ped_injured(iParam0))
	{
		iVar0 = _0x61914209c36efddb(iParam0);
		if (iVar0 == 1)
		{
			return iVar0;
		}
		else if (_is_ped_hogtied(iParam0))
		{
			return iVar0;
		}
	}
	return 0;
}

bool func_334(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_335(int iParam0, int iParam1)
{
	if (!func_334(iParam0))
	{
		return false;
	}
	return (Global_1395482->f_2[iParam0] && iParam1) != 0;
}

char* func_336(char* sParam0)
{
	return sParam0;
}

int func_337(int iParam0, int iParam1)
{
	if (!func_197(iParam0))
	{
		return -1;
	}
	return (iParam0 + (120 * iParam1));
}

int func_338(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (bParam2)
	{
		_0xe98d55c5983f2509(iParam0);
	}
	if (!get_ped_config_flag(iParam0, 178, true))
	{
		set_ped_config_flag(iParam0, 178, true);
	}
	if (get_ped_config_flag(iParam0, 297, true) != bParam2)
	{
		set_ped_config_flag(iParam0, 297, bParam2);
	}
	if (get_ped_config_flag(iParam0, 315, true))
	{
		set_ped_config_flag(iParam0, 315, false);
	}
	if (get_ped_config_flag(iParam0, 331, true))
	{
		set_ped_config_flag(iParam0, 331, false);
	}
	if (get_ped_config_flag(iParam0, 130, true))
	{
		set_ped_config_flag(iParam0, 130, false);
	}
	if (get_ped_config_flag(iParam0, 301, true))
	{
		set_ped_config_flag(iParam0, 301, false);
	}
	if (bParam2 && bParam3)
	{
		if (_0x870708a6e147a9ad(iParam0, "INTERACT_LOCKON", fParam1, 0, 0, 0, 0, 0, 0, -1))
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

int func_339(int iParam0)
{
	iVar0 = get_ped_relationship_group_default_hash(iParam0);
	switch (iVar0)
	{
		case -1448293989:
			return 3;
		case 555364152:
			return 2;
		case -1996978098:
			return 0;
		case 1078461828:
			return 1;
		case -1535431934:
			return 4;
		case -1663301869:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_340(int* iParam0)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(*iParam0))
	{
		set_entity_as_mission_entity(*iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_entity_dead(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
	}
	delete_ped(iParam0);
}

void func_341(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			Global_36581[iVar0]->f_1 = 3;
		}
		iVar0++;
	}
}

void func_342(var uParam0)
{
	if (func_138(uParam0->f_162))
	{
		func_139(&(uParam0->f_162), 1, 1);
	}
	if (func_138(uParam0->f_163))
	{
		func_139(&(uParam0->f_163), 1, 1);
	}
	if (func_138(uParam0->f_164))
	{
		func_139(&(uParam0->f_164), 1, 1);
	}
	if (func_138(uParam0->f_165))
	{
		func_139(&(uParam0->f_165), 1, 1);
	}
}

void func_343(var uParam0)
{
	if (uParam0->f_170)
	{
		func_488();
	}
}

bool func_344(var uParam0)
{
	if (func_489(uParam0) || uParam0->f_44)
	{
		uParam0->f_44 = 1;
		func_490(uParam0->f_3);
		func_241(uParam0, 0, 1);
		func_491(uParam0->f_3, uParam0->f_51.f_5, 0, uParam0->f_43, -1);
		func_492(0, 0);
		return true;
	}
	return false;
}

void func_345()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

bool func_346(int iParam0)
{
	if (!func_197(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_347(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_329(&iVar1, -2147483648);
	}
	else
	{
		iVar0 = 0;
	}
	while (iVar1 > 0)
	{
		iVar1 = (iVar1 && (iVar1 - 1));
		iVar0++;
	}
	return iVar0;
}

int func_348()
{
	return get_player_group(get_player_index());
}

bool func_349(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_185() != -1)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_350(var uParam0)
{
	if (*uParam0 != 0)
	{
		request_model(*uParam0, false);
	}
}

bool func_351(int iParam0)
{
	if (iParam0 != 0)
	{
		if (!has_model_loaded(iParam0))
		{
			return false;
		}
	}
	return true;
}

int func_352(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
		case 1:
			return 12;
		case 2:
			return 23;
		case 3:
			return 6;
		case 4:
			return 17;
		case 5:
			return 1;
		case 6:
			return 3;
		case 7:
			return 23;
		case 8:
			return 1;
		case 9:
			return 8;
		case 10:
			return 2;
		case 11:
			return 4;
		case 12:
			return 18;
		case 13:
			return 12;
		case 14:
			return 7;
		case 15:
			return 21;
		case 16:
			return 19;
		case 17:
			return 12;
		case 18:
			return 7;
		case 19:
			return 1;
		case 20:
			return 17;
		case 21:
			return 3;
		case 22:
			return 1;
		case 23:
			return 17;
		case 24:
			return 14;
		case 27:
			return 11;
		case 28:
			return 5;
		case 29:
			return 8;
		case 30:
			return 38;
		case 31:
			return 20;
		case 32:
			return 10;
		case 33:
			return 13;
		case 34:
			return 11;
		case 35:
			return 2;
		case 36:
			return 12;
		case 37:
			return 20;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 12;
		case 41:
			return 3;
		case 42:
			return 1;
		case 43:
			return 27;
		case 44:
			return 9;
		case 45:
			return 15;
		case 46:
			return 2;
		case 47:
			return 2;
		case 48:
			return 9;
		case 49:
			return 7;
		case 50:
			return 36;
		case 51:
			return 5;
		case 53:
			return 3;
		case 54:
			return 6;
		case 55:
			return 2;
		case 56:
			return 12;
		case 57:
			return 14;
		case 58:
			return 8;
		case 59:
			return 3;
		case 60:
			return 11;
		case 61:
			return 2;
		case 62:
			return 17;
		case 63:
			return 6;
		case 64:
			return 7;
		case 65:
			return 10;
		case 66:
			return 12;
		case 67:
			return 5;
		case 68:
			return 5;
		case 69:
			return 5;
		case 70:
			return 6;
		case 71:
			return 8;
		case 72:
			return 9;
		case 73:
			return 4;
		case 74:
			return 1;
		case 75:
			return 1;
		case 76:
			return 1;
		case 77:
			return 3;
		case 78:
			return 2;
		case 79:
			return 6;
		case 80:
			return 3;
		case 81:
			return 15;
		case 82:
			return 9;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 11;
		case 86:
			return 2;
		case 87:
			return 9;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 91:
			return 2;
		case 92:
			return 3;
		case 93:
			return 1;
		case 94:
			return 9;
		case 95:
			return 1;
		case 96:
			return 7;
		case 97:
			return 6;
		case 98:
			return 4;
		case 99:
			return 2;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 105:
			return 2;
		case 106:
			return 4;
		case 107:
			return 1;
		case 108:
			return 3;
		case 109:
			return 3;
		case 110:
			return 1;
		case 111:
			return 4;
		case 112:
			return 3;
		case 113:
			return 3;
		case 114:
			return 16;
		case 115:
			return 3;
		case 116:
			return 7;
		case 117:
			return 2;
		case 118:
			return 10;
		case 119:
			return 17;
		default:
			break;
	}
	return 0;
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 22;
		case 3:
			return 45;
		case 4:
			return 51;
		case 5:
			return 68;
		case 6:
			return 69;
		case 7:
			return 72;
		case 8:
			return 95;
		case 9:
			return 96;
		case 10:
			return 104;
		case 11:
			return 106;
		case 12:
			return 110;
		case 13:
			return 128;
		case 14:
			return 140;
		case 15:
			return 147;
		case 16:
			return 168;
		case 17:
			return 187;
		case 18:
			return 199;
		case 19:
			return 206;
		case 20:
			return 207;
		case 21:
			return 224;
		case 22:
			return 227;
		case 23:
			return 228;
		case 24:
			return 245;
		case 27:
			return 259;
		case 28:
			return 270;
		case 29:
			return 275;
		case 30:
			return 283;
		case 31:
			return 321;
		case 32:
			return 341;
		case 33:
			return 351;
		case 34:
			return 364;
		case 35:
			return 375;
		case 36:
			return 377;
		case 37:
			return 389;
		case 38:
			return 409;
		case 39:
			return 410;
		case 40:
			return 411;
		case 41:
			return 423;
		case 42:
			return 426;
		case 43:
			return 427;
		case 44:
			return 454;
		case 45:
			return 463;
		case 46:
			return 478;
		case 47:
			return 480;
		case 48:
			return 482;
		case 49:
			return 491;
		case 50:
			return 498;
		case 51:
			return 534;
		case 53:
			return 539;
		case 54:
			return 542;
		case 55:
			return 548;
		case 56:
			return 550;
		case 57:
			return 562;
		case 58:
			return 576;
		case 59:
			return 584;
		case 60:
			return 587;
		case 61:
			return 598;
		case 62:
			return 600;
		case 63:
			return 617;
		case 64:
			return 623;
		case 65:
			return 630;
		case 66:
			return 640;
		case 67:
			return 652;
		case 68:
			return 657;
		case 69:
			return 662;
		case 70:
			return 667;
		case 71:
			return 673;
		case 72:
			return 681;
		case 73:
			return 690;
		case 74:
			return 694;
		case 75:
			return 695;
		case 76:
			return 696;
		case 77:
			return 697;
		case 78:
			return 700;
		case 79:
			return 702;
		case 80:
			return 708;
		case 81:
			return 711;
		case 82:
			return 726;
		case 83:
			return 735;
		case 84:
			return 737;
		case 85:
			return 739;
		case 86:
			return 750;
		case 87:
			return 752;
		case 88:
			return 761;
		case 89:
			return 763;
		case 90:
			return 764;
		case 91:
			return 766;
		case 92:
			return 768;
		case 93:
			return 771;
		case 94:
			return 772;
		case 95:
			return 781;
		case 96:
			return 782;
		case 97:
			return 789;
		case 98:
			return 795;
		case 99:
			return 799;
		case 100:
			return 801;
		case 101:
			return 802;
		case 102:
			return 804;
		case 103:
			return 807;
		case 104:
			return 810;
		case 105:
			return 813;
		case 106:
			return 815;
		case 107:
			return 819;
		case 108:
			return 820;
		case 109:
			return 823;
		case 110:
			return 826;
		case 111:
			return 827;
		case 112:
			return 831;
		case 113:
			return 834;
		case 114:
			return 837;
		case 115:
			return 853;
		case 116:
			return 856;
		case 117:
			return 863;
		case 118:
			return 865;
		case 119:
			return 875;
		default:
			break;
	}
	return -1;
}

bool func_354(int iParam0, int iParam1, var uParam2)
{
	switch (iParam0)
	{
		case 7:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1075.036f, -498.9537f, 80.4572f };
					*(*uParam2)[1] = { -1058.055f, -609.5211f, 76.6181f };
					*(*uParam2)[2] = { -1272.208f, -612.5573f, 100.8638f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -2288.302f, -389.368f, 155.9838f };
					*(*uParam2)[1] = { -2267.837f, -294.2087f, 162.0459f };
					*(*uParam2)[2] = { -2588.6f, -283.9735f, 157.3797f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { -1751.366f, 174.5853f, 140.272f };
					*(*uParam2)[1] = { -1639.375f, -163.5104f, 165.0787f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -771.0659f, -259.0937f, 47.9193f };
					*(*uParam2)[1] = { -822.0638f, -500.4154f, 43.2726f };
					*(*uParam2)[2] = { -1024.218f, -401.8981f, 74.0529f };
					*(*uParam2)[3] = { -1006.993f, -282.9351f, 74.6298f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 4:
					*(*uParam2)[0] = { -1338.573f, 327.9119f, 84.6143f };
					*(*uParam2)[1] = { -1232.65f, 330.8496f, 62.4046f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 5:
					*(*uParam2)[0] = { -1502.984f, -885.5237f, 88.3171f };
					*(*uParam2)[1] = { -1297.384f, -819.8127f, 66.0834f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 350.4579f, 1090.999f, 185.1566f };
					*(*uParam2)[1] = { 92.55f, 1093.111f, 180.0293f };
					*(*uParam2)[2] = { 409.0284f, 1196.024f, 176.0849f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 749.1558f, 1391.218f, 169.0392f };
					*(*uParam2)[1] = { 655.3339f, 1501.052f, 182.3537f };
					*(*uParam2)[2] = { 564.7472f, 1351.075f, 181.0084f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 798.8331f, 1217.176f, 139.389f };
					*(*uParam2)[1] = { 796.767f, 1022.301f, 117.9023f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1499.724f, 1483.517f, 148.1553f };
					*(*uParam2)[1] = { 1762.153f, 1460.505f, 154.3694f };
					*(*uParam2)[2] = { 1791.473f, 1553.145f, 158.3201f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1592.016f, 838.9788f, 137.0506f };
					*(*uParam2)[1] = { 1481.788f, 983.7827f, 159.4282f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 11:
					*(*uParam2)[0] = { 2066.821f, 1396.182f, 161.616f };
					*(*uParam2)[1] = { 2018.585f, 1589.685f, 166.3078f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 1931.246f, 1417.71f, 175.205f };
					*(*uParam2)[1] = { 1758.616f, 1470.966f, 153.1616f };
					*(*uParam2)[2] = { 1908.101f, 1340.718f, 184.5229f };
					*(*uParam2)[3] = { 1758.631f, 1339.565f, 179.8116f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 906.3064f, 1862.921f, 276.5091f };
					*(*uParam2)[1] = { 1227.372f, 1910.686f, 303.6052f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 39.5976f, -446.5889f, 73.5138f };
					*(*uParam2)[1] = { 261.8906f, -501.4701f, 69.7941f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 147.7795f, 574.2345f, 124.4514f };
					*(*uParam2)[1] = { 353.6481f, 791.2978f, 158.3952f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 1152.273f, 1.4974f, 91.3795f };
					*(*uParam2)[1] = { 1229.58f, -41.3491f, 97.8027f };
					*(*uParam2)[2] = { 1388.351f, 191.7681f, 91.0511f };
					*(*uParam2)[3] = { 1182.174f, 249.1711f, 95.8012f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { 2436.349f, 1255.752f, 108.7815f };
					*(*uParam2)[1] = { 2581.654f, 1319.187f, 109.4025f };
					*(*uParam2)[2] = { 2648.991f, 1389.994f, 86.802f };
					*(*uParam2)[3] = { 2499.877f, 1520.766f, 84.1962f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 2886.699f, 650.0214f, 56.9408f };
					*(*uParam2)[1] = { 2841.172f, 901.8114f, 48.3778f };
					*(*uParam2)[2] = { 2789.388f, 789.1998f, 69.4871f };
					*(*uParam2)[3] = { 2838.36f, 650.3098f, 66.5798f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 1966.349f, 55.0459f, 77.6335f };
					*(*uParam2)[1] = { 1997.614f, 290.7841f, 80.4139f };
					*(*uParam2)[2] = { 2073.044f, 228.7493f, 69.5644f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 20:
					*(*uParam2)[0] = { 2515.785f, 798.911f, 69.7688f };
					*(*uParam2)[1] = { 2506.887f, 618.8073f, 68.6403f };
					*(*uParam2)[2] = { 2377.615f, 751.5095f, 66.3114f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 21:
					*(*uParam2)[0] = { 2128.213f, 1721.563f, 130.3847f };
					*(*uParam2)[1] = { 2264.183f, 1720.874f, 103.2933f };
					*(*uParam2)[2] = { 2134.791f, 1568.948f, 115.1957f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 22:
					*(*uParam2)[0] = { 2826.741f, 2204.882f, 155.551f };
					*(*uParam2)[1] = { 2838.074f, 1999.792f, 161.9055f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 2:
					*(*uParam2)[0] = { 350.8081f, 1195.732f, 176.1334f };
					*(*uParam2)[1] = { -9.8736f, 1100.082f, 171.5504f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 951.1178f, 411.6494f, 111.4674f };
					*(*uParam2)[1] = { 786.1444f, 1078.456f, 125.8602f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -784.4099f, 128.655f, 42.3724f };
					*(*uParam2)[1] = { -478.0183f, 232.7834f, 42.1853f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1148.99f, 1456.264f, 190.799f };
					*(*uParam2)[1] = { 840.1897f, 1221.47f, 141.6344f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 9:
					*(*uParam2)[0] = { 1413.901f, -334.469f, 88.1597f };
					*(*uParam2)[1] = { 1222.652f, -59.931f, 93.5015f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 10:
					*(*uParam2)[0] = { 1548.822f, -1190.659f, 49.1131f };
					*(*uParam2)[1] = { 1547.513f, -1410.952f, 60.6415f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 30:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { 2466.914f, -732.939f, 42.531f };
					*(*uParam2)[1] = { 2303.902f, -750.908f, 41.569f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { 1757.029f, -832.27f, 41.718f };
					*(*uParam2)[1] = { 1882.646f, -955.777f, 42.672f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 2:
					*(*uParam2)[0] = { 2117.433f, -847.803f, 41.749f };
					*(*uParam2)[1] = { 2112.33f, -625.643f, 41.772f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 12:
					*(*uParam2)[0] = { 2552.283f, -208.465f, 43.013f };
					*(*uParam2)[1] = { 2725.735f, 32.896f, 51.048f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 13:
					*(*uParam2)[0] = { 2219.83f, -503.6095f, 41.0142f };
					*(*uParam2)[1] = { 2371.775f, -527.7825f, 40.7584f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 14:
					*(*uParam2)[0] = { 2157.784f, -459.4536f, 40.5431f };
					*(*uParam2)[1] = { 2354.891f, -401.4336f, 40.5042f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 26:
					*(*uParam2)[0] = { 3266.224f, 1664.717f, 60.269f };
					*(*uParam2)[1] = { 3221.388f, 1809.026f, 74.813f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 27:
					*(*uParam2)[0] = { 2782.415f, 634.97f, 74.323f };
					*(*uParam2)[1] = { 2594.708f, 556.157f, 75.742f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 3268.065f, 1618.25f, 51.5041f };
					*(*uParam2)[1] = { 3151.345f, 1476.824f, 42.9185f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 2524.41f, 1402.663f, 97.646f };
					*(*uParam2)[1] = { 2436.137f, 1254.158f, 109.722f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 2145.954f, 1592.128f, 118.3828f };
					*(*uParam2)[1] = { 2118.189f, 1395.341f, 146.675f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 31:
			switch (iParam1)
			{
				case 5:
					*(*uParam2)[0] = { 2724.549f, -7.066f, 51.083f };
					*(*uParam2)[1] = { 2542.005f, -233.1396f, 41.4732f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 2300.604f, -441.226f, 41.797f };
					*(*uParam2)[1] = { 2569.006f, -361.3357f, 40.5728f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { 762.142f, 1455.038f, 160.172f };
					*(*uParam2)[1] = { 581.92f, 1359.699f, 182.007f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 8:
					*(*uParam2)[0] = { 1561.312f, 1602.54f, 188.8227f };
					*(*uParam2)[1] = { 1315.677f, 1471.669f, 160.1485f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 44:
			switch (iParam1)
			{
				case 0:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.8591f };
					*(*uParam2)[1] = { -1627.641f, 266.7185f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 1:
					*(*uParam2)[0] = { -1366.784f, 150.125f, 77.859f };
					*(*uParam2)[1] = { -1627.641f, 266.719f, 105.116f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 3:
					*(*uParam2)[0] = { -1090.74f, 151.3781f, 58.3089f };
					*(*uParam2)[1] = { -823.9262f, 278.8717f, 92.3226f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 6:
					*(*uParam2)[0] = { 1714.427f, -1933.318f, 45.6594f };
					*(*uParam2)[1] = { 1714.571f, -1856.846f, 48.5272f };
					*(*uParam2)[2] = { 1531.954f, -1706.023f, 57.3286f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
		case 50:
			switch (iParam1)
			{
				case 6:
					*(*uParam2)[0] = { -1736.774f, -836.8357f, 96.5171f };
					*(*uParam2)[1] = { -1915.833f, -682.8271f, 116.4542f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 7:
					*(*uParam2)[0] = { -755.4001f, -796.7909f, 49.7304f };
					*(*uParam2)[1] = { -1039.648f, -688.1265f, 69.6641f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 15:
					*(*uParam2)[0] = { 902.8263f, 386.1294f, 115.5771f };
					*(*uParam2)[1] = { 615.3056f, 258.5487f, 103.5037f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 16:
					*(*uParam2)[0] = { 874.3443f, 827.1644f, 114.901f };
					*(*uParam2)[1] = { 859.3398f, 590.4376f, 110.1404f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 17:
					*(*uParam2)[0] = { -769.1578f, 299.2588f, 93.7465f };
					*(*uParam2)[1] = { -588.5746f, 443.7545f, 97.2538f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 18:
					*(*uParam2)[0] = { 442.6022f, -274.5149f, 141.8569f };
					*(*uParam2)[1] = { 252.7831f, -219.3386f, 129.8086f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 19:
					*(*uParam2)[0] = { 82.4531f, 27.6559f, 99.5123f };
					*(*uParam2)[1] = { 441.6833f, 325.2197f, 102.5464f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 24:
					*(*uParam2)[0] = { 2682.666f, 254.0104f, 62.8591f };
					*(*uParam2)[1] = { 2726.419f, 15.7709f, 48.8237f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 25:
					*(*uParam2)[0] = { 2166.428f, 1654.068f, 114.0645f };
					*(*uParam2)[1] = { 2375.665f, 1665.218f, 95.4254f };
					*(*uParam2)[2] = { 2402.211f, 1816.359f, 106.9185f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 28:
					*(*uParam2)[0] = { 1832.606f, -1986.944f, 43.5085f };
					*(*uParam2)[1] = { 1691.085f, -1896.396f, 47.2405f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 29:
					*(*uParam2)[0] = { 1375.404f, -1591.844f, 68.4645f };
					*(*uParam2)[1] = { 1603.71f, -1744.756f, 52.1714f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 30:
					*(*uParam2)[0] = { 816.4478f, -915.9297f, 49.4983f };
					*(*uParam2)[1] = { 1006.361f, -1293.403f, 53.9613f };
					*(*uParam2)[2] = { 1094.919f, -1166.476f, 67.619f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 31:
					*(*uParam2)[0] = { 810.3403f, -872.8113f, 51.4344f };
					*(*uParam2)[1] = { 825.1677f, -576.8741f, 79.2273f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 32:
					*(*uParam2)[0] = { 1018.101f, -922.2153f, 66.9381f };
					*(*uParam2)[1] = { 832.2029f, -891.5154f, 51.1305f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
				case 33:
					*(*uParam2)[0] = { 1472.147f, -437.5275f, 75.9389f };
					*(*uParam2)[1] = { 1224.738f, -51.7863f, 93.1655f };
					*(*uParam2)[2] = { 0f, 0f, 0f };
					*(*uParam2)[3] = { 0f, 0f, 0f };
					*(*uParam2)[4] = { 0f, 0f, 0f };
					*(*uParam2)[5] = { 0f, 0f, 0f };
					*(*uParam2)[6] = { 0f, 0f, 0f };
					*(*uParam2)[7] = { 0f, 0f, 0f };
					return true;
			}
			break;
	}
	return false;
}

Vector3 func_355(int iParam0, var uParam1)
{
	iVar1 = -1;
	if (does_entity_exist(iParam0))
	{
		vVar2 = { get_entity_coords(iParam0, true, false) };
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!func_211(*(*uParam1)[iVar0]))
			{
				if (iVar1 < 0 || vdist2(vVar2, *(*uParam1)[iVar0]) < vdist2(vVar2, *(*uParam1)[iVar1]))
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
		}
		if (iVar1 > -1 && iVar1 < *uParam1)
		{
			return *(*uParam1)[iVar1];
		}
	}
	return 0f, 0f, 0f;
}

void func_356(var uParam0, bool bParam1)
{
	if (!does_blip_exist(uParam0->f_6))
	{
		uParam0->f_6 = _blip_add_for_coord(-1702907713, *uParam0);
		_blip_set_modifier(uParam0->f_6, 580546400);
		set_blip_name_from_text_file(uParam0->f_6, "BLIP_DEBUG");
		if (bParam1)
		{
			_0xdd1232b332cbb9e7(3, 1, 0);
			func_56("BEAT_GLB", 5500, 0, 1, 0, 0, -1, -1, 0);
		}
		_0x9851de7aec10b4e1(*uParam0, 100f, 1, 0);
	}
}

bool func_357(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_358(vector3 vParam0, float fParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_211(vParam0))
	{
		return 0;
	}
	iVar1 = 0;
	if (!bParam5)
	{
		iVar1 |= 2;
	}
	iVar1 |= 1;
	if (!does_entity_exist(iParam6))
	{
		if (func_263(vParam0))
		{
			return 0;
		}
		iVar0 = _0x00bbf7ceae8c666a(vParam0, fParam3, iVar1, 0);
	}
	else
	{
		vVar2 = { get_entity_coords(iParam6, false, false) };
		iVar0 = _0xf383e96c4904df0c(iParam6, fParam3, iVar1, 0);
	}
	if (bParam7 != 0)
	{
		_0xb440f4e35393fc39(iVar0, bParam7);
	}
	if (bParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, bParam9);
	}
	func_493(iVar0, bParam8);
	return iVar0;
}

void func_359(int iParam0)
{
	if (!func_197(iParam0))
	{
		return;
	}
	func_494(iParam0);
}

void func_360(var uParam0, vector3 vParam1)
{
	if (vParam1.x != 0)
	{
		_0x5d9b0baaf04cf65b(*uParam0, vParam1.y, vParam1.x, vParam1.z);
	}
	else if (vParam1.y != -1)
	{
		_0x19bc99c678fba139(*uParam0, vParam1.y, vParam1.z);
	}
}

int func_361(int iParam0)
{
	if (func_120(iParam0, 2))
	{
		return 200;
	}
	if (func_120(iParam0, 4))
	{
		return 70;
	}
	if (func_120(iParam0, 32))
	{
		return 400;
	}
	return 110;
}

int func_362(int iParam0)
{
	if (func_91(iParam0, 131072))
	{
		return 0;
	}
	else
	{
		if (iParam0 == 6)
		{
			if (func_131() == 8)
			{
				return 3;
			}
		}
		bVar0 = func_91(iParam0, 2);
		bVar1 = func_91(iParam0, 1);
		bVar2 = (bVar0 && bVar1);
		if (bVar2)
		{
			if (!func_247())
			{
				return 2;
			}
			else
			{
				return 1;
			}
		}
		else if (bVar0)
		{
			return 1;
		}
		else if (bVar1)
		{
			return 2;
		}
	}
	return -1;
}

void func_363(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam0 = 45f;
		*fParam1 = 135f;
	}
	else
	{
		*fParam0 = 45f;
		*fParam1 = 125f;
	}
	if (func_120(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 15f);
		*iParam2 = ceil((*fParam0 + 50f));
	}
	else
	{
		*iParam2 = 70;
	}
}

void func_364(float fParam0, float fParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		*fParam1 = 240f;
	}
	else
	{
		*fParam1 = 215f;
	}
	*fParam0 = 110f;
	if (func_120(iParam3, 2))
	{
		*fParam0 = (*fParam0 + 60f);
		*fParam1 = (*fParam1 + 60f);
		*iParam2 = ceil((*fParam0 + 110f));
	}
	else if (func_120(iParam3, 2097152))
	{
		*fParam0 = (*fParam0 + 30f);
		*iParam2 = ceil((*fParam0 + 30f));
	}
	else
	{
		*iParam2 = 70;
	}
}

bool func_365(int iParam0, int iParam1)
{
	iVar0 = (func_353(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_17504.f_12[iVar1]), iVar2);
}

bool func_366(int iParam0, vector3 vParam1, float fParam4, float fParam5)
{
	if (func_211(vParam1))
	{
		return false;
	}
	if (func_371(iParam0, vParam1))
	{
		if (iParam0 == 42)
		{
		}
		else
		{
			return false;
		}
	}
	fVar0 = vdist2(vParam1, Global_36);
	if (func_177(iParam0))
	{
		fParam4 = 40000f;
	}
	if (fVar0 < fParam4 && fVar0 > fParam5)
	{
		return true;
	}
	else if (iParam0 == 42 || iParam0 == 110)
	{
		return true;
	}
	return false;
}

bool func_367(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (absf((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (absf((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || absf((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_368(int iParam0, vector3 vParam1, int iParam4, float fParam5, bool bParam6, int iParam7)
{
	fVar0 = func_191(bParam6, iParam7, vdist(vParam1, get_entity_coords(iParam0, true, false)));
	if (!iParam4->f_1)
	{
		if (fVar0 < iParam4->f_2 || (func_374(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
		{
			*iParam4 = func_288();
			iParam4->f_2 = func_156(iParam0, vParam1, 1);
			iParam4->f_1 = 1;
		}
	}
	else if (fVar0 > iParam4->f_2 || (!func_374(vParam1, iParam0) && get_entity_speed(iParam0) > fParam5))
	{
		*iParam4 = func_288();
		iParam4->f_2 = func_156(iParam0, vParam1, 1);
		iParam4->f_1 = 0;
	}
}

bool func_369(var uParam0, int iParam1)
{
	if (uParam0->f_1 == 1)
	{
		return (func_288() - *uParam0) >= iParam1;
	}
	return false;
}

int func_370(var uParam0)
{
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!func_211(*uParam0->f_12[iVar0]))
		{
			if (iVar1 < 0 || vdist2(Global_36, *uParam0->f_12[iVar1]) < vdist2(Global_36, *uParam0->f_12[iVar0]))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_371(int iParam0, vector3 vParam1)
{
	if (!func_91(iParam0, 1))
	{
		iVar0 = 1;
	}
	if (func_495(vParam1, 0, 0, iVar0))
	{
		return true;
	}
	if (func_91(iParam0, 33554432))
	{
		if (func_496(vParam1, 200f, 1, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_372(int iParam0, var uParam1)
{
	iVar0 = 1;
	if (func_120(iParam0, 128))
	{
		if (!get_ground_z_for_3d_coord(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), &uVar1, false))
		{
			return false;
		}
		if (_0xbbe5b63effb08e68(*uParam1, uParam1->f_1, (uParam1->f_2 + 40f), 129, &uVar1, &iVar2, &uVar3))
		{
			if (iVar2 == 1619704960)
			{
				return false;
			}
		}
	}
	if (func_91(iParam0, 1) && !func_91(iParam0, 2))
	{
		if (func_91(iParam0, 4096) || func_91(iParam0, 2048))
		{
			if (func_497(*uParam1))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_373(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	uVar0 = func_1(&uParam0);
	if (!func_498())
	{
		return false;
	}
	return true;
}

bool func_374(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_499(vVar0, vParam0) > func_499(vVar0, get_entity_coords(iParam3, true, false));
}

bool func_375(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_376(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (&Global_36581[iVar0] == iParam0)
		{
			return Global_36581[Global_36602]->f_1;
		}
		iVar0++;
	}
	return 3;
}

Vector3 func_377(vector3 vParam0, bool bParam3, vector3 vParam4, bool bParam7)
{
	if (bParam7)
	{
		return vParam4;
	}
	return _get_object_offset_from_coords(vParam0, bParam3, vParam4);
}

float func_378(float fParam0, float fParam1, bool bParam2)
{
	if (bParam2)
	{
		return fParam1;
	}
	return func_500((fParam0 + fParam1));
}

int func_379(int iParam0, var uParam1, vector3 vParam2, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	if (bParam6)
	{
		func_501(&vParam2, uParam1->f_22);
	}
	if (!bParam7 && func_502(uParam1))
	{
		iVar0 = _0xeaf682a14f8e5f53(uParam1->f_5, vParam2, bParam5, 1, 1, iParam9, iParam10);
		if (!does_entity_exist(iVar0))
		{
			iVar0 = func_503(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
		}
		else if (_is_metaped_outfit_request_valid(uParam1->f_5))
		{
			_release_metaped_outfit_request(uParam1->f_5);
		}
	}
	else
	{
		iVar0 = func_503(iParam0, vParam2, bParam5, 1, 1, 0, 1, iParam8, 1, 0, 0, 0, 0);
	}
	if (is_entity_dead(iVar0))
	{
	}
	else
	{
		_0x9520175b35e2268d(iVar0, 1);
		set_blocking_of_non_temporary_events(iVar0, true);
		if (uParam1->f_10)
		{
			if (is_ped_human(iVar0))
			{
				_0x0fb1ba7ff73b41e1(iVar0, uParam1->f_4, 0);
			}
		}
		if (!is_string_null_or_empty(&(uParam1->f_23)) && !func_504(iVar0))
		{
			func_102(iVar0, &(uParam1->f_23), 0);
		}
		if (func_504(iVar0))
		{
			set_animal_tuning_bool_param(iVar0, 48, true);
		}
		else
		{
			set_ped_config_flag(iVar0, 307, true);
		}
		if (func_505(&(uParam1->f_22)))
		{
			set_ped_can_ragdoll(iVar0, true);
			set_ped_to_ragdoll(iVar0, 1000, 1000, 1, false, false, false);
			set_ped_config_flag(iVar0, 186, !func_506(&(uParam1->f_22)));
			func_69(iVar0, func_507(&(uParam1->f_22)), 0);
		}
		else
		{
			request_ped_visibility_tracking(iVar0);
		}
		if (func_508(&(uParam1->f_22)))
		{
			freeze_entity_position(iVar0, true);
		}
		if (func_509(&(uParam1->f_22)))
		{
			func_510(iVar0, 1);
		}
		_0xa91e6cf94404e8c9(iVar0);
		set_ped_config_flag(iVar0, 6, func_511(&(uParam1->f_22)));
		set_ped_config_flag(iVar0, 393, true);
		if (!func_36(uParam1->f_22, 8192))
		{
			_set_entity_something(iVar0, true);
		}
		if (!func_504(iVar0))
		{
			func_513(iVar0, !func_512(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 4, func_514(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 297, !func_515(&(uParam1->f_22)));
			set_ped_config_flag(iVar0, 317, !func_515(&(uParam1->f_22)));
			if (uParam1->f_31 != 623901053)
			{
				set_ped_relationship_group_hash(iVar0, uParam1->f_31);
			}
		}
	}
	if (does_entity_exist(iVar0))
	{
		if (is_ped_human(iVar0))
		{
			decor_set_bool(iVar0, "bBeatPed", true);
			decor_set_bool(iVar0, "bBeatCriminal", *uParam1 == 22);
		}
	}
	return iVar0;
}

bool func_380(int iParam0, int iParam1)
{
	if (func_516(iParam0) != -1)
	{
		return true;
	}
	switch (iParam0)
	{
		case -1208814201:
		case -535404896:
		case -390289284:
		case 1112571710:
		case 1478983280:
			return true;
		case -1990962020:
		case 1057570823:
			return iParam1;
		default:
			break;
	}
	return false;
}

bool func_381(var uParam0)
{
	return func_36(*uParam0, 32);
}

int func_382(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam1))
	{
		return 0;
	}
	if (get_mount(iParam0) != iParam1)
	{
		_set_ped_on_mount(iParam0, iParam1, iParam3, bParam4);
		set_ped_can_be_targetted(iParam1, bParam2);
	}
	return 1;
}

bool func_383(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

void func_384(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_385(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_517(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_386(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_387(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

int func_388(int iParam0)
{
	if (iParam0 == -1)
	{
		iVar0 = func_518(1);
	}
	else
	{
		iVar0 = func_519(iParam0);
	}
	return iVar0;
}

void func_389(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_520(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_521(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2] = &Global_17504.f_2205[iVar2] + 1;
	}
}

void func_390(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_120(iParam0, 8192))
	{
		iVar0 = func_521(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0] = &Global_17504.f_2205[iVar0] + 1;
	}
}

void func_391(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam1)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	func_73(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

void func_392(int iParam0, bool bParam1)
{
	iVar0 = 1;
	if (bParam1)
	{
		iVar0 = 3;
	}
	if (func_91(iParam0, 262144))
	{
		if (Global_1392135->f_3 == -1)
		{
			func_522(262144, iVar0, 0, 1);
		}
	}
	if (func_91(iParam0, 128))
	{
		func_522(128, iVar0, 0, 1);
	}
	else if (func_91(iParam0, 524288))
	{
		func_522(524288, iVar0, 0, 1);
	}
	else if (func_91(iParam0, 536870912))
	{
		func_522(536870912, iVar0, 0, 1);
	}
	else if (func_91(iParam0, 4194304))
	{
		func_522(4194304, iVar0, 0, 1);
	}
	else if (func_91(iParam0, 8388608))
	{
		func_522(8388608, iVar0, 0, 1);
	}
}

void func_393(int iParam0)
{
	Global_1310750->f_16077 = get_id_of_this_thread();
	Global_1310750->f_16071 = iParam0;
}

int func_394(bool bParam0)
{
	if (!bParam0 && func_523(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

int func_395()
{
	return Global_1310750->f_16037;
}

bool func_396(int iParam0)
{
	if (!func_197(iParam0))
	{
		return false;
	}
	return (*Global_1310750)[iParam0]->f_47;
}

void func_397(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_197(&(Global_1310750->f_13321[iParam0])))
	{
		return;
	}
	iVar0 = &Global_1310750->f_13321[iParam0];
	force_cleanup_for_thread_with_this_id(Global_1310750->f_13321[iParam0]->f_5, 523);
	(*Global_1310750)[iVar0]->f_48 = 0;
	func_524(iParam0);
	Global_1310750->f_16037 = (Global_1310750->f_16037 - 1);
}

void func_398(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_525(Global_1393447, 1);
	func_526();
	func_527();
	func_528((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_288() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_529();
		if (iParam1 == -1)
		{
			if (func_2(iParam0, 1))
			{
				func_522(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_2(iParam0, 2))
			{
				func_522(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_2(iParam0, 4))
			{
				func_522(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_530(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_531(to_float(iVar0), 1, 0);
	}
	else
	{
		func_531((to_float(200) / 3f), 1, 0);
	}
}

bool func_399(int iParam0, int iParam1)
{
	return (Global_40.f_9571[iParam1] && iParam0) != 0;
}

void func_400(int iParam0, int iParam1)
{
	(*Global_1392050)[iParam1]->f_1 = ((*Global_1392050)[iParam1]->f_1 - ((*Global_1392050)[iParam1]->f_1 && iParam0));
}

void func_401(int iParam0, int iParam1)
{
	Global_40.f_9571[iParam1] = (Global_40.f_9571[iParam1] || iParam0);
}

int func_402(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			return 1033509606;
		case 2:
			return 1143368244;
		case 1:
			return -1797026825;
		case 0:
			return 55818986;
		case 4:
			return -2100600611;
		case 3:
			return 529020251;
		case -1:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_403(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_404()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

bool func_405(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!is_entity_on_screen(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_406(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_405(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_305() - 0.02f);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

int func_407()
{
	return &Global_1899515;
}

int func_408(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_409(int iParam0)
{
	switch (iParam0)
	{
		case -1148613331:
		case -173507739:
		case 433385945:
		case 821931868:
		case 1500834021:
		case 1632247697:
			return true;
		default:
			break;
	}
	return false;
}

bool func_410(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case -416908843:
		case 212278652:
		case 839715153:
		case 1420204096:
		case 1974067816:
		case 2082228755:
			return true;
		default:
			break;
	}
	return false;
}

bool func_411(int iParam0)
{
	switch (iParam0)
	{
		case -273223690:
		case 603685163:
		case 669657108:
		case 725623432:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_412(int iParam0)
{
	switch (iParam0)
	{
		case -702816767:
			return true;
		default:
			break;
	}
	return false;
}

bool func_413(int iParam0)
{
	switch (iParam0)
	{
		case -1721991356:
		case -1233681761:
		case 1500834021:
			return true;
		default:
			break;
	}
	return false;
}

bool func_414(int iParam0)
{
	switch (iParam0)
	{
		case 603685163:
		case 1679686673:
			return true;
		default:
			break;
	}
	return false;
}

bool func_415(int iParam0)
{
	switch (iParam0)
	{
		case -1317052143:
			return true;
		default:
			break;
	}
	return false;
}

bool func_416(bool bParam0, int iParam1, int iParam2)
{
	if (does_entity_exist(Global_1935630->f_32))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_32))
		{
			*iParam1 = Global_1935630->f_32;
			iVar0 = 1;
		}
	}
	if (does_entity_exist(Global_1935630->f_33))
	{
		if (!bParam0 || is_ped_human(Global_1935630->f_33))
		{
			if (_is_ped_hogtied(Global_1935630->f_33) || is_entity_dead(Global_1935630->f_33))
			{
				*iParam2 = Global_1935630->f_33;
				iVar0 = 1;
			}
		}
	}
	if (Global_1935630->f_30 && !is_ped_injured(Global_35))
	{
		iVar1 = _get_lassoed_entity(Global_35);
		if (does_entity_exist(iVar1))
		{
			if (!bParam0 || is_ped_human(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

bool func_417()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_524298)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return true;
	}
	return false;
}

int func_418(int iParam0)
{
	if (!func_421(iParam0))
	{
		return -1;
	}
	return func_533(func_532(iParam0));
}

bool func_419(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_420(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_421(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_422(int iParam0)
{
	return (Global_1310750->f_16035 && iParam0) != 0;
}

bool func_423(int iParam0)
{
	return func_91(iParam0, Global_1310750->f_16072 | 64);
}

int func_424(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1571304986:
			case -1342123354:
			case -1269216817:
			case -1212338017:
			case -803716508:
			case 768224943:
			case 1245139812:
			case 1633500362:
				return 1;
		}
	}
	return 0;
}

int func_425(int iParam0)
{
	if (is_valid_interior(iParam0))
	{
		_get_interior_info(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case -1946266312:
			case -1817199644:
			case -1604045519:
			case -857108408:
			case -431793961:
			case -17417813:
			case 37578405:
			case 459745161:
			case 653987431:
			case 1107105323:
			case 1135757916:
			case 1442115297:
			case 1548023642:
			case 1911907177:
				return 1;
		}
	}
	return 0;
}

bool func_426(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_427(int iParam0)
{
	return ((Global_1310750[iParam0] != 0 && !is_string_null_or_empty(&((*Global_1310750)[iParam0]->f_40))) && get_length_of_literal_string(&((*Global_1310750)[iParam0]->f_40)) != 0);
}

void func_428(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_534();
	if (Global_1935630->f_27)
	{
		Global_1935630->f_28 = get_game_timer();
	}
	if (is_weapon_valid(Global_1935630->f_44))
	{
		if (is_ped_shooting(Global_35))
		{
			if (get_current_ped_vehicle_weapon(Global_35, &uVar1))
			{
			}
			else
			{
				uVar1 = Global_1935630->f_44;
			}
			Global_1935630->f_46 = uVar1;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_535(&(Global_1935630->f_34), &(Global_1935630->f_39));
			Global_1935630->f_38 = iParam0;
			break;
		case 1:
			Global_1935630->f_30 = _0x72ad59f7b7fb6e24(player_id(), 4000);
			if (!Global_1935630->f_30)
			{
				if (Global_1935630->f_44 == 2055893578)
				{
					Global_1935630->f_30 = _get_lassoed_entity(Global_35) != 0;
				}
			}
			break;
		case 2:
			switch (Global_1935630->f_46)
			{
				case 2055893578:
					Global_1935630->f_25 = 0;
					break;
				default:
					if (is_weapon_valid(Global_1935630->f_46) && _0x5809dbca0a37c82b(Global_1935630->f_46))
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 3f;
					}
					else
					{
						Global_1935630->f_25 = _0x285d36c5c72b0569(Global_35) <= 1f;
					}
					if (Global_1935630->f_25)
					{
						Global_1935630->f_29 = get_frame_count();
					}
					break;
			}
			break;
		default:
			Global_1935630->f_38 = iParam0 + 1;
			break;
	}
	Global_22 |= 4;
}

var func_429(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_430(int iParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_185() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_536(iParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_536(iParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_456(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	iParam0->f_14 = iVar0;
	return true;
}

void func_431(int iParam0)
{
	if (*iParam0 & 8 != 0 || *iParam0 & 16 != 0)
	{
		func_537(iParam0);
	}
}

bool func_432(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam2))
	{
		return false;
	}
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_ped_human(iParam2))
	{
		iVar1 = func_456(iParam2);
	}
	else
	{
		iVar1 = func_455(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_456(iParam0);
	}
	else
	{
		iVar0 = func_455(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_2(*iParam1, 8388608))
	{
		return true;
	}
	iVar2 = get_ped_relationship_group_hash(iParam0);
	iVar3 = get_ped_relationship_group_hash(iParam2);
	switch (iVar2)
	{
		case -1976316465:
		case -1505548114:
		case -350651841:
		case -50399569:
		case 106566339:
		case 707888648:
		case 841021282:
			switch (iVar3)
			{
				case -1976316465:
				case -1505548114:
				case -350651841:
				case 841021282:
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_433(int iParam0, int iParam1)
{
	return func_147(iParam0, iParam1, 1, 1);
}

float func_434(int iParam0)
{
	return iParam0->f_26;
}

bool func_435(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

bool func_436(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (Global_1935630->f_44 == 2055893578 && Global_1935630->f_27)
	{
	}
	else if (_0x3ee1f7a8c32f24e1(player_id(), &iVar2, false, false))
	{
		if (is_entity_a_ped(iVar2) && iParam0 == get_ped_index_from_entity_index(iVar2))
		{
			return false;
		}
	}
	if (Global_1935630->f_40 != 0)
	{
		if (_get_rider_of_mount(Global_1935630->f_40, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_147(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (is_player_targetting_entity(iVar1, iParam0, bParam5) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_538(iVar0, 0)))
		{
			if (func_539(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_437(int iParam0)
{
	return iParam0->f_17;
}

bool func_438(int iParam0, int iParam1, float fParam2, float fParam3)
{
	if (iParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_2(*iParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*iParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_439(int iParam0)
{
	return iParam0->f_18;
}

bool func_440(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = player_ped_id();
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	iVar1 = get_player_index();
	if (is_player_dead(iVar1))
	{
		return false;
	}
	if (bParam3)
	{
	}
	if (is_player_targetting_entity(iVar1, iParam0, false) || is_player_free_aiming_at_entity(iVar1, iParam0))
	{
		if ((bParam1 && _0xcb690f680a3ea971(iVar0, 4)) || (bParam2 && _0xcb690f680a3ea971(iVar0, 2)))
		{
			return true;
		}
	}
	if (is_player_free_aiming(iVar1))
	{
		if (_is_weapon_sniper(func_538(iVar0, 0)))
		{
			if (func_540(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

float func_441(int iParam0)
{
	return iParam0->f_23;
}

int func_442(int iParam0)
{
	return iParam0->f_21;
}

int func_443(int iParam0)
{
	switch (iParam0->f_7)
	{
		case 0:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (iParam0->f_6)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (iParam0->f_6)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (iParam0->f_6)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if (*iParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_444(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_541(iParam0, vParam4, 0.5f))
	{
		if (_0x0c9dbf48c6ba6e4c(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (vdist(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_445(int iParam0)
{
	if (get_ped_config_flag(iParam0, 9, false))
	{
		if (Global_1935630->f_44 == -1569615261)
		{
			return 1;
		}
		if (is_weapon_valid(Global_1935630->f_46))
		{
			if (_is_weapon_melee(Global_1935630->f_46) || _is_weapon_bow(Global_1935630->f_46))
			{
				return 1;
			}
		}
	}
	if (func_168(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_446(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	if (_is_this_model_a_horse(iVar0))
	{
		return true;
	}
	return false;
}

bool func_447(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_253(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_448(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_253(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_449(int iParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_253(iParam1))
	{
		return false;
	}
	if (*iParam0 & 65536 != 0)
	{
		fVar0 = _0x2ba9d7bf629f920c(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (has_entity_clear_los_to_entity(iParam1, &(Global_1935630->f_34[iParam3]), 17))
		{
			if (_0x06087579e7aa85a9(iParam1, &(Global_1935630->f_34[iParam3]), -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_450(int iParam0, int iParam1)
{
	if (!_0xefc4303ddc6e60d3(iParam0))
	{
		return false;
	}
	*iParam1 = _0xed1f514af4732258(iParam0);
	if (!does_entity_exist(*iParam1))
	{
		return false;
	}
	if (is_ped_dead_or_dying(*iParam1, true))
	{
		return false;
	}
	if (!_0x2d64376cf437363e(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_451(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_542(iParam0, 1, 0, 0) != 2055893578)
	{
		return false;
	}
	if (is_ped_performing_melee_action(iParam0, 16, 0))
	{
		if (get_melee_target_for_ped(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_452(int iParam0)
{
	return !*iParam0 & 2 != 0;
}

bool func_453(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_156(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_454(int iParam0)
{
	return iParam0->f_24;
}

int func_455(int iParam0)
{
	if (!does_entity_belong_to_this_script(iParam0, true))
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamA") && decor_get_bool(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseOwnerTeamB") && decor_get_bool(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_456(int iParam0)
{
	if (!decor_exist_on(iParam0, "HorseScriptCreator") || decor_get_int(iParam0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return -1;
	}
	if (decor_exist_on(iParam0, "HorseTeamA") && decor_get_bool(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (decor_exist_on(iParam0, "HorseTeamB") && decor_get_bool(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_457(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	if (Global_1935630->f_40 != 0)
	{
		bVar0 = true;
	}
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam1, player_ped_id(), 1, 1))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (has_entity_been_damaged_by_entity(iParam0, Global_1935630->f_40, 1, 1))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 10, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (_0x947e43f544b6ab34(iParam0, get_player_index(), 11, 400))
		{
			if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_450(Global_35, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (is_ped_ragdoll(iParam0) || (!bParam2 && is_entity_touching_entity(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (_0x29fce825613fefca(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_147(iParam0, player_ped_id(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (is_entity_touching_entity(player_ped_id(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (is_ped_ragdoll(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_147(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
		{
			if (is_entity_touching_entity(Global_1935630->f_40, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (is_ped_ragdoll(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_458(int iParam0, int iParam1, bool bParam2)
{
	func_416(1, &iVar0, &iVar1);
	if (!does_entity_exist(iVar0) && !does_entity_exist(iVar1))
	{
		return false;
	}
	if (does_entity_exist(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
			{
				if (has_entity_clear_los_to_entity(iParam0, Global_35, 17))
				{
					if (!bParam2 || !func_459(iParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (does_entity_exist(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17))
			{
				if (!bParam2 || !func_459(iParam1, iVar1))
				{
					if (func_156(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_459(int iParam0, int iParam1)
{
	if (decor_exist_on(iParam1, "bIsCriminal") && decor_get_bool(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (get_ped_config_flag(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = get_ped_relationship_group_default_hash(iParam1);
	switch (iVar0)
	{
		case -1996978098:
		case -1448293989:
		case -350226955:
		case 266218800:
		case 555364152:
		case 1078461828:
		case 1222652248:
			return true;
		default:
			break;
	}
	return false;
}

int func_460(int iParam0)
{
	if (func_543())
	{
		return 0;
	}
	return func_544((*Global_1347702)[58]->f_15, 1);
}

int func_461(int iParam0)
{
	return iParam0->f_20;
}

int func_462(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (iParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = iParam1->f_12;
	}
	if (is_ped_facing_ped(iParam0, Global_35, 90f))
	{
		if (_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1.5f)
	{
		if (is_entity_touching_entity(iParam0, Global_35))
		{
			return 1;
		}
	}
	return 0;
}

bool func_463(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_464(int iParam0)
{
	return func_517(iParam0, 2);
}

bool func_465(int iParam0, bool bParam1)
{
	if (func_40(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_466(float fParam0)
{
	if (func_545(1))
	{
		return true;
	}
	if (func_46(&uLocal_0) && !func_52(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_467(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -2;
		case 2:
			return -5;
		case 3:
			return -10;
		case 4:
			return -20;
		case 5:
			return -40;
		case 6:
			return -160;
		case 7:
			return -320;
		case 8:
			return -480;
		case 18:
			return -640;
		case 9:
			return 0;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 5;
		case 13:
			return 10;
		case 14:
			return 20;
		case 15:
			return 40;
		case 16:
			return 160;
		case 17:
			return 640;
		default:
			break;
	}
	return 0;
}

void func_468(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_546();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_547(iParam0);
		}
		if (does_entity_exist(iParam5))
		{
			if (decor_exist_on(iParam5, "honor_override"))
			{
				iParam0 = (decor_get_int(iParam5, "honor_override") * -1);
				decor_remove(iParam5, "honor_override");
			}
			else if (decor_exist_on(iParam5, "honor_bank"))
			{
				iParam0 = (iParam0 - decor_get_int(iParam5, "honor_bank"));
				decor_set_int(iParam5, "honor_bank", 0);
			}
		}
	}
	iVar2 = 240;
	iVar3 = -240;
	fVar4 = 1f;
	if (func_548(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_543())
		{
			if (((iParam2 >= 0 && iParam2 <= 4) || (iParam2 >= 10 && iParam2 <= 14)) && iParam3 != 446961221)
			{
				fVar4 = 1.5f;
			}
		}
	}
	if (iParam0 > 0)
	{
		iVar5 = ceil((IntToFloat(iParam0) * fVar4));
	}
	else
	{
		iVar5 = floor((IntToFloat(iParam0) * fVar4));
	}
	Global_40.f_11095.f_35 = (Global_40.f_11095.f_35 + iVar5);
	Global_40.f_11095.f_35 = func_549(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_546();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_550(iVar1);
		func_552(func_551(), 0, 4000);
		func_553(Global_40.f_11095.f_35);
		if ((iVar6 > Global_40.f_11095.f_36 && iVar1 > 0) || (iVar6 > Global_40.f_11095.f_37 && iVar1 < 0))
		{
			if (iVar1 < 0)
			{
				Global_40.f_11095.f_37 = iVar6;
			}
			else
			{
				Global_40.f_11095.f_36 = iVar6;
			}
		}
		func_554(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_556(func_555(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_467(14))
				{
					sVar7 = "Honor_Increase_Big";
					animpostfx_play("PlayerHonorLevelGood");
				}
				else
				{
					sVar7 = "Honor_Increase_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_557(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_558(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_558(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_556(func_555(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_467(4))
				{
					sVar7 = "Honor_Decrease_Big";
					animpostfx_play("PlayerHonorLevelBad");
				}
				else
				{
					sVar7 = "Honor_Decrease_Small";
				}
				if (is_string_null_or_empty(sParam4))
				{
					sParam4 = func_557(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_558(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_558(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_555(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_559(10, 1);
	}
}

void func_469(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

void func_470(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_139(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_113(iParam0, 0);
		}
	}
}

void func_471(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_560(1) < iParam0)
	{
		iParam0 = func_560(1);
	}
	_money_decrement_cash_balance(iParam0);
	Var0 = { func_555(1644987397) };
	_0xbd861ae8a5181ed7(&Var0, iParam0);
}

void func_472(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_558(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_473(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_558(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_474(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_561())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_558(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_562(iVar0);
			func_563(iVar0, 0, 0);
		}
		func_558(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_556(func_555(1644987397), iVar1);
	}
}

void func_475(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

int func_476(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_475(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_191(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
		if (!iParam8 & 2097152 != 0)
		{
			set_ped_reset_flag(*uParam0, 184, true);
		}
		if (iParam8 & 8388608 != 0)
		{
			set_ped_reset_flag(*uParam0, 281, true);
		}
		if (bVar5)
		{
			bVar1 = (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35));
		}
		if (bVar7 || (bVar5 && bVar1))
		{
			func_47(&(iParam1->f_13));
		}
		if (func_564(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_565(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_476(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_61(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_566(*uParam0, 1, 1);
						}
					}
					else if (func_567(iParam1, 22))
					{
						func_566(*uParam0, 0, 1);
					}
				}
				if (func_568(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_569(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_570(iParam8);
					if (func_571(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_572(uParam3);
								}
							}
							return iParam1->f_1;
						}
					}
					else if (iParam1->f_2 != 2)
					{
						if (iParam1->f_1 != -1)
						{
							iParam1->f_1 = -1;
						}
					}
				}
				else
				{
					func_573(iParam1, uParam3, fVar8);
					if (func_574(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_62(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_575(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_568(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_576(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_571(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_569(uParam0, func_568(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_570(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_62(uParam3, 0, 0, 1, 1);
					}
					func_577(iParam1, 1);
				}
				func_573(iParam1, uParam3, fVar8);
				if (func_575(uParam0, iParam1, fParam4, bVar6))
				{
					if (iParam8 & 512 != 0)
					{
						iParam1->f_2 = 0;
					}
					else
					{
						iParam1->f_2 = 1;
					}
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
		}
	}
	else if (!iParam8 & 1024 != 0)
	{
		if (!is_bit_set(*iParam1, 3))
		{
			func_312(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_477(int* iParam0, var uParam1, var uParam2)
{
	iVar0 = func_578(iParam0);
	if (iVar0 != -1)
	{
		sVar1 = (*uParam1)[iVar0]->f_13;
		iVar2 = (*uParam1)[iVar0]->f_15;
		if (!is_string_null_or_empty(sVar1))
		{
			func_43(Global_35, *uParam2, sVar1, "", -1082130432, iVar2, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
		}
	}
}

bool func_478(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_185() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

void func_479(int iParam0, bool bParam1)
{
	func_579(iParam0, &iVar0, &iVar1);
	if (!func_580(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_581(iVar0, iVar1);
}

void func_480(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 256;
	uParam0->f_4 = 0;
	func_143(&(uParam0->f_5));
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0.25f;
	uParam0->f_18 = 0.25f;
	uParam0->f_19 = 40000f;
	uParam0->f_20 = 10f;
	uParam0->f_21 = 1f;
	uParam0->f_22 = 0f;
	uParam0->f_23 = 0;
	uParam0->f_25 = 0;
	StringCopy(&(uParam0->f_30), "", 24);
	StringCopy(&(uParam0->f_26), "", 32);
}

int func_481(var uParam0, var uParam1, int iParam2, vector3 vParam3, float fParam6)
{
	iVar0 = _create_volume_cylinder(vParam3, 0f, 0f, 0f, fParam6, fParam6, fParam6);
	iVar1 = func_582(uParam0, uParam1, iParam2, iVar0);
	func_66(iVar0);
	return iVar1;
}

float func_482(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = vmag(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_483(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

Vector3 func_484(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (!bParam4 && is_ped_injured(iParam0))
	{
		return 0f, 0f, 0f;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return 0f, 0f, 0f;
	}
	if (_get_anim_scene_entity_matrix(iParam1, sParam2, &vVar0, true, sParam3, 2))
	{
		return vVar0;
	}
	return 0f, 0f, 0f;
}

int func_485(int iParam0)
{
	iVar0 = 0;
	if (_0x9a100f1cf4546629(iParam0))
	{
		iVar0 = func_583(iParam0);
	}
	return iVar0;
}

void func_486(int iParam0, var uParam1)
{
	if (does_entity_exist(Global_35) && !Global_1935630->f_12)
	{
		iVar0 = func_584(iParam0);
		if (iVar0 <= 1)
		{
			iVar1 = 462;
			if (func_585(iParam0))
			{
				iVar1 = 463;
			}
			uVar2 = func_586(iParam0);
			func_587(iVar1, uVar2, 1);
		}
	}
}

void func_487(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return;
	}
	iVar0 = get_ped_index_from_entity_index(iParam0);
	_0x6569f31a01b4c097(iVar0, 0, iParam1);
	_0x6569f31a01b4c097(iVar0, 1, iParam1);
}

void func_488()
{
	func_588(23);
}

int func_489(var uParam0)
{
	if (uParam0->f_46 && uParam0->f_48)
	{
		if (uParam0->f_5.f_16 != 16384)
		{
			return 1;
		}
	}
	return 0;
}

void func_490(int iParam0)
{
	iVar0 = func_589(iParam0);
	if (iVar0 != 0)
	{
		func_590(-1, 24, 0, iVar0);
	}
}

void func_491(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	if (Global_1310750->f_16071 != iParam0 && !bParam2)
	{
		return;
	}
	if (&Global_17504.f_42[iParam0] == 0)
	{
		func_556(func_555(-1029789297), 1);
	}
	Global_17504.f_4++;
	Global_17504.f_42[iParam0] = &Global_17504.f_42[iParam0] + 1;
	(*Global_1310750)[iParam0]->f_110 |= 8;
	if (func_91(iParam0, 2))
	{
		func_591(iParam0, func_388(iParam3));
	}
	if (func_91(iParam0, 1))
	{
		if (iParam4 == -1)
		{
			iParam4 = func_131();
		}
		func_592(iParam0, iParam4);
	}
	if (iParam1 >= 0 && !func_120(iParam0, 65536))
	{
		func_593(iParam0, iParam1);
		func_594(iParam0, func_206(iParam0, iParam1));
		func_181(128);
	}
	func_391(iParam0, (*Global_1310750)[iParam0]->f_37, 1065353216, 0, 0);
	func_392(iParam0, 1);
	if (!bParam2)
	{
		func_181(16);
		Global_17504.f_5 = iParam0;
		Global_17504.f_9 = 1;
		Global_17504.f_7 = 0;
		Global_17504.f_8 = 0;
		func_595(524288);
	}
	if (func_596(iParam0) != 0)
	{
		if (&Global_17504.f_42[iParam0] >= func_596(iParam0))
		{
			Global_17504.f_42[iParam0]->f_6 = 1;
		}
	}
}

void func_492(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_597(&Global_0, 8);
	}
	if (!func_598() || func_185() != -1)
	{
		return;
	}
	func_597(&Global_0, 1);
}

int func_493(int iParam0, bool bParam1)
{
	if (!bParam1 && network_is_game_in_progress())
	{
		return 0;
	}
	if (!_0xf6a8a652a6b186cd(iParam0))
	{
	}
	iVar1 = 0;
	while (iVar1 < &Global_1911670)
	{
		iVar0 = Global_1911670[iVar1];
		if (!_0xf6a8a652a6b186cd(iVar0) || iVar0 == iParam0)
		{
			(*Global_1911670)[iVar1] = iParam0;
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_494(int iParam0)
{
	Global_17504.f_2++;
	Global_17504.f_42[iParam0]->f_3++;
	(*Global_1310750)[iParam0]->f_110 |= 2;
}

bool func_495(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (func_211(vParam0))
	{
		return false;
	}
	iVar0[0] = iParam4;
	iVar5[0] = 16384;
	iVar5[1] = iParam5;
	if (_0x870e9981ed27c815(vParam0, &iVar0, &iVar5, iParam3))
	{
		return true;
	}
	return false;
}

bool func_496(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
	if (func_211(vParam0))
	{
		return false;
	}
	return _0x769bb7626b8cdb06(vParam0, fParam3, iParam5, iParam4, 16384);
}

bool func_497(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_1310750->f_16043)
	{
		if (!func_211(*Global_1310750->f_16043[iVar0]))
		{
			if (func_178(vParam0, *Global_1310750->f_16043[iVar0]) < 2500f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_498()
{
	iVar0 = func_599(func_3());
	if (iVar0 == 8)
	{
		iVar1 = func_258(func_3());
		if (func_260(Global_36, iVar1))
		{
			return false;
		}
	}
	if (func_600(func_518(0)))
	{
		return false;
	}
	if (func_601())
	{
		return false;
	}
	if (is_player_riding_train(player_id()))
	{
		return false;
	}
	return true;
}

float func_499(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_500(float fParam0)
{
	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 360f);
	}
	else if (fParam0 >= 360f)
	{
		fVar0 = (fVar0 - 360f);
	}
	return fVar0;
}

int func_501(var uParam0, var uParam1)
{
	vVar0 = { *uParam0 };
	if (func_602(&uParam1))
	{
		return 1;
	}
	if (!func_603(&vVar0, 1, 10, 0))
	{
		return 0;
	}
	*uParam0 = { vVar0 };
	return 1;
}

bool func_502(var uParam0)
{
	if (uParam0->f_3 != 41788943)
	{
		if (_is_metaped_outfit_request_valid(uParam0->f_5))
		{
			if (_0x610438375e5d1801(uParam0->f_5))
			{
				return true;
			}
		}
	}
	return false;
}

int func_503(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, bParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_604(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

bool func_504(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(iParam0))
	{
		return false;
	}
	iVar0 = get_entity_model(iParam0);
	return _is_this_model_a_horse(iVar0);
}

bool func_505(var uParam0)
{
	return func_36(*uParam0, 4);
}

bool func_506(var uParam0)
{
	return func_36(*uParam0, 64);
}

bool func_507(var uParam0)
{
	return func_36(*uParam0, 8);
}

bool func_508(var uParam0)
{
	return func_36(*uParam0, 128);
}

bool func_509(var uParam0)
{
	return func_36(*uParam0, 2048);
}

void func_510(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 130, !bParam1);
	set_ped_config_flag(iParam0, 178, bParam1);
}

bool func_511(var uParam0)
{
	return func_36(*uParam0, 1024);
}

bool func_512(var uParam0)
{
	return func_36(*uParam0, 256);
}

void func_513(int iParam0, bool bParam1)
{
	set_ped_config_flag(iParam0, 146, !bParam1);
	set_ped_config_flag(iParam0, 148, !bParam1);
}

bool func_514(var uParam0)
{
	return func_36(*uParam0, 512);
}

bool func_515(var uParam0)
{
	return func_36(*uParam0, 4096);
}

int func_516(int iParam0)
{
	switch (iParam0)
	{
		case -1273613561:
		case -776789570:
		case -763072541:
		case -486390692:
		case 50483426:
		case 215164947:
		case 247176142:
		case 347599949:
		case 852072701:
		case 861896523:
		case 1017000466:
		case 1245530084:
		case 1336863290:
		case 1485366395:
			return 0;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			return 2;
		case 363815774:
			return 1;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			return 3;
		case -1090280091:
		case -1076294934:
			return 4;
		case -1011228908:
		case -1008616424:
		case 424175505:
			return 5;
	}
	return -1;
}

bool func_517(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_518(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = func_605(1, 0, 0);
	}
	else
	{
		iVar0 = func_3();
	}
	return func_519(iVar0);
}

int func_519(int iParam0)
{
	switch (iParam0)
	{
		case 40:
			return 1;
		case 78:
			return 2;
		case 37:
			return 4;
		case 38:
			return 8;
		case 93:
			return 16;
		case 82:
			return 32;
		case 95:
			return 64;
		case 65:
			return 128;
		case 68:
			return 256;
		case 69:
			return 512;
		case 3:
			return 1024;
		case 61:
			return 2048;
		case 110:
			return 4096;
		case 5:
			return 8192;
		case 35:
			return 16384;
		case 22:
			return 32768;
		case 105:
			return 65536;
		case 8:
			return 131072;
		case 32:
			return 262144;
		case 26:
			return 524288;
		case 115:
			return 1048576;
		case 76:
			return 2097152;
		case 92:
			return 4194304;
		case 56:
			return 8388608;
		case 120:
			return 16777216;
		default:
			break;
	}
	return 0;
}

int func_520(int iParam0)
{
	iVar0 = 0;
	iVar1 = iParam0;
	while (iParam0 > 1)
	{
		iParam0 = shift_right(iParam0, 1);
		iVar0++;
	}
	return iVar0;
}

int func_521(int iParam0, int iParam1)
{
	iVar0 = &Global_1326862->f_512[iParam1];
	iVar1 = &Global_1326862->f_558[iParam1];
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (iParam0 == &Global_1326862->f_11[iVar2])
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

void func_522(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_357(Global_1310750[iVar0], iParam0))
		{
			if (!func_346(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_606(iVar0) < func_607(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_391(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

bool func_523(int iParam0)
{
	iVar0 = func_608(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_524(int iParam0)
{
	if (&Global_1310750->f_13321[iParam0] != -1)
	{
		(*Global_1310750)[&Global_1310750->f_13321[iParam0]]->f_48 = 0;
	}
	Global_1310750->f_13321[iParam0] = -1;
	Global_1310750->f_13321[iParam0]->f_1 = -1;
	Global_1310750->f_13321[iParam0]->f_2 = { 0f, 0f, 0f };
	Global_1310750->f_13321[iParam0]->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_1310750->f_13321[iParam0]->f_6[iVar0] = -1881652455;
		iVar0++;
	}
}

void func_525(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_526()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_609(iVar0, 128))
		{
			func_610(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_527()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_609(iVar0, 128) && func_609(iVar0, 1))
		{
			func_610(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_528(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_529()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_91(iVar0, 16777216))
		{
			if (!func_611(iVar0))
			{
				func_612(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

void func_530(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_73(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_73(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_73(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_73(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_73(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_73(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_73(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

void func_531(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_305();
	fVar1 = (Global_1393447->f_60 - fVar0);
	bVar2 = fParam0 >= fVar1;
	if (!bParam1)
	{
		if (bVar2)
		{
			bParam1 = true;
		}
	}
	if ((!bVar2 && fParam0 >= 0f) && !bParam2)
	{
	}
	else
	{
		Global_1393447->f_60 = (fVar0 + fParam0);
	}
}

int func_532(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12106[iParam0]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0]);
}

int func_533(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

bool func_534()
{
	if (func_613())
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		if (Global_1935630->f_44 == 2055893578)
		{
			return is_control_pressed(0, 130948705);
		}
		return get_ped_reset_flag(Global_35, 311);
	}
	else
	{
		return &(Global_1955569->f_992[2]);
	}
	return false;
}

void func_535(var uParam0, var uParam1)
{
	iVar2 = player_id();
	if (!_0x72ad59f7b7fb6e24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (_0x1a6e84f13c952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!does_entity_exist(uParam0[iVar1]))
			{
			}
			else if (!is_ped_human(uParam0[iVar1]) && !(decor_exist_on(uParam0[iVar1], "HorseTeamA") || decor_exist_on(uParam0[iVar1], "HorseTeamB")))
			{
			}
			else if (decor_exist_on(uParam0[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

int func_536(int iParam0)
{
	if (iVar0 == 0)
	{
		if (is_control_just_pressed(0, -171675621))
		{
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar1, false, false))
			{
				if (does_entity_exist(iVar1))
				{
					if (is_entity_a_ped(iVar1))
					{
						if (_is_this_model_a_horse(get_entity_model(iVar1)))
						{
							iVar0 = get_ped_index_from_entity_index(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (iParam0->f_6 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1935630->f_12)
			{
				iVar0 = _0x4b19f171450e0d4f(Global_35);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = _get_lassoed_entity(Global_35);
		}
		if (iVar0 != 0)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_this_model_a_horse(get_entity_model(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_537(int iParam0)
{
	if (Global_1935630->f_38 == 0)
	{
		func_115(iParam0, 67108864);
		iVar0 = 0;
		while (iVar0 < Global_1935630->f_39)
		{
			if (does_entity_exist(&(Global_1935630->f_34[iVar0])))
			{
				if (!_0x88ad6cc10d8d35b2(&(Global_1935630->f_34[iVar0])))
				{
					func_116(iParam0, 67108864);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_538(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_539(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_540(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_540(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	bVar2 = get_hud_screen_position_from_world_position(vParam0, &fVar0, &fVar1);
	if (bVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

bool func_541(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

int func_542(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = -1569615261;
	if (is_entity_dead(iParam0) || !is_ped_human(iParam0))
	{
		return iVar0;
	}
	if (get_current_ped_weapon(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

bool func_543()
{
	if (func_185() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_544(int iParam0, bool bParam1)
{
	switch (func_614(iParam0))
	{
		case 5:
			return 1;
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_545(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

int func_546()
{
	iVar0 = func_615();
	if (iVar0 <= -320)
	{
		return -320;
	}
	if (iVar0 <= -280)
	{
		return -280;
	}
	if (iVar0 <= -240)
	{
		return -240;
	}
	if (iVar0 <= -200)
	{
		return -200;
	}
	if (iVar0 <= -160)
	{
		return -160;
	}
	if (iVar0 <= -120)
	{
		return -120;
	}
	if (iVar0 <= -80)
	{
		return -80;
	}
	if (iVar0 <= -40)
	{
		return -40;
	}
	if (iVar0 >= 320)
	{
		return 320;
	}
	if (iVar0 >= 280)
	{
		return 280;
	}
	if (iVar0 >= 240)
	{
		return 240;
	}
	if (iVar0 >= 200)
	{
		return 200;
	}
	if (iVar0 >= 160)
	{
		return 160;
	}
	if (iVar0 >= 120)
	{
		return 120;
	}
	if (iVar0 >= 80)
	{
		return 80;
	}
	if (iVar0 >= 40)
	{
		return 40;
	}
	return 0;
}

int func_547(int iParam0)
{
	if (func_185() != -1)
	{
		return iParam0;
	}
	if (Global_1347477->f_2 + 120000) < get_game_timer()
	{
		Global_1347477->f_3 = 1;
		Global_1347477->f_2 = get_game_timer();
		return iParam0;
	}
	fVar0 = 1f;
	Global_1347477->f_2 = get_game_timer();
	Global_1347477->f_3++;
	if (Global_1347477->f_3 >= 10)
	{
		fVar0 = 2f;
	}
	else if (Global_1347477->f_3 >= 3)
	{
		fVar0 = 1.5f;
	}
	fVar1 = (to_float(iParam0) * fVar0);
	fVar1 = func_191(absf(fVar1) < 1f, func_191(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_548(int iParam0)
{
	if (!func_616(iParam0))
	{
		return false;
	}
	return func_617(iParam0);
}

int func_549(int iParam0, int iParam1, int iParam2)
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

int func_550(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case -40:
		case 40:
			return 1;
		case -80:
		case 80:
			return 2;
		case -120:
		case 120:
			return 3;
		case -160:
		case 160:
			return 4;
		case -200:
		case 200:
			return 5;
		case -240:
		case 240:
			return 6;
		case -280:
		case 280:
			return 7;
		case -320:
		case 320:
			return 8;
	}
	return 0;
}

int func_551()
{
	if (Global_40.f_11095.f_35 <= -320)
	{
		return 1;
	}
	else if (Global_40.f_11095.f_35 <= -280)
	{
		return 2;
	}
	else if (Global_40.f_11095.f_35 <= -240)
	{
		return 3;
	}
	else if (Global_40.f_11095.f_35 <= -200)
	{
		return 4;
	}
	else if (Global_40.f_11095.f_35 <= -160)
	{
		return 5;
	}
	else if (Global_40.f_11095.f_35 <= -120)
	{
		return 6;
	}
	else if (Global_40.f_11095.f_35 <= -80)
	{
		return 7;
	}
	else if (Global_40.f_11095.f_35 < 0)
	{
		return 8;
	}
	else if (Global_40.f_11095.f_35 <= 40)
	{
		return 9;
	}
	else if (Global_40.f_11095.f_35 >= 320)
	{
		return 16;
	}
	else if (Global_40.f_11095.f_35 >= 280)
	{
		return 15;
	}
	else if (Global_40.f_11095.f_35 >= 240)
	{
		return 14;
	}
	else if (Global_40.f_11095.f_35 >= 200)
	{
		return 13;
	}
	else if (Global_40.f_11095.f_35 >= 160)
	{
		return 12;
	}
	else if (Global_40.f_11095.f_35 >= 120)
	{
		return 11;
	}
	else if (Global_40.f_11095.f_35 >= 80)
	{
		return 10;
	}
	return 9;
}

void func_552(int iParam0, bool bParam1, int iParam2)
{
	func_618((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_619(iParam0);
}

void func_553(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), 0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), 1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_620(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_554(bool bParam0)
{
	bVar3 = false;
	if (func_621(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_622(iVar5, &iVar2, &iVar0))
			{
				if (!func_623(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_624(iVar2);
					if (_unlock_is_unlocked(iVar1))
					{
						if (bParam0)
						{
							_unlock_set_unlocked(iVar1, false);
						}
					else
					{
						}
						else
						{
							if (func_625(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_546() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_546() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_626();
							}
							if (bVar3)
							{
								_unlock_set_unlocked(iVar1, true);
								bVar3 = false;
							}
						}
						iVar5++;
					}
				}
			}
		}
	}
}

struct<2> func_555(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_556(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

char* func_557(int iParam0)
{
	switch (iParam0)
	{
		case 2139774588:
			return "HONOR_EVENT_LOOT_INNOCENT";
		case 1142025875:
			return "HONOR_EVENT_AMBIENT_KILL";
		case 1587891565:
			return "HONOR_EVENT_AMBIENT_KO";
		case 1877013492:
			return "HONOR_EVENT_SCARE";
		case -643014279:
			return "HONOR_EVENT_KILL_VERMIN";
		case -597116214:
			return "HONOR_EVENT_KILL_FARM_ANIMAL";
		case 551416228:
			return "HONOR_EVENT_KILL_HORSE";
		case 1022576842:
			return "HONOR_EVENT_STEAL_HORSE";
		case 953325896:
			return "HONOR_EVENT_STEAL_DONKEY";
		case 508358508:
			return "HONOR_EVENT_STEAL_MULE";
		case -856432278:
			return "HONOR_EVENT_STEAL_WAGON";
		case -735200598:
			return "HONOR_EVENT_TRAMPLED_INNOCENT";
		case -2010847721:
			return "HONOR_EVENT_ABANDON_ANIMALS";
		case 446961221:
			return "HONOR_EVENT_ANIMAL_BLEEDOUT";
		case -1972216640:
			return "HONOR_EVENT_ANTAGONIZE";
		case 530833824:
			return "HONOR_EVENT_THEFT";
		case 1682361219:
			return "HONOR_EVENT_INTERVENED";
		case 158959085:
			return "HONOR_EVENT_WANTED_IN_CAMP";
		case 1919819559:
			return "HONOR_EVENT_DONATED_GAME";
		case 1461411082:
			return "HONOR_EVENT_ITEM_REQUEST";
		case -549508280:
			return "HONOR_EVENT_LONG_ABSENCE";
		case -1787248475:
			return "HONOR_EVENT_CRUEL_DEATH";
		case 932872355:
			return "HONOR_EVENT_JUSTICE_SERVED";
		case -1091304842:
			return "HONOR_EVENT_CHEAT";
		default:
			break;
	}
	return "";
}

var func_558(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_627(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_559(int iParam0, int iParam1)
{
	if (!func_628(iParam0))
	{
		return 0;
	}
	if (!func_598())
	{
		return 0;
	}
	if (!func_629(iParam0, &iVar0, &uVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, uVar1, iParam1);
	return 1;
}

int func_560(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_561()
{
	if (func_630())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_562(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_631((Global_40.f_4283.f_325 + iParam0));
}

void func_563(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_561())
	{
		func_558(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_558(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_564(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_632(iParam0, iParam1))
		{
			if (!func_2(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_62(uParam2, 0, 0, 1, 0);
				func_116(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_2(iParam1->f_10, 1))
		{
			func_633(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_115(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_565(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_2(iParam4, 32);
		func_470(iParam1, uParam2, 0);
		iVar5 = func_634(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_62(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_2(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_2(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_2(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_2(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_2(iParam4, 8388608) || func_2(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_2(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_2(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_567(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_567(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_2(iParam4, 67108864))
		{
			iVar6 |= 16384;
		}
		if (iParam1->f_6 < -1 || (iParam1->f_6 > -1 && iParam1->f_6 > 3))
		{
			iParam1->f_6 = -1;
		}
		if (_0x870708a6e147a9ad(*uParam0, &cVar0, fParam3, fParam3, iVar6, iParam1->f_7, iParam1->f_8, iVar5, 0, iParam1->f_6))
		{
			if (iParam6 == 2)
			{
				iParam6 = func_635(uParam0);
			}
			if (iParam6 != 2)
			{
				bVar7 = true;
			}
			if (!bVar7)
			{
				switch (iParam6)
				{
					case 2:
						if (!is_string_null_or_empty(&cVar0))
						{
							iParam6 = get_hash_key(&cVar0);
						}
						break;
				}
				if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
				if (!is_string_null_or_empty(sParam5) && iParam6 == 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, get_hash_key(sParam5));
				}
				else if (iParam6 != 2)
				{
					_0xfca8fb9e15fa80d3(*uParam0, iParam6);
				}
			}
			set_ped_config_flag(*uParam0, 130, true);
			set_ped_config_flag(*uParam0, 178, false);
			set_ped_config_flag(*uParam0, 297, true);
			set_ped_config_flag(*uParam0, 301, false);
			if (func_2(iParam4, 268435456))
			{
				iVar8 = func_636(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_637(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_567(iParam1, 23))
			{
				set_ped_config_flag(*uParam0, 315, false);
				set_ped_config_flag(*uParam0, 331, false);
				set_ped_config_flag(*uParam0, 493, true);
			}
			else
			{
				set_ped_config_flag(*uParam0, 315, true);
				set_ped_config_flag(*uParam0, 493, false);
			}
			if (func_2(iParam4, 2) || func_2(iParam4, 16))
			{
				func_566(*uParam0, 1, 1);
			}
			else
			{
				func_566(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_566(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_567(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_568(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	bVar0 = (!_does_volume_exist(iParam2) || is_entity_in_volume(Global_35, iParam2, true, 0));
	bVar1 = iParam1 & 32 != false;
	bVar2 = iParam1 & 65792 != false;
	bVar3 = iParam1 & 1179648 != false;
	if (bVar0)
	{
		if (bVar1)
		{
			return true;
		}
		if (func_638(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_569(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
{
	if (bParam1)
	{
		if (!is_bit_set(*iParam2, 1))
		{
			if (bParam14)
			{
				iVar0 = 0;
				while (iVar0 < *uParam4)
				{
					set_bit((*uParam4)[iVar0], 14);
					iVar0++;
				}
			}
			func_639(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_2(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_570(int iParam0)
{
	if (func_2(iParam0, 4))
	{
		disable_control_action(0, -128997553, true);
		disable_control_action(0, 130948705, true);
		disable_control_action(0, 42190210, true);
		disable_control_action(0, 1632043089, true);
		disable_control_action(0, 1623727326, true);
		disable_control_action(0, -922478227, true);
		disable_control_action(0, -674562833, true);
		disable_control_action(0, -197984200, true);
		disable_control_action(0, -238861894, true);
	}
	if (func_2(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_2(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_571(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_560(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_640(Global_35)) || func_641(Global_35)) || func_642(Global_35));
	fVar12 = -1f;
	if (func_46(&(iParam1->f_13)))
	{
		fVar12 = func_308(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_138((*uParam4)[iVar0]->f_6);
		func_643(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_644(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_645(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_62(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_171(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_470(iParam1, uParam4, is_bit_set(*iParam1, 6));
					}
					iParam1->f_1 = iVar0;
					bVar5 = true;
					iParam1->f_9 = is_bit_set(uParam4[iParam1->f_1], 16);
					if (!iParam1->f_9)
					{
						set_bit(iParam1, 0);
					}
					if (!bVar2)
					{
						if (!is_string_null_or_empty((*uParam4)[iVar0]->f_11))
						{
							if (!is_string_null_or_empty((*uParam4)[iVar0]->f_12))
							{
								task_play_anim(Global_35, (*uParam4)[iVar0]->f_11, (*uParam4)[iVar0]->f_12, 4f, -4f, -1, 67108880, 0f, false, 0, false, 0, false);
							}
						}
					}
					if (func_646(iParam1, fParam6, iParam1->f_9))
					{
						func_47(&(iParam1->f_18));
						if (bVar6)
						{
							func_171(uParam4, 0, 0);
						}
						iParam1->f_2 = 2;
					}
					if (iParam1->f_2 != 2)
					{
						if (iParam1->f_2 != 3)
						{
							if (bVar8)
							{
								iParam1->f_2 = 0;
							}
						}
					}
					if (!bParam14)
					{
						bVar5 = true;
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		func_647(iParam1, fParam2);
	}
	return bVar5;
}

void func_572(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (is_bit_set(uParam0[iVar0], 20))
		{
			if (!is_bit_set(uParam0[iVar0], 21))
			{
				clear_bit((*uParam0)[iVar0], 20);
				clear_bit((*uParam0)[iVar0], 21);
			}
		}
		iVar0++;
	}
}

void func_573(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_648((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_647(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_574(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_649(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_650(iParam1, 0);
				func_470(iParam1, uParam2, func_567(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_575(var uParam0, int* iParam1, float fParam2, bool bParam3)
{
	if (iParam1->f_9)
	{
		if (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0))
		{
			return false;
		}
		iParam1->f_9 = 0;
		set_bit(iParam1, 0);
		if (fParam2 > 0f)
		{
			func_47(&(iParam1->f_18));
			return false;
		}
		else if (func_46(&(iParam1->f_18)))
		{
			func_143(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_46(&(iParam1->f_18)))
	{
		return true;
	}
	if (fParam2 > 0f && bParam3)
	{
		if (is_ambient_speech_playing(Global_35) || is_scripted_speech_playing(Global_35))
		{
			return false;
		}
	}
	return func_52(&(iParam1->f_18), fParam2);
	return true;
}

void func_576(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_643(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_577(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

int func_578(int* iParam0)
{
	if (func_567(iParam0, 0))
	{
		if (func_651(iParam0))
		{
			func_577(iParam0, 0);
			return iParam0->f_1;
		}
	}
	return -1;
}

void func_579(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_580(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_652(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_653(iParam0))
	{
		return false;
	}
	if (func_654(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_655(iParam0, 1)) || func_656(32768))
	{
		if (!func_655(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_657())
	{
		return false;
	}
	return true;
}

void func_581(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_582(var uParam0, var uParam1, int iParam2, int iParam3)
{
	iVar0 = create_itemset(true);
	iVar5 = _0x886171a12f400b89(iParam3, iVar0, 1);
	if (iVar5 > iParam2)
	{
	}
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		iVar1 = get_indexed_item_in_itemset(iVar4, iVar0);
		iVar2 = iVar1;
		if (does_entity_exist(iVar2))
		{
			if (!is_entity_dead(iVar2))
			{
				if (func_504(iVar2))
				{
					if (!func_658(iVar2, uParam1))
					{
						if (iVar3 < *uParam0 && iVar3 < iParam2)
						{
							(*uParam0)[iVar3] = iVar2;
							iVar3++;
						}
					}
				}
			}
		}
		iVar4++;
	}
	destroy_itemset(iVar0);
	return iVar3;
}

int func_583(int iParam0)
{
	return _0x964000d355219fc0(get_ped_index_from_entity_index(iParam0));
}

int func_584(int iParam0)
{
	if (!func_659(iParam0))
	{
		return 0;
	}
	Var1 = { func_660(iParam0) };
	if (stat_id_get_int(&Var1, &uVar0))
	{
		return uVar0;
	}
	return 0;
}

bool func_585(int iParam0)
{
	Var0 = { func_661(-1366121835, func_586(iParam0)) };
	return _stat_id_is_valid(&Var0);
}

int func_586(int iParam0)
{
	return iParam0;
}

void func_587(int iParam0, var uParam1, bool bParam2)
{
	func_579(iParam0, &iVar0, &iVar1);
	if (!func_580(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_655(iParam0, 1024))
	{
		return;
	}
	func_581(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = uParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_588(int iParam0)
{
	if (func_185() != -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		if (func_130(func_662(iVar0), 0))
		{
			if (is_ped_group_member(func_662(iVar0), func_348(), 1))
			{
				func_663(iVar0, iParam0);
			}
		}
		iVar0++;
	}
}

int func_589(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 1;
		case 60:
			return 37;
		case 97:
			return 26;
		default:
			break;
	}
	return 0;
}

void func_590(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = Global_1415419->f_19[iParam0]->f_5;
	}
	if (iParam3 != 0)
	{
		iVar0 = 0;
		while (iVar0 < 248)
		{
			if (Global_1415419->f_19[iVar0]->f_5 == iParam3)
			{
				if (iVar0 != iParam0)
				{
					if (func_664() > Global_32074.f_2697.f_6[iVar0]->f_5)
					{
						Global_32074.f_2697.f_6[iVar0]->f_5 = func_664();
					}
					func_665(&(Global_32074.f_2697.f_6[iVar0]->f_5), 0, 0, iParam1, iParam2, 0, 0, 0);
					func_115(&(Global_1415419->f_19[iVar0]->f_11), 2);
				}
			}
			iVar0++;
		}
	}
}

void func_591(int iParam0, int iParam1)
{
	if (iParam1 != 0)
	{
		iVar0 = func_520(iParam1);
		iVar1 = (17 + iVar0);
		iVar2 = func_521(iParam0, iVar1);
		if (iVar2 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar2]->f_1++;
	}
}

void func_592(int iParam0, int iParam1)
{
	if (iParam1 != -1 && !func_120(iParam0, 8192))
	{
		iVar0 = func_521(iParam0, iParam1);
		if (iVar0 < 0)
		{
			return;
		}
		Global_17504.f_2205[iVar0]->f_1++;
	}
}

void func_593(int iParam0, int iParam1)
{
	iVar0 = (func_353(iParam0) + iParam1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_17504.f_12[iVar1], iVar2);
}

void func_594(int iParam0, vector3 vParam1)
{
	if (func_91(iParam0, 512))
	{
		vParam1 = { Global_36 };
	}
	if (func_211(vParam1))
	{
		return;
	}
	if (!func_197(iParam0))
	{
		return;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < Global_17504.f_2084)
	{
		vVar2 = { *Global_17504.f_2084[iVar0] };
		if (func_211(vVar2))
		{
			if (iVar1 < 0)
			{
				iVar1 = iVar0;
			}
		}
		else if (Global_17504.f_2084[iVar0]->f_3 == iParam0)
		{
			if (func_367(vVar2, vParam1, 1f, 1))
			{
				return;
			}
		}
		iVar0++;
	}
	if (iVar1 >= 0)
	{
		*Global_17504.f_2084[iVar1] = { vParam1 };
		Global_17504.f_2084[iVar1]->f_3 = iParam0;
		Global_17504.f_2084[iVar1]->f_4 = (*Global_1310750)[iParam0]->f_62;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_17504.f_2084)
		{
			if (iVar0 + 1 >= 24)
			{
				*Global_17504.f_2084[iVar0] = { vParam1 };
				Global_17504.f_2084[iVar0]->f_3 = iParam0;
				Global_17504.f_2084[iVar0]->f_4 = (*Global_1310750)[iParam0]->f_62;
			}
			else
			{
				*Global_17504.f_2084[iVar0] = { *(Global_17504.f_2084[iVar0 + 1]) };
			}
			iVar0++;
		}
	}
}

void func_595(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_612(iVar0, iParam0);
		iVar0++;
	}
}

int func_596(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 2;
		case 2:
			return 2;
		case 3:
			return 2;
		case 75:
			return 1;
		case 76:
			return 1;
		case 4:
			return 2;
		case 77:
			return 2;
		case 5:
			return 2;
		case 6:
			return 3;
		case 7:
			return 2;
		case 78:
			return 2;
		case 8:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 11:
			return 2;
		case 12:
			return 3;
		case 13:
			return 2;
		case 14:
			return 2;
		case 15:
			return 5;
		case 16:
			return 1;
		case 17:
			return 2;
		case 18:
			return 2;
		case 91:
			return 1;
		case 19:
			return 1;
		case 20:
			return 3;
		case 21:
			return 1;
		case 22:
			return 1;
		case 23:
			return 3;
		case 94:
			return 8;
		case 24:
			return 3;
		case 119:
			return 4;
		case 27:
			return 6;
		case 28:
			return 2;
		case 29:
			return 2;
		case 30:
			return 4;
		case 31:
			return 3;
		case 32:
			return 1;
		case 33:
			return 2;
		case 34:
			return 1;
		case 35:
			return 1;
		case 96:
			return 4;
		case 36:
			return 3;
		case 37:
			return 4;
		case 38:
			return 1;
		case 39:
			return 1;
		case 40:
			return 4;
		case 41:
			return 3;
		case 42:
			return 2;
		case 99:
			return 2;
		case 44:
			return 3;
		case 43:
			return 4;
		case 45:
			return 4;
		case 46:
			return 2;
		case 47:
			return 1;
		case 48:
			return 2;
		case 105:
			return 2;
		case 49:
			return 1;
		case 50:
			return 9;
		case 51:
			return 2;
		case 52:
			return 2;
		case 53:
			return 2;
		case 54:
			return 2;
		case 56:
			return 3;
		case 57:
			return 8;
		case 58:
			return 2;
		case 59:
			return 2;
		case 60:
			return 2;
		case 61:
			return 1;
		case 62:
			return 3;
		case 63:
			return 3;
		case 64:
			return 3;
		case 65:
			return 2;
		case 66:
			return 3;
		case 67:
			return 1;
		case 68:
			return 2;
		case 69:
			return 1;
		case 70:
			return 2;
		case 71:
			return 2;
		case 72:
			return 3;
		case 73:
			return 3;
		case 74:
			return 1;
		case 79:
			return 4;
		case 80:
			return 2;
		case 81:
			return 4;
		case 82:
			return 4;
		case 83:
			return 2;
		case 84:
			return 2;
		case 85:
			return 2;
		case 86:
			return 2;
		case 87:
			return 3;
		case 88:
			return 2;
		case 89:
			return 1;
		case 90:
			return 2;
		case 92:
			return 2;
		case 93:
			return 1;
		case 95:
			return 1;
		case 97:
			return 2;
		case 98:
			return 3;
		case 100:
			return 1;
		case 101:
			return 2;
		case 102:
			return 3;
		case 103:
			return 3;
		case 104:
			return 3;
		case 106:
			return 9;
		case 107:
			return 2;
		case 108:
			return 5;
		case 109:
			return 2;
		case 110:
			return 1;
		case 111:
			return 7;
		case 112:
			return 1;
		case 113:
			return 3;
		case 114:
			return 4;
		case 115:
			return 2;
		case 117:
			return 2;
		case 116:
			return 1;
		case 118:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_597(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_598()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

int func_599(int iParam0)
{
	if (!func_426(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

bool func_600(int iParam0)
{
	return (Global_1310750->f_16074 && iParam0) != 0;
}

bool func_601()
{
	return Global_1894899 & 2 != 0;
}

bool func_602(var uParam0)
{
	return func_36(*uParam0, 1);
}

bool func_603(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_666(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	request_collision_at_coord(vVar4);
	while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			request_collision_at_coord(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		request_collision_at_coord(vVar4);
		while (!get_ground_z_for_3d_coord(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				request_collision_at_coord(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

void func_604(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_667(iParam1))
		{
			func_668(iParam0, 41788943);
		}
		else if (bParam5)
		{
			_set_random_outfit_variation(iParam0, true);
			bVar0 = true;
		}
	}
	if (is_ped_human(iParam0))
	{
		if (bParam6)
		{
			_0x899a04afcc725d04(iParam0, _0xd42514c182121c23(iParam1));
		}
		if (is_ped_male(iParam0) && !bParam3)
		{
			func_669(iParam0, 0, 1);
		}
		set_ped_config_flag(iParam0, 502, true);
	}
	else if (_is_this_model_a_horse(get_entity_model(iParam0)))
	{
		if (!bParam5)
		{
			_set_ped_outfit_preset(iParam0, 0, 0);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_670(iParam0, 0);
			bVar0 = true;
		}
		func_671(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

int func_605(int iParam0, bool bParam1, bool bParam2)
{
	fVar0 = 999999.9f;
	iVar1 = -1;
	iVar2 = 0;
	while (iVar2 < 150)
	{
		if ((*Global_1888801)[iVar2]->f_20 == iParam0)
		{
			if (!(bParam2 && iVar2 == Global_1894899->f_2))
			{
				if (!bParam1 || func_672(iVar2))
				{
					vVar3 = { _0xf70f00013a62f866((*Global_1888801)[iVar2]->f_3) };
					fVar6 = vdist(vVar3, Global_36);
					if (fVar6 < fVar0)
					{
						iVar1 = iVar2;
						fVar0 = fVar6;
					}
				}
			}
		}
		iVar2++;
	}
	return iVar1;
}

int func_606(int iParam0)
{
	if (func_197(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_607(int iParam0)
{
	fVar0 = 0f;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar1 = 30f;
			break;
		case 1:
			fVar2 = 1f;
			break;
		case 2:
			fVar2 = 2f;
			break;
		case 3:
			fVar2 = 3f;
			break;
		case 4:
			fVar2 = 4f;
			break;
		case 5:
			fVar2 = 6f;
			break;
		case 6:
			fVar2 = 8f;
			break;
		case 7:
			fVar2 = 12f;
			break;
		case 8:
			fVar3 = 1f;
			break;
		case 9:
			fVar3 = 2f;
			break;
		case 10:
			fVar3 = 3f;
			break;
		case 11:
			fVar3 = 4f;
			break;
		case 12:
			fVar3 = 5f;
			break;
		case 13:
			fVar3 = 6f;
			break;
		case 14:
			fVar3 = 7f;
			break;
		case 15:
			fVar3 = 8f;
			break;
		case 16:
			fVar3 = 10f;
			break;
		case 17:
			fVar3 = 12f;
			break;
		case 18:
			fVar3 = 15f;
			break;
		case 19:
			fVar3 = 18f;
			break;
		case 20:
			fVar3 = 20f;
			break;
		case 21:
			fVar3 = 25f;
			break;
		case 22:
			fVar2 = -1f;
			break;
		case 23:
			fVar3 = -5f;
			break;
		case 24:
			fVar3 = -7f;
			break;
		case 25:
			fVar3 = -8f;
			break;
	}
	iVar4 = round((((fVar0 + (60f * fVar1)) + (3600f * fVar2)) + (86400f * fVar3)));
	return iVar4;
}

int func_608(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		case -2106214197:
			return 104;
		case -2101264851:
			return 195;
		case -2073072369:
			return 59;
		case -2069570138:
			return 25;
		case -2066272360:
			return 357;
		case -2058120606:
			return 197;
		case -2038424081:
			return 49;
		case -2034257789:
			return 92;
		case -2022369555:
			return 265;
		case -2021582629:
			return 112;
		case -2020023971:
			return 278;
		case -1957523409:
			return 208;
		case -1952856164:
			return 165;
		case -1949204933:
			return 276;
		case -1925798111:
			return 41;
		case -1861414976:
			return 353;
		case -1852605133:
			return 10;
		case -1847672446:
			return 376;
		case -1840704908:
			return 289;
		case -1838712533:
			return 26;
		case -1838352012:
			return 57;
		case -1835851517:
			return 56;
		case -1831552326:
			return 123;
		case -1825294305:
			return 266;
		case -1824738758:
			return 277;
		case -1818850842:
			return 253;
		case -1799960545:
			return 257;
		case -1764522338:
			return 372;
		case -1763509974:
			return 141;
		case -1741667789:
			return 64;
		case -1738165526:
			return 3;
		case -1718674470:
			return 23;
		case -1717960576:
			return 61;
		case -1711895055:
			return 13;
		case -1706438978:
			return 233;
		case -1700452710:
			return 53;
		case -1674179981:
			return 55;
		case -1666278201:
			return 33;
		case -1612662716:
			return 201;
		case -1610966108:
			return 322;
		case -1582926490:
			return 146;
		case -1579419919:
			return 147;
		case -1558439474:
			return 301;
		case -1556423728:
			return 218;
		case -1532284567:
			return 116;
		case -1530132748:
			return 311;
		case -1524512402:
			return 209;
		case -1523910291:
			return 155;
		case -1455998786:
			return 338;
		case -1447311849:
			return 215;
		case -1436021162:
			return 172;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case -1419919497:
			return 22;
		case -1414537028:
			return 73;
		case -1405998267:
			return 105;
		case -1344601768:
			return 314;
		case -1340339190:
			return 331;
		case -1329135070:
			return 140;
		case -1318987693:
			return 222;
		case -1311865656:
			return 37;
		case -1296807958:
			return 320;
		case -1283202000:
			return 321;
		case -1282804314:
			return 270;
		case -1278074582:
			return 171;
		case -1271608261:
			return 98;
		case -1257057567:
			return 21;
		case -1241340344:
			return 300;
		case -1236261996:
			return 235;
		case -1232809834:
			return 113;
		case -1230112817:
			return 170;
		case -1223121209:
			return 126;
		case -1215445344:
			return 131;
		case -1209597203:
			return 333;
		case -1206122982:
			return 156;
		case -1187950766:
			return 45;
		case -1179948750:
			return 136;
		case -1170496998:
			return 46;
		case -1164215952:
			return 234;
		case -1151084372:
			return 124;
		case -1145519186:
			return 100;
		case -1124061431:
			return 242;
		case -1123615607:
			return 29;
		case -1080627546:
			return 378;
		case -1077783786:
			return 194;
		case -1063147448:
			return 151;
		case -1062490780:
			return 79;
		case -1060078174:
			return 239;
		case -1056767524:
			return 176;
		case -1053549743:
			return 58;
		case -1029225159:
			return 106;
		case -1014145132:
			return 288;
		case -978957786:
			return 251;
		case -959357075:
			return 36;
		case -950054349:
			return 152;
		case -939420910:
			return 44;
		case -939114198:
			return 221;
		case -919512195:
			return 40;
		case -911126844:
			return 336;
		case -897750037:
			return 334;
		case -895073533:
			return 356;
		case -879507474:
			return 236;
		case -868076593:
			return 84;
		case -857964358:
			return 83;
		case -853383233:
			return 65;
		case -851626677:
			return 339;
		case -828139293:
			return 260;
		case -811637947:
			return 245;
		case -796902762:
			return 88;
		case -792853067:
			return 254;
		case -789397228:
			return 262;
		case -785605431:
			return 250;
		case -781631220:
			return 345;
		case -764163380:
			return 228;
		case -748969569:
			return 78;
		case -741351766:
			return 60;
		case -736853952:
			return 366;
		case -734416508:
			return 340;
		case -699277634:
			return 4;
		case -693828600:
			return 323;
		case -683458244:
			return 80;
		case -666014935:
			return 157;
		case -664512648:
			return 67;
		case -664252410:
			return 191;
		case -644722288:
			return 261;
		case -640663440:
			return 214;
		case -639037538:
			return 185;
		case -628542779:
			return 71;
		case -622554983:
			return 370;
		case -618620429:
			return 187;
		case -545450213:
			return 377;
		case -538889627:
			return 175;
		case -538880323:
			return 174;
		case -534215902:
			return 130;
		case -524787708:
			return 352;
		case -524145696:
			return 117;
		case -523522517:
			return 364;
		case -515561750:
			return 238;
		case -503955743:
			return 249;
		case -502473159:
			return 343;
		case -502324015:
			return 8;
		case -491981251:
			return 186;
		case -468693731:
			return 111;
		case -464836488:
			return 268;
		case -460024530:
			return 316;
		case -434590080:
			return 225;
		case -404698347:
			return 205;
		case -397760715:
			return 143;
		case -389056691:
			return 272;
		case -360036154:
			return 368;
		case -356975260:
			return 103;
		case -355531636:
			return 337;
		case -351362068:
			return 220;
		case -350863510:
			return 162;
		case -349064220:
			return 362;
		case -334729750:
			return 69;
		case -333135263:
			return 361;
		case -330120947:
			return 360;
		case -306246697:
			return 375;
		case -299522880:
			return 213;
		case -270094635:
			return 267;
		case -261141318:
			return 30;
		case -259123672:
			return 244;
		case -254562075:
			return 132;
		case -238080464:
			return 121;
		case -233743613:
			return 273;
		case -223469678:
			return 204;
		case -220282381:
			return 139;
		case -191424539:
			return 149;
		case -182889087:
			return 177;
		case -154581735:
			return 309;
		case -150493654:
			return 97;
		case -144653976:
			return 219;
		case -129643890:
			return 11;
		case -108780030:
			return 317;
		case -108307814:
			return 28;
		case -99303535:
			return 167;
		case -86199844:
			return 145;
		case -80522843:
			return 154;
		case -76237062:
			return 373;
		case -75024673:
			return 258;
		case -63926460:
			return 89;
		case -61411516:
			return 325;
		case -35658630:
			return 24;
		case -25901845:
			return 290;
		case -9438024:
			return 129;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 153;
		case 8924991:
			return 297;
		case 26054262:
			return 248;
		case 26245360:
			return 237;
		case 38162571:
			return 74;
		case 52706132:
			return 243;
		case 54073871:
			return 76;
		case 74872959:
			return 348;
		case 93964309:
			return 358;
		case 94263042:
			return 291;
		case 106479759:
			return 101;
		case 141950038:
			return 114;
		case 153152452:
			return 86;
		case 168171957:
			return 183;
		case 171107021:
			return 381;
		case 171499483:
			return 283;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 241;
		case 210001842:
			return 62;
		case 224551212:
			return 142;
		case 227918160:
			return 182;
		case 229371495:
			return 344;
		case 235928616:
			return 286;
		case 249726958:
			return 164;
		case 269047710:
			return 54;
		case 273461605:
			return 81;
		case 280705402:
			return 95;
		case 282809459:
			return 119;
		case 299694527:
			return 275;
		case 300221584:
			return 138;
		case 302205488:
			return 216;
		case 311708813:
			return 198;
		case 320943355:
			return 133;
		case 330026330:
			return 66;
		case 345808947:
			return 287;
		case 356365161:
			return 47;
		case 371850993:
			return 281;
		case 373691918:
			return 188;
		case 374115931:
			return 90;
		case 405586984:
			return 34;
		case 407136781:
			return 173;
		case 409602249:
			return 293;
		case 417081698:
			return 17;
		case 417525590:
			return 303;
		case 420709909:
			return 42;
		case 426191476:
			return 15;
		case 434558613:
			return 199;
		case 439465264:
			return 108;
		case 440043364:
			return 31;
		case 442317566:
			return 302;
		case 449774763:
			return 227;
		case 459290420:
			return 52;
		case 469053995:
			return 231;
		case 473295046:
			return 2;
		case 476714362:
			return 232;
		case 478884033:
			return 148;
		case 479419429:
			return 305;
		case 509781469:
			return 350;
		case 514932331:
			return 246;
		case 522677506:
			return 279;
		case 526003171:
			return 355;
		case 527226204:
			return 159;
		case 544152906:
			return 115;
		case 559573222:
			return 252;
		case 582380806:
			return 326;
		case 588987611:
			return 179;
		case 618699440:
			return 77;
		case 630808005:
			return 128;
		case 651395116:
			return 294;
		case 657241756:
			return 189;
		case 664571177:
			return 312;
		case 665676602:
			return 296;
		case 682839815:
			return 327;
		case 689024866:
			return 134;
		case 689930684:
			return 207;
		case 704802028:
			return 178;
		case 723021499:
			return 264;
		case 747514327:
			return 354;
		case 753127042:
			return 48;
		case 757752139:
			return 109;
		case 784360470:
			return 330;
		case 791041526:
			return 18;
		case 817925178:
			return 240;
		case 868326136:
			return 285;
		case 885203519:
			return 379;
		case 885378256:
			return 351;
		case 929582877:
			return 335;
		case 931649776:
			return 224;
		case 932909855:
			return 298;
		case 945612176:
			return 247;
		case 965986934:
			return 19;
		case 976539083:
			return 310;
		case 1010885152:
			return 7;
		case 1015669983:
			return 122;
		case 1050128548:
			return 284;
		case 1064154891:
			return 110;
		case 1067254646:
			return 319;
		case 1074873669:
			return 144;
		case 1140218954:
			return 27;
		case 1151197909:
			return 256;
		case 1159471771:
			return 329;
		case 1160698568:
			return 135;
		case 1164928979:
			return 158;
		case 1166612791:
			return 347;
		case 1167397384:
			return 307;
		case 1177464213:
			return 38;
		case 1186594126:
			return 230;
		case 1193080109:
			return 184;
		case 1203043430:
			return 274;
		case 1205826474:
			return 85;
		case 1207048789:
			return 169;
		case 1213993593:
			return 160;
		case 1216784232:
			return 269;
		case 1221801385:
			return 374;
		case 1238086793:
			return 313;
		case 1250636944:
			return 259;
		case 1302228510:
			return 315;
		case 1306158345:
			return 202;
		case 1321892118:
			return 324;
		case 1350371763:
			return 20;
		case 1350391819:
			return 75;
		case 1352699670:
			return 271;
		case 1358491857:
			return 263;
		case 1360745816:
			return 82;
		case 1376646519:
			return 223;
		case 1399676951:
			return 210;
		case 1410198831:
			return 217;
		case 1433244935:
			return 166;
		case 1441416901:
			return 211;
		case 1446719356:
			return 380;
		case 1453909576:
			return 125;
		case 1466547629:
			return 120;
		case 1478132521:
			return 367;
		case 1485195808:
			return 50;
		case 1485494263:
			return 102;
		case 1488286867:
			return 295;
		case 1488453464:
			return 212;
		case 1497516462:
			return 5;
		case 1500064347:
			return 72;
		case 1509509592:
			return 35;
		case 1512816328:
			return 168;
		case 1517904467:
			return 206;
		case 1522511407:
			return 280;
		case 1549124796:
			return 342;
		case 1557082963:
			return 163;
		case 1582370975:
			return 359;
		case 1583012985:
			return 304;
		case 1591451572:
			return 365;
		case 1607768502:
			return 9;
		case 1609506757:
			return 107;
		case 1626481264:
			return 118;
		case 1643531967:
			return 127;
		case 1649996811:
			return 181;
		case 1660024373:
			return 150;
		case 1665756137:
			return 93;
		case 1672143046:
			return 383;
		case 1691618738:
			return 68;
		case 1698972798:
			return 318;
		case 1703398561:
			return 332;
		case 1703426636:
			return 43;
		case 1708045337:
			return 346;
		case 1713221411:
			return 137;
		case 1743048395:
			return 226;
		case 1744443559:
			return 349;
		case 1766284049:
			return 94;
		case 1776302352:
			return 363;
		case 1804403874:
			return 382;
		case 1822001510:
			return 200;
		case 1846061697:
			return 99;
		case 1850082804:
			return 196;
		case 1867912207:
			return 70;
		case 1884271742:
			return 51;
		case 1926308480:
			return 96;
		case 1932172605:
			return 328;
		case 1944170089:
			return 161;
		case 1947931439:
			return 229;
		case 1952610440:
			return 203;
		case 1954026328:
			return 371;
		case 1982676972:
			return 91;
		case 2008888900:
			return 180;
		case 2016141805:
			return 6;
		case 2019386373:
			return 190;
		case 2024121624:
			return 193;
		case 2024383613:
			return 369;
		case 2024769126:
			return 308;
		case 2037589949:
			return 63;
		case 2051822093:
			return 299;
		case 2077022393:
			return 306;
		case 2080210939:
			return 282;
		case 2091701359:
			return 39;
		case 2109952320:
			return 192;
		case 2113625508:
			return 341;
		case 2127577956:
			return 255;
		case 2136753624:
			return 87;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_609(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_610(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_611(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_612(int iParam0, int iParam1)
{
	if (!func_197(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

bool func_613()
{
	switch (Global_1935630->f_44)
	{
		case -164645981:
		case -160924582:
		case 827679807:
		case 1247405313:
			return true;
		default:
			break;
	}
	return false;
}

int func_614(int iParam0)
{
	if (!func_421(iParam0))
	{
		return -1;
	}
	return func_673(iParam0);
}

int func_615()
{
	return Global_40.f_11095.f_35;
}

bool func_616(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_617(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_618(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_674(bParam1);
	}
}

void func_619(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_620(int iParam0)
{
	if (iParam0 <= -320)
	{
		return "HONOR_BAD_8";
	}
	else if (iParam0 <= -280)
	{
		return "HONOR_BAD_7";
	}
	else if (iParam0 <= -240)
	{
		return "HONOR_BAD_6";
	}
	else if (iParam0 <= -200)
	{
		return "HONOR_BAD_5";
	}
	else if (iParam0 <= -160)
	{
		return "HONOR_BAD_4";
	}
	else if (iParam0 <= -120)
	{
		return "HONOR_BAD_3";
	}
	else if (iParam0 <= -80)
	{
		return "HONOR_BAD_2";
	}
	else if (iParam0 < 0)
	{
		return "HONOR_BAD_1";
	}
	else if (iParam0 <= 40)
	{
		return "HONOR_GOOD_1";
	}
	else if (iParam0 >= 320)
	{
		return "HONOR_GOOD_8";
	}
	else if (iParam0 >= 280)
	{
		return "HONOR_GOOD_7";
	}
	else if (iParam0 >= 240)
	{
		return "HONOR_GOOD_6";
	}
	else if (iParam0 >= 200)
	{
		return "HONOR_GOOD_5";
	}
	else if (iParam0 >= 160)
	{
		return "HONOR_GOOD_4";
	}
	else if (iParam0 >= 120)
	{
		return "HONOR_GOOD_3";
	}
	else if (iParam0 >= 80)
	{
		return "HONOR_GOOD_2";
	}
	return "HONOR_GOOD_1";
}

bool func_621(int iParam0)
{
	if (!func_225(23, &vVar0))
	{
		return false;
	}
	vVar0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(vVar0.f_1), &vVar0))
	{
		vVar0.f_2 = -2103982008;
		*iParam0 = _datafile_get_num_nodes(&vVar0);
		return true;
	}
	return false;
}

bool func_622(int iParam0, int iParam1, int iParam2)
{
	if (!func_225(23, &Var0))
	{
		return false;
	}
	Var0.f_2 = 1781729525;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -57097983;
		Var0.f_3 = iParam0;
		if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
		{
			Var0.f_2 = 2027336698;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam1 = uVar5;
			Var0.f_2 = 316053773;
			_datafile_get_hash(&uVar5, &Var0);
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

bool func_623(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_624(int iParam0)
{
	return iParam0;
}

int func_625(int iParam0)
{
	if (!func_623(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_626()
{
	iVar0 = func_546();
	switch (iVar0)
	{
		case 120:
		case 160:
		case 200:
			return -608161198;
		case 240:
		case 280:
		case 320:
			return -2132502231;
		default:
			break;
	}
	return -1130204298;
}

void func_627(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

bool func_628(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_629(int iParam0, int iParam1, var uParam2)
{
	if (!func_628(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*uParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*uParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*uParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*uParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*uParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*uParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*uParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*uParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*uParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*uParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*uParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*uParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*uParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*uParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*uParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*uParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*uParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

bool func_630()
{
	return _unlock_is_unlocked(-121456797);
}

void func_631(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_555(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

bool func_632(int iParam0, int* iParam1)
{
	if (iParam1->f_11 & 1 != 0)
	{
		if (_is_ped_lassoed(iParam0))
		{
			return true;
		}
	}
	if (iParam1->f_11 & 2 != 0)
	{
		if (_is_ped_hogtied(iParam0))
		{
			return true;
		}
	}
	bVar0 = iParam1->f_11 & 4 != false;
	bVar1 = iParam1->f_11 & 8 != false;
	if (bVar0 || bVar1)
	{
		if (is_ped_in_combat(iParam0, func_675((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_633(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_648((*uParam0)[iVar0]))
		{
			func_136((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_634(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_676(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_138((*uParam2)[iVar0]->f_6))
		{
			func_136((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_635(var uParam0)
{
	iVar0 = func_339(*uParam0);
	iVar1 = 2;
	switch (iVar0)
	{
		case 2:
			iVar1 = 295425337;
			break;
		case 1:
			iVar1 = 768137552;
			break;
		case 0:
			iVar1 = 1415388528;
			break;
		case 4:
			iVar1 = 1449436544;
			break;
		case 3:
			iVar1 = -1807204482;
			break;
		case 5:
			iVar1 = -1096701282;
			break;
	}
	return iVar1;
}

int func_636(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0]->f_7 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_637(int* iParam0, int* iParam1)
{
	if (!func_567(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_136(iParam1, 19);
			func_650(iParam0, 23);
			func_110(iParam1, 2);
		}
	}
}

bool func_638(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_677(16))
	{
		return Global_1935630->f_58 == iParam0;
	}
	if (!is_entity_dead(get_player_ped(player_id())))
	{
		if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, bParam2, bParam3))
		{
			if (does_entity_exist(iVar0))
			{
				if (is_entity_a_ped(iVar0))
				{
					func_678(16);
					Global_1935630->f_58 = get_ped_index_from_entity_index(iVar0);
					if (Global_1935630->f_58 == iParam0)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

void func_639(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_676(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

bool func_640(int iParam0)
{
	return (func_679(iParam0, 4) || func_679(iParam0, 5));
}

int func_641(int iParam0)
{
	return func_679(iParam0, 7);
}

int func_642(int iParam0)
{
	return func_679(iParam0, 6);
}

void func_643(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_648(iParam1))
		{
			clear_bit(iParam1, 14);
			func_676(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_644(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_680(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_681(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_234(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_234(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_682(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_645(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_683(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_684(iParam1, 1))
	{
		func_685(iParam1, 1);
		return true;
	}
	return false;
}

bool func_646(int* iParam0, float fParam1, bool bParam2)
{
	if (iParam0->f_2 != 3)
	{
		if (bParam2 || fParam1 > 0f)
		{
			return true;
		}
	}
	return false;
}

void func_647(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_648(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_649(int iParam0)
{
	iVar1 = get_number_of_events(0);
	if (iVar1 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			switch (get_event_at_index(0, iVar0))
			{
				case 1387172233:
					if (get_event_data(0, iVar0, &vVar3, 10))
					{
						iVar2 = vVar3.x;
						switch (iVar2)
						{
							case 9:
								if (is_entity_a_ped(vVar3.z))
								{
									if (iParam0 == get_ped_index_from_entity_index(vVar3.z))
									{
										return true;
									}
								}
								break;
						}
					}
					break;
			}
			iVar0++;
		}
	}
	return false;
}

void func_650(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

bool func_651(int* iParam0)
{
	if (iParam0->f_1 > -1)
	{
		return true;
	}
	return false;
}

bool func_652(int iParam0, int iParam1)
{
	if (func_185() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_653(int iParam0)
{
	if (func_185() != -1)
	{
		if (func_655(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_655(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_654(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_655(iParam0, 65536) && !func_655(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_655(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_655(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_655(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_656(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_657()
{
	return Global_1905944->f_5694;
}

bool func_658(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (iParam0 == uParam1[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_659(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

struct<2> func_660(int iParam0)
{
	Var0 = { func_661(-212244724, func_586(iParam0)) };
	if (_stat_id_is_valid(&Var0))
	{
		Var0 = { func_661(-1366121835, func_586(iParam0)) };
	}
	return Var0;
}

struct<2> func_661(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_662(int iParam0)
{
	if (!func_686(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_663(int iParam0, int iParam1)
{
	if (!func_687(iParam0))
	{
		return;
	}
	iVar0 = Global_1360165[iParam0];
	if (does_entity_exist(iVar0))
	{
		if (!is_entity_dead(iVar0))
		{
			decor_set_int(iVar0, "companion_manager_command", iParam1);
		}
	}
}

int func_664()
{
	return &Global_1899515;
}

void func_665(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_688(*uParam0);
	iVar1 = func_689(*uParam0);
	iVar2 = func_690(*uParam0);
	iVar3 = func_408(*uParam0);
	iVar4 = func_691(*uParam0);
	iVar5 = func_692(*uParam0);
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
	iVar6 = func_693(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_693(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_694(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_666(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_667(int iParam0)
{
	switch (iParam0)
	{
		case -2086875988:
		case -2081966149:
		case -2075588078:
		case -2046943672:
		case -2045269112:
		case -2019245895:
		case -2014377075:
		case -2012656841:
		case -2007761031:
		case -2006398858:
		case -1980150291:
		case -1977628089:
		case -1966295439:
		case -1925758912:
		case -1922688829:
		case -1901892087:
		case -1835251821:
		case -1769295812:
		case -1765531164:
		case -1745321414:
		case -1714108174:
		case -1688959031:
		case -1676898583:
		case -1646049752:
		case -1632694866:
		case -1629501717:
		case -1614719852:
		case -1607722277:
		case -1603909164:
		case -1579174863:
		case -1533320518:
		case -1520417507:
		case -1483559144:
		case -1464743433:
		case -1458432563:
		case -1448924971:
		case -1423504183:
		case -1418951751:
		case -1329383517:
		case -1270572406:
		case -1263119823:
		case -1258801034:
		case -1161832176:
		case -1154137714:
		case -1135378761:
		case -1116138991:
		case -1112260815:
		case -1101883765:
		case -1070459848:
		case -1067338663:
		case -1049237750:
		case -1047115350:
		case -1002525623:
		case -944019243:
		case -937140420:
		case -920985758:
		case -823649241:
		case -820854800:
		case -814357706:
		case -792643455:
		case -781994133:
		case -779472377:
		case -756996682:
		case -747792496:
		case -695175124:
		case -670436990:
		case -639059862:
		case -607414220:
		case -572941403:
		case -558131359:
		case -550289621:
		case -538512200:
		case -464684897:
		case -446093729:
		case -373817191:
		case -350169314:
		case -343178443:
		case -272492171:
		case -265719023:
		case -253049070:
		case -229065721:
		case -216561112:
		case -205121720:
		case -167880668:
		case -161553439:
		case -98087368:
		case -77509825:
		case -71527226:
		case -55633154:
		case -46607261:
		case -46389610:
		case -17071680:
		case 4991732:
		case 20251888:
		case 65010948:
		case 68512371:
		case 93760123:
		case 122377164:
		case 184120185:
		case 224310170:
		case 230517792:
		case 236407543:
		case 254009656:
		case 300505615:
		case 316325071:
		case 323324563:
		case 351634388:
		case 382040614:
		case 401817002:
		case 426274298:
		case 430764551:
		case 434730246:
		case 477547053:
		case 482703333:
		case 513427234:
		case 594026681:
		case 624882545:
		case 686051865:
		case 716675958:
		case 755774783:
		case 774211111:
		case 794654164:
		case 823321772:
		case 836525272:
		case 848012614:
		case 852072701:
		case 888681950:
		case 907019741:
		case 972892334:
		case 988668512:
		case 993577366:
		case 1006076574:
		case 1010320580:
		case 1020041649:
		case 1051047356:
		case 1092921608:
		case 1143979484:
		case 1149349599:
		case 1231309423:
		case 1234550949:
		case 1245530084:
		case 1253299569:
		case 1266159496:
		case 1266592839:
		case 1270841555:
		case 1276534479:
		case 1281122482:
		case 1294255258:
		case 1304311224:
		case 1320786287:
		case 1347320453:
		case 1367851675:
		case 1372065533:
		case 1407740785:
		case 1419055257:
		case 1436424114:
		case 1439158431:
		case 1446935015:
		case 1479772615:
		case 1483156731:
		case 1485366395:
		case 1599685341:
		case 1604947233:
		case 1643370744:
		case 1701730764:
		case 1705504999:
		case 1726560673:
		case 1785923813:
		case 1815090590:
		case 1841492722:
		case 1966444740:
		case 1998496121:
		case 1999476738:
		case 2000903921:
		case 2001384088:
		case 2029634351:
		case 2041494024:
		case 2042088799:
		case 2100656433:
		case 2115504616:
		case 2141515026:
			return true;
		default:
			break;
	}
	return false;
}

void func_668(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_695(iParam0, iParam1))
		{
			if (func_696(iParam0, iParam1))
			{
				if (func_697(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_698(iParam0);
				}
			}
			else
			{
				_set_ped_body_component(iParam0, iParam1);
				_update_ped_variation(iParam0, false, true, true, true, false);
			}
			_0xe3144b932dfdff65(iParam0, 0f, -1, 1, 1);
			clear_ped_damage_decal_by_zone(iParam0, 10, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 3);
			clear_ped_blood_damage_by_zone(iParam0, 0);
			clear_ped_blood_damage_by_zone(iParam0, 5);
			clear_ped_blood_damage_by_zone(iParam0, 7);
			clear_ped_blood_damage_by_zone(iParam0, 8);
			clear_ped_blood_damage_by_zone(iParam0, 9);
		}
	}
}

void func_669(int iParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_670(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	_set_ped_body_component(iParam0, 1268180497);
	if (bParam1)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

void func_671(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		_set_ped_face_feature(iParam0, 41611, 0f);
	}
	else
	{
		_set_ped_face_feature(iParam0, 41611, 1f);
	}
}

bool func_672(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return Global_23118[iParam0] & 32 != 0;
	}
	return Global_1058888->f_40615[iParam0] & 32 != 0;
}

int func_673(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_699(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_674(bool bParam0)
{
	func_700(bParam0);
	Global_1955569->f_1.f_1 = bParam0;
	if (bParam0 == 1)
	{
		_hide_hud_component(121713391);
	}
	else
	{
		_display_hud_component(121713391);
	}
}

int func_675(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_676(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_138(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_139(&(iParam1->f_6), 0, 1);
	}
	if (!func_138(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_648(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_701(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_138(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_682(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_702(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_703(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_232(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_702(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_234(iParam1->f_6, 0, 1);
				}
				else
				{
					func_234(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

bool func_677(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_678(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_679(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

bool func_680(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
{
	bVar0 = (is_bit_set(*iParam1, 0) && !is_bit_set(*iParam1, 4));
	if (is_bit_set(*iParam1, 13))
	{
		return true;
	}
	if (bParam10)
	{
		if (is_bit_set(*iParam1, 20))
		{
			if (!is_bit_set(*iParam0, 25))
			{
				set_bit(iParam0, 24);
			}
			return true;
		}
	}
	if (is_bit_set(*iParam1, 9))
	{
		clear_bit(iParam1, 9);
		return true;
	}
	if (bParam6)
	{
		if (is_bit_set(*iParam1, 6))
		{
			return true;
		}
	}
	else if (is_bit_set(*iParam1, 5))
	{
		return true;
	}
	if (is_bit_set(*iParam1, 7))
	{
		if (fParam5 > iParam1->f_4)
		{
			return true;
		}
	}
	if (!is_bit_set(*iParam1, 17))
	{
		if (bParam3)
		{
			if (bParam4)
			{
				return true;
			}
		}
	}
	if (!is_bit_set(*iParam1, 18))
	{
		if (is_bit_set(*iParam1, 8))
		{
			bVar1 = false;
			if (fParam9 > -1f)
			{
				if (fParam9 < iParam1->f_3)
				{
					bVar1 = true;
				}
			}
			if (!bParam7)
			{
				if (bParam8 || bVar1)
				{
					return true;
				}
			}
		}
	}
	if (!is_bit_set(*iParam1, 2))
	{
		if (is_bit_set(*iParam1, 1))
		{
			if (iParam11 < iParam1->f_14)
			{
				return true;
			}
		}
	}
	return !bVar0;
}

bool func_681(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return false;
	}
	return !func_517(iParam0, 4);
}

void func_682(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_138(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_303(iParam0);
	func_702(iParam0, 18, 0, 1);
	func_702(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_683(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_303(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

bool func_684(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return false;
	}
	iVar0 = func_303(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_685(int iParam0, bool bParam1)
{
	if (bParam1 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_303(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

bool func_686(int iParam0)
{
	return iParam0 > -1;
}

bool func_687(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_688(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_302(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_689(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_690(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_691(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_692(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_693(int iParam0, int iParam1)
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
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
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
		default:
			break;
	}
	return 30;
}

void func_694(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_704(uParam0, iParam6);
	func_705(uParam0, iParam5);
	func_706(uParam0, iParam4);
	func_707(uParam0, iParam3);
	func_708(uParam0, iParam2);
	func_709(uParam0, iParam1);
}

bool func_695(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	bVar0 = _does_metaped_outfit_exist_for_ped_model(iParam1, get_entity_model(iParam0));
	if (bVar0)
	{
	}
	return bVar0;
}

bool func_696(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (iVar0 == iParam1)
	{
		return true;
	}
	return false;
}

bool func_697(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return false;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_695(iParam0, iVar0))
	{
		return true;
	}
	if (iVar0 != iParam1)
	{
		return false;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

void func_698(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_699(int iParam0)
{
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

void func_700(bool bParam0)
{
	_0xb6fd96420c0126a1(-1056478928, bParam0);
}

int func_701(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, var uParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, bool bParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (!does_entity_exist(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_517(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == (*Global_1945938)[iVar0]->f_11 && iParam1 == (*Global_1945938)[iVar0]->f_4)
				{
					if (iParam3 <= Global_1945938[iVar0])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_710(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, uParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_702(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_303(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_attribute((*Global_1945938)[iVar0]->f_3, iParam1, iParam2);
}

void func_703(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	if (bParam4 && !func_138(iParam0))
	{
		return;
	}
	iVar0 = func_303(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(10, sParam1, sParam2, sParam3));
}

void func_704(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || shift_left((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || shift_left((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_705(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || shift_left(iParam1, 22));
}

void func_706(var uParam0, int iParam1)
{
	iVar0 = func_689(*uParam0);
	iVar1 = func_688(*uParam0);
	if (iParam1 < 1 || iParam1 > func_693(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || shift_left(iParam1, 17));
}

void func_707(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || shift_left(iParam1, 12));
}

void func_708(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || shift_left(iParam1, 6));
}

void func_709(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || shift_left(iParam1, 0));
}

void func_710(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, var uParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	(*Global_1945938)[iParam0]->f_4 = iParam1;
	(*Global_1945938)[iParam0] = iParam4;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = iParam5;
	(*Global_1945938)[iParam0]->f_6 = { vParam6 };
	(*Global_1945938)[iParam0]->f_9 = fParam9;
	(*Global_1945938)[iParam0]->f_10 = iParam10;
	(*Global_1945938)[iParam0]->f_11 = iParam11;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = iParam12;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam1);
	if (iParam23 != 0)
	{
		_uiprompt_set_control_action(iVar0, iParam23);
	}
	_uiprompt_set_text(iVar0, sParam2);
	if (iParam3 == 4)
	{
		_uiprompt_context_set_point(iVar0, vParam6);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		_0x4d107406667423be(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		_0x4d107406667423be(iVar0, iParam11);
		_uiprompt_context_set_point(iVar0, 0f, 0f, 0f);
		_uiprompt_context_set_size(iVar0, fParam9);
	}
	_uiprompt_set_priority(iVar0, iParam4);
	_uiprompt_set_transport_mode(iVar0, iParam5);
	_uiprompt_set_attribute(iVar0, 18, 1);
	if (bParam22)
	{
		_0x53ce46c01a089da1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			_uiprompt_set_standard_mode(iVar0, 0);
			break;
		case 2:
			_uiprompt_set_standard_mode(iVar0, 1);
			break;
		case 1:
			_uiprompt_set_pressed_timed_mode(iVar0, iParam16);
			break;
		case 3:
			_uiprompt_set_hold_indefinitely_mode(iVar0);
			break;
		case 6:
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, uParam15);
			if (bParam25)
			{
				_uiprompt_set_attribute(iVar0, 24, 1);
			}
			break;
		case 7:
			_uiprompt_set_mash_mode(iVar0, iParam17);
			break;
		case 8:
			_uiprompt_set_mash_auto_fill_mode(iVar0, iParam16, iParam17);
			break;
		case 13:
			_uiprompt_set_mash_indefinitely_mode(iVar0);
			break;
		case 15:
			_uiprompt_set_target_mode(iVar0, 0.5f, 0.1f, 0);
			break;
		case 9:
			_uiprompt_set_mash_with_resistance_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 4:
		case 5:
			_uiprompt_set_standardized_hold_mode(iVar0, iParam24);
			break;
		case 10:
			_uiprompt_set_mash_with_resistance_can_fail_mode(iVar0, iParam17, iParam18, iParam19);
			break;
		case 11:
			_uiprompt_set_mash_manual_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 12:
			_uiprompt_set_mash_manual_can_fail_mode(iVar0, (1f / to_float(iParam17)), iParam18, 0f, iParam19);
			break;
		case 14:
			_uiprompt_set_rotate_mode(iVar0, iParam20, iParam21);
			_uiprompt_set_attribute(iVar0, 10, 1);
			break;
	}
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_385(iParam0, 1);
	func_386(iParam0, 1);
	func_387(iParam0, 128);
}

