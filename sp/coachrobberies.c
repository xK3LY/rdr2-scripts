void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_2529 = 1;
	iLocal_2546 = 1;
	iLocal_2547 = 1;
	if (has_force_cleanup_occurred(555))
	{
		if (Local_51.f_2387 != 0)
		{
			Local_51.f_2387 = 1;
		}
		func_1();
		func_2(&Local_51, iLocal_24, ScriptParam_0.f_3, 1);
	}
	if (ScriptParam_0.f_3 == func_3())
	{
		func_4(&Local_51, 8388608);
	}
	set_this_script_can_remove_blips_created_by_any_script(true);
	func_5(ScriptParam_0);
	func_6(ScriptParam_0);
	func_7(0);
	while (true)
	{
		if (iLocal_27 == 3)
		{
		}
		else if (func_8(ScriptParam_0, &Local_51, iLocal_33, iLocal_27, iLocal_25))
		{
			func_9(3);
		}
		else if (func_10(8192))
		{
			func_9(3);
		}
		if (iLocal_27 != 2 && iLocal_27 != 3)
		{
			if (func_11(ScriptParam_0, &Local_51))
			{
				func_9(2);
			}
		}
		func_12();
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
		func_13();
		func_14();
		if (func_15(&Local_51, 16))
		{
			if (iLocal_26 == 3)
			{
				func_16(&Local_51);
				func_17(&Local_51);
			}
		}
		if (func_10(134217728))
		{
			func_9(1);
			func_18(1);
			func_19(1);
			func_20(3);
			func_21(134217728);
		}
		func_22();
		if (iLocal_27 < 2 && !func_15(&Local_51, 33554432))
		{
			func_23(ScriptParam_0.f_3);
		}
		if (func_24(iLocal_25))
		{
			if (!func_25(&(Local_51.f_2167)) || func_26(&(Local_51.f_2167)) < 20f)
			{
				if (!func_15(&Local_51, 33554432))
				{
					set_vehicle_density_multiplier_this_frame(0f);
				}
			}
		}
		func_27();
		if (!Local_51.f_2394)
		{
			if (Local_51.f_2393)
			{
				if (func_28(Global_36, 30f))
				{
					if (func_29())
					{
						_report_crime(player_id(), -59535775, 50, 0, true);
						Local_51.f_2394 = 1;
					}
				}
			}
		}
		func_30();
		switch (iLocal_27)
		{
			case 0:
				func_31(ScriptParam_0, &Local_51, iLocal_24);
				break;
			case 1:
				func_32();
				switch (iLocal_29)
				{
					case 0:
						func_33(ScriptParam_0);
						break;
					case 1:
						func_34(ScriptParam_0);
						_0x16752daa7e6d3f72(player_id());
						_0x4b2b1a891d437ca7(0f);
						switch (iLocal_30)
						{
							case 0:
								func_35(ScriptParam_0);
								break;
							case 1:
								func_36(ScriptParam_0);
								break;
						}
						break;
					case 2:
						func_37(ScriptParam_0);
						break;
				}
				break;
			case 2:
				func_32();
				func_38(ScriptParam_0);
				break;
			case 3:
				func_32();
				if (func_39(&Local_51, ScriptParam_0.f_3))
				{
					func_2(&Local_51, iLocal_24, ScriptParam_0.f_3, 0);
				}
				break;
		}
		if (func_40())
		{
			Global_1392388->f_7 = 1;
		}
		else
		{
			Global_1392388->f_7 = 0;
		}
		iLocal_2477 = (1 + iVar2475);
		if (iVar2475 == 30)
		{
			iLocal_2477 = 0;
		}
		wait(0);
	}
}

void func_1()
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		func_41(Local_51.f_25[iVar0]);
		iVar0++;
	}
}

void func_2(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1392388->f_7 = 0;
	if (func_25(&(uParam0->f_2167)))
	{
		func_42(&(uParam0->f_2167));
	}
	func_43(uParam0, "PRCCH_PASS");
	if (uParam0->f_2387 == 1)
	{
		if (bParam3 && get_cause_of_most_recent_force_cleanup() == 1)
		{
			if (Global_1935630->f_22)
			{
				uParam0->f_2388 = "CR_F_P_ARREST";
			}
			else
			{
				uParam0->f_2388 = "CR_F_P_DEAD";
			}
		}
		func_44(uParam0, iParam2);
		func_45(iParam2, 1);
	}
	func_46(&(uParam0->f_2208));
	func_47(uParam0);
	func_48();
	func_49(uParam0);
	func_50();
	func_51(iParam1);
	if (!bLocal_14)
	{
		func_52();
	}
	func_21(4096);
	func_21(536870912);
	if (func_53(Global_35, 1))
	{
		set_ped_config_flag(Global_35, 141, false);
	}
	if (get_ped_config_flag(Global_35, 364, true))
	{
		set_ped_config_flag(Global_35, 364, false);
	}
	if (uParam0->f_2397)
	{
		_0xeae3b5b019c8d23f(Global_35, 1);
	}
	if (func_53(uParam0->f_2385, 0))
	{
		set_entity_only_damaged_by_player(uParam0->f_2385, false);
	}
	if (_0x03b4b759a8990505(player_id()) < 1f)
	{
		_0x83c989d5b5b5b466(player_id(), 1f);
	}
	if (_0x9422743a5ba50e10(player_id()) != 1f)
	{
		_0x19b2c7a6c34fad54(player_id(), 1f);
	}
	_0x1096603b519c905f("");
	set_wanted_level_multiplier(1f);
	clear_weather_type_persist();
	Global_1393237->f_199 = 0;
	if (func_24(iParam2) && !bLocal_14)
	{
		if ((uParam0->f_2387 == 5 || (&Global_40.f_9146.f_4[iParam2] == 0 && uParam0->f_2387 != 0)) || (bParam3 && get_cause_of_most_recent_force_cleanup() == 32))
		{
			func_54();
			func_55();
		}
	}
	func_56(&(uParam0->f_2422), 1);
	if (is_audio_scene_active("Robberies_Coach_Scene"))
	{
		stop_audio_scene("Robberies_Coach_Scene");
	}
	if (func_24(iParam2) && uParam0->f_2425)
	{
		_uilog_mark_all_entries_availability(0, "");
		func_57();
		uParam0->f_2425 = 0;
	}
	terminate_this_thread();
}

int func_3()
{
	return func_59(func_58());
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_2207 = (uParam0->f_2207 || iParam1);
}

void func_5(struct<6> Param0)
{
	Local_51.f_2387 = -1;
	func_60();
	iLocal_24 = func_61(Param0);
	Local_51 = { func_62(Param0.f_3) };
	iLocal_25 = Param0.f_3;
	iLocal_26 = Param0;
	if (!func_10(131072))
	{
		_0x1096603b519c905f(func_63(Param0.f_3));
	}
	else
	{
		func_21(131072);
	}
	func_21(1);
	func_21(2);
	func_21(32);
	func_21(64);
	func_21(128);
	func_21(256);
	func_21(512);
	func_21(1024);
	func_21(2048);
	func_21(8192);
	func_21(16384);
	func_21(32768);
	func_21(262144);
	func_21(4194304);
	func_21(8388608);
	func_21(16777216);
	func_21(33554432);
	func_21(67108864);
	func_21(134217728);
	func_21(268435456);
	func_21(524288);
	func_21(-2147483648);
	func_21(1073741824);
	func_21(1048576);
	Local_51.f_3 = Param0.f_2;
}

int func_6(struct<4> Param0, var uParam4, var uParam5)
{
	if (Param0.f_3 == 11)
	{
		func_4(&Local_51, 65536);
		Global_40.f_9146.f_111[Param0.f_3] = 0;
		return 1;
	}
	return 0;
}

void func_7(bool bParam0)
{
	iVar0 = 932;
	while (iVar0 <= 952)
	{
		if (!is_entity_on_screen(func_64(iVar0)) || bParam0)
		{
			func_65(iVar0);
		}
		iVar0++;
	}
	if (!is_entity_on_screen(func_64(883)) || bParam0)
	{
		func_65(883);
	}
	if (!is_entity_on_screen(func_64(884)) || bParam0)
	{
		func_65(884);
	}
	if (!is_entity_on_screen(func_64(552)) || bParam0)
	{
		func_65(552);
	}
	if (!is_entity_on_screen(func_64(553)) || bParam0)
	{
		func_65(553);
	}
}

bool func_8(struct<6> Param0, var uParam6, int iParam7, int iParam8, int iParam9)
{
	bVar0 = false;
	bVar1 = true;
	if (func_10(4))
	{
		bVar1 = false;
	}
	if (func_15(uParam6, 1))
	{
		if (func_15(uParam6, 65536))
		{
			if (iParam7 < 3)
			{
				if (func_66(uParam6, uParam6->f_25[0], 0, Param0.f_3) && func_67(uParam6))
				{
					func_68(Param0.f_3, 1, 1);
					return true;
				}
			}
		}
		else
		{
			if (func_69(uParam6, bVar1))
			{
				bVar0 = true;
			}
			if (iParam8 != 2)
			{
				if (func_70(Param0))
				{
					if (func_71(uParam6) || (Param0 == 2 && func_15(uParam6, 32)))
					{
						if (func_15(uParam6, 262144) && !func_15(uParam6, 32))
						{
							if (bVar1)
							{
								if (uParam6->f_2266 > 1)
								{
									uParam6->f_2388 = "CR_FM_ABANCOACHS";
								}
								else
								{
									uParam6->f_2388 = "CR_FM_ABANCOACH";
								}
							}
							func_72(8388608);
						}
						else if (func_15(uParam6, 32))
						{
							if (bVar1)
							{
								if (uParam6->f_2266 > 1)
								{
									uParam6->f_2388 = "CR_FM_RCRHOS";
								}
								else
								{
									uParam6->f_2388 = func_73(Param0.f_3);
								}
							}
							func_72(16777216);
						}
						else
						{
							if (bVar1)
							{
								if (uParam6->f_2266 > 1)
								{
									uParam6->f_2388 = "CR_FM_LEFTCOACHS";
								}
								else
								{
									uParam6->f_2388 = "CR_FM_LEFTCOACH";
								}
							}
							func_72(16777216);
						}
						bVar0 = true;
					}
					else if (func_74(uParam6, iParam9))
					{
						if (bVar1)
						{
							uParam6->f_2388 = "CR_F_LDEST";
						}
						func_72(67108864);
						bVar0 = true;
					}
				}
				else if (func_75(Param0))
				{
					if (func_71(uParam6) || (func_15(uParam6, 32) && Param0.f_3 != 13))
					{
						if (func_15(uParam6, 32))
						{
							if (bVar1)
							{
								uParam6->f_2388 = func_73(Param0.f_3);
							}
							func_72(16777216);
						}
						else if (func_15(uParam6, 262144))
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_FM_ABANCOACH";
							}
							func_72(8388608);
						}
						else
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_FM_LEFTCOACH";
							}
							func_72(16777216);
						}
						bVar0 = true;
					}
					else if (func_76(Param0, uParam6))
					{
						if (bVar1)
						{
							uParam6->f_2388 = "CR_FM_ABANDROP";
						}
						bVar0 = true;
					}
					else if (func_15(uParam6, 2))
					{
						if (!func_77(uParam6->f_25[0]->f_1))
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_FM_WRECKED";
							}
							func_72(33554432);
							bVar0 = true;
						}
						if (Param0.f_3 == 4)
						{
							if (!bLocal_15)
							{
								if (func_78(598, 0))
								{
									bLocal_15 = true;
								}
							}
							if (func_79(2))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_F_F_DEAD";
								}
								func_72(33554432);
								bVar0 = true;
							}
							if (bLocal_15 && !func_78(598, 0))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_F_F_DEAD";
								}
								func_72(33554432);
								bVar0 = true;
							}
							if (func_80(player_id(), 1, 0, 1) && vdist(uParam6->f_2210, Global_36) < 30f)
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_F_F_DEAD";
								}
								func_72(33554432);
								bVar0 = true;
							}
						}
					}
					else if (Param0.f_3 == 4)
					{
						if (!bLocal_15)
						{
							if (func_78(598, 0))
							{
								bLocal_15 = true;
							}
						}
						if (func_79(2))
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_F_F_DEAD";
							}
							func_72(33554432);
							bVar0 = true;
						}
						if (bLocal_15 && !func_78(598, 0))
						{
							if (bVar1)
							{
								uParam6->f_2388 = "CR_F_F_DEAD";
							}
							func_72(33554432);
							bVar0 = true;
						}
					}
				}
				else if (func_81(Param0))
				{
					if (Param0.f_3 == 5)
					{
						bVar2 = func_82(uParam6->f_25[0]->f_1);
						bVar3 = (uParam6->f_2271 == 1 && !bVar2);
						if (func_83(uParam6, Param0.f_3) || uParam6->f_2271 == 1)
						{
							bVar3 = false;
							if (!is_entity_at_entity(Global_35, uParam6->f_25[0]->f_1, 275f, 275f, 275f, false, true, 0))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_FM_ABANCOACH";
								}
								func_72(8388608);
								bVar0 = true;
							}
						}
						else if (func_15(uParam6, 2))
						{
							if (!is_entity_at_entity(Global_35, &(uParam6->f_25[0]->f_252[0]), 150f, 150f, 150f, false, true, 0))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_F_LEFTVIP";
								}
								func_72(8388608);
								bVar0 = true;
							}
							if (!is_entity_at_entity(Global_35, uParam6->f_25[0]->f_1, 250f, 250f, 250f, false, true, 0))
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_FM_ABANCOACH";
								}
								func_72(8388608);
								bVar0 = true;
							}
						}
						if (func_10(16384) || bVar3)
						{
							if (bVar3)
							{
								if (bVar1)
								{
									uParam6->f_2388 = "CR_FM_CWRECK";
								}
							}
							else if (bVar1)
							{
								uParam6->f_2388 = func_73(Param0.f_3);
							}
							func_72(16777216);
							bVar0 = true;
						}
					}
				}
			}
		}
	}
	else if (!func_10(65536))
	{
		if (func_67(uParam6))
		{
			uParam6->f_2387 = 5;
			func_68(Param0.f_3, 1, 1);
			return true;
		}
	}
	if (bVar0)
	{
		if (!func_10(4))
		{
			uParam6->f_2387 = 1;
			return true;
		}
	}
	return false;
}

void func_9(int iParam0)
{
	iLocal_27 = iParam0;
}

bool func_10(int iParam0)
{
	return (Global_1392388->f_4 && iParam0) != 0;
}

bool func_11(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	bVar0 = false;
	if (func_15(uParam6, 1))
	{
		if (func_81(Param0))
		{
			if (Param0.f_3 != 5 && func_84(uParam6))
			{
				uParam6->f_2388 = "CR_F_LEFTVIP";
				bVar0 = true;
			}
		}
	}
	if (bVar0)
	{
		uParam6->f_2387 = 1;
		return true;
	}
	return false;
}

void func_12()
{
	if (iLocal_25 != 1)
	{
		return;
	}
	vVar0 = { -1521.967f, 167.1579f, 98.266f };
	sVar3 = "script@proc@robberies@coach@strawberry@push_wagon";
	iVar4 = &Local_51.f_25[0]->f_410[1];
	if (!func_85(16384))
	{
		func_86(16384);
	}
	if (iLocal_28 > 2)
	{
		if (!func_85(16384))
		{
			if (does_entity_exist(Local_51.f_2278) && func_87(Local_51.f_2278, Global_36, 1) < 50f)
			{
				if (!func_88() && !func_89())
				{
					func_90("CR_HELP_IOBJ", 10000, 0, 0, 0, 1);
					func_86(16384);
				}
			}
		}
	}
	if (((iLocal_45 > 11 && iLocal_45 < 21) && iLocal_36 <= 0) && !Local_51.f_25[0]->f_9.f_159)
	{
		func_91(Local_51.f_25[0]->f_9);
	}
	vVar6 = { -1520.89f, 153.19f, 100.87f };
	fVar9 = 173.02f;
	iVar11 = -393054991;
	sVar12 = "CR_LOGWAGON03";
	sVar13 = "CR_LOGWAGON02";
	bVar14 = false;
	bVar15 = false;
	if (iLocal_45 > 2 && is_entity_dead(Local_51.f_2278))
	{
		func_92(&(Local_51.f_2276), 1, 1);
		func_92(&(Local_51.f_2277), 1, 1);
		return;
	}
	if (!func_10(32768))
	{
		if (iLocal_45 > 3 && func_15(&Local_51, 1))
		{
			if (!func_53(&(Local_51.f_25[0]->f_410[1]), 0) || has_entity_been_damaged_by_entity(&(Local_51.f_25[0]->f_410[1]), Global_35, 1, 1))
			{
				bVar15 = true;
			}
			if (!func_53(&(Local_51.f_25[0]->f_410[0]), 0) || has_entity_been_damaged_by_entity(&(Local_51.f_25[0]->f_410[0]), Global_35, 1, 1))
			{
				bVar15 = true;
			}
			if (bVar15)
			{
				func_72(32768);
			}
		}
	}
	if (func_10(1))
	{
		func_92(&(Local_51.f_2276), 1, 1);
		func_92(&(Local_51.f_2277), 1, 1);
		func_93(Local_51.f_2409);
		if (iLocal_45 >= 14)
		{
			if (is_playback_going_on_for_vehicle(Local_51.f_2278))
			{
				stop_playback_recorded_vehicle(Local_51.f_2278);
			}
		}
		if (!func_10(524288))
		{
			if ((vdist(get_entity_coords(Local_51.f_2278, true, false), get_entity_coords(Global_1392388->f_5, true, false)) < 30f && func_94(Local_51.f_25[0]->f_9, Local_51.f_2278, 0.5f)) && func_95(Local_51.f_2278))
			{
				func_72(524288);
			}
		}
		return;
	}
	if (!func_15(&Local_51, 16777216))
	{
		if (iLocal_45 > 10 && iLocal_45 < 21)
		{
			if (iLocal_36 > 0)
			{
				bVar14 = true;
			}
			else if ((func_96(Local_51.f_25[0]->f_1, 1101004800) && !is_ped_facing_ped(Local_51.f_25[0]->f_9, Global_35, 90f)) && (is_ped_walking(Global_35) || is_ped_running(Global_35)))
			{
				func_97(&(Local_51.f_2286), iLocal_25, 28);
				bVar14 = true;
			}
			if (bVar14)
			{
				func_4(&Local_51, 16777216);
			}
		}
	}
	else if (iLocal_45 < 21)
	{
		func_98();
	}
	switch (iLocal_45)
	{
		case 0:
			Local_51.f_2409 = _create_anim_scene(sVar3, 0, 0, false, true);
			request_model(iVar11, false);
			request_vehicle_recording(0, sVar12);
			request_vehicle_recording(0, sVar13);
			iLocal_45 = 1;
			break;
		case 1:
			if ((has_model_loaded(iVar11) && has_vehicle_recording_been_loaded(0, sVar12)) && has_vehicle_recording_been_loaded(0, sVar13))
			{
				load_anim_scene(Local_51.f_2409);
				Local_51.f_2278 = create_vehicle(iVar11, vVar6, fVar9, true, true, true, false);
				_0xd80faf919a2e56ea(Local_51.f_2278, -1577381472);
				freeze_entity_position(Local_51.f_2278, true);
				_0xfc4f15a7dddc47b1(Local_51.f_2278, 1);
				iLocal_45 = 2;
			}
			break;
		case 2:
			set_playback_speed(Local_51.f_2278, 0f);
			if (iLocal_28 > 2)
			{
				if (func_99())
				{
					iLocal_45 = 3;
				}
			}
			break;
		case 3:
			delete_object(Local_51.f_2280[0]);
			delete_object(Local_51.f_2280[1]);
			func_100(&(Local_51.f_2185));
			fLocal_2478 = 1f;
			iLocal_45 = 7;
			break;
		case 7:
			if (_0x3ab6c7b0bb0df4b1(Global_35, Local_51.f_2410) && !bVar2541)
			{
				if (_get_anim_scene_progress(Local_51.f_2410) > 0.5f)
				{
					remove_anim_scene_entity(Local_51.f_2410, "player", Global_35);
				}
			}
			if (is_playback_going_on_for_vehicle(Local_51.f_2278))
			{
				fVar10 = get_time_position_in_recording(Local_51.f_2278);
				if (fVar10 < 7500f)
				{
					fLocal_2478 = (fVar2476 + 0.02f);
					if (fVar2476 > 1.7f)
					{
						fLocal_2478 = 1.7f;
					}
				}
				else
				{
					fLocal_2478 = (fVar2476 - 0.05f);
					if (fVar2476 < 1f)
					{
						fLocal_2478 = 1f;
					}
				}
				set_playback_speed(Local_51.f_2278, fVar2476);
				if (fVar10 > 3788f && func_95(Global_1392388->f_5))
				{
					if (!func_10(32768))
					{
						func_72(32768);
					}
					return;
				}
			}
			if ((vdist(get_entity_coords(Local_51.f_2278, true, false), get_entity_coords(Global_1392388->f_5, true, false)) < 30f && func_94(Local_51.f_25[0]->f_9, Local_51.f_2278, 0.5f)) && func_95(Local_51.f_2278))
			{
				func_100(&(Local_51.f_2185));
				func_101(&Local_51);
				func_72(524288);
				func_102(iLocal_25, "CR_O_ROBCOACH", 1);
				func_104(&(Local_51.f_2286), func_103("CRST2_BLOCKED"), 0, -1, 0, 0);
				iLocal_45 = 10;
			}
			break;
		case 10:
			if (get_entity_speed(Local_51.f_25[0]->f_1) < 0.3f)
			{
				if (!_0x508f5053e3f6f0c4(&(Local_51.f_25[0]->f_410[0]), get_entity_coords(Local_51.f_25[0]->f_9, true, false), 1f))
				{
					task_look_at_entity(&(Local_51.f_25[0]->f_410[0]), Local_51.f_25[0]->f_9, -1, 3120, 51, 1);
				}
				if (!_0x508f5053e3f6f0c4(&(Local_51.f_25[0]->f_410[1]), get_entity_coords(Local_51.f_25[0]->f_9, true, false), 1f))
				{
					task_look_at_entity(&(Local_51.f_25[0]->f_410[1]), Local_51.f_25[0]->f_9, -1, 3120, 51, 1);
				}
				task_look_at_entity(Local_51.f_25[0]->f_174, &(Local_51.f_25[0]->f_410[1]), -1, 0, 51, 0);
				iLocal_45 = 8;
			}
			break;
		case 8:
			if (!func_105(1))
			{
				func_104(&(Local_51.f_2286), func_103("CRST2_GIVEPUSH"), 0, -1, 0, 0);
				iLocal_45 = 9;
			}
			break;
		case 9:
			if (!func_105(1))
			{
				iLocal_45 = 11;
			}
			break;
		case 11:
			if (func_26(&(Local_51.f_2185)) > 6.5f)
			{
				if (!func_15(&Local_51, 1024))
				{
					func_102(iLocal_25, "CR_O_ROBCOACH", 0);
					func_4(&Local_51, 1024);
				}
				func_100(&(Local_51.f_2185));
				task_look_at_entity(&(Local_51.f_25[0]->f_410[0]), &(Local_51.f_25[0]->f_410[1]), -1, 0, 51, 0);
				set_current_ped_weapon(&(Local_51.f_25[0]->f_410[1]), -1569615261, false, 0, false, false);
				set_current_ped_weapon(&(Local_51.f_25[0]->f_410[1]), -1569615261, false, 1, false, false);
				task_swap_weapon(&(Local_51.f_25[0]->f_410[1]), 1, 1, 0, 0);
				open_sequence_task(&iVar5);
				task_clear_look_at(0);
				task_dismount_animal(0, 0, 0, 0, 0, 0);
				task_follow_nav_mesh_to_coord(0, vLocal_2570, 1f, -1, 0.5f, 0, vLocal_2573.z);
				task_achieve_heading(0, get_entity_heading(Local_51.f_2278), 0);
				close_sequence_task(iVar5);
				task_perform_sequence(&(Local_51.f_25[0]->f_410[1]), iVar5);
				clear_sequence_task(&iVar5);
				iLocal_45 = 14;
			}
			break;
		case 14:
			if (func_106(iVar4, Global_35, 1, 10f, 0) && !is_ped_on_mount(iVar4))
			{
				clear_ped_tasks(iVar4, 1, 0);
				task_look_at_entity(iVar4, Global_35, -1, 3120, 41, 0);
				if (func_107())
				{
					if (!_0xfe5c6177064bd390(1))
					{
						set_current_ped_weapon(iVar4, get_best_ped_weapon(iVar4, false, false), false, 0, false, false);
						task_aim_gun_at_entity(iVar4, Global_35, -1, 0, 1);
						func_97(&(Local_51.f_2286), iLocal_25, 53);
					}
				}
				else if (!_0xfe5c6177064bd390(1))
				{
					func_97(&(Local_51.f_2286), iLocal_25, 52);
				}
				iLocal_45 = 12;
			}
			else if (!func_108(iVar4, 242628503))
			{
				if (func_109(Local_51.f_2409, "PB_PUSH_ONE"))
				{
					if (_does_anim_scene_exist(Local_51.f_2410))
					{
						remove_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278);
					}
					set_anim_scene_entity(Local_51.f_2409, "PUSH_PED_A", &(Local_51.f_25[0]->f_410[1]), 0);
					set_anim_scene_entity(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
					func_110(Local_51.f_2409, "PB_PUSH_ONE");
					func_100(&(Local_51.f_2185));
					iLocal_45 = 15;
				}
			}
			break;
		case 12:
			if (!func_111(iLocal_25, 52) && !func_111(iLocal_25, 53))
			{
				if (func_107())
				{
					iLocal_2544 = 1;
					func_72(32768);
				}
				else
				{
					open_sequence_task(&iVar5);
					task_follow_nav_mesh_to_coord(0, vLocal_2570, 1f, -1, 0.5f, 0, vLocal_2573.z);
					task_achieve_heading(0, get_entity_heading(Local_51.f_2278), 0);
					close_sequence_task(iVar5);
					task_perform_sequence(iVar4, iVar5);
					clear_sequence_task(&iVar5);
					iLocal_45 = 13;
				}
			}
			break;
		case 13:
			if (!func_108(iVar4, 242628503))
			{
				if (func_109(Local_51.f_2409, "PB_PUSH_ONE"))
				{
					if (_does_anim_scene_exist(Local_51.f_2410))
					{
						remove_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278);
					}
					set_anim_scene_entity(Local_51.f_2409, "PUSH_PED_A", &(Local_51.f_25[0]->f_410[1]), 0);
					set_anim_scene_entity(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
					func_110(Local_51.f_2409, "PB_PUSH_ONE");
					func_100(&(Local_51.f_2185));
					iLocal_45 = 15;
				}
			}
			break;
		case 15:
			vLocal_2576 = { -1518.49f, 169.69f, 97.86f };
			set_current_ped_weapon(&(Local_51.f_25[0]->f_410[0]), -1569615261, false, 0, false, false);
			set_current_ped_weapon(&(Local_51.f_25[0]->f_410[0]), -1569615261, false, 1, false, false);
			if (func_26(&(Local_51.f_2185)) > 10f)
			{
				task_swap_weapon(&(Local_51.f_25[0]->f_410[0]), 1, 1, 0, 0);
				open_sequence_task(&iVar5);
				task_dismount_animal(0, 0, 0, 0, 0, 0);
				task_follow_nav_mesh_to_coord(0, vLocal_2576, 1f, -1, 0.1f, 2624, vLocal_2579.z);
				task_achieve_heading(0, get_entity_heading(Local_51.f_2278), 0);
				close_sequence_task(iVar5);
				task_perform_sequence(&(Local_51.f_25[0]->f_410[0]), iVar5);
				clear_sequence_task(&iVar5);
				func_100(&(Local_51.f_2185));
				iLocal_45 = 16;
			}
			break;
		case 16:
			if (!func_108(&(Local_51.f_25[0]->f_410[0]), 242628503))
			{
				if (func_109(Local_51.f_2409, "PB_PUSH_SUCCESS_ENTER"))
				{
					if (_does_anim_scene_exist(Local_51.f_2410))
					{
						remove_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278);
					}
					set_anim_scene_entity(Local_51.f_2409, "PUSH_PED_A", &(Local_51.f_25[0]->f_410[1]), 0);
					set_anim_scene_entity(Local_51.f_2409, "PUSH_PED_B", &(Local_51.f_25[0]->f_410[0]), 0);
					set_anim_scene_entity(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
					func_110(Local_51.f_2409, "PB_PUSH_SUCCESS_ENTER");
					func_100(&(Local_51.f_2185));
					iLocal_45 = 17;
				}
			}
			break;
		case 17:
			if (func_26(&(Local_51.f_2185)) > 10f)
			{
				if (func_109(Local_51.f_2409, "PB_SUCCESS"))
				{
					if (_does_anim_scene_exist(Local_51.f_2410))
					{
						remove_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278);
					}
					set_anim_scene_entity(Local_51.f_2409, "PUSH_PED_A", &(Local_51.f_25[0]->f_410[1]), 0);
					set_anim_scene_entity(Local_51.f_2409, "PUSH_PED_B", &(Local_51.f_25[0]->f_410[0]), 0);
					set_anim_scene_entity(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
					func_110(Local_51.f_2409, "PB_SUCCESS");
					func_100(&(Local_51.f_2185));
					iLocal_45 = 18;
				}
			}
			break;
		case 18:
			if (!_is_anim_scene_started(Local_51.f_2409, false) || _get_anim_scene_progress(Local_51.f_2409) >= 0.75f)
			{
				func_100(&(Local_51.f_2185));
				iLocal_45 = 20;
			}
			break;
		case 20:
			if (!_is_anim_scene_started(Local_51.f_2409, false) || _get_anim_scene_progress(Local_51.f_2409) >= 0.999f)
			{
				func_100(&(Local_51.f_2185));
				open_sequence_task(&iVar5);
				task_mount_animal(0, Local_51.f_25[0]->f_410[1]->f_7, -1, Local_51.f_25[0]->f_676, 1f, 1, 0, 0);
				close_sequence_task(iVar5);
				task_perform_sequence(&(Local_51.f_25[0]->f_410[1]), iVar5);
				clear_sequence_task(&iVar5);
				open_sequence_task(&iVar5);
				task_mount_animal(0, Local_51.f_25[0]->f_410[0]->f_7, -1, Local_51.f_25[0]->f_676, 1f, 1, 0, 0);
				task_follow_nav_mesh_to_coord(0, vVar0, 1.25f, -1, 0.25f, 0, 40000f);
				close_sequence_task(iVar5);
				task_perform_sequence(&(Local_51.f_25[0]->f_410[0]), iVar5);
				clear_sequence_task(&iVar5);
				iLocal_45 = 21;
			}
			break;
		case 21:
			if (func_26(&(Local_51.f_2185)) > 5f)
			{
				if (!is_ped_in_vehicle(Local_51.f_25[0]->f_174, Local_51.f_25[0]->f_1, true))
				{
					if (!func_108(Local_51.f_25[0]->f_174, -1794415470))
					{
						task_enter_vehicle(Local_51.f_25[0]->f_174, Local_51.f_25[0]->f_1, -1, Local_51.f_25[0]->f_677, 2f, 1, 0);
					}
				}
			}
			if ((_is_ped_getting_into_a_mount_seat(&(Local_51.f_25[0]->f_410[1]), true) && (_is_ped_getting_into_a_mount_seat(&(Local_51.f_25[0]->f_410[0]), true) && func_87(&(Local_51.f_25[0]->f_410[0]), vVar0, 1) < 2f)) && is_ped_in_vehicle(Local_51.f_25[0]->f_174, Local_51.f_25[0]->f_1, false))
			{
				func_21(524288);
				func_112(&Local_51, iLocal_24, 1);
				if (func_15(&Local_51, 262144))
				{
					func_113(&Local_51, 262144);
				}
				iLocal_45 = 22;
			}
			break;
	}
}

void func_13()
{
	if (!func_15(&Local_51, 2))
	{
		if (!does_entity_exist(Local_51.f_2209))
		{
			if (func_114(Global_35, 6))
			{
				iVar0 = func_115(Global_35, 6);
				if (func_53(iVar0, 1) && _is_ped_hogtied(iVar0))
				{
					Local_51.f_2209 = iVar0;
					set_entity_as_mission_entity(Local_51.f_2209, true, true);
				}
			}
		}
	}
}

void func_14()
{
	if (func_53(Local_51.f_2385, 0))
	{
		return;
	}
	if (func_116(Global_35))
	{
		Local_51.f_2385 = get_mount(Global_35);
		set_entity_only_damaged_by_player(Local_51.f_2385, true);
	}
}

bool func_15(var uParam0, int iParam1)
{
	return (uParam0->f_2207 && iParam1) != 0;
}

void func_16(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_117(uParam0->f_25[iVar0], Global_35, 1072064102);
		iVar0++;
	}
}

void func_17(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_118(uParam0->f_25[iVar0], Global_35, 1069547520, 1);
		iVar0++;
	}
}

void func_18(int iParam0)
{
	iLocal_29 = iParam0;
}

void func_19(int iParam0)
{
	iLocal_30 = iParam0;
}

void func_20(int iParam0)
{
	iLocal_34 = iParam0;
}

void func_21(int iParam0)
{
	Global_1392388->f_4 = (Global_1392388->f_4 - (Global_1392388->f_4 && iParam0));
}

void func_22()
{
	if (func_15(&Local_51, 33554432))
	{
		return;
	}
	if (iLocal_26 == 1)
	{
		return;
	}
	if (func_10(4))
	{
		return;
	}
	if (!func_10(1))
	{
		return;
	}
	if (!func_119(&Local_51))
	{
		return;
	}
	bVar0 = false;
	if (iLocal_26 == 3)
	{
		if (!func_10(2))
		{
			return;
		}
		iVar1 = 0;
		while (iVar1 < Local_51.f_2266)
		{
			if (!func_120(Local_51.f_25[iVar1]->f_631))
			{
				if (vdist(Global_36, Local_51.f_25[iVar1]->f_631) < 100f)
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			return;
		}
		func_121(1);
		func_122(Global_1392388->f_10[iLocal_25]->f_5, 125f, 5);
		func_4(&Local_51, 33554432);
	}
	else
	{
		if (!func_25(&(Local_51.f_2182)))
		{
			func_100(&(Local_51.f_2182));
		}
		if (func_26(&(Local_51.f_2182)) < 120f)
		{
			return;
		}
		func_121(1);
		iVar1 = 0;
		while (iVar1 < Local_51.f_2266)
		{
			if (!func_120(Local_51.f_25[iVar1]->f_631))
			{
				if (vdist(Global_36, Local_51.f_25[iVar1]->f_631) < 50f)
				{
					bVar0 = true;
				}
			}
			iVar1++;
		}
		if (bVar0)
		{
			_report_crime(player_id(), -59535775, 50, 0, false);
			Local_51.f_2393 = 1;
		}
		func_122(Global_1392388->f_10[iLocal_25]->f_5, 125f, 5);
		func_4(&Local_51, 33554432);
	}
}

void func_23(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (func_120(Global_1392388->f_10[iParam0]->f_5))
	{
		return;
	}
	if (!get_vehicle_node_is_switched_off(get_nth_closest_vehicle_node_id(Global_1392388->f_10[iParam0]->f_5, 1, 1, 3f, 0f)))
	{
		func_123(Global_1392388->f_10[iParam0]->f_5, 125f, 0, 0, 5);
	}
}

bool func_24(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

bool func_25(var uParam0)
{
	return func_124(*uParam0, 1);
}

float func_26(var uParam0)
{
	if (!func_25(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_125(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_126() - uParam0->f_1);
}

void func_27()
{
	if ((((!func_10(16384) && !func_10(2)) && iLocal_27 < 2) && iLocal_29 != 2) && !func_15(&Local_51, 33554432))
	{
		if (_0xa82964b9d8d6a983() != 0f)
		{
			set_wanted_level_multiplier(0f);
		}
	}
	else if (_0xa82964b9d8d6a983() != 1f)
	{
		set_wanted_level_multiplier(1f);
	}
}

bool func_28(vector3 vParam0, float fParam3)
{
	bVar0 = false;
	iVar1 = create_itemset(false);
	_0x0c392db374655176(vParam0, fParam3, iVar1);
	bVar0 = get_itemset_size(iVar1) > 0;
	_0x20a4bf0e09bee146(iVar1);
	clean_itemset(iVar1);
	destroy_itemset(iVar1);
	return bVar0;
}

bool func_29()
{
	if (iLocal_26 == 0 || iLocal_26 == 2)
	{
		iVar0 = 0;
		while (iVar0 < Local_51.f_2266)
		{
			if (does_entity_exist(Local_51.f_25[iVar0]->f_1))
			{
				if (vdist(Global_36, get_offset_from_entity_in_world_coords(Local_51.f_25[iVar0]->f_1, Local_51.f_25[iVar0]->f_601)) < 2f)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	if (func_127(Global_35))
	{
		return true;
	}
	return false;
}

void func_30()
{
	if (!func_10(1))
	{
		return;
	}
	if (!is_entity_dead(Global_35))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_31(struct<6> Param0, var uParam6, int iParam7)
{
	switch (iLocal_28)
	{
		case 0:
			func_128(Param0);
			func_129(1);
			break;
		case 1:
			func_130(uParam6, iParam7, Param0, iLocal_25);
			func_129(2);
			break;
		case 2:
			if (func_131(uParam6, iParam7, Param0, iLocal_25))
			{
				func_129(3);
			}
			break;
		case 3:
			func_129(4);
			break;
		case 4:
			if (func_132(uParam6, iLocal_25))
			{
				func_129(5);
			}
			break;
		case 5:
			func_133(uParam6);
			func_9(1);
			break;
	}
}

int func_32()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < Local_51.f_2266)
	{
		if (func_53(Local_51.f_25[iVar1]->f_9, 3))
		{
			iVar0++;
		}
		if (func_53(Local_51.f_25[iVar1]->f_174, 3))
		{
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 < Local_51.f_25[iVar1]->f_499)
		{
			if (func_53(&(Local_51.f_25[iVar1]->f_410[iVar2]), 3))
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < Local_51.f_25[iVar1]->f_523)
		{
			if (func_53(&(Local_51.f_25[iVar1]->f_500[iVar3]), 3))
			{
				iVar0++;
			}
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < Local_51.f_25[iVar1]->f_540)
		{
			if (func_53(&(Local_51.f_25[iVar1]->f_524[iVar4]), 3))
			{
				iVar0++;
			}
			iVar4++;
		}
		iVar5 = 0;
		while (iVar5 < Local_51.f_25[iVar1]->f_595)
		{
			if (func_53(&(Local_51.f_25[iVar1]->f_541[iVar5]), 3))
			{
				iVar0++;
			}
			iVar5++;
		}
		iVar1++;
	}
	if (func_15(&Local_51, 65536))
	{
		iVar6 = 0;
		while (iVar6 < 2)
		{
			if (func_53(&(Local_51.f_5[iVar6]), 3))
			{
				iVar0++;
			}
			iVar6++;
		}
	}
	if (Global_1392388->f_9 != iVar0)
	{
		Global_1392388->f_9 = iVar0;
	}
	return iVar0;
}

void func_33(struct<6> Param0)
{
	switch (iLocal_31)
	{
		case 0:
			if (func_24(Param0.f_3))
			{
				if (func_15(&Local_51, 8388608))
				{
					if (func_134(Param0.f_3))
					{
						if (!Local_51.f_2425)
						{
							_uilog_mark_all_entries_availability(2, "");
							if (_uilog_is_entry_registered(4, func_135(Param0.f_3)))
							{
								_uilog_mark_entry_availability(4, func_135(Param0.f_3), 0, "");
							}
							Local_51.f_2425 = 1;
						}
						clear_area(func_62(Param0.f_3), 200f, 1048576);
						_0x9851de7aec10b4e1(func_62(Param0.f_3), 200f, 1, 0);
						func_136();
						func_113(&Local_51, 8388608);
					}
					return;
				}
			}
			if (func_25(&(Local_51.f_2125)))
			{
				func_42(&(Local_51.f_2125));
			}
			func_137(1);
			break;
		case 1:
			if (func_87(Global_35, Local_51, 1) < func_138(Param0.f_3))
			{
				func_139(Param0.f_3);
				if (func_24(Param0.f_3))
				{
					if (!Local_51.f_2425)
					{
						_uilog_mark_all_entries_availability(2, "");
						if (_uilog_is_entry_registered(4, func_135(Param0.f_3)))
						{
							_uilog_mark_entry_availability(4, func_135(Param0.f_3), 0, "");
						}
						Local_51.f_2425 = 1;
					}
					if (Param0.f_3 != func_3())
					{
						Var0 = { func_140(0) };
						func_141(Var0, Var0.f_3);
					}
					if (iLocal_26 == 3)
					{
						func_142(Global_1392388->f_10[iLocal_25]->f_8, func_140(0), func_140(1), 0, 1);
					}
					else
					{
						func_142(Global_1392388->f_10[iLocal_25]->f_8, func_140(0), func_140(2), 0, 2);
					}
				}
				func_137(2);
				func_46(&(Global_1392388->f_10[Param0.f_3]->f_10));
				func_143(Param0);
			}
			break;
		case 2:
			if (!does_blip_exist(Global_1392388->f_10[Param0.f_3]->f_10))
			{
				if (!func_25(&(Local_51.f_2125)))
				{
					func_144(Param0.f_3);
					func_100(&(Local_51.f_2125));
				}
				else
				{
					func_43(&Local_51, "PRCCH_START");
					if (func_26(&(Local_51.f_2125)) > 2f)
					{
						func_42(&(Local_51.f_2125));
						func_18(1);
						func_19(0);
					}
				}
			}
			break;
	}
}

void func_34(struct<6> Param0)
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		func_145(Local_51.f_25[iVar0], iVar0, Param0);
		iVar0++;
	}
}

void func_35(struct<6> Param0)
{
	if (iLocal_32 > 0)
	{
		if (!func_10(2))
		{
			if (func_10(1))
			{
				if (func_146())
				{
					if (!func_15(&Local_51, 65536))
					{
						func_72(2);
					}
				}
			}
		}
	}
	if (!Local_51.f_2415)
	{
		if (func_147(&Local_51, iLocal_25))
		{
			if (func_97(&(Local_51.f_2286), iLocal_25, 2))
			{
				Local_51.f_2415 = 1;
			}
		}
	}
	if (func_148(Param0))
	{
		if ((func_10(2) || func_149(&Local_51)) || !func_24(iLocal_25))
		{
			func_150();
			func_19(1);
			return;
		}
		if (func_24(iLocal_25) && iLocal_26 == 0)
		{
			if (func_10(1))
			{
				if (!func_15(&Local_51, 32768))
				{
					func_102(Param0.f_3, "CR_O_LEAVECOMBAT", 0);
					func_4(&Local_51, 32768);
				}
			}
			else if (!func_15(&Local_51, 16384))
			{
				func_102(Param0.f_3, "CR_O_LEAVE", 0);
				func_4(&Local_51, 16384);
			}
		}
	}
	if (iLocal_25 == 5)
	{
		if (func_53(&(Local_51.f_25[0]->f_252[0]), 9) && does_entity_exist(Local_51.f_25[0]->f_1))
		{
			iVar0 = &Local_51.f_25[0]->f_252[0];
			_0x6569f31a01b4c097(iVar0, 15, 1);
		}
	}
	switch (iLocal_32)
	{
		case 0:
			if (func_24(Param0.f_3))
			{
				if (!func_25(&(Local_51.f_2125)))
				{
					func_100(&(Local_51.f_2125));
				}
				if (func_26(&(Local_51.f_2125)) < func_151(Param0.f_3))
				{
					return;
				}
			}
			if (!func_10(65536))
			{
				if (!func_15(&Local_51, 1))
				{
					func_152(&Local_51, iLocal_24, iLocal_46);
					return;
				}
				if (func_25(&(Local_51.f_2125)))
				{
					func_42(&(Local_51.f_2125));
				}
				func_153(1);
			}
			break;
		case 1:
			if (func_154(&Local_51))
			{
				func_155();
				func_153(2);
			}
			if (func_156())
			{
				if (func_157())
				{
					if (func_15(&Local_51, 16))
					{
						func_153(4);
					}
					else
					{
						func_153(3);
					}
				}
			}
			break;
		case 2:
			if (func_156())
			{
				if (func_157())
				{
					if (func_15(&Local_51, 16))
					{
						func_153(4);
					}
					else
					{
						func_153(3);
					}
				}
			}
			break;
		case 3:
			func_43(&Local_51, "PRCCH_FIGHT");
			if (func_158())
			{
				func_153(4);
			}
			if (func_15(&Local_51, 2) && func_15(&Local_51, 32))
			{
				func_159(&Local_51, iLocal_25, 0);
				func_160(&Local_51, 1);
				func_4(&Local_51, 8);
				func_153(4);
			}
			break;
		case 4:
			if (func_161(Local_51.f_25[0], &Local_51, iLocal_26, iLocal_25) || ((does_entity_exist(Local_51.f_25[1]->f_1) && func_161(Local_51.f_25[1], &Local_51, iLocal_26, iLocal_25)) && Local_51.f_25[0]->f_612))
			{
				func_100(&(Local_51.f_25[0]->f_646));
				if (func_81(Param0))
				{
					func_46(&(Local_51.f_25[0]->f_1.f_2));
					task_look_at_entity(&(Local_51.f_25[0]->f_252[0]), Global_35, -1, 0, 51, 0);
					if (is_entity_dead(Local_51.f_25[0]->f_9))
					{
						func_97(&(Local_51.f_2286), iLocal_25, 14);
					}
					else
					{
						func_97(&(Local_51.f_2286), iLocal_25, 16);
					}
					func_162(Local_51.f_25[0]->f_252[0]);
					set_ped_can_be_targetted(&(Local_51.f_25[0]->f_252[0]), true);
					func_163(Local_51.f_25[0]->f_252[0], &(Local_51.f_25[0]->f_252[0]->f_5), 0, 1, 0);
					set_blip_name_from_text_file(Local_51.f_25[0]->f_252[0]->f_5, "CR_O_STRANGER");
				}
				else if (func_70(Param0))
				{
					if (!is_entity_dead(&(Local_51.f_25[0]->f_500[0])))
					{
						func_164(Local_51.f_25[0]->f_500[0], 0);
					}
					if (!is_entity_dead(&(Local_51.f_25[0]->f_500[1])))
					{
						func_164(Local_51.f_25[0]->f_500[1], 0);
					}
				}
				else if (func_75(Param0))
				{
				}
				func_153(5);
			}
			break;
		case 5:
			if (func_15(&Local_51, 16))
			{
				func_165(1097859072);
				func_166();
			}
			if (func_81(Param0))
			{
				if (func_10(2))
				{
					func_43(&Local_51, "PRCCH_LOOT");
				}
				if (iLocal_25 == 5)
				{
					func_167();
				}
			}
			else if (func_70(Param0))
			{
				if (func_10(2))
				{
					func_43(&Local_51, "PRCCH_LOOT");
				}
				if (!func_10(4))
				{
					if (func_10(2))
					{
						if (!func_15(&Local_51, 1024))
						{
							if (!Local_51.f_25[0]->f_627)
							{
								if (!func_25(&(Local_51.f_2134)))
								{
									func_100(&(Local_51.f_2134));
								}
								else if (func_26(&(Local_51.f_2134)) > 2f)
								{
									if (func_168(-2f, 1, 0, 0))
									{
										if (!func_169(Local_51.f_25[0]->f_1))
										{
											if (func_170(&Local_51) > 1)
											{
												func_102(Param0.f_3, "CR_O_ROBCOACHS", 0);
											}
											else
											{
												func_102(Param0.f_3, "CR_O_ROBCOACH", 0);
											}
										}
										else
										{
											func_102(Param0.f_3, "CR_O_ROBCOACHA", 0);
										}
										func_4(&Local_51, 1024);
										func_100(&(Local_51.f_2134));
									}
								}
							}
						}
						else if (!func_169(Local_51.f_25[0]->f_1))
						{
							if (func_26(&(Local_51.f_2134)) > 3f)
							{
								if (!func_85(32))
								{
									func_90("CR_HELP_LOCK", 10000, 0, 0, 0, 1);
									func_86(32);
								}
								func_42(&(Local_51.f_2134));
							}
						}
					}
				}
			}
			break;
	}
	if (!func_15(&Local_51, 64))
	{
		if (func_171(&Local_51))
		{
			if (!func_10(536870912))
			{
				func_172(Param0.f_3);
				func_173();
				func_4(&Local_51, 64);
			}
		}
	}
	else if (func_10(536870912))
	{
		func_174();
	}
}

void func_36(struct<4> Param0, var uParam4, var uParam5)
{
	switch (iLocal_34)
	{
		case 0:
			switch (iLocal_26)
			{
				case 0:
				case 2:
				case 3:
					func_20(1);
					break;
				case 1:
					func_20(2);
					break;
			}
			break;
		case 1:
			func_20(3);
			break;
		case 2:
			func_46(&(Local_51.f_25[0]->f_252[0]->f_5));
			func_20(3);
			break;
		case 3:
			if (!func_175(&uVar0))
			{
				func_176();
			}
			func_43(&Local_51, "PRCCH_PASS");
			Local_51.f_2387 = 0;
			if (func_24(Param0.f_3))
			{
				func_177(Param0.f_3);
				if (Local_51.f_2425)
				{
					_uilog_mark_all_entries_availability(0, "");
					func_57();
					Local_51.f_2425 = 0;
				}
				func_178("MISSION_COMPLETE", "CR_COACH_TO", get_hash_key("hud_toasts"), get_hash_key("TOAST_MEDAL_COLLECTABLE"), -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
			}
			if (iLocal_25 != 12 && iLocal_25 != 13)
			{
				func_179(Global_36, 200f, "Coach robbery", 1, 0, 8, 0, 100f);
			}
			func_180(Param0.f_3, 1);
			if (func_24(Param0.f_3))
			{
				func_54();
				func_55();
			}
			func_9(2);
			break;
	}
}

void func_37(struct<6> Param0)
{
	vVar0 = { 1517.28f, -2114.92f, 43.69f };
	func_34(Param0);
	set_random_vehicle_density_multiplier_this_frame(0f);
	_0x16752daa7e6d3f72(player_id());
	if (func_181(1120403456) && iLocal_33 > 0)
	{
		if (((((((func_53(Local_51.f_25[0]->f_9, 0) || func_53(Local_51.f_25[0]->f_174, 0)) || func_53(&(Local_51.f_25[0]->f_410[0]), 0)) || func_53(&(Local_51.f_25[0]->f_410[1]), 0)) || func_53(&(Local_51.f_25[0]->f_410[2]), 0)) || func_53(&(Local_51.f_25[0]->f_410[3]), 0)) || func_53(&(Local_51.f_5[0]), 0)) || func_53(&(Local_51.f_5[1]), 0))
		{
			report_police_spotted_player(player_id());
		}
	}
	iVar4 = 0;
	while (iVar4 < Local_51.f_25[0]->f_499)
	{
		func_182(&(Local_51.f_25[0]->f_410[iVar4]), 2.5f);
		if (!Local_51.f_25[0]->f_410[iVar4]->f_15)
		{
			if (func_183(Global_35, &(Local_51.f_25[0]->f_410[iVar4]), 1, 1) < 50f || func_183(Local_51.f_25[0]->f_1, &(Local_51.f_25[0]->f_410[iVar4]), 1, 1) < 50f)
			{
				func_184(&(Local_51.f_25[0]->f_410[iVar4]));
				Local_51.f_25[0]->f_410[iVar4]->f_15 = 1;
			}
		}
		iVar4++;
	}
	switch (iLocal_33)
	{
		case 0:
			if (func_87(Local_51.f_25[0]->f_1, vVar0, 1) > 10f)
			{
				if (get_entity_speed(Local_51.f_25[0]->f_1) > 0.1f)
				{
					_task_vehicle_drive_to_point_2(Local_51.f_25[0]->f_1, vVar0, 15f, 5f, 0);
				}
				else
				{
					func_185(1);
				}
			}
			else
			{
				if (get_entity_speed(Local_51.f_25[0]->f_1) > 0.1f)
				{
					bring_vehicle_to_halt(Local_51.f_25[0]->f_1, 10f, -1, false);
				}
				func_185(1);
			}
			break;
		case 1:
			if (get_entity_speed(Local_51.f_25[0]->f_1) < 0.1f)
			{
				func_121(1);
				func_186(1);
				_0xedfc6c1fd1c964f5(player_id(), -59535775, 0, 0, 0, 0, 0, 0, 0);
				_report_crime(player_id(), -59535775, 0, 0, true);
				func_187(&Local_51);
				func_188(&Local_51);
				func_184(&(Local_51.f_5[0]));
				Local_51.f_25[0]->f_631 = { get_entity_coords(Local_51.f_25[0]->f_1, true, false) };
				func_189(1);
				func_163(Local_51.f_5[0], &(Local_51.f_5[0]->f_5), 1, 0, 1);
				func_163(Local_51.f_5[1], &(Local_51.f_5[1]->f_5), 1, 0, 1);
				if (!func_10(1))
				{
					func_72(1);
				}
				settimerb(0);
				func_185(2);
			}
			break;
		case 2:
			if (timerb() > 400)
			{
				func_184(&(Local_51.f_5[1]));
				func_185(3);
			}
			break;
		case 3:
			if (!Local_51.f_24)
			{
				if (func_168(-2f, 1, 0, 0))
				{
					if (!func_53(Global_1392388->f_3, 0))
					{
						func_102(Param0.f_3, "CR_O_ESC", 0);
					}
					Local_51.f_24 = 1;
				}
			}
			if (func_146() && Global_1392388->f_9 == 0)
			{
				bVar3 = true;
				clear_player_wanted_level(player_id());
				_0x55f37f5f3f2475e1();
				_0x292ad61a33a7a485();
				_0x062b4a4a3396351d(player_id());
			}
			if (!func_80(player_id(), 0, 0, 1) && bVar3)
			{
				func_72(2);
				func_185(4);
			}
			break;
		case 4:
			func_186(0);
			func_180(Param0.f_3, 1);
			func_9(2);
			break;
	}
}

void func_38(struct<6> Param0)
{
	if (!func_25(&(Local_51.f_2167)))
	{
		func_100(&(Local_51.f_2167));
	}
	if (iLocal_25 == 5)
	{
		iVar0 = &Local_51.f_25[0]->f_252[0];
		if (iVar2537 == 1)
		{
			if (does_entity_exist(iVar0))
			{
				if (!_is_ped_hogtied(iVar0))
				{
					_task_smart_flee_style_ped(iVar0, Global_35, 3, 0, -1082130432, -1, 0);
					iLocal_2545 = 0;
				}
			}
		}
		else if (does_entity_exist(iVar0))
		{
			if (_is_ped_hogtied(iVar0))
			{
				iLocal_2545 = 1;
			}
		}
	}
	if (func_15(&Local_51, 16))
	{
		func_165(1097859072);
		func_166();
	}
	if (!func_10(2))
	{
		if (func_10(1))
		{
			if (func_146())
			{
				if (!func_15(&Local_51, 65536))
				{
					func_72(2);
				}
			}
		}
	}
	if (!func_15(&Local_51, 2))
	{
		if (func_156())
		{
			if (func_157())
			{
				if (func_15(&Local_51, 131072))
				{
					func_113(&Local_51, 131072);
				}
			}
		}
	}
	func_34(Param0);
	if (!func_181(1120403456) && !func_190())
	{
		func_72(2048);
		func_9(3);
	}
}

bool func_39(var uParam0, int iParam1)
{
	if (func_24(iParam1))
	{
		if (uParam0->f_2387 == 1)
		{
			if (!is_screen_faded_out())
			{
				hide_hud_and_radar_this_frame();
				if (!func_15(uParam0, -2147483648))
				{
					if (!_0x139efb0a71dd9011())
					{
						func_191(1, 1);
					}
					settimerb(0);
					func_4(uParam0, -2147483648);
					uParam0->f_2398 = 0;
					return false;
				}
				uParam0->f_2398++;
				if (((func_15(uParam0, -2147483648) && uParam0->f_2398 >= 10) && !is_screen_fading_out()) && (!_0x139efb0a71dd9011() || _0x7ce9dc58e3e4755f()))
				{
					do_screen_fade_out(0);
					_0x16e9abdd34ddd931();
				}
				else if (timerb() > 3000 && !is_screen_fading_out())
				{
					do_screen_fade_out(1500);
					_0x16e9abdd34ddd931();
				}
				return false;
			}
			else
			{
				return true;
			}
		}
	}
	return true;
}

bool func_40()
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (does_entity_exist(Local_51.f_25[iVar0]->f_1))
		{
			if (vdist(get_entity_coords(Local_51.f_25[iVar0]->f_1, true, false), Global_36) < 5f)
			{
				if (func_192())
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_41(var uParam0)
{
	if (((((uParam0->f_613 || func_15(&Local_51, 131072)) || func_15(&Local_51, 32)) || func_10(1024)) || func_193(uParam0, iLocal_24)) || is_entity_dead(uParam0->f_1))
	{
		return;
	}
	sVar0 = func_194(iLocal_24);
	if (func_10(1))
	{
		fVar11 = func_195(iLocal_24);
		fVar12 = 1.75f;
	}
	else
	{
		fVar11 = 3f;
		fVar12 = 1.25f;
	}
	if (waypoint_recording_get_closest_waypoint(sVar0, get_entity_coords(uParam0->f_1, true, false), &iVar4))
	{
		iVar5 = iVar4 + 100;
		if (waypoint_recording_get_num_points(sVar0, &iVar9))
		{
			if (iVar5 > iVar9)
			{
				iVar5 = iVar9;
			}
			if (waypoint_recording_get_coord(sVar0, iVar5, &vVar6))
			{
				if (get_nth_closest_vehicle_node(vVar6, 1, &vVar1, 1, 1077936128, 0))
				{
					if (func_53(uParam0->f_9, 0) && is_ped_in_vehicle(uParam0->f_9, uParam0->f_1, false))
					{
						task_vehicle_drive_wander(uParam0->f_9, uParam0->f_1, fVar11, 0);
						set_ped_keep_task(uParam0->f_9, true);
					}
					iVar10 = 0;
					while (iVar10 < uParam0->f_499)
					{
						if (func_53(&(uParam0->f_410[iVar10]), 0))
						{
							if (is_ped_on_mount(&(uParam0->f_410[iVar10])))
							{
								if (func_108(&(uParam0->f_410[iVar10]), -583604717))
								{
									_task_move_in_traffic_2(&(uParam0->f_410[iVar10]), vVar1, 1073741824, fVar12, 1024, 0);
									set_ped_keep_task(&(uParam0->f_410[iVar10]), true);
								}
							}
						}
						iVar10++;
					}
				}
			}
		}
	}
}

void func_42(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_43(var uParam0, char* sParam1)
{
	if (func_10(4))
	{
		return;
	}
	if (!is_string_null_or_empty(uParam0->f_2284) && are_strings_equal(uParam0->f_2284, sParam1))
	{
		return;
	}
	if (trigger_music_event(sParam1))
	{
		uParam0->f_2284 = sParam1;
	}
}

void func_44(var uParam0, int iParam1)
{
	if (!func_24(iParam1))
	{
		return;
	}
	if (uParam0->f_2387 != 1)
	{
		return;
	}
	if (func_25(&(uParam0->f_2167)))
	{
		return;
	}
	func_196(Global_1392388->f_10[iParam1]->f_8, uParam0->f_2387, uParam0->f_2388, 0, 0, 0);
	bLocal_14 = true;
}

void func_45(int iParam0, bool bParam1)
{
	func_197();
	func_198();
	if (!func_199(iParam0))
	{
		return;
	}
	if (_does_volume_exist(Global_1392388->f_10[iParam0]->f_9))
	{
		func_200(Global_1392388->f_10[iParam0]->f_9);
		_delete_volume(Global_1392388->f_10[iParam0]->f_9);
	}
	if (does_blip_exist(Global_1392388->f_10[iParam0]->f_11))
	{
		remove_blip(&(Global_1392388->f_10[iParam0]->f_11));
	}
	if (does_blip_exist(Global_1392388->f_10[iParam0]->f_10))
	{
		remove_blip(&(Global_1392388->f_10[iParam0]->f_10));
	}
	if (bParam1)
	{
		func_122(Global_1392388->f_10[iParam0]->f_5, 125f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 0;
	Global_40.f_9146.f_79[iParam0] = -15;
	if (func_24(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (Global_1392388->f_10[iParam0]->f_8 == func_201(0))
		{
			func_202(Global_1392388->f_10[iParam0]->f_8);
		}
		else
		{
			func_203(Global_1392388->f_10[iParam0]->f_8, 1, 2);
		}
	}
	func_204(-1);
}

void func_46(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_47(var uParam0)
{
	Global_1392388->f_5 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (func_205(uParam0->f_25[iVar0]->f_9, 0, 1))
		{
			if (!is_ped_in_combat(uParam0->f_25[iVar0]->f_9, 0))
			{
				func_46(&(uParam0->f_25[iVar0]->f_9.f_5));
			}
			set_ped_keep_task(uParam0->f_25[iVar0]->f_9, true);
			set_ped_as_no_longer_needed(&(uParam0->f_25[iVar0]->f_9));
		}
		if (func_205(uParam0->f_25[iVar0]->f_174, 0, 1))
		{
			if (!is_ped_in_combat(uParam0->f_25[iVar0]->f_174, 0))
			{
				func_46(&(uParam0->f_25[iVar0]->f_174.f_5));
			}
			set_ped_keep_task(uParam0->f_25[iVar0]->f_174, true);
			set_ped_as_no_longer_needed(&(uParam0->f_25[iVar0]->f_174));
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0]->f_409)
		{
			if (does_entity_exist(&(uParam0->f_25[iVar0]->f_252[iVar1])))
			{
				if (!func_206(&(uParam0->f_25[iVar0]->f_252[iVar1]), 0))
				{
					func_46(&(uParam0->f_25[iVar0]->f_252[iVar1]->f_5));
				}
				if (func_205(&(uParam0->f_25[iVar0]->f_252[iVar1]), 0, 1))
				{
					set_ped_keep_task(&(uParam0->f_25[iVar0]->f_252[iVar1]), true);
				}
				set_ped_as_no_longer_needed(uParam0->f_25[iVar0]->f_252[iVar1]);
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < uParam0->f_25[iVar0]->f_523)
		{
			if (does_entity_exist(&(uParam0->f_25[iVar0]->f_500[iVar2])))
			{
				if (!func_206(&(uParam0->f_25[iVar0]->f_500[iVar2]), 0))
				{
					func_46(&(uParam0->f_25[iVar0]->f_500[iVar2]->f_5));
				}
				if (func_205(&(uParam0->f_25[iVar0]->f_500[iVar2]), 0, 1))
				{
					set_ped_keep_task(&(uParam0->f_25[iVar0]->f_500[iVar2]), true);
				}
				set_ped_as_no_longer_needed(uParam0->f_25[iVar0]->f_500[iVar2]);
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < uParam0->f_25[iVar0]->f_499)
		{
			if (does_entity_exist(&(uParam0->f_25[iVar0]->f_410[iVar3])))
			{
				if (!func_206(&(uParam0->f_25[iVar0]->f_410[iVar3]), 0))
				{
					func_46(&(uParam0->f_25[iVar0]->f_410[iVar3]->f_5));
				}
				if (func_205(&(uParam0->f_25[iVar0]->f_410[iVar3]), 0, 1))
				{
					set_ped_keep_task(&(uParam0->f_25[iVar0]->f_410[iVar3]), true);
				}
				set_ped_as_no_longer_needed(uParam0->f_25[iVar0]->f_410[iVar3]);
			}
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < uParam0->f_25[iVar0]->f_595)
		{
			if (does_entity_exist(&(uParam0->f_25[iVar0]->f_541[iVar4])))
			{
				if (!func_206(&(uParam0->f_25[iVar0]->f_541[iVar4]), 0))
				{
					func_46(&(uParam0->f_25[iVar0]->f_541[iVar4]->f_5));
				}
				if (func_205(&(uParam0->f_25[iVar0]->f_541[iVar4]), 0, 1))
				{
					set_ped_keep_task(&(uParam0->f_25[iVar0]->f_541[iVar4]), true);
				}
				set_ped_as_no_longer_needed(uParam0->f_25[iVar0]->f_541[iVar4]);
			}
			iVar4++;
		}
		if (does_entity_exist(uParam0->f_25[iVar0]->f_1))
		{
			func_46(&(uParam0->f_25[iVar0]->f_1.f_2));
			if (does_entity_exist(uParam0->f_25[iVar0]->f_656))
			{
				_0x0c6b89876262a99d(player_id(), uParam0->f_25[iVar0]->f_656);
				delete_object(&(uParam0->f_25[iVar0]->f_656));
			}
			if (is_screen_faded_out())
			{
				if (is_ped_in_any_vehicle(Global_35, false))
				{
					_0x8886d83a430537fd(Global_35, 0);
				}
			}
			remove_entity_from_audio_mix_group(uParam0->f_25[iVar0]->f_1, 0f);
			if (get_last_driven_vehicle() == uParam0->f_25[iVar0]->f_1 || get_last_driven_vehicle() == uParam0->f_2386)
			{
				clear_last_driven_vehicle();
			}
			set_vehicle_as_no_longer_needed(&(uParam0->f_25[iVar0]->f_1));
		}
		iVar0++;
	}
}

void func_48()
{
}

void func_49(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_92(&(uParam0->f_25[iVar0]->f_600), 1, 1);
		iVar0++;
	}
}

void func_50()
{
	_text_database_delete("SCRB");
}

void func_51(int iParam0)
{
	remove_waypoint_recording(func_194(iParam0));
}

void func_52()
{
	iVar0 = 932;
	while (iVar0 <= 952)
	{
		func_207(iVar0);
		iVar0++;
	}
	func_207(883);
	func_207(884);
	func_207(552);
	func_207(553);
}

bool func_53(int iParam0, int iParam1)
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
	if (func_208(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_208(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_208(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_208(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_208(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_208(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_208(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_208(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_54()
{
	Global_40.f_9.f_21 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_40.f_9.f_21.f_1[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_40.f_9.f_21.f_6[iVar0] = 0f;
		iVar0++;
	}
}

void func_55()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_209(0);
	func_210(0);
	func_211(0);
	func_212(0);
	func_213(0);
	func_214(1f);
}

void func_56(var uParam0, int iParam1)
{
	if (func_215(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_57()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_216(iVar0))
		{
			if (func_217(iVar0, 4))
			{
				if (func_217(iVar0, 16))
				{
					func_218(iVar0, 1);
				}
				if (func_217(iVar0, 8))
				{
					func_219(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

int func_58()
{
	return Global_1572864->f_8;
}

int func_59(int iParam0)
{
	if (func_220(iParam0) == 2)
	{
		if (func_221(iParam0) == 3)
		{
			return func_222(iParam0);
		}
	}
	return -1;
}

void func_60()
{
	func_9(0);
	func_129(0);
	func_18(0);
	func_137(0);
	func_153(0);
}

int func_61(struct<4> Param0, var uParam4, var uParam5)
{
	switch (Param0.f_3)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 6;
		case 9:
			return 7;
		case 10:
			return 8;
		case 11:
			return 9;
		case 12:
			return 10;
		case 13:
			return 11;
		default:
			break;
	}
	return -1;
}

Vector3 func_62(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1410.191f, -963.1737f, 60.5407f };
			break;
		case 1:
			vVar0 = { -1535.618f, 160.3011f, 100.1231f };
			break;
		case 2:
			vVar0 = { -2731.802f, -255.3586f, 148.6638f };
			break;
		case 4:
			vVar0 = { 1103.741f, -390.8806f, 93.3573f };
			break;
		case 5:
			vVar0 = { 1443.614f, -1845.664f, 53.1259f };
			break;
		case 6:
			vVar0 = { 1502.723f, -714.6039f, 47.6706f };
			break;
		case 8:
			vVar0 = { 1701.657f, -746.2404f, 40.7819f };
			break;
		case 9:
			vVar0 = { 1111.63f, -615.53f, 87.37f };
			break;
		case 10:
			vVar0 = { 685.9935f, -170.3752f, 135.5994f };
			break;
		case 11:
			vVar0 = { 1518.102f, -2117.535f, 42.7516f };
			break;
		case 12:
			vVar0 = { 1381.61f, -807.13f, 64.12f };
			break;
		case 13:
			vVar0 = { 2538.571f, -263.3733f, 41.1397f };
			break;
	}
	if (func_120(vVar0))
	{
	}
	return vVar0;
}

char* func_63(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "CRRH1";
		case 5:
			return "CRRH2";
		case 6:
			return "CRRH3";
		case 0:
			return "CRST1";
		case 1:
			return "CRST2";
		case 2:
			return "CRST3";
		default:
			break;
	}
	return "PRCCH";
}

int func_64(int iParam0)
{
	iVar0 = func_223(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!_0x800df3fc913355f3(iVar0))
	{
		return 0;
	}
	return _0x31c70a716cae1fee(iVar0);
}

int func_65(int iParam0)
{
	if (!func_224(iParam0))
	{
		return 0;
	}
	if (!func_226(func_225(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_223(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_223(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_223(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_223(iParam0));
	return 1;
}

bool func_66(var uParam0, var uParam1, int iParam2, int iParam3)
{
	fVar0 = func_183(Global_35, uParam1->f_1, 1, 1);
	fVar1 = 250f;
	if (fVar0 > fVar1)
	{
		if ((iParam2 == 0 && does_entity_exist(uParam0->f_25[1]->f_1)) && func_183(uParam1->f_1, uParam0->f_25[1]->f_1, 1, 1) < (20f + 5f))
		{
			uParam0->f_25[1]->f_612 = 1;
		}
		return true;
	}
	if (uParam1->f_611 && (func_24(iParam3) || iParam3 == 8))
	{
		if ((iParam2 == 0 && does_entity_exist(uParam0->f_25[1]->f_1)) && func_183(uParam1->f_1, uParam0->f_25[1]->f_1, 1, 1) < (20f + 5f))
		{
			uParam0->f_25[1]->f_612 = 1;
		}
		return true;
	}
	return false;
}

bool func_67(var uParam0)
{
	fVar0 = func_87(Global_35, *uParam0, 1);
	if (fVar0 > 250f)
	{
		return true;
	}
	else if (fVar0 > 150f)
	{
	}
	return false;
}

void func_68(int iParam0, bool bParam1, bool bParam2)
{
	func_197();
	func_198();
	if (!func_199(iParam0))
	{
		return;
	}
	if (_does_volume_exist(Global_1392388->f_10[iParam0]->f_9))
	{
		func_200(Global_1392388->f_10[iParam0]->f_9);
		_delete_volume(Global_1392388->f_10[iParam0]->f_9);
	}
	if (does_blip_exist(Global_1392388->f_10[iParam0]->f_11))
	{
		remove_blip(&(Global_1392388->f_10[iParam0]->f_11));
	}
	if (does_blip_exist(Global_1392388->f_10[iParam0]->f_10))
	{
		remove_blip(&(Global_1392388->f_10[iParam0]->f_10));
	}
	if (bParam2)
	{
		func_122(Global_1392388->f_10[iParam0]->f_5, 125f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 0;
	Global_40.f_9146.f_79[iParam0] = -15;
	if (func_24(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (func_227(Global_1392388->f_10[iParam0]->f_8) || func_228(Global_1392388->f_10[iParam0]->f_8))
		{
			func_203(Global_1392388->f_10[iParam0]->f_8, 0, 2);
		}
	}
	if (bParam1)
	{
		func_204(-1);
	}
}

bool func_69(var uParam0, bool bParam1)
{
	if (!func_15(uParam0, 2))
	{
		if (func_67(uParam0))
		{
			if (does_entity_exist(uParam0->f_25[0]->f_1))
			{
				if (!func_229(Global_35, uParam0->f_25[0]->f_1, 200f, 1))
				{
					if (!bLocal_16)
					{
						if (bParam1)
						{
							if (uParam0->f_2266 > 1)
							{
								uParam0->f_2388 = "CR_FM_ABANCOACHS";
							}
							else
							{
								uParam0->f_2388 = "CR_FM_ABANCOACH";
							}
						}
						func_72(8388608);
						return true;
					}
				}
				else if (func_229(Global_35, uParam0->f_25[0]->f_1, 50f, 1))
				{
					bLocal_16 = true;
				}
			}
			else
			{
				if (bParam1)
				{
					if (uParam0->f_2266 > 1)
					{
						uParam0->f_2388 = "CR_FM_ABANCOACHS";
					}
					else
					{
						uParam0->f_2388 = "CR_FM_ABANCOACH";
					}
				}
				func_72(8388608);
				return true;
			}
		}
	}
	return false;
}

bool func_70(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
			return true;
		case 1:
		case 3:
			return false;
		default:
			break;
	}
	return false;
}

bool func_71(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!uParam0->f_25[iVar0]->f_612)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_72(int iParam0)
{
	Global_1392388->f_4 = (Global_1392388->f_4 || iParam0);
}

char* func_73(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return "CR_FM_RWRHO";
		case 5:
			return "CR_FM_RCRHO";
		case 6:
			return "CR_FM_RCRHO";
		case 0:
			return "CR_FM_RCRIG";
		case 1:
			return "CR_FM_RCAPP";
		case 2:
			return "CR_FM_RCSTR";
		default:
			break;
	}
	return "";
}

bool func_74(var uParam0, int iParam1)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		iVar2 = 0;
		if (!func_169(uParam0->f_25[iVar0]->f_1))
		{
			if (!uParam0->f_25[iVar0]->f_612)
			{
				if (&uParam0->f_25[iVar0] >= 2)
				{
					if (!_0x8de41e9902e85756(uParam0->f_25[iVar0]->f_1))
					{
						if (_0x877ea24eb1614495(&iVar2, uParam0->f_25[iVar0]->f_1, Global_35) == 0 || func_230(uParam0->f_25[iVar0]->f_1))
						{
							if (!func_25(&(uParam0->f_25[iVar0]->f_658)))
							{
								func_100(&(uParam0->f_25[iVar0]->f_658));
							}
							else if (func_26(&(uParam0->f_25[iVar0]->f_658)) > 5f)
							{
								uParam0->f_25[iVar0]->f_610 = 1;
								func_46(&(uParam0->f_25[iVar0]->f_1.f_2));
								func_46(&(uParam0->f_25[iVar0]->f_1.f_3));
								iVar1++;
							}
						}
						else if (func_25(&(uParam0->f_25[iVar0]->f_658)))
						{
							func_42(&(uParam0->f_25[iVar0]->f_658));
						}
					}
				}
			}
		}
		else if (func_231(uParam0->f_25[iVar0]->f_1))
		{
			if (func_232(iParam1))
			{
				stop_fire_in_range(get_entity_coords(uParam0->f_25[iVar0]->f_1, true, false), 3f);
			}
			if (!func_25(&(uParam0->f_25[iVar0]->f_658)))
			{
				func_100(&(uParam0->f_25[iVar0]->f_658));
			}
			else if (!func_232(iParam1))
			{
				if (func_26(&(uParam0->f_25[iVar0]->f_658)) > 5f)
				{
					uParam0->f_25[iVar0]->f_610 = 1;
					func_46(&(uParam0->f_25[iVar0]->f_1.f_2));
					func_46(&(uParam0->f_25[iVar0]->f_1.f_3));
					iVar1++;
				}
			}
		}
		else if (func_233(uParam0->f_25[iVar0]->f_1) != 0)
		{
			if (!func_25(&(uParam0->f_25[iVar0]->f_658)))
			{
				func_100(&(uParam0->f_25[iVar0]->f_658));
			}
			else if (func_26(&(uParam0->f_25[iVar0]->f_658)) > 10f)
			{
				uParam0->f_25[iVar0]->f_610 = 1;
				func_46(&(uParam0->f_25[iVar0]->f_1.f_2));
				func_46(&(uParam0->f_25[iVar0]->f_1.f_3));
				iVar1++;
			}
		}
		else if (func_25(&(uParam0->f_25[iVar0]->f_658)))
		{
			func_42(&(uParam0->f_25[iVar0]->f_658));
		}
		iVar0++;
	}
	if (iVar1 >= uParam0->f_2266)
	{
		return true;
	}
	return false;
}

bool func_75(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return true;
		case 0:
		case 1:
		case 2:
			return false;
		default:
			break;
	}
	return false;
}

bool func_76(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (Param0.f_3 != 4)
	{
		return false;
	}
	if (!func_234(Global_35, uParam6->f_25[0]->f_1, 0))
	{
		return false;
	}
	if (func_235() || func_236())
	{
		return true;
	}
	if ((uParam6->f_2424 != 0f && does_blip_exist(uParam6->f_2213)) && vdist(Global_36, uParam6->f_2210) > (uParam6->f_2424 + 100f))
	{
		return true;
	}
	return false;
}

bool func_77(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (!is_vehicle_driveable(iParam0, false, false))
	{
		return false;
	}
	return true;
}

bool func_78(int iParam0, bool bParam1)
{
	if (func_237() != -1)
	{
		return false;
	}
	if (!func_224(iParam0))
	{
		return false;
	}
	if (!_0x800df3fc913355f3(func_223(iParam0)))
	{
		return false;
	}
	if (bParam1 && !does_entity_exist(func_64(iParam0)))
	{
		return false;
	}
	return !_0xeb98b38ca60742d7(func_223(iParam0));
}

bool func_79(int iParam0)
{
	return (Global_1415412 && iParam0) != 0;
}

bool func_80(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_238(bParam1, bParam2, bParam3);
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

bool func_81(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
			return false;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

int func_82(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (_0xddbea5506c848227(iParam0))
	{
		return 0;
	}
	return 1;
}

bool func_83(var uParam0, int iParam1)
{
	return (iParam1 == 5 && uParam0->f_2405);
}

bool func_84(var uParam0)
{
	if (func_10(1) && !uParam0->f_2271)
	{
		fVar0 = func_183(Global_35, &(uParam0->f_25[0]->f_252[0]), 1, 1);
		if (fVar0 > 250f)
		{
			return true;
		}
	}
	return false;
}

bool func_85(int iParam0)
{
	return (Global_40.f_9146.f_126 && iParam0) != 0;
}

void func_86(int iParam0)
{
	Global_40.f_9146.f_126 = (Global_40.f_9146.f_126 || iParam0);
}

float func_87(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_88()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

bool func_89()
{
	return func_239(_0xc17f69e1418cd11f(3));
}

var func_90(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _show_tooltip(&Var0, &Var13, iParam5);
	return uVar15;
}

void func_91(var uParam0)
{
	*vVar0[0] = { -1507.78f, 159.14f, 100.83f };
	*vVar0[1] = { -1518.04f, 167.34f, 99.4f };
	*vVar0[2] = { -1509.53f, 183.32f, 104.13f };
	*vVar0[3] = { -1504.16f, 151.13f, 99.59f };
	if (!func_25(&uLocal_2482))
	{
		func_100(&uLocal_2482);
	}
	if (func_26(&uLocal_2482) > 30f)
	{
		vVar13 = { *vVar0[1] };
		func_100(&uLocal_2482);
	}
	else if (func_26(&uLocal_2482) > 25f)
	{
		vVar13 = { *vVar0[0] };
	}
	else if (func_26(&uLocal_2482) > 21f)
	{
		vVar13 = { *vVar0[3] };
	}
	else if (func_26(&uLocal_2482) > 16f)
	{
		vVar13 = { *vVar0[1] };
	}
	else if (func_26(&uLocal_2482) > 10f)
	{
		vVar13 = { *vVar0[2] };
	}
	else if (func_26(&uLocal_2482) > 6f)
	{
		vVar13 = { *vVar0[3] };
	}
	else if (func_26(&uLocal_2482) > 2f)
	{
		vVar13 = { *vVar0[0] };
	}
	else
	{
		vVar13 = { *vVar0[1] };
	}
	Var16.f_4 = -1;
	Var16.f_8 = 2;
	Var16.f_9 = 1;
	Var16.f_10 = 1;
	Var16.f_11 = 1;
	Var16.f_13 = 1;
	Var16.f_14 = 2;
	Var16.f_15 = 2;
	Var16.f_16 = 3;
	Var16.f_19 = 3;
	Var16.f_20 = 1;
	Var16.f_21 = 3;
	Var16.f_22 = 3;
	Var16.f_7 = 500;
	Var16 = { vVar13 };
	Var16.f_3 = 0;
	Var16.f_4 = 14283;
	_0x66f9eb44342bb4c5(uParam0, &Var16);
}

void func_92(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_240(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_241(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_242(iVar0);
	*iParam0 = 0;
}

void func_93(int iParam0)
{
	if (_does_anim_scene_exist(iParam0))
	{
		if (_is_anim_scene_started(iParam0, false))
		{
			_delete_anim_scene(iParam0);
		}
	}
}

bool func_94(int iParam0, int iParam1, float fParam2)
{
	return func_243(iParam0, get_entity_coords(iParam1, false, false), fParam2);
}

bool func_95(int iParam0)
{
	return is_entity_in_angled_area(iParam0, -1531.6f, 161.7772f, 96.99397f, -1504.138f, 173.7086f, 105.2925f, 12f, false, true, 0);
}

bool func_96(int iParam0, float fParam1)
{
	set_player_sneaking_noise_multiplier(player_id(), 0.5f);
	fVar0 = get_player_current_stealth_noise(player_id());
	if (vdist(get_entity_coords(iParam0, true, false), Global_36) < fParam1)
	{
		if (fVar0 > 8f)
		{
			return true;
		}
	}
	return false;
}

bool func_97(var uParam0, int iParam1, int iParam2)
{
	vVar0 = { func_244(iParam1, iParam2) };
	return func_104(uParam0, vVar0, 0, -1, 0, 0);
}

void func_98()
{
	if ((func_10(1) || Local_51.f_25[0]->f_9.f_164 == 9) || Local_51.f_25[0]->f_9.f_164 == 11)
	{
		return;
	}
	if (func_245(Local_51.f_25[0]->f_1, Global_35))
	{
		vVar0 = { -1.9f, -2.3f, 0f };
		fVar3 = 90f;
	}
	else
	{
		vVar0 = { 1.9f, -2.3f, 0f };
		fVar3 = -90f;
	}
	Var5.f_4 = -1;
	Var5.f_8 = 2;
	Var5.f_9 = 1;
	Var5.f_10 = 1;
	Var5.f_11 = 1;
	Var5.f_13 = 1;
	Var5.f_14 = 2;
	Var5.f_15 = 2;
	Var5.f_16 = 3;
	Var5.f_19 = 3;
	Var5.f_20 = 1;
	Var5.f_21 = 3;
	Var5.f_22 = 3;
	Var5.f_7 = 500;
	Var5.f_3 = Global_35;
	Var5.f_4 = 14283;
	_0x66f9eb44342bb4c5(Local_51.f_25[0]->f_174, &Var5);
	if (iLocal_47 < 8)
	{
		if (Local_51.f_25[0]->f_610 || vdist(Global_36, get_offset_from_entity_in_world_coords(Local_51.f_25[0]->f_1, Local_51.f_25[0]->f_601)) < 1.4f)
		{
			if (!is_ped_in_any_vehicle(Local_51.f_25[0]->f_174, false))
			{
				if (_0x0c9dbf48c6ba6e4c(Local_51.f_25[0]->f_174, get_offset_from_entity_in_world_coords(Local_51.f_25[0]->f_1, Local_51.f_25[0]->f_601), 17))
				{
					_0x36559148b78853b3(1, 0, 0);
					if (func_97(&(Local_51.f_2286), iLocal_25, 32))
					{
						task_aim_gun_at_entity(Local_51.f_25[0]->f_174, Global_35, -1, 0, 1);
						iLocal_47 = 8;
					}
				}
			}
		}
	}
	if (!func_10(1))
	{
		if (is_entity_dead(Local_51.f_25[0]->f_174))
		{
			if (!func_10(32768))
			{
				func_72(32768);
			}
		}
	}
	switch (iLocal_47)
	{
		case 0:
			set_ped_path_may_enter_water(Local_51.f_25[0]->f_174, true);
			_0x9de63896b176ea94(Local_51.f_25[0]->f_174, 1);
			set_ped_path_prefer_to_avoid_water(Local_51.f_25[0]->f_174, false, 1f);
			_0x8bb283a7888ad1ad(Local_51.f_25[0]->f_174, 0, 1065353216);
			task_look_at_entity(Local_51.f_25[0]->f_174, Global_35, -1, 0, 51, 0);
			set_current_ped_weapon(Local_51.f_25[0]->f_174, _0x9f67929d98e7c6e8(Local_51.f_25[0]->f_174, 860033945, 0, 0), true, 0, false, false);
			open_sequence_task(&iVar4);
			if (is_ped_in_any_vehicle(Local_51.f_25[0]->f_174, false))
			{
				task_leave_any_vehicle(0, 0, 0);
			}
			task_swap_weapon(0, 1, 0, 0, 0);
			task_follow_nav_mesh_to_coord(0, get_offset_from_entity_in_world_coords(Local_51.f_25[0]->f_1, vVar0), 1f, -1, 1f, 0, (get_entity_heading(Local_51.f_25[0]->f_1) + fVar3));
			task_achieve_heading(0, (get_entity_heading(Local_51.f_25[0]->f_1) + fVar3), 0);
			close_sequence_task(iVar4);
			task_perform_sequence(Local_51.f_25[0]->f_174, iVar4);
			clear_sequence_task(&iVar4);
			if (func_245(Local_51.f_25[0]->f_1, Global_35))
			{
				iLocal_47 = 3;
			}
			else
			{
				iLocal_47 = 2;
			}
			break;
		case 2:
			if (func_245(Local_51.f_25[0]->f_1, Global_35))
			{
				iLocal_47 = 0;
				return;
			}
			if (func_106(Local_51.f_25[0]->f_174, Global_35, 1, 9f, 0) && !is_ped_in_any_vehicle(Local_51.f_25[0]->f_174, false))
			{
				if (!_0xa2cac9def0195e6f(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, func_246()))
					{
						Local_51.f_2414++;
						func_100(&(Local_51.f_2173));
						task_look_at_entity(Local_51.f_25[0]->f_174, Global_35, -1, 0, 51, 0);
						task_aim_gun_at_entity(Local_51.f_25[0]->f_174, Global_35, -1, 0, 1);
						if (Local_51.f_2414 < 3)
						{
							iLocal_47 = 4;
						}
						else
						{
							iLocal_47 = 8;
						}
					}
				}
			}
			break;
		case 3:
			if (!func_245(Local_51.f_25[0]->f_1, Global_35))
			{
				iLocal_47 = 0;
				return;
			}
			if (func_106(Local_51.f_25[0]->f_174, Global_35, 1, 9f, 0) && !is_ped_in_any_vehicle(Local_51.f_25[0]->f_174, false))
			{
				if (!_0xa2cac9def0195e6f(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, func_246()))
					{
						Local_51.f_2414++;
						func_100(&(Local_51.f_2173));
						task_look_at_entity(Local_51.f_25[0]->f_174, Global_35, -1, 0, 51, 0);
						task_aim_gun_at_entity(Local_51.f_25[0]->f_174, Global_35, -1, 0, 1);
						if (Local_51.f_2414 < 3)
						{
							iLocal_47 = 5;
						}
						else
						{
							iLocal_47 = 8;
						}
					}
				}
			}
			break;
		case 4:
			if (func_26(&(Local_51.f_2173)) > 10f)
			{
				if (func_106(Local_51.f_25[0]->f_174, Global_35, 1, 9f, 0))
				{
					func_100(&(Local_51.f_2173));
					if (!func_108(Local_51.f_25[0]->f_174, 1630799643))
					{
						task_aim_gun_at_entity(Local_51.f_25[0]->f_174, Global_35, -1, 0, 1);
					}
					iLocal_47 = 2;
				}
				else
				{
					iLocal_47 = 0;
				}
			}
			break;
		case 5:
			if (func_26(&(Local_51.f_2173)) > 10f)
			{
				if (func_106(Local_51.f_25[0]->f_174, Global_35, 1, 9f, 0))
				{
					func_100(&(Local_51.f_2173));
					if (!func_108(Local_51.f_25[0]->f_174, 1630799643))
					{
						task_aim_gun_at_entity(Local_51.f_25[0]->f_174, Global_35, -1, 0, 1);
					}
					iLocal_47 = 3;
				}
				else
				{
					iLocal_47 = 0;
				}
			}
			break;
		case 8:
			if (!func_247(1) || func_26(&(Local_51.f_2173)) > 3f)
			{
				if (!func_10(32768))
				{
					func_72(32768);
				}
				if (func_25(&(Local_51.f_2173)))
				{
					func_42(&(Local_51.f_2173));
				}
				iLocal_47 = 9;
			}
			break;
	}
}

bool func_99()
{
	sVar0 = "CR_LOGWAGON";
	sVar1 = "script@proc@robberies@coach@playerremoveblock";
	iVar2 = 1913851978;
	*vVar3[0] = { -1521.8f, 151.86f, 100.47f };
	*vVar3[1] = { -1520.33f, 151.68f, 100.45f };
	vVar10 = { get_offset_from_entity_in_world_coords(Local_51.f_2278, 2.4f, 2f, 0f) };
	vVar13 = { get_offset_from_entity_in_world_coords(Local_51.f_2278, -2.4f, 2f, 0f) };
	if (iVar2555 == 0)
	{
		sVar16 = "PB_L_FIRST";
		sVar17 = "PB_R_FIRST";
	}
	else
	{
		sVar16 = "PB_L_SUCCESS";
		sVar17 = "PB_R_SUCCESS";
	}
	switch (Local_51.f_2411)
	{
		case 0:
			request_model(iVar2, false);
			Local_51.f_2411 = 1;
			break;
		case 1:
			if (has_model_loaded(iVar2))
			{
				if (!does_entity_exist(&(Local_51.f_2280[0])))
				{
					Local_51.f_2280[0] = create_object_no_offset(iVar2, *vVar3[0], true, true, false, true);
				}
				if (!does_entity_exist(&(Local_51.f_2280[1])))
				{
					Local_51.f_2280[1] = create_object_no_offset(iVar2, *vVar3[1], true, true, false, true);
				}
				if (!func_240(Local_51.f_2276))
				{
					Local_51.f_2276 = func_248(sVar0, -719620017, vVar10, 1.8f, 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				}
				if (!func_240(Local_51.f_2277))
				{
					Local_51.f_2277 = func_248(sVar0, -719620017, vVar13, 1.8f, 3, 1, 0, 0, 570, 4000, 10, 1073741824, 0, 1704213876, 0);
				}
				Local_51.f_2411 = 33;
			}
			break;
		case 33:
			if (!_does_anim_scene_exist(Local_51.f_2410))
			{
				Local_51.f_2410 = _create_anim_scene(sVar1, 0, 0, false, true);
			}
			if ((((func_109(Local_51.f_2410, "PB_ENTER_L_NEW") && func_109(Local_51.f_2410, "PB_ENTER_R_NEW")) && func_109(Local_51.f_2409, "PB_PUSH_ONE")) && func_109(Local_51.f_2409, "PB_PUSH_SUCCESS_ENTER")) && func_109(Local_51.f_2409, "pbwagons"))
			{
				freeze_entity_position(Local_51.f_2278, false);
				set_anim_scene_entity(Local_51.f_2409, "LOGWAGON", Local_51.f_2278, 0);
				_set_anim_scene_playback_list_bool(Local_51.f_2409, "pbwagons", true);
				start_anim_scene(Local_51.f_2409);
				if (does_entity_exist(&(Local_51.f_2280[0])))
				{
					set_entity_no_collision_entity(&(Local_51.f_2280[0]), Local_51.f_2278, false);
					func_249(Local_51.f_2410, "Block_L", &(Local_51.f_2280[0]), "PB_ENTER_L_NEW");
				}
				if (does_entity_exist(&(Local_51.f_2280[1])))
				{
					set_entity_no_collision_entity(&(Local_51.f_2280[1]), Local_51.f_2278, false);
					func_249(Local_51.f_2410, "Block_R", &(Local_51.f_2280[1]), "PB_ENTER_R_NEW");
				}
				func_250(Local_51.f_2410, "player", "PB_ENTER_L_NEW", &vLocal_2558, &vLocal_2564);
				func_250(Local_51.f_2410, "player", "PB_ENTER_R_NEW", &vLocal_2561, &vLocal_2567);
				func_250(Local_51.f_2409, "PUSH_PED_A", "PB_PUSH_ONE", &vLocal_2570, &vLocal_2573);
				func_250(Local_51.f_2409, "PUSH_PED_B", "PB_PUSH_SUCCESS_ENTER", &vLocal_2576, &vLocal_2579);
				Local_51.f_2411 = 2;
			}
			break;
		case 2:
			Local_51.f_2410 = _create_anim_scene(sVar1, 2, 0, false, true);
			Local_51.f_2411 = 3;
			break;
		case 3:
			if ((func_116(Global_35) || _is_ped_carrying(Global_35)) || is_ped_in_any_vehicle(Global_35, true))
			{
				if (func_240(Local_51.f_2276))
				{
					func_251(Local_51.f_2276, 0, 1);
					func_252(Local_51.f_2276, 0, 1);
				}
				if (func_240(Local_51.f_2277))
				{
					func_251(Local_51.f_2277, 0, 1);
					func_252(Local_51.f_2277, 0, 1);
				}
			}
			else
			{
				if (func_240(Local_51.f_2276))
				{
					func_251(Local_51.f_2276, 1, 1);
					func_252(Local_51.f_2276, 1, 1);
				}
				if (func_240(Local_51.f_2277))
				{
					func_251(Local_51.f_2277, 1, 1);
					func_252(Local_51.f_2277, 1, 1);
				}
			}
			if (func_240(Local_51.f_2276))
			{
				if (func_253(Local_51.f_2276, 1))
				{
					func_92(&(Local_51.f_2276), 1, 1);
					_0x4820a6939d7cef28(Global_35, 0);
					_hide_ped_weapons(Global_35, 2, false);
					task_swap_weapon(Global_35, 0, 1, 0, 0);
					if (func_240(Local_51.f_2277))
					{
						Local_51.f_2411 = 16;
					}
					else
					{
						iLocal_2557 = 1;
						Local_51.f_2411 = 16;
					}
				}
			}
			if (func_240(Local_51.f_2277))
			{
				if (func_253(Local_51.f_2277, 1))
				{
					func_92(&(Local_51.f_2277), 1, 1);
					_0x4820a6939d7cef28(Global_35, 0);
					_hide_ped_weapons(Global_35, 2, false);
					task_swap_weapon(Global_35, 0, 1, 0, 0);
					if (func_240(Local_51.f_2276))
					{
						Local_51.f_2411 = 24;
					}
					else
					{
						iLocal_2557 = 1;
						Local_51.f_2411 = 24;
					}
				}
			}
			break;
		case 34:
			task_follow_nav_mesh_to_coord(Global_35, vLocal_2558, 1f, 20000, 0.25f, 0, vLocal_2564.z);
			Local_51.f_2411 = 35;
			break;
		case 35:
			if (!func_108(Global_35, 713668775) || func_254(Global_35, vLocal_2558, vLocal_2564.z, 0.5f, 45f, 1))
			{
				Local_51.f_2411 = 16;
			}
			break;
		case 38:
			task_follow_nav_mesh_to_coord(Global_35, vLocal_2558, 1f, 20000, 0.25f, 0, vLocal_2564.z);
			Local_51.f_2411 = 39;
			break;
		case 39:
			if (!func_108(Global_35, 713668775))
			{
				Local_51.f_2411 = 16;
			}
			break;
		case 16:
			if (get_current_ped_weapon(Global_35, &iVar18, true, 0, false) && iVar18 == -1569615261)
			{
				if (func_109(Local_51.f_2410, "PB_ENTER_L_NEW"))
				{
					set_anim_scene_entity(Local_51.f_2410, "player", Global_35, 0);
					set_anim_scene_entity(Local_51.f_2410, "Block_L", &(Local_51.f_2280[0]), 0);
					set_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
					task_enter_anim_scene(Global_35, Local_51.f_2410, "player", "PB_ENTER_L_NEW", 1069379748, 1, 0, 20000, -1082130432);
					Local_51.f_2411 = 17;
				}
			}
			break;
		case 17:
			if (_is_anim_scene_started(Local_51.f_2410, false))
			{
				Local_51.f_2411 = 18;
			}
			break;
		case 18:
			if (func_109(Local_51.f_2410, "PB_PULL_L"))
			{
				set_anim_scene_bool(Local_51.f_2410, "WAIT_BOOL_L", false, false);
				set_anim_scene_bool(Local_51.f_2410, "PULL_BOOL_L", false, false);
				Local_51.f_2411 = 19;
			}
			break;
		case 19:
			if (_get_anim_scene_progress(Local_51.f_2410) > 0.95f)
			{
				func_110(Local_51.f_2410, "PB_PULL_L");
				iLocal_2542 = func_255("CR_LOGWAGON2", 1367437629, 9, 570, 4000, 6, 2f, 0, 1065353216, 0, 3, 1704213876, 0);
				Local_51.f_2411 = 20;
			}
			break;
		case 20:
			if (func_256(iVar2540, 1))
			{
				func_92(&iLocal_2542, 1, 1);
				set_anim_scene_bool(Local_51.f_2410, "WAIT_BOOL_L", true, false);
				uLocal_2556 = uVar2554;
				Local_51.f_2411 = 21;
			}
			if (!get_anim_scene_bool(Local_51.f_2410, "WAIT_BOOL_L"))
			{
				if (func_257(iVar2540, 1) > 0f)
				{
					set_anim_scene_bool(Local_51.f_2410, "WAIT_BOOL_L", true, false);
				}
			}
			break;
		case 21:
			if (func_109(Local_51.f_2410, sVar16))
			{
				if (_get_anim_scene_progress(Local_51.f_2410) > 0.95f)
				{
					func_110(Local_51.f_2410, sVar16);
					Local_51.f_2411 = 22;
				}
			}
			break;
		case 22:
			if (iVar2555 == 1)
			{
				if (_get_anim_scene_progress(Local_51.f_2410) > 0.97f)
				{
					Local_51.f_2411 = 32;
					freeze_entity_position(Local_51.f_2278, false);
				}
				func_258();
			}
			else if (_get_anim_scene_progress(Local_51.f_2410) > 0.95f)
			{
				_delete_anim_scene(Local_51.f_2410);
				Local_51.f_2411 = 2;
			}
			break;
		case 36:
			task_follow_nav_mesh_to_coord(Global_35, vLocal_2561, 1f, 20000, 0.25f, 0, vLocal_2567.z);
			Local_51.f_2411 = 37;
			break;
		case 37:
			if (!func_108(Global_35, 713668775) || func_254(Global_35, vLocal_2561, vLocal_2567.z, 0.5f, 45f, 1))
			{
				Local_51.f_2411 = 24;
			}
			break;
		case 40:
			task_follow_nav_mesh_to_coord(Global_35, vLocal_2561, 1f, 20000, 0.25f, 0, vLocal_2567.z);
			Local_51.f_2411 = 41;
			break;
		case 41:
			if (!func_108(Global_35, 713668775))
			{
				Local_51.f_2411 = 24;
			}
			break;
		case 24:
			if (get_current_ped_weapon(Global_35, &iVar18, true, 0, false) && iVar18 == -1569615261)
			{
				if (func_109(Local_51.f_2410, "PB_ENTER_R_NEW"))
				{
					set_anim_scene_entity(Local_51.f_2410, "player", Global_35, 0);
					set_anim_scene_entity(Local_51.f_2410, "Block_R", &(Local_51.f_2280[1]), 0);
					set_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
					task_enter_anim_scene(Global_35, Local_51.f_2410, "player", "PB_ENTER_R_NEW", 1069379748, 1, 0, 20000, -1082130432);
					Local_51.f_2411 = 25;
				}
			}
			break;
		case 25:
			if (_is_anim_scene_started(Local_51.f_2410, false))
			{
				Local_51.f_2411 = 26;
			}
			break;
		case 26:
			if (func_109(Local_51.f_2410, "PB_PULL_R"))
			{
				set_anim_scene_bool(Local_51.f_2410, "WAIT_BOOL_R", false, false);
				set_anim_scene_bool(Local_51.f_2410, "PULL_BOOL_R", false, false);
				Local_51.f_2411 = 27;
			}
			break;
		case 27:
			if (_get_anim_scene_progress(Local_51.f_2410) > 0.95f)
			{
				func_110(Local_51.f_2410, "PB_PULL_R");
				iLocal_2542 = func_255("CR_LOGWAGON2", 1367437629, 9, 570, 4000, 6, 2f, 0, 1065353216, 0, 3, 1704213876, 0);
				Local_51.f_2411 = 28;
			}
			break;
		case 28:
			if (func_256(iVar2540, 1))
			{
				func_92(&iLocal_2542, 1, 1);
				set_anim_scene_bool(Local_51.f_2410, "WAIT_BOOL_R", true, false);
				uLocal_2556 = uVar2554;
				Local_51.f_2411 = 29;
			}
			if (!get_anim_scene_bool(Local_51.f_2410, "WAIT_BOOL_R"))
			{
				if (func_257(iVar2540, 1) > 0f)
				{
					set_anim_scene_bool(Local_51.f_2410, "WAIT_BOOL_R", true, false);
				}
			}
			break;
		case 29:
			if (func_109(Local_51.f_2410, sVar17))
			{
				if (_get_anim_scene_progress(Local_51.f_2410) > 0.95f)
				{
					func_110(Local_51.f_2410, sVar17);
					Local_51.f_2411 = 30;
				}
			}
			break;
		case 30:
			if (iVar2555 == 1)
			{
				if (_get_anim_scene_progress(Local_51.f_2410) > 0.3f)
				{
					remove_anim_scene_entity(Local_51.f_2410, "player", Global_35);
				}
				if (_get_anim_scene_progress(Local_51.f_2410) > 0.97f)
				{
					Local_51.f_2411 = 32;
					freeze_entity_position(Local_51.f_2278, false);
				}
				func_258();
			}
			else if (_get_anim_scene_progress(Local_51.f_2410) > 0.95f)
			{
				_delete_anim_scene(Local_51.f_2410);
				Local_51.f_2411 = 2;
			}
			break;
		case 32:
			freeze_entity_position(Local_51.f_2278, true);
			return true;
		case 4:
			if (func_240(Local_51.f_2277))
			{
				func_251(Local_51.f_2277, 0, 1);
				func_252(Local_51.f_2277, 0, 1);
			}
			if (func_109(Local_51.f_2410, "PB_L_FIRST"))
			{
				set_anim_scene_entity(Local_51.f_2410, "player", Global_35, 0);
				set_anim_scene_entity(Local_51.f_2410, "Block_L", &(Local_51.f_2280[0]), 0);
				set_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
				task_enter_anim_scene(Global_35, Local_51.f_2410, "player", "PB_L_FIRST", 1069379748, 0, 0, 20000, -1082130432);
				Local_51.f_2411 = 5;
			}
			break;
		case 5:
			if (func_240(Local_51.f_2277))
			{
				func_251(Local_51.f_2277, 0, 1);
				func_252(Local_51.f_2277, 0, 1);
			}
			if (!_0x3b393716c3fd8237(Global_35))
			{
				func_110(Local_51.f_2410, "PB_L_FIRST");
				Local_51.f_2411 = 6;
			}
			break;
		case 6:
			if (func_240(Local_51.f_2277))
			{
				func_251(Local_51.f_2277, 0, 1);
				func_252(Local_51.f_2277, 0, 1);
			}
			if (_get_anim_scene_progress(Local_51.f_2410) > 0.99f)
			{
				_delete_anim_scene(Local_51.f_2410);
				Local_51.f_2410 = -1;
				Local_51.f_2411 = 2;
			}
			break;
		case 7:
			if (func_240(Local_51.f_2276))
			{
				func_251(Local_51.f_2276, 0, 1);
				func_252(Local_51.f_2276, 0, 1);
			}
			if (func_109(Local_51.f_2410, "PB_R_FIRST"))
			{
				set_anim_scene_entity(Local_51.f_2410, "player", Global_35, 0);
				set_anim_scene_entity(Local_51.f_2410, "Block_R", &(Local_51.f_2280[1]), 0);
				set_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
				task_enter_anim_scene(Global_35, Local_51.f_2410, "player", "PB_R_FIRST", 1069379748, 0, 0, 20000, -1082130432);
				Local_51.f_2411 = 8;
			}
			break;
		case 8:
			if (func_240(Local_51.f_2276))
			{
				func_251(Local_51.f_2276, 0, 1);
				func_252(Local_51.f_2276, 0, 1);
			}
			if (!_0x3b393716c3fd8237(Global_35))
			{
				func_110(Local_51.f_2410, "PB_R_FIRST");
				_0xae6ada8fe7e84acc(Local_51.f_2410, "PB_R_FIRST");
				Local_51.f_2411 = 9;
			}
			break;
		case 9:
			if (func_240(Local_51.f_2276))
			{
				func_251(Local_51.f_2276, 0, 1);
				func_252(Local_51.f_2276, 0, 1);
			}
			if (_get_anim_scene_progress(Local_51.f_2410) > 0.99f)
			{
				_delete_anim_scene(Local_51.f_2410);
				Local_51.f_2410 = -1;
				Local_51.f_2411 = 2;
			}
			break;
		case 10:
			if (func_109(Local_51.f_2410, "PB_L_SUCCESS"))
			{
				set_anim_scene_entity(Local_51.f_2410, "player", Global_35, 0);
				set_anim_scene_entity(Local_51.f_2410, "Block_L", &(Local_51.f_2280[0]), 0);
				set_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
				task_enter_anim_scene(Global_35, Local_51.f_2410, "player", "PB_L_SUCCESS", 1069379748, 0, 0, 20000, -1082130432);
				Local_51.f_2411 = 11;
			}
			break;
		case 11:
			if (!_0x3b393716c3fd8237(Global_35))
			{
				func_110(Local_51.f_2410, "PB_L_SUCCESS");
				_0xae6ada8fe7e84acc(Local_51.f_2410, "PB_L_SUCCESS");
				Local_51.f_2411 = 12;
			}
			break;
		case 12:
			if (_get_anim_scene_progress(Local_51.f_2410) > 0.640305f)
			{
				remove_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278);
				iLocal_2543 = 1;
				return true;
			}
			break;
		case 13:
			if (func_109(Local_51.f_2410, "PB_R_SUCCESS"))
			{
				set_anim_scene_entity(Local_51.f_2410, "player", Global_35, 0);
				set_anim_scene_entity(Local_51.f_2410, "Block_R", &(Local_51.f_2280[1]), 0);
				set_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278, 0);
				task_enter_anim_scene(Global_35, Local_51.f_2410, "player", "PB_R_SUCCESS", 1069379748, 0, 0, 20000, -1082130432);
				Local_51.f_2411 = 14;
			}
			break;
		case 14:
			if (!_0x3b393716c3fd8237(Global_35))
			{
				func_110(Local_51.f_2410, "PB_R_SUCCESS");
				_0xae6ada8fe7e84acc(Local_51.f_2410, "PB_R_SUCCESS");
				Local_51.f_2411 = 15;
			}
			break;
		case 15:
			if (_get_anim_scene_progress(Local_51.f_2410) > 0.258042f)
			{
				remove_anim_scene_entity(Local_51.f_2410, "wagon", Local_51.f_2278);
				iLocal_2543 = 0;
				return true;
			}
			break;
	}
	return false;
}

void func_100(var uParam0)
{
	func_259(uParam0, 0f);
}

void func_101(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_260(uParam0->f_25[iVar0]);
		iVar0++;
	}
}

void func_102(int iParam0, char* sParam1, bool bParam2)
{
	func_261(sParam1);
	if (func_24(iParam0) && !bParam2)
	{
		func_262(sParam1, 7500, 0, 1, 0, 0, -1, -1, 0);
		_uilog_clear_has_displayed_cached_objective();
	}
	if (func_24(iParam0))
	{
		func_263(iParam0, sParam1, sParam1, -1082130432);
	}
}

Vector3 func_103(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_104(var uParam0, vector3 vParam1, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (!_0xd89504d9d7d5057d(&vParam1))
	{
		bVar0 = create_new_scripted_conversation(&vParam1);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_264(vParam1, uParam0);
		if (bParam6)
		{
			preload_script_conversation(&vParam1, true, true, bParam7);
		}
		else
		{
			start_script_conversation(&vParam1, true, true, bParam7);
		}
		if (bParam4)
		{
			_0x40ca665ab9d8d505(&vParam1, iParam5);
		}
	}
	return bVar0;
}

bool func_105(int iParam0)
{
	return _0xa2cac9def0195e6f(iParam0);
}

bool func_106(int iParam0, int iParam1, bool bParam2, float fParam3, bool bParam4)
{
	if (bParam2)
	{
		if (!func_94(iParam0, iParam1, 0f))
		{
			return false;
		}
	}
	if (!func_229(iParam0, iParam1, fParam3, 1))
	{
		return false;
	}
	if (bParam4 && is_entity_a_ped(iParam1))
	{
		return _0x9d9473cb82d83a30(iParam0, get_ped_index_from_entity_index(iParam1), 0) == 1;
	}
	return _0x7f9b9791d4cb71f6(iParam0, iParam1, bParam2, 0) == 1;
}

bool func_107()
{
	if (func_175(&uVar0) || func_265())
	{
		return true;
	}
	return false;
}

bool func_108(int iParam0, int iParam1)
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

bool func_109(int iParam0, char* sParam1)
{
	if (!_does_anim_scene_exist(iParam0))
	{
		return false;
	}
	if (!_is_anim_scene_loading(iParam0, true) && !_is_anim_scene_loaded(iParam0, true, false))
	{
		load_anim_scene(iParam0);
	}
	if (!_is_anim_scene_loaded(iParam0, true, false))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	if (!_0xa9016536015de29d(iParam0, sParam1))
	{
		return false;
	}
	if (_0x23e33cb9f4a3f547(iParam0, sParam1))
	{
		return true;
	}
	if (!_0x0df57f86fe71dbe5(iParam0, sParam1))
	{
		if (_0xdf7b5144e25cd3fe(iParam0, sParam1))
		{
		}
	}
	return false;
}

void func_110(int iParam0, char* sParam1)
{
	_set_anim_scene_playback_list_bool(iParam0, sParam1, true);
	if (!_is_anim_scene_started(iParam0, false))
	{
		start_anim_scene(iParam0);
	}
}

bool func_111(int iParam0, int iParam1)
{
	vVar0 = { func_244(iParam0, iParam1) };
	if (func_266(&vVar0))
	{
		return true;
	}
	return false;
}

void func_112(var uParam0, int iParam1, bool bParam2)
{
	if (func_15(uParam0, 131072))
	{
		func_113(uParam0, 131072);
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_267(uParam0->f_25[iVar0], iParam1, bParam2);
		iVar0++;
	}
}

void func_113(var uParam0, int iParam1)
{
	uParam0->f_2207 = (uParam0->f_2207 - (uParam0->f_2207 && iParam1));
}

bool func_114(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return true;
	}
	return false;
}

int func_115(int iParam0, int iParam1)
{
	iVar0 = func_268(iParam0, iParam1);
	if (does_entity_exist(iVar0) && is_entity_a_ped(iVar0))
	{
		return get_ped_index_from_entity_index(iVar0);
	}
	return 0;
}

bool func_116(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_117(var uParam0, int iParam1, float fParam2)
{
	if (get_entity_speed(uParam0->f_1) > 0.5f)
	{
		return;
	}
	if (!func_25(&(uParam0->f_9.f_9)))
	{
		return;
	}
	if (!func_205(uParam0->f_9, 0, 1))
	{
		return;
	}
	if (func_269(&(uParam0->f_9.f_9), fParam2))
	{
		set_ped_combat_attributes(uParam0->f_9, 1, false);
		set_ped_combat_attributes(uParam0->f_9, 17, true);
		open_sequence_task(&iVar0);
		if (is_ped_in_any_vehicle(uParam0->f_9, false))
		{
			task_leave_any_vehicle(0, 200, 0);
		}
		task_hands_up(0, -1, iParam1, -1, true);
		close_sequence_task(iVar0);
		task_perform_sequence(uParam0->f_9, iVar0);
		clear_sequence_task(&iVar0);
	}
}

void func_118(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	if (get_entity_speed(uParam0->f_1) > 0.5f)
	{
		return;
	}
	if (!func_25(&(uParam0->f_174.f_75)))
	{
		return;
	}
	if (!func_205(uParam0->f_174, 0, 1))
	{
		return;
	}
	if (func_269(&(uParam0->f_174.f_75), fParam2))
	{
		set_ped_config_flag(uParam0->f_174, 205, true);
		set_ped_combat_attributes(uParam0->f_174, 1, false);
		set_ped_combat_attributes(uParam0->f_174, 17, true);
		open_sequence_task(&iVar0);
		if (is_ped_in_any_vehicle(uParam0->f_174, false))
		{
			task_leave_any_vehicle(0, 0, 64);
		}
		if (bParam3)
		{
			task_smart_flee_ped(0, iParam1, 200f, -1, 0, 1077936128, 0);
		}
		else
		{
			task_hands_up(0, -1, iParam1, -1, true);
		}
		close_sequence_task(iVar0);
		task_perform_sequence(uParam0->f_174, iVar0);
		clear_sequence_task(&iVar0);
	}
}

bool func_119(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!func_270(uParam0, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_120(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_121(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_271(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_272(Global_1935630, 4194304);
	}
	enable_dispatch_service(15, bParam0);
	enable_dispatch_service(6, bParam0);
	enable_dispatch_service(1, bParam0);
	enable_dispatch_service(16, bParam0);
	enable_dispatch_service(2, bParam0);
	enable_dispatch_service(3, bParam0);
	enable_dispatch_service(4, bParam0);
	enable_dispatch_service(5, bParam0);
	enable_dispatch_service(7, bParam0);
	enable_dispatch_service(9, bParam0);
	enable_dispatch_service(10, bParam0);
	enable_dispatch_service(11, bParam0);
	enable_dispatch_service(12, bParam0);
	enable_dispatch_service(13, bParam0);
	enable_dispatch_service(14, bParam0);
}

void func_122(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_273(vVar0, vVar3, 0f) };
	vVar9 = { func_274(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

void func_123(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_273(vVar0, vVar3, 0f) };
	vVar9 = { func_274(vVar0, vVar3, 0f) };
	if (iParam4 == 1)
	{
		set_roads_back_to_original(vVar6, vVar9, iParam5, 1);
	}
	else if (iParam6 == 5)
	{
		set_roads_in_area(vVar6, vVar9, iParam4, 1, iParam5);
	}
	else
	{
		_0xafe2ae66f6251c66(vVar6, vVar9, iParam6, 1);
	}
}

bool func_124(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_125(var uParam0)
{
	return func_124(*uParam0, 2);
}

float func_126()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_127(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (_0x5463c962bc7777c3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x5463c962bc7777c3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (_0x758f081db204ddde(iParam0))
	{
		return true;
	}
	return false;
}

void func_128(struct<6> Param0)
{
	func_275(Param0, iLocal_24, &Local_51);
	if (iLocal_26 == 3 && !func_10(4096))
	{
		func_276();
		func_277();
	}
	Global_1393237->f_199 = 1;
	add_relationship_group("COACH ROBBERY CONVOY", &iLocal_46);
	set_relationship_between_groups(0, 1862763509, iLocal_46);
	set_relationship_between_groups(0, iLocal_46, 1862763509);
	set_relationship_between_groups(0, -1247684992, iLocal_46);
	set_relationship_between_groups(0, iLocal_46, -1247684992);
	set_relationship_between_groups(0, 1030835986, iLocal_46);
	set_relationship_between_groups(0, iLocal_46, 1030835986);
	set_ped_config_flag(Global_35, 141, true);
}

void func_129(int iParam0)
{
	iLocal_28 = iParam0;
}

void func_130(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_278(uParam0, iParam2);
	func_279(iParam3);
	func_280(iParam1);
}

bool func_131(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (!func_281(uParam0, iParam2))
	{
		return false;
	}
	if (!func_282(iParam3))
	{
		return false;
	}
	if (!func_283(iParam1))
	{
		return false;
	}
	return true;
}

bool func_132(var uParam0, int iParam1)
{
	iVar0 = func_284(uParam0, iParam1);
	_0xed9582b3da8f02b4(iVar0);
	if (_0x313778edca9158e2() >= iVar0)
	{
		return true;
	}
	return false;
}

void func_133(var uParam0)
{
	uParam0->f_4 = _create_volume_sphere(*uParam0, 0f, 0f, 0f, 130f, 130f, 60f);
	func_285(uParam0->f_4, "CoachRobRestrictVolume", 1, 0, 0, 0, -1082130432);
}

bool func_134(int iParam0)
{
	switch (func_286())
	{
		case 1:
			if (!func_25(&(Local_51.f_2125)))
			{
				if (does_entity_exist(get_last_driven_vehicle()))
				{
					_set_entity_coords_and_heading(get_last_driven_vehicle(), func_287(), func_288(), true, false, true);
				}
				func_291(Local_51.f_25[0], func_289(iParam0), func_290(iParam0));
				func_100(&(Local_51.f_2125));
			}
			if (func_26(&(Local_51.f_2125)) > 1f)
			{
				if (!func_10(4096))
				{
					func_292(iLocal_38, Local_51.f_25[0], &Local_51, 0);
				}
				func_139(iParam0);
				func_137(2);
				func_46(&(Global_1392388->f_10[iParam0]->f_10));
				func_18(1);
				func_19(0);
				func_293(Local_51.f_25[0], 11);
				func_153(5);
				func_4(&Local_51, 1);
				func_4(&Local_51, 64);
				func_4(&Local_51, 2);
				func_72(1);
				func_72(2);
				func_294(&Local_51, iLocal_25);
				set_ped_into_vehicle(Global_35, Local_51.f_25[0]->f_1, -1);
				Local_51.f_25[0]->f_631 = { get_entity_coords(Local_51.f_25[0]->f_1, true, false) };
				func_295(&(Local_51.f_25[0]->f_1), 4);
				func_7(1);
				func_296(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
				Local_51.f_2424 = vdist(Global_36, Local_51.f_2210);
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(0f, 1f);
				return true;
			}
			break;
		case 2:
			if (!bVar2552)
			{
				if (func_297(&(Local_51.f_2385), func_289(iParam0), func_290(iParam0)))
				{
					iLocal_2555 = 1;
				}
				else
				{
					return false;
				}
			}
			if (func_53(Local_51.f_2385, 0))
			{
				if (!is_ped_on_mount(Global_35))
				{
					_set_entity_coords_and_heading(Local_51.f_2385, func_289(iParam0), func_290(iParam0), true, false, true);
					_set_ped_on_mount(Global_35, Local_51.f_2385, -1, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
				else
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(-8f, 1f);
					func_7(1);
					func_296(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
				}
			}
			else
			{
				_set_entity_coords_and_heading(Global_35, func_289(iParam0), func_290(iParam0), true, false, true);
				_0x2208438012482a1a(Global_35, false, false);
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(-8f, 1f);
				func_7(1);
				func_296(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
			}
			func_298(&Local_51, iLocal_25);
			func_9(1);
			func_18(1);
			func_19(1);
			func_20(3);
			return true;
		default:
			if (!func_25(&(Local_51.f_2125)))
			{
				if (does_entity_exist(get_last_driven_vehicle()))
				{
					_set_entity_coords_and_heading(get_last_driven_vehicle(), func_287(), func_288(), true, false, true);
				}
				func_100(&(Local_51.f_2125));
			}
			if (!bVar2552)
			{
				if (func_297(&(Local_51.f_2385), func_289(iParam0), func_290(iParam0)))
				{
					iLocal_2555 = 1;
				}
				else
				{
					return false;
				}
			}
			if (func_53(Local_51.f_2385, 0))
			{
				if (!is_ped_on_mount(Global_35))
				{
					_set_entity_coords_and_heading(Local_51.f_2385, func_289(iParam0), func_290(iParam0), true, false, true);
					_set_ped_on_mount(Global_35, Local_51.f_2385, -1, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
				else
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(-8f, 1f);
					func_7(1);
					func_296(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
					return true;
				}
			}
			else
			{
				_set_entity_coords_and_heading(Global_35, func_289(iParam0), func_290(iParam0), true, false, true);
				_0x2208438012482a1a(Global_35, false, false);
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(-8f, 1f);
				func_7(1);
				func_296(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
				return true;
			}
			if (func_26(&(Local_51.f_2125)) > 5f)
			{
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(-8f, 1f);
				func_7(1);
				func_296(func_289(iParam0), 500f, 1, 0, 0, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

int func_135(int iParam0)
{
	StringCopy(&cVar0, func_63(iParam0), 8);
	return get_hash_key(&cVar0);
}

void func_136()
{
	func_299(0);
	display_hud(true);
	display_radar(true);
	func_300(0, 0);
	if (!is_screen_faded_in())
	{
		do_screen_fade_in(500);
	}
}

void func_137(int iParam0)
{
	iLocal_31 = iParam0;
}

float func_138(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return 70f;
		default:
			break;
	}
	return 75f;
}

void func_139(int iParam0)
{
	if (!func_199(iParam0))
	{
		return;
	}
	Global_40.f_9146.f_4[iParam0] = 2;
	if (!func_24(iParam0))
	{
		return;
	}
	if (func_301(Global_1392388->f_10[iParam0]->f_8) != 1)
	{
		func_203(Global_1392388->f_10[iParam0]->f_8, 0, 2);
		func_302(Global_1392388->f_10[iParam0]->f_8, 1);
	}
	func_303(Global_1392388->f_10[iParam0]->f_8, 1, 1);
	if (func_301(Global_1392388->f_10[iParam0]->f_8) != 4)
	{
		func_272(Global_1935630, 16);
	}
}

struct<4> func_140(int iParam0)
{
	Var0 = { func_289(iLocal_25) };
	Var0.f_3 = func_290(iLocal_25);
	return Var0;
}

int func_141(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_304(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_305(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_306(0, 0);
		if (func_307(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_308(1, 0);
		}
	}
	else
	{
		func_308(1, 0);
	}
	func_210(0);
	func_309(0, vParam0, uParam3);
	return 1;
}

void func_142(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_220(iParam0) == 1)
	{
		cVar0 = func_311(func_310(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_220(iParam0) == 8)
	{
		cVar0 = func_313(func_312(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_304(1, 1);
	func_309(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_211(0);
	func_212(0);
	func_214(1f);
}

void func_143(struct<4> Param0, var uParam4, var uParam5)
{
	if (func_10(4) && !func_314(129))
	{
		return;
	}
	if (!does_blip_exist(Local_51.f_2208))
	{
		Local_51.f_2208 = _blip_add_for_radius(-1559907306, func_315(Param0.f_3), func_138(Param0.f_3));
		func_316(Local_51.f_2208, 0);
	}
}

void func_144(int iParam0)
{
	if (func_10(4))
	{
		return;
	}
	switch (iLocal_26)
	{
		case 0:
			func_102(iParam0, "CR_O_PREPAREP", 0);
			break;
		case 1:
			func_102(iParam0, "CR_O_PREPAREP", 0);
			break;
		case 2:
			func_102(iParam0, "CR_O_PREPARESP", 0);
			break;
		case 3:
			func_102(iParam0, "CR_O_PREPAREWP", 0);
			break;
	}
}

void func_145(var uParam0, int iParam1, struct<6> Param2)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return;
	}
	if (uParam0->f_612)
	{
		func_317(uParam0, 0);
		return;
	}
	if (iParam1 == 0)
	{
		if (!func_10(1))
		{
			if (func_24(iLocal_25))
			{
				if (does_blip_exist(uParam0->f_1.f_2))
				{
					Var1.f_4 = -1;
					Var1.f_8 = 2;
					Var1.f_9 = 1;
					Var1.f_10 = 1;
					Var1.f_11 = 1;
					Var1.f_13 = 1;
					Var1.f_14 = 2;
					Var1.f_15 = 2;
					Var1.f_16 = 3;
					Var1.f_19 = 3;
					Var1.f_20 = 1;
					Var1.f_21 = 3;
					Var1.f_22 = 3;
					Var1.f_7 = 500;
					Var1.f_3 = uParam0->f_1;
					_0x66f9eb44342bb4c5(Global_35, &Var1);
				}
			}
		}
	}
	if (Param2.f_3 == 10)
	{
		if (get_number_of_fires_in_range(get_entity_coords(uParam0->f_1, true, false), 10f) > 0)
		{
			stop_fire_in_range(get_entity_coords(uParam0->f_1, true, false), 10f);
		}
	}
	if (iParam1 == 0 && func_318())
	{
		func_319(iParam1);
	}
	if (!uParam0->f_628)
	{
		if (func_320(uParam0))
		{
			uParam0->f_628 = 1;
		}
	}
	func_321(uParam0, iParam1);
	func_322(uParam0, iParam1);
	func_323(uParam0);
	func_324(&(uParam0->f_9), iParam1, uParam0->f_1.f_3);
	func_325(uParam0);
	if (((iLocal_25 == 8 || iLocal_25 == 9) || iLocal_25 == 10) || iLocal_25 == 11)
	{
		if (!func_10(1))
		{
			func_326(uParam0->f_1);
		}
	}
	if (!func_15(&Local_51, 65536))
	{
		if (!func_15(&Local_51, 16))
		{
			if (func_15(&Local_51, 2))
			{
				if (func_53(uParam0->f_9, 1))
				{
					if (func_183(Global_35, uParam0->f_9, 1, 1) < 100f)
					{
						func_163(&(uParam0->f_9), &(uParam0->f_9.f_5), 1, 0, 0);
					}
					else
					{
						func_46(&(uParam0->f_9.f_5));
					}
				}
				if (func_53(uParam0->f_174, 1))
				{
					if (func_183(Global_35, uParam0->f_174, 1, 1) < 100f)
					{
						func_163(&(uParam0->f_174), &(uParam0->f_174.f_5), 1, 0, 0);
					}
					else
					{
						func_46(&(uParam0->f_174.f_5));
					}
				}
				iVar26 = 0;
				while (iVar26 < uParam0->f_523)
				{
					if (func_53(&(uParam0->f_500[iVar26]), 1))
					{
						if (func_183(Global_35, &(uParam0->f_500[iVar26]), 1, 1) < 100f)
						{
							func_163(uParam0->f_500[iVar26], &(uParam0->f_500[iVar26]->f_5), 1, 0, 0);
						}
						else
						{
							func_46(&(uParam0->f_500[iVar26]->f_5));
						}
					}
					iVar26++;
				}
			}
		}
	}
	if (!uParam0->f_611)
	{
		if (func_193(uParam0, iLocal_24) || func_10(1024))
		{
			func_72(16384);
			if (!func_15(&Local_51, 2))
			{
				func_327(uParam0, iParam1);
				func_4(&Local_51, 32);
				uParam0->f_611 = 1;
			}
			else if (!func_15(&Local_51, 65536))
			{
				func_328(uParam0);
				func_4(&Local_51, 32);
				func_329(uParam0, 0);
				uParam0->f_611 = 1;
			}
		}
	}
	if (*uParam0 > 0 && !uParam0->f_611)
	{
		func_330(uParam0, iParam1, Param2);
		if (func_15(&Local_51, 2) && iLocal_44 == 4)
		{
			if (iParam1 > 0)
			{
				func_331(uParam0);
			}
			else
			{
				func_332(uParam0);
			}
		}
		else if (iParam1 > 0)
		{
			func_331(uParam0);
		}
		else if ((((((is_waypoint_playback_going_on_for_vehicle(uParam0->f_1, 0) && !uParam0->f_626) && !uParam0->f_613) && !uParam0->f_615) && !func_15(&Local_51, 131072)) && !func_10(8)) && !_0x404527bc03da0e6c(uParam0->f_1))
		{
			vehicle_waypoint_playback_override_speed(uParam0->f_1, func_333(uParam0, iLocal_24));
		}
	}
	if (!uParam0->f_610)
	{
		if ((func_15(&Local_51, 4) || func_15(&Local_51, 2)) || (func_10(4) && func_314(37)))
		{
			if (func_66(&Local_51, uParam0, iParam1, iLocal_25))
			{
				uParam0->f_612 = 1;
			}
		}
	}
	if (iLocal_25 == 4)
	{
		if (func_79(4))
		{
			func_292(iLocal_38, uParam0, &Local_51, 1);
			if (*uParam0 != 13)
			{
				func_335(func_334(), 0, 1065353216, 1, 0, 0, 1, 752097756);
			}
			func_293(uParam0, 13);
		}
	}
	if (iLocal_25 == 8)
	{
		if (get_number_of_fires_in_range(get_entity_coords(uParam0->f_1, true, false), 3f) > 0)
		{
			stop_fire_in_range(get_entity_coords(uParam0->f_1, true, false), 3f);
		}
	}
	func_336(uParam0);
	if (iLocal_25 == 10)
	{
		if (get_entity_speed(uParam0->f_1) > 0.5f && !uParam0->f_613)
		{
			if (func_53(uParam0->f_9, 0))
			{
				if (!is_ped_in_vehicle(uParam0->f_9, uParam0->f_1, true) && get_entity_height_above_ground(uParam0->f_9) < 0.5f)
				{
					func_337(uParam0->f_9, 1, 0);
				}
			}
			if (func_53(uParam0->f_174, 0))
			{
				if (!is_ped_in_vehicle(uParam0->f_174, uParam0->f_1, true) && get_entity_height_above_ground(uParam0->f_174) < 0.5f)
				{
					func_337(uParam0->f_174, 1, 0);
				}
			}
		}
	}
	switch (*uParam0)
	{
		case 0:
			if (func_15(&Local_51, 1))
			{
				if (!is_entity_dead(uParam0->f_1))
				{
					if (uParam0->f_676 == 0)
					{
						_0xe01f55b2896f6b37(uParam0->f_1, 1);
					}
					if (iLocal_26 == 2)
					{
						func_338(uParam0->f_9, 1);
					}
					if (func_10(2097152))
					{
						func_338(uParam0->f_9, 1);
						func_338(uParam0->f_174, 1);
					}
					func_267(uParam0, iLocal_24, 0);
					func_339(uParam0->f_1, 300);
					if (iLocal_26 == 3 && !func_10(4096))
					{
						func_292(iLocal_38, uParam0, &Local_51, 0);
					}
					func_294(&Local_51, iLocal_25);
					if (!is_audio_scene_active("Robberies_Coach_Scene"))
					{
						start_audio_scene("Robberies_Coach_Scene");
					}
					func_293(uParam0, 1);
				}
			}
			break;
		case 1:
			if ((func_53(uParam0->f_9, 0) && is_ped_in_vehicle(uParam0->f_9, uParam0->f_1, false)) && !func_25(&(uParam0->f_620)))
			{
				if (get_script_task_status(uParam0->f_9, -235832601, true) == 1 || is_playback_going_on_for_vehicle(uParam0->f_1))
				{
					uParam0->f_597 = func_333(uParam0, iLocal_24);
					func_293(uParam0, 2);
					func_340(uParam0->f_1, 1);
				}
				else
				{
					func_267(uParam0, iLocal_24, 0);
				}
			}
			else
			{
				func_293(uParam0, 2);
			}
			break;
		case 2:
			if (uParam0->f_1.f_1 == 1761016051 && _0x8de41e9902e85756(uParam0->f_1))
			{
				func_293(uParam0, 9);
				return;
			}
			if ((func_53(uParam0->f_9, 0) && is_ped_in_vehicle(uParam0->f_9, uParam0->f_1, false)) && !func_25(&(uParam0->f_620)))
			{
				if (((((!uParam0->f_615 && !uParam0->f_626) && !uParam0->f_613) && !func_10(8)) && !func_10(16384)) && !func_15(&Local_51, 65536))
				{
					if (get_script_task_status(uParam0->f_9, -235832601, true) != 1 && !is_playback_going_on_for_vehicle(uParam0->f_1))
					{
						func_293(uParam0, 1);
						return;
					}
				}
			}
			if (!func_25(&(Local_51.f_2149)))
			{
				func_100(&(Local_51.f_2149));
			}
			else if (func_26(&(Local_51.f_2149)) > 5f)
			{
				if (func_161(uParam0, &Local_51, iLocal_26, iLocal_25) || (iLocal_26 == 3 && get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676) == Global_35))
				{
					func_100(&(uParam0->f_646));
					func_340(uParam0->f_1, 0);
					func_4(&Local_51, 262144);
					if (iLocal_26 == 3)
					{
						func_293(uParam0, 10);
						return;
					}
					if (iLocal_25 == 11)
					{
						func_46(&(uParam0->f_1.f_2));
						func_293(uParam0, 15);
						return;
					}
					if (iLocal_26 != 1)
					{
						func_46(&(uParam0->f_1.f_2));
					}
					if (iLocal_26 != 1)
					{
						if (!func_15(&Local_51, 65536))
						{
							func_46(&(uParam0->f_1.f_2));
							if (iLocal_25 != 12)
							{
								if (func_169(uParam0->f_1))
								{
									func_341(&(uParam0->f_1), &(uParam0->f_1.f_3), 0f, 0f, 0f);
								}
								else
								{
									func_341(&(uParam0->f_1), &(uParam0->f_1.f_3), uParam0->f_601);
								}
							}
						}
					}
					if (func_169(uParam0->f_1))
					{
						if (uParam0->f_627)
						{
							_0x226c6a4e3346d288(uParam0->f_1, 1);
							func_342(uParam0->f_1);
							func_293(uParam0, 7);
						}
						else
						{
							func_343(uParam0);
							func_293(uParam0, 6);
						}
					}
					else
					{
						func_293(uParam0, 5);
					}
				}
				else if (uParam0->f_610)
				{
					func_293(uParam0, 15);
				}
			}
			break;
		case 7:
			func_46(&(uParam0->f_1.f_2));
			if (!func_15(&Local_51, 8192))
			{
				if (func_10(2) && get_entity_speed(uParam0->f_1) < 1f)
				{
					if (!func_25(&(Local_51.f_2134)))
					{
						func_100(&(Local_51.f_2134));
					}
					else if (func_26(&(Local_51.f_2134)) > 2f)
					{
						if (func_24(iLocal_25))
						{
							if (!has_ped_got_weapon(Global_35, -1504859554, 0, false))
							{
								func_344(Global_35, -1504859554, 0, 0, 0, 0, 0, 1056964608, 1065353216, 1, 0, 0, 0, 0);
							}
						}
						if (func_24(iLocal_25))
						{
							func_102(Param2.f_3, "CR_O_BLOW_DOOR", 0);
						}
						func_4(&Local_51, 8192);
						func_100(&(Local_51.f_2134));
					}
				}
			}
			else if (!func_15(&Local_51, 128))
			{
				if (func_26(&(Local_51.f_2134)) > 2f)
				{
					if (func_24(iLocal_25))
					{
						func_90("CR_HELP_BLOW_DOOR", 10000, 0, 0, 0, 1);
					}
					func_4(&Local_51, 128);
					func_42(&(Local_51.f_2134));
				}
			}
			func_345(&(uParam0->f_1), &(uParam0->f_1.f_3), 0f, 0f, 0f);
			if (func_346(uParam0))
			{
				uParam0->f_627 = 0;
				func_72(256);
				func_343(uParam0);
				func_42(&(Local_51.f_2134));
				func_293(uParam0, 6);
			}
			break;
		case 5:
			func_46(&(uParam0->f_1.f_2));
			if (iLocal_26 != 1)
			{
				func_345(&(uParam0->f_1), &(uParam0->f_1.f_3), uParam0->f_601);
			}
			if (((_0xe015cf1f2c0959d8(uParam0->f_1) != 2 && _0xe015cf1f2c0959d8(uParam0->f_1) != 1) || _0x8de41e9902e85756(uParam0->f_1)) || ((iLocal_25 == 12 && uParam0->f_628) && vdist(Global_36, get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) > 3f))
			{
				func_293(uParam0, 6);
			}
			if (!func_161(uParam0, &Local_51, iLocal_26, iLocal_25) && func_26(&(uParam0->f_646)) > 3f)
			{
				func_46(&(uParam0->f_1.f_3));
				func_347(uParam0);
				func_293(uParam0, 2);
			}
			break;
		case 6:
			func_46(&(uParam0->f_1.f_2));
			if (uParam0->f_610)
			{
				func_293(uParam0, 15);
			}
			else
			{
				if (!func_25(&uLocal_2536))
				{
					func_348(&uLocal_2536, 0);
				}
				else if (func_26(&uLocal_2536) > 5f)
				{
					stop_fire_in_range(get_entity_coords(uParam0->f_1, true, false), 10f);
				}
				if (iLocal_26 != 1)
				{
					if (func_169(uParam0->f_1))
					{
						func_345(&(uParam0->f_1), &(uParam0->f_1.f_3), 0f, 0f, 0f);
						func_349(uParam0);
					}
					else
					{
						func_345(&(uParam0->f_1), &(uParam0->f_1.f_3), uParam0->f_601);
					}
				}
				if (func_169(uParam0->f_1))
				{
					if (func_240(uParam0->f_600))
					{
						bVar27 = false;
						if (is_ped_on_specific_vehicle(Global_35, uParam0->f_1))
						{
							if (!func_25(&uLocal_2485))
							{
								func_348(&uLocal_2485, 0);
								bVar27 = true;
							}
							else
							{
								func_100(&uLocal_2485);
								bVar27 = true;
							}
						}
						else if (func_25(&uLocal_2485))
						{
							if (func_26(&uLocal_2485) > 2f)
							{
								func_42(&uLocal_2485);
							}
							else
							{
								bVar27 = true;
							}
						}
						if ((((((func_116(Global_35) || _is_ped_carrying(Global_35)) || !func_10(2)) || is_ped_in_any_vehicle(Global_35, true)) || is_entity_on_fire(uParam0->f_1)) || func_233(uParam0->f_1) != 0) || bVar27)
						{
							func_251(uParam0->f_600, 0, 1);
							func_252(uParam0->f_600, 0, 1);
						}
						else
						{
							func_251(uParam0->f_600, 1, 1);
							func_252(uParam0->f_600, 1, 1);
						}
						if (func_350(uParam0->f_600, 1) || vdist(get_entity_coords(Global_35, true, false), get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) < 1.7f)
						{
							set_player_may_not_enter_any_vehicle(player_id());
							disable_control_action(0, -640622144, false);
							set_ped_reset_flag(Global_35, 2, true);
							set_ped_reset_flag(Global_35, 168, true);
						}
						if (func_253(uParam0->f_600, 1))
						{
							func_351(uParam0);
							func_46(&(uParam0->f_1.f_3));
							func_293(uParam0, 9);
						}
					}
				}
				else if (_0x8de41e9902e85756(uParam0->f_1) || ((iLocal_25 == 12 && uParam0->f_628) && vdist(Global_36, get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) > 3f))
				{
					func_46(&(uParam0->f_1.f_3));
					func_293(uParam0, 9);
				}
				if (!func_161(uParam0, &Local_51, iLocal_26, iLocal_25) && func_26(&(uParam0->f_646)) > 3f)
				{
					func_351(uParam0);
					func_46(&(uParam0->f_1.f_3));
					func_347(uParam0);
					func_293(uParam0, 2);
				}
			}
			break;
		case 9:
			func_46(&(uParam0->f_1.f_2));
			set_player_may_not_enter_any_vehicle(player_id());
			if ((func_352(uParam0) || uVar0) || !func_169(uParam0->f_1))
			{
				if (uParam0->f_598 == 0)
				{
					func_97(&(Local_51.f_2286), iLocal_25, 69);
				}
				uParam0->f_610 = 1;
				func_353(1);
				if (func_354(iLocal_25) == 0 && !func_355(iLocal_25))
				{
					func_298(&Local_51, iLocal_25);
				}
				if (is_ped_in_vehicle(Global_35, uParam0->f_1, false))
				{
					clear_ped_tasks(Global_35, 1, 0);
					task_leave_any_vehicle(Global_35, 0, 0);
				}
				func_293(uParam0, 15);
				if (func_15(&Local_51, 131072))
				{
					if (!func_314(37))
					{
						func_112(&Local_51, iLocal_24, 0);
					}
				}
				uParam0->f_631 = { get_entity_coords(uParam0->f_1, true, false) };
			}
			break;
		case 10:
			if (iLocal_25 == 4)
			{
				if (!func_79(1))
				{
					func_356(1);
				}
			}
			if (func_234(Global_35, uParam0->f_1, 0))
			{
				func_46(&(uParam0->f_1.f_2));
				func_4(&Local_51, 1024);
				func_42(&(Local_51.f_2134));
				if (iLocal_25 == 4)
				{
					func_295(&(uParam0->f_1), 4);
				}
				func_293(uParam0, 11);
			}
			else
			{
				if (func_10(2))
				{
					func_43(&Local_51, "PRCCH_LOOT");
				}
				if (!does_blip_exist(uParam0->f_1.f_2))
				{
					func_357(&(uParam0->f_1), &(uParam0->f_1.f_2), 0);
				}
				if (func_10(2))
				{
					if (!func_15(&Local_51, 1024))
					{
						if (!func_25(&(Local_51.f_2134)))
						{
							if (!func_10(4))
							{
								func_102(Param2.f_3, "CR_O_STEALC", 1);
							}
							func_100(&(Local_51.f_2134));
						}
						else if (is_ped_in_vehicle(Global_35, uParam0->f_1, true) || func_358("CR_O_STEALC"))
						{
							func_4(&Local_51, 1024);
							func_42(&(Local_51.f_2134));
						}
						else if (func_26(&(Local_51.f_2134)) > 2f)
						{
							if (!func_10(4))
							{
								func_359("CR_O_STEALC", 7500, 0, 0, -1, -1, 0);
							}
							func_4(&Local_51, 1024);
							func_42(&(Local_51.f_2134));
						}
					}
				}
				if (!func_161(uParam0, &Local_51, iLocal_26, iLocal_25) && func_26(&(uParam0->f_646)) > 3f)
				{
					func_46(&(uParam0->f_1.f_2));
					func_347(uParam0);
					func_293(uParam0, 2);
				}
			}
			break;
		case 11:
			if (!func_25(&(Local_51.f_2197)))
			{
				func_100(&(Local_51.f_2197));
			}
			if (func_24(iLocal_25))
			{
				if (func_10(2))
				{
					if (!func_15(&Local_51, 67108864))
					{
						func_142(Global_1392388->f_10[iLocal_25]->f_8, func_140(1), func_140(2), 1, 2);
						func_4(&Local_51, 67108864);
					}
				}
			}
			if (iLocal_25 == 4)
			{
				if (!func_79(1))
				{
					func_356(1);
				}
			}
			func_43(&Local_51, "PRCCH_PASS");
			if (!func_234(Global_35, uParam0->f_1, 0))
			{
				func_46(&(Local_51.f_2213));
				func_293(uParam0, 10);
			}
			else if (func_80(player_id(), 1, 0, 1) || (Global_1935630->f_16 && iLocal_25 != 13))
			{
				func_46(&(Local_51.f_2213));
				if (!func_15(&Local_51, 4096))
				{
					if (!func_10(4))
					{
						func_102(Param2.f_3, "CR_O_ESC", 0);
					}
					func_4(&Local_51, 4096);
				}
			}
			else
			{
				if (!does_blip_exist(Local_51.f_2213))
				{
					Local_51.f_2213 = _blip_add_for_coord(408396114, Local_51.f_2210);
					_blip_set_modifier(Local_51.f_2213, -1878373110);
					if (!func_10(4))
					{
						func_102(Param2.f_3, "CR_O_DELIVERC", 0);
					}
					Local_51.f_2424 = vdist(Global_36, Local_51.f_2210);
					func_113(&Local_51, 4096);
				}
				if (!func_85(64))
				{
					if (func_24(iLocal_25))
					{
						if (func_360(iLocal_38))
						{
							func_90("CR_HELP_CARGO", 10000, 0, 0, 0, 1);
							func_86(64);
						}
					}
				}
				if (!func_15(&Local_51, 2048))
				{
					if (!func_25(&(Local_51.f_2134)))
					{
						if (bVar2519)
						{
							if (iLocal_38 == 8)
							{
								if (is_entity_attached(&(Local_51.f_2214[1])))
								{
									detach_entity(&(Local_51.f_2214[1]), true, false);
									set_entity_dynamic(&(Local_51.f_2214[1]), true);
									activate_physics(&(Local_51.f_2214[1]));
								}
								if (is_entity_attached(&(Local_51.f_2214[2])))
								{
									detach_entity(&(Local_51.f_2214[2]), true, false);
									set_entity_dynamic(&(Local_51.f_2214[2]), true);
									activate_physics(&(Local_51.f_2214[2]));
								}
							}
						}
						Local_51.f_2267 = { Global_36 };
						func_100(&(Local_51.f_2134));
					}
					else if (vdist(Local_51.f_2267, Global_36) > 20f || func_358("CR_O_DELIVERC"))
					{
						func_4(&Local_51, 2048);
						func_42(&(Local_51.f_2134));
					}
					else if (func_26(&(Local_51.f_2134)) > 20f)
					{
						if (!func_10(4))
						{
							func_359("CR_O_DELIVERC", 7500, 0, 0, -1, -1, 0);
						}
						func_4(&Local_51, 2048);
						func_42(&(Local_51.f_2134));
					}
				}
				else
				{
					func_361(uParam0);
				}
				if (vdist(Local_51.f_2210, Global_36) < 50f)
				{
					func_362(uParam0);
					func_317(uParam0, 1);
				}
				if (vdist(Local_51.f_2210, Global_36) < 40f)
				{
					func_363(uParam0, 1067450368);
				}
			}
			break;
		case 13:
			break;
		case 15:
			break;
	}
}

bool func_146()
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (func_364(Local_51.f_25[iVar0]))
		{
			return false;
		}
		if (func_365(Local_51.f_25[iVar0]))
		{
			return false;
		}
		if (func_366(Local_51.f_25[iVar0]))
		{
			return false;
		}
		if (func_367(Local_51.f_25[iVar0]))
		{
			return false;
		}
		if (func_15(&Local_51, 65536))
		{
			if (func_368(&Local_51, Local_51.f_25[iVar0]))
			{
				return false;
			}
		}
		vVar7 = { get_entity_coords(Local_51.f_25[iVar0]->f_1, true, false) };
		if (func_53(Local_51.f_25[iVar0]->f_174, 3) && !func_15(&Local_51, 16))
		{
			vVar4 = { get_entity_coords(Local_51.f_25[iVar0]->f_174, true, false) };
			if (vdist(Global_36, vVar4) < 100f || (vdist(vVar7, vVar4) < 100f && !Local_51.f_25[iVar0]->f_610))
			{
				if (!func_108(Local_51.f_25[iVar0]->f_174, 518218985))
				{
					return false;
				}
			}
		}
		if ((func_53(Local_51.f_25[iVar0]->f_9, 3) && !func_369(Local_51.f_25[iVar0])) && !func_15(&Local_51, 16))
		{
			vVar1 = { get_entity_coords(Local_51.f_25[iVar0]->f_9, true, false) };
			if (vdist(Global_36, vVar1) < 100f || (vdist(vVar7, vVar1) < 100f && !Local_51.f_25[iVar0]->f_610))
			{
				if (!func_108(Local_51.f_25[iVar0]->f_9, 518218985))
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_147(var uParam0, int iParam1)
{
	if (!func_10(1))
	{
		return false;
	}
	if (func_10(2))
	{
		return false;
	}
	if (func_15(uParam0, 16))
	{
		return false;
	}
	if ((((((iParam1 == 5 || iParam1 == 6) || iParam1 == 12) || iParam1 == 8) || iParam1 == 9) || iParam1 == 10) || iParam1 == 11)
	{
		return false;
	}
	if (func_247(0))
	{
		return false;
	}
	return true;
}

bool func_148(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5)
{
	if (!func_15(&Local_51, 1))
	{
		return false;
	}
	switch (iLocal_26)
	{
		case 0:
			if (func_370(Local_51.f_25[0]))
			{
				return true;
			}
			break;
		case 1:
			if (!Local_51.f_2271 && func_371())
			{
				return true;
			}
			else if (iLocal_39 == 18)
			{
				return true;
			}
			break;
		case 2:
			if (func_372(&Local_51))
			{
				return true;
			}
			break;
		case 3:
			if (&Local_51.f_25[0] == 13)
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_149(var uParam0)
{
	if (!is_ped_in_combat(Global_35, 0))
	{
		if (!func_373(uParam0, 80f))
		{
			return true;
		}
	}
	return false;
}

void func_150()
{
	func_374("CR_O_STOPCOACH", 1);
	func_374("CR_O_STOPCOACHS", 1);
}

float func_151(int iParam0)
{
	if (iParam0 == 1)
	{
		return 20f;
	}
	else if (iParam0 == 0)
	{
		return 0f;
	}
	else if (iParam0 == 6)
	{
		return 0f;
	}
	return 5f;
}

void func_152(var uParam0, int iParam1, int iParam2)
{
	if (!uParam0->f_25[0]->f_675)
	{
		func_375(uParam0->f_25[0], uParam0, iParam1, iParam2, 1);
		return;
	}
	if (uParam0->f_2266 > 1)
	{
		if (!uParam0->f_25[1]->f_675)
		{
			func_375(uParam0->f_25[1], uParam0, iParam1, iParam2, 0);
			return;
		}
	}
	func_4(uParam0, 1);
}

void func_153(int iParam0)
{
	iLocal_32 = iParam0;
}

bool func_154(var uParam0)
{
	iVar0 = func_376(uParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (func_377(uParam0->f_25[iVar0], uParam0) < 35f || func_183(Global_35, uParam0->f_25[iVar0]->f_1, 1, 1) < 20f)
	{
		return true;
	}
	return false;
}

void func_155()
{
	func_46(&(Local_51.f_2066));
	func_4(&Local_51, 4);
}

bool func_156()
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (func_378(Local_51.f_25[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_157()
{
	if (!func_15(&Local_51, 536870912))
	{
		if (is_ped_shooting(Global_35))
		{
			func_4(&Local_51, 536870912);
		}
	}
	switch (iLocal_44)
	{
		case 0:
			func_100(&(Local_51.f_2155));
			iLocal_44 = 1;
			break;
		case 1:
			if (func_26(&(Local_51.f_2155)) > 0.1f)
			{
				func_379();
				iLocal_44 = 2;
			}
			break;
		case 2:
			if (func_26(&(Local_51.f_2155)) > 0.4f)
			{
				if (!func_15(&Local_51, 65536))
				{
					iVar0 = func_380(&Local_51);
					if (func_53(iVar0, 0))
					{
						if (iLocal_26 != 1 || iLocal_36 < 11)
						{
							func_381(iLocal_25, 7, 0);
							func_381(iLocal_25, 8, 0);
							func_381(iLocal_25, 9, 0);
							func_381(iLocal_25, 35, 0);
							func_381(iLocal_25, 36, 0);
							func_381(iLocal_25, 37, 0);
							func_381(iLocal_25, 48, 0);
							if (func_15(&Local_51, 16))
							{
								if (!func_111(iLocal_25, 34))
								{
									_0x36559148b78853b3(1, 0, 0);
									func_97(&(Local_51.f_2286), iLocal_25, 10);
								}
							}
							else if (func_382())
							{
								if (!func_111(iLocal_25, 34))
								{
									func_97(&(Local_51.f_2286), iLocal_25, 1);
								}
							}
						}
					}
				}
				iLocal_44 = 3;
			}
			break;
		case 3:
			if (func_26(&(Local_51.f_2155)) > 1.2f || func_15(&Local_51, 536870912))
			{
				func_42(&(Local_51.f_2155));
				func_383();
				iLocal_44 = 4;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_158()
{
	switch (iLocal_26)
	{
		case 0:
			if (func_270(&Local_51, 0))
			{
				return true;
			}
			break;
		case 1:
			if (func_270(&Local_51, 0))
			{
				return true;
			}
			break;
		case 2:
			if (func_384(&Local_51))
			{
				return true;
			}
			break;
		case 3:
			if (func_270(&Local_51, 0))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_159(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0]->f_523)
		{
			if (iParam1 != 9 || iVar1 != 0)
			{
				func_164(uParam0->f_25[iVar0]->f_500[iVar1], bParam2);
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_160(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if ((!func_108(uParam0->f_25[iVar0]->f_174, -235832601) && !func_108(uParam0->f_25[iVar0]->f_174, 355471868)) && !func_25(&(uParam0->f_25[iVar0]->f_623)))
		{
			func_385(&(uParam0->f_25[iVar0]->f_174), uParam0->f_25[iVar0]->f_1, bParam1);
		}
		iVar0++;
	}
}

bool func_161(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (uParam0->f_612)
	{
		return false;
	}
	if ((((iParam3 == 8 || iParam3 == 9) || iParam3 == 10) || iParam3 == 11) && !func_10(2))
	{
		return false;
	}
	if (iParam3 == 8 && Global_1392388->f_9 > 0)
	{
		return false;
	}
	if (is_entity_dead(uParam0->f_1))
	{
		return true;
	}
	if (!func_386(uParam0) && !func_10(2097152))
	{
		return true;
	}
	if ((get_entity_speed(uParam0->f_1) < 1.5f && func_10(1)) && iParam2 == 1)
	{
		return true;
	}
	if (get_entity_speed(uParam0->f_1) < 0.5f)
	{
		if (func_15(uParam1, 32))
		{
			return true;
		}
		else if (func_15(uParam1, 131072))
		{
			return true;
		}
		else if (func_10(524288))
		{
			return true;
		}
		else if (uParam1->f_2423 == 1)
		{
			return true;
		}
	}
	return false;
}

void func_162(var uParam0)
{
	if (!func_205(*uParam0, 0, 0))
	{
		return;
	}
	open_sequence_task(&iVar0);
	task_leave_any_vehicle(0, 0, 97);
	task_smart_flee_ped(0, Global_35, 6000f, -1, 0, 1077936128, 0);
	close_sequence_task(iVar0);
	task_perform_sequence(*uParam0, iVar0);
	clear_sequence_task(&iVar0);
}

void func_163(int* iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_53(*iParam0, 1))
	{
		return;
	}
	if (does_blip_exist(*uParam1))
	{
		return;
	}
	iVar0 = get_blip_from_entity(*iParam0);
	if (does_blip_exist(iVar0))
	{
		return;
	}
	if (bParam4)
	{
		iVar1 = -1595050198;
	}
	else if (bParam2)
	{
		iVar1 = 831283580;
	}
	else if (bParam3)
	{
		iVar1 = -89429847;
	}
	else
	{
		iVar1 = -1749618580;
	}
	*uParam1 = _blip_add_for_entity(iVar1, *iParam0);
	if (bParam2)
	{
		if (func_387())
		{
			_blip_set_modifier(*uParam1, -1034486097);
		}
		else
		{
			_set_blip_flash_style(*uParam1, -1034486097);
		}
	}
	else if (bParam3)
	{
		_blip_set_modifier(*uParam1, -981020806);
	}
}

void func_164(var uParam0, bool bParam1)
{
	if (!func_53(*uParam0, 0))
	{
		return;
	}
	if (_0x3ab6c7b0bb0df4b1(*uParam0, -1))
	{
		return;
	}
	if (_get_ped_crouch_movement(*uParam0))
	{
		_set_ped_crouch_movement(*uParam0, false, 0, false);
	}
	if (is_ped_using_any_scenario(*uParam0))
	{
		_0x802092b07e3b1eea(*uParam0, Global_36, 3);
	}
	set_ped_combat_attributes(*uParam0, 2, bParam1);
	set_ped_combat_attributes(*uParam0, 1, bParam1);
	set_ped_combat_attributes(*uParam0, 3, !bParam1);
	func_163(uParam0, &(uParam0->f_5), 1, 0, 0);
	set_blocking_of_non_temporary_events(*uParam0, false);
	if (!bParam1)
	{
		set_ped_config_flag(*uParam0, 246, true);
		set_ped_shoot_rate(*uParam0, 100);
		task_combat_ped(*uParam0, Global_35, 0, 0);
		uParam0->f_9 = 1;
	}
	else
	{
		set_ped_shoot_rate(*uParam0, 90);
	}
}

void func_165(float fParam0)
{
	iVar0 = func_380(&Local_51);
	if (!func_205(iVar0, 0, 1))
	{
		return;
	}
	if (is_ped_fleeing(iVar0))
	{
		return;
	}
	if (!func_15(&Local_51, 2097152))
	{
		if (iLocal_27 == 2)
		{
			if (!_0xfe5c6177064bd390(1))
			{
				if (!func_388(iVar0, Global_36, 8f, 1, 1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 68))
					{
						func_4(&Local_51, 2097152);
					}
				}
			}
		}
	}
	if (!func_388(iVar0, Global_36, fParam0, 1, 1))
	{
		return;
	}
	switch (iLocal_37)
	{
		case 0:
			if (!_0xfe5c6177064bd390(1))
			{
				if (func_389(iVar0, 1, 1, 1, 0, 0))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 67))
					{
						iLocal_37 = 1;
					}
				}
			}
			break;
		case 1:
			if (!_0xfe5c6177064bd390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 11))
				{
					iLocal_37 = 2;
				}
			}
			break;
		case 2:
			if (!_0xfe5c6177064bd390(1))
			{
				if (func_389(iVar0, 1, 1, 1, 0, 0))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 12))
					{
						iLocal_37 = 3;
					}
				}
			}
			break;
	}
}

void func_166()
{
	iVar0 = func_380(&Local_51);
	if (!func_205(iVar0, 0, 1))
	{
		return;
	}
	if (is_ped_fleeing(iVar0))
	{
		return;
	}
	if (func_108(iVar0, 242628503))
	{
		return;
	}
	if ((((has_entity_been_damaged_by_entity(iVar0, Global_35, 1, 1) || is_ped_shooting(Global_35)) || is_bullet_in_area(get_entity_coords(iVar0, true, false), 10f, false)) || vdist(Global_36, get_entity_coords(iVar0, true, false)) > 50f) || get_ped_config_flag(iVar0, 206, true))
	{
		set_ped_config_flag(iVar0, 205, false);
		set_ped_config_flag(iVar0, 206, true);
		set_ped_combat_attributes(iVar0, 17, true);
		set_ped_flee_attributes(iVar0, 65536, true);
		set_ped_flee_attributes(iVar0, 2, false);
		open_sequence_task(&iVar1);
		if (is_ped_in_any_vehicle(iVar0, false))
		{
			task_leave_any_vehicle(0, 1500, 0);
		}
		_task_smart_flee_style_ped(0, Global_35, 3, 0, -1082130432, -1, 0);
		close_sequence_task(iVar1);
		task_perform_sequence(iVar0, iVar1);
		clear_sequence_task(&iVar1);
	}
}

void func_167()
{
	bVar3 = false;
	bVar5 = func_53(&(Local_51.f_25[0]->f_252[0]), 9);
	bVar6 = false;
	if ((!bVar5 && !Local_51.f_2271) && iLocal_39 != 17)
	{
		func_100(&(Local_51.f_2164));
		iLocal_39 = 17;
	}
	if (!bVar5 && Local_51.f_2271)
	{
		if (iVar2552 == 0)
		{
			func_390(3, 0, 1, 0, &(Local_51.f_25[0]->f_252[0]), 0, 1065353216, 0);
			iLocal_2554 = 1;
		}
	}
	switch (iLocal_39)
	{
		case 0:
			iLocal_39 = 1;
			break;
		case 1:
			if (func_53(&(Local_51.f_25[0]->f_252[0]), 0))
			{
				if (!is_ped_in_any_vehicle(&(Local_51.f_25[0]->f_252[0]), false))
				{
					_0xaab050da48b57978(&(Local_51.f_25[0]->f_252[0]), "Flee_Panic", Global_35, -1, 4);
					set_ped_path_can_use_climbovers(&(Local_51.f_25[0]->f_252[0]), true);
					open_sequence_task(&iVar2);
					task_smart_flee_ped(0, Global_35, 200f, -1, 0, 1077936128, 0);
					close_sequence_task(iVar2);
					task_perform_sequence(&(Local_51.f_25[0]->f_252[0]), iVar2);
					clear_sequence_task(&iVar2);
					_0x12990818c1d35886(&(Local_51.f_25[0]->f_252[0]), 1, 1065353216);
					_0x3ad8eff9703be657(&(Local_51.f_25[0]->f_252[0]), 1f);
					stop_ped_speaking(&(Local_51.f_25[0]->f_252[0]), true);
					func_102(iLocal_25, "CR_O_TACKLEPASS", 0);
					func_100(&(Local_51.f_2164));
					func_100(&(Local_51.f_2179));
					iLocal_39 = 2;
				}
			}
			break;
		case 2:
			if (func_25(&(Local_51.f_2179)))
			{
				if (func_26(&(Local_51.f_2179)) > 2f)
				{
					func_90("CR_HELP_TACKLE", 10000, 0, 0, 0, 1);
					func_42(&(Local_51.f_2179));
				}
			}
			if (func_53(&(Local_51.f_25[0]->f_252[0]), 0))
			{
				if (func_26(&(Local_51.f_2164)) > 30f)
				{
					fVar0 = 1.5f;
				}
				else
				{
					func_26(&(Local_51.f_2164));
					fVar0 = 2f;
				}
				if (is_waypoint_playback_going_on_for_ped(&(Local_51.f_25[0]->f_252[0]), 0))
				{
					waypoint_playback_override_speed(&(Local_51.f_25[0]->f_252[0]), fVar0, 0, -1082130432, 0);
				}
				else
				{
					set_ped_max_move_blend_ratio(&(Local_51.f_25[0]->f_252[0]), fVar0);
				}
				if (_0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					_0x19b2c7a6c34fad54(player_id(), 0.5f);
					if (iLocal_40 < 3)
					{
						iLocal_40 = 3;
					}
					clear_ped_tasks(&(Local_51.f_25[0]->f_252[0]), 1, 0);
					_0x789dabd18e9024db(Global_35, 1, 1);
					_0x789dabd18e9024db(&(Local_51.f_25[0]->f_252[0]), 1, 1);
					set_ped_config_flag(&(Local_51.f_25[0]->f_252[0]), 213, true);
					Local_51.f_2397 = 1;
					func_100(&(Local_51.f_2164));
					iLocal_39 = 3;
				}
				else if (_is_ped_hogtied(&(Local_51.f_25[0]->f_252[0])) || func_391(&(Local_51.f_25[0]->f_252[0])))
				{
					if (!_is_ped_lassoed(&(Local_51.f_25[0]->f_252[0])) || bVar2529)
					{
						if (!_0xfe5c6177064bd390(1))
						{
							if (iLocal_40 < 3)
							{
								iLocal_40 = 3;
							}
							func_97(&(Local_51.f_2286), iLocal_25, 60);
							iLocal_39 = 4;
						}
					}
					else if (!bVar2529)
					{
						if (!func_25(&uLocal_2539))
						{
							func_348(&uLocal_2539, 0);
						}
						else if (func_26(&uLocal_2539) > 5f)
						{
							func_42(&uLocal_2539);
							iLocal_2531 = 1;
							_0xae6004120c18df97(&(Local_51.f_25[0]->f_252[0]), 0, 0);
						}
					}
				}
			}
			if (_0x3bdfcf25b58b0415(&(Local_51.f_25[0]->f_252[0])))
			{
				func_392();
			}
			else
			{
				func_393(0);
			}
			break;
		case 3:
			if (func_53(&(Local_51.f_25[0]->f_252[0]), 0))
			{
				if (func_26(&(Local_51.f_2164)) > 2f)
				{
					func_42(&(Local_51.f_2164));
					func_97(&(Local_51.f_2286), iLocal_25, 60);
					iLocal_39 = 4;
				}
			}
			func_392();
			break;
		case 4:
			if (func_53(&(Local_51.f_25[0]->f_252[0]), 0))
			{
				if (_0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					disable_control_action(0, -792592641, false);
					disable_control_action(0, -1879280170, false);
					disable_control_action(0, 578288361, false);
					disable_control_action(0, -1105246567, false);
					disable_control_action(0, 1743595310, false);
				}
				if (!_0xfe5c6177064bd390(1))
				{
					func_100(&(Local_51.f_2179));
					if ((!_is_ped_hogtied(&(Local_51.f_25[0]->f_252[0])) && !bVar2528) || bVar2529)
					{
						func_102(iLocal_25, "CR_O_SUBDUEPASS", 0);
						clear_entity_last_damage_entity(&(Local_51.f_25[0]->f_252[0]));
						iLocal_2530 = 0;
					}
					func_100(&uLocal_2551);
					iLocal_39 = 5;
				}
			}
			func_392();
			break;
		case 5:
			if (func_53(&(Local_51.f_25[0]->f_252[0]), 0))
			{
				if (func_25(&(Local_51.f_2179)))
				{
					if (func_26(&(Local_51.f_2179)) > 2f)
					{
						func_42(&(Local_51.f_2179));
					}
				}
				if (_0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					disable_control_action(0, -792592641, false);
					disable_control_action(0, -1879280170, false);
					disable_control_action(0, 578288361, false);
					disable_control_action(0, -1105246567, false);
					disable_control_action(0, 1743595310, false);
				}
				bVar6 = true;
				if (func_25(&uLocal_2551))
				{
					bVar6 = false;
					if (func_26(&uLocal_2551) > 3f)
					{
						bVar6 = true;
					}
				}
				if (bVar6 || _0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					if (_is_ped_hogtied(&(Local_51.f_25[0]->f_252[0])) || bVar2528)
					{
						func_97(&(Local_51.f_2286), iLocal_25, 58);
						iLocal_39 = 14;
					}
					else if (func_394(65, &iVar4))
					{
						func_100(&uLocal_2548);
						if (iVar4 == 1)
						{
							iLocal_39 = 7;
						}
						else
						{
							iLocal_39 = 6;
						}
					}
				}
				if (_0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					func_393(1);
				}
			}
			break;
		case 6:
			if (func_395(&uLocal_2548) > 200)
			{
				iLocal_39 = 7;
			}
			func_393(1);
			bVar3 = true;
			break;
		case 7:
			if (!func_111(iLocal_25, 65))
			{
				disable_ped_pain_audio(&(Local_51.f_25[0]->f_252[0]), true);
				stop_ped_speaking(&(Local_51.f_25[0]->f_252[0]), true);
				func_97(&(Local_51.f_2286), iLocal_25, 61);
				clear_entity_last_damage_entity(&(Local_51.f_25[0]->f_252[0]));
				iLocal_39 = 8;
			}
			func_392();
			break;
		case 8:
			if (!func_111(iLocal_25, 61))
			{
				iLocal_39 = 9;
			}
			func_392();
			break;
		case 9:
			if (func_53(&(Local_51.f_25[0]->f_252[0]), 0))
			{
				if (_0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					disable_control_action(0, -792592641, false);
					disable_control_action(0, -1879280170, false);
					disable_control_action(0, 578288361, false);
					disable_control_action(0, -1105246567, false);
					disable_control_action(0, 1743595310, false);
				}
				if (!_0xfe5c6177064bd390(1))
				{
					disable_ped_pain_audio(&(Local_51.f_25[0]->f_252[0]), false);
					iLocal_39 = 10;
				}
				else if (_0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					disable_control_action(0, -1292666904, false);
					disable_control_action(0, -1377110900, false);
					disable_control_action(0, 25970639, false);
					disable_control_action(0, 130948705, false);
				}
			}
			func_392();
			break;
		case 10:
			if (func_53(&(Local_51.f_25[0]->f_252[0]), 0))
			{
				if (_0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					disable_control_action(0, -792592641, false);
					disable_control_action(0, -1879280170, false);
					disable_control_action(0, 578288361, false);
					disable_control_action(0, -1105246567, false);
					disable_control_action(0, 1743595310, false);
				}
				if (func_394(66, &iVar4))
				{
					func_100(&uLocal_2548);
					if (iVar4 == 1)
					{
						iLocal_39 = 12;
					}
					else
					{
						iLocal_39 = 11;
					}
				}
			}
			func_393(1);
			break;
		case 11:
			if (func_395(&uLocal_2548) > 200)
			{
				iLocal_39 = 12;
			}
			func_393(1);
			bVar3 = true;
			break;
		case 12:
			if (!func_111(iLocal_25, 66))
			{
				disable_ped_pain_audio(&(Local_51.f_25[0]->f_252[0]), true);
				stop_ped_speaking(&(Local_51.f_25[0]->f_252[0]), true);
				func_97(&(Local_51.f_2286), iLocal_25, 58);
				clear_entity_last_damage_entity(&(Local_51.f_25[0]->f_252[0]));
				iLocal_39 = 13;
			}
			func_392();
			break;
		case 13:
			if (!func_111(iLocal_25, 58))
			{
				iLocal_39 = 14;
			}
			func_392();
			break;
		case 14:
			if (func_53(&(Local_51.f_25[0]->f_252[0]), 0))
			{
				if (_0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == -834353174)
				{
					disable_control_action(0, -1879280170, false);
					disable_control_action(0, 578288361, false);
					disable_control_action(0, -1105246567, false);
					disable_control_action(0, 1743595310, false);
				}
				if (!_0xfe5c6177064bd390(1) || func_396(iLocal_25, 58) > 1)
				{
					iVar1 = &Local_51.f_25[0]->f_252[0];
					if (_0x9422743a5ba50e10(player_id()) != 1f)
					{
						_0x19b2c7a6c34fad54(player_id(), 1f);
					}
					disable_ped_pain_audio(iVar1, false);
					clear_ped_tasks(iVar1, 1, 0);
					if (bVar2528 == 1)
					{
						_0xaab050da48b57978(iVar1, "TaskIntimidated_OnFoot", Global_35, -1, 4);
					}
					Local_51.f_2271 = 1;
					func_102(iLocal_25, "CR_O_ROBCOACHV", 0);
					func_46(&(Local_51.f_25[0]->f_1.f_2));
					func_46(&(Local_51.f_25[0]->f_252[0]->f_5));
					func_341(&(Local_51.f_25[0]->f_1), &(Local_51.f_25[0]->f_1.f_3), 0f, 0f, 0f);
					iLocal_39 = 15;
				}
			}
			func_393(0);
			break;
		case 15:
			if (!func_240(Local_51.f_25[0]->f_600))
			{
				if (!is_ped_in_vehicle(Global_35, Local_51.f_25[0]->f_1, true))
				{
					Local_51.f_25[0]->f_600 = func_397("CR_C_ROBH", -719620017, Local_51.f_25[0]->f_1, 3, 1, 0, 0, 5, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
					set_vehicle_is_considered_by_player(Local_51.f_25[0]->f_1, false);
					func_398(Local_51.f_25[0]->f_600, 3f, 1);
					func_399(Local_51.f_25[0]->f_600, 0, 1);
				}
			}
			else
			{
				if ((func_116(Global_35) || _is_ped_carrying(Global_35)) || !func_10(2))
				{
					func_251(Local_51.f_25[0]->f_600, 0, 1);
					func_252(Local_51.f_25[0]->f_600, 0, 1);
				}
				else
				{
					func_251(Local_51.f_25[0]->f_600, 1, 1);
					func_252(Local_51.f_25[0]->f_600, 1, 1);
				}
				if (func_256(Local_51.f_25[0]->f_600, 1))
				{
					func_351(Local_51.f_25[0]);
					iLocal_39 = 16;
				}
			}
			func_393(0);
			break;
		case 16:
			if (func_400(Local_51.f_25[0]))
			{
				func_46(&(Local_51.f_25[0]->f_1.f_2));
				func_46(&(Local_51.f_25[0]->f_1.f_3));
				iLocal_39 = 18;
			}
			func_393(0);
			break;
		case 17:
			if (_0x9422743a5ba50e10(player_id()) != 1f)
			{
				_0x19b2c7a6c34fad54(player_id(), 1f);
			}
			if (func_25(&(Local_51.f_2164)))
			{
				if (func_26(&(Local_51.f_2164)) > 2f)
				{
					func_102(iLocal_25, "CR_O_LOOTPASS", 0);
					func_42(&(Local_51.f_2164));
				}
			}
			func_393(0);
			break;
	}
	func_401(&(Local_51.f_25[0]->f_252[0]));
	if (func_402() && bVar2545)
	{
		if (!func_240(Local_51.f_2273))
		{
			Local_51.f_2273 = func_255("CR_HELP_TACKLE4", -163964935, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			_uiprompt_set_group((*Global_1945938)[func_241(Local_51.f_2273)]->f_3, _uiprompt_get_group_id_for_target_entity(&(Local_51.f_25[0]->f_252[0])), 0);
		}
		func_251(Local_51.f_2273, !bVar3, 1);
	}
	else if (func_240(Local_51.f_2273))
	{
		func_92(&(Local_51.f_2273), 1, 1);
	}
	if (_0x3bdfcf25b58b0415(&(Local_51.f_25[0]->f_252[0])))
	{
		if (func_402())
		{
			disable_control_action(0, -485697785, false);
		}
		else
		{
			disable_control_action(0, -1292666904, false);
			disable_control_action(0, -1377110900, false);
			disable_control_action(0, 25970639, false);
			disable_control_action(0, 130948705, false);
			disable_control_action(0, -792592641, false);
		}
	}
}

bool func_168(float fParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3 && does_entity_exist(iParam2))
	{
		if (!func_403(iParam2, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_404(fParam0))
	{
		return false;
	}
	return true;
}

bool func_169(int iParam0)
{
	if (get_entity_model(iParam0) == -1688693650)
	{
		return true;
	}
	return false;
}

int func_170(var uParam0)
{
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (does_blip_exist(uParam0->f_25[iVar0]->f_1.f_3))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_171(var uParam0)
{
	if (!does_entity_exist(uParam0->f_25[0]->f_1))
	{
		return false;
	}
	vVar0 = { get_entity_coords(uParam0->f_25[0]->f_1, true, false) };
	if (vdist(vVar0, Global_36) < (150f / 2f) || (vdist(vVar0, Global_36) < 150f && is_entity_on_screen(uParam0->f_25[0]->f_1)))
	{
		return true;
	}
	return false;
}

void func_172(int iParam0)
{
	if (func_10(4))
	{
		return;
	}
	bVar0 = false;
	if (iLocal_45 > 5)
	{
		bVar0 = true;
	}
	switch (iLocal_26)
	{
		case 0:
			func_102(iParam0, "CR_O_WAITCOACH", bVar0);
			break;
		case 3:
			func_102(iParam0, "CR_O_WAITCOACHW", bVar0);
			break;
		case 1:
			func_102(iParam0, "CR_O_WAITCOACH", bVar0);
			break;
		case 2:
			func_102(iParam0, "CR_O_WAITCOACHS", bVar0);
			break;
	}
}

void func_173()
{
	func_46(&(Local_51.f_2208));
	if (!does_blip_exist(Local_51.f_25[0]->f_1.f_2))
	{
		if (!Local_51.f_25[0]->f_613)
		{
			if (iLocal_25 != 12)
			{
				func_357(&(Local_51.f_25[0]->f_1), &(Local_51.f_25[0]->f_1.f_2), 0);
			}
		}
	}
	if (iLocal_26 == 2)
	{
		if (!does_blip_exist(Local_51.f_25[1]->f_1.f_2))
		{
			if (!Local_51.f_25[1]->f_613)
			{
				func_357(&(Local_51.f_25[1]->f_1), &(Local_51.f_25[1]->f_1.f_2), 0);
			}
		}
	}
}

void func_174()
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		func_46(&(Local_51.f_25[iVar0]->f_1.f_2));
		func_46(&(Local_51.f_25[iVar0]->f_1.f_3));
		iVar0++;
	}
}

bool func_175(var uParam0)
{
	if (-1829635046 == func_405(81053684))
	{
		if (func_406(uParam0))
		{
			return true;
		}
	}
	else if (func_407(-525676072, uParam0))
	{
		if (func_406(uParam0))
		{
			return true;
		}
	}
	return false;
}

void func_176()
{
	func_408(150, 1);
}

void func_177(int iParam0)
{
	if (_uilog_is_entry_registered(4, func_135(iParam0)))
	{
		StringCopy(&cVar0, "", 24);
		cVar3 = func_409(0, &cVar0, 0, 0, -1, -1);
		func_263(iParam0, &cVar0, cVar3, -1082130432);
		_uilog_set_entry_icon_texture(4, func_135(iParam0), get_hash_key("TOAST_MEDAL_COLLECTABLE"), get_hash_key("hud_toasts"));
	}
}

var func_178(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_179(vector3 vParam0, float fParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, float fParam9)
{
	if (!bParam8 && network_is_game_in_progress())
	{
		return 0;
	}
	if (fParam3 <= 0.1f)
	{
		return 0;
	}
	if (func_120(vParam0))
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
		if (func_410(vParam0))
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
	if (fParam9 >= 0f)
	{
		_0xd460135c98940274(iVar0, fParam9);
	}
	func_411(iVar0, bParam8);
	return iVar0;
}

void func_180(int iParam0, bool bParam1)
{
	if (iParam0 != 12)
	{
		func_197();
	}
	func_198();
	if (iParam0 == 13)
	{
		if (func_412(1824375265, 1, 0))
		{
			func_413(1824375265, 1, 0, -142743235, 0);
		}
	}
	if (!func_199(iParam0))
	{
		return;
	}
	if (_does_volume_exist(Global_1392388->f_10[iParam0]->f_9))
	{
		func_200(Global_1392388->f_10[iParam0]->f_9);
		_delete_volume(Global_1392388->f_10[iParam0]->f_9);
	}
	if (bParam1)
	{
		func_122(Global_1392388->f_10[iParam0]->f_5, 125f, 5);
	}
	Global_40.f_9146.f_4[iParam0] = 3;
	Global_40.f_9146.f_79[iParam0] = -15;
	Global_40.f_9146++;
	Global_40.f_9146.f_111[iParam0] = &Global_40.f_9146.f_111[iParam0] + 1;
	Global_40.f_9146.f_109 = func_414();
	func_416(func_415(978382515, -2072933068), 1);
	if (func_24(iParam0))
	{
		Global_40.f_9146.f_3 = -1;
		if (iParam0 == 6)
		{
			_0xcc3edc5614b03f61(35);
		}
		else if (iParam0 == 2)
		{
			_0xcc3edc5614b03f61(36);
		}
		func_417(Global_1392388->f_10[iParam0]->f_8, 1, 1, 0, 1);
	}
	func_204(iParam0);
}

bool func_181(float fParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (!func_120(Local_51.f_25[iVar0]->f_631))
		{
			if (vdist(Global_36, Local_51.f_25[iVar0]->f_631) < fParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_182(int iParam0, float fParam1)
{
	if (func_418(iParam0))
	{
		waypoint_playback_override_speed(iParam0, fParam1, 0, -1082130432, 0);
	}
}

float func_183(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_184(int iParam0)
{
	if (!func_53(iParam0, 1))
	{
		return;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	if (func_53(Global_1392388->f_3, 0))
	{
		register_target(iParam0, Global_1392388->f_3, 1);
		bVar4 = true;
	}
	set_blocking_of_non_temporary_events(iParam0, false);
	set_ped_relationship_group_hash(iParam0, 707888648);
	_0x819add5ef1742f47(iParam0, 7);
	open_sequence_task(&iVar0);
	if (is_ped_sitting_in_any_vehicle(iParam0))
	{
		iVar1 = func_419(iParam0, get_vehicle_ped_is_in(iParam0, false));
		if (iVar1 == -1)
		{
			set_ped_combat_attributes(iParam0, 1, false);
		}
		else if (iVar1 == 0)
		{
			if (func_53(get_ped_in_vehicle_seat(get_vehicle_ped_is_in(iParam0, false), -1), 1))
			{
				iVar2 = 1200;
				bVar3 = true;
			}
			else
			{
				set_ped_combat_attributes(iParam0, 1, false);
			}
		}
		else if (iVar1 == 1)
		{
			set_ped_combat_attributes(iParam0, 1, false);
		}
		else if (iVar1 == 2)
		{
			set_ped_combat_attributes(iParam0, 1, false);
		}
		if (bVar3)
		{
			task_leave_any_vehicle(0, iVar2, 1048897);
		}
	}
	if (!bVar4)
	{
		task_arrest_ped(0, Global_35);
	}
	else
	{
		task_combat_hated_targets_in_area(0, get_entity_coords(Global_1392388->f_3, true, false), 100f, 0, 0);
	}
	close_sequence_task(iVar0);
	task_perform_sequence(iParam0, iVar0);
	clear_sequence_task(&iVar0);
}

void func_185(int iParam0)
{
	iLocal_33 = iParam0;
}

void func_186(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_187(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_184(uParam0->f_25[iVar0]->f_9);
		iVar0++;
	}
}

void func_188(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_184(uParam0->f_25[iVar0]->f_174);
		iVar0++;
	}
}

void func_189(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (func_53(Local_51.f_25[iVar0]->f_9, 3))
		{
			func_163(&(Local_51.f_25[iVar0]->f_9), &(Local_51.f_25[iVar0]->f_9.f_5), 1, 0, bParam0);
		}
		if (func_53(Local_51.f_25[iVar0]->f_174, 3))
		{
			func_163(&(Local_51.f_25[iVar0]->f_174), &(Local_51.f_25[iVar0]->f_174.f_5), 1, 0, bParam0);
		}
		iVar1 = 0;
		while (iVar1 < Local_51.f_25[iVar0]->f_499)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_410[iVar1]), 3))
			{
				func_163(Local_51.f_25[iVar0]->f_410[iVar1], &(Local_51.f_25[iVar0]->f_410[iVar1]->f_5), 1, 0, bParam0);
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < Local_51.f_25[iVar0]->f_523)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_500[iVar2]), 3))
			{
				func_163(Local_51.f_25[iVar0]->f_500[iVar2], &(Local_51.f_25[iVar0]->f_500[iVar2]->f_5), 1, 0, bParam0);
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < Local_51.f_25[iVar0]->f_540)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_524[iVar3]), 3))
			{
				func_163(Local_51.f_25[iVar0]->f_524[iVar3], &(Local_51.f_25[iVar0]->f_524[iVar3]->f_5), 1, 0, bParam0);
			}
			iVar3++;
		}
		iVar0++;
	}
}

bool func_190()
{
	if ((iLocal_25 == 12 && !func_10(1)) && !func_10(8192))
	{
		return true;
	}
	return false;
}

void func_191(bool bParam0, bool bParam1)
{
	if (((is_weapon_valid(Global_1935630->f_44) && _is_weapon_sniper(Global_1935630->f_44)) && get_ped_reset_flag(Global_35, 0)) && _0xa24c1d341c6e0d53(1, 1, 1))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -160924582 && get_ped_reset_flag(Global_35, 0))
	{
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (Global_1935630->f_44 == -1016714371)
	{
		func_420(0);
		_0x94a3c1b804d291ec(Global_35, 0, 0, 0, 0);
		return;
	}
	if (bParam0)
	{
		animpostfx_stop_all();
	}
	if (bParam1)
	{
		_trigger_mission_failed_cam();
	}
}

bool func_192()
{
	iVar0 = _0xd04241bbf6d03a5e(Global_35);
	if (_does_scenario_point_exist(iVar0))
	{
		return true;
	}
	return false;
}

bool func_193(var uParam0, int iParam1)
{
	iVar0 = _0x2963b5c1637e8a27(uParam0->f_1);
	if ((is_entity_dead(uParam0->f_1) || iVar0 == 0) || iVar0 == Global_35)
	{
		return false;
	}
	if (func_87(uParam0->f_1, func_421(iParam1), 1) < 12f)
	{
		return true;
	}
	return false;
}

char[] func_194(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "prc_chrob_straw1_coach";
		case 1:
			return "prc_chrob_straw2_coach";
		case 2:
			return "prc_chrob_straw3_coach";
		case 3:
			return "prc_chrob_rhod1_coach";
		case 4:
			return "prc_chrob_rhod2_coach";
		case 5:
			return "prc_chrob_rhod3_coach";
		case 6:
			return "prc_chrob_comp1_coach";
		case 7:
			return "prc_chrob_comp2_coach";
		case 8:
			return "prc_chrob_comp3_coach";
		case 9:
			return "prc_chrob_comp4_coach";
		case 10:
			return "prc_chrob_rscintro_coach";
		case 11:
			return "prc_chrob_rtl_coach";
		default:
			break;
	}
	return "ERROR: RECORDING STRING NOT FOUND!";
}

float func_195(int iParam0)
{
	if (iParam0 == 11)
	{
		return 11f;
	}
	if (iParam0 == 8)
	{
		return 13f;
	}
	return 13f;
}

void func_196(var uParam0, var uParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_422(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_423(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_423(&(Global_1347343->f_11), 16384);
	}
	if (func_424() >= 2)
	{
		if (!func_422(Global_1347343->f_11, 16384))
		{
			func_423(&(Global_1347343->f_11), 8);
		}
		func_214(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = uParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = uParam1;
	func_272(Global_1935630, 2048);
	func_425(bParam5);
}

void func_197()
{
	_uilog_clear_cached_objective();
}

void func_198()
{
	iVar0[0] = -1260334554;
	iVar0[1] = -1492175229;
	iVar0[2] = 1585456486;
	iVar0[3] = -884998428;
	iVar0[4] = 667072496;
	iVar0[5] = 268535918;
	iVar0[6] = -866909932;
	iVar8 = 0;
	while (iVar8 < 7)
	{
		if (func_412(&(iVar0[iVar8]), 1, 0))
		{
			func_413(&(iVar0[iVar8]), 1, 1, -142743235, 0);
		}
		iVar8++;
	}
}

bool func_199(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 14);
}

void func_200(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	func_426(vVar0, 0);
}

int func_201(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

void func_202(int iParam0)
{
	if (!func_427(iParam0))
	{
		return;
	}
	if (iParam0 != func_201(0))
	{
		return;
	}
	if (func_428(iParam0) == 0)
	{
	}
	iVar0 = func_220(iParam0);
	if (func_429(iParam0) == 3)
	{
		if (func_428(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_428(iParam0)))
		{
			if (func_220(iParam0) != 1 && func_220(iParam0) != 8)
			{
				func_430(func_220(iParam0), func_428(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_431(iParam0);
	func_121(1);
	func_432(0);
	func_433(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_434(1);
			func_435(15, 0, 1);
			break;
		case 4:
			func_435(10, 0, 1);
			break;
		case 8:
			func_435(10, 0, 1);
			break;
		case 9:
			func_435(10, 0, 1);
			break;
		case 2:
			func_435(10, 0, 1);
			break;
		case 6:
			func_435(10, 0, 1);
			break;
		case 5:
			func_435(10, 0, 1);
			break;
	}
	func_436(1);
}

void func_203(int iParam0, bool bParam1, int iParam2)
{
	if (!func_427(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_228(iParam0) && !func_227(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_428(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_228(iParam0))
	{
		iParam2 = -1;
	}
	if (func_429(iParam0) == 3 || (func_429(iParam0) == 1 && _0x01f4d242765c6b24(func_428(iParam0))))
	{
		func_430(func_220(iParam0), func_428(iParam0), iParam2);
		if ((!func_427(Global_1572864->f_8) && !func_437(0, 1, 0)) && !func_438(&Global_1935630, 32768))
		{
			iVar0 = func_439(iParam0);
			if (iVar0 != -1)
			{
				func_440(0);
			}
			else if (func_220(iParam0) == 8)
			{
				iVar0 = func_441();
				if (iVar0 != -1)
				{
					func_440(0);
				}
			}
		}
	}
	func_433(iParam0, 0);
	if (func_201(0) == iParam0)
	{
		func_121(1);
		func_432(0);
		func_436(1);
	}
	func_442(iParam0, 1);
	func_431(iParam0);
}

void func_204(int iParam0)
{
	if (func_24(iParam0))
	{
		if (func_443(iParam0))
		{
			if (iParam0 == 7)
			{
				Global_40.f_9146.f_1 = -1;
			}
			else
			{
				Global_40.f_9146.f_1 = iParam0 + 1;
			}
		}
		else if (func_444(iParam0))
		{
			if (iParam0 == 3)
			{
				Global_40.f_9146.f_2 = -1;
			}
			else
			{
				Global_40.f_9146.f_2 = iParam0 + 1;
			}
		}
	}
	func_445(Global_40.f_9146.f_2);
	func_445(Global_40.f_9146.f_1);
}

bool func_205(int iParam0, int iParam1, bool bParam2)
{
	iParam1 |= 1;
	if (bParam2)
	{
		iParam1 |= 2;
	}
	return func_53(iParam0, iParam1);
}

bool func_206(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_combat(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_207(int iParam0)
{
	if (!func_224(iParam0))
	{
		return 0;
	}
	if (!func_226(func_225(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_223(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_223(iParam0));
	return 1;
}

bool func_208(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_209(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_210(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_211(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_213(1);
	}
}

void func_212(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_213(0);
	}
}

void func_213(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_214(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

bool func_215(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_216(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_217(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_218(int iParam0, bool bParam1)
{
	if (!func_217(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_446(iParam0), func_447(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_446(iParam0), func_447(iParam0), 2, "");
		func_448(iParam0, 16);
	}
	else
	{
		if (func_217(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_446(iParam0), func_447(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_446(iParam0), func_447(iParam0), 0, "");
		}
		func_449(iParam0, 16);
	}
}

void func_219(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_217(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_446(iParam0), func_447(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_217(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_446(iParam0), func_447(iParam0), 1, "");
		}
		func_448(iParam0, 8);
	}
	else
	{
		if (func_217(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_446(iParam0), func_447(iParam0), 0, "");
		}
		func_449(iParam0, 8);
	}
}

int func_220(int iParam0)
{
	if (!func_427(iParam0))
	{
		return 0;
	}
	return func_451(func_450(iParam0));
}

int func_221(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -1;
	}
	return func_452(func_450(iParam0));
}

int func_222(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -1;
	}
	return func_453(func_450(iParam0));
}

int func_223(int iParam0)
{
	if (!func_224(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

bool func_224(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_225(int iParam0)
{
	if (!func_224(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_226(int iParam0)
{
	return iParam0 != 0;
}

bool func_227(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return false;
		}
		iVar0 = Global_12106[iParam0]->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return false;
		}
		iVar0 = func_429(iParam0);
	}
	if (iVar0 == 1)
	{
		return true;
	}
	if (iVar0 == 2)
	{
		return true;
	}
	return false;
}

bool func_228(int iParam0)
{
	iVar0 = func_301(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_229(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	if (vdist2(get_entity_coords(iParam0, bParam3, false), get_entity_coords(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

bool func_230(int iParam0)
{
	return get_entity_submerged_level(iParam0) > 0.7f;
}

bool func_231(int iParam0)
{
	if (!is_vehicle_stopped(iParam0))
	{
		return false;
	}
	vVar0 = { get_world_position_of_entity_bone(iParam0, get_entity_bone_index_by_name(iParam0, "seat_pside_r1")) };
	vVar3 = { get_world_position_of_entity_bone(iParam0, get_entity_bone_index_by_name(iParam0, "seat_dside_r1")) };
	vVar6 = { func_454(vVar0, vVar3, 0.5f) };
	vVar6.f_2 = (vVar6.z - 0.6f);
	if (get_number_of_fires_in_range(vVar6, 1f) > 0)
	{
		return true;
	}
	return false;
}

bool func_232(int iParam0)
{
	if (func_10(1073741824))
	{
		return true;
	}
	if (iParam0 == 2)
	{
		return true;
	}
	if (iParam0 == 8)
	{
		return true;
	}
	return false;
}

int func_233(int iParam0)
{
	vVar0 = { get_entity_rotation(iParam0, 2) };
	if (vVar0.y >= 140f || vVar0.y <= -140f)
	{
		return 3;
	}
	else if (vVar0.y > 50f && vVar0.y < 140f)
	{
		return 1;
	}
	else if (vVar0.y < -50f && vVar0.y > -140f)
	{
		return 2;
	}
	return 0;
}

bool func_234(int iParam0, int iParam1, bool bParam2)
{
	if (does_entity_exist(iParam1))
	{
		if (is_vehicle_driveable(iParam1, false, false))
		{
			if (!is_entity_dead(iParam0))
			{
				return is_ped_in_vehicle(iParam0, iParam1, bParam2);
			}
		}
	}
	return false;
}

bool func_235()
{
	return Global_1894899 & 2 != 0;
}

bool func_236()
{
	return func_455(512);
}

int func_237()
{
	return Global_1572887->f_12;
}

int func_238(bool bParam0, bool bParam1, bool bParam2)
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

bool func_239(int iParam0)
{
	return iParam0 != 0;
}

bool func_240(int iParam0)
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

int func_241(int iParam0)
{
	return iParam0;
}

void func_242(int iParam0)
{
	if (!func_456(iParam0))
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

bool func_243(int iParam0, vector3 vParam1, float fParam4)
{
	vVar0 = { get_entity_forward_vector(iParam0) };
	vVar3 = { vParam1 - get_entity_coords(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / vdist(vVar3, 0f, 0f, 0f)) > fParam4;
}

Vector3 func_244(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			StringCopy(&cVar0, "G_WARN", 24);
			break;
		case 1:
			StringCopy(&cVar0, "D_SHOCKED", 24);
			break;
		case 2:
			StringCopy(&cVar0, "D_THREAT", 24);
			break;
		case 3:
			StringCopy(&cVar0, "D_CHASE1", 24);
			break;
		case 4:
			StringCopy(&cVar0, "D_CHASE2", 24);
			break;
		case 5:
			StringCopy(&cVar0, "D_CHASE3", 24);
			break;
		case 6:
			StringCopy(&cVar0, "D_BLOCKED", 24);
			break;
		case 7:
			StringCopy(&cVar0, "D_NERV_01", 24);
			break;
		case 8:
			StringCopy(&cVar0, "D_NERV_02", 24);
			break;
		case 9:
			StringCopy(&cVar0, "D_NERV_03", 24);
			break;
		case 10:
			StringCopy(&cVar0, "D_SURR_01", 24);
			break;
		case 11:
			StringCopy(&cVar0, "D_SURR_02", 24);
			break;
		case 12:
			StringCopy(&cVar0, "D_SURR_03", 24);
			break;
		case 13:
			StringCopy(&cVar0, "V_NERV_01", 24);
			break;
		case 14:
			StringCopy(&cVar0, "V_DKILL", 24);
			break;
		case 15:
			StringCopy(&cVar0, "V_DKILL2", 24);
			break;
		case 16:
			StringCopy(&cVar0, "V_DHUP", 24);
			break;
		case 17:
			StringCopy(&cVar0, "V_FLEE_01", 24);
			break;
		case 18:
			StringCopy(&cVar0, "V_FLEE_02", 24);
			break;
		case 19:
			StringCopy(&cVar0, "V_INT_01", 24);
			break;
		case 20:
			StringCopy(&cVar0, "V_INT_02", 24);
			break;
		case 21:
			StringCopy(&cVar0, "V_INT_03", 24);
			break;
		case 22:
			StringCopy(&cVar0, "V_INT_05", 24);
			break;
		case 75:
			StringCopy(&cVar0, "V_EXP_01", 24);
			break;
		case 57:
			StringCopy(&cVar0, "P_CHASE", 24);
			break;
		case 59:
			StringCopy(&cVar0, "P_HALT", 24);
			break;
		case 60:
			StringCopy(&cVar0, "P_INT_01", 24);
			break;
		case 61:
			StringCopy(&cVar0, "P_INT_02", 24);
			break;
		case 62:
			StringCopy(&cVar0, "P_INT_03", 24);
			break;
		case 63:
			StringCopy(&cVar0, "P_INT_04", 24);
			break;
		case 64:
			StringCopy(&cVar0, "P_INT_05", 24);
			break;
		case 65:
			StringCopy(&cVar0, "P_ENT_01", 24);
			break;
		case 66:
			StringCopy(&cVar0, "P_ENT_02", 24);
			break;
		case 67:
			StringCopy(&cVar0, "P_HUP_01", 24);
			break;
		case 68:
			StringCopy(&cVar0, "P_HUP_02", 24);
			break;
		case 69:
			StringCopy(&cVar0, "P_EMPTY", 24);
			break;
		case 70:
			StringCopy(&cVar0, "P_HOLDH", 24);
			break;
		case 23:
			StringCopy(&cVar0, "D_RBL1", 24);
			break;
		case 24:
			StringCopy(&cVar0, "D_RBL2", 24);
			break;
		case 25:
			StringCopy(&cVar0, "D_RBL3", 24);
			break;
		case 26:
			StringCopy(&cVar0, "D_RBLH", 24);
			break;
		case 27:
			StringCopy(&cVar0, "D_RBLV", 24);
			break;
		case 28:
			StringCopy(&cVar0, "D_NOISE", 24);
			break;
		case 29:
			StringCopy(&cVar0, "S_GRD_01", 24);
			break;
		case 30:
			StringCopy(&cVar0, "S_GRD_02", 24);
			break;
		case 31:
			StringCopy(&cVar0, "S_GRD_03", 24);
			break;
		case 32:
			StringCopy(&cVar0, "S_GRD_04", 24);
			break;
		case 33:
			StringCopy(&cVar0, "C_GRT", 24);
			break;
		case 71:
			StringCopy(&cVar0, "P_ILOR", 24);
			break;
		case 72:
			StringCopy(&cVar0, "P_ILOT", 24);
			break;
		case 34:
			StringCopy(&cVar0, "D_ILOR", 24);
			break;
		case 35:
			StringCopy(&cVar0, "D_ILOT", 24);
			break;
		case 36:
			StringCopy(&cVar0, "D_ILOT_02", 24);
			break;
		case 37:
			StringCopy(&cVar0, "D_ILOT_03", 24);
			break;
		case 38:
			StringCopy(&cVar0, "G_ILOT", 24);
			break;
		case 40:
			StringCopy(&cVar0, "S_ILOT", 24);
			break;
		case 73:
			StringCopy(&cVar0, "P_ILOG", 24);
			break;
		case 74:
			StringCopy(&cVar0, "P_ILOS", 24);
			break;
		case 41:
			StringCopy(&cVar0, "D_ILOG", 24);
			break;
		case 42:
			StringCopy(&cVar0, "D_ILOS", 24);
			break;
		case 76:
			StringCopy(&cVar0, "P_ILOTV1", 24);
			break;
		case 77:
			StringCopy(&cVar0, "P_ILOTV2", 24);
			break;
		case 78:
			StringCopy(&cVar0, "P_ILOPV1", 24);
			break;
		case 79:
			StringCopy(&cVar0, "P_ILOPV2", 24);
			break;
		case 43:
			StringCopy(&cVar0, "V_ILOTV1", 24);
			break;
		case 44:
			StringCopy(&cVar0, "V_ILOTV2", 24);
			break;
		case 45:
			StringCopy(&cVar0, "V_ILOPV1", 24);
			break;
		case 46:
			StringCopy(&cVar0, "V_ILOPV2", 24);
			break;
		case 47:
			StringCopy(&cVar0, "B_SPOT", 24);
			break;
		case 48:
			StringCopy(&cVar0, "D_INIT", 24);
			break;
		case 49:
			StringCopy(&cVar0, "D_DODGY", 24);
			break;
		case 50:
			StringCopy(&cVar0, "E_CHAT_01", 24);
			break;
		case 52:
			StringCopy(&cVar0, "E_WARN_01", 24);
			break;
		case 53:
			StringCopy(&cVar0, "E_WARN_02", 24);
			break;
		case 80:
			StringCopy(&cVar0, "P_ARST1", 24);
			break;
		case 81:
			StringCopy(&cVar0, "P_ARST2", 24);
			break;
		case 82:
			StringCopy(&cVar0, "E_TRICK", 24);
			break;
		case 83:
			StringCopy(&cVar0, "D_WORRY", 24);
			break;
		case 51:
			StringCopy(&cVar0, "E_ATT", 24);
			break;
		case 54:
			StringCopy(&cVar0, "D_WRN_01", 24);
			break;
		case 55:
			StringCopy(&cVar0, "D_WRN_02", 24);
			break;
		case 56:
			StringCopy(&cVar0, "D_WRN_03", 24);
			break;
		case 58:
			StringCopy(&cVar0, "V_INT_04", 24);
			break;
	}
	if (func_457() && iParam1 >= 57)
	{
		StringConCat(&cVar0, "J", 24);
	}
	switch (iParam0)
	{
		case 0:
			StringConCat(&cVar0, "_CRST1", 24);
			break;
		case 1:
			StringConCat(&cVar0, "_CRST2", 24);
			break;
		case 2:
			StringConCat(&cVar0, "_CRST3", 24);
			break;
		case 4:
			StringConCat(&cVar0, "_CRRH1", 24);
			break;
		case 5:
			StringConCat(&cVar0, "_CRRH2", 24);
			break;
		case 6:
			StringConCat(&cVar0, "_CRRH3", 24);
			break;
		case 8:
			StringConCat(&cVar0, "_CRCA1", 24);
			break;
		case 9:
			StringConCat(&cVar0, "_CRCA2", 24);
			break;
		case 10:
			StringConCat(&cVar0, "_CRCA3", 24);
			break;
		case 11:
			StringConCat(&cVar0, "_CRCA4", 24);
			break;
		case 13:
			StringConCat(&cVar0, "_CRRL3", 24);
			break;
		case 12:
			StringConCat(&cVar0, "_CRRSC", 24);
			break;
	}
	return cVar0;
}

bool func_245(int iParam0, int iParam1)
{
	return func_458(iParam0, get_entity_coords(iParam1, true, false));
}

int func_246()
{
	switch (Local_51.f_2414)
	{
		case 1:
			return 30;
		case 2:
			return 31;
		default:
			break;
	}
	return 29;
}

bool func_247(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

int func_248(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	if (func_120(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_459(iVar0, 2))
		{
			if (func_460(vParam2, (*Global_1945938)[iVar0]->f_6, 0.01f, 1) && iParam1 == (*Global_1945938)[iVar0]->f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_461(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1065353216, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

int func_249(int iParam0, char* sParam1, int iParam2, char* sParam3)
{
	if (func_250(iParam0, sParam1, sParam3, &vVar0, &vVar3))
	{
		set_entity_coords(iParam2, vVar0, true, false, true, true);
		set_entity_rotation(iParam2, vVar3, 2, true);
		return 1;
	}
	return 0;
}

bool func_250(int iParam0, char* sParam1, char* sParam2, var uParam3, var uParam4)
{
	if (_get_anim_scene_entity_matrix(iParam0, sParam1, &Var0, true, sParam2, 2))
	{
		*uParam3 = { Var0 };
		*uParam4 = { Var0.f_3 };
		return true;
	}
	return false;
}

void func_251(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_240(iParam0))
	{
		return;
	}
	iVar0 = func_241(iParam0);
	if (bParam1)
	{
		func_462(iParam0, 4);
		func_463(iVar0, 1);
		func_464(iVar0, 1);
	}
	else
	{
		func_465(iParam0, 4);
		func_464(iVar0, 0);
	}
}

void func_252(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_240(iParam0))
	{
		return;
	}
	iVar0 = func_241(iParam0);
	func_463(iVar0, bParam1);
}

bool func_253(int iParam0, bool bParam1)
{
	if (bParam1 && !func_240(iParam0))
	{
		return false;
	}
	iVar0 = func_241(iParam0);
	return _uiprompt_is_just_pressed((*Global_1945938)[iVar0]->f_3);
}

bool func_254(int iParam0, vector3 vParam1, float fParam4, float fParam5, float fParam6, bool bParam7)
{
	fVar0 = func_466(get_entity_heading(iParam0));
	fParam4 = func_466(fParam4);
	if (is_entity_at_coord(iParam0, vParam1, fParam5, fParam5, 2f, false, bParam7, 0) && absf((fVar0 - fParam4)) <= fParam6)
	{
		return true;
	}
	return false;
}

int func_255(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_459(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_461(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 0, bParam11, bParam12);
		return iVar1;
	}
	return 0;
}

bool func_256(int iParam0, bool bParam1)
{
	if (bParam1 && !func_240(iParam0))
	{
		return false;
	}
	iVar0 = func_241(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_has_mash_mode_completed((*Global_1945938)[iVar0]->f_3);
	}
	return _uiprompt_has_hold_mode_completed((*Global_1945938)[iVar0]->f_3);
}

float func_257(int iParam0, bool bParam1)
{
	if (bParam1 && !func_240(iParam0))
	{
		return 0f;
	}
	iVar0 = func_241(iParam0);
	if (_uiprompt_has_mash_mode((*Global_1945938)[iVar0]->f_3))
	{
		return _uiprompt_get_mash_mode_progress((*Global_1945938)[iVar0]->f_3);
	}
	return _0x81801291806dbc50((*Global_1945938)[iVar0]->f_3);
}

void func_258()
{
	if ((_get_anim_scene_progress(Local_51.f_2410) > 0.398282f && _get_anim_scene_progress(Local_51.f_2410) < 0.76533f) && func_95(Global_1392388->f_5))
	{
		if (!func_10(32768))
		{
			func_72(32768);
		}
	}
}

void func_259(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_126() - fParam1);
	func_467(uParam0, 1);
	func_468(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_260(var uParam0)
{
	if (func_53(uParam0->f_9, 0) && !is_entity_dead(uParam0->f_1))
	{
		uParam0->f_626 = 1;
	}
}

void func_261(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return;
	}
	_uilog_set_cached_objective(_create_var_string(2, sParam0));
}

var func_262(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_469(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_409(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_469(sVar0, iParam1, 0, 0, 1, 1);
}

void func_263(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	iVar0 = 4;
	if (!_uilog_is_entry_registered(iVar0, func_135(iParam0)))
	{
		return;
	}
	_uilog_add_or_update_objective(iVar0, func_135(iParam0), get_hash_key(sParam1), sParam2, fParam3 >= 0.9f, false, false);
}

void func_264(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < uParam3->f_97)
	{
		if (does_entity_exist(uParam3[iVar0]))
		{
			if (!is_entity_dead(uParam3[iVar0]))
			{
				add_ped_to_conversation(&uParam0, uParam3[iVar0], &((*uParam3)[iVar0]->f_1));
			}
		}
		iVar0++;
	}
}

bool func_265()
{
	if (get_current_ped_weapon(Global_35, &iVar0, true, 0, false) && iVar0 != -1569615261)
	{
		return true;
	}
	return false;
}

bool func_266(var uParam0)
{
	return _0xd89504d9d7d5057d(uParam0);
}

void func_267(var uParam0, int iParam1, bool bParam2)
{
	if (func_53(uParam0->f_9, 0) && !is_entity_dead(uParam0->f_1))
	{
		uParam0->f_613 = 0;
		uParam0->f_626 = 0;
		if (bParam2)
		{
			uParam0->f_614 = 1;
			iVar1 = 524308;
		}
		else
		{
			iVar1 = 0;
		}
		if (func_10(1))
		{
			fVar0 = func_195(iParam1);
		}
		else
		{
			fVar0 = func_333(uParam0, iParam1);
		}
		func_100(&(uParam0->f_643));
		if (!is_string_null_or_empty(func_470(iParam1)) && !func_10(1))
		{
			request_vehicle_recording(0, func_470(iParam1));
			if (has_vehicle_recording_been_loaded(0, func_470(iParam1)))
			{
				start_playback_recorded_vehicle(uParam0->f_1, 0, func_470(iParam1), true);
				skip_time_in_playback_recorded_vehicle(uParam0->f_1, func_471(iParam1));
				func_472(uParam0, iParam1, func_10(1));
			}
		}
		else
		{
			func_473(uParam0->f_9, uParam0->f_1, func_194(iParam1), fVar0, iVar1);
			func_472(uParam0, iParam1, func_10(1));
		}
	}
}

int func_268(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_ped_injured(iParam0))
	{
		return 0;
	}
	iVar4 = _0x4642182a298187d0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_269(var uParam0, float fParam1)
{
	if (func_474(uParam0, fParam1))
	{
		func_42(uParam0);
		return true;
	}
	return false;
}

bool func_270(var uParam0, int iParam1)
{
	if (uParam0->f_25[iParam1]->f_613)
	{
		return true;
	}
	return false;
}

void func_271(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_272(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

Vector3 func_273(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x < vParam3.x)
	{
		vVar0.x = (vParam0.x - fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x - fParam6);
	}
	if (vParam0.y < vParam3.y)
	{
		vVar0.f_1 = (vParam0.y - fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y - fParam6);
	}
	if (vParam0.z < vParam3.z)
	{
		vVar0.f_2 = (vParam0.z - fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z - fParam6);
	}
	return vVar0;
}

Vector3 func_274(vector3 vParam0, vector3 vParam3, float fParam6)
{
	if (vParam0.x > vParam3.x)
	{
		vVar0.x = (vParam0.x + fParam6);
	}
	else
	{
		vVar0.x = (vParam3.x + fParam6);
	}
	if (vParam0.y > vParam3.y)
	{
		vVar0.f_1 = (vParam0.y + fParam6);
	}
	else
	{
		vVar0.f_1 = (vParam3.y + fParam6);
	}
	if (vParam0.z > vParam3.z)
	{
		vVar0.f_2 = (vParam0.z + fParam6);
	}
	else
	{
		vVar0.f_2 = (vParam3.z + fParam6);
	}
	return vVar0;
}

void func_275(struct<6> Param0, int iParam6, var uParam7)
{
	func_475(Param0, iParam6, uParam7);
	func_476(uParam7);
}

void func_276()
{
	iLocal_38 = 8;
}

void func_277()
{
	if (iLocal_38 == 8)
	{
		Local_51.f_25[0]->f_1.f_1 = -1758092337;
		Local_51.f_2214[0]->f_1 = -1623912517;
		Local_51.f_2214[1]->f_1 = -556702806;
		Local_51.f_2214[2]->f_1 = 1543921530;
		Local_51.f_2214[3]->f_1 = -38907170;
		Local_51.f_2214[4]->f_1 = -80754878;
		Local_51.f_2214[5]->f_1 = -80754878;
	}
}

void func_278(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		request_model(uParam0->f_25[iVar0]->f_1.f_1, false);
		request_model(uParam0->f_25[iVar0]->f_9.f_1, false);
		if (uParam0->f_25[iVar0]->f_174.f_74)
		{
			request_model(uParam0->f_25[iVar0]->f_174.f_1, false);
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0]->f_499)
		{
			request_model(uParam0->f_25[iVar0]->f_410[iVar1]->f_1, false);
			request_model(uParam0->f_25[iVar0]->f_410[iVar1]->f_8, false);
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < uParam0->f_25[iVar0]->f_409)
		{
			request_model(uParam0->f_25[iVar0]->f_252[iVar2]->f_1, false);
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < uParam0->f_25[iVar0]->f_523)
		{
			request_model(uParam0->f_25[iVar0]->f_500[iVar3]->f_1, false);
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < uParam0->f_25[iVar0]->f_540)
		{
			request_model(uParam0->f_25[iVar0]->f_524[iVar4]->f_1, false);
			iVar4++;
		}
		iVar5 = 0;
		while (iVar5 < uParam0->f_25[iVar0]->f_595)
		{
			request_model(uParam0->f_25[iVar0]->f_541[iVar5]->f_1, false);
			request_model(uParam0->f_25[iVar0]->f_541[iVar5]->f_8, false);
			iVar5++;
		}
		iVar0++;
	}
	if (func_15(uParam0, 65536))
	{
		iVar6 = 0;
		while (iVar6 < 2)
		{
			request_model(uParam0->f_5[iVar6]->f_1, false);
			iVar6++;
		}
	}
	if (iParam1 == 3)
	{
		iVar7 = 0;
		while (iVar7 < 15)
		{
			if (is_model_valid(uParam0->f_2214[iVar7]->f_1))
			{
				request_model(uParam0->f_2214[iVar7]->f_1, false);
			}
			iVar7++;
		}
		if (uParam0->f_2265)
		{
			_request_propset(uParam0->f_2261);
		}
	}
}

void func_279(int iParam0)
{
	_text_database_request("SCRB");
	if (!is_string_null_or_empty(func_477(iParam0)))
	{
		_text_database_request(func_477(iParam0));
	}
}

void func_280(int iParam0)
{
	request_waypoint_recording(func_194(iParam0));
}

bool func_281(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!has_model_loaded(uParam0->f_25[iVar0]->f_1.f_1))
		{
			return false;
		}
		if (!has_model_loaded(uParam0->f_25[iVar0]->f_9.f_1))
		{
			return false;
		}
		if (uParam0->f_25[iVar0]->f_174.f_74)
		{
			if (!has_model_loaded(uParam0->f_25[iVar0]->f_174.f_1))
			{
				return false;
			}
		}
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0]->f_499)
		{
			if (!has_model_loaded(uParam0->f_25[iVar0]->f_410[iVar1]->f_1))
			{
				return false;
			}
			if (!has_model_loaded(uParam0->f_25[iVar0]->f_410[iVar1]->f_8))
			{
				return false;
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < uParam0->f_25[iVar0]->f_409)
		{
			if (!has_model_loaded(uParam0->f_25[iVar0]->f_252[iVar2]->f_1))
			{
				return false;
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < uParam0->f_25[iVar0]->f_523)
		{
			if (!has_model_loaded(uParam0->f_25[iVar0]->f_500[iVar3]->f_1))
			{
				return false;
			}
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < uParam0->f_25[iVar0]->f_540)
		{
			if (!has_model_loaded(uParam0->f_25[iVar0]->f_524[iVar4]->f_1))
			{
				return false;
			}
			iVar4++;
		}
		iVar5 = 0;
		while (iVar5 < uParam0->f_25[iVar0]->f_595)
		{
			if (!has_model_loaded(uParam0->f_25[iVar0]->f_541[iVar5]->f_1))
			{
				return false;
			}
			if (!has_model_loaded(uParam0->f_25[iVar0]->f_541[iVar5]->f_8))
			{
				return false;
			}
			iVar5++;
		}
		iVar0++;
	}
	if (func_15(uParam0, 65536))
	{
		iVar6 = 0;
		while (iVar6 < 2)
		{
			if (!has_model_loaded(uParam0->f_5[iVar6]->f_1))
			{
				return false;
			}
			iVar6++;
		}
	}
	if (iParam1 == 3)
	{
		iVar7 = 0;
		while (iVar7 < 15)
		{
			if (is_model_valid(uParam0->f_2214[iVar7]->f_1))
			{
				if (!has_model_loaded(uParam0->f_2214[iVar7]->f_1))
				{
					return false;
				}
			}
			iVar7++;
		}
		if (uParam0->f_2265)
		{
			if (!_has_propset_loaded(uParam0->f_2261))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_282(int iParam0)
{
	if (!_text_database_has_loaded("SCRB"))
	{
		return false;
	}
	if (!is_string_null_or_empty(func_477(iParam0)))
	{
		if (!_text_database_has_loaded(func_477(iParam0)))
		{
			return false;
		}
	}
	return true;
}

bool func_283(int iParam0)
{
	if (!get_is_waypoint_recording_loaded(func_194(iParam0)))
	{
		return false;
	}
	return true;
}

int func_284(var uParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_2266)
	{
		iVar0 = (iVar0 + ((((uParam0->f_25[iVar1]->f_409 + uParam0->f_25[iVar1]->f_523) + uParam0->f_25[iVar1]->f_499 * 2) + uParam0->f_25[iVar1]->f_595 * 2) + uParam0->f_25[iVar1]->f_8) + 1);
		if (uParam0->f_25[iVar1]->f_174.f_74)
		{
			iVar0++;
		}
		iVar1++;
	}
	if (func_15(uParam0, 65536))
	{
		iVar0 += 2;
	}
	iVar0++;
	return iVar0;
}

int func_285(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	if (!_does_volume_exist(iParam0))
	{
		return 0;
	}
	vVar0 = { _0xf70f00013a62f866(iParam0) };
	vVar3 = { _0x3e2a25b2416dd67e(iParam0) };
	iVar6 = func_179(vVar0, vVar3.x, sParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
	return iVar6;
}

int func_286()
{
	return Global_1572864->f_9;
}

Vector3 func_287()
{
	if (func_444(iLocal_25))
	{
		return -1748.116f, -395.6581f, 155.3117f;
	}
	return 1272.605f, -1308.233f, 75.3937f;
}

float func_288()
{
	if (func_444(iLocal_25))
	{
		return 2.683f;
	}
	return 322.5122f;
}

Vector3 func_289(int iParam0)
{
	vVar0 = { 0f, 0f, 0f };
	switch (iParam0)
	{
		case 0:
			vVar0 = { -1459.863f, -939.7065f, 69.4923f };
			break;
		case 1:
			vVar0 = { -1564.817f, 152.6783f, 105.3872f };
			break;
		case 2:
			vVar0 = { -2698.419f, -298.523f, 147.909f };
			break;
		case 4:
			vVar0 = { 1068.479f, -435.4691f, 90.3698f };
			break;
		case 5:
			vVar0 = { 1401.751f, -1794.102f, 63.2199f };
			break;
		case 6:
			vVar0 = { 1475.728f, -775.874f, 49.8547f };
			break;
	}
	return vVar0;
}

float func_290(int iParam0)
{
	fVar0 = 0f;
	switch (iParam0)
	{
		case 0:
			fVar0 = 244.8479f;
			break;
		case 1:
			fVar0 = 285.9957f;
			break;
		case 2:
			fVar0 = 46.5826f;
			break;
		case 4:
			fVar0 = 328.8338f;
			break;
		case 5:
			fVar0 = 220.5335f;
			break;
		case 6:
			fVar0 = 343.714f;
			break;
	}
	return fVar0;
}

void func_291(var uParam0, vector3 vParam1, float fParam4)
{
	uParam0->f_1 = create_vehicle(uParam0->f_1.f_1, vParam1, fParam4, true, true, false, false);
	if (uParam0->f_678 != -1)
	{
		_0x8c6d9a399126c194(uParam0->f_1, uParam0->f_678);
	}
	uParam0->f_596 = get_vehicle_estimated_max_speed(uParam0->f_1);
	add_entity_to_audio_mix_group(uParam0->f_1, "Robberies_Coach_Target_Group", 0f);
	func_478(uParam0->f_1);
	func_479(uParam0->f_1);
	_0x850ce59dec2028f3(uParam0->f_1, 0);
	Global_1392388->f_5 = uParam0->f_1;
}

void func_292(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (iParam0 == 8)
	{
		func_480(uParam2, uParam1, bParam3);
	}
	if (uParam1->f_1.f_1 == -1758092337)
	{
		set_vehicle_extra(uParam1->f_1, 5, true);
	}
}

void func_293(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_294(var uParam0, int iParam1)
{
	if (func_457())
	{
		func_481(&(uParam0->f_2286), Global_35, "JOHN", 0);
	}
	else
	{
		func_481(&(uParam0->f_2286), Global_35, "ARTHUR", 0);
	}
	switch (iParam1)
	{
		case 0:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRB_DRIVER_STR1", 0);
			func_481(&(uParam0->f_2286), &(uParam0->f_25[0]->f_410[0]), "CHRB_GUARD_STR1", 0);
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_174, "CHRB_GUARD2_STR1", 0);
			break;
		case 1:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRB_DRIVER_STR2", 0);
			func_481(&(uParam0->f_2286), &(uParam0->f_25[0]->f_410[1]), "CHRB_GUARD_STR2", 0);
			func_481(&(uParam0->f_2286), &(uParam0->f_25[0]->f_410[0]), "CHRB_GUARD2_STR2", 0);
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_174, "CHRB_SHOTGUN_STR2", 0);
			break;
		case 2:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRB_DRIVER_STR3", 0);
			break;
		case 4:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRB_DRIVER_RHD1", 0);
			func_481(&(uParam0->f_2286), &(uParam0->f_25[0]->f_500[0]), "CHRB_GUARD_RHD1", 0);
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_174, "CHRB_SHOTGUN_RHD1", 0);
			break;
		case 5:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRB_DRIVER_RHD2", 0);
			func_481(&(uParam0->f_2286), &(uParam0->f_25[0]->f_252[0]), "CHRB_BUSINESSMAN_RHD2", 0);
			break;
		case 6:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRB_DRIVER_RHD3", 0);
			break;
		case 13:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRB_DRIVER_RTL3", 0);
			break;
		case 12:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "RCHRB1_DRIVER", 0);
			break;
		case 8:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRC1_DRIVER", 0);
			break;
		case 9:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRC2_DRIVER", 0);
			break;
		case 10:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "CHRC3_DRIVER", 0);
			break;
		case 11:
			func_481(&(uParam0->f_2286), uParam0->f_25[0]->f_9, "Comp4_Driver", 0);
			break;
	}
}

void func_295(var uParam0, int iParam1)
{
	if (!is_entity_dead(*uParam0))
	{
		decor_set_int(*uParam0, "wagonFenceValue", iParam1);
	}
}

void func_296(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	clear_area(vParam0, fParam3, iVar0);
}

bool func_297(var uParam0, vector3 vParam1, float fParam4)
{
	Var0.f_10 = 7;
	Var0 = 0;
	Var0.f_1 = 0;
	Var0.f_4 = 0;
	Var0.f_3 = 0;
	Var0.f_6 = { vParam1 };
	if (fParam4 == -1f)
	{
		Var0.f_9 = get_random_float_in_range(0f, 360f);
	}
	else
	{
		Var0.f_9 = fParam4;
	}
	Var0.f_2 = 0;
	iVar11 = 0;
	*uParam0 = func_482(&iVar11, &Var0);
	if (iVar11 == 0)
	{
		return false;
	}
	else if (iVar11 == 1)
	{
		return true;
	}
	else if (iVar11 == 2)
	{
		return true;
	}
	return true;
}

void func_298(var uParam0, int iParam1)
{
	iVar0 = func_483(iParam1);
	bVar1 = !func_24(iParam1);
	func_335(func_483(iParam1), bVar1, 0.5f, 1, 0, 0, 1, 752097756);
	uParam0->f_2067 = (uParam0->f_2067 + iVar0);
}

void func_299(bool bParam0)
{
	if (!func_437(0, 0, 1) || bParam0)
	{
		iVar0 = func_484();
		iVar1 = func_485(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_486(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_486(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
		animpostfx_play("RespawnWithHonor");
		_0xf972f0ab16dc5260("RespawnWithHonor", 1, fVar3);
		_0xf972f0ab16dc5260("RespawnWithHonor", 2, fVar2);
		_0xf972f0ab16dc5260("RespawnWithHonor", 3, fVar4);
	}
	else
	{
		animpostfx_play("RespawnMissionCheckpoint");
	}
}

void func_300(int iParam0, bool bParam1)
{
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + get_entity_health(Global_35));
	if (bParam1 && iVar0 < 0)
	{
		_0x835f131e7dc8f97a(Global_35, to_float(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > get_entity_max_health(Global_35, false))
	{
		_set_entity_health(Global_35, get_entity_max_health(Global_35, false), 0);
	}
	else
	{
		_set_entity_health(Global_35, iVar1, 0);
	}
}

int func_301(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -1;
	}
	return func_429(iParam0);
}

void func_302(int iParam0, bool bParam1)
{
	if (!func_427(iParam0))
	{
		return;
	}
	if (!func_487(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_428(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_428(iParam0)))
		{
			_0xca41e86545413b5b(func_220(iParam0), func_221(iParam0), func_222(iParam0), func_428(iParam0), Global_36);
		}
	}
	func_433(iParam0, 1);
	bParam1 = bParam1;
}

void func_303(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_427(iParam0))
	{
		return;
	}
	if (!func_227(iParam0))
	{
		return;
	}
	iVar0 = func_220(iParam0);
	if (bParam1)
	{
		if (func_428(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_428(iParam0)))
		{
		}
		else
		{
			if (iVar0 == 1 && iParam0 != (*Global_1835011)[77]->f_1)
			{
				func_488(func_221(iParam0));
			}
			if (func_237() != 0)
			{
				_0xb2a38826e5886e83(func_428(iParam0), 0);
			}
			else
			{
				_0xb2a38826e5886e83(func_428(iParam0), Global_265238->f_79565.f_208.f_17);
			}
		}
	}
	func_489(iParam0);
	if (!func_427(func_201(0)))
	{
		func_433(iParam0, 3);
		func_121(bParam2);
		if (func_237() == -1)
		{
			if (bParam2 == 0)
			{
				_0x55f37f5f3f2475e1();
			}
			func_432(1);
		}
		func_490(iParam0, -1);
		if (bParam1 && !func_491(2))
		{
			func_492(&Global_0, 1024);
		}
		if (func_237() == -1)
		{
			func_493(&(Global_1347343->f_11), 536870912);
			func_494(2);
			Global_1357515 = -1;
			if (iVar0 == 1)
			{
				func_495(0);
			}
			if (iVar0 == 1 || iVar0 == 8)
			{
				func_496(0);
			}
		}
		if (func_237() == -1)
		{
			iVar1 = func_439(iParam0);
			if (iVar1 != -1)
			{
				iVar1 = func_441();
				switch (iVar1)
				{
					case 0:
						func_497(0);
						break;
					case 1:
						func_497(1);
						break;
					case 2:
						func_497(2);
						break;
					case 3:
						func_497(3);
						break;
					case 4:
						func_497(4);
						break;
					case 5:
						func_497(5);
						break;
					case 6:
						func_497(5);
						break;
					case 7:
						func_497(7);
						break;
					case 8:
						func_497(8);
						break;
				}
			}
			else if (iVar0 == 1)
			{
				switch (func_221(iParam0))
				{
					case 7:
					case 8:
					case 36:
						func_497(11);
						break;
				}
			}
			else if (iVar0 == 8)
			{
				switch (func_221(iParam0))
				{
					case 6:
					case 7:
					case 21:
					case 24:
					case 25:
					case 69:
					case 70:
					case 139:
						func_497(11);
						break;
					default:
						iVar1 = func_441();
						if (iVar1 != -1)
						{
							switch (iVar1)
							{
								case 0:
									func_498(0);
									break;
								case 1:
									func_498(1);
									break;
								case 2:
									func_498(2);
									break;
								case 3:
									func_498(3);
									break;
								case 4:
									func_498(4);
									break;
								case 5:
									func_498(5);
									break;
								case 6:
									func_498(5);
									break;
								case 7:
									func_498(7);
									break;
								case 8:
									func_498(8);
									break;
								default:
									break;
							}
						}
						break;
				}
			}
		}
		func_436(1);
	}
	else
	{
		func_490(iParam0, -1);
		func_433(iParam0, 4);
	}
	func_442(iParam0, 0);
}

void func_304(int iParam0, bool bParam1)
{
	if (func_237() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_491(32768))
	{
		return;
	}
	if (!func_491(32768))
	{
		func_499(1, bParam1);
	}
	_queue_savegame_operation(iParam0);
	_copy_memory((*Global_2621440)[iParam0], &Global_40, 12066);
	_copy_memory((*Global_2645573)[iParam0], &Global_12106, 5398);
	_copy_memory((*Global_2656370)[iParam0], &Global_17504, 3206);
	_copy_memory((*Global_2662783)[iParam0], &Global_20710, 2408);
	_copy_memory((*Global_2667600)[iParam0], &Global_23118, 1769);
	_copy_memory((*Global_2671139)[iParam0], &Global_24887, 1909);
	_copy_memory((*Global_2674958)[iParam0], &Global_26796, 777);
	_copy_memory((*Global_2676513)[iParam0], &Global_27573, 4501);
	_copy_memory((*Global_2685516)[iParam0], &Global_32074, 4234);
	if (func_491(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_414();
	}
}

int func_305(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_306(int iParam0, int iParam1)
{
	return func_500(&uVar0, iParam0, iParam1);
}

bool func_307(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

void func_308(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_307(iVar3) && _0x705be297eebdb95d(iVar3))
			{
				if (bParam0)
				{
					if (get_ammo_in_ped_weapon(Global_35, iVar3) < _get_weapon_clip_size(iVar3) * 4)
					{
						_add_ammo_to_ped_by_type(Global_35, _get_ammo_type_for_weapon(iVar3), (_get_weapon_clip_size(iVar3) * 4 - get_ped_ammo_by_type(Global_35, get_ped_ammo_type_from_weapon(Global_35, iVar3))), 752097756);
					}
				}
				iVar0 = get_ammo_in_ped_weapon(Global_35, iVar3);
				if (iVar0 > _get_weapon_clip_size(iVar3))
				{
					iVar1 = _get_weapon_clip_size(iVar3);
				}
				else
				{
					iVar1 = iVar0;
				}
				if (iVar1 > 0)
				{
					set_ammo_in_clip(Global_35, iVar3, iVar1);
				}
				iVar1 = 0;
				iVar0 = 0;
			}
		}
		iVar2++;
	}
	if (bParam1 && _0x21091b4beb6376ee(get_player_index()) == 0)
	{
		func_501(1);
	}
}

void func_309(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_502(vParam1, 1);
}

int func_310(int iParam0)
{
	if (func_220(iParam0) == 1)
	{
		return func_221(iParam0);
	}
	return -1;
}

char[] func_311(int iParam0)
{
	if (!func_503(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

int func_312(int iParam0)
{
	if (func_220(iParam0) == 8)
	{
		return func_221(iParam0);
	}
	return -1;
}

char[] func_313(int iParam0)
{
	if (!func_216(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

bool func_314(int iParam0)
{
	if (func_237() != -1)
	{
		return false;
	}
	if (!func_216(iParam0))
	{
		return false;
	}
	return func_228((*Global_1347702)[iParam0]->f_15);
}

Vector3 func_315(int iParam0)
{
	if (!func_199(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1392388->f_10[iParam0]->f_5;
}

void func_316(int iParam0, bool bParam1)
{
	if (func_10(16))
	{
		_blip_set_modifier(iParam0, -1186550032);
		func_21(16);
		return;
	}
	set_blip_name_from_text_file(iParam0, "PROC_BLIP_CHROB");
	if (bParam1)
	{
	}
}

void func_317(var uParam0, bool bParam1)
{
	if (func_53(uParam0->f_9, 3))
	{
		if (is_entity_on_screen(uParam0->f_9))
		{
			set_ped_as_no_longer_needed(&(uParam0->f_9));
		}
		else
		{
			delete_ped(&(uParam0->f_9));
		}
	}
	if (func_53(uParam0->f_174, 3))
	{
		if (is_entity_on_screen(uParam0->f_174))
		{
			set_ped_as_no_longer_needed(&(uParam0->f_174));
		}
		else
		{
			delete_ped(&(uParam0->f_174));
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_53(&(uParam0->f_410[iVar0]), 3))
		{
			if (is_entity_on_screen(&(uParam0->f_410[iVar0])))
			{
				set_ped_as_no_longer_needed(uParam0->f_410[iVar0]);
			}
			else
			{
				delete_ped(uParam0->f_410[iVar0]);
			}
		}
		if (func_53(uParam0->f_410[iVar0]->f_7, 3))
		{
			if (is_entity_on_screen(uParam0->f_410[iVar0]->f_7))
			{
				set_ped_as_no_longer_needed(&(uParam0->f_410[iVar0]->f_7));
			}
			else
			{
				delete_ped(&(uParam0->f_410[iVar0]->f_7));
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_523)
	{
		if (func_53(&(uParam0->f_500[iVar1]), 3))
		{
			if (is_entity_on_screen(&(uParam0->f_500[iVar1])))
			{
				set_ped_as_no_longer_needed(uParam0->f_500[iVar1]);
			}
			else
			{
				delete_ped(uParam0->f_500[iVar1]);
			}
		}
		iVar1++;
	}
	if (!bParam1)
	{
		func_46(&(uParam0->f_1.f_2));
		if (!is_entity_dead(uParam0->f_1))
		{
			if (is_entity_on_screen(uParam0->f_1))
			{
				set_vehicle_as_no_longer_needed(&(uParam0->f_1));
			}
			else
			{
				delete_vehicle(&(uParam0->f_1));
			}
		}
	}
}

bool func_318()
{
	if (iLocal_25 != 5)
	{
		return false;
	}
	if (!func_10(1))
	{
		return false;
	}
	if (func_15(&Local_51, 16))
	{
		return false;
	}
	return true;
}

void func_319(int iParam0)
{
	iVar0 = Local_51.f_25[iParam0]->f_9;
	if (!func_53(iVar0, 0))
	{
		return;
	}
	if (!is_ped_sitting_in_any_vehicle(iVar0))
	{
		return;
	}
	if (Local_51.f_25[iParam0]->f_611 || Local_51.f_25[iParam0]->f_613)
	{
		return;
	}
	if (func_87(Local_51.f_25[iParam0]->f_1, Global_36, 1) > 50f)
	{
		return;
	}
	switch (iLocal_35)
	{
		case 0:
			if (func_26(&(Local_51.f_2158)) > 5f)
			{
				if (!_0xfe5c6177064bd390(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 3))
					{
						iLocal_35 = 1;
					}
				}
			}
			break;
		case 1:
			if (func_26(&(Local_51.f_2158)) > 15f)
			{
				if (!_0xfe5c6177064bd390(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 4))
					{
						iLocal_35 = 2;
					}
				}
			}
			break;
		case 2:
			if (func_26(&(Local_51.f_2158)) > 25f)
			{
				if (!_0xfe5c6177064bd390(1))
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 5))
					{
						iLocal_35 = 6;
					}
				}
			}
			break;
	}
}

bool func_320(var uParam0)
{
	if (uParam0->f_1.f_1 == 1761016051)
	{
		if (vdist(Global_36, get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) < 2f)
		{
			iVar0 = _get_scenario_point_type_ped_is_using(Global_35);
			if (iVar0 == -1247042764 || iVar0 == 839791972)
			{
				return true;
			}
		}
	}
	return false;
}

void func_321(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		func_504(uParam0->f_410[iVar0], iVar0, iParam1);
		iVar0++;
	}
}

void func_322(var uParam0, int iParam1)
{
	if (uParam0->f_595 == 0)
	{
		return;
	}
	iVar0 = func_505();
	switch (uParam0->f_594)
	{
		case 0:
			if (func_506(uParam0))
			{
				func_507(uParam0, &Local_51, iLocal_24, iLocal_46);
				if (uParam0->f_673 && uParam0->f_674)
				{
					iVar1 = 0;
					while (iVar1 < uParam0->f_595)
					{
						if (func_53(&(uParam0->f_541[iVar1]), 0))
						{
							if (func_508() && iVar1 == 0)
							{
								func_509(&(uParam0->f_541[iVar1]));
							}
							func_163(uParam0->f_541[iVar1], &(uParam0->f_541[iVar1]->f_5), 1, 0, 0);
						}
						iVar1++;
					}
					uParam0->f_594 = 1;
				}
			}
			break;
		case 1:
			iVar1 = 0;
			while (iVar1 < uParam0->f_595)
			{
				if (func_53(&(uParam0->f_541[iVar1]), 0))
				{
					func_510(uParam0->f_541[iVar1], iParam1, iVar1, iVar0);
				}
				iVar1++;
			}
			break;
	}
}

void func_323(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_523)
	{
		if (uParam0->f_500[iVar0]->f_10)
		{
			if (func_53(&(uParam0->f_500[iVar0]), 1))
			{
				if (!is_ped_in_any_vehicle(&(uParam0->f_500[iVar0]), true))
				{
					set_entity_proofs(&(uParam0->f_500[iVar0]), 0, false);
					uParam0->f_500[iVar0]->f_10 = 0;
				}
			}
		}
		iVar0++;
	}
}

void func_324(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 472;
	iVar1 = 1;
	if ((iLocal_25 == 12 || iLocal_25 == 9) || iLocal_25 == 8)
	{
		return;
	}
	if (uParam0->f_160)
	{
		func_511(iParam1, 40f, iVar0);
	}
	if (does_blip_exist(iParam2))
	{
		vVar2 = { get_blip_coords(iParam2) };
	}
	if ((func_10(1) || uParam0->f_164 == 14) || (!func_120(vVar2) && func_388(Global_35, vVar2, 3f, 1, 1)))
	{
		if (!uParam0->f_158)
		{
			func_512(&(uParam0->f_54), 1, 1, 1, 0);
			func_512(&(uParam0->f_106), 1, 1, 1, 0);
			_0xe98d55c5983f2509(*uParam0);
			uParam0->f_158 = 1;
		}
		return;
	}
	if (func_513(iLocal_25))
	{
		if (_0x0b7cb1300cbfe19c(Global_35, 1))
		{
			if ((func_265() || !func_116(Global_35)) || func_514())
			{
				clear_ped_tasks(Global_35, 1, 0);
			}
		}
	}
	if (get_ped_config_flag(Global_35, 364, true) && !_0x0b7cb1300cbfe19c(Global_35, 1))
	{
		set_ped_config_flag(Global_35, 364, false);
	}
	if (!func_85(8192))
	{
		if (func_24(iLocal_25))
		{
			if (func_53(*uParam0, 0) && func_87(*uParam0, Global_36, 1) < 150f)
			{
				if (!func_88() && !func_89())
				{
					func_90("CR_HELP_ILO", 10000, 0, 0, 0, 1);
					func_86(8192);
				}
			}
		}
	}
	if (is_ped_in_vehicle(Global_35, Local_51.f_25[iParam1]->f_1, false) || (func_265() && !func_515(*uParam0, 0, 0, 0)))
	{
		if (!get_ped_config_flag(*uParam0, 301, true))
		{
			set_ped_config_flag(*uParam0, 301, true);
		}
		if (uParam0->f_164 != 9 && uParam0->f_164 != 11)
		{
			return;
		}
	}
	else if (get_ped_config_flag(*uParam0, 301, true))
	{
		set_ped_config_flag(*uParam0, 301, false);
	}
	iVar5 = -1;
	switch (uParam0->f_164)
	{
		case 0:
			if (func_53(*uParam0, 0))
			{
				if (func_513(iLocal_25))
				{
					func_516();
				}
				set_ped_config_flag(*uParam0, 297, true);
				func_517(uParam0->f_54[0], "CR_ILO_STOP", 0, -1616532217, 0, 0, 0, 1, 0);
				if (!func_518(iLocal_25))
				{
					func_519(uParam0->f_54[0], 0, 0);
				}
				if (func_520(iLocal_25))
				{
					func_517(uParam0->f_54[1], "CR_ILO_GREET", 0, -163964935, 0, 0, 0, 1, 0);
					if (!func_521(iLocal_25))
					{
						func_519(uParam0->f_54[1], 0, 0);
					}
				}
				func_517(uParam0->f_54[2], "CR_ILO_ANTAG", 0, 648122183, 0, 0, 0, 1, 0);
				func_519(uParam0->f_54[2], 0, 0);
				func_522(&(uParam0->f_12), 1, 0);
				uParam0->f_164 = 1;
			}
			break;
		case 1:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (get_entity_speed(Local_51.f_25[iParam1]->f_1) < 0.5f && func_388(Local_51.f_25[iParam1]->f_1, Global_36, 40f, 1, 1))
			{
				uParam0->f_164 = 7;
			}
			else if (iVar5 == 0)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 74))
				{
					func_381(iLocal_25, 48, 0);
					if (func_175(&uVar6))
					{
						if (func_513(iLocal_25))
						{
							func_524(iParam1);
						}
						func_519(uParam0->f_54[0], 0, 0);
						func_100(&(uParam0->f_161));
						uParam0->f_159 = 1;
						uParam0->f_164 = 9;
						return;
					}
					if (func_513(iLocal_25))
					{
						func_524(iParam1);
					}
					func_519(uParam0->f_54[0], 0, 0);
					if (func_520(iLocal_25))
					{
						func_519(uParam0->f_54[1], 0, 0);
					}
					func_100(&(uParam0->f_161));
					uParam0->f_159 = 1;
					Local_51.f_25[iParam1]->f_630 = 1;
					if (func_525(iLocal_25))
					{
						func_526(&Local_51, iLocal_24, 524419);
					}
					uParam0->f_164 = 2;
				}
			}
			else if (iVar5 == 1)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 73))
				{
					func_381(iLocal_25, 48, 1);
					func_519(uParam0->f_54[0], 0, 0);
					if (func_520(iLocal_25))
					{
						func_519(uParam0->f_54[1], 0, 0);
					}
					func_100(&(uParam0->f_161));
					uParam0->f_159 = 1;
					uParam0->f_164 = 3;
				}
			}
			break;
		case 2:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (func_26(&(uParam0->f_161)) > 2f && !_0xfe5c6177064bd390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 42))
				{
					if (func_527(iLocal_25))
					{
						if (func_53(Local_51.f_25[iParam1]->f_174, 0))
						{
							task_look_at_entity(Local_51.f_25[iParam1]->f_174, Global_35, -1, 0, 51, 0);
							task_aim_gun_at_entity(Local_51.f_25[iParam1]->f_174, Global_35, -1, 0, 1);
						}
					}
					func_379();
					func_100(&(uParam0->f_161));
					uParam0->f_164 = 4;
				}
			}
			break;
		case 3:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (func_26(&(uParam0->f_161)) > 2f && !_0xfe5c6177064bd390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 41))
				{
					func_100(&(uParam0->f_161));
					uParam0->f_164 = 5;
				}
			}
			break;
		case 4:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (func_525(iLocal_25))
			{
				iParam1 = 0;
				while (iParam1 < Local_51.f_2266)
				{
					Local_51.f_25[iParam1]->f_597 = 0f;
					iParam1++;
				}
				func_101(&Local_51);
				bring_vehicle_to_halt(Local_51.f_25[iParam1]->f_1, 3f, 2, false);
				func_4(&Local_51, 131072);
				Local_51.f_25[iParam1]->f_630 = 1;
				uParam0->f_164 = 6;
			}
			else if (iLocal_25 == 5)
			{
				func_112(&Local_51, iLocal_24, 1);
				Local_51.f_25[iParam1]->f_630 = 0;
				uParam0->f_159 = 0;
				uParam0->f_164 = 14;
			}
			else
			{
				uParam0->f_159 = 0;
				uParam0->f_164 = 1;
			}
			break;
		case 5:
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (func_26(&(uParam0->f_161)) > 2f && !_0xfe5c6177064bd390(1))
			{
				if (func_528(iLocal_25))
				{
					uParam0->f_164 = 7;
				}
				else
				{
					func_519(uParam0->f_54[0], 1, 0);
					uParam0->f_164 = 1;
				}
			}
			break;
		case 6:
			if (Local_51.f_25[iParam1]->f_630)
			{
				if (!Local_51.f_25[iParam1]->f_626)
				{
					func_101(&Local_51);
					bring_vehicle_to_halt(Local_51.f_25[iParam1]->f_1, 3f, 2, false);
				}
			}
			iVar5 = func_523(uParam0, &(uParam0->f_12), 40f, &(uParam0->f_54), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (get_entity_speed(Local_51.f_25[iParam1]->f_1) < 1f)
			{
				uParam0->f_164 = 7;
			}
			break;
		case 7:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (Local_51.f_25[iParam1]->f_630)
			{
				if (!Local_51.f_25[iParam1]->f_626)
				{
					func_101(&Local_51);
					bring_vehicle_to_halt(Local_51.f_25[iParam1]->f_1, 3f, 2, false);
				}
			}
			if (func_53(*uParam0, 0))
			{
				set_ped_config_flag(*uParam0, 297, true);
				if (func_529(iLocal_25))
				{
					if (func_530(iLocal_25))
					{
						func_517(uParam0->f_106[0], "CR_ILO_THREATEN", 0, 648122183, 0, 0, 0, 1, 0);
					}
					else
					{
						func_517(uParam0->f_106[0], "CR_ILO_ROB", 0, -1616532217, 0, 0, 0, 1, 0);
					}
					if (!func_531(iLocal_25))
					{
						func_519(uParam0->f_106[0], 0, 0);
					}
				}
				if (func_528(iLocal_25))
				{
					func_517(uParam0->f_106[1], "CR_ILO_TRICK", 0, -163964935, 0, 0, 0, 1, 0);
					if (func_175(&uVar6))
					{
						func_519(uParam0->f_106[1], 0, 0);
					}
				}
				if (!func_530(iLocal_25))
				{
					func_517(uParam0->f_106[2], "CR_ILO_ANTAG", 0, 648122183, 0, 0, 0, 1, 0);
					func_519(uParam0->f_106[2], 0, 0);
				}
				func_512(&(uParam0->f_54), 0, 0, 1, 0);
				func_100(&(uParam0->f_161));
				uParam0->f_164 = 8;
			}
			break;
		case 8:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (Local_51.f_25[iParam1]->f_630 && !uParam0->f_160)
			{
				if (func_26(&(uParam0->f_161)) > 15f)
				{
					if (func_97(&(Local_51.f_2286), iLocal_25, 9))
					{
						func_112(&Local_51, iLocal_24, 1);
						Local_51.f_25[iParam1]->f_630 = 0;
					}
				}
				else if (!Local_51.f_25[iParam1]->f_626)
				{
					func_101(&Local_51);
					bring_vehicle_to_halt(Local_51.f_25[iParam1]->f_1, 3f, 2, false);
				}
			}
			if (iVar5 == 0)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 71))
				{
					func_519(uParam0->f_106[0], 0, 0);
					if (func_528(iLocal_25))
					{
						func_519(uParam0->f_106[1], 0, 0);
					}
					func_379();
					func_100(&(uParam0->f_161));
					uParam0->f_159 = 1;
					uParam0->f_164 = 9;
				}
			}
			else if (iVar5 == 1)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 72))
				{
					if (func_513(iLocal_25))
					{
						func_532(iParam1);
					}
					func_519(uParam0->f_106[0], 0, 0);
					if (func_528(iLocal_25))
					{
						if (iLocal_36 < 11)
						{
							func_533(11);
						}
						if (!Local_51.f_25[iParam1]->f_630)
						{
							Local_51.f_25[iParam1]->f_630 = 1;
						}
						func_519(uParam0->f_106[1], 0, 0);
					}
					func_379();
					func_100(&(uParam0->f_161));
					uParam0->f_159 = 1;
					uParam0->f_164 = 10;
				}
			}
			break;
		case 9:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (func_26(&(uParam0->f_161)) > 2f && !_0xfe5c6177064bd390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 34))
				{
					func_100(&(uParam0->f_161));
					uParam0->f_164 = 11;
				}
			}
			break;
		case 10:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (func_534(iLocal_25))
			{
				if (func_26(&(uParam0->f_161)) > 5f)
				{
					if (!Local_51.f_25[iParam1]->f_626)
					{
						func_101(&Local_51);
					}
				}
			}
			if (func_26(&(uParam0->f_161)) > 2f && !_0xfe5c6177064bd390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 35))
				{
					if (iLocal_25 == 4)
					{
						task_look_at_coord(*uParam0, get_world_position_of_entity_bone(Local_51.f_25[iParam1]->f_1, get_entity_bone_index_by_name(Local_51.f_25[iParam1]->f_1, "wheel_lr")), 4000, 0, 51, 1);
					}
					func_100(&(uParam0->f_161));
					uParam0->f_164 = 12;
				}
			}
			break;
		case 11:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (func_535(iLocal_25))
			{
				func_101(&Local_51);
				bring_vehicle_to_halt(Local_51.f_25[iParam1]->f_1, 5f, 2, false);
				func_536(Local_51.f_25[iParam1], Global_35);
				func_4(&Local_51, 16);
			}
			else if (!func_10(524288))
			{
				func_112(&Local_51, iLocal_24, 1);
				Local_51.f_25[iParam1]->f_630 = 0;
			}
			func_72(32768);
			uParam0->f_164 = 14;
			break;
		case 12:
			iVar5 = func_523(uParam0, &(uParam0->f_33), 40f, &(uParam0->f_106), 0f, iVar1, 0, "COACHROB_DRIVER", iVar0, 0, 0, 2, -1082130432);
			if (func_26(&(uParam0->f_161)) > 2f)
			{
				if (func_534(iLocal_25))
				{
					uParam0->f_160 = 1;
				}
				else
				{
					func_112(&Local_51, iLocal_24, 1);
					Local_51.f_25[iParam1]->f_630 = 0;
				}
				if (func_529(iLocal_25))
				{
					func_519(uParam0->f_106[0], 1, 0);
					uParam0->f_164 = 8;
				}
				else
				{
					uParam0->f_164 = 13;
				}
			}
			break;
	}
}

void func_325(var uParam0)
{
	if (iLocal_26 != 3)
	{
		return;
	}
	if (iLocal_38 != 8)
	{
		return;
	}
	if (!func_15(&Local_51, 67108864))
	{
		return;
	}
	if (!is_screen_faded_in())
	{
		return;
	}
	if (func_537(uParam0->f_1))
	{
		return;
	}
	vVar0 = { 0f, -2f, -1f };
	vVar3 = { 0f, 2f, 4f };
	fVar6 = 2.5f;
	bVar7 = false;
	iVar8 = 0;
	while (iVar8 < 15)
	{
		if (does_entity_exist(&(Local_51.f_2214[iVar8])))
		{
			if (!is_entity_in_angled_area(&(Local_51.f_2214[iVar8]), get_offset_from_entity_in_world_coords(uParam0->f_1, vVar0), get_offset_from_entity_in_world_coords(uParam0->f_1, vVar3), fVar6, false, true, 0) && has_entity_collided_with_anything(&(Local_51.f_2214[iVar8])))
			{
				_0x8462be2341a55b6f(&(Local_51.f_2214[iVar8]));
				set_object_as_no_longer_needed(Local_51.f_2214[iVar8]);
				func_538(Global_35, "GENERIC_CURSE_HIGH", 1506116031, 0, 1, 0, 0, 1);
				bVar7 = true;
			}
		}
		iVar8++;
	}
	fVar9 = func_539();
	if (fVar9 < 70f)
	{
		if (iLocal_50 != 7)
		{
			func_295(&(uParam0->f_1), 7);
			iLocal_50 = 7;
		}
	}
	else if (fVar9 < 85f)
	{
		if (iLocal_50 != 6)
		{
			func_295(&(uParam0->f_1), 6);
			iLocal_50 = 6;
		}
	}
	else if (fVar9 < 100f)
	{
		if (iLocal_50 != 5)
		{
			func_295(&(uParam0->f_1), 5);
			iLocal_50 = 5;
		}
	}
	if (!func_15(&Local_51, 1073741824))
	{
		if (bVar7)
		{
			func_4(&Local_51, 1073741824);
		}
	}
	if (bVar2526)
	{
		return;
	}
	if (uParam0->f_629)
	{
		fVar10 = 3f;
	}
	else
	{
		fVar10 = 20f;
	}
	if (_0x6d58167f62238284(uParam0->f_1) > fVar10 && get_entity_speed(uParam0->f_1) > 2f)
	{
		func_540();
	}
}

void func_326(int iParam0)
{
	iVar0 = func_541(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	get_ped_nearby_peds(iVar0, &iVar1, -1, -1);
	iVar22 = 0;
	while (iVar22 < iVar1)
	{
		if (does_entity_exist(&(iVar1[iVar22])))
		{
			if (!is_ped_injured(&(iVar1[iVar22])))
			{
				if (((((func_542(&(iVar1[iVar22])) && _0xe4770da1b8ff4fd1(&(iVar1[iVar22])) == 0) && _get_rider_of_mount(&(iVar1[iVar22]), false) == 0) && vdist(get_offset_from_entity_in_world_coords(iParam0, 0f, 30f, 0f), get_entity_coords(&(iVar1[iVar22]), true, false)) < 30f) && !is_ped_fleeing(&(iVar1[iVar22]))) && !func_108(&(iVar1[iVar22]), 518218985))
				{
					if (iVar2474 == 5 && is_point_on_road(get_entity_coords(&(iVar1[iVar22]), true, false), 0))
					{
						task_smart_flee_coord(&(iVar1[iVar22]), get_offset_from_entity_in_world_coords(iParam0, 0f, 15f, 0f), 50f, -1, false, 1077936128);
					}
				}
			}
		}
		iVar22++;
	}
}

void func_327(var uParam0, int iParam1)
{
	if (!func_205(uParam0->f_9, 0, 1))
	{
		return;
	}
	if (is_entity_dead(uParam0->f_1))
	{
		return;
	}
	clear_ped_tasks(uParam0->f_9, 1, 0);
	_0xf1c03a5352243a30(uParam0->f_9);
	set_blocking_of_non_temporary_events(uParam0->f_9, false);
	bring_vehicle_to_halt(uParam0->f_1, 6f, 1, false);
	if (!func_205(uParam0->f_174, 0, 1))
	{
		return;
	}
	_0xf1c03a5352243a30(uParam0->f_174);
	set_blocking_of_non_temporary_events(uParam0->f_174, false);
	task_look_at_entity(uParam0->f_174, Global_35, -1, 0, 51, 0);
	open_sequence_task(&iVar0);
	task_leave_any_vehicle(0, 2000, 64);
	task_goto_entity_offset_xy(0, uParam0->f_1, -1, 0.5f, 1.4f, -3.4f, 1f, true);
	func_543(0, -22664287, 0, 0, 0, -1082130432);
	close_sequence_task(iVar0);
	task_perform_sequence(uParam0->f_174, iVar0);
	clear_sequence_task(&iVar0);
}

void func_328(var uParam0)
{
	if (!func_205(uParam0->f_9, 0, 1))
	{
		return;
	}
	if (is_ped_using_any_scenario(uParam0->f_9))
	{
		_0x802092b07e3b1eea(uParam0->f_9, Global_36, 3);
	}
	func_163(&(uParam0->f_9), &(uParam0->f_9.f_5), 1, 0, 0);
	func_544(uParam0->f_9, uParam0->f_1, 1);
	set_ped_drops_weapons_when_dead(uParam0->f_9, true);
	uParam0->f_9.f_8 = 1;
}

void func_329(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_53(&(uParam0->f_410[iVar0]), 1))
		{
			set_blocking_of_non_temporary_events(&(uParam0->f_410[iVar0]), bParam1);
		}
		iVar0++;
	}
}

void func_330(var uParam0, int iParam1, struct<6> Param2)
{
	if (func_270(&Local_51, iParam1))
	{
		func_545(uParam0, Param2);
		if (iLocal_42 == 1 || iLocal_42 == 2)
		{
			func_546(uParam0, 1);
		}
		if (func_10(2097152))
		{
			func_21(2097152);
		}
		return;
	}
	if (uParam0->f_612)
	{
		return;
	}
	if (!func_15(&Local_51, 1))
	{
		return;
	}
	if ((is_entity_dead(uParam0->f_1) || !is_vehicle_driveable(uParam0->f_1, false, false)) || _0x18714953cced17d3(uParam0->f_1))
	{
		uParam0->f_613 = 1;
		uParam0->f_631 = { get_entity_coords(uParam0->f_1, true, false) };
		func_21(2097152);
		return;
	}
	iVar0 = get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676);
	if (func_10(1))
	{
		if (func_10(524288) || func_547(&Local_51))
		{
			set_drive_task_cruise_speed(iVar0, 0f);
			if (!is_playback_going_on_for_vehicle(uParam0->f_1))
			{
				bring_vehicle_to_halt(uParam0->f_1, 10f, 1, false);
			}
			uParam0->f_613 = 1;
			uParam0->f_631 = { get_entity_coords(uParam0->f_1, true, false) };
			return;
		}
	}
	if (iVar0 == Global_35 && !func_10(2097152))
	{
		uParam0->f_613 = 1;
		uParam0->f_631 = { get_entity_coords(uParam0->f_1, true, false) };
		func_21(2097152);
		return;
	}
	if (*uParam0 >= 2 && (func_25(&(Local_51.f_2149)) && func_26(&(Local_51.f_2149)) > 5f))
	{
		if (func_548(uParam0))
		{
			uParam0->f_613 = 1;
			uParam0->f_631 = { get_entity_coords(uParam0->f_1, true, false) };
			func_21(2097152);
			return;
		}
	}
	if (!func_386(uParam0))
	{
		if (!func_10(2097152))
		{
			if (get_entity_speed(uParam0->f_1) < 1f)
			{
				uParam0->f_613 = 1;
				uParam0->f_631 = { get_entity_coords(uParam0->f_1, true, false) };
				func_549(uParam0->f_1);
				return;
			}
		}
		else
		{
			func_550(uParam0, Param2);
		}
	}
	if (iParam1 != 0 && (Local_51.f_25[0]->f_613 || !func_53(_0x2963b5c1637e8a27(Local_51.f_25[0]->f_1), 0)))
	{
		clear_ped_tasks(iVar0, 1, 0);
		set_drive_task_cruise_speed(iVar0, 0f);
		bring_vehicle_to_halt(uParam0->f_1, 1f, 1, false);
		uParam0->f_613 = 1;
		uParam0->f_631 = { get_entity_coords(uParam0->f_1, true, false) };
		func_549(uParam0->f_1);
		return;
	}
	if (uParam0->f_626 || func_15(&Local_51, 16))
	{
		if (!func_551(uParam0))
		{
			if (get_entity_speed(uParam0->f_1) < 0.2f)
			{
				set_drive_task_cruise_speed(iVar0, 0f);
				func_182(iVar0, 0f);
				if (!is_playback_going_on_for_vehicle(uParam0->f_1))
				{
					bring_vehicle_to_halt(uParam0->f_1, 1f, 1, false);
				}
				uParam0->f_613 = 1;
				uParam0->f_631 = { get_entity_coords(uParam0->f_1, true, false) };
				func_549(uParam0->f_1);
				return;
			}
			else
			{
				uParam0->f_597 = (uParam0->f_597 - (0.1f * (get_frame_time() * 30f)));
				if (uParam0->f_597 < 0f)
				{
					uParam0->f_597 = 0f;
				}
				set_drive_task_cruise_speed(iVar0, uParam0->f_597);
				func_182(iVar0, uParam0->f_597);
			}
		}
	}
}

void func_331(var uParam0)
{
	if (uParam0->f_613)
	{
		return;
	}
	if (uParam0->f_626)
	{
		return;
	}
	if (is_entity_dead(uParam0->f_1))
	{
		return;
	}
	iVar0 = get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676);
	if (!func_53(iVar0, 0))
	{
		return;
	}
	if (!is_waypoint_playback_going_on_for_vehicle(uParam0->f_1, 0))
	{
		return;
	}
	if (func_15(&Local_51, 2))
	{
		fVar1 = Local_51.f_25[0]->f_597;
	}
	else
	{
		fVar1 = func_333(uParam0, iLocal_24);
	}
	fVar3 = 20f;
	fVar2 = (fVar3 - vdist(get_entity_coords(Local_51.f_25[0]->f_1, true, false), get_entity_coords(uParam0->f_1, true, false)));
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	fVar2 = (fVar2 / fVar3);
	fVar4 = func_552(fVar1, 0f, fVar2);
	set_drive_task_cruise_speed(iVar0, fVar4);
	vehicle_waypoint_playback_override_speed(uParam0->f_1, fVar4);
	uParam0->f_597 = fVar4;
}

void func_332(var uParam0)
{
	if (uParam0->f_613)
	{
		return;
	}
	if (!func_553(uParam0))
	{
		return;
	}
	if (!func_554())
	{
		return;
	}
	if (is_entity_dead(uParam0->f_1))
	{
		return;
	}
	if (!is_waypoint_playback_going_on_for_vehicle(uParam0->f_1, 0))
	{
		return;
	}
	if (func_25(&(uParam0->f_620)))
	{
		return;
	}
	fVar1 = 150f;
	if (!func_555(uParam0->f_1, Global_35, func_194(iLocal_24), fVar1))
	{
		iVar2 = get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676);
		if (func_53(iVar2, 0))
		{
			set_drive_task_cruise_speed(iVar2, func_195(iLocal_24));
			vehicle_waypoint_playback_override_speed(uParam0->f_1, func_195(iLocal_24));
		}
		uParam0->f_597 = func_195(iLocal_24);
		return;
	}
	fVar0 = (fVar1 - vdist(Global_36, get_entity_coords(uParam0->f_1, true, false)));
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	fVar0 = (fVar0 / fVar1);
	fVar3 = func_552((func_195(iLocal_24) / 2f), func_195(iLocal_24), fVar0);
	iVar4 = get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676);
	if (func_53(iVar4, 0))
	{
		set_drive_task_cruise_speed(iVar4, (fVar3 - func_556(uParam0)));
		vehicle_waypoint_playback_override_speed(uParam0->f_1, (fVar3 - func_556(uParam0)));
	}
	uParam0->f_597 = fVar3;
}

float func_333(var uParam0, int iParam1)
{
	if (iParam1 == 7)
	{
		return 5f;
	}
	if (iParam1 == 8)
	{
		return 4.8f;
	}
	if (iParam1 == 9)
	{
		return 2.7f;
	}
	if (iParam1 == 10)
	{
		if (!uParam0->f_610)
		{
			return 3.4f;
		}
		else
		{
			return 5f;
		}
	}
	return 4.4f;
}

int func_334()
{
	switch (iLocal_50)
	{
		case 7:
			return 1000;
		case 6:
			return 5000;
		case 5:
			return 7500;
		default:
			break;
	}
	return 1000;
}

void func_335(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_557(iParam0, sParam4, iParam5);
	}
	func_558(iParam0, bParam1, fParam2, iParam3, iParam7);
}

void func_336(var uParam0)
{
	if (uParam0->f_613)
	{
		return;
	}
	if (is_waypoint_playback_going_on_for_vehicle(uParam0->f_1, 0))
	{
		return;
	}
	if (!func_53(uParam0->f_9, 0) && func_53(uParam0->f_174, 0))
	{
		if (get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676) == uParam0->f_174)
		{
			func_42(&(uParam0->f_623));
			func_473(uParam0->f_174, uParam0->f_1, func_194(iLocal_24), func_195(iLocal_24), 0);
		}
		else if (get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_677) == uParam0->f_174)
		{
			if (!func_108(uParam0->f_174, 355471868))
			{
				if (!func_25(&(uParam0->f_623)))
				{
					if (get_entity_speed(uParam0->f_1) > 0.5f)
					{
						func_100(&(uParam0->f_623));
					}
				}
				else if (func_26(&(uParam0->f_623)) > 1f)
				{
					set_blocking_of_non_temporary_events(uParam0->f_174, true);
					task_shuffle_to_next_vehicle_seat(uParam0->f_174, uParam0->f_1);
				}
			}
		}
	}
}

void func_337(int iParam0, bool bParam1, bool bParam2)
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

void func_338(int iParam0, bool bParam1)
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

void func_339(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (!is_entity_dead(iVar1))
		{
			set_entity_lod_dist(iVar1, iParam1);
		}
		iVar0++;
	}
}

void func_340(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (func_53(iVar1, 1))
		{
			set_blocking_of_non_temporary_events(iVar1, bParam1);
			if (bParam1)
			{
			}
		}
		iVar0++;
	}
}

void func_341(var uParam0, var uParam1, vector3 vParam2)
{
	*uParam1 = _blip_add_for_coord(408396114, get_offset_from_entity_in_world_coords(*uParam0, vParam2));
	_set_blip_flash_style(*uParam1, 942020339);
	set_blip_name_from_text_file(*uParam1, "CHRB_LOOT");
}

void func_342(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (func_53(iVar1, 1))
		{
			_0xa3db37edf9a74635(get_player_index(), iVar1, 10, 0, 0);
			_0xa3db37edf9a74635(get_player_index(), iVar1, 10, 1, 0);
			_0xa3db37edf9a74635(get_player_index(), iVar1, 10, 2, 0);
		}
		iVar0++;
	}
}

void func_343(var uParam0)
{
	if (func_240(uParam0->f_600))
	{
		return;
	}
	uParam0->f_600 = func_397("CR_C_ROB", -719620017, uParam0->f_1, 3, 1, 0, 0, 0, 1070386381, 570, 4000, 10, 1073741824, 0, 1704213876, 0, 0);
	if (vdist(get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601), Global_36) < vdist(get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_604), Global_36))
	{
		func_559(uParam0->f_600, uParam0->f_601, 1);
		uParam0->f_607 = 1;
	}
	else
	{
		func_559(uParam0->f_600, uParam0->f_604, 1);
		uParam0->f_607 = 0;
	}
	set_vehicle_doors_locked(uParam0->f_1, 1);
	set_vehicle_is_considered_by_player(uParam0->f_1, false);
	func_398(uParam0->f_600, 1.7f, 1);
	func_399(uParam0->f_600, 0, 1);
}

int func_344(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	if (!bParam12 && is_entity_dead(iParam0))
	{
		return 0;
	}
	switch (iParam1)
	{
		case -1212426201:
		case -1101297303:
		case -594562071:
		case 416676503:
		case 860033945:
		case 970310034:
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
			break;
		default:
			if (!is_weapon_valid(iParam1))
			{
				return iParam1;
			}
			iVar0 = iParam1;
			if ((_0x705be297eebdb95d(iVar0) || _is_weapon_melee(iVar0)) && get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				StringCopy(&cVar5, _get_weapon_name(iVar0), 128);
				iVar2 = _0xd42514c182121c23(get_entity_model(iParam0));
				if (!Global_43891 && _does_string_exist_in_string(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, _0x806862e5d266cf38(&cVar5, 0, (get_length_of_literal_string(&cVar5) - get_length_of_literal_string("_DUALWIELD"))), 128);
					iVar3 = get_hash_key(&cVar5);
					if (func_307(iVar3) && _0xf252a85b8f3f8c58(iVar2, iVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = get_weapontype_group(iVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						iVar4 = _0x9eefd670f10656d7(iVar2, iVar1);
						if (!Global_43891)
						{
							if (func_307(iVar4) && iVar4 != iVar0)
							{
								iVar0 = iVar4;
							}
						}
						else if (iVar4 == iVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_237() == -1 && !func_560(iVar0))
	{
		if (has_ped_got_weapon(iParam0, iVar0, 0, false) && iParam0 != Global_35)
		{
			bVar22 = true;
		}
		else if (((iVar4 == iVar0 && !Global_43891) && iParam0 != Global_35) && get_ped_relationship_group_hash(iParam0) == 1030835986)
		{
			bVar22 = true;
		}
		else
		{
			iVar0 = _0xf8204ef17410bf43(iParam1, iParam7, iParam8, 0);
			if (!is_weapon_valid(iVar0))
			{
				iVar0 = -1569615261;
			}
		}
	}
	if (iVar0 == -1569615261 && iParam1 == -1569615261)
	{
		return iVar0;
	}
	else if (iVar0 == -1569615261)
	{
		switch (iParam1)
		{
			case -1101297303:
			case 416676503:
				iVar0 = 379542007;
				break;
			case -1212426201:
			case -594562071:
			case 860033945:
			case 970310034:
				if (func_560(-183018591))
				{
					iVar0 = -183018591;
				}
				else
				{
					iVar0 = 379542007;
				}
				break;
			default:
				iVar0 = 379542007;
				break;
		}
	}
	else if (iVar0 == -164645981 && iParam0 == Global_35)
	{
		iVar0 = 1247405313;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_35 && func_307(iVar0))
		{
			get_max_ammo(iParam0, &iParam9, iVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!_is_weapon_melee(iVar0) && iVar0 != -1569615261) && !_is_weapon_lantern(iVar0))
		{
			iVar23 = get_ped_ammo_by_type(iParam0, get_ped_ammo_type_from_weapon(iParam0, iVar0));
			iVar24 = _get_weapon_clip_size(iVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_35)
	{
		func_561(iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 752097756, 0);
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_562(iParam0, &iVar0, &fVar25);
		iVar0 = _give_weapon_to_ped_2(iParam0, iVar0, iParam9, bParam2, bParam5, iParam4, bParam11, 0.5f, 1f, 752097756, bVar22, fVar25, false);
	}
	if (iParam0 != Global_35)
	{
		if (func_563(iVar0))
		{
			set_ped_infinite_ammo(iParam0, bParam3, iVar0);
		}
	}
	else if (bParam10)
	{
		_0xcffc3eccd7a5cceb(get_player_index(), iVar0, iParam4);
	}
	return iVar0;
}

void func_345(var uParam0, var uParam1, vector3 vParam2)
{
	if (!does_entity_exist(*uParam0))
	{
		return;
	}
	if (does_blip_exist(*uParam1))
	{
		set_blip_coords(*uParam1, get_offset_from_entity_in_world_coords(*uParam0, vParam2));
	}
}

bool func_346(var uParam0)
{
	if (!func_10(2))
	{
		return false;
	}
	if ((is_explosion_in_sphere(25, get_entity_coords(uParam0->f_1, true, false), 3f) || _0xe979bb5602ad3402(uParam0->f_1, 0)) || _0xe979bb5602ad3402(uParam0->f_1, 2))
	{
		set_vehicle_doors_locked(uParam0->f_1, 1);
		set_vehicle_door_broken(uParam0->f_1, 0, false);
		set_vehicle_door_broken(uParam0->f_1, 2, false);
		uParam0->f_627 = 0;
		func_72(256);
		if (is_explosion_in_sphere(25, get_entity_coords(uParam0->f_1, true, false), 3f))
		{
			add_explosion(get_entity_coords(uParam0->f_1, true, false), 25, 1f, true, false, 1f);
			func_564(uParam0->f_1);
		}
		return true;
	}
	return false;
}

void func_347(var uParam0)
{
	func_46(&(Local_51.f_2208));
	if (!does_blip_exist(uParam0->f_1.f_2))
	{
		if (!uParam0->f_613)
		{
			if (iLocal_25 != 12)
			{
				func_357(&(uParam0->f_1), &(uParam0->f_1.f_2), 0);
			}
		}
	}
}

void func_348(var uParam0, bool bParam1)
{
	if (bParam1 || !func_25(uParam0))
	{
		func_100(uParam0);
	}
}

void func_349(var uParam0)
{
	if (func_240(uParam0->f_600))
	{
		switch (func_233(uParam0->f_1))
		{
			case 0:
				if (func_565(uParam0->f_1))
				{
					func_559(uParam0->f_600, 0f, 0f, 1f, 1);
					func_398(uParam0->f_600, 4f, 1);
				}
				else if (vdist(get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601), Global_36) < vdist(get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_604), Global_36))
				{
					if (!uParam0->f_607)
					{
						func_559(uParam0->f_600, uParam0->f_601, 1);
						uParam0->f_607 = 1;
					}
				}
				else if (uParam0->f_607)
				{
					func_559(uParam0->f_600, uParam0->f_604, 1);
					uParam0->f_607 = 0;
				}
				break;
			case 3:
				func_559(uParam0->f_600, 0f, 0f, 0f, 1);
				func_398(uParam0->f_600, 4f, 1);
				break;
			case 1:
			case 2:
				func_559(uParam0->f_600, 0f, 0f, -2f, 1);
				break;
		}
	}
}

bool func_350(int iParam0, bool bParam1)
{
	if (bParam1 && !func_240(iParam0))
	{
		return false;
	}
	iVar0 = func_241(iParam0);
	return _uiprompt_is_active((*Global_1945938)[iVar0]->f_3);
}

void func_351(var uParam0)
{
	func_92(&(uParam0->f_600), 1, 1);
	set_vehicle_is_considered_by_player(uParam0->f_1, true);
}

int func_352(var uParam0)
{
	iVar0 = uParam0->f_1;
	if (Local_51.f_2412)
	{
		if (_0xe979bb5602ad3402(iVar0, 0))
		{
			sVar1 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_no_door_enter";
			sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_no_door_main";
			sVar3 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_no_door_exit";
		}
		else
		{
			sVar1 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_with_door_enter";
			if (iLocal_25 == 8)
			{
				sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_with_door_open_and_close_main";
			}
			else
			{
				sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_with_door_main";
			}
			sVar3 = "script@proc@robberies@coach@playerloot_parts@playerloot_left_with_door_exit";
		}
	}
	else if (_0xe979bb5602ad3402(iVar0, 2))
	{
		sVar1 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_no_door_enter";
		sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_no_door_main";
		sVar3 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_no_door_exit";
	}
	else
	{
		sVar1 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_with_door_enter";
		if (iLocal_25 == 8)
		{
			sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_with_door_open_and_close_main";
		}
		else
		{
			sVar2 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_with_door_main";
		}
		sVar3 = "script@proc@robberies@coach@playerloot_parts@playerloot_right_with_door_exit";
	}
	switch (Local_51.f_2403)
	{
		case 0:
			if (func_169(uParam0->f_1))
			{
				if (func_245(iVar0, Global_35))
				{
					Local_51.f_2412 = 1;
				}
				Local_51.f_2403 = 1;
			}
			break;
		case 1:
			if (func_169(uParam0->f_1))
			{
				Local_51.f_2406 = _create_anim_scene(sVar1, 0, 0, false, true);
				Local_51.f_2407 = _create_anim_scene(sVar2, 0, 0, false, true);
				Local_51.f_2408 = _create_anim_scene(sVar3, 0, 0, false, true);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
				_0xcffc3eccd7a5cceb(player_id(), -1569615261, 1);
				task_swap_weapon(Global_35, 1, 1, 0, 0);
				func_340(iVar0, 1);
				func_566(iVar0, 1);
				func_72(1073741824);
				set_player_control(player_id(), false, 0, false);
				Local_51.f_2403 = 2;
			}
			break;
		case 2:
			if ((func_109(Local_51.f_2406, "") && func_109(Local_51.f_2407, "")) && func_109(Local_51.f_2408, ""))
			{
				iLocal_20 = create_camera(26379945, false);
				if (iLocal_25 == 10)
				{
					if (Local_51.f_2412)
					{
						attach_cam_to_entity(iLocal_20, iVar0, -2.8327f, 3.0126f, 1.1476f, true);
						point_cam_at_entity(iLocal_20, iVar0, -2.4398f, 0.0456f, 0.9413f, true);
					}
					else
					{
						attach_cam_to_entity(iLocal_20, iVar0, 2.8327f, 3.0126f, 1.1476f, true);
						point_cam_at_entity(iLocal_20, iVar0, 2.4398f, 0.0456f, 0.9413f, true);
					}
					set_cam_fov(iLocal_20, 51.236f);
					set_cam_active(iLocal_20, true);
					shake_cam(iLocal_20, "HAND_SHAKE", 0.4f);
					render_script_cams(true, true, 12000, true, false, 0);
				}
				else if (iLocal_25 == 8)
				{
					iLocal_21 = create_camera(26379945, false);
					if (Local_51.f_2412)
					{
						attach_cam_to_entity(iLocal_20, iVar0, -3.2358f, -1.4339f, 1.1788f, true);
						attach_cam_to_entity(iLocal_21, iVar0, -4.2358f, -1.4339f, 1.1788f, true);
					}
					else
					{
						attach_cam_to_entity(iLocal_20, iVar0, 3.2358f, -1.4339f, 1.1788f, true);
						attach_cam_to_entity(iLocal_21, iVar0, 4.2358f, -1.4339f, 1.1788f, true);
					}
					point_cam_at_entity(iLocal_20, iVar0, -0.4438f, -0.3888f, 1.0442f, true);
					point_cam_at_entity(iLocal_21, iVar0, -0.4438f, -0.3888f, 1.0442f, true);
					set_cam_fov(iLocal_20, 51.236f);
					set_cam_fov(iLocal_21, 51.236f);
					shake_cam(iLocal_20, "HAND_SHAKE", 0.4f);
					shake_cam(iLocal_21, "HAND_SHAKE", 0.4f);
					set_cam_active(iLocal_20, true);
					set_cam_active(iLocal_21, true);
					set_cam_active_with_interp(iLocal_20, iLocal_21, 18000, 1, 1);
					render_script_cams(true, false, 3000, true, false, 0);
				}
				else
				{
					if (Local_51.f_2412)
					{
						attach_cam_to_entity(iLocal_20, iVar0, -3.2358f, -1.4339f, 1.1788f, true);
					}
					else
					{
						attach_cam_to_entity(iLocal_20, iVar0, 3.2358f, -1.4339f, 1.1788f, true);
					}
					point_cam_at_entity(iLocal_20, iVar0, -0.4438f, -0.3888f, 1.0442f, true);
					set_cam_fov(iLocal_20, 51.236f);
					set_cam_active(iLocal_20, true);
					shake_cam(iLocal_20, "HAND_SHAKE", 0.4f);
					render_script_cams(true, true, 20000, true, false, 0);
				}
				set_anim_scene_origin(Local_51.f_2406, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				set_anim_scene_origin(Local_51.f_2407, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				set_anim_scene_origin(Local_51.f_2408, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				attach_anim_scene_to_entity(Local_51.f_2406, iVar0, -1);
				attach_anim_scene_to_entity(Local_51.f_2407, iVar0, -1);
				attach_anim_scene_to_entity(Local_51.f_2408, iVar0, -1);
				set_anim_scene_entity(Local_51.f_2406, "coach", iVar0, 0);
				set_anim_scene_entity(Local_51.f_2406, "player", Global_35, 0);
				set_anim_scene_entity(Local_51.f_2407, "coach", iVar0, 0);
				set_anim_scene_entity(Local_51.f_2407, "player", Global_35, 0);
				set_anim_scene_entity(Local_51.f_2408, "coach", iVar0, 0);
				set_anim_scene_entity(Local_51.f_2408, "player", Global_35, 0);
				task_enter_anim_scene(Global_35, Local_51.f_2406, "player", "", 1f, 1, 0, 20000, -1082130432);
				func_100(&uLocal_17);
				Local_51.f_2403 = 3;
			}
			break;
		case 3:
			if (_is_anim_scene_started(Local_51.f_2406, false))
			{
				func_100(&uLocal_17);
				Local_51.f_2403 = 4;
			}
			else if (func_26(&uLocal_17) > 7f)
			{
				start_anim_scene(Local_51.f_2406);
				func_100(&uLocal_17);
				Local_51.f_2403 = 4;
			}
			break;
		case 4:
			if (_is_anim_scene_started(Local_51.f_2406, false) && _get_anim_scene_progress(Local_51.f_2406) >= func_567(iVar0))
			{
				start_anim_scene(Local_51.f_2407);
				Local_51.f_2403 = 5;
			}
			break;
		case 5:
			if (iLocal_25 == 8 && !func_10(268435456))
			{
				if (!_is_anim_scene_started(Local_51.f_2407, false) || _get_anim_scene_progress(Local_51.f_2407) > 0.6f)
				{
					func_100(&uLocal_17);
					func_21(1073741824);
					func_72(-2147483648);
					Local_51.f_2403 = 7;
				}
			}
			if (_is_anim_scene_started(Local_51.f_2407, false) && _get_anim_scene_progress(Local_51.f_2407) >= func_568(iVar0))
			{
				if (Local_51.f_2412)
				{
					if (!_0xe979bb5602ad3402(iVar0, 0))
					{
						set_vehicle_door_open(iVar0, 0, false, true);
					}
				}
				else if (!_0xe979bb5602ad3402(iVar0, 2))
				{
					set_vehicle_door_open(iVar0, 2, false, true);
				}
				start_anim_scene(Local_51.f_2408);
				Local_51.f_2403 = 6;
			}
			break;
		case 6:
			if (!_is_anim_scene_started(Local_51.f_2408, false) || _get_anim_scene_progress(Local_51.f_2408) > 0.99f)
			{
				set_player_control(player_id(), true, 0, false);
				_render_first_person_cam(0, 0, 3, 0, 0, 1);
				func_21(1073741824);
				func_72(-2147483648);
				Local_51.f_2403 = 7;
			}
			break;
		case 7:
			if (iLocal_25 == 8 && !func_10(268435456))
			{
				if (func_569() && func_26(&uLocal_17) > 1f)
				{
					func_570(iVar0);
					Local_51.f_2403 = 8;
					return 1;
				}
			}
			else if ((!_is_anim_scene_started(Local_51.f_2408, false) || _0xf94692eb9dc15d74(Local_51.f_2408, 0)) || _is_anim_scene_active(Local_51.f_2408))
			{
				func_570(iVar0);
				Local_51.f_2403 = 8;
				return 1;
			}
			break;
		case 8:
			return 1;
	}
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	return 0;
}

void func_353(int iParam0)
{
	if (!is_ped_injured(Global_35))
	{
		_0x6569f31a01b4c097(Global_35, 2, iParam0);
		_0x6569f31a01b4c097(Global_35, 3, iParam0);
	}
}

int func_354(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 1;
		case 2:
			return 0;
		case 4:
			return 0;
		case 5:
			return 1;
		case 6:
			return 2;
		case 12:
			return 1;
		case 8:
			return 0;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_355(int iParam0)
{
	if (iParam0 >= 8 && iParam0 <= 11)
	{
		return true;
	}
	return false;
}

void func_356(int iParam0)
{
	Global_1415412 = (Global_1415412 || iParam0);
}

void func_357(var uParam0, var uParam1, bool bParam2)
{
	if (does_blip_exist(*uParam1))
	{
		return;
	}
	*uParam1 = _blip_add_for_entity(408396114, *uParam0);
	set_blip_sprite(*uParam1, 1012165077, false);
	if (get_entity_model(*uParam0) == -1758092337)
	{
		set_blip_name_from_text_file(*uParam1, "CR_BLIP_WAGON");
	}
	else
	{
		set_blip_name_from_text_file(*uParam1, "CR_BLIP_COACH");
	}
	if (bParam2)
	{
		_blip_set_modifier(*uParam1, 942020339);
	}
	else
	{
		_set_blip_flash_style(*uParam1, 942020339);
	}
}

bool func_358(char* sParam0)
{
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	return (func_571(sParam0, 0, 0, -1, -1, 0) && func_572());
}

void func_359(char* sParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	func_262(sParam0, iParam1, 0, 1, sParam2, sParam3, sParam4, sParam5, iParam6);
}

bool func_360(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 8:
		case 9:
			return true;
	}
	return false;
}

void func_361(var uParam0)
{
	if (iLocal_38 != 8)
	{
		return;
	}
	if (!func_25(&(uParam0->f_640)))
	{
		func_100(&(uParam0->f_640));
	}
	if (func_26(&(uParam0->f_640)) < 2f)
	{
		return;
	}
	if (!is_point_on_road(get_entity_coords(uParam0->f_1, true, false), uParam0->f_1))
	{
		if (!uParam0->f_629)
		{
			uParam0->f_629 = 1;
		}
	}
	else if (uParam0->f_629)
	{
		uParam0->f_629 = 0;
	}
	func_100(&(uParam0->f_640));
}

void func_362(var uParam0)
{
	if (func_53(uParam0->f_9, 3))
	{
		if (!is_ped_fleeing(uParam0->f_9))
		{
			task_smart_flee_ped(uParam0->f_9, Global_35, 200f, -1, 0, 1077936128, 0);
			set_ped_keep_task(uParam0->f_9, true);
		}
	}
	if (func_53(uParam0->f_174, 3))
	{
		if (!is_ped_fleeing(uParam0->f_174))
		{
			task_smart_flee_ped(uParam0->f_174, Global_35, 200f, -1, 0, 1077936128, 0);
			set_ped_keep_task(uParam0->f_174, true);
		}
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_53(&(uParam0->f_410[iVar0]), 3))
		{
			if (!is_ped_fleeing(&(uParam0->f_410[iVar0])))
			{
				task_smart_flee_ped(&(uParam0->f_410[iVar0]), Global_35, 200f, -1, 0, 1077936128, 0);
				set_ped_keep_task(&(uParam0->f_410[iVar0]), true);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_523)
	{
		if (func_53(&(uParam0->f_500[iVar1]), 3))
		{
			if (!is_ped_fleeing(&(uParam0->f_500[iVar1])))
			{
				task_smart_flee_ped(&(uParam0->f_500[iVar1]), Global_35, 200f, -1, 0, 1077936128, 0);
				set_ped_keep_task(&(uParam0->f_500[iVar1]), true);
			}
		}
		iVar1++;
	}
}

void func_363(var uParam0, float fParam1)
{
	iVar1 = 0;
	while (iVar1 < 6)
	{
		iVar0 = _get_ped_in_draft_seat(uParam0->f_1, iVar1);
		if (!is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, fParam1);
		}
		iVar1++;
	}
}

bool func_364(var uParam0)
{
	vVar4 = { get_entity_coords(uParam0->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_53(&(uParam0->f_410[iVar0]), 3))
		{
			vVar1 = { get_entity_coords(&(uParam0->f_410[iVar0]), true, false) };
			if (vdist(Global_36, vVar1) < 100f || (vdist(vVar4, vVar1) < 100f && !uParam0->f_610))
			{
				if (!func_108(&(uParam0->f_410[iVar0]), 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_365(var uParam0)
{
	vVar4 = { get_entity_coords(uParam0->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_523)
	{
		if (func_53(&(uParam0->f_500[iVar0]), 3))
		{
			vVar1 = { get_entity_coords(&(uParam0->f_500[iVar0]), true, false) };
			if (vdist(Global_36, vVar1) < 100f || (vdist(vVar4, vVar1) < 100f && !uParam0->f_610))
			{
				if (!func_108(&(uParam0->f_500[iVar0]), 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_366(var uParam0)
{
	vVar4 = { get_entity_coords(uParam0->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_540)
	{
		if (func_53(&(uParam0->f_524[iVar0]), 3))
		{
			vVar1 = { get_entity_coords(&(uParam0->f_524[iVar0]), true, false) };
			if (vdist(Global_36, vVar1) < 100f || (vdist(vVar4, vVar1) < 100f && !uParam0->f_610))
			{
				if (!func_108(&(uParam0->f_524[iVar0]), 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_367(var uParam0)
{
	vVar4 = { get_entity_coords(uParam0->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < uParam0->f_595)
	{
		if (func_53(&(uParam0->f_541[iVar0]), 3))
		{
			vVar1 = { get_entity_coords(&(uParam0->f_541[iVar0]), true, false) };
			if (vdist(Global_36, vVar1) < (100f * 1.5f) || (vdist(vVar4, vVar1) < (100f * 1.5f) && !uParam0->f_610))
			{
				if (!func_108(&(uParam0->f_541[iVar0]), 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_368(var uParam0, var uParam1)
{
	vVar4 = { get_entity_coords(uParam1->f_1, true, false) };
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_53(&(uParam0->f_5[iVar0]), 3))
		{
			vVar1 = { get_entity_coords(&(uParam0->f_5[iVar0]), true, false) };
			if (vdist(Global_36, vVar1) < 100f || (vdist(vVar4, vVar1) < 100f && !uParam1->f_610))
			{
				if (!func_108(&(uParam0->f_5[iVar0]), 518218985))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_369(var uParam0)
{
	if (!func_15(&Local_51, 524288))
	{
		task_look_at_entity(uParam0->f_9, Global_35, -1, 3072, 41, 0);
		func_4(&Local_51, 524288);
	}
	if (func_15(&Local_51, 16))
	{
		return false;
	}
	if (func_10(2097152))
	{
		return false;
	}
	if (iLocal_26 == 2)
	{
		return false;
	}
	if (iLocal_26 == 1)
	{
		return false;
	}
	if (!is_ped_in_any_vehicle(uParam0->f_9, false))
	{
		return false;
	}
	if (func_80(player_id(), 1, 0, 1))
	{
		return false;
	}
	if (vdist(get_entity_coords(uParam0->f_9, true, false), func_421(iLocal_24)) < 100f)
	{
		return false;
	}
	if (!func_25(&(uParam0->f_661)))
	{
		if ((is_player_targetting_entity(player_id(), uParam0->f_9, false) || is_player_free_aiming_at_entity(player_id(), uParam0->f_9)) && func_106(uParam0->f_9, Global_35, 1, 20f, 0))
		{
			func_100(&(uParam0->f_661));
		}
	}
	else if (func_26(&(uParam0->f_661)) > 1f)
	{
		func_536(uParam0, Global_35);
		func_46(&(uParam0->f_9.f_5));
		func_97(&(Local_51.f_2286), iLocal_25, 10);
		func_4(&Local_51, 16);
		Local_51.f_2423 = 1;
		func_101(&Local_51);
		bring_vehicle_to_halt(uParam0->f_1, 10f, 1, false);
		func_42(&(uParam0->f_661));
		return true;
	}
	return false;
}

bool func_370(var uParam0)
{
	if (uParam0->f_610)
	{
		return true;
	}
	return false;
}

bool func_371()
{
	if (!func_53(&(Local_51.f_25[0]->f_252[0]), 0) && func_573(&(Local_51.f_25[0]->f_252[0])))
	{
		return true;
	}
	return false;
}

bool func_372(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!uParam0->f_25[iVar0]->f_612)
		{
			if (!func_370(uParam0->f_25[iVar0]))
			{
				return false;
			}
		}
		iVar0++;
	}
	if (func_574(uParam0) || func_575(uParam0))
	{
		return true;
	}
	return false;
}

bool func_373(var uParam0, float fParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (vdist(get_entity_coords(uParam0->f_25[iVar0]->f_1, true, false), Global_36) < fParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_374(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	iVar2 = _0x4e88a65968a55c78(&Var0, iParam1);
	if (func_239(iVar2))
	{
		_0x2f901291ef177b02(iVar2, 0);
	}
}

void func_375(var uParam0, var uParam1, int iParam2, int iParam3, bool bParam4)
{
	if (uParam0->f_675)
	{
		return;
	}
	if (!does_entity_exist(uParam0->f_1))
	{
		cVar0 = func_194(iParam2);
		iVar4 = -1;
		iVar6 = 0;
		if (func_576(iParam2))
		{
			vVar1 = { func_577(iParam2) };
		}
		else if (bParam4)
		{
			iVar4 = 14;
			waypoint_recording_get_closest_waypoint(cVar0, Global_36, &iVar5);
			iVar6 = (iVar5 - func_578(iParam2));
			if (iVar6 < 0)
			{
				iVar6 = 0;
			}
			waypoint_recording_get_coord(cVar0, iVar6, &vVar1);
		}
		else
		{
			vVar1 = { get_offset_from_entity_in_world_coords(uParam1->f_25[0]->f_1, 0f, -20f, 0f) };
		}
		vVar7 = { func_579(cVar0, vVar1, iVar4) };
		if (get_ground_z_for_3d_coord(vVar7.x, vVar7.y, (vVar7.z + 2f), &uVar10, false))
		{
			vVar7.f_2 = uVar10;
		}
		fVar11 = func_580(cVar0, vVar7);
		func_581(vVar7, 200f, 0, 1, 0, 0, 0);
		func_581(vVar7, 30f, 0, 0, 0, 0, 0);
		uParam0->f_1 = create_vehicle(uParam0->f_1.f_1, vVar7, fVar11, true, true, false, false);
		if (uParam0->f_678 != -1)
		{
			_0x8c6d9a399126c194(uParam0->f_1, uParam0->f_678);
		}
		if (!is_entity_dead(uParam0->f_1))
		{
			set_entity_load_collision_flag(uParam0->f_1, 1);
			uParam0->f_596 = get_vehicle_estimated_max_speed(uParam0->f_1);
			add_entity_to_audio_mix_group(uParam0->f_1, "Robberies_Coach_Target_Group", 0f);
			func_478(uParam0->f_1);
			func_479(uParam0->f_1);
			if (uParam0->f_1.f_1 == 1761016051)
			{
				if (iParam2 == 10)
				{
					_0xf489f94bfee12bb0(uParam0->f_1, -1027511593);
				}
				else
				{
					_0xf489f94bfee12bb0(uParam0->f_1, 1767696941);
				}
			}
			if (uParam0->f_627)
			{
				set_vehicle_doors_locked(uParam0->f_1, 2);
			}
			_0xd826690b5cf3beff(uParam0->f_1, 0.1f);
			if (uParam0->f_1.f_1 == -1688693650)
			{
				_0x850ce59dec2028f3(uParam0->f_1, 0);
				_0xba8818212633500a(uParam0->f_1, 9, 1);
			}
			_0x4c60c333f9cca2b6(uParam0->f_1, 1);
			_0x0794199b25e499e1(uParam0->f_1, 1);
			if (bParam4)
			{
				Global_1392388->f_5 = uParam0->f_1;
			}
		}
		return;
	}
	if (!uParam0->f_665)
	{
		func_582(uParam0, &(uParam0->f_9), iParam3, iParam2);
		if (iParam2 == 7)
		{
			_0xffa1594703ed27ca(uParam0->f_9, 5);
		}
		if (iParam2 == 8)
		{
			set_ped_config_flag(uParam0->f_9, 23, false);
		}
		return;
	}
	if (!uParam0->f_666 && uParam0->f_174.f_74)
	{
		func_583(uParam0, &(uParam0->f_174), iParam3, iParam2);
		if (iParam2 == 7)
		{
			_0xffa1594703ed27ca(uParam0->f_174, 2);
		}
		if (iParam2 == 8)
		{
			set_ped_config_flag(uParam0->f_174, 23, false);
		}
		return;
	}
	if (func_15(uParam1, 65536))
	{
		if (!uParam0->f_672)
		{
			func_584(uParam0, uParam1->f_5[uParam0->f_664]);
			if (func_53(&(uParam1->f_5[uParam0->f_664]), 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == 2)
				{
					uParam0->f_664 = 0;
					uParam0->f_672 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	if (uParam0->f_409 != 0)
	{
		if (!uParam0->f_667)
		{
			func_585(uParam0, uParam0->f_252[uParam0->f_664], iParam3);
			if (func_53(&(uParam0->f_252[uParam0->f_664]), 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_409)
				{
					uParam0->f_664 = 0;
					uParam0->f_667 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	if (uParam0->f_499 != 0)
	{
		if (!uParam0->f_671)
		{
			func_586(uParam0, uParam0->f_410[uParam0->f_664], uParam0->f_664);
			if (func_53(uParam0->f_410[uParam0->f_664]->f_7, 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_499)
				{
					uParam0->f_664 = 0;
					uParam0->f_671 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		if (!uParam0->f_670)
		{
			func_587(uParam0, uParam0->f_410[uParam0->f_664], uParam1, iParam3, uParam0->f_664, iParam2);
			if (func_53(&(uParam0->f_410[uParam0->f_664]), 0))
			{
				if (uParam0->f_664 == 0)
				{
					if (func_588(128))
					{
						_give_weapon_to_ped_2(&(uParam0->f_410[uParam0->f_664]), -164645981, 1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					}
				}
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_499)
				{
					uParam0->f_664 = 0;
					uParam0->f_670 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	if (uParam0->f_523 != 0)
	{
		if (!uParam0->f_668)
		{
			func_589(uParam0, uParam0->f_500[uParam0->f_664], iParam3);
			if (func_53(&(uParam0->f_500[uParam0->f_664]), 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_523)
				{
					uParam0->f_664 = 0;
					uParam0->f_668 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	if (uParam0->f_540 != 0)
	{
		if (!uParam0->f_669)
		{
			func_590(uParam0, uParam0->f_524[uParam0->f_664], iParam3);
			if (func_53(&(uParam0->f_524[uParam0->f_664]), 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_540)
				{
					uParam0->f_664 = 0;
					uParam0->f_669 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
	uParam0->f_675 = 1;
}

int func_376(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!is_entity_dead(uParam0->f_25[iVar0]->f_1))
		{
			if (is_vehicle_driveable(uParam0->f_25[iVar0]->f_1, false, false))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

float func_377(var uParam0, var uParam1)
{
	fVar0 = func_87(uParam0->f_1, *uParam1, 1);
	return fVar0;
}

bool func_378(var uParam0)
{
	if (func_10(512))
	{
		if (func_10(32768))
		{
			uParam0->f_609 = 1;
			return true;
		}
		else
		{
			return false;
		}
	}
	vVar0 = { get_entity_coords(uParam0->f_1, true, false) };
	if (is_explosion_in_sphere(-1, vVar0, 50f))
	{
		func_4(&Local_51, 536870912);
		uParam0->f_609 = 1;
		return true;
	}
	if (func_10(32768))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (uParam0->f_609)
	{
		return true;
	}
	if (func_591(Global_35, uParam0->f_9, &(Local_51.f_2069)))
	{
		func_4(&Local_51, 536870912);
		uParam0->f_609 = 1;
		return true;
	}
	if (func_592(uParam0))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (func_593())
	{
		if (func_594(&(uParam0->f_9)))
		{
			bVar3 = true;
		}
		if (!bVar3)
		{
			if (Local_51.f_2266 == 1)
			{
				if (func_595(&(uParam0->f_174)))
				{
					bVar3 = true;
				}
			}
		}
		if (!bVar3)
		{
			if (func_596(uParam0, Local_51.f_2389))
			{
				bVar3 = true;
			}
			Local_51.f_2389++;
			if (Local_51.f_2389 >= uParam0->f_499)
			{
				Local_51.f_2389 = 0;
			}
		}
	}
	if (bVar3)
	{
		if (!Global_1392388->f_8)
		{
			Global_1392388->f_8 = 1;
		}
	}
	else if (Global_1392388->f_8)
	{
		Global_1392388->f_8 = 0;
	}
	if (uParam0->f_9.f_164 == 9 || uParam0->f_9.f_164 == 11)
	{
		bVar4 = true;
	}
	if (func_15(&Local_51, 65536))
	{
		if (func_53(Global_1392388->f_3, 0))
		{
			if (func_10(8))
			{
				bVar4 = true;
			}
			if (func_229(uParam0->f_1, Global_1392388->f_3, 25f, 1))
			{
				if (func_597(uParam0))
				{
					uParam0->f_609 = 1;
				}
			}
		}
		else if (func_388(uParam0->f_9, Global_36, 15f, 1, 1) && bVar3)
		{
			uParam0->f_609 = 1;
			return true;
		}
	}
	if ((bVar3 && !bVar4) || func_10(16384))
	{
		if (func_598(&(uParam0->f_9), &Local_51))
		{
			if (!func_15(&Local_51, 32))
			{
				if (func_599(uParam0, &Local_51, iLocal_25))
				{
					func_4(&Local_51, 16);
				}
			}
			func_97(&(Local_51.f_2286), iLocal_25, 2);
			Local_51.f_2415 = 1;
			uParam0->f_609 = 1;
			return true;
		}
		else if (func_600(&(uParam0->f_174), &Local_51))
		{
			if (!func_15(&Local_51, 32))
			{
				if (func_599(uParam0, &Local_51, iLocal_25))
				{
					func_4(&Local_51, 16);
				}
			}
			uParam0->f_609 = 1;
			return true;
		}
		else if (func_601(get_offset_from_entity_in_world_coords(uParam0->f_1, 0f, 11f, 0f), 10f) && !func_15(&Local_51, 65536))
		{
			if (!func_15(&Local_51, 32))
			{
				if (func_599(uParam0, &Local_51, iLocal_25))
				{
					func_4(&Local_51, 16);
				}
			}
			uParam0->f_609 = 1;
			return true;
		}
		else if (func_602(&Local_51, iLocal_25))
		{
			if (!func_15(&Local_51, 32))
			{
				if (func_599(uParam0, &Local_51, iLocal_25))
				{
					func_4(&Local_51, 16);
				}
			}
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (bVar3 && !bVar4)
	{
		if (((func_388(uParam0->f_9, Global_36, 25f, 1, 1) && func_175(&uVar5)) && func_265()) && iLocal_25 == 2)
		{
			func_97(&(Local_51.f_2286), iLocal_25, 49);
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (func_603(uParam0))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (uParam0->f_499 > 0)
	{
		if (iLocal_43 != 1)
		{
			if (func_604(uParam0, &Local_51))
			{
				uParam0->f_609 = 1;
				return true;
			}
		}
	}
	if (uParam0->f_523 > 0)
	{
		if (iLocal_43 != 1)
		{
			if (func_605(uParam0, &Local_51))
			{
				uParam0->f_609 = 1;
				return true;
			}
		}
	}
	if (func_10(128))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (func_606(uParam0, bVar3))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (((func_607(uParam0, bVar3) && iLocal_36 == 0) && !Local_51.f_2395) && !_0xfe5c6177064bd390(1))
	{
		if (func_97(&(Local_51.f_2286), iLocal_25, 48))
		{
			Local_51.f_2395 = 1;
		}
	}
	if (has_entity_been_damaged_by_entity(uParam0->f_9, Global_35, 1, 1))
	{
		func_4(&Local_51, 536870912);
		uParam0->f_609 = 1;
		return true;
	}
	if (((((iLocal_25 != 12 && bVar3) && (iLocal_26 == 0 || iLocal_26 == 2)) && uParam0->f_1.f_1 == 1761016051) && vdist(Global_36, get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) < 1.4f) && !func_15(&Local_51, 16777216))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (is_ped_in_vehicle(Global_35, uParam0->f_1, true))
	{
		iVar6 = _0x4e76cb57222a00e5(Global_35);
		iVar7 = iVar6;
		if ((((((bVar3 || iVar6 == uParam0->f_676) || iVar6 == uParam0->f_677) || iVar7 == 5) || iVar7 == 6) || iVar7 == 7) || iVar7 == 8)
		{
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (bVar3)
	{
		if (is_entity_in_angled_area(Global_35, get_offset_from_entity_in_world_coords(uParam0->f_1, 0f, -2.1f, 0.8f), get_offset_from_entity_in_world_coords(uParam0->f_1, 0f, 2.1f, 4f), 1.5f, false, true, 0))
		{
			uParam0->f_609 = 1;
			return true;
		}
	}
	vVar8 = { get_offset_from_entity_in_world_coords(uParam0->f_1, 0f, 4f, 0.4f) };
	if (is_projectile_type_in_area(vVar8 - Vector(0f, 3f, 3f), vVar8 + Vector(2f, 3f, 3f), -1504859554, true))
	{
		func_608(&(Local_51.f_2286), iLocal_25);
		uParam0->f_609 = 1;
		return true;
	}
	if (func_609(iLocal_25))
	{
		vVar11 = { get_offset_from_entity_in_world_coords(uParam0->f_1, 0f, 14f, 0f) };
		if (is_projectile_type_in_area(vVar11 - Vector(5f, 7f, 7f), vVar11 + Vector(5f, 7f, 7f), -1504859554, true))
		{
			func_608(&(Local_51.f_2286), iLocal_25);
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (func_610())
	{
		if (!func_53(uParam0->f_9, 1))
		{
			uParam0->f_609 = 1;
			return true;
		}
		else if (is_bullet_in_area(get_entity_coords(uParam0->f_1, true, false), 30f, false))
		{
			uParam0->f_609 = 1;
			return true;
		}
	}
	if (is_bullet_in_area(vVar0, func_611(iLocal_25), true) || has_bullet_impacted_in_area(vVar0, func_611(iLocal_25), true, true))
	{
		func_4(&Local_51, 536870912);
		uParam0->f_609 = 1;
		return true;
	}
	if (has_entity_been_damaged_by_entity(uParam0->f_1, Global_35, 1, 0))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (func_612(uParam0->f_1))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (func_613(uParam0))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (bVar3 && is_ped_shooting(Global_35))
	{
		uParam0->f_609 = 1;
		return true;
	}
	if (((((bVar3 && func_265()) && vdist(get_entity_coords(uParam0->f_1, true, false), Global_36) < 15f) && func_243(Global_35, get_entity_coords(uParam0->f_1, true, false), 0.5f)) && (is_ped_on_mount(Global_35) || is_ped_in_any_vehicle(Global_35, false))) && get_entity_speed(Global_35) > 15f)
	{
		uParam0->f_609 = 1;
		return true;
	}
	return false;
}

void func_379()
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (func_53(Local_51.f_25[iVar0]->f_9, 3))
		{
			task_look_at_entity(Local_51.f_25[iVar0]->f_9, Global_35, -1, 3120, 51, 1);
		}
		if (func_53(Local_51.f_25[iVar0]->f_174, 3))
		{
			task_look_at_entity(Local_51.f_25[iVar0]->f_174, Global_35, -1, 2096, 51, 1);
		}
		iVar1 = 0;
		while (iVar1 < Local_51.f_25[iVar0]->f_499)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_410[iVar1]), 3))
			{
				task_look_at_entity(&(Local_51.f_25[iVar0]->f_410[iVar1]), Global_35, -1, 2096, 51, 1);
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < Local_51.f_25[iVar0]->f_523)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_500[iVar2]), 3))
			{
				task_look_at_entity(&(Local_51.f_25[iVar0]->f_500[iVar2]), Global_35, -1, 2096, 51, 1);
			}
			iVar2++;
		}
		iVar0++;
	}
}

int func_380(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (func_205(uParam0->f_25[iVar0]->f_9, 0, 1))
		{
			return uParam0->f_25[iVar0]->f_9;
		}
		iVar0++;
	}
	return 0;
}

void func_381(int iParam0, int iParam1, bool bParam2)
{
	vVar0 = { func_244(iParam0, iParam1) };
	if (func_266(&vVar0))
	{
		stop_scripted_conversation(&vVar0, bParam2, false);
	}
}

bool func_382()
{
	if (iLocal_25 == 9)
	{
		if (!func_10(8))
		{
			return false;
		}
	}
	if (func_111(iLocal_25, 49))
	{
		return false;
	}
	if (func_614(iLocal_25))
	{
		return false;
	}
	if (iVar2542 == 1)
	{
		return false;
	}
	return true;
}

void func_383()
{
	func_4(&Local_51, 2);
	func_4(&Local_51, 64);
	func_4(&Local_51, 256);
	func_72(1);
	func_100(&(Local_51.f_2158));
	if (func_15(&Local_51, 65536))
	{
		func_46(&(Local_51.f_25[0]->f_1.f_2));
		func_18(2);
		return;
	}
	set_relationship_between_groups(6, 1862763509, iLocal_46);
	set_relationship_between_groups(6, iLocal_46, 1862763509);
	if (func_615(1) > 0 || func_10(4))
	{
		set_relationship_between_groups(6, -1247684992, iLocal_46);
		set_relationship_between_groups(6, iLocal_46, -1247684992);
		set_relationship_between_groups(6, 1030835986, iLocal_46);
		set_relationship_between_groups(6, iLocal_46, 1030835986);
	}
	if (!func_15(&Local_51, 16))
	{
		if (!func_15(&Local_51, 32))
		{
			if (!func_10(524288))
			{
				if (func_15(&Local_51, 262144))
				{
					func_113(&Local_51, 262144);
				}
			}
			func_173();
		}
		else
		{
			func_616(&Local_51);
			func_160(&Local_51, 0);
		}
	}
	switch (iLocal_26)
	{
		case 0:
			if (func_15(&Local_51, 16))
			{
				func_617(&Local_51);
				func_618(&Local_51);
			}
			else
			{
				func_160(&Local_51, 1);
				func_159(&Local_51, iLocal_25, 1);
				func_619(&Local_51);
				func_4(&Local_51, 8);
			}
			break;
		case 1:
			if (func_15(&Local_51, 16))
			{
				func_617(&Local_51);
				func_618(&Local_51);
			}
			else
			{
				func_160(&Local_51, 1);
				func_159(&Local_51, iLocal_25, 1);
				func_619(&Local_51);
				func_4(&Local_51, 8);
			}
			break;
		case 2:
			func_160(&Local_51, 1);
			func_159(&Local_51, iLocal_25, 1);
			func_619(&Local_51);
			func_4(&Local_51, 8);
			break;
		case 3:
			if (func_15(&Local_51, 16))
			{
				func_617(&Local_51);
				func_618(&Local_51);
			}
			else
			{
				func_160(&Local_51, 1);
				func_159(&Local_51, iLocal_25, 1);
				func_619(&Local_51);
				func_4(&Local_51, 8);
			}
			break;
	}
}

bool func_384(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (!func_270(uParam0, iVar0) && !uParam0->f_25[iVar0]->f_612)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_385(var uParam0, int iParam1, bool bParam2)
{
	if (!func_53(*uParam0, 0))
	{
		return;
	}
	if (is_ped_using_any_scenario(*uParam0))
	{
		_0x802092b07e3b1eea(*uParam0, Global_36, 3);
	}
	set_ped_combat_attributes(*uParam0, 2, bParam2);
	set_ped_combat_attributes(*uParam0, 1, bParam2);
	set_ped_combat_attributes(*uParam0, 3, !bParam2);
	set_ped_combat_attributes(*uParam0, 0, !bParam2);
	set_blocking_of_non_temporary_events(*uParam0, false);
	func_163(uParam0, &(uParam0->f_5), 1, 0, 0);
	if (!bParam2)
	{
		set_ped_combat_movement(*uParam0, 1);
		_0x1854217c640b39ec(*uParam0, iParam1, 0f, 0f, 0f, 30f, 0, 0);
		set_ped_config_flag(*uParam0, 246, true);
		set_ped_drops_weapons_when_dead(*uParam0, true);
		set_ped_shoot_rate(*uParam0, 100);
		uParam0->f_72 = 1;
	}
	else
	{
		set_ped_shoot_rate(*uParam0, 90);
	}
	task_combat_hated_targets_around_ped(*uParam0, 100f, 0, 0);
}

bool func_386(var uParam0)
{
	iVar0 = get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676);
	if (func_53(iVar0, 0))
	{
		if (iVar0 != Global_35 && !is_ped_being_jacked(iVar0))
		{
			return true;
		}
	}
	if ((func_53(uParam0->f_174, 0) && is_ped_in_vehicle(uParam0->f_174, uParam0->f_1, true)) && func_25(&(uParam0->f_623)))
	{
		return true;
	}
	return false;
}

bool func_387()
{
	if (&Global_40.f_9146.f_4[10] == 2)
	{
		return false;
	}
	return true;
}

bool func_388(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (vdist2(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_620(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_389(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((_0xcb690f680a3ea971(iVar0, 1) && is_player_targetting_entity(iVar1, iParam0, bParam5)) && is_player_free_aiming_at_entity(iVar1, iParam0)) && func_183(iVar0, iParam0, 1, 1) <= 4f)
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
		if (_is_weapon_sniper(func_621(iVar0, 0)))
		{
			if (func_622(iParam0, 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

void func_390(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_237() != -1)
	{
		return;
	}
	if ((Global_36616 && func_623(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_624(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_625(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_626(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_625(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

bool func_391(int iParam0)
{
	if (bVar2527)
	{
		if (func_26(&uLocal_2533) > 4f && func_183(iParam0, player_ped_id(), 1, 1) < 30f)
		{
			return true;
		}
		return false;
	}
	if ((has_entity_been_damaged_by_entity(iParam0, player_ped_id(), 1, 1) && func_183(iParam0, player_ped_id(), 1, 1) < 30f) && !is_entity_on_fire(iParam0))
	{
		iLocal_2530 = 1;
		clear_ped_tasks(iParam0, 1, 0);
		set_ped_ragdoll_force_fall(iParam0);
		_0xaab050da48b57978(iParam0, "TaskIntimidated_OnKnees", Global_35, -1, 4);
		open_sequence_task(&iVar0);
		task_pause(0, 1000);
		task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
		close_sequence_task(iVar0);
		task_perform_sequence(iParam0, iVar0);
		clear_sequence_task(&iVar0);
		func_100(&uLocal_2533);
	}
	return false;
}

void func_392()
{
	iLocal_2546 = 0;
}

void func_393(int iParam0)
{
	iLocal_2546 = 1;
	iLocal_2547 = iParam0;
}

bool func_394(int iParam0, int iParam1)
{
	bVar0 = false;
	bVar1 = false;
	*iParam1 = 0;
	if (func_240(Local_51.f_2273))
	{
		bVar0 = func_253(Local_51.f_2273, 1);
		bVar1 = is_control_pressed(0, -1377110900);
		if (bVar0 || bVar1)
		{
			if (func_97(&(Local_51.f_2286), iLocal_25, iParam0))
			{
				if (bVar0)
				{
					*iParam1 = 1;
				}
				else if (bVar1)
				{
					*iParam1 = 2;
				}
				return true;
			}
		}
	}
	return false;
}

int func_395(var uParam0)
{
	if (!func_25(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_125(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_627() - round((uParam0->f_1 * 1000f)));
}

int func_396(int iParam0, int iParam1)
{
	vVar0 = { func_244(iParam0, iParam1) };
	if (func_266(&vVar0))
	{
		return get_current_scripted_conversation_line(&vVar0);
	}
	return -1;
}

int func_397(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16)
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
		if (func_459(iVar0, 2))
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
				func_461(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13, 1065353216, 0, bParam5, 0, bParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_398(int iParam0, float fParam1, bool bParam2)
{
	if (bParam2 && !func_240(iParam0))
	{
		return;
	}
	if (fParam1 <= 0f)
	{
		return;
	}
	iVar0 = func_241(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	(*Global_1945938)[iVar0]->f_9 = fParam1;
	_uiprompt_context_set_size((*Global_1945938)[iVar0]->f_3, fParam1);
}

void func_399(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && !func_240(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_462(iParam0, 128);
	}
	else
	{
		func_465(iParam0, 128);
	}
}

bool func_400(var uParam0)
{
	iVar0 = uParam0->f_1;
	sVar1 = "script@proc@robberies@coach@playerhiddencompartment";
	fVar9 = 0f;
	vVar11 = { 0f, 0f, 0f };
	bVar14 = false;
	switch (Local_51.f_2403)
	{
		case 0:
			Local_51.f_2404 = _create_anim_scene(sVar1, 0, 0, false, true);
			set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
			_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
			_0xcffc3eccd7a5cceb(player_id(), -1569615261, 1);
			task_swap_weapon(Global_35, 1, 1, 0, 0);
			func_340(iVar0, 1);
			func_566(iVar0, 1);
			func_72(1073741824);
			request_model(-1499182641, false);
			set_player_control(player_id(), false, 256, false);
			if (func_245(iVar0, Global_35))
			{
				Local_51.f_2412 = 1;
			}
			Local_51.f_2403 = 1;
			break;
		case 1:
			if (func_109(Local_51.f_2404, "PBL_ACTION") && has_model_loaded(-1499182641))
			{
				vVar2 = { get_entity_coords(iVar0, true, false) };
				if (get_ground_z_for_3d_coord(vVar2, &fVar8, false))
				{
					if (get_gameplay_cam_relative_pitch() > -10f && !_0xa24c1d341c6e0d53(0, 0, 0))
					{
						bVar14 = true;
					}
					if (bVar14)
					{
						iLocal_22 = create_camera(26379945, false);
						iLocal_23 = create_camera(26379945, false);
						if (Local_51.f_2412 == 1)
						{
							attach_cam_to_entity(iLocal_22, iVar0, -1.8384f, -0.6933f, 1.5872f, true);
							point_cam_at_entity(iLocal_22, iVar0, -0.3943f, 0.3396f, -0.8311f, true);
							attach_cam_to_entity(iLocal_23, iVar0, -2.6206f, -0.8484f, 1.9162f, true);
							point_cam_at_entity(iLocal_23, iVar0, -1.0165f, 0.2752f, -0.3563f, true);
						}
						else
						{
							attach_cam_to_entity(iLocal_22, iVar0, 1.4484f, 1.0164f, 1.8225f, true);
							point_cam_at_entity(iLocal_22, iVar0, 0.5546f, -0.2186f, -0.7613f, true);
							attach_cam_to_entity(iLocal_23, iVar0, 2.5058f, 1.7933f, 1.7101f, true);
							point_cam_at_entity(iLocal_23, iVar0, 1.151f, -0.094f, -0.1878f, true);
						}
						set_cam_fov(iLocal_22, 51.282f);
						set_cam_fov(iLocal_23, 51.282f);
						set_cam_active(iLocal_22, true);
						set_cam_active(iLocal_23, true);
						set_cam_active_with_interp(iLocal_23, iLocal_22, 7000, 1, 1);
						shake_cam(iLocal_22, "HAND_SHAKE", 0.4f);
						render_script_cams(true, false, 3000, true, false, 0);
					}
					fVar10 = (fVar8 - vVar2.z);
					if (!func_245(iVar0, Global_35))
					{
						vVar11.f_2 = (vVar11.z - 180f);
						fVar9 = (fVar9 + 0.4f);
					}
					set_anim_scene_origin(Local_51.f_2404, 0f, fVar9, fVar10, vVar11, 2);
					attach_anim_scene_to_entity(Local_51.f_2404, iVar0, -1);
					set_anim_scene_entity(Local_51.f_2404, "player", Global_35, 0);
					vVar5 = { vVar2 };
					vVar5.f_2 = (vVar5.z - 10f);
					Local_51.f_2402 = create_object(-1499182641, vVar5, true, true, false, false, true);
					set_entity_visible(Local_51.f_2402, false);
					set_anim_scene_entity(Local_51.f_2404, "MONEYBOX", Local_51.f_2402, 0);
					set_entity_no_collision_entity(Local_51.f_2402, iVar0, false);
					task_enter_anim_scene(Global_35, Local_51.f_2404, "player", "PBL_ACTION", 1f, 1, 0, 20000, -1082130432);
					func_100(&uLocal_17);
					Local_51.f_2403 = 2;
				}
			}
			break;
		case 2:
			_0x632be8d84846fa56();
			if (_is_anim_scene_started(Local_51.f_2404, false))
			{
				if (_get_anim_scene_progress(Local_51.f_2404) >= 0.1f)
				{
					set_entity_visible(Local_51.f_2402, true);
					Local_51.f_2403 = 3;
				}
			}
			if (func_26(&uLocal_17) > 20f)
			{
				func_570(iVar0);
				clear_ped_tasks(Global_35, 1, 0);
				set_player_control(player_id(), true, 0, false);
				Local_51.f_2403 = 5;
				return true;
			}
			break;
		case 3:
			_0x632be8d84846fa56();
			if (!_is_anim_scene_started(Local_51.f_2404, false) || _get_anim_scene_progress(Local_51.f_2404) >= 0.99f)
			{
				func_628();
				set_player_control(player_id(), true, 0, false);
				Local_51.f_2403 = 6;
				Local_51.f_2405 = 1;
				if (does_cam_exist(iLocal_22) || does_cam_exist(iLocal_23))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					_render_first_person_cam(0, 0, 3, 0, 0, 1);
				}
				if (does_cam_exist(iLocal_22))
				{
					destroy_cam(iLocal_22, false);
				}
				if (does_cam_exist(iLocal_23))
				{
					destroy_cam(iLocal_23, false);
				}
			}
			if (_0x3ab6c7b0bb0df4b1(Local_51.f_2402, -1) && get_entity_height_above_ground(Local_51.f_2402) < 0.05f)
			{
				func_628();
			}
			break;
		case 6:
			if (_0x9587913b9e772d29(Local_51.f_2402, 0))
			{
				freeze_entity_position(Local_51.f_2402, true);
				Local_51.f_2403 = 4;
			}
			break;
		case 4:
			if (func_629())
			{
				func_416(func_630(1546817274), 1);
				func_570(iVar0);
				Local_51.f_2403 = 5;
				return true;
			}
			break;
		case 5:
			return true;
	}
	return false;
}

void func_401(int iParam0)
{
	if (!func_53(iParam0, 0))
	{
		return;
	}
	switch (iLocal_40)
	{
		case 0:
			if (!func_89())
			{
				if (!_0xfe5c6177064bd390(1))
				{
					if (vdist(get_entity_coords(iParam0, true, false), Global_36) < 15f)
					{
						if (!is_ped_in_any_vehicle(iParam0, false))
						{
							if (func_97(&(Local_51.f_2286), iLocal_25, 59))
							{
								func_100(&(Local_51.f_2140));
								iLocal_40 = 1;
							}
						}
					}
				}
			}
			break;
		case 1:
			if (!_0xfe5c6177064bd390(1))
			{
				if (vdist(get_entity_coords(iParam0, true, false), Global_36) < 15f)
				{
					if (func_26(&(Local_51.f_2140)) > 10f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 18))
						{
							func_100(&(Local_51.f_2140));
							iLocal_40 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (!_0xfe5c6177064bd390(1))
			{
				if (vdist(get_entity_coords(iParam0, true, false), Global_36) < 15f)
				{
					if (func_26(&(Local_51.f_2140)) > 10f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 17))
						{
							func_42(&(Local_51.f_2140));
							iLocal_40 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (Local_51.f_2271 && _0x753b15ad0fd6f3e3(&(Local_51.f_25[0]->f_252[0])) == 0)
			{
				if (!func_25(&(Local_51.f_2164)))
				{
					func_100(&(Local_51.f_2164));
				}
				else if (func_26(&(Local_51.f_2164)) > 3f)
				{
					if (!_0xfe5c6177064bd390(1))
					{
						if (!_is_ped_hogtied(&(Local_51.f_25[0]->f_252[0])))
						{
							if (vdist(get_entity_coords(iParam0, true, false), Global_36) < 5f)
							{
								if (func_97(&(Local_51.f_2286), iLocal_25, 64))
								{
									task_turn_ped_to_face_entity(&(Local_51.f_25[0]->f_252[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
									func_42(&(Local_51.f_2164));
									iLocal_40 = 4;
								}
							}
							else
							{
								task_smart_flee_ped(&(Local_51.f_25[0]->f_252[0]), Global_35, 200f, -1, 0, 3f, 0);
								iLocal_40 = 12;
							}
						}
					}
				}
			}
			break;
		case 4:
			if (!_0xfe5c6177064bd390(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 22))
				{
					task_smart_flee_ped(&(Local_51.f_25[0]->f_252[0]), Global_35, 200f, -1, 0, 3f, 0);
					iLocal_40 = 12;
				}
			}
			break;
	}
}

bool func_402()
{
	return uVar2544;
}

bool func_403(int iParam0, bool bParam1)
{
	if (func_205(iParam0, 0, 1))
	{
		return (is_scripted_speech_playing(iParam0) || (bParam1 && is_any_speech_playing(iParam0)));
	}
	return false;
}

bool func_404(float fParam0)
{
	if (func_105(1))
	{
		return true;
	}
	if (func_25(&uLocal_0) && !func_269(&uLocal_0, (7.5f + fParam0)))
	{
		return true;
	}
	return false;
}

int func_405(int iParam0)
{
	iVar0 = func_632(func_631(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1946804->f_1497.f_1[iVar0]->f_1;
	}
	return 0;
}

bool func_406(var uParam0)
{
	if (func_407(81053684, uParam0))
	{
		return true;
	}
	if (func_407(-525676072, uParam0))
	{
		return true;
	}
	return false;
}

bool func_407(int iParam0, var uParam1)
{
	iVar1 = func_632(func_631(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_633(iVar0) == iParam0)
		{
			*uParam1 = iVar0;
			return true;
		}
	}
	*uParam1 = 0;
	return false;
}

void func_408(int iParam0, int iParam1)
{
	if (func_237() != -1)
	{
		return;
	}
	if (func_175(&uVar0))
	{
		return;
	}
	iVar1 = iParam1;
	if (func_569())
	{
		iVar1 = 0;
	}
	func_634(iParam0, iVar1);
}

char* func_409(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_635(sParam1));
}

bool func_410(vector3 vParam0)
{
	return _0x769bb7626b8cdb06(vParam0, 0.5f, 0, 0, 16384);
}

int func_411(int iParam0, bool bParam1)
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

bool func_412(int iParam0, int iParam1, bool bParam2)
{
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_637(iParam0);
	if (iVar0 == -427144552)
	{
		if (has_ped_got_weapon(Global_35, iParam0, 0, false))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_638(iParam0, 1))
		{
			return false;
		}
	}
	return func_639(iParam0, 0, bParam2) >= iParam1;
}

int func_413(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_640(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_641(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_412(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_642(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_639(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_639(iParam0, 0, 0) - iParam1) < 0)
		{
			func_413(iParam0, func_639(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_637(iParam0) == -427144552)
	{
		if (!func_643(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_644(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_645(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_641(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_646(iParam0, iParam1);
	return 1;
}

int func_414()
{
	return &Global_1899515;
}

struct<2> func_415(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_416(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

void func_417(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_427(iParam0))
	{
		return;
	}
	if (func_301(iParam0) == 4)
	{
		func_647(iParam0, func_414());
		if (!func_429(iParam0) == 5 && !func_429(iParam0) == 6)
		{
			if (bParam3)
			{
				func_433(iParam0, 6);
			}
			else
			{
				func_433(iParam0, 5);
			}
			func_431(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_121(1);
	}
	iVar0 = func_220(iParam0);
	bVar1 = func_237() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_648(0, 2);
		if (!bVar1 && bParam1)
		{
			func_649();
		}
	}
	else
	{
		func_432(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_650(iParam0);
	}
	else
	{
		Var2 = { func_651(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_491(32768))
		{
			Var4 = { func_651(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_429(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_221(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_221(iParam0)]->f_8), true);
						}
					}
					else if ((func_221(iParam0) != 95 && func_221(iParam0) != 82) && !func_652((*Global_1347702)[func_221(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_221(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_221(iParam0)]->f_8), true);
						break;
				}
			}
		}
	}
	if (iVar0 == 1)
	{
		Global_40.f_1093 = -1;
	}
	iVar6 = 0;
	if (iVar0 == 1)
	{
		func_654(func_221(iParam0), iVar6, func_653());
	}
	else if (iVar0 == 8)
	{
		func_656(func_221(iParam0), iVar6, func_653(), func_655());
	}
	if (!func_429(iParam0) == 5 && !func_429(iParam0) == 6)
	{
		iVar9 = func_657(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_658(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_659(func_221(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_660((iVar10 - 20), 0, iVar10);
					iVar11 = func_660((iVar11 - 10), 0, iVar11);
				}
				func_434(1);
				func_435(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_435(45, 0, 1);
				break;
			case 8:
				iVar10 = func_661(func_221(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_660((iVar10 - 20), 0, iVar10);
					iVar11 = func_660((iVar11 - 10), 0, iVar11);
				}
				func_435(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_662(func_221(iParam0)))
				{
					func_390(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_435(120, 0, 1);
				break;
			case 2:
				func_435(120, 0, 1);
				break;
			case 6:
				func_435(func_663(func_222(iParam0)), 0, 1);
				break;
			case 5:
				func_435(120, 0, 1);
				break;
		}
	}
	func_442(iParam0, 1);
	func_647(iParam0, func_414());
	func_431(iParam0);
	if ((!func_429(iParam0) == 0 && bParam1) && func_237() == -1)
	{
		iVar12 = func_439(iParam0);
		if (iVar12 != -1)
		{
			func_440(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_441();
			if (iVar12 != -1)
			{
				func_440(0);
			}
		}
	}
	if (bParam1)
	{
		Global_1898437 = iParam0;
		switch (iVar0)
		{
			case 1:
				Global_1898438 = get_game_timer();
				break;
			case 6:
				switch (func_221(iParam0))
				{
					case 0:
						Global_1898438 = (get_game_timer() - 5000);
						break;
					case 1:
						Global_1898438 = get_game_timer();
						break;
				}
				break;
			case 2:
			case 4:
			case 5:
			case 9:
			case 11:
				Global_1898438 = get_game_timer();
				break;
			case 8:
				if (func_216(func_221(iParam0)) && func_652((*Global_1347702)[func_221(iParam0)]->f_12, 4))
				{
					Global_1898438 = get_game_timer();
				}
				else
				{
					Global_1898438 = (get_game_timer() - 5000);
				}
				break;
			default:
				break;
		}
	}
	if (bParam4)
	{
		switch (iVar0)
		{
			case 1:
				if (func_221(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_664();
				}
				break;
			case 8:
				if (func_221(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_664();
				}
				break;
		}
	}
	if (!func_429(iParam0) == 5 && !func_429(iParam0) == 6)
	{
		if (bParam3)
		{
			func_433(iParam0, 6);
		}
		else
		{
			func_433(iParam0, 5);
		}
		func_431(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_221(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_665();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_666(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(-1267972061);
						func_666(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(1619534881);
						func_666(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(-755457379);
						func_666(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(1015404643);
						func_666(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(-1724192342);
						func_666(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(1310680212);
						func_666(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(-566881549);
						func_666(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(-1753730528);
						func_666(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(147796381);
						func_666(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(-378547623);
						func_666(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(829545206);
						func_666(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_667(891318243);
						func_666(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_668();
						func_669(967523420);
						func_670();
						func_671();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_672(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_666(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_673(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_673(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_674(304805134, 1, 1);
						if (!func_675((*Global_1347702)[21]->f_15, 1))
						{
							func_417((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 2;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[21]->f_3)), iVar14);
						}
						break;
					case 20:
						func_676();
						break;
					case 26:
						func_677();
						break;
					case 17:
						func_678(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_679())
						{
							func_680(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_681(-514575035, -1))
						{
							iVar15 = func_414();
							func_682(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_683(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_679())
						{
							func_680(1529685685);
						}
						break;
					case 34:
						if (func_679())
						{
							func_680(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_684();
						break;
					case 37:
						func_685();
						if (func_686())
						{
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(2116153146, iVar14);
						}
						break;
					case 38:
						func_687();
						break;
					case 43:
						func_688();
						break;
					case 44:
						if (!func_675((*Global_1347702)[82]->f_15, 1))
						{
							func_417((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[82]->f_3)), iVar14);
						}
						if (!func_675((*Global_1347702)[83]->f_15, 1))
						{
							func_417((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
							if (Global_1425247->f_53)
							{
								iVar14 = 0;
							}
							else
							{
								iVar14 = 3;
							}
							_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[83]->f_3)), iVar14);
						}
						break;
					case 45:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
						break;
					case 48:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_MONROE"));
						break;
					case 49:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_FAVOURS"));
						break;
					case 58:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLEET_GOON"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_JOE_GOON"));
						break;
					case 50:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_PAYTAH"));
						break;
					case 52:
						break;
					case 47:
						func_689();
						break;
					case 59:
						func_690();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_691();
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DAVID_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ABE"));
						break;
					case 62:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANGUS_GEDDES"));
						break;
					case 63:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_DUNCAN_GEDDES"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MRS_GEDDES"));
						break;
					case 67:
						func_692();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_673(451, 0);
						}
						if (!func_693(-1992824800))
						{
							if (func_693(1520110311))
							{
								iVar16 = func_414();
								func_682(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_683(1937177603, iVar16, 1);
							}
						}
						if (func_694(4))
						{
							if (!func_412(684296857, 1, 0))
							{
								iVar17 = func_414();
								func_682(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_683(-1439688706, iVar17, 1);
							}
						}
						func_666(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_666(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @4027; //curOff = 3661
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_695(89200);
						func_695(2300);
						func_695(2300);
						Jump @4027; //curOff = 3703
						func_696();
						Jump @4027; //curOff = 3710
						if (Global_1425247->f_53)
						{
							iVar14 = 0;
						}
						else
						{
							iVar14 = 1;
						}
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[108]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[69]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[70]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[7]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[22]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[23]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1347702)[65]->f_3)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[7]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[8]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[36]->f_8)), iVar14);
						_0xe824ce7d13fcb300(get_hash_key(&((*Global_1835011)[48]->f_8)), iVar14);
						func_697();
						func_695(-139100);
						Jump @4027; //curOff = 3962
						if (func_675((*Global_1347702)[9]->f_15, 1))
						{
							func_695(-6000);
						}
						Jump @4027; //curOff = 3990
						func_695(23400);
						func_695(1900);
						func_695(-15000);
						Jump @4027; //curOff = 4014
						func_695(-5500);
						Jump @5141; //curOff = 4027
						switch (func_221(iParam0))
						{
							case 0:
								if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON")))
								{
									_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MILTON"));
								}
								if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR")))
								{
									_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDGAR"));
								}
								break;
							case 4:
								_0x946d46cd6dfb9742(get_player_index(), 0, -812886857);
								_0x946d46cd6dfb9742(get_player_index(), 0, -751847444);
								break;
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, -1843499806);
								_0x946d46cd6dfb9742(get_player_index(), 0, -259499455);
								_0x946d46cd6dfb9742(get_player_index(), 0, 1193930411);
								break;
							case 22:
								_0x946d46cd6dfb9742(get_player_index(), 0, -433459459);
								break;
							case 24:
								_0x946d46cd6dfb9742(player_id(), 0, -1230369426);
								break;
							case 26:
								_0x946d46cd6dfb9742(get_player_index(), 0, 2049954876);
								_0x946d46cd6dfb9742(get_player_index(), 0, 1851064008);
								_0x946d46cd6dfb9742(get_player_index(), 0, -511263105);
								_0x946d46cd6dfb9742(get_player_index(), 0, -837057898);
								_0x946d46cd6dfb9742(get_player_index(), 0, -258195548);
								_0x946d46cd6dfb9742(get_player_index(), 0, -1110794082);
								break;
							case 28:
								_0x946d46cd6dfb9742(get_player_index(), 0, -1324848767);
								break;
							case 30:
								_0x946d46cd6dfb9742(get_player_index(), 0, -461700465);
								_0x946d46cd6dfb9742(get_player_index(), 0, -489179187);
								break;
							case 37:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1595707554);
								break;
							case 56:
								_0x946d46cd6dfb9742(get_player_index(), 0, 883682516);
								break;
							case 57:
								_0x946d46cd6dfb9742(get_player_index(), 0, 780151577);
								break;
							case 58:
								func_698();
								break;
							case 59:
								_0x946d46cd6dfb9742(get_player_index(), 0, -121001171);
								_0x946d46cd6dfb9742(get_player_index(), 0, 727067922);
								break;
							case 61:
								_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_THOMAS_DOWNES"));
								break;
							case 62:
								_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EDITH_DOWNES"));
								func_699();
								break;
							case 66:
								func_700();
								func_701();
								break;
							case 67:
								if (!func_702(6))
								{
									func_703(6);
								}
								if (!func_702(3))
								{
									func_703(3);
								}
								if (func_679())
								{
									func_680(1534638301);
								}
								break;
							case 68:
								_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_MEREDITH"));
								break;
							case 89:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1085773120);
								break;
							case 91:
								_0x946d46cd6dfb9742(get_player_index(), 0, 753448360);
								break;
							case 98:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1853266833);
								break;
							case 101:
								_0x946d46cd6dfb9742(get_player_index(), 0, 709011912);
								break;
							case 115:
								_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("ALLY_RAINSFALL"));
								_0x946d46cd6dfb9742(player_id(), 0, get_hash_key("COMP_EAGLE_FLIES"));
								break;
							case 120:
								_0xd8c7162ab2e2af45(1720279629);
								break;
							case 138:
								_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
								_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
								break;
							case 139:
								_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
								_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
								_0x946d46cd6dfb9742(get_player_index(), 0, 989551914);
								break;
							case 140:
								_0x946d46cd6dfb9742(get_player_index(), 0, 2131140554);
								break;
							case 143:
								_0x946d46cd6dfb9742(get_player_index(), 0, 240200131);
								_0x946d46cd6dfb9742(get_player_index(), 0, -480463506);
								_0x946d46cd6dfb9742(get_player_index(), 0, 1901360117);
								break;
							case 147:
								_0x946d46cd6dfb9742(get_player_index(), 0, -1841532568);
								break;
							case 9:
								if (func_675((*Global_1835011)[69]->f_1, 1))
								{
									func_704(0);
									func_695(40500);
								}
								else
								{
									func_704(0);
									func_695(46500);
								}
								break;
						}
						Jump @5141; //curOff = 5079
						switch (func_221(iParam0))
						{
							case 0:
								switch (func_222(iParam0))
								{
									case 5:
										_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
										break;
								}
								break;
						}
						func_705(iParam0);
						func_706();
						switch (iVar0)
						{
							case 1:
								switch (func_221(iParam0))
								{
									case 4:
										func_707(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 61:
									case 62:
									case 63:
										func_707(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 25:
										func_707(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 12:
										func_707(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 53:
										func_707(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 20:
										func_707(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 19:
										func_707(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
										break;
									case 24:
										iVar18 = func_708(iParam0);
										func_707(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 28:
										func_707(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 34:
										func_707(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
										if (!func_412(-2046502963, 1, 0))
										{
											func_666(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
										}
										break;
									case 29:
										func_707(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
										break;
									case 37:
										break;
									case 58:
										break;
									case 57:
										func_707(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
										break;
									case 76:
										func_707(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 72:
										if (func_708(iParam0) == 0)
										{
											func_707(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
										}
										else
										{
											func_707(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
										}
										break;
								}
								break;
							case 8:
								if (func_652((*Global_1347702)[func_221(iParam0)]->f_12, 536870912))
								{
									func_709(11, 1);
								}
								switch (func_221(iParam0))
								{
									case 109:
										func_707(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 55:
										func_709(8, 1);
										break;
									case 138:
										set_bit(&(Global_40.f_9052), 1);
										set_bit(&(Global_40.f_9052), 3);
										break;
									case 94:
										func_707(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 63:
										func_707(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
										break;
									case 37:
										func_707(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 116:
										func_707(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
										break;
									case 9:
										_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
										break;
								}
								break;
							case 11:
								if (iParam0 == func_710(0, 10, 11, 2116153146))
								{
									func_707(iParam0, func_708(iParam0), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_710(0, 7, 11, -379687487))
								{
									func_707(iParam0, func_483(9), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_710(0, 8, 11, -1386089015))
								{
									func_707(iParam0, func_483(10), 1, 0.5f, 2, 0, 0, 1);
								}
								else if (iParam0 == func_710(0, 11, 11, -1952009645))
								{
									func_707(iParam0, func_483(8), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_710(0, 12, 11, 2065895756))
								{
									func_707(iParam0, func_483(11), 1, 0.5f, 2, 0, 0, 1);
								}
								break;
						}
						if (bParam1)
						{
							if (!func_429(iParam0) == 0)
							{
								if (func_428(iParam0) == 0)
								{
								}
								else if (_0x01f4d242765c6b24(func_428(iParam0)))
								{
									iVar19 = 0;
									if (bParam3)
									{
										iVar19 = 3;
									}
									func_430(func_220(iParam0), func_428(iParam0), iVar19);
									if (bParam4)
									{
										if (iVar0 == 8 && func_221(iParam0) == 58)
										{
											Global_1879514->f_1 = iParam0;
										}
										func_712(func_711(Global_1879514->f_1));
										if (iVar0 == 8 && func_221(iParam0) == 58)
										{
											Global_1879514->f_1 = -1;
										}
									}
								}
							}
							if (bParam2)
							{
								switch (iVar0)
								{
									case 1:
										iVar20 = 3;
										break;
									case 4:
										iVar20 = 2;
										break;
									case 6:
										iVar20 = 1;
										break;
									case 2:
										iVar20 = 9;
										break;
									case 8:
										if (func_216(func_221(iParam0)) && func_652((*Global_1347702)[func_221(iParam0)]->f_12, 1))
										{
											iVar20 = 3;
										}
										else
										{
											iVar20 = 8;
										}
										break;
									case 7:
										iVar20 = 0;
										break;
									case 5:
										iVar20 = 12;
										break;
									case 9:
									case 11:
										iVar20 = 0;
										break;
								}
							}
							func_713(bParam2, iVar20);
						}
					}
					func_436(1);
					if ((bVar13 || func_664()) && (func_220(iParam0) == 1 || func_220(iParam0) == 8))
					{
						Global_1879534->f_6 = 1;
						Global_1879534->f_7 = 1;
					}
				}

bool func_418(int iParam0)
{
	if (func_53(iParam0, 1))
	{
		if (is_waypoint_playback_going_on_for_ped(iParam0, 0))
		{
			return true;
		}
	}
	return false;
}

int func_419(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, -1) == iParam0)
			{
				return -1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 0) == iParam0)
			{
				return 0;
			}
			if (get_ped_in_vehicle_seat(iParam1, 1) == iParam0)
			{
				return 1;
			}
			if (get_ped_in_vehicle_seat(iParam1, 2) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

void func_420(bool bParam0)
{
	if (func_714())
	{
		Global_1357509 = 1;
	}
	if (func_715(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

Vector3 func_421(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1398.749f, -1413.446f, 78.6417f;
		case 3:
			return 1328.9f, -1239.07f, 76.68f;
		case 7:
			return 1347.372f, -1151.021f, 80.9201f;
		case 5:
			return 1347.372f, -1151.021f, 80.9201f;
		case 6:
			return 2203.12f, -990.57f, 44.04f;
		case 8:
			return 0f, 0f, 0f;
		case 9:
			return 0f, 0f, 0f;
		case 10:
			return 1385.43f, -1319.86f, 76.28f;
		case 0:
			return -1103.517f, -561.7969f, 81.611f;
		case 1:
			return -1383.689f, -217.6679f, 99.6452f;
		case 2:
			return -1838.549f, -436.2846f, 158.5897f;
		case 11:
			return 2066.359f, -417.1617f, 43.8513f;
	}
	return 0f, 0f, 0f;
}

bool func_422(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_423(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_424()
{
	return Global_1572864->f_12;
}

void func_425(bool bParam0)
{
	if (func_239(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_716();
	Var1.f_3.f_3 = iVar0;
	if ((!func_717(Global_1347343->f_2) && !func_422(Global_1347343->f_11, 64)) || func_491(32768))
	{
		Var1.f_7 = func_718();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_422(Global_1347343->f_11, 1024) && !func_491(32768))
	{
		Var1.f_11 = func_719();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_422(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_720();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_721(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_722(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_423(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_423(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_426(vector3 vParam0, int iParam3)
{
	if (func_120(vParam0))
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
			if (func_460(vVar2, vParam0, 2f, 1))
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

bool func_427(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_428(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_429(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_723(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

void func_430(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_237() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

int func_431(int iParam0)
{
	return func_725(func_724(iParam0));
}

int func_432(bool bParam0)
{
	if (!bParam0 && func_726(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_433(int iParam0, int iParam1)
{
	if (!func_427(iParam0))
	{
		return;
	}
	func_727(iParam0, iParam1);
}

void func_434(bool bParam0)
{
	if (bParam0)
	{
		Global_1894899 |= 64;
	}
	else
	{
		Global_1894899 = (&Global_1894899 - Global_1894899 & 64);
	}
}

void func_435(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_728(iParam0, iParam1, bParam2);
	}
	else
	{
		iVar0 = (iVar0 / 2);
		if ((iVar0 + get_game_timer()) > Global_1327479->f_5)
		{
			Global_1327479->f_5 = (get_game_timer() + iVar0);
		}
	}
}

void func_436(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

bool func_437(int iParam0, bool bParam1, bool bParam2)
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
		if (func_729())
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
		iVar0 = func_221(&(Global_1898164->f_1[0]));
		if (func_216(iVar0) && func_652((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_427(&(Global_1898164->f_1[0])))
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

bool func_438(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_439(int iParam0)
{
	switch (func_220(iParam0))
	{
		case 1:
			iVar0 = func_221(iParam0);
			return func_730(iVar0);
		case 8:
			iVar1 = func_221(iParam0);
			if (func_652((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_731(iVar1);
			}
			break;
	}
	return -1;
}

void func_440(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_237() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_732(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_733();
		Global_1898077->f_9 = func_734(Global_1894899->f_2);
		func_735(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_441()
{
	if (!func_675((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_675((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_675((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_675((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_675((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_675((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_675((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_442(int iParam0, bool bParam1)
{
	if (func_237() != -1)
	{
		return;
	}
	if (func_201(0) != iParam0)
	{
		return;
	}
	if (func_736(iParam0))
	{
		if (bParam1)
		{
			func_737(-525676072);
		}
		else
		{
			func_738(-525676072);
		}
	}
}

bool func_443(int iParam0)
{
	if (((iParam0 == 4 || iParam0 == 5) || iParam0 == 6) || iParam0 == 7)
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0)
{
	if (((iParam0 == 0 || iParam0 == 1) || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

void func_445(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_740(0, 26, 476, func_739(26), func_62(iParam0));
			break;
		case 1:
			func_740(1, 26, 476, func_739(26), func_62(iParam0));
			break;
		case 2:
			func_740(2, 26, 476, func_739(26), func_62(iParam0));
			break;
		case 3:
			func_740(3, 26, 476, func_739(26), func_739(26));
			break;
		case 4:
			func_740(4, 105, 72, func_739(105), func_62(iParam0));
			break;
		case 5:
			func_740(5, 105, 72, func_739(105), func_62(iParam0));
			break;
		case 6:
			func_740(6, 105, 72, func_739(105), func_62(iParam0));
			break;
		case 7:
			func_740(7, 105, 72, func_739(105), func_739(105));
			break;
	}
}

int func_446(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_447(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_448(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

void func_449(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

int func_450(int iParam0)
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

int func_451(int iParam0)
{
	return iParam0 & 31;
}

int func_452(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_453(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

Vector3 func_454(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_455(int iParam0)
{
	switch (func_237())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_456(int iParam0)
{
	return func_459(iParam0, 2);
}

bool func_457()
{
	if (func_237() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

bool func_458(int iParam0, vector3 vParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	vVar3 = { vVar0 + get_entity_forward_vector(iParam0) };
	return func_741(vVar0, vVar3, vParam1);
}

bool func_459(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

bool func_460(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_461(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			_uiprompt_set_hold_auto_fill_mode(iVar0, iParam16, iParam15);
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
			_uiprompt_set_standardized_hold_mode(iVar0, bParam24);
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
	func_463(iParam0, 1);
	func_464(iParam0, 1);
	func_465(iParam0, 128);
}

void func_462(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 - ((*Global_1945938)[iParam0]->f_1 && iParam1));
}

void func_463(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		if ((*Global_1945938)[iParam0]->f_5 == 5 && !func_459(iParam0, 8))
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, false);
		}
		else
		{
			_uiprompt_set_visible((*Global_1945938)[iParam0]->f_3, bParam1);
		}
	}
}

void func_464(int iParam0, bool bParam1)
{
	if (_uiprompt_is_valid((*Global_1945938)[iParam0]->f_3))
	{
		_uiprompt_set_enabled((*Global_1945938)[iParam0]->f_3, bParam1);
	}
}

void func_465(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	(*Global_1945938)[iParam0]->f_1 = ((*Global_1945938)[iParam0]->f_1 || iParam1);
}

float func_466(float fParam0)
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

void func_467(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_468(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

var func_469(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_470(int iParam0)
{
	return "";
}

float func_471(int iParam0)
{
	if (iParam0 == 10)
	{
		return 33000f;
	}
	return 0f;
}

void func_472(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_205(&(uParam0->f_410[iVar0]), 0, 1))
		{
			if (!is_entity_dead(uParam0->f_1))
			{
				if (_is_ped_getting_into_a_mount_seat(&(uParam0->f_410[iVar0]), true))
				{
					func_742(&(uParam0->f_410[iVar0]), func_194(iParam1), uParam0->f_410[iVar0]->f_11, bParam2);
				}
			}
		}
		iVar0++;
	}
}

void func_473(int iParam0, int iParam1, char[4] cParam2, float fParam3, int iParam4)
{
	if (func_10(524288))
	{
		return;
	}
	if (is_entity_dead(iParam1) || !func_53(iParam0, 1))
	{
		return;
	}
	task_vehicle_follow_waypoint_recording(iParam0, iParam1, cParam2, iParam4, 0, 24, -1, fParam3, 0, 1073741824, 0);
	vehicle_waypoint_playback_override_speed(iParam1, fParam3);
}

bool func_474(var uParam0, float fParam1)
{
	if (!func_25(uParam0))
	{
		return false;
	}
	if (func_26(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_475(struct<6> Param0, int iParam6, var uParam7)
{
	vVar3 = { -2.5f, 8f, 0.5f };
	vVar6 = { 2.5f, 8f, 0.5f };
	vVar9 = { -2.5f, -8f, 0.5f };
	vVar12 = { 2.5f, -8f, 0.5f };
	vVar15 = { -1.6f, 8f, 0.5f };
	vVar18 = { 1.6f, 8f, 0.5f };
	vVar21 = { -1.6f, -8f, 0.5f };
	vVar24 = { 1.6f, -8f, 0.5f };
	bVar27 = false;
	if (((((iParam6 == 5 || iParam6 == 11) || iParam6 == 0) || iParam6 == 1) || iParam6 == 2) || iParam6 == 6)
	{
		bVar27 = true;
	}
	if (iParam6 == 11)
	{
		vVar3 = { -2.5f, 10f, 0.5f };
		vVar6 = { 2.5f, 10f, 0.5f };
	}
	switch (Param0)
	{
		case 0:
			uParam7->f_2266 = 1;
			uParam7->f_25[0]->f_8 = 4;
			uParam7->f_25[0]->f_1.f_1 = 1761016051;
			uParam7->f_25[0]->f_409 = 0;
			if (Param0.f_1 == 2)
			{
				uParam7->f_25[0]->f_598 = func_743(-820275761, 0, -1);
			}
			else
			{
				uParam7->f_25[0]->f_598 = func_743(-346145368, 0, -1);
			}
			uParam7->f_25[0]->f_174.f_74 = 1;
			if (func_15(uParam7, 65536))
			{
				uParam7->f_25[0]->f_499 = 0;
			}
			else
			{
				if (func_314(37))
				{
					uParam7->f_25[0]->f_523 = 0;
				}
				else if (iParam6 == 6 || iParam6 == 7)
				{
					uParam7->f_25[0]->f_523 = 2;
				}
				else
				{
					uParam7->f_25[0]->f_523 = 2;
				}
				if (Param0.f_1 == 0)
				{
					uParam7->f_25[0]->f_499 = 0;
				}
				else if (Param0.f_1 == 1)
				{
					uParam7->f_25[0]->f_499 = 2;
				}
				else
				{
					uParam7->f_25[0]->f_499 = 4;
				}
			}
			break;
		case 1:
			uParam7->f_2266 = 1;
			uParam7->f_25[0]->f_8 = 2;
			uParam7->f_25[0]->f_1.f_1 = -1826304690;
			uParam7->f_25[0]->f_598 = func_743(1339418451, 0, -1);
			uParam7->f_25[0]->f_409 = 1;
			uParam7->f_25[0]->f_252[0]->f_4 = 4;
			uParam7->f_25[0]->f_174.f_74 = 0;
			uParam7->f_25[1]->f_523 = 0;
			if (Param0.f_1 == 0)
			{
				uParam7->f_25[0]->f_499 = 0;
			}
			else if (Param0.f_1 == 1)
			{
				uParam7->f_25[0]->f_499 = 2;
			}
			else
			{
				uParam7->f_25[0]->f_499 = 4;
			}
			break;
		case 2:
			uParam7->f_2266 = 2;
			uParam7->f_25[0]->f_8 = 4;
			uParam7->f_25[0]->f_1.f_1 = 1761016051;
			uParam7->f_25[0]->f_598 = func_743(-346145368, 0, -1);
			uParam7->f_25[0]->f_499 = 2;
			uParam7->f_25[0]->f_174.f_74 = 1;
			uParam7->f_25[0]->f_523 = 1;
			uParam7->f_25[0]->f_409 = 0;
			uParam7->f_25[1]->f_8 = 4;
			uParam7->f_25[1]->f_1.f_1 = 1761016051;
			uParam7->f_25[1]->f_598 = func_743(-346145368, 0, -1);
			uParam7->f_25[1]->f_499 = 2;
			uParam7->f_25[1]->f_174.f_74 = 1;
			uParam7->f_25[1]->f_523 = 1;
			uParam7->f_25[1]->f_409 = 0;
			break;
		case 3:
			uParam7->f_2266 = 1;
			uParam7->f_25[0]->f_409 = 0;
			uParam7->f_25[0]->f_8 = 2;
			if (!func_15(uParam7, 65536))
			{
				uParam7->f_25[0]->f_1.f_1 = func_744(Param0);
			}
			else
			{
				uParam7->f_25[0]->f_1.f_1 = 1761016051;
			}
			uParam7->f_25[0]->f_598 = func_743(-346145368, 0, -1);
			uParam7->f_25[0]->f_174.f_74 = 1;
			if (func_15(uParam7, 65536))
			{
				uParam7->f_25[0]->f_499 = 0;
			}
			else if (Param0.f_1 == 0)
			{
				uParam7->f_25[0]->f_499 = 0;
			}
			else if (Param0.f_1 == 1)
			{
				uParam7->f_25[0]->f_499 = 2;
			}
			else
			{
				uParam7->f_25[0]->f_499 = 4;
			}
			switch (iParam6)
			{
				case 3:
					uParam7->f_2210 = { 1411.066f, 268.8441f, 88.5357f };
					break;
				case 11:
					uParam7->f_2210 = { 2821.865f, -1051.164f, 43.1327f };
					break;
			}
			break;
	}
	switch (iParam6)
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 9:
		case 11:
			uParam7->f_25[0]->f_9.f_1 = -650353329;
			if (uParam7->f_2266 > 1)
			{
				uParam7->f_25[1]->f_9.f_1 = -650353329;
			}
			if (uParam7->f_25[0]->f_174.f_74)
			{
				uParam7->f_25[0]->f_174.f_1 = -650353329;
			}
			if (uParam7->f_2266 > 1)
			{
				if (uParam7->f_25[1]->f_174.f_74)
				{
					uParam7->f_25[1]->f_174.f_1 = -650353329;
				}
			}
			iVar0 = 0;
			while (iVar0 < uParam7->f_25[0]->f_499)
			{
				uParam7->f_25[0]->f_410[iVar0]->f_1 = -650353329;
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < uParam7->f_25[0]->f_523)
			{
				uParam7->f_25[0]->f_500[iVar1]->f_1 = -650353329;
				iVar1++;
			}
			if (uParam7->f_2266 > 1)
			{
				iVar0 = 0;
				while (iVar0 < uParam7->f_25[1]->f_499)
				{
					uParam7->f_25[1]->f_410[iVar0]->f_1 = -650353329;
					iVar0++;
				}
				iVar1 = 0;
				while (iVar1 < uParam7->f_25[1]->f_523)
				{
					uParam7->f_25[1]->f_500[iVar1]->f_1 = -650353329;
					iVar1++;
				}
			}
			if (uParam7->f_25[0]->f_409 > 0)
			{
				uParam7->f_25[0]->f_252[0]->f_1 = 1169778176;
				uParam7->f_25[0]->f_252[0]->f_8 = 2;
			}
			break;
		case 0:
		case 1:
		case 2:
		case 8:
			uParam7->f_25[0]->f_9.f_1 = 189032184;
			if (uParam7->f_25[0]->f_174.f_74)
			{
				uParam7->f_25[0]->f_174.f_1 = 189032184;
			}
			iVar0 = 0;
			while (iVar0 < uParam7->f_25[0]->f_499)
			{
				uParam7->f_25[0]->f_410[iVar0]->f_1 = 189032184;
				iVar0++;
			}
			iVar1 = 0;
			while (iVar1 < uParam7->f_25[0]->f_523)
			{
				uParam7->f_25[0]->f_500[iVar1]->f_1 = 189032184;
				iVar1++;
			}
			break;
		case 10:
			uParam7->f_25[0]->f_9.f_1 = -100702726;
			uParam7->f_25[0]->f_174.f_1 = -100702726;
			uParam7->f_25[0]->f_409 = 2;
			uParam7->f_25[0]->f_252[0]->f_1 = 1526765868;
			uParam7->f_25[0]->f_252[1]->f_1 = -100702726;
			uParam7->f_25[0]->f_252[0]->f_8 = 2;
			uParam7->f_25[0]->f_252[1]->f_8 = 4;
			break;
	}
	switch (iParam6)
	{
		case 0:
			uParam7->f_25[0]->f_9.f_2 = -797707041;
			uParam7->f_25[0]->f_174.f_2 = 566860665;
			uParam7->f_25[0]->f_410[0]->f_2 = -653795165;
			uParam7->f_25[0]->f_410[1]->f_2 = 1312575432;
			uParam7->f_25[0]->f_500[0]->f_2 = -1977731268;
			uParam7->f_25[0]->f_500[1]->f_2 = 1044811047;
			uParam7->f_25[0]->f_9.f_3 = 1;
			uParam7->f_25[0]->f_174.f_3 = 1;
			uParam7->f_25[0]->f_410[0]->f_3 = 1;
			uParam7->f_25[0]->f_410[1]->f_3 = 1;
			uParam7->f_25[0]->f_500[0]->f_3 = 1;
			uParam7->f_25[0]->f_500[1]->f_3 = 1;
			break;
		case 1:
			uParam7->f_25[0]->f_9.f_2 = -1564894869;
			uParam7->f_25[0]->f_174.f_2 = 830847729;
			uParam7->f_25[0]->f_410[0]->f_2 = -263286992;
			uParam7->f_25[0]->f_410[1]->f_2 = 529526552;
			uParam7->f_25[0]->f_500[0]->f_2 = 140030891;
			uParam7->f_25[0]->f_500[1]->f_2 = 1641761352;
			uParam7->f_25[0]->f_9.f_3 = 1;
			uParam7->f_25[0]->f_174.f_3 = 1;
			uParam7->f_25[0]->f_410[0]->f_3 = 1;
			uParam7->f_25[0]->f_410[1]->f_3 = 1;
			uParam7->f_25[0]->f_500[0]->f_3 = 1;
			uParam7->f_25[0]->f_500[1]->f_3 = 1;
			break;
		case 2:
			uParam7->f_25[0]->f_9.f_2 = -1262469768;
			uParam7->f_25[0]->f_174.f_2 = 1128226404;
			uParam7->f_25[0]->f_410[0]->f_2 = -23778371;
			uParam7->f_25[0]->f_410[1]->f_2 = 859543443;
			uParam7->f_25[0]->f_410[2]->f_2 = 553054982;
			uParam7->f_25[0]->f_410[3]->f_2 = 1457938152;
			uParam7->f_25[0]->f_9.f_3 = 1;
			uParam7->f_25[0]->f_174.f_3 = 1;
			uParam7->f_25[0]->f_410[0]->f_3 = 1;
			uParam7->f_25[0]->f_410[1]->f_3 = 1;
			uParam7->f_25[0]->f_410[2]->f_3 = 1;
			uParam7->f_25[0]->f_410[3]->f_3 = 1;
			break;
		case 8:
			uParam7->f_25[0]->f_9.f_2 = -1262469768;
			uParam7->f_25[0]->f_174.f_2 = 830847729;
			uParam7->f_25[0]->f_410[0]->f_2 = -23778371;
			uParam7->f_25[0]->f_410[1]->f_2 = 859543443;
			uParam7->f_25[0]->f_410[2]->f_2 = 553054982;
			uParam7->f_25[0]->f_410[3]->f_2 = 1457938152;
			uParam7->f_25[0]->f_9.f_3 = 1;
			uParam7->f_25[0]->f_174.f_3 = 1;
			uParam7->f_25[0]->f_410[0]->f_3 = 1;
			uParam7->f_25[0]->f_410[1]->f_3 = 1;
			uParam7->f_25[0]->f_410[2]->f_3 = 1;
			uParam7->f_25[0]->f_410[3]->f_3 = 1;
			break;
		case 10:
			uParam7->f_25[0]->f_9.f_2 = 1459193931;
			uParam7->f_25[0]->f_174.f_2 = 599616266;
			uParam7->f_25[0]->f_252[1]->f_2 = -2053696238;
			uParam7->f_25[0]->f_9.f_3 = 1;
			uParam7->f_25[0]->f_174.f_3 = 1;
			uParam7->f_25[0]->f_252[1]->f_3 = 1;
			break;
	}
	uParam7->f_25[0]->f_9.f_4 = 4;
	uParam7->f_25[0]->f_9.f_7 = -1101297303;
	uParam7->f_25[0]->f_174.f_4 = 4;
	uParam7->f_25[0]->f_174.f_7 = 860033945;
	if (bVar27)
	{
		uParam7->f_25[0]->f_410[0]->f_11 = { vVar15 };
		uParam7->f_25[0]->f_410[1]->f_11 = { vVar18 };
		uParam7->f_25[0]->f_410[2]->f_11 = { vVar21 };
		uParam7->f_25[0]->f_410[3]->f_11 = { vVar24 };
	}
	else
	{
		uParam7->f_25[0]->f_410[0]->f_11 = { vVar3 };
		uParam7->f_25[0]->f_410[1]->f_11 = { vVar6 };
		uParam7->f_25[0]->f_410[2]->f_11 = { vVar9 };
		uParam7->f_25[0]->f_410[3]->f_11 = { vVar12 };
	}
	if (Param0 == 3)
	{
		uParam7->f_25[0]->f_500[0]->f_8 = 1;
		uParam7->f_25[0]->f_500[1]->f_8 = 2;
	}
	else
	{
		uParam7->f_25[0]->f_500[0]->f_8 = 3;
		uParam7->f_25[0]->f_500[1]->f_8 = 4;
	}
	iVar0 = 0;
	while (iVar0 < uParam7->f_25[0]->f_499)
	{
		if (func_745())
		{
			uParam7->f_25[0]->f_410[iVar0]->f_10 = -1101297303;
		}
		else
		{
			uParam7->f_25[0]->f_410[iVar0]->f_10 = -594562071;
		}
		iVar0++;
	}
	if (iParam6 == 1)
	{
		uParam7->f_25[0]->f_410[1]->f_10 = -1101297303;
	}
	iVar1 = 0;
	while (iVar1 < uParam7->f_25[0]->f_523)
	{
		uParam7->f_25[0]->f_500[iVar1]->f_7 = -1101297303;
		iVar1++;
	}
	if (uParam7->f_2266 > 1)
	{
		uParam7->f_25[1]->f_9.f_4 = 4;
		uParam7->f_25[1]->f_9.f_7 = -1101297303;
		uParam7->f_25[1]->f_174.f_4 = 4;
		uParam7->f_25[1]->f_174.f_7 = 860033945;
		if (bVar27)
		{
			uParam7->f_25[1]->f_410[0]->f_11 = { vVar15 };
			uParam7->f_25[1]->f_410[1]->f_11 = { vVar18 };
			uParam7->f_25[1]->f_410[2]->f_11 = { vVar21 };
			uParam7->f_25[1]->f_410[3]->f_11 = { vVar24 };
		}
		else
		{
			uParam7->f_25[1]->f_410[0]->f_11 = { vVar3 };
			uParam7->f_25[1]->f_410[1]->f_11 = { vVar6 };
			uParam7->f_25[1]->f_410[2]->f_11 = { vVar9 };
			uParam7->f_25[1]->f_410[3]->f_11 = { vVar12 };
		}
		uParam7->f_25[1]->f_500[0]->f_8 = 3;
		uParam7->f_25[1]->f_500[1]->f_8 = 4;
		iVar0 = 0;
		while (iVar0 < uParam7->f_25[1]->f_499)
		{
			if (func_745())
			{
				uParam7->f_25[1]->f_410[iVar0]->f_10 = -1101297303;
			}
			else
			{
				uParam7->f_25[1]->f_410[iVar0]->f_10 = -594562071;
			}
			iVar0++;
		}
		iVar1 = 0;
		while (iVar1 < uParam7->f_25[1]->f_523)
		{
			uParam7->f_25[1]->f_500[iVar1]->f_7 = -1101297303;
			iVar1++;
		}
	}
	if (((iParam6 == 6 || iParam6 == 7) || iParam6 == 8) || iParam6 == 9)
	{
		uParam7->f_25[0]->f_1.f_1 = -1688693650;
		uParam7->f_25[0]->f_8 = 4;
		uParam7->f_25[0]->f_598 = (func_743(-820275761, 0, -1) + func_743(-1266253495, 0, -1));
		uParam7->f_25[0]->f_500[0]->f_8 = 3;
		uParam7->f_25[0]->f_500[1]->f_8 = 4;
	}
	if (iParam6 == 8)
	{
		uParam7->f_25[0]->f_523 = 0;
	}
	if (func_15(uParam7, 65536))
	{
		uParam7->f_25[0]->f_174.f_7 = 392538360;
		uParam7->f_25[0]->f_9.f_4 = 6;
		uParam7->f_25[0]->f_174.f_4 = 6;
		uParam7->f_25[0]->f_598 = 0;
		uParam7->f_5[0]->f_1 = 1830978939;
		uParam7->f_5[1]->f_1 = 1830978939;
		uParam7->f_5[0]->f_6 = "0380_S_M_M_PDLMarshals_01_WHITE_01";
		uParam7->f_5[0]->f_4 = 6;
		uParam7->f_5[1]->f_4 = 6;
		uParam7->f_5[0]->f_7 = 1845102363;
		uParam7->f_5[1]->f_7 = -183018591;
		uParam7->f_5[0]->f_8 = 1;
		uParam7->f_5[1]->f_8 = 2;
		uParam7->f_25[0]->f_499 = 3;
		uParam7->f_25[0]->f_410[0]->f_1 = 1830978939;
		uParam7->f_25[0]->f_410[1]->f_1 = 1830978939;
		uParam7->f_25[0]->f_410[0]->f_10 = -594562071;
		uParam7->f_25[0]->f_410[1]->f_10 = -1101297303;
		uParam7->f_25[0]->f_410[0]->f_11 = { -1.5f, -3f, 0.5f };
		uParam7->f_25[0]->f_410[1]->f_11 = { 1.5f, -3f, 0.5f };
		uParam7->f_25[0]->f_410[2]->f_1 = 1830978939;
		uParam7->f_25[0]->f_410[3]->f_1 = 1830978939;
		uParam7->f_25[0]->f_410[2]->f_10 = -1101297303;
		uParam7->f_25[0]->f_410[3]->f_10 = -594562071;
		uParam7->f_25[0]->f_410[2]->f_11 = { 0f, -5f, 0.5f };
		uParam7->f_25[0]->f_410[3]->f_11 = { 0.5f, -8f, 0.5f };
	}
	if (iParam6 == 7)
	{
		uParam7->f_25[0]->f_174.f_7 = 1845102363;
		uParam7->f_25[0]->f_410[0]->f_11 = { vVar21 };
		uParam7->f_25[0]->f_410[1]->f_11 = { vVar12 };
	}
	iVar28 = 0;
	while (iVar28 < uParam7->f_2266)
	{
		if (uParam7->f_25[iVar28]->f_1.f_1 == -1688693650)
		{
			uParam7->f_25[iVar28]->f_601 = { -1.5f, -1f, 0.7f };
			uParam7->f_25[iVar28]->f_604 = { 1.5f, -1f, 0.7f };
		}
		else
		{
			uParam7->f_25[iVar28]->f_601 = { 0f, -2.79f, 0.7f };
		}
		if (uParam7->f_25[iVar28]->f_1.f_1 == -1688693650 || uParam7->f_25[iVar28]->f_1.f_1 == 1761016051)
		{
			uParam7->f_25[iVar28]->f_410[0]->f_11.f_1 = (uParam7->f_25[iVar28]->f_410[0]->f_11.f_1 + 6f);
			uParam7->f_25[iVar28]->f_410[1]->f_11.f_1 = (uParam7->f_25[iVar28]->f_410[1]->f_11.f_1 + 6f);
			uParam7->f_25[iVar28]->f_410[0]->f_11 = (uParam7->f_25[iVar28]->f_410[0]->f_11 - 1f);
			uParam7->f_25[iVar28]->f_410[1]->f_11 = (uParam7->f_25[iVar28]->f_410[1]->f_11 + 1f);
		}
		if (iParam6 == 10)
		{
			uParam7->f_25[iVar28]->f_676 = 0;
			uParam7->f_25[iVar28]->f_677 = -1;
		}
		else
		{
			uParam7->f_25[iVar28]->f_676 = -1;
			uParam7->f_25[iVar28]->f_677 = 0;
		}
		iVar28++;
	}
	if (iParam6 == 11)
	{
		uParam7->f_25[0]->f_410[0]->f_11.f_1 = (uParam7->f_25[0]->f_410[0]->f_11.f_1 + 3f);
		uParam7->f_25[0]->f_410[1]->f_11.f_1 = (uParam7->f_25[0]->f_410[1]->f_11.f_1 + 3f);
		uParam7->f_25[0]->f_410[0]->f_11 = (uParam7->f_25[0]->f_410[0]->f_11 - 0.5f);
		uParam7->f_25[0]->f_410[1]->f_11 = (uParam7->f_25[0]->f_410[1]->f_11 + 0.5f);
	}
	if (iParam6 == 6)
	{
		uParam7->f_25[0]->f_410[0]->f_11 = { -1.4f, -8f, 0.5f };
		uParam7->f_25[0]->f_410[1]->f_11 = { 1.4f, -8f, 0.5f };
		uParam7->f_25[0]->f_410[2]->f_11 = { -1.4f, -12f, 0.5f };
		uParam7->f_25[0]->f_410[3]->f_11 = { 1.4f, -12f, 0.5f };
	}
	if (iParam6 == 3)
	{
		uParam7->f_25[0]->f_499 = 1;
		uParam7->f_25[0]->f_523 = 1;
		uParam7->f_25[0]->f_500[0]->f_1 = -650353329;
		uParam7->f_25[0]->f_410[0]->f_11 = { -1f, -10f, 0.5f };
		uParam7->f_25[0]->f_500[0]->f_7 = -1101297303;
	}
	if (iParam6 == 10)
	{
		uParam7->f_25[0]->f_9.f_7 = -1569615261;
		uParam7->f_25[0]->f_174.f_7 = 1845102363;
	}
	if (iParam6 == 6)
	{
		uParam7->f_25[0]->f_595 = 2;
		uParam7->f_25[0]->f_541[0]->f_1 = -650353329;
		uParam7->f_25[0]->f_541[1]->f_1 = -650353329;
		uParam7->f_25[0]->f_541[0]->f_11 = 1;
		uParam7->f_25[0]->f_541[1]->f_11 = 1;
		uParam7->f_25[0]->f_541[0]->f_9 = -594562071;
		uParam7->f_25[0]->f_541[1]->f_9 = -594562071;
	}
	if (iParam6 == 0)
	{
		uParam7->f_25[0]->f_595 = 4;
		uParam7->f_25[0]->f_541[0]->f_1 = 1255849914;
		uParam7->f_25[0]->f_541[1]->f_1 = 1255849914;
		uParam7->f_25[0]->f_541[2]->f_1 = 1255849914;
		uParam7->f_25[0]->f_541[3]->f_1 = 1255849914;
		uParam7->f_25[0]->f_541[0]->f_11 = 0;
		uParam7->f_25[0]->f_541[1]->f_11 = 0;
		uParam7->f_25[0]->f_541[2]->f_11 = 0;
		uParam7->f_25[0]->f_541[3]->f_11 = 0;
		uParam7->f_25[0]->f_541[0]->f_9 = 860033945;
		uParam7->f_25[0]->f_541[1]->f_9 = -594562071;
		uParam7->f_25[0]->f_541[2]->f_9 = -1101297303;
		uParam7->f_25[0]->f_541[3]->f_9 = -594562071;
	}
	if (iParam6 == 2)
	{
		uParam7->f_25[0]->f_499 = 4;
		uParam7->f_25[0]->f_523 = 0;
		uParam7->f_25[0]->f_1.f_1 = -1688693650;
		uParam7->f_25[0]->f_8 = 4;
		uParam7->f_25[0]->f_598 = (func_743(-820275761, 0, -1) + func_743(-1266253495, 0, -1));
		uParam7->f_25[0]->f_627 = 1;
	}
	if (iParam6 == 8)
	{
		uParam7->f_25[0]->f_627 = 1;
		uParam7->f_25[0]->f_678 = 32;
	}
	iVar0 = 0;
	while (iVar0 < uParam7->f_25[0]->f_499)
	{
		uParam7->f_25[0]->f_410[iVar0]->f_8 = func_746();
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 < uParam7->f_25[0]->f_595)
	{
		uParam7->f_25[0]->f_541[iVar2]->f_8 = func_746();
		iVar2++;
	}
	if (uParam7->f_2266 > 1)
	{
		iVar0 = 0;
		while (iVar0 < uParam7->f_25[1]->f_499)
		{
			uParam7->f_25[1]->f_410[iVar0]->f_8 = func_746();
			iVar0++;
		}
		iVar2 = 0;
		while (iVar2 < uParam7->f_25[1]->f_595)
		{
			uParam7->f_25[1]->f_541[iVar2]->f_8 = func_746();
			iVar2++;
		}
	}
}

void func_476(var uParam0)
{
	func_747(&(uParam0->f_2069));
	func_748(&(uParam0->f_2069), 1);
	func_749(&(uParam0->f_2069), 0);
	func_750(&(uParam0->f_2069), 8f);
	func_751(&(uParam0->f_2069), 50);
	func_752(&(uParam0->f_2069), 30f);
	func_753(&(uParam0->f_2069), 0);
	func_754(&(uParam0->f_2069), 0);
	func_755(&(uParam0->f_2069), 0);
	func_747(&(uParam0->f_2097));
	func_748(&(uParam0->f_2097), 1);
	func_749(&(uParam0->f_2097), 1000);
	func_751(&(uParam0->f_2097), 65);
}

char* func_477(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CRST1A";
		case 1:
			return "CRST2A";
		case 2:
			return "CRST3A";
		case 4:
			return "CRRH1A";
		case 5:
			return "CRRH2A";
		case 6:
			return "CRRH3A";
		case 8:
			return "CRCA1A";
		case 9:
			return "CRCA2A";
		case 10:
			return "CRCA3A";
		case 11:
			return "";
		case 13:
			return "CRRL3A";
		case 12:
			return "CRRSCA";
		default:
			break;
	}
	return "";
}

void func_478(int iParam0)
{
	if (get_entity_model(iParam0) == 1761016051)
	{
		set_vehicle_extra(iParam0, 1, true);
		set_vehicle_extra(iParam0, 2, false);
		set_vehicle_extra(iParam0, 3, true);
		set_vehicle_extra(iParam0, 4, true);
	}
	else if (get_entity_model(iParam0) == 1596452133)
	{
		set_vehicle_extra(iParam0, 1, false);
	}
	else if (get_entity_model(iParam0) == -1688693650)
	{
		set_vehicle_extra(iParam0, 1, true);
		set_vehicle_extra(iParam0, 2, false);
	}
}

void func_479(var uParam0)
{
	_0xcbf88256e44d5d39(uParam0, 1);
}

void func_480(var uParam0, var uParam1, bool bParam2)
{
	if (is_entity_dead(uParam1->f_1))
	{
		return;
	}
	iVar0 = uParam1->f_1;
	vVar1 = { get_entity_coords(iVar0, true, false) };
	vVar1.f_2 = (vVar1.z + 5f);
	*vVar4[0] = { 0f, -0.7f, 0.77f };
	*vVar4[1] = { -0.5f, 0.2f, 0.44f };
	*vVar4[2] = { -0.49f, -0.3f, 0.44f };
	*vVar4[3] = { -0.05f, 0.62f, 0.35f };
	*vVar4[4] = { 0.4f, 1f, 0.37f };
	*vVar4[5] = { 0.1f, 1f, 0.37f };
	fVar42 = 1.6f;
	fVar43 = 0.35f;
	vVar4[0]->f_1 = (vVar4[0]->f_1 + fVar42);
	vVar4[1]->f_1 = (vVar4[1]->f_1 + fVar42);
	vVar4[2]->f_1 = (vVar4[2]->f_1 + fVar42);
	vVar4[3]->f_1 = (vVar4[3]->f_1 + fVar42);
	vVar4[4]->f_1 = (vVar4[4]->f_1 + fVar42);
	vVar4[5]->f_1 = (vVar4[5]->f_1 + fVar42);
	vVar4[0]->f_2 = (vVar4[0]->f_2 - fVar43);
	vVar4[1]->f_2 = (vVar4[1]->f_2 - fVar43);
	vVar4[2]->f_2 = (vVar4[2]->f_2 - fVar43);
	vVar4[3]->f_2 = (vVar4[3]->f_2 - fVar43);
	vVar4[4]->f_2 = (vVar4[4]->f_2 - fVar43);
	vVar4[5]->f_2 = (vVar4[5]->f_2 - fVar43);
	*vVar23[0] = { 90f, 0f, 0f };
	*vVar23[1] = { -59f, 0f, -90f };
	*vVar23[2] = { 0f, 60f, 0f };
	*vVar23[3] = { -16f, 0f, 0f };
	*vVar23[4] = { 0f, 0f, 0f };
	*vVar23[5] = { 0f, 0f, 60f };
	iVar44 = 0;
	while (iVar44 < 6)
	{
		if (!bParam2)
		{
			if (!does_entity_exist(&(uParam0->f_2214[iVar44])))
			{
				uParam0->f_2214[iVar44] = create_object_no_offset(uParam0->f_2214[iVar44]->f_1, vVar1, true, true, false, true);
				if (iVar44 == 1 || iVar44 == 2)
				{
					_0xffb99ffd17f65889(&(uParam0->f_2214[iVar44]), 0.75f);
				}
			}
		}
		if (does_entity_exist(&(uParam0->f_2214[iVar44])) && !is_entity_attached_to_entity(&(uParam0->f_2214[iVar44]), iVar0))
		{
			attach_entity_to_entity_physically(&(uParam0->f_2214[iVar44]), iVar0, 0, get_entity_bone_index_by_name(iVar0, "boot"), *vVar4[iVar44], 0f, 0f, 0f, *vVar23[iVar44], -1f, 0, 1, 0, 0, 2, 1, 1065353216, 1065353216);
		}
		_0x7e3f546acfe6c8d9(&(uParam0->f_2214[iVar44]));
		_0xa9e6d8f2ddfc4db9(&(uParam0->f_2214[iVar44]), 1);
		uParam0->f_2214[iVar44]->f_2 = 1;
		iVar44++;
	}
}

void func_481(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_756(uParam0, iParam1, sParam2))
	{
		if (!is_ped_injured(iParam1))
		{
			if (!network_is_game_in_progress() || (network_is_game_in_progress() && network_has_control_of_entity(iParam1)))
			{
				set_ped_can_play_ambient_anims(iParam1, bParam3);
			}
		}
	}
}

int func_482(int iParam0, var uParam1)
{
	uParam1->f_10 = func_757(uParam1->f_10);
	if (uParam1->f_10 == -1)
	{
		*iParam0 = 1;
		return 0;
	}
	if (uParam1->f_10 >= 7)
	{
		*iParam0 = 1;
		return 0;
	}
	if (*uParam1)
	{
		if (func_120(uParam1->f_6))
		{
		}
	}
	bVar0 = func_758();
	if (*uParam1)
	{
		if (bVar0 && !func_675((*Global_1835011)[4]->f_1, 1))
		{
			if (func_759(5))
			{
				func_760(5);
				func_761(5);
				func_762(0);
				func_763(0);
			}
		}
	}
	if (func_764(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_675((*Global_1835011)[37]->f_1, 1)) && !func_675((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_675((*Global_1835011)[43]->f_1, 1)) && !func_675((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_765(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_766(iVar1))
	{
		bVar3 = true;
		if (func_767(iVar1))
		{
			bVar4 = true;
		}
		if (func_768(iVar1))
		{
			bVar5 = true;
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar5 && !uParam1->f_5)
			{
				func_769(uParam1->f_10);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (*uParam1)
	{
		if (bVar3)
		{
			if (bVar4)
			{
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_3)
	{
		if (uParam1->f_10 == 0)
		{
			if (!func_759(0) && func_759(1))
			{
				func_770(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_771())
			{
				func_772();
			}
			func_762(0);
			func_763(0);
			func_773(uParam1->f_6);
		}
	}
	if (!func_766(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_774(uParam1->f_10) == 0 || func_775(uParam1->f_10) == 0) || func_776(uParam1->f_10) == 0)
			{
				func_777(uParam1->f_10);
			}
			func_778(uParam1->f_10);
			func_779(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_765(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_766(iVar1))
	{
		bVar3 = true;
		if (func_767(iVar1))
		{
			bVar4 = true;
		}
		if (func_768(iVar1))
		{
			bVar5 = true;
		}
	}
	if (uParam1->f_2)
	{
		if (bVar3)
		{
			if (_0x083d497d57b7400f(iVar2))
			{
				freeze_entity_position(iVar2, false);
			}
			if (!func_120(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_780(uParam1->f_10))
	{
		*iParam0 = 0;
		return 0;
	}
	if (bVar3)
	{
		if (bVar4)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (bVar3)
	{
		if (bVar5 && !uParam1->f_5)
		{
			if (*uParam1)
			{
				*iParam0 = 0;
				return 0;
			}
			*iParam0 = 1;
			return 0;
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (!_0xa0bc8faed8cfeb3c(iVar2))
			{
				*iParam0 = 0;
				return 0;
			}
			iVar6 = player_id();
			iVar7 = _get_saddle_horse_for_player(iVar6);
			if (does_entity_exist(iVar7))
			{
				if (iVar7 != iVar2)
				{
					_set_ped_as_saddle_horse_for_player(iVar6, 0);
				}
			}
			Var8 = { func_781(uParam1->f_10) };
			Var10 = { func_782() };
			func_783(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_784(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_785(uParam1->f_10);
		if (uParam1->f_2 && !func_120(uParam1->f_6))
		{
			freeze_entity_position(iVar2, false);
			_0x0348469daa17576c(iVar2);
			set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
			set_entity_heading(iVar2, uParam1->f_9);
			_0x9587913b9e772d29(iVar2, 0);
		}
		*iParam0 = 2;
		return iVar2;
	}
	func_786(uParam1->f_10);
	if (func_784(uParam1->f_10))
	{
		iVar16 = func_787(uParam1->f_10);
		iVar17 = get_id_of_this_thread();
		if (iVar16 != iVar17)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	*iParam0 = 2;
	return iVar2;
}

int func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_743(1330954593, 0, -1);
		case 1:
			return func_743(1330954593, 0, -1);
		case 2:
			return func_743(1330954593, 0, -1) * 2;
		case 4:
			return func_743(1330954593, 0, -1);
		case 5:
			return func_743(1330954593, 0, -1);
		case 6:
			return func_743(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_743(1330954593, 0, -1) * 3;
		case 9:
			return func_743(1330954593, 0, -1) * 3;
		case 10:
			return func_743(1330954593, 0, -1) * 3;
		case 11:
			return func_743(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

int func_484()
{
	iVar0 = func_788();
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

int func_485(int iParam0)
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

float func_486(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_487(int iParam0)
{
	return func_301(iParam0) == 0;
}

void func_488(int iParam0)
{
	if (!func_503(iParam0))
	{
		return;
	}
	uVar0 = (*Global_1835011)[iParam0]->f_8;
	iVar1 = get_hash_key(&uVar0);
	if (_uilog_is_entry_registered(1, iVar1))
	{
		_uilog_remove_entry(1, iVar1);
	}
	if (iParam0 == 77 || iParam0 == 38)
	{
		return;
	}
	vVar2 = { (*Global_1835011)[iParam0]->f_18 };
	MemCopy(&Var5, {(*Global_1835011)[iParam0]->f_8}, 8);
	Var13 = { Var5 };
	StringConCat(&Var13, "_DESC", 64);
	_uilog_add_entry_hash(1, iVar1, vVar2, (*Global_1835011)[iParam0]->f_26, get_hash_key(&Var13), iVar21);
	_uilog_set_entry_icon_texture(1, iVar1, (*Global_1835011)[iParam0]->f_26, 676312963);
}

void func_489(int iParam0)
{
	if (!func_427(iParam0))
	{
		return;
	}
	func_790(iParam0, func_789(iParam0) + 1);
}

int func_490(int iParam0, int iParam1)
{
	iVar0 = func_724(iParam0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1898164->f_162 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1898164->f_162;
	func_791(iParam0, iVar0);
	Global_1898164->f_162++;
	if (iParam1 < 0 || iParam1 >= Global_1898164->f_162)
	{
		return iVar0;
	}
	func_792(iVar0, iParam1);
	return iParam1;
}

bool func_491(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_492(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_493(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_494(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 - (Global_1572864->f_3 && iParam0));
}

void func_495(bool bParam0)
{
	func_793(bParam0);
	func_794(bParam0);
	func_795(bParam0);
	func_796(bParam0);
	func_797(bParam0);
	func_798(bParam0);
	func_799(bParam0);
	func_800(bParam0);
}

void func_496(bool bParam0)
{
	if (func_237() != -1)
	{
		return;
	}
	if (bParam0 && _0x200373a8df081f22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_673(89, 1);
		_0xfb6e111908502871(5);
	}
	else
	{
		func_673(90, 1);
		_0x3fc4c027fd0936f4(5);
	}
	func_801(1, bParam0, 1);
	func_802();
	Global_40.f_11095.f_43 = bParam0;
}

void func_497(int iParam0)
{
	iVar0 = 0;
	if (func_237() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 2;
	Global_1898077->f_2 = 0;
	Global_1898077->f_3 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_803(Global_1898077->f_7, Global_1898077->f_3);
}

void func_498(int iParam0)
{
	if (Global_1898077->f_1 == 2)
	{
		return;
	}
	iVar0 = 0;
	if (func_237() != -1)
	{
		iVar0 = 1;
	}
	Global_1898077->f_1 = 5;
	Global_1898077->f_2 = 0;
	Global_1898077->f_4 = iParam0;
	Global_1898077->f_7 = iVar0;
	func_804(Global_1898077->f_7, Global_1898077->f_4);
}

void func_499(bool bParam0, bool bParam1)
{
	if (func_237() == -1)
	{
		func_805();
	}
	else
	{
		return;
	}
	func_806();
	Global_40.f_9.f_14 = func_414();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_807())
		{
			func_808(Global_1310720->f_1);
		}
		else if (func_809() == func_502(Global_36, 1) && func_810() != 2)
		{
			func_808(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_808(Global_36);
		}
		func_811(Global_36, &vVar0, &uVar4);
		if (!func_807())
		{
			if (func_620(vVar0, Global_36) < func_620(Global_40.f_9.f_7, Global_36))
			{
				func_808(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_502(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_811(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_272(Global_1935630, 8192);
	}
	func_812();
}

int func_500(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_813(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_814("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_815(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_307(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_813(iParam1, 512) && func_816(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_813(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_813(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_813(iParam1, 33554432)))
				{
					if (iVar0 == 0 || _0xa2091482ed42ef85(Global_35, &Var4) > _0xa2091482ed42ef85(Global_35, uParam0))
					{
						iVar0 = Var4.f_4;
						*uParam0 = { Var4 };
					}
				}
			}
			iVar3++;
		}
		func_817(iVar1);
	}
	if (func_307(iVar0))
	{
	}
	else if (!func_813(iParam1, 512))
	{
		iParam1 |= 512;
		return func_500(uParam0, iParam1, iParam2);
	}
	else if (func_813(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_501(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_502(vector3 vParam0, int iParam3)
{
	iVar0 = func_818();
	if (func_819(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_820(vParam0, iParam3);
}

bool func_503(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

void func_504(int* iParam0, int iParam1, int iParam2)
{
	if (!func_53(*iParam0, 1))
	{
		return;
	}
	if (func_10(262144))
	{
		switch (iParam1)
		{
			case 0:
				fVar0 = 0.3f;
				break;
			case 1:
				fVar0 = 0.1f;
				break;
			case 2:
				fVar0 = 1.8f;
				break;
			case 3:
				fVar0 = 1.5f;
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				fVar0 = 1.3f;
				break;
			case 1:
				fVar0 = 0.9f;
				break;
			case 2:
				fVar0 = 1.8f;
				break;
			case 3:
				fVar0 = 1.5f;
				break;
		}
	}
	if (func_15(&Local_51, 2) && !func_15(&Local_51, 65536))
	{
		if (func_183(Global_35, *iParam0, 1, 1) < 100f)
		{
			func_163(iParam0, &(iParam0->f_5), 1, 0, 0);
		}
		else
		{
			func_46(&(iParam0->f_5));
		}
	}
	if (!func_15(&Local_51, 65536))
	{
		if (!Local_51.f_25[iParam2]->f_613 && !is_entity_dead(Local_51.f_25[iParam2]->f_1))
		{
			fVar4 = func_821(*iParam0, Local_51.f_25[iParam2]->f_1, iParam0->f_11);
			if (((get_entity_speed(Local_51.f_25[iParam2]->f_1) < 2f && !func_551(Local_51.f_25[iParam2])) || vdist(get_entity_coords(*iParam0, true, false), func_421(iLocal_24)) < 12f) || (((func_53(Global_1392388->f_3, 0) && vdist(get_entity_coords(Global_1392388->f_3, true, false), get_entity_coords(*iParam0, true, false)) < 9f) && !func_10(1)) && is_ped_facing_ped(*iParam0, Global_1392388->f_3, 45f)))
			{
				fVar4 = 0f;
				if (Local_51.f_25[iParam2]->f_626)
				{
					if (!func_108(*iParam0, -982327190))
					{
						task_stand_still(*iParam0, -1);
					}
				}
				if (func_53(Global_1392388->f_3, 0))
				{
					if (!iParam0->f_18)
					{
						_0xaab050da48b57978(*iParam0, "Default_Curious", Global_1392388->f_3, -1, 4);
						iParam0->f_18 = 1;
					}
				}
			}
			if (fVar4 < 1f && func_822(*iParam0, Local_51.f_25[iParam2]->f_1))
			{
				fVar4 = 1f;
			}
			func_182(*iParam0, fVar4);
		}
	}
	else
	{
		if (func_15(&Local_51, 2))
		{
			fVar4 = 2.5f;
		}
		else if (func_183(*iParam0, Local_51.f_25[iParam2]->f_1, 1, 1) < (230f / 3f))
		{
			fVar4 = 0.101f;
		}
		else if (func_183(*iParam0, Local_51.f_25[iParam2]->f_1, 1, 1) < 230f)
		{
			fVar4 = 1f;
		}
		else
		{
			fVar4 = 1.25f;
		}
		func_182(*iParam0, fVar4);
	}
	if (func_15(&Local_51, 65536))
	{
		return;
	}
	if (!func_10(262144))
	{
		if (!iParam0->f_15)
		{
			if (func_15(&Local_51, 8) && !func_823(*iParam0))
			{
				if (!func_25(&(iParam0->f_19)))
				{
					func_100(&(iParam0->f_19));
				}
				if (func_269(&(iParam0->f_19), fVar0))
				{
					if (iParam0->f_18)
					{
						_0x935cf6e42baf7f4d(*iParam0);
						iParam0->f_18 = 0;
					}
					if (iLocal_25 == 0)
					{
						if (iParam1 == 0 && iLocal_49 > 0)
						{
							vVar1 = { func_244(iLocal_25, 82) };
							if (func_824(&vVar1))
							{
								func_825(&vVar1, 0, 0);
							}
							func_97(&(Local_51.f_2286), iLocal_25, 51);
						}
					}
					func_826(iParam0, iParam1, Local_51.f_25[iParam2]->f_613);
					func_42(&(iParam0->f_19));
					iParam0->f_15 = 1;
				}
			}
		}
	}
	if (!is_ped_on_mount(*iParam0))
	{
		if (func_15(&Local_51, 2))
		{
			if (!func_108(*iParam0, 1120685857) && !is_ped_in_combat(*iParam0, 0))
			{
				task_combat_hated_targets_in_area(*iParam0, get_entity_coords(*iParam0, true, false), 100f, 0, 0);
			}
			if (get_entity_speed(Local_51.f_25[iParam2]->f_1) > 0.5f)
			{
				set_ped_reset_flag(*iParam0, 25, true);
			}
		}
	}
	if (!func_10(4194304))
	{
		if ((((!func_15(&Local_51, 1048576) && !iParam0->f_16) && !is_entity_dead(Local_51.f_25[iParam2]->f_1)) && vdist(get_entity_coords(Local_51.f_25[iParam2]->f_1, true, false), Global_36) < 50f) && (func_25(&(Local_51.f_2158)) && func_26(&(Local_51.f_2158)) > 20f))
		{
			if (func_745())
			{
				clear_ped_tasks(*iParam0, 1, 0);
				task_combat_hated_targets_in_area(*iParam0, get_entity_coords(*iParam0, true, false), 300f, 0, 0);
				func_4(&Local_51, 1048576);
				iParam0->f_16 = 1;
			}
		}
	}
	if ((!iParam0->f_16 && func_10(1)) && !func_823(*iParam0))
	{
		if (Local_51.f_25[iParam2]->f_613 || (!func_386(Local_51.f_25[iParam2]) && !func_10(2097152)))
		{
			if (!func_25(&(iParam0->f_19)))
			{
				func_100(&(iParam0->f_19));
			}
			if (func_269(&(iParam0->f_19), fVar0))
			{
				clear_ped_tasks(*iParam0, 1, 0);
				if (func_10(262144))
				{
				}
				else
				{
					task_combat_hated_targets_in_area(*iParam0, get_entity_coords(*iParam0, true, false), 300f, 0, 0);
				}
				set_blocking_of_non_temporary_events(*iParam0, false);
				func_42(&(iParam0->f_19));
				iParam0->f_16 = 1;
			}
		}
	}
	if (!iParam0->f_16)
	{
		if (func_15(&Local_51, 2) && func_15(&Local_51, 32))
		{
			if (!func_25(&(iParam0->f_19)))
			{
				func_100(&(iParam0->f_19));
			}
			if (func_269(&(iParam0->f_19), fVar0))
			{
				clear_ped_tasks(*iParam0, 1, 0);
				if (iParam1 == 1 || iParam1 == 2)
				{
					_0x1854217c640b39ec(*iParam0, Local_51.f_25[iParam2]->f_1, 0f, 0f, 0f, 30f, 0, 0);
				}
				task_combat_hated_targets_in_area(*iParam0, get_entity_coords(*iParam0, true, false), 100f, 0, 0);
				func_42(&(iParam0->f_19));
				iParam0->f_16 = 1;
			}
		}
	}
	if (Local_51.f_25[iParam2]->f_612)
	{
		if (func_183(Global_35, *iParam0, 1, 1) > 250f)
		{
			delete_ped(iParam0);
		}
	}
}

int func_505()
{
	if (iLocal_25 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_506(var uParam0)
{
	if (!func_10(1))
	{
		return false;
	}
	if (!func_25(&(Local_51.f_2158)))
	{
		return false;
	}
	if (iLocal_25 == 8)
	{
		if (!func_10(268435456))
		{
			if (func_26(&(Local_51.f_2158)) > 5f && is_entity_in_angled_area(Global_35, 1653.389f, -694.1118f, 50.80352f, 1735.805f, -777.8456f, 38.71126f, 80f, false, true, 0))
			{
				return true;
			}
		}
	}
	else if (iLocal_25 == 0)
	{
		if (is_entity_in_angled_area(uParam0->f_1, -1368.807f, -983.8635f, 63.5913f, -1174.204f, -1167.253f, 87.3559f, 105.75f, false, true, 0))
		{
			return true;
		}
	}
	else if (func_26(&(Local_51.f_2158)) > 30f)
	{
		return true;
	}
	return false;
}

void func_507(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (uParam0->f_595 != 0)
	{
		if (!uParam0->f_674)
		{
			func_827(uParam0, uParam0->f_541[uParam0->f_664], uParam0->f_664, iParam2);
			if (func_53(uParam0->f_541[uParam0->f_664]->f_7, 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_595)
				{
					uParam0->f_664 = 0;
					uParam0->f_674 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
		if (!uParam0->f_673)
		{
			func_828(uParam0, uParam0->f_541[uParam0->f_664], uParam1, iParam3, iParam2);
			if (func_53(&(uParam0->f_541[uParam0->f_664]), 0))
			{
				uParam0->f_664++;
				if (uParam0->f_664 == uParam0->f_595)
				{
					uParam0->f_664 = 0;
					uParam0->f_673 = 1;
					return;
				}
				else
				{
					return;
				}
			}
			else
			{
				return;
			}
		}
	}
}

bool func_508()
{
	if (iLocal_25 == 0)
	{
		return true;
	}
	return false;
}

void func_509(int iParam0)
{
	if (iLocal_25 == 0)
	{
		func_481(&(Local_51.f_2286), iParam0, "CHRB_BACKUP_STR1", 0);
	}
}

void func_510(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	fVar1 = func_829();
	fVar2 = 150f;
	if (func_183(*uParam0, Local_51.f_25[iParam1]->f_1, 1, 1) < fVar2 || func_87(*uParam0, Global_36, 1) < fVar2)
	{
		if (!uParam0->f_12)
		{
			_set_blip_flash_style(uParam0->f_5, -1034486097);
			uParam0->f_12 = 1;
		}
	}
	else if (uParam0->f_12)
	{
		_blip_set_modifier(uParam0->f_5, -1034486097);
		uParam0->f_12 = 0;
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (func_183(*uParam0, Local_51.f_25[iParam1]->f_1, 1, 1) < fVar1 || func_87(*uParam0, Global_36, 1) < fVar1)
			{
				if (func_508())
				{
					if (!_0xfe5c6177064bd390(1))
					{
						if (iParam2 == 0)
						{
							func_97(&(Local_51.f_2286), iLocal_25, 47);
						}
						task_look_at_entity(*uParam0, Global_35, -1, 0, 51, 0);
						uParam0->f_10 = 1;
					}
				}
				else
				{
					task_look_at_entity(*uParam0, Global_35, -1, 0, 51, 0);
					uParam0->f_10 = 2;
				}
			}
			else
			{
				if (!does_group_exist(Local_51.f_2420))
				{
					Local_51.f_2420 = create_group(2);
					set_group_formation(Local_51.f_2420, 3);
				}
				if (iParam2 == 0)
				{
					if (!is_ped_in_group(*uParam0))
					{
						set_ped_config_flag(*uParam0, 279, true);
						set_ped_as_group_leader(*uParam0, Local_51.f_2420, false);
					}
				}
				else if (!is_ped_in_group(*uParam0))
				{
					set_ped_config_flag(*uParam0, 279, true);
					set_ped_as_group_member(*uParam0, Local_51.f_2420);
				}
				if (iParam2 == 0)
				{
					if (is_waypoint_playback_going_on_for_ped(*uParam0, 0))
					{
						func_182(*uParam0, 2f);
					}
					else
					{
						func_742(*uParam0, func_194(iLocal_24), func_830(iParam2), bParam3);
					}
				}
			}
			break;
		case 1:
			if ((func_111(iLocal_25, 47) || !func_53(*uParam0, 0)) || func_831(*uParam0, 0, &(Local_51.f_2069), &uVar0, 0, 0))
			{
				uParam0->f_10 = 2;
			}
			break;
		case 2:
			if ((!_0xfe5c6177064bd390(1) || !func_508()) || func_831(*uParam0, 0, &(Local_51.f_2069), &uVar0, 0, 0))
			{
				if (is_ped_in_group(*uParam0))
				{
					remove_ped_from_group(*uParam0);
				}
				if ((iParam2 - 1) == Local_51.f_25[iParam1]->f_595)
				{
					if (does_group_exist(Local_51.f_2420))
					{
						remove_group(Local_51.f_2420);
					}
				}
				set_blocking_of_non_temporary_events(*uParam0, false);
				if (uParam0->f_11)
				{
					set_ped_config_flag(*uParam0, 167, false);
				}
				open_sequence_task(&iVar3);
				if (uParam0->f_11)
				{
					task_dismount_animal(0, 268435456, 0, 0, 0, 0);
				}
				task_combat_hated_targets_around_ped(0, 200f, 0, 0);
				close_sequence_task(iVar3);
				task_perform_sequence(*uParam0, iVar3);
				clear_sequence_task(&iVar3);
				uParam0->f_10 = 4;
			}
			func_182(*uParam0, 0f);
			break;
	}
}

int func_511(int iParam0, float fParam1, int iParam2)
{
	switch (iLocal_25)
	{
		case 0:
			return func_832(iParam0);
		case 4:
			return func_833(iParam0);
		default:
			break;
	}
	return 0;
}

void func_512(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (bParam3)
		{
			if (func_240((*uParam0)[iVar0]->f_6))
			{
				if (!bParam4 && is_bit_set(uParam0[iVar0], 11))
				{
				}
				else
				{
					func_92(&((*uParam0)[iVar0]->f_6), 1, 1);
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

bool func_513(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	return false;
}

bool func_514()
{
	return Global_1935496->f_10;
}

bool func_515(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (func_834(16))
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
					func_835(16);
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

void func_516()
{
	request_anim_dict(func_836());
}

void func_517(int* iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
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
		if (func_240(iParam0->f_6))
		{
			if (is_bit_set(*iParam0, 1))
			{
				func_837(iParam0->f_6, iParam0->f_5, iParam0->f_14, 0);
			}
			else
			{
				func_838(iParam0->f_6, iParam0->f_5, 0);
			}
			func_251(iParam0->f_6, 0, 1);
		}
		else
		{
			set_bit(iParam0, 14);
		}
		set_bit(iParam0, 0);
	}
	else
	{
		func_839(iParam0, iParam0->f_5);
		if (!is_bit_set(*iParam0, 13))
		{
			set_bit(iParam0, 0);
		}
	}
	set_bit(iParam0, 15);
}

bool func_518(int iParam0)
{
	if ((((iLocal_25 == 8 || iLocal_25 == 9) || iLocal_25 == 10) || iLocal_25 == 11) || iLocal_25 == 12)
	{
		return false;
	}
	return true;
}

void func_519(int* iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_840(iParam0, 13))
	{
		func_841(iParam0, 0);
	}
	else
	{
		func_842(iParam0, 0);
	}
	if (func_240(iParam0->f_6))
	{
		if (bParam2)
		{
			func_92(&(iParam0->f_6), 0, 1);
		}
	}
}

bool func_520(int iParam0)
{
	return true;
}

bool func_521(int iParam0)
{
	if ((((iLocal_25 == 8 || iLocal_25 == 9) || iLocal_25 == 10) || iLocal_25 == 11) || iLocal_25 == 12)
	{
		return false;
	}
	return true;
}

void func_522(var uParam0, int iParam1, bool bParam2)
{
	if (uParam0->f_6 < -1 || (uParam0->f_6 > -1 && uParam0->f_6 > 3))
	{
		return;
	}
	uParam0->f_6 = iParam1;
	if (bParam2)
	{
		func_843(uParam0, 0);
	}
}

int func_523(var uParam0, int* iParam1, float fParam2, var uParam3, float fParam4, int iParam5, int iParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11, float fParam12)
{
	if (!is_entity_dead(*uParam0))
	{
		func_844(&iParam8);
		iVar0 = -1;
		bVar1 = false;
		bVar2 = ((iParam9 == 0 || !_does_volume_exist(iParam9)) || is_entity_in_volume(Global_35, iParam9, false, 0));
		bVar3 = iParam8 & 32 != false;
		bVar4 = iParam8 & 524288 != false;
		bVar5 = iParam8 & 16777216 != false;
		bVar6 = iParam8 & 16777216 != false;
		bVar7 = (is_ambient_speech_playing(*uParam0) || is_scripted_speech_playing(*uParam0));
		fVar8 = func_486(fParam12 >= 0f, fParam12, vdist(Global_36, get_entity_coords(*uParam0, true, false)));
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
			func_100(&(iParam1->f_13));
		}
		if (func_845(*uParam0, iParam1, uParam3))
		{
			return -1;
		}
		switch (iParam1->f_2)
		{
			case 0:
				if (bVar2)
				{
					if (func_846(uParam0, iParam1, uParam3, fParam2, iParam8, sParam7, iParam11, fVar8))
					{
						iParam1->f_1 = -1;
						iParam1->f_2 = 1;
						return func_523(uParam0, iParam1, fParam2, uParam3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, fParam12);
					}
				}
				break;
			case 1:
				if (!bVar2 || !fVar8 <= (fParam2 + 5f))
				{
					func_847(uParam0);
					iParam1->f_2 = 0;
					return -1;
				}
				if (!iParam8 & 33554432 != 0)
				{
					if (iParam8 & 18 != 0)
					{
						if (!get_ped_config_flag(*uParam0, 317, true))
						{
							func_848(*uParam0, 1, 1);
						}
					}
					else if (func_849(iParam1, 22))
					{
						func_848(*uParam0, 0, 1);
					}
				}
				if (func_850(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_851(uParam0, 1, iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_852(iParam8);
					if (func_853(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 0))
					{
						if (iParam1->f_2 != 2 && iParam1->f_2 != 3)
						{
							if (iParam1->f_1 > -1 && iParam1->f_1 < *uParam3)
							{
								if (is_bit_set(uParam3[iParam1->f_1], 20))
								{
									func_854(uParam3);
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
					func_855(iParam1, uParam3, fVar8);
					if (func_856(*uParam0, iParam1, uParam3))
					{
						return iParam1->f_1;
					}
					if (is_bit_set(*iParam1, 1))
					{
						func_512(uParam3, 0, 0, 1, 1);
						clear_bit(iParam1, 1);
					}
				}
				break;
			case 3:
				break;
			case 4:
				if (func_857(uParam0, iParam1, fParam4, bVar6))
				{
					iVar0 = iParam1->f_1;
					iParam1->f_9 = 0;
					iParam1->f_1 = -1;
					return iVar0;
				}
				break;
			case 2:
				if (func_850(uParam0, iParam8, iParam9, is_bit_set(*iParam1, 4)))
				{
					func_858(*uParam0, iParam1, uParam3, fParam2, iParam5, iParam6, iParam10, bVar3);
					func_853(uParam0, iParam1, fVar8, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4, bVar7, bVar5, bVar1, 1);
					func_851(uParam0, func_850(uParam0, iParam8, iParam9, 0), iParam1, fParam2, uParam3, bVar3, fParam4, iParam5, iParam6, sParam7, iParam8, iParam9, iParam10, iParam11, bVar4);
					func_852(iParam8);
				}
				else if (is_bit_set(*iParam1, 1))
				{
					if (!bVar4)
					{
						func_512(uParam3, 0, 0, 1, 1);
					}
					func_859(iParam1, 1);
				}
				func_855(iParam1, uParam3, fVar8);
				if (func_857(uParam0, iParam1, fParam4, bVar6))
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
			func_860(iParam1, uParam3);
			set_bit(iParam1, 3);
		}
	}
	return -1;
}

void func_524(int iParam0)
{
	if (func_116(Global_35))
	{
		set_ped_config_flag(Global_35, 364, true);
		task_play_anim(Global_35, func_836(), "trick_driver_marston", 4f, -4f, 5000, 67108864, 0f, false, 65536, false, 0, false);
	}
	task_look_at_entity(Global_35, Local_51.f_25[iParam0]->f_9, -1, 3120, 51, 0);
	task_play_anim(Local_51.f_25[iParam0]->f_9, func_836(), "trick_driver_ped_a", 4f, -4f, 5000, 0, 0f, false, 0, false, 0, false);
	task_play_anim(Local_51.f_25[iParam0]->f_174, func_836(), "trick_driver_ped_b", 4f, -4f, 5000, 0, 0f, false, 0, false, 0, false);
}

bool func_525(int iParam0)
{
	if ((iParam0 == 6 || iParam0 == 2) || iParam0 == 5)
	{
		return false;
	}
	return true;
}

void func_526(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_861(uParam0->f_25[iVar0], iParam1, iParam2);
		iVar0++;
	}
}

bool func_527(int iParam0)
{
	return false;
}

bool func_528(int iParam0)
{
	if ((iParam0 == 0 || iParam0 == 13) || iParam0 == 4)
	{
		return true;
	}
	return false;
}

bool func_529(int iParam0)
{
	return true;
}

bool func_530(int iParam0)
{
	if (iParam0 == 5)
	{
		return true;
	}
	return false;
}

bool func_531(int iParam0)
{
	if ((((iLocal_25 == 8 || iLocal_25 == 9) || iLocal_25 == 10) || iLocal_25 == 11) || iLocal_25 == 12)
	{
		return false;
	}
	return true;
}

void func_532(int iParam0)
{
	if (func_116(Global_35))
	{
		set_ped_config_flag(Global_35, 364, true);
		task_play_anim(Global_35, func_836(), "trick_driver_alt_marston", 4f, -4f, -1, 67108864, 0f, false, 65536, false, 0, false);
	}
	task_look_at_entity(Global_35, Local_51.f_25[iParam0]->f_9, -1, 3120, 51, 0);
	task_play_anim(Local_51.f_25[iParam0]->f_9, func_836(), "trick_driver_alt_ped_a", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	task_play_anim(Local_51.f_25[iParam0]->f_174, func_836(), "trick_driver_alt_ped_b", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
	task_play_anim(&(Local_51.f_25[iParam0]->f_410[1]), func_836(), "trick_driver_alt_ped_c", 4f, -4f, -1, 67108864, 0f, false, 65536, false, 0, false);
}

void func_533(int iParam0)
{
	iLocal_36 = iParam0;
}

bool func_534(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 4)
	{
		return true;
	}
	return false;
}

bool func_535(int iParam0)
{
	if (iParam0 == 5)
	{
		return true;
	}
	return false;
}

void func_536(var uParam0, var uParam1)
{
	if (!func_205(uParam0->f_9, 0, 1))
	{
		return;
	}
	set_ped_config_flag(uParam0->f_9, 205, true);
	_0xaac0ee3b4999abb5(uParam0->f_9, uParam1);
	task_look_at_entity(uParam0->f_9, uParam1, -1, 0, 51, 0);
	uParam0->f_626 = 1;
	func_100(&(uParam0->f_9.f_9));
}

bool func_537(int iParam0)
{
	return is_entity_in_angled_area(iParam0, 1411.719f, 266.1364f, 88.14217f, 1408.178f, 279.8591f, 92.53093f, 8.5f, false, true, 0);
}

bool func_538(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_862(iParam0, &Var0);
}

float func_539()
{
	fVar1 = 0f;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Local_51.f_2214[iVar0]->f_2)
		{
			fVar1 = (fVar1 + 1f);
			if (does_entity_exist(&(Local_51.f_2214[iVar0])))
			{
				fVar2 = (fVar2 + get_object_fragment_damage_health(&(Local_51.f_2214[iVar0]), true));
			}
		}
		iVar0++;
	}
	fVar3 = (fVar2 - fVar1);
	fVar4 = (fVar3 / fVar1);
	fVar5 = (100f + (fVar4 * 100f));
	return fVar5;
}

void func_540()
{
	iVar0 = get_random_int_in_range(1, 4);
	iVar1 = get_random_int_in_range(0, 6);
	switch (iVar1)
	{
		case 0:
			iVar2 = 14;
			break;
		case 1:
			iVar2 = 15;
			break;
		case 2:
			iVar2 = 17;
			break;
		case 3:
			iVar2 = 18;
			break;
		case 4:
			iVar2 = 21;
			break;
		case 5:
			iVar2 = 22;
			break;
	}
	_0xaaacf33cbf9b990a(&(Local_51.f_2214[iVar0]), iVar2);
}

int func_541(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (func_53(iVar1, 1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

bool func_542(int iParam0)
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

void func_543(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, float fParam5)
{
	_task_start_scenario_in_place(iParam0, iParam1, iParam2, bParam3, iParam4, fParam5, false);
}

void func_544(int iParam0, int iParam1, bool bParam2)
{
	if (!func_53(iParam0, 1))
	{
		return;
	}
	if (func_863(iParam1) || bParam2)
	{
		set_ped_combat_attributes(iParam0, 1, false);
	}
	if (((get_script_task_status(iParam0, 1120685857, true) != 1 && get_script_task_status(iParam0, 1120685857, true) != 0) && get_script_task_status(iParam0, 780511057, true) != 1) && get_script_task_status(iParam0, 780511057, true) != 0)
	{
		if (!is_entity_dead(iParam1))
		{
			_0x1854217c640b39ec(iParam0, iParam1, 0f, 0f, 0f, 30f, 0, 0);
		}
		else
		{
			set_ped_sphere_defensive_area(iParam0, get_entity_coords(iParam0, true, false), 30f, 0, 0, 0);
		}
		set_blocking_of_non_temporary_events(iParam0, false);
		if (!bParam2)
		{
			task_combat_hated_targets_in_area(iParam0, get_entity_coords(iParam1, true, false), 300f, 0, 0);
		}
		else
		{
			task_combat_ped(iParam0, Global_35, 0, 0);
		}
	}
}

void func_545(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	if (func_15(&Local_51, 16))
	{
		return;
	}
	if (!func_10(1))
	{
		return;
	}
	if (func_10(268435456))
	{
		func_864(uParam0);
		return;
	}
	switch (Param1.f_3)
	{
		case 8:
			func_865(uParam0);
			break;
		case 9:
			func_866(uParam0);
			break;
		case 11:
			func_867(uParam0);
			break;
		case 12:
			break;
		default:
			func_864(uParam0);
			break;
	}
}

bool func_546(var uParam0, bool bParam1)
{
	switch (Local_51.f_2400)
	{
		case 0:
			fVar0 = 0.01f;
			break;
		case 1:
			fVar0 = 0.015f;
			break;
		case 2:
			fVar0 = 0.025f;
			break;
		case 3:
			fVar0 = 0.025f;
			break;
		default:
			fVar0 = 0.01f;
			break;
	}
	sVar1 = "VEH_WAGON@STANDARD@FRONT@FL@IN_SEAT@MALE@BASE@SITTING@FAST";
	sVar2 = "brake_enter";
	sVar3 = "brake_loop";
	sVar4 = "brake_exit";
	fVar5 = 0f;
	if (func_53(uParam0->f_174, 0))
	{
		if (get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_677) == uParam0->f_174 && get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676) == Global_35)
		{
			if (!func_108(uParam0->f_174, 355471868))
			{
				task_shuffle_to_next_vehicle_seat(uParam0->f_174, uParam0->f_1);
			}
		}
	}
	if (iLocal_42 > 0)
	{
		if (!func_868(Global_35, uParam0->f_1, uParam0->f_676))
		{
			if ((is_entity_playing_anim(Global_35, sVar1, sVar3, 1) || is_entity_playing_anim(Global_35, sVar1, sVar2, 1)) || is_entity_playing_anim(Global_35, sVar1, sVar4, 1))
			{
				stop_anim_playback(Global_35, 0, false);
			}
			if (func_25(&(Local_51.f_2140)))
			{
				func_42(&(Local_51.f_2140));
			}
			func_92(&(Local_51.f_2275), 1, 1);
			return false;
		}
	}
	switch (iLocal_42)
	{
		case 0:
			if (!func_25(&(Local_51.f_2170)))
			{
				if (func_10(2))
				{
					uParam0->f_619 = func_195(iLocal_24);
				}
				request_anim_dict(sVar1);
				func_869(1);
				if (get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676) != Global_35 && get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_677) != Global_35)
				{
					func_90("CR_HELP_TRAN", 10000, 0, 0, 0, 1);
					if (func_24(iLocal_25))
					{
						func_102(iLocal_25, "CR_O_TRAN", 0);
					}
				}
				func_100(&(Local_51.f_2170));
			}
			if (get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676) == Global_35)
			{
				if (is_ped_sitting_in_vehicle(Global_35, uParam0->f_1) && _0x9420fb11b8d77948(Global_35) == -1)
				{
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
					set_current_ped_weapon(Global_35, -1569615261, false, 1, false, false);
					_0xcffc3eccd7a5cceb(player_id(), -1569615261, 0);
					_0xcffc3eccd7a5cceb(player_id(), -1569615261, 1);
					_give_weapon_to_ped_2(Global_35, -1569615261, 1, true, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
					iLocal_42 = 1;
				}
			}
			break;
		case 1:
			if (!func_108(Global_35, 716706914))
			{
				func_100(&(Local_51.f_2170));
				func_90("CR_HELP_RUNAWAY", 10000, 0, 0, 0, 1);
				if (func_24(iLocal_25))
				{
					func_102(iLocal_25, "CR_O_RUNAWAY", 0);
				}
				iLocal_42 = 2;
			}
			break;
		case 2:
			set_ped_reset_flag(Global_35, 246, true);
			disable_control_action(0, -375575803, false);
			disable_control_action(0, -1478513014, false);
			if (!func_240(Local_51.f_2275))
			{
				if (!func_25(&(Local_51.f_2200)) || func_26(&(Local_51.f_2200)) > 1f)
				{
					Local_51.f_2275 = func_870("CR_C_BRAKE", -699865971, 304000);
					func_871(Local_51.f_2275, -699865971);
					Local_51.f_2401 = 0;
					if (func_25(&(Local_51.f_2200)))
					{
						func_42(&(Local_51.f_2200));
					}
					func_100(&(Local_51.f_2176));
				}
			}
			else
			{
				fVar5 = func_257(Local_51.f_2275, 1);
				if (fVar5 >= 1f)
				{
					if (!Local_51.f_2401)
					{
						Local_51.f_2401 = 1;
					}
					if (!func_25(&(Local_51.f_2200)))
					{
						open_sequence_task(&iVar8);
						task_play_anim(0, sVar1, sVar2, 4f, -4f, -1, 8196, 0f, false, 0, false, 0, false);
						task_play_anim(0, sVar1, sVar3, 4f, -4f, -1, 8197, 0f, false, 0, false, 0, false);
						close_sequence_task(iVar8);
						task_perform_sequence(Global_35, iVar8);
						clear_sequence_task(&iVar8);
						Local_51.f_2400++;
						func_100(&(Local_51.f_2200));
					}
					else if (func_26(&(Local_51.f_2200)) > 2f)
					{
						func_100(&(Local_51.f_2200));
						func_92(&(Local_51.f_2275), 1, 1);
						func_872(uParam0, Local_51.f_2400);
					}
				}
				if (Local_51.f_2401)
				{
					if (!is_control_pressed(0, -699865971) && !is_disabled_control_pressed(0, -699865971))
					{
						func_100(&(Local_51.f_2200));
						func_92(&(Local_51.f_2275), 1, 1);
						func_872(uParam0, Local_51.f_2400);
					}
				}
			}
			if ((get_entity_speed(uParam0->f_1) < 2.5f && func_26(&(Local_51.f_2170)) > 2f) || bParam1)
			{
				uParam0->f_619 = 0f;
				if (is_ped_in_vehicle(Global_35, uParam0->f_1, false))
				{
					_0xe12f5ed49f44d40d(uParam0->f_1);
				}
				if (is_entity_playing_anim(Global_35, sVar1, sVar3, 1) || func_15(&Local_51, 268435456))
				{
					task_play_anim(Global_35, sVar1, sVar4, 4f, -4f, -1, 8196, 0f, false, 0, false, 0, false);
					func_113(&Local_51, 268435456);
				}
				if (is_entity_playing_anim(Global_35, sVar1, sVar3, 1) || is_entity_playing_anim(Global_35, sVar1, sVar2, 1))
				{
					stop_anim_playback(Global_35, 0, false);
				}
				if (func_25(&(Local_51.f_2140)))
				{
					func_42(&(Local_51.f_2140));
				}
				func_92(&(Local_51.f_2275), 1, 1);
				if (does_cam_exist(Local_51.f_2399))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					destroy_cam(Local_51.f_2399, false);
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				iLocal_42 = 3;
				return true;
			}
			if (fVar5 > 0.5f)
			{
				iVar6 = floor(((fVar5 - 0.5f) * 300f));
				func_660(iVar6, 0, 255);
				set_pad_shake(0, 1, iVar6);
			}
			fVar7 = fVar5;
			func_873(fVar7, 0.7f, 1f);
			func_874(uParam0->f_1, fVar7);
			if (func_240(Local_51.f_2275) && func_875(Local_51.f_2275, 1))
			{
				if (has_anim_dict_loaded(sVar1))
				{
					if (!is_entity_playing_anim(Global_35, sVar1, sVar4, 1))
					{
						if (!func_15(&Local_51, 268435456))
						{
							open_sequence_task(&iVar8);
							task_play_anim(0, sVar1, sVar2, 4f, -4f, -1, 8196, 0f, false, 0, false, 0, false);
							task_play_anim(0, sVar1, sVar3, 4f, -4f, -1, 8197, 0f, false, 0, false, 0, false);
							close_sequence_task(iVar8);
							task_perform_sequence(Global_35, iVar8);
							clear_sequence_task(&iVar8);
							func_4(&Local_51, 268435456);
						}
					}
				}
				if (func_24(iLocal_25))
				{
					if (get_entity_speed(uParam0->f_1) > 2.5f)
					{
						if (!func_247(0))
						{
							if (!func_25(&(Local_51.f_2140)) || func_26(&(Local_51.f_2140)) > 6f)
							{
								if (func_97(&(Local_51.f_2286), iLocal_25, 70))
								{
									func_100(&(Local_51.f_2140));
								}
							}
						}
					}
				}
				Local_51.f_2384++;
				if (Local_51.f_2384 > 150)
				{
					uParam0->f_619 = (uParam0->f_619 - fVar0);
				}
			}
			else
			{
				if (does_cam_exist(Local_51.f_2399))
				{
					render_script_cams(false, false, 3000, true, false, 0);
					destroy_cam(Local_51.f_2399, false);
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (func_15(&Local_51, 268435456))
				{
					if (is_entity_playing_anim(Global_35, sVar1, sVar3, 1))
					{
						task_play_anim(Global_35, sVar1, sVar4, 4f, -4f, -1, 8196, 0f, false, 0, false, 0, false);
						if (func_240(Local_51.f_2275))
						{
							func_100(&(Local_51.f_2200));
							func_92(&(Local_51.f_2275), 1, 1);
						}
						func_113(&Local_51, 268435456);
					}
				}
				if (is_entity_playing_anim(Global_35, sVar1, sVar3, 1) || is_entity_playing_anim(Global_35, sVar1, sVar2, 1))
				{
					stop_anim_playback(Global_35, 0, false);
				}
				if (!func_10(1048576))
				{
					if (func_26(&(Local_51.f_2170)) > 20f && Local_51.f_2384 == 0)
					{
						func_90("CR_HELP_RUNAWAY", 10000, 0, 0, 0, 1);
						func_72(1048576);
					}
				}
			}
			break;
	}
	return false;
}

bool func_547(var uParam0)
{
	vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_25[0]->f_1, 0f, 15f, 0f) };
	if (_0xf5ea41c1408695fb((vVar0.x - 15f), (vVar0.y - 15f), (vVar0.x + 15f), (vVar0.y + 15f)))
	{
		return true;
	}
	return false;
}

bool func_548(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(uParam0->f_1, iVar0);
		if (func_53(iVar1, 1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_549(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (func_53(iVar1, 1))
		{
			clear_ped_tasks(iVar1, 1, 0);
			clear_ped_secondary_task(iVar1);
		}
		iVar0++;
	}
}

void func_550(var uParam0, struct<4> Param1, var uParam5, var uParam6)
{
	fVar0 = 12f;
	if (iLocal_41 >= 3)
	{
		func_876(uParam0->f_1);
	}
	if (!func_25(&(uParam0->f_620)))
	{
		request_model(1077976463, false);
		uParam0->f_619 = fVar0;
		func_100(&(uParam0->f_620));
		_0x8f75941c86eebfca(uParam0->f_1, false);
		_0xc84e138448507567(uParam0->f_1, false);
		func_340(uParam0->f_1, 1);
		func_877(uParam0->f_1, 1);
		_0xcbf88256e44d5d39(uParam0->f_1, 1);
		if (func_116(Global_35))
		{
			_restore_ped_stamina(get_mount(Global_35), 100f);
		}
	}
	if (is_ped_in_vehicle(Global_35, uParam0->f_1, true))
	{
		func_878(uParam0);
		if (func_10(2097152))
		{
			if (func_546(uParam0, 0))
			{
				if (is_waypoint_playback_going_on_for_vehicle(uParam0->f_1, 0))
				{
					vehicle_waypoint_playback_pause(uParam0->f_1);
				}
				bring_vehicle_to_halt(uParam0->f_1, 3f, 3, false);
				func_21(2097152);
				return;
			}
		}
	}
	else
	{
		if (iLocal_42 > 0)
		{
			func_92(&(Local_51.f_2275), 1, 1);
			if (_0x0b7cb1300cbfe19c(Global_35, 1))
			{
				stop_anim_playback(Global_35, 0, false);
			}
			if (func_15(&Local_51, 268435456))
			{
				func_113(&Local_51, 268435456);
			}
			if (does_cam_exist(Local_51.f_2399))
			{
				render_script_cams(false, false, 3000, true, false, 0);
				destroy_cam(Local_51.f_2399, false);
				set_gameplay_cam_relative_heading(0f, 1f);
				set_gameplay_cam_relative_pitch(0f, 1f);
			}
			iLocal_42 = 0;
		}
		if (get_entity_speed(uParam0->f_1) < 1f && func_26(&(uParam0->f_620)) > 5f)
		{
			func_878(uParam0);
			func_21(2097152);
			return;
		}
		func_874(uParam0->f_1, 1f);
		if (func_10(2) && iLocal_42 == 0)
		{
			func_879(uParam0);
			if (!func_15(&Local_51, 4194304))
			{
				if (!func_25(&(Local_51.f_2179)))
				{
					func_100(&(Local_51.f_2179));
				}
				else if (func_26(&(Local_51.f_2179)) > 5f)
				{
					func_90("CACR3_HELP_JUMP", 10000, 0, 0, 0, 1);
					if (func_24(iLocal_25))
					{
						func_102(Param1.f_3, "CR_O_CATCHCOACH", 0);
					}
					func_4(&Local_51, 4194304);
					func_42(&(Local_51.f_2179));
				}
			}
		}
	}
	cVar1 = func_880(uParam0);
	if (uParam0->f_619 < 0f)
	{
		uParam0->f_619 = 0f;
	}
	fVar2 = (uParam0->f_619 - func_556(uParam0));
	if (!is_ped_in_vehicle(Global_35, uParam0->f_1, false))
	{
		fVar3 = 150f;
		if (func_555(uParam0->f_1, Global_35, cVar1, fVar3))
		{
			fVar5 = fVar2;
			fVar6 = (fVar2 * 0.6f);
			fVar4 = (fVar3 - vdist(Global_36, get_entity_coords(uParam0->f_1, true, false)));
			if (fVar4 < 0f)
			{
				fVar4 = 0f;
			}
			fVar4 = (fVar4 / fVar3);
			fVar2 = func_552(fVar6, fVar5, fVar4);
		}
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	if (iLocal_25 == 10)
	{
		vVar7 = { -219.28f, 293.79f, 95.22f };
		if (vdist(vVar7, get_entity_coords(uParam0->f_1, true, false)) < 25f)
		{
			func_874(uParam0->f_1, 1f);
			if (fVar2 < 9f)
			{
				if (!uParam0->f_626)
				{
					bring_vehicle_to_halt(uParam0->f_1, 15f, -1, false);
					uParam0->f_626 = 1;
				}
				if (get_entity_speed(uParam0->f_1) < 1f)
				{
					func_21(2097152);
				}
				return;
			}
		}
	}
	if (!is_waypoint_playback_going_on_for_vehicle(uParam0->f_1, cVar1))
	{
		_task_vehicle_follow_waypoint_recording_2(uParam0->f_1, cVar1, 0, 0, 8, -1, -1082130432, 0, 1073741824, 0);
	}
	else
	{
		vehicle_waypoint_playback_override_speed(uParam0->f_1, fVar2);
	}
}

bool func_551(var uParam0)
{
	if (func_25(&(uParam0->f_643)) && func_26(&(uParam0->f_643)) < 4f)
	{
		return true;
	}
	return false;
}

float func_552(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_553(var uParam0)
{
	if (!func_25(&(uParam0->f_649)))
	{
		func_100(&(uParam0->f_649));
	}
	if (func_26(&(uParam0->f_649)) > 3f)
	{
		return true;
	}
	else
	{
		fVar1 = (func_26(&(uParam0->f_649)) / 3f);
		if (uParam0->f_597 < func_195(iLocal_24))
		{
			fVar0 = func_552(func_333(uParam0, iLocal_24), func_195(iLocal_24), fVar1);
		}
		iVar2 = get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676);
		if (func_53(iVar2, 0))
		{
			set_drive_task_cruise_speed(iVar2, fVar0);
			vehicle_waypoint_playback_override_speed(uParam0->f_1, fVar0);
		}
		uParam0->f_597 = fVar0;
		return false;
	}
	return true;
}

bool func_554()
{
	if (iLocal_25 == 9)
	{
		return false;
	}
	return true;
}

bool func_555(int iParam0, int iParam1, char* sParam2, float fParam3)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam1))
	{
		return false;
	}
	if (!get_is_waypoint_recording_loaded(sParam2))
	{
		return false;
	}
	vVar0 = { get_entity_coords(iParam1, true, false) };
	if (func_881(iParam0, vVar0, sParam2, fParam3))
	{
		return true;
	}
	return false;
}

float func_556(var uParam0)
{
	if (iLocal_25 != 10)
	{
		return 0f;
	}
	if (func_234(Global_35, uParam0->f_1, 0))
	{
		return 0f;
	}
	fVar0 = get_entity_speed(uParam0->f_1);
	fVar1 = 0f;
	if (fVar0 > func_195(iLocal_24))
	{
		fVar2 = (fVar0 - func_195(iLocal_24));
		fVar3 = func_873(fVar2, 0f, 1f);
		fVar1 = func_552(0f, 2f, fVar3);
	}
	return fVar1;
}

void func_557(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_882(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_558(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_883())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_882(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_884(iVar0);
			func_885(iVar0, 0, 0);
		}
		func_882(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_416(func_651(1644987397), iVar1);
	}
}

void func_559(int iParam0, vector3 vParam1, bool bParam4)
{
	if (bParam4 && !func_240(iParam0))
	{
		return;
	}
	iVar0 = func_241(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_context_set_point((*Global_1945938)[iVar0]->f_3, vParam1);
	(*Global_1945938)[iVar0]->f_12 = { vParam1 };
}

bool func_560(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		return true;
	}
	return false;
}

bool func_561(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	if (_is_weapon_melee(iParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (has_ped_got_weapon(Global_35, iParam0, 0, false))
	{
		Var0 = { func_886(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_887((386 + iVar28), 1);
			if (func_888(iParam0, &Var0, iVar5, 0))
			{
				if (func_889(iParam0, &Var6, iVar5))
				{
					Var29 = { func_890(iParam0, Var0, iVar5, 0) };
					func_891(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_645(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_892(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_893(iParam0, iParam1);
					return true;
				}
				if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
				{
					return false;
				}
				if (iParam1 > 0)
				{
				}
				_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return true;
			}
		}
	}
}

void func_562(int iParam0, int iParam1, float fParam2)
{
	bVar0 = true;
	iVar1 = get_entity_model(iParam0);
	if (((((((*iParam1 == 383145463 || *iParam1 == -169598849) || *iParam1 == 600245965) || *iParam1 == 38266755) || *iParam1 == -510274983) || *iParam1 == 1252941818) || *iParam1 == 575725904) || *iParam1 == 1311933014)
	{
		*fParam2 = 0f;
		return;
	}
	switch (iVar1)
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
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -969819655:
		case -628956517:
		case -355385988:
		case 300505615:
		case 466209020:
			*fParam2 = get_random_float_in_range(0.125f, 0.375f);
			break;
		case 363815774:
			*fParam2 = get_random_float_in_range(0.7f, 0.875f);
			break;
		case -1910990966:
		case -1421951598:
		case 1921874948:
			*fParam2 = get_random_float_in_range(0.4f, 0.6f);
			break;
		case -1090280091:
		case -1076294934:
			*fParam2 = get_random_float_in_range(0.125f, 0.25f);
			break;
		case -1011228908:
		case -1008616424:
		case 424175505:
			*fParam2 = get_random_float_in_range(0.3f, 0.5f);
			break;
		case -1208814201:
		case -390289284:
		case 1112571710:
		case 1478983280:
			*fParam2 = get_random_float_in_range(0.125f, 0.125f);
			break;
		default:
			*fParam2 = get_random_float_in_range(0.3f, 0.4f);
			if (get_ped_relationship_group_hash(iParam0) == 1030835986)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		set_ped_config_flag(iParam0, 361, true);
	}
}

bool func_563(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

void func_564(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (func_53(iVar1, 1))
		{
			_0xb36d3ec70963be60(iParam0, iVar1);
		}
		iVar0++;
	}
}

bool func_565(int iParam0)
{
	if (get_entity_height_above_ground(iParam0) < 0.37f)
	{
		return true;
	}
	return false;
}

void func_566(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (!is_entity_dead(iVar1))
		{
			_0x2eb75fb86c41f026(iVar1, 3, !bParam1);
		}
		iVar0++;
	}
}

float func_567(int iParam0)
{
	if (Local_51.f_2412)
	{
		if (_0xe979bb5602ad3402(iParam0, 0))
		{
			return 0.5f;
		}
		else
		{
			return 0.73f;
		}
	}
	if (_0xe979bb5602ad3402(iParam0, 2))
	{
		return 0.5f;
	}
	return 0.797f;
}

float func_568(int iParam0)
{
	if (Local_51.f_2412)
	{
		if (_0xe979bb5602ad3402(iParam0, 0))
		{
			return 0.952f;
		}
		else
		{
			return 0.952f;
		}
	}
	if (_0xe979bb5602ad3402(iParam0, 2))
	{
		return 0.939f;
	}
	return 0.943f;
}

bool func_569()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_570(int iParam0)
{
	func_340(iParam0, 0);
	func_566(iParam0, 0);
	if (does_cam_exist(iLocal_20))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(iLocal_20, false);
	}
	if (does_cam_exist(iLocal_21))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(iLocal_21, false);
	}
	if (does_entity_exist(Local_51.f_2402))
	{
		set_object_as_no_longer_needed(&(Local_51.f_2402));
		set_model_as_no_longer_needed(-1499182641);
	}
	if (_does_anim_scene_exist(Local_51.f_2404))
	{
		_delete_anim_scene(Local_51.f_2404);
	}
	if (_does_anim_scene_exist(Local_51.f_2406))
	{
		_delete_anim_scene(Local_51.f_2406);
	}
	if (_does_anim_scene_exist(Local_51.f_2407))
	{
		_delete_anim_scene(Local_51.f_2407);
	}
}

bool func_571(char* sParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5)
{
	sParam0 = func_409(iParam5, sParam0, sParam1, sParam2, sParam3, sParam4);
	return are_strings_equal(sParam0, func_894());
}

bool func_572()
{
	return _uilog_has_displayed_cached_objective();
}

bool func_573(var uParam0)
{
	return _0x8de41e9902e85756(uParam0);
}

int func_574(var uParam0)
{
	if (func_895(uParam0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_575(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		if (func_370(uParam0->f_25[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_576(int iParam0)
{
	if (iParam0 == 10)
	{
		return true;
	}
	else if (iParam0 == 11 && is_entity_in_angled_area(Global_35, 2367.368f, -393.5994f, 37.61279f, 2664.314f, -434.4291f, 56.50912f, 163.25f, false, true, 0))
	{
		return true;
	}
	else if (iParam0 == 7)
	{
		return true;
	}
	else if (iParam0 == 8)
	{
		return true;
	}
	else if (iParam0 == 9)
	{
		return true;
	}
	else if (iParam0 == 0)
	{
		return true;
	}
	return false;
}

Vector3 func_577(int iParam0)
{
	if (iParam0 == 10)
	{
		return 1482.155f, -753.2833f, 49.4205f;
	}
	else if (iParam0 == 11)
	{
		return 2575.132f, -148.3842f, 40.5289f;
	}
	else if (iParam0 == 7)
	{
		return 1087.205f, -413.26f, 90.3717f;
	}
	else if (iParam0 == 8)
	{
		return 553.9537f, -75.2647f, 124.0514f;
	}
	else if (iParam0 == 9)
	{
		return 1490.56f, -2225.264f, 42.9585f;
	}
	else if (iParam0 == 0)
	{
		vVar0 = { get_entity_coords(Global_35, true, false) };
		if (vVar0.z < 80f)
		{
			return -1263.693f, -1159.767f, 69.5723f;
		}
		return -966.0467f, -1229.369f, 52.0366f;
	}
	return 0f, 0f, 0f;
}

int func_578(int iParam0)
{
	if (iParam0 == 5)
	{
		return 200;
	}
	return 140;
}

Vector3 func_579(char* sParam0, vector3 vParam1, int iParam4)
{
	vVar1 = { 0f, 0f, 0f };
	waypoint_recording_get_closest_waypoint(sParam0, vParam1, &iVar0);
	if (iParam4 != -1)
	{
		if (iVar0 < iParam4)
		{
			iVar0 = iParam4;
		}
	}
	waypoint_recording_get_coord(sParam0, iVar0, &vVar1);
	if (func_120(vVar1))
	{
		return vParam1;
	}
	if (get_ground_z_for_3d_coord(vVar1, &uVar4, false))
	{
		vVar1.f_2 = uVar4;
	}
	return vVar1;
}

float func_580(char* sParam0, vector3 vParam1)
{
	waypoint_recording_get_closest_waypoint(sParam0, vParam1, &iVar0);
	waypoint_recording_get_coord(sParam0, iVar0, &vVar1);
	waypoint_recording_get_coord(sParam0, iVar0 + 2, &vVar4);
	return func_896(vVar1, vVar4, 1);
}

void func_581(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 8;
	if (bParam4)
	{
		iVar0 |= 72;
	}
	if (bParam5)
	{
		iVar0 |= 131072;
	}
	if (bParam6)
	{
		iVar0 |= 24;
	}
	if (bParam7)
	{
		iVar0 |= 40;
	}
	if (bParam8)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_582(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_53(*uParam1, 0))
	{
		*uParam1 = func_897(uParam1->f_1, get_entity_coords(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			func_898(*uParam1, uParam1->f_2);
		}
	}
	if (!func_53(*uParam1, 0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(*uParam1, true);
	set_ped_can_be_targetted(*uParam1, true);
	set_entity_can_be_targeted_without_los(*uParam1, true);
	iVar0 = 2;
	if (func_899(iParam3))
	{
		iVar0 |= 1;
	}
	remove_all_ped_weapons(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_7, -1, iVar0, 0, 0.9f, 1065353216, 0);
	set_ped_relationship_group_hash(*uParam1, iParam2);
	if (!is_string_null_or_empty(uParam1->f_6))
	{
		set_ambient_voice_name(*uParam1, uParam1->f_6);
	}
	func_901(*uParam1);
	set_ped_into_vehicle(uParam0->f_9, uParam0->f_1, uParam0->f_676);
	if (func_314(129))
	{
		set_ped_config_flag(*uParam1, 6, true);
	}
	set_ped_drops_weapons_when_dead(*uParam1, false);
	_0x18ff3110cf47115d(*uParam1, 1, 0);
	set_entity_lod_dist(*uParam1, 300);
	set_ped_config_flag(*uParam1, 22, true);
	set_ped_combat_ability(*uParam1, 2);
	set_ped_accuracy(*uParam1, 80);
	_0x986f7a51ee3e1f92(*uParam1, 0);
	func_902(*uParam1, 0);
	add_entity_to_audio_mix_group(*uParam1, "Robberies_Coach_Target_Group", 0f);
	uParam0->f_665 = 1;
}

void func_583(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!uParam1->f_74)
	{
		return;
	}
	if (!func_53(*uParam1, 0))
	{
		*uParam1 = func_897(uParam1->f_1, get_entity_coords(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			func_898(*uParam1, uParam1->f_2);
		}
	}
	if (!func_53(*uParam1, 0))
	{
		return;
	}
	set_ped_can_be_targetted(*uParam1, true);
	set_entity_can_be_targeted_without_los(*uParam1, true);
	set_blocking_of_non_temporary_events(*uParam1, true);
	iVar0 = 2;
	if (func_903(iParam3))
	{
		iVar0 |= 1;
	}
	remove_all_ped_weapons(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_7, -1, iVar0, 0, 0.9f, 1065353216, 0);
	set_ped_relationship_group_hash(*uParam1, iParam2);
	if (!is_string_null_or_empty(uParam1->f_6))
	{
		set_ambient_voice_name(*uParam1, uParam1->f_6);
	}
	func_904(*uParam1);
	if (func_314(129))
	{
		set_ped_config_flag(*uParam1, 6, true);
	}
	set_ped_into_vehicle(uParam0->f_174, uParam0->f_1, uParam0->f_677);
	_0x986f7a51ee3e1f92(uParam0->f_174, 0);
	set_ped_drops_weapons_when_dead(uParam0->f_174, false);
	_0x18ff3110cf47115d(uParam0->f_174, 1, 0);
	set_entity_lod_dist(uParam0->f_174, 300);
	set_ped_config_flag(uParam0->f_174, 22, true);
	set_ped_combat_ability(uParam0->f_174, 2);
	set_ped_accuracy(uParam0->f_174, 80);
	if (iParam3 == 2)
	{
		func_905(uParam0->f_174, 1);
		func_906(uParam0->f_174, -1504859554, get_random_int_in_range(1, 4), 1);
	}
	func_902(*uParam1, 0);
	add_entity_to_audio_mix_group(*uParam1, "Robberies_Coach_Target_Group", 0f);
	uParam0->f_666 = 1;
}

void func_584(var uParam0, var uParam1)
{
	if (!func_53(*uParam1, 0))
	{
		*uParam1 = func_897(uParam1->f_1, get_entity_coords(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			func_898(*uParam1, uParam1->f_2);
		}
	}
	set_blocking_of_non_temporary_events(*uParam1, true);
	set_ped_relationship_group_hash(*uParam1, 707888648);
	set_ped_can_be_targetted(*uParam1, true);
	remove_all_ped_weapons(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_7, -1, 3, 0, 0.9f, 1065353216, 0);
	set_ped_into_vehicle(*uParam1, uParam0->f_1, uParam1->f_8);
	if (!is_string_null_or_empty(uParam1->f_6))
	{
		set_ambient_voice_name(*uParam1, uParam1->f_6);
	}
	_0x18ff3110cf47115d(*uParam1, 1, 0);
	set_entity_lod_dist(*uParam1, 300);
	set_ped_combat_ability(*uParam1, 2);
	set_ped_accuracy(*uParam1, 80);
	_0x986f7a51ee3e1f92(*uParam1, 0);
	func_902(*uParam1, 0);
	add_entity_to_audio_mix_group(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

void func_585(var uParam0, var uParam1, int iParam2)
{
	if (!func_53(*uParam1, 0))
	{
		*uParam1 = func_897(uParam1->f_1, get_entity_coords(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			func_898(*uParam1, uParam1->f_2);
		}
	}
	if (!func_53(*uParam1, 0))
	{
	}
	set_blocking_of_non_temporary_events(*uParam1, true);
	set_ped_relationship_group_hash(*uParam1, iParam2);
	set_ped_config_flag(*uParam1, 278, false);
	set_ped_config_flag(*uParam1, 103, true);
	iVar0 = func_743(-820275761, 0, -1);
	iVar1 = get_random_int_in_range(0, 3);
	if (iVar1 == 0)
	{
		iVar2 = 1301922967;
	}
	else if (iVar1 == 1)
	{
		iVar2 = -963759116;
	}
	else
	{
		iVar2 = 1216207974;
	}
	func_905(*uParam1, 1);
	func_907(*uParam1, iVar0);
	func_908(*uParam1, iVar2, 1, 0);
	if (!is_string_null_or_empty(uParam1->f_6))
	{
		set_ambient_voice_name(*uParam1, uParam1->f_6);
	}
	set_ped_into_vehicle(*uParam1, uParam0->f_1, uParam1->f_8);
	set_entity_lod_dist(*uParam1, 300);
	_0x986f7a51ee3e1f92(*uParam1, 0);
	add_entity_to_audio_mix_group(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

void func_586(var uParam0, var uParam1, int iParam2)
{
	bVar0 = false;
	if (uParam1->f_9 != 0)
	{
		bVar0 = true;
	}
	if (is_entity_dead(uParam0->f_1))
	{
		return;
	}
	if (!func_909())
	{
		vVar1 = { get_offset_from_entity_in_world_coords(uParam0->f_1, uParam1->f_11) };
	}
	else
	{
		vVar1 = { func_910(iParam2) };
	}
	if (get_ground_z_for_3d_coord(vVar1, &uVar4, false))
	{
		vVar1.f_2 = uVar4;
	}
	fVar5 = get_entity_heading(uParam0->f_1);
	if (!func_53(uParam1->f_7, 0))
	{
		uParam1->f_7 = func_897(uParam1->f_8, vVar1, fVar5, 1, 1, 0, 1, 1, !bVar0, 0, 0, 0, 0);
		if (bVar0)
		{
			func_898(uParam1->f_7, uParam1->f_9);
		}
	}
	if (!func_53(uParam1->f_7, 0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(uParam1->f_7, false);
	set_ped_can_be_targetted(uParam1->f_7, false);
	_set_entity_health(uParam1->f_7, 400, 0);
	task_stand_still(uParam1->f_7, 3000);
	set_ped_config_flag(uParam1->f_7, 145, true);
	if (func_314(129))
	{
		set_ped_config_flag(uParam1->f_7, 6, true);
	}
	set_entity_lod_dist(uParam1->f_7, 300);
	set_ped_config_flag(uParam1->f_7, 72, true);
	func_902(uParam1->f_7, 0);
}

void func_587(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)
{
	if (is_entity_dead(uParam0->f_1))
	{
		return;
	}
	vVar0 = { get_offset_from_entity_in_world_coords(uParam0->f_1, uParam1->f_11) };
	if (get_ground_z_for_3d_coord(vVar0, &uVar3, false))
	{
		vVar0.f_2 = uVar3;
	}
	fVar4 = get_entity_heading(uParam0->f_1);
	if (!func_53(*uParam1, 0))
	{
		*uParam1 = func_897(uParam1->f_1, vVar0, fVar4, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			func_898(*uParam1, uParam1->f_2);
		}
	}
	if (!func_53(*uParam1, 0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(*uParam1, true);
	set_ped_relationship_group_hash(*uParam1, iParam3);
	set_ped_can_be_targetted(*uParam1, true);
	set_ped_combat_attributes(*uParam1, 5, true);
	remove_all_ped_weapons(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_10, -1, 3, 0, 0.9f, 1065353216, 0);
	func_911(*uParam1);
	if (func_15(uParam2, 65536))
	{
		set_ped_relationship_group_hash(*uParam1, 707888648);
		_0x819add5ef1742f47(*uParam1, 7);
		set_blocking_of_non_temporary_events(*uParam1, true);
	}
	if (func_314(129))
	{
		set_ped_config_flag(*uParam1, 6, true);
	}
	if (func_53(uParam1->f_7, 0))
	{
		_set_ped_on_mount(*uParam1, uParam1->f_7, -1, true);
	}
	_0x18ff3110cf47115d(*uParam1, 1, 0);
	set_entity_lod_dist(*uParam1, 300);
	set_ped_shoot_rate(*uParam1, 90);
	set_ped_combat_ability(*uParam1, 2);
	set_ped_accuracy(*uParam1, 80);
	_0x986f7a51ee3e1f92(*uParam1, 0);
	set_ped_config_flag(*uParam1, 297, true);
	func_902(*uParam1, 0);
	add_entity_to_audio_mix_group(*uParam1, "Robberies_Coach_Target_Group", 0f);
	if (iParam5 == 2 && (iParam4 == 1 || iParam4 == 3))
	{
		func_905(*uParam1, 1);
		func_906(*uParam1, -1504859554, get_random_int_in_range(1, 4), 1);
	}
}

bool func_588(int iParam0)
{
	if (iParam0 == -1)
	{
		return true;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_912(func_414());
	if (func_913(iParam0, 1))
	{
		if (iVar0 >= 6 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_913(iParam0, 2))
	{
		if (iVar0 >= 12 && iVar0 < 18)
		{
			return true;
		}
	}
	if (func_913(iParam0, 4096))
	{
		if (iVar0 >= 11 && iVar0 < 14)
		{
			return true;
		}
	}
	if (func_913(iParam0, 4))
	{
		if (iVar0 >= 18 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_913(iParam0, 8))
	{
		if (iVar0 >= 0 && iVar0 < 6)
		{
			return true;
		}
	}
	if (func_913(iParam0, 16))
	{
		if (iVar0 >= 20 || iVar0 < 7)
		{
			return true;
		}
	}
	if (func_913(iParam0, 1024))
	{
		if (iVar0 >= 5 && iVar0 < 12)
		{
			return true;
		}
	}
	if (func_913(iParam0, 32))
	{
		if (iVar0 >= 5 && iVar0 < 22)
		{
			return true;
		}
	}
	if (func_913(iParam0, 64))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_913(iParam0, 128))
	{
		if (iVar0 >= 21 || iVar0 < 5)
		{
			return true;
		}
	}
	if (func_913(iParam0, 256))
	{
		if (iVar0 >= 22 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_913(iParam0, 512))
	{
		if (iVar0 >= 0 && iVar0 < 5)
		{
			return true;
		}
	}
	if (func_913(iParam0, 8192))
	{
		if (iVar0 >= 6 && iVar0 < 20)
		{
			return true;
		}
	}
	if (func_913(iParam0, 2048))
	{
		if (iVar0 >= 1 && iVar0 < 3)
		{
			return true;
		}
	}
	if (func_913(iParam0, 16384))
	{
		if (iVar0 >= 6 && iVar0 < 24)
		{
			return true;
		}
	}
	if (func_913(iParam0, 32768))
	{
		if (iVar0 >= 21 || iVar0 < 6)
		{
			return true;
		}
	}
	if (func_913(iParam0, 65536))
	{
		if (iVar0 >= 18 && iVar0 < 19)
		{
			return true;
		}
	}
	return false;
}

void func_589(var uParam0, var uParam1, int iParam2)
{
	if (!func_53(*uParam1, 0))
	{
		*uParam1 = func_897(uParam1->f_1, get_entity_coords(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			func_898(*uParam1, uParam1->f_2);
		}
	}
	set_blocking_of_non_temporary_events(*uParam1, true);
	set_ped_relationship_group_hash(*uParam1, iParam2);
	remove_all_ped_weapons(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_7, -1, 3, 0, 0.9f, 1065353216, 0);
	set_ped_into_vehicle(*uParam1, uParam0->f_1, uParam1->f_8);
	func_914(*uParam1);
	if (func_169(uParam0->f_1))
	{
		set_entity_proofs(*uParam1, 6, false);
		uParam1->f_10 = 1;
	}
	else
	{
		set_ped_can_be_targetted(*uParam1, true);
		set_entity_can_be_targeted_without_los(*uParam1, true);
	}
	set_ped_combat_attributes(*uParam1, 2, true);
	set_ped_combat_attributes(*uParam1, 46, true);
	_0x18ff3110cf47115d(*uParam1, 1, 0);
	set_entity_lod_dist(*uParam1, 300);
	if (uParam0->f_1.f_1 == -1758092337)
	{
		set_ped_config_flag(*uParam1, 22, true);
	}
	set_ped_combat_ability(*uParam1, 2);
	set_ped_accuracy(*uParam1, 80);
	_0x986f7a51ee3e1f92(*uParam1, 0);
	func_902(*uParam1, 0);
	add_entity_to_audio_mix_group(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

void func_590(var uParam0, var uParam1, int iParam2)
{
	if (!func_53(*uParam1, 0))
	{
		*uParam1 = func_897(uParam1->f_1, get_entity_coords(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			func_898(*uParam1, uParam1->f_2);
		}
	}
	set_ped_relationship_group_hash(*uParam1, iParam2);
	set_blocking_of_non_temporary_events(*uParam1, true);
	set_ped_into_vehicle(*uParam1, uParam0->f_1, 3);
	set_ped_can_be_knocked_off_vehicle(*uParam1, 1);
	set_ped_config_flag(*uParam1, 2, true);
	func_338(*uParam1, 1);
	_0x18ff3110cf47115d(*uParam1, 1, 0);
	set_entity_lod_dist(*uParam1, 300);
	set_ped_combat_ability(*uParam1, 2);
	set_ped_accuracy(*uParam1, 80);
	_0x986f7a51ee3e1f92(*uParam1, 0);
	func_902(*uParam1, 0);
	add_entity_to_audio_mix_group(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

bool func_591(var uParam0, int iParam1, var uParam2)
{
	if (!is_entity_dead(iParam1))
	{
		if (!network_is_in_session())
		{
			fVar0 = func_915(uParam2);
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
			if (func_916(uParam2, iParam1))
			{
				func_917(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_592(var uParam0)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return false;
	}
	if (func_53(uParam0->f_9, 1))
	{
		if (is_ped_being_jacked(uParam0->f_9))
		{
			return true;
		}
	}
	if (func_53(uParam0->f_174, 1))
	{
		if (is_ped_being_jacked(uParam0->f_174))
		{
			return true;
		}
	}
	if (get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676) == Global_35 || get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_677) == Global_35)
	{
		return true;
	}
	return false;
}

bool func_593()
{
	if (iLocal_25 == 9)
	{
		if (is_entity_in_angled_area(Global_35, 1096.761f, -640.862f, 94.36778f, 1104.477f, -645.5322f, 99.29914f, 2.75f, false, true, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_594(var uParam0)
{
	if (!func_205(*uParam0, 0, 1))
	{
		return false;
	}
	if (func_106(*uParam0, Global_35, 1, 40f, 0))
	{
		return true;
	}
	return false;
}

bool func_595(var uParam0)
{
	if (!func_53(*uParam0, 1))
	{
		return false;
	}
	if (func_25(&(uParam0->f_68)))
	{
		return true;
	}
	if (func_106(*uParam0, Global_35, 1, 40f, 0))
	{
		return true;
	}
	return false;
}

bool func_596(var uParam0, int iParam1)
{
	if (func_53(&(uParam0->f_410[iParam1]), 0))
	{
		if (func_106(&(uParam0->f_410[iParam1]), Global_35, 1, 40f, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_597(var uParam0)
{
	bVar1 = false;
	switch (iLocal_36)
	{
		case 0:
			func_100(&(uParam0->f_637));
			func_533(1);
			break;
		case 1:
			if (func_26(&(uParam0->f_637)) > 19f)
			{
				iVar0 = 0;
				while (iVar0 < Local_51.f_25[0]->f_499)
				{
					if (func_183(Local_51.f_25[0]->f_1, &(Local_51.f_25[0]->f_410[iVar0]), 1, 1) < (50f - 20f))
					{
						func_182(&(Local_51.f_25[0]->f_410[iVar0]), 0f);
					}
					else if (func_183(Local_51.f_25[0]->f_1, &(Local_51.f_25[0]->f_410[iVar0]), 1, 1) > 140f)
					{
						func_182(&(Local_51.f_25[0]->f_410[iVar0]), 1.25f);
					}
					else
					{
						bVar1 = true;
					}
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 < Local_51.f_25[0]->f_499)
				{
					if (bVar1)
					{
						func_182(&(Local_51.f_25[0]->f_410[iVar0]), 1.75f);
					}
					iVar0++;
				}
			}
			break;
	}
	return func_10(32768);
}

bool func_598(var uParam0, var uParam1)
{
	if (func_918(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_599(var uParam0, var uParam1, int iParam2)
{
	if (func_15(uParam1, 65536))
	{
		return false;
	}
	if (func_10(4) && func_314(37))
	{
		return false;
	}
	if (uParam1->f_2266 > 1)
	{
		return false;
	}
	if (is_ped_shooting(Global_35))
	{
		return false;
	}
	if (uParam0->f_523 > 0)
	{
		return false;
	}
	if (func_87(uParam0->f_9, Global_36, 1) > 30f)
	{
		return false;
	}
	if (!is_ped_facing_ped(uParam0->f_9, Global_35, 45f))
	{
		return false;
	}
	if (get_entity_speed(uParam0->f_1) > 1f)
	{
		return false;
	}
	if (uParam0->f_499 == 0)
	{
		return true;
	}
	return false;
}

bool func_600(var uParam0, var uParam1)
{
	if (func_919(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_601(vector3 vParam0, var uParam3)
{
	if (func_265())
	{
		if (func_920())
		{
			vVar0 = { func_921(0) };
			vVar3 = { vVar0 * Vector(300f, 300f, 300f) + Global_36 };
			if (func_922(Global_36, vVar3, vParam0, uParam3))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_602(var uParam0, int iParam1)
{
	if (iParam1 == 4)
	{
		if (func_183(&(uParam0->f_25[0]->f_500[0]), Global_35, 1, 1) <= 0.75f && _get_ped_crouch_movement(Global_35))
		{
			return true;
		}
	}
	return false;
}

bool func_603(var uParam0)
{
	if (iLocal_26 != 3)
	{
		return false;
	}
	if (uParam0->f_523 == 0)
	{
		return false;
	}
	switch (iLocal_43)
	{
		case 0:
			if (is_ped_facing_ped(&(uParam0->f_500[0]), Global_35, 90f) && func_388(&(uParam0->f_500[0]), Global_36, 40f, 1, 1))
			{
				if (func_601(get_entity_coords(uParam0->f_1, true, false), 10f))
				{
					if (func_53(&(uParam0->f_500[0]), 0))
					{
						set_ped_combat_attributes(&(uParam0->f_500[0]), 2, true);
						task_combat_ped_timed(&(uParam0->f_500[0]), Global_35, 1500, 0);
						iLocal_43 = 1;
					}
				}
			}
			break;
		case 1:
			if (!_0xfe5c6177064bd390(0))
			{
				iLocal_43 = 2;
				return true;
			}
			break;
	}
	return false;
}

bool func_604(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_53(&(uParam0->f_410[iVar0]), 1))
		{
			if (func_923(uParam0->f_410[iVar0], uParam1))
			{
				if (func_183(&(uParam0->f_410[iVar0]), uParam0->f_1, 1, 1) < (200f - 30f))
				{
					return true;
				}
				else if (!func_15(uParam1, 8))
				{
					func_924(uParam0);
					func_4(uParam1, 8);
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_605(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_523)
	{
		if (func_53(&(uParam0->f_500[iVar0]), 1))
		{
			if (func_925(uParam0->f_500[iVar0], uParam1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_606(var uParam0, bool bParam1)
{
	bVar0 = false;
	bVar1 = false;
	func_926(uParam0, bParam1);
	if (func_927() && func_234(uParam0->f_9, uParam0->f_1, 0))
	{
		if (!func_25(&(uParam0->f_174.f_68)))
		{
			if (((((((bParam1 && func_107()) && iLocal_36 > 0) && func_388(uParam0->f_9, Global_36, 20f, 1, 1)) && func_26(&(uParam0->f_637)) > 2f) && !func_928(&(uParam0->f_9))) && func_53(uParam0->f_174, 0)) && !func_108(uParam0->f_174, 1630799643))
			{
				task_aim_gun_at_entity(uParam0->f_174, Global_35, -1, 0, 1);
				func_100(&(uParam0->f_174.f_68));
			}
		}
		else if (func_26(&(uParam0->f_174.f_68)) > 5f)
		{
			if (!func_388(uParam0->f_9, Global_36, 20f, 1, 1) || (func_928(&(uParam0->f_9)) && func_26(&(uParam0->f_9.f_161)) > 2f))
			{
				if (func_108(uParam0->f_174, 1630799643))
				{
					clear_ped_tasks(uParam0->f_174, 1, 0);
					func_42(&(uParam0->f_174.f_68));
				}
			}
		}
	}
	if (uParam0->f_614 && !uParam0->f_630)
	{
		if ((!(is_ped_facing_ped(uParam0->f_9, Global_35, 20f) && func_87(uParam0->f_9, Global_36, 1) < 30f) && !((func_53(Global_1392388->f_3, 0) && is_ped_facing_ped(uParam0->f_9, Global_1392388->f_3, 20f)) && func_183(uParam0->f_9, Global_1392388->f_3, 1, 1) < 30f)) && !func_929(uParam0->f_1, Local_51.f_2209))
		{
			func_473(uParam0->f_9, uParam0->f_1, func_194(iLocal_24), 4.4f, 0);
			uParam0->f_614 = 0;
		}
	}
	if (!func_15(&Local_51, 32) && !func_15(&Local_51, 65536))
	{
		switch (iLocal_36)
		{
			case 0:
				if (func_168(0, 1, 0, 0))
				{
					if (func_929(uParam0->f_1, Local_51.f_2209))
					{
						if (iLocal_26 != 2 && uParam0->f_499 < 3)
						{
							task_look_at_entity(uParam0->f_9, Local_51.f_2209, -1, 0, 51, 0);
							if (func_53(uParam0->f_174, 1))
							{
								task_look_at_entity(uParam0->f_174, Local_51.f_2209, -1, 0, 51, 0);
							}
							func_930(uParam0, &Local_51);
							func_101(&Local_51);
							func_533(4);
						}
						else
						{
							func_533(6);
						}
					}
					if (func_610())
					{
						if (func_314(37))
						{
							func_72(512);
						}
						else
						{
							func_101(&Local_51);
							if (func_53(Global_1392388->f_3, 0))
							{
								func_931(uParam0);
								task_look_at_entity(uParam0->f_9, Global_1392388->f_3, -1, 0, 51, 0);
								if (func_53(uParam0->f_174, 1))
								{
									task_look_at_entity(uParam0->f_174, Global_1392388->f_3, -1, 0, 51, 0);
								}
							}
						}
						func_533(7);
						func_4(&Local_51, 131072);
					}
					if (bParam1)
					{
						if (func_388(uParam0->f_9, Global_36, 22f, 1, 1))
						{
							if ((is_ped_facing_ped(uParam0->f_9, Global_35, 20f) && get_entity_speed(uParam0->f_1) > 1f) && func_932(uParam0->f_1, 1077936128))
							{
								task_look_at_entity(uParam0->f_9, Global_35, -1, 0, 51, 0);
								if (iLocal_26 == 1)
								{
									if (func_53(&(uParam0->f_252[0]), 1))
									{
										task_look_at_entity(&(uParam0->f_252[0]), Global_35, -1, 0, 51, 0);
									}
								}
								func_933(uParam0);
								func_934(uParam0);
								iVar2 = 0;
								while (iVar2 < Local_51.f_2266)
								{
									Local_51.f_25[iVar2]->f_597 = 0f;
									iVar2++;
								}
								func_101(&Local_51);
								if (!func_928(&(uParam0->f_9)))
								{
									func_97(&(Local_51.f_2286), iLocal_25, 6);
								}
								func_533(1);
								func_72(32);
							}
							else if (is_ped_facing_ped(uParam0->f_9, Global_35, 120f))
							{
								task_look_at_entity(uParam0->f_9, Global_35, -1, 0, 51, 0);
								if (iLocal_26 == 1)
								{
									if (func_53(&(uParam0->f_252[0]), 1))
									{
										task_look_at_entity(&(uParam0->f_252[0]), Global_35, -1, 0, 51, 0);
									}
								}
								if (!func_928(&(uParam0->f_9)))
								{
									func_97(&(Local_51.f_2286), iLocal_25, 7);
								}
								func_533(1);
								func_72(32);
							}
						}
					}
				}
				break;
			case 1:
				if (!func_10(524288))
				{
					bVar0 = true;
				}
				if (!func_25(&(uParam0->f_637)))
				{
					func_100(&(uParam0->f_637));
				}
				if (!func_935() && !uParam0->f_630)
				{
					if (!Local_51.f_2416)
					{
						if (((((func_26(&(uParam0->f_637)) > 6f && uParam0->f_626) && get_entity_speed(uParam0->f_1) < 0.5f) && func_388(uParam0->f_9, Global_36, 22f, 1, 1)) && is_ped_facing_ped(uParam0->f_9, Global_35, 20f)) && is_point_on_road(Global_36, 0))
						{
							if (func_53(uParam0->f_174, 0))
							{
								task_aim_gun_at_entity(uParam0->f_174, Global_35, -1, 0, 1);
							}
							func_97(&(Local_51.f_2286), iLocal_25, 8);
							Local_51.f_2416 = 1;
						}
					}
					if (uParam0->f_626 && uParam0->f_1 == Global_1392388->f_5)
					{
						if (!func_388(uParam0->f_9, Global_36, 22f, 1, 1) || !is_ped_facing_ped(uParam0->f_9, Global_35, 20f))
						{
							if (!func_10(524288))
							{
								func_112(&Local_51, iLocal_24, 1);
							}
						}
					}
					if (func_26(&(uParam0->f_637)) > 12f || vdist(Global_36, get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) < 5f)
					{
						if (((((func_26(&(uParam0->f_637)) > 12f && uParam0->f_626) && get_entity_speed(uParam0->f_1) < 0.5f) && func_388(uParam0->f_9, Global_36, 22f, 1, 1)) && is_ped_facing_ped(uParam0->f_9, Global_35, 20f)) && is_point_on_road(Global_36, 0))
						{
							if (iLocal_25 == 13)
							{
								func_97(&(Local_51.f_2286), iLocal_25, 49);
							}
							else
							{
								func_97(&(Local_51.f_2286), iLocal_25, 2);
							}
							Local_51.f_2415 = 1;
							func_72(524288);
							return true;
						}
						if (uParam0->f_626)
						{
							func_112(&Local_51, iLocal_24, 1);
						}
						if (bParam1 && !func_928(&(uParam0->f_9)))
						{
							if (!Local_51.f_2416)
							{
								func_97(&(Local_51.f_2286), iLocal_25, 8);
							}
						}
						func_42(&(uParam0->f_637));
						func_533(2);
					}
				}
				break;
			case 2:
				if (!func_10(524288))
				{
					bVar0 = true;
				}
				if (!func_25(&(uParam0->f_637)))
				{
					func_100(&(uParam0->f_637));
				}
				if (!func_935() && !uParam0->f_630)
				{
					if (func_388(uParam0->f_9, Global_36, 15f, 1, 1))
					{
						if (is_ped_facing_ped(uParam0->f_9, Global_35, 120f))
						{
							if (func_26(&(uParam0->f_637)) > 9f)
							{
								if (!func_928(&(uParam0->f_9)))
								{
									func_97(&(Local_51.f_2286), iLocal_25, 9);
								}
								func_112(&Local_51, iLocal_24, 1);
								func_42(&(uParam0->f_637));
								func_533(3);
							}
						}
					}
				}
				break;
			case 3:
				if (!func_10(524288))
				{
					bVar0 = true;
				}
				if (iLocal_26 == 1)
				{
					if (func_168(-5f, 1, 0, 0))
					{
						func_533(11);
						return true;
					}
				}
				else if (func_168(-2f, 1, 0, 0))
				{
					func_533(11);
				}
				break;
			case 11:
				if (!func_10(524288))
				{
					bVar0 = true;
				}
				break;
			case 4:
				if (!func_25(&(uParam0->f_637)))
				{
					func_100(&(uParam0->f_637));
				}
				if ((bParam1 && func_388(uParam0->f_9, Global_36, 20f, 1, 1)) && is_ped_facing_ped(uParam0->f_9, Global_35, 120f))
				{
					func_42(&(uParam0->f_637));
					func_533(6);
				}
				if (func_26(&(uParam0->f_637)) > 9f)
				{
					func_42(&(uParam0->f_637));
					func_533(5);
				}
				break;
			case 5:
				if (!func_25(&(uParam0->f_637)))
				{
					func_100(&(uParam0->f_637));
				}
				if (func_26(&(uParam0->f_637)) > 9f || ((bParam1 && func_388(uParam0->f_9, Global_36, 20f, 1, 1)) && is_ped_facing_ped(uParam0->f_9, Global_35, 120f)))
				{
					func_42(&(uParam0->f_637));
					func_533(6);
				}
				break;
			case 6:
				if (func_168(-2f, 1, 0, 0))
				{
					func_112(&Local_51, iLocal_24, 1);
					func_533(1);
					func_42(&(uParam0->f_637));
					func_113(&Local_51, 131072);
				}
				break;
			case 7:
				if (func_314(37))
				{
					func_112(&Local_51, iLocal_24, 1);
					func_533(1);
					func_113(&Local_51, 131072);
				}
				else if (_get_number_of_references_of_script_with_name_hash(-1197877542) > 0)
				{
				}
				else
				{
					if (!func_25(&(uParam0->f_637)))
					{
						func_100(&(uParam0->f_637));
					}
					if ((bParam1 && func_388(uParam0->f_9, Global_36, 20f, 1, 1)) && is_ped_facing_ped(uParam0->f_9, Global_35, 120f))
					{
						func_100(&(uParam0->f_637));
						func_533(9);
					}
					if (func_26(&(uParam0->f_637)) > 9f)
					{
						func_100(&(uParam0->f_637));
						func_533(8);
					}
				}
				break;
			case 8:
				if (!func_25(&(uParam0->f_637)))
				{
					func_100(&(uParam0->f_637));
				}
				if (func_26(&(uParam0->f_637)) > 9f || ((bParam1 && func_388(uParam0->f_9, Global_36, 20f, 1, 1)) && is_ped_facing_ped(uParam0->f_9, Global_35, 120f)))
				{
					func_100(&(uParam0->f_637));
					func_533(9);
				}
				break;
			case 9:
				func_112(&Local_51, iLocal_24, 1);
				func_533(1);
				func_42(&(uParam0->f_637));
				func_46(&(uParam0->f_9.f_5));
				func_46(&(uParam0->f_174.f_5));
				break;
		}
	}
	if (bVar0 && !uParam0->f_630)
	{
		if (func_53(uParam0->f_9, 0))
		{
			if (!_0x508f5053e3f6f0c4(uParam0->f_9, Global_36, 2f))
			{
				task_look_at_entity(uParam0->f_9, Global_35, -1, 0, 41, 0);
			}
		}
		if (func_53(uParam0->f_174, 0))
		{
			if (!_0x508f5053e3f6f0c4(uParam0->f_174, Global_36, 2f))
			{
				task_look_at_entity(uParam0->f_174, Global_35, -1, 0, 41, 1);
			}
		}
		func_933(uParam0);
		func_934(uParam0);
	}
	if (bVar1)
	{
		if (func_53(Global_1392388->f_3, 0))
		{
			if (func_53(uParam0->f_9, 0))
			{
				if (!_0x508f5053e3f6f0c4(uParam0->f_9, get_entity_coords(Global_1392388->f_3, true, false), 2f))
				{
					task_look_at_entity(uParam0->f_9, Global_1392388->f_3, -1, 0, 41, 1);
				}
			}
			if (func_53(uParam0->f_174, 0))
			{
				if (!_0x508f5053e3f6f0c4(uParam0->f_174, get_entity_coords(Global_1392388->f_3, true, false), 2f))
				{
					task_look_at_entity(uParam0->f_174, Global_1392388->f_3, -1, 0, 41, 1);
				}
			}
			func_931(uParam0);
		}
	}
	return false;
}

bool func_607(var uParam0, bool bParam1)
{
	if (iLocal_25 == 5)
	{
		if (func_87(uParam0->f_1, Global_36, 1) < 60f)
		{
			return true;
		}
	}
	else if (iLocal_25 == 2)
	{
		if (func_87(uParam0->f_1, Global_36, 1) < 60f && bParam1)
		{
			return true;
		}
	}
	return false;
}

void func_608(var uParam0, int iParam1)
{
	if (func_609(iParam1))
	{
		func_104(uParam0, func_936(iParam1), 0, -1, 0, 0);
	}
}

bool func_609(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 6)
	{
		return true;
	}
	return false;
}

bool func_610()
{
	if (func_10(8))
	{
		return true;
	}
	return false;
}

float func_611(int iParam0)
{
	if (iParam0 == 12)
	{
		return 30f;
	}
	return 15f;
}

bool func_612(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (has_entity_been_damaged_by_entity(iVar1, Global_35, 0, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_613(var uParam0)
{
	if (has_entity_been_damaged_by_entity(uParam0->f_9, Global_35, 1, 1))
	{
		return true;
	}
	if (has_entity_been_damaged_by_entity(uParam0->f_174, Global_35, 1, 1))
	{
		return true;
	}
	iVar1 = 0;
	while (iVar1 < uParam0->f_499)
	{
		if ((has_entity_been_damaged_by_entity(&(uParam0->f_410[iVar1]), Global_35, 1, 1) || has_entity_been_damaged_by_entity(uParam0->f_410[iVar1]->f_7, Global_35, 1, 1)) || has_entity_been_damaged_by_entity(uParam0->f_410[iVar1]->f_7, func_765(7), 1, 1))
		{
			fVar0 = func_183(&(uParam0->f_410[iVar1]), uParam0->f_1, 1, 1);
			if (fVar0 < (200f - 30f))
			{
				return true;
			}
			else if (!func_15(&Local_51, 8))
			{
				func_924(uParam0);
				func_4(&Local_51, 8);
			}
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < uParam0->f_523)
	{
		if (has_entity_been_damaged_by_entity(&(uParam0->f_500[iVar2]), Global_35, 1, 1))
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

bool func_614(int iParam0)
{
	if (func_609(iParam0))
	{
		vVar0 = { func_936(iParam0) };
		if (func_266(&vVar0))
		{
			return true;
		}
	}
	return false;
}

int func_615(bool bParam0)
{
	if (bParam0)
	{
		return func_937(Global_1359489->f_4);
	}
	get_group_size(func_938(), &uVar2, &iVar1);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < iVar1)
	{
		iVar4 = get_ped_as_group_member(func_938(), iVar3);
		if (func_939(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	return iVar0;
}

void func_616(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_328(uParam0->f_25[iVar0]);
		iVar0++;
	}
}

void func_617(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_536(uParam0->f_25[iVar0], Global_35);
		iVar0++;
	}
}

void func_618(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		func_940(&(uParam0->f_25[iVar0]->f_174), Global_35);
		iVar0++;
	}
}

void func_619(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_2266)
	{
		iVar1 = 0;
		while (iVar1 < uParam0->f_25[iVar0]->f_540)
		{
			func_941(uParam0->f_25[iVar0]->f_524[iVar1]);
			iVar1++;
		}
		iVar0++;
	}
}

float func_620(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

var func_621(int iParam0, int iParam1)
{
	get_current_ped_weapon(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_622(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_942(get_entity_coords(iParam0, true, false), fParam1, fParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

int func_623(int iParam0)
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

int func_624(int iParam0)
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

void func_625(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_484();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_943(iParam0);
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
	if (func_944(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_457())
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
	Global_40.f_11095.f_35 = func_660(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_484();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_485(iVar1);
		func_946(func_945(), 0, 4000);
		func_947(Global_40.f_11095.f_35);
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
		func_948(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_416(func_651(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_624(14))
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
					sParam4 = func_949(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_882(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_882(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_416(func_651(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_624(4))
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
					sParam4 = func_949(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_882(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_882(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_651(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_709(10, 1);
	}
}

void func_626(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_627()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_628()
{
	if (bVar2530)
	{
		return;
	}
	if (_0x3ab6c7b0bb0df4b1(Local_51.f_2402, -1))
	{
		remove_anim_scene_entity(Local_51.f_2404, "MONEYBOX", Local_51.f_2402);
	}
	set_entity_no_collision_entity(Local_51.f_2402, Global_35, true);
	_0x9587913b9e772d29(Local_51.f_2402, 0);
	func_950(-1499182641, get_entity_coords(Local_51.f_2402, true, false), &(Local_51.f_2402), 1f, 0, 0);
	freeze_entity_position(Local_51.f_2402, true);
	func_951(&(Local_51.f_2422), get_entity_coords(Local_51.f_2402, true, false), 0.5f, 2, -1, 0);
	iLocal_2532 = 1;
}

bool func_629()
{
	if (does_entity_exist(Local_51.f_2402))
	{
		if (_0xd04241bbf6d03a5e(Global_35) != 0 && func_87(Local_51.f_2402, Global_36, 1) < 2f)
		{
			iVar10 = 0;
			while (iVar10 < get_number_of_events(0))
			{
				if (get_event_at_index(0, iVar10) == -1730772208)
				{
					if (get_event_data(0, iVar10, &vVar0, 10))
					{
						if (vVar0.z == -2001202686 || vVar0.z == -343824903)
						{
							return true;
						}
					}
				}
				iVar10++;
			}
		}
	}
	return false;
}

struct<2> func_630(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

int func_631(int iParam0)
{
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_952(iVar0);
}

int func_632(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		case -1889597427:
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1506259487:
			return 5;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case -1292426046:
			return 8;
		case -1197751823:
			return 20;
		case -1176744536:
			return 24;
		case -1130865351:
			return 31;
		case -1130352927:
			return 1;
		case -893163968:
			return 17;
		case -735900586:
			return 28;
		case -676503695:
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case -207860920:
			return 26;
		case 99217379:
			return 27;
		case 304805134:
			return 21;
		case 383349088:
			return 7;
		case 389988485:
			return 2;
		case 673166414:
			return 25;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case 1367443060:
			return 4;
		case 1422688607:
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case 1780904876:
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

int func_633(int iParam0)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_634(int iParam0, int iParam1)
{
	if (func_237() != -1)
	{
		return;
	}
	iVar0 = func_953();
	if (iParam0 <= 0)
	{
		return;
	}
	else if (iParam0 > 0 && (iVar0 + iParam0) > 3000)
	{
		iVar1 = (3000 - iVar0);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 < 0)
	{
		iVar2 = absi(iVar1);
		sVar9 = "FAME_EVENT_DEC";
	}
	else
	{
		iVar2 = iVar1;
		sVar9 = "FAME_EVENT_INC";
	}
	iVar3 = (iVar0 + iVar1);
	fVar6 = to_float(iVar0);
	fVar7 = to_float(&Global_1347398);
	fVar8 = to_float(iVar3);
	iVar4 = func_660(ceil(((fVar6 / fVar7) * 100f)), 0, 100);
	iVar5 = func_660(ceil(((fVar8 / fVar7) * 100f)), 0, 100);
	if ((iVar5 - iVar4) == 0)
	{
		return;
	}
	if (iParam1 & 0)
	{
	}
	if (iVar3 < 1000)
	{
		if (!func_954())
		{
			func_955(0);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 1000 && iVar3 < 2000)
	{
		if (!func_956())
		{
			func_955(1000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (iVar3 >= 2000 && iVar3 < 3000)
	{
		if (!func_957())
		{
			func_955(2000);
			play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
		}
	}
	else if (!func_958())
	{
		func_955(3000);
		play_sound_frontend("REWARD_MORALE", "HUD_REWARD_SOUNDSET", true, 0);
	}
	func_416(func_651(661720433), iVar1);
	iVar10 = func_953();
	_0x078f77fd1a43eab3(iVar0, iVar10);
}

char* func_635(char* sParam0)
{
	return sParam0;
}

bool func_636(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_637(int iParam0)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_638(int iParam0, int iParam1)
{
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_640(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_814("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_815(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_307(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_817(iVar1);
				return true;
			}
			iVar3++;
		}
		func_817(iVar1);
	}
	return false;
}

int func_639(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_637(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_640(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_959(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_960(bParam2), iParam0, 0);
	return iVar2;
}

int func_640(int iParam0, int iParam1)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_637(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_961(iParam0, 1399091007))
	{
		func_962(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

void func_641(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_636(iParam0, 0))
	{
		return;
	}
	if (iParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_963())
	{
		func_964(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_965(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_965(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_966(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_637(iParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && iParam0 != 424030678) && iParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_967(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (get_hash_key(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (is_string_null_or_empty(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (_item_database_is_overpowered_item(iParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_969(_create_var_string(10, &cVar2, _create_var_string(0, func_968(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_961(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_968(iParam0));
	}
	func_882(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_642(int iParam0)
{
	if (!func_636(iParam0, 0))
	{
		return Var0;
	}
	if (func_961(iParam0, -305066475))
	{
		if (func_237() == -1)
		{
			if (func_961(iParam0, -537818634))
			{
				return func_651(189951448);
			}
			else
			{
				return func_651(1176172851);
			}
		}
	}
	else if (func_961(iParam0, -537818634))
	{
		return func_651(-963660207);
	}
	if (func_961(iParam0, 2084895747))
	{
		return func_651(1694039471);
	}
	return Var2;
}

bool func_643(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_970(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_972(&Var0, func_971(0));
	}
	if (!func_973(&Var0, &iVar14, &iVar15, 0))
	{
		return false;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_815(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_891(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_817(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_644(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_886(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_974(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_890(iParam0, Var0, Var0.f_4, bParam4) };
	return func_891(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

bool func_645(bool bParam0)
{
	if (func_237() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_960(bParam0));
}

void func_646(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_961(iParam0, 606799272))
		{
			func_975(iParam0, iParam1);
		}
		if (func_961(iParam0, -1112814642) && func_961(iParam0, -1697809989))
		{
			func_976(iParam0, iParam1, 1, 0);
		}
	}
}

void func_647(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_648(bool bParam0, int iParam1)
{
	if (!bParam0 && func_726(373691918))
	{
		return 0;
	}
	iVar0 = 0;
	if (_0x76cf93d4b416b288(752193127) < 2)
	{
		iVar0 = (_0x76cf93d4b416b288(752193127) + iParam1);
	}
	if (iVar0 < 0)
	{
		iVar0 = 0;
	}
	_0xf19706b1f8ffa88f(752193127, iVar0);
	func_432(bParam0);
	return 1;
}

void func_649()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_977(iVar17))
		{
			iVar18 = func_978(iVar17);
			if (does_entity_exist(iVar18))
			{
				Var0.f_14 = iVar18;
				Var0.f_3 = iVar18;
				_0x88bc5f4aef77fc4e(&Var0, 17);
			}
		}
		iVar17++;
	}
	Global_1359489->f_58 = -15;
	func_42(&(Global_1359489->f_55));
	if (func_979(1777191912, 1))
	{
		func_980(1777191912, 1, 0);
	}
}

void func_650(int iParam0)
{
	if (!func_427(iParam0))
	{
		return;
	}
	func_790(iParam0, (func_789(iParam0) + shift_left(1, 16)));
}

struct<2> func_651(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

bool func_652(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_653()
{
	return func_788() > 0;
}

void func_654(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_981(-1032423150, iParam1);
			break;
		case 18:
			func_981(294066959, iParam1);
			func_981(-1925639563, iParam1);
			func_981(-378582304, iParam1);
			func_981(-338306437, iParam1);
			break;
		case 20:
			func_981(437270255, iParam1);
			break;
		case 2:
			func_981(-304000413, iParam1);
			func_981(-533612796, iParam1);
			func_981(48036954, iParam1);
			break;
		case 23:
			func_981(193108691, iParam1);
			func_981(491732588, iParam1);
			func_981(671962088, iParam1);
			func_982(1);
			break;
		case 16:
			func_981(-1836056650, iParam1);
			func_981(-754657922, iParam1);
			func_981(-1752355838, iParam1);
			func_981(-1375324510, iParam1);
			break;
		case 59:
			func_981(-514392105, iParam1);
			func_981(-822060246, iParam1);
			if (func_983(146))
			{
				func_981(1372748575, iParam1);
			}
			func_982(1);
			break;
		case 76:
			func_981(1991352213, iParam1);
			if (func_984() == 0)
			{
				func_981(1852488616, iParam1);
			}
			else
			{
				func_981(-9866350, iParam1);
			}
			break;
		case 44:
			func_981(863852599, iParam1);
			func_981(1228374935, iParam1);
			func_981(1517889050, iParam1);
			func_981(830657578, iParam1);
			func_981(1901354958, iParam1);
			break;
		case 46:
			func_981(-582805654, iParam1);
			func_981(250378940, iParam1);
			func_981(-2143265426, iParam1);
			break;
		case 17:
			func_981(-941494139, iParam1);
			func_981(1641489521, iParam1);
			break;
		case 19:
			func_981(-1829423531, iParam1);
			func_981(-1590504752, iParam1);
			func_981(1357221321, iParam1);
			break;
		case 21:
			func_981(-1037992610, iParam1);
			func_981(-1286414399, iParam1);
			func_982(0);
			break;
		case 15:
			func_981(-1014460309, iParam1);
			func_981(-1030502825, iParam1);
			break;
		case 33:
			func_981(479388090, iParam1);
			func_981(-1396342239, iParam1);
			func_981(-619618632, iParam1);
			break;
		case 34:
			func_981(1193561641, iParam1);
			break;
		case 64:
			func_981(1363960851, iParam1);
			break;
		case 60:
			func_981(-1232453926, iParam1);
			func_981(-882833584, iParam1);
			break;
		case 73:
			func_981(2023205767, iParam1);
			break;
		case 74:
			func_981(-2135286513, iParam1);
			if (func_984() == 0)
			{
				func_981(33799444, iParam1);
			}
			else
			{
				func_981(-161343203, iParam1);
			}
			break;
		case 8:
			func_981(841639693, iParam1);
			func_981(358952323, iParam1);
			break;
		case 36:
			func_981(852538149, iParam1);
			func_981(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_981(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_981(1116039310, iParam1);
			}
			break;
		case 27:
			func_981(107633428, iParam1);
			func_981(335902282, iParam1);
			func_981(575673055, iParam1);
			func_981(-425944207, iParam1);
			break;
		case 28:
			func_981(-1941530250, iParam1);
			func_981(1399269304, iParam1);
			func_981(1839684664, iParam1);
			func_981(923168503, iParam1);
			func_981(-1485078322, iParam1);
			break;
		case 29:
			func_981(574995900, iParam1);
			func_981(-1691275407, iParam1);
			func_981(-1725307861, iParam1);
			break;
		case 31:
			func_981(-2108383238, iParam1);
			func_981(-1321828931, iParam1);
			func_981(-1632118592, iParam1);
			func_981(334938948, iParam1);
			break;
		case 4:
			func_981(115823701, iParam1);
			func_981(-1896939736, iParam1);
			func_981(-1830746356, iParam1);
			func_981(-1235169781, iParam1);
			func_982(0);
			break;
		case 6:
			func_981(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_981(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_981(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_981(-384176140, iParam1);
			}
			break;
		case 25:
			func_981(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_981(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_981(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_981(-1374849484, iParam1);
			}
			break;
		case 48:
			func_981(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_981(217772674, iParam1);
			}
			else
			{
				func_981(2071798160, iParam1);
			}
			if (func_985(51))
			{
				func_981(-792802286, iParam1);
			}
			break;
		case 49:
			func_981(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_981(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_981(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_981(1402120602, iParam1);
			}
			break;
		case 58:
			func_981(-1661934591, iParam1);
			break;
		case 50:
			func_981(-1713759426, iParam1);
			break;
		case 52:
			func_981(-314799932, iParam1);
			func_981(-462260432, iParam1);
			func_981(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_981(345256028, iParam1);
				func_981(-1635084094, iParam1);
			}
			else
			{
				func_981(114267347, iParam1);
			}
			break;
		case 32:
			func_981(615304157, iParam1);
			break;
		case 47:
			func_981(415434835, iParam1);
			break;
		case 69:
			func_981(1373465877, iParam1);
			if (func_675((*Global_1347702)[9]->f_15, 1))
			{
				func_981(-2058273527, iParam1);
			}
			break;
		case 70:
			func_981(451334985, iParam1);
			if (func_984() == 0)
			{
				func_981(-224150200, iParam1);
			}
			else
			{
				func_981(289012628, iParam1);
			}
			break;
		case 71:
			if (func_984() == 0)
			{
				func_981(-41692120, iParam1);
			}
			else
			{
				func_981(1537840678, iParam1);
			}
			break;
		case 37:
			func_981(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_981(1842132550, iParam1);
			}
			else
			{
				func_981(-785735240, iParam1);
			}
			func_981(-1605690566, iParam1);
			break;
		case 13:
			func_981(-731367459, iParam1);
			func_981(224176585, iParam1);
			func_981(-14545580, iParam1);
			break;
		case 53:
			func_981(1095274522, iParam1);
			break;
		case 54:
			func_981(-572027988, iParam1);
			break;
		case 56:
			func_981(1339307101, iParam1);
			func_981(2102267732, iParam1);
			break;
		case 57:
			func_981(710102686, iParam1);
			break;
		case 22:
			func_981(-1754368482, iParam1);
			func_981(-2071408557, iParam1);
			break;
		case 12:
			func_981(-181334543, iParam1);
			break;
		case 0:
			func_981(-2134669864, iParam1);
			func_981(-548289709, iParam1);
			func_981(-911271922, iParam1);
			func_981(-604455775, iParam1);
			break;
		case 1:
			func_982(1);
			break;
		case 3:
			if (func_686())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_981(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_981(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_655()
{
	if (func_237() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_656(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_981(-145926707, iParam1);
			func_981(-604922090, iParam1);
			func_981(-848690769, iParam1);
			break;
		case 1:
			func_981(-1477631591, iParam1);
			break;
		case 2:
			func_981(76112544, iParam1);
			break;
		case 9:
			func_981(1396404308, iParam1);
			func_981(-1357381228, iParam1);
			if (func_675((*Global_1835011)[69]->f_1, 1))
			{
				func_981(1902679064, iParam1);
			}
			else
			{
				func_981(-2146422425, iParam1);
			}
			break;
		case 22:
			func_981(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_981(-1934184559, iParam1);
				func_981(1281755988, iParam1);
			}
			else
			{
				func_981(-1745220872, iParam1);
				func_981(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_981(-1641504538, iParam1);
				func_981(-988014485, iParam1);
			}
			else if (func_983(26))
			{
				func_981(-343043950, iParam1);
				func_981(-640062214, iParam1);
			}
			else
			{
				func_981(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_981(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_981(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_981(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_981(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_981(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_981(1301690984, iParam1);
				}
			}
			else
			{
				func_981(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_981(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_981(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_981(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_981(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_981(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_981(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_981(-754570528, iParam1);
			}
			else
			{
				func_981(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_981(-2072125821, iParam1);
			}
			else
			{
				func_981(270040030, iParam1);
			}
			break;
		case 37:
			func_981(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_981(-505314737, iParam1);
				func_981(-1853052860, iParam1);
			}
			else
			{
				func_981(-1975624994, iParam1);
				func_981(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_981(1690231002, iParam1);
			}
			else
			{
				func_981(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_981(1225386280, iParam1);
			}
			else if (func_983(54))
			{
				func_981(-283235773, iParam1);
			}
			else
			{
				func_981(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_981(1355398007, iParam1);
			}
			else
			{
				func_981(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_981(574636806, iParam1);
			}
			else
			{
				func_981(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_981(821118338, iParam1);
			}
			else if (func_983(39))
			{
				func_981(846829260, iParam1);
			}
			else
			{
				func_981(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_708((*Global_1835011)[33]->f_1) == 1)
				{
					func_981(1422779093, iParam1);
				}
				else
				{
					func_981(-1769536986, iParam1);
				}
			}
			else
			{
				func_981(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_981(352134789, iParam1);
			}
			else if (func_983(43))
			{
				func_981(260723113, iParam1);
			}
			else
			{
				func_981(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_981(-457958799, iParam1);
			}
			else
			{
				func_981(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_983(41))
			{
				func_981(-546824600, iParam1);
			}
			else
			{
				func_981(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_981(1297261593, iParam1);
			}
			else
			{
				func_981(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_981(2068484886, iParam1);
			}
			else if (func_983(49))
			{
				func_981(-1489080639, iParam1);
				func_981(-2102244050, iParam1);
			}
			else
			{
				func_981(-1863040467, iParam1);
			}
			break;
		case 51:
			func_981(-2055943209, iParam1);
			break;
		case 58:
			if (func_675((*Global_1347702)[23]->f_15, 1))
			{
				func_981(1650066845, iParam1);
			}
			else
			{
				func_981(151370023, iParam1);
			}
			func_981(1426057961, iParam1);
			func_981(476379584, iParam1);
			break;
		case 59:
			func_981(-1638117866, iParam1);
			break;
		case 62:
			func_981(199541730, iParam1);
			break;
		case 63:
			func_981(1703485804, iParam1);
			func_981(-800449045, iParam1);
			break;
		case 65:
			func_981(-1678210868, iParam1);
			func_981(-1448238026, iParam1);
			func_981(-1200864845, iParam1);
			func_981(1473511536, iParam1);
			break;
		case 66:
			func_981(-1774490051, iParam1);
			func_981(-34645921, iParam1);
			func_981(174027075, iParam1);
			func_981(-1155999, iParam1);
			func_982(1);
			break;
		case 67:
			func_981(701612593, iParam1);
			func_981(-1069631343, iParam1);
			func_981(1673428882, iParam1);
			break;
		case 68:
			func_981(-739133286, iParam1);
			func_981(-2130089358, iParam1);
			func_981(2056190391, iParam1);
			func_981(1941753817, iParam1);
			func_982(0);
			break;
		case 70:
			func_981(-1217555753, iParam1);
			break;
		case 71:
			func_981(697048821, iParam1);
			break;
		case 73:
			func_981(-553148661, iParam1);
			break;
		case 75:
			func_981(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_981(1414263863, iParam1);
			}
			else
			{
				func_981(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_981(1835465936, iParam1);
				func_981(523715611, iParam1);
			}
			else if (func_983(78))
			{
				func_981(1420338873, iParam1);
			}
			else
			{
				func_981(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_981(10180941, iParam1);
			}
			else if (func_983(79))
			{
				func_981(768420635, iParam1);
			}
			else
			{
				func_981(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_981(-383601523, iParam1);
			}
			else
			{
				func_981(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_981(1606472408, iParam1);
			}
			else
			{
				func_981(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_981(-203571927, iParam1);
			}
			else
			{
				func_981(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_981(729886222, iParam1);
			}
			else
			{
				func_981(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_981(-714816362, iParam1);
			}
			else
			{
				func_981(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_981(-932932179, iParam1);
				func_981(-1458537240, iParam1);
			}
			else
			{
				func_981(-1764383885, iParam1);
				func_981(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_981(1741466706, iParam1);
			}
			else
			{
				func_981(1405815775, iParam1);
			}
			break;
		case 94:
			func_981(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_981(1905280979, iParam1);
			}
			else
			{
				func_981(-1966245299, iParam1);
			}
			func_981(721468880, iParam1);
			break;
		case 99:
			func_981(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_981(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_981(-1117781095, iParam1);
				}
				else
				{
					func_981(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_981(141494548, iParam1);
			}
			else
			{
				func_981(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_981(-369525697, iParam1);
			}
			else if (func_983(101))
			{
				func_981(1595015219, iParam1);
			}
			else
			{
				func_981(-321486961, iParam1);
			}
			break;
		case 103:
			func_981(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_981(793460477, iParam1);
				func_981(-1610242176, iParam1);
			}
			else if (func_983(103))
			{
				func_981(1830897187, iParam1);
			}
			else
			{
				func_981(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_981(1528309077, iParam1);
			}
			else if (func_983(104))
			{
				func_981(1864966105, iParam1);
			}
			else
			{
				func_981(-103336013, iParam1);
			}
			break;
		case 108:
			func_981(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_981(-1123227713, iParam1);
				func_981(-889574341, iParam1);
			}
			else
			{
				func_981(2065385917, iParam1);
				func_981(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_981(-887421691, iParam1);
			}
			else if (func_983(109))
			{
				func_981(-1318117949, iParam1);
			}
			else
			{
				func_981(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_981(284822762, iParam1);
				}
				else
				{
					func_981(-1425017554, iParam1);
				}
			}
			else if (func_983(110))
			{
				if (&Global_1357515 == 0)
				{
					func_981(553087292, iParam1);
				}
				else
				{
					func_981(-1766870331, iParam1);
					func_981(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_981(-1980598735, iParam1);
			}
			else
			{
				func_981(-442732098, iParam1);
				func_981(1955756409, iParam1);
			}
			break;
		case 115:
			func_981(394303528, iParam1);
			func_981(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_981(1182403394, iParam1);
			}
			else
			{
				func_981(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_981(924445424, iParam1);
			}
			else
			{
				func_981(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_981(430755273, iParam1);
				func_981(-1473879802, iParam1);
			}
			else
			{
				func_981(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_981(73885747, iParam1);
			}
			else if (func_983(117))
			{
				func_981(1559707913, iParam1);
			}
			else
			{
				func_981(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_981(-2103887972, iParam1);
			}
			else if (func_983(118))
			{
				func_981(-435828462, iParam1);
			}
			else
			{
				func_981(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_981(2054486196, iParam1);
			}
			else
			{
				func_981(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_981(-570086056, iParam1);
			}
			else if (func_983(121))
			{
				func_981(32337856, iParam1);
			}
			else
			{
				func_981(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_981(813493663, iParam1);
			}
			else if (func_983(122))
			{
				func_981(-2132763590, iParam1);
			}
			else
			{
				func_981(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_981(-66240572, iParam1);
				func_981(1563075046, iParam1);
			}
			else
			{
				func_981(-787011772, iParam1);
				func_981(-1523377438, iParam1);
			}
			break;
		case 127:
			func_981(61020800, iParam1);
			break;
		case 129:
			func_981(428985222, iParam1);
			break;
		case 131:
			func_981(-1393851036, iParam1);
			break;
		case 133:
			func_981(1559531342, iParam1);
			break;
		case 134:
			func_981(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_981(-1374407408, iParam1);
				}
				else
				{
					func_981(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_981(-472672138, iParam1);
				}
				else
				{
					func_981(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_981(-1678710489, iParam1);
			}
			else
			{
				func_981(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_981(1717582460, iParam1);
			}
			else
			{
				func_981(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_981(1568112362, iParam1);
				func_981(1388317526, iParam1);
			}
			else if (func_983(136))
			{
				func_981(-1597534828, iParam1);
				func_981(-1207918353, iParam1);
			}
			else
			{
				func_981(-1940891082, iParam1);
				func_981(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_981(448334530, iParam1);
				func_981(2145375502, iParam1);
			}
			else
			{
				func_981(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_981(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_981(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_981(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_981(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_981(-66616327, iParam1);
			}
			else
			{
				func_981(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_981(1862916706, iParam1);
			}
			else if (func_983(147))
			{
				func_981(675105199, iParam1);
			}
			else
			{
				func_981(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_981(174409701, iParam1);
			}
			else if (func_983(148))
			{
				func_981(-1730895475, iParam1);
			}
			else
			{
				func_981(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_981(1295237052, iParam1);
			}
			else if (func_983(149))
			{
				func_981(-788577684, iParam1);
			}
			else
			{
				func_981(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_657(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_220(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_310(iParam0);
			switch (iVar1)
			{
				case 0:
					return -1340559426;
				case 1:
					return -694047360;
				case 2:
					return -757336127;
				case 3:
					return -164763388;
				case 4:
					*uParam1 = -2060316038;
					return -2030965067;
				case 5:
					return 2030928096;
				case 6:
					return -332258016;
				case 10:
					return 1817180056;
				case 13:
					return 545240164;
				case 15:
					return 1141344854;
				case 8:
					return 1796786552;
				case 25:
					return 1783253542;
				case 14:
					return -2129915369;
				case 7:
					return -1393633441;
				case 9:
					if (func_708((*Global_1835011)[9]->f_1) == 0)
					{
						return 1819621703;
					}
					else
					{
						return 1456958671;
					}
					break;
				case 11:
					return 278608719;
				case 12:
					return -561040434;
				case 16:
					return 95619635;
				case 17:
					return 1185998732;
				case 53:
					return -221923309;
				case 18:
					return -620369863;
				case 19:
					return -1738185394;
				case 20:
					return -637873918;
				case 22:
					return 561912024;
				case 23:
					return 951007010;
				case 24:
					return -1512720465;
				case 21:
					return 920901415;
				case 26:
					return -1664107227;
				case 27:
					return -1934704933;
				case 28:
					return -582523927;
				case 29:
					return -259827569;
				case 30:
					return -1633236438;
				case 31:
					return -1396074730;
				case 32:
					return -248683070;
				case 33:
					return 1454698172;
				case 34:
					return -1548165899;
				case 35:
					return -1486701482;
				case 36:
					return 1249990864;
				case 37:
					return -164125056;
				case 38:
					return -1198456774;
				case 39:
					return -820014425;
				case 40:
					return -2071373019;
				case 41:
					return -162152912;
				case 42:
					return -532430534;
				case 43:
					return -695655810;
				case 44:
					return -1238376790;
				case 45:
					return 1927460276;
				case 46:
					return 1824331150;
				case 47:
					return 1888528254;
				case 48:
					return 1971155641;
				case 49:
					return -1757085331;
				case 50:
					return 1264235360;
				case 51:
					return 1157034909;
				case 52:
					return 512067206;
				case 54:
					return -258855820;
				case 55:
					return 2143139308;
				case 56:
					return -18183703;
				case 57:
					return 692218123;
				case 58:
					return 127002552;
				case 59:
					return 1769573516;
				case 60:
					return 501194998;
				case 61:
					return -219249641;
				case 62:
					return 1935952956;
				case 63:
					return 121222228;
				case 64:
					return -1381943684;
				case 65:
					return -1417145007;
				case 66:
					return -314300362;
				case 67:
					return -445710060;
				case 68:
					return 122725574;
				case 69:
					return -935212592;
				case 70:
					return -597010176;
				case 71:
					return 534386033;
				case 72:
					return -330340613;
				case 73:
					return 1425403638;
				case 74:
					return 124507607;
				case 75:
					return 747937920;
				case 76:
					return 1636680094;
			}
			break;
		case 8:
			iVar2 = func_221(iParam0);
			switch (iVar2)
			{
				case 120:
					return -895048976;
				case 0:
					return -172442174;
				case 63:
					return 569547151;
				case 97:
					return 1150653348;
				case 98:
					return -2075517304;
				case 94:
					return -1048889581;
				case 59:
					return 2137967386;
				case 61:
					return -1955429862;
				case 62:
					return 1899640864;
				case 112:
					return 1469701481;
				case 113:
					return -954047483;
				case 114:
					return -1868521635;
				case 66:
					*uParam1 = -2060316038;
					return -402973141;
				case 76:
					return 281905065;
				case 134:
					return 1132574871;
				case 3:
					return 709886296;
				case 5:
					return -1646431667;
				case 21:
					return 2143106360;
				case 37:
					return 1073595144;
				case 138:
					return -1582252733;
				case 67:
					*uParam1 = -2060316038;
					return 1415827953;
				case 106:
					return 195634974;
				case 107:
					return 1508162848;
				case 115:
					return -1971110347;
				case 116:
					return 446631778;
				case 22:
					return 1909655985;
				case 23:
					return -303175962;
				case 82:
					return 437096661;
				case 68:
					*uParam1 = -2060316038;
					return 1046168872;
				case 140:
					return 1593516439;
				case 142:
					return 1234351222;
				case 58:
					return -1988547710;
				case 64:
					return 98434060;
				case 65:
					return 1937922313;
				case 108:
					return -713369135;
				case 8:
					return -1538781541;
				case 10:
					return -925475803;
				case 2:
					return -1479860879;
				case 96:
					return -1025265051;
				case 52:
					return -270246276;
				default:
					break;
			}
			break;
		case 11:
			iVar3 = func_221(iParam0);
			switch (iVar3)
			{
				case 581819093:
					return -1202860612;
				case -1220302226:
					return 703663141;
				case -839878969:
					return 1534808110;
				case -360730635:
					return -742985447;
				case 687859577:
					return -331451824;
				case 1202375449:
					return 1344816618;
				case -1891229662:
					return 597768834;
				case -668333238:
					return -120359954;
				case 99378894:
					return -290258665;
				default:
					break;
			}
			break;
	}
	return 176656832;
}

int func_658(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	iVar2 = func_986(iParam0);
	iVar3 = func_987(iParam0);
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == 176656832)
		{
			Global_40.f_4283.f_6[iVar0] = iParam0;
			Global_40.f_4283.f_6[iVar0]->f_2 = uParam1;
			Global_40.f_4283.f_6[iVar0]->f_3 = iVar3;
			if (iParam3 > 0)
			{
				iVar1 = func_414();
				func_682(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_988(iParam0, 1);
			if (func_989(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_990(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_991(1, iParam0);
				}
				else
				{
					func_992(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_659(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 68:
			*iParam1 = 35;
			return 70;
		case 76:
			*iParam1 = 35;
			return 70;
		case 70:
			*iParam1 = 35;
			return 70;
		case 73:
			*iParam1 = 35;
			return 70;
		case 19:
			*iParam1 = 25;
			return 50;
		case 21:
			*iParam1 = 35;
			return 70;
		case 60:
			*iParam1 = 35;
			return 70;
		case 61:
			*iParam1 = 35;
			return 70;
		case 62:
			*iParam1 = 35;
			return 70;
		case 63:
			*iParam1 = 35;
			return 70;
		case 64:
			*iParam1 = 35;
			return 70;
		case 65:
			*iParam1 = 35;
			return 70;
		case 66:
			*iParam1 = 35;
			return 70;
		case 67:
			*iParam1 = 35;
			return 70;
		case 32:
			*iParam1 = 35;
			return 70;
		case 48:
			*iParam1 = 35;
			return 70;
		case 49:
			*iParam1 = 35;
			return 70;
		case 47:
			*iParam1 = 30;
			return 60;
		case 58:
			*iParam1 = 30;
			return 60;
		case 27:
			*iParam1 = 30;
			return 60;
		case 29:
			*iParam1 = 40;
			return 100;
		case 30:
			*iParam1 = 50;
			return 100;
		case 33:
			*iParam1 = 30;
			return 60;
		case 23:
			*iParam1 = 30;
			return 60;
		case 10:
			*iParam1 = 30;
			return 60;
		case 5:
			*iParam1 = 45;
			return 60;
		case 11:
			*iParam1 = 35;
			return 70;
		case 9:
			*iParam1 = 45;
			return 70;
		case 15:
			*iParam1 = 15;
			return 35;
		case 35:
			*iParam1 = 50;
			return 70;
		case 8:
			*iParam1 = 50;
			return 100;
		case 36:
			*iParam1 = 40;
			return 80;
		case 22:
			*iParam1 = 25;
			return 45;
		case 39:
		case 41:
		case 42:
		case 43:
			*iParam1 = 20;
			return 40;
	}
	return 120;
}

int func_660(int iParam0, int iParam1, int iParam2)
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

int func_661(int iParam0, int iParam1)
{
	*iParam1 = 0;
	switch (iParam0)
	{
		case 55:
			*iParam1 = 45;
			return 75;
		case 60:
			*iParam1 = 0;
			return 0;
		case 74:
			*iParam1 = 45;
			return 75;
		case 119:
			*iParam1 = 45;
			return 75;
		case 84:
			*iParam1 = 45;
			return 75;
		case 85:
			*iParam1 = 45;
			return 75;
		case 106:
			*iParam1 = 20;
			return 35;
		case 107:
			*iParam1 = 20;
			return 35;
		case 8:
			*iParam1 = 45;
			return 75;
		case 9:
			*iParam1 = 45;
			return 75;
		case 10:
			*iParam1 = 45;
			return 75;
		case 98:
			*iParam1 = 30;
			return 50;
		case 82:
			*iParam1 = 30;
			return 50;
		case 83:
			*iParam1 = 30;
			return 50;
		case 99:
			*iParam1 = 30;
			return 50;
		case 138:
			*iParam1 = 30;
			return 50;
		case 139:
			*iParam1 = 30;
			return 50;
		case 140:
			*iParam1 = 30;
			return 50;
		case 141:
			*iParam1 = 30;
			return 50;
		case 142:
			*iParam1 = 30;
			return 50;
		case 21:
			*iParam1 = 30;
			return 50;
		case 136:
			*iParam1 = 30;
			return 50;
		case 137:
			*iParam1 = 40;
			return 80;
		case 124:
			*iParam1 = 30;
			return 50;
		case 125:
			*iParam1 = 30;
			return 50;
		case 127:
			*iParam1 = 30;
			return 50;
		case 128:
			*iParam1 = 30;
			return 50;
		case 131:
			*iParam1 = 30;
			return 50;
		case 133:
			*iParam1 = 30;
			return 50;
		case 105:
			*iParam1 = 30;
			return 50;
		case 89:
			*iParam1 = 30;
			return 50;
		case 93:
			*iParam1 = 30;
			return 50;
		case 75:
			*iParam1 = 30;
			return 50;
		case 5:
			*iParam1 = 50;
			return 100;
		case 6:
			*iParam1 = 30;
			return 50;
		case 77:
			*iParam1 = 30;
			return 50;
		case 78:
			*iParam1 = 30;
			return 50;
		case 30:
			*iParam1 = 30;
			return 50;
		case 31:
			*iParam1 = 30;
			return 50;
		case 32:
			*iParam1 = 30;
			return 50;
		case 33:
			*iParam1 = 30;
			return 50;
		case 34:
			*iParam1 = 30;
			return 50;
		case 35:
			*iParam1 = 30;
			return 50;
		case 36:
			*iParam1 = 30;
			return 50;
		case 24:
			*iParam1 = 30;
			return 50;
		case 25:
			*iParam1 = 30;
			return 50;
		case 26:
			*iParam1 = 30;
			return 50;
		case 27:
			*iParam1 = 30;
			return 50;
		case 28:
			*iParam1 = 30;
			return 50;
		case 66:
			*iParam1 = 30;
			return 50;
		case 67:
			*iParam1 = 50;
			return 100;
		case 146:
			*iParam1 = 30;
			return 50;
		case 38:
			*iParam1 = 30;
			return 45;
		case 39:
			*iParam1 = 30;
			return 45;
		case 40:
			*iParam1 = 30;
			return 45;
		case 41:
			*iParam1 = 30;
			return 45;
		case 42:
			*iParam1 = 30;
			return 45;
		case 43:
			*iParam1 = 30;
			return 45;
		case 44:
			*iParam1 = 30;
			return 45;
		case 45:
			*iParam1 = 30;
			return 45;
		case 46:
			*iParam1 = 30;
			return 45;
		case 47:
			*iParam1 = 30;
			return 45;
		case 48:
			*iParam1 = 30;
			return 45;
		case 49:
			*iParam1 = 30;
			return 45;
		case 50:
			*iParam1 = 30;
			return 45;
		case 51:
			*iParam1 = 30;
			return 45;
		case 112:
			*iParam1 = 10;
			return 20;
		case 113:
			*iParam1 = 25;
			return 45;
		case 114:
			*iParam1 = 10;
			return 20;
		case 59:
			*iParam1 = 15;
			return 35;
		case 61:
			*iParam1 = 15;
			return 35;
		case 97:
			*iParam1 = 15;
			return 35;
		case 94:
			*iParam1 = 20;
			return 30;
		case 0:
			*iParam1 = 45;
			return 75;
		case 115:
			*iParam1 = 30;
			return 60;
	}
	return 120;
}

bool func_662(int iParam0)
{
	switch (iParam0)
	{
		case 57:
		case 125:
		case 150:
			return true;
	}
	return false;
}

int func_663(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

bool func_664()
{
	if (func_237() != -1)
	{
		return false;
	}
	if (!func_758())
	{
		return false;
	}
	if (!func_675((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_675((*Global_1835011)[2]->f_1, 1) && func_675((*Global_1347702)[120]->f_15, 1)) && !func_675((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_675((*Global_1835011)[37]->f_1, 1) && !func_675((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_675((*Global_1835011)[57]->f_1, 1) && !func_675((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_675((*Global_1835011)[26]->f_1, 1) && !func_675((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_675((*Global_1835011)[62]->f_1, 1) && func_675((*Global_1835011)[63]->f_1, 1)) && !func_675((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_675((*Global_1835011)[75]->f_1, 1) && !func_675((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_675((*Global_1835011)[76]->f_1, 1) && !func_675((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_675((*Global_1835011)[40]->f_1, 1) && func_675((*Global_1835011)[41]->f_1, 1)) && !func_675((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_675((*Global_1835011)[62]->f_1, 1) && func_675((*Global_1835011)[63]->f_1, 1)) && !func_675((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_675((*Global_1835011)[65]->f_1, 1) && func_675((*Global_1835011)[66]->f_1, 1)) && !func_675((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_665()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_993(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_666(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	if (!func_994(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_995(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_996(iParam0, bParam2);
	iVar2 = 0;
	if (func_639(iParam0, 0, 0) == 0)
	{
		if (func_997(iParam0))
		{
			iVar5 = func_998(iParam0);
			iVar6 = func_999(iVar5);
			iVar7 = func_1000(iVar6) + 1;
			func_1001(iVar5);
			if (func_1002(38))
			{
				func_673(483, 0);
			}
			else
			{
				func_673(482, 0);
			}
			if (iVar7 == func_1003(iVar6))
			{
				func_666(func_1004(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_758() && func_1005(4))
				{
					if (func_758() && (func_1006(38) || func_1002(38)))
					{
						func_1008(38, func_1004(iVar6), 0, 0, func_1007(), 0, -1, 0);
						func_1009(2);
					}
					else
					{
						func_1008(38, func_1004(iVar6), 0, 0, func_1007(), 0, -1, 0);
						func_1009(1);
					}
				}
			}
			else if (func_758() && func_1005(4))
			{
				if (func_758() && (func_1006(38) || func_1002(38)))
				{
					func_1008(38, 0, 0, 0, func_1007(), 0, -1, 0);
					func_1009(2);
				}
				else
				{
					func_1008(38, 0, 0, 0, func_1007(), 0, -1, 0);
					func_1009(1);
				}
			}
			if (func_758() && func_1005(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_758() && (func_1006(38) || func_1002(38)))
					{
						func_1010(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_1010(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_637(iParam0) == -1037537535)
	{
		if ((!func_961(iParam0, 866047851) && !func_961(iParam0, -1979000645)) && !func_961(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_966(iParam0, 8388608) && !func_944(28))
	{
		func_1011(28);
	}
	if (!bVar3)
	{
		if (func_961(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_633(iParam0) == -1447088266)
			{
				iVar1 = func_1013(func_1012(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_237() == -1)
					{
						func_1014(iVar1);
					}
					if (func_645(0) && func_561(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_892(iParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				iVar1 = _get_ammo_type_for_weapon(iParam0);
				if (_is_ammo_valid(iVar1))
				{
					if (func_237() == -1)
					{
						func_1014(iParam0);
					}
					if (func_645(0) && func_561(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_892(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_637(iParam0) == -427144552)
		{
			if (!func_1015(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_637(iParam0) == 307971639 && func_1016(iParam0))
		{
			if (!func_1017(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_961(iParam0, 866047851))
		{
			func_1018(iParam0);
		}
		else if (func_961(iParam0, 2000026003))
		{
			func_1019(iParam0);
		}
		else if (func_961(iParam0, -103750053))
		{
			func_416(func_630(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_416(func_415(-717883113, 2091222383), iVar0);
		}
		else if (func_961(iParam0, -121341956) && !func_961(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_675((*Global_1835011)[4]->f_1, 1))
				{
					func_673(498, 0);
				}
			}
			if (func_961(iParam0, -2017733358) || func_961(iParam0, -1369131378))
			{
				func_1020(iParam0);
			}
		}
		else if (func_961(iParam0, -136654233))
		{
			if (func_961(iParam0, -1021472396))
			{
			}
		}
		else if (func_961(iParam0, -1466706512) && func_961(iParam0, 1147021565))
		{
			func_673(484, 0);
		}
		else if (func_961(iParam0, 1147021565) && func_961(iParam0, -524514947))
		{
		}
		else if (func_961(iParam0, 554195525))
		{
		}
		else if (func_961(iParam0, 589988438))
		{
			if (func_1021())
			{
				func_1022(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_961(iParam0, 787083290) && func_961(iParam0, 949916894))
		{
			func_1023(iParam0);
		}
		else if (func_961(iParam0, -1718133314))
		{
			func_1024(iParam0);
		}
		else if (func_961(iParam0, -1738650224))
		{
			func_1025(iParam0);
		}
		else if (func_961(iParam0, -1112814642) && func_961(iParam0, 949916894))
		{
			func_1026(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_961(iParam0, 1841149704))
		{
			func_1027();
		}
		else if (func_961(iParam0, 606799272))
		{
			func_1028(iParam0, iParam1);
			func_1029(iParam0);
		}
		else if (func_961(iParam0, -1112814642) && func_961(iParam0, -1697809989))
		{
			func_976(iParam0, 0, 0, 0);
		}
		else if (func_961(iParam0, -2017733358) || func_961(iParam0, -1369131378))
		{
			func_1020(iParam0);
		}
		else if (func_961(iParam0, -1921346699))
		{
			if (func_237() != -1)
			{
				return false;
			}
			func_1030(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_961(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_412(215778062, 1, 0))
					{
						func_666(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_412(670273567, 1, 0))
					{
						func_666(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_412(-967317137, 1, 0))
					{
						func_666(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_412(526074061, 1, 0))
					{
						func_666(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_412(-1045488665, 1, 0))
					{
						func_666(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_412(471514780, 1, 0))
					{
						func_666(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_961(iParam0, -839724752) && func_966(iParam0, 4))
		{
			if (!func_1002(42))
			{
				func_1031(iParam0);
			}
		}
		else if (func_961(iParam0, 1399091007))
		{
			func_1032(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_961(iParam0, 1248798204))
		{
			iVar8 = 0;
			switch (iParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				case -1421669656:
					iVar8 = -59585102;
					break;
				case -830181022:
					iVar8 = 1018123892;
					break;
				case 917695895:
					iVar8 = -1455768246;
					break;
				case -1580595448:
					iVar8 = -921879912;
					break;
				case 1309992709:
					iVar8 = 982182330;
					break;
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_666(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (iParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			case -1185145312:
				func_1011(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_1033(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_1034(&iVar9, 0))
				{
					func_561(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_237() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_1033(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_673(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_1035();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_1036();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_1037();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_1038();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_802();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_1039(499813453, 854119837, 0);
				func_1040(499813453, 0);
				func_1041(1);
				break;
			case 2127812557:
				func_1039(499813453, -1292544588, 0);
				func_1040(499813453, 0);
				func_1041(2);
				break;
			case 808991383:
				func_1039(499813453, -1003325394, 0);
				func_1040(499813453, 0);
				func_1041(4);
				break;
			case 1134518629:
				func_1039(666607663, -335460405, 0);
				func_1040(666607663, 0);
				func_1042(1);
				break;
			case 902940106:
				func_1039(666607663, 903797617, 0);
				func_1040(666607663, 0);
				func_1042(2);
				break;
			case -418174898:
				func_1039(666607663, 669728650, 0);
				func_1040(666607663, 0);
				func_1042(4);
				break;
			case -648114971:
				func_1039(-220219788, 1214120047, 0);
				func_1040(-220219788, 0);
				func_1043(1);
				break;
			case 211153747:
				func_1039(-220219788, 655769340, 0);
				func_1040(-220219788, 0);
				func_1043(2);
				break;
			case -32876996:
				func_1039(-220219788, 885316185, 0);
				func_1040(-220219788, 0);
				func_1043(4);
				break;
			case 1191437462:
				func_1039(218622660, -1491419385, 0);
				func_1040(218622660, 0);
				func_1044(1);
				break;
			case 1119149048:
				func_1039(218622660, 1809565830, 0);
				func_1040(218622660, 0);
				func_1044(2);
				break;
			case 506073827:
				func_1039(390004462, -628873767, 0);
				func_1040(390004462, 0);
				func_1045(1);
				break;
			case -1876986168:
				func_1039(390004462, -405421956, 0);
				func_1040(390004462, 0);
				func_1045(2);
				break;
			case 2142623221:
				func_1039(390004462, -1108972386, 0);
				func_1040(390004462, 0);
				func_1045(4);
				break;
			case 1508215381:
				func_1039(6410548, 1053716392, 0);
				func_1040(6410548, 0);
				func_1046(1);
				break;
			case -888935280:
				func_1039(6410548, 806507056, 0);
				func_1040(6410548, 0);
				func_1046(2);
				break;
			case -1252474566:
				func_1039(6410548, 1571925350, 0);
				func_1040(6410548, 0);
				func_1046(4);
				break;
			case -1465702449:
				func_1039(6410548, 1330352282, 0);
				func_1040(6410548, 0);
				func_1046(8);
				break;
			case -21093309:
				func_1047(242, func_968(-21093309), 0);
				break;
			case 204375141:
				func_1047(240, func_968(204375141), 0);
				break;
			case -417963070:
				func_1047(241, func_968(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1048(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1048(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1048(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1048(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1048(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_1048(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_673(488, 0);
				break;
			case 1613651027:
				func_673(491, 0);
				break;
			case -885810591:
				func_673(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_666(func_1049(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_666(func_1050(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_944(1))
				{
					func_673(487, 0);
				}
				break;
			case -898386032:
				func_673(486, 0);
				break;
			case -2035110427:
				if (func_237() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_673(496, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return false;
		}
		iVar10 = iParam0;
		func_1051(&iVar10);
		if (!func_1052(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_645(0))
		{
			return true;
		}
		if (func_637(iParam0) == -1037537535)
		{
			func_1053(iParam0);
		}
		if (func_961(iParam0, -1979000645))
		{
			func_1054(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_645(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_666(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_1055(iVar2, 0);
		}
	}
	Var35 = { func_642(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_1056(iParam0);
	if (fParam6 > 0f)
	{
		if (func_961(iParam0, -839724752))
		{
			func_1057(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_641(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_667(int iParam0)
{
	if (func_961(iParam0, 1989861793))
	{
		iVar0 = func_1058(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_1059(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_1060(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_1061(iVar14, iVar1);
					if (iVar15 != iParam0 && func_636(iVar15, 0))
					{
						if (func_1062(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_1063(iVar1);
				if (bVar13)
				{
					func_1064(iParam0);
				}
				else
				{
					func_673(306, 0);
				}
			}
		}
	}
}

void func_668()
{
	if (func_237() != -1)
	{
		return;
	}
	func_1065();
	func_1066();
	func_1067();
	func_1068();
	func_1069();
	func_1070();
	func_1071();
}

void func_669(int iParam0)
{
	func_413(iParam0, 1, 1, -142743235, 1);
	if (func_1072(iParam0))
	{
		func_1073(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_632(func_1074(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_1075(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_1076() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_1077(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_1077(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_1078(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_1078(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_1078(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_1078(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_1078(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_1078(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_1078(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_1078(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_1078(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_1079(iVar8, iVar0))
				{
					func_1080(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_1079(iVar8, iVar0))
		{
			func_1080(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
		}
		iVar0++;
	}
	if (bVar7)
	{
		iVar8 = 0;
		while (iVar8 < 39)
		{
			if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
			{
				*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
			{
				*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
				bVar3 = true;
			}
			if (bVar3)
			{
			}
			else
			{
				iVar8++;
			}
		}
	}
	else
	{
		if (iParam0 == &Global_1946804->f_1497.f_1[iVar8])
		{
			*Global_1946804->f_1497.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
		if (iParam0 == &Global_26796.f_627.f_1.f_1.f_1[iVar8])
		{
			*Global_26796.f_627.f_1.f_1.f_1[iVar8] = { *Global_1946804->f_1616.f_1[iVar8] };
		}
	}
	iVar1 = 0;
	while (iVar1 < 39)
	{
		*Global_1946804->f_1378.f_1[iVar1] = { *Global_1946804->f_1616.f_1[iVar1] };
		iVar1++;
	}
}

void func_670()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1079(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_1076() == -2125499975 || func_1076() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_1080(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_1080(&vVar2, iVar5, iVar0);
			}
		}
		iVar0++;
	}
	vVar2.x = -2018863109;
	vVar2.f_1 = 1530758430;
	if (&Global_1946804->f_57[iVar5] == &Global_26796.f_627.f_1.f_1.f_1[iVar5] || 0 == &Global_26796.f_627.f_1.f_1.f_1[iVar5])
	{
		*Global_26796.f_627.f_1.f_1.f_1[iVar5] = { vVar2 };
	}
}

void func_671()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_993(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_672(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "COMP_DUTCH";
		case 1:
			return "COMP_JOHN";
		case 2:
			return "COMP_JAVIER";
		case 3:
			return "COMP_BILL";
		case 4:
			return "COMP_UNCLE";
		case 5:
			return "COMP_HOSEA";
		case 6:
			return "COMP_MICAH";
		case 7:
			return "COMP_CHARLES";
		case 8:
			return "COMP_SEAN";
		case 9:
			return "COMP_LENNY";
		case 10:
			return "COMP_KIERAN";
		case 23:
			return "COMP_TRELAWNY";
		case 17:
			return "COMP_PEARSON";
		case 18:
			return "COMP_STRAUSS";
		case 13:
			return "COMP_ABIGAIL";
		case 14:
			return "COMP_JACK";
		case 16:
			return "COMP_MOLLY_OSHEA";
		case 19:
			return "COMP_SUSAN_GRIMSHAW";
		case 15:
			return "COMP_MARY_BETH";
		case 20:
			return "COMP_KAREN";
		case 22:
			return "COMP_TILLY";
		case 11:
			return "COMP_SADIE";
		case 24:
			return "COMP_CLEET";
		case 25:
			return "COMP_JOE";
		case 26:
			return "COMP_EAGLE_FLIES";
		case 12:
			if ((func_675((*Global_1835011)[59]->f_1, 1) || func_675((*Global_1347702)[1]->f_15, 1)) || func_228((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_979(403634348, 1))
			{
				return "COMP_CAIN";
			}
			return "COMP_DOG";
		case 21:
			if (bParam1)
			{
				return "COMP_SWANSON_S";
			}
			else
			{
				return "COMP_SWANSON";
			}
			break;
	}
	return "";
}

void func_673(int iParam0, bool bParam1)
{
	func_1081(iParam0, &iVar0, &iVar1);
	if (!func_1082(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1083(iVar0, iVar1);
}

void func_674(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_632(iParam0, 1);
	func_1084(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_1084(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_1085(17, iParam0, 0, 0, 0);
		}
	}
	if (func_237() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1084(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_26796.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_1084(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_675(int iParam0, bool bParam1)
{
	switch (func_301(iParam0))
	{
		case 5:
			return true;
		case 6:
			if (bParam1)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_676()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_993(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_677()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_993(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_678(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_886(iParam1, 1, 0) };
		iParam3 = func_952(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_1086(iParam3);
	return func_1033(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_679()
{
	return _unlock_is_unlocked(99890643);
}

void func_680(int iParam0)
{
	if (!func_307(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_visible(iVar0, true);
}

bool func_681(int iParam0, int iParam1)
{
	if (!func_1087(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_1088(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_1089(Global_40.f_9910[iParam1], 4);
}

void func_682(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_1090(*iParam0);
	iVar1 = func_1091(*iParam0);
	iVar2 = func_1092(*iParam0);
	iVar3 = func_912(*iParam0);
	iVar4 = func_1093(*iParam0);
	iVar5 = func_1094(*iParam0);
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
	iVar6 = func_1095(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1095(iVar1, iVar0);
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
	func_1096(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_683(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1087(iParam0))
	{
		return;
	}
	if (!func_1097(iParam1))
	{
		return;
	}
	if (func_1098(iParam1, 1))
	{
		return;
	}
	iVar0 = func_1088(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_681(iParam0, -1))
	{
		return;
	}
	else
	{
		func_1099(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_437(0, 0, 1))
		{
			func_713(0, 17);
		}
	}
}

void func_684()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_993(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_685()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_993(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_686()
{
	return _unlock_is_unlocked(-121456797);
}

void func_687()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_993(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_688()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_993(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_689()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_993(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_690()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_993(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_691()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_993(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_692()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_993(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_693(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_694(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

void func_695(int iParam0)
{
	if (func_491(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_882(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_882(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_696()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_993(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_697()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_993(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_698()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_993(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_699()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_993(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_700()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_993(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_701()
{
	if (func_1100() > 1)
	{
		func_1101();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_673(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_673(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_673(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_673(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_673(452, 1);
		}
	}
}

bool func_702(int iParam0)
{
	return func_1102(iParam0, 4, 1);
}

void func_703(int iParam0)
{
	func_1103(iParam0, 4, 1);
}

void func_704(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_651(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_705(int iParam0)
{
	if (func_491(32768))
	{
		return;
	}
	if (!func_427(iParam0))
	{
		return;
	}
	func_272(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_220(iParam0))
	{
		case 1:
			func_416(func_415(909007663, -587839005), 1);
			iVar0 = func_221(iParam0);
			func_416(func_651(-634848880), 1);
			switch (func_730(iVar0))
			{
				case 0:
					func_416(func_415(909007663, 1325140787), 1);
					break;
				case 1:
					func_416(func_415(909007663, 2101241783), 1);
					break;
				case 2:
					func_416(func_415(909007663, -1296936294), 1);
					break;
				case 3:
					func_416(func_415(909007663, -798388728), 1);
					break;
				case 4:
					func_416(func_415(909007663, -1787586531), 1);
					break;
				case 5:
					func_416(func_415(909007663, -1002834519), 1);
					break;
				case 6:
					func_416(func_415(909007663, -50600144), 1);
					break;
				case 7:
					func_416(func_415(909007663, -348503123), 1);
					break;
				case 8:
					func_416(func_415(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_416(func_415(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_416(func_415(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_221(iParam0);
			if (func_652((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_416(func_651(-634848880), 1);
			}
			if (func_652((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_652((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_416(func_415(909007663, -587839005), 1);
				}
				else
				{
					func_416(func_415(909007663, -2049243343), 1);
				}
			}
			if (func_652((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_731(iVar1))
				{
					case 0:
						func_416(func_415(909007663, 1325140787), 1);
						break;
					case 1:
						func_416(func_415(909007663, 2101241783), 1);
						break;
					case 2:
						func_416(func_415(909007663, -1296936294), 1);
						break;
					case 3:
						func_416(func_415(909007663, -798388728), 1);
						break;
					case 4:
						func_416(func_415(909007663, -1787586531), 1);
						break;
					case 5:
						func_416(func_415(909007663, -1002834519), 1);
						break;
					case 6:
						func_416(func_415(909007663, -50600144), 1);
						break;
					case 7:
						func_416(func_415(909007663, -348503123), 1);
						break;
					case 8:
						func_416(func_415(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_416(func_415(909007663, 532323983), 1);
				}
			}
			else if (func_652((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_652((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_652((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_416(func_415(909007663, 551192206), 1);
				}
				else
				{
					func_416(func_415(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_706()
{
	if (func_237() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (Global_1956575->f_4)
	{
		return;
	}
	if (!func_1104(64))
	{
		return;
	}
	else if (func_438(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_437(0, 0, 1) || func_1105()) || func_664())
	{
		return;
	}
	iVar0 = func_441();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_1106(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_178(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_178(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_1107(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_713(0, -1);
	}
	if (iVar2 > 0)
	{
		func_90("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_1108(1, 0);
	Global_1956575->f_4 = 1;
}

void func_707(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_491(32768))
	{
		return;
	}
	func_335(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
	if (bParam2)
	{
		if (!_unlock_is_unlocked(-843169622))
		{
			Global_1879514->f_12 = 1;
		}
		else
		{
			Global_1879514->f_12 = 0;
		}
		func_1109(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_708(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -1;
	}
	return func_1110(iParam0);
}

int func_709(int iParam0, int iParam1)
{
	if (!func_1111(iParam0))
	{
		return 0;
	}
	if (!func_758())
	{
		return 0;
	}
	if (!func_1112(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	if (iVar0 == -816321659 && Global_1572887->f_12 != -1)
	{
		return 0;
	}
	chal_add_goal_progress_int(iVar0, iVar1, iParam1);
	return 1;
}

int func_710(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar3 = iParam0;
	iVar4 = iParam1;
	if (Global_1572887->f_12 == -1)
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 100;
				iParam3 = get_hash_key(&((*Global_1835011)[iParam0]->f_8));
				break;
			case 2:
				iVar1 = 101;
				iVar2 = 170;
				break;
			case 3:
				iVar1 = 171;
				iVar2 = 190;
				break;
			case 4:
				iVar1 = 191;
				iVar2 = 230;
				break;
			case 5:
				iVar1 = 231;
				iVar2 = 260;
				break;
			case 6:
				iVar1 = 261;
				iVar2 = 290;
				break;
			case 7:
				iVar1 = 291;
				iVar2 = 370;
				break;
			case 8:
				iVar1 = 371;
				iVar2 = 570;
				iParam3 = get_hash_key(&((*Global_1347702)[iParam0]->f_3));
				break;
			case 9:
				iVar1 = 571;
				iVar2 = 650;
				break;
			case 11:
				iVar1 = 651;
				iVar2 = 750;
				break;
			case 10:
				return -1;
			case 12:
				return -1;
			default:
				return -1;
		}
	}
	else
	{
		switch (iParam2)
		{
			case 1:
				iVar1 = 1;
				iVar2 = 200;
				break;
			case 2:
				iVar1 = 201;
				iVar2 = 15700;
				break;
			case 4:
				iVar1 = 15701;
				iVar2 = 16200;
				break;
			case 12:
				iVar1 = 16201;
				iVar2 = 19200;
				break;
			case 10:
				iVar1 = 19201;
				iVar2 = 20000;
				break;
			case 8:
				return -1;
			case 7:
				return -1;
			case 6:
				return -1;
			default:
				return -1;
		}
	}
	if (iVar2 >= func_1113())
	{
		iVar2 = func_1113();
	}
	iVar5 = func_1114(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_450(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_450(iVar6) == 0)
			{
				return func_1115(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
		iVar1 = 751;
		iVar2 = 770;
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_450(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_450(iVar6) == 0)
			{
				return func_1115(iVar3, iVar4, iParam2, iVar0, iParam3);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == iVar5)
			{
				return iVar0;
			}
			iVar0++;
		}
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			if (&Global_1058888->f_498[iVar0] == 0)
			{
				return func_1115(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

char[] func_711(int iParam0)
{
	if (!func_427(iParam0))
	{
		return cVar0;
	}
	switch (func_220(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_310(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_221(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_710(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_712(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_1116();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_220(Global_1879514->f_1) == 1)
			{
				func_709(5, 1);
			}
			else if (func_220(Global_1879514->f_1) == 8 && (func_652((*Global_1347702)[func_221(Global_1879514->f_1)]->f_12, 1) || func_652((*Global_1347702)[func_221(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_709(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_713(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_492(&Global_0, 8);
	}
	if (!func_758() || func_237() != -1)
	{
		return;
	}
	func_492(&Global_0, 1);
}

bool func_714()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_715(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1117(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_716()
{
	return -1904156936;
}

bool func_717(int iParam0)
{
	if (!func_427(iParam0))
	{
		return false;
	}
	switch (func_220(iParam0))
	{
		case 1:
			iVar0 = func_221(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_221(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_718()
{
	return 166188472;
}

int func_719()
{
	return 2015838421;
}

int func_720()
{
	return 207908017;
}

var func_721(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_722(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

int func_723(int iParam0)
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

int func_724(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1898164->f_1[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_725(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 0)
	{
		return 0;
	}
	if (Global_1898164->f_162 == 1)
	{
		Global_1898164->f_162 = 0;
		*Global_1898164->f_1[0] = { Var0 };
		return 1;
	}
	*Global_1898164->f_1[iParam0] = { Var0 };
	Global_1898164->f_162 = (Global_1898164->f_162 - 1);
	func_792(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_726(int iParam0)
{
	iVar0 = func_1118(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

void func_727(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1119(iParam0);
	}
	else
	{
		func_1120(iParam0, iParam1);
	}
	func_1121();
}

void func_728(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1122(iParam0, iParam1, bParam2);
}

bool func_729()
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

int func_730(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 0;
		case 5:
		case 6:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 15:
		case 25:
			return 1;
		case 12:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 26:
		case 53:
			return 2;
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 37:
			return 3;
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
			return 4;
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
			return 5;
		case 59:
			return 6;
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
			return 7;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
			return 8;
	}
	return -1;
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 120:
			return 0;
		case 0:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 66:
		case 94:
		case 97:
		case 98:
		case 112:
		case 113:
		case 114:
			return 1;
		case 3:
		case 4:
		case 5:
		case 37:
		case 67:
		case 76:
		case 134:
			return 2;
		case 115:
		case 116:
			return 3;
		case 58:
		case 64:
		case 68:
		case 82:
		case 83:
			return 5;
		case 1:
		case 2:
		case 8:
		case 9:
		case 10:
		case 96:
			return 8;
	}
	return -1;
}

void func_732(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_733()
{
	fVar0 = get_random_float_in_range(0f, 1f);
	if (fVar0 < 0.01f)
	{
		return 19;
	}
	if (fVar0 < 0.16f)
	{
		return 15;
	}
	if (fVar0 < 0.31f)
	{
		return 17;
	}
	if (fVar0 < 0.46f)
	{
		return 16;
	}
	if (fVar0 < 0.61f)
	{
		return 18;
	}
	return 0;
}

int func_734(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 29:
			return 27;
		case 49:
			return 28;
		case 30:
			return 29;
		case 31:
			return 30;
		case 32:
			return 31;
		case 120:
			return 32;
		case 124:
			return 33;
		case 125:
			return 34;
		case 33:
			return 35;
		case 83:
			return 40;
		case 35:
			return 42;
		case 36:
			return 43;
		case 89:
			return 44;
		case 115:
			return 46;
		case 37:
			return 47;
		case 38:
			return 48;
		case 39:
			return 49;
		case 40:
			return 50;
		case 50:
			return 51;
		case 42:
			return 52;
		case 52:
			return 53;
		case 43:
			return 54;
		case 45:
			return 57;
		case 48:
			return 61;
		case 56:
			return 63;
		case 57:
			return 64;
		case 58:
			return 65;
		case 59:
			return 66;
		case 60:
			return 67;
		case 61:
			return 68;
		case 126:
			return 69;
		case 127:
			return 70;
		case 62:
			return 71;
		case 77:
			return 72;
		case 64:
			return 73;
		case 65:
			return 74;
		case 67:
			return 76;
		case 68:
			return 78;
		case 69:
			return 79;
		case 70:
			return 80;
		case 71:
			return 81;
		case 72:
			return 82;
		case 75:
			return 84;
		case 76:
			return 85;
		case 117:
			return 86;
		case 78:
			return 87;
		case 79:
			return 88;
		case 80:
			return 90;
		case 81:
			return 91;
		case 82:
			return 92;
		case 87:
			return 96;
		case 88:
			return 97;
		case 91:
			return 98;
		case 92:
			return 99;
		case 93:
			return 100;
		case 94:
			return 101;
		case 95:
			return 102;
		case 96:
			return 103;
		case 97:
			return 104;
		case 98:
			return 105;
		case 99:
			return 106;
		case 100:
			return 107;
		case 104:
			return 114;
		case 105:
			return 115;
		case 107:
			return 118;
		case 109:
			return 119;
		case 110:
			return 120;
		case 111:
			return 121;
		case 112:
			return 122;
		case 128:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_735(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

bool func_736(int iParam0)
{
	if (!func_427(iParam0))
	{
		return false;
	}
	switch (func_220(iParam0))
	{
		case 1:
			switch (func_221(iParam0))
			{
				case 9:
				case 18:
				case 23:
				case 24:
				case 26:
				case 33:
				case 34:
				case 37:
				case 38:
				case 39:
				case 40:
				case 41:
				case 42:
				case 43:
				case 47:
				case 59:
				case 66:
					return true;
			}
			break;
		case 8:
			switch (func_221(iParam0))
			{
				case 2:
				case 58:
				case 62:
				case 96:
					return true;
			}
			break;
	}
	return false;
}

void func_737(int iParam0)
{
	iVar2 = func_960(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_633(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1124(func_1123(iParam0), 6);
}

void func_738(int iParam0)
{
	iVar2 = func_960(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_633(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1125(func_1123(iParam0), 6);
}

Vector3 func_739(int iParam0)
{
	switch (iParam0)
	{
		case 26:
			vVar0 = { -1763.9f, -385.1f, 156.74f };
			break;
		case 105:
			vVar0 = { 1226.5f, -1294.9f, 75.9f };
			break;
	}
	if (func_120(vVar0))
	{
	}
	return vVar0;
}

void func_740(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	if (!func_199(iParam0))
	{
		return;
	}
	if (!func_819(iParam1))
	{
		return;
	}
	if (func_120(vParam3))
	{
		return;
	}
	if (func_120(vParam6))
	{
		return;
	}
	Global_1392388->f_10[iParam0]->f_1 = iParam1;
	Global_1392388->f_10[iParam0] = iParam2;
	Global_1392388->f_10[iParam0]->f_2 = { vParam3 };
	Global_1392388->f_10[iParam0]->f_5 = { vParam6 };
	if (func_24(iParam0))
	{
		Global_1392388->f_10[iParam0]->f_8 = func_710(3, iParam0, 2, func_1126(iParam0));
	}
}

bool func_741(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_742(int iParam0, char* sParam1, var uParam2, bool bParam3, var uParam4, bool bParam5)
{
	if (!func_53(iParam0, 1))
	{
		return;
	}
	if (bParam5)
	{
		iVar0 = 8;
	}
	else
	{
		iVar0 = 1032;
	}
	task_follow_waypoint_recording_at_offset(iParam0, sParam1, uParam2, 0, iVar0, -1, bParam5);
}

int func_743(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_412(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	_0x48e4d50f87a96aa5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			iVar25 = &Var1.f_1[iVar24];
			if (func_636(iVar25, 0) && func_961(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

int func_744(struct<4> Param0, var uParam4, var uParam5)
{
	if (Param0.f_3 == 13)
	{
		return -1758092337;
	}
	iVar0 = get_random_int_in_range(0, 4);
	if (iVar0 == 3)
	{
		return -2108769355;
	}
	return -1758092337;
}

bool func_745()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_746()
{
	switch (get_random_int_in_range(0, 4))
	{
		case 0:
			iVar0 = 997958153;
			break;
		case 1:
			iVar0 = 356361174;
			break;
		case 2:
			iVar0 = -1771663379;
			break;
		case 3:
			iVar0 = -311956671;
			break;
	}
	return func_1127(iVar0, 1);
}

void func_747(var uParam0)
{
	func_1128(uParam0, 0);
	func_1129(uParam0, 0);
	func_748(uParam0, 1);
	func_753(uParam0, 1);
	func_1130(uParam0, 0);
	func_1131(uParam0, 1);
	func_1132(uParam0, 1, 1, 1);
}

void func_748(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1133(&(uParam0->f_1), 256);
	}
	else
	{
		func_1134(&(uParam0->f_1), 256);
	}
}

void func_749(var uParam0, int iParam1)
{
	uParam0->f_18 = iParam1;
}

void func_750(var uParam0, float fParam1)
{
	uParam0->f_23 = fParam1;
}

void func_751(var uParam0, int iParam1)
{
	uParam0->f_21 = iParam1;
}

void func_752(var uParam0, float fParam1)
{
	uParam0->f_17 = fParam1;
}

void func_753(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1134(uParam0, 16);
	}
	else
	{
		func_1133(uParam0, 67108864);
		func_1133(uParam0, 16);
	}
}

void func_754(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1134(uParam0, 64);
	}
	else
	{
		func_1133(uParam0, 64);
	}
}

void func_755(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1134(uParam0, 1024);
	}
	else
	{
		func_1133(uParam0, 1024);
	}
}

bool func_756(var uParam0, int iParam1, char* sParam2)
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (are_strings_equal(sParam2, &((*uParam0)[iVar1]->f_1)))
		{
			(*uParam0)[iVar1] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97] = iParam1;
			StringCopy(&((*uParam0)[uParam0->f_97]->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

int func_757(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

bool func_758()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_759(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_776(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_760(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_766(iParam0))
	{
		return;
	}
	iVar0 = func_765(iParam0);
	func_1135(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_1136(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1137(iParam0, 0);
	func_1138(iParam0);
}

void func_761(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(Global_40.f_1095.f_1[iParam0], "", 64);
	Global_40.f_1095.f_1[iParam0]->f_8 = 0;
	Global_40.f_1095.f_1[iParam0]->f_9 = 0;
	Global_40.f_1095.f_1[iParam0]->f_10 = 0;
	Global_40.f_1095.f_1[iParam0]->f_11 = 0;
	Global_40.f_1095.f_1[iParam0]->f_12 = -1;
	Global_40.f_1095.f_1[iParam0]->f_13 = -15;
	Global_40.f_1095.f_1[iParam0]->f_14 = 0;
	func_1139(&Var0);
	func_1140(iParam0, Var0);
	func_1141(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1142(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1143(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1144(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1145(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1146(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1147(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1148(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1149(&(Global_40.f_1095.f_1[iParam0]->f_425));
	Global_40.f_1095.f_1[iParam0]->f_427 = { 0f, 0f, 0f };
	Global_40.f_1095.f_1[iParam0]->f_430 = 0f;
	Global_40.f_1095.f_1[iParam0]->f_431 = -1;
	Global_40.f_1095.f_1[iParam0]->f_432 = -1;
	Global_40.f_1095.f_1[iParam0]->f_433 = 0;
	Global_40.f_1095.f_1[iParam0]->f_434 = 0;
	Global_40.f_1095.f_1[iParam0]->f_435 = 0;
	(*Global_1900383)[iParam0] = 0;
	(*Global_1900383)[iParam0]->f_1 = 0;
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
	(*Global_1900383)[iParam0]->f_19 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_22 = 0f;
	(*Global_1900383)[iParam0]->f_23 = 0;
	(*Global_1900383)[iParam0]->f_24 = 0;
	(*Global_1900383)[iParam0]->f_25 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_26 = 0;
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	(*Global_1900383)[iParam0]->f_27 = 0;
	(*Global_1900383)[iParam0]->f_28 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_31 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_34 = 0f;
	(*Global_1900383)[iParam0]->f_35 = 0;
	(*Global_1900383)[iParam0]->f_36 = 0;
	(*Global_1900383)[iParam0]->f_37 = 0;
	(*Global_1900383)[iParam0]->f_38 = { 0f, 0f, 0f };
	(*Global_1900383)[iParam0]->f_41 = 0;
	(*Global_1900383)[iParam0]->f_42 = 0;
	(*Global_1900383)[iParam0]->f_43 = 0;
	(*Global_1900383)[iParam0]->f_44 = -1;
}

void func_762(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_763(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

int func_764(vector3 vParam0)
{
	return func_1150(_get_map_zone_at_coords(vParam0, 10));
}

int func_765(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0];
}

bool func_766(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (does_entity_exist(Global_1900383[iParam0]))
	{
		return true;
	}
	return false;
}

bool func_767(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_766(iParam0))
	{
		return false;
	}
	iVar0 = func_765(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

bool func_768(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_766(iParam0))
	{
		return false;
	}
	iVar0 = func_765(iParam0);
	if (is_entity_dead(iVar0))
	{
		return false;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return true;
	}
	return false;
}

void func_769(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_766(iParam0))
	{
		return;
	}
	iVar0 = func_765(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_770(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_1151(iParam0);
	func_1151(iParam0);
	func_1152(iParam0, iParam1);
	func_1153(iParam0, iParam1);
	func_1154(iParam0, iParam1);
	iVar1 = func_765(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1155(iVar1);
		}
		if (iParam0 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			uVar2 = _0x227b06324234fb09(iVar0, iVar1);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar1)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar1)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	iVar3 = func_765(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_1155(iVar3);
		}
		if (iParam1 == 0)
		{
			_0x8fbf9edb378ccb8c(iVar0, iVar3);
		}
		else if (iParam1 == 1)
		{
			uVar4 = _0x227b06324234fb09(iVar0, iVar3);
		}
		else
		{
			if (_0x46fa0ae18f4c7fa9(iVar0) == iVar3)
			{
				_0x8fbf9edb378ccb8c(iVar0, 0);
			}
			if (_0xd3f7445cea2e5035(iVar0) == iVar3)
			{
				_0x227b06324234fb09(iVar0, 0);
			}
		}
	}
	func_1156();
}

bool func_771()
{
	iVar0 = func_1157();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_772()
{
	iVar0 = func_1157();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1158(0);
}

void func_773(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

int func_774(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_9;
}

int func_775(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_8;
}

int func_776(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_40.f_1095.f_1[iParam0]->f_14;
}

void func_777(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1159(&iVar0, &iVar1, &iVar2);
	func_1160(iParam0, iVar0);
	func_1161(iParam0, iVar1);
	func_1162(iParam0, iVar2);
	func_1163(iParam0, 1);
	func_1164(iParam0, 1);
}

void func_778(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1165(iParam0, 1);
}

void func_779(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_19 = { vParam1 };
	(*Global_1900383)[iParam0]->f_22 = uParam4;
}

bool func_780(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1166(iParam0, 1);
}

struct<2> func_781(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1167(iParam0, &uVar2))
	{
	}
	if (!func_1168(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_782()
{
	if (func_1169(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1169(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1169(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1169(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1169(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1169(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_783(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return;
	}
	func_1170(iParam0);
	func_1171(iParam0, uParam1);
	func_1172(iParam0);
	func_1173(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1174(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

bool func_784(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (*Global_1900383)[iParam0]->f_2;
}

void func_785(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 1;
	(*Global_1900383)[iParam0]->f_3 = get_id_of_this_thread();
}

void func_786(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_787(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_1138(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_1138(iParam0);
	}
}

int func_787(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_3;
}

int func_788()
{
	return Global_40.f_11095.f_35;
}

int func_789(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_790(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

void func_791(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 == 0)
	{
		*Global_1898164->f_1[iParam1] = { Var0 };
	}
	else
	{
		Global_1898164->f_1[iParam1] = iParam0;
		Global_1898164->f_1[iParam1]->f_1 = func_450(iParam0);
		func_1175(Global_1898164->f_1[iParam1]->f_1, &(Global_1898164->f_1[iParam1]->f_3), &(Global_1898164->f_1[iParam1]->f_4), &(Global_1898164->f_1[iParam1]->f_2));
	}
}

void func_792(int iParam0, int iParam1)
{
	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1176((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1176(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_427(&(Global_1898164->f_1[0])))
	{
		func_433(&(Global_1898164->f_1[0]), 3);
	}
}

void func_793(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 153)
	{
		if (Global_1914319->f_15936[iVar0]->f_5)
		{
			Global_1914319->f_15936[iVar0]->f_5 = 0;
		}
		func_1177(Global_1914319->f_15936[iVar0], bParam0);
		iVar0++;
	}
}

void func_794(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_1177(Global_1934051->f_23[iVar0], bParam0);
		iVar0++;
	}
}

void func_795(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 33)
	{
		func_1177(Global_1899778->f_34[iVar0], bParam0);
		(*Global_1899778)[iVar0] = 0;
		iVar0++;
	}
}

void func_796(bool bParam0)
{
	func_1177(Global_1956614, bParam0);
}

void func_797(bool bParam0)
{
	func_1177(&(Global_1415412->f_3), bParam0);
}

void func_798(bool bParam0)
{
	if (func_1178(Global_1934051->f_33))
	{
		func_1179(Global_1934051->f_33, 7148155);
	}
	func_1177(&(Global_1934051->f_33), bParam0);
}

void func_799(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar1 = func_1181(func_1180(iVar0));
		if (iVar1 != 0)
		{
			func_1179(Global_1934051[iVar0], iVar1);
		}
		if ((*Global_1934051)[iVar0]->f_1)
		{
			(*Global_1934051)[iVar0]->f_1 = 0;
		}
		func_1177((*Global_1934051)[iVar0], bParam0);
		iVar0++;
	}
}

void func_800(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_36308)
	{
		func_1182(iVar0, -1);
		func_1183(iVar0, 0);
		func_1184(iVar0, 0);
		if (does_blip_exist(&(Global_36308[iVar0])))
		{
			if (bParam0)
			{
				set_radar_zoom(&(Global_36308[iVar0]));
			}
			remove_blip(Global_36308[iVar0]);
		}
		iVar0++;
	}
}

void func_801(int iParam0, bool bParam1, bool bParam2)
{
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_6, bParam1);
	_databinding_write_data_bool(Global_1955569->f_5.f_2[iParam0]->f_5, bParam2);
}

void func_802()
{
	func_1185();
	func_1186();
	func_1187();
}

void func_803(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(2, &Var0, 2, 2);
}

void func_804(var uParam0, var uParam1)
{
	Var0 = uParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(5, &Var0, 2, 2);
}

void func_805()
{
	if (func_237() != -1)
	{
		return;
	}
	if (!func_758())
	{
		return;
	}
	func_1188(&(Global_40.f_40));
}

void func_806()
{
	iVar0 = 0;
	while (iVar0 < Global_40.f_11029)
	{
		if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
		{
			Global_40.f_11029[iVar0]->f_1 = { _0x1e8a921112891651((*Global_1425371)[iVar0]->f_1) };
			Global_40.f_11029[iVar0]->f_4 = _0x67995318f5faa496((*Global_1425371)[iVar0]->f_1);
		}
		iVar0++;
	}
}

bool func_807()
{
	return !func_120(Global_1310720->f_1);
}

void func_808(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_809()
{
	return Global_40.f_4283.f_1;
}

int func_810()
{
	return Global_40.f_4283.f_4;
}

void func_811(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_1189())
	{
		fVar0 = func_1190(vParam0, Global_40.f_6);
	}
	if (func_1191(33554432))
	{
		if (!func_460(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1190(vParam0, Global_40.f_2);
		}
	}
	if (fVar1 > 150f && fVar0 > 150f)
	{
		*uParam3 = { Global_36 };
		*uParam4 = 6;
		return;
	}
	if (fVar0 < fVar1)
	{
		*uParam3 = { Global_40.f_6 };
		*uParam4 = 1;
	}
	else
	{
		*uParam3 = { Global_40.f_2 };
		*uParam4 = 3;
	}
}

void func_812()
{
	if (!func_438(&Global_1935630, 8192))
	{
		return;
	}
	if (func_491(32768))
	{
		return;
	}
	func_271(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1192(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_1192(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_1192(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_1192(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_1192(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_1192(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_1192(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_1192(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_1192(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1193(10f, to_float(func_1192(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1193(5f, to_float(func_1192(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1193(25f, to_float(func_1194(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1193(1f, to_float(func_1194(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1193(6f, to_float(func_1194(64058978)))));
	fVar0 = (fVar0 + (3f * func_1193(1f, to_float(func_1194(795577402)))));
	iVar1 = func_1195();
	fVar0 = (fVar0 + (0.1111111f * func_1193(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1193(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1193(to_float(20), to_float(func_1197()))));
	if (func_1198(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1198(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1198(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1198(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_1198(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1196(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1193(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1193(5f, to_float(func_1194(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1193(5f, to_float(func_1192(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1199(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1199(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1199(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1199(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1199(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1199(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_1200(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1193((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1193(1f, to_float(func_1201(-2116919750)))));
	fVar5 = to_float(func_1202());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1193(1f, to_float(func_1192(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1193(1f, to_float(func_1192(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1193(1f, to_float(func_1192(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1193(1f, to_float(func_1192(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1193(5f, to_float(func_1194(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1193(1f, to_float(func_1194(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1193(1f, to_float(func_1194(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1193(1f, to_float(func_1194(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1193(1f, to_float(func_1192(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1193(1f, to_float(func_1192(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1193(1f, to_float(func_1192(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1193(1f, to_float(func_1192(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1193(1f, to_float(func_1192(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1193(1f, to_float(func_1192(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1193(1f, to_float(func_1192(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1193(1f, to_float(func_1192(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1193(1f, to_float(func_1192(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1193(1f, to_float(func_1192(978382515, 1015970717)))));
	Var6 = { func_651(1215094015) };
	fVar8 = func_1203(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_427(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_427(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_429(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_1204(Global_1898330[iVar61]);
				}
				else
				{
					func_1205(iVar61, 0);
					if (func_220(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_428(Global_1898330[iVar61]);
						iVar60++;
						if (iVar60 >= 50)
						{
						}
						else
						{
							iVar61++;
						}
						if (iVar60 < 50)
						{
							iVar63 = 0;
							while (iVar63 < Global_40.f_450)
							{
								if (&Global_40.f_450[iVar63] > -1 && &Global_40.f_450[iVar63] < 200)
								{
									iVar9[iVar60] = func_428((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
									iVar60++;
									if (iVar60 >= 50)
									{
									}
									else
									{
										iVar63++;
									}
									if (fVar0 > fVar8)
									{
										_0x51ec204a6e5b5a1a(func_428(&Global_1898437), &iVar9);
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

bool func_813(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_814(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_960(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_815(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, uParam0))
	{
		return false;
	}
	return true;
}

bool func_816(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_960(0);
	*uParam1 = { func_890(iParam0, func_971(0), iParam3, 0) };
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (!_0x025a1b1fb03fbf61(iVar0, uParam1, uParam2, 22, 1))
	{
		return false;
	}
	return true;
}

int func_817(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0x42a2f33a1942e865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_818()
{
	return Global_1894899->f_2;
}

bool func_819(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_820(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1206(vParam0);
	iVar1 = -1;
	if (Global_1894882[iVar0] > 0)
	{
		iVar2 = (Global_1894882[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1894065)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1888801)[iVar4]->f_3))
			{
				if (_0xf256a75210c5c0eb((*Global_1888801)[iVar4]->f_3, vParam0))
				{
					switch ((*Global_1888801)[iVar4]->f_20)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

float func_821(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = get_entity_speed(iParam1);
	vVar1 = { get_offset_from_entity_in_world_coords(iParam1, vParam2) };
	fVar4 = vdist(get_entity_coords(iParam0, true, false), vVar1);
	fVar6 = 1f;
	fVar7 = 20f;
	if (fVar0 > 10f)
	{
		fVar5 = 6.2f;
	}
	else
	{
		fVar5 = 4.2f;
	}
	if (fVar4 > fVar6)
	{
		fVar8 = (fVar4 - fVar6);
		fVar8 = (fVar8 / fVar7);
		if (fVar8 > 1f)
		{
			fVar8 = 1f;
		}
		if (fVar8 < 0f)
		{
			fVar8 = 0f;
		}
		if (func_1207(vVar1, iParam0))
		{
			fVar9 = func_552((fVar0 / fVar5), 2.5f, fVar8);
		}
		else
		{
			fVar9 = func_552((fVar0 / fVar5), 0f, fVar8);
		}
	}
	else
	{
		fVar9 = (fVar0 / fVar5);
	}
	if (fVar9 > 2.5f)
	{
		fVar9 = 2.5f;
	}
	if (fVar9 < 0f)
	{
		fVar9 = 0f;
	}
	return fVar9;
}

bool func_822(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam1, iVar0);
		if (!is_entity_dead(iVar1))
		{
			if (is_ped_facing_ped(iVar1, iParam0, 45f) && func_1208(iVar1, iParam0) < 4f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_823(int iParam0)
{
	if ((((iLocal_49 == 3 || iLocal_49 == 5) || iLocal_49 == 6) || iLocal_49 == 7) || iLocal_49 == 8)
	{
		if (func_87(iParam0, Global_36, 1) > 150f)
		{
			if (!func_831(iParam0, 0, &(Local_51.f_2069), &uVar0, 0, 0))
			{
				return true;
			}
		}
	}
	else if (iLocal_49 == 9)
	{
		if (!func_831(iParam0, 0, &(Local_51.f_2069), &uVar0, 0, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_824(var uParam0)
{
	if (_0xd89504d9d7d5057d(uParam0) && _0x1ecc76792f661cf5(uParam0))
	{
		return true;
	}
	return false;
}

void func_825(char* sParam0, bool bParam1, bool bParam2)
{
	stop_scripted_conversation(sParam0, bParam1, bParam2);
}

void func_826(int* iParam0, int iParam1, bool bParam2)
{
	if (!func_53(*iParam0, 1))
	{
		return;
	}
	if (is_ped_using_any_scenario(*iParam0))
	{
		_0x802092b07e3b1eea(*iParam0, Global_36, 3);
	}
	if (bParam2)
	{
		func_1209(*iParam0, 0, 0, 0);
	}
	else
	{
		task_combat_hated_targets(*iParam0, -1f);
	}
}

void func_827(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return;
	}
	iVar0 = func_1210(iParam2, iParam3);
	waypoint_recording_get_coord(func_194(iParam3), iVar0, &vVar1);
	if (get_ground_z_for_3d_coord(vVar1, &uVar4, false))
	{
		vVar1.f_2 = uVar4;
	}
	fVar5 = func_580(func_194(iParam3), vVar1);
	if (!func_53(uParam1->f_7, 0))
	{
		uParam1->f_7 = func_897(uParam1->f_8, vVar1, fVar5, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	}
	if (!func_53(uParam1->f_7, 0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(uParam1->f_7, false);
	set_ped_can_be_targetted(uParam1->f_7, false);
	set_ped_config_flag(uParam1->f_7, 145, true);
	if (func_314(129))
	{
		set_ped_config_flag(uParam1->f_7, 6, true);
	}
	set_entity_lod_dist(uParam1->f_7, 300);
}

void func_828(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	if (!does_entity_exist(uParam0->f_1))
	{
		return;
	}
	waypoint_recording_get_coord(func_194(iParam4), 1, &vVar0);
	if (!func_53(*uParam1, 0))
	{
		*uParam1 = func_897(uParam1->f_1, vVar0, 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
		if (uParam1->f_3)
		{
			func_898(*uParam1, uParam1->f_2);
		}
	}
	if (!func_53(*uParam1, 0))
	{
		return;
	}
	set_blocking_of_non_temporary_events(*uParam1, true);
	set_ped_relationship_group_hash(*uParam1, iParam3);
	set_ped_can_be_targetted(*uParam1, true);
	remove_all_ped_weapons(*uParam1, true, true);
	func_900(*uParam1, uParam1->f_9, -1, 3, 0, 0.9f, 1065353216, 0);
	func_911(*uParam1);
	if (func_15(uParam2, 65536))
	{
		set_ped_relationship_group_hash(*uParam1, 707888648);
		_0x819add5ef1742f47(*uParam1, 7);
		set_blocking_of_non_temporary_events(*uParam1, true);
	}
	if (func_314(129))
	{
		set_ped_config_flag(*uParam1, 6, true);
	}
	if (func_53(uParam1->f_7, 0))
	{
		_set_ped_on_mount(*uParam1, uParam1->f_7, -1, true);
	}
	_0x18ff3110cf47115d(*uParam1, 1, 0);
	set_entity_lod_dist(*uParam1, 300);
	set_ped_shoot_rate(*uParam1, 90);
	set_ped_combat_ability(*uParam1, 2);
	set_ped_accuracy(*uParam1, 40);
	_0x986f7a51ee3e1f92(*uParam1, 0);
	add_entity_to_audio_mix_group(*uParam1, "Robberies_Coach_Target_Group", 0f);
}

float func_829()
{
	if (iLocal_25 == 0)
	{
		return 30f;
	}
	return 30f;
}

Vector3 func_830(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.8f, 0f, 0f;
		case 1:
			return 0.4f, 0f, 0f;
		case 2:
			return -1.5f, 0f, 0f;
		case 3:
			return 1.5f, 0f, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_831(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	iVar0 = get_frame_count();
	if (iVar0 > uParam2->f_5)
	{
		func_1211(uParam2, 1, iVar0);
	}
	if (!Global_1935630->f_12 && !is_entity_dead(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_12 = fParam5;
		}
		else
		{
			uParam2->f_12 = vdist(Global_36, get_entity_coords(iParam0, true, false));
		}
		if (!uParam2->f_1 & 128 != 0)
		{
			if (func_1212(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_1213(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_27)
		{
			if (!uParam2->f_1 & 8 != 0)
			{
				if (func_1214(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_1215(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_1216(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_26 && func_80(player_id(), 0, 1, uParam2->f_1 & 524288 == 0))
		{
			if (!uParam2->f_1 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_1213(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_25)
		{
			if (func_1217(uParam2, 1065353216))
			{
				if (!uParam2->f_1 & 4 != 0)
				{
					if (func_591(Global_35, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_1213(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_1 & 256 != 0)
				{
					if (func_1218(Global_35, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_1213(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 16 != 0)
		{
			if ((uParam2->f_5 - Global_1935630->f_29) < 300)
			{
				if (func_1219(Global_35, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_1219(Global_35, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_1213(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1935630->f_39 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_1220(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1935630->f_25 || uParam2->f_12 < 20f)
			{
				if (func_1221(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1935630->f_30 || Global_1935630->f_31)
		{
			if (!uParam2->f_1 & 2 != 0)
			{
				if (func_1222(uParam2, 4000))
				{
					if ((func_1223(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_1224(uParam2, iParam0)) && func_916(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_1213(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_1 & 2 != 0)
		{
			if (uParam2->f_12 < 4f)
			{
				if ((func_1223(iParam0, Global_1935630->f_41, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_1224(uParam2, iParam0)) && func_916(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
				if (Global_1935630->f_40 == 0)
				{
					if (Global_1935630->f_41 != 0)
					{
						if (*uParam2 & 131072 == 0)
						{
							if (func_1225(iParam0, Global_1935630->f_41))
							{
								func_1226();
								*uParam3 = 2;
								func_1213(iParam0, uParam2, *uParam3);
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
					if (*uParam2 & 131072 == 0)
					{
						if (func_1225(iParam0, Global_1935630->f_41))
						{
							func_1226();
							*uParam3 = 2;
							func_1213(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
			if (uParam2->f_12 < 10f)
			{
				if (func_1227(uParam2, iParam0) || (uParam2->f_9 > 0 && (func_627() - uParam2->f_9) < 2000))
				{
					if (is_ped_ragdoll(iParam0))
					{
						func_1226();
						*uParam3 = 2;
						func_1213(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1935630->f_42 != 0)
			{
				if (*uParam2 & 131072 == 0)
				{
					if (func_1228())
					{
						if (func_1225(iParam0, Global_1935630->f_42))
						{
							func_1226();
							*uParam3 = 2;
							func_1213(iParam0, uParam2, *uParam3);
							return true;
						}
					}
				}
			}
		}
		if (!uParam2->f_1 & 1024 != 0)
		{
			if (func_1229(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_1213(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (uParam2->f_12 < uParam2->f_26)
		{
			if (!uParam2->f_1 & 2048 != 0)
			{
				if (func_1230(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_6 == 2)
				{
					if (func_1231(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_1213(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_1232(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_12 < 12f)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_1233(uParam2, 4000))
				{
					if (func_1234(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_1213(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_12 < uParam2->f_19)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_1235(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_4 = 0;
					func_1213(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_1 & 1 != 0)
	{
		if (does_entity_exist(iParam0))
		{
			if (func_1236(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_1213(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

int func_832(int iParam0)
{
	vVar0 = { -1095.983f, -564.3661f, 81.0114f };
	iVar6 = -1;
	if (func_15(&Local_51, 16777216))
	{
		func_98();
	}
	else if (iLocal_49 < 10)
	{
		if (!_0xfe5c6177064bd390(1) && is_vehicle_stopped(Local_51.f_25[iParam0]->f_1))
		{
			if (Local_51.f_2413 >= 2)
			{
				func_4(&Local_51, 16777216);
			}
		}
	}
	if (Local_51.f_2413 < 4)
	{
		if ((func_10(1) || Local_51.f_25[iParam0]->f_9.f_164 == 9) || Local_51.f_25[iParam0]->f_9.f_164 == 11)
		{
			Local_51.f_2413 = 4;
		}
	}
	switch (Local_51.f_2413)
	{
		case 0:
			if (iLocal_49 >= 3)
			{
				func_100(&(Local_51.f_2203));
				Local_51.f_2413 = 1;
			}
			break;
		case 1:
			if (func_26(&(Local_51.f_2203)) > 10f || (func_26(&(Local_51.f_2203)) > 3f && func_87(Local_51.f_25[iParam0]->f_1, Global_36, 1) < 5f))
			{
				if (!_0xfe5c6177064bd390(1))
				{
					if (func_87(Local_51.f_25[iParam0]->f_1, Global_36, 1) < 30f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 54))
						{
							func_100(&(Local_51.f_2203));
							Local_51.f_2413 = 2;
						}
					}
				}
			}
			break;
		case 2:
			if (func_26(&(Local_51.f_2203)) > 17f)
			{
				if (!_0xfe5c6177064bd390(1))
				{
					if (func_87(Local_51.f_25[iParam0]->f_1, Global_36, 1) < 30f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 55))
						{
							func_100(&(Local_51.f_2203));
							Local_51.f_2413 = 3;
						}
					}
				}
			}
			break;
		case 3:
			if (func_26(&(Local_51.f_2203)) > 20f)
			{
				if (!_0xfe5c6177064bd390(1))
				{
					if (func_87(Local_51.f_25[iParam0]->f_1, Global_36, 1) < 30f)
					{
						if (func_97(&(Local_51.f_2286), iLocal_25, 56))
						{
							func_100(&(Local_51.f_2203));
							Local_51.f_2413 = 4;
						}
					}
				}
			}
			break;
	}
	if (((func_183(Global_35, Local_51.f_25[iParam0]->f_9, 1, 1) < 30f && !bVar2524) && (func_1237(iParam0) || uVar2525)) && !func_10(1))
	{
		if (!_0xfe5c6177064bd390(1))
		{
			func_97(&(Local_51.f_2286), iLocal_25, 83);
			iLocal_2527 = 1;
		}
	}
	if ((((((iLocal_49 != 3 && iLocal_49 != 4) && iLocal_49 != 5) && iLocal_49 != 6) && iLocal_49 != 7) && iLocal_49 != 8) && iLocal_49 != 9)
	{
		if (func_10(1))
		{
			return 0;
		}
	}
	switch (iLocal_49)
	{
		case 0:
			func_101(&Local_51);
			func_72(524288);
			func_72(4194304);
			func_102(iLocal_25, "CR_O_ROBCOACH", 1);
			iLocal_49 = 1;
			break;
		case 1:
			if (!_0x508f5053e3f6f0c4(&(Local_51.f_25[iParam0]->f_410[0]), get_entity_coords(Local_51.f_25[iParam0]->f_9, true, false), 1f))
			{
				task_look_at_entity(&(Local_51.f_25[iParam0]->f_410[0]), Local_51.f_25[iParam0]->f_9, -1, 3120, 51, 1);
			}
			if (!_0x508f5053e3f6f0c4(&(Local_51.f_25[iParam0]->f_410[1]), get_entity_coords(Local_51.f_25[iParam0]->f_9, true, false), 1f))
			{
				task_look_at_entity(&(Local_51.f_25[iParam0]->f_410[1]), Local_51.f_25[iParam0]->f_9, -1, 3120, 51, 1);
			}
			if (!_0xfe5c6177064bd390(1))
			{
				func_100(&(Local_51.f_2194));
				iLocal_49 = 2;
			}
			break;
		case 2:
			if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -1665583462))
			{
				_task_move_in_traffic_2(&(Local_51.f_25[iParam0]->f_410[1]), vVar0, 20f, 2.5f, 0, 0);
				task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[1]));
			}
			if (func_26(&(Local_51.f_2194)) > 0.8f)
			{
				iLocal_49 = 3;
			}
			break;
		case 3:
			if (!Local_51.f_25[iParam0]->f_410[0]->f_15)
			{
				if (func_87(&(Local_51.f_25[iParam0]->f_410[0]), vVar0, 1) > 50f && func_183(&(Local_51.f_25[iParam0]->f_410[0]), Local_51.f_25[iParam0]->f_1, 1, 1) < 200f)
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_410[0]), -1665583462))
					{
						_task_move_in_traffic_2(&(Local_51.f_25[iParam0]->f_410[0]), vVar0, 20f, 2.5f, 0, 0);
						task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[1]));
					}
				}
				else
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_410[0]), -982327190))
					{
						task_stand_still(&(Local_51.f_25[iParam0]->f_410[0]), -1);
					}
					iVar3[0] = 1;
				}
			}
			if (!Local_51.f_25[iParam0]->f_410[1]->f_15)
			{
				if (func_87(&(Local_51.f_25[iParam0]->f_410[1]), vVar0, 1) > 50f && func_183(&(Local_51.f_25[iParam0]->f_410[0]), Local_51.f_25[iParam0]->f_1, 1, 1) < 200f)
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -1665583462))
					{
						_task_move_in_traffic_2(&(Local_51.f_25[iParam0]->f_410[1]), vVar0, 20f, 2.5f, 0, 0);
						task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[1]));
					}
				}
				else
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -982327190))
					{
						task_stand_still(&(Local_51.f_25[iParam0]->f_410[1]), -1);
					}
					iVar3[1] = 1;
				}
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			if ((iVar3[0] && iVar3[1]) // PointerArith)
			{
				func_100(&uLocal_2479);
				iLocal_49 = 4;
			}
			break;
		case 4:
			if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -2015108952))
			{
				task_goto_entity_offset(&(Local_51.f_25[iParam0]->f_410[1]), &(Local_51.f_25[iParam0]->f_410[0]), -1, 5f, 0f, 1.5f, 0);
			}
			if (!_0xfe5c6177064bd390(1))
			{
				if (func_26(&uLocal_2479) > 15f || func_87(&(Local_51.f_25[iParam0]->f_410[0]), Global_36, 1) < 20f)
				{
					if (func_87(&(Local_51.f_25[iParam0]->f_410[0]), Global_36, 1) < 20f)
					{
						func_97(&(Local_51.f_2286), iLocal_25, 50);
					}
					iLocal_49 = 5;
				}
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			break;
		case 5:
			if (!_0xfe5c6177064bd390(1))
			{
				set_ped_config_flag(&(Local_51.f_25[iParam0]->f_410[0]), 297, true);
				func_517(Local_2488[0], "CR_ILO_TRICK", 0, -163964935, 0, 0, 0, 1, 0);
				iLocal_49 = 6;
				func_100(&uLocal_2479);
			}
			if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -2015108952))
			{
				task_goto_entity_offset(&(Local_51.f_25[iParam0]->f_410[1]), &(Local_51.f_25[iParam0]->f_410[0]), -1, 5f, 0f, 1.5f, 0);
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			break;
		case 6:
			if (func_26(&uLocal_2479) > 10f)
			{
				func_512(&Local_2488, 1, 1, 1, 0);
				func_847(Local_51.f_25[iParam0]->f_410[0]);
				iLocal_49 = 7;
			}
			iVar6 = func_523(Local_51.f_25[iParam0]->f_410[0], &iLocal_2506, 8f, &Local_2488, 0f, 3, 0, 0, 1, 0, 0, 2, -1082130432);
			if (iVar6 == 0)
			{
				func_512(&Local_2488, 1, 1, 1, 0);
				func_847(Local_51.f_25[iParam0]->f_410[0]);
				task_look_at_entity(&(Local_51.f_25[iParam0]->f_410[0]), Global_35, -1, 0, 51, 0);
				task_look_at_entity(&(Local_51.f_25[iParam0]->f_410[1]), Global_35, -1, 0, 51, 0);
				if (!_0xfe5c6177064bd390(1))
				{
					func_97(&(Local_51.f_2286), iLocal_25, 82);
				}
				iLocal_2528 = 1;
				iLocal_49 = 8;
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				func_512(&Local_2488, 1, 1, 1, 0);
				func_847(Local_51.f_25[iParam0]->f_410[0]);
				return 1;
			}
			break;
		case 8:
			if (!_0xfe5c6177064bd390(1))
			{
				task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[0]));
				task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[1]));
				iLocal_49 = 7;
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			break;
		case 7:
			if (!Local_51.f_25[iParam0]->f_410[0]->f_15)
			{
				if (func_87(&(Local_51.f_25[iParam0]->f_410[0]), vVar0, 1) > 50f)
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_410[0]), -1665583462))
					{
						_task_move_in_traffic_2(&(Local_51.f_25[iParam0]->f_410[0]), vVar0, 20f, 2.5f, 0, 0);
						task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[1]));
					}
				}
				else
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_410[0]), -982327190))
					{
						task_stand_still(&(Local_51.f_25[iParam0]->f_410[0]), -1);
					}
					iVar3[0] = 1;
				}
			}
			if (!Local_51.f_25[iParam0]->f_410[1]->f_15)
			{
				if (func_87(&(Local_51.f_25[iParam0]->f_410[1]), vVar0, 1) > 50f)
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -1665583462))
					{
						_task_move_in_traffic_2(&(Local_51.f_25[iParam0]->f_410[1]), vVar0, 20f, 2.5f, 0, 0);
						task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[1]));
					}
				}
				else
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -982327190))
					{
						task_stand_still(&(Local_51.f_25[iParam0]->f_410[1]), -1);
					}
					iVar3[1] = 1;
				}
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			if ((iVar3[0] && iVar3[1]) // PointerArith)
			{
				func_100(&(Local_51.f_2194));
				iLocal_49 = 9;
			}
			break;
		case 9:
			if (func_26(&(Local_51.f_2194)) > 4f)
			{
				if (!Local_51.f_25[iParam0]->f_410[0]->f_15)
				{
					if (func_87(&(Local_51.f_25[iParam0]->f_410[0]), get_entity_coords(Local_51.f_25[iParam0]->f_1, true, false), 1) > 35f)
					{
						if (!func_108(&(Local_51.f_25[iParam0]->f_410[0]), -1665583462))
						{
							_task_move_in_traffic_2(&(Local_51.f_25[iParam0]->f_410[0]), get_entity_coords(Local_51.f_25[iParam0]->f_1, true, false), 20f, 2.5f, 0, 0);
							task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[1]));
						}
					}
					else
					{
						if (!func_108(&(Local_51.f_25[iParam0]->f_410[0]), -982327190))
						{
							task_stand_still(&(Local_51.f_25[iParam0]->f_410[0]), -1);
						}
						iVar3[0] = 1;
					}
				}
				if (!Local_51.f_25[iParam0]->f_410[1]->f_15)
				{
					if (func_87(&(Local_51.f_25[iParam0]->f_410[1]), get_entity_coords(Local_51.f_25[iParam0]->f_1, true, false), 1) > 31f)
					{
						if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -1665583462))
						{
							_task_move_in_traffic_2(&(Local_51.f_25[iParam0]->f_410[1]), get_entity_coords(Local_51.f_25[iParam0]->f_1, true, false), 20f, 2.5f, 0, 0);
							task_clear_look_at(&(Local_51.f_25[iParam0]->f_410[1]));
						}
					}
					else
					{
						if (!func_108(&(Local_51.f_25[iParam0]->f_410[1]), -982327190))
						{
							task_stand_still(&(Local_51.f_25[iParam0]->f_410[1]), -1);
						}
						iVar3[1] = 1;
					}
				}
			}
			if (func_1238(iParam0))
			{
				iLocal_49 = 16;
				return 1;
			}
			if ((iVar3[0] && iVar3[1]) // PointerArith)
			{
				if (func_10(1))
				{
					iLocal_49 = 16;
					return 1;
				}
				else if (func_97(&(Local_51.f_2286), iLocal_25, 38))
				{
					if (is_ped_in_group(&(Local_51.f_25[iParam0]->f_410[0])))
					{
						remove_ped_from_group(&(Local_51.f_25[iParam0]->f_410[0]));
					}
					if (is_ped_in_group(&(Local_51.f_25[iParam0]->f_410[1])))
					{
						remove_ped_from_group(&(Local_51.f_25[iParam0]->f_410[1]));
					}
					if (does_group_exist(Local_51.f_2421))
					{
						remove_group(Local_51.f_2421);
					}
					iLocal_49 = 10;
				}
			}
			break;
		case 10:
			if (!_0xfe5c6177064bd390(1))
			{
				if (!is_ped_in_vehicle(Local_51.f_25[iParam0]->f_174, Local_51.f_25[iParam0]->f_1, true))
				{
					if (!func_108(Local_51.f_25[iParam0]->f_174, -1794415470))
					{
						func_113(&Local_51, 16777216);
						task_enter_vehicle(Local_51.f_25[iParam0]->f_174, Local_51.f_25[iParam0]->f_1, -1, Local_51.f_25[iParam0]->f_677, 2f, 1, 0);
					}
				}
				if (is_ped_in_vehicle(Local_51.f_25[iParam0]->f_174, Local_51.f_25[iParam0]->f_1, false))
				{
					func_21(524288);
					func_112(&Local_51, iLocal_24, 0);
					iLocal_49 = 16;
				}
			}
			break;
		case 16:
			return 1;
	}
	return 0;
}

int func_833(int iParam0)
{
	if (func_10(1))
	{
		return 0;
	}
	if (Local_51.f_25[iParam0]->f_9.f_164 == 11 || Local_51.f_25[iParam0]->f_9.f_164 == 9)
	{
		if (func_111(iLocal_25, 38))
		{
			func_381(iLocal_25, 38, 0);
		}
		else if (func_111(iLocal_25, 37))
		{
			func_381(iLocal_25, 37, 0);
		}
		return 0;
	}
	switch (iLocal_49)
	{
		case 0:
			func_101(&Local_51);
			func_72(524288);
			func_102(iLocal_25, "CR_O_STEALC", 1);
			iLocal_49 = 1;
			break;
		case 1:
			if (is_vehicle_stopped(Local_51.f_25[iParam0]->f_1))
			{
				_0xaab050da48b57978(&(Local_51.f_25[iParam0]->f_500[0]), "Default_Curious", 0, -1, 4);
				_0x3053064f909b5f42(Local_51.f_25[iParam0]->f_1, 1);
				set_ped_can_ragdoll_from_player_impact(&(Local_51.f_25[iParam0]->f_500[0]), false);
				task_look_at_coord(&(Local_51.f_25[iParam0]->f_500[0]), get_world_position_of_entity_bone(Local_51.f_25[iParam0]->f_1, get_entity_bone_index_by_name(Local_51.f_25[iParam0]->f_1, "wheel_lr")), -1, 1072, 51, 0);
				open_sequence_task(&iVar0);
				task_leave_any_vehicle(0, 0, 0);
				task_follow_nav_mesh_to_coord(0, get_offset_from_entity_in_world_coords(Local_51.f_25[iParam0]->f_1, -2f, -2f, 0f), 1f, -1, 0.75f, 1, 40000f);
				task_go_straight_to_coord(0, get_offset_from_entity_in_world_coords(Local_51.f_25[iParam0]->f_1, -2.2f, -1.5f, 0f), 1f, -1, (get_entity_heading(Local_51.f_25[iParam0]->f_1) - 80f), 1056964608, 0);
				_task_start_scenario_in_place(0, 830847823, 7000, true, 0, -1f, false);
				close_sequence_task(iVar0);
				task_perform_sequence(&(Local_51.f_25[iParam0]->f_500[0]), iVar0);
				clear_sequence_task(&iVar0);
				func_100(&(Local_51.f_2194));
				iLocal_49 = 2;
			}
			break;
		case 2:
			if (is_ped_using_any_scenario(&(Local_51.f_25[iParam0]->f_500[0])) || !func_108(&(Local_51.f_25[iParam0]->f_500[0]), 242628503))
			{
				func_100(&(Local_51.f_2194));
				iLocal_49 = 3;
			}
			break;
		case 3:
			if (func_26(&(Local_51.f_2194)) > 6f)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 38))
				{
					func_100(&(Local_51.f_2194));
					iLocal_49 = 14;
				}
			}
			break;
		case 9:
			if (func_26(&(Local_51.f_2194)) > 5f)
			{
				set_ped_can_ragdoll_from_player_impact(Local_51.f_25[iParam0]->f_174, false);
				task_look_at_coord(Local_51.f_25[iParam0]->f_174, get_world_position_of_entity_bone(Local_51.f_25[iParam0]->f_1, get_entity_bone_index_by_name(Local_51.f_25[iParam0]->f_1, "wheel_lr")), -1, 0, 51, 0);
				open_sequence_task(&iVar0);
				task_leave_any_vehicle(0, 0, 0);
				task_follow_nav_mesh_to_coord(0, get_offset_from_entity_in_world_coords(Local_51.f_25[iParam0]->f_1, -2f, 0f, 0f), 1f, -1, 0.5f, 0, (get_entity_heading(Local_51.f_25[iParam0]->f_1) - 135f));
				task_turn_ped_to_face_coord(0, get_world_position_of_entity_bone(Local_51.f_25[iParam0]->f_1, get_entity_bone_index_by_name(Local_51.f_25[iParam0]->f_1, "wheel_lr")), 0);
				close_sequence_task(iVar0);
				task_perform_sequence(Local_51.f_25[iParam0]->f_174, iVar0);
				clear_sequence_task(&iVar0);
				func_100(&(Local_51.f_2194));
				iLocal_49 = 10;
			}
			break;
		case 10:
			if (!func_108(Local_51.f_25[iParam0]->f_174, 242628503))
			{
				_task_start_scenario_in_place(Local_51.f_25[iParam0]->f_174, -439112356, 0, true, 0, -1f, false);
				func_100(&(Local_51.f_2194));
				iLocal_49 = 11;
			}
			break;
		case 11:
			if (func_26(&(Local_51.f_2194)) > 8f)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 40))
				{
					func_100(&(Local_51.f_2194));
					iLocal_49 = 12;
				}
			}
			break;
		case 12:
			if (func_26(&(Local_51.f_2194)) > 5f)
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 36))
				{
					set_ped_can_ragdoll_from_player_impact(Local_51.f_25[iParam0]->f_9, false);
					task_look_at_coord(Local_51.f_25[iParam0]->f_9, get_world_position_of_entity_bone(Local_51.f_25[iParam0]->f_1, get_entity_bone_index_by_name(Local_51.f_25[iParam0]->f_1, "wheel_lr")), -1, 0, 51, 0);
					open_sequence_task(&iVar0);
					task_leave_any_vehicle(0, 0, 0);
					task_follow_nav_mesh_to_coord(0, get_offset_from_entity_in_world_coords(Local_51.f_25[iParam0]->f_1, -2.8f, 0f, 0f), 1f, -1, 0.5f, 0, (get_entity_heading(Local_51.f_25[iParam0]->f_1) - 125f));
					task_turn_ped_to_face_coord(0, get_world_position_of_entity_bone(Local_51.f_25[iParam0]->f_1, get_entity_bone_index_by_name(Local_51.f_25[iParam0]->f_1, "wheel_lr")), 0);
					close_sequence_task(iVar0);
					task_perform_sequence(Local_51.f_25[iParam0]->f_9, iVar0);
					clear_sequence_task(&iVar0);
					func_100(&(Local_51.f_2194));
					iLocal_49 = 13;
				}
			}
			break;
		case 13:
			if (!func_108(Local_51.f_25[iParam0]->f_9, 242628503))
			{
				func_100(&(Local_51.f_2194));
				iLocal_49 = 14;
			}
			break;
		case 14:
			if (!func_247(1))
			{
				if (func_97(&(Local_51.f_2286), iLocal_25, 37))
				{
					func_100(&(Local_51.f_2194));
					iLocal_49 = 15;
				}
			}
			break;
		case 15:
			if (!is_ped_in_vehicle(Local_51.f_25[iParam0]->f_9, Local_51.f_25[iParam0]->f_1, true))
			{
				if (!func_108(Local_51.f_25[iParam0]->f_9, -1794415470))
				{
					task_enter_vehicle(Local_51.f_25[iParam0]->f_9, Local_51.f_25[iParam0]->f_1, -1, Local_51.f_25[iParam0]->f_676, 1f, 1, 0);
				}
			}
			if (func_26(&(Local_51.f_2194)) > 8f)
			{
				if (!is_ped_in_vehicle(Local_51.f_25[iParam0]->f_174, Local_51.f_25[iParam0]->f_1, true))
				{
					if (!func_108(Local_51.f_25[iParam0]->f_174, -1794415470))
					{
						task_enter_vehicle(Local_51.f_25[iParam0]->f_174, Local_51.f_25[iParam0]->f_1, -1, Local_51.f_25[iParam0]->f_677, 1f, 1, 0);
					}
				}
			}
			if (func_26(&(Local_51.f_2194)) > 3f)
			{
				if (!is_ped_in_vehicle(&(Local_51.f_25[iParam0]->f_500[0]), Local_51.f_25[iParam0]->f_1, true))
				{
					if (!func_108(&(Local_51.f_25[iParam0]->f_500[0]), -1794415470))
					{
						_0x935cf6e42baf7f4d(&(Local_51.f_25[iParam0]->f_500[0]));
						task_clear_look_at(&(Local_51.f_25[iParam0]->f_500[0]));
						task_enter_vehicle(&(Local_51.f_25[iParam0]->f_500[0]), Local_51.f_25[iParam0]->f_1, -1, 1, 1f, 1, 0);
					}
				}
			}
			if ((is_ped_in_vehicle(Local_51.f_25[iParam0]->f_174, Local_51.f_25[iParam0]->f_1, false) && is_ped_in_vehicle(&(Local_51.f_25[iParam0]->f_500[0]), Local_51.f_25[iParam0]->f_1, false)) && is_ped_in_vehicle(Local_51.f_25[iParam0]->f_9, Local_51.f_25[iParam0]->f_1, false))
			{
				_0x3053064f909b5f42(Local_51.f_25[iParam0]->f_1, 0);
				func_21(524288);
				func_112(&Local_51, iLocal_24, 0);
				iLocal_49 = 16;
			}
			break;
		case 16:
			return 1;
	}
	return 0;
}

bool func_834(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_835(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

char* func_836()
{
	return "script_proc@robberies@coach@strawberry@trick_driver";
}

void func_837(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	if (bParam3 && !func_240(iParam0))
	{
		return;
	}
	iVar0 = func_241(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, _create_var_string(2, sParam1, sParam2));
}

void func_838(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 && !func_240(iParam0))
	{
		return;
	}
	iVar0 = func_241(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_text((*Global_1945938)[iVar0]->f_3, sParam1);
}

void func_839(int* iParam0, char* sParam1)
{
	if (func_240(iParam0->f_6) && !is_string_null_or_empty(sParam1))
	{
		func_838(iParam0->f_6, sParam1, 1);
	}
	iParam0->f_5 = sParam1;
	func_842(iParam0, 1);
}

bool func_840(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

void func_841(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_842(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_843(int* iParam0, int iParam1)
{
	*iParam0 = 0;
	iParam0->f_1 = -1;
	iParam0->f_2 = 0;
	func_42(&(iParam0->f_18));
}

void func_844(int iParam0)
{
	if (*iParam0 & 1 != 0)
	{
		*iParam0 |= 64 | 16 | 16777216;
	}
}

bool func_845(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_11 != 0)
	{
		if (func_1239(iParam0, iParam1))
		{
			if (!func_913(iParam1->f_10, 1))
			{
				set_ped_config_flag(iParam0, 130, false);
				set_ped_config_flag(iParam0, 315, false);
				set_ped_config_flag(iParam0, 297, false);
				set_ped_config_flag(iParam0, 178, true);
				func_512(uParam2, 0, 0, 1, 0);
				func_1134(&(iParam1->f_10), 1);
			}
			return true;
		}
		else if (func_913(iParam1->f_10, 1))
		{
			func_1240(uParam2);
			set_ped_config_flag(iParam0, 130, true);
			set_ped_config_flag(iParam0, 315, true);
			set_ped_config_flag(iParam0, 297, true);
			set_ped_config_flag(iParam0, 178, false);
			func_1133(&(iParam1->f_10), 1);
		}
	}
	return false;
}

bool func_846(var uParam0, int* iParam1, var uParam2, float fParam3, int iParam4, char* sParam5, int iParam6, float fParam7)
{
	if (fParam7 > (fParam3 + 5f))
	{
		return false;
	}
	StringCopy(&cVar0, sParam5, 32);
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		bVar4 = func_913(iParam4, 32);
		func_1241(iParam1, uParam2, 0);
		iVar5 = func_1242(*uParam0, iParam1, uParam2, fParam3, bVar4);
		if (bVar4)
		{
			set_ped_config_flag(*uParam0, 178, false);
			return true;
		}
		func_512(uParam2, 0, 0, 1, 0);
		iVar6 = 0;
		if (!func_913(iParam4, 16))
		{
			iVar6 |= 8;
		}
		if (func_913(iParam4, 2048))
		{
			iVar6 |= 4;
		}
		if (func_913(iParam4, 32768))
		{
			iVar6 |= 128;
		}
		if (func_913(iParam4, 4096))
		{
			iVar6 |= 16;
		}
		if (func_913(iParam4, 8388608) || func_913(iParam4, 8192))
		{
			iVar6 |= 256;
		}
		if (func_913(iParam4, 4194304))
		{
			iVar6 |= 64;
		}
		if (func_913(iParam4, 268435456))
		{
			iVar6 |= 8192;
		}
		if (func_849(iParam1, 4))
		{
			iVar6 |= 1024;
			_0xbb1e41dd3d3c6250(*uParam0, "IloGeneralEvents", 2);
		}
		if (!func_849(iParam1, 26))
		{
			iVar6 |= 32768;
		}
		if (func_913(iParam4, 67108864))
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
				iParam6 = func_1243(uParam0);
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
			if (func_913(iParam4, 268435456))
			{
				iVar8 = func_1244(uParam2, 648122183);
				if (iVar8 > -1)
				{
					func_1245(iParam1, (*uParam2)[iVar8]);
				}
			}
			if (func_849(iParam1, 23))
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
			if (func_913(iParam4, 2) || func_913(iParam4, 16))
			{
				func_848(*uParam0, 1, 1);
			}
			else
			{
				func_848(*uParam0, 0, 1);
			}
			return true;
		}
	}
	return false;
}

void func_847(var uParam0)
{
	if (!is_entity_dead(*uParam0))
	{
		_0xe98d55c5983f2509(*uParam0);
		set_ped_config_flag(*uParam0, 297, false);
	}
}

void func_848(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2 || !is_entity_dead(iParam0))
	{
		set_ped_config_flag(iParam0, 317, bParam1);
	}
}

bool func_849(int* iParam0, int iParam1)
{
	return is_bit_set(*iParam0, iParam1);
}

bool func_850(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		if (func_515(*uParam0, bParam3, bVar2, bVar3))
		{
			return true;
		}
	}
	return false;
}

void func_851(var uParam0, bool bParam1, int* iParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14)
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
			func_1246(*uParam0, uParam4, fParam3, iParam7, iParam8, iParam12, func_913(iParam10, 32), 1, 0);
			set_bit(iParam2, 1);
		}
	}
	else if (is_bit_set(*iParam2, 1))
	{
		clear_bit(iParam2, 1);
	}
}

void func_852(int iParam0)
{
	if (func_913(iParam0, 4))
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
	if (func_913(iParam0, 16384))
	{
		disable_control_action(0, -485697785, false);
	}
	if (func_913(iParam0, 8))
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
	}
}

bool func_853(var uParam0, int* iParam1, float fParam2, float fParam3, var uParam4, bool bParam5, float fParam6, int iParam7, int iParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, bool bParam17, bool bParam18)
{
	iVar1 = func_1247(1);
	bVar2 = is_bit_set(*iParam1, 2);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = iParam10 & 128 != false;
	bVar7 = iParam10 & 64 != false;
	bVar8 = iParam10 & 512 != false;
	bVar9 = is_ped_on_foot(Global_35);
	bVar10 = is_ped_injured(*uParam0);
	bVar11 = (((_is_ped_carrying(Global_35) || func_1248(Global_35)) || func_1249(Global_35)) || func_1250(Global_35));
	fVar12 = -1f;
	if (func_25(&(iParam1->f_13)))
	{
		fVar12 = func_26(&(iParam1->f_13));
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if ((*uParam4)[iVar0]->f_8 != iParam12)
		{
			iParam12 = (*uParam4)[iVar0]->f_8;
		}
		bVar4 = func_240((*uParam4)[iVar0]->f_6);
		func_1251(*uParam0, (*uParam4)[iVar0], fParam3, iParam7, iParam8, iParam12, bParam5);
		if (is_bit_set(uParam4[iVar0], 20))
		{
			bVar3 = true;
		}
		if (func_1252(*uParam0, iParam1, (*uParam4)[iVar0], bVar4, fParam3, fParam2, iParam7, iParam8, bParam14, bParam16, bParam17, bVar9, bVar10, bParam15, fVar12, bVar11, iVar1))
		{
			if (!bParam18 && !bVar5)
			{
				if (func_1253(iParam12, (*uParam4)[iVar0]->f_6))
				{
					if (!bVar7)
					{
						func_512(uParam4, 0, 0, 1, bParam5);
					}
					if (bVar6)
					{
						func_1254(uParam4, 0, 0);
					}
					if (is_bit_set(uParam4[iVar0], 11))
					{
						func_1241(iParam1, uParam4, is_bit_set(*iParam1, 6));
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
					if (func_1255(iParam1, fParam6, iParam1->f_9))
					{
						func_100(&(iParam1->f_18));
						if (bVar6)
						{
							func_1254(uParam4, 0, 0);
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
		func_1256(iParam1, fParam2);
	}
	return bVar5;
}

void func_854(var uParam0)
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

void func_855(int* iParam0, var uParam1, float fParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_1257((*uParam1)[iVar0]))
		{
			if (is_bit_set(uParam1[iVar0], 20))
			{
				func_1256(iParam0, fParam2);
				return;
			}
		}
		iVar0++;
	}
}

bool func_856(int iParam0, int* iParam1, var uParam2)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		if (!is_control_pressed(0, -124244224))
		{
			if (func_1258(iParam0))
			{
				iParam1->f_1 = iParam1->f_3;
				func_1259(iParam1, 0);
				func_1241(iParam1, uParam2, func_849(iParam1, 6));
				return true;
			}
		}
	}
	return false;
}

bool func_857(var uParam0, int* iParam1, float fParam2, bool bParam3)
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
			func_100(&(iParam1->f_18));
			return false;
		}
		else if (func_25(&(iParam1->f_18)))
		{
			func_42(&(iParam1->f_18));
			return false;
		}
	}
	if (!func_25(&(iParam1->f_18)))
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
	return func_269(&(iParam1->f_18), fParam2);
	return true;
}

void func_858(int iParam0, int* iParam1, var uParam2, float fParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	if (iParam1->f_5 < 0 || iParam1->f_5 > (*uParam2 - 1))
	{
		iParam1->f_5 = 0;
	}
	iVar0 = iParam1->f_5;
	func_1251(iParam0, (*uParam2)[iVar0], fParam3, iParam4, iParam5, iParam6, bParam7);
	iParam1->f_5++;
}

void func_859(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

void func_860(int* iParam0, var uParam1)
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
	func_1241(iParam0, uParam1, 1);
	func_512(uParam1, 0, 1, 1, 0);
	_copy_memory(iParam0, &Var1, 21);
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		_copy_memory((*uParam1)[iVar0], &Var22, 17);
		iVar0++;
	}
}

void func_861(var uParam0, int iParam1, int iParam2)
{
	if (func_53(uParam0->f_9, 0) && !is_entity_dead(uParam0->f_1))
	{
		if (func_10(1))
		{
			fVar0 = func_195(iParam1);
		}
		else
		{
			fVar0 = func_333(uParam0, iParam1);
		}
		func_100(&(uParam0->f_643));
		func_473(uParam0->f_9, uParam0->f_1, func_194(iParam1), fVar0, iParam2);
	}
}

bool func_862(int iParam0, var uParam1)
{
	return _play_ambient_speech1(iParam0, uParam1);
}

bool func_863(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (!is_entity_dead(iVar1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_864(var uParam0)
{
	if (func_53(uParam0->f_174, 0))
	{
		if (get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_677) == uParam0->f_174 && get_ped_in_vehicle_seat(uParam0->f_1, uParam0->f_676) == Global_35)
		{
			if (!func_108(uParam0->f_174, 355471868))
			{
				task_shuffle_to_next_vehicle_seat(uParam0->f_174, uParam0->f_1);
			}
		}
	}
	switch (uParam0->f_652)
	{
		case 0:
			if (get_entity_speed(uParam0->f_1) < 1f)
			{
				set_vehicle_provides_cover(uParam0->f_1, true);
				if (!is_ped_in_vehicle(Global_35, uParam0->f_1, true))
				{
					func_385(&(uParam0->f_174), uParam0->f_1, 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 1;
			}
			break;
		case 1:
			if (func_26(&(uParam0->f_653)) > 0.5f)
			{
				iVar0 = 0;
				while (iVar0 < uParam0->f_523)
				{
					func_164(uParam0->f_500[iVar0], 0);
					iVar0++;
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 2;
			}
			break;
		case 2:
			if (func_26(&(uParam0->f_653)) > 0.4f)
			{
				if (func_53(uParam0->f_9, 0))
				{
					set_ped_config_flag(uParam0->f_9, 246, true);
					if (iLocal_25 == 5)
					{
						func_1260(uParam0);
					}
					else
					{
						func_328(uParam0);
					}
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 3;
			}
			break;
		case 3:
			if (func_26(&(uParam0->f_653)) > 5f)
			{
				if (!uParam0->f_174.f_72)
				{
					func_385(&(uParam0->f_174), uParam0->f_1, 0);
				}
				uParam0->f_652 = 4;
			}
			break;
		case 4:
			if (_0x5407b7288d0478b7(Global_35, 0) < 3)
			{
				if (func_53(uParam0->f_174, 0))
				{
					func_1261(uParam0->f_174);
				}
				else if (func_53(&(uParam0->f_500[0]), 0))
				{
					func_1261(&(uParam0->f_500[0]));
				}
				else if (func_53(&(uParam0->f_500[1]), 0))
				{
					func_1261(&(uParam0->f_500[1]));
				}
				else if (func_53(uParam0->f_9, 0))
				{
					func_1261(uParam0->f_9);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 9;
			}
			break;
	}
}

void func_865(var uParam0)
{
	switch (uParam0->f_652)
	{
		case 0:
			if (get_entity_speed(uParam0->f_1) < 1f)
			{
				set_vehicle_provides_cover(uParam0->f_1, true);
				if (!is_ped_in_vehicle(Global_35, uParam0->f_1, true))
				{
					func_385(&(uParam0->f_174), uParam0->f_1, 0);
				}
				if (func_53(uParam0->f_9, 0))
				{
					set_ped_config_flag(uParam0->f_9, 246, true);
					func_328(uParam0);
				}
				iVar0 = 0;
				while (iVar0 < uParam0->f_523)
				{
					func_164(uParam0->f_500[iVar0], 0);
					iVar0++;
				}
				if (func_53(&(uParam0->f_410[0]), 0))
				{
					set_ped_config_flag(&(uParam0->f_410[0]), 167, false);
					set_ped_combat_movement(&(uParam0->f_410[0]), 3);
					set_ped_combat_range(&(uParam0->f_410[0]), 2);
					register_hated_targets_around_ped(&(uParam0->f_410[0]), 100f);
					open_sequence_task(&iVar2);
					if (func_116(&(uParam0->f_410[0])))
					{
						task_dismount_animal(0, 262144, 0, 0, 0, 0);
					}
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_hated_targets_around_ped(0, 150f, 0, 0);
					close_sequence_task(iVar2);
					task_perform_sequence(&(uParam0->f_410[0]), iVar2);
					clear_sequence_task(&iVar2);
					func_163(uParam0->f_410[0], &(uParam0->f_410[0]->f_5), 1, 0, 0);
				}
				if (func_53(&(uParam0->f_410[1]), 0))
				{
					set_ped_config_flag(&(uParam0->f_410[1]), 167, false);
					set_ped_combat_movement(&(uParam0->f_410[1]), 3);
					set_ped_combat_range(&(uParam0->f_410[1]), 2);
					register_hated_targets_around_ped(&(uParam0->f_410[1]), 100f);
					open_sequence_task(&iVar3);
					if (func_116(&(uParam0->f_410[1])))
					{
						task_dismount_animal(0, 262144, 0, 0, 0, 0);
					}
					task_set_blocking_of_non_temporary_events(0, false);
					task_combat_hated_targets_around_ped(0, 150f, 0, 0);
					close_sequence_task(iVar3);
					task_perform_sequence(&(uParam0->f_410[1]), iVar3);
					clear_sequence_task(&iVar3);
					func_163(uParam0->f_410[1], &(uParam0->f_410[1]->f_5), 1, 0, 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 1;
			}
			break;
		case 1:
			if (Global_1392388->f_9 < 2)
			{
				iVar1 = func_1262();
				if (iVar1 != 0)
				{
					func_1261(iVar1);
				}
				uParam0->f_652 = 9;
			}
			break;
	}
}

void func_866(var uParam0)
{
	vVar0 = { 1099.67f, -633.5373f, 93.7302f };
	vVar3 = { 1110.308f, -609.5092f, 90.2995f };
	if (!Local_51.f_2396)
	{
		if (Global_1392388->f_9 == 1)
		{
			iVar6 = func_1262();
			if ((((((iVar6 != 0 && func_53(iVar6, 0)) && !func_116(iVar6)) && !is_ped_in_any_vehicle(iVar6, false)) && func_87(iVar6, Global_36, 1) > 30f) && !_0x3ab6c7b0bb0df4b1(iVar6, -1)) && func_10(268435456))
			{
				set_ped_combat_attributes(iVar6, 17, true);
				task_smart_flee_ped(iVar6, Global_35, 300f, -1, 0, 1077936128, 0);
				set_ped_keep_task(iVar6, true);
				_set_blip_flash_style(get_blip_from_entity(iVar6), -1034486097);
				uParam0->f_652 = 9;
				Local_51.f_2396 = 1;
			}
		}
	}
	else if (Global_1392388->f_9 == 1)
	{
		iVar7 = func_1262();
		if ((iVar7 != 0 && func_53(iVar7, 0)) && func_87(iVar7, Global_36, 1) > 60f)
		{
			set_ped_as_no_longer_needed(&iVar7);
		}
	}
	switch (uParam0->f_652)
	{
		case 0:
			set_vehicle_provides_cover(uParam0->f_1, true);
			func_328(uParam0);
			if (func_53(&(uParam0->f_500[1]), 0))
			{
				set_ped_combat_range(&(uParam0->f_500[1]), 2);
				set_ped_combat_attributes(&(uParam0->f_500[1]), 0, true);
				set_blocking_of_non_temporary_events(&(uParam0->f_500[1]), true);
				func_164(uParam0->f_500[1], 0);
				func_163(uParam0->f_500[1], &(uParam0->f_500[1]->f_5), 1, 0, 0);
			}
			if (func_53(uParam0->f_174, 0))
			{
				set_ped_combat_range(uParam0->f_174, 1);
				set_ped_combat_attributes(uParam0->f_174, 2, false);
				set_ped_combat_attributes(uParam0->f_174, 1, false);
				set_ped_combat_attributes(uParam0->f_174, 3, true);
				set_ped_combat_attributes(uParam0->f_174, 0, true);
				func_163(&(uParam0->f_174), &(uParam0->f_174.f_5), 1, 0, 0);
				set_blocking_of_non_temporary_events(uParam0->f_174, true);
				task_combat_hated_targets_around_ped(uParam0->f_174, 150f, 0, 0);
			}
			uParam0->f_500[1]->f_9 = 1;
			uParam0->f_174.f_72 = 1;
			func_100(&(uParam0->f_653));
			uParam0->f_652 = 1;
			break;
		case 1:
			if (func_26(&(uParam0->f_653)) > 0.4f)
			{
				if (func_53(&(uParam0->f_410[1]), 0))
				{
					task_dismount_animal(&(uParam0->f_410[1]), 262144, 0, 0, 0, Global_35);
					set_ped_combat_movement(&(uParam0->f_410[1]), 1);
					set_ped_combat_range(&(uParam0->f_410[1]), 2);
					set_ped_combat_attributes(&(uParam0->f_410[1]), 1, false);
					set_ped_combat_attributes(&(uParam0->f_410[1]), 3, true);
				}
				if (func_53(uParam0->f_410[0]->f_7, 0))
				{
					task_horse_action(uParam0->f_410[0]->f_7, 2, &(uParam0->f_410[0]), 0);
				}
				func_164(uParam0->f_500[0], 0);
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 2;
			}
			break;
		case 2:
			if (func_26(&(uParam0->f_653)) > 0.3f)
			{
				if (func_53(uParam0->f_9, 0))
				{
					set_ped_combat_attributes(uParam0->f_9, 1, false);
					set_ped_combat_attributes(uParam0->f_9, 3, true);
					set_ped_combat_attributes(uParam0->f_9, 0, true);
					set_ped_combat_attributes(uParam0->f_9, 12, true);
					set_ped_combat_movement(uParam0->f_9, 1);
					set_ped_combat_range(uParam0->f_9, 2);
					set_blocking_of_non_temporary_events(uParam0->f_9, false);
					func_163(&(uParam0->f_9), &(uParam0->f_9.f_5), 1, 0, 0);
					task_combat_hated_targets_around_ped(uParam0->f_9, 150f, 0, 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 3;
			}
			func_1263(uParam0->f_9, vVar0, Global_1392388->f_3, 1, 1077936128);
			func_1263(&(uParam0->f_410[1]), vVar3, Global_35, 1, 1077936128);
			func_1263(uParam0->f_174, vVar0, Global_1392388->f_3, 1, 1077936128);
			break;
		case 3:
			if (func_26(&(uParam0->f_653)) > 4f)
			{
				if (func_53(&(uParam0->f_410[0]), 0))
				{
					if (is_ped_on_mount(&(uParam0->f_410[0])))
					{
						task_dismount_animal(&(uParam0->f_410[0]), 262144, 0, 0, 0, Global_35);
					}
					set_ped_combat_range(&(uParam0->f_410[0]), 1);
					set_ped_combat_attributes(&(uParam0->f_410[0]), 1, false);
					set_ped_combat_attributes(&(uParam0->f_410[0]), 3, true);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 4;
			}
			else
			{
				func_1263(uParam0->f_9, vVar0, Global_1392388->f_3, 1, 1077936128);
				func_1263(&(uParam0->f_500[1]), vVar3, Global_1392388->f_3, 1, 1077936128);
				func_1263(uParam0->f_174, vVar0, Global_1392388->f_3, 1, 1077936128);
			}
			break;
		case 4:
			if (func_53(&(uParam0->f_500[1]), 0))
			{
				set_blocking_of_non_temporary_events(&(uParam0->f_500[1]), false);
				task_combat_hated_targets_around_ped(&(uParam0->f_500[1]), 150f, 0, 0);
			}
			if (func_53(uParam0->f_174, 0))
			{
				set_blocking_of_non_temporary_events(uParam0->f_174, false);
				task_combat_hated_targets_around_ped(uParam0->f_174, 150f, 0, 0);
			}
			uParam0->f_652 = 5;
			break;
		case 5:
			if ((((func_53(&(uParam0->f_500[1]), 0) && !func_53(&(uParam0->f_500[0]), 0)) && !func_53(uParam0->f_174, 0)) && !func_53(&(uParam0->f_410[0]), 0)) && !func_53(&(uParam0->f_410[1]), 0))
			{
				set_ped_combat_range(&(uParam0->f_500[1]), 0);
				set_ped_combat_movement(&(uParam0->f_500[1]), 2);
				uParam0->f_652 = 9;
			}
			break;
	}
}

void func_867(var uParam0)
{
	vVar0 = { 1516.833f, -2119.48f, 42.5536f };
	vVar3 = { 1528.314f, -2121.788f, 42.8021f };
	vVar6 = { 1506.201f, -2121.028f, 43.693f };
	switch (uParam0->f_652)
	{
		case 0:
			if (get_entity_speed(uParam0->f_1) < 1f)
			{
				set_vehicle_provides_cover(uParam0->f_1, true);
				if (func_53(&(Local_51.f_5[0]), 0))
				{
					set_ped_combat_attributes(&(Local_51.f_5[0]), 1, false);
					set_ped_combat_attributes(&(Local_51.f_5[0]), 3, true);
					set_ped_sphere_defensive_area(&(Local_51.f_5[0]), vVar6, 10f, 0, 0, 0);
				}
				if (func_53(&(Local_51.f_5[1]), 0))
				{
					set_ped_combat_attributes(&(Local_51.f_5[1]), 1, false);
					set_ped_combat_attributes(&(Local_51.f_5[1]), 3, true);
					set_ped_config_flag(&(Local_51.f_5[1]), 246, true);
					set_ped_combat_attributes(&(Local_51.f_5[1]), 0, true);
					set_ped_combat_attributes(&(Local_51.f_5[1]), 12, true);
					set_ped_combat_movement(&(Local_51.f_5[1]), 1);
					set_ped_combat_range(&(Local_51.f_5[1]), 1);
					set_ped_sphere_defensive_area(&(Local_51.f_5[1]), vVar6, 10f, 0, 0, 0);
				}
				if (func_53(uParam0->f_174, 0))
				{
					set_ped_combat_attributes(uParam0->f_174, 1, false);
					set_ped_combat_attributes(uParam0->f_174, 3, true);
					set_ped_combat_attributes(uParam0->f_174, 0, true);
					set_ped_combat_attributes(uParam0->f_174, 12, true);
					set_ped_combat_movement(uParam0->f_174, 1);
					set_ped_combat_range(uParam0->f_174, 1);
					set_ped_sphere_defensive_area(uParam0->f_174, vVar3, 10f, 0, 0, 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 1;
			}
			break;
		case 1:
			if (func_26(&(uParam0->f_653)) > 0.5f)
			{
				if (func_53(uParam0->f_9, 0))
				{
					set_ped_config_flag(uParam0->f_9, 246, true);
					set_ped_combat_attributes(uParam0->f_9, 0, true);
					set_ped_combat_attributes(uParam0->f_9, 12, true);
					set_ped_combat_movement(uParam0->f_9, 1);
					set_ped_sphere_defensive_area(uParam0->f_9, vVar0, 3f, 0, 0, 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 2;
			}
			break;
		case 2:
			if (func_26(&(uParam0->f_653)) > 0.7f)
			{
				uParam0->f_652 = 3;
			}
			break;
		case 3:
			if (func_26(&(uParam0->f_653)) > 10f)
			{
				if (func_53(&(Local_51.f_5[1]), 0))
				{
					remove_ped_defensive_area(&(Local_51.f_5[1]), false);
					set_ped_combat_movement(&(Local_51.f_5[1]), 2);
					set_ped_combat_range(&(Local_51.f_5[1]), 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 4;
			}
			break;
		case 4:
			if (func_26(&(uParam0->f_653)) > 10f)
			{
				if (func_53(&(Local_51.f_5[0]), 0))
				{
					remove_ped_defensive_area(&(Local_51.f_5[0]), false);
					set_ped_combat_movement(&(Local_51.f_5[0]), 2);
					set_ped_combat_range(&(Local_51.f_5[0]), 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 5;
			}
			break;
		case 5:
			if (func_26(&(uParam0->f_653)) > 8f)
			{
				if (func_53(uParam0->f_174, 0))
				{
					remove_ped_defensive_area(uParam0->f_174, false);
					set_ped_combat_movement(uParam0->f_174, 2);
					set_ped_combat_range(uParam0->f_174, 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 6;
			}
			break;
		case 6:
			if (func_26(&(uParam0->f_653)) > 5f)
			{
				if (func_53(uParam0->f_9, 0))
				{
					remove_ped_defensive_area(uParam0->f_9, false);
					set_ped_combat_movement(uParam0->f_9, 2);
					set_ped_combat_range(uParam0->f_9, 0);
				}
				func_100(&(uParam0->f_653));
				uParam0->f_652 = 9;
			}
			break;
	}
}

bool func_868(int iParam0, int iParam1, int iParam2)
{
	if (!is_entity_dead(iParam0) && !is_entity_dead(iParam1))
	{
		if (is_ped_sitting_in_vehicle(iParam0, iParam1))
		{
			if (get_ped_in_vehicle_seat(iParam1, iParam2) == iParam0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_869(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

int func_870(char* sParam0, int iParam1, int iParam2)
{
	if (is_string_null_or_empty(sParam0))
	{
		return 0;
	}
	if (!_0xbc0884bc590951c7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_459(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1264(iVar1, sParam0, iParam1, iParam2);
		return iVar1;
	}
	return 0;
}

void func_871(int iParam0, int iParam1)
{
	if (!func_240(iParam0))
	{
		return;
	}
	iVar0 = func_241(iParam0);
	if (!_uiprompt_is_valid((*Global_1945938)[iVar0]->f_3))
	{
		return;
	}
	_uiprompt_set_allowed_action((*Global_1945938)[iVar0]->f_3, iParam1);
}

void func_872(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			if (uParam0->f_619 > 10f)
			{
				uParam0->f_619 = 10f;
			}
			break;
		case 2:
			if (uParam0->f_619 > 8f)
			{
				uParam0->f_619 = 8f;
			}
			break;
		case 3:
			if (uParam0->f_619 > 0f)
			{
				uParam0->f_619 = 0f;
			}
			break;
	}
}

float func_873(float fParam0, float fParam1, float fParam2)
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

void func_874(int iParam0, float fParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (func_53(iVar1, 1))
		{
			_0x06d26a96ca1bca75(iVar1, 3, fParam1, 0);
		}
		iVar0++;
	}
}

bool func_875(int iParam0, bool bParam1)
{
	if (bParam1 && !func_240(iParam0))
	{
		return false;
	}
	iVar0 = func_241(iParam0);
	if (!_uiprompt_has_hold_mode((*Global_1945938)[iVar0]->f_3))
	{
		return is_control_pressed(2, (*Global_1945938)[iVar0]->f_4);
	}
	return _uiprompt_is_hold_mode_running((*Global_1945938)[iVar0]->f_3);
}

void func_876(int iParam0)
{
	iVar0 = func_541(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	get_ped_nearby_peds(iVar0, &iVar1, -1, -1);
	iVar22 = 0;
	while (iVar22 < iVar1)
	{
		if (does_entity_exist(&(iVar1[iVar22])))
		{
			if (!is_ped_injured(&(iVar1[iVar22])))
			{
				if (((func_1265(&(iVar1[iVar22])) && vdist(get_offset_from_entity_in_world_coords(iParam0, 0f, 30f, 0f), get_entity_coords(&(iVar1[iVar22]), true, false)) < 30f) && !is_ped_fleeing(&(iVar1[iVar22]))) && !func_108(&(iVar1[iVar22]), 518218985))
				{
					task_smart_flee_coord(&(iVar1[iVar22]), get_offset_from_entity_in_world_coords(iParam0, 0f, 15f, 0f), 200f, -1, false, 1077936128);
					set_ped_keep_task(&(iVar1[iVar22]), true);
					set_ped_as_no_longer_needed(iVar1[iVar22]);
				}
			}
		}
		iVar22++;
	}
}

void func_877(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = _get_ped_in_draft_seat(iParam0, iVar0);
		if (func_53(iVar1, 1))
		{
			set_ped_config_flag(iVar1, 72, bParam1);
			if (bParam1)
			{
			}
		}
		iVar0++;
	}
}

void func_878(var uParam0)
{
	if (does_entity_exist(uParam0->f_656))
	{
		_0x0c6b89876262a99d(player_id(), uParam0->f_656);
		delete_object(&(uParam0->f_656));
	}
}

void func_879(var uParam0)
{
	if (!does_entity_exist(uParam0->f_656))
	{
		if (has_model_loaded(1077976463))
		{
			uParam0->f_656 = create_object(1077976463, get_entity_coords(uParam0->f_1, true, false), true, true, false, false, true);
			set_entity_visible(uParam0->f_656, false);
			set_entity_collision(uParam0->f_656, false, false);
			attach_entity_to_entity(uParam0->f_656, uParam0->f_1, 0, 0f, 3f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			_0xac22aa6df4d1c1de(player_id(), uParam0->f_656, -1082130432, -1082130432, 1, 2, 1);
		}
	}
}

char[] func_880(var uParam0)
{
	if (iLocal_24 != 8)
	{
		return func_194(iLocal_24);
	}
	if (!func_10(2))
	{
		return func_194(iLocal_24);
	}
	switch (iLocal_24)
	{
		case 8:
			iVar22 = 3;
			sVar0[0] = "prc_chrob_comp3_offroad1";
			sVar0[1] = "prc_chrob_comp3_offroad2";
			sVar0[2] = "prc_chrob_comp3_offroad3";
			break;
		case 2:
			iVar22 = 1;
			sVar0[0] = "prc_chrob_straw3_offroad1";
			break;
	}
	switch (iLocal_41)
	{
		case 0:
			iVar23 = 0;
			while (iVar23 < iVar22)
			{
				request_waypoint_recording(&(sVar0[iVar23]));
				iVar23++;
			}
			iLocal_41 = 1;
			break;
		case 1:
			iVar23 = 0;
			while (iVar23 < iVar22)
			{
				if (get_is_waypoint_recording_loaded(&(sVar0[iVar23])))
				{
					iVar24++;
				}
				iVar23++;
			}
			if (iVar24 == iVar22)
			{
				iLocal_41 = 2;
			}
			break;
		case 2:
			iVar23 = 0;
			while (iVar23 < iVar22)
			{
				if (waypoint_recording_get_coord(&(sVar0[iVar23]), 0, vVar6[iVar23]))
				{
					if (vdist(get_entity_coords(uParam0->f_1, true, false), *vVar6[iVar23]) < 20f && func_243(uParam0->f_1, *vVar6[iVar23], 0))
					{
						Local_51.f_2285 = &sVar0[iVar23];
						iLocal_41 = 3;
						return Local_51.f_2285;
					}
				}
				iVar23++;
			}
			break;
		case 3:
			return Local_51.f_2285;
	}
	return func_194(iLocal_24);
}

bool func_881(int iParam0, vector3 vParam1, char* sParam4, float fParam5)
{
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	if (func_120(vParam1))
	{
		return false;
	}
	if (!get_is_waypoint_recording_loaded(sParam4))
	{
		return false;
	}
	vVar6 = { get_entity_coords(iParam0, true, false) };
	if (waypoint_recording_get_num_points(sParam4, &iVar2))
	{
	}
	if (waypoint_recording_get_closest_waypoint(sParam4, vVar6, &iVar0))
	{
	}
	if (waypoint_recording_get_closest_waypoint(sParam4, vParam1, &iVar1))
	{
	}
	if (iVar0 == iVar1)
	{
		if (waypoint_recording_get_coord(sParam4, iVar0, &vVar9))
		{
			fVar3 = vdist(vVar6, vVar9);
		}
		if (waypoint_recording_get_coord(sParam4, iVar1, &vVar12))
		{
			fVar4 = vdist(vParam1, vVar12);
		}
		if (fVar3 >= fParam5)
		{
			return false;
		}
		if (fVar4 >= fParam5)
		{
			return true;
		}
		if (iVar0 == (iVar2 - 1))
		{
			if (waypoint_recording_get_coord(sParam4, iVar0, &vVar15))
			{
			}
			if (waypoint_recording_get_coord(sParam4, (iVar0 - 1), &Var18))
			{
			}
			vVar21 = { _get_object_offset_from_coords(vVar15, get_heading_from_vector_2d((vVar15.x - Var18), (vVar15.y - Var18.f_1)), 0f, (fParam5 + 1f), 0f) };
			vVar15 = { vVar21 };
		}
		else
		{
			if (iVar0 == 0)
			{
			}
			waypoint_recording_get_coord(sParam4, iVar0 + 1, &vVar15);
		}
		fVar5 = func_1266(vParam1 - vVar6, vVar15 - vVar6);
		if (fVar5 < 0f)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 > iVar1)
	{
		return true;
	}
	else
	{
		return false;
	}
	return false;
}

var func_882(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
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
	func_1267(sParam0, sParam1, iParam2);
	return uVar20;
}

bool func_883()
{
	if (func_686())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_884(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1268((Global_40.f_4283.f_325 + iParam0));
}

void func_885(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_883())
	{
		func_882(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_882(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

struct<5> func_886(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1269(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_637(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_890(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_971(bParam1) };
			if (bParam2 && func_1270(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_888(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_888(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_889(iParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_1271(bParam1) };
			switch (func_633(iParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		case -2130996531:
			if (func_1272(iParam0, -1823706425))
			{
				Var0 = { func_890(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1272(iParam0, -1483207246))
			{
				Var0 = { func_890(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		default:
			if (_inventory_fits_slot_id(iParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (_inventory_fits_slot_id(iParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_1273(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_887(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		case 1:
			return 1704602624;
		case 2:
			return 1214181762;
		case 3:
			return -430578371;
		case 4:
			return -730381952;
		case 5:
			return -253503777;
		case 6:
			return 1352275534;
		case 7:
			return 1666399168;
		case 8:
			return -1911121386;
		case 9:
			return 1756656691;
		case 10:
			return -1774867076;
		case 11:
			return -421952220;
		case 12:
			return -1087003323;
		case 13:
			return 1231618917;
		case 14:
			return -1183777174;
		case 15:
			return -841767082;
		case 16:
			return 1043717005;
		case 17:
			return 142663787;
		case 18:
			return 1718143051;
		case 19:
			return -6605744;
		case 20:
			return 953047564;
		case 21:
			return 769706682;
		case 22:
			return 1635590003;
		case 23:
			return -2047978619;
		case 24:
			return -586319254;
		case 25:
			return 249896112;
		case 26:
			return -1060513333;
		case 27:
			return 1317351007;
		case 28:
			return -500478573;
		case 29:
			return -806573802;
		case 30:
			return -1109949204;
		case 31:
			return -740156546;
		case 32:
			return -684532710;
		case 33:
			return 1158805436;
		case 34:
			return -559473670;
		case 35:
			return -797147251;
		case 36:
			return -382216265;
		case 37:
			return 1419177114;
		case 38:
			return 1704297235;
		case 39:
			return -1139016418;
		case 40:
			return 897705377;
		case 41:
			return 17961769;
		case 42:
			return 205582207;
		case 43:
			return 900740963;
		case 44:
			return -1369589344;
		case 45:
			return -1695823795;
		case 46:
			return -41453074;
		case 47:
			return 539767227;
		case 48:
			return 1210490314;
		case 49:
			return -399684751;
		case 50:
			return 2138893455;
		case 51:
			return -1617010487;
		case 52:
			return -832377028;
		case 53:
			return -428040245;
		case 54:
			return 1279288897;
		case 55:
			return -594897905;
		case 56:
			return -1360459240;
		case 57:
			return 1838428396;
		case 58:
			return -1467846997;
		case 59:
			return -490610263;
		case 60:
			return -1885413079;
		case 61:
			return 708884155;
		case 62:
			return -134459952;
		case 63:
			return -1912136700;
		case 64:
			return -1268031552;
		case 65:
			return 1177953227;
		case 66:
			return 2130805296;
		case 67:
			return 38093490;
		case 68:
			return -269153218;
		case 69:
			return -1995068011;
		case 70:
			return -164284834;
		case 71:
			return 1446463345;
		case 72:
			return 1501315823;
		case 73:
			return -750379482;
		case 74:
			return -929560937;
		case 75:
			return 608323241;
		case 76:
			return 1030796013;
		case 77:
			return 1915057434;
		case 78:
			return -1582276476;
		case 79:
			return 692059311;
		case 80:
			return 2062839241;
		case 81:
			return -1884531872;
		case 82:
			return -866434534;
		case 83:
			return -1252192421;
		case 84:
			return 1243288963;
		case 85:
			return -1953772189;
		case 86:
			return 754411745;
		case 87:
			return 545309006;
		case 88:
			return -1089810811;
		case 89:
			return 1957869400;
		case 90:
			return -241412332;
		case 91:
			return -1548010959;
		case 92:
			return 550150488;
		case 93:
			return 946565453;
		case 94:
			return 434443248;
		case 95:
			return -1709914938;
		case 96:
			return 366686112;
		case 97:
			return -1370063350;
		case 98:
			return 2126829550;
		case 99:
			return 226552910;
		case 100:
			return 721193431;
		case 101:
			return -315672460;
		case 102:
			return 623544501;
		case 103:
			return 259556714;
		case 104:
			return -2125361825;
		case 105:
			return 1078230356;
		case 106:
			return 1885364811;
		case 107:
			return 1630382737;
		case 108:
			return 1738245512;
		case 109:
			return 1540262216;
		case 110:
			return 1016871472;
		case 111:
			return 13829069;
		case 112:
			return 737051352;
		case 113:
			return 1734614610;
		case 114:
			return -208715295;
		case 115:
			return 1435062936;
		case 116:
			return 1483055553;
		case 117:
			return 380335002;
		case 118:
			return -1079385677;
		case 119:
			return 676610411;
		case 120:
			return 2145419552;
		case 121:
			return 657238733;
		case 122:
			return 1850579281;
		case 123:
			return -1923957384;
		case 124:
			return -1142828108;
		case 125:
			return -1400618531;
		case 126:
			return -1433857135;
		case 127:
			return 209987206;
		case 128:
			return 1686943047;
		case 129:
			return -59178517;
		case 130:
			return 2134884601;
		case 131:
			return 651707517;
		case 132:
			return -633788535;
		case 133:
			return 116394463;
		case 134:
			return -1196973875;
		case 135:
			return 801752086;
		case 136:
			return 184475332;
		case 137:
			return -1880922659;
		case 138:
			return -898138634;
		case 139:
			return -2107418444;
		case 140:
			return -679970099;
		case 141:
			return -1531392549;
		case 142:
			return 1612483376;
		case 143:
			return 463930900;
		case 144:
			return -632148238;
		case 145:
			return 55303249;
		case 146:
			return 2108322089;
		case 147:
			return -1358896714;
		case 148:
			return 74475632;
		case 149:
			return -28710953;
		case 150:
			return -1791599168;
		case 151:
			return 1605938169;
		case 152:
			return 1255242276;
		case 153:
			return 636467727;
		case 154:
			return -1567688525;
		case 155:
			return -77886679;
		case 156:
			return -1057900679;
		case 157:
			return -1960888134;
		case 158:
			return -1719717295;
		case 159:
			return -1779244911;
		case 160:
			return -670540863;
		case 161:
			return 223362311;
		case 162:
			return 1150824567;
		case 163:
			return 974471191;
		case 164:
			return 1989683968;
		case 165:
			return 254804477;
		case 166:
			return 192057609;
		case 167:
			return 1553957817;
		case 168:
			return 2099829015;
		case 169:
			return -840300007;
		case 170:
			return -1948423372;
		case 171:
			return 981083654;
		case 172:
			return 1283289876;
		case 173:
			return -606884489;
		case 174:
			return -100418572;
		case 175:
			return 663645231;
		case 176:
			return 1442217033;
		case 177:
			return 1410986244;
		case 178:
			return 847409839;
		case 179:
			return 923926911;
		case 180:
			return 109995826;
		case 181:
			return -747412737;
		case 182:
			return 1114341727;
		case 183:
			return -539456939;
		case 184:
			return 45887121;
		case 185:
			return 913271624;
		case 186:
			return -1652812715;
		case 187:
			return -1791365775;
		case 188:
			return -979299941;
		case 189:
			return 713062001;
		case 190:
			return -575045963;
		case 191:
			return 1852965262;
		case 192:
			return -1398836354;
		case 193:
			return -1829885298;
		case 194:
			return -1773850357;
		case 195:
			return -564258009;
		case 196:
			return 2016532685;
		case 197:
			return -1070563798;
		case 198:
			return -1619221343;
		case 199:
			return -345571691;
		case 200:
			return 544288390;
		case 201:
			return 159578294;
		case 202:
			return -76852849;
		case 203:
			return 1110295244;
		case 204:
			return 2104563477;
		case 205:
			return 1947827651;
		case 206:
			return -933072766;
		case 207:
			return 2104388648;
		case 208:
			return -1677140601;
		case 209:
			return -2133097881;
		case 210:
			return -826678792;
		case 211:
			return -513522325;
		case 212:
			return 1970588249;
		case 213:
			return -2080032591;
		case 214:
			return 1758847745;
		case 215:
			return 895010282;
		case 216:
			return -511891179;
		case 217:
			return -1207567168;
		case 218:
			return -1315407613;
		case 219:
			return 1786352060;
		case 220:
			return -833319691;
		case 221:
			return 1591329969;
		case 222:
			return 2123222014;
		case 223:
			return -1578397674;
		case 224:
			return 1473261684;
		case 225:
			return -241855024;
		case 226:
			return 12999093;
		case 227:
			return -6796437;
		case 228:
			return -268116367;
		case 229:
			return -636470867;
		case 230:
			return 1737668280;
		case 231:
			return 892807236;
		case 232:
			return -733247890;
		case 233:
			return 24047176;
		case 234:
			return -1561999014;
		case 235:
			return -2052774042;
		case 236:
			return -997150586;
		case 237:
			return -1189569496;
		case 238:
			return 46488141;
		case 239:
			return 1046566686;
		case 240:
			return 325139909;
		case 241:
			return -1585141069;
		case 242:
			return 802754820;
		case 243:
			return 1415981582;
		case 244:
			return -1886147520;
		case 245:
			return 654877947;
		case 246:
			return -415648720;
		case 247:
			return 1221327846;
		case 248:
			return 923162715;
		case 249:
			return 625423581;
		case 250:
			return 326668608;
		case 251:
			return 669530755;
		case 252:
			return 429759982;
		case 253:
			return -2111934838;
		case 254:
			return 1886178087;
		case 255:
			return 1587783573;
		case 256:
			return -279722001;
		case 257:
			return 1310070322;
		case 258:
			return 724026534;
		case 259:
			return 137387616;
		case 260:
			return -653439684;
		case 261:
			return 1376835592;
		case 262:
			return -1824203570;
		case 263:
			return -1654197998;
		case 264:
			return 798987653;
		case 265:
			return 976923323;
		case 266:
			return 1167442289;
		case 267:
			return 986998820;
		case 268:
			return -2119169513;
		case 269:
			return -2015960939;
		case 270:
			return 1132377945;
		case 271:
			return 739936401;
		case 272:
			return 1201880974;
		case 273:
			return 819728896;
		case 274:
			return 1746010219;
		case 275:
			return 1433393959;
		case 276:
			return -1287636759;
		case 277:
			return -706917073;
		case 278:
			return -2166805;
		case 279:
			return -1391602433;
		case 280:
			return 1782075221;
		case 281:
			return 1282544585;
		case 282:
			return 1732594027;
		case 283:
			return -1058817012;
		case 284:
			return 1090546265;
		case 285:
			return -1783120823;
		case 286:
			return -1535745896;
		case 287:
			return -2086922122;
		case 288:
			return -1675198649;
		case 289:
			return 1189497682;
		case 290:
			return -1565675519;
		case 291:
			return -268973591;
		case 292:
			return 1039159916;
		case 293:
			return 1111816631;
		case 294:
			return 405591388;
		case 295:
			return 897456793;
		case 296:
			return 104187473;
		case 297:
			return 773808542;
		case 298:
			return -1120669954;
		case 299:
			return -1389278274;
		case 300:
			return 552979403;
		case 301:
			return -1571578784;
		case 302:
			return -708312114;
		case 303:
			return 688823508;
		case 304:
			return -1622147240;
		case 305:
			return 830292162;
		case 306:
			return 226276782;
		case 307:
			return -678416628;
		case 308:
			return -1098528034;
		case 309:
			return 316207340;
		case 310:
			return -1909200748;
		case 311:
			return -939652363;
		case 312:
			return -1990194462;
		case 313:
			return -375447933;
		case 314:
			return 537014919;
		case 315:
			return 1784584921;
		case 316:
			return -140655024;
		case 317:
			return 1084182731;
		case 318:
			return -1045471300;
		case 319:
			return 1617414719;
		case 320:
			return -787761753;
		case 321:
			return -490616606;
		case 322:
			return 1491346514;
		case 323:
			return -1360128126;
		case 324:
			return -1311702610;
		case 325:
			return -904250715;
		case 326:
			return 1034665895;
		case 327:
			return -101524555;
		case 328:
			return 1419152594;
		case 329:
			return -451359317;
		case 330:
			return -1915385310;
		case 331:
			return 1315162488;
		case 332:
			return -361152079;
		case 333:
			return -2041626192;
		case 334:
			return -2077812539;
		case 335:
			return -1371514637;
		case 336:
			return 1730017037;
		case 337:
			return 892816668;
		case 338:
			return -1994943603;
		case 339:
			return 603133554;
		case 340:
			return -30160144;
		case 341:
			return -1248299493;
		case 342:
			return 727393558;
		case 343:
			return 755611221;
		case 344:
			return -170255458;
		case 345:
			return 1011151573;
		case 346:
			return 1122339631;
		case 347:
			return 454815308;
		case 348:
			return 990701735;
		case 349:
			return -246340825;
		case 350:
			return -1410671073;
		case 351:
			return 1547608292;
		case 352:
			return -714132970;
		case 353:
			return 732290690;
		case 354:
			return 971340545;
		case 355:
			return -234132662;
		case 356:
			return -2143057988;
		case 357:
			return -993947465;
		case 358:
			return -486552269;
		case 359:
			return -1156317860;
		case 360:
			return 1229625803;
		case 361:
			return -388596167;
		case 362:
			return -1204639465;
		case 363:
			return -1384685096;
		case 364:
			return -2026728113;
		case 365:
			return -1228057307;
		case 366:
			return 1835126290;
		case 367:
			return 1890833594;
		case 368:
			return -751549960;
		case 369:
			return -1682270750;
		case 370:
			return -1839865333;
		case 371:
			return -1990383629;
		case 372:
			return 1712094016;
		case 373:
			return 1532953697;
		case 374:
			return 1620318083;
		case 375:
			return -307230331;
		case 376:
			return -1034549620;
		case 377:
			return -1293064293;
		case 378:
			return -1540142553;
		case 379:
			return -1769886012;
		case 380:
			return -1983081126;
		case 381:
			return -1106117124;
		case 382:
			return -1873108338;
		case 383:
			return -2097543219;
		case 384:
			return 155413195;
		case 385:
			return -1162387149;
		case 386:
			return 1728382685;
		case 387:
			return -649335959;
		case 388:
			return -1876502240;
		case 389:
			return -2107032155;
		case 390:
			return 1570861011;
		case 391:
			return 1075981185;
		case 392:
			return 960195961;
		case 393:
			return 1150460649;
		case 394:
			return 1689424794;
		case 395:
			return 619103418;
		case 396:
			return 1355448197;
		case 397:
			return 1681762005;
		case 398:
			return 1026887814;
		case 399:
			return 354352628;
		case 400:
			return 1519366642;
		case 401:
			return -82757515;
		case 402:
			return 386306655;
		case 403:
			return 1243962119;
		case 404:
			return 756214903;
		case 405:
			return -718417579;
		case 406:
			return -1445516411;
		case 407:
			return 1232060796;
		case 408:
			return -672392892;
		case 409:
			return 1465341584;
		case 410:
			return -427758369;
		case 411:
			return -735647142;
		case 412:
			return 1535838048;
		case 413:
			return -602272282;
		case 414:
			return 2051264661;
		case 415:
			return 487172188;
		case 416:
			return 282270687;
		case 417:
			return 1607708943;
		case 418:
			return 1686264939;
		case 419:
			return 314786149;
		case 420:
			return 1402841185;
		case 421:
			return 1099170772;
		case 422:
			return 2125676786;
		case 423:
			return -363896735;
		case 424:
			return -468790222;
		case 425:
			return -1779133048;
		case 426:
			return 1732537631;
		case 427:
			return 1755095401;
		case 428:
			return 835771095;
		case 429:
			return 1963317232;
		case 430:
			return 259627919;
		case 431:
			return 1299075397;
		case 432:
			return -1509094230;
		case 433:
			return 61132362;
		case 434:
			return 1549741908;
		case 435:
			return 288484254;
		case 436:
			return -1877032947;
		case 437:
			return -1395676456;
		case 438:
			return 1136146715;
		case 439:
			return 468034421;
		case 440:
			return 1079459546;
		case 441:
			return -140369351;
		case 442:
			return 1822341990;
		case 443:
			return 1219701681;
		case 444:
			return 1601295268;
		case 445:
			return -1692460667;
		case 446:
			return 1471419228;
		case 447:
			return 907446160;
		case 448:
			return -1126482585;
		case 449:
			return 1911050315;
		case 450:
			return -1343525599;
		case 451:
			return 1261891225;
		case 452:
			return 763162704;
		case 453:
			return 1335861197;
		case 454:
			return 526744654;
		case 455:
			return -1177461517;
		case 456:
			return -241638635;
		case 457:
			return 1024262875;
		case 458:
			return 853355463;
		case 459:
			return -337288221;
		case 460:
			return 361381308;
		case 461:
			return -1264898804;
		case 462:
			return -585289073;
		case 463:
			return 1423542233;
		case 464:
			return -948489286;
		case 465:
			return 2063859257;
		case 466:
			return -1652627327;
		case 467:
			return -1959697839;
		case 468:
			return -1532267859;
		case 469:
			return -1410062763;
		case 470:
			return -901428716;
		case 471:
			return -1628873469;
		case 472:
			return 144855571;
		case 473:
			return -617589883;
		case 474:
			return -1306457086;
		case 475:
			return 1713542477;
		case 476:
			return -305542365;
		case 477:
			return 1985390213;
		case 478:
			return -2145069367;
		case 479:
			return -1674390752;
		case 480:
			return -2117214398;
		case 481:
			return 1880805647;
		case 482:
			return -62390436;
		case 483:
			return 1815288415;
		case 484:
			return 196214097;
		case 485:
			return -201958220;
		case 486:
			return 244353594;
		case 487:
			return 302954672;
		case 488:
			return -1870144662;
		case 489:
			return 257892944;
		case 490:
			return -607182722;
		case 491:
			return -13254502;
		case 492:
			return 1400281261;
		case 493:
			return 1601515402;
		case 494:
			return -940704970;
		case 495:
			return -548371721;
		case 496:
			return -1022384613;
		case 497:
			return -357406394;
		case 498:
			return 1077068189;
		case 499:
			return -782241404;
		case 500:
			return 1669853467;
		case 501:
			return 1592019450;
		case 502:
			return 635273153;
		case 503:
			return -1559225678;
		case 504:
			return -266425508;
		case 505:
			return 1117400455;
		case 506:
			return 454332195;
		case 507:
			return -1328061889;
		case 508:
			return 561650932;
		case 509:
			return 256105670;
		case 510:
			return 1976779618;
		case 511:
			return -269095126;
		case 512:
			return 2145617267;
		case 513:
			return 1150213537;
		case 514:
			return 1598825281;
		case 515:
			return -712527121;
		case 516:
			return 1308553072;
		case 517:
			return 852866398;
		case 518:
			return -1794417972;
		case 519:
			return 293062146;
		case 520:
			return 95360094;
		case 521:
			return 807631773;
		case 522:
			return 1603958275;
		case 523:
			return 860052020;
		case 524:
			return -1885979781;
		case 525:
			return 746147970;
		case 526:
			return 666663006;
		case 527:
			return -2096186453;
		case 528:
			return 859409444;
		case 529:
			return -671427187;
		case 530:
			return 100192478;
		case 531:
			return 307812616;
		case 532:
			return 1670843243;
		case 533:
			return 899615863;
		case 534:
			return -298901850;
		case 535:
			return 1379186917;
		case 536:
			return -817206030;
		case 537:
			return -1150323212;
		case 538:
			return -247466821;
		case 539:
			return 427124242;
		case 540:
			return 855418120;
		case 541:
			return -777015093;
		case 542:
			return -722462870;
		case 543:
			return -937454324;
		case 544:
			return -339438116;
		case 545:
			return 2135639035;
		case 546:
			return 1254273765;
		case 547:
			return -792172668;
		case 548:
			return 1905987493;
		case 549:
			return 495693044;
		case 550:
			return -1693422950;
		case 551:
			return -205873076;
		case 552:
			return -2143114654;
		case 553:
			return -1420574021;
		case 554:
			return -1959250381;
		case 555:
			return -1088328663;
		case 556:
			return 513602003;
		case 557:
			return 359221401;
		case 558:
			return 1005272;
		case 559:
			return 1583044470;
		case 560:
			return 348853959;
		case 561:
			return 1045621973;
		case 562:
			return 1084576580;
		case 563:
			return 1651573695;
		case 564:
			return 1463321587;
		case 565:
			return -997505963;
		case 566:
			return -1649851713;
		case 567:
			return -386012962;
		case 568:
			return 1386101789;
		case 569:
			return 1227915917;
		case 570:
			return -218846335;
		case 571:
			return -352578118;
		case 572:
			return 1426626782;
		case 573:
			return -714081520;
		case 574:
			return 74547781;
		case 575:
			return 1271463052;
		case 576:
			return 1983140194;
		case 577:
			return 677262775;
		case 578:
			return -832337898;
		case 579:
			return -319249747;
		case 580:
			return -16955722;
		case 581:
			return -1535425646;
		case 582:
			return -1063641743;
		case 583:
			return -1041133401;
		case 584:
			return 1380479304;
		case 585:
			return 600890828;
		case 586:
			return 733333190;
		case 587:
			return 1843035435;
		case 588:
			return -304127320;
		case 589:
			return 122470371;
		case 590:
			return 0;
		case 591:
			return -1591664384;
		case 592:
			return -673000374;
		case 593:
			return -1150938404;
		case 594:
			return -1756997214;
		case 595:
			return -813824107;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

bool func_888(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1274(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_889(int iParam0, var uParam1, int iParam2)
{
	if (func_816(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_890(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_636(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_960(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_891(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1275(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1273(*uParam1, &Var0, bParam6, 0))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_645(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_960(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_892(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_1016(iParam0))
	{
		return false;
	}
	if (!func_645(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

void func_893(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1199(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

char* func_894()
{
	return _uilog_get_cached_objective();
}

int func_895(var uParam0)
{
	return uParam0->f_2067;
}

float func_896(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = atan2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -90f;
	}
	else
	{
		fVar0 = 90f;
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 360f);
		}
	}
	return fVar0;
}

int func_897(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1276(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_898(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1277(iParam0, iParam1))
		{
			if (func_1278(iParam0, iParam1))
			{
				if (func_1279(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1280(iParam0);
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

bool func_899(int iParam0)
{
	return false;
}

int func_900(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, bool bParam7)
{
	bVar0 = func_1281(iParam3, 1);
	bVar1 = func_1281(iParam3, 2);
	bVar2 = !func_1281(iParam3, 4);
	bVar3 = func_1281(iParam3, 8);
	bVar4 = !func_1281(iParam3, 16);
	bVar5 = func_1281(iParam3, 32);
	bVar6 = func_1281(iParam3, 64);
	return func_344(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, fParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_901(int iParam0)
{
	set_ped_combat_movement(iParam0, 1);
	set_ped_combat_attributes(iParam0, 5, true);
	set_ped_combat_attributes(iParam0, 0, true);
	set_ped_combat_attributes(iParam0, 12, true);
	set_ped_combat_attributes(iParam0, 14, false);
	set_ped_combat_attributes(iParam0, 111, true);
	set_entity_load_collision_flag(iParam0, 1);
	set_ped_keep_task(iParam0, true);
}

void func_902(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_623(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

bool func_903(int iParam0)
{
	return true;
}

void func_904(int iParam0)
{
	set_ped_combat_movement(iParam0, 1);
	set_ped_combat_attributes(iParam0, 5, true);
	set_ped_combat_attributes(iParam0, 0, true);
	set_ped_combat_attributes(iParam0, 12, true);
	set_ped_combat_attributes(iParam0, 14, false);
	set_ped_combat_attributes(iParam0, 111, true);
	set_entity_load_collision_flag(iParam0, 1);
	set_ped_keep_task(iParam0, true);
}

void func_905(int iParam0, int iParam1)
{
	func_1282(iParam0, iParam1);
}

void func_906(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1283(iParam0);
		func_1284(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_ammo1_type") || (bParam3 && decor_get_int(iParam0, "loot_ammo1_type") == iParam1))
	{
		decor_set_int(iParam0, "loot_ammo1_type", iParam1);
		decor_set_int(iParam0, "loot_ammo1_amt", iParam2);
	}
	else if (!decor_exist_on(iParam0, "loot_ammo2_type") || (bParam3 && decor_get_int(iParam0, "loot_ammo2_type") == iParam1))
	{
		decor_set_int(iParam0, "loot_ammo2_type", iParam1);
		decor_set_int(iParam0, "loot_ammo2_amt", iParam2);
	}
	else if (!decor_exist_on(iParam0, "loot_ammo3_type") || (bParam3 && decor_get_int(iParam0, "loot_ammo3_type") == iParam1))
	{
		decor_set_int(iParam0, "loot_ammo3_type", iParam1);
		decor_set_int(iParam0, "loot_ammo3_amt", iParam2);
	}
}

bool func_907(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1283(iParam0);
		return func_1284(iParam0, 2084597891, iParam1, iVar0);
	}
	return decor_set_int(iParam0, "loot_money", iParam1);
}

void func_908(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (does_entity_exist(iParam0) && is_entity_a_ped(iParam0))
	{
		iVar0 = func_1283(iParam0);
		func_1284(iParam0, iParam1, iParam2, iVar0);
	}
	else if (!decor_exist_on(iParam0, "loot_item_type1"))
	{
		decor_set_int(iParam0, "loot_item_type1", iParam1);
		decor_set_int(iParam0, "loot_item_amt1", iParam2);
		decor_set_int(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!decor_exist_on(iParam0, "loot_item_type2"))
	{
		decor_set_int(iParam0, "loot_item_type2", iParam1);
		decor_set_int(iParam0, "loot_item_amt2", iParam2);
		decor_set_int(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

bool func_909()
{
	if (_get_number_of_references_of_script_with_name_hash(1555341073) > 0)
	{
		return true;
	}
	return false;
}

Vector3 func_910(int iParam0)
{
	if (_get_number_of_references_of_script_with_name_hash(1555341073) > 0)
	{
		switch (iParam0)
		{
			case 0:
				return 1429.894f, -2245.608f, 42.0677f;
			case 1:
				return 1432.3f, -2249.252f, 42.2208f;
			case 2:
				return 1427.249f, -2249.942f, 41.7828f;
			case 3:
				return 1425.844f, -2248.622f, 41.7429f;
		}
	}
	return 0f, 0f, 0f;
}

void func_911(int iParam0)
{
	set_ped_combat_attributes(iParam0, 5, true);
	set_ped_combat_attributes(iParam0, 14, false);
	set_entity_load_collision_flag(iParam0, 1);
	_set_entity_something(iParam0, true);
	set_ped_keep_task(iParam0, true);
	set_combat_float(iParam0, 2, get_random_float_in_range(30f, 50f));
	set_ped_firing_pattern(iParam0, -1422700276);
}

int func_912(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

bool func_913(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_914(int iParam0)
{
	set_ped_combat_movement(iParam0, 1);
	set_ped_combat_attributes(iParam0, 5, true);
	set_ped_combat_attributes(iParam0, 0, true);
	set_ped_combat_attributes(iParam0, 12, true);
	set_ped_combat_attributes(iParam0, 14, false);
	set_ped_combat_attributes(iParam0, 111, true);
	set_entity_load_collision_flag(iParam0, 1);
	set_ped_keep_task(iParam0, true);
	set_combat_float(iParam0, 2, get_random_float_in_range(30f, 50f));
}

float func_915(var uParam0)
{
	return uParam0->f_23;
}

bool func_916(var uParam0, int iParam1)
{
	if (func_1285(uParam0))
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

void func_917(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1134(uParam0, 134217728);
	}
	else
	{
		func_1133(uParam0, 134217728);
	}
}

bool func_918(var uParam0, var uParam1)
{
	if (func_831(*uParam0, 0, &(uParam1->f_2069), &uVar0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_919(var uParam0, var uParam1)
{
	if (!func_205(*uParam0, 0, 1))
	{
		return false;
	}
	if (func_831(*uParam0, 0, &(uParam1->f_2069), &uVar0, 0, 0))
	{
		return true;
	}
	return false;
}

bool func_920()
{
	if (func_834(4))
	{
		return Global_1935630->f_27;
	}
	return func_1286();
}

Vector3 func_921(int iParam0)
{
	if (!does_cam_exist(iParam0))
	{
		vVar0 = { get_gameplay_cam_rot(2) };
	}
	else
	{
		vVar0 = { get_cam_rot(iParam0, 2) };
	}
	fVar3 = sin(vVar0.z);
	fVar4 = cos(vVar0.z);
	fVar5 = sin(vVar0.x);
	fVar6 = cos(vVar0.x);
	return func_1287((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

bool func_922(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	fVar0 = vmag(vParam3 - vParam0);
	vVar1 = { vParam3 - vParam0 / Vector(fVar0, fVar0, fVar0) };
	vVar4 = { vParam0 - vParam6 };
	fVar7 = vmag(vVar4);
	if (fVar0 < (fVar7 - fParam9))
	{
		return false;
	}
	fVar8 = (func_1288(vVar4, vVar4) - (fParam9 * fParam9));
	if (fVar8 <= 0f)
	{
		return true;
	}
	fVar9 = func_1288(vVar4, vVar1);
	if (fVar9 > 0f)
	{
		return false;
	}
	fVar10 = ((fVar9 * fVar9) - fVar8);
	if (fVar10 < 0f)
	{
		return false;
	}
	return true;
}

bool func_923(var uParam0, var uParam1)
{
	if (func_1289(uParam0, uParam1) || (func_831(*uParam0, 0, &(uParam1->f_2069), &uVar0, 0, 0) && !func_10(8)))
	{
		return true;
	}
	if (!is_entity_dead(uParam0->f_7) && _get_rider_of_mount(uParam0->f_7, true) == Global_35)
	{
		return true;
	}
	return false;
}

void func_924(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		func_826(uParam0->f_410[iVar0], iVar0, uParam0->f_613);
		iVar0++;
	}
}

bool func_925(var uParam0, var uParam1)
{
	if (func_831(*uParam0, 0, &(uParam1->f_2069), &uVar0, 0, 0) && !func_10(8))
	{
		return true;
	}
	return false;
}

void func_926(var uParam0, bool bParam1)
{
	if (func_10(1) || (!func_24(iLocal_25) && !iLocal_25 == 13))
	{
		return;
	}
	if (uParam0->f_1 != Global_1392388->f_5)
	{
		return;
	}
	waypoint_recording_get_closest_waypoint(func_194(iLocal_24), get_offset_from_entity_in_world_coords(uParam0->f_1, 0f, 22f, 0f), &iVar0);
	waypoint_recording_get_coord(func_194(iLocal_24), iVar0, &vVar1);
	if (func_120(vVar1))
	{
		return;
	}
	if (iLocal_49 > 0 && iLocal_49 < 16)
	{
		if (func_108(uParam0->f_174, -653332088))
		{
			clear_ped_tasks(uParam0->f_174, 1, 0);
		}
		return;
	}
	switch (iLocal_48)
	{
		case 0:
			if (!func_10(524288))
			{
				if ((does_entity_exist(Local_51.f_2385) && !is_ped_on_mount(Global_35)) && vdist(get_entity_coords(Local_51.f_2385, true, false), vVar1) < 6f)
				{
					if (bParam1 && vdist(get_entity_coords(Local_51.f_2385, true, false), Global_36) < 10f)
					{
						func_112(&Local_51, iLocal_24, 1);
						iLocal_48 = 9;
					}
					else
					{
						Local_51.f_2390 = { vVar1 };
						func_101(&Local_51);
						func_72(524288);
						func_100(&(Local_51.f_2188));
						if (!func_247(1) && !Local_51.f_2417)
						{
							func_97(&(Local_51.f_2286), iLocal_25, 26);
							Local_51.f_2417 = 1;
						}
						iLocal_48 = 1;
					}
				}
				else if (func_1290(uParam0->f_1, vVar1, 6f))
				{
					Local_51.f_2390 = { vVar1 };
					func_101(&Local_51);
					func_72(524288);
					Local_51.f_2386 = get_last_driven_vehicle();
					func_100(&(Local_51.f_2188));
					if (!func_247(1) && !Local_51.f_2418)
					{
						func_97(&(Local_51.f_2286), iLocal_25, 27);
						Local_51.f_2418 = 1;
					}
					iLocal_48 = 4;
				}
				else if (get_number_of_fires_in_range(vVar1, 5f) > 0)
				{
					Local_51.f_2390 = { vVar1 };
					func_101(&Local_51);
					func_72(524288);
					iLocal_48 = 7;
				}
			}
			break;
		case 1:
			if (func_26(&(Local_51.f_2188)) > 5f)
			{
				if (func_53(uParam0->f_174, 0) && func_53(Local_51.f_2385, 0))
				{
					set_ped_combat_attributes(uParam0->f_174, 30, true);
					task_shoot_at_coord(uParam0->f_174, get_offset_from_entity_in_world_coords(Local_51.f_2385, 0f, 0f, 2f), -1, -957453492, 1);
					open_sequence_task(&iVar7);
					task_stand_still(0, 1000);
					task_smart_flee_coord(0, get_entity_coords(uParam0->f_174, true, false), 100f, 10000, false, 1077936128);
					close_sequence_task(iVar7);
					task_perform_sequence(Local_51.f_2385, iVar7);
					clear_sequence_task(&iVar7);
				}
				func_100(&(Local_51.f_2188));
				iLocal_48 = 2;
			}
			break;
		case 2:
			if (vdist(Global_36, get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) < 2f)
			{
				if (func_53(uParam0->f_174, 0))
				{
					task_aim_gun_at_entity(uParam0->f_174, Global_35, -1, 0, 1);
				}
				func_72(32768);
			}
			func_1291(uParam0->f_1, vVar1, 6f);
			if ((vdist(get_entity_coords(Local_51.f_2385, true, false), Local_51.f_2390) > 6f && func_26(&(Local_51.f_2188)) > 3f) || func_26(&(Local_51.f_2188)) > 10f)
			{
				iLocal_48 = 8;
			}
			break;
		case 4:
			if (func_26(&(Local_51.f_2188)) > 5f)
			{
				if (func_53(uParam0->f_174, 0) && func_1292(uParam0->f_1, vVar1, 6f) > 0)
				{
					vVar4 = { vVar1 };
					vVar4.f_2 = (vVar4.z + 5f);
					set_ped_combat_attributes(uParam0->f_174, 30, true);
					task_shoot_at_coord(uParam0->f_174, vVar4, -1, -957453492, 1);
				}
				func_100(&(Local_51.f_2188));
				iLocal_48 = 5;
			}
			break;
		case 5:
			if (vdist(Global_36, get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) < 2f)
			{
				if (func_53(uParam0->f_174, 0))
				{
					task_aim_gun_at_entity(uParam0->f_174, Global_35, -1, 0, 1);
				}
				func_72(32768);
			}
			if (!func_1290(uParam0->f_1, vVar1, 6f) && func_26(&(Local_51.f_2188)) > 3f)
			{
				iLocal_48 = 8;
			}
			break;
		case 7:
			if (vdist(Global_36, get_offset_from_entity_in_world_coords(uParam0->f_1, uParam0->f_601)) < 2f)
			{
				if (func_53(uParam0->f_174, 0))
				{
					task_aim_gun_at_entity(uParam0->f_174, Global_35, -1, 0, 1);
				}
				func_72(32768);
			}
			if (get_number_of_fires_in_range(Local_51.f_2390, 10f) == 0)
			{
				iLocal_48 = 8;
			}
			break;
		case 8:
			if (func_108(uParam0->f_174, -653332088))
			{
				clear_ped_tasks(uParam0->f_174, 1, 0);
			}
			func_21(524288);
			func_112(&Local_51, iLocal_24, 0);
			iLocal_48 = 0;
			break;
	}
}

bool func_927()
{
	if (((((iLocal_25 == 0 || iLocal_25 == 1) || iLocal_25 == 2) || iLocal_25 == 6) || iLocal_25 == 12) || iLocal_25 == 13)
	{
		return true;
	}
	return false;
}

bool func_928(var uParam0)
{
	return uParam0->f_159;
}

bool func_929(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam1))
	{
		if (!is_ped_injured(iParam1))
		{
			if (_is_ped_hogtied(iParam1))
			{
				vVar0 = { get_offset_from_entity_in_world_coords(iParam0, 0f, 0f, -4f) };
				vVar3 = { get_offset_from_entity_in_world_coords(iParam0, 0f, 17f, 2f) };
				fVar6 = 5f;
				if (is_entity_in_angled_area(iParam1, vVar0, vVar3, fVar6, false, true, 0))
				{
					if (get_entity_height_above_ground(iParam1) < 1.2f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_930(var uParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_53(&(uParam0->f_410[iVar0]), 1))
		{
			task_look_at_entity(&(uParam0->f_410[iVar0]), uParam1->f_2209, -1, 0, 51, 0);
		}
		iVar0++;
	}
	return 0;
}

int func_931(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_53(&(uParam0->f_410[iVar0]), 1))
		{
			if (!_0x508f5053e3f6f0c4(&(uParam0->f_410[iVar0]), get_entity_coords(Global_1392388->f_3, true, false), 2f))
			{
				task_look_at_entity(&(uParam0->f_410[iVar0]), Global_1392388->f_3, -1, 0, 51, 0);
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_932(int iParam0, float fParam1)
{
	vVar0 = { get_entity_coords(iParam0, true, false) };
	if (Global_36.f_2 < (vVar0.z + fParam1) && Global_36.f_2 > (vVar0.z - fParam1))
	{
		return true;
	}
	return false;
}

int func_933(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_499)
	{
		if (func_53(&(uParam0->f_410[iVar0]), 1))
		{
			if (!_0x508f5053e3f6f0c4(&(uParam0->f_410[iVar0]), Global_36, 2f))
			{
				task_look_at_entity(&(uParam0->f_410[iVar0]), Global_35, -1, 0, 41, 1);
			}
		}
		iVar0++;
	}
	return 0;
}

int func_934(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_523)
	{
		if (func_53(&(uParam0->f_500[iVar0]), 1))
		{
			if (!_0x508f5053e3f6f0c4(&(uParam0->f_500[iVar0]), Global_36, 2f))
			{
				task_look_at_entity(&(uParam0->f_500[iVar0]), Global_35, -1, 0, 51, 0);
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_935()
{
	if (((((((func_111(iLocal_25, 71) || func_111(iLocal_25, 72)) || func_111(iLocal_25, 34)) || func_111(iLocal_25, 35)) || func_111(iLocal_25, 73)) || func_111(iLocal_25, 74)) || func_111(iLocal_25, 41)) || func_111(iLocal_25, 42))
	{
		return true;
	}
	return false;
}

Vector3 func_936(int iParam0)
{
	if (iParam0 == 0)
	{
		StringCopy(&cVar0, "CRST1_DYNAMITE", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(&cVar0, "CRRH3_DYNAMITE", 24);
	}
	return cVar0;
}

int func_937(int iParam0)
{
	iVar1 = iParam0;
	if (iVar1 < 0)
	{
		iVar0 = 1;
		func_1293(&iVar1, -2147483648);
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

int func_938()
{
	return get_player_group(get_player_index());
}

bool func_939(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_237() != -1)
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

void func_940(var uParam0, var uParam1)
{
	if (!func_205(*uParam0, 0, 1))
	{
		return;
	}
	task_look_at_entity(*uParam0, uParam1, -1, 0, 51, 0);
	_0xaac0ee3b4999abb5(*uParam0, uParam1);
	func_100(&(uParam0->f_75));
}

void func_941(int* iParam0)
{
	if (func_53(*iParam0, 0))
	{
		func_163(iParam0, &(iParam0->f_5), 1, 0, 0);
		_0xa769d753922b031b(*iParam0, 0.5f, 0.6f);
		set_ped_combat_attributes(*iParam0, 30, true);
		set_ped_firing_pattern(*iParam0, -957453492);
		set_ped_accuracy(*iParam0, 20);
		task_vehicle_shoot_at_coord(*iParam0, Global_36, 20f);
		iParam0->f_8 = 1;
	}
}

bool func_942(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

int func_943(int iParam0)
{
	if (func_237() != -1)
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
	fVar1 = func_486(absf(fVar1) < 1f, func_486(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_944(int iParam0)
{
	if (!func_1294(iParam0))
	{
		return false;
	}
	return func_1295(iParam0);
}

int func_945()
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

void func_946(int iParam0, bool bParam1, int iParam2)
{
	func_1296((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1297(iParam0);
}

void func_947(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1298(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_948(bool bParam0)
{
	bVar3 = false;
	if (func_1299(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1300(iVar5, &iVar2, &iVar0))
			{
				if (!func_636(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1301(iVar2);
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
							if (func_637(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_484() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_484() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1302();
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

char* func_949(int iParam0)
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

bool func_950(int iParam0, vector3 vParam1, int iParam4, float fParam5, var uParam6, var uParam7)
{
	if (!does_entity_exist(*iParam4))
	{
		*iParam4 = func_1303(iParam0, vParam1, uParam6, uParam7);
	}
	if (does_entity_exist(*iParam4))
	{
		return func_1304(*iParam4, fParam5);
	}
	return false;
}

void func_951(var uParam0, vector3 vParam1, int iParam4, int iParam5, var uParam6, var uParam7)
{
	if (!func_215(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, iParam4, iParam5, uParam6, uParam7);
		if (func_215(uParam0))
		{
		}
	}
}

int func_952(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1305(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_953()
{
	if (func_237() != -1)
	{
		return 0;
	}
	return func_1194(661720433);
}

bool func_954()
{
	return Global_1347398->f_1 == 0;
}

void func_955(int iParam0)
{
	Global_1347398->f_1 = iParam0;
}

bool func_956()
{
	return Global_1347398->f_1 == 1000;
}

bool func_957()
{
	return Global_1347398->f_1 == 2000;
}

bool func_958()
{
	return Global_1347398->f_1 == 3000;
}

int func_959(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_970(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_972(&Var0, func_971(0));
	}
	if (!func_973(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_817(iVar14);
	return uVar15;
}

int func_960(bool bParam0)
{
	if (func_237() == -1)
	{
		if (!bParam0 && _0x7c7e4ab748ea3b07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && _inventory_get_ped_inventory_id(player_ped_id()) == 3)
	{
		return 3;
	}
	return 2;
}

bool func_961(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (_item_database_does_item_have_tag(iParam0, iParam1, 1120943070))
	{
		return true;
	}
	return false;
}

void func_962(int iParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (iParam0)
	{
		case 1234009870:
			*iParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		case -1202134084:
			*iParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		case 1297050066:
			*iParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		case -1780177928:
			*iParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		case -1467836497:
			*iParam1 = -1175521284;
			*uParam2 = 1950175060;
			break;
		case 1723805622:
			*iParam1 = -1559549888;
			*uParam2 = 1950175060;
			break;
		case -153287664:
			*iParam1 = -1650796693;
			*uParam2 = 836939099;
			break;
		case 1845082736:
			*iParam1 = -1521597660;
			*uParam2 = -1411815376;
			break;
		case 406755377:
			*iParam1 = -1288829256;
			*uParam2 = 218444191;
			break;
		case 1469029564:
			*iParam1 = 1393841762;
			*uParam2 = 218444191;
			break;
		case 45760211:
			*iParam1 = -851229814;
			*uParam2 = 1654725195;
			break;
		case -276295943:
			*iParam1 = 914704115;
			*uParam2 = 1858824185;
			break;
		case -2029793397:
			*iParam1 = -219896679;
			*uParam2 = -1330115686;
			break;
		case 2120467495:
			*iParam1 = 516838334;
			*uParam2 = -1330115686;
			break;
		case -2075613923:
			*iParam1 = -385817936;
			*uParam2 = -578347576;
			break;
		case 122656217:
			*iParam1 = 1192843172;
			*uParam2 = 231465488;
			break;
		case 2107187484:
			*iParam1 = 954871696;
			*uParam2 = -1878508229;
			break;
		case -791844268:
			*iParam1 = -1217273132;
			*uParam2 = -1878508229;
			break;
		case 305770744:
			*iParam1 = -2087227528;
			*uParam2 = 314966081;
			break;
		case 550900979:
			*iParam1 = -618066518;
			*uParam2 = 2113196069;
			break;
	}
}

bool func_963()
{
	return !&Global_1911774;
}

void func_964(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	Global_1911774->f_4[Global_1911774->f_3] = iParam0;
	Global_1911774->f_4[Global_1911774->f_3]->f_1 = iParam1;
	Global_1911774->f_4[Global_1911774->f_3]->f_2 = bParam2;
	Global_1911774->f_4[Global_1911774->f_3]->f_3 = bParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_965(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_966(int iParam0, int iParam1)
{
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_967(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (_item_database_fillout_ui_data(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (is_string_null_or_empty(&(Var3.f_2[iVar0])))
			{
				Jump @227; //curOff = 56
			}
			else if (is_string_null_or_empty(Var3.f_2[iVar0]->f_1))
			{
			}
			else
			{
				iVar1 = get_hash_key(&(Var3.f_2[iVar0]));
				iVar2 = get_hash_key(Var3.f_2[iVar0]->f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0]->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *Var3.f_2[iVar0] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_968(int iParam0)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

char* func_969(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

struct<14> func_970(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_971(bool bParam0)
{
	iVar0 = func_960(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_890(923904168, func_1269(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_890(923904168, func_1269(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_890(923904168, func_1269(bParam0), -740156546, 0);
}

void func_972(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_973(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_960(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_974(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1275(iParam0))
	{
		return false;
	}
	if (iParam1 <= 0)
	{
		return false;
	}
	if (!func_645(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!_0xb4158c8c9a3b5dce(func_960(bParam4), iParam0, iParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_975(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (func_237() == -1)
	{
		if (func_1002(43))
		{
			if (func_961(iParam0, 412399755))
			{
				func_1306(-1791518714);
				if (func_1307() == 0)
				{
					func_713(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 1);
					if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
					{
						if (func_1309(iParam0) < func_1310(iParam0))
						{
							func_1008(43, iParam0, iParam1, -1791518714, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_1002(44))
		{
			if (func_961(iParam0, 709057512))
			{
				func_1306(-2087881550);
				if (func_1307() == 1)
				{
					func_713(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 2);
					if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
					{
						if (func_1309(iParam0) < func_1310(iParam0))
						{
							func_1008(43, iParam0, iParam1, -2087881550, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1002(45))
		{
			if (func_961(iParam0, -1478961327))
			{
				func_1306(1908068621);
				if (func_1307() == 2)
				{
					func_713(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 4);
					if (((iParam0 == 2116770557 || iParam0 == -651064726) || iParam0 == -404270094) || iParam0 == 2093126853)
					{
						if (func_1309(iParam0) < func_1310(iParam0))
						{
							func_1008(43, iParam0, iParam1, 1908068621, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1002(46))
		{
			if (func_961(iParam0, -1238404098))
			{
				func_1306(1611247019);
				if (func_1307() == 3)
				{
					func_713(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 8);
					if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
					{
						if (func_1309(iParam0) < func_1310(iParam0))
						{
							func_1008(43, iParam0, iParam1, 1611247019, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_1002(47))
		{
			if (func_961(iParam0, 1160548794))
			{
				func_1306(1319635688);
				if (func_1307() == 4)
				{
					func_713(0, 10);
					iVar0 = func_1308(iParam0, iParam1, 16);
					if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
					{
						if (func_1309(iParam0) < func_1310(iParam0))
						{
							func_1008(43, iParam0, iParam1, 1319635688, iVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

void func_976(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_412(func_1311(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1312(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1313(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

bool func_977(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

int func_978(int iParam0)
{
	if (!func_1314(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_979(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1315(iParam0);
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_980(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_990(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_981(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1316(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_982(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_982(int iParam0)
{
	iVar1 = 0;
	if (iParam0 == 0 && Global_43891 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_1316(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1317(1);
	}
}

bool func_983(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_984()
{
	iVar0 = func_1318((*Global_1347702)[9]->f_15);
	iVar1 = func_1318((*Global_1835011)[69]->f_1);
	if (func_1319(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_985(int iParam0)
{
	if (!func_503(iParam0))
	{
		return false;
	}
	return func_675((*Global_1835011)[iParam0]->f_1, 1);
}

int func_986(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1320(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1321(iVar6);
	}
	return iVar5;
}

int func_987(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1322(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_988(int iParam0, bool bParam1)
{
	func_1323(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_989(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return true;
		case 4:
			return true;
		case 5:
			return false;
		case 7:
			return false;
		case 9:
			return true;
		case 10:
			return false;
		case 11:
			return true;
		case 8:
			return true;
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
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
			return false;
		default:
			break;
	}
	return false;
}

void func_990(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_988(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_991(2, *uParam0);
		}
		else
		{
			func_992(2, *uParam0);
		}
	}
	func_1324(uParam0);
}

void func_991(int iParam0, int iParam1)
{
	if (Global_1357549->f_1483 >= 25)
	{
		Global_1357549->f_1483 = 0;
	}
	Global_1357549->f_1407[Global_1357549->f_1483] = iParam0;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_1 = iParam1;
	Global_1357549->f_1407[Global_1357549->f_1483]->f_2 = 0;
	Global_1357549->f_1483++;
}

void func_992(int iParam0, int iParam1)
{
	if (Global_1357549->f_1406 >= 50)
	{
		return;
	}
	if (&Global_1357549->f_1252[Global_1357549->f_1406] != 0)
	{
		return;
	}
	Global_1357549->f_1252[Global_1357549->f_1406] = iParam0;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_1 = iParam1;
	Global_1357549->f_1252[Global_1357549->f_1406]->f_2 = 0;
	Global_1357549->f_1403++;
	Global_1357549->f_1406++;
}

int func_993(int iParam0)
{
	iVar0 = 19;
	iVar1 = 0;
	while (iVar1 <= 19)
	{
		if (Global_1898441[iVar1] == iParam0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		else if (Global_1898441[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 20;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_994(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_237() == -1)
	{
		if (func_1325(iParam0) && func_1326(iParam0))
		{
			func_1327(iParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (iParam0 == 1259508039)
	{
		bParam2 = true;
	}
	else if (iParam0 == -1569615261)
	{
		return false;
	}
	return true;
}

bool func_995(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1328(iParam0, iParam1);
	Var0 = { func_886(iParam0, 0, 1) };
	iVar5 = func_1329(iParam0, &Var0, 0, 0);
	iVar6 = func_1330(iParam0, 0);
	if ((iVar5 > 1 && !func_664()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_961(iParam0, -2051813666))
		{
			func_673(583, 1);
		}
		else
		{
			func_673(582, 0);
		}
	}
	if (func_1331(iParam0, &Var0, *iParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_996(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_1058(iParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = iParam0;
			Global_1935496->f_59.f_5 = get_game_timer();
			break;
	}
}

bool func_997(int iParam0)
{
	if (func_237() != -1)
	{
		return false;
	}
	return func_998(iParam0) != 0;
}

int func_998(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1332())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1333(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_999(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_1000(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1332())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_999(iVar0))
		{
			if (func_412(func_1333(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_1001(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1334(48);
	func_713(0, -1);
}

bool func_1002(int iParam0)
{
	if (func_237() != -1)
	{
		return false;
	}
	return func_675((*Global_1347702)[iParam0]->f_15, 1);
}

int func_1003(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_1004(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_1005(int iParam0)
{
	if (func_237() != -1)
	{
		return false;
	}
	return func_675((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_1006(int iParam0)
{
	if (func_237() != -1)
	{
		return false;
	}
	if (!func_216(iParam0))
	{
		return false;
	}
	return func_228((*Global_1347702)[iParam0]->f_15);
}

int func_1007()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_412(func_1335(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1008(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_758() && (func_1006(38) || func_1002(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = get_hash_key("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		case 39:
			if (func_758() && (func_1006(39) || func_1002(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_1336(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_758() && (func_1006(41) || func_1002(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		case 49:
			if (func_758() && (func_1006(49) || func_1002(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_1336(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1337(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1338(iParam0, iVar13, iVar14))
	{
	}
	if (func_1339(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1340(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1341(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1342(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1343(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_1009(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_1010(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_758() && (func_1006(38) || func_1002(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = get_hash_key("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_758() && (func_1006(39) || func_1002(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_758() && (func_1006(49) || func_1002(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = get_hash_key("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar5 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar5 = get_hash_key("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_758() && (func_1006(38) || func_1002(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_178(_create_var_string(2, sVar0), _create_var_string(2, func_1345(func_1004(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_758() && (func_1006(39) || func_1002(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_758() && (func_1006(49) || func_1002(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1344(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_1011(int iParam0)
{
	if (!func_1294(iParam0))
	{
		return;
	}
	func_1346(iParam0);
	func_1347(iParam0);
}

int func_1012(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		case 1222378998:
			iVar0 = -764310200;
			break;
		case 2074469742:
			iVar0 = -764310200;
			break;
		case 480079517:
			iVar0 = -1504859554;
			break;
		case 840671577:
			iVar0 = -1504859554;
			break;
		case 1446246869:
			iVar0 = 1885857703;
			break;
		case -2006166057:
			iVar0 = 1885857703;
			break;
		case 1235846615:
			iVar0 = -1511427369;
			break;
		case -228768324:
			iVar0 = 2133046983;
			break;
		case -1411922943:
			iVar0 = -1511427369;
			break;
		case -834103244:
			iVar0 = -1511427369;
			break;
		case 424030678:
			iVar0 = 165751297;
			break;
		case 446901936:
			iVar0 = 710736342;
			break;
		case -1092841802:
			iVar0 = -462374995;
			break;
		case -1452241321:
			iVar0 = 567069252;
			break;
		case -1188697038:
			iVar0 = -281894307;
			break;
		case 1671758975:
			iVar0 = -1127860381;
			break;
		case -893514737:
			iVar0 = -1894785522;
			break;
		case -2063089161:
			iVar0 = 469927692;
			break;
		case -452897925:
			iVar0 = 1960591597;
			break;
		default:
			break;
	}
	if (func_636(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1348(iVar0) || func_560(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return iParam0;
}

int func_1013(int iParam0, bool bParam1)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	if (is_weapon_valid(iParam0))
	{
		return iParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_1014(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_307(iParam0))
	{
		return;
	}
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	_unlock_set_unlocked(iVar0, true);
}

bool func_1015(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_1013(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_237() == -1)
		{
			func_1014(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1349(iVar0);
			}
		}
		if (!func_1331(iParam0, &uVar1, 1, 0, 0))
		{
			func_1327(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1350(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_561(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_561(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_561(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_457())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_563(iVar0))
				{
					func_561(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_561(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1351(Global_35, 2, 0, 1);
				if ((((func_307(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_944(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_307(iVar7) && func_944(24))
				{
					if (!func_561(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_561(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_561(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (_0x9f0e1892c7f228a8(1) != 0 && iParam1 == 1248274121)
	{
		func_673(480, 1);
	}
	return true;
}

bool func_1016(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_1017(int iParam0, int iParam1, int iParam2)
{
	if (!func_1016(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_307(iVar4))
	{
		get_max_ammo(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (_is_weapon_bow(iVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = _get_weapon_clip_size(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * absi(*iParam1));
	}
	if (func_412(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = ceil((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_1047(func_1352(iParam0), func_968(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_237() == -1)
		{
			if (func_675((*Global_1835011)[14]->f_1, 1))
			{
				func_673(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_645(0))
	{
		if (func_892(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_1052(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_1018(int iParam0)
{
	if ((iParam0 == -615217896 && !func_686()) || iParam0 != -615217896)
	{
		if (func_1353(Global_35, iParam0, &uVar0))
		{
			func_1033(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_802();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_802();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_802();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1037();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_1035();
			break;
	}
}

void func_1019(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_1035();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_1036();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_1037();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_1038();
			break;
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_802();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1354();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1355();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

void func_1020(int iParam0)
{
	bVar0 = func_961(iParam0, -2017733358);
	if (func_1356() < 3)
	{
		if (bVar0)
		{
			if (func_1358(func_1357(iParam0), iParam0))
			{
				func_1047(79, func_968(func_1357(iParam0)), 1);
			}
			else
			{
				func_1047(78, func_968(func_1357(iParam0)), 1);
			}
		}
		else
		{
			func_1047(80, func_968(func_1359(iParam0)), 1);
		}
	}
}

bool func_1021()
{
	if (((((func_1360(839908568, 400) || func_1360(-1134030454, 400)) || func_1360(623353496, 400)) || func_1360(-344413337, 400)) || func_1360(-1664948962, 400)) || func_1360(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_1022(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_743(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_557(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_558(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_1023(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_1008(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_1010(51, 0, 0, 0, 0, -1, 0);
			func_1361(8192);
			break;
		case 581047644:
			func_1008(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_1010(51, 0, 0, 0, 0, -1, 0);
			func_1361(524288);
			break;
		case -644199619:
			func_1008(39, 0, 0, 0, 0, 0, 1, 0);
			func_1010(39, 0, 0, 0, 0, -1, 0);
			func_1362(16);
			break;
		case 684296857:
			func_1008(41, 0, 0, 0, 0, 0, 1, 0);
			func_1010(41, 0, 0, 0, 0, -1, 0);
			func_1363(8);
			break;
		case 466137807:
			func_1008(49, 0, 0, 0, 0, 0, 1, 0);
			func_1010(49, 0, 0, 0, 0, -1, 0);
			func_1364(16);
			break;
		case -1087522507:
			func_1008(43, 0, 0, -1791518714, func_1365(1), 0, -1, 0);
			func_1366(1);
			break;
		case -405829000:
			func_1008(43, 0, 0, -2087881550, func_1365(2), 0, -1, 0);
			func_1366(2);
			break;
		case 378660860:
			func_1008(43, 0, 0, 1908068621, func_1365(4), 0, -1, 0);
			func_1366(4);
			break;
		case 1566111097:
			func_1008(43, 0, 0, 1611247019, func_1365(8), 0, -1, 0);
			func_1366(8);
			break;
		case 1276007140:
			func_1008(43, 0, 0, 1319635688, func_1365(16), 0, -1, 0);
			func_1366(16);
			break;
	}
}

void func_1024(int iParam0)
{
	if (func_1367() == 1)
	{
		if (func_1002(39))
		{
			func_673(342, 0);
		}
		else
		{
			func_673(343, 0);
			func_1362(1);
		}
	}
	if (func_1367() >= 30)
	{
		func_673(344, 0);
	}
	func_1008(39, 0, 0, 0, 0, 0, -1, 0);
	func_1010(39, 0, 0, func_1367(), 30, 1, 0);
}

void func_1025(int iParam0)
{
	if (func_1368() == 1)
	{
		if (func_1002(49))
		{
			func_673(409, 0);
		}
		else
		{
			func_673(410, 0);
			func_1364(1);
		}
	}
	if (func_1368() >= 10)
	{
		func_673(411, 0);
	}
	func_1008(49, 0, 0, 0, 0, 0, -1, 0);
	func_1010(49, 0, 0, func_1368(), 10, 1, 0);
}

void func_1026(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_673(437, 0);
			func_673(440, 0);
			func_1369(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_1008(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_1010(51, 0, 0, sVar0, func_1336(-949689219, 20), 1, 0);
			func_1361(1);
			func_1370(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1369(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_1008(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_1010(51, 0, 0, sVar0, func_1336(-1248968496, 20), 1, 0);
			func_1361(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1369(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_1008(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_1010(51, 0, 0, sVar0, func_1336(1706369307, 20), 1, 0);
			func_1361(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1369(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_1008(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_1010(51, 0, 0, sVar0, func_1336(1520110311, 20), 1, 0);
			func_1361(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_673(438, 0);
			func_1369(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_1008(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_1010(51, 0, 0, sVar0, func_1336(-1992824800, 20), 1, 0);
			func_1361(32768);
			break;
		default:
			func_673(439, 0);
			break;
	}
}

void func_1027()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_1028(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_237() == -1)
	{
		if (!func_1002(43))
		{
			if (iParam0 == 281887510)
			{
				func_673(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_673(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_673(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_673(400, 0);
			}
		}
		else if (func_961(iParam0, 412399755))
		{
			func_1306(-1791518714);
			if (func_1307() == 0)
			{
				func_713(0, 10);
				iVar1 = func_1371(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1309(iParam0) < func_1310(iParam0))
					{
						func_1008(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_1010(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_1002(44))
		{
			if (iParam0 == -222563712)
			{
				func_673(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_673(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_673(401, 0);
			}
		}
		else if (func_961(iParam0, 709057512))
		{
			func_1306(-2087881550);
			if (func_1307() == 1)
			{
				func_713(0, 10);
				iVar1 = func_1371(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1309(iParam0) < func_1310(iParam0))
					{
						func_1008(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_1010(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_1002(45))
		{
			if (iParam0 == 2116770557)
			{
				func_673(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_673(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_673(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_673(398, 0);
			}
		}
		else if (func_961(iParam0, -1478961327))
		{
			func_1306(1908068621);
			if (func_1307() == 2)
			{
				func_713(0, 10);
				iVar1 = func_1371(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1372(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1373(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1334(48);
					}
					if (func_1309(iParam0) < func_1310(iParam0))
					{
						func_1008(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1010(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1309(iParam0) < func_1310(iParam0))
					{
						func_1008(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_1010(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_1002(46))
		{
			if (iParam0 == 2085530337)
			{
				func_673(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_673(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_673(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_673(406, 0);
			}
		}
		else if (func_961(iParam0, -1238404098))
		{
			func_1306(1611247019);
			if (func_1307() == 3)
			{
				func_713(0, 10);
				iVar1 = func_1371(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1309(iParam0) < func_1310(iParam0))
					{
						func_1008(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_1010(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_1002(47))
		{
			if (iParam0 == -1521783510)
			{
				func_673(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_673(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_673(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_673(403, 0);
			}
		}
		else if (func_961(iParam0, 1160548794))
		{
			func_1306(1319635688);
			if (func_1307() == 4)
			{
				func_713(0, 10);
				iVar1 = func_1371(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1309(iParam0) < func_1310(iParam0))
					{
						func_1008(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_1010(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_1029(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1372(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1373(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1334(48);
		}
	}
}

void func_1030(int iParam0, int iParam1, int iParam2)
{
	if (func_237() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_1022(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_1022(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_1022(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_1022(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_1022(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_1022(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_1022(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_1022(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_1022(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_1022(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_1022(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_1022(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_1022(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1374())
			{
				func_1022(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_1022(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_1022(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_1022(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_1022(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_1022(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_1022(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_1022(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_1022(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_1022(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_1022(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_1022(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_1022(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_1031(int iParam0)
{
	if (func_1002(41))
	{
		func_673(363, 0);
	}
	else
	{
		func_673(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1375(-1865241121);
			func_1376(-642026005);
			func_1377(-642026005);
			func_713(0, 10);
			break;
		case -2108314374:
			func_1375(2117142684);
			func_1376(-940584364);
			func_1377(-940584364);
			func_713(0, 10);
			break;
		case -1193798153:
			func_1375(-1409326024);
			func_1376(1972645282);
			func_1377(1972645282);
			func_713(0, 10);
			break;
		case -787702678:
			func_1375(-641744968);
			func_1376(1667205433);
			func_1377(1667205433);
			func_713(0, 10);
			break;
		case -804542901:
			func_1375(-946988203);
			func_1376(1362715885);
			func_1377(1362715885);
			func_713(0, 10);
			break;
		case -1696275132:
			func_1375(-646136018);
			func_1376(1053540370);
			func_1377(1053540370);
			func_713(0, 10);
			break;
		case -161595323:
			func_1375(-955835837);
			func_1376(-1100103852);
			func_1377(-1100103852);
			func_713(0, 10);
			break;
		case -1114363619:
			func_1375(-179276075);
			func_1376(-1409869209);
			func_1377(-1409869209);
			func_713(0, 10);
			break;
		case -368407134:
			func_1375(-492711560);
			func_1376(-1760235357);
			func_1377(-1760235357);
			func_713(0, 10);
			break;
		case 1997759228:
			func_1375(1764383959);
			func_1376(-138366827);
			func_1377(-138366827);
			func_713(0, 10);
			break;
		case 1265573293:
			func_1375(317501533);
			func_1376(-1261163843);
			func_1377(-1261163843);
			func_713(0, 10);
			break;
		case -1030441283:
			func_1375(817753087);
			func_1376(-963523016);
			func_1377(-963523016);
			func_713(0, 10);
			break;
		case -1490884871:
			func_1375(576606016);
			func_1376(560825326);
			func_1377(560825326);
			func_713(0, 10);
			break;
		case -395458616:
			func_1375(814934957);
			func_1376(858269539);
			func_1377(858269539);
			break;
	}
}

void func_1032(int iParam0, int iParam1)
{
	func_962(iParam0, iParam1, &uVar0);
}

int func_1033(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_886(iParam1, 1, 0) };
		iParam3 = func_952(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1378(iParam1, iParam2, func_632(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1379(1, (func_237() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_632(iParam3, 1)])
			{
				func_1085(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1380(32768) && iParam1 != &Global_1946804->f_57[func_632(iParam3, 1)])
			{
				func_1381();
				func_1085(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_1085(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1382(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_1085(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1383(0);
			func_1384(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_1085(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_1034(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1351(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1351(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_814("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_815(&Var3, iVar2, iVar0, iVar1))
			{
				if (_is_weapon_one_handed(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*iParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_817(iVar0);
						if (*iParam0 != 0)
						{
							return true;
						}
						return false;
					}
				}
			}
		}
	}
}

void func_1035()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_1036()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_1037()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_1038()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_1039(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_remove_entry(3, iVar0);
	}
	if (!_uilog_is_entry_registered(3, iVar0))
	{
		_uilog_add_entry_hash(3, iVar0, vVar4, get_hash_key("COL_TH_TITLE"), get_hash_key(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	_uilog_add_or_update_objective(3, iVar0, get_hash_key(sVar1), sVar1, false, false, false);
	_uilog_set_entry_pinned(3, iVar0, true);
	_uilog_set_entry_icon_texture(3, iVar0, get_hash_key("BLIP_RC_TREASURE_HUNTER"), get_hash_key("toast_log_blips"));
	_uilog_set_entry_brief_texture(3, iVar0, get_hash_key("MISSION_RETH"), get_hash_key("SP_MISSIONS_19"));
	_uilog_update_entry_subheader(3, iVar0, _create_var_string(2, sVar3));
}

void func_1040(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	_uilog_set_pending_details_id(1, iVar0);
	func_1344(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_1041(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_1042(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_1043(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_1044(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_1045(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_1046(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

void func_1047(int iParam0, int iParam1, bool bParam2)
{
	func_1081(iParam0, &iVar0, &iVar1);
	if (!func_1082(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1385(iParam0, 1024))
	{
		return;
	}
	func_1083(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_1048(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_1081(iParam0, &iVar0, &iVar1);
	if (!func_1082(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1385(iParam0, 1024))
	{
		return;
	}
	func_1083(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	if (!bParam3)
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 1;
	}
	else
	{
		Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 5;
	}
}

int func_1049()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1332())
	{
		return func_1050();
	}
	iVar4 = (func_1332() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1332())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1386(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1333(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_1050()
{
	iVar0 = get_random_int_in_range(0, func_1332());
	return func_1333(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_1051(int iParam0)
{
	switch (*iParam0)
	{
		case -1424823393:
			*iParam0 = -885810591;
			break;
		case 998010398:
			*iParam0 = -324053813;
			break;
		case 1358243310:
			*iParam0 = 1463786584;
			break;
		case -541584777:
			*iParam0 = 206762213;
			break;
	}
}

bool func_1052(int iParam0, int iParam1, int iParam2)
{
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_886(iParam0, 0, 1) };
	Var5 = { func_890(iParam0, Var0, Var0.f_4, 0) };
	return func_1387(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_1053(int iParam0)
{
	if (func_237() != -1)
	{
		return;
	}
	switch (func_633(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1388(81053684, 0) <= 0)
			{
				func_1085(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_1085(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1389(iParam0);
			if (func_1390(iVar0))
			{
				func_1391(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_1085(30, iParam0, 0, 0, 0);
			}
			if (func_1076() == -2125499975 || func_1076() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_1085(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_1076() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_1085(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1392(-525676072, 0))
			{
				if (func_1393(-525676072, &iVar1))
				{
					func_1085(33, iVar1, 0, 0, 0);
				}
			}
			func_1085(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1394(99217379))
		{
			func_1033(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_1011(24);
		if (func_1034(&iVar2, 0))
		{
			func_561(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_1054(int iParam0)
{
	if (func_961(iParam0, 943695443))
	{
		func_1395(0, iParam0);
	}
	else if (func_961(iParam0, -2096528786))
	{
		func_1395(1, iParam0);
	}
	else if (func_961(iParam0, -1094167013))
	{
		func_1395(2, iParam0);
	}
	else if (func_961(iParam0, 1936654645))
	{
		func_1395(3, iParam0);
	}
	else if (func_961(iParam0, 1306489306))
	{
		func_1395(4, iParam0);
	}
	else if (func_961(iParam0, 435762317))
	{
		func_1395(5, iParam0);
	}
	else if (func_961(iParam0, 1259363210))
	{
		func_1395(6, iParam0);
	}
	else if (func_961(iParam0, 881398259))
	{
		func_1395(7, iParam0);
	}
	else if (func_961(iParam0, -541549214))
	{
		func_1395(8, iParam0);
	}
	else if (func_961(iParam0, 130796156))
	{
		func_1395(-1, iParam0);
	}
}

int func_1055(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1396(&Var4, 1356624740);
	return func_1397(iParam0, &Var4, &uVar0, iParam1);
}

void func_1056(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_237() == -1)
			{
				if (func_675((*Global_1835011)[4]->f_1, 1))
				{
					func_673(109, 1);
				}
			}
			break;
	}
}

void func_1057(int iParam0, char* sParam1)
{
	sVar0 = func_1399(func_1398(0));
	func_882(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1400(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1058(int iParam0, int iParam1)
{
	if (_item_database_fillout_tag_data(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42]->f_1 == iParam1)
			{
				return &(Var0[iVar42]);
			}
			iVar42++;
		}
	}
	return 0;
}

struct<10> func_1059(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -1591664384)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_1060(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_1061(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= _0xd389a2549c4efb30(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!_0x8750f69a720c2e41(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_1062(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1401(iParam0, iParam1, 1))
	{
		return false;
	}
	bVar0 = false;
	if (iParam1 == 0)
	{
		iVar1 = _item_database_get_acquire_costs_count(iParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (_item_database_get_acquire_cost(iParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 1644203656 && func_1401(iParam0, Var2, 1))
				{
					if (func_1402(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1402(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_673(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_437(0, 0, 1))
		{
			func_713(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_1063(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!_0xcbb7b6edfa933ade(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_1064(int iParam0)
{
	iVar0 = -1;
	switch (iParam0)
	{
		case -1375947476:
			iVar0 = 307;
			break;
		case -1704241585:
			iVar0 = 308;
			break;
		case -1267972061:
			iVar0 = 309;
			break;
		case -142033055:
			iVar0 = 310;
			break;
		case 890514341:
			iVar0 = 311;
			break;
		case -58963793:
			iVar0 = 312;
			break;
		case 1882019322:
			iVar0 = 313;
			break;
		case 807302083:
			iVar0 = 314;
			break;
		case 617759310:
			iVar0 = 315;
			break;
		case -378547623:
			iVar0 = 316;
			break;
		case 829545206:
			iVar0 = 317;
			break;
		case 891318243:
			iVar0 = 319;
			break;
		case 431374225:
			iVar0 = 320;
			break;
		case 1619534881:
			iVar0 = 321;
			break;
		case -755457379:
			iVar0 = 322;
			break;
		case 2141714005:
			iVar0 = 323;
			break;
		case 1015404643:
			iVar0 = 324;
			break;
		case 983875052:
			iVar0 = 325;
			break;
		case -1753730528:
			iVar0 = 326;
			break;
		case 2131765035:
			iVar0 = 327;
			break;
		case -1740272183:
			iVar0 = 328;
			break;
		case 1310680212:
			iVar0 = 329;
			break;
		case -1724192342:
			iVar0 = 330;
			break;
		case 912296423:
			iVar0 = 331;
			break;
		case -566881549:
			iVar0 = 332;
			break;
		case 147796381:
			iVar0 = 333;
			break;
		case -120865369:
			iVar0 = 334;
			break;
		case 1158808845:
			iVar0 = 335;
			break;
	}
	if (iVar0 != -1)
	{
		func_673(iVar0, 0);
	}
}

void func_1065()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1403(0);
			_unlock_set_unlocked(-121456797, false);
			func_1404();
		}
		return;
	}
	if (!func_675((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1405();
	if (_0x57e798b54c45ee1a(1685912227) >= 2)
	{
		if (_0x57e798b54c45ee1a(2116153146) < 2)
		{
			_0xe824ce7d13fcb300(2116153146, 2);
		}
	}
	if (_unlock_is_unlocked(-121456797))
	{
		return;
	}
	_unlock_set_unlocked(-121456797, true);
	if (_unlock_is_unlocked(645322743))
	{
		return;
	}
	func_1403(1);
}

void func_1066()
{
	if (!func_675((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_666(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_1067()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1406(0);
			_unlock_set_unlocked(1244328330, false);
		}
		return;
	}
	if (_unlock_is_unlocked(1244328330))
	{
		return;
	}
	if (_unlock_is_unlocked(-1383789777))
	{
		return;
	}
	if (!func_675((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1406(1);
}

void func_1068()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1407(15000, 0, 0, 0, 1);
			func_1406(0);
			_unlock_set_unlocked(398807247, false);
		}
		return;
	}
	if (_unlock_is_unlocked(398807247))
	{
		return;
	}
	if (_unlock_is_unlocked(-1651350587))
	{
		return;
	}
	if (!func_675((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_335(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1406(1);
}

void func_1069()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_412(1191437462, 1, 0) && !func_228((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_666(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1408(1))
			{
				func_1044(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_412(1119149048, 1, 0) && !func_228((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_666(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1408(2))
			{
				func_1044(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1408(4))
		{
			func_1044(4);
		}
		if (func_1408(0))
		{
			func_1409(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_412(1191437462, 1, 0))
			{
				func_413(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_412(1119149048, 1, 0))
			{
				func_413(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1408(1))
		{
			func_1409(1);
		}
		if (func_1408(2))
		{
			func_1409(2);
		}
		if (func_1408(4))
		{
			func_1409(4);
		}
		if (!func_1408(0))
		{
			func_1044(0);
		}
	}
}

void func_1070()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_675((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1410() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_1014(127400949);
		if (func_561(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1410() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1411(-2055673461, Var1, 1423542233);
		func_1411(-202131179, Var1, -1264898804);
		func_1411(2013836545, Var1, 1592019450);
		func_1411(1497476650, Var1, 1117400455);
		func_1411(1063571467, Var1, 1150213537);
		func_1411(2107224237, Var1, 1598825281);
		func_1411(1747981656, Var1, -712527121);
		func_1411(-1371140647, Var1, 454332195);
		func_1411(-19142973, Var1, 256105670);
		func_1411(-2074737817, Var1, -1328061889);
		func_1411(-1114256243, Var1, -782241404);
		func_1411(-1653277288, Var1, 1669853467);
		func_1411(1869398132, Var1, -1559225678);
		func_1411(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_569())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_307(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_944(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_944(24) && func_307(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_307(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_944(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_1071()
{
	if (_unlock_is_unlocked(99890643))
	{
		return;
	}
	if (is_pc_version() || _is_stadia_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_orbis_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
	if (is_durango_version())
	{
		_unlock_set_unlocked(99890643, true);
	}
}

bool func_1072(int iParam0)
{
	switch (func_633(iParam0))
	{
		case -2061583405:
			return true;
		case -1719060085:
			return true;
		case -999503751:
			return true;
		case -525676072:
			return true;
		case 81053684:
			return true;
		case -413129408:
			return true;
		default:
			break;
	}
	return false;
}

void func_1073(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_633(iParam0))
	{
		case -2061583405:
			bVar0 = func_1412(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1412(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1412(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1412(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1412(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1412(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1413();
	}
	if (bParam1)
	{
		func_1414(0, 0);
	}
}

int func_1074(int iParam0)
{
	Var0 = { func_886(iParam0, 1, 0) };
	return func_952(Var0.f_4);
}

void func_1075(int iParam0)
{
	if (func_237() == -1)
	{
		Var2 = -1394038466;
	}
	else
	{
		Var2 = 545953470;
	}
	Var2.f_1 = iParam0;
	Var2.f_3 = 0;
	_0x91ded5dd64bb2691(&Var2);
	while (_0xed4413cee1bf142c(&Var2))
	{
		if (!_0x44b3a36933ac009c(&iVar1, &Var2, -2008906477))
		{
			return;
		}
		iVar0 = func_632(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1415(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_1076()
{
	return Global_1946804->f_1;
}

bool func_1077(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1416(iParam6);
	Var4.f_1 = iParam1;
	Var4.f_3 = 0;
	_0x91ded5dd64bb2691(&Var4);
	if (!_0xed4413cee1bf142c(&Var4))
	{
		return false;
	}
	_0xa63cd20f19b961ab(&bVar2, &Var4, -1516819610);
	_0x44b3a36933ac009c(&iVar0, &Var4, 2049745650);
	*bParam2 = bVar2;
	Global_1946804->f_2652 = 0;
	if (!bVar2 && !bParam3)
	{
		func_1418(uParam0, func_1417(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_632(iVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1373051002))
			{
			}
			else
			{
				Global_1946804->f_2612[Global_1946804->f_2652] = iVar1;
				Global_1946804->f_2652++;
				uParam0->f_1[iVar1] = iVar0;
				if (bParam5)
				{
					if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1]->f_1 = 1155669136;
					}
					else
					{
						Jump @343; //curOff = 278
						if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1194786549))
						{
							if (func_1419(iVar3) && func_1420(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
							{
								uParam0->f_1[iVar1]->f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1]->f_1 = iVar0;
						}
					}
					if (bVar2)
					{
						iVar1 = 0;
						while (iVar1 < Global_1946804->f_2652)
						{
							func_1421(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
							iVar1++;
						}
					}
					if (bParam4)
					{
						*uParam0 = iParam1;
					}
					return true;
				}
			}
		}
	}
}

Vector3 func_1078(int iParam0, int iParam1)
{
	if (func_237() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26796.f_776;
		}
		return *Global_26796.f_26[iParam1]->f_1.f_1[iParam0];
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36638.f_45.f_350.f_1011;
	}
	return *Global_36638.f_45.f_350.f_26[iParam1]->f_1.f_1[iParam0];
}

int func_1079(int iParam0, int iParam1)
{
	vVar0 = { func_1078(iParam0, iParam1) };
	return vVar0.x;
}

void func_1080(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_1081(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1082(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1422(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1423(iParam0))
	{
		return false;
	}
	if (func_1424(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1385(iParam0, 1)) || func_491(32768))
	{
		if (!func_1385(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1425())
	{
		return false;
	}
	return true;
}

void func_1083(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_1084(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_1085(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1426(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1427(Var0);
}

void func_1086(int iParam0)
{
	func_1415(Global_1946804->f_1497.f_1[func_632(iParam0, 1)], 2, 6);
	func_1415(Global_1946804->f_1378.f_1[func_632(iParam0, 1)], 2, 6);
}

bool func_1087(int iParam0)
{
	return iParam0 != 0;
}

int func_1088(int iParam0)
{
	iVar0 = -1;
	if (!func_1087(iParam0))
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 180)
	{
		if (&Global_40.f_9910[iVar1] == iParam0)
		{
			iVar0 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	return iVar0;
}

bool func_1089(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_1090(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1428(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_1091(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_1092(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_1093(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_1094(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_1095(int iParam0, int iParam1)
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

void func_1096(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1429(iParam0, iParam6);
	func_1430(iParam0, iParam5);
	func_1431(iParam0, iParam4);
	func_1432(iParam0, iParam3);
	func_1433(iParam0, iParam2);
	func_1434(iParam0, iParam1);
}

bool func_1097(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1094(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1093(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_912(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1090(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1091(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1092(iParam0);
	if (iVar5 < 1 || iVar5 > func_1095(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_1098(int iParam0, bool bParam1)
{
	return func_1319(func_414(), iParam0, bParam1);
}

void func_1099(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1100()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1435(iVar1);
		if (!_unlock_is_visible(func_1436(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1101()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1435(iVar0);
		if (!_unlock_is_visible(func_1436(iVar1)))
		{
			_unlock_set_visible(func_1436(iVar1), true);
		}
		iVar0++;
	}
}

bool func_1102(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1314(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_1103(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_977(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_1104(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

bool func_1105()
{
	return (func_438(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_1106(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_237() != -1)
	{
		return 0;
	}
	if (&Global_1956575 != 2)
	{
		return 0;
	}
	iVar0 = uParam0->f_5;
	iVar1 = uParam0->f_5.f_1;
	iVar2 = uParam0->f_5.f_3;
	if (!func_636(iVar0, 0))
	{
		return 0;
	}
	if (!func_1437(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1438(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_961(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_886(iVar0, 0, 1) };
	iVar10 = func_1439(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1440(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1441(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_666(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1407(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

void func_1107(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_882(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

void func_1108(bool bParam0, bool bParam1)
{
	if (func_237() != -1)
	{
		return;
	}
	if (&Global_1956575 != 2)
	{
		return;
	}
	if (bParam0)
	{
		while (_spactionproxy_get_next_pending_crafting_action(&uVar0))
		{
			if (!_spactionproxy_process_action(uVar0, false))
			{
			}
		else
		{
			}
		}
	}
	if (bParam1)
	{
		while (_spactionproxy_get_next_pending_buy_action(&uVar9))
		{
			if (!_spactionproxy_process_action(uVar9, false))
			{
			}
		else
		{
			}
		}
	}
}

void func_1109(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_883())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_883())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_428(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_221(iParam0);
	if (func_220(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_220(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1442(1, iVar1);
					func_1442(8, iVar1);
					func_1442(7, iVar1);
					break;
				case 12:
					func_1442(6, iVar1);
					break;
				case 53:
					func_1442(3, iVar1);
					func_1442(7, iVar1);
					func_1442(4, iVar1);
					break;
				case 20:
					func_1442(8, iVar1);
					break;
				case 19:
					func_1442(1, iVar1);
					func_1442(2, iVar1);
					break;
				case 24:
					func_1442(3, iVar1);
					func_1442(9, iVar1);
					func_1442(20, iVar1);
					break;
				case 28:
					func_1442(1, iVar1);
					break;
				case 34:
					func_1442(23, iVar1);
					func_1442(2, iVar1);
					func_1442(18, iVar1);
					break;
				case 29:
					func_1442(0, iVar1);
					func_1442(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1442(0, iVar1);
					func_1442(3, iVar1);
					func_1442(2, iVar1);
					func_1442(11, iVar1);
					func_1442(6, iVar1);
					func_1442(25, iVar1);
					func_1442(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1442(5, iVar1);
					break;
				case 63:
					func_1442(1, iVar1);
					func_1442(3, iVar1);
					break;
				case 37:
					func_1442(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_710(0, 10, 11, 2116153146))
			{
				func_1442(7, iVar1);
				func_1442(4, iVar1);
			}
			else if (iParam0 == func_710(0, 7, 11, -379687487))
			{
				func_1442(8, iVar1);
				func_1442(15, iVar1);
			}
			else if (iParam0 == func_710(0, 8, 11, -1386089015))
			{
				func_1442(3, iVar1);
			}
			else if (iParam0 == func_710(0, 11, 11, -1952009645))
			{
				func_1442(6, iVar1);
				func_1442(3, iVar1);
			}
			else if (iParam0 == func_710(0, 12, 11, 2065895756))
			{
				func_1442(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1443()));
	if (!func_1444(629))
	{
		func_673(629, 0);
	}
}

int func_1110(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_1111(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_1112(int iParam0, int iParam1, var uParam2)
{
	if (!func_1111(iParam0))
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

int func_1113()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_1114(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_1115(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1445(iParam2))
	{
		return -1;
	}
	if (iParam0 < 0 || iParam0 > 511)
	{
		return -1;
	}
	if (iParam1 < 0 || iParam1 > 255)
	{
		return -1;
	}
	if (iParam3 < 0 || iParam3 > func_1113())
	{
		return -1;
	}
	iVar0 = func_1114(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_727(iVar1, 0);
	func_790(iVar1, 0);
	func_1446(iVar1, 0);
	func_1447(iVar1, 0);
	func_1448(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1449(iVar1, iParam4);
	}
	return iVar1;
}

int func_1116()
{
	iVar0 = func_1450(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_1451(iVar0))
	{
		if (Global_1879514->f_18)
		{
			return Global_1879514->f_19;
		}
		iVar1 = chal_mission_get_num_goals(iVar0);
		iVar2 = chal_mission_get_num_goals_complete(iVar0);
		if (iVar1 > 0)
		{
			iVar3 = ((100 * iVar2) / iVar1);
			if (iVar3 >= 100)
			{
				return 5;
			}
			else if (iVar3 >= 50)
			{
				return 4;
			}
			else
			{
				return 3;
			}
		}
	}
	return 3;
}

void func_1117(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (is_string_null_or_empty(&((*Global_1934603)[iParam0]->f_10)))
	{
		return;
	}
	*(*Global_1934603)[iParam0] = { Var0 };
	Global_1934603->f_161 = (Global_1934603->f_161 - 1);
	if (Global_1934603->f_161 < 0)
	{
		Global_1934603->f_161 = 0;
	}
}

int func_1118(int iParam0, int iParam1)
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

int func_1119(int iParam0)
{
	iVar0 = func_723(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1452(iVar0);
}

int func_1120(int iParam0, int iParam1)
{
	if (Global_1058888->f_40501 >= 32)
	{
		return -1;
	}
	Var0 = -1;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	if (Global_1058888->f_40501 == 0)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var0 };
		Global_1058888->f_40501++;
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_1058888->f_40501)
	{
		if (iParam0 == &Global_1058888->f_40501.f_1[iVar2])
		{
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
		else if (iParam0 > &Global_1058888->f_40501.f_1[iVar2])
		{
			iVar2++;
		}
		else if (iParam0 < &Global_1058888->f_40501.f_1[iVar2])
		{
			func_1453(iVar2);
			*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
			return iVar2;
		}
	}
	if (Global_1058888->f_40501 < 31)
	{
		iVar2 = Global_1058888->f_40501;
		*Global_1058888->f_40501.f_1[iVar2] = { Var0 };
		Global_1058888->f_40501++;
		if (Global_1058888->f_40501 > 32)
		{
			Global_1058888->f_40501 = 32;
		}
		return iVar2;
	}
	return -1;
}

void func_1121()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

void func_1122(int iParam0, int iParam1, bool bParam2)
{
	if (Global_1327479->f_9)
	{
		return;
	}
	Global_1327479->f_4 = (Global_1327479->f_4 + iParam0 * 1000);
	if (bParam2)
	{
		Global_1310750->f_16106 = { Global_36 };
	}
	if (iParam1 == 0)
	{
		if (iParam0 > 0)
		{
			Global_1327479->f_5 = (get_game_timer() + ((Global_1327479->f_4 - get_game_timer()) / 2));
		}
		else
		{
			Global_1327479->f_5 = (Global_1327479->f_5 + iParam0 * 500);
		}
	}
	else
	{
		Global_1327479->f_5 = (get_game_timer() + iParam1 * 1000);
	}
}

int func_1123(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case -413129408:
			return 32;
		default:
			break;
	}
	return 0;
}

void func_1124(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1125(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

int func_1126(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -113733662;
		case 1:
			return 594732118;
		case 2:
			return 348276469;
		case 3:
			return 95401549;
		case 4:
			return 1235783774;
		case 5:
			return 1763233598;
		case 6:
			return 775149941;
		case 7:
			return 1954629188;
		case 8:
			return -840809348;
		case 9:
			return 381638197;
		case 10:
			return -1303933625;
		case 11:
			return 618820223;
		case 12:
			return -561714800;
		case 13:
			return -135395907;
		default:
			break;
	}
	return 0;
}

int func_1127(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return get_random_model_from_population_set(1468170991, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 918497150:
			return get_random_model_from_population_set(-62570976, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case 356361174:
			return get_random_model_from_population_set(-165971473, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -1771663379:
			return get_random_model_from_population_set(-2049218219, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		case -311956671:
			return get_random_model_from_population_set(989061023, 0, -1190799868, bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return get_random_model_from_population_set(1468170991, 0, -1190799868, true, false, 0f, 0f, 0f);
}

void func_1128(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1133(&(uParam0->f_1), 16384);
	}
	else
	{
		func_1134(&(uParam0->f_1), 16384);
	}
}

void func_1129(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1133(&(uParam0->f_1), 2048);
	}
	else
	{
		func_1134(&(uParam0->f_1), 2048);
	}
}

void func_1130(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1133(&(uParam0->f_1), 128);
	}
	else
	{
		func_1134(&(uParam0->f_1), 128);
	}
}

void func_1131(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1134(uParam0, 256);
	}
	else
	{
		func_1133(uParam0, 256);
	}
}

void func_1132(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_1134(uParam0, 268435456);
	}
	else
	{
		func_1133(uParam0, 268435456);
	}
	if (!bParam2)
	{
		func_1134(uParam0, 1073741824);
	}
	else
	{
		func_1133(uParam0, 1073741824);
	}
	if (!bParam3)
	{
		func_1134(uParam0, 536870912);
	}
	else
	{
		func_1133(uParam0, 536870912);
	}
}

void func_1133(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1134(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1135(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_765(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1454(iVar6);
		if (!_0x608bc6a6aacd5036(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!does_entity_exist(iVar7))
			{
			}
			else if (is_entity_a_mission_entity(iVar7) && !_0x88ad6cc10d8d35b2(iVar7))
			{
			}
			else
			{
				if (!is_entity_a_mission_entity(iVar7))
				{
					set_entity_as_mission_entity(iVar7, true, true);
				}
				_0x0d0db2b6af19a987(&iVar7);
			}
		}
		iVar6++;
	}
}

bool func_1136(int iParam0)
{
	if (!func_1455(iParam0))
	{
		return false;
	}
	if (!func_679())
	{
		return true;
	}
	return false;
}

void func_1137(int iParam0, int iParam1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0] = iParam1;
}

void func_1138(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_2 = 0;
	(*Global_1900383)[iParam0]->f_3 = 0;
}

void func_1139(var uParam0)
{
	*uParam0 = -377364164;
	uParam0->f_1 = 357708345;
}

void func_1140(int iParam0, struct<2> Param1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_1456(iParam0, Param1))
	{
	}
	if (!func_1457(iParam0, Param1.f_1))
	{
	}
}

void func_1141(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_1458((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_1142(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 57)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1143(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0] = 0;
		(*uParam0)[iVar0]->f_1 = 0;
		(*uParam0)[iVar0]->f_2 = 0;
		(*uParam0)[iVar0]->f_3 = 0;
		(*uParam0)[iVar0]->f_4 = 0;
		iVar0++;
	}
}

void func_1144(var uParam0)
{
	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_1145(int iParam0, var uParam1)
{
	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1146(int iParam0, var uParam1)
{
	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_1147(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_1148(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_1149(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

int func_1150(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

void func_1151(int iParam0)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_26));
	}
	(*Global_1900383)[iParam0]->f_25 = 0;
}

void func_1152(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_508), Global_40.f_1095.f_1[iParam1], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam1], Global_40.f_1095.f_1[iParam0], 436);
	_copy_memory(Global_40.f_1095.f_1[iParam0], &(Global_1900383->f_508), 436);
}

void func_1153(int iParam0, int iParam1)
{
	_copy_memory(&(Global_1900383->f_463), (*Global_1900383)[iParam1], 45);
	_copy_memory((*Global_1900383)[iParam1], (*Global_1900383)[iParam0], 45);
	_copy_memory((*Global_1900383)[iParam0], &(Global_1900383->f_463), 45);
}

int func_1154(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	Var29.f_9 = -1591664384;
	if (!func_1459(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_1459(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_1460(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_1461(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_1462(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_1155(int iParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (func_1463(iParam0))
	{
		return;
	}
	iVar0 = player_id();
	if (is_player_dead(iVar0))
	{
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, false, true);
	}
	_0xbcc76708e5677e1d(iParam0, 0);
	_0x931b241409216c1f(Global_35, iParam0, 0);
	_0xb8b6430ead2d2437(iParam0, 130495496);
	iVar1 = get_entity_model(iParam0);
	iVar2 = _get_default_relationship_group_hash(iVar1);
	set_ped_relationship_group_hash(iParam0, iVar2);
	set_entity_invincible(iParam0, false);
	_0xf74e134f40192884(iParam0, 1);
	_0xfd6943b6df77e449(iParam0, false);
	_0xdf93973251fb2ca5(iVar0, 1);
	request_ped_visibility_tracking(iParam0);
	_0xaeb97d84cdf3c00b(iParam0, 0);
	if (func_1464(iParam0))
	{
		iVar3 = func_1465(iParam0);
		if (func_1466(iVar3))
		{
			set_ped_config_flag(iParam0, 324, true);
		}
	}
	set_ped_config_flag(iParam0, 211, true);
	set_ped_config_flag(iParam0, 208, true);
	set_ped_config_flag(iParam0, 209, true);
	set_ped_config_flag(iParam0, 400, true);
	set_ped_config_flag(iParam0, 297, true);
	set_ped_config_flag(iParam0, 136, false);
	set_ped_config_flag(iParam0, 312, false);
	set_ped_config_flag(iParam0, 113, false);
	set_ped_config_flag(iParam0, 301, false);
	set_ped_config_flag(iParam0, 277, true);
	set_ped_config_flag(iParam0, 319, true);
	set_ped_config_flag(iParam0, 6, true);
	set_animal_tuning_bool_param(iParam0, 25, false);
	set_animal_tuning_bool_param(iParam0, 24, false);
}

void func_1156()
{
	if (func_766(0))
	{
		func_1467(0);
	}
	if (func_766(1))
	{
		func_1467(1);
	}
	if (func_766(5))
	{
		func_1467(5);
	}
	if (func_766(6))
	{
		func_1151(6);
	}
}

int func_1157()
{
	return Global_1900383->f_393;
}

void func_1158(int iParam0)
{
	Global_1900383->f_393 = iParam0;
}

int func_1159(int iParam0, int iParam1, int iParam2)
{
	*iParam0 = 0;
	*iParam1 = 0;
	*iParam2 = 0;
	if (func_758())
	{
		if (func_655())
		{
			bVar0 = false;
			if (!func_675((*Global_1835011)[15]->f_1, 1) && !func_944(42))
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				*iParam0 = func_1468();
				*iParam1 = func_1469();
				*iParam2 = func_1470();
				return 1;
			}
			else
			{
				*iParam0 = func_1471();
				*iParam1 = func_1472();
				*iParam2 = func_1473();
				return 1;
			}
		}
		else if (func_457())
		{
			if (!func_675((*Global_1835011)[60]->f_1, 1))
			{
				*iParam0 = func_1474();
				*iParam1 = func_1475();
				*iParam2 = func_1476();
				return 1;
			}
			else
			{
				*iParam0 = func_1477();
				*iParam1 = func_1478();
				*iParam2 = func_1479();
				return 1;
			}
		}
	}
	else if (func_655())
	{
		*iParam0 = func_1480();
		*iParam1 = func_1481();
		*iParam2 = func_1482();
		return 1;
	}
	else if (func_457())
	{
		*iParam0 = func_1483();
		*iParam1 = func_1484();
		*iParam2 = func_1485();
		return 1;
	}
	return 0;
}

void func_1160(int iParam0, int iParam1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_8 = iParam1;
}

void func_1161(int iParam0, int iParam1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_9 = iParam1;
}

void func_1162(int iParam0, int iParam1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_10 = iParam1;
}

void func_1163(int iParam0, int iParam1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_40.f_1095.f_1[iParam0]->f_14 = iParam1;
}

void func_1164(int iParam0, int iParam1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_774(iParam0);
	if (!is_model_valid(iVar0))
	{
		func_1159(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = get_default_max_attribute_rank(iVar0, 7);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iParam1));
	Global_40.f_1095.f_1[iParam0]->f_372 = iParam1;
	Global_40.f_1095.f_1[iParam0]->f_372.f_1 = fVar4;
	func_1486(iParam1);
	iVar5 = func_765(iParam0);
	if (!does_entity_exist(iVar5))
	{
		return;
	}
	if (is_entity_dead(iVar5) || is_ped_injured(iVar5))
	{
		return;
	}
	iVar6 = floor(Global_40.f_1095.f_1[iParam0]->f_372.f_1);
	set_attribute_points(iVar5, 7, iVar6);
	iVar7 = get_attribute_rank(iVar5, 7);
	Global_40.f_1095.f_1[iParam0]->f_372 = iVar7;
	_0xa69899995997a63b(iVar5, iVar7);
}

void func_1165(int iParam0, int iParam1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 || iParam1);
}

bool func_1166(int iParam0, int iParam1)
{
	iParam0 = func_757(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return ((*Global_1900383)[iParam0]->f_24 && iParam1) != 0;
}

bool func_1167(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1459(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1487(Var0, 1415981582, 0);
	if (!func_636(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1168(int iParam0, var uParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1459(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_1487(Var0, -2119169513, 0);
	if (!func_636(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_1169(int iParam0, int iParam1)
{
	if (!func_1488(856287005, iParam0))
	{
		return false;
	}
	Var0 = { func_1489() };
	*iParam1 = func_1487(Var0, iParam0, 0);
	if (!func_636(*iParam1, 0))
	{
		return false;
	}
	return true;
}

void func_1170(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, -1442703445, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1505972720, 0, false);
}

void func_1171(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_1490(iParam0, *uParam1);
	func_1490(iParam0, uParam1->f_1);
}

void func_1172(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	_0xdf631e4bce1b1fc4(iParam0, 399422490, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -1163401704, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, 88372018, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -630346294, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -273475295, 0, false);
	_0xdf631e4bce1b1fc4(iParam0, -2142954459, 0, false);
}

void func_1173(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	func_1490(iParam0, *uParam1);
	func_1490(iParam0, uParam1->f_1);
	func_1490(iParam0, uParam1->f_2);
	func_1490(iParam0, uParam1->f_3);
	func_1490(iParam0, uParam1->f_4);
	func_1490(iParam0, uParam1->f_5);
}

int func_1174(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (!_0xa0bc8faed8cfeb3c(iParam0))
	{
		return 0;
	}
	iVar0 = get_entity_model(iParam0);
	if (!_does_metaped_outfit_exist_for_ped_model(iParam1, iVar0))
	{
		return 0;
	}
	_set_ped_body_component(iParam0, iParam1);
	if (bParam2)
	{
		_update_ped_variation(iParam0, true, true, true, true, false);
	}
	return 1;
}

void func_1175(int iParam0, var uParam1, var uParam2, var uParam3)
{
	*uParam3 = func_451(iParam0);
	*uParam1 = func_452(iParam0);
	*uParam2 = func_453(iParam0);
}

void func_1176(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

void func_1177(var uParam0, bool bParam1)
{
	if (*uParam0 != -1)
	{
		func_1182(*uParam0, -1);
		func_1183(*uParam0, 0);
		func_1184(*uParam0, 0);
		if (does_blip_exist(&(Global_36308[*uParam0])))
		{
			if (bParam1)
			{
				set_radar_zoom(&(Global_36308[*uParam0]));
			}
			remove_blip(Global_36308[*uParam0]);
		}
	}
	*uParam0 = -1;
}

bool func_1178(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		return does_blip_exist(&(Global_36308[iParam0]));
	}
	return false;
}

void func_1179(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 < Global_36308)
	{
		if (does_blip_exist(&(Global_36308[iParam0])))
		{
			_set_blip_flash_style(&(Global_36308[iParam0]), iParam1);
		}
	}
}

int func_1180(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 5;
		case 2:
			return 26;
		case 3:
			return 38;
		case 4:
			return 69;
		case 5:
			return 76;
		case 6:
			return 78;
		case 7:
			return 92;
		case 8:
			return 105;
		case 9:
			return 115;
		case 10:
			return 120;
		default:
			break;
	}
	return -1;
}

int func_1181(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1341870286;
		case 5:
			return -1706412559;
		case 26:
			return 279909480;
		case 38:
			return -412614304;
		case 69:
			return -653335484;
		case 76:
			return 1777802794;
		case 78:
			return 1088576970;
		case 92:
			return 412321676;
		case 105:
			return 1787788681;
		case 115:
			return 1635466279;
		case 120:
			return -410502938;
		case 4:
		case 9:
		case 22:
		case 37:
		case 43:
		case 58:
		case 71:
		case 79:
		case 98:
			return 7148155;
		default:
			break;
	}
	return 0;
}

void func_1182(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0] = iParam1;
		return;
	}
	Global_42606[iParam0] = iParam1;
	return;
}

void func_1183(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_1 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_1 = iParam1;
	return;
}

void func_1184(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_7862[iParam0]->f_2 = iParam1;
		return;
	}
	Global_42606[iParam0]->f_2 = iParam1;
	return;
}

float func_1185()
{
	if (func_1491())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1492(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1492(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1493();
	fVar2 = func_1494();
	fVar3 = func_1495();
	fVar4 = func_1496();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1497()));
	fVar7 = (func_1492(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1498(3, round((to_float(iVar8) * fVar10)), 0);
	func_1499(3, fVar9, fVar9 > 100f);
	return func_873(fVar7, -100f, 100f);
}

float func_1186()
{
	if (func_1491())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1492(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1492(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1493();
	fVar2 = func_1494();
	fVar3 = func_1495();
	fVar4 = func_1496();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1497()));
	fVar7 = (func_1492(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1498(2, round((to_float(iVar8) * fVar10)), 0);
	func_1499(2, fVar9, fVar9 > 100f);
	return func_873(fVar7, -100f, 100f);
}

float func_1187()
{
	if (func_1491())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1492(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1500())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1501())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1492(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1493();
	fVar2 = func_1494();
	fVar3 = func_1495();
	fVar4 = func_1496();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1497()));
	fVar7 = (func_1492(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1498(1, round((to_float(iVar8) * fVar10)), 0);
	func_1499(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1492(0);
	}
	return func_873(fVar7, -100f, 100f);
}

void func_1188(int* iParam0)
{
	_copy_memory(iParam0, &(Global_1879534->f_7301), 243);
}

bool func_1189()
{
	if (func_1502(43) && !func_1502(44))
	{
		return false;
	}
	if (func_1502(67) && func_1503() != 8)
	{
		return false;
	}
	return true;
}

float func_1190(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_1191(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

var func_1192(int iParam0, int iParam1)
{
	Var1 = { func_415(iParam0, iParam1) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

float func_1193(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

var func_1194(int iParam0)
{
	Var1 = { func_651(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1195()
{
	if (func_208(Global_40.f_8863.f_154, 1))
	{
		iVar0++;
	}
	if (func_208(Global_40.f_8863.f_154, 2))
	{
		iVar0++;
	}
	if (func_208(Global_40.f_8863.f_154, 4))
	{
		iVar0++;
	}
	if (func_208(Global_40.f_8863.f_154, 8))
	{
		iVar0++;
	}
	if (func_208(Global_40.f_8863.f_154, 16))
	{
		iVar0++;
	}
	if (func_208(Global_40.f_8863.f_154, 32))
	{
		iVar0++;
	}
	if (func_208(Global_40.f_8863.f_154, 64))
	{
		iVar0++;
	}
	if (func_208(Global_40.f_8863.f_154, 128))
	{
		iVar0++;
	}
	if (func_208(Global_40.f_8863.f_154, 256))
	{
		iVar0++;
	}
	return iVar0;
}

float func_1196(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_1197()
{
	iVar0 = 0;
	while (iVar0 <= (20 - 1))
	{
		iVar2 = func_1504(iVar0);
		if (func_208(func_1505(), iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_1198(int iParam0)
{
	if (func_237() != -1)
	{
		return false;
	}
	if (!func_216(iParam0))
	{
		return false;
	}
	return func_675((*Global_1347702)[iParam0]->f_15, 1);
}

int func_1199(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1200(int iParam0, int iParam1)
{
	is_entity_dead(Global_35);
	*iParam0 = get_attribute_rank(Global_35, 0);
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 1));
	*iParam0 = (*iParam0 + get_attribute_rank(Global_35, 2));
	*iParam1 = get_max_attribute_rank(Global_35, 0);
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 1));
	*iParam1 = (*iParam1 + get_max_attribute_rank(Global_35, 2));
	*iParam1 += 6;
	iVar0 = func_639(-1845241476, 0, 0);
	iVar1 = func_639(1654063339, 0, 0);
	iVar2 = func_639(1623931083, 0, 0);
	*iParam0 = (*iParam0 + ((iVar0 + iVar1) + iVar2));
}

var func_1201(int iParam0)
{
	Var1 = { func_630(iParam0) };
	stat_id_get_int(&Var1, &uVar0);
	return uVar0;
}

int func_1202()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar2 = func_1506(iVar0);
		if (chal_get_num_ranks_completed(iVar2) >= chal_get_max_ranks(iVar2))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

float func_1203(var uParam0, var uParam1)
{
	stat_id_get_float(&uParam0, &uVar0);
	return uVar0;
}

void func_1204(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return;
	}
	if (!func_427(iParam0))
	{
		return;
	}
	if (func_227(iParam0))
	{
		func_203(iParam0, 0, 2);
	}
	iVar0 = func_1507(iParam0);
	if (iVar0 < 0)
	{
		return;
	}
	iVar1 = iVar0;
	if (&Global_1898329 > 1)
	{
		(*Global_1898330)[iVar1] = Global_1898330[(&Global_1898329 - 1)];
		*(*Global_1898346)[iVar1] = { *((*Global_1898346)[(&Global_1898329 - 1)]) };
		(*Global_1898330)[(&Global_1898329 - 1)] = -1;
		*((*Global_1898346)[(&Global_1898329 - 1)]) = { Var2 };
	}
	else
	{
		(*Global_1898330)[iVar1] = -1;
		*(*Global_1898346)[iVar1] = { Var2 };
	}
	Global_1898329 = (&Global_1898329 - 1);
	if (&Global_1898329 < 0)
	{
		Global_1898329 = 0;
	}
}

void func_1205(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_450(Global_1898330[iParam0]);
		func_1175((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

int func_1206(vector3 vParam0)
{
	iVar0 = func_1508(vParam0, 0f, 0f, 0, 2);
	return func_1508(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

bool func_1207(vector3 vParam0, int iParam3)
{
	if (is_entity_dead(iParam3))
	{
		return false;
	}
	vVar0 = { get_entity_forward_vector(iParam3) };
	return func_1288(vVar0, vParam0) > func_1288(vVar0, get_entity_coords(iParam3, true, false));
}

float func_1208(int iParam0, int iParam1)
{
	return func_183(iParam0, iParam1, 1, 1);
}

void func_1209(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_53(iParam0, 1))
	{
		return;
	}
	clear_ped_tasks(iParam0, 1, 0);
	set_blocking_of_non_temporary_events(iParam0, false);
	if (_is_ped_getting_into_a_mount_seat(iParam0, true))
	{
		iVar0 = get_mount(iParam0);
		if (!is_entity_dead(iVar0))
		{
			clear_ped_tasks(iVar0, 1, 0);
			set_blocking_of_non_temporary_events(iVar0, false);
		}
	}
	if (bParam3)
	{
		if (iParam1 != 0)
		{
			if (!is_entity_dead(iParam1))
			{
				_0x1854217c640b39ec(iParam0, iParam1, 0f, 0f, 0f, 30f, 0, 0);
			}
		}
	}
	if (!bParam2)
	{
		task_combat_hated_targets_around_ped(iParam0, 300f, 0, 0);
	}
	else
	{
		task_combat_ped(iParam0, Global_35, 0, 0);
		set_ped_keep_task(iParam0, true);
	}
}

int func_1210(int iParam0, int iParam1)
{
	if (iParam1 == 6)
	{
		return iParam0 + 10;
	}
	return iParam0 + 1;
}

void func_1211(var uParam0, bool bParam1, int iParam2)
{
	func_1509(iParam2);
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
		uParam0->f_10 = 0;
	}
	uParam0->f_5 = iParam2;
	if (Global_1572887->f_12 == -1)
	{
		uParam0->f_13 = Global_1935630->f_44;
	}
	else
	{
		uParam0->f_13 = func_1510(0);
	}
	switch (uParam0->f_6)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!*uParam0 & 33554432 != 0)
				{
					if (uParam0->f_13 == -1504859554)
					{
						if (is_ped_planting_bomb(Global_35))
						{
							func_1134(uParam0, 33554432);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_1511(1))
						{
							func_1134(uParam0, 33554432);
						}
					}
				}
				else if (!is_ped_planting_bomb(Global_35) && (!func_1511(1) || *uParam0 & 8192 != 0))
				{
					func_1133(uParam0, 33554432);
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
	if (!uParam0->f_1 & 1024 != 0)
	{
		if (!does_entity_exist(uParam0->f_14))
		{
			if (func_1512(uParam0))
			{
				uParam0->f_15 = func_627();
			}
		}
		else if (uParam0->f_15 > 0)
		{
			if ((func_627() - uParam0->f_15) > 500)
			{
				if (!is_ped_on_mount(uParam0->f_14))
				{
					uParam0->f_14 = 0;
					uParam0->f_15 = 0;
				}
			}
		}
	}
	uParam0->f_6++;
	if (uParam0->f_6 >= 4)
	{
		uParam0->f_6 = 0;
		uParam0->f_7++;
		if (uParam0->f_7 > 4)
		{
			uParam0->f_7 = 0;
		}
	}
	func_1513(uParam0);
}

bool func_1212(int iParam0, var uParam1)
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
			if (!func_1514(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_1208(iParam0, iVar2) <= func_1515(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_1213(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_10 = iParam0;
	}
	if (func_1516(iParam2, 1, 1, 1, 0))
	{
		func_1134(uParam1, 2048);
	}
	uParam1->f_16 = iParam2;
	func_917(uParam1, 1);
	func_1517();
}

bool func_1214(int iParam0, var uParam1)
{
	fVar0 = 85f;
	if (!is_entity_dead(iParam0))
	{
		if (func_389(iParam0, !*uParam1 & 268435456 != 0, !*uParam1 & 536870912 != 0, !*uParam1 & 1073741824 != 0, 0, 0))
		{
			if (uParam1->f_12 < 5f)
			{
				fVar0 = 95f;
			}
			else if (uParam1->f_12 < 15f)
			{
				fVar0 = 90f;
			}
			fVar1 = func_1518(uParam1);
			if (func_1519(uParam1, iParam0, fVar0, fVar1))
			{
				if (uParam1->f_2 == 0)
				{
					uParam1->f_2 = get_game_timer();
				}
				iVar2 = (get_game_timer() - uParam1->f_2);
				iVar3 = func_1520(uParam1);
				if (uParam1->f_2 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_917(uParam1, 1);
						return true;
					}
					else if (uParam1->f_12 < 3.5f)
					{
						if (iVar2 > 500)
						{
							func_917(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_1215(int iParam0, int iParam1, var uParam2)
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
	if (func_1521(iParam1, !*uParam2 & 268435456 != 0, !*uParam2 & 536870912 != 0, !*uParam2 & 1073741824 != 0, 0))
	{
		if (uParam2->f_12 < 5f)
		{
			fVar0 = 95f;
		}
		else if (uParam2->f_12 < 15f)
		{
			fVar0 = 90f;
		}
		fVar1 = func_1518(uParam2);
		if (func_1519(uParam2, iParam0, fVar0, fVar1))
		{
			if (uParam2->f_2 == 0)
			{
				uParam2->f_2 = get_game_timer();
			}
			if (uParam2->f_2 != 0)
			{
				if (get_game_timer() - uParam2->f_2) > func_1520(uParam2)
				{
					func_917(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1216(int iParam0, var uParam1)
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
	if (func_1514(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_3 == 0)
		{
			uParam1->f_3 = get_game_timer();
		}
		else if (get_game_timer() - uParam1->f_3) > func_1520(uParam1)
		{
			fVar3 = func_1518(uParam1);
			if (uParam1->f_12 < fVar3)
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

bool func_1217(var uParam0, float fParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_627();
	iVar1 = (iVar0 - uParam0->f_8);
	if (IntToFloat(iVar1) > (fParam1 * 1000f))
	{
		return true;
	}
	return false;
}

bool func_1218(var uParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 < IntToFloat(func_1522(uParam2)))
	{
		if ((is_weapon_valid(Global_1935630->f_46) && !_0x5809dbca0a37c82b(Global_1935630->f_46)) || get_current_ped_vehicle_weapon(Global_35, &uVar0))
		{
			if (func_916(uParam2, iParam1))
			{
				if (_0x285d36c5c72b0569(uParam0) <= 1f)
				{
					func_917(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_1219(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vVar0 = { get_entity_coords(iParam1, false, true) };
	iVar3 = func_1523(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_917(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (is_shocking_event_in_sphere(956330317, vVar0, uParam2->f_27))
				{
					func_917(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar4, 0, 0);
					if (func_1524(iParam1, vVar0, vVar4))
					{
						func_917(uParam2, 1);
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
				if (is_shocking_event_in_sphere(217247011, vVar0, uParam2->f_22))
				{
					func_917(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (is_shocking_event_in_sphere(-966930978, vVar0, uParam2->f_22))
				{
					get_coords_of_projectile_type_within_distance(iParam1, -1504859554, uParam2->f_26, &vVar7, 0, 0);
					if (func_1524(iParam1, vVar0, vVar7))
					{
						func_917(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	return false;
}

bool func_1220(int iParam0, var uParam1)
{
	vVar9 = { get_entity_coords(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1935630->f_39)
	{
		if (!func_1514(iParam0, uParam1, &(Global_1935630->f_34[iVar0])) || iParam0 == &Global_1935630->f_34[iVar0])
		{
		}
		else
		{
			bVar13 = func_1525(&(Global_1935630->f_34[iVar0]));
			fVar1 = vdist(get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false), vVar9);
			if (func_1526(&(Global_1935630->f_34[iVar0])))
			{
				if (fVar1 < 35f)
				{
					if ((decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamA") && decor_exist_on(iParam0, "HorseOwnerTeamA")) || (decor_exist_on(&(Global_1935630->f_34[iVar0]), "HorseTeamB") && decor_exist_on(iParam0, "HorseOwnerTeamB")))
					{
						*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
						*vVar2[1] = { vVar9 };
						uParam1->f_10 = iParam0;
						return true;
					}
				}
			}
			if (func_1527(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1528(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
			else if (func_1529(uParam1, iParam0, fVar1, iVar0))
			{
				*vVar2[0] = { get_entity_coords(&(Global_1935630->f_34[iVar0]), false, false) };
				*vVar2[1] = { vVar9 };
				uParam1->f_10 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1221(int iParam0, var uParam1)
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

bool func_1222(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_627();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_1223(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_1530(iVar0, &iVar2))
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
	if (func_1531(iVar0, iParam0))
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

int func_1224(var uParam0, int iParam1)
{
	if (!decor_exist_on(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = decor_get_int(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (decor_set_int(iParam1, "iDamageFrame", uParam0->f_5))
		{
		}
	}
	else if (uParam0->f_5 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_1225(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		if (has_entity_been_damaged_by_entity(iParam0, iParam1, 1, 1))
		{
			return true;
		}
		if (func_183(iParam0, iParam1, 1, 1) < 4f)
		{
			if (is_entity_touching_entity(iParam0, iParam1) && is_ped_ragdoll(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1226()
{
}

bool func_1227(var uParam0, int iParam1)
{
	iVar0 = get_vehicle_ped_is_using(Global_35);
	if (iVar0 != 0 && !is_this_model_a_train(get_entity_model(iVar0)))
	{
		vVar1 = { get_entity_coords(iParam1, false, false) };
		if (func_1532(iVar0, iParam1, vVar1))
		{
			uParam0->f_9 = func_627();
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
						if (func_87(iVar7, vVar1, 1) < 3f)
						{
							if (is_entity_touching_entity(iVar7, iParam1))
							{
								uParam0->f_9 = func_627();
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

bool func_1228()
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
	if ((func_627() - Global_1935630->f_43) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_1229(var uParam0, int iParam1)
{
	if (!does_entity_exist(uParam0->f_14))
	{
		return false;
	}
	if (!is_ped_human(iParam1))
	{
		return false;
	}
	fVar0 = func_1515(uParam0);
	if (uParam0->f_12 > func_1533(uParam0) && uParam0->f_12 > fVar0)
	{
		return false;
	}
	iVar2 = func_1534(iParam1);
	iVar1 = func_1535(uParam0->f_14);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_12 <= fVar0 || ((_0x06087579e7aa85a9(iParam1, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam1, Global_35, true, 0) == 1)) || ((_0x06087579e7aa85a9(iParam1, uParam0->f_14, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam1, uParam0->f_14, 17)) && _0x7f9b9791d4cb71f6(iParam1, uParam0->f_14, true, 0) == 1))
		{
			return true;
		}
	}
	return false;
}

int func_1230(int iParam0, int iParam1, var uParam2)
{
	if (uParam2->f_12 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_1536(iParam0, iParam1, bVar0, bVar2, uParam2->f_12, bVar1);
}

bool func_1231(int iParam0, var uParam1)
{
	if (*uParam1 & 67108864 != 0)
	{
		return true;
	}
	if (Global_1935630->f_24)
	{
		return true;
	}
	if (*uParam1 & 33554432 != 0)
	{
		if (func_1537(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((_0x06087579e7aa85a9(iParam0, Global_35, -1f, -1f, -1f, -1f) && has_entity_clear_los_to_entity(iParam0, Global_35, 17)) && _0x7f9b9791d4cb71f6(iParam0, Global_35, true, 0) == 1)
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
					if (!func_1538(uParam1, iParam0))
					{
						if (func_87(iVar4, Global_36, 1) < 7f)
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

bool func_1232(int iParam0, var uParam1)
{
	if (!func_1539(0))
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

bool func_1233(var uParam0, int iParam1)
{
	if (uParam0->f_8 <= 0)
	{
		return true;
	}
	iVar0 = func_627();
	iVar1 = (iVar0 - uParam0->f_8);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_1234(int iParam0, var uParam1)
{
	return _0xe33f98bd76490abc(*iParam0, player_id(), 0);
}

int func_1235(int iParam0, var uParam1)
{
	if (!is_ped_human(iParam0))
	{
		return 0;
	}
	if (uParam1->f_4 == 0)
	{
		uParam1->f_4 = func_627();
	}
	else if (func_627() - uParam1->f_4) > func_1540(uParam1)
	{
		return func_1541(iParam0, uParam1, 0, -1082130432);
	}
	return 0;
}

bool func_1236(var uParam0, int iParam1)
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

int func_1237(int iParam0)
{
	if (!is_entity_dead(&(Local_51.f_25[iParam0]->f_410[0])) || !is_entity_dead(&(Local_51.f_25[iParam0]->f_410[1])))
	{
		return 0;
	}
	return 1;
}

bool func_1238(int iParam0)
{
	if (Local_51.f_25[iParam0]->f_410[0]->f_15 && Local_51.f_25[iParam0]->f_410[1]->f_15)
	{
		return true;
	}
	return false;
}

bool func_1239(int iParam0, int* iParam1)
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
		if (is_ped_in_combat(iParam0, func_1542((bVar1 && !bVar0), Global_35, 0)))
		{
			return true;
		}
	}
	return false;
}

void func_1240(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_1257((*uParam0)[iVar0]))
		{
			func_841((*uParam0)[iVar0], 14);
		}
		iVar0++;
	}
}

void func_1241(int* iParam0, var uParam1, bool bParam2)
{
	if (iParam0->f_3 > -1 && iParam0->f_3 < *uParam1)
	{
		func_92(&((*uParam1)[iParam0->f_3]->f_6), 1, 1);
		if (bParam2)
		{
			func_843(iParam0, 0);
		}
	}
}

int func_1242(int iParam0, int* iParam1, var uParam2, float fParam3, bool bParam4)
{
	if (iParam1->f_3 > -1 && iParam1->f_3 < *uParam2)
	{
		iVar0 = iParam1->f_3;
		(*uParam2)[iVar0]->f_8 = 6;
		func_1543(iParam0, (*uParam2)[iVar0], fParam3, 3, 0, 6, bParam4, 0);
		if (func_240((*uParam2)[iVar0]->f_6))
		{
			func_841((*uParam2)[iVar0], 11);
			return (*Global_1945938)[(*uParam2)[iVar0]->f_6]->f_3;
		}
	}
	return 0;
}

int func_1243(var uParam0)
{
	iVar0 = func_1544(*uParam0);
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

int func_1244(var uParam0, int iParam1)
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

void func_1245(int* iParam0, int* iParam1)
{
	if (!func_849(iParam0, 23))
	{
		if (iParam1->f_7 == 648122183)
		{
			func_841(iParam1, 19);
			func_1259(iParam0, 23);
			func_1545(iParam1, 2);
		}
	}
}

void func_1246(int iParam0, var uParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		func_1543(iParam0, (*uParam1)[iVar0], fParam2, iParam3, iParam4, iParam5, bParam6, bParam7);
		if (bParam8)
		{
			clear_bit((*uParam1)[iVar0], 14);
		}
		iVar0++;
	}
}

int func_1247(int iParam0)
{
	return _money_get_cash_balance();
}

bool func_1248(int iParam0)
{
	return (func_114(iParam0, 4) || func_114(iParam0, 5));
}

bool func_1249(int iParam0)
{
	return func_114(iParam0, 7);
}

bool func_1250(int iParam0)
{
	return func_114(iParam0, 6);
}

void func_1251(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (is_bit_set(*iParam1, 14))
	{
		if (func_1257(iParam1))
		{
			clear_bit(iParam1, 14);
			func_1543(iParam0, iParam1, fParam2, iParam3, iParam4, iParam5, bParam6, 0);
		}
	}
}

bool func_1252(int iParam0, int* iParam1, int* iParam2, bool bParam3, float fParam4, float fParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, float fParam14, bool bParam15, int iParam16)
{
	bVar0 = bParam3;
	if (bParam3)
	{
		bVar1 = false;
		if (func_1546(iParam1, iParam2, iParam0, bParam9, bParam10, fParam5, bParam11, bParam12, bParam13, fParam14, bParam15, iParam16))
		{
			bVar1 = true;
		}
		if (func_1547(iParam2->f_6, 0))
		{
			if (bVar1)
			{
				func_251(iParam2->f_6, 0, 1);
				bVar0 = false;
			}
		}
		else if (!bVar1)
		{
			func_251(iParam2->f_6, 1, 1);
			bVar0 = false;
		}
		if (bParam8)
		{
			func_1548(iParam2->f_6, iParam0, 0, 1, -1);
		}
	}
	return bVar0;
}

bool func_1253(int iParam0, int iParam1)
{
	if ((iParam0 == 4 || iParam0 == 6) || iParam0 == 5)
	{
		if (func_256(iParam1, 1))
		{
			return true;
		}
	}
	else if (func_1549(iParam1, 1))
	{
		func_1550(iParam1, 1);
		return true;
	}
	return false;
}

void func_1254(var uParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_519((*uParam0)[iVar0], bParam1, bParam2);
		iVar0++;
	}
}

bool func_1255(int* iParam0, float fParam1, bool bParam2)
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

void func_1256(int* iParam0, float fParam1)
{
	if (fParam1 <= iParam0->f_12)
	{
		disable_control_action(0, 1101824977, true);
		disable_control_action(0, 966551065, true);
		disable_control_action(0, 668058244, true);
		set_ped_reset_flag(Global_35, 203, true);
	}
}

bool func_1257(int* iParam0)
{
	if (!is_string_null_or_empty(iParam0->f_5))
	{
		return true;
	}
	return false;
}

bool func_1258(int iParam0)
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

void func_1259(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_1260(var uParam0)
{
	if (!func_205(uParam0->f_9, 0, 1))
	{
		return;
	}
	if (is_ped_using_any_scenario(uParam0->f_9))
	{
		_0x802092b07e3b1eea(uParam0->f_9, Global_36, 3);
	}
	task_smart_flee_ped(uParam0->f_9, Global_35, 6000f, -1, 0, 1077936128, 0);
	set_ped_drops_weapons_when_dead(uParam0->f_9, true);
}

void func_1261(int iParam0)
{
	remove_ped_defensive_area(iParam0, false);
	set_ped_combat_movement(iParam0, 2);
	set_ped_combat_range(iParam0, 0);
	set_ped_combat_attributes(iParam0, 50, true);
	set_ped_combat_attributes(iParam0, 31, true);
	set_ped_config_flag(iParam0, 112, true);
}

int func_1262()
{
	iVar0 = 0;
	while (iVar0 < Local_51.f_2266)
	{
		if (func_53(Local_51.f_25[iVar0]->f_9, 3))
		{
			return Local_51.f_25[iVar0]->f_9;
		}
		if (func_53(Local_51.f_25[iVar0]->f_174, 3))
		{
			return Local_51.f_25[iVar0]->f_174;
		}
		iVar1 = 0;
		while (iVar1 < Local_51.f_25[iVar0]->f_499)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_410[iVar1]), 3))
			{
				return &(Local_51.f_25[iVar0]->f_410[iVar1]);
			}
			iVar1++;
		}
		iVar2 = 0;
		while (iVar2 < Local_51.f_25[iVar0]->f_523)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_500[iVar2]), 3))
			{
				return &(Local_51.f_25[iVar0]->f_500[iVar2]);
			}
			iVar2++;
		}
		iVar3 = 0;
		while (iVar3 < Local_51.f_25[iVar0]->f_540)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_524[iVar3]), 3))
			{
				return &(Local_51.f_25[iVar0]->f_524[iVar3]);
			}
			iVar3++;
		}
		iVar4 = 0;
		while (iVar4 < Local_51.f_25[iVar0]->f_595)
		{
			if (func_53(&(Local_51.f_25[iVar0]->f_541[iVar4]), 3))
			{
				return &(Local_51.f_25[iVar0]->f_541[iVar4]);
			}
			iVar4++;
		}
		iVar0++;
	}
	if (func_15(&Local_51, 65536))
	{
		iVar5 = 0;
		while (iVar5 < 2)
		{
			if (func_53(&(Local_51.f_5[iVar5]), 3))
			{
				return &(Local_51.f_5[iVar5]);
			}
			iVar5++;
		}
	}
	return 0;
}

void func_1263(int iParam0, vector3 vParam1, int iParam4, bool bParam5, float fParam6)
{
	if (!func_53(iParam0, 0))
	{
		return;
	}
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		return;
	}
	if (is_ped_on_mount(iParam0))
	{
		return;
	}
	if (is_ped_in_cover(iParam0, 0, 0))
	{
		return;
	}
	set_ped_config_flag(iParam0, 246, true);
	if (vdist(get_entity_coords(iParam0, true, false), vParam1) < fParam6)
	{
		if (!func_108(iParam0, 1812035420))
		{
			task_seek_cover_to_coords(iParam0, vParam1, get_entity_coords(iParam4, true, false), -1, 0, 0, 0);
		}
	}
	else if (bParam5)
	{
		if (!func_108(iParam0, -1758697641))
		{
			task_go_to_coord_while_aiming_at_entity(iParam0, vParam1, iParam4, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
		}
	}
	else if (!func_108(iParam0, 713668775))
	{
		task_follow_nav_mesh_to_coord(iParam0, vParam1, 3f, -1, 0.25f, 0, 40000f);
	}
}

void func_1264(int iParam0, char* sParam1, int iParam2, int iParam3)
{
	(*Global_1945938)[iParam0]->f_4 = iParam2;
	(*Global_1945938)[iParam0] = 3;
	(*Global_1945938)[iParam0]->f_16 = get_id_of_this_thread();
	(*Global_1945938)[iParam0]->f_2 = 0;
	(*Global_1945938)[iParam0]->f_6 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_9 = 0f;
	(*Global_1945938)[iParam0]->f_10 = 0;
	(*Global_1945938)[iParam0]->f_11 = 0;
	(*Global_1945938)[iParam0]->f_12 = { 0f, 0f, 0f };
	(*Global_1945938)[iParam0]->f_5 = 4;
	(*Global_1945938)[iParam0]->f_1 = 2;
	(*Global_1945938)[iParam0]->f_17 = -1;
	iVar0 = _uiprompt_register_begin();
	_uiprompt_set_control_action(iVar0, iParam2);
	_uiprompt_set_text(iVar0, sParam1);
	_uiprompt_set_priority(iVar0, 3);
	_uiprompt_set_transport_mode(iVar0, 0);
	_uiprompt_set_attribute(iVar0, 18, 1);
	_uiprompt_set_hold_mode(iVar0, iParam3);
	_uiprompt_register_end(iVar0);
	(*Global_1945938)[iParam0]->f_3 = iVar0;
	func_463(iParam0, 1);
	func_464(iParam0, 1);
	func_465(iParam0, 128);
}

bool func_1265(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	iVar0 = get_ped_relationship_group_hash(iParam0);
	if (iVar0 == -767591988 || iVar0 == -989642646)
	{
		return true;
	}
	return false;
}

float func_1266(vector3 vParam0, vector3 vParam3)
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

void func_1267(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

void func_1268(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_651(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

struct<4> func_1269(bool bParam0)
{
	return func_890(1328661203, func_1551(), -1591664384, bParam0);
}

bool func_1270(int iParam0, bool bParam1)
{
	if (func_633(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_944(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1271(bool bParam0)
{
	iVar0 = func_960(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_890(271701509, func_1269(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_890(271701509, func_1269(bParam0), 12999093, 0);
}

bool func_1272(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_633(iParam0);
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &uVar0))
		{
			if (_item_database_can_equip_item_on_category(iParam0, iParam1, uVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1273(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_960(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1274(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_890(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_960(bParam6), &Var0, 0);
	return uVar4;
}

bool func_1275(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

void func_1276(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_1552(iParam1))
		{
			func_898(iParam0, 41788943);
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
			func_1553(iParam0, 0, 1);
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
			func_1554(iParam0, 0);
			bVar0 = true;
		}
		func_1555(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_1277(int iParam0, int iParam1)
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

bool func_1278(int iParam0, int iParam1)
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

bool func_1279(int iParam0, int iParam1)
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
	if (!func_1277(iParam0, iVar0))
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

void func_1280(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

bool func_1281(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1282(int iParam0, int iParam1)
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

int func_1283(int iParam0)
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

var func_1284(int iParam0, int iParam1, int iParam2, int iParam3)
{
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = iParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return _0xa88e215ceb0435c0(iParam0, &Var0, iParam3, iVar23, 2, 0);
}

bool func_1285(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_1286()
{
	if (func_1556())
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

Vector3 func_1287(vector3 vParam0)
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

float func_1288(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_1289(var uParam0, var uParam1)
{
	if (func_591(Global_35, *uParam0, &(uParam1->f_2069)))
	{
		return true;
	}
	return false;
}

bool func_1290(int iParam0, vector3 vParam1, float fParam4)
{
	if (is_any_vehicle_near_point(vParam1, fParam4))
	{
		iVar0 = get_closest_vehicle(vParam1, fParam4, 0, 0);
		if (does_entity_exist(iVar0))
		{
			if ((((_0x2963b5c1637e8a27(iVar0) == 0 && get_ped_in_vehicle_seat(iVar0, -1) == 0) && get_ped_in_vehicle_seat(iVar0, 0) == 0) && iVar0 != iParam0) && (!does_entity_exist(Local_51.f_2278) || iVar0 != Local_51.f_2278))
			{
				return true;
			}
		}
	}
	return false;
}

void func_1291(int iParam0, vector3 vParam1, float fParam4)
{
	iVar0 = func_541(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	get_ped_nearby_peds(iVar0, &iVar1, -1, -1);
	iVar22 = 0;
	while (iVar22 < iVar1)
	{
		if (does_entity_exist(&(iVar1[iVar22])))
		{
			if (!is_ped_injured(&(iVar1[iVar22])))
			{
				if ((((func_542(&(iVar1[iVar22])) && _get_rider_of_mount(&(iVar1[iVar22]), false) == 0) && vdist(vParam1, get_entity_coords(&(iVar1[iVar22]), true, false)) < fParam4) && !is_ped_fleeing(&(iVar1[iVar22]))) && !func_108(&(iVar1[iVar22]), 518218985))
				{
					task_smart_flee_coord(&(iVar1[iVar22]), get_entity_coords(iParam0, true, false), 200f, -1, false, 1077936128);
				}
			}
		}
		iVar22++;
	}
}

int func_1292(int iParam0, vector3 vParam1, float fParam4)
{
	iVar1 = 0;
	if (func_1290(iParam0, vParam1, fParam4))
	{
		iVar0 = get_closest_vehicle(vParam1, fParam4, 0, 0);
		if (does_entity_exist(iVar0))
		{
			iVar2 = 0;
			while (iVar2 < 6)
			{
				iVar3 = _get_ped_in_draft_seat(iVar0, iVar2);
				if (func_53(iVar3, 1))
				{
					iVar1++;
				}
				iVar2++;
			}
		}
	}
	return iVar1;
}

void func_1293(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_1294(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1295(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1296(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_1557(bParam1);
	}
}

void func_1297(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1298(int iParam0)
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

bool func_1299(int iParam0)
{
	if (!func_1558(23, &vVar0))
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

bool func_1300(int iParam0, int iParam1, int iParam2)
{
	if (!func_1558(23, &Var0))
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

int func_1301(int iParam0)
{
	return iParam0;
}

int func_1302()
{
	iVar0 = func_484();
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

int func_1303(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	request_model(iParam0, false);
	if (!has_model_loaded(iParam0))
	{
		return 0;
	}
	if (!_does_scenario_point_exist(iParam4) && iParam5 != 0)
	{
		iParam4 = _find_closest_active_scenario_point_of_type(vParam1, iParam5, 1f, 0, false);
	}
	if (_does_scenario_point_exist(iParam4))
	{
		if (_0xea31f199a73801d3(iParam4))
		{
			iVar1 = _get_scenario_point_entity(iParam4, "CONTAINER");
			if (is_entity_an_object(iVar1))
			{
				iVar0 = get_object_index_from_entity_index(iVar1);
			}
		}
	}
	else
	{
		iVar0 = get_closest_object_of_type(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

bool func_1304(int iParam0, float fParam1)
{
	return decor_set_float(iParam0, "fLoot_money", fParam1);
}

int func_1305(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		case 1:
			return -1130352927;
		case 2:
			return 389988485;
		case 3:
			return 1780904876;
		case 4:
			return 1367443060;
		case 5:
			return -1506259487;
		case 6:
			return -676503695;
		case 7:
			return 383349088;
		case 8:
			return -1292426046;
		case 9:
			return 1422688607;
		case 10:
			return 1108822547;
		case 11:
			return -338487716;
		case 12:
			return 1742327865;
		case 13:
			return 1600962399;
		case 14:
			return 1849504272;
		case 15:
			return 1672288269;
		case 16:
			return 1250092473;
		case 17:
			return -893163968;
		case 18:
			return -450913544;
		case 19:
			return -1364808185;
		case 20:
			return -1197751823;
		case 21:
			return 304805134;
		case 22:
			return -1505978566;
		case 23:
			return 1145151482;
		case 24:
			return -1176744536;
		case 25:
			return 673166414;
		case 26:
			return -207860920;
		case 27:
			return 99217379;
		case 28:
			return -735900586;
		case 29:
			return -426430150;
		case 30:
			return 1788623170;
		case 31:
			return -1130865351;
		case 32:
			return -1884748965;
		case 33:
			return -1586649372;
		case 34:
			return 788010710;
		case 35:
			return 1958421083;
		case 36:
			return -1944638739;
		case 37:
			return 1900541263;
		case 38:
			return -1489346253;
		case 39:
			return -358215195;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1306(int iParam0)
{
	if (!func_1559(iParam0))
	{
		func_1561(func_1560(iParam0));
	}
}

int func_1307()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1559(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1308(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1309(iVar9);
	iVar2 = func_1309(iVar10);
	iVar3 = func_1309(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1309(iVar12);
	}
	iVar5 = func_1310(iVar9);
	iVar6 = func_1310(iVar10);
	iVar7 = func_1310(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_1310(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1309(int iParam0)
{
	if (func_412(iParam0, 1, 0))
	{
		iVar0 = func_639(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1310(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return 5;
		case -164081697:
			return 5;
		case -1161319399:
			return 5;
		case 728781265:
			return 15;
		case -222563712:
			return 20;
		case 1794857344:
			return 7;
		case 1952409553:
			return 10;
		case 2116770557:
			return 25;
		case -651064726:
			return 3;
		case -404270094:
			return 7;
		case 2093126853:
			return 5;
		case 2085530337:
			return 30;
		case -150591160:
			return 5;
		case -323969289:
			return 10;
		case 1504361882:
			return 5;
		case -1521783510:
			return 5;
		case 1714875242:
			return 5;
		case 1019229063:
			return 5;
		case 927763737:
			return 10;
		default:
			break;
	}
	return 0;
}

int func_1311(int iParam0, int iParam1)
{
	if (!func_1558(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1312(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1311(iParam1, 5) || iParam0 == func_1311(iParam1, 6)) || iParam0 == func_1311(iParam1, 7)) || iParam0 == func_1311(iParam1, 8)) || iParam0 == func_1311(iParam1, 9))
	{
		func_1369(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_1008(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_1010(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1313(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1311(iParam1, 5) || iParam0 == func_1311(iParam1, 6)) || iParam0 == func_1311(iParam1, 7)) || iParam0 == func_1311(iParam1, 8)) || iParam0 == func_1311(iParam1, 9))
	{
		if (func_1369(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_1008(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1010(51, 0, 0, iVar0, func_1336(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_1008(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_1010(51, 0, 0, iVar0, func_1336(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1314(int iParam0)
{
	return iParam0 > -1;
}

bool func_1315(int iParam0)
{
	func_1323(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1316(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1317(1);
	}
}

void func_1317(bool bParam0)
{
	if (bParam0)
	{
		func_1134(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1133(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1318(int iParam0)
{
	if (!func_427(iParam0))
	{
		return -15;
	}
	return func_1562(iParam0);
}

bool func_1319(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1097(iParam1) || !func_1097(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1320(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	uVar0 = *iParam6;
	if (_datafile_get_hash(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1321(int iParam0)
{
	switch (iParam0)
	{
		case 1928985868:
			return 7;
		case 1784174017:
			return 8;
		case 1763160914:
			return 10;
		case 2051438686:
			return 11;
		case 1155669136:
			return 1;
		case 1871598:
			return 9;
		case -1379218218:
			return 6;
		case 1059981727:
			return 2;
		case -1216736853:
			return 4;
		case 1191674135:
			return 3;
		case -112322057:
			return 12;
		case -823778732:
			return 25;
		case 1338623152:
			return 16;
		case 1401247110:
			return 20;
		case 1007627076:
			return 13;
		case 864606355:
			return 31;
		case 1338525796:
			return 18;
		case -2076625074:
			return 26;
		case -288774278:
			return 15;
		case 1934998953:
			return 14;
		case -1148482643:
			return 32;
		case 603776282:
			return 22;
		case 1339344423:
			return 27;
		case 1562395675:
			return 19;
		case 1316832864:
			return 28;
		case -1619448191:
			return 29;
		case -520130198:
			return 24;
		case 1418253584:
			return 30;
		case -348149883:
			return 33;
		case 814591385:
			return 34;
		case 981348373:
			return 17;
		case -1100417366:
			return 35;
		case 1438856241:
			return 23;
		case -1989143022:
			return 21;
		default:
			break;
	}
	return 0;
}

bool func_1322(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1323(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1563(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1324(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

bool func_1325(int iParam0)
{
	return func_637(iParam0) == -427144552;
}

bool func_1326(int iParam0)
{
	if (func_237() != -1)
	{
		return false;
	}
	if (func_966(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1331(iParam0, &uVar0, 1, 0, 0);
	}
	return func_412(iParam0, 1, 0);
}

void func_1327(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_637(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_1013(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_560(iVar0))
	{
		if (func_237() == -1)
		{
			func_1014(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_639(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_641(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1328(int iParam0, int iParam1)
{
	if (func_961(iParam0, 58855631))
	{
		func_1438(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1329(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	if (!func_645(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_960(bParam3), iParam0);
}

int func_1330(int iParam0, bool bParam1)
{
	if (func_1016(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_960(bParam1), iParam0, 0);
}

bool func_1331(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1564(&iParam0);
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	if (!func_645(0))
	{
		bParam3 = true;
	}
	if (func_1325(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_971(0) };
			Var4.f_9 = -1591664384;
			if (!func_888(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_889(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1270(iParam0, 1))
			{
				if (!func_888(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_889(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1565(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1329(iParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return false;
	}
	else if (iVar27 == 0)
	{
		return true;
	}
	if (bParam3)
	{
		iVar28 = func_1274(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_960(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1332()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1333(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1334(int iParam0)
{
	if (func_237() != -1)
	{
		return;
	}
	iVar0 = func_1566(iParam0);
	fVar1 = func_1567(iParam0);
	if ((Global_1347477->f_117 || !func_944(31)) || !func_1568(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1569(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = to_float(round(fVar1));
	func_1570(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_882(_create_var_string(6, func_1571(iParam0), fVar1), "itemtype_textures", func_1572(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1335(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1336(int iParam0, int iParam1)
{
	if (!func_1558(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1337(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_1007() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1573(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1574(), 12);
			}
			break;
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_1367() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1575(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1367(), 30);
			}
			break;
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1576(), 13);
			}
			break;
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_1368() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1577(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1368(), 10);
			}
			break;
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = _create_var_string(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = _create_var_string(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = _create_var_string(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = _create_var_string(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1336(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1338(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (_uilog_is_entry_registered(3, 578982838))
			{
				_uilog_remove_entry(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (_uilog_is_entry_registered(3, 349797279))
			{
				_uilog_remove_entry(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (_uilog_is_entry_registered(3, 1974744712))
			{
				_uilog_remove_entry(3, 1974744712);
			}
		}
	}
	if (_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_remove_entry(3, iParam1);
	}
	return true;
}

bool func_1339(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1340(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1578(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_412(iVar2, 1, 0) || func_1580(func_1579(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1345(func_1578(iVar0))), func_1345(func_1578(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1367() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1581(iVar0)), func_1581(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1575() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1581(iVar0)), func_1581(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1581(iVar0)), func_1581(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1311(iParam3, func_1582(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1309(iVar2) - iParam7) >= func_1336(iParam3, func_1583(iVar0));
				}
				else
				{
					bVar1 = func_1309(iVar2) >= func_1336(iParam3, func_1583(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1309(iVar2) + iParam7) >= func_1336(iParam3, func_1583(iVar0));
			}
			else
			{
				bVar1 = func_1309(iVar2) >= func_1336(iParam3, func_1583(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1584(iVar2)), func_1584(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1585(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1586(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1586(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1368() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1587(iVar0)), func_1587(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1577() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1587(iVar0)), func_1587(iVar0), bVar1, true, false);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1587(iVar0)), func_1587(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1311(iParam3, func_1582(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1309(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1588(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1588(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1589(iVar2)), func_1589(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1342(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bVar0 = false;
	if (iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == -2076669067)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == -1531394072)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (iParam2 == 1995362678)
	{
		if (func_1576() >= 13)
		{
			bVar0 = true;
		}
		else
		{
			bVar0 = false;
		}
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", bVar0, true, false);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam2 == 678508515)
	{
		_uilog_add_or_update_objective(3, iParam1, get_hash_key("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", bVar0, true, false);
	}
	return true;
}

bool func_1343(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_427(func_201(0)) && ((func_1590(0) == 1 || func_1590(0) == 8) || func_1590(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			_uilog_mark_entry_availability(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				_uilog_mark_entry_availability(3, iParam1, 1, "");
			}
		}
	}
	return true;
}

var func_1344(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _show_advanced_notification(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_1345(int iParam0)
{
	switch (iParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		case -1021394391:
			return "COL_CC_ART_SET";
		case -987306668:
			return "COL_CC_LND_SET";
		case -1028735103:
			return "COL_CC_GRL_SET";
		case 515229791:
			return "COL_CC_PLT_SET";
		case -1230863414:
			return "COL_CC_ACT_SET";
		case 232875659:
			return "COL_CC_AML_SET";
		case 1423129537:
			return "COL_CC_VEH_SET";
		case -435742319:
			return "COL_CC_SPT_SET";
		case -1854702679:
			return "COL_CC_INV_SET";
		case 1265323898:
			return "COL_CC_HOR_SET";
		case -479775696:
			return "COL_CC_PAM_SET";
		default:
			break;
	}
	return "";
}

void func_1346(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1347(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_1591(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		case 18:
			_uitutorial_set_rpg_icon_visibility(5, 0);
			_uitutorial_set_rpg_icon_visibility(4, 0);
			func_1592(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1592(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1592(3);
			break;
		case 21:
			_uitutorial_set_rpg_icon_visibility(7, 0);
			_uitutorial_set_rpg_icon_visibility(6, 0);
			break;
		case 22:
			_uitutorial_set_rpg_icon_visibility(9, 0);
			_uitutorial_set_rpg_icon_visibility(8, 0);
			break;
		case 31:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 32:
			break;
		case 33:
			func_1593(1);
			break;
		case 34:
			func_1594(1);
			break;
		case 35:
			func_1595(1);
			break;
		case 36:
			break;
		case 37:
			func_1596(0);
			break;
		case 38:
			func_1597(0);
			break;
		case 39:
			func_1598(0);
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 43:
			break;
		case 1:
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_level(get_player_index(), 1);
			break;
		case 2:
			if ((!&Global_1879534 && func_758()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_178("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_673(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_758()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_178("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_673(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_758()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_178("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_673(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_758()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_178("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_673(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_237() == -1)
			{
				if (!func_1394(99217379) || func_1599(99217379) == 2110595215)
				{
					if (func_457())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_412(iVar0, 1, 0))
					{
						func_1052(iVar0, 1, 752097756);
					}
					func_1033(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_237() == -1)
			{
				if (!func_412(1013902307, 1, 0))
				{
					func_1052(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_237() == -1)
			{
				if (!func_412(1013902307, 1, 0))
				{
					func_1052(1013902307, 1, 752097756);
				}
				if (!func_412(142640135, 1, 0))
				{
					func_1052(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_237() == -1)
			{
				if (!func_412(786809402, 1, 0))
				{
					func_1052(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_237() == -1)
			{
				if (!func_412(786809402, 1, 0))
				{
					func_1052(786809402, 1, 752097756);
				}
				if (!func_412(-518019409, 1, 0))
				{
					func_1052(-518019409, 1, 752097756);
				}
			}
			break;
		case 23:
			_0x5b9813ecf7633fe8(0);
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 30:
			break;
		case 44:
			break;
		case 45:
			_unlock_set_unlocked(-843169622, true);
			Global_1935630->f_47 = 1;
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Enable", true, true);
			set_ambient_zone_list_state_persistent("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 46:
			func_1600();
			break;
		case 47:
			_0xa63fcad3a6fec6d2(get_player_index(), 1);
			break;
		case 52:
			_unlock_set_unlocked(-78935213, true);
			break;
		case 53:
			_unlock_set_unlocked(-384786155, true);
			break;
		case 54:
			_unlock_set_unlocked(296662302, true);
			break;
		case 55:
			_unlock_set_unlocked(-1871453000, true);
			break;
		case 56:
			_unlock_set_unlocked(1397349651, true);
			break;
	}
}

bool func_1348(int iParam0)
{
	iVar0 = _get_weapon_unlock(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_visible(iVar0))
	{
		return true;
	}
	return false;
}

void func_1349(int iParam0)
{
	if (!is_weapon_valid(iParam0))
	{
		return;
	}
	if (!does_entity_exist(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (_is_weapon_bow(iParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (_is_weapon_pistol(iParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (_is_weapon_revolver(iParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (_is_weapon_rifle(iParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (_is_weapon_shotgun(iParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	decor_set_int(Global_35, sVar0, iParam0);
	iVar2 = func_414();
	func_682(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1350(int iParam0)
{
	if (func_1601(iParam0))
	{
		if (get_ped_ammo_by_type(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (_0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_sniper(iParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = _get_weapon_clip_size(iParam0) * 4;
		}
		iVar1 = get_ped_ammo_by_type(Global_35, _get_ammo_type_for_weapon(iParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_1351(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1352(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_944(50))
			{
				if (!func_944(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_944(51))
			{
				if (!func_944(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1353(int iParam0, int iParam1, var uParam2)
{
	if (!func_636(iParam1, 0))
	{
		return false;
	}
	if (func_637(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_237() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_633(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_1074(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_961(iParam1, 866047851))
	{
		iVar5 = func_632(iVar4, 1);
		if (func_1602(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
		{
			*uParam2 = -265166256;
			return false;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (_get_ped_component_category(iVar8, iVar2, bVar1) == 2056714954 && _is_metaped_using_component(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return false;
			}
			iVar5 = 10;
			iVar3 = func_633(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_961(iParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return false;
			}
			break;
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
			{
				*uParam2 = 2143522536;
				return false;
			}
			if (_is_metaped_using_component(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return false;
			}
			break;
		case -1505978566:
			if (func_407(1868067663, &uVar0))
			{
				*uParam2 = 939463734;
				return false;
			}
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = _get_num_components_in_ped(iParam0);
				iVar10 = func_1603(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1603(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_633(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_961(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1604(&(Global_1946804->f_1497.f_1[iVar5])))
					{
						*uParam2 = -357399012;
						return false;
					}
					if (&Global_1946804->f_1497.f_1[iVar5] == &Global_1946804->f_57[iVar5])
					{
						*uParam2 = 2143522536;
						return false;
					}
				}
			}
			*uParam2 = 0;
			return true;
			default:
				break;
	}
}

void func_1354()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1355()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1356()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_412(func_1605(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1357(int iParam0)
{
	switch (iParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		case 1566949660:
			return -121629511;
	}
	return 0;
}

bool func_1358(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -62615415:
			if (iParam1 == 425319238)
			{
				iVar0 = 363594903;
				iVar1 = -1217729597;
			}
			else if (iParam1 == 363594903)
			{
				iVar0 = 425319238;
				iVar1 = -1217729597;
			}
			else
			{
				iVar0 = 425319238;
				iVar1 = 363594903;
			}
			break;
		case -832719552:
			if (iParam1 == -1540119664)
			{
				iVar0 = 2100194981;
				iVar1 = 446659922;
			}
			else if (iParam1 == 2100194981)
			{
				iVar0 = -1540119664;
				iVar1 = 446659922;
			}
			else
			{
				iVar0 = -1540119664;
				iVar1 = 2100194981;
			}
			break;
		case -184823984:
			if (iParam1 == -390982951)
			{
				iVar0 = -1018798851;
				iVar1 = -757567246;
			}
			else if (iParam1 == -1018798851)
			{
				iVar0 = -390982951;
				iVar1 = -757567246;
			}
			else
			{
				iVar0 = -390982951;
				iVar1 = -1018798851;
			}
			break;
		case -1941112926:
			if (iParam1 == -2054602073)
			{
				iVar0 = -378441099;
				iVar1 = -585121677;
			}
			else if (iParam1 == -378441099)
			{
				iVar0 = -2054602073;
				iVar1 = -585121677;
			}
			else
			{
				iVar0 = -2054602073;
				iVar1 = -378441099;
			}
			break;
	}
	if (func_412(iVar0, 1, 0) && func_412(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1359(int iParam0)
{
	switch (iParam0)
	{
		case 968830139:
			return -224110471;
		case -649219937:
			return 1289585739;
		case -858567048:
			return -269048282;
		case -718162726:
			return 1441506783;
		case -1284282080:
			return 780305678;
		case -725003445:
			return 1811977508;
		case -1445630104:
			return -935153695;
		case 580970876:
			return 1299744282;
		case 967601061:
			return 1631240196;
		case 1946030891:
			return 517396587;
		case -1511404982:
			return 1620353486;
		case -944465290:
			return 1816443627;
		case -1701098855:
			return -127011478;
		default:
			break;
	}
	return 0;
}

bool func_1360(int iParam0, int iParam1)
{
	iVar0 = func_1606(iParam0);
	if (iVar0 != -15)
	{
		func_682(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_1098(iVar0, 1);
	}
	return false;
}

void func_1361(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1362(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1363(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1364(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1365(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1309(iVar9);
	iVar2 = func_1309(iVar10);
	iVar3 = func_1309(iVar11);
	iVar5 = func_1310(iVar9);
	iVar6 = func_1310(iVar10);
	iVar7 = func_1310(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1309(iVar12);
		iVar8 = func_1310(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_1366(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1367()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1607(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1368()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1369(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_1588(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1588(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1588(iVar0))
		{
			*iParam2++;
		}
		if (func_1588(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1588(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1588(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1588(iVar0))
		{
			*iParam2++;
		}
		if (func_1588(iVar1))
		{
			*iParam2++;
		}
		if (func_1588(iVar0) && func_1588(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1588(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1588(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1588(iVar0))
		{
			*iParam2++;
		}
		if (func_1588(iVar1))
		{
			*iParam2++;
		}
		if (func_1588(iVar2))
		{
			*iParam2++;
		}
		if ((func_1588(iVar0) && func_1588(iVar1)) && func_1588(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1588(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1588(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_1588(iVar0))
		{
			*iParam2++;
		}
		if (func_1588(iVar1))
		{
			*iParam2++;
		}
		if (func_1588(iVar2))
		{
			*iParam2++;
		}
		if (func_1588(iVar3))
		{
			*iParam2++;
		}
		if (((func_1588(iVar0) && func_1588(iVar1)) && func_1588(iVar2)) && func_1588(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1370(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1608(1497516462);
			func_1609(2016141805);
			func_1609(1010885152);
			func_1609(-502324015);
			break;
		case 2016141805:
			func_1609(1497516462);
			func_1608(2016141805);
			func_1609(1010885152);
			func_1609(-502324015);
			break;
		case 1010885152:
			func_1609(1497516462);
			func_1609(2016141805);
			func_1608(1010885152);
			func_1609(-502324015);
			break;
		case -502324015:
			func_1609(1497516462);
			func_1609(2016141805);
			func_1609(1010885152);
			func_1608(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1609(-538889627);
			func_1609(-538880323);
			func_1609(-1056767524);
			func_1608(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1610();
			func_1608(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_1611();
			func_1608(iParam0);
			break;
		case 2019386373:
			func_1609(-664252410);
			func_1609(2109952320);
			func_1608(2019386373);
			break;
		case -664252410:
			func_1609(2019386373);
			func_1609(2109952320);
			func_1608(-664252410);
			break;
		case 2109952320:
			func_1609(2019386373);
			func_1609(-664252410);
			func_1608(2109952320);
			break;
		case -1674179981:
			func_1609(-1835851517);
			func_1609(-1838352012);
			func_1608(-1674179981);
			break;
		case -1835851517:
			func_1609(-1674179981);
			func_1609(-1838352012);
			func_1608(-1835851517);
			break;
		case -1838352012:
			func_1609(-1674179981);
			func_1609(-1835851517);
			func_1608(-1838352012);
			break;
		case -1717960576:
			func_1609(210001842);
			func_1608(-1717960576);
			break;
		case 210001842:
			func_1609(-1717960576);
			func_1608(210001842);
			break;
		case -150493654:
			func_1609(-1271608261);
			func_1609(1846061697);
			func_1609(-1145519186);
			func_1608(-150493654);
			break;
		case -1271608261:
			func_1609(-150493654);
			func_1609(1846061697);
			func_1609(-1145519186);
			func_1608(-1271608261);
			break;
		case 1846061697:
			func_1609(-150493654);
			func_1609(-1271608261);
			func_1609(-1145519186);
			func_1608(1846061697);
			break;
		case -1145519186:
			func_1609(-150493654);
			func_1609(-1271608261);
			func_1609(1846061697);
			func_1608(-1145519186);
			break;
		case 1766284049:
			func_1609(280705402);
			func_1609(1926308480);
			func_1608(1766284049);
			break;
		case 280705402:
			func_1609(1766284049);
			func_1609(1926308480);
			func_1608(280705402);
			break;
		case 1926308480:
			func_1609(1766284049);
			func_1609(280705402);
			func_1608(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1609(439465264);
				func_1608(1609506757);
			}
			else
			{
				func_1609(1609506757);
				func_1609(439465264);
			}
			break;
		case 439465264:
			if (func_726(1609506757))
			{
				if (bParam1)
				{
					func_1608(439465264);
				}
				else
				{
					func_1609(439465264);
				}
			}
			break;
		case 1822001510:
			func_1609(-1612662716);
			func_1608(1822001510);
			break;
		case -1612662716:
			func_1609(1822001510);
			func_1608(-1612662716);
			break;
		case 1306158345:
			func_1609(1952610440);
			func_1609(-223469678);
			func_1609(-404698347);
			func_1609(1517904467);
			func_1608(1306158345);
			break;
		case 1952610440:
			func_1609(1306158345);
			func_1609(-223469678);
			func_1609(-404698347);
			func_1609(1517904467);
			func_1608(1952610440);
			break;
		case -223469678:
			func_1609(1306158345);
			func_1609(1952610440);
			func_1609(-404698347);
			func_1609(1517904467);
			func_1608(-223469678);
			break;
		case -404698347:
			func_1609(1306158345);
			func_1609(1952610440);
			func_1609(-223469678);
			func_1609(1517904467);
			func_1608(-404698347);
			break;
		case 1517904467:
			func_1609(1306158345);
			func_1609(1952610440);
			func_1609(-223469678);
			func_1609(-404698347);
			func_1608(1517904467);
			break;
		case 1376646519:
			func_1609(931649776);
			func_1609(-434590080);
			func_1609(1743048395);
			func_1609(449774763);
			func_1608(1376646519);
			break;
		case 931649776:
			func_1609(1376646519);
			func_1609(-434590080);
			func_1609(1743048395);
			func_1609(449774763);
			func_1608(931649776);
			break;
		case -434590080:
			func_1609(1376646519);
			func_1609(931649776);
			func_1609(1743048395);
			func_1609(449774763);
			func_1608(-434590080);
			break;
		case 1743048395:
			func_1609(1376646519);
			func_1609(931649776);
			func_1609(-434590080);
			func_1609(449774763);
			func_1608(1743048395);
			break;
		case 449774763:
			func_1609(1376646519);
			func_1609(931649776);
			func_1609(-434590080);
			func_1609(1743048395);
			func_1608(449774763);
			break;
		case -1414537028:
			func_1609(38162571);
			func_1609(1350391819);
			func_1609(54073871);
			func_1608(-1414537028);
			break;
		case 38162571:
			func_1609(-1414537028);
			func_1609(1350391819);
			func_1609(54073871);
			func_1608(38162571);
			break;
		case 1350391819:
			func_1609(-1414537028);
			func_1609(38162571);
			func_1609(54073871);
			func_1608(1350391819);
			break;
		case 54073871:
			func_1609(-1414537028);
			func_1609(38162571);
			func_1609(1350391819);
			func_1608(54073871);
			break;
		case 198200492:
			func_1608(198200492);
			func_1609(-1124061431);
			func_1609(52706132);
			func_1609(-259123672);
			break;
		case -1124061431:
			func_1609(198200492);
			func_1608(-1124061431);
			func_1609(52706132);
			func_1609(-259123672);
			break;
		case 52706132:
			func_1609(198200492);
			func_1609(-1124061431);
			func_1608(52706132);
			func_1609(-259123672);
			break;
		case -259123672:
			func_1609(198200492);
			func_1609(-1124061431);
			func_1609(52706132);
			func_1608(-259123672);
			break;
		case -919512195:
			func_1608(-919512195);
			func_1609(-1925798111);
			func_1609(420709909);
			func_1609(1703426636);
			break;
		case -1925798111:
			func_1608(-1925798111);
			func_1609(-919512195);
			func_1609(420709909);
			func_1609(1703426636);
			break;
		case 420709909:
			func_1608(420709909);
			func_1609(-919512195);
			func_1609(-1925798111);
			func_1609(1703426636);
			break;
		case 1703426636:
			func_1608(1703426636);
			func_1609(-919512195);
			func_1609(-1925798111);
			func_1609(420709909);
			break;
		case -1223121209:
			func_1608(-1223121209);
			func_1609(630808005);
			break;
		case 630808005:
			func_1608(630808005);
			func_1609(-1223121209);
			break;
		case 1453909576:
			func_1608(1453909576);
			func_1609(1643531967);
			break;
		case 1643531967:
			func_1608(1643531967);
			func_1609(1453909576);
			break;
		case 0:
			func_1608(0);
			func_1609(473295046);
			func_1609(-1738165526);
			break;
		case 473295046:
			func_1608(473295046);
			func_1609(0);
			func_1609(-1738165526);
			break;
		case -1738165526:
			func_1608(-1738165526);
			func_1609(0);
			func_1609(473295046);
			break;
		case 932909855:
			func_1608(932909855);
			func_1609(2051822093);
			break;
		case 2051822093:
			func_1608(2051822093);
			func_1609(932909855);
			break;
		case 405586984:
			func_1608(405586984);
			func_1609(1509509592);
			func_1609(-959357075);
			func_1609(-1311865656);
			break;
		case 1509509592:
			func_1608(1509509592);
			func_1609(405586984);
			func_1609(-959357075);
			func_1609(-1311865656);
			break;
		case -959357075:
			func_1608(-959357075);
			func_1609(1509509592);
			func_1609(405586984);
			func_1609(-1311865656);
			break;
		case -1311865656:
			func_1608(-1311865656);
			func_1609(1509509592);
			func_1609(-959357075);
			func_1609(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1608(-524145696);
			}
			else
			{
				func_1609(-524145696);
			}
			func_1609(1626481264);
			func_1609(282809459);
			break;
		case 282809459:
			func_1608(282809459);
			func_1609(1626481264);
			func_1609(-524145696);
			break;
		case 1626481264:
			func_1608(1626481264);
			func_1609(-524145696);
			func_1609(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1608(885203519);
			}
			else
			{
				func_1609(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1608(-1080627546);
			}
			else
			{
				func_1609(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_726(iParam0))
				{
					func_1608(iParam0);
				}
			}
			else if (func_726(iParam0))
			{
				func_1609(iParam0);
			}
			break;
	}
}

int func_1371(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_1309(iVar9);
	iVar2 = func_1309(iVar10);
	iVar3 = func_1309(iVar11);
	iVar5 = func_1310(iVar9);
	iVar6 = func_1310(iVar10);
	iVar7 = func_1310(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1309(iVar12);
		iVar8 = func_1310(iVar12);
	}
	if (iParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_1372(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1373(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

bool func_1374()
{
	if (func_228((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1375(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1376(int iParam0)
{
	if (!func_1612(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1377(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

bool func_1378(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1613();
	if (iParam2 == 39)
	{
		Var0 = { func_886(iParam0, 1, 0) };
		iParam2 = func_632(func_952(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_961(iParam0, 866047851) && func_1602(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1380(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1614(func_1305(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1615(iParam2);
	func_1616(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1415(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1415(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1421(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1617(iParam0, iParam2, iParam1, func_237() != -1);
	if (bParam4)
	{
		func_1618(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1618(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6] >= 0 && &Global_1946804->f_2589.f_2[iVar6] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]] = 0;
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6]]->f_1 = 0;
				func_1619(func_1305(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1379(bool bParam0, bool bParam1, bool bParam2)
{
	func_1620(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1380(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1381()
{
	func_1621(&(Global_1946804->f_2776));
	func_1622(32768);
	func_1619(1108822547, 8, 6);
}

int func_1382(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_632(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1] == &Global_1946804->f_57[iVar1] || &Global_1946804->f_1378.f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1383(int iParam0)
{
	if (func_1623(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1624(Var0);
}

void func_1384(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1624(Var0);
}

bool func_1385(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1386(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1387(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_636(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1331(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_645(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_960(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1388(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		case 81053684:
			return Global_1946804->f_2657.f_23;
		case -525676072:
			return Global_1946804->f_2657.f_22;
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		case -413129408:
			return Global_1946804->f_2657.f_25;
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_1625();
			}
			break;
	}
	return 0;
}

int func_1389(int iParam0)
{
	switch (iParam0)
	{
		case 439606975:
			return 14;
		case 1661121390:
			return 6;
		case 1164374808:
			return 7;
		case 624063935:
			return 9;
		case -1476781101:
			return 10;
		case 1560492757:
			return 15;
		case -769081407:
			return 16;
		case 688004210:
			return 20;
		case 166243423:
			return 0;
		case -1826731591:
			return 24;
		case 2119049229:
			return 25;
		case 1352942778:
			return 26;
		case 1964379549:
			return 27;
		case 1201189539:
			return 28;
		case 1351927599:
			return 21;
		case 2032023096:
			return 22;
		case 1784889667:
			return 13;
		case 1160643979:
			return 8;
		case 1383300684:
			return 1;
		case 2051441678:
			return 2;
		case 162509669:
			return 3;
		case 635948769:
			return 4;
		case 274995506:
			return 5;
		case 1902428294:
			return 17;
		case -2114499732:
			return 18;
		case 800827126:
			return 19;
		case 294553332:
			return 11;
		case 1788874135:
			return 12;
		case -1243402388:
			return 66;
		case 65931886:
			return 67;
		case 1371678229:
			return 68;
		case 2102263084:
			return 69;
		case -272211555:
			return 61;
		case -55563408:
			return 64;
		case -1914506115:
			return 71;
		case 802495462:
			return 75;
		case 842905332:
			return 77;
		case 1511551084:
			return 79;
		case -1725704631:
			return 81;
		case 1257427489:
			return 83;
		case -659341240:
			return 85;
		case 2038771525:
			return 87;
		case -535599244:
			return 89;
		case -389591806:
			return 73;
		case -1205612021:
			return 70;
		case 890706995:
			return 93;
		case 1156438275:
			return 90;
		case -1611873049:
			return 91;
		case 594312243:
			return 92;
		case -978578725:
			return 94;
		case -361635024:
			return 62;
		case -1951220140:
			return 78;
		case 1460520700:
			return 76;
		case 523337834:
			return 80;
		case -19271249:
			return 82;
		case 214175524:
			return 84;
		case -1303643297:
			return 86;
		case 411856831:
			return 88;
		case -926815459:
			return 72;
		case -1300731953:
			return 74;
		case -409616653:
			return 65;
		case 509954990:
			return 29;
		case -445916744:
			return 30;
		case -866249154:
			return 31;
		case -2077063704:
			return 32;
		case 205207539:
			return 33;
		case -1033657275:
			return 34;
		case 1806002837:
			return 35;
		case 705324896:
			return 36;
		case -1541763703:
			return 37;
		case 387052410:
			return 38;
		case -361288914:
			return 39;
		case -911054515:
			return 40;
		case 1084200963:
			return 41;
		case 1847948074:
			return 42;
		case -1212526764:
			return 43;
		case 1851440270:
			return 44;
		case -2028985700:
			return 45;
		case 1074435214:
			return 46;
		case -883015675:
			return 47;
		case -1047155604:
			return 48;
		case 1123231221:
			return 49;
		case 1866989210:
			return 50;
		case 478183719:
			return 51;
		case -1698955868:
			return 52;
		case -2029378634:
			return 53;
		case 1339864416:
			return 54;
		case 890998115:
			return 55;
		case -1376288999:
			return 56;
		case -1041123771:
			return 57;
		case 1389254668:
			return 58;
		case -346112633:
			return 59;
		case 773309172:
			return 60;
		case -291256376:
			return 23;
		default:
			break;
	}
	return -1;
}

bool func_1390(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1391(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1390(iParam0))
	{
		return;
	}
	if (func_1626(iParam0))
	{
		return;
	}
	if (!func_1627(iParam0))
	{
		func_1628(iParam0, 1, 0);
	}
	iVar0 = func_1629(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1630(iParam0, 512))
		{
			func_1085(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_88() && !bParam1) && !func_437(0, 0, 1))
	{
		func_90(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1631(iParam0, 6);
	if (bParam2)
	{
		if (!func_437(0, 0, 1))
		{
			func_713(1, 4);
		}
	}
}

bool func_1392(int iParam0, bool bParam1)
{
	return func_1388(iParam0, 0) < func_1632(iParam0, bParam1);
}

bool func_1393(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_633(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1394(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_632(iParam0, 1)] != &Global_1946804->f_57[func_632(iParam0, 1)];
}

void func_1395(int iParam0, int iParam1)
{
	if (func_961(iParam1, 130796156))
	{
		func_1633(iParam1, 0);
	}
	else if (func_961(iParam1, 930141731))
	{
		func_1633(iParam1, 1);
		func_1634(iParam0);
	}
}

void func_1396(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_1397(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1635(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1636(uParam2, iParam0, Var1);
	return 1;
}

int func_1398(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1399(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_1400(int iParam0)
{
	if (!func_1637(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1401(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_237() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1638(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = &uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!_unlock_is_unlocked(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_1402(int iParam0, int iParam1)
{
	if (func_237() != -1)
	{
		return false;
	}
	if (func_1638(iParam0, iParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = &uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!_unlock_is_unlocked(iVar13))
					{
						bVar0 = true;
					}
				}
				_unlock_set_unlocked(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_1403(bool bParam0)
{
	if (bParam0)
	{
		func_666(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1404();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1639(2032023096);
		func_669(-615217896);
		func_413(655868243, 1, 1, -142743235, 1);
		func_1640(146323340, func_1489());
		Var0 = { func_782() };
		if (func_1641(&Var0) == -1387633835)
		{
			func_1642(&Var0);
			func_1643(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1159(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_775(iVar6) == 2010625508)
			{
				func_1160(iVar6, iVar7);
				func_1161(iVar6, iVar8);
				func_1162(iVar6, iVar9);
				func_1644(iVar6, 0);
				if (func_1645(iVar6))
				{
					func_1646(iVar6);
				}
				iVar10 = func_1647(iVar8);
				func_1648(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1404()
{
	if (!func_1649(-1898635967, func_1489(), 1))
	{
		return 0;
	}
	if (func_686())
	{
		if (!func_1649(146323340, func_1489(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1405()
{
	func_680(34411519);
	func_680(834124286);
	func_680(-570967010);
}

void func_1406(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_666(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_666(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_413(-1080874779, 3, 1, -142743235, 1);
		func_413(-223790555, 3, 1, -142743235, 1);
		func_413(1566032147, 3, 1, -142743235, 1);
		func_413(891311852, 5, 1, -142743235, 1);
		func_413(-1353737667, 5, 1, -142743235, 1);
		func_413(-330313895, 5, 1, -142743235, 1);
		func_413(-2051332199, 5, 1, -142743235, 1);
		func_413(1237770824, 5, 1, -142743235, 1);
		func_413(-1795542128, 3, 1, -142743235, 1);
		func_413(-1757588258, 3, 1, -142743235, 1);
		func_413(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1159(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_775(iVar0) == 153881023)
			{
				func_1160(iVar0, iVar1);
				func_1161(iVar0, iVar2);
				func_1162(iVar0, iVar3);
				func_1644(iVar0, 0);
				if (func_1645(iVar0))
				{
					func_1646(iVar0);
				}
				iVar4 = func_1647(iVar2);
				func_1648(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1404();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1407(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1650(iParam0);
	if (bParam3)
	{
		func_1107(iParam0, sParam1, iParam2);
	}
}

bool func_1408(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1409(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1410()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_814("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_815(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_889(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_817(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_817(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1411(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1651(Param1, iParam5, &Var5, 0))
	{
		func_891(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1387(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1652(Var19, 1);
}

int func_1412(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1653(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_633(iParam0) != -999503751)
		{
			func_1654(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_633(iParam0) != -999503751)
	{
		func_1654(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1655(iParam0, 1);
	return 1;
}

void func_1413()
{
	if (func_237() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26796[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26796.f_20 = Global_1946804->f_2657.f_20;
		Global_26796.f_21 = Global_1946804->f_2657.f_21;
		Global_26796.f_22 = Global_1946804->f_2657.f_22;
		Global_26796.f_23 = Global_1946804->f_2657.f_23;
		Global_26796.f_24 = Global_1946804->f_2657.f_24;
		Global_26796.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36638.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36638.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36638.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36638.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36638.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36638.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36638.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

void func_1414(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1656(0);
	}
	if (bParam0)
	{
		func_1426(8);
		func_1426(512);
	}
	else
	{
		func_1426(8);
		func_1426(16);
	}
}

void func_1415(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1416(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_1076();
	}
	if (func_237() == -1)
	{
		if (iParam0 == 1160113249)
		{
			iVar0 = 1583685020;
		}
		else
		{
			iVar0 = -572793833;
		}
	}
	else
	{
		iVar0 = -2109211296;
	}
	return iVar0;
}

int func_1417(int iParam0)
{
	switch (iParam0)
	{
		case 708211766:
			return 1;
		case -1815871154:
			return 2;
		case 1053922635:
			return 4;
		case -1248203249:
			return 8;
		case -1275860049:
			return 16;
		case -473313046:
			return 32;
		case 1009605579:
			return 64;
		case -92538845:
			return 128;
		case 350097565:
			return 256;
		case 346761890:
			return 512;
		case -915377750:
			return 1024;
		case -1283403230:
			return 2048;
		case 1024778115:
			return 4096;
		case 75507907:
			return 8192;
		case -1678578495:
			return 16384;
		case -1925540957:
			return 32768;
		case -2125161702:
			return 131072;
		case 1929486675:
			return 262144;
		case -1932005642:
			return 65536;
		case 315750675:
			return 524288;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 1136;
		case -141044514:
			return 4208;
		case 884232794:
			return 8304;
		case 836721350:
			return 20480;
		case -1062102573:
			return 32833;
		case -884591393:
			return 96;
		case -1886898087:
			return 16496;
		case -1674046782:
			return 139376;
		case 1481630954:
			return 262256;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_1418(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1657(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1305(iVar0, 1);
			if (func_1658(iVar0, iParam1))
			{
				vVar4 = { func_1078(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1659(iVar7, 4))
				{
					func_1619(iVar7, 4, 6);
				}
			}
			else
			{
				func_1660(iVar7, 4, 6);
				Jump @201; //curOff = 167
				if (bParam2)
				{
					vVar1.x = &Global_1946804->f_57[iVar0];
					*uParam0->f_1[iVar0] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

bool func_1419(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_237() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1661(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1420(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1421(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_633(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1658(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1616(iVar1, iVar3);
		}
	}
	if (func_1394(-1586649372) && func_1658(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1616(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (iParam1 == &Global_1946804->f_57[iParam2])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1] == 1516947474)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1616(iVar1, iVar3);
					}
				}
			}
			func_1662(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1662(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
			{
			}
			else
			{
				iVar0 = 16;
				if (uParam0->f_1[iVar0]->f_1 == 1155669136 || uParam0->f_1[iVar0]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1616(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1662(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1616(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1616(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1662(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1662(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1616(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1662(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1415; //curOff = 807
				if (iParam1 == &Global_1946804->f_57[iParam2])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1616(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1616(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_633(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1616(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1604(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_633(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1616(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_961(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1616(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 1228
				iVar1 = 36;
				if (&uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1616(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1604(&(Global_1946804->f_1497.f_1[iVar1])) || func_961(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1616(iVar1, iVar3);
					}
				}
			}
			switch (func_633(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_633(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1616(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_633(&(uParam0->f_1[iVar1])) || func_961(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1616(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1422(int iParam0, int iParam1)
{
	if (func_237() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1423(int iParam0)
{
	if (func_237() != -1)
	{
		if (func_1385(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1385(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1424(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1385(iParam0, 65536) && !func_1385(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1385(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1385(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1425()
{
	return Global_1905944->f_5694;
}

void func_1426(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1427(struct<4> Param0)
{
	switch (Param0)
	{
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
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_1663(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1] == Param0 && Global_1946804->f_668[iVar1]->f_1 == Param0.f_1) && Global_1946804->f_668[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_1664(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1426(8);
			break;
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_1663(Param0))
			{
				return;
			}
			func_1664(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1426(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1384(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

int func_1428(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1429(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || shift_left((1898 - iParam1), 26));
		*iParam0 |= -2147483648;
	}
	else
	{
		*iParam0 = (*iParam0 || shift_left((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - *iParam0 & -2147483648);
	}
}

void func_1430(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1431(int iParam0, int iParam1)
{
	iVar0 = func_1091(*iParam0);
	iVar1 = func_1090(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1095(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1432(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1433(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1434(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

int func_1435(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1436(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -707360575;
		case 2:
			return -1201174711;
		case 4:
			return 151582343;
		case 8:
			return -642492359;
		case 16:
			return 5171247;
		default:
			break;
	}
	return 0;
}

bool func_1437(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_237() == -1)
	{
		if (func_1325(iParam0))
		{
			iVar1 = _get_weapon_unlock(iParam0);
			bVar0 = _unlock_is_visible(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = _unlock_is_visible(iParam0);
	}
	return bVar0;
}

int func_1438(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_1439(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1564(&iParam0);
	if (!func_636(iParam0, 0))
	{
		return 0;
	}
	if (!func_645(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1329(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1274(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_960(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1440(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_961(iParam0, -5284486))
	{
		Var35 = -1;
		Var35.f_1 = -1;
		Var35.f_2 = -1;
		Var35.f_3 = -1;
		Var35.f_4 = -1;
		Var35.f_5 = -1;
		Var35.f_6 = -1;
		Var35.f_7 = -1;
		Var35.f_8 = -1;
		Var35.f_13 = -1;
		Var35 = iParam0;
		iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
		if (iVar33 != -1)
		{
			if (iVar34 > 0)
			{
				bParam4 = true;
			}
			_0x42a2f33a1942e865(iVar33);
		}
		iVar49 = 0;
		if (func_1665(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
		{
			iVar32 = 0;
			while (iVar32 < iVar31)
			{
				if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
				{
					iVar49 = (iVar49 + Var0[iVar32]->f_1);
					Jump @229; //curOff = 201
				}
				else if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
			}
		}
		Var50 = -1;
		Var50.f_1 = -1;
		Var50.f_2 = -1;
		Var50.f_3 = -1;
		Var50.f_4 = -1;
		Var50.f_5 = -1;
		Var50.f_6 = -1;
		Var50.f_7 = -1;
		Var50.f_8 = -1;
		iVar64 = func_1058(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_1061(iVar62, iVar61);
					if (func_636(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1440(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1440(iVar63, -915411861, 1, 0, 0));
								}
								_0x42a2f33a1942e865(iVar33);
							}
						}
					}
					iVar62++;
				}
				_0xcbb7b6edfa933ade(iVar61);
			}
		}
		return iVar49;
	}
	if (!func_1665(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532)
		{
			return Var0[iVar32]->f_1;
		}
		else if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

bool func_1441(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1247(1);
}

void func_1442(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1666(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_672(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1666(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_672(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1443()
{
	return Global_40.f_4283.f_325;
}

bool func_1444(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_237() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_1445(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1446(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1447(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1448(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1449(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1450(int iParam0)
{
	if (!func_427(iParam0))
	{
		return 0;
	}
	cVar0 = func_711(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_1451(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

int func_1452(int iParam0)
{
	iVar0 = iParam0;
	while (iVar0 < Global_1058888->f_40501)
	{
		if (iVar0 + 1 < 32)
		{
			*Global_1058888->f_40501.f_1[iVar0] = { *(Global_1058888->f_40501.f_1[iVar0 + 1]) };
		}
		iVar0++;
	}
	Var1 = -1;
	if (Global_1058888->f_40501 < 32)
	{
		*Global_1058888->f_40501.f_1[Global_1058888->f_40501] = { Var1 };
	}
	Global_1058888->f_40501 = (Global_1058888->f_40501 - 1);
	if (Global_1058888->f_40501 < 0)
	{
		Global_1058888->f_40501 = 0;
	}
	return 1;
}

int func_1453(int iParam0)
{
	iVar0 = (Global_1058888->f_40501 - 1);
	Var1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			*(Global_1058888->f_40501.f_1[iVar0 + 1]) = { *Global_1058888->f_40501.f_1[iVar0] };
		}
		iVar0 = (iVar0 - 1);
	}
	*Global_1058888->f_40501.f_1[iParam0] = { Var1 };
	Global_1058888->f_40501++;
	if (Global_1058888->f_40501 > 32)
	{
		Global_1058888->f_40501 = 32;
	}
	return 1;
}

int func_1454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_1455(int iParam0)
{
	switch (iParam0)
	{
		case -1523757120:
		case -1516219602:
		case -1063137731:
		case 604357666:
		case 705691988:
		case 1048964673:
		case 1576849913:
			return true;
	}
	return false;
}

bool func_1456(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1459(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_890(iParam1, Var0, 1415981582, 0) };
	return func_1652(Var29, 1);
}

bool func_1457(int iParam0, int iParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1459(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_890(iParam1, Var0, -2119169513, 0) };
	return func_1652(Var29, 1);
}

void func_1458(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0] = 0;
		uParam0->f_10[iVar0]->f_1 = 0;
		uParam0->f_10[iVar0]->f_2 = 0;
		uParam0->f_10[iVar0]->f_3 = 0;
		uParam0->f_10[iVar0]->f_4 = 0;
		uParam0->f_10[iVar0]->f_5 = 0;
		uParam0->f_10[iVar0]->f_6 = 0;
		uParam0->f_10[iVar0]->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

bool func_1459(int iParam0, var uParam1)
{
	if (!func_1645(iParam0))
	{
		return false;
	}
	iVar0 = func_1460(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -1591664384;
	Var15 = { func_1269(0) };
	if (!func_1667(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_1668(&Var1, uParam1))
	{
		return false;
	}
	return true;
}

int func_1460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 7:
			return 1782082944;
		case 1:
			return -832337898;
		case 2:
			return 1271463052;
		case 3:
			return 1983140194;
		case 4:
			return 677262775;
	}
	return 0;
}

bool func_1461(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	if (!func_645(bParam10))
	{
		return func_1669(Param0, Param4, iParam8, 1, bParam9, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1273(Param0, &Var0, 0, 0))
	{
		return false;
	}
	if (func_1670(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!_0xdccaa7c3bfd88862(func_960(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_1652(Var14, 1))
		{
		}
	}
	return true;
}

bool func_1462(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	if (!func_645(bParam9))
	{
		return func_1671(Param0, Param4, iParam8, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0) || !_0xb881ca836cc4b6d4(&Param4))
	{
		return false;
	}
	if (func_1670(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	Var14.f_9 = -1591664384;
	if (!func_1273(Param0, &Var0, bParam9, 1) || !func_1273(Param4, &Var14, bParam9, 1))
	{
		return false;
	}
	if (func_1670(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!_inventory_fits_slot_id(Var0.f_4, Var14.f_9) || !_inventory_fits_slot_id(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_960(0);
	if (!_0xf2753d691bcda314(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!_0x734311e2852760d0(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!_0x734311e2852760d0(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

bool func_1463(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_1672(get_entity_model(iParam0)))
	{
		return true;
	}
	if (decor_exist_on(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_1464(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_1465(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

int func_1465(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1900383[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1466(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_1467(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_765(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		bVar1 = true;
	}
	if (!_0xa0bc8faed8cfeb3c(iVar0))
	{
		return;
	}
	if (func_1166(iParam0, 64))
	{
		func_1151(iParam0);
		return;
	}
	bVar2 = false;
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26) && !does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		if (!get_blip_from_entity(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_944(42);
	if (bVar1)
	{
		if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_26));
		}
		if (iVar0 == _get_saddle_horse_for_player(player_id()) && bVar3)
		{
			if (!does_blip_exist((*Global_1900383)[iParam0]->f_27))
			{
				(*Global_1900383)[iParam0]->f_27 = _blip_add_for_entity(-515518185, iVar0);
				set_blip_sprite((*Global_1900383)[iParam0]->f_27, -1327110633, true);
				func_1673(&((*Global_1900383)[iParam0]->f_27));
			}
		}
		else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
		{
			remove_blip(&((*Global_1900383)[iParam0]->f_27));
		}
		return;
	}
	else if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
	bVar4 = false;
	if (is_ped_on_mount(Global_35))
	{
		if (Global_1935630->f_40 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_26) && bVar4)
	{
		func_1151(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_40.f_1095.f_1[iParam0]->f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -1925605092;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -1230993421;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_1674(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (does_blip_exist((*Global_1900383)[iParam0]->f_26))
			{
				remove_blip(&((*Global_1900383)[iParam0]->f_26));
			}
			return;
		}
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		(*Global_1900383)[iParam0]->f_26 = _blip_add_for_entity(iVar5, iVar0);
		(*Global_1900383)[iParam0]->f_25 = 0;
		func_1675(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1166(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1676(iParam0);
	if (does_entity_exist(iVar11))
	{
		if (!is_entity_dead(iVar11))
		{
			if (get_mount(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { get_entity_coords(iVar0, true, false) };
	fVar15 = func_1190(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1677(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 3)
		{
			iVar17 = -401963276;
			(*Global_1900383)[iParam0]->f_25 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = _get_ped_remaining_revival_time(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 0.25f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 9)
				{
					iVar17 = 430539302;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 9;
				}
			}
			else if (fVar19 < 0.5f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 10)
				{
					iVar17 = -995247980;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 10;
				}
			}
			else if (fVar19 < 0.75f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 11)
				{
					iVar17 = -25056193;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if ((*Global_1900383)[iParam0]->f_25 != 12)
				{
					iVar17 = -264630352;
					iVar18 = 1313031610;
					(*Global_1900383)[iParam0]->f_25 = 12;
				}
			}
		}
		else if (fVar19 < 0.25f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 5)
			{
				iVar17 = 430539302;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 5;
			}
		}
		else if (fVar19 < 0.5f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 6)
			{
				iVar17 = -995247980;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 6;
			}
		}
		else if (fVar19 < 0.75f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 7)
			{
				iVar17 = -25056193;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if ((*Global_1900383)[iParam0]->f_25 != 8)
			{
				iVar17 = -264630352;
				iVar18 = -1012863186;
				(*Global_1900383)[iParam0]->f_25 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 4)
		{
			iVar17 = -1380599892;
			(*Global_1900383)[iParam0]->f_25 = 4;
		}
	}
	else if (bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 2)
		{
			iVar17 = 1313031610;
			(*Global_1900383)[iParam0]->f_25 = 2;
		}
	}
	else if (!bVar16)
	{
		if ((*Global_1900383)[iParam0]->f_25 != 1)
		{
			iVar17 = -1012863186;
			(*Global_1900383)[iParam0]->f_25 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_1678((*Global_1900383)[iParam0]->f_26);
		func_1679((*Global_1900383)[iParam0]->f_26);
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar17);
		if (iVar17 == -401963276)
		{
			_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 231194138);
		}
	}
	if (iVar18 != 0)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar18);
	}
	if ((_get_saddle_horse_for_player(player_id()) == iVar0 && bVar3) && !bVar9)
	{
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 673950256);
	}
	if (func_1680(iVar0) && !bVar9)
	{
		if (iVar5 == -1925605092)
		{
			iVar20 = 561559387;
		}
		else if (iVar5 == -1230993421)
		{
			iVar20 = -201249929;
		}
		_blip_set_modifier((*Global_1900383)[iParam0]->f_26, iVar20);
	}
	else
	{
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, 561559387);
		_set_blip_flash_style((*Global_1900383)[iParam0]->f_26, -201249929);
	}
	iVar21 = func_1674(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -217389439;
				break;
			case 1:
				iVar22 = 13992470;
				break;
			case 2:
				iVar22 = 396341162;
				break;
			case 3:
				iVar22 = 623069873;
				break;
			case 4:
				iVar22 = -637422489;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 937553910;
				break;
			case 1:
				iVar22 = 489732756;
				break;
			case 2:
				iVar22 = 195204984;
				break;
			case 3:
				iVar22 = -103418913;
				break;
			case 4:
				iVar22 = -815685893;
				break;
		}
	}
	if (iVar22 == 0)
	{
		_0x44813684f72b563c(iVar0, (*Global_1900383)[iParam0]->f_26);
	}
	else
	{
		_0x97f6f158cc5b5ca2(iVar0, (*Global_1900383)[iParam0]->f_26);
		_0x7563cbca99253d1a(iVar0, iVar22);
	}
}

int func_1468()
{
	return 1342496140;
}

int func_1469()
{
	return 446670976;
}

int func_1470()
{
	return 1;
}

int func_1471()
{
	return -868094182;
}

int func_1472()
{
	return 1074477367;
}

int func_1473()
{
	return 1;
}

int func_1474()
{
	return -997197050;
}

int func_1475()
{
	return -2063289686;
}

int func_1476()
{
	return 2;
}

int func_1477()
{
	return -868094182;
}

int func_1478()
{
	return 1074477367;
}

int func_1479()
{
	return 1;
}

int func_1480()
{
	return 1235275977;
}

int func_1481()
{
	return 2030804811;
}

int func_1482()
{
	return 1;
}

int func_1483()
{
	return 1974379573;
}

int func_1484()
{
	return 2024948086;
}

int func_1485()
{
	return 1;
}

void func_1486(int iParam0)
{
	if (func_1681() < iParam0)
	{
		func_1682(iParam0);
	}
}

int func_1487(struct<4> Param0, int iParam4, int iParam5)
{
	Var0.f_9 = -1591664384;
	if (func_1651(Param0, iParam4, &Var0, iParam5))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1488(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar5 = func_633(iParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_1683(iParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (_item_database_get_has_slot_info(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

struct<4> func_1489()
{
	Var0 = { func_1269(0) };
	return func_890(856287005, Var0, -218846335, 0);
}

void func_1490(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0))
	{
	}
	if (is_ped_injured(iParam0))
	{
	}
	if (is_ped_in_writhe(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -377364164 || iParam1 == 357708345)
	{
		return;
	}
	iVar0 = iParam1;
	_set_ped_component_enabled(iParam0, iVar0, false, false, false);
}

bool func_1491()
{
	if (Global_1572887->f_12 != -1)
	{
		return false;
	}
	return Global_1347477->f_203;
}

float func_1492(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_1493()
{
	fVar0 = func_1684(13);
	iVar1 = func_1685(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_1494()
{
	if (is_ped_on_mount(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_1495()
{
	if (func_686())
	{
		if (_get_special_edition_core_stats_bonus_enabled())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_1496()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_1497()
{
	return Global_1955565->f_3;
}

void func_1498(int iParam0, char* sParam1, bool bParam2)
{
	sVar0 = func_1686(iParam0, 1, 0, 0);
	sVar0 = _create_var_string(2, sVar0, sParam1);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[1]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[1]), bParam2);
}

void func_1499(int iParam0, float fParam1, bool bParam2)
{
	sVar0 = func_1686(iParam0, 2, 0, 0);
	sVar0 = _create_var_string(2, sVar0, round(fParam1));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_12[2]), sVar0);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_DOWN");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 859817522);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else if (fParam1 < 100f)
	{
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_20[2]), "RPG_ARROW_UP");
		_databinding_write_data_string(&(Global_1955569->f_5.f_2[iParam0]->f_24[2]), "pausemenu_player_update");
		_databinding_write_data_hash_string(&(Global_1955569->f_5.f_2[iParam0]->f_28[2]), 1105014447);
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), true);
	}
	else
	{
		_databinding_write_data_bool(&(Global_1955569->f_5.f_2[iParam0]->f_32[2]), false);
	}
}

bool func_1500()
{
	return func_1684(12) <= -99f;
}

bool func_1501()
{
	return func_1684(12) >= 99f;
}

bool func_1502(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_675((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_1503()
{
	return Global_40.f_4283;
}

int func_1504(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 4;
		case 2:
			return 8;
		case 3:
			return 16;
		case 4:
			return 32;
		case 5:
			return 64;
		case 6:
			return 128;
		case 7:
			return 256;
		case 8:
			return 512;
		case 9:
			return 1024;
		case 10:
			return 2048;
		case 11:
			return 4096;
		case 12:
			return 8192;
		case 13:
			return 16384;
		case 14:
			return 32768;
		case 15:
			return 65536;
		case 16:
			return 131072;
		case 17:
			return 262144;
		case 18:
			return 524288;
		case 19:
			return 1048576;
		default:
			break;
	}
	return 1;
}

int func_1505()
{
	return Global_40.f_8863.f_148;
}

int func_1506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -707360575;
		case 1:
			return -1278339625;
		case 2:
			return 1880205078;
		case 3:
			return -1201174711;
		case 4:
			return 151582343;
		case 5:
			return 1231074654;
		case 6:
			return -642492359;
		case 7:
			return 1673898385;
		case 8:
			return 5171247;
		default:
			break;
	}
	return 0;
}

int func_1507(int iParam0)
{
	if (&Global_1898329 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (&Global_1898329 - 1))
	{
		if (Global_1898330[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1508(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

void func_1509(int iParam0)
{
	if (Global_22 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1935630->f_38);
	Global_1935630->f_27 = func_1286();
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
			func_1687(&(Global_1935630->f_34), &(Global_1935630->f_39));
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

var func_1510(int iParam0)
{
	return &(Global_1109400->f_276[iParam0]);
}

bool func_1511(bool bParam0)
{
	if (func_1688(bParam0, &uVar0, &uVar1))
	{
		return true;
	}
	return false;
}

bool func_1512(var uParam0)
{
	iVar0 = Global_1935630->f_40;
	if (func_237() == -1)
	{
		if (Global_1935630->f_40 == 0)
		{
			iVar0 = func_1689(uParam0);
		}
	}
	else if (!does_entity_exist(Global_1935630->f_40) || !&Global_1955569->f_992[3])
	{
		iVar0 = func_1689(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1535(iVar0) == -1)
	{
		return false;
	}
	if (!decor_exist_on(iVar0, "HorseScriptCreator") || decor_get_int(iVar0, "HorseScriptCreator") != get_hash_of_this_script_name())
	{
		return false;
	}
	uParam0->f_14 = iVar0;
	return true;
}

void func_1513(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_1690(uParam0);
	}
}

bool func_1514(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_1535(iParam2);
	}
	else
	{
		iVar1 = func_1534(iParam2);
	}
	if (!is_ped_human(iParam0))
	{
		iVar0 = func_1535(iParam0);
	}
	else
	{
		iVar0 = func_1534(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_913(*uParam1, 8388608))
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

float func_1515(var uParam0)
{
	return uParam0->f_26;
}

bool func_1516(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_1517()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

float func_1518(var uParam0)
{
	return uParam0->f_17;
}

bool func_1519(var uParam0, int iParam1, float fParam2, float fParam3)
{
	if (uParam0->f_12 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_913(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (_0x06087579e7aa85a9(iParam1, Global_35, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (has_entity_clear_los_to_entity(iParam1, Global_35, 17))
		{
			return true;
		}
	}
	return false;
}

int func_1520(var uParam0)
{
	return uParam0->f_18;
}

bool func_1521(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (_is_weapon_sniper(func_621(iVar0, 0)))
		{
			if (func_942(get_entity_coords(iParam0, true, false), 0.4f, 0.6f, 0.3f, 0.7f))
			{
				return true;
			}
		}
	}
	return false;
}

int func_1522(var uParam0)
{
	return uParam0->f_21;
}

int func_1523(var uParam0)
{
	switch (uParam0->f_7)
	{
		case 0:
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
			switch (uParam0->f_6)
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
	if (*uParam0 & 16777216 != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_1524(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_243(iParam0, vParam4, 0.5f))
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

int func_1525(int iParam0)
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
	if (func_1691(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_1526(int iParam0)
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

bool func_1527(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1692(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_1528(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_1692(iParam1))
		{
			return false;
		}
	}
	fVar0 = 10f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = _0x900ca00ce703e1e2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_1529(var uParam0, int iParam1, float fParam2, int iParam3)
{
	fVar0 = 40f;
	if (func_1692(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
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

bool func_1530(int iParam0, int iParam1)
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

bool func_1531(int iParam0, int iParam1)
{
	if (_get_lassoed_entity(iParam0) == iParam1)
	{
		return true;
	}
	if (func_305(iParam0, 1, 0, 0) != 2055893578)
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

bool func_1532(int iParam0, int iParam1, vector3 vParam2)
{
	fVar0 = func_87(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (is_entity_touching_entity(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_1533(var uParam0)
{
	return uParam0->f_24;
}

int func_1534(int iParam0)
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

int func_1535(int iParam0)
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

int func_1536(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_1530(Global_35, &iVar1))
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
		fVar2 = func_183(iParam0, player_ped_id(), 0, 1);
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
		if (func_183(iParam0, Global_1935630->f_40, 0, 1) < 2.5f)
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

bool func_1537(int iParam0, var uParam1, bool bParam2)
{
	func_1688(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_1538(uParam1, iVar0))
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
				if (!bParam2 || !func_1538(uParam1, iVar1))
				{
					if (func_87(iVar1, Global_36, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_1538(var uParam0, int iParam1)
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

bool func_1539(int iParam0)
{
	if (func_457())
	{
		return false;
	}
	return func_675((*Global_1347702)[58]->f_15, 1);
}

int func_1540(var uParam0)
{
	return uParam0->f_20;
}

int func_1541(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_4 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_12;
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

int func_1542(bool bParam0, var uParam1, int iParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return iParam2;
}

void func_1543(int iParam0, int* iParam1, float fParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	if (func_240(iParam1->f_6))
	{
		if (bParam7 || is_bit_set(*iParam1, 11))
		{
			return;
		}
		func_92(&(iParam1->f_6), 0, 1);
	}
	if (!func_240(iParam1->f_6) && !is_bit_set(*iParam1, 4))
	{
		sVar0 = iParam1->f_5;
		if (func_1257(iParam1))
		{
			if (iParam1->f_8 != iParam5)
			{
				iParam5 = iParam1->f_8;
			}
			iParam1->f_6 = func_397(sVar0, iParam1->f_7, iParam0, iParam1->f_9, iParam4, 0, 0, iParam5, fParam2, iParam1->f_2, 4000, 10, 1073741824, 0, 1704213876, iParam1->f_10, 0);
			if (func_240(iParam1->f_6))
			{
				if (!bParam6)
				{
					iVar1 = -1;
					func_1548(iParam1->f_6, iParam0, 0, 1, iVar1);
				}
				else
				{
					func_1693(iParam1->f_6, 17, 1, 1);
				}
				if (is_bit_set(*iParam1, 1))
				{
					if (is_bit_set(*iParam1, 3))
					{
						func_1694(iParam1->f_6, sVar0, iParam1->f_16, iParam1->f_14, 1);
					}
					else
					{
						func_837(iParam1->f_6, sVar0, iParam1->f_14, 1);
					}
				}
				if (is_bit_set(*iParam1, 10))
				{
					func_1693(iParam1->f_6, 16, 1, 1);
				}
				if (!is_bit_set(*iParam1, 0) || is_bit_set(*iParam1, 13))
				{
					func_251(iParam1->f_6, 0, 1);
				}
				else
				{
					func_251(iParam1->f_6, 1, 1);
				}
			}
		}
	}
}

int func_1544(int iParam0)
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

void func_1545(int* iParam0, int iParam1)
{
	if (!func_840(iParam0, 19))
	{
		if (iParam0->f_9 != iParam1)
		{
			iParam0->f_9 = iParam1;
			func_841(iParam0, 14);
		}
	}
}

bool func_1546(int* iParam0, int* iParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, bool bParam8, float fParam9, bool bParam10, int iParam11)
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

bool func_1547(int iParam0, bool bParam1)
{
	if (bParam1 && !func_240(iParam0))
	{
		return false;
	}
	return !func_459(iParam0, 4);
}

void func_1548(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam3 && !func_240(iParam0))
	{
		return;
	}
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar0 = func_241(iParam0);
	func_1693(iParam0, 18, 0, 1);
	func_1693(iParam0, 17, 0, 1);
	if (iParam4 == -1)
	{
		iParam4 = _uiprompt_get_group_id_for_target_entity(iParam1);
	}
	_uiprompt_set_group((*Global_1945938)[iVar0]->f_3, iParam4, iParam2);
}

bool func_1549(int iParam0, bool bParam1)
{
	if (bParam1 && !func_240(iParam0))
	{
		return false;
	}
	iVar0 = func_241(iParam0);
	return _uiprompt_is_pressed((*Global_1945938)[iVar0]->f_3);
}

void func_1550(int iParam0, bool bParam1)
{
	if (bParam1 && !func_240(iParam0))
	{
		return;
	}
	iVar0 = func_241(iParam0);
	_uiprompt_restart_modes((*Global_1945938)[iVar0]->f_3);
}

struct<4> func_1551()
{
	return Var0;
}

bool func_1552(int iParam0)
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

void func_1553(int iParam0, int iParam1, bool bParam2)
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

void func_1554(int iParam0, bool bParam1)
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

void func_1555(int iParam0, int iParam1)
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

bool func_1556()
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

void func_1557(bool bParam0)
{
	func_1695(bParam0);
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

bool func_1558(int iParam0, var uParam1)
{
	if (!func_1696(iParam0))
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

bool func_1559(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

int func_1560(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		case -2087881550:
			return 2;
		case 1908068621:
			return 4;
		case 1611247019:
			return 8;
		case 1319635688:
			return 16;
		default:
			break;
	}
	return 0;
}

void func_1561(int iParam0)
{
	Global_40.f_12019.f_43 = (Global_40.f_12019.f_43 || iParam0);
}

int func_1562(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1563(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2147332013:
			return 129;
		case -2137730706:
			return 13;
		case -2129915369:
			return 383;
		case -2122981486:
			return 179;
		case -2104294676:
			return 83;
		case -2098336883:
			return 145;
		case -2093351659:
			return 297;
		case -2093199573:
			return 185;
		case -2082302444:
			return 259;
		case -2075517304:
			return 393;
		case -2071373019:
			return 440;
		case -2063047758:
			return 190;
		case -2047114234:
			return 351;
		case -2041153728:
			return 277;
		case -2038346064:
			return 244;
		case -2033572567:
			return 92;
		case -2030965067:
			return 380;
		case -2023813568:
			return 125;
		case -2006082799:
			return 56;
		case -1994410205:
			return 499;
		case -1988547710:
			return 457;
		case -1981702243:
			return 96;
		case -1971110347:
			return 435;
		case -1955429862:
			return 387;
		case -1949364492:
			return 285;
		case -1943655584:
			return 460;
		case -1935893216:
			return 124;
		case -1934704933:
			return 423;
		case -1922834065:
			return 320;
		case -1917134080:
			return 309;
		case -1916588959:
			return 29;
		case -1897704131:
			return 225;
		case -1888506091:
			return 142;
		case -1885734028:
			return 110;
		case -1868521635:
			return 396;
		case -1866112883:
			return 257;
		case -1856459307:
			return 219;
		case -1837343824:
			return 496;
		case -1832590852:
			return 326;
		case -1827461037:
			return 233;
		case -1827211287:
			return 197;
		case -1827011525:
			return 98;
		case -1825730216:
			return 18;
		case -1818590041:
			return 246;
		case -1812183035:
			return 97;
		case -1805142260:
			return 273;
		case -1804466187:
			return 77;
		case -1802212639:
			return 10;
		case -1790474454:
			return 331;
		case -1771575988:
			return 16;
		case -1757085331:
			return 454;
		case -1738185394:
			return 411;
		case -1728071186:
			return 108;
		case -1719149624:
			return 131;
		case -1689239424:
			return 312;
		case -1675752723:
			return 249;
		case -1671819791:
			return 196;
		case -1667151809:
			return 139;
		case -1664107227:
			return 405;
		case -1648173738:
			return 22;
		case -1646431667:
			return 415;
		case -1633236438:
			return 426;
		case -1596446207:
			return 252;
		case -1584659518:
			return 210;
		case -1582252733:
			return 409;
		case -1565979762:
			return 507;
		case -1564254711:
			return 158;
		case -1557862414:
			return 88;
		case -1557856056:
			return 112;
		case -1548165899:
			return 422;
		case -1538781541:
			return 483;
		case -1526278254:
			return 338;
		case -1520159291:
			return 17;
		case -1512720465:
			return 413;
		case -1501120273:
			return 57;
		case -1486701482:
			return 437;
		case -1483924019:
			return 27;
		case -1482329777:
			return 369;
		case -1479860879:
			return 482;
		case -1466029365:
			return 223;
		case -1461741225:
			return 280;
		case -1426009748:
			return 119;
		case -1425653701:
			return 199;
		case -1417145007:
			return 472;
		case -1409307734:
			return 289;
		case -1408927269:
			return 21;
		case -1405475146:
			return 329;
		case -1396074730:
			return 427;
		case -1393633441:
			return 377;
		case -1383535454:
			return 135;
		case -1381943684:
			return 470;
		case -1377327596:
			return 205;
		case -1370062029:
			return 148;
		case -1355784201:
			return 311;
		case -1340559426:
			return 373;
		case -1333840726:
			return 236;
		case -1318290630:
			return 254;
		case -1316284753:
			return 114;
		case -1302664729:
			return 294;
		case -1299405763:
			return 206;
		case -1276847784:
			return 229;
		case -1238376790:
			return 445;
		case -1235200494:
			return 165;
		case -1233518925:
			return 318;
		case -1220678266:
			return 120;
		case -1211711936:
			return 26;
		case -1205318041:
			return 23;
		case -1202860612:
			return 327;
		case -1198456774:
			return 442;
		case -1190705999:
			return 9;
		case -1179993139:
			return 284;
		case -1171086122:
			return 41;
		case -1164176475:
			return 138;
		case -1152282847:
			return 33;
		case -1143028112:
			return 25;
		case -1117048125:
			return 238;
		case -1088604829:
			return 247;
		case -1077843421:
			return 324;
		case -1061998329:
			return 164;
		case -1061765120:
			return 169;
		case -1048889581:
			return 391;
		case -1045864225:
			return 510;
		case -1036305792:
			return 58;
		case -1032742879:
			return 61;
		case -1025265051:
			return 485;
		case -978287173:
			return 12;
		case -954047483:
			return 395;
		case -948342953:
			return 359;
		case -935212592:
			return 486;
		case -925475803:
			return 484;
		case -916887991:
			return 76;
		case -908082222:
			return 187;
		case -895048976:
			return 374;
		case -890266811:
			return 172;
		case -872824399:
			return 170;
		case -860304527:
			return 186;
		case -850999370:
			return 2;
		case -833577856:
			return 86;
		case -830432609:
			return 492;
		case -825056768:
			return 149;
		case -820146008:
			return 52;
		case -820014425:
			return 439;
		case -818926670:
			return 200;
		case -813365276:
			return 243;
		case -811804990:
			return 293;
		case -807742826:
			return 3;
		case -807680461:
			return 68;
		case -807112425:
			return 180;
		case -803062666:
			return 65;
		case -779264865:
			return 106;
		case -757336127:
			return 372;
		case -742985447:
			return 302;
		case -736212459:
			return 275;
		case -715535005:
			return 362;
		case -713369135:
			return 461;
		case -710247698:
			return 251;
		case -697342513:
			return 242;
		case -695655810:
			return 443;
		case -694047360:
			return 375;
		case -693094356:
			return 89;
		case -692943180:
			return 341;
		case -681593414:
			return 175;
		case -671103079:
			return 504;
		case -670201310:
			return 313;
		case -666548248:
			return 345;
		case -650501093:
			return 509;
		case -646454939:
			return 94;
		case -637873918:
			return 404;
		case -636774257:
			return 146;
		case -625309660:
			return 343;
		case -625171987:
			return 234;
		case -620369863:
			return 403;
		case -619139736:
			return 104;
		case -604891653:
			return 237;
		case -597010176:
			return 487;
		case -582523927:
			return 424;
		case -574426587:
			return 261;
		case -561040434:
			return 400;
		case -558867971:
			return 266;
		case -554271718:
			return 232;
		case -550689301:
			return 283;
		case -544885621:
			return 310;
		case -544096309:
			return 337;
		case -534913305:
			return 174;
		case -532430534:
			return 444;
		case -527348304:
			return 253;
		case -515663690:
			return 330;
		case -505205920:
			return 39;
		case -453449739:
			return 182;
		case -449489613:
			return 140;
		case -445710060:
			return 469;
		case -435161770:
			return 150;
		case -426458298:
			return 59;
		case -423162607:
			return 133;
		case -413943699:
			return 141;
		case -404697685:
			return 308;
		case -402973141:
			return 418;
		case -399703928:
			return 155;
		case -384358266:
			return 295;
		case -381477663:
			return 37;
		case -365550600:
			return 30;
		case -332258016:
			return 382;
		case -331451824:
			return 303;
		case -330340613:
			return 489;
		case -328226663:
			return 323;
		case -324786054:
			return 288;
		case -319093529:
			return 260;
		case -317452243:
			return 128;
		case -314300362:
			return 473;
		case -308211771:
			return 194;
		case -303175962:
			return 431;
		case -302690754:
			return 67;
		case -302574837:
			return 24;
		case -290258665:
			return 317;
		case -286479684:
			return 269;
		case -285172118:
			return 505;
		case -270246276:
			return 490;
		case -266920872:
			return 357;
		case -259827569:
			return 425;
		case -258855820:
			return 464;
		case -248683070:
			return 429;
		case -231638975:
			return 34;
		case -222982511:
			return 204;
		case -221923309:
			return 406;
		case -221398783:
			return 354;
		case -219249641:
			return 474;
		case -218211995:
			return 344;
		case -207368052:
			return 361;
		case -172442174:
			return 385;
		case -170673728:
			return 156;
		case -165538585:
			return 127;
		case -164763388:
			return 376;
		case -164125056:
			return 438;
		case -162152912:
			return 441;
		case -144509608:
			return 113;
		case -134086241:
			return 222;
		case -125979788:
			return 95;
		case -123719783:
			return 151;
		case -121904458:
			return 208;
		case -120359954:
			return 316;
		case -117389654:
			return 93;
		case -115054321:
			return 325;
		case -110297889:
			return 290;
		case -98209688:
			return 55;
		case -94582539:
			return 239;
		case -72799657:
			return 287;
		case -66788599:
			return 19;
		case -58963831:
			return 105;
		case -58291054:
			return 201;
		case -56411631:
			return 342;
		case -54575589:
			return 353;
		case -21372580:
			return 46;
		case -18183703:
			return 466;
		case -8269375:
			return 137;
		case 13460468:
			return 350;
		case 15906262:
			return 321;
		case 16938930:
			return 81;
		case 61425283:
			return 51;
		case 65871884:
			return 54;
		case 70047950:
			return 188;
		case 72162222:
			return 43;
		case 72854145:
			return 1;
		case 85572330:
			return 147;
		case 94814634:
			return 228;
		case 95619635:
			return 408;
		case 98434060:
			return 458;
		case 108841201:
			return 358;
		case 121222228:
			return 476;
		case 121466883:
			return 498;
		case 122725574:
			return 477;
		case 124507607:
			return 480;
		case 127002552:
			return 455;
		case 132239274:
			return 494;
		case 132287504:
			return 184;
		case 137433874:
			return 227;
		case 139790602:
			return 60;
		case 171363131:
			return 47;
		case 176656832:
			return 0;
		case 180573150:
			return 279;
		case 187832713:
			return 282;
		case 195634974:
			return 433;
		case 200640922:
			return 35;
		case 207369059:
			return 64;
		case 209896562:
			return 304;
		case 217189690:
			return 241;
		case 220165734:
			return 134;
		case 228261307:
			return 74;
		case 229393477:
			return 270;
		case 278608719:
			return 399;
		case 281905065:
			return 419;
		case 289706151:
			return 364;
		case 290238735:
			return 250;
		case 291150162:
			return 103;
		case 299577191:
			return 90;
		case 315283201:
			return 240;
		case 315850182:
			return 193;
		case 319124397:
			return 506;
		case 340819214:
			return 84;
		case 388356689:
			return 101;
		case 397857304:
			return 335;
		case 400034151:
			return 71;
		case 403634348:
			return 291;
		case 404260466:
			return 73;
		case 408875702:
			return 80;
		case 411591903:
			return 132;
		case 437096661:
			return 446;
		case 443165194:
			return 332;
		case 446631778:
			return 436;
		case 448165982:
			return 220;
		case 474959407:
			return 255;
		case 477580579:
			return 493;
		case 487107418:
			return 370;
		case 490619049:
			return 163;
		case 500323776:
			return 40;
		case 501194998:
			return 471;
		case 512067206:
			return 452;
		case 525567468:
			return 160;
		case 531203229:
			return 245;
		case 532176461:
			return 203;
		case 533929296:
			return 346;
		case 534386033:
			return 488;
		case 534766068:
			return 349;
		case 542655528:
			return 360;
		case 545240164:
			return 398;
		case 553023190:
			return 78;
		case 561912024:
			return 420;
		case 569547151:
			return 389;
		case 579829077:
			return 178;
		case 597768834:
			return 315;
		case 627421591:
			return 268;
		case 634843927:
			return 66;
		case 643583911:
			return 401;
		case 652625673:
			return 501;
		case 654830082:
			return 371;
		case 676394410:
			return 8;
		case 678897243:
			return 211;
		case 679257961:
			return 126;
		case 685466172:
			return 217;
		case 692218123:
			return 467;
		case 693884302:
			return 177;
		case 703663141:
			return 328;
		case 705436149:
			return 365;
		case 709886296:
			return 414;
		case 720937389:
			return 115;
		case 727456822:
			return 153;
		case 730196087:
			return 157;
		case 737744809:
			return 50;
		case 747937920:
			return 481;
		case 753501669:
			return 367;
		case 761196368:
			return 218;
		case 766757422:
			return 296;
		case 772151702:
			return 28;
		case 779383250:
			return 336;
		case 787526397:
			return 202;
		case 794696385:
			return 14;
		case 812866778:
			return 355;
		case 833697503:
			return 298;
		case 837366581:
			return 118;
		case 847641699:
			return 192;
		case 852724290:
			return 136;
		case 853563984:
			return 49;
		case 856952521:
			return 42;
		case 866755445:
			return 4;
		case 870594813:
			return 173;
		case 881844660:
			return 11;
		case 920901415:
			return 412;
		case 921753284:
			return 272;
		case 951007010:
			return 407;
		case 951777606:
			return 212;
		case 953460136:
			return 159;
		case 960236560:
			return 70;
		case 1004978630:
			return 333;
		case 1005520287:
			return 38;
		case 1019519723:
			return 256;
		case 1025198797:
			return 171;
		case 1046168872:
			return 456;
		case 1057391314:
			return 356;
		case 1059753202:
			return 198;
		case 1061621862:
			return 299;
		case 1073595144:
			return 417;
		case 1080053708:
			return 189;
		case 1086705486:
			return 265;
		case 1092859156:
			return 116;
		case 1098143971:
			return 305;
		case 1130474589:
			return 264;
		case 1132574871:
			return 402;
		case 1134064472:
			return 271;
		case 1138578991:
			return 286;
		case 1141344854:
			return 378;
		case 1150653348:
			return 392;
		case 1156064998:
			return 366;
		case 1157034909:
			return 451;
		case 1165920102:
			return 292;
		case 1166284695:
			return 363;
		case 1176031365:
			return 224;
		case 1176450045:
			return 87;
		case 1185998732:
			return 410;
		case 1188734721:
			return 214;
		case 1219566057:
			return 166;
		case 1234351222:
			return 463;
		case 1249990864:
			return 428;
		case 1264235360:
			return 450;
		case 1267596926:
			return 7;
		case 1267957796:
			return 32;
		case 1292421672:
			return 215;
		case 1296800590:
			return 107;
		case 1297331434:
			return 130;
		case 1300783988:
			return 45;
		case 1305416676:
			return 495;
		case 1314347520:
			return 122;
		case 1328264128:
			return 258;
		case 1330480767:
			return 102;
		case 1335382896:
			return 248;
		case 1338855384:
			return 152;
		case 1344816618:
			return 314;
		case 1344986053:
			return 168;
		case 1349313303:
			return 6;
		case 1354948947:
			return 300;
		case 1357649685:
			return 267;
		case 1358951864:
			return 368;
		case 1360004037:
			return 322;
		case 1365311568:
			return 85;
		case 1366067161:
			return 91;
		case 1402899606:
			return 195;
		case 1406459015:
			return 53;
		case 1410684624:
			return 181;
		case 1415827953:
			return 432;
		case 1425403638:
			return 479;
		case 1427678219:
			return 230;
		case 1437607594:
			return 306;
		case 1438982821:
			return 111;
		case 1441230304:
			return 502;
		case 1447433250:
			return 352;
		case 1448617333:
			return 99;
		case 1454698172:
			return 421;
		case 1456958671:
			return 397;
		case 1467569385:
			return 69;
		case 1469701481:
			return 394;
		case 1508162848:
			return 434;
		case 1522535287:
			return 48;
		case 1524405765:
			return 79;
		case 1534808110:
			return 301;
		case 1549419655:
			return 216;
		case 1566844391:
			return 63;
		case 1571380021:
			return 75;
		case 1578693170:
			return 144;
		case 1593516439:
			return 462;
		case 1618734891:
			return 339;
		case 1621135203:
			return 44;
		case 1623482561:
			return 503;
		case 1636680094:
			return 478;
		case 1647502903:
			return 20;
		case 1665139197:
			return 278;
		case 1674863702:
			return 281;
		case 1675028401:
			return 109;
		case 1685749736:
			return 334;
		case 1688887348:
			return 209;
		case 1699962800:
			return 263;
		case 1701503387:
			return 207;
		case 1707661169:
			return 167;
		case 1723031480:
			return 161;
		case 1731971171:
			return 262;
		case 1750892420:
			return 183;
		case 1756182884:
			return 162;
		case 1759111208:
			return 72;
		case 1769573516:
			return 468;
		case 1773135364:
			return 231;
		case 1777191912:
			return 340;
		case 1783253542:
			return 384;
		case 1784248599:
			return 143;
		case 1786449168:
			return 31;
		case 1791780428:
			return 117;
		case 1792418811:
			return 100;
		case 1796786552:
			return 379;
		case 1817180056:
			return 390;
		case 1819621703:
			return 276;
		case 1824331150:
			return 449;
		case 1852529797:
			return 307;
		case 1863892775:
			return 274;
		case 1874987418:
			return 191;
		case 1888528254:
			return 447;
		case 1889392998:
			return 508;
		case 1890596065:
			return 235;
		case 1899640864:
			return 388;
		case 1909655985:
			return 430;
		case 1914552023:
			return 176;
		case 1927460276:
			return 448;
		case 1935952956:
			return 475;
		case 1937922313:
			return 459;
		case 1945593927:
			return 62;
		case 1955664182:
			return 226;
		case 1964695690:
			return 491;
		case 1971155641:
			return 453;
		case 1974689262:
			return 500;
		case 1978339427:
			return 154;
		case 2011168490:
			return 123;
		case 2011368334:
			return 221;
		case 2016323151:
			return 36;
		case 2030928096:
			return 381;
		case 2033246305:
			return 82;
		case 2045192987:
			return 319;
		case 2045388447:
			return 121;
		case 2050878222:
			return 497;
		case 2057380366:
			return 348;
		case 2071287828:
			return 347;
		case 2080199877:
			return 213;
		case 2082303678:
			return 5;
		case 2091083291:
			return 15;
		case 2137967386:
			return 386;
		case 2143106360:
			return 416;
		case 2143139308:
			return 465;
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

int func_1564(int iParam0)
{
	if (!func_636(*iParam0, 0))
	{
		return 0;
	}
	switch (*iParam0)
	{
		case -1073808995:
			*iParam0 = -1753819339;
			return 1;
		case 1903483453:
			*iParam0 = -1527293029;
			return 1;
		case -541584777:
			*iParam0 = 206762213;
			return 1;
		case 998010398:
			*iParam0 = -324053813;
			return 1;
		case -1424823393:
			*iParam0 = -885810591;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1565(int iParam0, var uParam1, bool bParam2)
{
	if (!func_636(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_886(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_887((386 + iVar29), 1);
		if (func_888(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_889(iParam0, &Var6, iVar5);
			if ((bParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return true;
			}
		}
		iVar29++;
	}
	return false;
}

int func_1566(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_1567(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		case 2:
			return 20f;
		case 3:
			return 10f;
		case 4:
			return 10f;
		case 5:
			return 20f;
		case 6:
			return 10f;
		case 7:
			return 15f;
		case 8:
			return 15f;
		case 9:
			return 20f;
		case 10:
			return 5f;
		case 11:
			return 5f;
		case 12:
			return 10f;
		case 13:
			return 20f;
		case 14:
			return 30f;
		case 15:
			return 5f;
		case 16:
			return 5f;
		case 17:
			return 3f;
		case 18:
			return 20f;
		case 19:
			return func_1697(iParam0);
		case 20:
			return 25f;
		case 21:
			return 50f;
		case 22:
			return 100f;
		case 23:
			return 150f;
		case 24:
			return 20f;
		case 25:
			return 10f;
		case 26:
			return 20f;
		case 27:
			return 20f;
		case 28:
			return 20f;
		case 29:
			return 20f;
		case 30:
			return func_1697(iParam0);
		case 31:
			return 25f;
		case 32:
			return 50f;
		case 33:
			return 100f;
		case 34:
			return 150f;
		case 35:
			return 1f;
		case 36:
			return 5f;
		case 37:
			return 1f;
		case 38:
			return 3f;
		case 39:
			return 1f;
		case 40:
			return 1f;
		case 41:
			return 1f;
		case 42:
			return 5f;
		case 43:
			return 10f;
		case 49:
			return 20f;
		case 44:
			return 5f;
		case 45:
			return 5f;
		case 46:
			return 10f;
		case 47:
			return 10f;
		case 48:
			return 5f;
		case 50:
			return func_1697(iParam0);
		case 51:
			return 25f;
		case 52:
			return 50f;
		case 53:
			return 100f;
		case 54:
			return 150f;
		case 55:
			return 5f;
		default:
			break;
	}
	return 0f;
}

bool func_1568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_944(18);
		case 2:
			return func_944(20);
		case 1:
			return func_944(19);
		default:
			break;
	}
	return true;
}

int func_1569(int iParam0)
{
	return func_1698(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1570(int iParam0, float fParam1, bool bParam2)
{
	if (func_237() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_944(31))
	{
		return;
	}
	iVar0 = func_1569(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1569(iParam0);
	if (func_1699(iParam0) && func_1700(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_1701(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_1702(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_673(func_1703(iParam0), 0);
					}
					func_1704(iParam0, iVar2, iVar3);
					func_1705(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1571(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1572(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		case 0:
			return 2001720289;
		case 2:
			return 234329797;
		default:
			break;
	}
	return 0;
}

int func_1573()
{
	return func_1706(Global_40.f_12019);
}

int func_1574()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1335(iVar1);
		if (func_412(iVar2, 1, 0) || func_1580(func_1579(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1575()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1707(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1576()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1585(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1577()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1578(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		case 1:
			return -1021394391;
		case 2:
			return -987306668;
		case 3:
			return -1028735103;
		case 4:
			return 515229791;
		case 5:
			return -1230863414;
		case 6:
			return 232875659;
		case 7:
			return 1423129537;
		case 8:
			return -435742319;
		case 9:
			return -1854702679;
		case 10:
			return 1265323898;
		case 11:
			return -479775696;
		default:
			break;
	}
	return 0;
}

int func_1579(int iParam0)
{
	switch (iParam0)
	{
		case -1230863414:
			return 1;
		case -1021394391:
			return 8;
		case 232875659:
			return 4;
		case -1028735103:
			return 16;
		case 554799588:
			return 32;
		case 1265323898:
			return 64;
		case -1854702679:
			return 128;
		case -987306668:
			return 256;
		case -479775696:
			return 2;
		case 515229791:
			return 512;
		case -435742319:
			return 1024;
		case 1423129537:
			return 2048;
		default:
			break;
	}
	return 0;
}

bool func_1580(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		case 1:
			return "COL_DB_SEND";
		case 2:
			return "COL_DB_COLLECT";
		default:
			break;
	}
	return "";
}

int func_1582(int iParam0)
{
	switch (iParam0)
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
			break;
	}
	return 5;
}

int func_1583(int iParam0)
{
	switch (iParam0)
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
			break;
	}
	return 15;
}

char* func_1584(int iParam0)
{
	switch (iParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		case -222563712:
			return "COL_HF_FOUND";
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		case 2116770557:
			return "COL_GF_FOUND";
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		case 2085530337:
			return "COL_SF_FOUND";
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		default:
			break;
	}
	return "";
}

bool func_1585(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1586(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
	}
}
