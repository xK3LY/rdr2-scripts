void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	fLocal_106 = 0.5f;
	iLocal_297 = 1;
	iLocal_298 = 2;
	iLocal_299 = 3;
	iLocal_300 = 4;
	iLocal_301 = 5;
	iLocal_302 = 6;
	iLocal_303 = 7;
	iLocal_304 = 8;
	iLocal_305 = 25;
	iLocal_306 = 6;
	iLocal_307 = 992;
	iLocal_308 = 16;
	uLocal_309 = ((uVar304 || uVar305) || uVar306);
	iLocal_310 = 2;
	iLocal_311 = 28;
	iLocal_312 = 1;
	iLocal_313 = 1;
	iLocal_314 = 1;
	vLocal_405 = { 2823.85f, -974.85f, 42.95f };
	iLocal_408 = 987516329;
	iLocal_790 = -164963696;
	iLocal_868 = 3;
	sLocal_971 = "gang2_RideToBalloon";
	sLocal_972 = "gang2_SadieRoute";
	fLocal_980 = -1f;
	fLocal_981 = -1f;
	vLocal_989 = { -0.75f, 0.31f, 0.82f };
	iLocal_995 = 1;
	fLocal_1003 = 0f;
	sLocal_1005 = "Script_GNG2_RopeClimb";
	sLocal_1006 = "MINI_GAMES@STORY@GNG2@ROPE_CLIMB@ARTHUR";
	sLocal_1007 = "MINI_GAMES@STORY@GNG2@ROPE_CLIMB@SADIE";
	sLocal_1008 = "MINI_GAMES@STORY@GNG2@ROPE_CLIMB@ROPE";
	iLocal_1009 = 790446620;
	iLocal_1010 = 994364838;
	iLocal_1011 = 1297231476;
	iLocal_1058 = 1;
	iLocal_1059 = -1569615261;
	fLocal_1179 = -1f;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1180, 1073741824);
		func_2(&uLocal_1180, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1180);
	func_5(&uLocal_1180);
	while (!func_6(&uLocal_1180, -2147483648))
	{
		func_7(&uLocal_1180);
		wait(0);
	}
	while (!func_2(&uLocal_1180, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

void func_1(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_2(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_9(cParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_10(Global_43801))
		{
			func_11(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_13(func_12(cParam0->f_607), 0, 2);
		func_14();
		func_15(1);
		func_16(1, 0);
		func_17(cParam0, 1);
		func_18(0);
		_uilog_mark_all_entries_availability(0, "");
		Global_36605 = 0;
		func_19(3);
		if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
		{
			_set_scenario_type_enabled_hash(-2012097661, true);
		}
		terminate_this_thread();
	}
	if (!bParam1)
	{
		if (!func_6(cParam0, 1048576))
		{
			if (func_20() == 0)
			{
				func_21(0);
			}
			else if (func_22(cParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_22(cParam0) == 1 || func_22(cParam0) == 2)
					{
						if (func_23(&(cParam0->f_8269)) && func_24(&(cParam0->f_8269)))
						{
							func_25(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!func_26(&(cParam0->f_13118)))
					{
						func_27(&(cParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_1(cParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_6(cParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_28(cParam0, bVar1)) && !func_29()) && !func_6(cParam0, 80))
						{
							if (!bVar1)
							{
								func_30(cParam0);
							}
							return false;
						}
						if (func_6(cParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_22(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (func_31(cParam0))
								{
									cParam0->f_13104 = get_game_timer();
								}
							}
							if ((cParam0->f_13104 != -1 && get_game_timer() > cParam0->f_13104 + 4000) || bVar1)
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else if (func_22(cParam0) == 1)
						{
							if (func_28(cParam0, bVar1))
							{
								_0x16e9abdd34ddd931();
								do_screen_fade_out(0);
							}
						}
						else
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						is_screen_fading_in();
						if (!is_screen_faded_out())
						{
							return false;
						}
					}
				}
			}
			else if (func_6(cParam0, 2))
			{
				if (!is_screen_faded_out())
				{
					if (!is_screen_fading_out())
					{
						do_screen_fade_out(1000);
					}
					return false;
				}
				if (_0x1b065a2bf7953815(1) == 1)
				{
					return false;
				}
			}
			if (!func_32() && func_22(cParam0) != 0)
			{
				func_36(cParam0, func_34(func_33(cParam0)), func_34(func_35(cParam0)), func_33(cParam0), func_35(cParam0));
			}
		}
	}
	if (_does_anim_scene_exist(cParam0->f_7375.f_804))
	{
		if (check_ownership_of_anim_scene(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
	}
	func_1(cParam0, 1048576);
	if (!func_6(cParam0, 2097152))
	{
		if (!func_9(cParam0))
		{
			return false;
		}
		func_1(cParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_37(&(cParam0->f_8269));
	if (func_23(&(cParam0->f_8269)))
	{
		func_38(&(cParam0->f_8269));
	}
	set_gps_active(false);
	set_player_invincible(get_player_index(), false);
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	if (_0xcf45df50c7775f2a())
	{
		_0x5a8b01199c3e79c3();
	}
	set_random_trains(false);
	func_39(1);
	func_40(1);
	_0xc5eb2755fa25f1e9(1);
	func_41(0);
	func_42();
	func_19(3);
	if (!func_6(cParam0, 8))
	{
		_display_hud_component(-1679307491);
		_display_hud_component(724769646);
	}
	func_15(1);
	func_43();
	func_44();
	set_mission_name(false, 0);
	func_45();
	_set_milliseconds_per_game_minute(2000);
	pause_clock(false, 0);
	_0x914071ff93af2692(player_id(), 1f);
	_0x19b2c7a6c34fad54(player_id(), 1f);
	func_46(cParam0);
	func_47(1, 0);
	func_48(2);
	if (!Global_1935630->f_12)
	{
		set_ped_config_flag(Global_35, 141, false);
		_0xaac0ee3b4999abb5(Global_35, 0);
		_0xb832f1a686b9b810(Global_35, func_49(), 0);
		set_ped_config_flag(Global_35, 308, false);
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
		set_ped_config_flag(Global_35, 446, false);
		_0xeae3b5b019c8d23f(Global_35, 262143);
		func_50(Global_35);
		set_ped_config_flag(Global_35, 170, false);
		set_ped_config_flag(Global_35, 43, false);
		set_ped_config_flag(Global_35, 360, false);
	}
	if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		_0x12e09e278c6c29b7(get_player_index());
	}
	set_everyone_ignore_player(get_player_index(), false);
	if (does_cam_exist(cParam0->f_609.f_2))
	{
		render_script_cams(false, false, 3000, true, false, 0);
		destroy_cam(cParam0->f_609.f_2, false);
	}
	func_51(&(cParam0->f_10792));
	func_52();
	stop_gameplay_hint(true);
	func_39(1);
	func_53();
	if (func_54())
	{
		_0x2f9ac754fe179d58(0.3f);
	}
	func_55(0, 14);
	bVar2 = false;
	if (func_22(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_56(cParam0);
	}
	func_57(cParam0, 0, !bVar2, bVar2);
	func_58(cParam0, !bVar2);
	func_59(0);
	func_59(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_60(0);
	func_62(func_61(cParam0));
	func_63(func_61(cParam0));
	func_64(0);
	func_65(0);
	func_66(func_22(cParam0));
	func_67(cParam0);
	if (!bVar2)
	{
		func_16(1, 0);
	}
	if (func_22(cParam0) != 1)
	{
		func_68(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_69(1);
	func_70(0);
	func_71(Global_1935630, 2097152);
	func_18(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_22(cParam0) == 0)
	{
		func_72((*Global_1835011)[cParam0->f_607]->f_1);
	}
	func_73();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_22(cParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_6(cParam0, 4)) && !func_6(cParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_74(cParam0);
				func_75(cParam0);
				func_76();
				func_78(func_77(), 0);
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_80(cParam0->f_607);
				bVar3 = func_81();
				if (!func_82(32768))
				{
					func_83(func_12(cParam0->f_607), !func_6(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_84(func_12(cParam0->f_607), bVar3);
				}
				func_17(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_85(cParam0));
				}
				func_14();
				if (func_82(32768))
				{
					do_screen_fade_out(0);
					func_86();
					func_87(0);
				}
				else if (func_6(cParam0, 2))
				{
					if (!is_screen_faded_out() && !is_screen_fading_out())
					{
						do_screen_fade_out(0);
					}
					func_88(1);
					func_89();
					func_90(6);
					func_91(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				func_92(func_12(cParam0->f_607));
				func_93();
				if (func_22(cParam0) == 2)
				{
					func_95(func_94(-1876607090), 1);
				}
				_0x55f37f5f3f2475e1();
				_0x062b4a4a3396351d(get_player_index());
				_0x07e8b8b20570271c(get_player_index());
				break;
			case 5:
				if (func_20() == 0)
				{
					func_79(0);
				}
				func_93();
				Var4 = { func_94(-1876607090) };
				_0x0fee2561120f3333(&Var4);
				func_13(func_12(cParam0->f_607), 0, 2);
				break;
			default:
				func_83(func_12(cParam0->f_607), 1, 1, 0, 1);
				func_14();
				break;
		}
		if (func_22(cParam0) != 0)
		{
			Var6 = { func_96(cParam0) };
			func_97(func_12(cParam0->f_607), func_22(cParam0), &Var6, 0, 0, func_6(cParam0, 64));
		}
	}
	func_98(1);
	func_19(3);
	func_99(cParam0, 4096);
	return true;
}

bool func_3(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_4(var uParam0, char[4] cParam1)
{
	_0xed9582b3da8f02b4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = create_itemset(true);
	if (!func_20() == 0)
	{
		if (is_itemset_valid(Global_43616) && get_itemset_size(Global_43616) > 0)
		{
			iVar1 = 0;
			while (iVar1 < get_itemset_size(Global_43616))
			{
				iVar2 = get_indexed_item_in_itemset(iVar1, Global_43616);
				iVar3 = _get_entity_from_item(iVar2);
				if (((!is_entity_dead(iVar3) && is_entity_a_ped(iVar3)) && !is_in_itemset(iVar2, iVar0)) && get_ped_index_from_entity_index(iVar3) != Global_35)
				{
					add_to_itemset(iVar2, iVar0);
				}
				iVar1++;
			}
		}
	}
	func_100(cParam1);
	if (!func_20() == 0)
	{
		if (func_101(cParam1) > 0)
		{
			iVar4 = 0;
			while (iVar4 < cParam1->f_7375.f_13)
			{
				if (((!is_entity_dead(&(cParam1->f_7375.f_13[iVar4])) && is_entity_a_ped(&(cParam1->f_7375.f_13[iVar4]))) && !is_in_itemset(&(cParam1->f_7375.f_13[iVar4]), iVar0)) && get_ped_index_from_entity_index(&(cParam1->f_7375.f_13[iVar4])) != Global_35)
				{
					add_to_itemset(&(cParam1->f_7375.f_13[iVar4]), iVar0);
				}
				iVar4++;
			}
		}
	}
	if (get_itemset_size(iVar0) > 0)
	{
		_0xf008e0ba1fe1d644(get_itemset_size(iVar0));
	}
	destroy_itemset(iVar0);
	if (func_102())
	{
		func_103(cParam1, 4194304);
	}
	if (func_104())
	{
		func_103(cParam1, 8388608);
	}
	if (func_105())
	{
		if (!func_104() && !func_102())
		{
			func_103(cParam1, 4);
		}
		else
		{
			if (func_104())
			{
			}
			if (func_102())
			{
			}
		}
		func_107(cParam1, func_106());
	}
	func_108(cParam1, uParam0);
	func_109(cParam1);
	if (cParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((cParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_5(char[4] cParam0)
{
	cVar0 = func_110(cParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (cParam0->f_607 != 77)
	{
		func_111();
		func_112(&cVar0, 0);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_113(1);
	func_114();
	_0xa565fac215cbc77d();
	shutdown_loading_screen();
	func_45();
	func_40(func_115(cParam0));
	_0x55f37f5f3f2475e1();
	_0x292ad61a33a7a485();
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0x2161278c6322f740(16384, 0, 0, -1, -1, 0);
	}
	func_117(1, 0, 1);
	_0x2161278c6322f740(4096, 0, 0, -1, -1, 0);
	delete_all_trains();
	set_random_trains(false);
	func_39(0);
	func_118(cParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_119(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_120(cParam0, 16384) && (func_121(cParam0, func_33(cParam0), 2) || func_105()))
		{
			set_player_control(get_player_index(), false, 0, false);
		}
		clear_ped_wetness(Global_35);
		clear_ped_blood_damage(Global_35);
		remove_particle_fx_from_entity(Global_35);
		if (get_current_ped_weapon(Global_35, &iVar1, true, 0, false))
		{
			if ((((_0x2c83212a7aa51d3d(iVar1) || iVar1 == 1549070292) || iVar1 == 1030402560) || iVar1 == -135813381) || iVar1 == -351498939)
			{
				if (!func_105() && !func_121(cParam0, func_33(cParam0), 2))
				{
				}
			}
			else if (!func_122(iVar1) && !func_82(32768))
			{
				remove_weapon_from_ped(Global_35, iVar1, true, -142743235);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			}
		}
		_0xb832f1a686b9b810(Global_35, false, 0);
		set_ped_can_use_auto_conversation_lookat(Global_35, true);
		func_123(cParam0);
	}
	func_70(1);
	func_39(0);
	func_124(cParam0, -1038436471);
	iLocal_105 = func_125(cParam0);
	iLocal_105 = iLocal_105;
	if (!Global_1935630->f_12)
	{
		if (!func_105())
		{
			Var2 = { func_34(func_33(cParam0)) };
			if (func_33(cParam0) != 0)
			{
				Var2 = { func_126(cParam0->f_607) };
			}
			if (!func_127(Var2))
			{
				func_103(cParam0, 1048576);
			}
			func_107(cParam0, 0);
			if (func_128(cParam0, 3) || func_129())
			{
				func_130(cParam0, func_126(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!is_ped_injured(player_ped_id()))
			{
				freeze_entity_position(player_ped_id(), false);
				set_entity_visible(player_ped_id(), true);
				func_131(get_entity_coords(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_107(cParam0, func_106());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[cParam0->f_607]->f_8), 0, func_132(func_33(cParam0)), func_105());
	}
	func_133(cParam0);
	func_134(cParam0, 0);
	func_135(cParam0, 0);
	if (!func_136(cParam0, func_33(cParam0)))
	{
		func_107(cParam0, 0);
	}
	func_137(cParam0);
	func_138(cParam0);
	func_139(cParam0);
	func_103(cParam0, 2097152);
	func_140(cParam0, func_33(cParam0), 134217728);
	if (func_82(32768))
	{
		func_1(cParam0, 4);
	}
	func_141(cParam0);
	func_142(cParam0, func_33(cParam0));
	func_143(func_61(cParam0));
	if (!func_120(cParam0, 65536))
	{
		func_144(func_61(cParam0));
	}
	func_145(cParam0, player_ped_id(), "ARTHUR", 0);
	func_146(cParam0);
	func_147(cParam0);
	func_148(cParam0);
	func_149(cParam0, 30f);
	func_150(cParam0, 40f);
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_98(0);
	_0xa6a3a3f96b8b030e();
	func_18(1);
	_uilog_mark_all_entries_availability(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = func_110(cParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_6(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

void func_7(char[4] cParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_116(func_77()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_121(cParam0, func_33(cParam0), 16384))
	{
		func_152();
	}
	if (!func_8(cParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_8(cParam0, 2048))
	{
		func_153(1, 0);
	}
	switch (func_154(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_155(func_61(cParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_103(cParam0, 64);
			}
			func_156(cParam0, 0);
			func_157(cParam0);
			if (func_158(cParam0))
			{
				if (!is_entity_dead(func_159(cParam0)) && func_128(cParam0, 3))
				{
					freeze_entity_position(func_159(cParam0), false);
				}
				func_160(cParam0, 1);
			}
			if (func_6(cParam0, -2147483648))
			{
				func_160(cParam0, 2);
			}
			break;
		case 1:
			if (func_161(cParam0))
			{
				func_1(cParam0, -2147483648);
				func_160(cParam0, 2);
			}
			func_156(cParam0, func_162(cParam0, func_33(cParam0)) > 4);
			break;
		case 2:
			if (func_2(cParam0, 0))
			{
				func_1(cParam0, -2147483648);
				func_160(cParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_154(cParam0) < 2)
	{
	}
}

bool func_8(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_9(char[4] cParam0)
{
	func_163(7);
	func_164(289);
	stop_ped_speaking(Global_35, false);
	if (does_entity_exist(iVar417))
	{
		set_object_as_no_longer_needed(&iLocal_420);
	}
	if (does_entity_exist(iVar418))
	{
		set_object_as_no_longer_needed(&iLocal_421);
	}
	if (does_entity_exist(iVar419))
	{
		set_object_as_no_longer_needed(&iLocal_422);
	}
	func_165(&iLocal_419, 1, 1, 1);
	_0x0d7fd6a55fd63aef(25, 3, 1);
	_0x0d7fd6a55fd63aef(19, 3, 1);
	_0x0d7fd6a55fd63aef(21, 3, 1);
	_0x2b4ce170de09f346(&(iLocal_315[1]), 1331076740);
	_0x660a8f876df1d4f8(6);
	func_166(2, cParam0, 0);
	func_166((uVar306 && func_167(2)), cParam0, 0);
	func_168(iVar307, 0);
	func_169(uVar308, 1);
	func_170(Local_14.f_69);
	func_170(Local_14.f_79);
	func_170(Local_14.f_38);
	func_171(2101399188);
	if (func_22(cParam0) != 0)
	{
		func_171(-1207658444);
	}
	if (func_172(Global_35, 0))
	{
		_0xfd6943b6df77e449(Global_35, true);
		if (func_22(cParam0) != 0)
		{
			get_ground_z_for_3d_coord(Global_36, &fVar0, false);
			set_entity_coords(Global_35, Global_36, Global_36.f_1, fVar0, true, false, true, true);
		}
		set_entity_collision(Global_35, true, false);
		set_ped_config_flag(Global_35, 174, false);
		func_173();
	}
	if (func_10(iVar1044))
	{
		func_11(&iLocal_1047, 1, 1);
	}
	if (func_10(iVar1043))
	{
		func_11(&iLocal_1046, 1, 1);
	}
	func_174(&iLocal_403, 0);
	func_175(iVar401, 0);
	func_39(1);
	set_random_trains(true);
	func_176();
	func_164(285);
	func_164(286);
	if (func_172(iVar480, 0))
	{
		set_blocking_of_non_temporary_events(iVar480, false);
		set_ped_as_no_longer_needed(&iLocal_483);
	}
	func_58(cParam0, 0);
	func_59(7);
	func_177();
	func_178(&uLocal_512, 1);
	func_178(&uLocal_513, 1);
	func_178(&uLocal_514, 1);
	func_11(&uLocal_523, 1, 1);
	func_11(&uLocal_294, 1, 1);
	if (_0x2009f8ab7a5e9d6d(player_id()))
	{
		_0x12e09e278c6c29b7(player_id());
	}
	if (does_particle_fx_looped_exist(iVar905))
	{
		remove_particle_fx(iVar905, true);
	}
	if (_0xc276fe69dda22bad(iVar1053))
	{
		remove_cover_point(iVar1053);
	}
	_0x0e71c80fa4ec8147("OVERCASTDARK", false);
	_set_weather_type(821931868, false, false, true, 60f, false);
	if (does_group_exist(iVar470))
	{
		remove_group(iVar470);
	}
	if (iVar1056 != -1569615261)
	{
		_0xc3896d03e2852236(iVar1056);
	}
	remove_all_cover_blocking_areas();
	func_179();
	if (is_audio_scene_active("GANG2_scenes_scripted_balloon_hover"))
	{
		stop_audio_scene("GANG2_scenes_scripted_balloon_hover");
	}
	_0x821c32c728b24477(0, 0f, 0);
	_0xf64034d533ce8aac(0, "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON", "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON");
	if (func_172(iVar424, 0))
	{
		set_ped_as_no_longer_needed(&iLocal_427);
	}
	if (does_entity_exist(iVar383))
	{
		set_object_as_no_longer_needed(&iLocal_386);
	}
	if (does_entity_exist(&(iLocal_409[0])))
	{
		set_object_as_no_longer_needed(iLocal_409[0]);
	}
	if (does_entity_exist(&(iLocal_409[1])))
	{
		set_object_as_no_longer_needed(iLocal_409[1]);
	}
	if (does_entity_exist(&(iLocal_409[2])))
	{
		set_object_as_no_longer_needed(iLocal_409[2]);
	}
	if (does_entity_exist(&(iLocal_409[3])))
	{
		set_object_as_no_longer_needed(iLocal_409[3]);
	}
	if (does_entity_exist(&(iLocal_414[0])))
	{
		set_object_as_no_longer_needed(iLocal_414[0]);
	}
	if (does_entity_exist(&(iLocal_414[1])))
	{
		set_object_as_no_longer_needed(iLocal_414[1]);
	}
	if (does_entity_exist(iVar414))
	{
		set_object_as_no_longer_needed(&uLocal_417);
	}
	if (does_entity_exist(iVar415))
	{
		set_object_as_no_longer_needed(&iLocal_418);
	}
	if (_does_scenario_point_exist(&(uLocal_428[0])))
	{
		_delete_scenario_point(&(uLocal_428[0]));
	}
	if (_does_scenario_point_exist(&(uLocal_428[1])))
	{
		_delete_scenario_point(&(uLocal_428[1]));
	}
	if (_does_scenario_point_exist(&(uLocal_428[2])))
	{
		_delete_scenario_point(&(uLocal_428[2]));
	}
	if (_does_scenario_point_exist(&(uLocal_428[3])))
	{
		_delete_scenario_point(&(uLocal_428[3]));
	}
	if (_does_scenario_point_exist(&(uLocal_428[4])))
	{
		_delete_scenario_point(&(uLocal_428[4]));
	}
	if (_does_scenario_point_exist(&(uLocal_428[5])))
	{
		_delete_scenario_point(&(uLocal_428[5]));
	}
	func_178(&uLocal_521, 1);
	func_178(&uLocal_515, 1);
	func_178(&uLocal_516, 1);
	func_178(&uLocal_517, 1);
	func_178(&uLocal_519, 1);
	func_178(&uLocal_518, 1);
	func_178(&uLocal_522, 1);
	func_178(&uLocal_520, 1);
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(true);
	}
	if (_0x927b810e43e99932(&Local_940))
	{
		_0x0a5a4f1979abb40e(&Local_940);
	}
	if (_0x927b810e43e99932(&Local_909))
	{
		_0x0a5a4f1979abb40e(&Local_909);
	}
	if (!is_string_null_or_empty(&Local_909))
	{
		_0x798be43c9393632b(&Local_909);
	}
	if (!is_string_null_or_empty(&Local_940))
	{
		_0x798be43c9393632b(&Local_940);
	}
	_0x4f57397388e1dff8();
	if (_0x5ac0944c156e5f44("gng2_balloon_wreck"))
	{
		_0x527b97c203bb8606("gng2_balloon_wreck");
	}
	return true;
}

bool func_10(int iParam0)
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

void func_11(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_10(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_180(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_181(iVar0);
	*iParam0 = 0;
}

int func_12(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_13(int iParam0, bool bParam1, int iParam2)
{
	if (!func_183(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_184(iParam0) && !func_185(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_186(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_184(iParam0))
	{
		iParam2 = -1;
	}
	if (func_187(iParam0) == 3 || (func_187(iParam0) == 1 && _0x01f4d242765c6b24(func_186(iParam0))))
	{
		func_189(func_188(iParam0), func_186(iParam0), iParam2);
		if ((!func_183(Global_1572864->f_8) && !func_190(0, 1, 0)) && !func_191(&Global_1935630, 32768))
		{
			iVar0 = func_192(iParam0);
			if (iVar0 != -1)
			{
				func_193(0);
			}
			else if (func_188(iParam0) == 8)
			{
				iVar0 = func_194();
				if (iVar0 != -1)
				{
					func_193(0);
				}
			}
		}
	}
	func_195(iParam0, 0);
	if (func_196(0) == iParam0)
	{
		func_40(1);
		func_197(0);
		func_198(1);
	}
	func_199(iParam0, 1);
	func_200(iParam0);
}

void func_14()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_201(0);
	func_202(0);
	func_64(0);
	func_65(0);
	func_203(0);
	func_204(1f);
}

void func_15(bool bParam0)
{
	if (_does_anim_scene_exist(Global_43800))
	{
		if (check_ownership_of_anim_scene(Global_43800))
		{
			_delete_anim_scene(Global_43800);
		}
	}
	Global_43800 = -1;
	StringCopy(&Global_43802, "", 24);
	Global_16 = 0;
	if (bParam0)
	{
		func_205();
	}
	_0xa0cefcea390aab9b(0);
}

void func_16(bool bParam0, int iParam1)
{
	if (func_206())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_207())
		{
			func_113(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_17(char[4] cParam0, bool bParam1)
{
	Var0 = func_186(func_12(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_132(func_33(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_208(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_22(cParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[cParam0->f_607]->f_8), &Var0);
}

void func_18(int iParam0)
{
	Global_36580 = iParam0;
}

int func_19(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_209(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_20()
{
	return Global_1572887->f_12;
}

void func_21(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

int func_22(char[4] cParam0)
{
	return cParam0->f_10783;
}

bool func_23(var uParam0)
{
	return uParam0->f_2501;
}

bool func_24(var uParam0)
{
	return uParam0->f_2500;
}

void func_25(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_210((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_211((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_211((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_211((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_26(float fParam0)
{
	return func_212(*fParam0, 1);
}

void func_27(float fParam0, bool bParam1)
{
	if (bParam1 || !func_26(fParam0))
	{
		func_213(fParam0);
	}
}

bool func_28(char[4] cParam0, bool bParam1)
{
	if (func_8(cParam0, 128) && func_29())
	{
		return true;
	}
	if (func_214(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_31(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_29()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_30(char[4] cParam0)
{
	func_215(!func_6(cParam0, 32), 1);
	func_1(cParam0, 32);
}

bool func_31(char[4] cParam0)
{
	if (((func_33(cParam0) == 5 && iVar1155 >= 2) || func_33(cParam0) == 6) || func_33(cParam0) == 7)
	{
		_disable_first_person_cam_this_frame();
	}
	return true;
}

bool func_32()
{
	return func_183(Global_1572864->f_8);
}

int func_33(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_34(int iParam0)
{
	func_217(&Var0, func_216(iParam0));
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_218(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_201(0);
	func_219(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_210((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_220((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_38(var uParam0)
{
	_datafile_unload(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_39(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_221(iVar0, 4096);
			if (_0xc29996a337bdd099((*Global_1425371)[iVar0]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar0]->f_1, 0);
			}
			iVar0++;
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 <= 4)
		{
			if (_0xc29996a337bdd099((*Global_1425371)[iVar1]->f_1))
			{
				_0xf8f7da13cfbd4532((*Global_1425371)[iVar1]->f_1, 1);
			}
			iVar1++;
		}
		_0x4c05b42a8d937796();
		_0x16b86a49e072aa85();
	}
	if (func_20() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_40(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_71(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_222(Global_1935630, 4194304);
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

void func_41(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_42()
{
	func_223();
	func_224();
	func_225();
	func_226();
}

void func_43()
{
	if (func_227())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_228(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_229();
}

void func_45()
{
	_uilog_clear_cached_objective();
}

void func_46(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 0:
			break;
		case 1:
			break;
		case 31:
			_set_weather_type(-173507739, false, true, false, 0f, false);
			break;
	}
}

void func_47(int iParam0, int iParam1)
{
	func_230(1, iParam0, iParam1);
}

void func_48(int iParam0)
{
	switch (func_20())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_49()
{
	return (func_231() || func_54());
}

void func_50(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_51(var uParam0)
{
	func_232(uParam0);
	func_233(uParam0, 0);
	uParam0->f_1 = 0;
	func_43();
}

void func_52()
{
	iVar12 = 0;
	while (iVar12 < Global_43619)
	{
		*Global_43619[iVar12] = { Var0 };
		iVar12++;
	}
}

void func_53()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_234(iVar0);
		iVar0++;
	}
	func_235();
	func_236();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_237())
	{
		if (func_238(255))
		{
			if (!func_239(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_240(Global_1894899->f_2) && func_241(Global_1894899->f_2))
		{
			func_242(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_243(16);
			}
		}
		else if (func_240(Global_1894899->f_2) && !func_244(Global_1894899->f_2, 2))
		{
			bParam0 = true;
		}
	}
	if (bParam0)
	{
		if (!is_screen_faded_out())
		{
		}
		Global_1894899->f_7 = 0;
		func_245(16);
		func_246();
		if (bVar0)
		{
			func_245(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_247(cParam0->f_5423[iVar0]))
		{
			if (!is_entity_dead(&(cParam0->f_5423[iVar0])))
			{
				if (is_entity_a_ped(&(cParam0->f_5423[iVar0])))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(&(cParam0->f_5423[iVar0])), false, true);
				}
			}
		}
		iVar0++;
	}
	if (func_248(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_249(cParam0->f_5421))
		{
			iVar1 = func_250(cParam0->f_5421, iVar0);
			if (!is_entity_dead(iVar1))
			{
				if (is_entity_a_ped(iVar1))
				{
					clear_ped_tasks_immediately(get_ped_index_from_entity_index(iVar1), false, true);
				}
			}
			iVar0++;
		}
	}
}

void func_57(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_251(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_252(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_253(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_254(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_255(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_256(7);
		}
		else
		{
			func_257(iVar0, 0);
		}
		func_258(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_260(iParam0, 32);
	func_261();
}

void func_60(bool bParam0)
{
	Global_1956584 = bParam0;
	if (bParam0)
	{
		_set_minimap_fow_should_update(false, 0);
	}
	else
	{
		_set_minimap_fow_should_update(true, 0);
	}
}

int func_61(char[4] cParam0)
{
	return cParam0->f_607;
}

void func_62(int iParam0)
{
	Var0 = { func_262(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_263(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_64(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_203(1);
	}
}

void func_65(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_203(0);
	}
}

void func_66(int iParam0)
{
}

void func_67(char[4] cParam0)
{
	func_264(&(cParam0->f_13121));
}

void func_68(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_210((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_211((*uParam1)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_69(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_70(int iParam0)
{
	if (!has_ped_got_weapon(Global_35, -1415022764, 0, false))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_71(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_72(int iParam0)
{
	iVar0 = func_188(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_265(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_266(iVar1))
			{
				if (func_267(iVar1, 4))
				{
					func_268(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_269(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_265(iParam0);
		if (iVar3 == 59)
		{
			func_269(1);
		}
		else if (iVar3 == 61)
		{
			func_269(0);
		}
		else if (iVar3 == 83)
		{
			func_269(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_266(iVar0))
		{
			if (func_267(iVar0, 4))
			{
				if (func_267(iVar0, 16))
				{
					func_270(iVar0, 1);
				}
				if (func_267(iVar0, 8))
				{
					func_271(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_74(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	iVar0 = func_33(cParam0);
	iVar1 = func_162(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_272(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_22(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_273(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_274(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_275(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_276(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
}

void func_76()
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

int func_77()
{
	return Global_1894899->f_2;
}

void func_78(int iParam0, bool bParam1)
{
	if (!func_240(iParam0))
	{
		return;
	}
	bVar0 = func_244(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_277(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_279(iParam0, func_278());
			func_280(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_281(iParam0, 67108864);
		func_279(iParam0, -15);
	}
	func_282(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_283(11);
	}
	else
	{
		func_284(11);
	}
}

void func_80(int iParam0)
{
	if (func_285(iParam0, 0))
	{
		func_286(262144, 5, 0, 1);
		func_287(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_288(101, 7, 1f, 0, 1);
			func_288(89, 7, 1f, 0, 1);
			break;
	}
}

bool func_81()
{
	return Global_1572864->f_15;
}

bool func_82(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_83(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_183(iParam0))
	{
		return;
	}
	if (func_289(iParam0) == 4)
	{
		func_290(iParam0, func_278());
		if (!func_187(iParam0) == 5 && !func_187(iParam0) == 6)
		{
			if (bParam3)
			{
				func_195(iParam0, 6);
			}
			else
			{
				func_195(iParam0, 5);
			}
			func_200(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_40(1);
	}
	iVar0 = func_188(iParam0);
	bVar1 = func_20() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_291(0, 2);
		if (!bVar1 && bParam1)
		{
			func_292();
		}
	}
	else
	{
		func_197(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_293(iParam0);
	}
	else
	{
		Var2 = { func_94(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_82(32768))
		{
			Var4 = { func_94(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_187(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_265(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_265(iParam0)]->f_8), true);
						}
					}
					else if ((func_265(iParam0) != 95 && func_265(iParam0) != 82) && !func_294((*Global_1347702)[func_265(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_265(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_265(iParam0)]->f_8), true);
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
		func_296(func_265(iParam0), iVar6, func_295());
	}
	else if (iVar0 == 8)
	{
		func_298(func_265(iParam0), iVar6, func_295(), func_297());
	}
	if (!func_187(iParam0) == 5 && !func_187(iParam0) == 6)
	{
		iVar9 = func_299(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_300(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_301(func_265(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_302((iVar10 - 20), 0, iVar10);
					iVar11 = func_302((iVar11 - 10), 0, iVar11);
				}
				func_303(1);
				func_304(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_304(45, 0, 1);
				break;
			case 8:
				iVar10 = func_305(func_265(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_302((iVar10 - 20), 0, iVar10);
					iVar11 = func_302((iVar11 - 10), 0, iVar11);
				}
				func_304(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_306(func_265(iParam0)))
				{
					func_307(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_304(120, 0, 1);
				break;
			case 2:
				func_304(120, 0, 1);
				break;
			case 6:
				func_304(func_309(func_308(iParam0)), 0, 1);
				break;
			case 5:
				func_304(120, 0, 1);
				break;
		}
	}
	func_199(iParam0, 1);
	func_290(iParam0, func_278());
	func_200(iParam0);
	if ((!func_187(iParam0) == 0 && bParam1) && func_20() == -1)
	{
		iVar12 = func_192(iParam0);
		if (iVar12 != -1)
		{
			func_193(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_194();
			if (iVar12 != -1)
			{
				func_193(0);
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
				switch (func_265(iParam0))
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
				if (func_266(func_265(iParam0)) && func_294((*Global_1347702)[func_265(iParam0)]->f_12, 4))
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
				if (func_265(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_265(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
		}
	}
	if (!func_187(iParam0) == 5 && !func_187(iParam0) == 6)
	{
		if (bParam3)
		{
			func_195(iParam0, 6);
		}
		else
		{
			func_195(iParam0, 5);
		}
		func_200(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_265(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_310();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_311(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1267972061);
						func_311(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(1619534881);
						func_311(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-755457379);
						func_311(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(1015404643);
						func_311(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1724192342);
						func_311(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(1310680212);
						func_311(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-566881549);
						func_311(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1753730528);
						func_311(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(147796381);
						func_311(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-378547623);
						func_311(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(829545206);
						func_311(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(891318243);
						func_311(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313();
						func_314(967523420);
						func_315();
						func_316();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_317(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_311(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_318(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_318(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_319(304805134, 1, 1);
						if (!func_320((*Global_1347702)[21]->f_15, 1))
						{
							func_83((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_321();
						break;
					case 26:
						func_322();
						break;
					case 17:
						func_323(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_324())
						{
							func_325(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_326(-514575035, -1))
						{
							iVar15 = func_278();
							func_327(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_328(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_324())
						{
							func_325(1529685685);
						}
						break;
					case 34:
						if (func_324())
						{
							func_325(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_329();
						break;
					case 37:
						func_330();
						if (func_331())
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
						func_332();
						break;
					case 43:
						func_333();
						break;
					case 44:
						if (!func_320((*Global_1347702)[82]->f_15, 1))
						{
							func_83((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_320((*Global_1347702)[83]->f_15, 1))
						{
							func_83((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_334();
						break;
					case 59:
						func_335();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_336();
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
						func_337();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_318(451, 0);
						}
						if (!func_338(-1992824800))
						{
							if (func_338(1520110311))
							{
								iVar16 = func_278();
								func_327(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_328(1937177603, iVar16, 1);
							}
						}
						if (func_339(4))
						{
							if (!func_340(684296857, 1, 0))
							{
								iVar17 = func_278();
								func_327(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_328(-1439688706, iVar17, 1);
							}
						}
						func_311(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_311(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_341(89200);
						func_341(2300);
						func_341(2300);
						break;
					case 68:
						func_342();
						break;
					case 76:
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
						func_343();
						func_341(-139100);
						break;
					case 69:
						if (func_320((*Global_1347702)[9]->f_15, 1))
						{
							func_341(-6000);
						}
						break;
					case 70:
						func_341(23400);
						func_341(1900);
						func_341(-15000);
						break;
					case 71:
						func_341(-5500);
						break;
				}
				break;
			case 8:
				switch (func_265(iParam0))
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
						func_344();
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
						func_345();
						break;
					case 66:
						func_346();
						func_347();
						break;
					case 67:
						if (!func_348(6))
						{
							func_349(6);
						}
						if (!func_348(3))
						{
							func_349(3);
						}
						if (func_324())
						{
							func_325(1534638301);
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
						if (func_320((*Global_1835011)[69]->f_1, 1))
						{
							func_350(0);
							func_341(40500);
						}
						else
						{
							func_350(0);
							func_341(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_265(iParam0))
				{
					case 0:
						switch (func_308(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_351(iParam0);
		func_352();
		switch (iVar0)
		{
			case 1:
				switch (func_265(iParam0))
				{
					case 4:
						func_353(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_353(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_353(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_353(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_353(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_353(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_353(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_354(iParam0);
						func_353(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_353(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_353(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_340(-2046502963, 1, 0))
						{
							func_311(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_353(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_353(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_353(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_354(iParam0) == 0)
						{
							func_353(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_353(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_294((*Global_1347702)[func_265(iParam0)]->f_12, 536870912))
				{
					func_355(11, 1);
				}
				switch (func_265(iParam0))
				{
					case 109:
						func_353(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_355(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_353(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_353(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_353(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_353(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_356(0, 10, 11, 2116153146))
				{
					func_353(iParam0, func_354(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_356(0, 7, 11, -379687487))
				{
					func_353(iParam0, func_357(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_356(0, 8, 11, -1386089015))
				{
					func_353(iParam0, func_357(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_356(0, 11, 11, -1952009645))
				{
					func_353(iParam0, func_357(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_356(0, 12, 11, 2065895756))
				{
					func_353(iParam0, func_357(11), 1, 0.5f, 2, 0, 0, 1);
				}
				break;
		}
		if (bParam1)
		{
			if (!func_187(iParam0) == 0)
			{
				if (func_186(iParam0) == 0)
				{
				}
				else if (_0x01f4d242765c6b24(func_186(iParam0)))
				{
					iVar19 = 0;
					if (bParam3)
					{
						iVar19 = 3;
					}
					func_189(func_188(iParam0), func_186(iParam0), iVar19);
					if (bParam4)
					{
						if (iVar0 == 8 && func_265(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_359(func_358(Global_1879514->f_1));
						if (iVar0 == 8 && func_265(iParam0) == 58)
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
						if (func_266(func_265(iParam0)) && func_294((*Global_1347702)[func_265(iParam0)]->f_12, 1))
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
			func_360(bParam2, iVar20);
		}
	}
	func_198(1);
	if ((bVar13 || func_129()) && (func_188(iParam0) == 1 || func_188(iParam0) == 8))
	{
		Global_1879534->f_6 = 1;
		Global_1879534->f_7 = 1;
	}
}

void func_84(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_186(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_189(func_188(iParam0), func_186(iParam0), iVar0);
		if (func_82(32768))
		{
			iVar1 = func_188(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_356(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_361();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_185(iParam0))
	{
		func_13(iParam0, 0, 2);
	}
	else if (func_184(iParam0))
	{
		if (!func_187(iParam0) == 5 && !func_187(iParam0) == 6)
		{
			if (bParam1)
			{
				func_195(iParam0, 6);
			}
			else
			{
				func_195(iParam0, 5);
			}
			func_200(iParam0);
		}
	}
	switch (func_188(iParam0))
	{
		case 1:
			switch (func_265(iParam0))
			{
				case 12:
				case 19:
				case 20:
				case 24:
				case 25:
				case 28:
				case 29:
				case 34:
				case 53:
				case 57:
					Global_1879514->f_12 = 1;
					break;
				case 69:
				case 70:
				case 71:
				case 74:
				case 76:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
		case 8:
			switch (func_265(iParam0))
			{
				case 37:
				case 63:
				case 94:
				case 116:
					Global_1879514->f_12 = 1;
					break;
				case 9:
					Global_1879514->f_14 = 1;
					break;
			}
			break;
	}
}

int func_85(char[4] cParam0)
{
	cVar0 = func_110(cParam0->f_607);
	return get_hash_key(&cVar0);
}

void func_86()
{
	func_91(4112);
	func_90(6);
	vVar2 = { func_362((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_363(vVar2, uVar1, uVar0, 0);
	func_364(vVar2);
	Global_40.f_9.f_15 = func_365(vVar2, 0);
	clear_weather_type_persist();
	set_random_weather_type(false, true);
}

void func_87(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	func_91(32);
	if (iParam0 == 0)
	{
		func_91(16);
	}
	else if (iParam0 == 1)
	{
		func_91(8);
	}
	func_366();
	Global_43889 = 1;
}

void func_88(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_89()
{
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_367(Var10, 0);
}

void func_90(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_91(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_92(int iParam0)
{
	if (!func_183(iParam0))
	{
		return;
	}
	if (iParam0 != func_196(0))
	{
		return;
	}
	if (func_186(iParam0) == 0)
	{
	}
	iVar0 = func_188(iParam0);
	if (func_187(iParam0) == 3)
	{
		if (func_186(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_186(iParam0)))
		{
			if (func_188(iParam0) != 1 && func_188(iParam0) != 8)
			{
				func_189(func_188(iParam0), func_186(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_200(iParam0);
	func_40(1);
	func_197(0);
	func_195(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_303(1);
			func_304(15, 0, 1);
			break;
		case 4:
			func_304(10, 0, 1);
			break;
		case 8:
			func_304(10, 0, 1);
			break;
		case 9:
			func_304(10, 0, 1);
			break;
		case 2:
			func_304(10, 0, 1);
			break;
		case 6:
			func_304(10, 0, 1);
			break;
		case 5:
			func_304(10, 0, 1);
			break;
	}
	func_198(1);
}

void func_93()
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < get_itemset_size(Local_14))
	{
		iVar1 = get_indexed_item_in_itemset(iVar0, Local_14);
		iVar2 = _get_entity_from_item(iVar1);
		if ((does_entity_exist(iVar2) && _0x88ad6cc10d8d35b2(iVar2)) && !_0xa7e51b53309eac97(iVar2))
		{
			delete_entity(&iVar2);
		}
		iVar0++;
	}
	destroy_itemset(Local_14);
}

struct<2> func_94(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_95(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<8> func_96(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_97(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_368(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_369(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_369(&(Global_1347343->f_11), 16384);
	}
	if (func_370() >= 2)
	{
		if (!func_368(Global_1347343->f_11, 16384))
		{
			func_369(&(Global_1347343->f_11), 8);
		}
		func_204(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_222(Global_1935630, 2048);
	func_371(bParam5);
}

void func_98(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_99(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_100(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*cParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_372(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_191(&Global_1935630, 524288))
	{
		func_71(Global_1935630, 524288);
		func_373(cParam0, 67108864);
	}
}

int func_101(var uParam0)
{
	return func_374(&(uParam0->f_7375));
}

bool func_102()
{
	return Global_1572864->f_14;
}

void func_103(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
}

bool func_104()
{
	return Global_1572864->f_13;
}

bool func_105()
{
	return func_375() != -1;
}

int func_106()
{
	return Global_1572864->f_9;
}

void func_107(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	settimera(0);
}

void func_108(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_376(cParam0);
	cParam0->f_634[0] = 58256;
	cParam0->f_634[1] = 58256;
	cParam0->f_637 = 0;
	func_378(cParam0, *uParam1);
	func_379(cParam0);
}

void func_109(char[4] cParam0)
{
	func_381(cParam0, 58689);
	func_383(cParam0, 58768);
	func_384();
	func_385(cParam0, 2807.37f, -1180.57f, 47.38f);
	func_386(cParam0, 20);
	_set_weather_type(433385945, false, true, true, 60f, false);
	_0x3373779baf7caf48("OVERCASTDARK", "OVERCASTDARK_Gang2");
}

char[] func_110(int iParam0)
{
	if (!func_182(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

void func_111()
{
	Var0.f_1 = -1;
	_copy_memory(Global_1879514, &Var0, 20);
}

void func_112(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_113(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_114()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_387(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_115(char[4] cParam0)
{
	switch (cParam0->f_607)
	{
		case 12:
		case 21:
		case 26:
		case 35:
		case 37:
		case 41:
		case 42:
		case 43:
		case 44:
		case 46:
		case 52:
		case 54:
		case 58:
			return false;
	}
	return true;
}

bool func_116(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return func_244(iParam0, 33554432);
}

void func_117(bool bParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(Global_35))
	{
		return;
	}
	iVar0 = create_itemset(true);
	if (_0x7be607daff382fd2(Global_35, iVar0, iParam1) > 0)
	{
		iVar1 = (get_itemset_size(iVar0) - 1);
		while (iVar1 >= 0)
		{
			iVar2 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, iVar0));
			if (!is_entity_dead(iVar2) && is_entity_a_ped(iVar2))
			{
				iVar3 = get_ped_index_from_entity_index(iVar2);
				if (bParam0)
				{
					if (_0x800df3fc913355f3(_0x32a1e3b83d501096(iVar3)))
					{
						_0x7b204f88f6c3d287(_0x32a1e3b83d501096(iVar3));
					}
					else
					{
						delete_ped(&iVar3);
					}
				}
				else
				{
					clear_ped_tasks(iVar3, 0, 0);
					if (bParam2)
					{
						_0xdf94844d474f31e5(iVar3);
					}
				}
			}
			iVar1 = (iVar1 + -1);
		}
	}
	destroy_itemset(iVar0);
}

void func_118(char[4] cParam0)
{
	if (func_20() == 0)
	{
		return;
	}
	switch (cParam0->f_607)
	{
		case 31:
			_set_weather_type(-702816767, false, true, true, 45f, false);
			break;
	}
}

void func_119(int iParam0, bool bParam1)
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

bool func_120(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_121(char[4] cParam0, int iParam1, int iParam2)
{
	return func_388(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
}

bool func_122(int iParam0)
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

void func_123(char[4] cParam0)
{
	if (func_29())
	{
		func_389(&(cParam0->f_7375));
	}
}

void func_124(char[4] cParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_125(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_126(int iParam0)
{
	return func_390(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_391(Param0, Param0.f_3);
}

bool func_128(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

bool func_129()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_392())
	{
		return false;
	}
	if (!func_320((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_320((*Global_1835011)[2]->f_1, 1) && func_320((*Global_1347702)[120]->f_15, 1)) && !func_320((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_320((*Global_1835011)[37]->f_1, 1) && !func_320((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_320((*Global_1835011)[57]->f_1, 1) && !func_320((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_320((*Global_1835011)[26]->f_1, 1) && !func_320((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_320((*Global_1835011)[62]->f_1, 1) && func_320((*Global_1835011)[63]->f_1, 1)) && !func_320((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_320((*Global_1835011)[75]->f_1, 1) && !func_320((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_320((*Global_1835011)[76]->f_1, 1) && !func_320((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_320((*Global_1835011)[40]->f_1, 1) && func_320((*Global_1835011)[41]->f_1, 1)) && !func_320((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_320((*Global_1835011)[62]->f_1, 1) && func_320((*Global_1835011)[63]->f_1, 1)) && !func_320((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_320((*Global_1835011)[65]->f_1, 1) && func_320((*Global_1835011)[66]->f_1, 1)) && !func_320((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_130(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (func_120(cParam0, 33554432))
	{
		return;
	}
	if (func_120(cParam0, 4096))
	{
		return;
	}
	if (func_393(vParam1))
	{
		return;
	}
	if (_0x3ab6c7b0bb0df4b1(Global_35, -1))
	{
		return;
	}
	if (is_screen_faded_in())
	{
		return;
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	if (is_valid_interior(get_interior_at_coords(vParam1)))
	{
		pin_interior_in_memory(get_interior_at_coords(vParam1));
		func_103(cParam0, 8);
	}
	func_103(cParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_213(&(cParam0->f_603));
}

void func_131(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_132(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_394();
	}
	iVar0 = 0;
	while (iVar0 < 28)
	{
		if (iVar0 == iParam0)
		{
			return iVar0;
		}
		if (iVar0 == 26)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_133(char[4] cParam0)
{
	if (_uilog_is_entry_registered(2, func_85(cParam0)))
	{
		_uilog_remove_entry(2, func_85(cParam0));
	}
	if (!_uilog_is_entry_registered(1, func_85(cParam0)))
	{
		func_395(cParam0->f_607);
	}
}

void func_134(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

void func_135(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	func_27(&(cParam0->f_600), 1);
}

bool func_136(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_12;
}

void func_137(char[4] cParam0)
{
	func_396(&(cParam0->f_638));
	func_397(&(cParam0->f_819));
	func_398(&(cParam0->f_1020));
	func_399(&(cParam0->f_1081));
	func_400(&(cParam0->f_1126));
	func_401(&(cParam0->f_5147));
	func_402(&(cParam0->f_1124));
	func_403(&(cParam0->f_5188));
	func_404(&(cParam0->f_5239));
	func_405(&(cParam0->f_5249));
	func_406(&(cParam0->f_5265));
	func_407(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_408(cParam0, 347599949, 67108863);
	func_408(cParam0, 1167462574, 67108863);
	func_408(cParam0, 1836621877, 67108863);
	func_408(cParam0, 2030804811, 67108863);
	func_408(cParam0, 96930969, 67108863);
}

void func_139(char[4] cParam0)
{
	func_408(cParam0, -663641338, 1);
	func_408(cParam0, func_409(2), 67108863);
	func_408(cParam0, func_409(3), 67108863);
	func_408(cParam0, 2024948086, 3);
	func_408(cParam0, -1216485179, 1);
	func_408(cParam0, 851401507, 1);
	func_408(cParam0, 1843407141, 1);
	func_408(cParam0, -1151041406, 3);
	func_408(cParam0, 965516916, 1);
	func_408(cParam0, iVar787, 6);
	func_408(cParam0, -956670977, 14);
	func_408(cParam0, func_409(5), 14);
	func_408(cParam0, 944531097, 14);
	func_408(cParam0, 1023229711, 96);
	func_408(cParam0, -526947582, 192);
	func_408(cParam0, 383002840, 8);
	func_408(cParam0, 347599949, 496);
	func_408(cParam0, -1038436471, 496);
	func_408(cParam0, func_410(1), 67108863);
	func_408(cParam0, -772157398, 256);
	func_411(cParam0, "MINI_GAMES@STORY@GNG2@BALLOON_CONTROL@ARTHUR", 14);
	func_411(cParam0, "MINI_GAMES@STORY@GNG2@BALLOON_CONTROL@PERFORMANCE_LOOK_AROUND", 6);
	func_411(cParam0, "MINI_GAMES@STORY@GNG2@BALLOON_CONTROL@PERFORMANCE_FRANTIC", 8);
	func_411(cParam0, cVar1003, 192);
	func_411(cParam0, cVar1004, 192);
	func_411(cParam0, cVar1005, 192);
	func_411(cParam0, "MINI_GAMES@STORY@GNG2@OPERATOR_SHOT_BALLOON_CONTROL@ARTHUR", 224);
	func_412(cParam0, "script@story@gng2@leadin@mcs1@balloonoperator", &uLocal_441, 1, 0, "pl_leadin", 0, 1);
	func_412(cParam0, "script@story@GNG2@IG@INT_WalknTalk@INT_WalknTalk", &uLocal_446, 1, 0, "pbl_INT_WalknTalk", 0, 1);
	func_412(cParam0, "script@story@gng2@leadout@mcs1@operator", &uLocal_442, 2, 0, "pl_operator_leadout", 0, 1);
	func_412(cParam0, "script@story@gng2@leadout@mcs1@arthur", &uLocal_443, 2, 0, "pl_arthur_start", 0, 1);
	func_412(cParam0, "script@story@gng2@leadout@mcs1@sadie", &uLocal_444, 2, 64, "pl_sadie_leadout", 0, 1);
	func_412(cParam0, "script@story@gng2@leadout@mcs1@sand_bags", &uLocal_445, 2, 0, "pl_sandbags_loop", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig13_bullard_flight@ig13_bullard_flight", &uLocal_447, 6, 0, "pbl_loop_idle_01", 0, 1);
	func_412(cParam0, "script@story@GNG2@IG@IG_3_Arrive_Prison_Island@ig_3_Arrive_Prison_Island", &uLocal_448, 4, 0, "pbl_arrive_prison", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig_12_bullard_controls@ig_12_bullard_controls", &uLocal_449, 4, 0, "pbl_calm_loop", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig_6_john_prisoner_idle@ig_6_john_prisoner_idle_guard", &uLocal_450, 4, 0, "pbl_Idle_A", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig_6_john_prisoner_idle@ig_6_john_prisoner_idle_guard", &uLocal_451, 4, 0, "pbl_Idle_A", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig_6_john_prisoner_idle@ig_6_john_prisoner_idle_guard", &uLocal_452, 4, 0, "pbl_Idle_A", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig_6_john_prisoner_idle@ig_6_john_prisoner_idle_john", &uLocal_453, 12, 0, "pbl_Idle_A", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig11_leave_prison_island@ig11_leave_prison_island", &uLocal_454, 8, 0, "pbl_spotted_player_to_burner", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig11_leave_prison_island@ig11_leave_prison_island", &uLocal_455, 8, 0, "pbl_cower_loop", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig_12_bullard_controls@ig_12_bullard_controls", &uLocal_456, 48, 0, "pbl_Scared_loop", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig_9_balloon_operator_shot@ig_9_balloon_operator_shot_operator", &uLocal_457, 32, 0, "pbl_Operator_Shot_Right", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig_9_balloon_operator_shot@ig_9_balloon_operator_shot_arthur", &uLocal_458, 96, 0, "pbl_Arthur_React_Right", 0, 1);
	func_412(cParam0, "script@story@gng2@ig@ig10_sadie_climb_balloon_rope@ig_10_sadie_climb_balloon_rope", &uLocal_459, 64, 0, "pbl_Action", 0, 1);
	func_413(cParam0, -1207658444, 512);
	func_414(cParam0, "gang2_ExitSaloon", 1, 2, -1);
	func_414(cParam0, cVar968, 1, 2, -1);
	func_414(cParam0, cVar969, 112, 2, -1);
	func_414(cParam0, "gang2_Town1", 112, 2, -1);
	func_414(cParam0, "gang2_Town2", 112, 2, -1);
	func_414(cParam0, "gang2_logs1", 112, 2, -1);
	func_414(cParam0, "gang2_logs2", 112, 2, -1);
	func_414(cParam0, "gang2_ForestRoadA1", 112, 2, -1);
	func_414(cParam0, "gang2_ForestRoadA2", 112, 2, -1);
	func_414(cParam0, "gang2_ForestRoadB1", 112, 2, -1);
	func_414(cParam0, "gang2_ForestRoadB2", 112, 2, -1);
	func_414(cParam0, "gang2_Slope1", 112, 2, -1);
	func_414(cParam0, "gang2_Slope2", 112, 2, -1);
	func_414(cParam0, "gang2_Tracks1", 112, 2, -1);
	func_414(cParam0, "gang2_Tracks2", 112, 2, -1);
	func_414(cParam0, "gang2_Final1", 112, 2, -1);
	func_414(cParam0, "gang2_Final2", 112, 2, -1);
	func_414(cParam0, "gang2_AnnesburgToSadiePickupLeft", 112, 2, -1);
	func_414(cParam0, "gang2_AnnesburgToSadiePickupMiddle", 112, 2, -1);
	func_414(cParam0, "gang2_AnnesburgToSadiePickupFarRight", 112, 2, -1);
	func_414(cParam0, "gng2BallA", 8, 1, 1);
	func_414(cParam0, "gng2BallB", 8, 1, 2);
	func_414(cParam0, "gng2BallC", 8, 1, 3);
	func_415(cParam0, 67108863);
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_416(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
	func_103(cParam0, 2);
}

void func_142(char[4] cParam0, int iParam1)
{
	func_417(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_262(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_263(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_418(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_248(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_419() };
	}
}

void func_147(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_27(&(cParam0->f_603), 1);
	}
}

void func_148(char[4] cParam0)
{
}

void func_149(char[4] cParam0, float fParam1)
{
	func_420(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_421(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_422(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_372(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_152()
{
	_0x15abd5004cad2d99(0);
	_0x785177e4d57d7389(player_id(), 1352191066, 3, 3, 1);
	_0x785177e4d57d7389(player_id(), 1171995096, 4, 0, -1);
}

void func_153(bool bParam0, bool bParam1)
{
	if (_0x450769c833d58844() && (!bParam0 || !is_cinematic_cam_rendering()))
	{
		_0xc9caeaeec1256e54(-1679307491);
		if (!bParam1)
		{
			disable_control_action(2, 1287709438, false);
			if (Global_1935689->f_1 || &Global_1935689 == 1)
			{
				Global_1935689 = 2;
			}
		}
	}
}

int func_154(char[4] cParam0)
{
	return *cParam0;
}

Vector3 func_155(int iParam0)
{
	if (!func_182(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_156(char[4] cParam0, bool bParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 134217728))
	{
		func_139(cParam0);
		func_140(cParam0, func_33(cParam0), 134217728);
	}
	if (bParam1 && !func_121(cParam0, func_35(cParam0), 536870912))
	{
		if (func_423(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_424(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_423(cParam0, func_33(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_99(cParam0, 8192);
	}
}

int func_157(char[4] cParam0)
{
	return 1;
}

bool func_158(char[4] cParam0)
{
	if (func_425(cParam0) < 1)
	{
		func_426(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_427(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!func_120(cParam0, 4) && !func_105()) && !func_128(cParam0, 3))
	{
		if (!func_120(cParam0, 32))
		{
			if (func_20() == 0)
			{
				func_103(cParam0, 32);
			}
			else
			{
				func_428(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_429(cParam0);
		}
	}
	switch (func_425(cParam0))
	{
		case -1:
		case 0:
			func_430(cParam0, 1);
			break;
		case 1:
			if (func_431(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_430(cParam0, 2);
				}
				else
				{
					func_430(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_432(cParam0))
			{
				func_430(cParam0, 3);
			}
			break;
		case 3:
			if (func_433(cParam0))
			{
				func_430(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

var func_159(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_160(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_161(char[4] cParam0)
{
	if (func_33(cParam0) == 26)
	{
		func_434(cParam0, 0);
		return true;
	}
	if (func_435(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_434(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_435(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

void func_163(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_260(iParam0, 64);
	func_261();
}

int func_164(int iParam0)
{
	if (!func_436(iParam0))
	{
		return 0;
	}
	if (!func_438(func_437(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_439(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_439(iParam0));
	return 1;
}

void func_165(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(*iParam0))
	{
		return;
	}
	if (_0xa7e51b53309eac97(*iParam0))
	{
		return;
	}
	if (!does_entity_belong_to_this_script(*iParam0, false))
	{
		return;
	}
	if (!is_ped_injured(*iParam0))
	{
		set_entity_load_collision_flag(*iParam0, 0);
		if (!bParam3)
		{
			clear_ped_secondary_task(*iParam0);
		}
		set_ped_keep_task(*iParam0, bParam1);
		if (bParam2)
		{
			set_blocking_of_non_temporary_events(*iParam0, false);
		}
	}
	set_ped_as_no_longer_needed(iParam0);
}

void func_166(int iParam0, char[4] cParam1, bool bParam2)
{
	iVar14 = 0;
	while (iVar14 != 10)
	{
		iVar14 = func_440(iParam0, iVar14);
		if (iVar14 != 10)
		{
			func_441(iVar14, -1, &Var0);
			if (Var0.f_6 != -1)
			{
				if (!func_442(32768, Var0.f_13))
				{
					func_443(cParam1, &(iLocal_315[iVar14]), 0);
					func_252(cParam1, Var0.f_6, &(iLocal_315[iVar14]), 1, 0, 0, 0);
				}
				else
				{
					func_444(&(iLocal_315[iVar14]), Var0.f_6, 1, 0, 0);
					func_445(Var0.f_6);
				}
			}
			else
			{
				if (func_172(&(iLocal_315[iVar14]), 0))
				{
					set_blocking_of_non_temporary_events(&(iLocal_315[iVar14]), false);
				}
				if (does_entity_exist(&(iLocal_315[iVar14])) && is_entity_a_mission_entity(&(iLocal_315[iVar14])))
				{
					func_446(iLocal_315[iVar14], bParam2);
				}
			}
			iLocal_315[iVar14] = 0;
			func_447(iVar14, 0);
		}
	}
}

int func_167(int iParam0)
{
	return (-iParam0 - 1);
}

void func_168(int iParam0, bool bParam1)
{
	iVar0 = 0 + 1;
	while (iVar0 <= (2 - 1))
	{
		iVar1 = iVar0;
		if (func_448(iVar1, iParam0))
		{
			func_174(iLocal_378[iVar1], bParam1);
			func_449(iVar1, 0);
		}
		iVar0++;
	}
}

void func_169(var uParam0, bool bParam1)
{
	iVar0 = 0 + 1;
	while (iVar0 <= (2 - 1))
	{
		iVar1 = iVar0;
		if (func_450(iVar1, uParam0))
		{
			if (bParam1)
			{
				set_object_as_no_longer_needed(iLocal_381[iVar1]);
			}
			else
			{
				delete_object(iLocal_381[iVar1]);
			}
		}
		iVar0++;
	}
}

void func_170(struct<2> Param0)
{
	if (!func_248(Param0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < func_249(Param0))
	{
		iVar1 = func_451(Param0, iVar0);
		if (does_entity_exist(iVar1))
		{
			if (!is_entity_dead(iVar1))
			{
				set_entity_as_no_longer_needed(&iVar1);
			}
		}
		iVar0++;
	}
}

void func_171(int iParam0)
{
	if (_is_imap_active(iParam0))
	{
		_remove_imap(iParam0);
	}
}

bool func_172(int iParam0, int iParam1)
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
	if (func_388(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_388(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_388(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_388(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_173()
{
	if (does_entity_exist(&(iLocal_378[1])))
	{
		set_vehicle_is_considered_by_player(&(iLocal_378[1]), true);
	}
	set_ped_config_flag(Global_35, 15, false);
}

void func_174(int* iParam0, bool bParam1)
{
	if (!does_entity_exist(*iParam0))
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
	if (bParam1)
	{
		set_vehicle_as_no_longer_needed(iParam0);
	}
	else
	{
		func_452(iParam0);
		delete_vehicle(iParam0);
	}
}

void func_175(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_a_mission_entity(iParam0))
	{
		set_entity_as_mission_entity(iParam0, true, false);
	}
	if (!does_entity_belong_to_this_script(iParam0, false))
	{
		return;
	}
	if (bParam1)
	{
		set_mission_train_as_no_longer_needed(&iParam0, false);
	}
	else
	{
		delete_mission_train(&iParam0);
	}
}

void func_176()
{
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = iVar0;
		func_453(iVar1);
		iVar0++;
	}
}

void func_177()
{
	func_454();
	if (_does_volume_exist(&(uLocal_487[4])))
	{
		_0xd17672447692478e(&(uLocal_487[4]), 0);
		_0x74c2b3dc0b294102(&(uLocal_487[4]));
		_0xa1cfb35069d23c23(&(uLocal_487[4]));
	}
	if (_does_volume_exist(&(uLocal_487[0])))
	{
		_0xd17672447692478e(&(uLocal_487[0]), 0);
		_0x74c2b3dc0b294102(&(uLocal_487[0]));
		_0xa1cfb35069d23c23(&(uLocal_487[0]));
	}
	func_455(&uLocal_485, &(uLocal_487[3]), 0);
	func_456(&(uLocal_487[0]));
	func_457(&(uLocal_487[19]));
	func_456(&(uLocal_487[20]));
	func_457(&(uLocal_487[20]));
	func_457(&(uLocal_487[0]));
	func_457(&(uLocal_487[3]));
	func_457(&(uLocal_487[4]));
	func_457(&(uLocal_487[5]));
	func_457(&(uLocal_487[6]));
	func_457(&(uLocal_487[7]));
	func_457(&(uLocal_487[8]));
	func_457(&(uLocal_487[9]));
	func_457(&(uLocal_487[10]));
	func_457(&(uLocal_487[18]));
	func_457(&(uLocal_487[11]));
	func_457(&(uLocal_487[12]));
	func_457(&(uLocal_487[13]));
	func_457(&(uLocal_487[14]));
	func_457(&(uLocal_487[15]));
	func_457(&(uLocal_487[16]));
	func_457(&(uLocal_487[17]));
	func_458();
}

void func_178(var uParam0, int iParam1)
{
	if (func_459(uParam0))
	{
		_0x9cf1836c03fb67a2(uParam0, iParam1);
	}
}

void func_179()
{
	func_460(2);
	func_460(1);
}

int func_180(int iParam0)
{
	return iParam0;
}

void func_181(int iParam0)
{
	if (!func_461(iParam0))
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

bool func_182(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_183(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_184(int iParam0)
{
	iVar0 = func_289(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_185(int iParam0)
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
		iVar0 = func_187(iParam0);
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

int func_186(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_187(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_462(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_188(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	return func_464(func_463(iParam0));
}

void func_189(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_20() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_190(int iParam0, bool bParam1, bool bParam2)
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
		if (func_465())
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
		iVar0 = func_265(&(Global_1898164->f_1[0]));
		if (func_266(iVar0) && func_294((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_183(&(Global_1898164->f_1[0])))
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

bool func_191(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_192(int iParam0)
{
	switch (func_188(iParam0))
	{
		case 1:
			iVar0 = func_265(iParam0);
			return func_466(iVar0);
		case 8:
			iVar1 = func_265(iParam0);
			if (func_294((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_467(iVar1);
			}
			break;
	}
	return -1;
}

void func_193(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_20() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_468(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_469();
		Global_1898077->f_9 = func_470(Global_1894899->f_2);
		func_471(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_194()
{
	if (!func_320((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_320((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_320((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_320((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_320((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_320((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_320((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_195(int iParam0, int iParam1)
{
	if (!func_183(iParam0))
	{
		return;
	}
	func_472(iParam0, iParam1);
}

int func_196(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_197(bool bParam0)
{
	if (!bParam0 && func_473(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_198(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_199(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (func_196(0) != iParam0)
	{
		return;
	}
	if (func_474(iParam0))
	{
		if (bParam1)
		{
			func_475(-525676072);
		}
		else
		{
			func_476(-525676072);
		}
	}
}

int func_200(int iParam0)
{
	return func_478(func_477(iParam0));
}

void func_201(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_202(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_203(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_204(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_205()
{
	if (func_10(Global_43801))
	{
		func_11(&Global_43801, 0, 0);
	}
}

bool func_206()
{
	return func_479(_0xc17f69e1418cd11f(3));
}

bool func_207()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_208(int iParam0)
{
	iParam0 = func_259(iParam0);
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

int func_209(int iParam0, int iParam1)
{
	if (!func_480(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_481(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_210(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_211(char* sParam0, bool bParam1)
{
	if (func_210(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_482(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_482(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_482(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_482(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_482(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_482(sParam0, 1);
		return true;
	}
	func_482(sParam0, 1);
	return false;
}

bool func_212(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_213(float fParam0)
{
	func_483(fParam0, 0f);
}

int func_214(float fParam0)
{
	if (!func_26(fParam0))
	{
		return round((fParam0->f_1 * 1000f));
	}
	if (func_484(fParam0))
	{
		return round((fParam0->f_2 * 1000f));
	}
	return (func_485() - round((fParam0->f_1 * 1000f)));
}

void func_215(bool bParam0, bool bParam1)
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
		func_486(0);
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

struct<4> func_216(int iParam0)
{
	if (iParam0 == iVar293)
	{
		func_487(&Var0, 2796.61f, -1177.91f, 46.65f, -143.31f);
	}
	else if (iParam0 == iVar294)
	{
		func_487(&Var0, 2131.12f, -954.77f, 40.66f, -45.82f);
	}
	else if (iParam0 == iVar295)
	{
		func_487(&Var0, 3410.746f, -25.4598f, 41.4789f, 118.0844f);
	}
	else if (iParam0 == iVar296)
	{
		func_487(&Var0, 3450.792f, 271.1443f, 42.8204f, 35.8845f);
	}
	else if (iParam0 == iVar297)
	{
		func_487(&Var0, 2974.994f, 1278.449f, 41.6395f, 64.0336f);
	}
	else if (iParam0 == iVar298)
	{
		func_487(&Var0, 2913.66f, 742.78f, 51.12f, 171.47f);
	}
	else if (iParam0 == iVar299)
	{
		func_487(&Var0, 2883.807f, 619.1036f, 56.4192f, 153.7296f);
	}
	else if (iParam0 == iVar300)
	{
		func_487(&Var0, 2732.66f, 297.7832f, 55.1379f, 132.0201f);
	}
	else if (iParam0 == iVar301)
	{
		Var0 = { func_488(0, 1) };
	}
	else if (iParam0 == iVar302)
	{
		func_487(&Var0, 2494.794f, 105.9817f, 56.4676f, 281.1747f);
	}
	return Var0;
}

void func_217(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

int func_218(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_219(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_188(iParam0) == 1)
	{
		cVar0 = func_110(func_489(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_188(iParam0) == 8)
	{
		cVar0 = func_491(func_490(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_492(1, 1);
	func_493(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_204(1f);
}

void func_220(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_482(sParam0, 2);
}

void func_221(int iParam0, int iParam1)
{
	if (!func_494(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_222(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_223()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_224()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_225()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_226()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_227()
{
	return func_495(get_id_of_this_thread());
}

void func_228(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_496(bParam0);
}

void func_229()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_230(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_231()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_232(var uParam0)
{
	Var1.f_15 = 1;
	Var17 = -1;
	Var17.f_2 = 1;
	Var17.f_12 = 1065353216;
	Var17.f_15 = 1065353216;
	Var17.f_16 = 1;
	Var86.f_20 = -1;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		uParam0->f_3[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_849 = { Var1 };
	StringCopy(&(uParam0->f_849), "", 32);
	iVar0 = 0;
	while (iVar0 < uParam0->f_865)
	{
		*uParam0->f_865[iVar0] = { Var17 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_1912)
	{
		*uParam0->f_1912[iVar0] = { Var76 };
		iVar0++;
	}
	uParam0->f_2073 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_1406)
	{
		*uParam0->f_1406[iVar0] = { Var35 };
		*uParam0->f_1735[iVar0] = { Var86 };
		iVar0++;
	}
	uParam0->f_2074 = -1;
	uParam0->f_2155 = { Global_36 };
	uParam0->f_2158 = 0;
	uParam0->f_2159 = 0;
	uParam0->f_2078 = -1;
	uParam0->f_2079 = -1f;
	uParam0->f_2054 = 0;
	uParam0->f_2056 = 0;
	uParam0->f_2056.f_1 = 0;
	uParam0->f_2293 = 0;
	if (_0x927b810e43e99932(&(uParam0->f_2082)))
	{
		_0x0a5a4f1979abb40e(&(uParam0->f_2082));
	}
}

void func_233(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_234(int iParam0)
{
	if (!func_497(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_235()
{
	func_498(64);
}

void func_236()
{
	Global_1310750->f_16072 = 0;
}

bool func_237()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_238(int iParam0)
{
	return func_239(23, iParam0);
}

bool func_239(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_499(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_500())
	{
		return func_499(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_499(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_240(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_241(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return func_244(iParam0, 8);
}

void func_242(int iParam0, int iParam1)
{
	if (!func_240(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_243(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_244(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_245(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_246()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_244(iVar1, 1))
		{
			if (does_script_exist(&((*Global_1888801)[iVar1]->f_26)))
			{
				set_script_as_no_longer_needed(&((*Global_1888801)[iVar1]->f_26));
			}
		}
		if ((*Global_1888801)[iVar1]->f_9 != 0)
		{
			if (is_thread_active((*Global_1888801)[iVar1]->f_9, false))
			{
				if (func_20() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_244(iVar1, 2))
			{
				if (func_20() == -1)
				{
					force_cleanup_for_all_threads_with_this_name(&((*Global_1888801)[iVar1]->f_26), 523);
				}
				else
				{
					_0x7423f7835770f619(get_hash_key(&((*Global_1888801)[iVar1]->f_26)));
				}
			}
			if (!_does_thread_exist((*Global_1888801)[iVar1]->f_9))
			{
				(*Global_1888801)[iVar1]->f_9 = 0;
				func_281(iVar1, 11);
			}
			else
			{
				bVar0 = true;
			}
		}
		iVar1++;
	}
	return !bVar0;
}

bool func_247(var uParam0)
{
	if (func_501(uParam0, 1) || func_501(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_248(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_249(struct<2> Param0)
{
	if (!func_248(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_250(struct<2> Param0, int iParam2)
{
	if (!func_248(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_251(int iParam0)
{
	if (!func_502(iParam0))
	{
		return false;
	}
	if (!func_503(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_252(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_502(iParam1))
	{
		return;
	}
	if (!func_251(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_22(cParam0) != 0 && func_154(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(iParam2))
	{
		func_504(cParam0, iParam2);
		func_505(iParam2);
	}
	func_506(iParam1);
	func_507(iParam1, 0);
	func_508(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_253(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_254(int iParam0)
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

int func_255(int iParam0)
{
	iParam0 = func_259(iParam0);
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

void func_256(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_509(iParam0);
	if (func_510(iParam0))
	{
		if (func_255(iParam0) != iVar0)
		{
			return;
		}
	}
	func_511(iParam0);
	func_512(iParam0);
	iVar1 = func_208(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (!is_entity_dead(iVar1) && !is_ped_injured(iVar1))
		{
		}
		if (!_0x88ad6cc10d8d35b2(iVar1))
		{
			set_entity_as_mission_entity(iVar1, true, true);
		}
		iVar2 = get_entity_model(iVar1);
		if (_0xaa9f048dcf69b6dc(iVar2))
		{
			if (!func_513(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_514(iParam0);
	}
}

void func_257(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_515(iParam0))
	{
		return;
	}
	iVar0 = func_254(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_509(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_255(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_510(iVar0))
		{
			return;
		}
	}
	func_516(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_258(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_259(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_260(int iParam0, int iParam1)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	(*Global_1900383)[iParam0]->f_24 = ((*Global_1900383)[iParam0]->f_24 - ((*Global_1900383)[iParam0]->f_24 && iParam1));
}

void func_261()
{
	if (func_517(0))
	{
		func_518(0);
	}
	if (func_517(1))
	{
		func_518(1);
	}
	if (func_517(5))
	{
		func_518(5);
	}
	if (func_517(6))
	{
		func_511(6);
	}
}

struct<2> func_262(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_263(int iParam0)
{
	Var0 = { func_262(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_264(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_265(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_519(func_463(iParam0));
}

bool func_266(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_267(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_268(int iParam0, bool bParam1)
{
	iVar0 = func_520(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_521(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_521(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_521(iParam0)))
			{
				_uilog_remove_entry(2, func_521(iParam0));
			}
		}
	}
	func_522(iParam0, 4);
	func_522(iParam0, 8);
	func_522(iParam0, 16);
}

void func_269(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_266(iVar0))
		{
			if (func_267(iVar0, 4))
			{
				func_270(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_270(int iParam0, bool bParam1)
{
	if (!func_267(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_520(iParam0), func_521(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_520(iParam0), func_521(iParam0), 2, "");
		func_523(iParam0, 16);
	}
	else
	{
		if (func_267(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_520(iParam0), func_521(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_520(iParam0), func_521(iParam0), 0, "");
		}
		func_522(iParam0, 16);
	}
}

void func_271(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_267(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_520(iParam0), func_521(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_267(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_520(iParam0), func_521(iParam0), 1, "");
		}
		func_523(iParam0, 8);
	}
	else
	{
		if (func_267(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_520(iParam0), func_521(iParam0), 0, "");
		}
		func_522(iParam0, 8);
	}
}

int func_272(char[4] cParam0)
{
	if (func_120(cParam0, 8388608))
	{
		return 2;
	}
	if (func_120(cParam0, 4194304))
	{
		return 4;
	}
	if (func_120(cParam0, 4))
	{
		return 1;
	}
	if (func_128(cParam0, 1) && func_82(32768))
	{
		return 3;
	}
	return 0;
}

void func_273(int iParam0, int iParam1)
{
	if (func_517(0))
	{
		if (func_524(0))
		{
			func_525(0);
		}
	}
	if (func_517(1))
	{
		if (func_524(1))
		{
			func_525(1);
		}
	}
}

void func_274(char[4] cParam0)
{
	if (func_120(cParam0, 1))
	{
		return;
	}
	if (is_entity_dead(cParam0->f_5411))
	{
		if (func_120(cParam0, 16))
		{
			func_58(cParam0, 0);
		}
		if (func_427(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_275(char[4] cParam0)
{
	return false;
	switch (cParam0->f_607)
	{
		case 11:
		case 12:
			return true;
	}
	return false;
}

void func_276(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_526(iParam0, sParam4, iParam5);
	}
	func_527(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_277(int iParam0)
{
	if (!func_240(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_278()
{
	return &Global_1899515;
}

void func_279(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_280(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (Global_23118[iParam0] || iParam1);
	}
	else
	{
		Global_1058888->f_40615[iParam0] = (Global_1058888->f_40615[iParam0] || iParam1);
	}
}

void func_281(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_282(int iParam0)
{
	if (!func_240(iParam0))
	{
		return;
	}
	if (func_528(iParam0))
	{
		func_529(iParam0);
	}
	else
	{
		func_530(iParam0);
	}
}

int func_283(int iParam0)
{
	if (func_531(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_284(int iParam0)
{
	if (func_532(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 2:
			return iParam1;
		case 3:
			return iParam1;
		case 11:
		case 12:
		case 13:
		case 14:
			return true;
		case 53:
			return true;
		case 24:
			return iParam1;
		case 23:
			return iParam1;
		case 21:
			return iParam1;
		case 26:
			return iParam1;
		case 35:
			return true;
		case 34:
			return iParam1;
		case 32:
			return iParam1;
		case 29:
			return true;
		case 31:
			return true;
		case 37:
			return iParam1;
		case 39:
			return iParam1;
		case 42:
			return iParam1;
		case 43:
			return iParam1;
		case 44:
			return iParam1;
		case 46:
			return iParam1;
		case 54:
			return true;
		case 50:
			return true;
		case 51:
			return iParam1;
		case 52:
			return true;
		case 49:
			return true;
		case 58:
			return iParam1;
		case 57:
			return true;
		case 59:
			return iParam1;
		default:
			break;
	}
	return false;
}

void func_286(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_533(Global_1310750[iVar0], iParam0))
		{
			if (!func_534(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_535(iVar0) < func_536(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_288(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_287(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_537();
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

void func_288(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_538(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_289(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_187(iParam0);
}

void func_290(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_291(bool bParam0, int iParam1)
{
	if (!bParam0 && func_473(373691918))
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
	func_197(bParam0);
	return 1;
}

void func_292()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_502(iVar17))
		{
			iVar18 = func_539(iVar17);
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
	func_540(&(Global_1359489->f_55));
	if (func_541(1777191912, 1))
	{
		func_542(1777191912, 1, 0);
	}
}

void func_293(int iParam0)
{
	if (!func_183(iParam0))
	{
		return;
	}
	func_544(iParam0, (func_543(iParam0) + shift_left(1, 16)));
}

bool func_294(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_295()
{
	return func_545() > 0;
}

void func_296(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_546(-1032423150, iParam1);
			break;
		case 18:
			func_546(294066959, iParam1);
			func_546(-1925639563, iParam1);
			func_546(-378582304, iParam1);
			func_546(-338306437, iParam1);
			break;
		case 20:
			func_546(437270255, iParam1);
			break;
		case 2:
			func_546(-304000413, iParam1);
			func_546(-533612796, iParam1);
			func_546(48036954, iParam1);
			break;
		case 23:
			func_546(193108691, iParam1);
			func_546(491732588, iParam1);
			func_546(671962088, iParam1);
			func_547(1);
			break;
		case 16:
			func_546(-1836056650, iParam1);
			func_546(-754657922, iParam1);
			func_546(-1752355838, iParam1);
			func_546(-1375324510, iParam1);
			break;
		case 59:
			func_546(-514392105, iParam1);
			func_546(-822060246, iParam1);
			if (func_548(146))
			{
				func_546(1372748575, iParam1);
			}
			func_547(1);
			break;
		case 76:
			func_546(1991352213, iParam1);
			if (func_549() == 0)
			{
				func_546(1852488616, iParam1);
			}
			else
			{
				func_546(-9866350, iParam1);
			}
			break;
		case 44:
			func_546(863852599, iParam1);
			func_546(1228374935, iParam1);
			func_546(1517889050, iParam1);
			func_546(830657578, iParam1);
			func_546(1901354958, iParam1);
			break;
		case 46:
			func_546(-582805654, iParam1);
			func_546(250378940, iParam1);
			func_546(-2143265426, iParam1);
			break;
		case 17:
			func_546(-941494139, iParam1);
			func_546(1641489521, iParam1);
			break;
		case 19:
			func_546(-1829423531, iParam1);
			func_546(-1590504752, iParam1);
			func_546(1357221321, iParam1);
			break;
		case 21:
			func_546(-1037992610, iParam1);
			func_546(-1286414399, iParam1);
			func_547(0);
			break;
		case 15:
			func_546(-1014460309, iParam1);
			func_546(-1030502825, iParam1);
			break;
		case 33:
			func_546(479388090, iParam1);
			func_546(-1396342239, iParam1);
			func_546(-619618632, iParam1);
			break;
		case 34:
			func_546(1193561641, iParam1);
			break;
		case 64:
			func_546(1363960851, iParam1);
			break;
		case 60:
			func_546(-1232453926, iParam1);
			func_546(-882833584, iParam1);
			break;
		case 73:
			func_546(2023205767, iParam1);
			break;
		case 74:
			func_546(-2135286513, iParam1);
			if (func_549() == 0)
			{
				func_546(33799444, iParam1);
			}
			else
			{
				func_546(-161343203, iParam1);
			}
			break;
		case 8:
			func_546(841639693, iParam1);
			func_546(358952323, iParam1);
			break;
		case 36:
			func_546(852538149, iParam1);
			func_546(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_546(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_546(1116039310, iParam1);
			}
			break;
		case 27:
			func_546(107633428, iParam1);
			func_546(335902282, iParam1);
			func_546(575673055, iParam1);
			func_546(-425944207, iParam1);
			break;
		case 28:
			func_546(-1941530250, iParam1);
			func_546(1399269304, iParam1);
			func_546(1839684664, iParam1);
			func_546(923168503, iParam1);
			func_546(-1485078322, iParam1);
			break;
		case 29:
			func_546(574995900, iParam1);
			func_546(-1691275407, iParam1);
			func_546(-1725307861, iParam1);
			break;
		case 31:
			func_546(-2108383238, iParam1);
			func_546(-1321828931, iParam1);
			func_546(-1632118592, iParam1);
			func_546(334938948, iParam1);
			break;
		case 4:
			func_546(115823701, iParam1);
			func_546(-1896939736, iParam1);
			func_546(-1830746356, iParam1);
			func_546(-1235169781, iParam1);
			func_547(0);
			break;
		case 6:
			func_546(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_546(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_546(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_546(-384176140, iParam1);
			}
			break;
		case 25:
			func_546(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_546(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_546(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_546(-1374849484, iParam1);
			}
			break;
		case 48:
			func_546(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_546(217772674, iParam1);
			}
			else
			{
				func_546(2071798160, iParam1);
			}
			if (func_550(51))
			{
				func_546(-792802286, iParam1);
			}
			break;
		case 49:
			func_546(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_546(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_546(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_546(1402120602, iParam1);
			}
			break;
		case 58:
			func_546(-1661934591, iParam1);
			break;
		case 50:
			func_546(-1713759426, iParam1);
			break;
		case 52:
			func_546(-314799932, iParam1);
			func_546(-462260432, iParam1);
			func_546(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_546(345256028, iParam1);
				func_546(-1635084094, iParam1);
			}
			else
			{
				func_546(114267347, iParam1);
			}
			break;
		case 32:
			func_546(615304157, iParam1);
			break;
		case 47:
			func_546(415434835, iParam1);
			break;
		case 69:
			func_546(1373465877, iParam1);
			if (func_320((*Global_1347702)[9]->f_15, 1))
			{
				func_546(-2058273527, iParam1);
			}
			break;
		case 70:
			func_546(451334985, iParam1);
			if (func_549() == 0)
			{
				func_546(-224150200, iParam1);
			}
			else
			{
				func_546(289012628, iParam1);
			}
			break;
		case 71:
			if (func_549() == 0)
			{
				func_546(-41692120, iParam1);
			}
			else
			{
				func_546(1537840678, iParam1);
			}
			break;
		case 37:
			func_546(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_546(1842132550, iParam1);
			}
			else
			{
				func_546(-785735240, iParam1);
			}
			func_546(-1605690566, iParam1);
			break;
		case 13:
			func_546(-731367459, iParam1);
			func_546(224176585, iParam1);
			func_546(-14545580, iParam1);
			break;
		case 53:
			func_546(1095274522, iParam1);
			break;
		case 54:
			func_546(-572027988, iParam1);
			break;
		case 56:
			func_546(1339307101, iParam1);
			func_546(2102267732, iParam1);
			break;
		case 57:
			func_546(710102686, iParam1);
			break;
		case 22:
			func_546(-1754368482, iParam1);
			func_546(-2071408557, iParam1);
			break;
		case 12:
			func_546(-181334543, iParam1);
			break;
		case 0:
			func_546(-2134669864, iParam1);
			func_546(-548289709, iParam1);
			func_546(-911271922, iParam1);
			func_546(-604455775, iParam1);
			break;
		case 1:
			func_547(1);
			break;
		case 3:
			if (func_331())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_546(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_546(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_297()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_298(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_546(-145926707, iParam1);
			func_546(-604922090, iParam1);
			func_546(-848690769, iParam1);
			break;
		case 1:
			func_546(-1477631591, iParam1);
			break;
		case 2:
			func_546(76112544, iParam1);
			break;
		case 9:
			func_546(1396404308, iParam1);
			func_546(-1357381228, iParam1);
			if (func_320((*Global_1835011)[69]->f_1, 1))
			{
				func_546(1902679064, iParam1);
			}
			else
			{
				func_546(-2146422425, iParam1);
			}
			break;
		case 22:
			func_546(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_546(-1934184559, iParam1);
				func_546(1281755988, iParam1);
			}
			else
			{
				func_546(-1745220872, iParam1);
				func_546(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_546(-1641504538, iParam1);
				func_546(-988014485, iParam1);
			}
			else if (func_548(26))
			{
				func_546(-343043950, iParam1);
				func_546(-640062214, iParam1);
			}
			else
			{
				func_546(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_546(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_546(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_546(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_546(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_546(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_546(1301690984, iParam1);
				}
			}
			else
			{
				func_546(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_546(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_546(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_546(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_546(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_546(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_546(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_546(-754570528, iParam1);
			}
			else
			{
				func_546(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_546(-2072125821, iParam1);
			}
			else
			{
				func_546(270040030, iParam1);
			}
			break;
		case 37:
			func_546(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_546(-505314737, iParam1);
				func_546(-1853052860, iParam1);
			}
			else
			{
				func_546(-1975624994, iParam1);
				func_546(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_546(1690231002, iParam1);
			}
			else
			{
				func_546(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_546(1225386280, iParam1);
			}
			else if (func_548(54))
			{
				func_546(-283235773, iParam1);
			}
			else
			{
				func_546(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_546(1355398007, iParam1);
			}
			else
			{
				func_546(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_546(574636806, iParam1);
			}
			else
			{
				func_546(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_546(821118338, iParam1);
			}
			else if (func_548(39))
			{
				func_546(846829260, iParam1);
			}
			else
			{
				func_546(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_354((*Global_1835011)[33]->f_1) == 1)
				{
					func_546(1422779093, iParam1);
				}
				else
				{
					func_546(-1769536986, iParam1);
				}
			}
			else
			{
				func_546(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_546(352134789, iParam1);
			}
			else if (func_548(43))
			{
				func_546(260723113, iParam1);
			}
			else
			{
				func_546(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_546(-457958799, iParam1);
			}
			else
			{
				func_546(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_548(41))
			{
				func_546(-546824600, iParam1);
			}
			else
			{
				func_546(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_546(1297261593, iParam1);
			}
			else
			{
				func_546(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_546(2068484886, iParam1);
			}
			else if (func_548(49))
			{
				func_546(-1489080639, iParam1);
				func_546(-2102244050, iParam1);
			}
			else
			{
				func_546(-1863040467, iParam1);
			}
			break;
		case 51:
			func_546(-2055943209, iParam1);
			break;
		case 58:
			if (func_320((*Global_1347702)[23]->f_15, 1))
			{
				func_546(1650066845, iParam1);
			}
			else
			{
				func_546(151370023, iParam1);
			}
			func_546(1426057961, iParam1);
			func_546(476379584, iParam1);
			break;
		case 59:
			func_546(-1638117866, iParam1);
			break;
		case 62:
			func_546(199541730, iParam1);
			break;
		case 63:
			func_546(1703485804, iParam1);
			func_546(-800449045, iParam1);
			break;
		case 65:
			func_546(-1678210868, iParam1);
			func_546(-1448238026, iParam1);
			func_546(-1200864845, iParam1);
			func_546(1473511536, iParam1);
			break;
		case 66:
			func_546(-1774490051, iParam1);
			func_546(-34645921, iParam1);
			func_546(174027075, iParam1);
			func_546(-1155999, iParam1);
			func_547(1);
			break;
		case 67:
			func_546(701612593, iParam1);
			func_546(-1069631343, iParam1);
			func_546(1673428882, iParam1);
			break;
		case 68:
			func_546(-739133286, iParam1);
			func_546(-2130089358, iParam1);
			func_546(2056190391, iParam1);
			func_546(1941753817, iParam1);
			func_547(0);
			break;
		case 70:
			func_546(-1217555753, iParam1);
			break;
		case 71:
			func_546(697048821, iParam1);
			break;
		case 73:
			func_546(-553148661, iParam1);
			break;
		case 75:
			func_546(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_546(1414263863, iParam1);
			}
			else
			{
				func_546(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_546(1835465936, iParam1);
				func_546(523715611, iParam1);
			}
			else if (func_548(78))
			{
				func_546(1420338873, iParam1);
			}
			else
			{
				func_546(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_546(10180941, iParam1);
			}
			else if (func_548(79))
			{
				func_546(768420635, iParam1);
			}
			else
			{
				func_546(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_546(-383601523, iParam1);
			}
			else
			{
				func_546(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_546(1606472408, iParam1);
			}
			else
			{
				func_546(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_546(-203571927, iParam1);
			}
			else
			{
				func_546(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_546(729886222, iParam1);
			}
			else
			{
				func_546(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_546(-714816362, iParam1);
			}
			else
			{
				func_546(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_546(-932932179, iParam1);
				func_546(-1458537240, iParam1);
			}
			else
			{
				func_546(-1764383885, iParam1);
				func_546(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_546(1741466706, iParam1);
			}
			else
			{
				func_546(1405815775, iParam1);
			}
			break;
		case 94:
			func_546(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_546(1905280979, iParam1);
			}
			else
			{
				func_546(-1966245299, iParam1);
			}
			func_546(721468880, iParam1);
			break;
		case 99:
			func_546(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_546(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_546(-1117781095, iParam1);
				}
				else
				{
					func_546(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_546(141494548, iParam1);
			}
			else
			{
				func_546(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_546(-369525697, iParam1);
			}
			else if (func_548(101))
			{
				func_546(1595015219, iParam1);
			}
			else
			{
				func_546(-321486961, iParam1);
			}
			break;
		case 103:
			func_546(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_546(793460477, iParam1);
				func_546(-1610242176, iParam1);
			}
			else if (func_548(103))
			{
				func_546(1830897187, iParam1);
			}
			else
			{
				func_546(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_546(1528309077, iParam1);
			}
			else if (func_548(104))
			{
				func_546(1864966105, iParam1);
			}
			else
			{
				func_546(-103336013, iParam1);
			}
			break;
		case 108:
			func_546(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_546(-1123227713, iParam1);
				func_546(-889574341, iParam1);
			}
			else
			{
				func_546(2065385917, iParam1);
				func_546(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_546(-887421691, iParam1);
			}
			else if (func_548(109))
			{
				func_546(-1318117949, iParam1);
			}
			else
			{
				func_546(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_546(284822762, iParam1);
				}
				else
				{
					func_546(-1425017554, iParam1);
				}
			}
			else if (func_548(110))
			{
				if (&Global_1357515 == 0)
				{
					func_546(553087292, iParam1);
				}
				else
				{
					func_546(-1766870331, iParam1);
					func_546(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_546(-1980598735, iParam1);
			}
			else
			{
				func_546(-442732098, iParam1);
				func_546(1955756409, iParam1);
			}
			break;
		case 115:
			func_546(394303528, iParam1);
			func_546(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_546(1182403394, iParam1);
			}
			else
			{
				func_546(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_546(924445424, iParam1);
			}
			else
			{
				func_546(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_546(430755273, iParam1);
				func_546(-1473879802, iParam1);
			}
			else
			{
				func_546(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_546(73885747, iParam1);
			}
			else if (func_548(117))
			{
				func_546(1559707913, iParam1);
			}
			else
			{
				func_546(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_546(-2103887972, iParam1);
			}
			else if (func_548(118))
			{
				func_546(-435828462, iParam1);
			}
			else
			{
				func_546(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_546(2054486196, iParam1);
			}
			else
			{
				func_546(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_546(-570086056, iParam1);
			}
			else if (func_548(121))
			{
				func_546(32337856, iParam1);
			}
			else
			{
				func_546(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_546(813493663, iParam1);
			}
			else if (func_548(122))
			{
				func_546(-2132763590, iParam1);
			}
			else
			{
				func_546(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_546(-66240572, iParam1);
				func_546(1563075046, iParam1);
			}
			else
			{
				func_546(-787011772, iParam1);
				func_546(-1523377438, iParam1);
			}
			break;
		case 127:
			func_546(61020800, iParam1);
			break;
		case 129:
			func_546(428985222, iParam1);
			break;
		case 131:
			func_546(-1393851036, iParam1);
			break;
		case 133:
			func_546(1559531342, iParam1);
			break;
		case 134:
			func_546(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_546(-1374407408, iParam1);
				}
				else
				{
					func_546(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_546(-472672138, iParam1);
				}
				else
				{
					func_546(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_546(-1678710489, iParam1);
			}
			else
			{
				func_546(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_546(1717582460, iParam1);
			}
			else
			{
				func_546(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_546(1568112362, iParam1);
				func_546(1388317526, iParam1);
			}
			else if (func_548(136))
			{
				func_546(-1597534828, iParam1);
				func_546(-1207918353, iParam1);
			}
			else
			{
				func_546(-1940891082, iParam1);
				func_546(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_546(448334530, iParam1);
				func_546(2145375502, iParam1);
			}
			else
			{
				func_546(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_546(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_546(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_546(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_546(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_546(-66616327, iParam1);
			}
			else
			{
				func_546(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_546(1862916706, iParam1);
			}
			else if (func_548(147))
			{
				func_546(675105199, iParam1);
			}
			else
			{
				func_546(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_546(174409701, iParam1);
			}
			else if (func_548(148))
			{
				func_546(-1730895475, iParam1);
			}
			else
			{
				func_546(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_546(1295237052, iParam1);
			}
			else if (func_548(149))
			{
				func_546(-788577684, iParam1);
			}
			else
			{
				func_546(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_299(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_188(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_489(iParam0);
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
					if (func_354((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_265(iParam0);
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
			iVar3 = func_265(iParam0);
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

int func_300(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_551(iParam0);
	iVar3 = func_552(iParam0);
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
				iVar1 = func_278();
				func_327(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_553(iParam0, 1);
			if (func_554(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_555(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_556(1, iParam0);
				}
				else
				{
					func_557(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_301(int iParam0, int iParam1)
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

int func_302(int iParam0, int iParam1, int iParam2)
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

void func_303(bool bParam0)
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

void func_304(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_558(iParam0, iParam1, bParam2);
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

int func_305(int iParam0, int iParam1)
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

bool func_306(int iParam0)
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

void func_307(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_559(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_560(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_561(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_562(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_561(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_308(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_563(func_463(iParam0));
}

int func_309(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_310()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_564(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_311(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	if (!func_566(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_567(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_568(iParam0, bParam2);
	iVar2 = 0;
	if (func_569(iParam0, 0, 0) == 0)
	{
		if (func_570(iParam0))
		{
			iVar5 = func_571(iParam0);
			iVar6 = func_572(iVar5);
			iVar7 = func_573(iVar6) + 1;
			func_574(iVar5);
			if (func_575(38))
			{
				func_318(483, 0);
			}
			else
			{
				func_318(482, 0);
			}
			if (iVar7 == func_576(iVar6))
			{
				func_311(func_577(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_392() && func_578(4))
				{
					if (func_392() && (func_579(38) || func_575(38)))
					{
						func_581(38, func_577(iVar6), 0, 0, func_580(), 0, -1, 0);
						func_582(2);
					}
					else
					{
						func_581(38, func_577(iVar6), 0, 0, func_580(), 0, -1, 0);
						func_582(1);
					}
				}
			}
			else if (func_392() && func_578(4))
			{
				if (func_392() && (func_579(38) || func_575(38)))
				{
					func_581(38, 0, 0, 0, func_580(), 0, -1, 0);
					func_582(2);
				}
				else
				{
					func_581(38, 0, 0, 0, func_580(), 0, -1, 0);
					func_582(1);
				}
			}
			if (func_392() && func_578(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_392() && (func_579(38) || func_575(38)))
					{
						func_583(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_583(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_584(iParam0) == -1037537535)
	{
		if ((!func_585(iParam0, 866047851) && !func_585(iParam0, -1979000645)) && !func_585(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_586(iParam0, 8388608) && !func_587(28))
	{
		func_588(28);
	}
	if (!bVar3)
	{
		if (func_585(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_589(iParam0) == -1447088266)
			{
				iVar1 = func_591(func_590(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_592(iVar1);
					}
					if (func_593(0) && func_594(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_595(iParam0, iVar0, iParam5);
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
					if (func_20() == -1)
					{
						func_592(iParam0);
					}
					if (func_593(0) && func_594(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_595(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_584(iParam0) == -427144552)
		{
			if (!func_596(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_584(iParam0) == 307971639 && func_597(iParam0))
		{
			if (!func_598(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_585(iParam0, 866047851))
		{
			func_599(iParam0);
		}
		else if (func_585(iParam0, 2000026003))
		{
			func_600(iParam0);
		}
		else if (func_585(iParam0, -103750053))
		{
			func_95(func_601(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_602(-717883113, 2091222383), iVar0);
		}
		else if (func_585(iParam0, -121341956) && !func_585(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_320((*Global_1835011)[4]->f_1, 1))
				{
					func_318(498, 0);
				}
			}
			if (func_585(iParam0, -2017733358) || func_585(iParam0, -1369131378))
			{
				func_603(iParam0);
			}
		}
		else if (func_585(iParam0, -136654233))
		{
			if (func_585(iParam0, -1021472396))
			{
			}
		}
		else if (func_585(iParam0, -1466706512) && func_585(iParam0, 1147021565))
		{
			func_318(484, 0);
		}
		else if (func_585(iParam0, 1147021565) && func_585(iParam0, -524514947))
		{
		}
		else if (func_585(iParam0, 554195525))
		{
		}
		else if (func_585(iParam0, 589988438))
		{
			if (func_604())
			{
				func_605(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_585(iParam0, 787083290) && func_585(iParam0, 949916894))
		{
			func_606(iParam0);
		}
		else if (func_585(iParam0, -1718133314))
		{
			func_607(iParam0);
		}
		else if (func_585(iParam0, -1738650224))
		{
			func_608(iParam0);
		}
		else if (func_585(iParam0, -1112814642) && func_585(iParam0, 949916894))
		{
			func_609(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_585(iParam0, 1841149704))
		{
			func_610();
		}
		else if (func_585(iParam0, 606799272))
		{
			func_611(iParam0, iParam1);
			func_612(iParam0);
		}
		else if (func_585(iParam0, -1112814642) && func_585(iParam0, -1697809989))
		{
			func_613(iParam0, 0, 0, 0);
		}
		else if (func_585(iParam0, -2017733358) || func_585(iParam0, -1369131378))
		{
			func_603(iParam0);
		}
		else if (func_585(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_614(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_585(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_340(215778062, 1, 0))
					{
						func_311(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_340(670273567, 1, 0))
					{
						func_311(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_340(-967317137, 1, 0))
					{
						func_311(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_340(526074061, 1, 0))
					{
						func_311(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_340(-1045488665, 1, 0))
					{
						func_311(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_340(471514780, 1, 0))
					{
						func_311(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_585(iParam0, -839724752) && func_586(iParam0, 4))
		{
			if (!func_575(42))
			{
				func_615(iParam0);
			}
		}
		else if (func_585(iParam0, 1399091007))
		{
			func_616(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_585(iParam0, 1248798204))
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
				func_311(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_588(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_617(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_618(&iVar9, 0))
				{
					func_594(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_617(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_318(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_619();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_620();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_621();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_622();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_623();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_624(499813453, 854119837, 0);
				func_625(499813453, 0);
				func_626(1);
				break;
			case 2127812557:
				func_624(499813453, -1292544588, 0);
				func_625(499813453, 0);
				func_626(2);
				break;
			case 808991383:
				func_624(499813453, -1003325394, 0);
				func_625(499813453, 0);
				func_626(4);
				break;
			case 1134518629:
				func_624(666607663, -335460405, 0);
				func_625(666607663, 0);
				func_627(1);
				break;
			case 902940106:
				func_624(666607663, 903797617, 0);
				func_625(666607663, 0);
				func_627(2);
				break;
			case -418174898:
				func_624(666607663, 669728650, 0);
				func_625(666607663, 0);
				func_627(4);
				break;
			case -648114971:
				func_624(-220219788, 1214120047, 0);
				func_625(-220219788, 0);
				func_628(1);
				break;
			case 211153747:
				func_624(-220219788, 655769340, 0);
				func_625(-220219788, 0);
				func_628(2);
				break;
			case -32876996:
				func_624(-220219788, 885316185, 0);
				func_625(-220219788, 0);
				func_628(4);
				break;
			case 1191437462:
				func_624(218622660, -1491419385, 0);
				func_625(218622660, 0);
				func_629(1);
				break;
			case 1119149048:
				func_624(218622660, 1809565830, 0);
				func_625(218622660, 0);
				func_629(2);
				break;
			case 506073827:
				func_624(390004462, -628873767, 0);
				func_625(390004462, 0);
				func_630(1);
				break;
			case -1876986168:
				func_624(390004462, -405421956, 0);
				func_625(390004462, 0);
				func_630(2);
				break;
			case 2142623221:
				func_624(390004462, -1108972386, 0);
				func_625(390004462, 0);
				func_630(4);
				break;
			case 1508215381:
				func_624(6410548, 1053716392, 0);
				func_625(6410548, 0);
				func_631(1);
				break;
			case -888935280:
				func_624(6410548, 806507056, 0);
				func_625(6410548, 0);
				func_631(2);
				break;
			case -1252474566:
				func_624(6410548, 1571925350, 0);
				func_625(6410548, 0);
				func_631(4);
				break;
			case -1465702449:
				func_624(6410548, 1330352282, 0);
				func_625(6410548, 0);
				func_631(8);
				break;
			case -21093309:
				func_633(242, func_632(-21093309), 0);
				break;
			case 204375141:
				func_633(240, func_632(204375141), 0);
				break;
			case -417963070:
				func_633(241, func_632(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_634(594, 1934060482, 1, 1);
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
					func_634(594, 1110018439, 1, 1);
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
					func_634(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_634(594, -1228016946, 1, 1);
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
					func_634(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_634(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_318(488, 0);
				break;
			case 1613651027:
				func_318(491, 0);
				break;
			case -885810591:
				func_318(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_311(func_635(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_311(func_636(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_587(1))
				{
					func_318(487, 0);
				}
				break;
			case -898386032:
				func_318(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_318(496, 0);
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
		func_637(&iVar10);
		if (!func_638(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_593(0))
		{
			return true;
		}
		if (func_584(iParam0) == -1037537535)
		{
			func_639(iParam0);
		}
		if (func_585(iParam0, -1979000645))
		{
			func_640(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_593(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_311(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_641(iVar2, 0);
		}
	}
	Var35 = { func_642(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_643(iParam0);
	if (fParam6 > 0f)
	{
		if (func_585(iParam0, -839724752))
		{
			func_644(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_645(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_312(int iParam0)
{
	if (func_585(iParam0, 1989861793))
	{
		iVar0 = func_646(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_647(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_648(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_649(iVar14, iVar1);
					if (iVar15 != iParam0 && func_565(iVar15, 0))
					{
						if (func_650(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_651(iVar1);
				if (bVar13)
				{
					func_652(iParam0);
				}
				else
				{
					func_318(306, 0);
				}
			}
		}
	}
}

void func_313()
{
	if (func_20() != -1)
	{
		return;
	}
	func_653();
	func_654();
	func_655();
	func_656();
	func_657();
	func_658();
	func_659();
}

void func_314(int iParam0)
{
	func_660(iParam0, 1, 1, -142743235, 1);
	if (func_661(iParam0))
	{
		func_662(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_664(func_663(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_665(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_666() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_667(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_667(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_668(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_668(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_668(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_668(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_668(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_668(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_668(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_668(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_668(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_669(iVar8, iVar0))
				{
					func_670(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_669(iVar8, iVar0))
		{
			func_670(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_315()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_669(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_666() == -2125499975 || func_666() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_670(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_670(&vVar2, iVar5, iVar0);
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

void func_316()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_564(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_317(int iParam0, bool bParam1)
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
			if ((func_320((*Global_1835011)[59]->f_1, 1) || func_320((*Global_1347702)[1]->f_15, 1)) || func_184((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_541(403634348, 1))
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

void func_318(int iParam0, bool bParam1)
{
	func_671(iParam0, &iVar0, &iVar1);
	if (!func_672(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_673(iVar0, iVar1);
}

void func_319(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_664(iParam0, 1);
	func_674(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_674(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_675(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_674(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_674(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_320(int iParam0, bool bParam1)
{
	switch (func_289(iParam0))
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

void func_321()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_564(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_322()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_564(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_323(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_676(iParam1, 1, 0) };
		iParam3 = func_677(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_678(iParam3);
	return func_617(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_324()
{
	return _unlock_is_unlocked(99890643);
}

void func_325(int iParam0)
{
	if (!func_679(iParam0))
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

bool func_326(int iParam0, int iParam1)
{
	if (!func_680(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_681(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_682(Global_40.f_9910[iParam1], 4);
}

void func_327(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_683(*iParam0);
	iVar1 = func_684(*iParam0);
	iVar2 = func_685(*iParam0);
	iVar3 = func_686(*iParam0);
	iVar4 = func_687(*iParam0);
	iVar5 = func_688(*iParam0);
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
	iVar6 = func_689(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_689(iVar1, iVar0);
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
	func_690(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_328(int iParam0, int iParam1, bool bParam2)
{
	if (!func_680(iParam0))
	{
		return;
	}
	if (!func_691(iParam1))
	{
		return;
	}
	if (func_692(iParam1, 1))
	{
		return;
	}
	iVar0 = func_681(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_326(iParam0, -1))
	{
		return;
	}
	else
	{
		func_693(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_190(0, 0, 1))
		{
			func_360(0, 17);
		}
	}
}

void func_329()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_564(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_330()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_564(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_331()
{
	return _unlock_is_unlocked(-121456797);
}

void func_332()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_564(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_333()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_564(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_334()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_564(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_335()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_564(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_564(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_337()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_564(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_338(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_339(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_340(int iParam0, int iParam1, bool bParam2)
{
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_584(iParam0);
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
		if (!func_694(iParam0, 1))
		{
			return false;
		}
	}
	return func_569(iParam0, 0, bParam2) >= iParam1;
}

void func_341(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_695(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_695(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_342()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_564(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_564(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_564(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_564(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_564(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_347()
{
	if (func_696() > 1)
	{
		func_697();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_318(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_318(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_318(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_318(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_318(452, 1);
		}
	}
}

bool func_348(int iParam0)
{
	return func_698(iParam0, 4, 1);
}

void func_349(int iParam0)
{
	func_699(iParam0, 4, 1);
}

void func_350(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_351(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_183(iParam0))
	{
		return;
	}
	func_222(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_188(iParam0))
	{
		case 1:
			func_95(func_602(909007663, -587839005), 1);
			iVar0 = func_265(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_466(iVar0))
			{
				case 0:
					func_95(func_602(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_602(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_602(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_602(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_602(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_602(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_602(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_602(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_602(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_602(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_602(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_265(iParam0);
			if (func_294((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_294((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_294((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_602(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_602(909007663, -2049243343), 1);
				}
			}
			if (func_294((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_467(iVar1))
				{
					case 0:
						func_95(func_602(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_602(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_602(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_602(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_602(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_602(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_602(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_602(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_602(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_602(909007663, 532323983), 1);
				}
			}
			else if (func_294((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_294((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_294((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_602(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_602(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_352()
{
	if (func_20() != -1)
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
	if (!func_3(64))
	{
		return;
	}
	else if (func_191(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_190(0, 0, 1) || func_700()) || func_129())
	{
		return;
	}
	iVar0 = func_194();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_701(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_702(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_702(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_703(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_360(0, -1);
	}
	if (iVar2 > 0)
	{
		func_704("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_705(1, 0);
	Global_1956575->f_4 = 1;
}

void func_353(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_276(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_706(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_354(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_707(iParam0);
}

int func_355(int iParam0, int iParam1)
{
	if (!func_708(iParam0))
	{
		return 0;
	}
	if (!func_392())
	{
		return 0;
	}
	if (!func_709(iParam0, &iVar0, &iVar1))
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

int func_356(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_710())
	{
		iVar2 = func_710();
	}
	iVar5 = func_711(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_463(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_463(iVar6) == 0)
			{
				return func_712(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_463(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_463(iVar6) == 0)
			{
				return func_712(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_712(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_713(1330954593, 0, -1);
		case 1:
			return func_713(1330954593, 0, -1);
		case 2:
			return func_713(1330954593, 0, -1) * 2;
		case 4:
			return func_713(1330954593, 0, -1);
		case 5:
			return func_713(1330954593, 0, -1);
		case 6:
			return func_713(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_713(1330954593, 0, -1) * 3;
		case 9:
			return func_713(1330954593, 0, -1) * 3;
		case 10:
			return func_713(1330954593, 0, -1) * 3;
		case 11:
			return func_713(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_358(int iParam0)
{
	if (!func_183(iParam0))
	{
		return cVar0;
	}
	switch (func_188(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_489(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_265(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_356(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_359(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_361();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_188(Global_1879514->f_1) == 1)
			{
				func_355(5, 1);
			}
			else if (func_188(Global_1879514->f_1) == 8 && (func_294((*Global_1347702)[func_265(Global_1879514->f_1)]->f_12, 1) || func_294((*Global_1347702)[func_265(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_355(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_360(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_714(&Global_0, 8);
	}
	if (!func_392() || func_20() != -1)
	{
		return;
	}
	func_714(&Global_0, 1);
}

int func_361()
{
	iVar0 = func_715(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_716(iVar0))
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

Vector3 func_362(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_717(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_393(vVar0))
	{
		vVar0 = { func_717(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_363(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_364(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_365(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_240(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_718(vParam0, iParam3);
}

void func_366()
{
	func_719();
	func_720();
	func_721();
	_0x11b0a0b282fa9b10(0);
}

void func_367(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_722(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_723(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1934603)[iVar0]->f_10)))
		{
			*(*Global_1934603)[iVar0] = { Param0 };
			Global_1934603->f_161++;
			func_724(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_368(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_369(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_370()
{
	return Global_1572864->f_12;
}

void func_371(bool bParam0)
{
	if (func_479(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_725();
	Var1.f_3.f_3 = iVar0;
	if ((!func_726(Global_1347343->f_2) && !func_368(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_727();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_368(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_728();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_368(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_729();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_730(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_731(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_369(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_369(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_372(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_732(uParam0);
	iVar0 = func_733(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_734(iParam1);
		}
		iVar0 = func_735(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_736(uParam0);
		}
		else
		{
			Var1.f_10 = -1569615261;
			_copy_memory(uParam0->f_3[iVar0], &Var1, 13);
		}
	}
	else if (iVar0 != -1)
	{
	}
	else
	{
		iVar0 = func_736(uParam0);
	}
	if (iVar0 == -1)
	{
		return;
	}
	uParam0->f_3[iVar0]->f_2 = iParam1;
	uParam0->f_3[iVar0]->f_1 = get_entity_model(iParam1);
	if (is_string_null_or_empty(uParam0->f_3[iVar0]->f_9))
	{
		uParam0->f_3[iVar0]->f_9 = sParam2;
	}
	else if (!is_string_null_or_empty(sParam2))
	{
		if (!are_strings_equal(uParam0->f_3[iVar0]->f_9, sParam2))
		{
		}
		uParam0->f_3[iVar0]->f_9 = sParam2;
	}
	func_737(uParam0, 2);
}

void func_373(char[4] cParam0, int iParam1)
{
	func_738(&(cParam0->f_7375), iParam1);
}

int func_374(var uParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < uParam0->f_13)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar1])))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_375()
{
	return func_489(func_739());
}

void func_376(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_394())
	{
		func_740(cParam0, iVar0);
		iVar0++;
	}
}

int func_377(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_378(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_379(char[4] cParam0)
{
	func_746(cParam0, iVar293, iVar294, 110225, 110234, 110243, 110562, 111000, "GNG2_INT", 17301506, -1);
	func_746(cParam0, iVar294, iVar295, 111256, 111587, 111629, 111816, 112215, "GNG2_MCS1", 16777282, -1);
	func_746(cParam0, iVar295, iVar296, 112246, 112734, 112751, 113737, 114608, "", 64, 52);
	func_746(cParam0, iVar296, iVar297, 114759, 115421, 115430, 115664, 116171, "", 64, -1);
	func_746(cParam0, iVar297, iVar298, 116283, 116525, 116647, 117000, 117153, "GNG2_MCS2", 67, -1);
	func_746(cParam0, iVar298, iVar299, 117175, 117610, 117619, 117826, 118140, "", 65, -1);
	func_746(cParam0, iVar299, iVar300, 118149, 118693, 118702, 118996, 119612, "", 4160, -1);
	func_746(cParam0, iVar300, iVar301, 119659, 119874, 119972, 120017, 120374, "", 4160, -1);
	func_746(cParam0, iVar301, iVar302, 120455, 120570, 120723, 121166, 121415, "GNG2_MCS3", 67, -1);
	func_746(cParam0, iVar302, 26, 121506, 121547, 121581, 121600, 121646, "GNG2_EXT", 2, -1);
}

int func_380(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == 25)
	{
		set_anim_scene_origin(cParam0->f_7375.f_804, 2443.965f, 88.858f, 44.653f, 0f, 0f, 0f, 2);
	}
	return 1;
}

void func_381(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_382(char[4] cParam0)
{
	Var0.f_4 = 1065353216;
	Var0.f_5 = 1065353216;
	Var0.f_9 = 1065353216;
	Var0.f_10 = 1065353216;
	Var0.f_14 = 1065353216;
	Var0.f_15 = 1065353216;
	Var0.f_17 = 1040187392;
	Var0.f_18 = 1040187392;
	Var0.f_19 = -1;
	Var0.f_26 = -1082130432;
	func_792(cParam0);
	switch (func_33(cParam0))
	{
		case 0:
			if (!bVar464 && func_793(cParam0))
			{
				iLocal_467 = 1;
			}
			func_794();
			if (func_8(cParam0, 524288))
			{
				func_795(0, 0);
				set_clock_time(5, 0, 0);
			}
			if (func_796(cParam0, &(iLocal_315[1]), 0, 0, 1, 1))
			{
				func_797(&Var0);
				func_799(&(iLocal_315[1]), Global_35, &Var0, 2809.01f, -1179.71f, 46.4f, func_798(), 0, 0, 1.5f, -1f, 1073069561, 1f, 1092616192, -1, 1, 0, 0, 0, 1);
				task_mount_animal(&(iLocal_315[1]), &(iLocal_315[2]), 20000, -1, 1f, 1, 0, 0);
				force_ped_motion_state(&(iLocal_315[1]), -668482597, false, 1, false);
			}
			if (func_796(cParam0, Global_35, 0, 0, 1, 1))
			{
				use_waypoint_recording_as_assisted_movement_route("gang2_ExitSaloon", 1, 1065353216, 1056964608, 1);
				func_800(-668482597, 2000, 0, 1, 1, 0, 0, 0);
				func_797(&Var0);
				func_801(Global_35, &(iLocal_315[1]), &Var0, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			}
			break;
		case 1:
			if (!bVar463)
			{
				func_802(cParam0);
				fLocal_980 = 0.31f;
				fLocal_981 = 0.31f;
				_0xb8c984c0d47f4f07(fVar977, fVar978, 1);
				iLocal_466 = 1;
			}
			if (func_8(cParam0, 524288))
			{
				func_795(0, 0);
			}
			if (does_entity_exist(&(iLocal_378[1])) && is_vehicle_driveable(&(iLocal_378[1]), false, false))
			{
				if (func_796(cParam0, Global_35, 0, 0, 1, 1))
				{
					set_anim_scene_entity(iVar440, "ARTHUR", Global_35, 0);
					set_anim_scene_entity(iVar440, "hotairballoon01", &(iLocal_378[1]), 0);
					attach_anim_scene_to_entity(iVar440, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
					set_anim_scene_origin(iVar440, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					start_anim_scene(iVar440);
				}
				if (func_796(cParam0, &(iLocal_315[3]), 0, 0, 1, 1))
				{
					set_anim_scene_entity(iVar439, "cs_balloonoperator", &(iLocal_315[3]), 0);
					set_anim_scene_entity(iVar439, "ARTHUR", Global_35, 0);
					set_anim_scene_entity(iVar439, "SADIE", &(iLocal_315[1]), 0);
					set_anim_scene_entity(iVar439, "P_CS_FLYINGGOGGLE01X", &(iLocal_414[0]), 0);
					set_anim_scene_entity(iVar439, "s_hotairBalloon_sandbag^2", &(iLocal_409[2]), 0);
					set_anim_scene_entity(iVar439, "s_hotairBalloon_sandbag^3", &(iLocal_409[3]), 0);
					attach_anim_scene_to_entity(iVar439, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
					set_anim_scene_origin(iVar439, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					start_anim_scene(iVar439);
					set_anim_scene_entity(iVar442, "s_hotairBalloon_sandbag", &(iLocal_409[0]), 0);
					set_anim_scene_entity(iVar442, "s_hotairBalloon_sandbag^1", &(iLocal_409[1]), 0);
					start_anim_scene(iVar442);
				}
			}
			if (func_796(cParam0, &(iLocal_315[1]), 0, 0, 1, 1))
			{
				set_anim_scene_entity(iVar441, "MrsAdler", &(iLocal_315[1]), 0);
				start_anim_scene(iVar441);
			}
			break;
		case 4:
			if (!bVar463)
			{
				func_802(cParam0);
				iLocal_466 = 1;
			}
			if (func_793(cParam0))
			{
				if (iVar1056 == -1569615261)
				{
					iLocal_1059 = func_803(Global_35, 1, 9, 1);
					if (iVar1056 != -1569615261)
					{
						_0x72d4cb5db927009c(iVar1056, -1, 0);
						_0xe9b3fec825668291(Global_35, iVar1056, 5f);
					}
				}
				if (!func_172(&(iLocal_315[1]), 0) || !func_172(&(iLocal_315[2]), 0))
				{
					if (func_804(iVar303, iVar297, cParam0, 1))
					{
						if (!is_ped_on_mount(&(iLocal_315[1])))
						{
							func_805(2);
							_set_entity_coords_and_heading(&(iLocal_315[2]), 3016.07f, 1443.55f, 45.69f, 155.33f, true, false, true);
							set_entity_load_collision_flag(&(iLocal_315[2]), 1);
						}
					}
				}
				if (!func_8(cParam0, 524288) && !bVar1051)
				{
					if (func_806() < func_807(0))
					{
						func_808(0, 0);
					}
					else
					{
						iLocal_814 = 1;
					}
					if (func_809(cParam0) > 9500)
					{
						set_current_ped_weapon(&(iLocal_315[1]), 1240907314, true, 0, false, false);
						task_follow_waypoint_recording(&(iLocal_315[1]), sVar969, 0, 8, -1, 0, 1, -1);
						set_entity_proofs(&(Local_825[0]), 1, false);
						set_entity_proofs(&(Local_825[1]), 1, false);
						set_entity_proofs(&(Local_825[2]), 1, false);
						set_entity_proofs(&(Local_825[3]), 1, false);
						_set_entity_coords_and_heading(Local_825[0]->f_1, 3024.17f, 1452.11f, 45.96f, 155.14f, true, false, true);
						_set_entity_coords_and_heading(Local_825[1]->f_1, 3021.63f, 1450.54f, 45.93f, 155.14f, true, false, true);
						_set_entity_coords_and_heading(Local_825[2]->f_1, 3025.912f, 1460.052f, 46.71325f, 155.14f, true, false, true);
						_set_entity_coords_and_heading(Local_825[3]->f_1, 3022.42f, 1455.1f, 46.3f, 155.14f, true, false, true);
						task_follow_waypoint_recording(&(Local_825[0]), "gang2_AnnesburgToSadiePickupLeft", 0, 8, -1, 0, 1, -1);
						task_follow_waypoint_recording(&(Local_825[1]), "gang2_AnnesburgToSadiePickupMiddle", 0, 8, -1, 0, 1, -1);
						task_follow_waypoint_recording(&(Local_825[2]), "gang2_AnnesburgToSadiePickupMiddle", 0, 8, -1, 0, 1, -1);
						task_follow_waypoint_recording(&(Local_825[3]), "gang2_AnnesburgToSadiePickupFarRight", 0, 8, -1, 0, 1, -1);
						iLocal_1054 = 1;
					}
				}
				else
				{
					if (is_waypoint_playback_going_on_for_ped(&(iLocal_315[1]), 0))
					{
						waypoint_playback_override_speed(&(iLocal_315[1]), 3f, 0, -1082130432, 0);
					}
					if (is_waypoint_playback_going_on_for_ped(&(Local_825[0]), 0))
					{
						waypoint_playback_override_speed(&(Local_825[0]), 2.001f, 0, -1082130432, 0);
					}
					if (is_waypoint_playback_going_on_for_ped(&(Local_825[1]), 0))
					{
						waypoint_playback_override_speed(&(Local_825[1]), 2.001f, 0, -1082130432, 0);
					}
					if (is_waypoint_playback_going_on_for_ped(&(Local_825[2]), 0))
					{
						waypoint_playback_override_speed(&(Local_825[2]), 2.001f, 0, -1082130432, 0);
					}
					if (is_waypoint_playback_going_on_for_ped(&(Local_825[3]), 0))
					{
						waypoint_playback_override_speed(&(Local_825[3]), 2.001f, 0, -1082130432, 0);
					}
				}
			}
			if (func_796(cParam0, &(iLocal_315[3]), 0, 0, 1, 1))
			{
				if (!func_120(cParam0, 4))
				{
				}
				if (!is_ped_in_vehicle(&(iLocal_315[3]), &(iLocal_378[1]), false))
				{
					set_ped_into_vehicle(&(iLocal_315[3]), &(iLocal_378[1]), -1);
				}
				set_anim_scene_entity(iVar453, "cs_balloonoperator", &(iLocal_315[3]), 0);
				set_anim_scene_entity(iVar453, "hotairballoon01", &(iLocal_378[1]), 0);
				attach_anim_scene_to_entity(iVar453, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
				set_anim_scene_origin(iVar453, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				start_anim_scene(iVar453);
			}
			if (func_810(cParam0))
			{
			}
			if (!bVar1054)
			{
				if (!func_120(cParam0, 4))
				{
					set_gameplay_cam_relative_heading(85f, 1f);
				}
				set_gameplay_cam_relative_pitch(-12f, 1f);
			}
			if (func_796(cParam0, Global_35, 0, 0, 1, 1))
			{
				func_811();
				func_812(iVar297, 1);
				set_ped_config_flag(Global_35, 15, true);
				set_vehicle_is_considered_by_player(&(iLocal_378[1]), false);
				set_entity_dynamic(&(iLocal_378[1]), true);
				force_ped_motion_state(Global_35, 1063765679, false, 0, false);
				set_player_forced_aim(player_id(), true, &(iLocal_315[1]), 30226, true);
				iLocal_1057 = 1;
			}
			if (bVar1054)
			{
				func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 5, &Local_524, 0, 0, 0);
				set_entity_velocity(&(iLocal_381[1]), get_entity_velocity(&(iLocal_378[1]), -1));
			}
			break;
		case 8:
			if (!func_388(iLocal_115, 262144))
			{
				func_814(iVar301, 0.5f);
			}
			if (!bVar463)
			{
				func_802(cParam0);
				iLocal_466 = 1;
			}
			if (func_815(&(Local_14.f_84), 1))
			{
				func_816(-1, 1);
			}
			if (func_815(&(Local_14.f_1), 1))
			{
				func_817(-1, 1);
			}
			func_818(-1, 1);
			if (func_793(cParam0))
			{
				if (func_809(cParam0) < 5000)
				{
					disable_control_action(0, -842734359, false);
				}
				if (!bVar1052)
				{
					if (func_809(cParam0) > 36000 && !func_8(cParam0, 524288))
					{
						func_819(1);
						func_820(1);
						iLocal_1055 = 1;
					}
					else if (func_809(cParam0) > 34000)
					{
						func_820(1);
					}
					else
					{
						func_820(0);
					}
				}
				else
				{
					if (func_172(&(Local_14.f_3[1]), 0))
					{
						if (is_entity_in_water(&(Local_14.f_3[1])))
						{
							set_ped_max_move_blend_ratio(&(Local_14.f_3[1]), 1.5f);
						}
						else
						{
							set_ped_max_move_blend_ratio(&(Local_14.f_3[1]), 1.501f);
						}
					}
					if (func_172(&(Local_14.f_3[3]), 0))
					{
						if (is_entity_in_water(&(Local_14.f_3[3])))
						{
							set_ped_max_move_blend_ratio(&(Local_14.f_3[3]), 1.5f);
						}
						else
						{
							set_ped_max_move_blend_ratio(&(Local_14.f_3[3]), 1.501f);
						}
					}
					if (func_172(&(Local_14.f_3[5]), 0))
					{
						if (is_entity_in_water(&(Local_14.f_3[5])))
						{
							set_ped_max_move_blend_ratio(&(Local_14.f_3[5]), 1.5f);
						}
						else
						{
							set_ped_max_move_blend_ratio(&(Local_14.f_3[5]), 1.501f);
						}
					}
					if (func_172(&(Local_14.f_3[7]), 0))
					{
						if (is_entity_in_water(&(Local_14.f_3[7])))
						{
							set_ped_max_move_blend_ratio(&(Local_14.f_3[7]), 1.5f);
						}
						else
						{
							set_ped_max_move_blend_ratio(&(Local_14.f_3[7]), 1.501f);
						}
					}
				}
			}
			if (func_8(cParam0, 524288))
			{
				if (!bVar1052)
				{
					func_820(1);
					func_821();
					iLocal_1055 = 1;
				}
			}
			if (!_0xc276fe69dda22bad(iVar1053))
			{
				iLocal_1056 = add_cover_point(2489.378f, 99.3473f, 43.8433f, 286.7029f, 2, 0, 3, true);
				_0x140b3cb1d424a945(Global_35, -1);
			}
			if (func_796(cParam0, &(iLocal_315[1]), 0, 0, 1, 1))
			{
				set_current_ped_weapon(&(iLocal_315[1]), 1240907314, true, 0, false, false);
			}
			if (func_796(cParam0, Global_35, 0, 0, 1, 1))
			{
				task_put_ped_directly_into_cover(Global_35, 2489.378f, 99.3473f, 43.8433f, 100, 1, 0f, 1, 1, iVar1053, 0, 0, 0);
				_0x2208438012482a1a(Global_35, false, false);
				func_819(0);
			}
			if (!func_388(iLocal_115, 262144) && has_anim_event_fired(Global_35, -982288910))
			{
				func_822();
				func_823(-1207658444);
				func_168(2, 0);
				func_416(&iLocal_115, 262144);
			}
			break;
		case 25:
			if (func_796(cParam0, Global_35, 0, 0, 1, 1))
			{
				func_800(-668482597, 2000, 0, 1, 1, 0, 0, 0);
			}
			if (func_796(cParam0, &(iLocal_315[1]), 0, 0, 1, 1))
			{
				_task_flee_from_ped(&(iLocal_315[1]), Global_35, 0f, 0f, 0f, 200f, -1, 16768, 1077936128, 0);
				set_ped_keep_task(&(iLocal_315[1]), true);
				func_508(11, 1, 0, 0, 30f, 1, 1, 0, 0, 0, 0);
			}
			if (func_810(cParam0))
			{
			}
			break;
	}
	return 1;
}

void func_383(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

void func_384()
{
	if (!is_itemset_valid(Global_43616))
	{
		return;
	}
	iVar0 = (get_itemset_size(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (!does_entity_exist(iVar1))
		{
		}
		else
		{
			switch (get_entity_type(iVar1))
			{
				case 1:
					iVar2 = 0;
					while (iVar2 <= 3)
					{
						if (func_824(iVar1))
						{
						}
						else
						{
							iVar2++;
						}
					}
					break;
				case 3:
					iVar3 = 0;
					while (iVar3 <= 3)
					{
						if (func_825(iVar1))
						{
						}
						else
						{
							iVar3++;
						}
					}
					break;
			}
			decor_remove(iVar1, func_826());
		}
		iVar0 = (iVar0 + -1);
	}
	_0x20a4bf0e09bee146(Global_43616);
}

void func_385(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

void func_386(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_387(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_388(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_389(var uParam0)
{
	if (!func_827(uParam0, 4))
	{
		if (func_828(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_829(uParam0) };
		if (!func_828(uParam0->f_860, 524288))
		{
			func_830(&(uParam0->f_872));
		}
		func_831(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_832(uParam0, 0f, 0f, 0f);
		func_833(uParam0);
		func_834(uParam0);
		func_835(uParam0, 0f, 0f, 0f, 0, 0);
		func_836(uParam0);
		func_738(uParam0, 4);
		func_837(uParam0, 0);
		func_838(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_390(int iParam0)
{
	if (func_839(iParam0))
	{
		return func_840(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_391(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_492(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_803(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_841(0, 0);
		if (func_679(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_842(1, 0);
		}
	}
	else
	{
		func_842(1, 0);
	}
	func_202(0);
	func_493(0, vParam0, uParam3);
	return 1;
}

bool func_392()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_393(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_394()
{
	return 26;
}

void func_395(int iParam0)
{
	if (!func_182(iParam0))
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

void func_396(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_843((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_397(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_844((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_398(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_845((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_846((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_847((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_848((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_849((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_850((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_851((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_852((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_407(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_853((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_408(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_854(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_855(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

int func_409(int iParam0)
{
	func_441(iParam0, -1, &Var0);
	return Var0.f_4;
}

int func_410(int iParam0)
{
	func_856(iParam0, -1, &Var0);
	return Var0.f_4;
}

void func_411(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_857(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_858(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_412(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_859(iParam3, func_33(cParam0)) && !func_859(iParam3, func_35(cParam0)))
	{
		return;
	}
	if (_does_anim_scene_exist(*uParam2))
	{
		return;
	}
	if (is_string_null_or_empty(cParam1))
	{
		return;
	}
	iVar0 = func_860(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_861(&(cParam0->f_1126));
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!_does_anim_scene_exist(*uParam2))
	{
		*uParam2 = _create_anim_scene(cParam1, iParam4, sParam5, false, true);
	}
	cParam0->f_1126[iVar0]->f_1 = *uParam2;
	cParam0->f_1126[iVar0] = cParam1;
	cParam0->f_1126[iVar0]->f_3 = (cParam0->f_1126[iVar0]->f_3 || iParam3);
	cParam0->f_1126[iVar0]->f_65 = iParam6;
	cParam0->f_1126[iVar0]->f_66 = bParam7;
	if (!bParam7)
	{
		func_862(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_413(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_863(&(cParam0->f_5249), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_864(&(cParam0->f_5249));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5249[iVar0] = iParam1;
	cParam0->f_5249[iVar0]->f_2 = (cParam0->f_5249[iVar0]->f_2 || iParam2);
}

void func_414(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_865(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_866(&(cParam0->f_819));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_819[iVar0] = cParam1;
	cParam0->f_819[iVar0]->f_4 = (cParam0->f_819[iVar0]->f_4 || iParam2);
	cParam0->f_819[iVar0]->f_1 = iParam3;
	cParam0->f_819[iVar0]->f_2 = iParam4;
}

void func_415(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	cParam0->f_1124.f_1 = (cParam0->f_1124.f_1 || iParam1);
}

void func_416(int iParam0, int iParam1)
{
	func_867(iParam0, iParam1);
}

void func_417(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_868((*uParam0)[iVar0]))
		{
			if (func_859((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_869((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_870((*uParam1)[iVar0]))
		{
			if (func_859((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_871((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_872((*uParam2)[iVar0]))
		{
			if (func_859((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_873((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_874((*uParam3)[iVar0]))
		{
			if (func_859((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_875((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_859(uParam4->f_1, iParam12))
	{
		func_876(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_877((*uParam5)[iVar0]))
		{
			if (func_859((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_878((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_877((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_879((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_859((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_880((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_881((*uParam6)[iVar0]))
		{
			if (func_859((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_882((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_883((*uParam7)[iVar0]))
		{
			if (func_859((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_884((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_885((*uParam8)[iVar0]))
		{
			if (func_859((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_886((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_887((*uParam9)[iVar0]))
		{
			if (func_859((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_888((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_889((*uParam10)[iVar0]))
		{
			if (func_859((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_890((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_891((*uParam11)[iVar0]))
		{
			if (func_859((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_892((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_418(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_893(uParam0, iParam1, sParam2))
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

struct<2> func_419()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_420(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_421(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_422(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_894(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_372(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_423(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_895(cParam0->f_607)}, 3);
			if (func_896(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_897(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_898(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_424(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_877((*uParam0)[iVar0]))
		{
			if (func_859((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_899((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_900((*uParam0)[iVar0]))
					{
						iVar1 = 0;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_425(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_426(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_120(cParam0, 2))
	{
		return true;
	}
	if (func_20() == 0)
	{
		return true;
	}
	if (does_entity_exist(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_901(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_902(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_427(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_903(cParam0))
			{
				func_103(cParam0, 16777216);
			}
			else
			{
				Var0.f_10 = 7;
				Var0 = 0;
				Var0.f_1 = 0;
				Var0.f_6 = uParam2;
				Var0.f_6.f_1 = uParam3;
				Var0.f_6.f_2 = uParam4;
				Var0.f_9 = fParam5;
				Var0.f_10 = 1;
				iVar11 = 0;
				iVar12 = func_904(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_905(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_906(iVar12))
							{
								_0x0348469daa17576c(iVar12);
							}
							clear_ped_tasks_immediately(iVar12, false, true);
							_set_entity_coords_and_heading(iVar12, cParam0->f_5417, cParam0->f_5420, true, false, true);
						}
					}
				}
			}
			return false;
		}
		if (!is_entity_dead(cParam0->f_5411))
		{
			return true;
		}
	}
	if (func_120(cParam0, 1))
	{
		return true;
	}
	vVar14 = { func_126(cParam0->f_607) };
	if (func_20() == 0)
	{
		request_model(func_125(cParam0), false);
		if (!has_model_loaded(func_125(cParam0)))
		{
			return false;
		}
		if (func_907(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			iVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			func_103(cParam0, 1);
			return false;
		}
		Var18.f_10 = 7;
		Var18 = bParam1;
		Var18.f_1 = iParam6;
		Var18.f_4 = iParam7;
		Var18.f_3 = iParam8;
		Var18.f_6 = uParam2;
		Var18.f_6.f_1 = uParam3;
		Var18.f_6.f_2 = uParam4;
		Var18.f_9 = fParam5;
		if (func_120(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_120(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_904(&iVar29, &Var18);
		if (iVar29 == 0)
		{
			return false;
		}
		else if (iVar29 == 1)
		{
			return false;
		}
		else if (iVar29 == 2)
		{
			if (!func_120(cParam0, 16))
			{
				func_103(cParam0, 16);
			}
		}
	}
	if (does_entity_exist(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		func_908(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_906(iVar13) || func_909(Global_35, iVar13, 1, 1) > 200f) && !func_393(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_910(iVar13, vVar14, fParam5, 2, 1073741824);
					}
				}
			}
		}
		else
		{
			Stack.Push(cParam0);
			Call_Loc(cParam0->f_10782);
		}
		return false;
	}
	return false;
}

void func_428(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_911(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_912(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_429(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_913(cParam0);
			if (func_914(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_915(cParam0, 2097152);
				func_258(cParam0, 16384);
				func_103(cParam0, 128);
			}
			return;
		}
		if (func_128(cParam0, 1))
		{
			return;
		}
		if (func_120(cParam0, 64))
		{
			func_913(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_916(cParam0, Var0))
			{
				if (func_425(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_425(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_430(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_431(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_917(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_426(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_427(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_23(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_895(cParam0->f_607)}, 3);
		if (func_918(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_128(cParam0, 1))
	{
		if (!func_26(&(cParam0->f_13115)))
		{
			func_27(&(cParam0->f_13115), 0);
		}
		if (func_919(&(cParam0->f_13115)) < 30f)
		{
			if ((Global_1879534->f_1 || Global_1879534) // PointerArith)
			{
				iVar0 = 0;
			}
			if (Global_1935630->f_2 != Global_40.f_39 || (!Global_1935630->f_12 && get_entity_model(player_ped_id()) != Global_40.f_39))
			{
				iVar0 = 0;
			}
			if (Global_40.f_7729 != &Global_1905941)
			{
				iVar0 = 0;
			}
			if (!Global_1935630->f_12 && !_0xa0bc8faed8cfeb3c(player_ped_id()))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

bool func_432(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_919(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_920()) && func_919(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_258(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_795(0, 0);
		func_258(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_433(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	func_921(cParam0);
	if ((iVar0 == iVar297 || iVar0 == iVar298) || iVar0 == iVar299)
	{
		func_922();
	}
	if (iVar0 == iVar293)
	{
		if (!func_804(iVar303, iVar0, cParam0, func_923()))
		{
			return false;
		}
		if (!does_entity_exist(iVar417))
		{
			iLocal_420 = create_object(-1216485179, 2792.51f, -1170.51f, 46.92f, true, true, false, false, true);
			func_422(cParam0, iVar417, "p_spittoon01x", 0, 0, 0, 0);
		}
		if (!does_entity_exist(iVar418))
		{
			iLocal_421 = create_object(851401507, 2792.85f, -1169.68f, 47.97f, true, true, false, false, true);
			func_422(cParam0, iVar418, 0, 0, 0, 0, 0);
		}
		if (!does_entity_exist(iVar419))
		{
			iLocal_422 = create_object(1843407141, 2793.77f, -1167.79f, 47.97f, true, true, false, false, true);
			func_422(cParam0, iVar419, 0, 0, 0, 0, 0);
		}
		if (!does_entity_exist(iVar416))
		{
			iLocal_419 = func_924(-663641338, 2793.77f, -1167.79f, 47.97f, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0);
			func_925(iVar416, -844712531);
			set_blocking_of_non_temporary_events(iVar416, true);
			func_151(cParam0, iVar416, "A_M_M_NbxSlums_01", 0, 0, 0, 0);
		}
		iVar1 = func_926(289);
		if (func_172(iVar1, 0))
		{
			if (_is_ped_using_scenario_hash(iVar1, 817364163))
			{
				func_927(289);
			}
		}
		func_928();
		func_927(285);
		func_927(286);
	}
	else
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
	}
	func_929(cParam0);
	func_930(cParam0);
	func_171(2101399188);
	func_171(-1207658444);
	_0x7c334ff4d9215912("gng2_balloon_wreck");
	if (iVar0 != iVar293 && iVar0 != iVar301)
	{
		set_ped_config_flag(Global_35, 174, true);
	}
	func_39(0);
	set_random_trains(false);
	delete_all_trains();
	if (iVar0 != iVar293 || func_272(cParam0) != 0)
	{
		_set_weather_type(433385945, true, true, false, 0f, false);
		_0x3373779baf7caf48("OVERCASTDARK", "OVERCASTDARK_Gang2");
	}
	func_931(&(Local_524.f_1));
	func_932(&(Local_524.f_32), 1);
	func_932(&(Local_524.f_27), 0);
	func_933(&(Local_524.f_37));
	func_934(&(Local_524.f_66));
	func_935(&(Local_524.f_107));
	func_27(&uLocal_896, 0);
	func_27(&uLocal_899, 0);
	if (func_33(cParam0) == iVar293)
	{
		if ((func_120(cParam0, 4) || func_120(cParam0, 8388608)) || func_120(cParam0, 4194304))
		{
			func_802(cParam0);
		}
	}
	else
	{
		func_802(cParam0);
	}
	func_99(cParam0, 8388608);
	return true;
}

void func_434(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_435(char[4] cParam0)
{
	func_936(cParam0);
	func_937(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_914(cParam0);
		}
	}
	func_938(cParam0);
	func_939(cParam0);
	func_940(cParam0);
	func_941(cParam0);
	func_942(cParam0);
	func_943(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_944(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_272(cParam0) == 0)
	{
		func_429(cParam0);
	}
	if (func_121(cParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_74(cParam0);
	switch (iVar2)
	{
		case 0:
			if (func_945(cParam0, iVar0, 0))
			{
				if (func_946(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_946(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_946(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_373(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_947(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_948(cParam0);
					func_949(cParam0, iVar0, 1);
				}
				else
				{
					func_949(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_917(cParam0))
			{
				if (func_950(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_915(cParam0, 4);
					}
					func_949(cParam0, iVar0, 2);
				}
			}
			else if (func_951(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_915(cParam0, 4);
				}
				func_949(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_945(cParam0, iVar0, 2))
			{
				if (!func_952(cParam0))
				{
					func_949(cParam0, iVar0, 4);
					if (func_953(cParam0, iVar0, iVar1))
					{
						func_949(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_954(cParam0);
					func_949(cParam0, iVar0, 3);
					if (func_955(cParam0, iVar0))
					{
						func_949(cParam0, iVar0, 4);
						if (func_953(cParam0, iVar0, iVar1))
						{
							func_949(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_793(cParam0))
			{
				func_955(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_955(cParam0, iVar0))
			{
				func_949(cParam0, iVar0, 4);
				if (func_953(cParam0, iVar0, iVar1))
				{
					func_949(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_953(cParam0, iVar0, iVar1))
			{
				func_949(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_956(cParam0);
				func_957(cParam0, iVar0);
				func_958(cParam0);
				func_959(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_960(cParam0, iVar1))
					{
						func_961(cParam0, iVar1);
					}
				}
			}
			if (func_945(cParam0, iVar0, 5))
			{
				if (func_945(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_962(cParam0, func_33(cParam0));
					}
					func_963(cParam0, iVar1);
					func_937(cParam0);
					return true;
				}
				else
				{
					func_949(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_964(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_965(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_966("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_967(cParam0))
					{
						func_949(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_915(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_258(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_956(cParam0);
				func_957(cParam0, iVar0);
				func_958(cParam0);
				func_959(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_960(cParam0, func_35(cParam0)))
					{
						func_961(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_965(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_945(cParam0, iVar0, 5))
				{
					if (func_968(cParam0))
					{
						func_949(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_968(cParam0);
					func_949(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_945(cParam0, iVar0, 5);
				func_969(cParam0);
			}
			break;
		case 7:
			if (func_945(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_962(cParam0, func_33(cParam0));
				}
				func_963(cParam0, iVar1);
				func_937(cParam0);
				return true;
			}
			break;
		default:
			func_949(cParam0, iVar0, 7);
			break;
	}
	return false;
}

bool func_436(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_437(int iParam0)
{
	if (!func_436(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_438(int iParam0)
{
	return iParam0 != 0;
}

int func_439(int iParam0)
{
	if (!func_436(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_440(int iParam0, int iParam1)
{
	iVar0 = iParam1 + 1;
	if (iVar0 == 10)
	{
		return 10;
	}
	if (func_970(iVar0, iParam0))
	{
		return iVar0;
	}
	return func_440(iParam0, iVar0);
}

void func_441(int iParam0, int iParam1, var uParam2)
{
	func_971(uParam2);
	switch (iParam0)
	{
		case 1:
			if (iParam1 == iVar291)
			{
				if (!func_29())
				{
					func_487(uParam2, 2797.26f, -1177.69f, 46.63f, -122.69f);
				}
			}
			else if (iParam1 == iVar292)
			{
				*uParam2 = { func_488(2, 2) };
			}
			else if (iParam1 == iVar294 || iParam1 == iVar295)
			{
				func_487(uParam2, 2911.301f, 1261.573f, 43.8573f, 137.3053f);
			}
			else if (iParam1 == iVar296)
			{
				func_487(uParam2, 2906.76f, 712.298f, 52.73f, 158.8827f);
			}
			else if (iParam1 == iVar297)
			{
				func_487(uParam2, 2864.83f, 548.88f, 57.73f, 156.18f);
			}
			else if (iParam1 == iVar298)
			{
				func_487(uParam2, 2715.131f, 291.0408f, 59.434f, 124.9152f);
			}
			else if (iParam1 == iVar299)
			{
				*uParam2 = { func_488(0, 0) };
			}
			uParam2->f_5 = "SADIE_ADLER";
			uParam2->f_6 = 11;
			uParam2->f_7 = 11;
			uParam2->f_8 = 2;
			uParam2->f_13 = 20500;
			if (iParam1 == iVar294)
			{
				uParam2->f_13 |= 1024;
			}
			break;
		case 2:
			if (iParam1 == iVar291)
			{
				*uParam2 = { func_488(2, 3) };
			}
			else if (iParam1 == iVar292)
			{
				func_487(uParam2, 2141.14f, -957.58f, 41.28f, 78.78f);
			}
			else if (iParam1 == iVar294 || iParam1 == iVar295)
			{
				*uParam2 = { func_488(14, 0) };
			}
			else if (iParam1 == iVar296)
			{
				func_487(uParam2, 2906.76f, 712.298f, 52.73f, 158.8827f);
			}
			else if (iParam1 == iVar297)
			{
				func_487(uParam2, 2864.83f, 548.88f, 57.73f, 156.18f);
			}
			else if (iParam1 == iVar300)
			{
				func_487(uParam2, 2391.98f, 106.83f, 46.37f, 158.8827f);
			}
			uParam2->f_4 = -1038436471;
			uParam2->f_9 = 1;
			uParam2->f_6 = 11;
			uParam2->f_13 = 32788;
			break;
		case 3:
			if (iParam1 == iVar291 || iParam1 == iVar292)
			{
				func_487(uParam2, 2131.03f, -956.91f, 40.65f, -96.43f);
			}
			else if (iParam1 == iVar293)
			{
				func_487(uParam2, 3331.508f, 45.3197f, 40.9721f, 278.5559f);
			}
			else if (iParam1 == iVar294)
			{
				func_487(uParam2, 3468.599f, 291.5449f, 42.8388f, 15.5831f);
			}
			else if (iParam1 == iVar295)
			{
				func_487(uParam2, 2976.576f, 1270.981f, 41.2834f, 55.4882f);
			}
			uParam2->f_5 = "BALLOONIST";
			uParam2->f_10 = 1862763509;
			uParam2->f_4 = 624882545;
			uParam2->f_13 = 20500;
			break;
		case 4:
			func_487(uParam2, 3644.723f, 244.2652f, 44.5616f, 0f);
			uParam2->f_5 = "JOHN";
			uParam2->f_6 = 1;
			uParam2->f_12 = 977450639;
			uParam2->f_13 = 1808;
			break;
		case 5:
			*uParam2 = { func_972(4, 0) };
			uParam2->f_4 = 1167462574;
			uParam2->f_11 = -183018591;
			uParam2->f_13 = 48;
			break;
		case 6:
			*uParam2 = { func_972(4, 1) };
			uParam2->f_4 = 1167462574;
			uParam2->f_11 = -183018591;
			uParam2->f_13 = 176;
			break;
		case 7:
			*uParam2 = { func_972(4, 2) };
			uParam2->f_4 = 1167462574;
			uParam2->f_11 = -183018591;
			uParam2->f_13 = 48;
			break;
		case 8:
			*uParam2 = { func_972(4, 3) };
			uParam2->f_4 = 1167462574;
			uParam2->f_11 = -183018591;
			uParam2->f_13 = 176;
			break;
		case 9:
			*uParam2 = { func_972(4, 4) };
			uParam2->f_4 = 1167462574;
			uParam2->f_11 = -183018591;
			uParam2->f_13 = 48;
			break;
	}
}

bool func_442(int iParam0, var uParam1)
{
	return (uParam1 && iParam0) == iParam0;
}

void func_443(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (!func_973(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (bParam2)
	{
		func_974(cParam0->f_5423[iVar0], 256);
	}
	else
	{
		func_975(cParam0->f_5423[iVar0], 256);
	}
	func_976(cParam0->f_5423[iVar0], bParam2);
}

void func_444(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_977(iParam1))
	{
		return;
	}
	iVar0 = func_978(iParam1);
	if (func_979(iParam1))
	{
		if (!func_980(iParam1))
		{
			return;
		}
	}
	func_981(iParam1, 39, 1);
	func_982(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_982(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_982(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_983(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_984(iParam1, 0, 1, 1, 1);
		}
	}
}

void func_445(int iParam0)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (func_985(iParam0, 0) == 0)
	{
		return;
	}
	iVar0 = func_978(iParam0);
	func_986(iVar0);
	func_982(iParam0, 8192, 0);
}

void func_446(int* iParam0, bool bParam1)
{
	if (does_entity_exist(*iParam0))
	{
		if (_0xa7e51b53309eac97(*iParam0))
		{
			return;
		}
		if (!does_entity_belong_to_this_script(*iParam0, false))
		{
			return;
		}
		if (bParam1)
		{
			set_ped_as_no_longer_needed(iParam0);
		}
		else
		{
			if (!is_entity_dead(*iParam0) && is_ped_in_any_vehicle(*iParam0, true))
			{
			}
			delete_ped(iParam0);
		}
	}
}

void func_447(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_312 = (uVar308 || func_987(iParam0));
	}
	else
	{
		iLocal_312 = (uVar308 && func_167(func_987(iParam0)));
	}
}

bool func_448(int iParam0, int iParam1)
{
	return (iParam1 && func_988(iParam0)) == func_988(iParam0);
}

void func_449(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_313 = (uVar309 || func_988(iParam0));
	}
	else
	{
		iLocal_313 = (uVar309 && func_989(func_988(iParam0)));
	}
}

bool func_450(int iParam0, var uParam1)
{
	return (uParam1 && func_990(iParam0)) == func_990(iParam0);
}

int func_451(struct<2> Param0, int iParam2)
{
	if (!func_248(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_452(int* iParam0)
{
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar11 = (-1 + iVar0);
		iVar12 = iVar11;
		if (is_vehicle_driveable(*iParam0, false, false))
		{
			if (!is_vehicle_seat_free(*iParam0, iVar12))
			{
				iVar1[iVar0] = get_ped_in_vehicle_seat(*iParam0, iVar12);
				if (!is_entity_dead(&(iVar1[iVar0])))
				{
					_0xf9acf4a08098ea25(&(iVar1[iVar0]), true);
					func_910(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

void func_453(int iParam0)
{
	if (does_blip_exist(&(iLocal_384[iParam0])))
	{
		remove_blip(iLocal_384[iParam0]);
	}
}

void func_454()
{
	func_455(&uLocal_486, &(uLocal_487[2]), 0);
	func_455(&uLocal_484, &(uLocal_487[1]), 0);
	if (_does_volume_exist(&(uLocal_487[1])))
	{
		_0xd17672447692478e(&(uLocal_487[1]), 0);
	}
	func_457(&(uLocal_487[1]));
	func_457(&(uLocal_487[2]));
	func_457(&(uLocal_487[19]));
	if (_0x91a5f9cbebb9d936(uVar421))
	{
		remove_scenario_blocking_area(uVar421, false);
	}
	if (_0x91a5f9cbebb9d936(uVar422))
	{
		remove_scenario_blocking_area(uVar422, false);
	}
	if (_0x91a5f9cbebb9d936(uVar423))
	{
		remove_scenario_blocking_area(uVar423, false);
	}
	if (_0x91a5f9cbebb9d936(uVar424))
	{
		remove_scenario_blocking_area(uVar424, false);
	}
	func_991();
}

void func_455(var uParam0, int iParam1, bool bParam2)
{
	if (!_does_volume_exist(iParam1))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam1);
	_0x74c2b3dc0b294102(iParam1);
	if (_0x91a5f9cbebb9d936(*uParam0))
	{
		remove_scenario_blocking_area(*uParam0, bParam2);
	}
}

void func_456(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0x74c2b3dc0b294102(iParam0);
	_0xa1cfb35069d23c23(iParam0);
}

void func_457(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_458()
{
	iVar0 = 0;
	while (iVar0 < 9)
	{
		func_457(&(uLocal_815[iVar0]));
		iVar0++;
	}
}

bool func_459(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_460(int iParam0)
{
	func_992(iParam0);
}

bool func_461(int iParam0)
{
	return func_993(iParam0, 2);
}

int func_462(int iParam0)
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

int func_463(int iParam0)
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

int func_464(int iParam0)
{
	return iParam0 & 31;
}

bool func_465()
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

int func_466(int iParam0)
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

int func_467(int iParam0)
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

void func_468(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_469()
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

int func_470(int iParam0)
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

void func_471(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_472(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_994(iParam0);
	}
	else
	{
		func_995(iParam0, iParam1);
	}
	func_996();
}

bool func_473(int iParam0)
{
	iVar0 = func_997(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_474(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	switch (func_188(iParam0))
	{
		case 1:
			switch (func_265(iParam0))
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
			switch (func_265(iParam0))
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

void func_475(int iParam0)
{
	iVar2 = func_998(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_589(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1000(func_999(iParam0), 6);
}

void func_476(int iParam0)
{
	iVar2 = func_998(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_589(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1001(func_999(iParam0), 6);
}

int func_477(int iParam0)
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

int func_478(int iParam0)
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
	func_1002(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_479(int iParam0)
{
	return iParam0 != 0;
}

bool func_480(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_481(int iParam0, var uParam1)
{
	if (!func_480(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1003(iParam0, *uParam1, 0);
	func_1004(uParam1);
	Global_1935183->f_24 = 1;
}

void func_482(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_483(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_537() - fParam1);
	func_1005(fParam0, 1);
	func_1006(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_484(float fParam0)
{
	return func_212(*fParam0, 2);
}

int func_485()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_486(bool bParam0)
{
	if (func_1007())
	{
		Global_1357509 = 1;
	}
	if (func_1008(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

void func_487(var uParam0, vector3 vParam1, float fParam4)
{
	*uParam0 = { vParam1 };
	uParam0->f_3 = fParam4;
}

struct<4> func_488(int iParam0, int iParam1)
{
	return func_1009(iParam0, iParam1);
}

int func_489(int iParam0)
{
	if (func_188(iParam0) == 1)
	{
		return func_265(iParam0);
	}
	return -1;
}

int func_490(int iParam0)
{
	if (func_188(iParam0) == 8)
	{
		return func_265(iParam0);
	}
	return -1;
}

char[] func_491(int iParam0)
{
	if (!func_266(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_492(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_82(32768))
	{
		return;
	}
	if (!func_82(32768))
	{
		func_1010(1, bParam1);
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
	if (func_82(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_278();
	}
}

void func_493(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_365(vParam1, 1);
}

bool func_494(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_495(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_496(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_497(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_498(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_499(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_500()
{
	return Global_1109400->f_245;
}

bool func_501(var uParam0, int iParam1)
{
	return func_388(uParam0->f_64, iParam1);
}

bool func_502(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_503(int iParam0)
{
	return func_698(iParam0, 16, 1);
}

void func_504(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_973(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1011(cParam0, get_object_index_from_entity_index(iParam1)))
	{
		_0x4465c3d1475bd3fd(get_entity_model(iParam1));
	}
	if (does_blip_exist(cParam0->f_5423[iVar0]->f_8))
	{
		remove_blip(&(cParam0->f_5423[iVar0]->f_8));
	}
	Var1.f_5 = 3;
	Var1.f_10 = -1;
	Var1.f_12 = 5;
	Var1.f_23 = 10;
	Var1.f_23.f_1 = 3;
	Var1.f_23.f_1.f_1 = 500;
	Var1.f_23.f_1.f_2 = 10000;
	Var1.f_23.f_1.f_4 = 3;
	Var1.f_23.f_1.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4 = 3;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_1 = 500;
	Var1.f_23.f_1.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_4.f_2 = 10000;
	_copy_memory(cParam0->f_5423[iVar0], cParam0->f_5423[(cParam0->f_13145 - 1)], 65);
	_copy_memory(cParam0->f_5423[(cParam0->f_13145 - 1)], &Var1, 65);
	cParam0->f_13145 = (cParam0->f_13145 - 1);
}

void func_505(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_in_group(iParam0))
		{
			remove_ped_from_group(iParam0);
		}
		set_ped_can_ragdoll(iParam0, true);
		set_ped_can_ragdoll_from_player_impact(iParam0, true);
	}
}

void func_506(int iParam0)
{
	func_1012(iParam0, 8, 0);
}

void func_507(int iParam0, bool bParam1)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1013(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1012(iParam0, 1, 0);
		}
	}
	func_1012(iParam0, 16, bParam1);
}

void func_508(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_502(iParam0))
	{
		return;
	}
	if (func_503(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_983(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_507(iParam0, 0);
	func_1012(iParam0, 4, 0);
	func_506(iParam0);
	func_1014(iParam0);
	func_981(iParam0, 37, 1);
	bVar0 = func_172(Global_1360165[iParam0], 0);
	iVar1 = func_1015(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1016(iParam0, 64, 1))
	{
		func_981(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_981(iParam0, 33, 1);
		func_981(iParam0, 34, 1);
		func_1017(iParam0, 1056964608, -1, 1061158912);
		func_1018(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_983(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_983(iParam0, 35, 1);
			if (bParam8)
			{
				func_983(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1019(iParam0, 0);
			if (is_ped_in_group(Global_1360165[iParam0]))
			{
				set_ped_keep_task(Global_1360165[iParam0], true);
			}
			_0xf74e134f40192884(Global_1360165[iParam0], 1);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
		}
		if (bVar2)
		{
			_0xbb68908cd11aebdc(iVar1);
		}
		func_981(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_983(iParam0, 33, 1);
		func_1018(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_540(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_983(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1020(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1016(iParam0, 45, 1))
	{
		func_981(iParam0, 45, 1);
	}
	func_1021(iParam0, 16, 1);
	func_981(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_172(func_978(iParam0), 0))
		{
			func_444(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_509(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_516(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_516(iParam0);
	}
}

bool func_510(int iParam0)
{
	iParam0 = func_259(iParam0);
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

void func_511(int iParam0)
{
	iParam0 = func_259(iParam0);
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

void func_512(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (does_blip_exist((*Global_1900383)[iParam0]->f_27))
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		remove_blip(&((*Global_1900383)[iParam0]->f_27));
	}
}

bool func_513(int iParam0)
{
	if (!func_1022(iParam0))
	{
		return false;
	}
	if (!func_324())
	{
		return true;
	}
	return false;
}

void func_514(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_517(iParam0))
	{
		return;
	}
	iVar0 = func_208(iParam0);
	func_1023(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_513(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1024(iParam0, 0);
	func_516(iParam0);
}

bool func_515(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_254(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_516(int iParam0)
{
	iParam0 = func_259(iParam0);
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

bool func_517(int iParam0)
{
	iParam0 = func_259(iParam0);
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

void func_518(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_208(iParam0);
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
	if (func_1025(iParam0, 64))
	{
		func_511(iParam0);
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
	bVar3 = func_587(42);
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
				func_1026(&((*Global_1900383)[iParam0]->f_27));
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
		func_511(iParam0);
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
		if (func_1027(1) < 1)
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
		func_1028(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1025(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1029(iParam0);
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
	fVar15 = func_1030(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1031(iParam0))
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
		func_1032((*Global_1900383)[iParam0]->f_26);
		func_1033((*Global_1900383)[iParam0]->f_26);
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
	if (func_906(iVar0) && !bVar9)
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
	iVar21 = func_1027(iParam0);
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

int func_519(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_520(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_521(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_522(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_523(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_524(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_517(iParam0))
	{
		return false;
	}
	iVar0 = func_208(iParam0);
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

void func_525(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_517(iParam0))
	{
		return;
	}
	iVar0 = func_208(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_526(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_695(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_527(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1034())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_695(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1035(iVar0);
			func_1036(iVar0, 0, 0);
		}
		func_695(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_95(func_94(1644987397), iVar1);
	}
}

bool func_528(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return func_244(iParam0, 67108864);
}

void func_529(int iParam0)
{
	StringCopy(&cVar0, func_1037(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1038(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_530(int iParam0)
{
	StringCopy(&cVar0, func_1037(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1038(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_531(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_532(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_533(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_534(int iParam0)
{
	if (!func_497(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_535(int iParam0)
{
	if (func_497(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_536(int iParam0)
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

float func_537()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_538(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1039(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_20() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_539(int iParam0)
{
	if (!func_977(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_540(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

bool func_541(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1040(iParam0);
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

int func_542(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_555(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_543(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_544(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_545()
{
	return Global_40.f_11095.f_35;
}

void func_546(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1041(iParam0, 0);
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
		func_547(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_547(int iParam0)
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
			func_1041(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1042(1);
	}
}

bool func_548(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_549()
{
	iVar0 = func_1043((*Global_1347702)[9]->f_15);
	iVar1 = func_1043((*Global_1835011)[69]->f_1);
	if (func_1044(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_550(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return func_320((*Global_1835011)[iParam0]->f_1, 1);
}

int func_551(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1045(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1046(iVar6);
	}
	return iVar5;
}

int func_552(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1047(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_553(int iParam0, bool bParam1)
{
	func_1048(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_554(int iParam0)
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

void func_555(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_553(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_556(2, *uParam0);
		}
		else
		{
			func_557(2, *uParam0);
		}
	}
	func_1049(uParam0);
}

void func_556(int iParam0, int iParam1)
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

void func_557(int iParam0, int iParam1)
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

void func_558(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1050(iParam0, iParam1, bParam2);
}

int func_559(int iParam0)
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

int func_560(int iParam0)
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

void func_561(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1051();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1052(iParam0);
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
	if (func_587(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1053())
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
	Global_40.f_11095.f_35 = func_302(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1051();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1054(iVar1);
		func_1056(func_1055(), 0, 4000);
		func_1057(Global_40.f_11095.f_35);
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
		func_1058(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_95(func_94(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_560(14))
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
					sParam4 = func_1059(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_695(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_695(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_560(4))
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
					sParam4 = func_1059(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_695(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_695(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_94(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_355(10, 1);
	}
}

void func_562(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_563(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_564(int iParam0)
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

bool func_565(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_566(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1060(iParam0) && func_1061(iParam0))
		{
			func_1062(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_567(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1063(iParam0, iParam1);
	Var0 = { func_676(iParam0, 0, 1) };
	iVar5 = func_1064(iParam0, &Var0, 0, 0);
	iVar6 = func_1065(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_585(iParam0, -2051813666))
		{
			func_318(583, 1);
		}
		else
		{
			func_318(582, 0);
		}
	}
	if (func_1066(iParam0, &Var0, *iParam1, 0, 0))
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

void func_568(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_646(iParam0, -949239683))
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

int func_569(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_584(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1067(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1068(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_998(bParam2), iParam0, 0);
	return iVar2;
}

bool func_570(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_571(iParam0) != 0;
}

int func_571(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1069())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1070(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_572(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_573(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1069())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_572(iVar0))
		{
			if (func_340(func_1070(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_574(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1071(48);
	func_360(0, -1);
}

bool func_575(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_320((*Global_1347702)[iParam0]->f_15, 1);
}

int func_576(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_577(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_578(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_320((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_579(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_266(iParam0))
	{
		return false;
	}
	return func_184((*Global_1347702)[iParam0]->f_15);
}

int func_580()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_340(func_1072(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_581(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_392() && (func_579(38) || func_575(38)))
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
			if (func_392() && (func_579(39) || func_575(39)))
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
			iVar9 = func_1073(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_392() && (func_579(41) || func_575(41)))
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
			if (func_392() && (func_579(49) || func_575(49)))
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
			iVar9 = func_1073(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1074(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1075(iParam0, iVar13, iVar14))
	{
	}
	if (func_1076(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1077(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1078(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1079(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1080(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_582(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_583(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_392() && (func_579(38) || func_575(38)))
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
			if (func_392() && (func_579(39) || func_575(39)))
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
			if (func_392() && (func_579(49) || func_575(49)))
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
		if (func_392() && (func_579(38) || func_575(38)))
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
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_702(_create_var_string(2, sVar0), _create_var_string(2, func_1082(func_577(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_392() && (func_579(39) || func_575(39)))
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
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_392() && (func_579(49) || func_575(49)))
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
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1081(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_584(int iParam0)
{
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_585(int iParam0, int iParam1)
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

bool func_586(int iParam0, int iParam1)
{
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_587(int iParam0)
{
	if (!func_1083(iParam0))
	{
		return false;
	}
	return func_1084(iParam0);
}

void func_588(int iParam0)
{
	if (!func_1083(iParam0))
	{
		return;
	}
	func_1085(iParam0);
	func_1086(iParam0);
}

int func_589(int iParam0)
{
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_590(int iParam0, bool bParam1)
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
	if (func_565(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1087(iVar0) || func_122(iVar0))
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

int func_591(int iParam0, bool bParam1)
{
	if (!func_565(iParam0, 0))
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

void func_592(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_679(iParam0))
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

bool func_593(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_998(bParam0));
}

bool func_594(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_676(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1088((386 + iVar28), 1);
			if (func_1089(iParam0, &Var0, iVar5, 0))
			{
				if (func_1090(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1091(iParam0, Var0, iVar5, 0) };
					func_1092(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_593(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_595(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1093(iParam0, iParam1);
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

bool func_595(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_597(iParam0))
	{
		return false;
	}
	if (!func_593(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_596(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_591(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_592(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1094(iVar0);
			}
		}
		if (!func_1066(iParam0, &uVar1, 1, 0, 0))
		{
			func_1062(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1095(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_594(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_594(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_594(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1053())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1096(iVar0))
				{
					func_594(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_594(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1097(Global_35, 2, 0, 1);
				if ((((func_679(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_587(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_679(iVar7) && func_587(24))
				{
					if (!func_594(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_594(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_594(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_318(480, 1);
	}
	return true;
}

bool func_597(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_598(int iParam0, int iParam1, int iParam2)
{
	if (!func_597(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_679(iVar4))
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
	if (func_340(611073244, 1, 0) && iParam2 == -897553835)
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
		func_633(func_1098(iParam0), func_632(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_320((*Global_1835011)[14]->f_1, 1))
			{
				func_318(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_593(0))
	{
		if (func_595(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_638(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_599(int iParam0)
{
	if ((iParam0 == -615217896 && !func_331()) || iParam0 != -615217896)
	{
		if (func_1099(Global_35, iParam0, &uVar0))
		{
			func_617(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_623();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_623();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_623();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_621();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_619();
			break;
	}
}

void func_600(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_619();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_620();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_621();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_622();
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
			func_623();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1100();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1101();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_601(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_602(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_603(int iParam0)
{
	bVar0 = func_585(iParam0, -2017733358);
	if (func_1102() < 3)
	{
		if (bVar0)
		{
			if (func_1104(func_1103(iParam0), iParam0))
			{
				func_633(79, func_632(func_1103(iParam0)), 1);
			}
			else
			{
				func_633(78, func_632(func_1103(iParam0)), 1);
			}
		}
		else
		{
			func_633(80, func_632(func_1105(iParam0)), 1);
		}
	}
}

bool func_604()
{
	if (((((func_1106(839908568, 400) || func_1106(-1134030454, 400)) || func_1106(623353496, 400)) || func_1106(-344413337, 400)) || func_1106(-1664948962, 400)) || func_1106(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_605(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_713(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_526(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_527(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_606(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_581(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_583(51, 0, 0, 0, 0, -1, 0);
			func_1107(8192);
			break;
		case 581047644:
			func_581(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_583(51, 0, 0, 0, 0, -1, 0);
			func_1107(524288);
			break;
		case -644199619:
			func_581(39, 0, 0, 0, 0, 0, 1, 0);
			func_583(39, 0, 0, 0, 0, -1, 0);
			func_1108(16);
			break;
		case 684296857:
			func_581(41, 0, 0, 0, 0, 0, 1, 0);
			func_583(41, 0, 0, 0, 0, -1, 0);
			func_1109(8);
			break;
		case 466137807:
			func_581(49, 0, 0, 0, 0, 0, 1, 0);
			func_583(49, 0, 0, 0, 0, -1, 0);
			func_1110(16);
			break;
		case -1087522507:
			func_581(43, 0, 0, -1791518714, func_1111(1), 0, -1, 0);
			func_1112(1);
			break;
		case -405829000:
			func_581(43, 0, 0, -2087881550, func_1111(2), 0, -1, 0);
			func_1112(2);
			break;
		case 378660860:
			func_581(43, 0, 0, 1908068621, func_1111(4), 0, -1, 0);
			func_1112(4);
			break;
		case 1566111097:
			func_581(43, 0, 0, 1611247019, func_1111(8), 0, -1, 0);
			func_1112(8);
			break;
		case 1276007140:
			func_581(43, 0, 0, 1319635688, func_1111(16), 0, -1, 0);
			func_1112(16);
			break;
	}
}

void func_607(int iParam0)
{
	if (func_1113() == 1)
	{
		if (func_575(39))
		{
			func_318(342, 0);
		}
		else
		{
			func_318(343, 0);
			func_1108(1);
		}
	}
	if (func_1113() >= 30)
	{
		func_318(344, 0);
	}
	func_581(39, 0, 0, 0, 0, 0, -1, 0);
	func_583(39, 0, 0, func_1113(), 30, 1, 0);
}

void func_608(int iParam0)
{
	if (func_1114() == 1)
	{
		if (func_575(49))
		{
			func_318(409, 0);
		}
		else
		{
			func_318(410, 0);
			func_1110(1);
		}
	}
	if (func_1114() >= 10)
	{
		func_318(411, 0);
	}
	func_581(49, 0, 0, 0, 0, 0, -1, 0);
	func_583(49, 0, 0, func_1114(), 10, 1, 0);
}

void func_609(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_318(437, 0);
			func_318(440, 0);
			func_1115(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_581(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_583(51, 0, 0, sVar0, func_1073(-949689219, 20), 1, 0);
			func_1107(1);
			func_1116(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1115(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_581(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_583(51, 0, 0, sVar0, func_1073(-1248968496, 20), 1, 0);
			func_1107(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1115(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_581(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_583(51, 0, 0, sVar0, func_1073(1706369307, 20), 1, 0);
			func_1107(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1115(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_581(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_583(51, 0, 0, sVar0, func_1073(1520110311, 20), 1, 0);
			func_1107(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_318(438, 0);
			func_1115(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_581(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_583(51, 0, 0, sVar0, func_1073(-1992824800, 20), 1, 0);
			func_1107(32768);
			break;
		default:
			func_318(439, 0);
			break;
	}
}

void func_610()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_611(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_575(43))
		{
			if (iParam0 == 281887510)
			{
				func_318(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_318(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_318(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_318(400, 0);
			}
		}
		else if (func_585(iParam0, 412399755))
		{
			func_1117(-1791518714);
			if (func_1118() == 0)
			{
				func_360(0, 10);
				iVar1 = func_1119(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1120(iParam0) < func_1121(iParam0))
					{
						func_581(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_583(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_575(44))
		{
			if (iParam0 == -222563712)
			{
				func_318(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_318(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_318(401, 0);
			}
		}
		else if (func_585(iParam0, 709057512))
		{
			func_1117(-2087881550);
			if (func_1118() == 1)
			{
				func_360(0, 10);
				iVar1 = func_1119(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1120(iParam0) < func_1121(iParam0))
					{
						func_581(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_583(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_575(45))
		{
			if (iParam0 == 2116770557)
			{
				func_318(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_318(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_318(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_318(398, 0);
			}
		}
		else if (func_585(iParam0, -1478961327))
		{
			func_1117(1908068621);
			if (func_1118() == 2)
			{
				func_360(0, 10);
				iVar1 = func_1119(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1122(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1123(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1071(48);
					}
					if (func_1120(iParam0) < func_1121(iParam0))
					{
						func_581(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_583(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1120(iParam0) < func_1121(iParam0))
					{
						func_581(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_583(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_575(46))
		{
			if (iParam0 == 2085530337)
			{
				func_318(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_318(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_318(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_318(406, 0);
			}
		}
		else if (func_585(iParam0, -1238404098))
		{
			func_1117(1611247019);
			if (func_1118() == 3)
			{
				func_360(0, 10);
				iVar1 = func_1119(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1120(iParam0) < func_1121(iParam0))
					{
						func_581(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_583(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_575(47))
		{
			if (iParam0 == -1521783510)
			{
				func_318(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_318(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_318(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_318(403, 0);
			}
		}
		else if (func_585(iParam0, 1160548794))
		{
			func_1117(1319635688);
			if (func_1118() == 4)
			{
				func_360(0, 10);
				iVar1 = func_1119(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1120(iParam0) < func_1121(iParam0))
					{
						func_581(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_583(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_612(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1122(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1123(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1071(48);
		}
	}
}

void func_613(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_340(func_1124(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1125(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1126(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_614(int iParam0, int iParam1, int iParam2)
{
	if (func_20() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_605(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_605(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_605(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_605(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_605(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_605(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_605(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_605(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_605(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_605(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_605(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_605(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_605(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1127())
			{
				func_605(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_605(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_605(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_605(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_605(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_605(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_605(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_605(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_605(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_605(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_605(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_605(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_605(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_615(int iParam0)
{
	if (func_575(41))
	{
		func_318(363, 0);
	}
	else
	{
		func_318(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1128(-1865241121);
			func_1129(-642026005);
			func_1130(-642026005);
			func_360(0, 10);
			break;
		case -2108314374:
			func_1128(2117142684);
			func_1129(-940584364);
			func_1130(-940584364);
			func_360(0, 10);
			break;
		case -1193798153:
			func_1128(-1409326024);
			func_1129(1972645282);
			func_1130(1972645282);
			func_360(0, 10);
			break;
		case -787702678:
			func_1128(-641744968);
			func_1129(1667205433);
			func_1130(1667205433);
			func_360(0, 10);
			break;
		case -804542901:
			func_1128(-946988203);
			func_1129(1362715885);
			func_1130(1362715885);
			func_360(0, 10);
			break;
		case -1696275132:
			func_1128(-646136018);
			func_1129(1053540370);
			func_1130(1053540370);
			func_360(0, 10);
			break;
		case -161595323:
			func_1128(-955835837);
			func_1129(-1100103852);
			func_1130(-1100103852);
			func_360(0, 10);
			break;
		case -1114363619:
			func_1128(-179276075);
			func_1129(-1409869209);
			func_1130(-1409869209);
			func_360(0, 10);
			break;
		case -368407134:
			func_1128(-492711560);
			func_1129(-1760235357);
			func_1130(-1760235357);
			func_360(0, 10);
			break;
		case 1997759228:
			func_1128(1764383959);
			func_1129(-138366827);
			func_1130(-138366827);
			func_360(0, 10);
			break;
		case 1265573293:
			func_1128(317501533);
			func_1129(-1261163843);
			func_1130(-1261163843);
			func_360(0, 10);
			break;
		case -1030441283:
			func_1128(817753087);
			func_1129(-963523016);
			func_1130(-963523016);
			func_360(0, 10);
			break;
		case -1490884871:
			func_1128(576606016);
			func_1129(560825326);
			func_1130(560825326);
			func_360(0, 10);
			break;
		case -395458616:
			func_1128(814934957);
			func_1129(858269539);
			func_1130(858269539);
			break;
	}
}

void func_616(int iParam0, int iParam1)
{
	func_1131(iParam0, iParam1, &uVar0);
}

int func_617(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_676(iParam1, 1, 0) };
		iParam3 = func_677(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1132(iParam1, iParam2, func_664(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1133(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_664(iParam3, 1)])
			{
				func_675(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1134(32768) && iParam1 != &Global_1946804->f_57[func_664(iParam3, 1)])
			{
				func_1135();
				func_675(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_675(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1136(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_675(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1137(0);
			func_1138(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_675(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_618(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1097(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1097(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1139("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1140(&Var3, iVar2, iVar0, iVar1))
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
						func_1141(iVar0);
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

void func_619()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_620()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_621()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_622()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_623()
{
	func_1142();
	func_1143();
	func_1144();
}

void func_624(int iParam0, int iParam1, bool bParam2)
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

void func_625(int iParam0, bool bParam1)
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
	func_1081(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_626(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_627(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_628(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_629(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_630(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_631(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_632(int iParam0)
{
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_633(int iParam0, int iParam1, bool bParam2)
{
	func_671(iParam0, &iVar0, &iVar1);
	if (!func_672(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1145(iParam0, 1024))
	{
		return;
	}
	func_673(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_634(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_671(iParam0, &iVar0, &iVar1);
	if (!func_672(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1145(iParam0, 1024))
	{
		return;
	}
	func_673(iVar0, iVar1);
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

int func_635()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1069())
	{
		return func_636();
	}
	iVar4 = (func_1069() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1069())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1146(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1070(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_636()
{
	iVar0 = get_random_int_in_range(0, func_1069());
	return func_1070(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_637(int iParam0)
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

bool func_638(int iParam0, int iParam1, int iParam2)
{
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_676(iParam0, 0, 1) };
	Var5 = { func_1091(iParam0, Var0, Var0.f_4, 0) };
	return func_1147(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_639(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_589(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1148(81053684, 0) <= 0)
			{
				func_675(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_675(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1149(iParam0);
			if (func_1150(iVar0))
			{
				func_1151(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_675(30, iParam0, 0, 0, 0);
			}
			if (func_666() == -2125499975 || func_666() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_675(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_666() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_675(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1152(-525676072, 0))
			{
				if (func_1153(-525676072, &iVar1))
				{
					func_675(33, iVar1, 0, 0, 0);
				}
			}
			func_675(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1154(99217379))
		{
			func_617(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_588(24);
		if (func_618(&iVar2, 0))
		{
			func_594(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_640(int iParam0)
{
	if (func_585(iParam0, 943695443))
	{
		func_1155(0, iParam0);
	}
	else if (func_585(iParam0, -2096528786))
	{
		func_1155(1, iParam0);
	}
	else if (func_585(iParam0, -1094167013))
	{
		func_1155(2, iParam0);
	}
	else if (func_585(iParam0, 1936654645))
	{
		func_1155(3, iParam0);
	}
	else if (func_585(iParam0, 1306489306))
	{
		func_1155(4, iParam0);
	}
	else if (func_585(iParam0, 435762317))
	{
		func_1155(5, iParam0);
	}
	else if (func_585(iParam0, 1259363210))
	{
		func_1155(6, iParam0);
	}
	else if (func_585(iParam0, 881398259))
	{
		func_1155(7, iParam0);
	}
	else if (func_585(iParam0, -541549214))
	{
		func_1155(8, iParam0);
	}
	else if (func_585(iParam0, 130796156))
	{
		func_1155(-1, iParam0);
	}
}

int func_641(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1156(&Var4, 1356624740);
	return func_1157(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_642(int iParam0)
{
	if (!func_565(iParam0, 0))
	{
		return Var0;
	}
	if (func_585(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_585(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_585(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_585(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_643(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_320((*Global_1835011)[4]->f_1, 1))
				{
					func_318(109, 1);
				}
			}
			break;
	}
}

void func_644(int iParam0, char* sParam1)
{
	sVar0 = func_1159(func_1158(0));
	func_695(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1160(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_645(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_565(iParam0, 0))
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
	if (!func_1161())
	{
		func_1162(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1163(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1163(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_586(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_584(iParam0);
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
	else if (!func_1164(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1165(_create_var_string(10, &cVar2, _create_var_string(0, func_632(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_585(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_632(iParam0));
	}
	func_695(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_646(int iParam0, int iParam1)
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

struct<10> func_647(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_648(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_649(int iParam0, int iParam1)
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

bool func_650(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1166(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1166(iParam0, Var2, 1))
				{
					if (func_1167(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1167(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_318(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_190(0, 0, 1))
		{
			func_360(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_651(int iParam0)
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

void func_652(int iParam0)
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
		func_318(iVar0, 0);
	}
}

void func_653()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1168(0);
			_unlock_set_unlocked(-121456797, false);
			func_1169();
		}
		return;
	}
	if (!func_320((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1170();
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
	func_1168(1);
}

void func_654()
{
	if (!func_320((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_311(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_655()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1171(0);
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
	if (!func_320((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1171(1);
}

void func_656()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1172(15000, 0, 0, 0, 1);
			func_1171(0);
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
	if (!func_320((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_276(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1171(1);
}

void func_657()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_340(1191437462, 1, 0) && !func_184((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_311(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1173(1))
			{
				func_629(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_340(1119149048, 1, 0) && !func_184((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_311(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1173(2))
			{
				func_629(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1173(4))
		{
			func_629(4);
		}
		if (func_1173(0))
		{
			func_1174(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_340(1191437462, 1, 0))
			{
				func_660(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_340(1119149048, 1, 0))
			{
				func_660(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1173(1))
		{
			func_1174(1);
		}
		if (func_1173(2))
		{
			func_1174(2);
		}
		if (func_1173(4))
		{
			func_1174(4);
		}
		if (!func_1173(0))
		{
			func_629(0);
		}
	}
}

void func_658()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_320((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1175() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_592(127400949);
		if (func_594(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1175() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1176(-2055673461, Var1, 1423542233);
		func_1176(-202131179, Var1, -1264898804);
		func_1176(2013836545, Var1, 1592019450);
		func_1176(1497476650, Var1, 1117400455);
		func_1176(1063571467, Var1, 1150213537);
		func_1176(2107224237, Var1, 1598825281);
		func_1176(1747981656, Var1, -712527121);
		func_1176(-1371140647, Var1, 454332195);
		func_1176(-19142973, Var1, 256105670);
		func_1176(-2074737817, Var1, -1328061889);
		func_1176(-1114256243, Var1, -782241404);
		func_1176(-1653277288, Var1, 1669853467);
		func_1176(1869398132, Var1, -1559225678);
		func_1176(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_679(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_587(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_587(24) && func_679(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_679(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_587(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_659()
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

int func_660(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1067(iParam0, 1);
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
			func_645(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_340(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_642(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_569(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_569(iParam0, 0, 0) - iParam1) < 0)
		{
			func_660(iParam0, func_569(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_584(iParam0) == -427144552)
	{
		if (!func_1177(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1178(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_593(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_645(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1179(iParam0, iParam1);
	return 1;
}

bool func_661(int iParam0)
{
	switch (func_589(iParam0))
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

void func_662(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_589(iParam0))
	{
		case -2061583405:
			bVar0 = func_1180(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1180(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1180(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1180(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1180(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1180(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1181();
	}
	if (bParam1)
	{
		func_1182(0, 0);
	}
}

int func_663(int iParam0)
{
	Var0 = { func_676(iParam0, 1, 0) };
	return func_677(Var0.f_4);
}

int func_664(int iParam0, int iParam1)
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

void func_665(int iParam0)
{
	if (func_20() == -1)
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
		iVar0 = func_664(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1183(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_666()
{
	return Global_1946804->f_1;
}

bool func_667(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1184(iParam6);
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
		func_1186(uParam0, func_1185(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_664(iVar3, 1);
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
							if (func_1187(iVar3) && func_1188(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1189(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_668(int iParam0, int iParam1)
{
	if (func_20() == -1)
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

int func_669(int iParam0, int iParam1)
{
	vVar0 = { func_668(iParam0, iParam1) };
	return vVar0.x;
}

void func_670(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_671(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_672(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1190(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1191(iParam0))
	{
		return false;
	}
	if (func_1192(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1145(iParam0, 1)) || func_82(32768))
	{
		if (!func_1145(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1193())
	{
		return false;
	}
	return true;
}

void func_673(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_674(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_675(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1194(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1195(Var0);
}

struct<5> func_676(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1196(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_584(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1091(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1197(bParam1) };
			if (bParam2 && func_1198(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1089(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1089(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1090(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1199(bParam1) };
			switch (func_589(iParam0))
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
			if (func_1200(iParam0, -1823706425))
			{
				Var0 = { func_1091(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1200(iParam0, -1483207246))
			{
				Var0 = { func_1091(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1201(Var0, &Var27, bParam1, 0))
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

int func_677(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1202(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_678(int iParam0)
{
	func_1183(Global_1946804->f_1497.f_1[func_664(iParam0, 1)], 2, 6);
	func_1183(Global_1946804->f_1378.f_1[func_664(iParam0, 1)], 2, 6);
}

bool func_679(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_680(int iParam0)
{
	return iParam0 != 0;
}

int func_681(int iParam0)
{
	iVar0 = -1;
	if (!func_680(iParam0))
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

bool func_682(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_683(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1203(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_684(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_685(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_686(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_687(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_688(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_689(int iParam0, int iParam1)
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

void func_690(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1204(iParam0, iParam6);
	func_1205(iParam0, iParam5);
	func_1206(iParam0, iParam4);
	func_1207(iParam0, iParam3);
	func_1208(iParam0, iParam2);
	func_1209(iParam0, iParam1);
}

bool func_691(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_688(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_687(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_686(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_683(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_684(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_685(iParam0);
	if (iVar5 < 1 || iVar5 > func_689(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_692(int iParam0, bool bParam1)
{
	return func_1044(func_278(), iParam0, bParam1);
}

void func_693(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_694(int iParam0, int iParam1)
{
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1067(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1139("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1140(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_679(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1141(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1141(iVar1);
	}
	return false;
}

var func_695(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _0xb249ebcb30dd88e0(&Var0, &Var13, iParam8);
	func_1210(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_696()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1211(iVar1);
		if (!_unlock_is_visible(func_1212(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_697()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1211(iVar0);
		if (!_unlock_is_visible(func_1212(iVar1)))
		{
			_unlock_set_visible(func_1212(iVar1), true);
		}
		iVar0++;
	}
}

bool func_698(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_977(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_699(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_502(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_700()
{
	return (func_191(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_701(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_20() != -1)
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
	if (!func_565(iVar0, 0))
	{
		return 0;
	}
	if (!func_1213(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1214(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_585(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_676(iVar0, 0, 1) };
	iVar10 = func_1215(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1216(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1217(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_311(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1172(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_702(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_703(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_695(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_704(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_705(bool bParam0, bool bParam1)
{
	if (func_20() != -1)
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

void func_706(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1034())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1034())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_186(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_265(iParam0);
	if (func_188(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_188(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1218(1, iVar1);
					func_1218(8, iVar1);
					func_1218(7, iVar1);
					break;
				case 12:
					func_1218(6, iVar1);
					break;
				case 53:
					func_1218(3, iVar1);
					func_1218(7, iVar1);
					func_1218(4, iVar1);
					break;
				case 20:
					func_1218(8, iVar1);
					break;
				case 19:
					func_1218(1, iVar1);
					func_1218(2, iVar1);
					break;
				case 24:
					func_1218(3, iVar1);
					func_1218(9, iVar1);
					func_1218(20, iVar1);
					break;
				case 28:
					func_1218(1, iVar1);
					break;
				case 34:
					func_1218(23, iVar1);
					func_1218(2, iVar1);
					func_1218(18, iVar1);
					break;
				case 29:
					func_1218(0, iVar1);
					func_1218(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1218(0, iVar1);
					func_1218(3, iVar1);
					func_1218(2, iVar1);
					func_1218(11, iVar1);
					func_1218(6, iVar1);
					func_1218(25, iVar1);
					func_1218(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1218(5, iVar1);
					break;
				case 63:
					func_1218(1, iVar1);
					func_1218(3, iVar1);
					break;
				case 37:
					func_1218(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_356(0, 10, 11, 2116153146))
			{
				func_1218(7, iVar1);
				func_1218(4, iVar1);
			}
			else if (iParam0 == func_356(0, 7, 11, -379687487))
			{
				func_1218(8, iVar1);
				func_1218(15, iVar1);
			}
			else if (iParam0 == func_356(0, 8, 11, -1386089015))
			{
				func_1218(3, iVar1);
			}
			else if (iParam0 == func_356(0, 11, 11, -1952009645))
			{
				func_1218(6, iVar1);
				func_1218(3, iVar1);
			}
			else if (iParam0 == func_356(0, 12, 11, 2065895756))
			{
				func_1218(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1219()));
	if (!func_1220(629))
	{
		func_318(629, 0);
	}
}

int func_707(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_708(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_709(int iParam0, int iParam1, int iParam2)
{
	if (!func_708(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -816321659;
			*iParam2 = -987026056;
			break;
		case 1:
			*iParam1 = -816321659;
			*iParam2 = -1822602787;
			break;
		case 2:
			*iParam1 = -816321659;
			*iParam2 = -1602329569;
			break;
		case 3:
			*iParam1 = -816321659;
			*iParam2 = 1881899898;
			break;
		case 4:
			*iParam1 = -816321659;
			*iParam2 = -1906196506;
			break;
		case 5:
			*iParam1 = -816321659;
			*iParam2 = -674995867;
			break;
		case 6:
			*iParam1 = -816321659;
			*iParam2 = -734156617;
			break;
		case 7:
			*iParam1 = -816321659;
			*iParam2 = 261758426;
			break;
		case 8:
			*iParam1 = -816321659;
			*iParam2 = 1545586131;
			break;
		case 9:
			*iParam1 = -816321659;
			*iParam2 = -489125522;
			break;
		case 10:
			*iParam1 = -816321659;
			*iParam2 = 1190367681;
			break;
		case 11:
			*iParam1 = -816321659;
			*iParam2 = -1179367301;
			break;
		case 12:
			*iParam1 = -816321659;
			*iParam2 = 1154513253;
			break;
		case 13:
			*iParam1 = -816321659;
			*iParam2 = -1825640214;
			break;
		case 14:
			*iParam1 = -816321659;
			*iParam2 = 1209829059;
			break;
		case 15:
			*iParam1 = -816321659;
			*iParam2 = -1713230487;
			break;
		case 16:
			*iParam1 = -816321659;
			*iParam2 = 2092309893;
			break;
		default:
			return false;
	}
	return true;
}

int func_710()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_711(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_712(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1221(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_710())
	{
		return -1;
	}
	iVar0 = func_711(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_472(iVar1, 0);
	func_544(iVar1, 0);
	func_1222(iVar1, 0);
	func_1223(iVar1, 0);
	func_1224(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1225(iVar1, iParam4);
	}
	return iVar1;
}

int func_713(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_340(1811977508, 1, 0))
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
			if (func_565(iVar25, 0) && func_585(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_714(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_715(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	cVar0 = func_358(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_716(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_717(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1226(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1227() == 0 && !func_1228(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1229(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1230();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1231(Global_1310720->f_21))
	{
		bParam10 = bParam11;
	}
	Var15.f_2 = 723128514;
	_datafile_get_data_node_index(&uVar25, &Var15);
	while (_datafile_get_num_children(Var15, uVar25) > iVar0)
	{
		iVar1 = 0;
		Var20.f_2 = -1148748386;
		Var20.f_3 = iVar0;
		_datafile_get_data_node_index(&uVar26, &Var20);
		while (_datafile_get_num_children(Var20, uVar26) > iVar1)
		{
			vVar7 = { func_1232(iVar0, iVar1) };
			bVar11 = func_1233(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_393(vVar7)) && func_1234(iVar0, bParam8, iParam12)) && !func_1235(iVar0)) || bVar11)
			{
				if (func_1236(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
				{
					vVar4 = { vVar7 };
					bVar2 = vdist(vParam0, vVar7);
					*iParam3 = iVar0;
					*iParam4 = iVar1;
					if (bVar11)
					{
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					_0x748c5f51a18cb8f0(1);
					return vVar4;
				}
			}
		}
	}
}

int func_718(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1237(vParam0);
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

void func_719()
{
	disable_script_brain_set(1);
}

void func_720()
{
}

void func_721()
{
	disable_script_brain_set(2);
}

bool func_722(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_723(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (are_strings_equal(&((*Global_1934603)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_724(int iParam0)
{
	if (func_722(iParam0, 1))
	{
		func_1238(1);
	}
}

int func_725()
{
	return -1904156936;
}

bool func_726(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	switch (func_188(iParam0))
	{
		case 1:
			iVar0 = func_265(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_265(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_727()
{
	return 166188472;
}

int func_728()
{
	return 2015838421;
}

int func_729()
{
	return 207908017;
}

var func_730(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_731(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_732(var uParam0)
{
	Var1.f_10 = -1569615261;
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!is_string_null_or_empty(uParam0->f_3[iVar0]->f_9) && is_entity_dead(uParam0->f_3[iVar0]->f_2))
		{
			_copy_memory(uParam0->f_3[iVar0], &Var1, 13);
		}
		iVar0++;
	}
}

int func_733(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (does_entity_exist(uParam0->f_3[iVar0]->f_2) && uParam0->f_3[iVar0]->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_734(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1239(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1240(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1241(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_735(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if ((!is_string_null_or_empty(uParam0->f_3[iVar0]->f_9) && !is_string_null_or_empty(sParam1)) && are_strings_equal(uParam0->f_3[iVar0]->f_9, sParam1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_736(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < uParam0->f_3)
	{
		if (!does_entity_exist(uParam0->f_3[iVar0]->f_2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_737(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_738(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_739()
{
	return Global_1572864->f_8;
}

void func_740(char[4] cParam0, int iParam1)
{
	func_1242(cParam0, iParam1);
	func_1243(cParam0, iParam1, 26);
}

int func_741(var uParam0)
{
	return 1;
}

int func_742(var uParam0)
{
	return 1;
}

int func_743(char[4] cParam0)
{
	func_145(cParam0, Global_35, "ARTHUR", 0);
	func_1244();
	func_135(cParam0, 1);
	func_1245(11, 0);
	func_1246(cParam0, &(iLocal_315[1]), 128);
	func_1247(cParam0, 1);
	func_1248(7);
	func_261();
	func_1249(&uLocal_387);
	_0x931b241409216c1f(&(iLocal_315[1]), &(iLocal_315[2]), 0);
	_0xba8818212633500a(&(iLocal_315[2]), 0, 1);
	set_ped_can_ragdoll(&(iLocal_315[1]), false);
	set_anim_scene_entity(iVar443, "player_zero", Global_35, 0);
	set_anim_scene_entity(iVar443, "CS_MrsAdler", &(iLocal_315[1]), 0);
	start_anim_scene(iVar443);
	func_1250(&uLocal_512, 2137.91f, -956.77f, 40.85f, 5f, 1, 32, 0);
	func_823(2101399188);
	_0x0d7fd6a55fd63aef(25, 3, 1);
	_0x0d7fd6a55fd63aef(19, 3, 1);
	_0x0d7fd6a55fd63aef(21, 3, 1);
	_0x1e017404784aa6a3(&(iLocal_315[1]), 1331076740);
	stop_ped_speaking(Global_35, true);
	set_scenario_type_enabled("PROP_HUMAN_PIANO_SKETCHY", true);
	if (does_entity_exist(iVar417))
	{
		set_object_as_no_longer_needed(&iLocal_420);
	}
	if (does_entity_exist(iVar418))
	{
		set_object_as_no_longer_needed(&iLocal_421);
	}
	if (does_entity_exist(iVar419))
	{
		set_object_as_no_longer_needed(&iLocal_422);
	}
	func_165(&iLocal_419, 1, 1, 1);
	set_ped_can_use_auto_conversation_lookat(Global_35, true);
	return 1;
}

bool func_744(char[4] cParam0)
{
	func_1251(cParam0);
	func_1252(cParam0);
	func_1253(cParam0);
	func_1254(cParam0);
	func_1255(cParam0);
	func_1256(cParam0);
	if (!is_ped_on_mount(Global_35))
	{
		if (iVar1086 == 1)
		{
			func_1257(3);
			iLocal_1089 = 0;
		}
	}
	else
	{
		iLocal_1089 = 1;
	}
	if (func_172(func_253(cParam0), 0))
	{
		_0xc71d07c96946e263(player_id(), func_253(cParam0));
	}
	switch (func_1258(cParam0))
	{
		case 0:
			if (iVar983 == 1)
			{
				set_ped_max_move_blend_ratio(Global_35, 1.5f);
			}
			if (func_388(iLocal_115, 512))
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			func_1260(Global_35, func_1259(2, 0), &uLocal_480, 50f, 30f, 15f, 14f, 0.5f, 1, 0, 1, 1, 1);
			if ((!is_ped_on_mount(&(iLocal_315[1])) && iVar983 == 5) && func_1261(&(iLocal_315[1]), func_1259(2, 2), 1) <= 8f)
			{
				_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
				set_anim_scene_bool(iVar438, "Internal_Loop", true, false);
				func_1262(cParam0, &(iLocal_315[1]), 1);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			_0xe296208c273bd7f0(2000, -1, 0, 17, 1, 0);
			func_1260(Global_35, func_1259(2, 0), &uLocal_480, 50f, 35f, 32f, 30f, 0.1f, 0, 0, 1, 1, 1);
			if (_is_anim_scene_active(iVar438))
			{
				func_1262(cParam0, &(iLocal_315[1]), 1);
				func_1263(cParam0);
				func_134(cParam0, 29);
			}
			break;
	}
	return func_1258(cParam0) == 29;
}

int func_745(char[4] cParam0)
{
	_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	if (does_group_exist(iVar470))
	{
		remove_group(iVar470);
	}
	func_1247(cParam0, 0);
	func_1262(cParam0, &(iLocal_315[1]), 1);
	func_1245(11, 1);
	func_1264(cParam0, &(iLocal_315[1]), 128);
	func_454();
	_0x660a8f876df1d4f8(25);
	_0x660a8f876df1d4f8(21);
	_0x660a8f876df1d4f8(19);
	_0x660a8f876df1d4f8(6);
	_0x2b4ce170de09f346(&(iLocal_315[1]), 1331076740);
	set_ped_can_use_auto_conversation_lookat(Global_35, false);
	return 1;
}

void func_746(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1265(cParam0, iParam1);
	func_1243(cParam0, iParam1, iParam2);
	func_1266(cParam0, &iParam3, iParam1, 0);
	func_1266(cParam0, &iParam4, iParam1, 2);
	func_1266(cParam0, &iParam5, iParam1, 4);
	func_1266(cParam0, &iParam6, iParam1, 5);
	func_1266(cParam0, &iParam7, iParam1, 7);
	func_949(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1267(cParam0, iParam1, cVar0);
	func_1268(cParam0, iParam1, iParam10);
}

int func_747(char[4] cParam0)
{
	if ((!func_1269(cParam0, 1, iVar294) || !func_1270(1, iVar294, cParam0)) || !func_804(8 | iVar303, iVar294, cParam0, 1))
	{
		return 0;
	}
	if (!bVar292)
	{
		if (!does_entity_exist(iVar424))
		{
			iLocal_427 = func_924(2024948086, 2130.47f, -967.15f, 41.62f, 100.51f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			_task_start_scenario_in_place(iVar424, 696740378, -1, false, 0, -1f, false);
		}
		if (!func_120(cParam0, 4))
		{
			func_925(&(iLocal_315[3]), 41788943);
		}
		_0x172e9dd35858dcd7(&(iLocal_378[1]));
		func_1271(cParam0);
		func_823(2101399188);
		fLocal_980 = 0.31f;
		fLocal_981 = 0.231f;
		_0xb8c984c0d47f4f07(fVar977, fVar978, 1);
		func_213(&uLocal_1000);
		iLocal_295 = 1;
	}
	else if (does_entity_have_drawable(&(iLocal_315[3])) && _0xa0bc8faed8cfeb3c(&(iLocal_315[3])))
	{
		if ((get_number_of_streaming_requests() == 0 && func_919(&uLocal_1000) > 2f) || func_919(&uLocal_1000) > 15f)
		{
			freeze_entity_position(&(iLocal_378[1]), false);
			func_795(0, 0);
			return 1;
		}
	}
	return 0;
}

int func_748(var uParam0)
{
	func_1272(uParam0, 8192);
	set_ped_config_flag(Global_35, 174, true);
	set_wind_direction(231.2586f);
	set_wind_speed(0f);
	return 1;
}

int func_749(char[4] cParam0)
{
	func_1244();
	func_131(func_1259(2, 0), 30f, 1, 0, 0, 0, 0);
	func_135(cParam0, 1);
	func_213(&uLocal_899);
	func_1273(7);
	freeze_entity_position(&(iLocal_378[1]), false);
	freeze_entity_position(&(iLocal_381[1]), false);
	set_entity_dynamic(&(iLocal_378[1]), true);
	if (does_entity_exist(&(iLocal_414[0])))
	{
		delete_object(iLocal_414[0]);
	}
	if (does_entity_exist(func_253(cParam0)))
	{
		func_1275(func_253(cParam0), func_1274(iVar294), 2, 1073741824);
	}
	func_925(&(iLocal_315[3]), 103259813);
	fLocal_106 = 0f;
	_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ARTURO"));
	func_1276();
	iLocal_466 = 0;
	return 1;
}

bool func_750(char[4] cParam0)
{
	func_1277(cParam0);
	func_1278(cParam0);
	if (iVar1087 >= 1)
	{
		func_1279(cParam0, &uLocal_294, &Local_524, 0f, 0f, 0f, iVar973 == 4);
	}
	if (func_1258(cParam0) > 0 && Global_36.f_2 > 60f)
	{
		func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 1, &Local_524, 1, 0, iVar973 == 5);
	}
	func_1280();
	func_1281();
	func_1282();
	if (func_1283(cParam0) >= 4)
	{
		func_1284(cParam0);
	}
	func_1285(cParam0);
	switch (func_1258(cParam0))
	{
		case 0:
			if (func_1286())
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1287(cParam0, &Local_524))
			{
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (func_1261(&(iLocal_378[1]), func_1288(0), 0) <= 250f)
			{
				if (func_172(iVar424, 0))
				{
					set_ped_as_no_longer_needed(&iLocal_427);
				}
				func_134(cParam0, 3);
			}
			break;
		case 3:
			if (func_804(iVar304 | 16, iVar294, cParam0, 1))
			{
				func_134(cParam0, 4);
			}
			break;
		case 4:
			if (func_1289(-1, 1))
			{
				func_134(cParam0, 5);
			}
			break;
		case 5:
			if (func_1290(-1, 1))
			{
				func_134(cParam0, 6);
			}
			break;
		case 6:
			if (func_1291(-1, 1))
			{
				func_134(cParam0, 29);
			}
			break;
	}
	func_1292(&(iLocal_378[1]), func_1258(cParam0) > 0, 1, 0);
	return func_1258(cParam0) == 29;
}

int func_751(char[4] cParam0)
{
	func_166(iVar303, cParam0, 1);
	func_175(iVar401, 0);
	func_1293();
	return 1;
}

int func_752(char[4] cParam0)
{
	if (func_172(&(iLocal_315[3]), 0))
	{
		set_ped_reset_flag(&(iLocal_315[3]), 29, true);
		freeze_entity_position(&(iLocal_315[3]), true);
	}
	if (func_172(Global_35, 0))
	{
		set_ped_reset_flag(Global_35, 29, true);
		if (!bVar292)
		{
			set_entity_coords(Global_35, Global_36, true, false, true, true);
		}
		freeze_entity_position(Global_35, true);
	}
	if (((((!func_1269(cParam0, 1, iVar295) || !func_1270(1, iVar295, cParam0)) || !func_804(iVar304 | 16 | 8, iVar295, cParam0, 1)) || !func_1291(-1, 0)) || !func_1289(-1, 0)) || !func_1290(-1, 0))
	{
		return 0;
	}
	func_1292(&(iLocal_378[1]), 0, 1, 0);
	if (!bVar292)
	{
		if (func_1294(1))
		{
			iLocal_384[0] = func_1295(408396114, 3273.4f, -608.97f, 41.95f, 200f, 1);
			set_blip_name_from_text_file(&(iLocal_384[0]), "SIS");
			freeze_entity_position(Global_35, false);
			func_812(iVar295, 0);
			_0x172e9dd35858dcd7(&(iLocal_378[1]));
			clear_ped_tasks_immediately(Global_35, false, true);
			func_1292(&(iLocal_378[1]), 1, 1, 0);
			func_1247(cParam0, 5);
			func_1282();
			Local_524.f_1.f_25 = 6;
			func_925(&(iLocal_315[3]), 103259813);
			func_416(&iLocal_115, 16384);
			fLocal_106 = 0f;
			fLocal_980 = 0.411f;
			fLocal_981 = 0.271f;
			_0xb8c984c0d47f4f07(fVar977, fVar978, 1);
			iLocal_295 = 1;
		}
	}
	else if (does_entity_have_drawable(&(iLocal_315[3])) && _0xa0bc8faed8cfeb3c(&(iLocal_315[3])))
	{
		func_1276();
		func_795(0, 0);
		freeze_entity_position(Global_35, false);
		freeze_entity_position(&(iLocal_315[3]), false);
		freeze_entity_position(&(iLocal_378[1]), false);
		set_entity_dynamic(&(iLocal_378[1]), true);
		return 1;
	}
	return 0;
}

int func_753(var uParam0)
{
	func_812(iVar295, 0);
	return 1;
}

int func_754(char[4] cParam0)
{
	func_1244();
	set_ped_reset_flag(&(iLocal_315[3]), 29, true);
	set_ped_reset_flag(Global_35, 29, true);
	func_1250(&uLocal_513, func_1259(4, 1), 5f, 1, 4, 0);
	func_1250(&uLocal_514, func_1259(4, 2), 5f, 1, 4, 0);
	func_925(&(Local_14.f_40[0]), 760163859);
	func_925(&(Local_14.f_40[2]), 760163859);
	func_1296(0);
	func_1297();
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_172(&(Local_14.f_71[iVar0]), 0))
		{
			_0x9587913b9e772d29(&(Local_14.f_71[iVar0]), 0);
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_172(&(Local_14.f_81[iVar0]), 0))
		{
			_0x9587913b9e772d29(&(Local_14.f_81[iVar0]), 0);
		}
		iVar0++;
	}
	if (func_172(&(Local_14.f_71[6]), 0))
	{
		open_sequence_task(&iVar1);
		_task_move_in_traffic_2(0, 3240.31f, -575.44f, 41.84f, 1073741824, 1f, 512, 0);
		task_start_scenario_at_position(0, -258459266, func_1259(4, 13), func_1298(4, 13), 5000, true, false, 0, -1f, false);
		task_follow_nav_mesh_to_coord(0, 3252.76f, -588.66f, 42.02f, 1f, -1, 0.25f, 0, 40000f);
		task_pause(0, 15000);
		_task_move_in_traffic_2(0, func_1259(4, 12), 1073741824, 1f, 512, 0);
		close_sequence_task(iVar1);
		task_perform_sequence(&(Local_14.f_71[6]), iVar1);
		clear_sequence_task(&iVar1);
	}
	if (func_172(&(Local_14.f_71[0]), 0))
	{
		open_sequence_task(&iVar2);
		task_follow_nav_mesh_to_coord(0, 3384.87f, -637.37f, 50.85f, 1f, -1, 0.25f, 0, 40000f);
		task_pause(0, 5000);
		task_follow_nav_mesh_to_coord(0, 3317.53f, -655.47f, 50.85f, 1f, -1, 0.25f, 0, 40000f);
		task_pause(0, 5000);
		set_sequence_to_repeat(iVar2, true);
		close_sequence_task(iVar2);
		task_perform_sequence(&(Local_14.f_71[0]), iVar2);
		clear_sequence_task(&iVar2);
	}
	if (func_172(&(iLocal_315[6]), 0))
	{
		open_sequence_task(&iVar3);
		task_start_scenario_at_position(0, 1978275899, func_1259(16, 0), func_1298(16, 0), 10000, true, false, 0, -1f, false);
		task_start_scenario_at_position(0, -1755170815, func_1259(16, 1), func_1298(16, 1), 10000, true, false, 0, -1f, false);
		task_start_scenario_at_position(0, 1978275899, func_1259(16, 2), func_1298(16, 2), 10000, true, false, 0, -1f, false);
		task_start_scenario_at_position(0, -258459266, func_1259(16, 3), func_1298(16, 3), 10000, true, false, 0, -1f, false);
		set_sequence_to_repeat(iVar3, true);
		close_sequence_task(iVar3);
		task_perform_sequence(&(iLocal_315[6]), iVar3);
		clear_sequence_task(&iVar3);
	}
	if (func_172(&(iLocal_315[8]), 0))
	{
		open_sequence_task(&iVar4);
		task_start_scenario_at_position(0, 1978275899, func_1259(17, 0), func_1298(17, 0), 10000, true, false, 0, -1f, false);
		task_start_scenario_at_position(0, -258459266, func_1259(17, 1), func_1298(17, 1), 10000, true, false, 0, -1f, false);
		task_start_scenario_at_position(0, 1978275899, func_1259(17, 2), func_1298(17, 2), 10000, true, false, 0, -1f, false);
		task_start_scenario_at_position(0, -258459266, func_1259(17, 3), func_1298(17, 3), 10000, true, false, 0, -1f, false);
		task_start_scenario_at_position(0, -1755170815, func_1259(17, 2), func_1298(17, 2), 10000, true, false, 0, -1f, false);
		set_sequence_to_repeat(iVar4, true);
		close_sequence_task(iVar4);
		task_perform_sequence(&(iLocal_315[8]), iVar4);
		clear_sequence_task(&iVar4);
	}
	if (func_172(&(iLocal_315[3]), 0))
	{
		set_entity_no_collision_entity(&(iLocal_315[3]), &(iLocal_378[1]), false);
	}
	func_135(cParam0, 1);
	return 1;
}

bool func_755(char[4] cParam0)
{
	func_1299(cParam0, func_33(cParam0), 8388608);
	func_1285(cParam0);
	func_1300(cParam0);
	func_1301();
	func_1284(cParam0);
	func_1302();
	func_1277(cParam0);
	if (func_1258(cParam0) != 9)
	{
		if (func_1303(Global_35) || func_1304(&iLocal_315))
		{
			func_1305(0);
			func_134(cParam0, 9);
			func_1306(cParam0, 51, 1);
			func_213(&uLocal_896);
		}
	}
	disable_control_action(0, -620139643, false);
	if (func_1307())
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, -1304887797, false);
	}
	if (does_entity_exist(&(iLocal_378[1])) && is_vehicle_driveable(&(iLocal_378[1]), false, false))
	{
		switch (func_1258(cParam0))
		{
			case 0:
				set_ped_reset_flag(&(iLocal_315[3]), 29, true);
				set_ped_reset_flag(Global_35, 29, true);
				if (bLocal_111 && Global_36.f_2 < func_1308())
				{
					if (!func_388(iLocal_115, 16384))
					{
						func_1309(cParam0, 904230363);
					}
					clear_ped_tasks(Global_35, 1, 0);
					detach_entity(&(iLocal_315[3]), true, false);
					set_ped_config_flag(Global_35, 15, true);
					set_vehicle_is_considered_by_player(&(iLocal_378[1]), false);
					func_11(&uLocal_294, 1, 1);
					func_1310(1);
					set_anim_scene_entity(iVar445, "player_zero", Global_35, 0);
					set_anim_scene_entity(iVar445, "cs_balloonoperator", &(iLocal_315[3]), 0);
					set_anim_scene_entity(iVar445, "hotairballoon01", &(iLocal_378[1]), 0);
					attach_anim_scene_to_entity(iVar445, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
					set_anim_scene_origin(iVar445, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					start_anim_scene(iVar445);
					func_453(0);
					func_134(cParam0, 1);
				}
				break;
			case 1:
				_0xd904f75dbd7ab865(&(iLocal_378[1]));
				disable_control_action(0, 1915927219, false);
				if (_does_anim_scene_exist(iVar445))
				{
					func_1311();
					if (_0xb89fcff19dafff28(iVar445, "player_zero") || _0x005e6f28dd7ed58d(iVar445, "player_zero"))
					{
						start_audio_scene("GANG2_scenes_scripted_balloon_hover");
						set_entity_collision(Global_35, true, false);
						func_134(cParam0, 2);
					}
				}
				break;
			case 2:
				func_1312(&uLocal_470);
				func_1313(cParam0);
				if (func_1314())
				{
					func_11(&iLocal_469, 1, 1);
					func_1306(cParam0, 51, 1);
					func_134(cParam0, 4);
				}
				break;
			case 4:
				func_460(4);
				set_player_simulate_aiming(player_id(), true);
				if (func_1315() || (iVar1120 == 3 && func_919(&uLocal_1112) > 6f))
				{
					func_134(cParam0, 29);
				}
				break;
			case 9:
				if (func_919(&uLocal_896) > 2f)
				{
					func_1316(cParam0, "GNG2_FAIL_ALE", "", 1, 0);
				}
				break;
		}
		if (func_1258(cParam0) == 0)
		{
			func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 1, &Local_524, 1, 0, iVar973 == 5);
		}
		else
		{
			func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 1, &Local_524, 0, 0, iVar973 == 5);
		}
		if (func_1258(cParam0) == 0)
		{
			func_1279(cParam0, &uLocal_294, &Local_524, 0f, 0f, 0f, 1);
			func_1292(&(iLocal_378[1]), 1, 1, 0);
			func_1282();
		}
		else
		{
			func_1317();
		}
	}
	if (get_entity_height_above_ground(&(iLocal_378[1])) < 12f)
	{
		set_vehicle_doors_locked(&(iLocal_378[1]), 4);
		func_1316(cParam0, "GNG2_FAIL_LOW", "", 1, 0);
	}
	return func_1258(cParam0) == 29;
}

int func_756(var uParam0)
{
	if (does_blip_exist(Local_869[0]->f_3))
	{
		remove_blip(&(Local_869[0]->f_3));
	}
	if (does_blip_exist(Local_869[1]->f_3))
	{
		remove_blip(&(Local_869[1]->f_3));
	}
	if (does_blip_exist(Local_869[2]->f_3))
	{
		remove_blip(&(Local_869[2]->f_3));
	}
	if (does_blip_exist(&(iLocal_384[0])))
	{
		remove_blip(iLocal_384[0]);
	}
	_0x7c9e45a4ced2e8da(&(iLocal_378[1]), 1f);
	func_1318();
	if (is_audio_scene_active("GANG2_scenes_scripted_balloon_hover"))
	{
		stop_audio_scene("GANG2_scenes_scripted_balloon_hover");
	}
	func_173();
	return 1;
}

int func_757(char[4] cParam0)
{
	if (((((!func_1269(cParam0, 1, iVar296) || !func_1270(1, iVar296, cParam0)) || !func_804(iVar304 | 16 | 8, iVar296, cParam0, 1)) || !func_1289(-1, 0)) || !func_1290(-1, 0)) || !func_1291(-1, 0))
	{
		return 0;
	}
	if (!bVar292)
	{
		if (func_172(&(iLocal_315[5]), 0) && !does_blip_exist(&(iLocal_367[5])))
		{
			iLocal_367[5] = _blip_add_for_entity(-1595050198, &(iLocal_315[5]));
			_blip_set_modifier(&(iLocal_367[5]), -1034486097);
		}
		if (func_172(&(iLocal_315[6]), 0) && !does_blip_exist(&(iLocal_367[6])))
		{
			iLocal_367[6] = _blip_add_for_entity(-1595050198, &(iLocal_315[6]));
			_blip_set_modifier(&(iLocal_367[6]), -1034486097);
			func_1275(&(iLocal_315[6]), func_488(16, 1), 2, 1073741824);
		}
		if (func_172(&(iLocal_315[7]), 0) && !does_blip_exist(&(iLocal_367[7])))
		{
			iLocal_367[7] = _blip_add_for_entity(-1595050198, &(iLocal_315[7]));
			_blip_set_modifier(&(iLocal_367[7]), -1034486097);
		}
		if (func_172(&(iLocal_315[8]), 0) && !does_blip_exist(&(iLocal_367[8])))
		{
			iLocal_367[8] = _blip_add_for_entity(-1595050198, &(iLocal_315[8]));
			_blip_set_modifier(&(iLocal_367[8]), -1034486097);
		}
		func_1296(1);
		set_entity_coords(&(iLocal_315[3]), get_entity_coords(&(iLocal_378[1]), true, false), true, false, true, true);
		set_entity_coords(Global_35, get_entity_coords(&(iLocal_378[1]), true, false), true, false, true, true);
		_0x172e9dd35858dcd7(&(iLocal_378[1]));
		func_812(iVar296, 0);
		func_925(&(iLocal_315[3]), 103259813);
		func_1250(&uLocal_513, func_1259(4, 1), 5f, 1, 4, 0);
		func_1250(&uLocal_514, func_1259(4, 2), 5f, 1, 4, 0);
		fLocal_980 = 0.411f;
		fLocal_981 = 0.271f;
		_0xb8c984c0d47f4f07(fVar977, fVar978, 1);
		iLocal_295 = 1;
	}
	else if (does_entity_have_drawable(&(iLocal_315[3])) && _0xa0bc8faed8cfeb3c(&(iLocal_315[3])))
	{
		freeze_entity_position(&(iLocal_378[1]), false);
		set_entity_dynamic(&(iLocal_378[1]), true);
		func_1276();
		func_795(0, 0);
		_0x8886d83a430537fd(Global_35, 0);
		set_entity_coords(Global_35, get_entity_coords(&(iLocal_378[1]), true, false), true, false, true, true);
		return 1;
	}
	return 0;
}

int func_758(var uParam0)
{
	return 1;
}

int func_759(char[4] cParam0)
{
	func_1319(&(Local_14.f_71), &uLocal_1124, -1595050198);
	func_1320(&(Local_14.f_71), -1034486097);
	if (is_entity_attached_to_entity(&(iLocal_315[3]), &(iLocal_378[1])))
	{
		detach_entity(&(iLocal_315[3]), false, false);
	}
	set_anim_scene_entity(iVar451, "player_zero", Global_35, 0);
	set_anim_scene_entity(iVar451, "cs_balloonoperator", &(iLocal_315[3]), 0);
	set_anim_scene_entity(iVar451, "hotairballoon01", &(iLocal_378[1]), 0);
	attach_anim_scene_to_entity(iVar451, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
	set_anim_scene_origin(iVar451, 0f, 0f, 0f, 0f, 0f, 0f, 2);
	start_anim_scene(iVar451);
	iLocal_112 = 0;
	func_1244();
	func_135(cParam0, 1);
	func_1321(iVar304);
	func_1322(cParam0);
	func_1323();
	func_1324();
	if (func_172(&(iLocal_315[3]), 0))
	{
		set_entity_no_collision_entity(&(iLocal_315[3]), &(iLocal_378[1]), false);
	}
	return 1;
}

bool func_760(char[4] cParam0)
{
	func_1325(cParam0);
	if (!func_1326(1))
	{
		func_1284(cParam0);
		func_1327();
	}
	func_1328();
	if (iVar1129 >= 1)
	{
		if (!func_1326(1))
		{
			func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 4, &Local_524, 1, 0, 0);
			func_1279(cParam0, &uLocal_294, &Local_524, 0f, 0f, 0f, func_1258(cParam0) >= 2);
		}
		else
		{
			func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 4, &Local_524, 0, 0, 0);
		}
	}
	else
	{
		disable_control_action(0, 1915927219, true);
		func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 2, &Local_524, 0, 0, 0);
	}
	switch (func_1258(cParam0))
	{
		case 0:
			if (iVar1129 >= 2)
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (Global_36.f_2 > func_1329(cParam0, &Local_524))
			{
				func_1247(cParam0, 10);
				if (does_entity_exist(iVar400))
				{
					_task_vehicle_drive_to_coord_2(iVar400, 2979.148f, -411.9884f, 40.9665f, 10f, 0, 0, 5f, 5f);
				}
				iLocal_993 = 1;
				fLocal_106 = 0.5f;
				func_134(cParam0, 2);
			}
			break;
		case 2:
			if (!func_172(&(iLocal_315[1]), 0) || !func_172(&(iLocal_315[2]), 0))
			{
				if (func_804(iVar303, iVar297, cParam0, 1))
				{
					if (!is_ped_on_mount(&(iLocal_315[1])))
					{
						func_805(2);
						_set_entity_coords_and_heading(&(iLocal_315[2]), 3016.07f, 1443.55f, 45.69f, 155.33f, true, false, true);
						set_entity_load_collision_flag(&(iLocal_315[2]), 1);
					}
				}
			}
			func_1330(cParam0);
			if (iVar788 == 6)
			{
				func_453(0);
				func_1263(cParam0);
				func_134(cParam0, 29);
			}
			break;
	}
	if (iVar1129 >= 3)
	{
		func_1292(&(iLocal_378[1]), iVar1129 == 4, 1, func_1326(1));
	}
	else
	{
		func_1292(&(iLocal_378[1]), iVar1129 >= 1, 2, 0);
	}
	return func_1258(cParam0) == 29;
}

int func_761(char[4] cParam0)
{
	func_922();
	stop_playback_recorded_vehicle(&(iLocal_378[1]));
	clear_ped_tasks_immediately(Global_35, false, true);
	func_166((uVar304 || uVar305), cParam0, 0);
	func_170(Local_14.f_69);
	func_170(Local_14.f_79);
	func_170(Local_14.f_38);
	func_174(&iLocal_403, 0);
	func_1310(2);
	func_1310(1);
	if (bVar461)
	{
		_0x0f2a2175734926d8("alarm_bell", "GNG2_sounds");
	}
	return 1;
}

int func_762(char[4] cParam0)
{
	if ((!func_1269(cParam0, 1, iVar297) || !func_1270(1, iVar297, cParam0)) || !func_804(iVar303 | 8, iVar297, cParam0, 1))
	{
		return 0;
	}
	if (!bVar292)
	{
		func_805(2);
		func_1275(&(iLocal_378[1]), func_1331(1, iVar297), 2, 1073741824);
		func_812(iVar297, 1);
		func_925(&(iLocal_315[3]), 103259813);
		fLocal_980 = 0.736f;
		fLocal_981 = 0.991f;
		_0xb8c984c0d47f4f07(fVar977, fVar978, 1);
		iLocal_295 = 1;
	}
	else if ((does_entity_have_drawable(&(iLocal_315[3])) && _0xa0bc8faed8cfeb3c(&(iLocal_315[3]))) && _0xa0bc8faed8cfeb3c(&(iLocal_315[1])))
	{
		freeze_entity_position(&(iLocal_378[1]), false);
		set_entity_dynamic(&(iLocal_378[1]), true);
		func_811();
		func_795(0, 0);
		return 1;
	}
	return 0;
}

int func_763(var uParam0)
{
	func_1332();
	if (iVar788 == 6)
	{
		_0xa54d643d0773eb65("script@Story@GNG2@balloon_to_annesburg", "3_ARRAVING", 5);
		_0x43037abfe214a851();
		func_60(0);
	}
	func_1272(uParam0, 8192);
	detach_entity(&(iLocal_315[3]), true, false);
	if (func_172(&(iLocal_315[2]), 0))
	{
		func_805(2);
		set_entity_coords(&(iLocal_315[2]), 3017.68f, 1442.54f, 45.54f, true, false, true, true);
		set_entity_load_collision_flag(&(iLocal_315[2]), 1);
	}
	return 1;
}

int func_764(char[4] cParam0)
{
	func_1244();
	func_1333(iVar303, 1);
	func_135(cParam0, 1);
	func_1334(Global_36, 3000f, 0);
	func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 0, 1);
	func_1245(11, 0);
	func_1246(cParam0, &(iLocal_315[1]), 128);
	func_1247(cParam0, 11);
	iLocal_814 = 0;
	set_entity_invincible(&(iLocal_315[1]), true);
	set_entity_invincible(&(iLocal_315[2]), true);
	set_entity_dynamic(&(iLocal_378[1]), true);
	task_follow_waypoint_recording(&(iLocal_315[1]), sVar969, 0, 8, -1, 0, 1, -1);
	set_ped_config_flag(&(iLocal_315[1]), 263, true);
	if (func_172(&(Local_825[0]), 0))
	{
		func_1336(0, 0, 0);
		set_entity_proofs(&(Local_825[0]), 0, false);
	}
	if (func_172(&(Local_825[1]), 0))
	{
		func_1336(1, 0, 0);
		set_entity_proofs(&(Local_825[1]), 0, false);
	}
	if (func_172(&(Local_825[2]), 0))
	{
		func_1336(2, 0, 0);
		set_entity_proofs(&(Local_825[2]), 0, false);
	}
	if (func_172(&(Local_825[3]), 0))
	{
		func_1336(3, 0, 0);
		set_entity_proofs(&(Local_825[3]), 0, false);
	}
	iLocal_466 = 0;
	iVar0 = func_803(Global_35, 1, 0, 0);
	if (iVar0 != -1569615261)
	{
		iVar1 = get_ammo_in_ped_weapon(Global_35, -1);
		if (iVar1 < 35)
		{
			set_ped_ammo(Global_35, -1, 35);
		}
	}
	return 1;
}

bool func_765(char[4] cParam0)
{
	if (is_entity_attached_to_entity(Global_35, &(iLocal_378[1])) && func_919(&uLocal_977) > 1f)
	{
		detach_entity(Global_35, true, false);
	}
	_0xab0d553fe20a6e25(0f);
	set_vehicle_density_multiplier_this_frame(0f);
	func_1337(cParam0);
	func_1301();
	func_1338();
	func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 5, &Local_524, 0, 0, 0);
	func_1339();
	func_1340();
	func_1341();
	switch (func_1258(cParam0))
	{
		case 0:
			if (func_1342())
			{
				func_134(cParam0, 29);
			}
			break;
	}
	return func_1258(cParam0) == 29;
}

int func_766(var uParam0)
{
	func_11(&uLocal_523, 1, 1);
	func_1341();
	return 1;
}

int func_767(char[4] cParam0)
{
	if ((!func_1269(cParam0, 1, iVar298) || !func_1270(1, iVar298, cParam0)) || !func_804(iVar303 | 8, iVar298, cParam0, 1))
	{
		return 0;
	}
	if (!bVar292)
	{
		func_805(2);
		_0x172e9dd35858dcd7(&(iLocal_378[1]));
		func_1343(7, 5, &Local_524);
		func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 0, 1);
		func_1245(11, 0);
		func_1246(cParam0, &(iLocal_315[1]), 128);
		func_1247(cParam0, 0);
		func_812(iVar297, 1);
		func_925(&(iLocal_315[3]), 103259813);
		iLocal_814 = 7;
		iLocal_295 = 1;
	}
	else if (does_entity_have_drawable(&(iLocal_315[3])) && _0xa0bc8faed8cfeb3c(&(iLocal_315[3])))
	{
		func_1344();
		set_current_ped_weapon(&(iLocal_315[1]), 1240907314, true, 2, false, false);
		task_follow_waypoint_recording(&(iLocal_315[1]), sVar969, 0, 8, -1, 0, 1, -1);
		freeze_entity_position(&(iLocal_378[1]), false);
		set_entity_dynamic(&(iLocal_378[1]), true);
		set_entity_velocity(&(iLocal_378[1]), -0.890599f, -6.79289f, 0.805631f);
		func_795(0, 0);
		if (!is_ped_in_vehicle(&(iLocal_315[3]), &(iLocal_378[1]), false))
		{
			set_ped_into_vehicle(&(iLocal_315[3]), &(iLocal_378[1]), -1);
		}
		set_anim_scene_entity(iVar453, "cs_balloonoperator", &(iLocal_315[3]), 0);
		set_anim_scene_entity(iVar453, "hotairballoon01", &(iLocal_378[1]), 0);
		attach_anim_scene_to_entity(iVar453, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
		set_anim_scene_origin(iVar453, 0f, 0f, 0f, 0f, 0f, 0f, 2);
		start_anim_scene(iVar453);
		return 1;
	}
	return 0;
}

int func_768(var uParam0)
{
	return 1;
}

int func_769(char[4] cParam0)
{
	func_213(&uLocal_899);
	func_1244();
	func_1345();
	iLocal_107 = 0;
	set_entity_invincible(&(iLocal_315[1]), true);
	set_entity_invincible(&(iLocal_315[2]), true);
	if (get_ped_config_flag(&(iLocal_315[1]), 138, true) == 1)
	{
		set_ped_config_flag(&(iLocal_315[1]), 138, false);
	}
	if (get_ped_config_flag(&(iLocal_315[2]), 138, true) == 1)
	{
		set_ped_config_flag(&(iLocal_315[2]), 138, false);
	}
	func_1306(cParam0, 1, 1);
	_0xfd6943b6df77e449(Global_35, false);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_172(Local_825[iVar0]->f_1, 0))
		{
			set_entity_proofs(Local_825[iVar0]->f_1, 1, false);
		}
		if (func_172(&(Local_825[iVar0]), 0))
		{
			set_entity_proofs(&(Local_825[iVar0]), 1, false);
		}
		iVar0++;
	}
	func_1341();
	return 1;
}

bool func_770(char[4] cParam0)
{
	if (func_1258(cParam0) < 2)
	{
		func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 5, &Local_524, 0, 0, 0);
	}
	else
	{
		func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 5, &Local_524, 1, 0, 0);
	}
	func_1340();
	fVar0 = func_1346((to_float(func_214(&uLocal_899)) / 30000f), 0f, 0.5f);
	func_814(iVar298, fVar0);
	func_1292(&(iLocal_378[1]), 0, 3, 0);
	switch (func_1258(cParam0))
	{
		case 0:
			func_1341();
			if (func_1347(&Local_940) && func_919(&uLocal_899) > 2f)
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1348(cParam0))
			{
				func_1292(&(iLocal_378[1]), 1, 3, 0);
				func_134(cParam0, 29);
			}
			if (iVar1155 >= 2)
			{
				_0xfa1d5e8d1c3ccd67(&(iLocal_378[1]), 3);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			else if ((_does_anim_scene_exist(iVar454) && _is_anim_scene_started(iVar454, false)) && _get_anim_scene_time(iVar454) > 4.5f)
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
			break;
	}
	return func_1258(cParam0) == 29;
}

int func_771(var uParam0)
{
	return 1;
}

int func_772(char[4] cParam0)
{
	if ((!func_1269(cParam0, 1, iVar299) || !func_1270(1, iVar299, cParam0)) || !func_804(iVar303, iVar299, cParam0, 1))
	{
		return 0;
	}
	while (func_806() < 3)
	{
		func_808(8, 0);
	}
	if (!func_1347(&Local_940))
	{
		return 0;
	}
	func_1292(&(iLocal_378[1]), 0, 3, 0);
	if (!bVar292)
	{
		if (func_1294(3))
		{
			func_1349();
			func_805(2);
			_0x172e9dd35858dcd7(&(iLocal_378[1]));
			func_1343(11, 5, &Local_524);
			func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 1, 1);
			func_1245(11, 0);
			func_1246(cParam0, &(iLocal_315[1]), 128);
			func_1247(cParam0, 0);
			set_current_ped_weapon(&(iLocal_315[1]), 1240907314, true, 2, false, false);
			task_follow_waypoint_recording(&(iLocal_315[1]), sVar969, 0, 8, -1, 0, 1, -1);
			func_1350();
			func_1351(cParam0);
			func_1292(&(iLocal_378[1]), 1, 3, 0);
			_set_entity_coords_and_heading(Local_825[0]->f_1, 2877.372f, 581.8198f, 56.86739f, 155.14f, true, false, true);
			_set_entity_coords_and_heading(Local_825[1]->f_1, 2872.794f, 583.7805f, 56.71754f, 155.14f, true, false, true);
			_set_entity_coords_and_heading(Local_825[2]->f_1, 2875.289f, 582.6015f, 56.86738f, 155.14f, true, false, true);
			task_follow_waypoint_recording(&(Local_825[0]), func_1352(0), 0, 14, -1, 0, 1, -1);
			task_follow_waypoint_recording(&(Local_825[1]), func_1352(1), 0, 14, -1, 0, 1, -1);
			task_follow_waypoint_recording(&(Local_825[2]), func_1352(2), 0, 14, -1, 0, 1, -1);
			Local_825[0]->f_6 = 4;
			Local_825[1]->f_6 = 4;
			Local_825[2]->f_6 = 4;
			iLocal_812 = 2;
			iLocal_295 = 1;
		}
	}
	else
	{
		freeze_entity_position(&(iLocal_378[1]), false);
		set_entity_dynamic(&(iLocal_378[1]), true);
		set_entity_velocity(&(iLocal_378[1]), -0.890599f, -6.79289f, 0.805631f);
		_hide_ped_weapons(Global_35, 2, true);
		func_795(0, 0);
		return 1;
	}
	return 0;
}

int func_773(var uParam0)
{
	return 1;
}

int func_774(char[4] cParam0)
{
	func_213(&uLocal_899);
	func_1244();
	func_1345();
	set_entity_invincible(&(iLocal_315[1]), true);
	set_entity_invincible(&(iLocal_315[2]), true);
	if (get_ped_config_flag(&(iLocal_315[1]), 138, true) == 1)
	{
		set_ped_config_flag(&(iLocal_315[1]), 138, false);
	}
	if (get_ped_config_flag(&(iLocal_315[2]), 138, true) == 1)
	{
		set_ped_config_flag(&(iLocal_315[2]), 138, false);
	}
	func_1306(cParam0, 1, 1);
	_0xfd6943b6df77e449(Global_35, false);
	func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 1, 1);
	func_1247(cParam0, 12);
	func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 5, &Local_524, 1, 0, 0);
	_0xfa1d5e8d1c3ccd67(&(iLocal_378[1]), 3);
	fLocal_106 = 1f;
	iLocal_112 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_172(Local_825[iVar0]->f_1, 0))
		{
			set_entity_proofs(Local_825[iVar0]->f_1, 1, false);
		}
		if (func_172(&(Local_825[iVar0]), 0))
		{
			set_entity_proofs(&(Local_825[iVar0]), 1, false);
		}
		iVar0++;
	}
	func_1353();
	set_ped_accuracy(&(iLocal_315[1]), 0);
	iLocal_466 = 0;
	return 1;
}

bool func_775(char[4] cParam0)
{
	func_1354();
	disable_control_action(0, -1722177808, false);
	func_1355(cParam0);
	if (func_1258(cParam0) == 0)
	{
		func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 5, &Local_524, 1, 0, 0);
	}
	else if (iVar1156 == 0)
	{
		func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 5, &Local_524, 2, &(iLocal_315[2]), 0);
	}
	else
	{
		if (!bVar1161)
		{
			if (func_1356(5, &Local_524) == 12)
			{
				func_1343(1, 6, &Local_524);
			}
			iLocal_1164 = 1;
		}
		func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 6, &Local_524, 3, 0, 0);
	}
	func_1340();
	fVar0 = func_1346((to_float(func_214(&uLocal_899)) / 30000f), 0f, 0.5f);
	func_814(iVar299, fVar0);
	switch (func_1258(cParam0))
	{
		case 0:
			if (func_1357())
			{
				func_1316(cParam0, "GNG2_FAIL_CSH", "", 1, 0);
			}
			if (is_waypoint_playback_going_on_for_ped(&(iLocal_315[1]), 0) && get_ped_waypoint_progress(&(iLocal_315[1])) > 620)
			{
				func_1358();
				func_1359(cParam0, &(iLocal_315[1]), 1, 1);
			}
			func_1279(cParam0, &uLocal_294, &Local_524, get_entity_coords(&(iLocal_315[1]), true, false), 1);
			func_1360();
			if (does_rope_exist(Local_524.f_136))
			{
				if (func_1361() && func_1097(&(iLocal_315[1]), 0, 1, 0) == -1569615261)
				{
					_0x8886d83a430537fd(&(iLocal_315[1]), 0);
					set_anim_scene_origin(iVar456, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					set_anim_scene_entity(iVar456, "CS_MrsAdler", &(iLocal_315[1]), 0);
					attach_anim_scene_to_entity(iVar456, &(iLocal_315[2]), get_ped_bone_index(&(iLocal_315[2]), 29245));
					start_anim_scene(iVar456);
					set_ped_can_ragdoll(&(iLocal_315[1]), false);
					task_follow_entity_along_waypoint_recording_at_offset(&(iLocal_315[2]), &(iLocal_378[1]), uVar969, 0f, -1f, 0, 8, -1, 0);
					func_11(&uLocal_294, 1, 1);
					func_1247(cParam0, 0);
					func_1353();
					func_1359(cParam0, &(iLocal_315[1]), 0, 1);
					func_134(cParam0, 1);
				}
			}
			break;
		case 1:
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			func_1362();
			func_1363();
			if (func_1364())
			{
				set_entity_invincible(&(iLocal_315[1]), true);
				func_134(cParam0, 29);
			}
			break;
	}
	_0xfa1d5e8d1c3ccd67(&(iLocal_378[1]), 3);
	func_1292(&(iLocal_378[1]), 1, 3, 0);
	return func_1258(cParam0) == 29;
}

int func_776(var uParam0)
{
	func_1365();
	func_11(&uLocal_294, 1, 1);
	set_ped_accuracy(&(iLocal_315[1]), 22);
	func_1310(3);
	_0xfd6943b6df77e449(Global_35, true);
	return 1;
}

int func_777(char[4] cParam0)
{
	if ((!func_1269(cParam0, 1, iVar300) || !func_1270(1, iVar300, cParam0)) || !func_804(iVar303, iVar300, cParam0, 1))
	{
		return 0;
	}
	if (!func_1362())
	{
		return 0;
	}
	if (func_1363())
	{
		set_ped_can_ragdoll(&(iLocal_315[1]), false);
		freeze_entity_position(&(iLocal_378[1]), false);
		set_entity_dynamic(&(iLocal_378[1]), true);
		_0x172e9dd35858dcd7(&(iLocal_378[1]));
		Local_524 = 3f;
		func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 1, 1);
		func_1245(11, 0);
		func_1246(cParam0, &(iLocal_315[1]), 128);
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		set_current_ped_weapon(&(iLocal_315[1]), -1569615261, true, 0, false, false);
		return 1;
	}
	return 0;
}

int func_778(var uParam0)
{
	if (func_1356(5, &Local_524) == 12)
	{
		func_1343(1, 6, &Local_524);
	}
	clear_ped_tasks(Global_35, 1, 0);
	func_1344();
	_0x2208438012482a1a(Global_35, false, false);
	if (does_rope_exist(Local_524.f_136))
	{
		delete_rope(&(Local_524.f_136));
	}
	set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
	func_1366();
	func_1367();
	return 1;
}

int func_779(char[4] cParam0)
{
	func_1244();
	func_1306(cParam0, 1, 1);
	func_213(&uLocal_896);
	func_99(cParam0, 33554432);
	func_1322(cParam0);
	return 1;
}

bool func_780(char[4] cParam0)
{
	func_1299(cParam0, func_33(cParam0), 8388608);
	func_1368(cParam0);
	fVar0 = func_1346((to_float(func_214(&uLocal_899)) / 60000f), 0.5f, 1f);
	func_814(iVar300, fVar0);
	func_1367();
	switch (func_1258(cParam0))
	{
		case 0:
			func_813(cParam0, &(iLocal_378[1]), &(iLocal_315[1]), 6, &Local_524, 0, 0, 0);
			func_1369();
			if (func_1370())
			{
				func_1263(cParam0);
				func_134(cParam0, 29);
			}
			else if (func_1371())
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!bVar1162)
			{
				if (has_anim_event_fired(&(iLocal_315[1]), -1014244686) && !is_ped_ragdoll(&(iLocal_315[1])))
				{
					set_ped_can_ragdoll(&(iLocal_315[1]), true);
					set_ped_to_ragdoll(&(iLocal_315[1]), 1, 1, iVar1, false, false, false);
					set_entity_load_collision_flag(&(iLocal_315[1]), 1);
					set_entity_collision(&(iLocal_315[1]), true, false);
					set_entity_dynamic(&(iLocal_315[1]), true);
					set_ped_leg_ik_mode(&(iLocal_315[1]), 1);
					set_ped_gravity(&(iLocal_315[1]), true);
					iLocal_1165 = 1;
				}
			}
			if (func_1283(cParam0) == 51 && !func_1372())
			{
				func_1373(&(iLocal_315[1]), 0, 0);
				func_1316(cParam0, "ALLY_DEAD_SADIE", "", 1, 0);
			}
			break;
	}
	return func_1258(cParam0) == 29;
}

int func_781(char[4] cParam0)
{
	func_1262(cParam0, &(iLocal_315[1]), 1);
	if (func_10(iVar1044))
	{
		func_11(&iLocal_1047, 1, 1);
	}
	if (func_10(iVar1043))
	{
		func_11(&iLocal_1046, 1, 1);
	}
	func_1374(0);
	func_1375(1);
	set_ped_can_ragdoll(&(iLocal_315[1]), true);
	return 1;
}

int func_782(char[4] cParam0)
{
	if (!func_804(2, iVar301, cParam0, 1))
	{
		return 0;
	}
	if (!func_1269(cParam0, 1, iVar301) || !func_1270(1, iVar301, cParam0))
	{
		return 0;
	}
	_0x172e9dd35858dcd7(&(iLocal_378[1]));
	func_818(-1, 0);
	func_817(-1, 0);
	func_816(-1, 0);
	func_1245(11, 0);
	func_1246(cParam0, &(iLocal_315[1]), 128);
	return 1;
}

int func_783(var uParam0)
{
	func_458();
	func_1376();
	func_1332();
	func_1377();
	if (does_entity_exist(&(iLocal_378[1])))
	{
		_0x697df68f3a761a50(&(iLocal_378[1]));
	}
	set_current_ped_weapon(&(iLocal_315[1]), 1240907314, true, 2, false, false);
	func_1378(uParam0, &(iLocal_315[1]), 2, "w_revolver_doubleaction01", 0, 0);
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(true);
	}
	if (_0x927b810e43e99932(&Local_909))
	{
		_0x0a5a4f1979abb40e(&Local_909);
	}
	if (does_rope_exist(Local_524.f_136))
	{
		delete_rope(&(Local_524.f_136));
	}
	if (does_entity_exist(iVar383))
	{
		delete_object(&iLocal_386);
	}
	return 1;
}

int func_784(char[4] cParam0)
{
	if (!bVar1052)
	{
		func_821();
		iLocal_1055 = 1;
	}
	func_168(2, 0);
	if (does_particle_fx_looped_exist(iVar905))
	{
		remove_particle_fx(iVar905, true);
	}
	func_1244();
	func_135(cParam0, 1);
	set_entity_invincible(Global_35, false);
	set_entity_invincible(&(iLocal_315[1]), false);
	if (!func_388(iLocal_115, 262144))
	{
		func_822();
		func_823(-1207658444);
		func_416(&iLocal_115, 262144);
	}
	_0x821c32c728b24477(0, 0f, 0);
	_0xf64034d533ce8aac(0, "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON", "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON");
	if (func_172(&(Local_14.f_3[0]), 0))
	{
		set_current_ped_weapon(&(Local_14.f_3[0]), get_best_ped_weapon(&(Local_14.f_3[0]), false, false), true, 0, false, false);
	}
	if (func_172(&(Local_14.f_3[1]), 0))
	{
		set_current_ped_weapon(&(Local_14.f_3[1]), get_best_ped_weapon(&(Local_14.f_3[1]), false, false), true, 0, false, false);
	}
	if (func_172(&(Local_14.f_3[2]), 0))
	{
		set_current_ped_weapon(&(Local_14.f_3[2]), get_best_ped_weapon(&(Local_14.f_3[2]), false, false), true, 0, false, false);
	}
	if (func_172(&(Local_14.f_3[3]), 0))
	{
		set_current_ped_weapon(&(Local_14.f_3[3]), get_best_ped_weapon(&(Local_14.f_3[3]), false, false), true, 0, false, false);
	}
	_0x2a10538d0a005e81(&(uLocal_487[5]), 2);
	_0x2a10538d0a005e81(&(uLocal_487[6]), 2);
	_0x2a10538d0a005e81(&(uLocal_487[9]), 2);
	_0x2a10538d0a005e81(&(uLocal_487[10]), 2);
	if (!does_entity_exist(iVar415))
	{
		iLocal_418 = create_object_no_offset(-772157398, 2457.92f, 97.44f, 45.24f, true, true, false, true);
	}
	_0x1a7a802b2301edc0(Global_35);
	set_ped_config_flag(Global_35, 174, false);
	set_entity_proofs(&(iLocal_315[1]), 2, false);
	func_1247(cParam0, 14);
	func_99(cParam0, 33554432);
	return 1;
}

bool func_785(char[4] cParam0)
{
	func_1379();
	func_1380();
	func_1381();
	func_1382();
	func_1383();
	func_1384();
	func_1385();
	func_1386();
	func_1387();
	if (func_172(Global_35, 0) && !func_1388(Global_35, &(uLocal_487[0]), 1, 0))
	{
		func_1316(cParam0, "GNG2_FAIL_SAD", "", 1, 0);
	}
	func_1389(cParam0);
	switch (func_1258(cParam0))
	{
		case 0:
			func_1390(cParam0);
			if (func_1391(&uLocal_1176, 30f))
			{
				func_1359(cParam0, &(iLocal_315[1]), 1, 1);
			}
			else
			{
				func_1359(cParam0, &(iLocal_315[1]), 0, 1);
			}
			if (func_1392() && func_1393() <= 2)
			{
				func_1394();
				func_213(&uLocal_896);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1372() && func_1395())
			{
				func_134(cParam0, 29);
			}
			break;
	}
	return func_1258(cParam0) == 29;
}

int func_786(char[4] cParam0)
{
	func_166((uVar306 && func_167(2)), cParam0, 0);
	iVar0 = func_803(&(iLocal_315[1]), 1, 0, 0);
	if (iVar0 == -1569615261)
	{
		func_1378(cParam0, &(iLocal_315[1]), 2, "w_revolver_doubleaction01", 0, 0);
	}
	else
	{
		func_1378(cParam0, &(iLocal_315[1]), 0, "w_revolver_doubleaction01", 0, 0);
	}
	return 1;
}

int func_787(char[4] cParam0)
{
	if (!func_804(2, iVar301, cParam0, 1))
	{
		return 0;
	}
	func_1377();
	func_823(-1207658444);
	return 1;
}

int func_788(char[4] cParam0)
{
	if (!func_804(4, iVar302, cParam0, 1))
	{
		return 0;
	}
	func_930(cParam0);
	return 1;
}

bool func_789(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_790(char[4] cParam0)
{
	switch (func_1258(cParam0))
	{
		case 0:
			func_134(cParam0, 29);
			break;
	}
	return func_1258(cParam0) == 29;
}

bool func_791(var uParam0)
{
	if (func_172(&(iLocal_315[1]), 0))
	{
	}
	return uParam0->f_607 == uParam0->f_607;
}

void func_792(char[4] cParam0)
{
	if (does_entity_exist(&(iLocal_378[1])))
	{
		if (!is_vehicle_seat_free(&(iLocal_378[1]), -1))
		{
			if (!func_388(iLocal_115, 8192))
			{
				_0x697df68f3a761a50(&(iLocal_378[1]));
				if (func_33(cParam0) == 8 && func_793(cParam0))
				{
					_0x23f66c36f8e5eaab(&(iLocal_378[1]), 0);
				}
				else
				{
					_0x23f66c36f8e5eaab(&(iLocal_378[1]), 1);
				}
				func_416(&iLocal_115, 8192);
			}
		}
		else if (func_388(iLocal_115, 8192))
		{
			_0x697df68f3a761a50(&(iLocal_378[1]));
			func_1396(&iLocal_115, 8192);
		}
	}
}

bool func_793(char[4] cParam0)
{
	return func_1397(&(cParam0->f_7375));
}

void func_794()
{
	iVar0 = get_clock_hours();
	iVar1 = get_clock_minutes();
	if (has_anim_event_fired(Global_35, -1121862613))
	{
		if (iVar1058 == 10)
		{
			set_clock_time(5, 0, 0);
		}
		else
		{
			uLocal_1060 = iVar1058 + 1;
			if (iVar0 == 5 && iVar1 == 0)
			{
			}
			else if (iVar0 == 20 && iVar1 == 15)
			{
			}
			else
			{
				bVar2 = func_1398();
				iVar3 = 1;
				iVar4 = 0;
				if (bVar2)
				{
					if (iVar0 < 4)
					{
						iVar3 = 1;
						iVar4 = 0;
					}
					else if (iVar0 == 4)
					{
						iVar3 = 0;
						iVar4 = 15;
					}
					else if (iVar0 <= 18)
					{
						iVar3 = 0;
						iVar4 = 20;
					}
					else if (iVar0 <= 20)
					{
						iVar3 = 0;
						iVar4 = 10;
					}
					else
					{
						iVar3 = 1;
						iVar4 = 0;
					}
				}
				else
				{
					iVar3 = 0;
					iVar4 = 15;
				}
				if (iVar4 != 0)
				{
					if (bVar2)
					{
						iVar1 = (iVar1 + iVar4);
						if (iVar1 >= 60)
						{
							iVar3++;
							iVar1 = (iVar1 - 60);
						}
					}
					else
					{
						iVar1 = (iVar1 - iVar4);
						if (iVar1 < 0)
						{
							iVar3++;
							iVar1 += 60;
						}
					}
				}
				else
				{
					iVar1 = 0;
				}
				if (bVar2)
				{
					iVar0 = (iVar0 + iVar3);
					if (iVar0 == 5)
					{
						iVar1 = 0;
					}
					else if (iVar0 == 20 && iVar1 > 15)
					{
						iVar1 = 15;
					}
				}
				else
				{
					iVar0 = (iVar0 - iVar3);
					if (iVar0 == 4)
					{
						iVar0++;
						iVar1 = 0;
					}
					else if (iVar0 == 20 && iVar1 < 15)
					{
						iVar1 = 15;
					}
				}
				if (iVar0 >= 24)
				{
					iVar0 = (iVar0 - 24);
				}
				else if (iVar0 < 0)
				{
					iVar0 += 24;
				}
				if (bVar2)
				{
					if (iVar0 >= 8)
					{
						if (iVar0 < 18 || (iVar0 == 18 && iVar1 < 30))
						{
							iVar0 = 18;
							iVar1 = 30;
						}
					}
				}
				set_clock_time(iVar0, iVar1, 0);
			}
		}
	}
}

void func_795(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

int func_796(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	return func_1399(cParam0, iParam1, sParam2, iParam3, bParam4, iParam5);
}

void func_797(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = 0f;
	uParam0->f_4 = 1f;
	uParam0->f_5 = 1f;
	uParam0->f_16 = -571529030;
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0.5f;
	uParam0->f_19 = -1;
	uParam0->f_20 = 6;
	uParam0->f_21 = 1;
	uParam0->f_23 = 69632;
}

char* func_798()
{
	return uVar0;
}

void func_799(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, int iParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (!is_string_null_or_empty(sParam6))
	{
		if (iParam7 == 0)
		{
			iParam7 = 14;
		}
		Var0 = 2;
		Var0.f_4 = sParam6;
		Var0.f_5 = iParam7;
		Var0.f_7 = iParam16;
		Var0.f_9 = iParam17;
		task_lead_and_converse(iParam0, iParam1, &Var0, iParam8, fParam9, fParam10, iParam11, iParam13, fParam12);
	}
	else if (!func_1400(vParam3, 0f, 0f, 0f))
	{
		Var11 = 0;
		Var11.f_1 = { vParam3 };
		Var11.f_7 = iParam16;
		Var11.f_9 = iParam17;
		Var11.f_8 = iParam18;
		task_lead_and_converse(iParam0, iParam1, &Var11, iParam8, fParam9, fParam10, iParam11, iParam13, fParam12);
	}
	if (bParam15)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam19)
	{
		func_1401(iParam0, iParam1, iParam14);
	}
}

void func_800(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	fVar0 = 1f;
	switch (iParam0)
	{
		case -1871534317:
		case 1140525470:
			fVar0 = 0f;
			break;
		case -1415276238:
		case 1823606944:
			fVar0 = 1.5f;
			break;
		case -530524:
		case 898879241:
			fVar0 = 2f;
			break;
		case -1115154469:
			fVar0 = 3f;
			break;
		case -668482597:
		case 147004056:
			break;
	}
	force_ped_motion_state(Global_35, iParam0, bParam2, iParam3, false);
	if (bParam4)
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, get_entity_heading(Global_35), bParam6, bParam7);
	}
	else
	{
		simulate_player_input_gait(player_id(), fVar0, iParam1, fParam5, bParam6, bParam7);
	}
}

void func_801(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (!is_string_null_or_empty(uParam2->f_1))
	{
		task_scripted_animation(iParam0, uParam2);
	}
	if (is_ped_a_player(iParam0))
	{
		_0x2beed53b912537d0(player_id(), iParam1, -1f);
		Var0.f_1 = 1050253722;
		Var0.f_2 = 1067030938;
		Var0.f_5 = -1082130432;
		Var0.f_6 = -1082130432;
		Var0.f_3 = iParam16;
		Var0.f_1 = iParam14;
		Var0.f_2 = iParam15;
		Var0.f_4 = iParam17;
		Var0.f_5 = iParam20;
		Var0.f_6 = iParam21;
		if (bParam8)
		{
			Var0 = 0;
		}
		else
		{
			Var0 = 1;
		}
		_0xca59808e51fd67c4(player_id(), &Var0);
	}
	else
	{
		task_follow_and_converse_with_ped(iParam0, iParam1, iParam4, iParam5, iParam6, iParam7, iParam9, iParam10, iParam11, iParam12, iParam13);
	}
	if (bParam19)
	{
		_set_ped_crouch_movement(iParam0, false, 0, false);
	}
	if (bParam22)
	{
		func_1401(iParam0, iParam1, iParam18);
	}
}

void func_802(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			set_clock_time(5, 0, 0);
			break;
		case 1:
			set_clock_time(6, 0, 0);
			break;
		case 2:
			set_clock_time(9, 0, 0);
			break;
		case 3:
			set_clock_time(12, 0, 0);
			break;
		case 4:
			set_clock_time(16, 0, 0);
			break;
		case 5:
			set_clock_time(16, 0, 0);
			break;
		case 6:
			set_clock_time(16, 0, 0);
			break;
		case 7:
			set_clock_time(19, 0, 0);
			break;
		case 8:
			set_clock_time(19, 0, 0);
			break;
	}
}

int func_803(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

bool func_804(int iParam0, int iParam1, char[4] cParam2, bool bParam3)
{
	iVar0 = 0 + 1;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (func_970(iVar1, iParam0))
		{
			if (!func_1402(iVar1))
			{
				func_1403(iVar1, iParam1, cParam2);
				if (bParam3)
				{
				}
				else
				{
					iVar0++;
				}
				return func_1404(iParam0);
			}
		}
	}
}

void func_805(int iParam0)
{
	iVar0 = 0;
	while (iVar0 != 10)
	{
		iVar0 = func_440(iParam0, iVar0);
		if (iVar0 != 10)
		{
			func_1405(iVar0);
		}
	}
}

int func_806()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_1406(iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_807(int iParam0)
{
	if (iParam0 == 0)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 1)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 2)
	{
		iVar0 = 4;
	}
	else if (iParam0 == 3)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 4)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 5)
	{
		iVar0 = 1;
	}
	else if (iParam0 == 6)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 7)
	{
		iVar0 = 2;
	}
	else if (iParam0 == 8)
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_808(int iParam0, bool bParam1)
{
	iVar0 = func_1407();
	if (iVar0 == -1)
	{
		return;
	}
	if (Local_825[iVar0]->f_6 == 0)
	{
		Var1 = { func_1408(iParam0, iVar0) };
		if (!func_172(Local_825[iVar0]->f_1, 0))
		{
			Local_825[iVar0]->f_1 = func_924(-1038436471, Var1, Var1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		else if (!func_172(&(Local_825[iVar0]), 0))
		{
			Local_825[iVar0] = func_924(347599949, Var1, Var1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		}
		if (func_172(Local_825[iVar0]->f_1, 0) && func_172(&(Local_825[iVar0]), 0))
		{
			set_blocking_of_non_temporary_events(&(Local_825[iVar0]), true);
			set_ped_relationship_group_hash(&(Local_825[iVar0]), 1269650476);
			set_entity_load_collision_flag(&(Local_825[iVar0]), 1);
			iVar5 = get_ped_accuracy(&(Local_825[iVar0]));
			set_ped_accuracy(&(Local_825[iVar0]), (iVar5 / 2));
			_0xc2266aa617668ad3(&(Local_825[iVar0]), 0.5f);
			_set_ped_on_mount(&(Local_825[iVar0]), Local_825[iVar0]->f_1, -1, true);
			func_1409(Local_825[iVar0]->f_1, 551416228);
			Local_825[iVar0]->f_2 = _blip_add_for_entity(831283580, &(Local_825[iVar0]));
			_blip_set_modifier(Local_825[iVar0]->f_2, -1034486097);
			func_1409(Local_825[iVar0]->f_1, 0);
			set_ped_can_be_targetted(Local_825[iVar0]->f_1, false);
			if (bParam1)
			{
				func_1336(iVar0, iParam0, 1);
			}
			if (iParam0 == 4)
			{
				Local_825[iVar0]->f_6 = 1;
			}
			else
			{
				Local_825[iVar0]->f_6 = 2;
			}
			iLocal_813 = iVar809 + 1;
			Local_825[iVar0]->f_4 = iVar809;
		}
	}
}

int func_809(char[4] cParam0)
{
	return func_1410(&(cParam0->f_7375));
}

bool func_810(char[4] cParam0)
{
	return func_1411(&(cParam0->f_7375), 1);
}

void func_811()
{
	func_1275(&(iLocal_315[2]), func_1412(2, iVar298), 2, 1073741824);
	if (func_172(Local_825[0]->f_1, 0))
	{
		func_1275(Local_825[0]->f_1, func_1408(0, 0), 2, 1073741824);
	}
	if (func_172(Local_825[1]->f_1, 0))
	{
		func_1275(Local_825[1]->f_1, func_1408(0, 1), 2, 1073741824);
	}
	if (func_172(Local_825[2]->f_1, 0))
	{
		func_1275(Local_825[2]->f_1, func_1408(0, 2), 2, 1073741824);
	}
	if (func_172(Local_825[3]->f_1, 0))
	{
		func_1275(Local_825[3]->f_1, func_1408(0, 3), 2, 1073741824);
	}
}

void func_812(int iParam0, bool bParam1)
{
	iVar0 = 0;
	if ((((iParam0 == iVar293 || iParam0 == iVar294) || iParam0 == iVar295) || iParam0 == iVar296) || iParam0 == iVar297)
	{
		iVar0 = 3;
	}
	else if (iParam0 == iVar300)
	{
		iVar0 = 1;
	}
	if (!func_1413() || !func_1414(1))
	{
		return;
	}
	if (iParam0 == iVar296)
	{
		if (bParam1)
		{
			if (is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false))
			{
				clear_ped_tasks_immediately(Global_35, true, true);
			}
			if (!is_entity_attached_to_entity(Global_35, &(iLocal_378[1])))
			{
				attach_entity_to_entity(Global_35, &(iLocal_378[1]), 0, 0.2f, 0.45f, 1.1f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		else
		{
			func_1344();
		}
	}
	else if (((((iParam0 == iVar293 || iParam0 == iVar294) || iParam0 == iVar295) || iParam0 == iVar298) || iParam0 == iVar299) || iParam0 == iVar300)
	{
		if (is_entity_attached_to_entity(Global_35, &(iLocal_378[1])) && !is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false))
		{
			detach_entity(Global_35, false, true);
		}
		if (!is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false))
		{
			set_ped_into_vehicle(Global_35, &(iLocal_378[1]), -1);
		}
	}
	if (iVar0 == 0 || !func_1415(iVar0))
	{
		return;
	}
	if (!is_entity_attached_to_entity(&(iLocal_315[iVar0]), &(iLocal_378[1])))
	{
		if (iParam0 == iVar300)
		{
			attach_entity_to_entity(&(iLocal_315[iVar0]), &(iLocal_378[1]), 0, 0.3f, -0.4f, 1.1f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
		}
		else
		{
			attach_entity_to_entity(&(iLocal_315[iVar0]), &(iLocal_378[1]), 0, -0.3f, -0.4f, 1.1f, 0f, 0f, -45f, false, false, false, false, 2, true, false, false);
		}
	}
}

void func_813(char[4] cParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	if (!is_entity_dead(iParam1))
	{
		if (iParam3 == 1)
		{
			func_1416(cParam0, fParam4, iParam1, bParam7);
		}
		func_1417(cParam0, fParam4, iParam5);
		if (does_entity_exist(iParam1))
		{
			if (func_1418(iParam3, fParam4))
			{
				vVar0 = { get_entity_coords(iParam1, false, false) };
				iVar3 = func_1356(iParam3, fParam4);
				bLocal_111 = false;
				fVar4 = 10f;
				fVar5 = 10f;
				vVar6 = { func_1419(iVar3, iParam3, fParam4) };
				if (iVar3 == 0)
				{
					vVar9 = { Global_36 };
				}
				else
				{
					vVar9 = { func_1419((iVar3 - 1), iParam3, fParam4) };
				}
				vVar6.f_2 = 0f;
				vVar9.f_2 = 0f;
				vVar12 = { func_1420(vVar6 - vVar9) };
				vVar15 = { vVar6 - vVar12 * Vector(fVar4, fVar4, fVar4) };
				vVar18 = { Global_36 - vVar15 };
				vVar18.f_2 = 0f;
				if (func_1421(vVar18, vVar12) > 0f)
				{
					vVar21 = { func_1422(vVar12, 0f, 0f, 1f) };
					if (absf(func_1421(vVar21, vVar18)) < fVar5)
					{
						if (iVar3 == (func_1423(iParam3) - 1))
						{
							bLocal_111 = true;
						}
						else
						{
							iVar3++;
							func_1343(iVar3, iParam3, fParam4);
						}
					}
				}
				if (bLocal_111 || (iParam5 == 1 && !func_1287(cParam0, fParam4)))
				{
					*fParam4 = -1f;
				}
				else if ((iParam3 == 5 || iParam3 == 4) || iParam3 == 6)
				{
					*fParam4 = 1f;
				}
				else
				{
					*fParam4 = func_1424(*fParam4, fLocal_106, (0.5f * get_frame_time()));
					if (*fParam4 < 0f)
					{
						*fParam4 = 0f;
					}
				}
				if ((iParam3 == 5 && iParam5 == 1) && func_1425())
				{
					vVar24 = { get_offset_from_entity_in_world_coords(iParam2, 3f, 10f, 0f) };
					_0x12f6c6ed3eff42de(iParam1, get_entity_velocity(iParam2, -1));
				}
				else if (iParam3 == 5 && iParam5 == 2)
				{
					vVar24 = { get_offset_from_entity_in_world_coords(iParam6, 2f, 10f, 13f) };
					_0x12f6c6ed3eff42de(iParam1, get_entity_velocity(iParam6, -1));
				}
				else
				{
					vVar24 = { func_1419(iVar3, iParam3, fParam4) };
				}
				if (iParam5 == 1)
				{
					vVar24.f_2 = Global_36.f_2;
				}
				_0x2200ab13cbd10f4e(iParam1, vVar24, iParam5 != 1, *fParam4);
				if (bLocal_111)
				{
					if (func_1400(fParam4->f_137, 0f, 0f, 0f))
					{
						fParam4->f_137 = { get_offset_from_entity_in_world_coords(iParam1, 0f, 50f, 0f) };
					}
					_0xb42c87521d1bdd2f(iParam1, fParam4->f_137);
				}
				else
				{
					fParam4->f_137 = { 0f, 0f, 0f };
				}
				fVar27 = func_1426(vVar0, vVar24);
				fVar28 = (10f * *fParam4);
				fVar27 = (fVar27 - 180f);
				fVar27 = func_1427(fVar27, 0f, 360f);
				set_wind_direction(fVar27);
				if (fVar28 < 0f)
				{
					fVar28 = 0f;
				}
				set_wind_speed(fVar28);
			}
		}
	}
}

void func_814(int iParam0, float fParam1)
{
	iVar0 = &iLocal_378[1];
	iVar1 = &iLocal_381[1];
	if (!does_entity_exist(iVar0) || !does_entity_exist(iVar1))
	{
		return;
	}
	if ((iParam0 != iVar298 && iParam0 != iVar299) && iParam0 != iVar300)
	{
		return;
	}
	sVar2 = "scR_gang2_air_balloon_smoke";
	if (!does_particle_fx_looped_exist(iVar904))
	{
		iLocal_908 = start_particle_fx_looped_on_entity(sVar2, iVar1, 0f, 0f, -5f, 0f, 0f, 90f, 1f, false, false, false);
		_play_sound_from_entity("BURNER_SPUTTER", &(iLocal_378[1]), "BALLOON_SOUNDSET", false, 0, 0);
	}
	else
	{
		fVar3 = (0f + (fParam1 * (0.8f - 0f)));
		set_particle_fx_looped_alpha(iVar904, fVar3);
		fVar4 = (0.8f + (fParam1 * (1.5f - 0.8f)));
		set_particle_fx_looped_scale(iVar904, fVar4);
	}
}

bool func_815(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_816(int iParam0, bool bParam1)
{
	if (!func_248(Local_14.f_53))
	{
		Local_14.f_53 = { func_419() };
	}
	if (func_815(&(Local_14.f_53), 1))
	{
		return 1;
	}
	if (!does_entity_exist(&(Local_14.f_55[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_55[0] = func_924(347599949, 2582.095f, 138.3155f, 54.2024f, 95.3705f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_55[0]), "Foot1");
		func_1428(Local_14.f_53, &(Local_14.f_55[0]));
		func_1429(&(Local_14.f_55[0]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_55[0]), true);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_55[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_55[1] = func_924(347599949, 2583.543f, 83.7549f, 53.3615f, 69.3704f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_55[1]), "Foot2");
		func_1428(Local_14.f_53, &(Local_14.f_55[1]));
		func_1429(&(Local_14.f_55[1]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_55[1]), true);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	func_1430(&(Local_14.f_53), 1);
	return 1;
}

int func_817(int iParam0, bool bParam1)
{
	if (!func_248(Local_14.f_84))
	{
		Local_14.f_84 = { func_419() };
	}
	if (func_815(&(Local_14.f_84), 1))
	{
		return 1;
	}
	if (!does_entity_exist(&(Local_14.f_86[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_86[0] = func_924(347599949, 2598.653f, 163.1148f, 60.778f, 116.2051f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_86[0]), "Entity_1");
		func_1428(Local_14.f_84, &(Local_14.f_86[0]));
		func_1429(&(Local_14.f_86[0]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_86[0]), true);
		if (bParam1)
		{
			return 0;
		}
	}
	if (!does_entity_exist(&(Local_14.f_86[1])) && (iParam0 == -1 || (iParam0 == 0 || iParam0 == 1)))
	{
		Local_14.f_86[1] = func_1431(&(Local_14.f_86[0]));
		if (bParam1)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_86[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_86[2] = func_924(347599949, 2585.218f, 61.0621f, 54.8018f, 72.205f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_86[2]), "Entity_2");
		func_1428(Local_14.f_84, &(Local_14.f_86[2]));
		func_1429(&(Local_14.f_86[2]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_86[2]), true);
		if (bParam1)
		{
			return 0;
		}
	}
	if (!does_entity_exist(&(Local_14.f_86[3])) && (iParam0 == -1 || (iParam0 == 2 || iParam0 == 3)))
	{
		Local_14.f_86[3] = func_1431(&(Local_14.f_86[2]));
		if (bParam1)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	func_1430(&(Local_14.f_84), 1);
	return 1;
}

int func_818(int iParam0, bool bParam1)
{
	if (!func_248(Local_14.f_1))
	{
		Local_14.f_1 = { func_419() };
	}
	if (func_815(&(Local_14.f_1), 1))
	{
		return 1;
	}
	if (!does_entity_exist(&(Local_14.f_3[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_3[0] = func_924(347599949, 2577.757f, 102.041f, 53.4421f, 73.4615f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[0]), "Entity_1");
		func_1428(Local_14.f_1, &(Local_14.f_3[0]));
		func_1429(&(Local_14.f_3[0]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[0]), true);
		if (bParam1)
		{
			return 0;
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[1])) && (iParam0 == -1 || (iParam0 == 0 || iParam0 == 1)))
	{
		Local_14.f_3[1] = func_1431(&(Local_14.f_3[0]));
		if (bParam1)
		{
			if (iParam0 == 0 || iParam0 == 1)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_3[2] = func_924(347599949, 2581.599f, 104.1857f, 53.9787f, 71.8274f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[2]), "Entity_2");
		func_1428(Local_14.f_1, &(Local_14.f_3[2]));
		func_1429(&(Local_14.f_3[2]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[2]), true);
		if (bParam1)
		{
			return 0;
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[3])) && (iParam0 == -1 || (iParam0 == 2 || iParam0 == 3)))
	{
		Local_14.f_3[3] = func_1431(&(Local_14.f_3[2]));
		if (bParam1)
		{
			if (iParam0 == 2 || iParam0 == 3)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_3[4] = func_924(347599949, 2585.925f, 87.9119f, 54.3416f, 61.827f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[4]), "Entity_3");
		func_1428(Local_14.f_1, &(Local_14.f_3[4]));
		func_1429(&(Local_14.f_3[4]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[4]), true);
		if (bParam1)
		{
			return 0;
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[5])) && (iParam0 == -1 || (iParam0 == 4 || iParam0 == 5)))
	{
		Local_14.f_3[5] = func_1431(&(Local_14.f_3[4]));
		if (bParam1)
		{
			if (iParam0 == 4 || iParam0 == 5)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_3[6] = func_924(347599949, 2585.673f, 92.0914f, 54.2183f, 69.8274f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_3[6]), "Entity_4");
		func_1428(Local_14.f_1, &(Local_14.f_3[6]));
		func_1429(&(Local_14.f_3[6]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[6]), true);
		if (bParam1)
		{
			return 0;
		}
	}
	if (!does_entity_exist(&(Local_14.f_3[7])) && (iParam0 == -1 || (iParam0 == 6 || iParam0 == 7)))
	{
		Local_14.f_3[7] = func_1431(&(Local_14.f_3[6]));
		if (bParam1)
		{
			if (iParam0 == 6 || iParam0 == 7)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	func_1430(&(Local_14.f_1), 1);
	return 1;
}

void func_819(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (((func_172(&(Local_14.f_3[iVar0]), 2) && is_ped_human(&(Local_14.f_3[iVar0]))) && is_ped_on_mount(&(Local_14.f_3[iVar0]))) && Local_116[iVar0]->f_1 != 2)
		{
			func_1432(iVar0, bParam0);
			Local_116[iVar0]->f_1 = 2;
		}
		iVar0++;
	}
}

void func_820(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_172(&(Local_14.f_3[iVar0]), 0))
		{
			set_entity_visible(&(Local_14.f_3[iVar0]), bParam0);
		}
		iVar0++;
	}
}

void func_821()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_172(&(Local_14.f_3[iVar0]), 2))
		{
			if (!is_ped_human(&(Local_14.f_3[iVar0])) && iVar0 > 0)
			{
				func_1275(&(Local_14.f_3[iVar0]), func_1433(iVar0), 2, 1073741824);
			}
		}
		iVar0++;
	}
}

void func_822()
{
	if (does_particle_fx_looped_exist(iVar906))
	{
		remove_particle_fx(iVar906, false);
		_0x0f2a2175734926d8("BURNER_SPUTTER", "BALLOON_SOUNDSET");
	}
}

void func_823(int iParam0)
{
	if (!_is_imap_active(iParam0))
	{
		_request_imap(iParam0);
	}
}

bool func_824(int iParam0)
{
	iVar0 = 0;
	if (!decor_exist_on(iParam0, func_826()))
	{
		return iVar0;
	}
	iVar1 = decor_get_int(iParam0, func_826());
	if (iVar1 == -1801358778)
	{
		iLocal_419 = get_ped_index_from_entity_index(iParam0);
		set_entity_as_mission_entity(iVar416, true, true);
		iVar0 = 1;
	}
	return iVar0;
}

bool func_825(int iParam0)
{
	iVar0 = 0;
	if (!decor_exist_on(iParam0, func_826()))
	{
		return iVar0;
	}
	iVar1 = decor_get_int(iParam0, func_826());
	if (iVar1 == 1075055456)
	{
		iLocal_420 = get_object_index_from_entity_index(iParam0);
		set_entity_as_mission_entity(iVar417, true, true);
		iVar0 = 1;
	}
	if (iVar1 == -1343505693)
	{
		iLocal_421 = get_object_index_from_entity_index(iParam0);
		set_entity_as_mission_entity(iVar418, true, true);
		iVar0 = 1;
	}
	if (iVar1 == -140392810)
	{
		iLocal_422 = get_object_index_from_entity_index(iParam0);
		set_entity_as_mission_entity(iVar419, true, true);
		iVar0 = 1;
	}
	return iVar0;
}

char* func_826()
{
	return "genericMissionInt";
}

bool func_827(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_828(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_829(var uParam0)
{
	return uParam0->f_862;
}

void func_830(var uParam0)
{
	if (func_1434(&iVar0))
	{
		if (func_565(iVar0, 0))
		{
			if (func_589(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_617(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_565(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_831(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1435(-1);
	}
	func_1436(1);
	set_entity_invincible(Global_35, true);
	if (!func_828(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_828(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_828(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_828(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_828(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_828(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_828(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_828(*iParam0, 4) && !func_828(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_828(*iParam0, 2048))
	{
		func_842(0, 0);
	}
	if (func_828(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_828(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_828(*iParam0, 8192))
	{
		func_1437();
	}
	if (!func_828(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_828(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_828(*iParam0, 1024))
	{
		set_cinematic_mode_active(false);
	}
	if (iParam2 != 2)
	{
		set_ped_stealth_movement(Global_35, iParam2 == 1, 0, 0);
	}
	if (is_ped_on_foot(Global_35))
	{
		if (bParam6)
		{
			set_ped_desired_move_blend_ratio(Global_35, 0f);
			set_ped_desired_heading(Global_35, get_entity_heading(Global_35));
			set_entity_velocity(Global_35, 0f, 0f, 0f);
		}
		if (!func_828(*iParam0, 16))
		{
			iVar0 = create_itemset(true);
			bVar1 = false;
			find_all_attached_carriable_entities(Global_35, iVar0);
			iVar2 = 0;
			iVar2 = 0;
			while (iVar2 < get_itemset_size(iVar0))
			{
				iVar6 = get_indexed_item_in_itemset(iVar2, iVar0);
				iVar7 = _get_entity_from_item(iVar6);
				if (!does_entity_exist(iVar7))
				{
				}
				else
				{
					bVar8 = false;
					if (is_entity_an_object(iVar7))
					{
						if (func_1438() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_393(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1439(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1440(2);
						func_1441(-1);
						func_1442(vVar3);
						func_1444(func_1443());
					}
					bVar1 = true;
				}
				iVar2++;
			}
			if (bVar1)
			{
				if (!_0x3ab6c7b0bb0df4b1(Global_35, -1))
				{
					clear_ped_tasks_immediately(Global_35, false, true);
					_0x2208438012482a1a(Global_35, false, false);
				}
			}
			destroy_itemset(iVar0);
		}
	}
	if (bParam6 && is_ped_on_mount(Global_35))
	{
		iVar9 = get_mount(Global_35);
		if (!is_entity_dead(iVar9))
		{
			clear_ped_tasks(iVar9, 1, 0);
			task_stand_still(iVar9, -1);
		}
	}
	if (!func_828(*iParam0, 4096))
	{
		func_1445(Global_35);
	}
	if (!func_828(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_828(*iParam0, 2097152))
	{
		if (func_1446() || _0x50f124e6ef188b22(Global_35))
		{
			func_1447(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_832(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_833(var uParam0)
{
	if (func_827(uParam0, 2048) && !func_393(func_1448(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_827(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_910(iVar1, func_1448(uParam0), func_1449(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_827(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_910(iVar3, func_1448(uParam0), func_1449(uParam0), 2, 1073741824);
		}
	}
}

void func_834(var uParam0)
{
	if ((func_827(uParam0, 268435456) && !func_393(func_1448(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1448(uParam0) };
			func_910(iVar0, vVar1, func_1450(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_835(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_393(vParam1))
	{
		func_1451(uParam0, 2048, 1);
	}
	else
	{
		func_738(uParam0, 2048);
		if (bParam5)
		{
			func_738(uParam0, -2147483648);
		}
	}
}

void func_836(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if ((!is_entity_dead(&(uParam0->f_13[iVar0])) && is_entity_a_ped(&(uParam0->f_13[iVar0]))) && get_ped_index_from_entity_index(&(uParam0->f_13[iVar0])) != Global_35)
		{
			iVar1 = get_ped_index_from_entity_index(&(uParam0->f_13[iVar0]));
			if (is_ped_human(iVar1))
			{
				if (_0x6f1f0b17109309da(uParam0->f_804, &(uParam0->f_13[iVar0]->f_1)))
				{
					if (!func_1452(uParam0->f_13[iVar0], 8))
					{
						if (func_679(func_1097(iVar1, 0, 1, 0)))
						{
							if (!func_1453(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_679(func_1097(iVar1, 1, 1, 0)))
						{
							if (!func_1453(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 1, false, false);
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
}

void func_837(var uParam0, bool bParam1)
{
	_0x67e21acc5c0c970c(Global_35, 3, bParam1);
	if (!bParam1)
	{
		if (!Global_17)
		{
			_set_ped_component_disabled(Global_35, -1229581779, 0);
			Global_17 = !bParam1;
		}
	}
}

void func_838(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_20() != -1;
	Global_1946804->f_857 = 0;
	if (iParam3 == -1 && bParam6)
	{
		_0x0bfa1bd465cdfefd(iParam1);
		if (!bVar4)
		{
			if (Global_1347477->f_189 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_189);
			}
			if ((Global_1946804->f_1 == -2125499975 || Global_1946804->f_1 == -449205311) && Global_1347477->f_190 != 0)
			{
				_set_ped_body_component(iParam1, Global_1347477->f_190);
			}
			func_1194(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1454(iParam1, 29, bVar4, 1, 0);
			func_1454(iParam1, 31, bVar4, 1, 0);
			func_1454(iParam1, 30, bVar4, 1, 0);
			func_1454(iParam1, 22, bVar4, 1, 0);
			func_1454(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1134(32768) && func_1455(1108822547, 8)) && func_1456(10, iParam3))
	{
		func_1457(iParam1, 0, 1);
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		iVar1 = &Global_1946804->f_57.f_430[iVar0];
		if (iVar1 <= -1 || iVar1 >= 39)
		{
		}
		else
		{
			iVar3 = func_1202(iVar1, 1);
			if (func_1455(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1456(iVar1, iParam3))
				{
				}
				else if ((func_1455(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1455(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1454(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1458(iVar3, 1, 6);
					}
				}
				else
				{
					if (!bParam6)
					{
						if ((!bParam2 && &uParam0->f_1[iVar1] == &Global_1946804->f_2456[iVar1]) && uParam0->f_1[iVar1]->f_1 == Global_1946804->f_2456[iVar1]->f_1)
						{
						}
						else
						{
							if (Global_1946804->f_57[iVar1]->f_1 > 1)
							{
								func_1454(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1455(iVar3, 1))
							{
								func_1459(iVar3, 1, 6);
							}
							Global_1946804->f_857++;
							_set_ped_component_enabled(iParam1, iVar2, false, bVar4, false);
							if (uParam0->f_1[iVar1]->f_1 != 0)
							{
								_0x66b957aac2eaaeab(iParam1, iVar2, uParam0->f_1[iVar1]->f_1, 0, bVar4, 1);
							}
						}
						iVar0++;
						if (Global_1946804->f_857 <= 0)
						{
							return;
						}
						if (bParam4)
						{
							_0xaab86462966168ce(iParam1, bVar4);
							_update_ped_variation(iParam1, false, true, true, true, bParam5);
						}
					}
				}
			}
		}
	}
}

bool func_839(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1460((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_840(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_841(int iParam0, int iParam1)
{
	return func_1461(&uVar0, iParam0, iParam1);
}

void func_842(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_679(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1462(1);
	}
}

void func_843(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_844(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_845(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_846(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_847(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_848(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_849(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_850(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_851(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_852(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_853(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_854(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (uParam0[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_855(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_868((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_856(int iParam0, int iParam1, var uParam2)
{
	func_1463(uParam2);
	if (iParam0 == 1)
	{
		if (iParam1 == iVar291 || iParam1 == iVar292)
		{
			*uParam2 = { func_488(2, 0) };
		}
		else if (iParam1 == iVar293)
		{
			*uParam2 = { func_488(4, 4) };
		}
		else if (iParam1 == iVar294)
		{
			*uParam2 = { func_488(4, 5) };
			uParam2->f_2 = (uParam2->f_2 + 5f);
		}
		else if (iParam1 == iVar295)
		{
			func_487(uParam2, 3021.62f, 1277.49f, 84.67f, 31.2f);
		}
		else if (iParam1 == iVar296)
		{
			func_487(uParam2, 2916.082f, 752.1528f, 62.6634f, 161.5043f);
		}
		else if (iParam1 == iVar297)
		{
			func_487(uParam2, 2876.71f, 579.28f, 70.61f, 166.66f);
		}
		else if (iParam1 == iVar298)
		{
			func_487(uParam2, *Local_524.f_107[0], 139.6848f);
		}
		uParam2->f_4 = 1588640480;
		uParam2->f_5 = 14;
	}
}

int func_857(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_858(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_872((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_859(int iParam0, int iParam1)
{
	iVar0 = func_1464(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_860(var uParam0, char* sParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1) && (*uParam0)[iVar0]->f_1 == iParam2)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_861(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_877((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_862(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_863(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_1465(uParam0[iVar0]))
		{
			if (uParam0[iVar0] == iParam1)
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_864(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_887((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_865(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!is_string_null_or_empty(uParam0[iVar0]))
		{
			if (are_strings_equal(uParam0[iVar0], sParam1))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_866(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_870((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_867(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_868(var uParam0)
{
	return *uParam0 != 0;
}

void func_869(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_870(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_871(var uParam0)
{
	if (!func_899(uParam0->f_3, 1))
	{
		switch (uParam0->f_1)
		{
			case 2:
				request_waypoint_recording(*uParam0);
				break;
			case 1:
				request_vehicle_recording(uParam0->f_2, *uParam0);
				break;
			default:
				break;
		}
		func_862(&(uParam0->f_3), 1);
	}
}

bool func_872(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_873(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_874(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_875(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_1466(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_876(var uParam0)
{
	if (func_899(*uParam0, 2))
	{
		return true;
	}
	if (!func_899(*uParam0, 1))
	{
		func_1467(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_862(uParam0, 2);
		return true;
	}
	return false;
}

bool func_877(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_878(var uParam0)
{
	if (!func_899(uParam0->f_2, 1))
	{
		if (func_1468(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1469(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_297())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1053())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_862(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_879(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_880(var uParam0, int iParam1)
{
	if (!func_899(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_881(var uParam0)
{
	return *uParam0 != 0;
}

void func_882(var uParam0)
{
	if (!func_899(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_862(&(uParam0->f_2), 1);
	}
}

bool func_883(var uParam0)
{
	return *uParam0 != 0;
}

void func_884(var uParam0)
{
	if (!func_899(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_862(&(uParam0->f_3), 1);
	}
}

bool func_885(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_886(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_887(var uParam0)
{
	return func_1465(*uParam0);
}

void func_888(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_889(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_890(var uParam0)
{
	if (!func_899(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_862(&(uParam0->f_2), 1);
	}
}

bool func_891(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_892(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

bool func_893(var uParam0, int iParam1, char* sParam2)
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

void func_894(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	if (iParam3 == 0 && !does_entity_exist(iParam1))
	{
		return;
	}
	if (iParam3 == 0 && (is_entity_dead(iParam1) && !bParam5))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	if (is_string_null_or_empty(sParam2))
	{
		sParam2 = func_734(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1470(uParam0, iParam1);
	if (iVar0 != -1)
	{
		if (!are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam2))
		{
		}
		else if (uParam0->f_13[iVar0]->f_9 != iParam3)
		{
		}
		else if (uParam0->f_13[iVar0]->f_10 != iParam4)
		{
		}
		else
		{
			return;
		}
	}
	else
	{
		iVar1 = func_1471(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1472(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1473(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1474(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1475(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_895(int iParam0)
{
	if (!func_182(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_896(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_918(uParam0, sParam1, iParam2, bParam4, bParam5))
		{
			return false;
		}
	}
	if (!uParam0->f_2502)
	{
		iVar20 = uParam0->f_2509;
		while (iVar20 <= (uParam0->f_2508 - 1))
		{
			StringCopy(&cVar2, "", 64);
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			if (func_1476(uParam0, 0))
			{
				if (func_1477(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1478(uParam0, 1, &iVar0))
					{
					}
					if (func_1479(uParam0, 3, &cVar2))
					{
					}
					if (func_1478(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1478(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1478(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1478(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1478(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1480(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_482((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_482(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_482(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_210(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1480(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_482(uParam0->f_2243[uParam0->f_2507], 1048576);
							uParam0->f_2507++;
						}
					}
				}
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2509 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return false;
			}
			iVar20++;
		}
		uParam0->f_2502 = 1;
	}
	if (!func_24(uParam0) && uParam0->f_2510 > 0)
	{
		iVar20 = uParam0->f_2511;
		while (iVar20 <= (uParam0->f_2510 - 1))
		{
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			iVar22 = 0;
			if (func_1476(uParam0, 12))
			{
				if (func_1478(uParam0, 13, &iVar0))
				{
				}
				if (func_1478(uParam0, 14, &iVar1))
				{
					iVar22 = iVar1;
				}
			}
			if (is_model_valid(iVar22) && iVar22 != 0)
			{
				uParam0->f_2484[iVar0] = iVar22;
			}
			iVar21++;
			if (bParam4 && iVar21 >= 20)
			{
				uParam0->f_2511 = iVar20 + 1;
				uParam0->f_2500 = 0;
				return false;
			}
			iVar20++;
		}
	}
	uParam0->f_2500 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	uParam0->f_2502 = 0;
	uParam0->f_2503 = 1;
	if (!bParam4)
	{
		func_38(uParam0);
	}
	return true;
}

void func_897(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_210((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_210((*uParam0)[iVar0], 1))
		{
			func_1481((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_898(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_868((*uParam0)[iVar1]))
		{
			if (func_859((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1482((*uParam0)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam1)
	{
		if (func_870((*uParam1)[iVar1]))
		{
			if (func_859((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1483((*uParam1)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam2)
	{
		if (func_872((*uParam2)[iVar1]))
		{
			if (func_859((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1484((*uParam2)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		if (func_874((*uParam3)[iVar1]))
		{
			if (func_859((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_875((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_859(uParam4->f_1, iParam12))
	{
		if (!func_876(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_877((*uParam5)[iVar1]))
		{
			if (func_859((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1468((*uParam5)[iVar1]))
				{
					if (!func_900((*uParam5)[iVar1]))
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_877((*uParam5)[iVar1]))
		{
			if (func_859((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1468((*uParam5)[iVar1]))
				{
					if (func_900((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_879((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1485((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
								{
									iVar0 = 0;
								}
							}
							iVar2++;
						}
					}
					else
					{
						iVar0 = 0;
					}
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam6)
	{
		if (func_881((*uParam6)[iVar1]))
		{
			if (func_859((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1486((*uParam6)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam7)
	{
		if (func_883((*uParam7)[iVar1]))
		{
			if (func_859((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1487((*uParam7)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam8)
	{
		if (func_885((*uParam8)[iVar1]))
		{
			if (func_859((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1488((*uParam8)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam9)
	{
		if (func_887((*uParam9)[iVar1]))
		{
			if (func_859((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1489((*uParam9)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam10)
	{
		if (func_889((*uParam10)[iVar1]))
		{
			if (func_859((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1490((*uParam10)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < *uParam11)
	{
		if (func_891((*uParam11)[iVar1]))
		{
			if (func_859((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1491((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_899(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_900(var uParam0)
{
	if (func_899(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_2, 1))
	{
		func_878(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_862(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_901(int iParam0)
{
	if (!func_182(iParam0))
	{
		return 1;
	}
	switch (iParam0)
	{
		case 14:
			return 1;
		case 1:
		case 5:
		case 13:
			return 2;
		case 2:
		case 24:
		case 43:
		case 55:
			return 3;
		case 6:
			return 4;
		case 11:
		case 12:
		case 21:
		case 54:
			return 6;
		case 0:
		case 3:
		case 16:
		case 17:
		case 26:
		case 27:
		case 29:
		case 30:
		case 31:
		case 33:
		case 37:
		case 40:
		case 47:
		case 50:
		case 51:
		case 57:
		case 58:
			return 0;
		case 22:
		case 49:
		case 52:
		case 75:
			return 7;
		case 20:
			return 8;
		case 4:
		case 15:
		case 18:
			return 5;
		case 60:
		case 77:
			return 13;
		case 65:
			return 14;
		case 34:
			return 23;
		case 19:
		case 23:
		case 38:
		case 39:
		case 41:
		case 42:
		case 48:
		case 53:
		case 66:
		case 67:
		case 76:
			return -1;
		case 10:
			return 21;
		case 32:
		case 44:
		case 45:
		case 46:
		case 59:
		case 69:
			return 11;
		case 35:
			return 19;
		case 25:
			return 8;
		case 70:
			return 4;
		case 71:
			return 13;
		default:
			return 1;
	}
	return -1;
}

bool func_902(char[4] cParam0, int iParam1, var uParam2, bool bParam3, var uParam4, var uParam5, var uParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_502(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_251(iParam1)) && func_1492(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1493(iParam1, 1, 0, uParam4, uParam5, uParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1494(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1495(iParam1);
		return true;
	}
	return false;
}

bool func_903(char[4] cParam0)
{
	if (!func_393(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1496(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1496(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1496(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1496(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1496(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1496(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1496(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1496(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1496(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1496(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1496(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1496(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1496(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1496(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1496(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1496(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1496(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1496(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1496(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1496(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1496(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1496(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1496(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1496(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1496(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1496(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1496(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1496(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1496(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1496(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1496(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1496(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1496(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_393(cParam0->f_5417);
}

int func_904(int iParam0, var uParam1)
{
	uParam1->f_10 = func_259(uParam1->f_10);
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
		if (func_393(uParam1->f_6))
		{
		}
	}
	bVar0 = func_392();
	if (*uParam1)
	{
		if (bVar0 && !func_320((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1497(5))
			{
				func_514(5);
				func_1498(5);
				func_1441(0);
				func_1440(0);
			}
		}
	}
	if (func_1499(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_320((*Global_1835011)[37]->f_1, 1)) && !func_320((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_320((*Global_1835011)[43]->f_1, 1)) && !func_320((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_208(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_517(iVar1))
	{
		bVar3 = true;
		if (func_1500(iVar1))
		{
			bVar4 = true;
		}
		if (func_524(iVar1))
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
				func_525(uParam1->f_10);
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
			if (!func_1497(0) && func_1497(1))
			{
				func_1501(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1502())
			{
				func_1503();
			}
			func_1441(0);
			func_1440(0);
			func_1442(uParam1->f_6);
		}
	}
	if (!func_517(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1504(uParam1->f_10) == 0 || func_1505(uParam1->f_10) == 0) || func_1506(uParam1->f_10) == 0)
			{
				func_1507(uParam1->f_10);
			}
			func_1508(uParam1->f_10);
			func_1509(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_208(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_517(iVar1))
	{
		bVar3 = true;
		if (func_1500(iVar1))
		{
			bVar4 = true;
		}
		if (func_524(iVar1))
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
			if (!func_393(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1510(uParam1->f_10))
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
			Var8 = { func_1511(uParam1->f_10) };
			Var10 = { func_1512() };
			func_1513(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_510(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1514(uParam1->f_10);
		if (uParam1->f_2 && !func_393(uParam1->f_6))
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
	func_509(uParam1->f_10);
	if (func_510(uParam1->f_10))
	{
		iVar16 = func_255(uParam1->f_10);
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

bool func_905(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_906(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (_is_ped_using_scenario_hash(iParam0, -1805387726))
	{
		return true;
	}
	return false;
}

bool func_907(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	if (bParam6)
	{
		if (!network_is_host_of_this_script())
		{
			return false;
		}
	}
	if (!can_register_mission_peds(1))
	{
		return false;
	}
	if (_0x0e2c3aee6ce603b7())
	{
		return false;
	}
	if (!func_1515(iParam1))
	{
		return false;
	}
	iVar0 = func_1516(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
	*iParam0 = ped_to_net(iVar0);
	if (network_does_network_id_exist(*iParam0))
	{
		if (bParam9)
		{
			_0x899a04afcc725d04(iVar0, _0xd42514c182121c23(iParam1));
		}
		if (bParam10)
		{
			set_ped_relationship_group_hash(iVar0, _get_default_relationship_group_hash(iParam1));
		}
		if (bParam6)
		{
			set_network_id_exists_on_all_machines(*iParam0, true);
		}
		return true;
	}
	return false;
}

void func_908(char[4] cParam0, bool bParam1)
{
	if (!is_entity_dead(cParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(cParam0->f_5411))
		{
			set_entity_as_mission_entity(cParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(cParam0->f_5411, -1)) && !func_120(cParam0, 32768))
		{
			clear_ped_tasks(cParam0->f_5411, 1, 0);
		}
		if (!func_20() == 0)
		{
			set_ped_relationship_group_hash(cParam0->f_5411, 1030835986);
		}
		else
		{
			set_ped_relationship_group_hash(cParam0->f_5411, get_ped_relationship_group_default_hash(player_ped_id()));
			set_entity_can_be_damaged(cParam0->f_5411, false);
		}
		if (get_ped_config_flag(cParam0->f_5411, 136, true))
		{
			set_ped_config_flag(cParam0->f_5411, 136, false);
		}
	}
}

float func_909(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_910(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	bVar4 = is_entity_a_ped(iParam0);
	if (bVar4)
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		bVar3 = _get_ped_crouch_movement(iVar1);
		if (is_ped_ragdoll(iVar1))
		{
			_0x221f4d9912b7fe86(iVar1, 1);
		}
	}
	if (iParam0 == func_1517(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1518(iParam0))
	{
		if (func_906(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_388(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_910(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_910(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_388(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_388(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_388(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_388(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_388(iParam5, 129))
	{
		if (func_388(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_388(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_388(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_388(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1518(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_388(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_388(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_911(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = 5;
			*iParam2 = 8;
			break;
		case 14:
			*iParam1 = 9;
			*iParam2 = 17;
			break;
		case 16:
			*iParam1 = 9;
			*iParam2 = 18;
			break;
		case 33:
			*iParam1 = 17;
			*iParam2 = 18;
			break;
		case 29:
			*iParam1 = 9;
			*iParam2 = 17;
			break;
		case 30:
			*iParam1 = 6;
			*iParam2 = 18;
			break;
		case 20:
		case 26:
		case 37:
		case 40:
		case 54:
			*iParam1 = 22;
			*iParam2 = 5;
			break;
		case 11:
			*iParam1 = 12;
			*iParam2 = 18;
			break;
		default:
			return false;
	}
	return true;
}

bool func_912(var uParam0, int iParam1)
{
	switch (func_1519(uParam0))
	{
		case 0:
			if (!func_1520(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1521(uParam0, 1);
			break;
		case 1:
			func_1522(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_831(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1521(uParam0, 2);
			break;
		case 2:
			if (func_1523(uParam0))
			{
				func_1334(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1521(uParam0, 3);
			}
			break;
		case 3:
			if (func_919(&(uParam0->f_3)) >= 1f)
			{
				func_1521(uParam0, 4);
			}
			break;
		case 4:
			if (!func_29())
			{
				render_script_cams(false, false, 3000, true, false, 0);
				if (does_cam_exist(uParam0->f_2))
				{
					destroy_cam(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			func_1524(&iVar1, 0);
			release_script_audio_bank();
			func_1521(uParam0, 0);
			return true;
	}
	return false;
}

void func_913(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1525(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_914(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1526(cParam0, iVar0) };
	if (func_1528(&(cParam0->f_10792), Var1, func_1527(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1529(&(cParam0->f_10792), 524288))
		{
			func_373(cParam0, 67108864);
			func_1530(&(cParam0->f_10792), 524288);
		}
		func_1531(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_915(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_916(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1532(cParam0);
		func_1533(cParam0);
		return true;
	}
	if (func_1534(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_937(cParam0);
	}
	if (func_29())
	{
		if (!func_8(cParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(cParam0->f_609.f_2))
			{
				destroy_cam(cParam0->f_609.f_2, false);
			}
			func_51(&(cParam0->f_10792));
			func_1535(cParam0);
			func_915(cParam0, 524288);
			func_1536(cParam0);
			func_149(cParam0, 30f);
			func_150(cParam0, 40f);
			func_99(cParam0, 262144);
		}
		if (!func_8(cParam0, 524288) && _0xef324e9550a394d5(cParam0->f_7375.f_804))
		{
			func_99(cParam0, 524288);
		}
	}
	return false;
}

bool func_917(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1537(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1538(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1539(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_423(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_895(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_918(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_918(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	uParam0->f_2500 = 0;
	if (is_string_null_or_empty(sParam1))
	{
		return true;
	}
	bVar0 = _0x7907969497ea92f5(uParam0->f_2495);
	if (!bVar0)
	{
		if (!_0x4f9e3ed7617123ac(get_hash_key(sParam1)))
		{
			return true;
		}
		if (!bParam4)
		{
			uParam0->f_2495 = _0xca56dd6ab7a39f64(get_hash_key(sParam1));
		}
		else
		{
			uParam0->f_2495 = _0xd97d8d905f1562f2(get_hash_key(sParam1));
		}
	}
	uParam0->f_2501 = _0x603ac35fd4602c76(uParam0->f_2495);
	if (!uParam0->f_2501)
	{
		if (!bParam4)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	func_1540(uParam0);
	uParam0->f_2495.f_2 = 0;
	uParam0->f_2508 = _datafile_get_num_nodes(&(uParam0->f_2495));
	uParam0->f_2495.f_2 = 12;
	uParam0->f_2510 = _datafile_get_num_nodes(&(uParam0->f_2495));
	uParam0->f_2501 = 1;
	uParam0->f_2509 = 0;
	uParam0->f_2511 = 0;
	if (bParam3)
	{
		return false;
	}
	return true;
}

float func_919(float fParam0)
{
	if (!func_26(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_484(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_537() - fParam0->f_1);
}

bool func_920()
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (Global_1572887->f_12 == -1)
		{
			if (&Global_1934765->f_39[iVar0] != &Global_40.f_283[iVar0])
			{
				return true;
			}
		}
		else if (&Global_1934765->f_39[iVar0] != &Global_1058888->f_40567[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_921(char[4] cParam0)
{
	if (!_does_volume_exist(&(uLocal_487[0])))
	{
		func_1541(0);
		_0xc1799fafd2fdf52b(&(uLocal_487[0]), 0, 0, 0);
		_0x18262cafebb5fbe1(&(uLocal_487[0]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(uLocal_487[0]), 0, 0, 0, -1, -1, 2);
		if (func_33(cParam0) >= 3)
		{
			func_1542(&(uLocal_487[0]), 0);
			func_1543(&(uLocal_487[0]), 0, 0, 0, 0, 0);
		}
	}
	if (!_does_volume_exist(&(uLocal_487[4])))
	{
		func_1541(4);
		_0xc1799fafd2fdf52b(&(uLocal_487[4]), 0, 0, 0);
		_0x18262cafebb5fbe1(&(uLocal_487[4]), 0, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(uLocal_487[4]), 0, 0, 0, -1, -1, 0);
		if (func_33(cParam0) >= 3)
		{
			func_1542(&(uLocal_487[4]), 0);
			func_1543(&(uLocal_487[4]), 0, 0, 0, 0, 0);
		}
	}
	if (!_does_volume_exist(&(uLocal_487[3])))
	{
		func_1544(uLocal_487[3], 3212.701f, -554.9965f, 58.5283f, 0f, 0f, 41f, 150f, 150f, 40f, "VOLUME_PRISON_ISLAND_SCENARIO_BLOCKING");
		uLocal_485 = func_1545(&(uLocal_487[3]), 0, 0, 0);
	}
	if (!_does_volume_exist(&(uLocal_487[20])))
	{
		func_1544(uLocal_487[20], 2131.69f, -960.1057f, 42.3255f, 0f, 0f, 0f, 110.0804f, 118.6096f, 7.561766f, "VOLUME_DANGEROUS_ANIM_CULL");
		func_1546(&(uLocal_487[20]), 0, 0, 0);
		func_1542(&(uLocal_487[20]), 0);
	}
}

void func_922()
{
	if (!_does_volume_exist(&(uLocal_815[0])))
	{
		func_1547(uLocal_815[0], 2943.017f, 1363.463f, 46.50464f, 0f, 0f, -19.94317f, 79.94183f, 75.96039f, 9.612125f, "SPAWNER_ANNESBURG");
	}
	if (!_does_volume_exist(&(uLocal_815[1])))
	{
		func_1547(uLocal_815[1], 2927.014f, 1321.201f, 43.75941f, 0f, 0f, -17.99814f, 26.2859f, 21.71635f, 8.510774f, "SPAWNER_TOWN");
	}
	if (!_does_volume_exist(&(uLocal_815[2])))
	{
		func_1547(uLocal_815[2], 2878.343f, 1224.658f, 46.83115f, 0f, 0f, -33.8685f, 30.27581f, 23.34275f, 8.212245f, "SPAWNER_LOGS");
	}
	if (!_does_volume_exist(&(uLocal_815[3])))
	{
		func_1547(uLocal_815[3], 2803.739f, 1080.803f, 49.0743f, 0f, 0f, -22.4085f, 33.35328f, 13.98413f, 10f, "SPAWNER_FOREST_0");
	}
	if (!_does_volume_exist(&(uLocal_815[4])))
	{
		func_1547(uLocal_815[4], 2793.251f, 1023.951f, 61.31713f, 0f, 0f, -7.634599f, 10f, 10f, 10f, "SPAWNER_FOREST_1");
	}
	if (!_does_volume_exist(&(uLocal_815[5])))
	{
		func_1547(uLocal_815[5], 2823.9f, 950.5801f, 49.3965f, 0f, 0f, -67.5028f, 14.98911f, 29.5572f, 10f, "SPAWNER_FOREST_2");
	}
	if (!_does_volume_exist(&(uLocal_815[6])))
	{
		func_1547(uLocal_815[6], 2873.561f, 828.4138f, 49.68456f, 0f, 0f, -57.30661f, 11.54642f, 21.7848f, 10f, "SPAWNER_SLOPE");
	}
	if (!_does_volume_exist(&(uLocal_815[7])))
	{
		func_1547(uLocal_815[7], 2908.437f, 704.5307f, 54.54277f, 0f, 0f, -10.45454f, 39.26129f, 22.49265f, 15.8444f, "SPAWNER_TRACKS");
	}
	if (!_does_volume_exist(&(uLocal_815[8])))
	{
		func_1547(uLocal_815[8], 2896.179f, 649.555f, 57.06507f, 0f, 0f, -16.47127f, 41.20998f, 60.91283f, 12.64215f, "SPAWNER_FINAL");
	}
}

bool func_923()
{
	return ((is_screen_faded_in() && !is_screen_fading_in()) && !is_screen_fading_out());
}

int func_924(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13, bool bParam14)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam5, bParam6, bParam13, bParam14);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	func_1548(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

void func_925(int iParam0, int iParam1)
{
	if (!is_entity_dead(iParam0))
	{
		if (func_1549(iParam0, iParam1))
		{
			if (func_1550(iParam0, iParam1))
			{
				if (func_1551(iParam0, iParam1))
				{
					_apply_ped_metaped_outfit(decor_get_int(iParam0, "metaped_outfit_request"), iParam0, true, false);
					func_1552(iParam0);
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

int func_926(int iParam0)
{
	iVar0 = func_439(iParam0);
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

int func_927(int iParam0)
{
	if (!func_436(iParam0))
	{
		return 0;
	}
	if (!func_438(func_437(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_439(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_439(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_439(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_439(iParam0));
	return 1;
}

void func_928()
{
	if (!_does_volume_exist(&(uLocal_487[1])))
	{
		func_1541(1);
		uLocal_484 = func_1545(&(uLocal_487[1]), 0, 0, 0);
		func_1543(&(uLocal_487[1]), 0, 0, 1, 1, 0);
		_0xc1799fafd2fdf52b(&(uLocal_487[1]), 0, 0, 0);
	}
	if (!_does_volume_exist(&(uLocal_487[2])))
	{
		func_1544(uLocal_487[2], 2800.417f, -1164.202f, 46.80888f, 0f, 0f, 0f, 0.5f, 0.5f, 2f, "VOLUME_PIANO_BLOCKING_VOL");
		uLocal_486 = func_1545(&(uLocal_487[2]), 0, 0, 0);
	}
	if (!_does_volume_exist(&(uLocal_487[19])))
	{
		uLocal_487[19] = _0x0eb78c2b156635b1(665633627, 2132.135f, -959.6953f, 41.41563f, 0f, 0f, 0f, 4f, 4f, 3.235462f);
	}
	if (!_0x91a5f9cbebb9d936(uVar421))
	{
		iLocal_423 = func_1553(2559.39f, -1128.81f, 49.62f, 1f, 1f, 1f);
	}
	if (!_0x91a5f9cbebb9d936(uVar422))
	{
		iLocal_424 = func_1553(2535.78f, -1128.99f, 48.96f, 1f, 1f, 1f);
	}
	if (!_0x91a5f9cbebb9d936(uVar423))
	{
		iLocal_425 = func_1553(2462.82f, -1128.75f, 47.16f, 1f, 1f, 1f);
	}
	if (!_0x91a5f9cbebb9d936(uVar424))
	{
		iLocal_426 = func_1553(2395.2f, -1128.69f, 45.67f, 1f, 1f, 1f);
	}
	func_1554();
}

void func_929(char[4] cParam0)
{
	func_145(cParam0, Global_35, "ARTHUR", 0);
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
}

void func_930(char[4] cParam0)
{
	iVar0 = func_33(cParam0);
	Var1 = { func_1274(iVar0) };
	if (!func_393(Var1))
	{
		iLocal_483 = func_253(cParam0);
		func_1275(iVar480, Var1, 2, 1073741824);
		set_blocking_of_non_temporary_events(iVar480, true);
		task_stand_still(iVar480, -1);
		func_151(cParam0, iVar480, "Horse_01^1", 0, 0, 0, 0);
		if (iVar0 != iVar293 && iVar0 != iVar302)
		{
			func_1273(7);
			func_261();
		}
	}
}

void func_931(var uParam0)
{
	*(*uParam0)[0] = { 2145.015f, -949.0165f, 275f };
	*(*uParam0)[1] = { 2369.091f, -819.6057f, 250f };
	*(*uParam0)[2] = { 2675.923f, -655.4425f, 200f };
	*(*uParam0)[3] = { 2816.204f, -616.1936f, 170f };
	*(*uParam0)[4] = { 2965.702f, -583.2185f, 160f };
	*(*uParam0)[5] = { 3050.267f, -569.0783f, 150f };
	*(*uParam0)[6] = { 3121.539f, -555.5691f, 80f };
	*(*uParam0)[7] = { func_1259(4, 5) };
}

void func_932(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		*(*uParam0)[0] = { func_1259(4, 6) };
	}
	else
	{
		*(*uParam0)[0] = { func_1259(4, 7) };
	}
}

void func_933(var uParam0)
{
	*(*uParam0)[0] = { 3230.715f, -465.3799f, 97.6764f };
	*(*uParam0)[1] = { 3247.695f, -369.4517f, 97.6764f };
	*(*uParam0)[2] = { 3244.93f, -285.5819f, 100.9221f };
	*(*uParam0)[3] = { 3185.314f, 286.9305f, 100.9221f };
	*(*uParam0)[4] = { 3106.297f, 570.3878f, 98.7397f };
	*(*uParam0)[5] = { 3124.158f, 805.9171f, 91.8513f };
	*(*uParam0)[6] = { 3121.841f, 1000.617f, 90.8566f };
	*(*uParam0)[7] = { 3091.144f, 1113.421f, 83.0724f };
	*(*uParam0)[8] = { 2982.878f, 1241.317f, 75.1964f };
}

void func_934(var uParam0)
{
	*(*uParam0)[0] = { 2940.594f, 1264.306f, 72.1548f };
	*(*uParam0)[1] = { 2880.357f, 1176.798f, 71.1874f };
	*(*uParam0)[2] = { 2848.769f, 1109.027f, 72.6313f };
	*(*uParam0)[3] = { 2840.123f, 1020.669f, 78.339f };
	*(*uParam0)[4] = { 2868.2f, 918.2135f, 68.5686f };
	*(*uParam0)[5] = { 2906.193f, 835.3029f, 69.2859f };
	*(*uParam0)[6] = { 2913.178f, 763.0455f, 73.3371f };
	*(*uParam0)[7] = { 2909.873f, 693.535f, 74.9315f };
	*(*uParam0)[8] = { 2896.646f, 633.0898f, 75.8631f };
	*(*uParam0)[9] = { 2869.396f, 559.1852f, 75.2911f };
	*(*uParam0)[10] = { 2821.411f, 455.7222f, 77.1261f };
	*(*uParam0)[11] = { 2750.423f, 326.2361f, 82.1708f };
	*(*uParam0)[12] = { 2733.673f, 270.2963f, 83.5065f };
}

void func_935(var uParam0)
{
	*(*uParam0)[0] = { 2750.423f, 326.2361f, 80.1708f };
	*(*uParam0)[1] = { 2733.673f, 270.2963f, 81.5065f };
	*(*uParam0)[2] = { 2696.782f, 210.4786f, 85.4748f };
	*(*uParam0)[3] = { 2692.332f, 133.7378f, 87.854f };
	*(*uParam0)[4] = { 2644.563f, 100.014f, 90.5264f };
	*(*uParam0)[5] = { 2586.129f, 150.6244f, 95.1002f };
	*(*uParam0)[6] = { 2610.726f, 235.561f, 95.702f };
	*(*uParam0)[7] = { 2589.042f, 290.3841f, 102.5239f };
	*(*uParam0)[8] = { 2534.379f, 314.3928f, 104.2883f };
}

void func_936(char[4] cParam0)
{
	func_792(cParam0);
	func_1555(cParam0);
	if (func_33(cParam0) >= 1)
	{
		if (_0x8a3945405b31048f() > 0.8f)
		{
			func_1556(0.8f);
		}
		func_1557(cParam0);
		func_1558(cParam0);
		if (func_33(cParam0) == 5 || func_33(cParam0) == 6)
		{
			func_1559();
		}
	}
	if ((func_33(cParam0) == 4 || func_33(cParam0) == 5) || func_33(cParam0) == 6)
	{
		func_1560(sVar969);
	}
	if (func_33(cParam0) < 3)
	{
		func_1561();
	}
	if (func_33(cParam0) >= 1 && func_33(cParam0) <= 4)
	{
		if (func_33(cParam0) >= 4)
		{
			fLocal_980 = 0.736f;
			fLocal_981 = 0.991f;
		}
		else if (func_33(cParam0) > 2)
		{
			fLocal_980 = 0.411f;
			fLocal_981 = 0.271f;
		}
		else if ((func_33(cParam0) == 1 && func_1258(cParam0) > 2) || func_33(cParam0) == 2)
		{
			if (fVar977 != 0.411f || fVar978 != 0.271f)
			{
				if (fVar1176 == -1f)
				{
					fLocal_1179 = func_1261(&(iLocal_378[1]), func_1288(0), 0);
				}
				if (!func_26(&uLocal_982))
				{
					func_27(&uLocal_982, 0);
				}
				fVar0 = func_1346((func_1562(&uLocal_982) / 60f), 0f, 1f);
				fLocal_980 = func_1424(0.31f, 0.411f, fVar0);
				fLocal_981 = func_1424(0.231f, 0.271f, fVar0);
			}
			else
			{
				fLocal_980 = 0.411f;
				fLocal_981 = 0.271f;
			}
		}
		else
		{
			fLocal_980 = 0.31f;
			fLocal_981 = 0.231f;
		}
		_0xb8c984c0d47f4f07(fVar977, fVar978, 1);
	}
}

void func_937(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1563(cParam0);
}

void func_938(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_206())
			{
				if (func_919(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_213(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_939(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1564(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1565();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1299(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_940(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_8(cParam0, 256))
	{
		return;
	}
	if (!func_8(cParam0, 1048576))
	{
		if (func_231() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_231() && !func_54())
	{
		func_915(cParam0, 1048576);
	}
	if (!func_8(cParam0, 134217728))
	{
		if ((func_8(cParam0, 1048576) && !func_121(cParam0, func_33(cParam0), 524288)) && !func_121(cParam0, func_33(cParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_99(cParam0, 134217728);
			}
		}
	}
	else if ((!func_8(cParam0, 1048576) || func_121(cParam0, func_33(cParam0), 524288)) || func_121(cParam0, func_33(cParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_915(cParam0, 134217728);
		}
	}
}

void func_941(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_121(cParam0, func_33(cParam0), 1) && !func_121(cParam0, func_33(cParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_942(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_943(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		return;
	}
	iVar0 = get_itemset_size(Local_14);
	if (cParam0->f_13179 == -1 || cParam0->f_13179 > (iVar0 - 1))
	{
		cParam0->f_13179 = (iVar0 - 1);
	}
	iVar1 = cParam0->f_13179;
	while (iVar1 >= 0)
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar1, Local_14));
		if (does_entity_exist(iVar3) && is_entity_dead(iVar3))
		{
			remove_from_itemset(iVar3, Local_14);
		}
		iVar2++;
		if (iVar2 > 5)
		{
		}
		else
		{
			iVar1 = (iVar1 + -1);
		}
	}
	cParam0->f_13179 = (iVar1 - 1);
	if (iVar1 <= 0)
	{
		cParam0->f_13179 = (get_itemset_size(Local_14) - 1);
	}
}

int func_944(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_247(cParam0->f_5423[iVar0]))
		{
			func_1566(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_945(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1567(iVar0))
	{
		return false;
	}
	iVar1 = func_1568(iParam2);
	if (!func_1569(iVar1))
	{
		return false;
	}
	if (!func_1570(cParam0, iParam1, iParam2))
	{
		return true;
	}
	Stack.Push(cParam0);
	Call_Loc(cParam0->f_1[iVar0][iVar1]);
	if (StackVal)
	{
		return true;
	}
	return false;
}

int func_946(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_947(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_948(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_213(&(cParam0->f_603));
	}
}

void func_949(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_950(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_919(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_248(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_249(cParam0->f_5421))
		{
			iVar2 = func_250(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_451(cParam0->f_5421, iVar1);
					if (!is_entity_dead(iVar3) && !_0xa0bc8faed8cfeb3c(iVar3))
					{
						iVar0 = 0;
					}
				}
				else if ((!is_entity_dead(iVar2) && is_entity_a_vehicle(iVar2)) && _is_draft_vehicle(get_vehicle_index_from_entity_index(iVar2)))
				{
					iVar4 = 0;
					iVar4 = 0;
					while (iVar4 < 6)
					{
						iVar5 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar2), iVar4);
						if (!is_entity_dead(iVar5))
						{
							if (!_0xa0bc8faed8cfeb3c(iVar5))
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
				}
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < get_itemset_size(Local_14))
	{
		iVar6 = get_indexed_item_in_itemset(iVar1, Local_14);
		iVar7 = _get_entity_from_item(iVar6);
		if (does_entity_exist(iVar7))
		{
			if (is_entity_a_ped(iVar7))
			{
				iVar8 = get_ped_index_from_entity_index(iVar7);
				if (!is_entity_dead(iVar8) && !_0xa0bc8faed8cfeb3c(iVar8))
				{
					iVar0 = 0;
				}
			}
			else if ((!is_entity_dead(iVar7) && is_entity_a_vehicle(iVar7)) && _is_draft_vehicle(get_vehicle_index_from_entity_index(iVar7)))
			{
				iVar9 = 0;
				iVar9 = 0;
				while (iVar9 < 6)
				{
					iVar10 = _get_ped_in_draft_seat(get_vehicle_index_from_entity_index(iVar7), iVar9);
					if (!is_entity_dead(iVar10))
					{
						if (!_0xa0bc8faed8cfeb3c(iVar10))
						{
							iVar0 = 0;
						}
					}
					iVar9++;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

float func_951(char[4] cParam0)
{
	return func_919(&(cParam0->f_603));
}

bool func_952(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_953(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_945(cParam0, iParam1, 4))
	{
		if (func_33(cParam0) != 25 && func_33(cParam0) != 26)
		{
			if (!func_8(cParam0, 512) && !func_120(cParam0, 4))
			{
				func_36(cParam0, func_34(iParam1), func_34(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_34(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_132(iParam2);
			}
		}
		func_1571(cParam0);
		if (func_1572(cParam0))
		{
			func_1573(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_915(cParam0, 524288);
		func_1574(&(cParam0->f_7375), 4);
		if (func_1564(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1565();
		}
		return true;
	}
	return false;
}

void func_954(char[4] cParam0)
{
	func_1575(cParam0);
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
		if (_0xcf45df50c7775f2a())
		{
			_0x5a8b01199c3e79c3();
		}
	}
	if (is_player_teleport_active())
	{
		stop_player_teleport();
	}
	_set_milliseconds_per_game_minute(9999999);
}

bool func_955(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_914(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_915(cParam0, 2097152);
			func_258(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_947(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1526(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_914(cParam0))
			{
				func_915(cParam0, 2097152);
				func_916(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_916(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_914(cParam0))
		{
			func_915(cParam0, 2097152);
			func_1533(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_916(cParam0, Var0);
	}
	return true;
}

void func_956(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1576(cParam0))
		{
			func_434(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1577(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_957(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_247(cParam0->f_5423[iVar1]))
		{
			if (func_1578(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1579(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_958(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1580(cParam0))
		{
			func_434(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1577(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_959(char[4] cParam0)
{
	switch (func_1581(&iVar0))
	{
		case 1:
			func_1582(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_183(iVar0) && iVar0 == func_12(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_960(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 4194304))
	{
		return false;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_961(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1532(cParam0);
		func_915(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1526(cParam0, iParam1) };
	if (func_1583(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_962(char[4] cParam0, int iParam1)
{
	func_1584(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_218(cParam0, iParam1));
}

void func_963(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_949(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_915(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_915(cParam0, 4);
		func_915(cParam0, 8192);
		func_915(cParam0, 536870912);
		func_258(cParam0, 4);
		func_65(0);
		func_64(0);
		func_915(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1585(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_373(cParam0, 524288);
		}
		if (func_20() == 0)
		{
			if (_0xb655db7582aec805(Global_35))
			{
				func_21(0);
				_0xf6262491c7704a63(Global_35, 0);
			}
			else if (Global_1935630->f_12)
			{
				func_1586(1, 1);
			}
		}
	}
}

void func_964(bool bParam0)
{
	if (!func_190(0, 0, 1) || bParam0)
	{
		iVar0 = func_1051();
		iVar1 = func_1054(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1587(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1587(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_965(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1588(bParam1, bParam2, bParam3);
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

var func_966(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1589(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1590(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1589(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_967(char[4] cParam0)
{
	return true;
}

bool func_968(char[4] cParam0)
{
	return true;
}

int func_969(char[4] cParam0)
{
	return 1;
}

bool func_970(int iParam0, int iParam1)
{
	return (iParam1 && func_987(iParam0)) == func_987(iParam0);
}

void func_971(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = "";
	uParam0->f_6 = -1;
	uParam0->f_7 = -1;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 623901053;
	uParam0->f_12 = 0;
	uParam0->f_11 = 0;
	uParam0->f_13 = 1;
}

struct<4> func_972(int iParam0, int iParam1)
{
	return func_1591(iParam0, iParam1);
}

bool func_973(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_247(cParam0->f_5423[iVar0]))
		{
			if (&cParam0->f_5423[iVar0] == iParam1)
			{
				*iParam2 = iVar0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_974(var uParam0, int iParam1)
{
	func_1396(&(uParam0->f_64), iParam1);
}

void func_975(var uParam0, int iParam1)
{
	func_416(&(uParam0->f_64), iParam1);
}

bool func_976(var uParam0, bool bParam1)
{
	if (is_entity_dead(*uParam0))
	{
		return false;
	}
	if (!is_entity_a_ped(*uParam0))
	{
		return false;
	}
	if (func_1518(*uParam0))
	{
		return false;
	}
	if (!func_1592(get_ped_index_from_entity_index(*uParam0)))
	{
		return false;
	}
	iVar0 = func_1593(get_ped_index_from_entity_index(*uParam0));
	if (func_502(iVar0))
	{
		if (func_501(uParam0, 256) || !bParam1)
		{
			if (func_1016(iVar0, 37, 1) && func_1594(iVar0, 0))
			{
				func_1595(iVar0, 0, 1, 1, 1, 0);
			}
		}
		else if (bParam1)
		{
			func_1595(iVar0, 1, 1, 1, 1, 0);
		}
		return true;
	}
	return false;
}

bool func_977(int iParam0)
{
	return iParam0 > -1;
}

int func_978(int iParam0)
{
	if (!func_502(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_979(int iParam0)
{
	if (!func_977(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_980(int iParam0)
{
	if (!func_977(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_981(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_977(iParam0))
		{
			return;
		}
	}
	func_1596(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_982(int iParam0, int iParam1, bool bParam2)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (bParam2)
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 || iParam1);
	}
	else
	{
		(*Global_1360165)[iParam0]->f_70.f_1 = ((*Global_1360165)[iParam0]->f_70.f_1 - ((*Global_1360165)[iParam0]->f_70.f_1 && iParam1));
	}
}

void func_983(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_977(iParam0))
		{
			return;
		}
	}
	func_1596(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_984(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_977(iParam0))
	{
		return 0;
	}
	iVar0 = func_978(iParam0);
	if (func_172(iVar0, 0))
	{
		if (func_172(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_979(iParam0)) || func_980(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1597(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_985(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1598(iParam0);
					_0x7b204f88f6c3d287(func_1599(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1599(iParam0, 0));
					func_1600(iParam0);
				}
			}
			else
			{
				if (func_698(iParam0, 32768, 1))
				{
					iVar2 = func_1599(iParam0, 0);
					_0xb65e7f733956cf25(iVar2);
					_0xfcc6db8dbe709bc8(iVar2);
				}
				else
				{
					set_ped_as_no_longer_needed(&iVar0);
				}
				set_blocking_of_non_temporary_events(iVar0, false);
			}
		}
		else
		{
			return 0;
		}
	}
	else if (bParam3)
	{
		if (func_172((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_698(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1598(iParam0);
				_0x7b204f88f6c3d287(func_1599(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1599(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1598(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1601(iParam0, 0);
	return 1;
}

int func_985(int iParam0, bool bParam1)
{
	if (!func_977(iParam0))
	{
		return 0;
	}
	if ((*Global_1360165)[iParam0]->f_127 != 0)
	{
		return (*Global_1360165)[iParam0]->f_127;
	}
	switch (iParam0)
	{
		case 3:
			return -698095578;
		case 7:
			return 230221572;
		case 0:
			return 47961446;
		case 5:
			return 1268955201;
		case 2:
			return 2103924091;
		case 1:
			return 1554677062;
		case 9:
			return 984702223;
		case 6:
			return -1825091419;
		case 11:
			return 948152617;
		case 8:
			return 795059774;
		case 23:
			return -1880884094;
		case 20:
			return 849012978;
		case 4:
			return 404801781;
		case 10:
			return -1094022447;
		case 26:
			return -1484815615;
		case 12:
		case 14:
			return 0;
		default:
			break;
	}
	if (bParam1)
	{
		(*Global_1360165)[iParam0]->f_127 = func_1602(iParam0);
		return (*Global_1360165)[iParam0]->f_127;
	}
	return 0;
}

void func_986(int iParam0)
{
	if (func_1603(iParam0, 0))
	{
		return;
	}
	set_entity_invincible(iParam0, false);
	set_ped_config_flag(iParam0, 179, false);
	set_entity_proofs(iParam0, 0, false);
}

int func_987(int iParam0)
{
	return round(pow(2f, to_float(iParam0)));
}

int func_988(int iParam0)
{
	return func_1604(2, iParam0);
}

int func_989(int iParam0)
{
	return (-iParam0 - 1);
}

int func_990(int iParam0)
{
	return round(pow(2f, to_float(iParam0)));
}

void func_991()
{
	func_1605(2809.423f, -1181.394f, 46.32211f, 2f, 5);
	func_1605(2793.051f, -1181.463f, 46.79234f, 2f, 5);
	func_1605(2743.885f, -1153.268f, 48.48392f, 2f, 5);
	func_1605(2689.742f, -1135.479f, 49.55294f, 2f, 5);
	func_1605(2647.834f, -1135.841f, 50.09752f, 2f, 5);
	func_1605(2538.007f, -1130.99f, 49.06778f, 2f, 5);
	func_1605(2469.479f, -1131.055f, 47.27884f, 2f, 5);
	func_1605(2376.429f, -1130.674f, 45.46158f, 2f, 5);
	func_1605(2337.842f, -1106.939f, 44.84634f, 2f, 5);
	func_1605(2316.068f, -1080.862f, 42.60642f, 2f, 5);
}

void func_992(int iParam0)
{
	Global_1911668 = (Global_1911668 || iParam0);
}

bool func_993(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_994(int iParam0)
{
	iVar0 = func_462(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1606(iVar0);
}

int func_995(int iParam0, int iParam1)
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
			func_1607(iVar2);
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

void func_996()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_997(int iParam0, int iParam1)
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

int func_998(bool bParam0)
{
	if (func_20() == -1)
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

int func_999(int iParam0)
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

void func_1000(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1001(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1002(int iParam0, int iParam1)
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
			func_1608((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1608(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_183(&(Global_1898164->f_1[0])))
	{
		func_195(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1003(int iParam0, int iParam1, bool bParam2)
{
	if (!func_480(iParam0))
	{
		return;
	}
	func_1609(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1004(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1005(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_1006(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_1007()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1008(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1610(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<4> func_1009(int iParam0, int iParam1)
{
	Var0 = { func_1611(iParam0, iParam1) };
	Var0.f_3 = func_1612(iParam0, iParam1);
	return Var0;
}

void func_1010(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1613();
	}
	else
	{
		return;
	}
	func_1614();
	Global_40.f_9.f_14 = func_278();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1615())
		{
			func_364(Global_1310720->f_1);
		}
		else if (func_1616() == func_365(Global_36, 1) && func_1617() != 2)
		{
			func_364(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_364(Global_36);
		}
		func_1618(Global_36, &vVar0, &uVar4);
		if (!func_1615())
		{
			if (func_1619(vVar0, Global_36) < func_1619(Global_40.f_9.f_7, Global_36))
			{
				func_364(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_365(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1618(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_222(Global_1935630, 8192);
	}
	func_1620();
}

bool func_1011(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_247(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1012(int iParam0, int iParam1, bool bParam2)
{
	if (!func_977(iParam0))
	{
		return;
	}
	func_1621(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1013(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1014(int iParam0)
{
	func_983(iParam0, 36, 1);
}

int func_1015(int iParam0, bool bParam1)
{
	if (!func_502(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1622(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1016(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_977(iParam0))
		{
			return false;
		}
	}
	func_1596(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1017(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_502(iParam0))
	{
		iVar1 = func_539(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1623(iParam0);
		}
	}
	if (func_1016(iParam0, 5, 1))
	{
		set_ped_config_flag(func_539(iParam0), 137, true);
	}
}

void func_1018(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_981(iParam0, 50, 1);
		func_981(iParam0, 48, 1);
		func_981(iParam0, 49, 1);
		func_981(iParam0, 51, 1);
		func_981(iParam0, 52, 1);
		func_981(iParam0, 54, 1);
		func_981(iParam0, 55, 1);
	}
	else
	{
		func_983(iParam0, 50, 1);
		func_983(iParam0, 48, 1);
		func_983(iParam0, 49, 1);
		func_983(iParam0, 51, 1);
		if (bParam3)
		{
			func_983(iParam0, 54, 1);
		}
		else
		{
			func_981(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_983(iParam0, 52, 1);
			if (bParam3)
			{
				func_983(iParam0, 55, 1);
			}
		}
		else
		{
			func_981(iParam0, 52, 1);
			if (!bParam3)
			{
				func_981(iParam0, 55, 1);
			}
		}
	}
}

void func_1019(int iParam0, bool bParam1)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_539(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_539(iParam0), 204, false);
	}
}

void func_1020(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_502(iParam0))
	{
		return;
	}
	if (func_503(iParam0))
	{
		if (!func_251(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1016(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1015(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_539(iParam0);
	if (((does_entity_exist(iVar1) && func_1624(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
	{
		return;
	}
	if (does_entity_exist(iVar1) && is_entity_attached(iVar1))
	{
		if (((is_ped_active_in_scenario(iVar1, 1) || _0x0c3cb2e600c8977d(iVar1, 1)) || is_ped_on_mount(iVar1)) || is_ped_in_any_vehicle(iVar1, false))
		{
			_0xf1c03a5352243a30(iVar1);
			clear_ped_tasks_immediately(iVar1, true, true);
		}
		detach_entity(iVar1, true, true);
	}
	if (bParam4)
	{
		func_983(iParam0, 2, 1);
	}
	else
	{
		func_1625(iParam0);
		func_983(iParam0, 1, 1);
	}
}

void func_1021(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_502(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1022(int iParam0)
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

void func_1023(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_208(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1626(iVar6);
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

void func_1024(int iParam0, int iParam1)
{
	iParam0 = func_259(iParam0);
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

bool func_1025(int iParam0, int iParam1)
{
	iParam0 = func_259(iParam0);
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

void func_1026(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1628(func_1627(255), 109029619));
	}
	else if (func_297())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1053();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1027(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372;
}

void func_1028(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1628(func_1627(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_297())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1053())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1029(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (*Global_1900383)[iParam0]->f_37;
}

float func_1030(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1031(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1504(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1027(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1027(iParam0) + 1;
	fVar6 = func_1629(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1424(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1032(int iParam0)
{
	_set_blip_flash_style(iParam0, -401963276);
	_set_blip_flash_style(iParam0, 231194138);
	_set_blip_flash_style(iParam0, -1012863186);
	_set_blip_flash_style(iParam0, -272772079);
	_set_blip_flash_style(iParam0, 1313031610);
	_set_blip_flash_style(iParam0, -1814032670);
	_set_blip_flash_style(iParam0, -1380599892);
	_set_blip_flash_style(iParam0, 430539302);
	_set_blip_flash_style(iParam0, -995247980);
	_set_blip_flash_style(iParam0, -25056193);
	_set_blip_flash_style(iParam0, -264630352);
}

void func_1033(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1034()
{
	if (func_331())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1035(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1630((Global_40.f_4283.f_325 + iParam0));
}

void func_1036(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1034())
	{
		func_695(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_695(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1037(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 29:
			return "REGION_BGV_WATSONSCABIN";
		case 30:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 31:
			return "REGION_BLU_COPPERHEAD";
		case 32:
			return "REGION_BLU_SISIKA";
		case 33:
			return "REGION_CML_BACCHUSBRIDGE";
		case 34:
			return "REGION_CML_DINO_LADY";
		case 35:
			return "REGION_CML_OLDFORTWALLACE";
		case 36:
			return "REGION_CML_SIXPOINTCABIN";
		case 37:
			return "REGION_GRT_BEECHERS";
		case 38:
			return "REGION_GRT_BLACKWATER";
		case 39:
			return "REGION_GRT_QUAKERS_COVE";
		case 40:
			return "REGION_GRZ_ADLERRANCH";
		case 41:
			return "REGION_GRZ_DEAD_RIVAL";
		case 50:
			return "REGION_GRZ_CALUMETRAVINE";
		case 51:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 42:
			return "REGION_GRZ_CHEZPORTER";
		case 52:
			return "REGION_GRZ_COHUTTA";
		case 43:
			return "REGION_GRZ_COLTER";
		case 44:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 53:
			return "REGION_GRZ_GUNFIGHT";
		case 45:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 46:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 47:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 48:
			return "REGION_GRZ_TEMPEST_RIM";
		case 54:
			return "REGION_GRZ_THELOFT";
		case 55:
			return "REGION_GRE_VETERAN";
		case 56:
			return "REGION_GRZ_WAPITI";
		case 49:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 57:
			return "REGION_GUA_AGUASDULCES";
		case 58:
			return "REGION_GUA_CAMP";
		case 59:
			return "REGION_GUA_CINCOTORRES";
		case 60:
			return "REGION_GUA_LACAPILLA";
		case 61:
			return "REGION_GUA_MANICATO";
		case 62:
			return "REGION_HRT_ABANDONED_MILL";
		case 64:
			return "REGION_HRT_CARMODYDELL";
		case 65:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 66:
			return "REGION_HRT_CROP_FARM";
		case 67:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 68:
			return "REGION_HRT_DOWNSRANCH";
		case 69:
			return "REGION_HRT_EMERALDRANCH";
		case 70:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 71:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 72:
			return "REGION_HRT_LARNEDSOD";
		case 73:
			return "REGION_HRT_LOONY_CULT";
		case 74:
			return "REGION_HRT_LUCKYSCABIN";
		case 75:
			return "REGION_HRT_SWANSONS_STATION";
		case 76:
			return "REGION_HRT_VALENTINE";
		case 77:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 78:
			return "REGION_ROA_ANNESBURG";
		case 79:
			return "REGION_ROA_BEAVERHOLLOW";
		case 63:
			return "REGION_ROA_BEECHERS_C";
		case 80:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 81:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 82:
			return "REGION_ROA_BUTCHERCREEK";
		case 83:
			return "REGION_ROA_DOVERHILL";
		case 84:
			return "REGION_ROA_HAPPY_FAMILY";
		case 85:
			return "REGION_ROA_ISOLATIONIST";
		case 86:
			return "REGION_ROA_MACLEANSHOUSE";
		case 87:
			return "REGION_ROA_MOSSY_FLATS";
		case 88:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 89:
			return "REGION_ROA_ROCKYSEVEN";
		case 90:
			return "REGION_ROA_TRAPPER";
		case 91:
			return "REGION_ROA_VANHORNMANSION";
		case 92:
			return "REGION_ROA_VANHORNPOST";
		case 93:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 94:
			return "REGION_SCM_BULGERGLADE";
		case 95:
			return "REGION_SCM_CALIGAHALL";
		case 96:
			return "REGION_SCM_CATFISHJACKSONS";
		case 97:
			return "REGION_SCM_CLEMENSCOVE";
		case 98:
			return "REGION_SCM_CLEMENSPOINT";
		case 99:
			return "REGION_SCM_COMPSONS_STEAD";
		case 100:
			return "REGION_SCM_DAIRY_FARM";
		case 101:
			return "REGION_SCM_HORSE_SHOP";
		case 102:
			return "REGION_SCM_LONNIESSHACK";
		case 103:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 104:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 105:
			return "REGION_SCM_RHODES";
		case 106:
			return "REGION_SCM_SLAVE_PEN";
		case 107:
			return "REGION_TAL_AURORA_BASIN";
		case 108:
			return "REGION_TAL_DEAD_SETTLER";
		case 109:
			return "REGION_TAL_COCHINAY";
		case 110:
			return "REGION_TAL_MANZANITAPOST";
		case 111:
			return "REGION_TAL_PACIFICUNIONRR";
		case 112:
			return "REGION_TAL_TANNERSREACH";
		case 113:
			return "REGION_TAL_TRAPPER";
		case 126:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 127:
			return "REGION_HEN_THIEVES_LANDING";
		case 120:
			return "REGION_CHO_ARMADILLO";
		case 121:
			return "REGION_CHO_COOTS_CHAPEL";
		case 122:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 124:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 123:
			return "REGION_CHO_RILEYS_CHARGE";
		case 125:
			return "REGION_CHO_TWIN_ROCKS";
		case 114:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 115:
			return "REGION_GAP_TUMBLEWEED";
		case 116:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 129:
			return "REGION_GAP_SOLOMONS_FOLLY";
		case 117:
			return "REGION_RIO_BENEDICT_POINT";
		case 118:
			return "REGION_RIO_FORT_MERCER";
		case 119:
			return "REGION_RIO_PLAIN_VIEW";
		case 128:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_1038(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1039(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1040(int iParam0)
{
	func_1048(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1041(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1042(1);
	}
}

void func_1042(bool bParam0)
{
	if (bParam0)
	{
		func_1631(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_1632(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1043(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -15;
	}
	return func_1633(iParam0);
}

bool func_1044(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_691(iParam1) || !func_691(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1045(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1046(int iParam0)
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

bool func_1047(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1048(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1634(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1049(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1050(int iParam0, int iParam1, bool bParam2)
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

int func_1051()
{
	iVar0 = func_545();
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

int func_1052(int iParam0)
{
	if (func_20() != -1)
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
	fVar1 = func_1587(absf(fVar1) < 1f, func_1587(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1053()
{
	if (func_20() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_1054(int iParam0)
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

int func_1055()
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

void func_1056(int iParam0, bool bParam1, int iParam2)
{
	func_1635((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1636(iParam0);
}

void func_1057(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1637(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1058(bool bParam0)
{
	bVar3 = false;
	if (func_1638(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1639(iVar5, &iVar2, &iVar0))
			{
				if (!func_565(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1640(iVar2);
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
							if (func_584(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1051() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1051() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1641();
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

char* func_1059(int iParam0)
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

bool func_1060(int iParam0)
{
	return func_584(iParam0) == -427144552;
}

bool func_1061(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_586(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1066(iParam0, &uVar0, 1, 0, 0);
	}
	return func_340(iParam0, 1, 0);
}

void func_1062(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_584(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_591(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_592(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_569(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_645(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1063(int iParam0, int iParam1)
{
	if (func_585(iParam0, 58855631))
	{
		func_1214(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1064(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	if (!func_593(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_998(bParam3), iParam0);
}

int func_1065(int iParam0, bool bParam1)
{
	if (func_597(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_998(bParam1), iParam0, 0);
}

bool func_1066(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1642(&iParam0);
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	if (!func_593(0))
	{
		bParam3 = true;
	}
	if (func_1060(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1197(0) };
			Var4.f_9 = -1591664384;
			if (!func_1089(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1090(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1198(iParam0, 1))
			{
				if (!func_1089(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1090(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1643(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1064(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1644(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_998(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1067(int iParam0, int iParam1)
{
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_584(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_585(iParam0, 1399091007))
	{
		func_1131(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1068(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1645(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1646(&Var0, func_1197(0));
	}
	if (!func_1647(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1141(iVar14);
	return uVar15;
}

int func_1069()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1070(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1071(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1648(iParam0);
	fVar1 = func_1649(iParam0);
	if ((Global_1347477->f_117 || !func_587(31)) || !func_1650(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1651(iVar0) >= 7)
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
	func_1652(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_695(_create_var_string(6, func_1653(iParam0), fVar1), "itemtype_textures", func_1654(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1072(int iParam0)
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

int func_1073(int iParam0, int iParam1)
{
	if (!func_1229(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1074(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_580() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1655(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1656(), 12);
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
			else if (func_1113() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1657(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1113(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1658(), 13);
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
			else if (func_1114() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1659(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1114(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1073(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1075(int iParam0, int iParam1, int iParam2)
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

bool func_1076(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1077(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1078(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1660(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_340(iVar2, 1, 0) || func_1662(func_1661(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1082(func_1660(iVar0))), func_1082(func_1660(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1113() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1663(iVar0)), func_1663(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1657() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1663(iVar0)), func_1663(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1663(iVar0)), func_1663(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1124(iParam3, func_1664(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1120(iVar2) - iParam7) >= func_1073(iParam3, func_1665(iVar0));
				}
				else
				{
					bVar1 = func_1120(iVar2) >= func_1073(iParam3, func_1665(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1120(iVar2) + iParam7) >= func_1073(iParam3, func_1665(iVar0));
			}
			else
			{
				bVar1 = func_1120(iVar2) >= func_1073(iParam3, func_1665(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1666(iVar2)), func_1666(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1667(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1668(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1668(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1114() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1669(iVar0)), func_1669(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1659() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1669(iVar0)), func_1669(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1669(iVar0)), func_1669(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1124(iParam3, func_1664(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1120(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1670(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1670(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1671(iVar2)), func_1671(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1079(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1658() >= 13)
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

bool func_1080(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_183(func_196(0)) && ((func_1672(0) == 1 || func_1672(0) == 8) || func_1672(0) == 6))
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

var func_1081(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1082(int iParam0)
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

bool func_1083(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1084(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1085(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1086(int iParam0)
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
			func_1673(1);
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
			func_1674(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1674(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1674(3);
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
			func_1675(1);
			break;
		case 34:
			func_1676(1);
			break;
		case 35:
			func_1677(1);
			break;
		case 36:
			break;
		case 37:
			func_1678(0);
			break;
		case 38:
			func_1679(0);
			break;
		case 39:
			func_1680(0);
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
			if ((!&Global_1879534 && func_392()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_702("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_318(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_392()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_702("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_318(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_392()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_702("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_318(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_392()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_702("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_318(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1154(99217379) || func_1681(99217379) == 2110595215)
				{
					if (func_1053())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_340(iVar0, 1, 0))
					{
						func_638(iVar0, 1, 752097756);
					}
					func_617(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_340(1013902307, 1, 0))
				{
					func_638(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_340(1013902307, 1, 0))
				{
					func_638(1013902307, 1, 752097756);
				}
				if (!func_340(142640135, 1, 0))
				{
					func_638(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_340(786809402, 1, 0))
				{
					func_638(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_340(786809402, 1, 0))
				{
					func_638(786809402, 1, 752097756);
				}
				if (!func_340(-518019409, 1, 0))
				{
					func_638(-518019409, 1, 752097756);
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
			func_1682();
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

bool func_1087(int iParam0)
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

int func_1088(int iParam0, int iParam1)
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

bool func_1089(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1644(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1090(int iParam0, var uParam1, int iParam2)
{
	if (func_1683(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1091(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_565(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_998(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1092(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1684(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1201(*uParam1, &Var0, bParam6, 0))
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
	if (!func_593(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_998(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1093(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1685(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1094(int iParam0)
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
	iVar2 = func_278();
	func_327(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1095(int iParam0)
{
	if (func_1686(iParam0))
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

bool func_1096(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1097(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1098(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_587(50))
			{
				if (!func_587(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_587(51))
			{
				if (!func_587(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1099(int iParam0, int iParam1, var uParam2)
{
	if (!func_565(iParam1, 0))
	{
		return false;
	}
	if (func_584(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_589(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_663(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_585(iParam1, 866047851))
	{
		iVar5 = func_664(iVar4, 1);
		if (func_1687(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_589(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_585(iParam1, -1638171711))
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
			if (func_1688(1868067663, &uVar0))
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
				iVar10 = func_1689(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1689(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_589(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_585(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1690(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1100()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1101()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1102()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_340(func_1691(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1103(int iParam0)
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

bool func_1104(int iParam0, int iParam1)
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
	if (func_340(iVar0, 1, 0) && func_340(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1105(int iParam0)
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

bool func_1106(int iParam0, int iParam1)
{
	iVar0 = func_1692(iParam0);
	if (iVar0 != -15)
	{
		func_327(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_692(iVar0, 1);
	}
	return false;
}

void func_1107(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1108(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1109(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1110(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

char* func_1111(int iParam0)
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
	iVar1 = func_1120(iVar9);
	iVar2 = func_1120(iVar10);
	iVar3 = func_1120(iVar11);
	iVar5 = func_1121(iVar9);
	iVar6 = func_1121(iVar10);
	iVar7 = func_1121(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1120(iVar12);
		iVar8 = func_1121(iVar12);
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

void func_1112(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1113()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1693(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1114()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1115(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1670(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1670(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1670(iVar0))
		{
			*sParam2++;
		}
		if (func_1670(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1670(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1670(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1670(iVar0))
		{
			*sParam2++;
		}
		if (func_1670(iVar1))
		{
			*sParam2++;
		}
		if (func_1670(iVar0) && func_1670(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1670(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1670(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1670(iVar0))
		{
			*sParam2++;
		}
		if (func_1670(iVar1))
		{
			*sParam2++;
		}
		if (func_1670(iVar2))
		{
			*sParam2++;
		}
		if ((func_1670(iVar0) && func_1670(iVar1)) && func_1670(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1670(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1670(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1670(iVar0))
		{
			*sParam2++;
		}
		if (func_1670(iVar1))
		{
			*sParam2++;
		}
		if (func_1670(iVar2))
		{
			*sParam2++;
		}
		if (func_1670(iVar3))
		{
			*sParam2++;
		}
		if (((func_1670(iVar0) && func_1670(iVar1)) && func_1670(iVar2)) && func_1670(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1116(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_1694(1497516462);
			func_1695(2016141805);
			func_1695(1010885152);
			func_1695(-502324015);
			break;
		case 2016141805:
			func_1695(1497516462);
			func_1694(2016141805);
			func_1695(1010885152);
			func_1695(-502324015);
			break;
		case 1010885152:
			func_1695(1497516462);
			func_1695(2016141805);
			func_1694(1010885152);
			func_1695(-502324015);
			break;
		case -502324015:
			func_1695(1497516462);
			func_1695(2016141805);
			func_1695(1010885152);
			func_1694(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_1695(-538889627);
			func_1695(-538880323);
			func_1695(-1056767524);
			func_1694(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_1696();
			func_1694(iParam0);
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
			func_1697();
			func_1694(iParam0);
			break;
		case 2019386373:
			func_1695(-664252410);
			func_1695(2109952320);
			func_1694(2019386373);
			break;
		case -664252410:
			func_1695(2019386373);
			func_1695(2109952320);
			func_1694(-664252410);
			break;
		case 2109952320:
			func_1695(2019386373);
			func_1695(-664252410);
			func_1694(2109952320);
			break;
		case -1674179981:
			func_1695(-1835851517);
			func_1695(-1838352012);
			func_1694(-1674179981);
			break;
		case -1835851517:
			func_1695(-1674179981);
			func_1695(-1838352012);
			func_1694(-1835851517);
			break;
		case -1838352012:
			func_1695(-1674179981);
			func_1695(-1835851517);
			func_1694(-1838352012);
			break;
		case -1717960576:
			func_1695(210001842);
			func_1694(-1717960576);
			break;
		case 210001842:
			func_1695(-1717960576);
			func_1694(210001842);
			break;
		case -150493654:
			func_1695(-1271608261);
			func_1695(1846061697);
			func_1695(-1145519186);
			func_1694(-150493654);
			break;
		case -1271608261:
			func_1695(-150493654);
			func_1695(1846061697);
			func_1695(-1145519186);
			func_1694(-1271608261);
			break;
		case 1846061697:
			func_1695(-150493654);
			func_1695(-1271608261);
			func_1695(-1145519186);
			func_1694(1846061697);
			break;
		case -1145519186:
			func_1695(-150493654);
			func_1695(-1271608261);
			func_1695(1846061697);
			func_1694(-1145519186);
			break;
		case 1766284049:
			func_1695(280705402);
			func_1695(1926308480);
			func_1694(1766284049);
			break;
		case 280705402:
			func_1695(1766284049);
			func_1695(1926308480);
			func_1694(280705402);
			break;
		case 1926308480:
			func_1695(1766284049);
			func_1695(280705402);
			func_1694(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_1695(439465264);
				func_1694(1609506757);
			}
			else
			{
				func_1695(1609506757);
				func_1695(439465264);
			}
			break;
		case 439465264:
			if (func_473(1609506757))
			{
				if (bParam1)
				{
					func_1694(439465264);
				}
				else
				{
					func_1695(439465264);
				}
			}
			break;
		case 1822001510:
			func_1695(-1612662716);
			func_1694(1822001510);
			break;
		case -1612662716:
			func_1695(1822001510);
			func_1694(-1612662716);
			break;
		case 1306158345:
			func_1695(1952610440);
			func_1695(-223469678);
			func_1695(-404698347);
			func_1695(1517904467);
			func_1694(1306158345);
			break;
		case 1952610440:
			func_1695(1306158345);
			func_1695(-223469678);
			func_1695(-404698347);
			func_1695(1517904467);
			func_1694(1952610440);
			break;
		case -223469678:
			func_1695(1306158345);
			func_1695(1952610440);
			func_1695(-404698347);
			func_1695(1517904467);
			func_1694(-223469678);
			break;
		case -404698347:
			func_1695(1306158345);
			func_1695(1952610440);
			func_1695(-223469678);
			func_1695(1517904467);
			func_1694(-404698347);
			break;
		case 1517904467:
			func_1695(1306158345);
			func_1695(1952610440);
			func_1695(-223469678);
			func_1695(-404698347);
			func_1694(1517904467);
			break;
		case 1376646519:
			func_1695(931649776);
			func_1695(-434590080);
			func_1695(1743048395);
			func_1695(449774763);
			func_1694(1376646519);
			break;
		case 931649776:
			func_1695(1376646519);
			func_1695(-434590080);
			func_1695(1743048395);
			func_1695(449774763);
			func_1694(931649776);
			break;
		case -434590080:
			func_1695(1376646519);
			func_1695(931649776);
			func_1695(1743048395);
			func_1695(449774763);
			func_1694(-434590080);
			break;
		case 1743048395:
			func_1695(1376646519);
			func_1695(931649776);
			func_1695(-434590080);
			func_1695(449774763);
			func_1694(1743048395);
			break;
		case 449774763:
			func_1695(1376646519);
			func_1695(931649776);
			func_1695(-434590080);
			func_1695(1743048395);
			func_1694(449774763);
			break;
		case -1414537028:
			func_1695(38162571);
			func_1695(1350391819);
			func_1695(54073871);
			func_1694(-1414537028);
			break;
		case 38162571:
			func_1695(-1414537028);
			func_1695(1350391819);
			func_1695(54073871);
			func_1694(38162571);
			break;
		case 1350391819:
			func_1695(-1414537028);
			func_1695(38162571);
			func_1695(54073871);
			func_1694(1350391819);
			break;
		case 54073871:
			func_1695(-1414537028);
			func_1695(38162571);
			func_1695(1350391819);
			func_1694(54073871);
			break;
		case 198200492:
			func_1694(198200492);
			func_1695(-1124061431);
			func_1695(52706132);
			func_1695(-259123672);
			break;
		case -1124061431:
			func_1695(198200492);
			func_1694(-1124061431);
			func_1695(52706132);
			func_1695(-259123672);
			break;
		case 52706132:
			func_1695(198200492);
			func_1695(-1124061431);
			func_1694(52706132);
			func_1695(-259123672);
			break;
		case -259123672:
			func_1695(198200492);
			func_1695(-1124061431);
			func_1695(52706132);
			func_1694(-259123672);
			break;
		case -919512195:
			func_1694(-919512195);
			func_1695(-1925798111);
			func_1695(420709909);
			func_1695(1703426636);
			break;
		case -1925798111:
			func_1694(-1925798111);
			func_1695(-919512195);
			func_1695(420709909);
			func_1695(1703426636);
			break;
		case 420709909:
			func_1694(420709909);
			func_1695(-919512195);
			func_1695(-1925798111);
			func_1695(1703426636);
			break;
		case 1703426636:
			func_1694(1703426636);
			func_1695(-919512195);
			func_1695(-1925798111);
			func_1695(420709909);
			break;
		case -1223121209:
			func_1694(-1223121209);
			func_1695(630808005);
			break;
		case 630808005:
			func_1694(630808005);
			func_1695(-1223121209);
			break;
		case 1453909576:
			func_1694(1453909576);
			func_1695(1643531967);
			break;
		case 1643531967:
			func_1694(1643531967);
			func_1695(1453909576);
			break;
		case 0:
			func_1694(0);
			func_1695(473295046);
			func_1695(-1738165526);
			break;
		case 473295046:
			func_1694(473295046);
			func_1695(0);
			func_1695(-1738165526);
			break;
		case -1738165526:
			func_1694(-1738165526);
			func_1695(0);
			func_1695(473295046);
			break;
		case 932909855:
			func_1694(932909855);
			func_1695(2051822093);
			break;
		case 2051822093:
			func_1694(2051822093);
			func_1695(932909855);
			break;
		case 405586984:
			func_1694(405586984);
			func_1695(1509509592);
			func_1695(-959357075);
			func_1695(-1311865656);
			break;
		case 1509509592:
			func_1694(1509509592);
			func_1695(405586984);
			func_1695(-959357075);
			func_1695(-1311865656);
			break;
		case -959357075:
			func_1694(-959357075);
			func_1695(1509509592);
			func_1695(405586984);
			func_1695(-1311865656);
			break;
		case -1311865656:
			func_1694(-1311865656);
			func_1695(1509509592);
			func_1695(-959357075);
			func_1695(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_1694(-524145696);
			}
			else
			{
				func_1695(-524145696);
			}
			func_1695(1626481264);
			func_1695(282809459);
			break;
		case 282809459:
			func_1694(282809459);
			func_1695(1626481264);
			func_1695(-524145696);
			break;
		case 1626481264:
			func_1694(1626481264);
			func_1695(-524145696);
			func_1695(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_1694(885203519);
			}
			else
			{
				func_1695(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_1694(-1080627546);
			}
			else
			{
				func_1695(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_473(iParam0))
				{
					func_1694(iParam0);
				}
			}
			else if (func_473(iParam0))
			{
				func_1695(iParam0);
			}
			break;
	}
}

void func_1117(int iParam0)
{
	if (!func_1698(iParam0))
	{
		func_1700(func_1699(iParam0));
	}
}

int func_1118()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1698(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1119(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1120(iVar9);
	iVar2 = func_1120(iVar10);
	iVar3 = func_1120(iVar11);
	iVar5 = func_1121(iVar9);
	iVar6 = func_1121(iVar10);
	iVar7 = func_1121(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1120(iVar12);
		iVar8 = func_1121(iVar12);
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

int func_1120(int iParam0)
{
	if (func_340(iParam0, 1, 0))
	{
		iVar0 = func_569(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1121(int iParam0)
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

int func_1122(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1123(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1124(int iParam0, int iParam1)
{
	if (!func_1229(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1125(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1124(iParam1, 5) || iParam0 == func_1124(iParam1, 6)) || iParam0 == func_1124(iParam1, 7)) || iParam0 == func_1124(iParam1, 8)) || iParam0 == func_1124(iParam1, 9))
	{
		func_1115(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_581(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_583(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1126(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1124(iParam1, 5) || iParam0 == func_1124(iParam1, 6)) || iParam0 == func_1124(iParam1, 7)) || iParam0 == func_1124(iParam1, 8)) || iParam0 == func_1124(iParam1, 9))
	{
		if (func_1115(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_581(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_583(51, 0, 0, iVar0, func_1073(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_581(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_583(51, 0, 0, iVar0, func_1073(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1127()
{
	if (func_184((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1128(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1129(int iParam0)
{
	if (!func_1701(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1130(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1131(int iParam0, int iParam1, var uParam2)
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

bool func_1132(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1702();
	if (iParam2 == 39)
	{
		Var0 = { func_676(iParam0, 1, 0) };
		iParam2 = func_664(func_677(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_585(iParam0, 866047851) && func_1687(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1134(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1703(func_1202(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1704(iParam2);
	func_1705(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1183(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1183(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1189(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1706(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1707(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1707(&(Global_1946804->f_1378), 1, 0);
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
				func_1459(func_1202(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1133(bool bParam0, bool bParam1, bool bParam2)
{
	func_1708(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1134(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1135()
{
	func_1709(&(Global_1946804->f_2776));
	func_1710(32768);
	func_1459(1108822547, 8, 6);
}

int func_1136(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_664(iParam0, 1);
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

void func_1137(int iParam0)
{
	if (func_1711(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1712(Var0);
}

void func_1138(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1712(Var0);
}

bool func_1139(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_998(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1140(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1141(int iParam0)
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

float func_1142()
{
	if (func_1713())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1714(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1714(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1715();
	fVar2 = func_1716();
	fVar3 = func_1717();
	fVar4 = func_1718();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1719()));
	fVar7 = (func_1714(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1720(3, round((to_float(iVar8) * fVar10)), 0);
	func_1721(3, fVar9, fVar9 > 100f);
	return func_1346(fVar7, -100f, 100f);
}

float func_1143()
{
	if (func_1713())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1714(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1714(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1715();
	fVar2 = func_1716();
	fVar3 = func_1717();
	fVar4 = func_1718();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1719()));
	fVar7 = (func_1714(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1720(2, round((to_float(iVar8) * fVar10)), 0);
	func_1721(2, fVar9, fVar9 > 100f);
	return func_1346(fVar7, -100f, 100f);
}

float func_1144()
{
	if (func_1713())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1714(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1722())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1723())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1714(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1715();
	fVar2 = func_1716();
	fVar3 = func_1717();
	fVar4 = func_1718();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1719()));
	fVar7 = (func_1714(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1720(1, round((to_float(iVar8) * fVar10)), 0);
	func_1721(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1714(0);
	}
	return func_1346(fVar7, -100f, 100f);
}

bool func_1145(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1146(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1147(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_565(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1066(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_593(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_998(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1148(int iParam0, bool bParam1)
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
				return func_1724();
			}
			break;
	}
	return 0;
}

int func_1149(int iParam0)
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

bool func_1150(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1151(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1150(iParam0))
	{
		return;
	}
	if (func_1725(iParam0))
	{
		return;
	}
	if (!func_1726(iParam0))
	{
		func_1727(iParam0, 1, 0);
	}
	iVar0 = func_1728(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1729(iParam0, 512))
		{
			func_675(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_207() && !bParam1) && !func_190(0, 0, 1))
	{
		func_704(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1730(iParam0, 6);
	if (bParam2)
	{
		if (!func_190(0, 0, 1))
		{
			func_360(1, 4);
		}
	}
}

bool func_1152(int iParam0, bool bParam1)
{
	return func_1148(iParam0, 0) < func_1731(iParam0, bParam1);
}

bool func_1153(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_589(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1154(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_664(iParam0, 1)] != &Global_1946804->f_57[func_664(iParam0, 1)];
}

void func_1155(int iParam0, int iParam1)
{
	if (func_585(iParam1, 130796156))
	{
		func_1732(iParam1, 0);
	}
	else if (func_585(iParam1, 930141731))
	{
		func_1732(iParam1, 1);
		func_1733(iParam0);
	}
}

void func_1156(var uParam0, int iParam1)
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

int func_1157(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1734(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1735(uParam2, iParam0, Var1);
	return 1;
}

int func_1158(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1159(int iParam0)
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

int func_1160(int iParam0)
{
	if (!func_1736(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1161()
{
	return !&Global_1911774;
}

void func_1162(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1163(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1164(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1165(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1166(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1737(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1167(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1737(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1168(bool bParam0)
{
	if (bParam0)
	{
		func_311(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1169();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1738(2032023096);
		func_314(-615217896);
		func_660(655868243, 1, 1, -142743235, 1);
		func_1740(146323340, func_1739());
		Var0 = { func_1512() };
		if (func_1741(&Var0) == -1387633835)
		{
			func_1742(&Var0);
			func_1743(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1744(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1505(iVar6) == 2010625508)
			{
				func_1745(iVar6, iVar7);
				func_1746(iVar6, iVar8);
				func_1747(iVar6, iVar9);
				func_1748(iVar6, 0);
				if (func_1749(iVar6))
				{
					func_1750(iVar6);
				}
				iVar10 = func_1751(iVar8);
				func_1752(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1169()
{
	if (!func_1753(-1898635967, func_1739(), 1))
	{
		return 0;
	}
	if (func_331())
	{
		if (!func_1753(146323340, func_1739(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1170()
{
	func_325(34411519);
	func_325(834124286);
	func_325(-570967010);
}

void func_1171(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_311(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_311(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_660(-1080874779, 3, 1, -142743235, 1);
		func_660(-223790555, 3, 1, -142743235, 1);
		func_660(1566032147, 3, 1, -142743235, 1);
		func_660(891311852, 5, 1, -142743235, 1);
		func_660(-1353737667, 5, 1, -142743235, 1);
		func_660(-330313895, 5, 1, -142743235, 1);
		func_660(-2051332199, 5, 1, -142743235, 1);
		func_660(1237770824, 5, 1, -142743235, 1);
		func_660(-1795542128, 3, 1, -142743235, 1);
		func_660(-1757588258, 3, 1, -142743235, 1);
		func_660(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1744(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1505(iVar0) == 153881023)
			{
				func_1745(iVar0, iVar1);
				func_1746(iVar0, iVar2);
				func_1747(iVar0, iVar3);
				func_1748(iVar0, 0);
				if (func_1749(iVar0))
				{
					func_1750(iVar0);
				}
				iVar4 = func_1751(iVar2);
				func_1752(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1169();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1172(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1754(iParam0);
	if (bParam3)
	{
		func_703(iParam0, sParam1, iParam2);
	}
}

bool func_1173(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1174(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1175()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1139("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1140(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1090(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1141(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1141(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1176(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1755(Param1, iParam5, &Var5, 0))
	{
		func_1092(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1147(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1756(Var19, 1);
}

bool func_1177(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1645(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1646(&Var0, func_1197(0));
	}
	if (!func_1647(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1140(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1092(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1141(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1178(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_676(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1757(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1091(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1092(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1179(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_585(iParam0, 606799272))
		{
			func_1758(iParam0, iParam1);
		}
		if (func_585(iParam0, -1112814642) && func_585(iParam0, -1697809989))
		{
			func_613(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1180(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1759(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_589(iParam0) != -999503751)
		{
			func_1760(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_589(iParam0) != -999503751)
	{
		func_1760(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1761(iParam0, 1);
	return 1;
}

void func_1181()
{
	if (func_20() == -1)
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

void func_1182(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1762(0);
	}
	if (bParam0)
	{
		func_1194(8);
		func_1194(512);
	}
	else
	{
		func_1194(8);
		func_1194(16);
	}
}

void func_1183(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1184(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_666();
	}
	if (func_20() == -1)
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

int func_1185(int iParam0)
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

void func_1186(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1763(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1202(iVar0, 1);
			if (func_1456(iVar0, iParam1))
			{
				vVar4 = { func_668(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1455(iVar7, 4))
				{
					func_1459(iVar7, 4, 6);
				}
			}
			else
			{
				func_1458(iVar7, 4, 6);
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

bool func_1187(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_20() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1764(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1188(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1189(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_589(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1456(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1705(iVar1, iVar3);
		}
	}
	if (func_1154(-1586649372) && func_1456(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1705(iVar1, iVar3);
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
						func_1705(iVar1, iVar3);
					}
				}
			}
			func_1765(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1765(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1705(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1765(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1705(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1705(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1765(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1765(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1705(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1765(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1705(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1705(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_589(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1705(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1690(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_589(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1705(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_585(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1705(iVar1, iVar3);
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
						func_1705(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1690(&(Global_1946804->f_1497.f_1[iVar1])) || func_585(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1705(iVar1, iVar3);
					}
				}
			}
			switch (func_589(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_589(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1705(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_589(&(uParam0->f_1[iVar1])) || func_585(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1705(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1190(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1191(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1145(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1145(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1192(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1145(iParam0, 65536) && !func_1145(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1145(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1145(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1193()
{
	return Global_1905944->f_5694;
}

void func_1194(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1195(struct<4> Param0)
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
			if (func_1766(Param0))
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
			func_1767(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1194(8);
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
			if (func_1766(Param0))
			{
				return;
			}
			func_1767(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1194(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1138(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1196(bool bParam0)
{
	return func_1091(1328661203, func_1768(), -1591664384, bParam0);
}

struct<4> func_1197(bool bParam0)
{
	iVar0 = func_998(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1091(923904168, func_1196(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1091(923904168, func_1196(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1091(923904168, func_1196(bParam0), -740156546, 0);
}

bool func_1198(int iParam0, bool bParam1)
{
	if (func_589(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_587(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1199(bool bParam0)
{
	iVar0 = func_998(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1091(271701509, func_1196(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1091(271701509, func_1196(bParam0), 12999093, 0);
}

bool func_1200(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_589(iParam0);
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

bool func_1201(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_998(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1202(int iParam0, int iParam1)
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

int func_1203(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1204(int iParam0, int iParam1)
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

void func_1205(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1206(int iParam0, int iParam1)
{
	iVar0 = func_684(*iParam0);
	iVar1 = func_683(*iParam0);
	if (iParam1 < 1 || iParam1 > func_689(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1207(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1208(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1209(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1210(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1211(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1212(int iParam0)
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

bool func_1213(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1060(iParam0))
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

int func_1214(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_565(iParam0, 0))
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

int func_1215(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1642(&iParam0);
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	if (!func_593(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1064(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1644(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_998(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1216(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_585(iParam0, -5284486))
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
		if (func_1769(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_646(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_649(iVar62, iVar61);
					if (func_565(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1216(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1216(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1769(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1217(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1770(1);
}

void func_1218(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1771(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_317(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1771(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_317(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1219()
{
	return Global_40.f_4283.f_325;
}

bool func_1220(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_1221(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1222(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1223(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1224(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1225(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1226(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_392();
	bVar1 = false;
	if (bVar0 && !func_1772(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1772(37)) && !func_1772(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1772(43)) && !func_1772(44))
	{
		bVar2 = true;
	}
	if (bVar1)
	{
		*bParam0 = 1;
		return 1;
	}
	if (!bVar1 && !bVar2)
	{
		if (func_1506(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1506(1) == 1)
		{
			*uParam1 = 1;
		}
	}
	if (*bParam0 || *uParam1)
	{
		return 1;
	}
	return 0;
}

int func_1227()
{
	return Global_40.f_1095.f_3054;
}

bool func_1228(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_40.f_1095.f_1[iParam0]->f_420;
}

bool func_1229(int iParam0, var uParam1)
{
	if (!func_1773(iParam0))
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

int func_1230()
{
	if (func_392())
	{
		if (!func_1772(3))
		{
			return func_1774(43);
		}
		if (func_1772(38) && !func_1772(43))
		{
			return func_1775(8);
		}
	}
	return 0;
}

bool func_1231(int iParam0)
{
	if (!func_240(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1776(iParam0));
}

Vector3 func_1232(int iParam0, int iParam1)
{
	func_1229(15, &Var0);
	Var0.f_2 = -1999103282;
	Var0.f_3 = iParam0;
	Var0.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -495185473;
		_datafile_get_vector(&vVar5, &Var0);
	}
	return vVar5;
}

int func_1233(int iParam0, int iParam1)
{
	if (_get_bounty_for_player(player_id()) <= 0)
	{
		return 0;
	}
	if (Global_1310720->f_21 == -1)
	{
		return 0;
	}
	if (Global_1310720->f_23 >= 3)
	{
		return 0;
	}
	iVar0 = func_1777(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1229(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1778(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1234(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1779(iParam0);
	if (func_473(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1235(int iParam0)
{
	if (!func_1229(15, &Var0))
	{
		return false;
	}
	Var0.f_3 = iParam0;
	Var0.f_2 = 303248275;
	if (_datafile_get_bool(&uVar5, &Var0))
	{
	}
	return uVar5;
}

bool func_1236(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1780(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1781(5))
	{
		if (func_1782(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1499(vParam0);
	if (bParam6)
	{
		iVar1 = func_365(vParam0, 1);
		if (func_116(iVar1) || func_1783(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1784(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1785())
	{
		if (func_1786(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1787(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_365(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1788(iParam3, iParam4))
	{
		return false;
	}
	if (func_1789(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1790(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_392())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1791(vParam0, bParam10) || func_1792(vParam0, bParam10))
		{
			return false;
		}
	}
	else if (bParam9)
	{
		if (vParam0.x < -450f && vParam0.y < -600f)
		{
			return false;
		}
	}
	return true;
}

int func_1237(vector3 vParam0)
{
	iVar0 = func_1793(vParam0, 0f, 0f, 0, 2);
	return func_1793(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1238(int iParam0)
{
	if (does_entity_exist(player_ped_id()))
	{
		if (iParam0 == 1)
		{
			decor_set_bool(player_ped_id(), "Inspecting_Item", true);
		}
		else if (decor_exist_on(player_ped_id(), "Inspecting_Item"))
		{
			decor_remove(player_ped_id(), "Inspecting_Item");
		}
	}
}

char* func_1239(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (iParam0 == Global_35)
	{
		if (get_entity_model(Global_35) == 11966224)
		{
			return "John";
		}
		else
		{
			return "Arthur";
		}
	}
	iVar0 = get_entity_model(iParam0);
	return func_1469(iVar0);
}

char* func_1240(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1794(iVar0);
}

char* func_1241(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	switch (iVar0)
	{
		case 1468884243:
			return "CANOE";
		case -283162583:
			return "WAGON02X";
		case 1874711736:
			return "WAGON04X";
		case -1758092337:
			return "WAGON05X";
		case 1596452133:
			return "CHUCKWAGON000X";
		case -293448458:
			return "WAGONCIRCUS02X";
		case 1761016051:
			return "COACH2";
		case 1192745176:
			return "PRIVATECOALCAR01X";
		case 703203753:
			return "NORTHPASSENGER01X";
		case 89913743:
			return "PRIVATESTEAMER01X";
		case 572854005:
			return "PRIVATEDINING01X";
		case 822759307:
			return "UTILLIWAG";
		case -623113369:
			return "SKIFF";
		case 1493442814:
			return "HANDCART";
		case -397513868:
			return "ROWBOATSWAMP";
		case -258491284:
			return "ROWBOATSWAMP02";
	}
	return "";
}

void func_1242(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1567(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 58256;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1243(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1567(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1244()
{
	iLocal_895 = 0;
}

void func_1245(int iParam0, bool bParam1)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1013(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_1012(iParam0, 16, 0);
		}
	}
	func_1012(iParam0, 1, bParam1);
}

void func_1246(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_973(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_975(cParam0->f_5423[iVar0], iParam2);
}

void func_1247(char[4] cParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (iVar0 != iParam1 && iVar0 != 0)
		{
			if (func_1796(func_1795(iVar0), 1))
			{
				func_1797(func_1795(iVar0), 1);
			}
		}
		iVar0++;
	}
	iLocal_976 = iParam1;
	iLocal_985 = 0;
	if (iParam1 == 0)
	{
		func_45();
	}
	else
	{
		func_1798(cParam0, func_1795(iParam1), -1082130432, 0, 0, -1, -1, 0);
	}
	if ((((((((((iParam1 != 0 && iParam1 != 1) && iParam1 != 2) && iParam1 != 4) && iParam1 != 5) && iParam1 != 8) && iParam1 != 9) && iParam1 != 10) && iParam1 != 11) && iParam1 != 13) && iParam1 != 14)
	{
		func_1799(cParam0);
	}
	func_213(&uLocal_977);
}

void func_1248(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1800(iParam0, 32);
	func_261();
}

void func_1249(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
}

void func_1250(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_459(uParam0))
	{
		*uParam0 = _0xfa50f79257745e74(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_459(uParam0))
		{
		}
	}
}

void func_1251(char[4] cParam0)
{
	if (is_waypoint_playback_going_on_for_ped(&(iLocal_315[1]), 0))
	{
		fVar0 = get_ped_waypoint_distance(&(iLocal_315[1]));
	}
	switch (func_1283(cParam0))
	{
		case 1:
			if (!func_1372())
			{
				func_1306(cParam0, 3, 1);
				func_213(&uLocal_896);
			}
			break;
		case 3:
			if (!func_388(iLocal_115, 64))
			{
				if (!func_1801(Global_35, func_253(cParam0), 0))
				{
					if ((!_is_anim_scene_started(iVar443, false) && is_ped_on_mount(&(iLocal_315[1]))) && !func_1372())
					{
						if (func_919(&uLocal_896) > 5f)
						{
							func_1802(cParam0, "GNG2_IG_INT_WT1", 0);
							func_416(&iLocal_115, 64);
						}
					}
					else
					{
						func_213(&uLocal_896);
					}
				}
			}
			else if (!func_388(iLocal_115, 128))
			{
				if (!func_1372())
				{
					func_1802(cParam0, "GNG2_IG_INT_WT2", 0);
					func_213(&uLocal_896);
					func_416(&iLocal_115, 128);
				}
			}
			else if (!func_1801(Global_35, func_253(cParam0), 0) && !func_1372())
			{
				if ((!func_388(iLocal_115, 256) && func_919(&uLocal_896) > 5f) || func_919(&uLocal_896) > 15f)
				{
					func_1802(cParam0, "GNG2_RTB_SI", 0);
					func_416(&iLocal_115, 256);
					func_213(&uLocal_896);
				}
			}
			if (func_1803(&(iLocal_315[1])))
			{
				if (func_1801(Global_35, func_253(cParam0), 0) && (!func_388(iLocal_115, 64) || func_388(iLocal_115, 128)))
				{
					if (!func_1372())
					{
						if (func_1802(cParam0, "GNG2_RTB_FL", 0))
						{
							func_1306(cParam0, 5, 1);
							func_416(&iLocal_115, 512);
							stop_ped_speaking(Global_35, false);
							func_213(&uLocal_896);
						}
					}
				}
			}
			else
			{
				func_213(&uLocal_509);
			}
			break;
		case 5:
			if (fVar0 > 70f)
			{
				if (!func_1372())
				{
					if (func_1802(cParam0, "GNG2_RTB_SE_P1", 0))
					{
						func_1306(cParam0, 8, 1);
					}
				}
			}
			break;
		case 8:
			if (!func_1372())
			{
				if (func_1802(cParam0, "GNG2_RTB_SE_P2", 0))
				{
					func_1804(&(iLocal_315[1]));
					func_1306(cParam0, 9, 1);
				}
			}
			break;
		case 9:
			if (fVar0 > 700f)
			{
				if (!func_388(iLocal_115, 1024))
				{
					if (func_1805("GNG2_RTB_SE_P2"))
					{
						func_1806("GNG2_RTB_SE_P2", 1, 0);
					}
					func_416(&iLocal_115, 1024);
				}
				if (!func_1372())
				{
					if (func_1802(cParam0, "GNG2_RTB_SY", 0))
					{
						task_look_at_entity(&(iLocal_315[1]), &(iLocal_378[1]), -1, 0, 51, 0);
						func_1306(cParam0, 51, 1);
					}
				}
			}
			break;
	}
}

void func_1252(char[4] cParam0)
{
	switch (iVar973)
	{
		case 0:
			break;
		case 1:
			if (!bVar982)
			{
				if ((!func_1801(Global_35, func_253(cParam0), 0) && func_388(iLocal_115, 128)) && !func_1372())
				{
					func_1799(cParam0);
				}
			}
			if (func_1801(Global_35, func_253(cParam0), 0))
			{
				func_59(7);
				func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 1, 1);
				func_1247(cParam0, 2);
			}
			else if (func_909(Global_35, &(iLocal_315[1]), 1, 1) > 35f)
			{
				func_59(7);
				func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 1, 1);
				func_1247(cParam0, 15);
			}
			break;
		case 2:
			if (!bVar982)
			{
				if (is_ped_still(Global_35) && func_909(Global_35, &(iLocal_315[1]), 1, 1) > 10f)
				{
					if (func_919(&uLocal_977) > 10f)
					{
						func_1799(cParam0);
					}
				}
				else
				{
					func_213(&uLocal_977);
				}
			}
			if ((!func_1801(Global_35, func_253(cParam0), 0) && iVar983 != 5) && iVar983 != 4)
			{
				func_1262(cParam0, &(iLocal_315[1]), 1);
				func_1248(7);
				func_261();
				func_1247(cParam0, 1);
			}
			else if (func_909(Global_35, &(iLocal_315[1]), 1, 1) > 35f)
			{
				func_1247(cParam0, 15);
			}
			break;
		case 15:
			if (func_909(Global_35, &(iLocal_315[1]), 1, 1) < 20f)
			{
				if ((!func_1801(Global_35, func_253(cParam0), 0) && iVar983 != 4) && iVar983 != 5)
				{
					func_1262(cParam0, &(iLocal_315[1]), 1);
					func_1248(7);
					func_261();
					func_1247(cParam0, 1);
				}
				else
				{
					func_1247(cParam0, 2);
				}
			}
			else if (func_909(Global_35, &(iLocal_315[1]), 1, 1) > 60f)
			{
				func_1316(cParam0, "GNG2_FAIL_SAD", "", 1, 0);
			}
			break;
	}
	if (func_965(player_id(), 1, 0, 1) || (is_ped_in_melee_combat(Global_35) && _0x72ad59f7b7fb6e24(player_id(), 100)))
	{
		func_1316(cParam0, "LAW_FAIL", "", 1, 0);
	}
}

void func_1253(char[4] cParam0)
{
	iVar0 = &iLocal_315[1];
	if (is_entity_dead(iVar0))
	{
		return;
	}
	switch (iVar983)
	{
		case 0:
			func_1807(&(iLocal_315[1]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1808(Global_35, &(iLocal_315[1]), 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1809(&uLocal_387, &(iLocal_315[1]));
			if (func_1261(&(iLocal_315[1]), 2809.01f, -1179.71f, 46.4f, 0) < 1f || func_909(&(iLocal_315[1]), &(iLocal_315[2]), 0, 1) < 1f)
			{
				func_1810(&(iLocal_315[1]), 1);
				func_1811(Global_35, 1);
				func_1812(&uLocal_387);
				iLocal_986 = 1;
			}
			break;
		case 1:
			if (func_388(iLocal_115, 512))
			{
				func_1813();
				clear_ped_tasks(iVar0, 1, 0);
				open_sequence_task(&iVar1);
				task_follow_waypoint_recording(0, sVar968, 0, 25612, -1, 0, 0, -1);
				close_sequence_task(iVar1);
				task_perform_sequence(iVar0, iVar1);
				clear_sequence_task(&iVar1);
				iLocal_986 = 2;
			}
			break;
		case 2:
			if (!is_ped_on_mount(&(iLocal_315[1])) && !is_ped_ragdoll(&(iLocal_315[1])))
			{
				clear_ped_tasks(&(iLocal_315[1]), 1, 0);
				task_mount_animal(&(iLocal_315[1]), &(iLocal_315[2]), 20000, -1, 2f, 1, 0, 0);
				iLocal_986 = 3;
			}
			fVar5 = 0f;
			if (waypoint_recording_get_closest_waypoint(sVar968, get_entity_coords(Global_35, false, false), &iVar6))
			{
				fVar5 = get_waypoint_distance_along_route(sVar968, iVar6);
			}
			if (is_waypoint_playback_going_on_for_ped(iVar0, 0))
			{
				fVar4 = get_ped_waypoint_distance(iVar0);
			}
			fVar2 = func_1814(0f, (fVar4 - fVar5));
			fVar2 = func_1815(fVar2, 30f);
			if (is_ped_on_mount(iVar0))
			{
				set_ped_reset_flag(&(iLocal_315[2]), 53, true);
				if (fVar4 < 20f)
				{
					fVar3 = 1.001f;
				}
				else if (fVar4 < 60f)
				{
					fVar3 = 1.5f;
				}
				else
				{
					fVar3 = 1.501f;
				}
				if (func_1816(iVar0, func_1259(2, 0), 90f, 1, 1) && func_1801(Global_35, func_253(cParam0), 0))
				{
					waypoint_playback_use_default_speed(iVar0);
					func_1817(iVar0, 1071644672, 0, 1045220557, 1, 1077936128, 15f, 25f, 1033476506, 1061158912, 1, 0, 1045220557, 0);
					_0x0d7fd6a55fd63aef(6, 3, 0);
					iLocal_986 = 4;
				}
				else
				{
					func_1817(iVar0, fVar3, 0, 0.2f, 1, 3f, 10f, 15f, 1033476506, 1061158912, 1, 1, 1045220557, 0);
				}
			}
			if (fVar2 >= 30f)
			{
				func_27(&uLocal_509, 0);
				if (func_1818(&uLocal_509, 2f))
				{
					func_1819(cParam0, "GNG2_OBJ_RTB", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
					func_213(&uLocal_509);
				}
			}
			else if (func_26(&uLocal_509))
			{
				func_213(&uLocal_509);
			}
			break;
		case 3:
			if (is_ped_on_mount(&(iLocal_315[1])))
			{
				open_sequence_task(&iVar1);
				task_follow_waypoint_recording(0, sVar968, 0, 25612, -1, 0, 0, -1);
				close_sequence_task(iVar1);
				task_perform_sequence(iVar0, iVar1);
				clear_sequence_task(&iVar1);
				iLocal_986 = 2;
			}
			else if (!func_1820(&(iLocal_315[1]), 1868526510))
			{
				task_mount_animal(&(iLocal_315[1]), &(iLocal_315[2]), 20000, -1, 2f, 1, 0, 0);
			}
			break;
		case 4:
			if (_is_ped_getting_into_a_mount_seat(iVar0, true) && !is_waypoint_playback_going_on_for_ped(iVar0, 0))
			{
				if (func_1261(Global_35, func_1259(2, 0), 1) < 20f || func_909(Global_35, &(iLocal_315[1]), 1, 1) < 5f)
				{
					open_sequence_task(&iVar1);
					task_dismount_animal(0, 131072, 0, 0, 0, 0);
					task_follow_nav_mesh_to_coord(0, func_1259(2, 2), 1f, 20000, 0.25f, 0, func_1298(2, 2));
					close_sequence_task(iVar1);
					task_perform_sequence(iVar0, iVar1);
					clear_sequence_task(&iVar1);
					_0x12e09e278c6c29b7(player_id());
					iLocal_986 = 5;
				}
			}
			break;
		case 5:
			break;
	}
}

void func_1254(char[4] cParam0)
{
	if (!does_entity_exist(&(iLocal_315[3])))
	{
		func_1403(3, iVar293, cParam0);
		func_925(&(iLocal_315[3]), 41788943);
	}
	else if (!does_entity_exist(iVar424))
	{
		iLocal_427 = func_924(2024948086, 2130.47f, -967.15f, 41.62f, 100.51f, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
		_task_start_scenario_in_place(iVar424, 696740378, -1, false, 0, -1f, false);
	}
	else if (func_172(&(iLocal_315[3]), 0))
	{
		if (func_1821(&(iLocal_315[3]), 0, &uLocal_1061, &uVar0, 0, 0) || is_bullet_in_area(get_entity_coords(&(iLocal_315[3]), true, false), 10f, true))
		{
			func_1316(cParam0, "GNG2_FAIL_PLTS", "", 1, 0);
		}
	}
	else
	{
		func_1316(cParam0, "GNG2_FAIL_PLTD", "", 1, 0);
	}
	if (!does_entity_exist(&(iLocal_378[1])))
	{
		func_1269(cParam0, 1, iVar293);
	}
	else if (!does_entity_exist(&(iLocal_381[1])))
	{
		func_1270(1, iVar293, cParam0);
		func_1271(cParam0);
		if (!_is_anim_scene_started(iVar438, false))
		{
			set_anim_scene_entity(iVar438, "hotairballoon01", &(iLocal_378[1]), 0);
			set_anim_scene_entity(iVar438, "cs_balloonoperator", &(iLocal_315[3]), 0);
			set_anim_scene_entity(iVar438, "MrsAdler", &(iLocal_315[1]), 0);
			start_anim_scene(iVar438);
		}
	}
}

void func_1255(char[4] cParam0)
{
	if (does_entity_exist(&(iLocal_315[2])) && func_1603(&(iLocal_315[2]), 0))
	{
		func_1316(cParam0, "GNG2_FAIL_SH", "", 1, 0);
	}
}

void func_1256(char[4] cParam0)
{
	if (does_entity_exist(func_253(cParam0)))
	{
		if (func_1603(func_253(cParam0), 0) || is_ped_fatally_injured(func_253(cParam0)))
		{
			func_1316(cParam0, "ALLY_DEAD_HORSE_PLAYER", "", 1, 0);
		}
	}
}

void func_1257(int iParam0)
{
	Global_36606 = { func_1768() };
	Global_36610 = { func_1768() };
	Global_36605 = iParam0;
}

int func_1258(char[4] cParam0)
{
	return cParam0->f_598;
}

Vector3 func_1259(int iParam0, int iParam1)
{
	return func_1611(iParam0, iParam1);
}

int func_1260(int iParam0, vector3 vParam1, float fParam4, float fParam5, bool bParam6, float fParam7, bool bParam8, float fParam9, bool bParam10, int iParam11, float fParam12, float fParam13, bool bParam14)
{
	func_1822(iParam0, vParam1, 0, fParam5, bParam6, fParam7, bParam8, fParam12, fParam13, bParam14, 0);
	iVar1 = get_mount(iParam0);
	if (is_ped_in_any_vehicle(iParam0, false))
	{
		iVar2 = get_vehicle_ped_is_in(iParam0, false);
	}
	bVar4 = func_1261(iParam0, vParam1, 1);
	if (!func_26(fParam4))
	{
		if (bVar4 <= bParam8)
		{
			if (does_entity_exist(iVar1) || does_entity_exist(iVar2))
			{
				func_27(fParam4, 0);
			}
		}
	}
	else if (bParam10 && bVar4 > bParam8)
	{
		func_540(fParam4);
	}
	if (func_26(fParam4))
	{
		if (bParam14)
		{
			set_ped_max_move_blend_ratio(iParam0, 1f);
		}
		if (!is_entity_dead(iVar1))
		{
			set_ped_max_move_blend_ratio(iVar1, 1f);
		}
		if (!is_entity_dead(iVar2) && _is_draft_vehicle(iVar2))
		{
			iVar0 = 0;
			while (iVar0 < 6)
			{
				iVar3 = _get_ped_in_draft_seat(iVar2, iVar0);
				if (!is_entity_dead(iVar3))
				{
					set_ped_max_move_blend_ratio(iVar3, 1f);
					_0x0c3f0f7f92ca847c(iVar2, _0x46bf2a810679d6e6(iVar3, 1f));
				}
				iVar0++;
			}
		}
		if (func_919(fParam4) >= fParam9)
		{
			if (iParam0 == Global_35)
			{
				set_player_may_not_enter_any_vehicle(player_id());
				_0x9f9a829c6751f3c7(player_id(), 28, 1);
			}
			if (!is_entity_dead(iVar1) && !func_1823(iParam0, 501393341))
			{
				if (is_ped_on_mount(iParam0))
				{
					task_dismount_animal(iParam0, 0, 0, 0, 0, 0);
					return 1;
				}
			}
			if (!is_entity_dead(iVar2) && !func_1823(iParam0, -828834893))
			{
				if (is_ped_in_any_vehicle(iParam0, false))
				{
					task_leave_any_vehicle(iParam0, 0, 0);
					return 1;
				}
			}
		}
		if (iParam0 == Global_35 && iParam11 == 0)
		{
			if (get_is_task_active(iParam0, 8))
			{
				clear_ped_tasks(iParam0, 1, 0);
			}
			set_ped_reset_flag(iParam0, 175, true);
		}
	}
	return 0;
}

float func_1261(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

void func_1262(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1592(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1593(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_506(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1824(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1825(iParam1);
		}
	}
	if (func_1824(cParam0, iParam1))
	{
		func_1264(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1246(cParam0, iParam1, 128);
		}
		else
		{
			func_1264(cParam0, iParam1, 128);
		}
		if (func_973(cParam0, iParam1, &iVar3))
		{
			func_1566(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1826(iVar1);
	}
}

void func_1263(char[4] cParam0)
{
	Var0 = { func_1526(cParam0, func_35(cParam0)) };
	func_1827(cParam0, &Var0);
}

void func_1264(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_973(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_974(cParam0->f_5423[iVar0], iParam2);
}

void func_1265(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1266(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1567(iVar0))
	{
		return;
	}
	iVar1 = func_1568(iParam3);
	if (!func_1569(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1267(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1268(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

bool func_1269(char[4] cParam0, int iParam1, int iParam2)
{
	if (!func_1828(iParam1))
	{
		func_856(iParam1, iParam2, &Var0);
		iLocal_378[iParam1] = create_vehicle(Var0.f_4, Var0, Var0.f_3, false, false, false, false);
		func_449(iParam1, 1);
		if (iParam1 == 1)
		{
			func_422(cParam0, &(iLocal_378[iParam1]), "hotairballoon01", 0, 0, 0, 0);
			set_entity_lod_dist(&(iLocal_378[iParam1]), 300);
		}
		if (func_1828(iParam1))
		{
			freeze_entity_position(&(iLocal_378[iParam1]), func_1829(8, &Var0));
			set_entity_invincible(&(iLocal_378[iParam1]), func_1829(4, &Var0));
			set_vehicle_can_be_targetted(&(iLocal_378[iParam1]), false);
		}
	}
	return func_1828(iParam1);
}

bool func_1270(int iParam0, int iParam1, char[4] cParam2)
{
	if (!func_1830(iParam0))
	{
		func_1831(iParam0, iParam1, &Var0);
		if (iParam0 == 1)
		{
			if (does_entity_exist(&(iLocal_378[1])) && is_vehicle_driveable(&(iLocal_378[1]), false, false))
			{
				iLocal_381[iParam0] = _0x0ba4250d20007c2e(&(iLocal_378[1]));
				if (does_entity_exist(&(iLocal_381[iParam0])))
				{
					func_1832(iParam0);
				}
			}
		}
		else
		{
			iLocal_381[iParam0] = create_object(Var0.f_6, Var0, false, false, false, false, true);
			set_entity_rotation(&(iLocal_381[iParam0]), Var0.f_3, 0, true);
			func_1832(iParam0);
		}
		if (func_1830(iParam0))
		{
			if (iParam0 == 1)
			{
				func_422(cParam2, &(iLocal_381[iParam0]), "p_hotairballoon01x", 0, 0, 0, 0);
				set_entity_lod_dist(&(iLocal_381[iParam0]), 500);
			}
			set_entity_invincible(&(iLocal_381[iParam0]), func_1833(2, &Var0));
			freeze_entity_position(&(iLocal_381[iParam0]), func_1833(4, &Var0));
		}
	}
	return func_1830(iParam0);
}

void func_1271(char[4] cParam0)
{
	if (!does_entity_exist(&(iLocal_409[0])))
	{
		iLocal_409[0] = create_object(-1151041406, 2611.45f, -444.33f, 41.2f, true, true, false, false, true);
		func_422(cParam0, &(iLocal_409[0]), "s_hotairBalloon_sandbag", 0, 0, 0, 0);
		set_anim_scene_entity(iVar438, "s_hotairBalloon_sandbag", &(iLocal_409[0]), 0);
		set_anim_scene_entity(iVar439, "s_hotairBalloon_sandbag", &(iLocal_409[0]), 0);
	}
	if (!does_entity_exist(&(iLocal_409[1])))
	{
		iLocal_409[1] = create_object(-1151041406, 2611.45f, -444.33f, 41.2f, true, true, false, false, true);
		func_422(cParam0, &(iLocal_409[1]), "s_hotairBalloon_sandbag^1", 0, 0, 0, 0);
		set_anim_scene_entity(iVar438, "s_hotairBalloon_sandbag^1", &(iLocal_409[1]), 0);
		set_anim_scene_entity(iVar439, "s_hotairBalloon_sandbag^1", &(iLocal_409[1]), 0);
	}
	if (!does_entity_exist(&(iLocal_409[2])))
	{
		iLocal_409[2] = create_object(-1151041406, 2611.45f, -444.33f, 41.2f, true, true, false, false, true);
		func_422(cParam0, &(iLocal_409[2]), "s_hotairBalloon_sandbag^2", 0, 0, 0, 0);
		set_anim_scene_entity(iVar438, "s_hotairBalloon_sandbag^2", &(iLocal_409[2]), 0);
		set_anim_scene_entity(iVar442, "s_hotairBalloon_sandbag^2", &(iLocal_409[2]), 0);
	}
	if (!does_entity_exist(&(iLocal_409[3])))
	{
		iLocal_409[3] = create_object(-1151041406, 2611.45f, -444.33f, 41.2f, true, true, false, false, true);
		func_422(cParam0, &(iLocal_409[3]), "s_hotairBalloon_sandbag^3", 0, 0, 0, 0);
		set_anim_scene_entity(iVar438, "s_hotairBalloon_sandbag^3", &(iLocal_409[3]), 0);
		set_anim_scene_entity(iVar442, "s_hotairBalloon_sandbag^3", &(iLocal_409[3]), 0);
	}
	if (!does_entity_exist(&(iLocal_414[0])))
	{
		iLocal_414[0] = create_object(965516916, 2611.45f, -444.33f, 41.2f, true, true, false, false, true);
		func_422(cParam0, &(iLocal_414[0]), "P_CS_FLYINGGOGGLE01X", 0, 0, 0, 0);
		set_anim_scene_entity(iVar438, "P_CS_FLYINGGOGGLE01X", &(iLocal_414[0]), 0);
		set_anim_scene_entity(iVar439, "P_CS_FLYINGGOGGLE01X", &(iLocal_414[0]), 0);
	}
	if (!does_entity_exist(&(iLocal_414[1])))
	{
		iLocal_414[1] = create_object(965516916, 2611.45f, -444.33f, 41.2f, true, true, false, false, true);
		func_422(cParam0, &(iLocal_414[1]), "P_CS_FLYINGGOGGLE01X^1", 0, 0, 0, 0);
		set_anim_scene_entity(iVar438, "P_CS_FLYINGGOGGLE01X^1", &(iLocal_414[1]), 0);
	}
}

void func_1272(var uParam0, int iParam1)
{
	func_1834(&(uParam0->f_7375.f_860), iParam1);
}

void func_1273(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1800(iParam0, 64);
	func_261();
}

struct<4> func_1274(int iParam0)
{
	if (iParam0 == iVar293)
	{
		Var0 = { func_488(2, 4) };
	}
	else if (iParam0 == iVar302)
	{
		func_487(&Var0, 2429.26f, 60.54f, 41.76f, -139.7f);
	}
	else
	{
		func_487(&Var0, 2142.99f, -954.06f, 41.48f, 93.89f);
	}
	return Var0;
}

void func_1275(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_910(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1276()
{
	if (!does_entity_exist(iVar401))
	{
		iLocal_403 = create_vehicle(-956670977, 3140.61f, -203.99f, 40.86f, 49.29f, true, true, false, false);
	}
}

void func_1277(char[4] cParam0)
{
	if (!func_388(iLocal_115, 16384))
	{
		if (iVar973 == 4 || iVar973 == 5)
		{
			if (!func_1287(cParam0, &Local_524))
			{
				func_416(&iLocal_115, 16384);
			}
		}
	}
}

void func_1278(char[4] cParam0)
{
	if (iVar973 != 5)
	{
		func_1835(cParam0);
	}
	if (!func_388(iLocal_115, 131072) && func_1287(cParam0, &Local_524))
	{
		if (iVar973 == 4 && func_919(&uLocal_977) > 2f)
		{
			if (func_207())
			{
				func_113(1);
			}
			func_704("GNG2_HLP_BAL3", 10000, 0, 0, 0, 1);
			func_416(&iLocal_115, 131072);
		}
	}
	switch (func_1283(cParam0))
	{
		case 1:
			if (iVar1087 >= 1)
			{
				func_1247(cParam0, 3);
				func_704("GNG2_HLP_BAL0", 10000, 0, 0, 0, 1);
				func_1306(cParam0, 2, 1);
			}
			break;
		case 2:
			if (_is_anim_scene_started(iVar439, false) && _get_anim_scene_time(iVar439) > 10f)
			{
				if (func_1802(cParam0, "GNG2_ARTH_REPLY", 0))
				{
					func_213(&uLocal_896);
					func_1306(cParam0, 3, 1);
				}
			}
			break;
		case 3:
			if (!func_1372())
			{
				if (get_control_normal(0, 1915927219) > 0f)
				{
					if (get_entity_height_above_ground(Global_35) > 1f)
					{
						if (func_1802(cParam0, "GNG2_LIFT_OFF", 0))
						{
							func_1306(cParam0, 4, 1);
						}
					}
				}
				else if (func_919(&uLocal_896) > 3f)
				{
					func_1802(cParam0, "GNG2_LNCH_DAWD", 0);
					func_213(&uLocal_896);
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
		case 4:
			if (func_1836(cParam0))
			{
				func_1837(cParam0);
			}
			if (!func_1838())
			{
				func_1839(cParam0);
			}
			else
			{
				func_213(&uLocal_1100);
				func_213(&uLocal_1097);
				func_1306(cParam0, 5, 1);
			}
			break;
		case 5:
			if (func_1836(cParam0) && !func_1287(cParam0, &Local_524))
			{
				func_1837(cParam0);
				func_1840(cParam0);
			}
			if ((!func_1372() && func_1287(cParam0, &Local_524)) && !func_1841())
			{
				if (func_919(&uLocal_896) > 1f)
				{
					if (func_1802(cParam0, "GNG2_FTPI_CLD2", 0))
					{
						func_1247(cParam0, 4);
						iLocal_384[0] = func_1295(408396114, 3273.4f, -608.97f, 41.95f, 200f, 1);
						set_blip_name_from_text_file(&(iLocal_384[0]), "SIS");
						func_1306(cParam0, 6, 1);
						func_213(&uLocal_896);
						iLocal_993 = 3;
					}
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
		case 6:
			func_1842(cParam0);
			fVar0 = func_1261(&(iLocal_378[1]), func_1288(0), 0);
			if (fVar0 > 380f)
			{
				func_1843(cParam0, fVar0);
			}
			else if (fVar0 < 360f)
			{
				if (func_1287(cParam0, &Local_524) && !func_1372())
				{
					if (func_1802(cParam0, "GNG2_FTPI_PRSN1", 0))
					{
						func_213(&uLocal_896);
						func_1306(cParam0, 7, 1);
					}
				}
			}
			break;
		case 7:
			func_1842(cParam0);
			if (func_1844("GNG2_FTPI_PRSN1"))
			{
				func_213(&uLocal_896);
			}
			if ((Global_36.f_2 <= func_1845(cParam0, &Local_524) && !func_1372()) && func_919(&uLocal_896) > 3f)
			{
				if (func_1802(cParam0, "GNG2_FTPI_PRSN2", 0))
				{
					func_1306(cParam0, 8, 1);
				}
			}
			break;
		case 8:
			if (iVar973 != 5)
			{
				if (!func_1844("GNG2_FTPI_PRSN2"))
				{
					func_1247(cParam0, 5);
					func_213(&uLocal_896);
				}
			}
			else if ((func_1287(cParam0, &Local_524) && !func_1372()) && func_919(&uLocal_896) > 3f)
			{
				if (func_1802(cParam0, "GNG2_FTPI_PRSN3", 0))
				{
					func_1306(cParam0, 51, 1);
				}
			}
			break;
	}
	func_1846(cParam0);
}

void func_1279(char[4] cParam0, int iParam1, char[4] cParam2, vector3 vParam3, bool bParam6)
{
	if (func_33(cParam0) == 1 || func_33(cParam0) == 2)
	{
		fVar0 = func_1329(cParam0, cParam2);
		fVar1 = func_1845(cParam0, cParam2);
		fVar2 = 40f;
	}
	else if (func_33(cParam0) == 3)
	{
		fVar0 = func_1329(cParam0, cParam2);
		fVar1 = 150f;
		fVar2 = 40f;
	}
	else if (func_33(cParam0) == 6)
	{
		if (!func_1847())
		{
			fVar0 = 65f;
			fVar1 = 80f;
		}
		else
		{
			fVar0 = (vParam3.z + 3f);
			fVar1 = (vParam3.z + 9f);
		}
		fVar2 = 50f;
	}
	else
	{
		fVar0 = func_1329(cParam0, cParam2);
		fVar1 = func_1845(cParam0, cParam2);
		fVar2 = 40f;
	}
	fVar3 = func_1848(cParam0, cParam2);
	switch (iLocal_112)
	{
		case 0:
			*iParam1 = func_1849("GNG2_THROT", 1915927219, 15, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
			func_1850(*iParam1, 11, 1, 1);
			func_1850(*iParam1, 10, 1, 1);
			iLocal_112 = 1;
			break;
		case 1:
			if (Global_36.f_2 < fVar0)
			{
				iLocal_112 = 2;
			}
			else if (Global_36.f_2 > fVar1)
			{
				iLocal_112 = 3;
			}
			break;
		case 2:
			if ((bParam6 && !bLocal_109) && get_control_normal(0, 1915927219) == 0f)
			{
				func_704("GNG2_HLP_BAL2", 10000, 0, 0, 0, 1);
				bLocal_109 = true;
			}
			if (_uiprompt_get_urgent_pulsing_enabled(func_1851(iParam1)))
			{
				if (get_control_normal(0, 1915927219) >= 0.1f)
				{
					func_1852(*iParam1, 0);
				}
			}
			else if (get_control_normal(0, 1915927219) < 0.1f)
			{
				func_1852(*iParam1, 1);
			}
			if (Global_36.f_2 > fVar0)
			{
				if (_uiprompt_get_urgent_pulsing_enabled(func_1851(iParam1)))
				{
					func_1852(*iParam1, 0);
				}
				iLocal_112 = 1;
			}
			break;
		case 3:
			if ((bParam6 && !bLocal_110) && get_control_normal(0, 1915927219) > 0f)
			{
				func_704("GNG2_HLP_BAL1", 10000, 0, 0, 0, 1);
				bLocal_110 = true;
			}
			if (Global_36.f_2 < fVar1)
			{
				iLocal_112 = 1;
			}
			break;
	}
	fVar4 = (fVar1 - fVar0);
	fVar5 = (fVar0 + (fVar4 / 2f));
	fVar5 = (fVar5 - fVar2);
	fVar3 = (fVar3 - fVar2);
	fVar6 = (Global_36.f_2 - fVar2);
	fVar7 = func_1346((fVar5 / fVar3), 0f, 1f);
	fVar8 = func_1346((fVar6 / fVar3), 0f, 1f);
	_uiprompt_set_target_mode_target(func_1851(iParam1), fVar7, ((fVar4 / 2f) / fVar3));
	_uiprompt_set_target_mode_progress(func_1851(iParam1), fVar8);
}

void func_1280()
{
	if (!func_388(iLocal_115, 8))
	{
		if (!does_entity_exist(iVar402))
		{
			if (func_1261(&(iLocal_378[1]), func_1288(0), 0) < 800f)
			{
				if (func_1853(iVar406))
				{
					func_1854(_0x6de03bcc15e81710(vLocal_405), 20f, 0, 0, 0, 0, 0);
					iLocal_404 = _create_mission_train(iVar406, _0x6de03bcc15e81710(vLocal_405), false, false, true, true);
				}
			}
		}
		else if (!is_entity_dead(iVar402) && _0xbd3c4a2ed509205e(iVar402))
		{
			iVar0 = _0x60b7d1dcc312697d(iVar402);
			if (iVar0 == _0x635423d55ca84fc8(iVar406))
			{
				set_entity_lod_dist(iVar402, 1000);
				iVar1 = 0;
				while (iVar1 < iVar0)
				{
					iVar2 = get_train_carriage(iVar402, iVar1);
					set_entity_lod_dist(iVar2, 1000);
					iVar1++;
				}
				func_1855(iVar402, 10f);
				func_1856(iVar406);
				func_416(&iLocal_115, 8);
			}
		}
	}
}

void func_1281()
{
	if (func_172(&(iLocal_315[1]), 0) && func_172(&(iLocal_315[2]), 0))
	{
		if (!bVar1106)
		{
			if (_is_anim_scene_finished(iVar442, false) || _0xb89fcff19dafff28(iVar442, "MrsAdler"))
			{
				open_sequence_task(&iVar0);
				task_mount_animal(0, &(iLocal_315[2]), 20000, -1, 1f, 1, 0, 0);
				_task_move_in_traffic_2(0, 2685.1f, 253.85f, 61.84f, 1073741824, 1.75f, 0, 0);
				close_sequence_task(iVar0);
				task_perform_sequence(&(iLocal_315[1]), iVar0);
				clear_sequence_task(&iVar0);
				iLocal_1108 = 1;
			}
		}
		else if (is_ped_on_mount(&(iLocal_315[1])))
		{
			if (func_1261(&(iLocal_315[1]), func_1259(2, 1), 1) < 5f)
			{
				set_ped_max_move_blend_ratio(&(iLocal_315[2]), 1.001f);
			}
		}
	}
}

void func_1282()
{
	if (!_is_anim_scene_started(iVar445, false))
	{
		if (_does_anim_scene_exist(iVar440))
		{
			if (_is_anim_scene_started(iVar440, false) && _0x8d81e7824b7753f7(iVar440, "LOOP", 1))
			{
				set_anim_scene_entity(iVar445, "CS_BalloonOperator", &(iLocal_315[3]), 0);
				attach_anim_scene_to_entity(iVar445, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
				set_anim_scene_origin(iVar445, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				start_anim_scene(iVar445);
				_delete_anim_scene(iVar440);
			}
		}
		else
		{
			set_anim_scene_entity(iVar445, "CS_BalloonOperator", &(iLocal_315[3]), 0);
			attach_anim_scene_to_entity(iVar445, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
			set_anim_scene_origin(iVar445, 0f, 0f, 0f, 0f, 0f, 0f, 2);
			start_anim_scene(iVar445);
		}
	}
	else if (get_entity_height_above_ground(Global_35) < 5f)
	{
		if (!_0x1f0e401031e20146(iVar445, "pbl_loop_idle_01"))
		{
			_0xdf7b5144e25cd3fe(iVar445, "pbl_loop_idle_01");
			if (func_1857(iVar445, 100))
			{
				_set_anim_scene_playback_list_bool(iVar445, "pbl_loop_idle_01", true);
			}
		}
	}
	else
	{
		iVar0 = iVar1056 + 1;
		if (iVar0 == 4)
		{
			iVar0 = 1;
		}
		StringCopy(&cVar1, "pbl_loop_idle_0", 24);
		StringIntConCat(&cVar1, iVar0, 24);
		_0xdf7b5144e25cd3fe(iVar445, &cVar1);
		if (func_1857(iVar445, 100))
		{
			_set_anim_scene_playback_list_bool(iVar445, &cVar1, true);
			iLocal_1058 = iVar0;
		}
	}
}

int func_1283(char[4] cParam0)
{
	return cParam0->f_599;
}

void func_1284(char[4] cParam0)
{
	if ((does_entity_exist(&(iLocal_378[1])) && is_vehicle_driveable(&(iLocal_378[1]), false, false)) && is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false))
	{
		if (is_entity_in_water(&(iLocal_378[1])))
		{
			set_vehicle_doors_locked(&(iLocal_378[1]), 4);
			func_1316(cParam0, "GNG2_FAIL_WTR", "", 1, 0);
		}
		else if (has_entity_collided_with_anything(&(iLocal_378[1])))
		{
			fVar0 = _0x6d58167f62238284(&(iLocal_378[1]));
			fVar1 = get_entity_height_above_ground(&(iLocal_378[1]));
			if (fVar0 > 1000f)
			{
				set_vehicle_doors_locked(&(iLocal_378[1]), 4);
				if (func_172(&(iLocal_315[3]), 0))
				{
					clear_ped_tasks(&(iLocal_315[3]), 1, 0);
					set_ped_ragdoll_force_fall(&(iLocal_315[3]));
				}
				if (fVar1 > 1f)
				{
					func_1316(cParam0, "GNG2_FAIL_CSH", "", 1, 0);
				}
				else
				{
					func_1316(cParam0, "GNG2_FAIL_LOW", "", 1, 0);
				}
			}
			else if (fVar1 < 0.2f)
			{
				if (func_919(&uLocal_996) > 2f)
				{
					set_vehicle_doors_locked(&(iLocal_378[1]), 4);
					func_1316(cParam0, "GNG2_FAIL_LOW", "", 1, 0);
				}
			}
			else
			{
				func_213(&uLocal_996);
			}
		}
		else if (Global_36.f_2 > func_1848(cParam0, &Local_524))
		{
			if (func_919(&uLocal_996) > 60f)
			{
				set_vehicle_doors_locked(&(iLocal_378[1]), 4);
				func_1316(cParam0, "GNG2_FAIL_LOW", "", 1, 0);
			}
		}
		else
		{
			func_213(&uLocal_996);
		}
	}
}

void func_1285(char[4] cParam0)
{
	switch (iVar808)
	{
		case 0:
			if (Global_36.f_2 >= (func_1329(cParam0, &Local_524) - 15f))
			{
				vVar0 = { _get_object_offset_from_coords(*Local_524.f_1[0], func_1450(*Local_524.f_1[0], *Local_524.f_1[1], 1), -10f, -80f, 20f) };
				vVar3 = { _get_object_offset_from_coords(*Local_524.f_1[0], func_1450(*Local_524.f_1[0], *Local_524.f_1[1], 1), -20f, 1000f, 0f) };
				if (func_1858(cParam0, vVar0, vVar3, 3f, 5, 0, 1101004800))
				{
					iLocal_789 = 0;
					iLocal_811 = 1;
				}
			}
			break;
		case 1:
			if (func_1356(1, &Local_524) >= 2)
			{
				vVar0 = { _get_object_offset_from_coords(*Local_524.f_1[1], func_1450(*Local_524.f_1[1], *Local_524.f_1[2], 1), 10f, -80f, 0f) };
				vVar3 = { _get_object_offset_from_coords(*Local_524.f_1[1], func_1450(*Local_524.f_1[1], *Local_524.f_1[2], 1), 10f, 1000f, 0f) };
				if (func_1858(cParam0, vVar0, vVar3, 3f, 5, 0, 1101004800))
				{
					iLocal_789 = 0;
					iLocal_811 = 2;
				}
			}
			break;
		case 2:
			vVar0 = { *Local_524.f_1[2] + Vector(10f, 50f, 0f) };
			vVar3 = { vVar0 };
			if (func_1858(cParam0, vVar0, vVar3, 2f, 5, 1, 30f))
			{
				iLocal_789 = 0;
				iLocal_811 = 3;
			}
			break;
		case 3:
			if (func_1356(1, &Local_524) >= 3)
			{
				vVar0 = { _get_object_offset_from_coords(*Local_524.f_1[2], func_1450(*Local_524.f_1[2], *Local_524.f_1[3], 1), -20f, -80f, 0f) };
				vVar3 = { _get_object_offset_from_coords(*Local_524.f_1[2], func_1450(*Local_524.f_1[2], *Local_524.f_1[3], 1), -20f, 1000f, 0f) };
				if (func_1858(cParam0, vVar0, vVar3, 3f, 4, 0, 1101004800))
				{
					iLocal_789 = 0;
					iLocal_811 = 4;
				}
			}
			break;
		case 4:
			vVar0 = { 3146.09f, -458.61f, 100.98f };
			vVar3 = { vVar0 };
			if (func_1858(cParam0, vVar0, vVar3, 2f, 6, 1, 50f))
			{
				iLocal_789 = 0;
				iLocal_811 = 5;
			}
			break;
		case 5:
			if (func_1356(1, &Local_524) >= 6)
			{
				vVar0 = { 3253.86f, -583.12f, 70f };
				vVar3 = { vVar0 };
				if (func_1858(cParam0, vVar0, vVar3, 2f, 5, 1, 35f))
				{
					iLocal_789 = 0;
					iLocal_811 = 6;
				}
			}
			break;
	}
	func_1859();
}

bool func_1286()
{
	if (iVar1088 == 0)
	{
		if (!_is_anim_scene_started(iVar441, false) || _get_anim_scene_time(iVar441) < 5f)
		{
			_0xe296208c273bd7f0(0, 2000, 0, 17, 1, 0);
		}
	}
	switch (iVar1088)
	{
		case 0:
			disable_control_action(0, 1915927219, true);
			if (_is_anim_scene_started(iVar441, false) && _get_anim_scene_time(iVar441) > 6f)
			{
				iLocal_1090 = 1;
			}
			break;
		case 1:
			if (_is_anim_scene_started(iVar441, false))
			{
				_0xdf7b5144e25cd3fe(iVar441, "pl_pull_down");
				_0xdf7b5144e25cd3fe(iVar441, "pl_side_step_ig2");
				if (is_disabled_control_pressed(0, 1915927219))
				{
					if (_0x23e33cb9f4a3f547(iVar441, "pl_pull_down"))
					{
						_set_anim_scene_playback_list_bool(iVar441, "pl_pull_down", true);
						iLocal_1090 = 2;
					}
				}
				else if (_is_anim_scene_started(iVar440, false) && _get_anim_scene_time(iVar440) > 9f)
				{
					if (_0x23e33cb9f4a3f547(iVar441, "pl_side_step_ig2"))
					{
						_set_anim_scene_playback_list_bool(iVar441, "pl_side_step_ig2", true);
						iLocal_1090 = 3;
					}
				}
			}
			break;
		case 2:
			_0xdf7b5144e25cd3fe(iVar441, "pl_side_step_ig2");
			if (_is_anim_scene_started(iVar440, false) && _get_anim_scene_time(iVar440) > 9f)
			{
				if (_0x23e33cb9f4a3f547(iVar441, "pl_side_step_ig2"))
				{
					_set_anim_scene_playback_list_bool(iVar441, "pl_side_step_ig2", true);
					iLocal_1090 = 3;
				}
			}
			break;
		case 3:
			if (_0x005e6f28dd7ed58d(iVar441, "ARTHUR") || _0xb89fcff19dafff28(iVar441, "ARTHUR"))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_1287(char[4] cParam0, float fParam1)
{
	if (Global_36.f_2 >= func_1329(cParam0, fParam1) && Global_36.f_2 <= func_1845(cParam0, fParam1))
	{
		return true;
	}
	return false;
}

Vector3 func_1288(int iParam0)
{
	vVar0 = { 0f, 0f, 0f };
	if (iParam0 == 0)
	{
		vVar0 = { func_1259(4, 0) };
	}
	else if (iParam0 == 1)
	{
		vVar0 = { 2943.99f, 1342.487f, 43.8154f };
	}
	else if (iParam0 == 2)
	{
		vVar0 = { 2895.144f, 651.0267f, 55.8486f };
	}
	else if (iParam0 == 3)
	{
		vVar0 = { 2766.092f, 362.9181f, 53.902f };
	}
	else if (iParam0 == 4)
	{
		vVar0 = { 3158.194f, -532.3858f, 79.0795f };
	}
	else if (iParam0 == 5)
	{
		vVar0 = { 2880.457f, 793.8352f, 50.8363f };
	}
	else if (iParam0 == 6)
	{
		vVar0 = { 2477.4f, 99.85f, 59.24f };
	}
	else if (iParam0 == 7)
	{
		vVar0 = { 2478.153f, 100.676f, 59.2199f };
	}
	else if (iParam0 == 8)
	{
		vVar0 = { 2575.077f, 170.8739f, 66.3005f };
	}
	else if (iParam0 == 9)
	{
		vVar0 = { 2561.811f, 186.9335f, 67.4995f };
	}
	else if (iParam0 == 10)
	{
		vVar0 = { 2611.191f, 95.6098f, 62.7149f };
	}
	else if (iParam0 == 11)
	{
		vVar0 = { 2577.088f, 13.5789f, 55.5001f };
	}
	else if (iParam0 == 12)
	{
		vVar0 = { 2486.252f, -21.8795f, 52.7264f };
	}
	else if (iParam0 == 13)
	{
		vVar0 = { 2421.868f, 88.677f, 58.6903f };
	}
	else if (iParam0 == 14)
	{
		vVar0 = { 2539.444f, 178.6373f, 64.6253f };
	}
	return vVar0;
}

bool func_1289(int iParam0, bool bParam1)
{
	if (!func_248(Local_14.f_69))
	{
		Local_14.f_69 = { func_419() };
	}
	if (func_815(&(Local_14.f_69), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_71[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_71[0] = func_924(1167462574, 3325.301f, -652.9677f, 51.1009f, 20.8583f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_71[0]), "Walkway");
		func_1428(Local_14.f_69, &(Local_14.f_71[0]));
		func_1429(&(Local_14.f_71[0]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_71[0]), true);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_71[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_71[1] = func_924(1167462574, 3340.357f, -627.5149f, 42.8574f, 294.8582f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_71[1]), "MountedCharge1");
		func_1428(Local_14.f_69, &(Local_14.f_71[1]));
		func_1429(&(Local_14.f_71[1]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_71[1]), true);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_71[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_71[2] = func_924(1167462574, 3341.495f, -626.2086f, 42.8742f, 162.858f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_71[2]), "MountedCharge2");
		func_1428(Local_14.f_69, &(Local_14.f_71[2]));
		func_1429(&(Local_14.f_71[2]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_71[2]), true);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_71[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_71[3] = func_924(1167462574, 3350.415f, -643.3101f, 44.5431f, 20.8581f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_71[3]), "FootCharge1");
		func_1428(Local_14.f_69, &(Local_14.f_71[3]));
		func_1429(&(Local_14.f_71[3]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_71[3]), true);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_71[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_71[4] = func_924(1167462574, 3322.605f, -522.1242f, 48.763f, 208.8585f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_71[4]), "Tower1");
		func_1428(Local_14.f_69, &(Local_14.f_71[4]));
		func_1429(&(Local_14.f_71[4]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_71[4]), true);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_71[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_71[5] = func_924(1167462574, 3150.062f, -493.619f, 48.4469f, 154.8585f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_71[5]), "Tower2");
		func_1428(Local_14.f_69, &(Local_14.f_71[5]));
		func_1429(&(Local_14.f_71[5]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_71[5]), true);
		if (bParam1)
		{
			if (iParam0 == 5)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_71[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_71[6] = func_924(1167462574, 3194.906f, -562.6142f, 41.6761f, 332.8583f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_71[6]), "FootCharge2");
		func_1428(Local_14.f_69, &(Local_14.f_71[6]));
		func_1429(&(Local_14.f_71[6]), Local_14);
		set_blocking_of_non_temporary_events(&(Local_14.f_71[6]), true);
		if (bParam1)
		{
			if (iParam0 == 6)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1430(&(Local_14.f_69), 1);
	return true;
}

bool func_1290(int iParam0, bool bParam1)
{
	if (!func_248(Local_14.f_79))
	{
		Local_14.f_79 = { func_419() };
	}
	if (func_815(&(Local_14.f_79), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_81[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_81[0] = func_924(2030804811, 3347.201f, -629.6327f, 44.0045f, 8.8933f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_81[0]), "Horse1");
		func_1428(Local_14.f_79, &(Local_14.f_81[0]));
		func_1429(&(Local_14.f_81[0]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_81[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_81[1] = func_924(96930969, 3341.429f, -632.0861f, 43.8441f, 286.7525f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_81[1]), "Horse2");
		func_1428(Local_14.f_79, &(Local_14.f_81[1]));
		func_1429(&(Local_14.f_81[1]), Local_14);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1430(&(Local_14.f_79), 1);
	return true;
}

bool func_1291(int iParam0, bool bParam1)
{
	if (!func_248(Local_14.f_38))
	{
		Local_14.f_38 = { func_419() };
	}
	if (func_815(&(Local_14.f_38), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_40[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_40[0] = func_924(1836621877, 3256.895f, -536.132f, 42.2354f, 147.2159f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[0]), "Prisoner0");
		func_1428(Local_14.f_38, &(Local_14.f_40[0]));
		func_1429(&(Local_14.f_40[0]), Local_14);
		func_1860(&(Local_14.f_40[0]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[0]), true);
		if (bParam1)
		{
			if (iParam0 == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_40[1] = func_924(1836621877, 3255.261f, -535.209f, 42.0967f, 143.216f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[1]), "Prisoner1");
		func_1428(Local_14.f_38, &(Local_14.f_40[1]));
		func_1429(&(Local_14.f_40[1]), Local_14);
		func_1860(&(Local_14.f_40[1]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[1]), true);
		if (bParam1)
		{
			if (iParam0 == 1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_40[2] = func_924(1836621877, 3205.819f, -599.0287f, 42.0654f, 67.216f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[2]), "Prisoner2");
		func_1428(Local_14.f_38, &(Local_14.f_40[2]));
		func_1429(&(Local_14.f_40[2]), Local_14);
		func_1860(&(Local_14.f_40[2]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[2]), true);
		if (bParam1)
		{
			if (iParam0 == 2)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_40[3] = func_924(1836621877, 3207.086f, -597.1777f, 41.9602f, 77.216f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[3]), "Prisoner3");
		func_1428(Local_14.f_38, &(Local_14.f_40[3]));
		func_1429(&(Local_14.f_40[3]), Local_14);
		func_1860(&(Local_14.f_40[3]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[3]), true);
		if (bParam1)
		{
			if (iParam0 == 3)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[4])) && (iParam0 == -1 || iParam0 == 4))
	{
		Local_14.f_40[4] = func_924(1836621877, 3236.351f, -586.5298f, 42.1173f, 349.2159f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[4]), "Prisoner4");
		func_1428(Local_14.f_38, &(Local_14.f_40[4]));
		func_1429(&(Local_14.f_40[4]), Local_14);
		func_1860(&(Local_14.f_40[4]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[4]), true);
		if (bParam1)
		{
			if (iParam0 == 4)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[5])) && (iParam0 == -1 || iParam0 == 5))
	{
		Local_14.f_40[5] = func_924(1836621877, 3239.1f, -586.6761f, 42.122f, 9.216f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[5]), "Prisoner5");
		func_1428(Local_14.f_38, &(Local_14.f_40[5]));
		func_1429(&(Local_14.f_40[5]), Local_14);
		func_1860(&(Local_14.f_40[5]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[5]), true);
		if (bParam1)
		{
			if (iParam0 == 5)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[6])) && (iParam0 == -1 || iParam0 == 6))
	{
		Local_14.f_40[6] = func_924(1836621877, 3258.403f, -537.147f, 42.2414f, 145.8245f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[6]), "Prisoner6");
		func_1428(Local_14.f_38, &(Local_14.f_40[6]));
		func_1429(&(Local_14.f_40[6]), Local_14);
		func_1860(&(Local_14.f_40[6]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[6]), true);
		if (bParam1)
		{
			if (iParam0 == 6)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[7])) && (iParam0 == -1 || iParam0 == 7))
	{
		Local_14.f_40[7] = func_924(1836621877, 3204.85f, -600.8903f, 42.0543f, 65.8247f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[7]), "Prisoner7");
		func_1428(Local_14.f_38, &(Local_14.f_40[7]));
		func_1429(&(Local_14.f_40[7]), Local_14);
		func_1860(&(Local_14.f_40[7]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[7]), true);
		if (bParam1)
		{
			if (iParam0 == 7)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[8])) && (iParam0 == -1 || iParam0 == 8))
	{
		Local_14.f_40[8] = func_924(1836621877, 3256.739f, -539.7092f, 42.1395f, 323.8246f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[8]), "Prisoner8");
		func_1428(Local_14.f_38, &(Local_14.f_40[8]));
		func_1429(&(Local_14.f_40[8]), Local_14);
		func_1860(&(Local_14.f_40[8]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[8]), true);
		if (bParam1)
		{
			if (iParam0 == 8)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[9])) && (iParam0 == -1 || iParam0 == 9))
	{
		Local_14.f_40[9] = func_924(1836621877, 3255.188f, -538.6464f, 42.1529f, 325.8247f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[9]), "Prisoner9");
		func_1428(Local_14.f_38, &(Local_14.f_40[9]));
		func_1429(&(Local_14.f_40[9]), Local_14);
		func_1860(&(Local_14.f_40[9]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[9]), true);
		if (bParam1)
		{
			if (iParam0 == 9)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[10])) && (iParam0 == -1 || iParam0 == 10))
	{
		Local_14.f_40[10] = func_924(1836621877, 3202.227f, -599.9291f, 41.9189f, 241.8248f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[10]), "Entity_11");
		func_1428(Local_14.f_38, &(Local_14.f_40[10]));
		func_1429(&(Local_14.f_40[10]), Local_14);
		func_1860(&(Local_14.f_40[10]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[10]), true);
		if (bParam1)
		{
			if (iParam0 == 10)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	if (!does_entity_exist(&(Local_14.f_40[11])) && (iParam0 == -1 || iParam0 == 11))
	{
		Local_14.f_40[11] = func_924(1836621877, 3203.384f, -598.168f, 41.9692f, 249.8246f, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0);
		set_ped_name_debug(&(Local_14.f_40[11]), "Entity_12");
		func_1428(Local_14.f_38, &(Local_14.f_40[11]));
		func_1429(&(Local_14.f_40[11]), Local_14);
		func_1860(&(Local_14.f_40[11]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_blocking_of_non_temporary_events(&(Local_14.f_40[11]), true);
		if (bParam1)
		{
			if (iParam0 == 11)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	func_1430(&(Local_14.f_38), 1);
	return true;
}

void func_1292(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	iVar0 = iLocal_107;
	Var1.f_6 = -1082130432;
	Var1.f_9 = -1082130432;
	if (iParam2 == 1 || iParam2 == 2)
	{
		if (_0xa24c1d341c6e0d53(1, 0, 0))
		{
			iParam2 = 0;
			if (!bLocal_114)
			{
				if (iLocal_107 > 1)
				{
					iLocal_107 = 1;
				}
				bLocal_114 = true;
			}
		}
		else if (bLocal_114)
		{
			if (iLocal_107 > 1)
			{
				iLocal_107 = 1;
			}
			bLocal_114 = false;
		}
	}
	fVar42 = 0f;
	if (iParam2 == 2)
	{
		fVar42 = 0.5f;
	}
	if (iParam2 == 3)
	{
		sVar39 = "script_gang2_operatorshot_ballooncontrol";
		iVar40 = 1389044865;
	}
	else
	{
		sVar39 = "script_gang2_ballooncontrol_performance";
		iVar40 = -307311662;
		if (iParam2 == 1)
		{
			iVar41 = -1496116054;
		}
		else if (iParam2 == 2)
		{
			iVar41 = -1648324887;
		}
	}
	switch (iLocal_107)
	{
		case 0:
			_0x2b6529c54d29037a(sVar39);
			iLocal_107 = 1;
			break;
		case 1:
			if (func_1294(iParam2))
			{
				Var1.f_1 = -455129387;
				Var1 = iVar40;
				if (iParam2 != 3)
				{
					Var1.f_3 = -2084852002;
					Var1.f_2 = iVar41;
				}
				Var1.f_4 = "Activating";
				Var1.f_5 = 0f;
				Var1.f_30 = "Pulling";
				if (bParam1)
				{
					vVar36 = { get_world_position_of_entity_bone(iParam0, get_entity_bone_index_by_name(iParam0, "chassis_dummy")) };
					task_move_network_advanced_by_name_with_init_params_attached(Global_35, sVar39, &Var1, iParam0, get_entity_bone_index_by_name(iParam0, "chassis_dummy"), vVar36, get_entity_rotation(iParam0, 2), 2, fVar42, 0, 0, 17540, 0, 1);
					_0x2208438012482a1a(Global_35, false, false);
					iLocal_107 = 3;
				}
			}
			break;
		case 3:
			if (is_task_move_network_active(Global_35))
			{
				fVar35 = get_control_normal(0, 1915927219);
				if (bParam3)
				{
					fVar35 = 0f;
				}
				fLocal_113 = func_1424(fLocal_113, fVar35, (get_frame_time() * 5f));
				set_task_move_network_signal_float(Global_35, "Activating", fLocal_113);
			}
			break;
	}
	if (iVar0 != iLocal_107)
	{
	}
}

void func_1293()
{
	if (does_entity_exist(&(iLocal_409[0])))
	{
		delete_object(iLocal_409[0]);
	}
	if (does_entity_exist(&(iLocal_409[1])))
	{
		delete_object(iLocal_409[1]);
	}
	if (does_entity_exist(&(iLocal_409[2])))
	{
		delete_object(iLocal_409[2]);
	}
	if (does_entity_exist(&(iLocal_409[3])))
	{
		delete_object(iLocal_409[3]);
	}
	if (does_entity_exist(&(iLocal_414[0])))
	{
		delete_object(iLocal_414[0]);
	}
	if (does_entity_exist(&(iLocal_414[1])))
	{
		delete_object(iLocal_414[1]);
	}
}

bool func_1294(int iParam0)
{
	if (iParam0 == 3)
	{
		sVar0 = "script_gang2_operatorshot_ballooncontrol";
	}
	else
	{
		sVar0 = "script_gang2_ballooncontrol_performance";
	}
	if (_0x2c04d89a0fb4e244(sVar0))
	{
		return true;
	}
	return false;
}

int func_1295(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	iVar0 = _blip_add_for_radius(iParam0, vParam1, fParam4);
	if (bParam5)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1296(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!_does_scenario_point_exist(&(uLocal_428[iVar0])))
		{
			vVar1 = { func_1861(iVar0) };
			uLocal_428[iVar0] = create_scenario_point(1984495656, vVar1, func_1862(5, iVar0), 0, 0, 1);
			_0x9587913b9e772d29(&(Local_14.f_40[iVar0]), 0);
			clear_ped_tasks_immediately(&(Local_14.f_40[iVar0]), false, true);
			if (bParam0 || (iVar0 != 4 && iVar0 != 5))
			{
				_task_use_scenario_point(&(Local_14.f_40[iVar0]), &(uLocal_428[iVar0]), 0, -1, false, true, 0, false, -1f, false);
			}
			else
			{
				_task_start_scenario_in_place(&(Local_14.f_40[iVar0]), 2087366558, -1, false, 0, -1f, false);
			}
		}
		iVar0++;
	}
}

void func_1297()
{
	set_anim_scene_entity(iVar448, "MALE_SKELETON", &(iLocal_315[5]), 0);
	set_anim_scene_entity(iVar448, "w_repeater_carbine01", get_current_ped_weapon_entity_index(&(iLocal_315[7]), 0), 0);
	set_anim_scene_origin(iVar448, get_entity_coords(&(iLocal_315[5]), true, false), 0f, 0f, 0f, 2);
	start_anim_scene(iVar448);
	set_anim_scene_bool(iVar448, "internal_loop_end", true, false);
	sLocal_460 = "pbl_Idle_B";
	set_anim_scene_entity(iVar449, "MALE_SKELETON", &(iLocal_315[9]), 0);
	set_anim_scene_entity(iVar449, "w_repeater_carbine01", get_current_ped_weapon_entity_index(&(iLocal_315[9]), 0), 0);
	set_anim_scene_origin(iVar449, get_entity_coords(&(iLocal_315[9]), true, false), 0f, 0f, 0f, 2);
	start_anim_scene(iVar449);
	set_anim_scene_bool(iVar449, "internal_loop_end", true, false);
	sLocal_461 = "pbl_Idle_C";
	set_anim_scene_entity(iVar450, "MALE_SKELETON", &(iLocal_315[7]), 0);
	set_anim_scene_entity(iVar450, "w_repeater_carbine01", get_current_ped_weapon_entity_index(&(iLocal_315[5]), 0), 0);
	set_anim_scene_origin(iVar450, get_entity_coords(&(iLocal_315[7]), true, false), 0f, 0f, 0f, 2);
	start_anim_scene(iVar450);
	set_anim_scene_bool(iVar450, "internal_loop_end", true, false);
	sLocal_462 = "pbl_Idle_D";
}

float func_1298(int iParam0, int iParam1)
{
	return func_1612(iParam0, iParam1);
}

void func_1299(char[4] cParam0, int iParam1, int iParam2)
{
	func_1396(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1300(char[4] cParam0)
{
	switch (func_1283(cParam0))
	{
		case 1:
			if (is_screen_faded_in() && !func_1372())
			{
				if (func_1802(cParam0, "GNG2_LJ_BI", 0))
				{
					func_1306(cParam0, 2, 1);
					func_213(&uLocal_896);
				}
			}
			break;
		case 2:
			if (_does_anim_scene_exist(iVar445))
			{
				if ((_is_anim_scene_finished(iVar445, false) || _0x005e6f28dd7ed58d(iVar445, "player_zero")) || _get_number_of_references_of_script_with_name_hash(-310160435) > 0)
				{
					func_1247(cParam0, 7);
					func_1863();
					func_1306(cParam0, 3, 1);
					func_213(&uLocal_896);
				}
			}
			break;
		case 3:
			func_1864(cParam0);
			if (func_1865() && Local_869[iVar865]->f_4 == 1)
			{
				if (does_blip_exist(Local_869[0]->f_3))
				{
					remove_blip(&(Local_869[0]->f_3));
				}
				if (does_blip_exist(Local_869[1]->f_3))
				{
					remove_blip(&(Local_869[1]->f_3));
				}
				if (does_blip_exist(Local_869[2]->f_3))
				{
					remove_blip(&(Local_869[2]->f_3));
				}
				iLocal_384[0] = func_1866(408396114, &(iLocal_315[4]), 1);
				func_213(&uLocal_1118);
				func_1306(cParam0, 4, 1);
			}
			break;
		case 4:
			func_1864(cParam0);
			if (func_1867())
			{
				if (func_1868(iVar865))
				{
					if (iVar973 != 9)
					{
						func_1247(cParam0, 9);
					}
				}
				else
				{
					if (iVar973 != 8)
					{
						func_1247(cParam0, 8);
					}
					if (iVar973 == 8 && !func_1844("GNG2_LJ_MJ"))
					{
						if (!func_388(iLocal_115, 65536))
						{
							func_1799(cParam0);
							func_416(&iLocal_115, 65536);
						}
						else if (!func_388(iLocal_115, 32768))
						{
							func_318(474, 1);
							func_416(&iLocal_115, 32768);
						}
					}
					func_213(&uLocal_1118);
				}
			}
			else if (iVar973 != 9 && func_919(&uLocal_1118) > 0.5f)
			{
				func_1247(cParam0, 9);
				func_1396(&iLocal_115, 32768);
			}
			break;
	}
}

void func_1301()
{
	if (func_909(Global_35, &(iLocal_378[1]), 1, 1) > 3f)
	{
		if (!can_ped_ragdoll(Global_35))
		{
			set_ped_can_ragdoll(Global_35, true);
		}
		else if (func_172(Global_35, 0))
		{
			if (((_has_entity_been_damaged_by_weapon(Global_35, -842959696, 0) || has_entity_collided_with_anything(Global_35)) || is_entity_in_water(Global_35)) || func_909(Global_35, &(iLocal_378[1]), 1, 1) > 50f)
			{
				func_1373(Global_35, 0, 0);
			}
		}
	}
}

void func_1302()
{
	iVar0 = iVar1121;
	switch (iVar1121)
	{
		case 0:
			func_1869();
			if (func_1314())
			{
				if (func_919(&uLocal_1112) > 1f)
				{
					iLocal_1123 = 1;
				}
			}
			else
			{
				func_213(&uLocal_1112);
			}
			break;
		case 1:
			if (func_1870())
			{
				func_213(&uLocal_1112);
				iLocal_1123 = 2;
			}
			break;
		case 2:
			if (func_919(&uLocal_1112) > 0.5f)
			{
				func_1305(1);
				func_213(&uLocal_1112);
				iLocal_1123 = 3;
			}
			break;
		case 3:
			break;
	}
	if (iVar0 != iVar1121)
	{
	}
}

int func_1303(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		if (is_ped_shooting(iParam0))
		{
			if (get_current_ped_weapon(iParam0, &iVar0, true, 0, false))
			{
				if ((((((((iVar0 != -618550132 && iVar0 != -1511427369) && iVar0 != -764310200) && iVar0 != -281894307) && iVar0 != 680856689) && iVar0 != 1742487518) && iVar0 != 2055893578) && !_is_weapon_bow(iVar0)) && iVar0 != -1569615261)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1304(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (does_entity_exist(iParam0[iVar0]))
		{
			if (has_entity_been_damaged_by_entity(iParam0[iVar0], Global_35, 1, 1))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1305(bool bParam0)
{
	_0xfd6943b6df77e449(&(iLocal_315[4]), false);
	if (!bParam0 || iVar865 == 0)
	{
		register_target(&(iLocal_315[6]), Global_35, 0);
		set_ped_sphere_defensive_area(&(iLocal_315[6]), 3249.23f, -535.13f, 41.89f, 2f, 1, false, 0);
		if (is_ped_using_any_scenario(&(iLocal_315[6])))
		{
			_0x802092b07e3b1eea(&(iLocal_315[6]), Global_36, 3);
		}
		set_ped_combat_attributes(&(iLocal_315[6]), 30, true);
		open_sequence_task(&iVar0);
		task_aim_at_entity(0, Global_35, 2000, 0, 0);
		task_shoot_at_entity(0, Global_35, 5000, 0, 0);
		task_combat_ped(0, Global_35, 16793600, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(iLocal_315[6]), iVar0);
		clear_sequence_task(&iVar0);
	}
	if (!bParam0 || iVar865 == 2)
	{
		register_target(&(iLocal_315[8]), Global_35, 0);
		set_ped_sphere_defensive_area(&(iLocal_315[8]), 3201.63f, -596.06f, 41.64f, 2f, 1, false, 0);
		if (is_ped_using_any_scenario(&(iLocal_315[8])))
		{
			_0x802092b07e3b1eea(&(iLocal_315[8]), Global_36, 3);
		}
		set_ped_combat_attributes(&(iLocal_315[8]), 30, true);
		open_sequence_task(&iVar0);
		task_aim_at_entity(0, Global_35, 2000, 0, 0);
		task_shoot_at_entity(0, Global_35, 5000, 0, 0);
		task_combat_ped(0, Global_35, 16793600, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(iLocal_315[8]), iVar0);
		clear_sequence_task(&iVar0);
	}
	if (func_172(&(iLocal_315[5]), 0) && !does_blip_exist(&(iLocal_367[5])))
	{
		iLocal_367[5] = _blip_add_for_entity(-1595050198, &(iLocal_315[5]));
		_blip_set_modifier(&(iLocal_367[5]), -1034486097);
	}
	if (func_172(&(iLocal_315[6]), 0) && !does_blip_exist(&(iLocal_367[6])))
	{
		iLocal_367[6] = _blip_add_for_entity(-1595050198, &(iLocal_315[6]));
		_blip_set_modifier(&(iLocal_367[6]), -1034486097);
	}
	if (func_172(&(iLocal_315[7]), 0) && !does_blip_exist(&(iLocal_367[7])))
	{
		iLocal_367[7] = _blip_add_for_entity(-1595050198, &(iLocal_315[7]));
		_blip_set_modifier(&(iLocal_367[7]), -1034486097);
	}
	if (func_172(&(iLocal_315[8]), 0) && !does_blip_exist(&(iLocal_367[8])))
	{
		iLocal_367[8] = _blip_add_for_entity(-1595050198, &(iLocal_315[8]));
		_blip_set_modifier(&(iLocal_367[8]), -1034486097);
	}
	if (func_172(&(iLocal_315[9]), 0) && !does_blip_exist(&(iLocal_367[9])))
	{
		iLocal_367[9] = _blip_add_for_entity(-1595050198, &(iLocal_315[9]));
		_blip_set_modifier(&(iLocal_367[9]), -1034486097);
	}
}

void func_1306(char[4] cParam0, int iParam1, bool bParam2)
{
	func_1871(func_1283(cParam0), bParam2);
	func_135(cParam0, iParam1);
}

bool func_1307()
{
	return (Global_1935630->f_44 == -160924582 && is_first_person_aim_cam_active());
}

float func_1308()
{
	vVar0 = { func_1872() };
	vVar0.f_2 = (vVar0.z + 10f);
	return vVar0.z;
}

void func_1309(char[4] cParam0, int iParam1)
{
	iVar0 = func_715(func_12(cParam0->f_607));
	if (func_716(iVar0))
	{
		func_1873(iVar0, iParam1);
	}
}

void func_1310(int iParam0)
{
	iLocal_107 = 0;
	if (iParam0 == 3)
	{
		sVar0 = "script_gang2_operatorshot_ballooncontrol";
	}
	else
	{
		sVar0 = "script_gang2_ballooncontrol_performance";
	}
	_0x57a197ad83f66bbf(sVar0);
}

void func_1311()
{
	if (_is_anim_scene_started(iVar446, false))
	{
		fVar0 = _get_anim_scene_progress(iVar446);
		if (!is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false))
		{
			if (fVar0 < 0.65f)
			{
				if (!get_entity_collision_disabled(Global_35))
				{
					set_entity_collision(Global_35, false, false);
				}
			}
			else if (get_entity_collision_disabled(Global_35))
			{
				set_entity_collision(Global_35, true, false);
			}
		}
	}
}

void func_1312(float fParam0)
{
	if ((func_340(-160924582, 1, 0) && _get_number_of_references_of_script_with_name_hash(-310160435) < 1) && !func_723("binoculars"))
	{
		if (!func_10(iVar466))
		{
			if (!func_26(fParam0))
			{
				func_213(fParam0);
			}
			else if (func_919(fParam0) > 3f)
			{
				iLocal_469 = func_1849("GNG2_UC_EQPBIN", 1618006066, 0, 570, 4000, 10, 1073741824, 0, 1065353216, 0, 3, 1704213876, 0);
				func_1874(iVar466, -1404316431);
				func_1874(iVar466, 527275493);
				func_540(fParam0);
				if (!bVar465)
				{
					func_704("ITEM_QUICK_EQUIP", 10000, 0, 0, 0, 1);
					iLocal_468 = 1;
				}
			}
		}
		else
		{
			disable_control_action(0, -1304887797, true);
			if (func_1875(iVar466, 1))
			{
				func_11(&iLocal_469, 1, 1);
				func_1876(-160924582, 0, 0, 0, 1, 0, 0);
			}
		}
	}
	else
	{
		if (func_10(iVar466))
		{
			func_11(&iLocal_469, 1, 1);
		}
		if (func_26(fParam0))
		{
			func_540(fParam0);
		}
	}
}

void func_1313(char[4] cParam0)
{
	iVar0 = 0;
	iVar1 = 3;
	if (func_1307())
	{
		iVar2 = 0;
		while (iVar2 < 3)
		{
			if (iVar2 == iVar865)
			{
				vVar3 = { get_entity_coords(&(iLocal_315[4]), true, false) };
			}
			else
			{
				vVar3 = { *Local_869[iVar2] };
			}
			if (func_1877(vVar3, 0.3f, 0.7f, 0.25f, 0.75f, iVar2 == iVar865))
			{
				iVar1 = iVar2;
				if (Local_869[iVar2]->f_4 == 0)
				{
					iVar0 = 3;
				}
				else if (Local_869[iVar2]->f_5 == 0)
				{
					iVar0 = 4;
				}
			}
			iVar2++;
		}
	}
	fVar6 = -1f;
	if (func_26(&uLocal_888))
	{
		fVar6 = func_919(&uLocal_888);
	}
	func_1878(iVar1, iVar0);
	if (iVar0 == 3)
	{
		if (fVar6 > 2f && !func_1372())
		{
			func_1879(cParam0, iVar1);
		}
	}
	else if (iVar0 == 4 && func_1868(iVar1))
	{
		if (func_1880())
		{
			if (fVar6 > 1f)
			{
				func_483(&uLocal_888, 1f);
			}
		}
		else if (fVar6 > 2f)
		{
			func_1881(cParam0, iVar1);
		}
	}
	else
	{
		func_213(&uLocal_888);
	}
	if (func_1867() && iVar0 == 0)
	{
		func_1882(cParam0);
	}
	else
	{
		func_213(&uLocal_891);
	}
}

bool func_1314()
{
	if ((func_1865() && Local_869[iVar866]->f_4 == 1) && Local_869[iVar866]->f_5 == 1)
	{
		return true;
	}
	return false;
}

bool func_1315()
{
	if (!func_26(&uLocal_1109))
	{
		if (func_172(&(iLocal_315[6]), 0) && is_ped_shooting(&(iLocal_315[6])))
		{
			func_213(&uLocal_1109);
		}
		else if (func_172(&(iLocal_315[8]), 0) && is_ped_shooting(&(iLocal_315[8])))
		{
			func_213(&uLocal_1109);
		}
	}
	else if (func_919(&uLocal_1109) > 0.5f)
	{
		return true;
	}
	return false;
}

void func_1316(char[4] cParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		func_434(cParam0, 2);
	}
	else
	{
		func_434(cParam0, 1);
	}
	StringCopy(&cVar0, sParam1, 64);
	func_1577(cParam0, cVar0);
	func_160(cParam0, 2);
	if (((!_0x139efb0a71dd9011() && !func_29()) && !func_6(cParam0, 80)) && bParam3)
	{
		func_30(cParam0);
	}
	func_27(&(cParam0->f_13118), 0);
}

void func_1317()
{
	if (_does_anim_scene_exist(iVar447))
	{
		if (!_is_anim_scene_started(iVar447, false))
		{
			if (_0x005e6f28dd7ed58d(iVar446, "cs_balloonoperator"))
			{
				set_anim_scene_entity(iVar447, "cs_balloonoperator", &(iLocal_315[3]), 0);
				set_anim_scene_entity(iVar447, "hotairballoon01", &(iLocal_378[1]), 0);
				attach_anim_scene_to_entity(iVar447, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
				set_anim_scene_origin(iVar447, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				start_anim_scene(iVar447);
				iLocal_1121 = func_1883(iVar1119);
			}
		}
		else
		{
			_0xdf7b5144e25cd3fe(iVar447, func_1884(iVar1119));
			if (func_1857(iVar447, 100))
			{
				_set_anim_scene_playback_list_bool(iVar447, func_1884(iVar1119), true);
				if (iVar1119 != 0)
				{
					iLocal_1121 = 0;
				}
				else
				{
					iLocal_1121 = func_1883(iVar1119);
				}
			}
		}
	}
}

void func_1318()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (func_172(&(iLocal_666[iVar0]), 0))
		{
			task_fly_away(&(iLocal_666[iVar0]), Global_35);
			set_ped_keep_task(&(iLocal_666[iVar0]), true);
			set_ped_as_no_longer_needed(iLocal_666[iVar0]);
		}
		iVar0++;
	}
}

void func_1319(var uParam0, var uParam1, int iParam2)
{
	func_1885(uParam1);
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (!is_entity_dead(uParam0[iVar0]))
		{
			if (!does_blip_exist(uParam1[iVar0]))
			{
				_blip_add_for_entity(iParam2, uParam0[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1320(var uParam0, int iParam1)
{
	iVar1 = 0;
	while (iVar1 <= (*uParam0 - 1))
	{
		if (!func_172(uParam0[iVar1], 0))
		{
		}
		else
		{
			iVar0 = get_blip_from_entity(uParam0[iVar1]);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, iParam1);
			}
		}
		iVar1++;
	}
}

void func_1321(int iParam0)
{
	iVar0 = 0;
	bVar1 = false;
	while (iVar0 != 10)
	{
		iVar0 = func_440(iParam0, iVar0);
		if (iVar0 != 10)
		{
			if (func_172(&(iLocal_315[iVar0]), 0) && get_script_task_status(&(iLocal_315[iVar0]), 167901368, true) != 1)
			{
				if (bVar1)
				{
					task_shoot_at_entity(&(iLocal_315[iVar0]), &(iLocal_378[1]), -1, -1422700276, 0);
					bVar1 = false;
				}
				else
				{
					task_shoot_at_entity(&(iLocal_315[iVar0]), &(iLocal_381[1]), -1, -1422700276, 0);
					bVar1 = true;
				}
				set_ped_accuracy(&(iLocal_315[iVar0]), 1);
				set_ped_shoot_rate(&(iLocal_315[iVar0]), 10);
			}
		}
	}
}

void func_1322(char[4] cParam0)
{
	func_1886(&(cParam0->f_7375));
}

void func_1323()
{
	if (func_172(&(Local_14.f_71[1]), 0) && func_172(&(Local_14.f_81[0]), 0))
	{
		set_ped_accuracy(&(Local_14.f_71[1]), 1);
		set_ped_shoot_rate(&(Local_14.f_71[1]), 5);
		open_sequence_task(&iVar0);
		task_mount_animal(0, &(Local_14.f_81[0]), 20000, -1, 2f, 1, 0, 0);
		task_go_to_coord_while_aiming_at_entity(0, func_1259(4, 8), Global_35, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, -1, 0);
		task_combat_ped(0, Global_35, 0, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(Local_14.f_71[1]), iVar0);
		clear_sequence_task(&iVar0);
	}
	if (func_172(&(Local_14.f_71[2]), 0) && func_172(&(Local_14.f_81[1]), 0))
	{
		set_ped_accuracy(&(Local_14.f_71[2]), 1);
		set_ped_shoot_rate(&(Local_14.f_71[2]), 5);
		open_sequence_task(&iVar0);
		task_mount_animal(0, &(Local_14.f_81[1]), 20000, -1, 2f, 1, 0, 0);
		task_go_to_coord_while_aiming_at_entity(0, func_1259(4, 9), Global_35, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, -1, 0);
		task_combat_ped(0, Global_35, 0, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(Local_14.f_71[2]), iVar0);
		clear_sequence_task(&iVar0);
	}
	if (func_172(&(Local_14.f_71[3]), 0))
	{
		set_ped_accuracy(&(Local_14.f_71[3]), 1);
		set_ped_shoot_rate(&(Local_14.f_71[3]), 5);
		open_sequence_task(&iVar0);
		task_go_to_coord_while_aiming_at_entity(0, func_1259(4, 10), Global_35, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, -1, 0);
		task_combat_ped(0, Global_35, 0, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(Local_14.f_71[3]), iVar0);
		clear_sequence_task(&iVar0);
	}
	if (func_172(&(Local_14.f_71[6]), 0))
	{
		func_1275(&(Local_14.f_71[6]), func_488(4, 12), 2, 1073741824);
		set_ped_accuracy(&(Local_14.f_71[6]), 1);
		set_ped_shoot_rate(&(Local_14.f_71[6]), 5);
		open_sequence_task(&iVar0);
		task_go_to_coord_while_aiming_at_entity(0, func_1259(4, 11), Global_35, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, -1, 0);
		task_combat_ped(0, Global_35, 0, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(Local_14.f_71[6]), iVar0);
		clear_sequence_task(&iVar0);
	}
	if (func_172(&(Local_14.f_71[4]), 0))
	{
		set_ped_accuracy(&(Local_14.f_71[4]), 1);
		set_ped_shoot_rate(&(Local_14.f_71[4]), 5);
		open_sequence_task(&iVar0);
		task_shoot_at_entity(0, &(iLocal_381[1]), -1, -687903391, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(Local_14.f_71[4]), iVar0);
		clear_sequence_task(&iVar0);
	}
	if (func_172(&(Local_14.f_71[5]), 0))
	{
		set_ped_accuracy(&(Local_14.f_71[5]), 1);
		set_ped_shoot_rate(&(Local_14.f_71[5]), 5);
		open_sequence_task(&iVar0);
		task_shoot_at_entity(0, &(iLocal_378[1]), -1, -687903391, 0);
		close_sequence_task(iVar0);
		task_perform_sequence(&(Local_14.f_71[5]), iVar0);
		clear_sequence_task(&iVar0);
	}
}

void func_1324()
{
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (func_172(&(Local_14.f_40[iVar0]), 0))
		{
			_0x9a77dfd295e29b09(&(Local_14.f_40[iVar0]), true);
		}
		iVar0++;
	}
}

void func_1325(char[4] cParam0)
{
	switch (func_1283(cParam0))
	{
		case 1:
			if (is_screen_faded_in())
			{
				iLocal_976 = 0;
				func_1321(iVar304);
				func_1306(cParam0, 2, 1);
				func_213(&uLocal_896);
				func_213(&uLocal_899);
			}
			break;
		case 2:
			if (iVar973 == 0 && iLocal_107 == 3)
			{
				func_1247(cParam0, 3);
			}
			if (!bVar461 && func_919(&uLocal_899) > 1f)
			{
				_play_sound_from_position("alarm_bell", func_1288(0), "GNG2_sounds", false, 0, true, 0);
				iLocal_464 = 1;
			}
			if ((_0xf94692eb9dc15d74(uVar451, 0) && !func_1372()) && is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false))
			{
				if (func_1258(cParam0) >= 2)
				{
					if (func_919(&uLocal_896) > 1f)
					{
						if (func_1802(cParam0, "GNG2_FTA_GA", 0))
						{
							iLocal_1133 = 0;
							func_1306(cParam0, 3, 1);
							if (func_207())
							{
								func_113(1);
							}
							_0x5ae0cb5f35f034fd(get_entity_coords(Global_35, true, false), 50f, 50f, 14f, 1f, "GANG2_BALLOON");
						}
					}
				}
				else
				{
					func_213(&uLocal_896);
					func_1887(cParam0);
					if (!bVar1130)
					{
						if (get_control_normal(0, 1915927219) > 0f || !func_26(&uLocal_1138))
						{
							func_213(&uLocal_1138);
						}
						if (func_919(&uLocal_1138) > 2f)
						{
							if (func_1802(cParam0, "GNG2_FTA_AB", 0))
							{
								iLocal_1133 = 1;
							}
						}
					}
				}
			}
			break;
		case 3:
			if (!bVar1130)
			{
				if (Global_36.f_2 < func_1329(cParam0, &Local_524) && !func_1372())
				{
					if (func_919(&uLocal_1138) > 2f)
					{
						if (func_1802(cParam0, "GNG2_FTA_AB", 0))
						{
							iLocal_1133 = 1;
						}
					}
				}
				else
				{
					func_213(&uLocal_1138);
				}
			}
			break;
	}
}

bool func_1326(bool bParam0)
{
	if (bParam0)
	{
		if (iVar788 >= 2)
		{
			return true;
		}
	}
	else if (iVar788 >= 3)
	{
		return true;
	}
	return false;
}

void func_1327()
{
	if (get_entity_height_above_ground(Global_35) < 10f || func_919(&uLocal_977) > 25f)
	{
		if (!bVar1143)
		{
			func_50(&(iLocal_315[6]));
			set_ped_sphere_defensive_area(&(iLocal_315[6]), 3234.512f, -542.5584f, 41.84192f, 3f, 0, false, 0);
			func_50(&(iLocal_315[8]));
			set_ped_sphere_defensive_area(&(iLocal_315[8]), 3208.418f, -568.0215f, 41.78804f, 3f, 0, false, 0);
			task_combat_ped(&(iLocal_315[6]), Global_35, 0, 0);
			task_combat_ped(&(iLocal_315[8]), Global_35, 0, 0);
			iLocal_1145 = 1;
		}
		else if (func_919(&uLocal_1142) > 5f && !bVar1144)
		{
			set_ped_accuracy(&(iLocal_315[6]), 100);
			set_ped_accuracy(&(iLocal_315[8]), 100);
			iLocal_1146 = 1;
		}
	}
	else
	{
		func_213(&uLocal_1142);
		if (bVar1143)
		{
			task_shoot_at_entity(&(iLocal_315[6]), &(iLocal_378[1]), -1, -1422700276, 0);
			task_shoot_at_entity(&(iLocal_315[8]), &(iLocal_381[1]), -1, -1422700276, 0);
			iLocal_1145 = 0;
		}
		if (bVar1144)
		{
			set_ped_accuracy(&(iLocal_315[6]), 1);
			set_ped_accuracy(&(iLocal_315[8]), 1);
			iLocal_1146 = 0;
		}
	}
}

void func_1328()
{
	iVar0 = iVar1130;
	switch (iVar1130)
	{
		case 0:
			if (_does_anim_scene_exist(iVar452))
			{
				if (_0x005e6f28dd7ed58d(iVar452, "player_zero"))
				{
					iLocal_1132 = 1;
				}
			}
			break;
		case 1:
			if (_does_anim_scene_exist(iVar453))
			{
				if (_0x005e6f28dd7ed58d(iVar452, "cs_balloonoperator"))
				{
					set_anim_scene_entity(iVar453, "player_zero", Global_35, 0);
					set_anim_scene_entity(iVar453, "cs_balloonoperator", &(iLocal_315[3]), 0);
					attach_anim_scene_to_entity(iVar453, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
					set_anim_scene_origin(iVar453, 0f, 0f, 0f, 0f, 0f, 0f, 2);
					start_anim_scene(iVar453);
					iLocal_1141 = func_1888(iVar1139);
					func_173();
					iLocal_1132 = 2;
				}
			}
			break;
		case 2:
			_0xdf7b5144e25cd3fe(iVar453, "pbl_operator_relaxes_stands_up");
			func_1889();
			if (func_1326(0))
			{
				clear_ped_tasks(Global_35, 1, 0);
				_set_anim_scene_playback_list_bool(iVar453, "pbl_operator_relaxes_stands_up", true);
				set_entity_no_collision_entity(&(iLocal_315[3]), &(iLocal_378[1]), false);
				iLocal_107 = 0;
				iLocal_1132 = 3;
			}
			break;
		case 3:
			if (_does_anim_scene_exist(iVar453))
			{
				if (_0x005e6f28dd7ed58d(iVar453, "cs_balloonoperator"))
				{
					attach_entity_to_entity(&(iLocal_315[3]), &(iLocal_378[1]), 0, -0.3f, -0.4f, 1.1f, 0f, 0f, -45f, false, false, false, false, 2, true, false, false);
					iLocal_1132 = 4;
				}
			}
			break;
		case 4:
			break;
	}
	if (iVar0 != iVar1130)
	{
	}
}

float func_1329(char[4] cParam0, char[4] cParam1)
{
	iVar0 = func_33(cParam0);
	if (iVar0 == 1 || iVar0 == 2)
	{
		return func_1890(cParam1, 0);
	}
	else if (iVar0 == 3)
	{
		return 70f;
	}
	else if ((iVar0 == 5 || iVar0 == 6) || iVar0 == 7)
	{
		return 55f;
	}
	return 80f;
}

void func_1330(char[4] cParam0)
{
	iVar0 = iVar788;
	switch (iVar788)
	{
		case 0:
			func_213(&uLocal_792);
			func_1891();
			StringCopy(&Local_795, "camera_treatments", 64);
			StringCopy(&(Local_795.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
			_0x6a4d224fc7643941(&Local_795);
			iLocal_791 = 1;
			break;
		case 1:
			if (!func_388(iLocal_115, 2))
			{
				end_srl();
				prefetch_srl("script@cme@GNG2_CME_1_LEAVING_PRISON");
				func_416(&iLocal_115, 2);
			}
			if (_0xdd0b7c5ae58f721d(&Local_795))
			{
				if (func_1283(cParam0) == 3 && !func_1372())
				{
					_0xb8b207c34285e978(&Local_795);
					func_11(&uLocal_294, 1, 1);
					func_1306(cParam0, 51, 1);
					func_213(&uLocal_896);
					func_213(&uLocal_792);
					iLocal_791 = 2;
				}
			}
			break;
		case 2:
			if (func_919(&uLocal_792) > 3f)
			{
				func_1892();
				set_player_control(player_id(), false, 0, false);
				_0xc351394b932a6a50(&(iLocal_378[1]));
				_0x5e3ccf03995388b5(650057691, 3543.8f, -711.9f, 75.1f);
				func_60(1);
				_0xbc016635d6a73b31("script@Story@GNG2@balloon_to_annesburg", "1_LEAVING_PRISON", 5);
				_0x172e9dd35858dcd7(&(iLocal_378[1]));
				start_playback_recorded_vehicle(&(iLocal_378[1]), 1, "gng2BallA", false);
				force_playback_recorded_vehicle_update(&(iLocal_378[1]), true);
				func_1396(&iLocal_115, 2);
				iLocal_791 = 3;
			}
			break;
		case 3:
			if (!func_388(iLocal_115, 2))
			{
				end_srl();
				prefetch_srl("script@cme@GNG2_CME_2_FLYING_AWAY");
				func_416(&iLocal_115, 2);
			}
			_0xa03a6812529ad9c8();
			iVar1 = _0xea113bf9b0c0c5d7("script@Story@GNG2@balloon_to_annesburg", "1_LEAVING_PRISON", 5);
			iVar2 = (iVar1 - func_214(&uLocal_792));
			if (_0xffe9c53deea3db0b(iVar2, 1707374276, 3349.7f, -268.2f, 93.3f, 1, 2147483647))
			{
				if (is_srl_loaded())
				{
					_0xa54d643d0773eb65("script@Story@GNG2@balloon_to_annesburg", "1_LEAVING_PRISON", 5);
					_0xbc016635d6a73b31("script@Story@GNG2@balloon_to_annesburg", "2_FLYING_AWAY", 5);
					stop_playback_recorded_vehicle(&(iLocal_378[1]));
					start_playback_recorded_vehicle(&(iLocal_378[1]), 2, "gng2BallB", false);
					force_playback_recorded_vehicle_update(&(iLocal_378[1]), true);
					_0x172e9dd35858dcd7(&(iLocal_378[1]));
					func_1396(&iLocal_115, 2);
					func_213(&uLocal_792);
					iLocal_791 = 4;
				}
			}
			break;
		case 4:
			if (!func_388(iLocal_115, 2))
			{
				end_srl();
				prefetch_srl("script@cme@GNG2_CME_3_ARRAVING");
				func_416(&iLocal_115, 2);
			}
			iVar1 = _0xea113bf9b0c0c5d7("script@Story@GNG2@balloon_to_annesburg", "2_FLYING_AWAY", 5);
			iVar2 = (iVar1 - func_214(&uLocal_792));
			if (_0xffe9c53deea3db0b(iVar2, -352182200, 3186.1f, 311.2f, 87.2f, 1, 2147483647))
			{
				if (is_srl_loaded())
				{
					_0xa54d643d0773eb65("script@Story@GNG2@balloon_to_annesburg", "2_FLYING_AWAY", 5);
					_0xbc016635d6a73b31("script@Story@GNG2@balloon_to_annesburg", "3_ARRAVING", 5);
					stop_playback_recorded_vehicle(&(iLocal_378[1]));
					start_playback_recorded_vehicle(&(iLocal_378[1]), 3, "gng2BallC", false);
					force_playback_recorded_vehicle_update(&(iLocal_378[1]), true);
					_0x172e9dd35858dcd7(&(iLocal_378[1]));
					func_1396(&iLocal_115, 2);
					func_213(&uLocal_792);
					iLocal_791 = 5;
				}
			}
			break;
		case 5:
			if (!func_388(iLocal_115, 2))
			{
				end_srl();
				func_99(cParam0, 33554432);
				func_416(&iLocal_115, 2);
			}
			iVar1 = _0xea113bf9b0c0c5d7("script@Story@GNG2@balloon_to_annesburg", "3_ARRAVING", 5);
			iVar2 = (iVar1 - func_214(&uLocal_792));
			if (_0xffe9c53deea3db0b(iVar2, 0, 3186.1f, 311.2f, 87.2f, 1, 2147483647))
			{
				stop_playback_recorded_vehicle(&(iLocal_378[1]));
				_0x0a5a4f1979abb40e(&Local_795);
				_0x798be43c9393632b(&Local_795);
				func_1396(&iLocal_115, 2);
				iLocal_791 = 6;
			}
			break;
	}
	if (iVar788 >= 2)
	{
		_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
	}
	if (iVar0 != iVar788)
	{
	}
}

struct<4> func_1331(int iParam0, int iParam1)
{
	func_856(iParam0, iParam1, &Var0);
	return Var0;
}

void func_1332()
{
	if ((does_entity_exist(&(iLocal_378[1])) && is_vehicle_driveable(&(iLocal_378[1]), false, false)) && does_entity_exist(&(iLocal_381[1])))
	{
		set_entity_velocity(&(iLocal_378[1]), 0f, 0f, 0f);
		set_entity_velocity(&(iLocal_381[1]), 0f, 0f, 0f);
	}
}

void func_1333(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 != 10)
	{
		iVar0 = func_440(iParam0, iVar0);
		if (iVar0 != 10)
		{
			if (func_172(&(iLocal_315[iVar0]), 0))
			{
				set_entity_invincible(&(iLocal_315[iVar0]), bParam1);
			}
		}
	}
}

void func_1334(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

int func_1335(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_1824(cParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_1592(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_1593(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_1246(cParam0, iParam1, 128);
		if (bParam4)
		{
			func_1246(cParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1893(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1824(cParam0, iParam1) && does_blip_exist(iVar0))
		{
			_blip_set_modifier(iVar0, -546708623);
			if (bParam5)
			{
				_blip_set_modifier(iVar0, 231194138);
			}
		}
		else
		{
			if (!does_blip_exist(iVar0))
			{
				iVar0 = _blip_add_for_entity(iParam3, iParam1);
			}
			_blip_set_modifier(iVar0, -546708623);
			if (bParam5)
			{
				_blip_set_modifier(iVar0, 231194138);
			}
		}
	}
	if (bVar1)
	{
		if (func_973(cParam0, iParam1, &iVar4))
		{
			func_1566(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1826(iVar3);
	}
	return iVar0;
}

void func_1336(int iParam0, int iParam1, bool bParam2)
{
	sVar0 = func_1352(iParam0);
	iVar1 = 0;
	if (bParam2)
	{
		iVar1 = (500 * iVar808);
	}
	if (iParam1 == 0)
	{
		open_sequence_task(&iVar2);
		if (iVar1 > 0)
		{
			task_pause(0, iVar1);
		}
		task_follow_waypoint_recording(0, sVar0, 0, 71321100, -1, 0, 1, -1);
		close_sequence_task(iVar2);
		task_perform_sequence(&(Local_825[iParam0]), iVar2);
		clear_sequence_task(&iVar2);
	}
	else if (iParam1 == 4)
	{
		if (iVar808 == 1)
		{
			set_ped_sphere_defensive_area(&(Local_825[iParam0]), 2827.41f, 932.02f, 47.54f, 2f, 0, false, 0);
		}
		else
		{
			set_ped_sphere_defensive_area(&(Local_825[iParam0]), 2827.57f, 923.9f, 47.82f, 2f, 0, false, 0);
		}
		remove_all_ped_weapons(&(Local_825[iParam0]), true, true);
		func_1860(&(Local_825[iParam0]), 379542007, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		set_entity_only_damaged_by_player(&(Local_825[iParam0]), true);
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				StringCopy(&cVar3, "gang2_Town", 24);
				break;
			case 2:
				StringCopy(&cVar3, "gang2_logs", 24);
				break;
			case 3:
				StringCopy(&cVar3, "gang2_ForestRoadA", 24);
				break;
			case 5:
				StringCopy(&cVar3, "gang2_ForestRoadB", 24);
				break;
			case 6:
				StringCopy(&cVar3, "gang2_Slope", 24);
				break;
			case 7:
				StringCopy(&cVar3, "gang2_Tracks", 24);
				break;
			case 8:
				StringCopy(&cVar3, "gang2_Final", 24);
				break;
		}
		cVar3 = { func_1894(cVar3, iParam0) };
		waypoint_recording_get_num_points(&cVar3, &iVar6);
		waypoint_recording_get_coord(&cVar3, (iVar6 - 1), &vVar7);
		waypoint_recording_get_closest_waypoint(sVar0, vVar7, &iVar10);
		iVar11 = iVar10 + 5;
		open_sequence_task(&iVar12);
		if (iVar1 > 0)
		{
			task_pause(0, iVar1);
		}
		task_follow_waypoint_recording(0, func_1895(&cVar3), 0, 19464, -1, 0, 1, -1);
		task_follow_waypoint_recording(0, sVar0, iVar11, 67126276, -1, 0, 1, -1);
		close_sequence_task(iVar12);
		task_perform_sequence(&(Local_825[iParam0]), iVar12);
		clear_sequence_task(&iVar12);
	}
}

void func_1337(char[4] cParam0)
{
	switch (func_1283(cParam0))
	{
		case 1:
			if (is_screen_faded_in())
			{
				if (func_1802(cParam0, "GNG2_SPC_BCMMT", 0))
				{
					func_213(&uLocal_896);
					func_1306(cParam0, 2, 1);
				}
			}
			break;
		case 2:
			if (!func_1896())
			{
				if (func_919(&uLocal_896) > 3f && get_ped_waypoint_progress(&(iLocal_315[1])) > 110)
				{
					if (func_1802(cParam0, "GNG2_PS_YELL1", 0))
					{
						func_1306(cParam0, 3, 1);
					}
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
		case 3:
			if (!func_1896())
			{
				if (func_919(&uLocal_896) > 1f)
				{
					if (func_1802(cParam0, "GNG2_SPC_ODRISC", 0))
					{
						func_1306(cParam0, 4, 1);
					}
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
		case 4:
			if (!func_1896())
			{
				if (func_919(&uLocal_896) > 5f || is_bullet_in_area(get_entity_coords(&(iLocal_315[3]), true, false), 5f, false))
				{
					if (func_1802(cParam0, "GNG2_SPC_PC", 0))
					{
						func_213(&uLocal_896);
						func_1306(cParam0, 5, 1);
					}
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
		case 5:
			if (!func_1896())
			{
				if (func_919(&uLocal_896) > 5f)
				{
					if (func_1802(cParam0, "GNG2_SPC_OD", 0))
					{
						func_213(&uLocal_1151);
						func_1306(cParam0, 6, 1);
					}
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
		case 6:
			func_1897(cParam0);
			if (func_1388(&(iLocal_315[1]), &(uLocal_815[5]), 1, 0))
			{
				func_213(&uLocal_896);
				func_1306(cParam0, 7, 1);
			}
			break;
		case 7:
			if (!func_1896())
			{
				if (func_919(&uLocal_896) > 1f)
				{
					if (func_1802(cParam0, "GNG2_PS_YELL2", 0))
					{
						func_213(&uLocal_1151);
						func_1306(cParam0, 8, 1);
					}
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
		case 8:
			func_1897(cParam0);
			break;
	}
}

void func_1338()
{
	if (bVar1055)
	{
		if (!func_26(&uLocal_1155))
		{
			func_213(&uLocal_1155);
		}
		else if (((func_919(&uLocal_1155) > 5f || get_control_normal(0, -771458680) > 0f) || get_control_normal(0, -1450761377) > 0f) || is_ped_shooting(Global_35))
		{
			set_player_simulate_aiming(player_id(), true);
			set_player_forced_aim(player_id(), false, 0, -1, false);
			iLocal_1057 = 0;
		}
	}
}

void func_1339()
{
	if (!func_26(&uLocal_1147))
	{
		func_213(&uLocal_1147);
	}
	if ((has_player_damaged_at_least_one_ped(player_id()) || func_1388(&(iLocal_315[1]), &(uLocal_815[0]), 1, 0)) || func_806() == 0)
	{
		func_213(&uLocal_1147);
		if (get_ped_config_flag(&(iLocal_315[1]), 138, true) == 1)
		{
			set_ped_config_flag(&(iLocal_315[1]), 138, false);
		}
		set_entity_invincible(&(iLocal_315[1]), true);
		set_entity_invincible(&(iLocal_315[2]), true);
		clear_player_has_damaged_at_least_one_ped(player_id());
	}
	if (get_ped_config_flag(&(iLocal_315[1]), 138, true) == 0)
	{
		if (func_919(&uLocal_1147) > 20f)
		{
			set_ped_config_flag(&(iLocal_315[1]), 138, true);
			set_entity_invincible(&(iLocal_315[1]), false);
		}
	}
}

void func_1340()
{
	func_1898();
	func_1899();
	func_1900();
	func_1901();
	func_1902();
}

void func_1341()
{
	if (_does_anim_scene_exist(iVar454))
	{
		if (_is_anim_scene_started(iVar454, false))
		{
			_0xdf7b5144e25cd3fe(iVar454, func_1903(iVar993));
			if (func_1857(iVar454, 100))
			{
				_set_anim_scene_playback_list_bool(iVar454, func_1903(iVar993), true);
				if (iVar993 != 0)
				{
					iLocal_995 = 0;
				}
				else
				{
					iLocal_995 = func_1904(iVar993);
				}
			}
		}
	}
}

bool func_1342()
{
	if (func_172(&(iLocal_315[1]), 1) && func_1388(&(iLocal_315[1]), &(uLocal_815[7]), 1, 0))
	{
		return true;
	}
	return false;
}

void func_1343(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == 1)
	{
		fParam2->f_1.f_25 = iParam0;
	}
	else if (iParam1 == 2)
	{
		fParam2->f_27.f_4 = iParam0;
	}
	else if (iParam1 == 3)
	{
		fParam2->f_32.f_4 = iParam0;
	}
	else if (iParam1 == 4)
	{
		fParam2->f_37.f_28 = iParam0;
	}
	else if (iParam1 == 5)
	{
		fParam2->f_66.f_40 = iParam0;
	}
	else if (iParam1 == 6)
	{
		fParam2->f_107.f_28 = iParam0;
	}
}

void func_1344()
{
	if (is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false))
	{
		_0x8886d83a430537fd(Global_35, 0);
	}
	if (is_entity_attached_to_entity(Global_35, &(iLocal_378[1])))
	{
		detach_entity(Global_35, true, false);
	}
	set_ped_config_flag(Global_35, 15, true);
	set_vehicle_is_considered_by_player(&(iLocal_378[1]), false);
}

void func_1345()
{
	func_1905(128);
}

float func_1346(float fParam0, float fParam1, float fParam2)
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

bool func_1347(char* sParam0)
{
	StringCopy(sParam0, "gng2_throwingrope_cam", 64);
	StringCopy(&(sParam0->f_8), "CHAINED_ORBIT_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
	if (_0xdd0b7c5ae58f721d(sParam0))
	{
		return true;
	}
	return false;
}

bool func_1348(char[4] cParam0)
{
	iVar0 = iVar1155;
	switch (iVar1155)
	{
		case 0:
			if (func_172(&(iLocal_315[3]), 0))
			{
				detach_entity(&(iLocal_315[3]), true, true);
				set_anim_scene_entity(iVar454, "cs_balloonoperator", &(iLocal_315[3]), 0);
				set_anim_scene_entity(iVar454, "hotairballoon01", &(iLocal_378[1]), 0);
				attach_anim_scene_to_entity(iVar454, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
				set_anim_scene_origin(iVar454, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				start_anim_scene(iVar454);
				set_entity_no_collision_entity(&(iLocal_315[3]), &(iLocal_378[1]), false);
				set_ped_can_ragdoll(&(iLocal_315[3]), true);
				set_ped_config_flag(&(iLocal_315[3]), 15, false);
				iLocal_1158 = 1;
			}
			break;
		case 1:
			if (has_anim_event_fired(&(iLocal_315[3]), -1932878549))
			{
				if (_does_anim_scene_exist(iVar453) && _is_anim_scene_started(iVar453, false))
				{
					_delete_anim_scene(iVar453);
				}
				_hide_ped_weapons(Global_35, 2, true);
				iLocal_386 = create_object(1023229711, Global_36 + Vector(50f, 0f, 0f), true, true, false, false, true);
				set_entity_collision(iVar383, false, false);
				set_anim_scene_entity(iVar455, "S_CS_COILEDROPE01X", iVar383, 0);
				set_anim_scene_entity(iVar455, "ARTHUR", Global_35, 0);
				set_anim_scene_entity(iVar455, "hotairballoon01", &(iLocal_378[1]), 0);
				attach_anim_scene_to_entity(iVar455, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"));
				set_anim_scene_origin(iVar455, 0f, 0f, 0f, 0f, 0f, 0f, 2);
				start_anim_scene(iVar455);
				iLocal_1158 = 2;
			}
			break;
		case 2:
			if (_is_anim_scene_finished(iVar454, false))
			{
				if (func_172(&(iLocal_315[3]), 0))
				{
					func_1373(&(iLocal_315[3]), 1, 0);
				}
				iLocal_1158 = 3;
			}
			break;
		case 3:
			func_1906();
			if (_is_anim_scene_started(iVar455, false) && _get_anim_scene_time(iVar455) > 13f)
			{
				if (!is_entity_on_screen(iVar383) || _0xb89fcff19dafff28(iVar455, "S_CS_COILEDROPE01X"))
				{
					delete_object(&iLocal_386);
					iLocal_1158 = 5;
				}
			}
			break;
		case 5:
			func_1354();
			if (_0xb89fcff19dafff28(iVar455, "ARTHUR"))
			{
				return true;
			}
			break;
	}
	if (iVar0 != iVar1155)
	{
	}
	return false;
}

void func_1349()
{
	_0xb8b207c34285e978(&Local_940);
	shake_gameplay_cam("WIND1_GNG2_SHAKE", 1f);
	Local_940.f_30 = 0.2f;
	Local_940.f_16 = &iLocal_378[1];
	_0xac77757c05de9e5a(&Local_940);
	_0x7e3f546acfe6c8d9(&(iLocal_381[1]));
	func_1907();
	iLocal_999 = 2;
}

void func_1350()
{
	if (!does_rope_exist(Local_524.f_136))
	{
		Local_524.f_136 = _add_rope_2(get_entity_coords(&(iLocal_378[1]), true, false) + vLocal_989, 0f, 1.571f, 0f, 7f, 0, true, 10, 0.008f);
		_0x7a54d82227a139db(&(Local_524.f_136), 1);
		_0xfb9153a54ac713e8(Local_524.f_136, 1);
		rope_force_length(Local_524.f_136, 7f);
		stop_rope_winding(Local_524.f_136);
		_0x522fa3f490e2f7ac(Local_524.f_136, 0, 1);
		_0x3900491c0d61ed4b(Local_524.f_136, 15f);
		_0xb7469cb9ac3c0fd4(Local_524.f_136, &(iLocal_378[1]), vLocal_989, 0, 0, 0);
		_0xbb3e9b073e66c3c9(Local_524.f_136, 1, 1, 0, 1);
	}
}

void func_1351(char[4] cParam0)
{
	func_812(func_33(cParam0), 0);
}

char* func_1352(int iParam0)
{
	sVar0 = "UNKNOWN";
	if (iParam0 == 0)
	{
		sVar0 = "gang2_AnnesburgToSadiePickupLeft";
	}
	else if (iParam0 == 1)
	{
		sVar0 = "gang2_AnnesburgToSadiePickupFarRight";
	}
	else if (iParam0 == 2)
	{
		sVar0 = "gang2_AnnesburgToSadiePickupMiddle";
	}
	else if (iParam0 == 3)
	{
		sVar0 = "gang2_AnnesburgToSadiePickupFarRight";
	}
	else if (iParam0 == 4)
	{
		sVar0 = "gang2_AnnesburgToSadiePickupLeft";
	}
	else if (iParam0 == 5)
	{
		sVar0 = "gang2_AnnesburgToSadiePickupMiddle";
	}
	return sVar0;
}

void func_1353()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_172(&(Local_825[iVar0]), 0))
		{
			set_ped_accuracy(&(Local_825[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_1354()
{
	if (does_rope_exist(Local_524.f_136))
	{
		vVar0 = { get_rope_vertex_coord(Local_524.f_136, 1) };
		vVar3 = { get_offset_from_entity_given_world_coords(&(iLocal_378[1]), vVar0) };
		if (vVar3.x > fVar987)
		{
			vVar6 = { get_offset_from_entity_in_world_coords(&(iLocal_378[1]), fVar987, vVar3.y, (vVar3.z - 0.3f)) };
			_0xe54bf2ce6c7d23a9(Local_524.f_136, 1, vVar6);
		}
	}
}

void func_1355(char[4] cParam0)
{
	switch (func_1283(cParam0))
	{
		case 1:
			if (!func_1372())
			{
				if (func_919(&uLocal_899) > 4f || func_1261(Global_35, func_1419(16, 5, &Local_524), 1) < 100f)
				{
					if (func_1802(cParam0, "GNG2_SCR_BG", 0))
					{
						func_1306(cParam0, 2, 1);
					}
				}
			}
			break;
		case 2:
			if (func_1908() && !func_1372())
			{
				if (!func_1361() && func_1909() > 5f)
				{
					iVar0 = func_1910();
					if (func_214(&uLocal_896) > 2000)
					{
						if (iVar0 == 2)
						{
							sVar1 = "GNG2_SCR_HA";
						}
						else if (iVar0 == 1)
						{
							sVar1 = "GNG2_SCR_LA";
						}
						else if (iVar0 == 5)
						{
						}
						else if (iVar0 == 4)
						{
							sVar1 = "GNG2_SCR_CORRCT";
						}
						if (func_1802(cParam0, sVar1, 0))
						{
							func_213(&uLocal_896);
						}
					}
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			if (func_1258(cParam0) == 1)
			{
				func_1306(cParam0, 3, 1);
			}
			break;
		case 3:
			if (!func_1372())
			{
				if (func_1802(cParam0, "GNG2_SCR_PR", 0))
				{
					func_1306(cParam0, 4, 1);
				}
			}
			break;
		case 4:
			if (!func_1372() && bVar1156)
			{
				if (func_1802(cParam0, "GNG2_SCR_AS", 0))
				{
					func_1306(cParam0, 51, 1);
				}
			}
			break;
	}
}

int func_1356(int iParam0, float fParam1)
{
	if (iParam0 == 1)
	{
		return fParam1->f_1.f_25;
	}
	else if (iParam0 == 2)
	{
		return fParam1->f_27.f_4;
	}
	else if (iParam0 == 3)
	{
		return fParam1->f_32.f_4;
	}
	else if (iParam0 == 4)
	{
		return fParam1->f_37.f_28;
	}
	else if (iParam0 == 5)
	{
		return fParam1->f_66.f_40;
	}
	else if (iParam0 == 6)
	{
		return fParam1->f_107.f_28;
	}
	return -1;
}

bool func_1357()
{
	if (has_entity_collided_with_anything(&(iLocal_378[1])))
	{
		fVar0 = _0x6d58167f62238284(&(iLocal_378[1]));
		if (fVar0 > 100f)
		{
			return true;
		}
	}
	return false;
}

void func_1358()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_172(&(Local_825[iVar0]), 0))
		{
			set_ped_accuracy(&(Local_825[iVar0]), 50);
		}
		iVar0++;
	}
}

void func_1359(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1) || is_entity_dead(iParam1))
	{
		return;
	}
	func_1911(iParam1, bParam2);
	if (bParam3 && func_973(cParam0, iParam1, &uVar0))
	{
		if (bParam2)
		{
			if (!func_1912(cParam0, iParam1, 32))
			{
				func_1246(cParam0, iParam1, 32);
			}
		}
		else if (func_1912(cParam0, iParam1, 32))
		{
			func_1264(cParam0, iParam1, 32);
		}
	}
}

void func_1360()
{
	if (func_1097(&(iLocal_315[1]), 0, 1, 0) != -1569615261)
	{
		if (!bVar1158)
		{
			if (func_1909() < 5f && !func_1913())
			{
				waypoint_playback_stop_aiming_or_shooting(&(iLocal_315[1]));
				set_current_ped_weapon(&(iLocal_315[1]), -1569615261, false, 0, false, false);
				set_current_ped_weapon(&(iLocal_315[1]), -1569615261, false, 1, false, false);
				task_swap_weapon(&(iLocal_315[1]), 0, 1, 0, 0);
				iLocal_1160 = 1;
				func_213(&uLocal_1161);
			}
		}
		else if (func_919(&uLocal_1161) > 3f)
		{
			iLocal_1160 = 0;
		}
	}
}

bool func_1361()
{
	iVar0 = func_1910();
	return iVar0 == 6;
}

bool func_1362()
{
	StringCopy(&Local_909, "gng2_climbingrope_cam", 64);
	StringCopy(&(Local_909.f_8), "CHAINED_ORBIT_REQUEST", 64);
	_0x6a4d224fc7643941(&Local_909);
	if (_0xdd0b7c5ae58f721d(&Local_909))
	{
		return true;
	}
	return false;
}

bool func_1363()
{
	if (!bVar1002)
	{
		_0x2b6529c54d29037a(sVar1003);
		iLocal_1004 = 1;
	}
	else if (_0x2c04d89a0fb4e244(sVar1003))
	{
		return true;
	}
	return false;
}

bool func_1364()
{
	if (!bVar1157 && _is_anim_scene_started(iVar457, false))
	{
		if (has_anim_event_fired(&(iLocal_315[1]), -1315259398))
		{
			if (does_rope_exist(Local_524.f_136))
			{
				delete_rope(&(Local_524.f_136));
			}
			Local_524.f_136 = _add_rope_2(get_entity_coords(&(iLocal_378[1]), true, false) + Vector(0.8f, 0f, -0.8f), 180f, 180f, 0f, 10f, 0, true, 6, -1f);
			_0x7a54d82227a139db(&(Local_524.f_136), 1);
			rope_force_length(Local_524.f_136, 5f);
			_0xfb9153a54ac713e8(Local_524.f_136, 1);
			start_rope_winding(Local_524.f_136);
			_0x522fa3f490e2f7ac(Local_524.f_136, 0, 1);
			_0x3900491c0d61ed4b(Local_524.f_136, 10f);
			_0xc64e7a62632ad2fe(Local_524.f_136, &(iLocal_378[1]), -0.8f, 0f, 0.8f, func_798(), 0, 0);
			_0xc64e7a62632ad2fe(Local_524.f_136, &(iLocal_315[1]), 0f, 0f, 0f, "SKEL_R_FINGER02", 1, 0);
			_0xc64e7a62632ad2fe(Local_524.f_136, &(iLocal_315[1]), 0f, 0f, 0f, "SKEL_R_FINGER43", 2, 0);
			_0xc64e7a62632ad2fe(Local_524.f_136, &(iLocal_315[1]), 0f, 0f, 0f, "SKEL_L_FINGER02", 3, 0);
			_0xc64e7a62632ad2fe(Local_524.f_136, &(iLocal_315[1]), 0f, 0f, 0f, "SKEL_L_FINGER43", 4, 0);
			_0xc64e7a62632ad2fe(Local_524.f_136, &(iLocal_315[1]), 0f, -0.1f, 0f, "CP_L_THIGH", 5, 0);
			_0xc64e7a62632ad2fe(Local_524.f_136, &(iLocal_315[1]), 0f, 0f, 0f, "SKEL_R_Foot", 6, 0);
			iLocal_1159 = 1;
		}
	}
	if (func_1857(iVar457, 100) || _0x005e6f28dd7ed58d(iVar457, "CS_MrsAdler"))
	{
		return true;
	}
	return false;
}

void func_1365()
{
	func_1914(128);
}

void func_1366()
{
	func_1374(1);
	if (!does_entity_exist(iVar384))
	{
		iLocal_386 = create_object(-526947582, Global_36 + Vector(50f, 0f, 0f), true, true, false, false, true);
	}
	set_entity_collision(iVar384, false, false);
	set_entity_dynamic(iVar384, false);
	vVar0 = { get_world_position_of_entity_bone(&(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy")) };
	Local_1012.f_1 = -455129387;
	Local_1012 = uVar1007;
	task_move_network_advanced_by_name_with_init_params_attached(Global_35, sVar1003, &Local_1012, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"), vVar0, get_entity_rotation(&(iLocal_378[1]), 2), 2, 0f, 0, 0, 17536, 0, 1);
	Local_1012 = uVar1008;
	task_move_network_advanced_by_name_with_init_params_attached(&(iLocal_315[1]), sVar1003, &Local_1012, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"), vVar0, get_entity_rotation(&(iLocal_378[1]), 2), 2, 0f, 0, 0, 17536, 0, 1);
	Local_1012 = uVar1009;
	task_move_network_advanced_by_name_with_init_params_attached(iVar384, sVar1003, &Local_1012, &(iLocal_378[1]), get_entity_bone_index_by_name(&(iLocal_378[1]), "chassis_dummy"), vVar0, get_entity_rotation(&(iLocal_378[1]), 2), 2, 0f, 0, 0, 17536, 0, 1);
}

void func_1367()
{
	if (!bVar1051)
	{
		if (func_1362())
		{
			if (_0x927b810e43e99932(&Local_940))
			{
				_0x0a5a4f1979abb40e(&Local_940);
			}
			set_entity_collision(&(iLocal_381[1]), false, false);
			_0xb8b207c34285e978(&Local_909);
			_0xac77757c05de9e5a(&Local_909);
			if (is_gameplay_cam_shaking())
			{
				stop_gameplay_cam_shaking(true);
			}
			shake_gameplay_cam("WIND_GNG2_SHAKE", 1f);
			shake_gameplay_cam("GNG2_CORRECTOR_SHAKE", 1f);
			iLocal_1053 = 1;
		}
	}
	else
	{
		vVar0 = { get_ped_bone_coords(&(iLocal_315[1]), 56200, 0f, 0f, 0f) };
		fVar3 = (Global_36.f_2 - vVar0.z);
		if (func_1915("PULLING"))
		{
			fVar4 = 0f;
			fVar5 = (5.1f - 1.65f);
			if (fVar3 > 5.1f)
			{
				fVar4 = 0f;
			}
			else if (fVar3 < 1.65f)
			{
				fVar4 = 1f;
			}
			else
			{
				fVar3 = (fVar3 - 1.65f);
				fVar4 = (1f - (fVar3 / fVar5));
			}
			fLocal_894 = fVar4;
		}
		if (fVar892 > 1f)
		{
			fLocal_894 = 1f;
		}
		else if (fVar892 < 0f)
		{
			fLocal_894 = 0f;
		}
		Local_909.f_30 = fVar892;
		shake_gameplay_cam("GNG2_MINIGAME_SHAKE", Local_909.f_30);
		_0xac77757c05de9e5a(&Local_909);
	}
}

void func_1368(char[4] cParam0)
{
	switch (func_1283(cParam0))
	{
		case 1:
			if (func_1915("PULLING") && !func_1844("GNG2_SCR_AS"))
			{
				func_1247(cParam0, 13);
				func_1916();
				func_483(&uLocal_896, 5f);
				func_1306(cParam0, 2, 1);
			}
			break;
		case 2:
			if (!func_1372() && fVar891 < 0.91f)
			{
				if (func_1917())
				{
					if (func_919(&uLocal_896) > 1f)
					{
						if (func_1802(cParam0, "GNG2_IG10_FAIL", 0))
						{
							func_213(&uLocal_896);
							func_1306(cParam0, 3, 1);
						}
					}
				}
				else if (func_919(&uLocal_896) > 6f)
				{
					func_1802(cParam0, "GNG2_IG10_PLLUP", 0);
					func_213(&uLocal_896);
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
		case 3:
			if (!func_1372())
			{
				iLocal_1051 = 1;
				if (func_1371())
				{
					if (func_1802(cParam0, "GNG2_IG10_SCRM", 0))
					{
						func_213(&uLocal_896);
						func_1306(cParam0, 4, 1);
					}
				}
			}
			break;
		case 4:
			if (!func_1372() || func_919(&uLocal_896) > 1f)
			{
				func_1802(cParam0, "GNG2_IG10_OHSH", 0);
				func_213(&uLocal_896);
				func_1306(cParam0, 51, 1);
			}
			break;
	}
}

void func_1369()
{
	if (func_1915("INTRO"))
	{
		if (func_1918())
		{
			request_task_move_network_state_transition(Global_35, "Pulling");
			request_task_move_network_state_transition(&(iLocal_315[1]), "Pulling");
			request_task_move_network_state_transition(iVar384, "Pulling");
		}
	}
	else if (func_1915("PULLING"))
	{
		fVar0 = 0f;
		if (func_1919())
		{
			fVar0 = 1f;
		}
		if (func_1820(Global_35, 76834332))
		{
			set_task_move_network_signal_float(Global_35, "Player_input", fVar0);
			set_task_move_network_signal_float(&(iLocal_315[1]), "Player_input", fVar0);
			set_task_move_network_signal_float(iVar384, "Player_input", fVar0);
		}
		if (func_1918())
		{
			if (bVar1049)
			{
				request_task_move_network_state_transition(Global_35, "Fail");
				request_task_move_network_state_transition(&(iLocal_315[1]), "Fail");
				request_task_move_network_state_transition(iVar384, "Fail");
				if (func_10(iVar1045))
				{
					func_11(&iLocal_1047, 1, 1);
				}
				if (func_10(iVar1044))
				{
					func_11(&iLocal_1046, 1, 1);
				}
			}
		}
	}
}

bool func_1370()
{
	if (has_anim_event_fired(Global_35, -120680098))
	{
		return true;
	}
	return false;
}

bool func_1371()
{
	if (func_1915("FAIL"))
	{
		return true;
	}
	return false;
}

bool func_1372()
{
	return func_1920(1);
}

void func_1373(int iParam0, bool bParam1, bool bParam2)
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

void func_1374(bool bParam0)
{
	if (bParam0)
	{
		set_entity_collision(Global_35, false, false);
		set_entity_dynamic(Global_35, false);
		set_ped_leg_ik_mode(Global_35, 0);
		set_ped_gravity(Global_35, false);
		set_entity_collision(&(iLocal_315[1]), false, false);
		set_entity_dynamic(&(iLocal_315[1]), false);
		set_ped_leg_ik_mode(&(iLocal_315[1]), 0);
		set_ped_gravity(&(iLocal_315[1]), false);
	}
	else
	{
		set_entity_collision(Global_35, true, false);
		set_entity_dynamic(Global_35, true);
		set_ped_leg_ik_mode(Global_35, 2);
		set_ped_gravity(Global_35, true);
		set_entity_collision(&(iLocal_315[1]), true, false);
		set_entity_dynamic(&(iLocal_315[1]), true);
		set_ped_leg_ik_mode(&(iLocal_315[1]), 1);
		set_ped_gravity(&(iLocal_315[1]), true);
	}
}

void func_1375(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_1921(iVar0, bParam0);
		iVar0++;
	}
}

void func_1376()
{
	func_1547(uLocal_487[5], 2462.33f, 106.192f, 45.12466f, 0f, 0f, 0f, 6.666454f, 9.052572f, 2.5f, "VOLUME_SHOOTOUT_CLOSE_LEFT");
	func_1547(uLocal_487[6], 2441.087f, 102.3391f, 45.34183f, 0f, 0f, 0f, 11.00396f, 26.04275f, 3.942001f, "VOLUME_SHOOTOUT_FAR_LEFT");
	func_1547(uLocal_487[9], 2430.14f, 100.0338f, 45.34183f, 0f, 0f, 9.999998f, 8.2092f, 19.07394f, 4.739532f, "VOLUME_SHOOTOUT_CENTRE_RETREAT");
	func_1547(uLocal_487[10], 2421.213f, 92.522f, 45.19751f, 0f, 0f, -53.86594f, 25.96957f, 11.11949f, 3.208032f, "VOLUME_SHOOTOUT_FAR_RIGHT");
	func_1544(uLocal_487[18], 2491.446f, 105.7688f, 44.01974f, 0f, 0f, -6.984047f, 14.01618f, 2.200989f, 3.535528f, "VOLUME_BASKET_TRAIL");
	func_1544(uLocal_487[11], 2441.306f, 92.21f, 45.12295f, 0f, 0f, 0f, 3f, 2.5f, 3f, "VOL_COMBAT_LEFT_ROCKS");
	func_1544(uLocal_487[12], 2442.791f, 97.264f, 45.8764f, 0f, 0f, 0f, 3f, 2f, 3f, "VOL_COMBAT_LEFT_TREE");
	func_1544(uLocal_487[13], 2436.949f, 107.8631f, 45.42466f, 0f, 0f, 0f, 4f, 3f, 3f, "VOL_COMBAT_RIGHT_STUMP");
	func_1544(uLocal_487[14], 2444.561f, 112.5077f, 44.99034f, 0f, 0f, 0f, 3f, 3f, 3f, "VOL_COMBAT_RIGHT_TREE");
	func_1544(uLocal_487[15], 2431.823f, 95.6413f, 46.65014f, 0f, 0f, 0f, 3f, 3f, 3f, "VOL_COMBAT_DEAD_MIDDLE_TREE");
	func_1544(uLocal_487[16], 2431.207f, 105.7793f, 45.21449f, 0f, 0f, 0f, 3f, 2f, 3f, "VOL_COMBAT_REAR_RIGHT_TREE");
	func_1544(uLocal_487[17], 2419.595f, 111.2705f, 47.29268f, 0f, 0f, 0f, 4f, 4f, 3f, "VOL_COMBAT_FAR_BACK_RIGHT_TREE");
}

void func_1377()
{
	if (!func_459(&uLocal_521))
	{
		uLocal_521 = _0xbd3324281e8b9933(&(uLocal_487[18]), 1, -1, 0);
	}
	if (!func_459(&uLocal_522))
	{
		uLocal_522 = _0xfa50f79257745e74(2431.5f, 70.94f, 43.48f, 3f, 1, 12, 0);
	}
	func_1250(&uLocal_516, 2467.27f, 99.62f, 44.49f, 8f, 1, 36, 0);
	func_1250(&uLocal_517, 2441.3f, 105.11f, 44.22f, 3f, 1, 36, 0);
	func_1250(&uLocal_515, 2544.21f, 126.66f, 43.23f, 3f, 1, 36, 0);
	func_1250(&uLocal_519, 2452.15f, 106.32f, 44.37f, 8f, 1, 36, 0);
	func_1250(&uLocal_518, 2479.85f, 98.28f, 44.47f, 3f, 1, 36, 0);
	func_1250(&uLocal_520, 2485.59f, 99.95f, 44.15f, 2f, 1, 36, 0);
}

void func_1378(char[4] cParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	func_1922(&(cParam0->f_7375), iParam1, iParam2, sParam3, iParam4, iParam5);
}

void func_1379()
{
	if (func_172(&(iLocal_315[1]), 0))
	{
		iVar1 = iVar1164;
		switch (iVar1164)
		{
			case 0:
				open_sequence_task(&iVar0);
				task_go_to_coord_while_aiming_at_entity(0, func_1259(0, 0), &(Local_14.f_3[0]), 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
				task_combat_hated_targets(0, -1f);
				close_sequence_task(iVar0);
				task_perform_sequence(&(iLocal_315[1]), iVar0);
				clear_sequence_task(&iVar0);
				func_1923(&(iLocal_315[1]), func_1259(0, 0), 2f, 1, 0);
				iLocal_1166 = 1;
				break;
			case 1:
				if (func_815(&(Local_14.f_65), 1))
				{
					if (((!func_172(&(Local_14.f_67[0]), 0) || is_ped_shooting(&(Local_14.f_67[0]))) || is_entity_on_screen(&(Local_14.f_67[0]))) || func_919(&uLocal_477) > 2f)
					{
						func_213(&uLocal_477);
						func_1923(&(iLocal_315[1]), func_1259(0, 2), 2f, 1, 0);
						if (func_172(&(Local_14.f_55[0]), 0))
						{
							_0xfd6943b6df77e449(&(Local_14.f_55[0]), false);
						}
						if (func_172(&(Local_14.f_55[1]), 0))
						{
							_0xfd6943b6df77e449(&(Local_14.f_55[1]), false);
						}
						iLocal_1166 = 3;
					}
				}
				else
				{
					func_213(&uLocal_477);
				}
				break;
			case 3:
				if (func_815(&(Local_14.f_25), 1))
				{
					if (func_1924(&(Local_14.f_27)) == 0 && func_1924(&(Local_14.f_67)) == 0)
					{
						func_1925(1);
						iLocal_1166 = 5;
					}
					else if (func_1924(&(Local_14.f_67)) == 0)
					{
						if (func_919(&uLocal_477) > 2f)
						{
							func_1923(&(iLocal_315[1]), func_1259(0, 4), 2f, 0, 0);
							func_213(&uLocal_477);
							iLocal_1166 = 4;
						}
					}
					else
					{
						func_213(&uLocal_477);
					}
				}
				else
				{
					func_213(&uLocal_477);
				}
				break;
			case 4:
				if (func_815(&(Local_14.f_58), 1) && (func_1261(&(iLocal_315[1]), func_1259(0, 4), 1) < 4f || func_919(&(Local_257[0]->f_2)) > 10f))
				{
					if (func_919(&uLocal_477) > 5f)
					{
						func_1925(1);
						func_213(&uLocal_477);
						iLocal_1166 = 5;
					}
				}
				else
				{
					func_213(&uLocal_477);
				}
				break;
			case 5:
				func_1925(0);
				if (func_1926())
				{
					if (func_919(&uLocal_477) > 2f)
					{
						func_1923(&(iLocal_315[1]), func_1259(0, 5), 2f, 1, 0);
						iLocal_1166 = 6;
					}
				}
				else
				{
					func_213(&uLocal_477);
				}
				break;
			case 6:
				if (!is_ped_in_cover(&(iLocal_315[1]), 0, 0) && func_1261(Global_35, func_1259(0, 5), 0) < 2f)
				{
					func_1923(&(iLocal_315[1]), func_1259(0, 6), 2f, 1, 0);
					iLocal_1166 = 7;
				}
				break;
			case 7:
				if (!is_ped_in_cover(&(iLocal_315[1]), 0, 0) && func_1261(Global_35, func_1259(0, 6), 0) < 2f)
				{
					func_1923(&(iLocal_315[1]), func_1259(0, 5), 2f, 1, 0);
					iLocal_1166 = 6;
				}
				break;
			case 8:
				func_50(&(iLocal_315[1]));
				func_1927();
				iLocal_1166 = 9;
				break;
			case 9:
				if (func_1844("GNG2_PS_SQ3D"))
				{
					task_clear_look_at(&(iLocal_315[1]));
					task_turn_ped_to_face_entity(&(iLocal_315[1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
					task_look_at_entity(&(iLocal_315[1]), Global_35, -1, 0, 51, 0);
					func_213(&uLocal_477);
					iLocal_1166 = 10;
				}
				else
				{
					func_213(&uLocal_477);
				}
				break;
			case 10:
				if (func_1261(Global_35, 2440.56f, 102.24f, 44.35f, 1) < 20f || func_1261(Global_35, 2459.5f, 102.56f, 44.35f, 1) < 12f)
				{
					if (!func_1372())
					{
						if (func_909(Global_35, &(iLocal_315[1]), 1, 1) < 10f)
						{
							func_213(&uLocal_477);
							iLocal_1166 = 12;
						}
						else if (func_919(&uLocal_477) > 5f)
						{
							clear_ped_tasks(&(iLocal_315[1]), 1, 0);
							task_go_to_entity(&(iLocal_315[1]), Global_35, -1, 5f, 1f, 2f, 0);
							func_213(&uLocal_477);
							iLocal_1166 = 11;
						}
					}
				}
				break;
			case 11:
				if (func_909(Global_35, &(iLocal_315[1]), 1, 1) < 7f)
				{
					task_turn_ped_to_face_entity(&(iLocal_315[1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_213(&uLocal_477);
					iLocal_1166 = 12;
				}
				else if (func_1261(Global_35, 2440.56f, 102.24f, 44.35f, 1) > 20f && func_1261(Global_35, 2459.5f, 102.56f, 44.35f, 1) > 12f)
				{
					if (func_919(&uLocal_477) > 5f)
					{
						task_turn_ped_to_face_entity(&(iLocal_315[1]), Global_35, -1, -1082130432, -1082130432, -1082130432);
						func_213(&uLocal_477);
						iLocal_1166 = 12;
					}
				}
				break;
			case 12:
				break;
		}
		if (iVar1 != iVar1164)
		{
		}
	}
}

void func_1380()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_172(&(Local_14.f_3[iVar0]), 2))
		{
			if (is_ped_human(&(Local_14.f_3[iVar0])))
			{
				iVar1 = Local_116[iVar0]->f_1;
				switch (Local_116[iVar0]->f_1)
				{
					case 0:
						if (is_ped_on_mount(&(Local_14.f_3[iVar0])))
						{
							func_1432(iVar0, 0);
							Local_116[iVar0]->f_1 = 2;
						}
						break;
					case 2:
						if (is_ped_on_mount(&(Local_14.f_3[iVar0])))
						{
							iVar3 = get_mount(&(Local_14.f_3[iVar0]));
							if (func_172(iVar3, 0) && is_entity_in_water(iVar3))
							{
								set_ped_max_move_blend_ratio(iVar3, 1.5f);
							}
						}
						if (func_1261(&(Local_14.f_3[iVar0]), func_1928(iVar0), 0) < 2f)
						{
							func_213(&(Local_116[iVar0]->f_2));
							Local_116[iVar0]->f_1 = 3;
						}
						break;
					case 3:
						if (func_1929(iVar0))
						{
							func_1930(iVar0);
							Local_116[iVar0]->f_1 = 4;
						}
						break;
					case 4:
						if (iVar1164 >= 4)
						{
							func_1923(&(Local_14.f_3[iVar0]), 2486.52f, 100.69f, 44.04f, 7f, 0, 0);
							set_ped_accuracy(&(Local_14.f_3[iVar0]), 60);
							set_ped_config_flag(&(Local_14.f_3[iVar0]), 354, true);
							Local_116[iVar0]->f_1 = 5;
						}
						break;
					case 5:
						if (iVar1164 >= 5)
						{
							func_1923(&(Local_14.f_3[iVar0]), 2463.91f, 96.18f, 44.75f, 12f, 0, 0);
							task_combat_ped(&(Local_14.f_3[iVar0]), Global_35, 0, 0);
							set_ped_accuracy(&(Local_14.f_3[iVar0]), 80);
							Local_116[iVar0]->f_1 = 6;
						}
						break;
					case 7:
						_task_flee_from_ped(&(Local_14.f_3[iVar0]), &(iLocal_315[1]), 2299f, 100.7f, 49.07f, 200f, -1, 0, 1077936128, 0);
						Local_116[iVar0]->f_1 = 8;
						break;
					case 8:
						if (func_909(&(Local_14.f_3[iVar0]), &(iLocal_315[1]), 1, 1) > 80f)
						{
							func_165(Local_14.f_3[iVar0], 1, 0, 1);
						}
						break;
				}
				if (iVar1 != Local_116[iVar0]->f_1)
				{
				}
			}
			else if (iVar0 >= 1)
			{
				iVar2 = (iVar0 - 1);
				if (_is_mount_seat_free(&(Local_14.f_3[iVar0]), -1) && !is_ped_fleeing(&(Local_14.f_3[iVar0])))
				{
					if (!func_172(&(Local_14.f_3[iVar2]), 0) || func_909(&(Local_14.f_3[iVar0]), &(Local_14.f_3[iVar2]), 1, 1) > 1.4f)
					{
						if (func_1931() == 1)
						{
							_task_smart_flee_style_ped(&(Local_14.f_3[iVar0]), Global_35, 2, 0, 100f, -1, 0);
						}
						else
						{
							_task_smart_flee_style_ped(&(Local_14.f_3[iVar0]), &(Local_14.f_3[iVar2]), 4, 0, 100f, -1, 0);
						}
						set_ped_keep_task(&(Local_14.f_3[iVar0]), true);
						set_ped_as_no_longer_needed(Local_14.f_3[iVar0]);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1381()
{
	bVar3 = func_1932();
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_172(&(Local_14.f_86[iVar0]), 2))
		{
			if (is_ped_human(&(Local_14.f_86[iVar0])))
			{
				iVar1 = Local_157[iVar0]->f_1;
				switch (Local_157[iVar0]->f_1)
				{
					case 0:
						if (is_ped_on_mount(&(Local_14.f_86[iVar0])))
						{
							func_1933(iVar0);
							Local_157[iVar0]->f_1 = 1;
						}
						break;
					case 1:
						if (func_1924(&(Local_14.f_3)) <= 1)
						{
							func_1934(iVar0);
							Local_157[iVar0]->f_1 = 2;
						}
						break;
					case 2:
						if (is_ped_on_mount(&(Local_14.f_86[iVar0])))
						{
							if (bVar3)
							{
								if (func_919(&(Local_157[iVar0]->f_2)) > (1.5f * IntToFloat(iVar0)))
								{
									func_1935(iVar0);
									Local_157[iVar0]->f_1 = 3;
								}
							}
							else
							{
								func_213(&(Local_157[iVar0]->f_2));
							}
						}
						else if (func_1936(iVar0))
						{
							Local_157[iVar0]->f_1 = 7;
						}
						break;
					case 3:
						if (func_1261(&(Local_14.f_86[iVar0]), func_1937(iVar0), 0) < 2f)
						{
							if (func_1938(iVar0))
							{
								func_1939(iVar0);
								Local_157[iVar0]->f_1 = 4;
							}
						}
						else
						{
							func_213(&(Local_157[iVar0]->f_2));
						}
						break;
					case 4:
						if (iVar1164 >= 4)
						{
							func_1923(&(Local_14.f_86[iVar0]), 2486.52f, 100.69f, 44.04f, 7f, 0, 0);
							set_ped_accuracy(&(Local_14.f_86[iVar0]), 60);
							set_ped_config_flag(&(Local_14.f_86[iVar0]), 354, true);
							Local_157[iVar0]->f_1 = 5;
						}
						break;
					case 5:
						if (iVar1164 >= 5)
						{
							func_1923(&(Local_14.f_86[iVar0]), 2463.91f, 96.18f, 44.75f, 12f, 0, 0);
							task_combat_ped(&(Local_14.f_86[iVar0]), Global_35, 0, 0);
							set_ped_accuracy(&(Local_14.f_86[iVar0]), 80);
							Local_157[iVar0]->f_1 = 6;
						}
						break;
					case 7:
						_task_flee_from_ped(&(Local_14.f_86[iVar0]), &(iLocal_315[1]), 2299f, 100.7f, 49.07f, 200f, -1, 0, 1077936128, 0);
						Local_157[iVar0]->f_1 = 8;
						break;
					case 8:
						if (func_909(&(Local_14.f_86[iVar0]), &(iLocal_315[1]), 1, 1) > 70f)
						{
							func_165(Local_14.f_86[iVar0], 1, 0, 1);
						}
						break;
				}
				if (iVar1 != Local_157[iVar0]->f_1)
				{
				}
			}
			else if (iVar0 >= 1)
			{
				iVar2 = (iVar0 - 1);
				if (_is_mount_seat_free(&(Local_14.f_86[iVar0]), -1) && !is_ped_fleeing(&(Local_14.f_86[iVar0])))
				{
					if (!func_172(&(Local_14.f_86[iVar2]), 0) || func_909(&(Local_14.f_86[iVar0]), &(Local_14.f_86[iVar2]), 1, 1) > 1.4f)
					{
						if (func_1931() == 1)
						{
							_task_smart_flee_style_ped(&(Local_14.f_86[iVar0]), Global_35, 2, 0, 100f, -1, 0);
						}
						else
						{
							_task_smart_flee_style_ped(&(Local_14.f_86[iVar0]), &(Local_14.f_86[iVar2]), 4, 0, 100f, -1, 0);
						}
						set_ped_keep_task(&(Local_14.f_86[iVar0]), true);
						set_ped_as_no_longer_needed(Local_14.f_86[iVar0]);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1382()
{
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_172(&(Local_14.f_55[iVar0]), 2))
		{
			iVar1 = Local_178[iVar0]->f_1;
			if (Local_178[iVar0]->f_1 <= 3)
			{
				if (func_815(&(Local_14.f_65), 1))
				{
					if (func_919(&(Local_178[iVar0]->f_2)) > 3f)
					{
						Local_178[iVar0]->f_1 = 7;
					}
				}
				else
				{
					func_213(&(Local_178[iVar0]->f_2));
				}
			}
			switch (Local_178[iVar0]->f_1)
			{
				case 0:
					func_1940(iVar0);
					Local_178[iVar0]->f_1 = 2;
					break;
				case 2:
					if (func_815(&(Local_14.f_65), 1))
					{
						if (func_919(&(Local_178[iVar0]->f_2)) > IntToFloat((3 + iVar0 * 3)))
						{
							Local_178[iVar0]->f_1 = 7;
						}
					}
					else
					{
						func_213(&(Local_178[iVar0]->f_2));
					}
					break;
				case 7:
					_task_flee_from_ped(&(Local_14.f_55[iVar0]), &(iLocal_315[1]), 2299f, 100.7f, 49.07f, 200f, -1, 0, 1077936128, 0);
					Local_178[iVar0]->f_1 = 8;
					break;
				case 8:
					if (func_909(&(Local_14.f_55[iVar0]), &(iLocal_315[1]), 1, 1) > 80f)
					{
						func_165(Local_14.f_55[iVar0], 1, 0, 1);
					}
					break;
			}
			if (iVar1 != Local_178[iVar0]->f_1)
			{
			}
		}
		iVar0++;
	}
}

void func_1383()
{
	if (!func_815(&(Local_14.f_65), 1))
	{
		if (func_1941())
		{
			func_1942(-1, 1);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (func_172(&(Local_14.f_67[iVar0]), 2))
			{
				iVar1 = Local_219[iVar0]->f_1;
				switch (Local_219[iVar0]->f_1)
				{
					case 0:
						func_1943();
						Local_219[iVar0]->f_1 = 2;
						func_213(&(Local_219[iVar0]->f_2));
						break;
					case 3:
						break;
					case 4:
						break;
					case 7:
						_task_flee_from_ped(&(Local_14.f_67[iVar0]), &(iLocal_315[1]), 2299f, 100.7f, 49.07f, 200f, -1, 0, 1077936128, 0);
						Local_219[iVar0]->f_1 = 8;
						break;
					case 8:
						if (func_909(&(Local_14.f_67[iVar0]), &(iLocal_315[1]), 1, 1) > 60f)
						{
							func_165(Local_14.f_67[iVar0], 1, 0, 1);
						}
						break;
				}
				if (iVar1 != Local_219[iVar0]->f_1)
				{
				}
			}
			iVar0++;
		}
	}
}

void func_1384()
{
	if (!func_815(&(Local_14.f_25), 1))
	{
		if (iVar1164 >= 2)
		{
			func_1944(-1, 1);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_172(&(Local_14.f_27[iVar0]), 2))
			{
				iVar1 = Local_225[iVar0]->f_1;
				if (Local_225[iVar0]->f_1 > 0 && Local_225[iVar0]->f_1 < 7)
				{
					func_1945(&(Local_14.f_27[iVar0]));
				}
				switch (Local_225[iVar0]->f_1)
				{
					case 0:
						func_1946(iVar0);
						Local_225[iVar0]->f_1 = 2;
						break;
					case 2:
						if ((!func_172(&(Local_14.f_67[0]), 0) || is_entity_on_screen(&(Local_14.f_67[0]))) || is_entity_on_screen(&(Local_14.f_27[iVar0])))
						{
							func_1947(iVar0);
							Local_225[iVar0]->f_1 = 3;
						}
						break;
					case 3:
						break;
					case 4:
						break;
					case 7:
						_task_flee_from_ped(&(Local_14.f_27[iVar0]), &(iLocal_315[1]), 2299f, 100.7f, 49.07f, 200f, -1, 0, 1077936128, 0);
						Local_225[iVar0]->f_1 = 8;
						break;
					case 8:
						if (func_909(&(Local_14.f_27[iVar0]), &(iLocal_315[1]), 1, 1) > 60f)
						{
							func_165(Local_14.f_27[iVar0], 1, 0, 1);
						}
						break;
				}
				if (iVar1 != Local_225[iVar0]->f_1)
				{
				}
			}
			iVar0++;
		}
	}
}

void func_1385()
{
	if (!func_815(&(Local_14.f_12), 1))
	{
		if (func_1948(iVar0))
		{
			func_1949(-1, 1);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_172(&(Local_14.f_14[iVar0]), 2))
			{
				iVar1 = Local_236[iVar0]->f_1;
				if (Local_236[iVar0]->f_1 > 0 && Local_236[iVar0]->f_1 < 7)
				{
					func_1945(&(Local_14.f_14[iVar0]));
				}
				switch (Local_236[iVar0]->f_1)
				{
					case 0:
						func_1950(iVar0);
						Local_236[iVar0]->f_1 = 3;
						break;
					case 3:
						if (func_1924(&(Local_14.f_14)) == 1 || func_1261(Global_35, func_1951(iVar0), 1) < 4f)
						{
							func_1923(&(Local_14.f_14[iVar0]), func_1952(iVar0), 4f, 0, 0);
							Local_236[iVar0]->f_1 = 4;
						}
						break;
					case 4:
						break;
					case 7:
						_task_flee_from_ped(&(Local_14.f_14[iVar0]), &(iLocal_315[1]), 2299f, 100.7f, 49.07f, 200f, -1, 0, 1077936128, 0);
						Local_236[iVar0]->f_1 = 8;
						break;
					case 8:
						if (func_909(&(Local_14.f_14[iVar0]), &(iLocal_315[1]), 1, 1) > 60f)
						{
							func_165(Local_14.f_14[iVar0], 1, 0, 1);
						}
						break;
				}
				if (iVar1 != Local_236[iVar0]->f_1)
				{
				}
			}
			iVar0++;
		}
	}
}

void func_1386()
{
	if (!func_815(&(Local_14.f_58), 1))
	{
		if (func_815(&(Local_14.f_25), 1) && func_815(&(Local_14.f_12), 1))
		{
			if (func_1953())
			{
				func_1954(-1, 1);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 4)
		{
			if (func_172(&(Local_14.f_60[iVar0]), 2))
			{
				iVar1 = Local_257[iVar0]->f_1;
				if (Local_257[iVar0]->f_1 > 0 && Local_257[iVar0]->f_1 < 7)
				{
					func_1945(&(Local_14.f_60[iVar0]));
				}
				switch (Local_257[iVar0]->f_1)
				{
					case 0:
						func_1955(iVar0);
						func_213(&(Local_257[iVar0]->f_2));
						Local_257[iVar0]->f_1 = 2;
						break;
					case 2:
						if ((func_1924(&(Local_14.f_60)) <= 2 || func_1388(Global_35, func_1956(iVar0, 0), 1, 0)) || func_1388(&(iLocal_315[1]), func_1956(iVar0, 0), 1, 0))
						{
							func_1957(&(Local_14.f_60[iVar0]), &(uLocal_487[9]), 0, 0);
							Local_257[iVar0]->f_1 = 6;
						}
						else if (iVar0 == 1)
						{
							if (func_1924(&(Local_14.f_27)) == 0)
							{
								func_1957(&(Local_14.f_60[iVar0]), &(uLocal_487[14]), 0, 0);
								Local_257[iVar0]->f_1 = 3;
							}
						}
						break;
					case 3:
						if ((func_1924(&(Local_14.f_60)) <= 2 || func_1388(Global_35, func_1956(iVar0, 1), 1, 0)) || func_1388(&(iLocal_315[1]), func_1956(iVar0, 1), 1, 0))
						{
							func_1957(&(Local_14.f_60[iVar0]), &(uLocal_487[9]), 0, 0);
							Local_257[iVar0]->f_1 = 6;
						}
						break;
					case 6:
						break;
					case 7:
						_task_flee_from_ped(&(Local_14.f_60[iVar0]), &(iLocal_315[1]), 2299f, 100.7f, 49.07f, 200f, -1, 0, 1077936128, 0);
						Local_257[iVar0]->f_1 = 8;
						break;
					case 8:
						if (func_909(&(Local_14.f_60[iVar0]), &(iLocal_315[1]), 1, 1) > 60f)
						{
							func_165(Local_14.f_60[iVar0], 1, 0, 1);
						}
						break;
				}
				if (iVar1 != Local_257[iVar0]->f_1)
				{
				}
			}
			iVar0++;
		}
	}
}

void func_1387()
{
	if (!func_815(&(Local_14.f_19), 1))
	{
		if (func_815(&(Local_14.f_58), 1) && func_815(&(Local_14.f_25), 1))
		{
			if (func_1924(&(Local_14.f_60)) <= 2 || func_1388(&(iLocal_315[1]), &(uLocal_487[6]), 1, 0))
			{
				func_1958(-1, 1);
			}
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_172(&(Local_14.f_21[iVar0]), 2))
			{
				iVar1 = Local_278[iVar0]->f_1;
				if (Local_278[iVar0]->f_1 > 0 && Local_278[iVar0]->f_1 < 7)
				{
					func_1945(&(Local_14.f_21[iVar0]));
				}
				switch (Local_278[iVar0]->f_1)
				{
					case 0:
						func_1959(iVar0);
						Local_278[iVar0]->f_1 = 2;
						break;
					case 2:
						break;
					case 3:
						break;
					case 7:
						_task_flee_from_ped(&(Local_14.f_21[iVar0]), &(iLocal_315[1]), 0f, 0f, 0f, 200f, -1, 0, 1077936128, 0);
						Local_278[iVar0]->f_1 = 8;
						break;
					case 8:
						if (func_909(&(Local_14.f_21[iVar0]), &(iLocal_315[1]), 1, 1) > 60f)
						{
							func_165(Local_14.f_21[iVar0], 1, 0, 1);
						}
						break;
				}
				if (iVar1 != Local_278[iVar0]->f_1)
				{
				}
			}
			iVar0++;
		}
	}
}

bool func_1388(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_1389(char[4] cParam0)
{
	switch (func_1283(cParam0))
	{
		case 1:
			if (is_screen_faded_in())
			{
				if (func_1802(cParam0, "GNG2_PS_SOSTART", 0))
				{
					func_213(&uLocal_1169);
					func_1306(cParam0, 2, 1);
				}
			}
			break;
		case 2:
			if (!func_1372())
			{
				if (iVar1163 >= 2)
				{
					if (func_1802(cParam0, "GNG2_PS_BEHIND", 0))
					{
						func_1306(cParam0, 4, 1);
					}
				}
			}
			break;
		case 4:
			if (!func_1372())
			{
				if (func_815(&(Local_14.f_12), 1))
				{
					if (func_919(&uLocal_896) > 3f)
					{
						if (func_1802(cParam0, "GNG2_PS_SQ2", 0))
						{
							func_1306(cParam0, 5, 1);
						}
					}
				}
				else
				{
					func_213(&uLocal_896);
				}
				if (func_388(iVar1164, 2))
				{
					if (func_1802(cParam0, "GNG2_PS_SQ2", 0))
					{
						func_1306(cParam0, 5, 1);
					}
				}
				if (iVar1163 >= 6)
				{
					func_1306(cParam0, 5, 1);
				}
			}
			break;
		case 5:
			if (_0x54b187f111d9c6f8(&(iLocal_315[1]), 1))
			{
				func_213(&uLocal_896);
			}
			if (!func_1372())
			{
				if (!func_388(iVar1164, 1))
				{
					if (iVar1163 >= 6 && func_919(&uLocal_896) > 2f)
					{
						if (!func_1388(Global_35, &(uLocal_487[6]), 1, 0))
						{
							func_1802(cParam0, "GNG2_PS_PSH2", 0);
						}
						else
						{
							func_1802(cParam0, "GNG2_PS_PSH", 0);
						}
						func_416(&uLocal_1167, 1);
					}
				}
				else if (func_1258(cParam0) >= 1)
				{
					if (func_919(&uLocal_896) > 3f)
					{
						if (func_1802(cParam0, "GNG2_PS_SQ3B", 0))
						{
							iLocal_1166 = 8;
							func_135(cParam0, 7);
						}
					}
				}
				else if (!func_388(iVar1164, 4) && func_919(&uLocal_896) > 3f)
				{
					if ((func_1392() && func_1393() <= 4) && func_1393() >= 1)
					{
						if (func_1802(cParam0, "GNG2_PS_SQ3A", 0))
						{
							func_416(&uLocal_1167, 4);
						}
					}
				}
			}
			break;
		case 7:
			if (!func_1372())
			{
				if (func_919(&uLocal_896) > 2f)
				{
					if (func_1802(cParam0, "GNG2_PS_SQ3D", 0))
					{
						func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 1, 1);
						func_1247(cParam0, 16);
						func_135(cParam0, 51);
					}
				}
			}
			else
			{
				func_213(&uLocal_896);
			}
			break;
	}
	func_1960(cParam0);
}

void func_1390(char[4] cParam0)
{
	if (func_172(Global_35, 0))
	{
		if (iVar973 == 14)
		{
			if (func_909(Global_35, &(iLocal_315[1]), 1, 1) > 35f)
			{
				func_1247(cParam0, 15);
				func_1335(cParam0, &(iLocal_315[1]), 1105014447, 422991367, 1, 1);
				func_1799(cParam0);
			}
		}
		else if (func_909(Global_35, &(iLocal_315[1]), 1, 1) < 25f)
		{
			if (!func_1961())
			{
				func_1247(cParam0, 14);
				func_1262(cParam0, &(iLocal_315[1]), 1);
			}
		}
		else if (func_909(Global_35, &(iLocal_315[1]), 1, 1) > 60f)
		{
			func_1316(cParam0, "GNG2_FAIL_SAD", "", 1, 0);
		}
	}
}

bool func_1391(float fParam0, float fParam1)
{
	if ((((((!is_player_dead(player_id()) && is_player_playing(player_id())) && !is_player_free_aiming(player_id())) && !is_player_targetting_anything(player_id())) && !is_ped_aiming_from_cover(Global_35)) && !is_ped_shooting(Global_35)) && !is_ped_reloading(Global_35))
	{
		if (!func_26(fParam0))
		{
			func_213(fParam0);
		}
		else if (func_1562(fParam0) >= fParam1)
		{
			return true;
		}
		else if (((fParam1 > 15f && func_1962(Global_35)) && is_ped_human(get_ped_index_from_entity_index(func_1963(Global_35)))) && func_1562(fParam0) < (fParam1 - 15f))
		{
			func_483(fParam0, (fParam1 - 15f));
		}
	}
	else if (func_26(fParam0))
	{
		func_540(fParam0);
	}
	return false;
}

bool func_1392()
{
	if (((((((func_815(&(Local_14.f_1), 1) && func_815(&(Local_14.f_84), 1)) && func_815(&(Local_14.f_53), 1)) && func_815(&(Local_14.f_65), 1)) && func_815(&(Local_14.f_25), 1)) && func_815(&(Local_14.f_12), 1)) && func_815(&(Local_14.f_19), 1)) && func_815(&(Local_14.f_58), 1))
	{
		return true;
	}
	return false;
}

int func_1393()
{
	iVar0 = 0;
	iVar0 = (iVar0 + func_1924(&(Local_14.f_3)));
	iVar0 = (iVar0 + func_1924(&(Local_14.f_86)));
	iVar0 = (iVar0 + func_1924(&(Local_14.f_55)));
	iVar0 = (iVar0 + func_1924(&(Local_14.f_67)));
	iVar0 = (iVar0 + func_1924(&(Local_14.f_21)));
	iVar0 = (iVar0 + func_1924(&(Local_14.f_60)));
	iVar0 = (iVar0 + func_1924(&(Local_14.f_27)));
	iVar0 = (iVar0 + func_1924(&(Local_14.f_14)));
	return iVar0;
}

void func_1394()
{
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (func_172(&(Local_14.f_3[iVar0]), 2))
		{
			Local_116[iVar0]->f_1 = 7;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (func_172(&(Local_14.f_67[iVar0]), 2))
		{
			Local_219[iVar0]->f_1 = 7;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_172(&(Local_14.f_14[iVar0]), 2))
		{
			Local_236[iVar0]->f_1 = 7;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_172(&(Local_14.f_27[iVar0]), 2))
		{
			Local_225[iVar0]->f_1 = 7;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_172(&(Local_14.f_60[iVar0]), 2))
		{
			Local_257[iVar0]->f_1 = 7;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_172(&(Local_14.f_21[iVar0]), 2))
		{
			Local_278[iVar0]->f_1 = 7;
		}
		iVar0++;
	}
}

bool func_1395()
{
	if (iVar1164 == 11)
	{
		return false;
	}
	if (iVar1164 == 12 && func_909(Global_35, &(iLocal_315[1]), 1, 1) < 10f)
	{
		if (func_919(&uLocal_477) > 0.5f)
		{
			return true;
		}
	}
	return false;
}

void func_1396(int iParam0, int iParam1)
{
	func_1964(iParam0, iParam1);
}

bool func_1397(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

int func_1398()
{
	iVar0 = get_clock_hours();
	iVar1 = get_clock_minutes();
	if (iVar0 >= 5 && iVar0 <= 7)
	{
		return 0;
	}
	else if (iVar0 <= 22)
	{
		if (iVar0 == 20 && iVar1 > 30)
		{
			return 0;
		}
		else if (iVar0 >= 21)
		{
			return 0;
		}
	}
	return 1;
}

int func_1399(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_1572(cParam0))
	{
		if (!func_1965(&(cParam0->f_7375), iParam1, 4))
		{
			func_1966(&(cParam0->f_7375), iParam1, 4);
			return 1;
		}
	}
	return func_1967(&(cParam0->f_7375), iParam1, sParam2, iParam3, bParam4, iParam5);
}

bool func_1400(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

void func_1401(int iParam0, int iParam1, int iParam2)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (iParam2 == -1)
	{
		if (!is_ped_a_player(iParam1))
		{
			iParam2 = 0;
		}
		else
		{
			iParam2 = 1;
		}
	}
	_0xaac0ee3b4999abb5(iParam0, iParam1);
	_0xf634e2892220ef34(iParam0, iParam2);
}

bool func_1402(int iParam0)
{
	return func_970(iParam0, iVar309);
}

bool func_1403(int iParam0, int iParam1, char[4] cParam2)
{
	if (!func_1402(iParam0))
	{
		func_441(iParam0, iParam1, &Var0);
		if (func_1968(iParam0))
		{
			Var0 = { func_1969(iParam0) };
		}
		if (Var0.f_6 != -1)
		{
			if (!func_442(32768, Var0.f_13))
			{
				if (func_902(cParam2, Var0.f_6, iLocal_315[iParam0], 0, Var0, Var0.f_1, Var0.f_2, Var0.f_3, 1, Var0.f_12, 1, 0, 1, 0))
				{
					if (!func_1912(cParam2, &(iLocal_315[iParam0]), 256))
					{
						func_1246(cParam2, &(iLocal_315[iParam0]), 256);
					}
					func_1245(Var0.f_6, 1);
					func_1264(cParam2, &(iLocal_315[iParam0]), 128);
					func_447(iParam0, 1);
				}
			}
			else
			{
				iLocal_315[iParam0] = func_1970(Var0.f_6, 1, 1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
				if (func_172(&(iLocal_315[iParam0]), 0))
				{
					func_447(iParam0, 1);
					_0xfd6943b6df77e449(&(iLocal_315[iParam0]), false);
					func_1971(Var0.f_6);
				}
			}
		}
		else
		{
			if (iParam0 == 3)
			{
				iLocal_315[iParam0] = func_924(Var0.f_4, Var0, Var0.f_3, 1, 1, 0, 1, 1, 0, 1, 1, 0, 0);
			}
			else
			{
				iLocal_315[iParam0] = func_924(Var0.f_4, Var0, Var0.f_3, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0);
			}
			if (func_172(&(iLocal_315[iParam0]), 0))
			{
				func_447(iParam0, 1);
			}
		}
		if (func_1402(iParam0))
		{
			if (!func_393(Var0))
			{
				func_1275(&(iLocal_315[iParam0]), Var0, 2, 1073741824);
			}
			if (iParam0 == 1)
			{
				iVar14 = get_ped_accuracy(&(iLocal_315[iParam0]));
				iVar15 = (iVar14 / 2);
				set_ped_accuracy(&(iLocal_315[iParam0]), iVar15);
				remove_weapon_from_ped(&(iLocal_315[iParam0]), 2077870112, true, -142743235);
			}
			if (iParam0 == 3)
			{
				set_ped_can_ragdoll(&(iLocal_315[iParam0]), false);
				set_ped_config_flag(&(iLocal_315[iParam0]), 15, true);
				set_entity_proofs(&(iLocal_315[iParam0]), 1, false);
			}
			if (iParam0 == 4)
			{
				remove_all_ped_weapons(&(iLocal_315[iParam0]), true, true);
			}
			_0x9587913b9e772d29(&(iLocal_315[iParam0]), 0);
			if (!is_string_null_or_empty(Var0.f_5))
			{
				func_145(cParam2, &(iLocal_315[iParam0]), Var0.f_5, 0);
			}
			if (Var0.f_7 != -1)
			{
				func_1972(cParam2, &(iLocal_315[iParam0]), Var0.f_7, 0);
			}
			if (Var0.f_10 != 623901053)
			{
				set_ped_relationship_group_hash(&(iLocal_315[iParam0]), Var0.f_10);
			}
			if (Var0.f_9 != 0)
			{
				set_blocking_of_non_temporary_events(&(iLocal_315[iParam0]), true);
				_0xae6004120c18df97(&(iLocal_315[iParam0]), 0, 0);
				task_stand_still(&(iLocal_315[iParam0]), -1);
			}
			if (Var0.f_11 != 0)
			{
				func_1860(&(iLocal_315[iParam0]), Var0.f_11, func_442(32, Var0.f_13), 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			}
			if (func_442(4, Var0.f_13))
			{
				if (iParam0 == 2)
				{
					func_151(cParam2, &(iLocal_315[iParam0]), "Horse_01", 0, 0, 0, 0);
				}
				else
				{
					func_151(cParam2, &(iLocal_315[iParam0]), 0, 0, 0, 0, 0);
				}
			}
			if (func_442(512, Var0.f_13))
			{
				func_1973(cParam2, &(iLocal_315[iParam0]));
			}
			freeze_entity_position(&(iLocal_315[iParam0]), func_442(256, Var0.f_13));
			set_blocking_of_non_temporary_events(&(iLocal_315[iParam0]), func_442(16, Var0.f_13));
			if (func_442(128, Var0.f_13))
			{
				func_1974(&(iLocal_315[iParam0]), 1978275899, -1, 0, 0, -1082130432);
			}
			else if (func_442(64, Var0.f_13))
			{
				func_1974(&(iLocal_315[iParam0]), -905548901, -1, 0, 0, -1082130432);
			}
			set_entity_invincible(&(iLocal_315[iParam0]), func_442(16384, Var0.f_13));
			func_1975(iParam0);
		}
	}
	return func_1402(iParam0);
}

bool func_1404(int iParam0)
{
	return (uVar309 && iParam0) == iParam0;
}

void func_1405(int iParam0)
{
	if (iParam0 != 0)
	{
		func_441(iParam0, -1, &Var0);
		if (Var0.f_8 != 0)
		{
			if (func_172(&(iLocal_315[iParam0]), 1) && func_172(&(iLocal_315[Var0.f_8]), 1))
			{
				func_1976(&(iLocal_315[iParam0]), &(iLocal_315[Var0.f_8]), 0, -1, 1);
			}
		}
	}
}

bool func_1406(int iParam0)
{
	if (Local_825[iParam0]->f_6 == 0)
	{
		return false;
	}
	return true;
}

int func_1407()
{
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!func_1406(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

struct<4> func_1408(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		iVar4 = iParam1;
		Var0 = { func_488(7, iVar4) };
	}
	else if (iParam0 == 1)
	{
		iVar5 = iParam1;
		Var0 = { func_488(15, iVar5) };
	}
	else if (iParam0 == 2)
	{
		iVar6 = iParam1;
		Var0 = { func_488(13, iVar6) };
	}
	else if (iParam0 == 3)
	{
		iVar7 = iParam1;
		Var0 = { func_488(8, iVar7) };
	}
	else if (iParam0 == 4)
	{
		if (iVar809 == 0)
		{
			Var0 = { func_488(9, 0) };
		}
		else
		{
			Var0 = { func_488(9, 1) };
		}
	}
	else if (iParam0 == 5)
	{
		iVar8 = iParam1;
		Var0 = { func_488(10, iVar8) };
	}
	else if (iParam0 == 6)
	{
		iVar9 = iParam1;
		Var0 = { func_488(11, iVar9) };
	}
	else if (iParam0 == 7)
	{
		iVar10 = iParam1;
		Var0 = { func_488(12, iVar10) };
	}
	else if (iParam0 == 8)
	{
		iVar11 = iParam1;
		Var0 = { func_488(5, iVar11) };
	}
	if (func_393(Var0))
	{
	}
	return Var0;
}

void func_1409(int iParam0, int iParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (decor_exist_on(iParam0, "honor_block"))
		{
			iVar0 = decor_get_int(iParam0, "honor_block");
		}
		iVar0 = (iVar0 || func_559(iParam1));
		decor_set_int(iParam0, "honor_block", iVar0);
	}
}

int func_1410(var uParam0)
{
	if (!_does_anim_scene_exist(uParam0->f_804) || !_is_anim_scene_started(uParam0->f_804, false))
	{
		return -1;
	}
	return floor((_get_anim_scene_time(uParam0->f_804) * 1000f));
}

bool func_1411(var uParam0, bool bParam1)
{
	if (func_827(uParam0, 262144))
	{
		return false;
	}
	if (!_does_anim_scene_exist(uParam0->f_804))
	{
		return false;
	}
	if (!_0x6f1f0b17109309da(uParam0->f_804, "ExportCamera"))
	{
		return false;
	}
	if ((_0xb89fcff19dafff28(uParam0->f_804, "ExportCamera") || (_0x005e6f28dd7ed58d(uParam0->f_804, "ExportCamera") && bParam1)) || _is_anim_scene_active(uParam0->f_804))
	{
		func_738(uParam0, 262144);
		func_837(uParam0, 1);
		return true;
	}
	return false;
}

struct<4> func_1412(int iParam0, int iParam1)
{
	func_441(iParam0, iParam1, &Var0);
	return Var0;
}

bool func_1413()
{
	return func_172(Global_35, 1);
}

bool func_1414(int iParam0)
{
	return !is_entity_dead(&(iLocal_378[iParam0]));
}

bool func_1415(int iParam0)
{
	return (does_entity_exist(&(iLocal_315[iParam0])) && func_172(&(iLocal_315[iParam0]), 1));
}

void func_1416(char[4] cParam0, float fParam1, int iParam2, bool bParam3)
{
	fVar0 = 2f;
	fVar1 = 50f;
	fVar2 = 150f;
	fVar3 = 250f;
	fVar4 = 200f;
	fVar5 = Global_36.f_2;
	if (bParam3)
	{
		fVar6 = ((fVar5 - fVar4) / (fVar3 - fVar4));
	}
	else
	{
		fVar6 = ((fVar5 - fVar1) / (fVar2 - fVar1));
	}
	if (fVar6 > 1f)
	{
		fVar6 = 1f;
	}
	else if (fVar6 < 0f)
	{
		fVar6 = 0f;
	}
	fVar6 = (fVar6 * (fVar0 - 1f));
	fVar6 = (fVar6 + 1f);
	if (Global_36.f_2 >= func_1848(cParam0, fParam1) && get_control_normal(0, 1915927219) >= 0.05f)
	{
		_0x7c9e45a4ced2e8da(iParam2, 0f);
	}
	else
	{
		_0x7c9e45a4ced2e8da(iParam2, fVar6);
	}
}

void func_1417(char[4] cParam0, float fParam1, int iParam2)
{
	if ((func_1287(cParam0, fParam1) || iParam2 == 0) && !bLocal_111)
	{
		if (!bLocal_108)
		{
			_0x821c32c728b24477(1, 1f, 10000);
			_0xf64034d533ce8aac(1, "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON", "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON");
			bLocal_108 = true;
		}
	}
	else if (bLocal_108)
	{
		_0x821c32c728b24477(0, 0f, 10000);
		_0xf64034d533ce8aac(0, "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON", "WEATHER_TYPES_SCRIPTED_GANG2_BALLOON");
		bLocal_108 = false;
	}
}

bool func_1418(int iParam0, float fParam1)
{
	return func_1356(iParam0, fParam1) < func_1423(iParam0);
}

Vector3 func_1419(int iParam0, int iParam1, float fParam2)
{
	if (iParam0 < func_1423(iParam1))
	{
		if (iParam1 == 1)
		{
			return *fParam2->f_1[iParam0];
		}
		else if (iParam1 == 2)
		{
			return *fParam2->f_27[iParam0];
		}
		else if (iParam1 == 3)
		{
			return *fParam2->f_32[iParam0];
		}
		else if (iParam1 == 4)
		{
			return *fParam2->f_37[iParam0];
		}
		else if (iParam1 == 5)
		{
			return *fParam2->f_66[iParam0];
		}
		else if (iParam1 == 6)
		{
			return *fParam2->f_107[iParam0];
		}
	}
	return 0f, 0f, 0f;
}

Vector3 func_1420(vector3 vParam0)
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

float func_1421(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

Vector3 func_1422(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

int func_1423(int iParam0)
{
	if (iParam0 == 1)
	{
		return 8;
	}
	else if (iParam0 == 2)
	{
		return 1;
	}
	else if (iParam0 == 3)
	{
		return 1;
	}
	else if (iParam0 == 4)
	{
		return 9;
	}
	else if (iParam0 == 5)
	{
		return 13;
	}
	else if (iParam0 == 6)
	{
		return 9;
	}
	return -1;
}

float func_1424(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_1425()
{
	iVar0 = 0;
	waypoint_recording_get_closest_waypoint("gang2_SadieRoute", Global_36, &iVar0);
	if (iVar0 > 500)
	{
		return true;
	}
	return false;
}

float func_1426(vector3 vParam0, vector3 vParam3)
{
	vVar0 = { vParam3 - vParam0 };
	if (vVar0.y == 0f)
	{
		if (vVar0.x < 0f)
		{
			return -90f;
		}
		else
		{
			return 90f;
		}
	}
	return atan2(vVar0.x, vVar0.y);
}

float func_1427(float fParam0, float fParam1, float fParam2)
{
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(round(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

void func_1428(struct<2> Param0, int iParam2)
{
	if (!func_248(Param0))
	{
		return;
	}
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_1977(Param0, iParam2))
	{
		add_to_itemset(iParam2, Param0);
	}
}

void func_1429(int iParam0, int iParam1)
{
	if (!is_itemset_valid(iParam1))
	{
		return;
	}
	if (does_entity_exist(iParam0))
	{
		if (!is_in_itemset(iParam0, iParam1))
		{
			add_to_itemset(iParam0, iParam1);
		}
	}
}

void func_1430(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_1431(int iParam0)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
	}
	vVar0 = { get_entity_coords(iParam0, true, false) };
	fVar3 = get_entity_heading(iParam0);
	set_entity_coords(iParam0, get_offset_from_entity_in_world_coords(iParam0, 0f, 0f, -10f), true, false, true, true);
	iVar4 = func_924(-1038436471, vVar0, fVar3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
	_set_ped_on_mount(iParam0, iVar4, -1, true);
	return iVar4;
}

void func_1432(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		remove_all_ped_weapons(&(Local_14.f_3[iParam0]), true, true);
		func_1860(&(Local_14.f_3[iParam0]), 379542007, 1, 1, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
	}
	func_1978(Local_14.f_3[iParam0], Local_116[iParam0], 0);
	set_ped_seeing_range(&(Local_14.f_3[iParam0]), 200f);
	set_ped_hearing_range(&(Local_14.f_3[iParam0]), 200f);
	if (func_172(&(Local_14.f_3[iParam0]), 0))
	{
		set_ped_path_prefer_to_avoid_water(&(Local_14.f_3[iParam0]), false, 1f);
		set_ped_path_may_enter_water(&(Local_14.f_3[iParam0]), true);
		_0x9de63896b176ea94(&(Local_14.f_3[iParam0]), 1);
	}
	if (func_172(&(Local_14.f_3[iParam0 + 1]), 0))
	{
		set_ped_path_prefer_to_avoid_water(&(Local_14.f_3[iParam0 + 1]), false, 1f);
		set_ped_path_may_enter_water(&(Local_14.f_3[iParam0 + 1]), true);
		_0x9de63896b176ea94(&(Local_14.f_3[iParam0 + 1]), 1);
		set_blocking_of_non_temporary_events(&(Local_14.f_3[iParam0 + 1]), true);
		func_1409(&(Local_14.f_3[iParam0 + 1]), 551416228);
	}
	register_target(&(Local_14.f_3[iParam0]), Global_35, 1);
	register_target(&(Local_14.f_3[iParam0]), &(iLocal_315[1]), 1);
	if (iParam0 == 0)
	{
		_0xbae08f00021bffb2(&(Local_14.f_3[1]), 0);
	}
	open_sequence_task(&iVar0);
	if (bParam1)
	{
		if (iParam0 == 0)
		{
			task_pause(0, 2000);
			task_follow_nav_mesh_to_coord(0, func_1979(iParam0, 1), 1.75f, -1, 2f, 8193, 40000f);
		}
		else if (iParam0 == 2)
		{
			task_follow_nav_mesh_to_coord(0, 2577.7f, 106.38f, 52.5f, 1f, -1, 2f, 8193, 40000f);
			task_follow_nav_mesh_to_coord(0, func_1979(iParam0, 1), 1.75f, -1, 2f, 8193, 40000f);
		}
		else
		{
			task_follow_nav_mesh_to_coord(0, func_1979(iParam0, 1), 2.001f, -1, 2f, 8193, 40000f);
		}
	}
	if (iParam0 == 0)
	{
		task_follow_nav_mesh_to_coord(0, 2533.532f, 120.3951f, 40.79598f, 1.75f, -1, 2f, 8193, 40000f);
	}
	else if (iParam0 == 4)
	{
		task_follow_nav_mesh_to_coord(0, 2535.161f, 108.327f, 40.59719f, 1.75f, -1, 2f, 8193, 40000f);
		task_follow_nav_mesh_to_coord(0, 2531.32f, 105.8901f, 40.7181f, 1.75f, -1, 2f, 8193, 40000f);
	}
	else if (iParam0 == 6)
	{
		task_go_to_coord_and_aim_at_hated_entities_near_coord(0, 2531.877f, 112.8035f, 40.73176f, get_entity_coords(Global_35, true, false), 1.75f, true, 0.5f, 4f, true, 0, 0, -687903391);
	}
	task_go_to_coord_and_aim_at_hated_entities_near_coord(0, func_1928(iParam0), get_entity_coords(Global_35, true, false), 1.75f, true, 0.5f, 4f, true, 0, 0, -687903391);
	task_combat_hated_targets(0, -1f);
	close_sequence_task(iVar0);
	task_perform_sequence(&(Local_14.f_3[iParam0]), iVar0);
	clear_sequence_task(&iVar0);
	func_1923(&(Local_14.f_3[iParam0]), func_1928(iParam0), 4f, 0, 0);
}

struct<4> func_1433(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return func_488(1, 0);
		case 2:
		case 3:
			return func_488(1, 1);
		case 4:
		case 5:
			return func_488(1, 2);
		case 6:
		case 7:
			return func_488(1, 3);
	}
	return func_488(1, 0);
}

bool func_1434(int iParam0)
{
	if (-1829635046 == func_1980(81053684))
	{
		if (func_1981(iParam0))
		{
			return true;
		}
	}
	else if (func_1688(-525676072, iParam0))
	{
		if (func_1981(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1435(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		_restore_ped_stamina(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		_charge_ped_stamina(Global_35, to_float((iParam0 * iVar0)));
	}
}

void func_1436(int iParam0)
{
	if (!network_is_in_session())
	{
		return;
	}
	if (network_is_in_mp_cutscene())
	{
		return;
	}
	set_entity_visible_in_cutscene(player_ped_id(), iParam0, 0, 256);
	network_set_in_mp_cutscene(true, true, 32, true);
}

void func_1437()
{
	iVar0 = func_1097(Global_35, 9, 1, 0);
	if (func_679(iVar0))
	{
		return;
	}
	iVar0 = func_1097(Global_35, 7, 1, 0);
	if (func_679(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1097(Global_35, 0, 1, 0);
	if (func_679(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1097(Global_35, 1, 1, 0);
	if (func_679(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1097(Global_35, 18, 1, 0);
	if (func_679(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1982();
	if (func_679(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1860(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1983(6291456, 0);
	if (func_679(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1860(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1438()
{
	return Global_1900383->f_393;
}

int func_1439(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1400(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

void func_1440(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1441(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1442(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1443()
{
	return &Global_1899515;
}

void func_1444(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1445(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	clear_ped_blood_damage(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		_clear_ped_blood_damage_facial(iParam0, iVar0);
		iVar0++;
	}
}

bool func_1446()
{
	return (func_1984() || func_1985());
}

void func_1447(bool bParam0)
{
	if (bParam0)
	{
		Global_1935436->f_9 = 0f;
	}
	Global_1935436->f_8 = 0f;
	Global_1935436->f_12.f_1 = 0f;
	Global_1935436->f_12 = 0f;
	Global_1935436->f_12.f_3 = 0f;
	Global_1935436->f_12.f_2 = 0f;
	Global_1935436->f_12.f_4 = 0;
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	_0x8f44ebb3ba8f6d44(get_player_index(), 0);
	_0x06d26a96ca1bca75(Global_35, 10, 0f, 0);
	set_ped_is_drunk(Global_35, false);
	_0x406ccf555b04fad3(Global_35, 0, 0f);
	func_1986(0f);
	Global_1935436->f_11 = 1;
	if (func_297())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1987();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1448(var uParam0)
{
	return uParam0->f_865;
}

float func_1449(var uParam0)
{
	return uParam0->f_868;
}

float func_1450(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1451(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1452(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1453(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1454(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1202(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1988(iParam4);
		}
		else if (iParam4 != &Global_1946804->f_57[iParam1])
		{
			iVar1 = _get_ped_component_category(iParam4, _get_metaped_type(iParam0), bParam2);
		}
	}
	if (bParam3)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_0xdf631e4bce1b1fc4(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0, bParam2);
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_57[iParam1]->f_1)
		{
			if (&Global_1946804->f_57[iParam1]->f_2[iVar0] != iVar1)
			{
				_set_ped_component_disabled(iParam0, &(Global_1946804->f_57[iParam1]->f_2[iVar0]), 0);
			}
			iVar0++;
		}
	}
}

bool func_1455(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_664(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1456(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1457(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1455(1108822547, 6))
	{
		if (bParam2)
		{
			func_1454(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1458(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1459(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1458(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_664(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_664(iParam0, 1)])->f_10 || iParam1);
}

void func_1459(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_664(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_664(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_664(iParam0, 1)])->f_10 && iParam1));
}

bool func_1460(var uParam0)
{
	if (func_1989(&(uParam0->f_29), 62))
	{
		switch (func_1990())
		{
			case 1:
				if (!func_1989(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1989(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1989(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1989(&(uParam0->f_29), 32))
				{
					if (func_1989(&(uParam0->f_29), 2))
					{
						if (func_686(func_278()) < 5)
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				break;
		}
	}
	return true;
}

int func_1461(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1991(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1139("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1140(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_679(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1991(iParam1, 512) && func_1683(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1991(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1991(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1991(iParam1, 33554432)))
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
		func_1141(iVar1);
	}
	if (func_679(iVar0))
	{
	}
	else if (!func_1991(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1461(uParam0, iParam1, iParam2);
	}
	else if (func_1991(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1462(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

void func_1463(var uParam0)
{
	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	uParam0->f_5 = 1;
}

int func_1464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		case 3:
			return 8;
		case 4:
			return 16;
		case 5:
			return 32;
		case 6:
			return 64;
		case 7:
			return 128;
		case 8:
			return 256;
		case 9:
			return 512;
		case 10:
			return 1024;
		case 11:
			return 2048;
		case 12:
			return 4096;
		case 13:
			return 8192;
		case 14:
			return 16384;
		case 15:
			return 32768;
		case 16:
			return 65536;
		case 17:
			return 131072;
		case 18:
			return 262144;
		case 19:
			return 1048576;
		case 20:
			return 2097152;
		case 21:
			return 4194304;
		case 22:
			return 8388608;
		case 23:
			return 16777216;
		case 24:
			return 33554432;
		case 25:
			return 524288;
	}
	return 0;
}

bool func_1465(int iParam0)
{
	return iParam0 != 0;
}

void func_1466(var uParam0)
{
	if (!func_899(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_862(&(uParam0->f_1), 1);
	}
}

void func_1467(var uParam0)
{
	if (!func_899(*uParam0, 1))
	{
		request_ptfx_asset();
		func_862(uParam0, 1);
	}
}

bool func_1468(var uParam0)
{
	if (func_899(uParam0->f_2, 1))
	{
		return true;
	}
	if (!uParam0->f_66)
	{
		return false;
	}
	if (uParam0->f_65 <= 0f)
	{
		return true;
	}
	else if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
	{
		_get_anim_scene_origin(uParam0->f_1, &vVar0, &uVar3, 2);
		if (get_distance_between_coords(Global_36, vVar0, true) > uParam0->f_65)
		{
			return false;
		}
		return true;
	}
	return false;
}

char* func_1469(int iParam0)
{
	switch (iParam0)
	{
		case 225514697:
			return "Arthur";
		case -1464743433:
			return "Abe";
		case 1483156731:
			return "EdmundLowry";
		case -1418951751:
			return "ABERDEENPIGFARMER";
		case 2029634351:
			return "ABERDEENSISTER";
		case -288068792:
			return "AbigailRoberts";
		case 513427234:
			return "AlbertMason";
		case -121985991:
			return "ArchieDown";
		case -205121720:
			return "Baptiste";
		case -77509825:
			return "BartholomewBraithwaite";
		case -55633154:
			return "CS_BEATENUPCAPTAIN";
		case 1266159496:
			return "BeauGray";
		case -2045269112:
			return "PenelopeBraithwaite";
		case 2070393450:
			return "BillWilliamson";
		case 477547053:
			return "BraithwaiteServant";
		case 1382164045:
			return "CatherineBraithwaite";
		case 1407031519:
			return "CharlesSmith";
		case -754733870:
			return "CS_CIGCARDGUY";
		case 1253299569:
			return "CS_DINOBONESLADY";
		case -464684897:
			return "Cleet";
		case -820975767:
			return "ColmODriscoll";
		case -1765531164:
			return "CreoleGuy";
		case -820854800:
			return "SDDoctor_01";
		case 382040614:
			return "DaleMaroney";
		case 1944593012:
			return "Dutch";
		case -450226655:
			return "EdithDown";
		case -1920451728:
			return "Fussar";
		case 1514128030:
			return "cs_fishcollector";
		case -1865855539:
			return "Bronte";
		case -1629501717:
			return "GuidoMartelli";
		case -1208814201:
			return "U_M_M_NBXBRONTEGOON_01";
		case 1478983280:
			return "G_M_M_UNIBRONTEGOONS_01";
		case -1769295812:
			return "GarethBraithwaite";
		case 1020041649:
			return "GenStoryFemale";
		case -639059862:
			return "GenStoryMale";
		case -920985758:
			return "Leon";
		case -1154137714:
			return "GeraldBraithwaite";
		case 1225208808:
			return "HoseaMatthews";
		case 1912073755:
			return "JackMarston";
		case -631664452:
			return "JackMarston_Teen";
		case 4991732:
			return "Jamie";
		case 1843625996:
			return "JavierEscuella";
		case 1815090590:
			return "JimCalloway";
		case -446093729:
			return "Joe";
		case 95866989:
			return "JohnMarston";
		case 2100656433:
			return "CS_JOHNWEATHERS";
		case 1006468445:
			return "JosiahTrelawny";
		case -1707202053:
			return "Karen";
		case 358502875:
			return "MrsAdler";
		case 1939579094:
			return "Kieran";
		case -100461901:
			return "LeoStrauss";
		case 1304311224:
			return "LondonderrySon";
		case -1690877284:
			return "MaryBeth";
		case 1051047356:
			return "MaryLinton";
		case -566878875:
			return "MicahBell";
		case -346700962:
			return "MollyOshea";
		case -272634447:
			return "CS_MrLinton";
		case 984264800:
			return "MrPearson";
		case 1367851675:
			return "MrsLondonderry";
		case -2075588078:
			return "Mud2BigGuy";
		case 2115504616:
			return "ProfessorBell";
		case 1618031732:
			return "RevSwanson";
		case -265719023:
			return "CS_Samaritan";
		case -1483559144:
			return "StrDeputy_01";
		case -572941403:
			return "StrDeputy_02";
		case -2081966149:
		case 2012148102:
			return "StrSheriff_01";
		case 1695129705:
			return "SusanGrimshaw";
		case 1407740785:
			return "TavishGray";
		case 1231309423:
			return "TheodoreLevin";
		case 65010948:
			return "ThomasDown";
		case 1038525765:
			return "Tilly";
		case -969464097:
			return "Uncle";
		case 1057570823:
			return "G_M_M_UniCriminals_01";
		case 347599949:
			return "G_M_M_UNIDUSTER_01";
		case -1884146832:
			return "CS_VALSHERIFF";
		case 826385717:
			return "S_M_M_MARSHALLSRURAL_01";
		case -831368594:
			return "U_M_O_VHTEXOTICSHOPKEEPER_01";
		case -522739022:
			return "Sean";
		case -122790003:
			return "Lenny";
		case 1276534479:
			return "Hercule";
		case -781994133:
			return "CreoleCaptain";
		case -628794682:
			return "U_M_M_CREOLECAPTAIN_01";
		case 1999476738:
			return "RingMaster";
		case -1221341425:
			return "U_M_M_VALBARTENDER_01";
		case -439429058:
			return "A_M_M_EMRFARMHAND_01";
		case -1646366239:
			return "A_M_M_GriSurvivalist_01";
		case 1439158431:
			return "LillyMillet";
		case -1384606398:
			return "A_F_M_STRTOWNFOLK_01";
		case 1127589605:
			return "A_M_M_STRTOWNFOLK_01";
		case 413771941:
			return "S_M_M_STRLUMBERJACK_01";
		case -1990962020:
			return "G_M_M_UniCriminals_02";
		case -1818007055:
			return "G_M_M_UNICORNWALLGOONS_01";
		case 79156795:
			return "A_M_M_NBXUPPERCLASS_01";
		case -1039531072:
			return "A_F_M_NBXUPPERCLASS_01";
		case 525529657:
			return "A_M_M_VALFARMER_01";
		case -2087759666:
			return "A_M_M_VALTOWNFOLK_01";
		case -1789856687:
			return "A_M_M_VALTOWNFOLK_02";
		case -161027961:
			return "A_F_M_VALTOWNFOLK_01";
		case 518339740:
			return "U_M_M_NBXBARTENDER_01";
		case 2041494024:
			return "NBXExecuted";
		case -944019243:
			return "RHODEPUTY_01";
		case -949242502:
			return "RHDSHERIFF_01";
		case -1745321414:
			return "LeighGray";
		case -1038436471:
			return "Horse_01";
		case 273671859:
			return "U_M_M_StrGenStoreOwner_01";
		case -1161832176:
			return "TomDickens";
		case -1632694866:
			return "DavidGeddes";
		case 1446935015:
			return "ANSEL_ATHERTON";
		case -1101883765:
			return "CS_Wrobel";
		case -50684386:
			return "COW";
		case 195700131:
			return "BULL";
		case 686051865:
			return "ALBERTCAKEESQUIRE";
		case 1767420034:
			return "U_M_O_BLWGENERALSTOREOWNER_01";
		case -1033903759:
			return "A_C_DOGCATAHOULACUR_01";
		case 1591685812:
			return "A_C_DOGRUFUS_01";
		case -896926592:
			return "A_C_DOGLION_01";
		case -695175124:
			return "Handler";
		case 1891548111:
			return "VALAUCTIONBOSS_01";
		case -1049237750:
			return "NbxReceptionist_01";
		case -1206299098:
			return "U_M_M_BiVForeman_01";
		case -532378284:
			return "U_M_M_RACFOREMAN_01";
		case -2075028835:
			return "CHAINPRISONER_01";
		case -211291960:
			return "CHAINPRISONER_02";
		case -692960126:
			return "U_M_M_ValPokerPlayer_01";
		case 60202542:
			return "U_M_M_ValPokerPlayer_02";
		case -1614719852:
			return "DUNCANGEDDES";
		case -167880668:
			return "ANGUSGEDDES";
		case 743219360:
			return "EvelynMiller";
		case -2086875988:
			return "SISTERCALDERON";
		case -46607261:
			return "EDGARROSS";
		case 54030454:
			return "U_M_M_GriSurvivalist_01";
		case -378814141:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case -140869950:
			return "U_F_M_RKSHOMESTEADTENANT_01";
		case 1726657594:
			return "U_M_M_BHT_STRAWBERRYDUEL";
		case 1057932105:
			return "StationWorker";
		case 1294255258:
			return "LEVISIMON";
		case -384354290:
			return "S_M_M_GULFUSSARS_01";
		case 1772321403:
			return "A_C_DONKEY_01";
		case 223197487:
			return "S_M_M_ISPWORKER_01";
		case 355963118:
			return "S_M_M_ISPWORKER_02";
		case -1874017143:
			return "U_M_O_ValBartender_01";
		case 219322615:
			return "U_M_M_NBXBARTENDER_02";
		case -2014377075:
			return "CS_UNIDUSTERJAIL_01";
		case 977834008:
			return "A_M_M_RHDTOWNFOLK_01";
		case 2052768310:
			return "U_M_M_UNIBOUNTYHUNTER_01";
		case -1332334928:
			return "U_M_M_UNIBOUNTYHUNTER_02";
		case 482703333:
			return "BrotherDorkins";
		case 731029607:
			return "G_M_M_UniBraithwaites_01";
		case -1918128574:
			return "A_M_M_GAMHIGHSOCIETY_01";
		case 292812873:
			return "U_M_M_STRFREIGHTSTATIONOWNER_01";
		case -1772051411:
			return "EagleFlies";
		case -2046943672:
			return "CS_RAINSFALL";
		case 830712509:
			return "A_M_M_WapWarriors_01";
		case 264503396:
			return "A_M_Y_NBXSTREETKIDS_01";
		case -2044758506:
			return "U_M_M_BHT_SHACKESCAPE";
		case -1445135526:
			return "A_M_M_HTLROUGHTRAVELLERS_01";
		case 988668512:
			return "LemiuxAssistant";
		case -1608851079:
			return "p_keys01x";
		case 624882545:
			return "CS_BALLOONOPERATOR";
		case -1820002752:
			return "Worker1";
		case 1624257462:
			return "U_M_M_BHT_MINEFOREMAN";
		case 1453686794:
			return "A_M_M_NbxSlums_01";
		case -454661055:
			return "U_M_M_NBXPRIEST_01";
		case -1124266369:
			return "A_C_BEAR_01";
		case 960530301:
			return "MARSHALL_THURWELL";
		case 1347320453:
			return "CS_FAMOUSGUNSLINGER_02";
		case -290265603:
			return "cs_sd_streetkid_01";
		case 1861707396:
			return "cs_sd_streetkid_02";
		case 68512371:
			return "ObediahHinton";
		case 774211111:
			return "PoisonWellShaman";
		case 1923327795:
			return "A_M_M_EMRFARMHAND_01";
		case 722156226:
			return "u_m_m_bht_benedictallbright";
		case -1258801034:
			return "Jules";
		case -1466017978:
			return "MRDEVON";
		case 1101050871:
			return "MRWAYNE";
		case -1135378761:
			return "PAYTAH";
		case 1812458547:
			return "CS_VALDEPUTY_01";
		case 167491564:
			return "MES_SADIE5_MALES_01^1";
		case -310853585:
			return "A_M_M_NBXDOCKWORKERS_01";
		case -1817144219:
			return "U_M_M_VALSHERIFF_01";
		case 1086659483:
			return "S_M_M_BANKCLERK_01";
		case 1112571710:
			return "U_M_M_NBXBRONTEASC_01";
		case -363708904:
			return "P_C_HORSE_01";
	}
	return "";
}

int func_1470(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && &uParam0->f_13[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1471(var uParam0, char* sParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (does_entity_exist(&(uParam0->f_13[iVar0])) && are_strings_equal(&(uParam0->f_13[iVar0]->f_1), sParam1))
		{
			return &(uParam0->f_13[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

void func_1472(var uParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	iVar12 = 0;
	while (iVar12 < 65)
	{
		if (&uParam0->f_13[iVar12] == iParam1)
		{
			*uParam0->f_13[iVar12] = { Var0 };
			return;
		}
		iVar12++;
	}
}

int func_1473(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		if (!does_entity_exist(&(uParam0->f_13[iVar0])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1474(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1475(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1476(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1477(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1478(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1478(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1478(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1478(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1478(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1478(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1478(uParam0, 5, iParam4))
	{
		cParam3->f_9 = *iParam4;
	}
	if (*iParam5 == 1 || *iParam5 == 3)
	{
		if (iParam1 == 0)
		{
			if ((cParam3->f_9 == 7 || cParam3->f_9 == 8) || cParam3->f_9 == 9)
			{
				bVar0 = true;
			}
		}
		else if (iParam1 == 1 || iParam1 == 2)
		{
			if (cParam3->f_9 == 3 || cParam3->f_9 == 5)
			{
				bVar0 = true;
			}
		}
		if ((bVar0 && !uParam0->f_2503) || (!bVar0 && cParam3->f_11 == iParam2))
		{
			if (func_1478(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1478(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1478(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1479(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1480(var uParam0, char* sParam1, int iParam2)
{
	if (iParam2 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (((func_210((*uParam0)[iVar0], 1048576) && are_strings_equal((*uParam0)[iVar0], sParam1)) && (*uParam0)[iVar0]->f_9 == sParam1->f_9) && (*uParam0)[iVar0]->f_10 == sParam1->f_10)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1481(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_482(sParam0, 1);
}

bool func_1482(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_869(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1483(var uParam0)
{
	if (func_899(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_3, 1))
	{
		func_871(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_862(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_862(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1484(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_873(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1485(var uParam0, int iParam1)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!_does_anim_scene_exist(iParam1))
	{
		return false;
	}
	if (!_is_anim_scene_loaded(iParam1, true, false))
	{
		return false;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_880(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1486(var uParam0)
{
	if (func_899(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_2, 1))
	{
		func_882(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_862(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1487(var uParam0)
{
	if (func_899(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_3, 1))
	{
		func_884(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_862(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1488(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_886(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1489(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_888(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1490(var uParam0)
{
	if (func_899(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_2, 1))
	{
		func_890(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_862(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1491(var uParam0)
{
	if (func_899(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_899(uParam0->f_1, 1))
	{
		func_892(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_862(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1492(int iParam0)
{
	if (func_502(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1493(int iParam0, bool bParam1, int iParam2, var uParam3, var uParam4, var uParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_502(iParam0))
	{
		return 0;
	}
	vVar0.x = uParam3;
	vVar0.f_1 = uParam4;
	vVar0.f_2 = uParam5;
	if (((Global_1572864->f_13 || Global_1572864->f_14) || Global_1572864->f_8 != 0) || Global_1391438->f_5 & 8 != 0)
	{
		bVar3 = true;
	}
	switch ((*Global_1360165)[iParam0]->f_11)
	{
		case 0:
			if (func_1016(iParam0, 2, 1))
			{
				func_981(iParam0, 2, 1);
			}
			if (func_698(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_983(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_508(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_172(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_172(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1992(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_983(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1993(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_983(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1993(iParam0, 1);
			}
			else
			{
				return 0;
			}
		case 1:
			if (bVar3)
			{
				if (iParam13 == 0)
				{
					iParam13 = Global_40.f_4942[iParam0]->f_4;
				}
			}
			if (!func_1016(iParam0, 44, 0))
			{
				func_983(iParam0, 44, 0);
			}
			if (func_1994(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1993(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_981(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1018(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1995(iParam0, 0, 0, 1);
			}
			func_981(iParam0, 33, 1);
			func_981(iParam0, 34, 1);
			func_981(iParam0, 29, 1);
			if (!func_393(vVar0) && bParam7)
			{
				func_1993(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1993(iParam0, 4);
			}
			else
			{
				func_1993(iParam0, 5);
			}
			break;
		case 3:
			if (!is_entity_dead(Global_1360165[iParam0]) && !_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
			{
				if (is_entity_attached(Global_1360165[iParam0]))
				{
					if (is_ped_on_mount(Global_1360165[iParam0]) && bParam10)
					{
					}
					else if (is_ped_using_any_scenario(Global_1360165[iParam0]))
					{
						func_1992(iParam0, 1, "Teleporting a stolen companion using a scenario.");
					}
					else
					{
						detach_entity(Global_1360165[iParam0], true, true);
					}
				}
				iVar4 = 2;
				if (bParam10)
				{
					iVar4 |= 4;
				}
				func_910(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
			}
			else if (bParam16)
			{
				if (is_ped_active_in_scenario(Global_1360165[iParam0], 0) && !_0x0c3cb2e600c8977d(Global_1360165[iParam0], 1))
				{
					clear_ped_tasks(Global_1360165[iParam0], 1, 0);
				}
				return 0;
			}
			if (iParam13 != 0)
			{
				func_1993(iParam0, 4);
			}
			else
			{
				func_1993(iParam0, 5);
			}
			break;
		case 4:
			if (iParam13 != 0 || bVar3)
			{
				if (bVar3)
				{
					if (iParam13 == 0)
					{
						iParam13 = Global_40.f_4942[iParam0]->f_4;
					}
				}
				if (func_1996(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1997(iParam0, iParam13, 0);
						func_1998(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1016(iParam0, 25, 0))
						{
							func_981(iParam0, 25, 0);
						}
						func_983(iParam0, 66, 0);
						func_1993(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1993(iParam0, 5);
				}
				func_983(iParam0, 28, 1);
			}
			else
			{
				func_1993(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1993(iParam0, 6);
			}
			break;
		case 6:
			if (func_172(Global_1360165[iParam0], 0))
			{
				if (bParam24)
				{
					set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], true);
				}
				if (bParam18)
				{
					if (!_0x3ab6c7b0bb0df4b1(Global_1360165[iParam0], -1))
					{
						iVar5 = 0;
						while (iVar5 < 10)
						{
							clear_ped_blood_damage_by_zone(Global_1360165[iParam0], iVar5);
							clear_ped_damage_decal_by_zone(Global_1360165[iParam0], iVar5, "ALL");
							iVar5++;
						}
						_0xe3144b932dfdff65(Global_1360165[iParam0], 0f, -1, 1, 1);
						_0xd049920cd29f6cc8(Global_1360165[iParam0], 0f, -1, 1, 1);
					}
				}
				if (bParam19)
				{
					func_1999(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_2000(Global_1360165[iParam0], 1);
				}
			}
			func_1993(iParam0, 7);
		case 7:
			func_1018(iParam0, bParam9, bParam15, 0);
			func_1012(iParam0, 4, bParam11);
			func_1014(iParam0);
			if (bParam20)
			{
				if (func_2001(Global_1360165[iParam0]))
				{
				}
			}
			func_2002(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1993(iParam0, 0);
			func_699(iParam0, 16, 1);
			func_981(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1494(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_2003(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_2004(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1972(cParam0, iParam1, iParam2, func_317(iParam2, 0));
	func_1246(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1246(cParam0, iParam1, 128);
	}
	else
	{
		func_1264(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1495(int iParam0)
{
	if (!func_502(iParam0))
	{
		return;
	}
	iVar0 = func_539(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1496(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1497(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1506(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1498(int iParam0)
{
	iParam0 = func_259(iParam0);
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
	func_2005(&Var0);
	func_2006(iParam0, Var0);
	func_2007(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_2008(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_2009(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_2010(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_2011(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_2012(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_2013(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_2014(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_2015(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1499(vector3 vParam0)
{
	return func_2016(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1500(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_517(iParam0))
	{
		return false;
	}
	iVar0 = func_208(iParam0);
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return true;
	}
	return false;
}

void func_1501(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_511(iParam0);
	func_511(iParam0);
	func_2017(iParam0, iParam1);
	func_2018(iParam0, iParam1);
	func_2019(iParam0, iParam1);
	iVar1 = func_208(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_2020(iVar1);
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
	iVar3 = func_208(iParam1);
	if (does_entity_exist(iVar3))
	{
		if (iParam1 == 0 || iParam1 == 1)
		{
			func_2020(iVar3);
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
	func_261();
}

bool func_1502()
{
	iVar0 = func_1438();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1503()
{
	iVar0 = func_1438();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_2021(0);
}

int func_1504(int iParam0)
{
	iParam0 = func_259(iParam0);
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

int func_1505(int iParam0)
{
	iParam0 = func_259(iParam0);
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

int func_1506(int iParam0)
{
	iParam0 = func_259(iParam0);
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

void func_1507(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1744(&iVar0, &iVar1, &iVar2);
	func_1745(iParam0, iVar0);
	func_1746(iParam0, iVar1);
	func_1747(iParam0, iVar2);
	func_2022(iParam0, 1);
	func_2023(iParam0, 1);
}

void func_1508(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1800(iParam0, 1);
}

void func_1509(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_259(iParam0);
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

bool func_1510(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1025(iParam0, 1);
}

struct<2> func_1511(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_2024(iParam0, &uVar2))
	{
	}
	if (!func_2025(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1512()
{
	if (func_2026(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_2026(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_2026(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_2026(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_2026(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_2026(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1513(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_2027(iParam0);
	func_2028(iParam0, uParam1);
	func_2029(iParam0);
	func_2030(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_2031(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1514(int iParam0)
{
	iParam0 = func_259(iParam0);
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

bool func_1515(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1516(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1517(var uParam0)
{
	return uParam0;
}

bool func_1518(int iParam0)
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

int func_1519(var uParam0)
{
	return *uParam0;
}

bool func_1520(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_2032(iParam0) };
	if (func_1400(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_911(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_2033(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1521(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1522(var uParam0)
{
	destroy_cam(uParam0->f_2, false);
	uParam0->f_2 = create_cam("DEFAULT_SPLINE_CAMERA", false);
	iVar0 = 0;
	iVar1 = get_clock_hours();
	if (iVar1 > uParam0->f_6)
	{
		iVar0 = (iVar0 + (iVar1 - uParam0->f_6));
	}
	else
	{
		iVar0 = (iVar0 + (uParam0->f_6 - iVar1));
	}
	iVar0 *= 1000;
	iVar0 += 3000;
	iVar0 = (iVar0 / 2);
	add_cam_spline_node(uParam0->f_2, uParam0->f_8, uParam0->f_8.f_3, iVar0, 3, 2);
	add_cam_spline_node(uParam0->f_2, uParam0->f_8.f_6, uParam0->f_8.f_9, iVar0, 3, 2);
	set_cam_fov(uParam0->f_2, uParam0->f_8.f_12);
	set_cam_active(uParam0->f_2, true);
}

bool func_1523(var uParam0)
{
	switch (func_2034(uParam0))
	{
		case 0:
			uParam0->f_24 = func_278();
			iVar4 = func_278();
			func_1207(&iVar4, uParam0->f_6);
			func_1208(&iVar4, 0);
			func_1209(&iVar4, 0);
			if (func_1044(uParam0->f_24, iVar4, 1))
			{
				func_327(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_2035(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_2036(uParam0, 1);
			break;
		case 1:
			fVar5 = func_2037(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_2036(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_2037(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_327(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_686(iVar4), func_687(iVar4), func_688(iVar4));
				func_2038(get_clock_hours());
				func_2039(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1524(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_2040(2000);
	Global_16 = 0;
	func_2041();
	set_entity_invincible(Global_35, func_2042(*iParam0, 8));
	if (!func_2042(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_2042(*iParam0, 2) || func_2042(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_2042(*iParam0, 16))
	{
		func_228(1);
	}
	if (func_2042(*iParam0, 32))
	{
		func_617(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_2043(-1623728698, 0);
	}
	func_838(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1525(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = uParam0;
	uVar15 = _0x2024f4f333095fb1(&Var0, &Var13, iParam5);
	return uVar15;
}

struct<4> func_1526(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1527(var uParam0)
{
	return *uParam0;
}

bool func_1528(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1529(uParam0, 32768))
	{
		return true;
	}
	if (func_2044(uParam0) >= 3)
	{
		uParam0->f_2286 = func_965(get_player_index(), 0, 0, 1);
		uParam0->f_2287 = _is_ped_getting_into_a_mount_seat(Global_35, true);
		uParam0->f_2289 = is_ped_in_any_vehicle(Global_35, true);
		if (uParam0->f_2287)
		{
			if (!is_entity_dead(Global_1935630->f_40))
			{
				uParam0->f_2288 = Global_1935630->f_40;
			}
			else
			{
				uParam0->f_2288 = get_mount(Global_35);
			}
		}
		if (uParam0->f_2289)
		{
			uParam0->f_2291 = get_vehicle_ped_is_in(Global_35, true);
		}
		uParam0->f_2292 = get_interior_from_entity(Global_35);
		func_2045(uParam0);
	}
	if (func_2044(uParam0) < 10)
	{
		if (func_2044(uParam0) == 3)
		{
			func_2046(uParam0, iParam5, bParam6);
		}
		else if (func_2044(uParam0) > 3)
		{
			if (func_1527(uParam0) == 0)
			{
				if (!func_1529(uParam0, 524288))
				{
					func_2047(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_2048(uParam0, 4);
					func_2049(uParam0, 10);
					func_2050(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1529(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_2051(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_2052(0);
			func_2053();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_2051(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_2054(uParam0, uParam0->f_2074))
				{
					if (func_2055(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_2056(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_2056(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_2057(uParam0);
			}
		}
	}
	bVar0 = func_2058(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1529(uParam0, 268435456) && bVar1) && !func_1529(uParam0, 262144))
		{
			bVar3 = is_valid_interior(uParam0->f_2292);
			if (uParam0->f_2074 >= 0)
			{
				iVar4 = get_interior_at_coords(uParam0->f_1406[uParam0->f_2074]->f_1);
				if ((is_valid_interior(iVar4) && bVar3) && iVar4 == uParam0->f_2292)
				{
					bVar2 = true;
				}
			}
			if (!bVar3 || bVar2)
			{
				func_737(uParam0, 131072);
				func_737(uParam0, 268435456);
			}
		}
		if (func_2059(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_2051(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1527(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_2044(uParam0) == 3 || func_1529(uParam0, 131072))
	{
		func_2060(uParam0);
		if (!func_1529(uParam0, 262144))
		{
			if ((bVar0 && func_1529(uParam0, 65536)) || func_1529(uParam0, 131072))
			{
				func_737(uParam0, 32768);
				func_2048(uParam0, 4);
				func_2049(uParam0, 10);
				uParam0->f_2159 = 1;
				func_2050(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_2044(uParam0) >= 3)
	{
		func_2061(uParam0, iParam5);
		func_2062(uParam0);
		if (!func_2063(uParam0, 1))
		{
			func_2064(uParam0);
		}
		func_2065(uParam0);
	}
	switch (func_2044(uParam0))
	{
		case 0:
			func_2066(uParam0, Param1, iParam5);
			break;
		case 1:
			func_2067(uParam0);
			break;
		case 2:
			func_2068(uParam0);
			break;
		case 3:
			if (func_2069(uParam0))
			{
				func_2070(2);
				func_2056(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_213(&(uParam0->f_2262));
				func_2048(uParam0, 1);
				func_2071();
				func_2049(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1529(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_2044(uParam0) == 5)
			{
				if (func_2072(uParam0))
				{
					func_2048(uParam0, 2);
					func_2049(uParam0, 6);
				}
			}
			if (func_2044(uParam0) == 6)
			{
				if (func_2073(uParam0))
				{
					func_2048(uParam0, 3);
					func_2049(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1562(&(uParam0->f_2262)) >= 15f)
			{
				if (func_2074(uParam0, iParam5))
				{
					if (func_2075(uParam0))
					{
						uParam0->f_2075 = func_2076(uParam0);
						func_213(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_2048(uParam0, 6);
						func_2049(uParam0, 9);
					}
					else
					{
						func_2048(uParam0, 4);
						func_2049(uParam0, 10);
						func_2050(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_2074(uParam0, iParam5))
			{
				func_2050(uParam0, iParam5);
				func_2049(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1529(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1530(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1531(var uParam0, var uParam1)
{
	if (func_1529(uParam1, 32768))
	{
		Var0 = { func_2077(uParam0) };
		func_2078(uParam0, &Var0);
		if (func_1529(uParam1, 131072))
		{
			func_738(uParam0, 268435456);
			if (func_393(uParam0->f_865))
			{
				uParam0->f_865 = { func_2079(uParam1, uParam1->f_2074) };
			}
			if (func_393(uParam0->f_862))
			{
				uParam0->f_862 = { func_2079(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1529(uParam1, 268435456))
		{
			func_1834(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1529(uParam1, 524288))
	{
		func_738(uParam0, 67108864);
		func_1530(uParam1, 524288);
	}
	if (func_2059(uParam1, 128))
	{
		func_738(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_2051(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1834(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1532(char[4] cParam0)
{
	if (func_827(&(cParam0->f_7375), 128) || func_827(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_2080(&(cParam0->f_7375));
		func_1451(&(cParam0->f_7375), 128, 1);
		func_1451(&(cParam0->f_7375), 256, 1);
		func_1451(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1533(char[4] cParam0)
{
	func_2081(&(cParam0->f_7375));
}

bool func_1534(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_2082(uParam4, &cParam0);
	if (func_827(uParam4, 2) && !func_827(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_2083(uParam4) != 1)
	{
		func_2084(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_2083(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_2085(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_2086(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2087(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2088(cParam5);
				}
				func_2086(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_827(uParam4, 2097152))
					{
						func_2089(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_827(uParam4, 134217728)))
				{
				}
				else
				{
					func_1886(uParam4);
				}
				func_213(&(uParam4->f_1));
				func_2086(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2090(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_919(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2086(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_2091(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_2086(uParam4, 4);
					}
					else if (!func_393(func_2092(uParam4)) && !func_1816(Global_35, func_2092(uParam4), 100f, 1, 1))
					{
						func_1436(1);
						start_player_teleport(get_player_index(), func_2092(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_919(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_2086(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_272(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_2085(uParam4, &cParam0, cParam5);
						func_2086(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_919(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_2086(uParam4, 4);
			}
			break;
		case 3:
			func_389(uParam4);
			if (func_2087(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2088(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_827(uParam4, 512)))
			{
				if (!func_827(uParam4, 1024) && func_1411(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_827(uParam4, 512))
				{
					func_213(&(uParam4->f_1));
					func_738(uParam4, 512);
					func_2086(uParam4, 4);
				}
				else if (func_827(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_2084(uParam4);
			}
			if (func_827(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2093(uParam4) - func_1410(uParam4)))) <= 2f)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					if (_0xef324e9550a394d5(uParam4->f_804))
					{
						_0x1b70811d3bf75db9(1, 1);
					}
				}
				if (func_1965(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_1410(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2094(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2095(uParam4);
				return true;
			}
			else
			{
				if (func_827(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_213(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_738(uParam4, 512);
						func_1451(uParam4, 67108864, 1);
						func_2086(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_827(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_1410(uParam4) <= 5000) && func_1410(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_827(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1524(&(uParam4->f_861), 0);
					func_738(uParam4, 536870912);
				}
				if (func_1410(uParam4) >= 5000 && func_1410(uParam4) <= (func_2093(uParam4) - 5000))
				{
					func_2096();
				}
			}
			break;
		case 6:
			if (func_2094(uParam4))
			{
				func_2095(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_827(uParam4, 524288))
			{
				_0x1b70811d3bf75db9(1, 1);
			}
			if (!is_screen_faded_out())
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(1000);
					if (_is_anim_scene_paused(uParam4->f_804))
					{
						func_738(uParam4, 1073741824);
					}
				}
			}
			else
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					if (!_is_anim_scene_paused(uParam4->f_804))
					{
						set_anim_scene_paused(uParam4->f_804, true);
						if (_0xc17f69e1418cd11f(9) != 0)
						{
							_0xdd1232b332cbb9e7(9, 1, 0);
						}
						return false;
					}
					else if (_0x4cdffe3189ebdbd0(uParam4->f_804))
					{
						return false;
					}
				}
				iVar0 = 1;
				if (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3)
				{
					if (func_2097(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2086(uParam4, 3);
					}
					else if (func_919(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2086(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2087(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2086(uParam4, 3);
					}
					else if (func_919(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_2086(uParam4, 3);
					}
				}
				if (func_2083(uParam4) == 3)
				{
					if (func_827(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_2086(uParam4, 4);
			break;
	}
	return false;
}

void func_1535(char[4] cParam0)
{
	if (!is_itemset_valid(Global_43616))
	{
		return;
	}
	iVar0 = (get_itemset_size(Global_43616) - 1);
	while (iVar0 >= 0)
	{
		iVar1 = _get_entity_from_item(get_indexed_item_in_itemset(iVar0, Global_43616));
		if (does_entity_exist(iVar1))
		{
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_2098()))
			{
				if (!_0x88ad6cc10d8d35b2(iVar1))
				{
					set_entity_as_mission_entity(iVar1, true, true);
				}
				delete_entity(&iVar1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

void func_1536(char[4] cParam0)
{
	func_2089(&(cParam0->f_7375));
}

bool func_1537(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_262(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2099(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_263(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2100(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1538(int iParam0)
{
	MemCopy(&cVar0, {func_262(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1539(int iParam0)
{
	Var0 = { func_1538(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1540(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2101(iVar0));
		iVar0++;
	}
}

void func_1541(int iParam0)
{
	if (!_does_volume_exist(&(uLocal_487[iParam0])))
	{
		func_2102(iParam0, &Var0);
		func_1547(uLocal_487[iParam0], Var0, Var0.f_3, Var0.f_6, Var0.f_9);
	}
}

void func_1542(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_1543(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	iVar0 = 8;
	if (bParam1)
	{
		iVar0 |= 72;
	}
	if (bParam2)
	{
		iVar0 |= 131072;
	}
	if (bParam3)
	{
		iVar0 |= 24;
	}
	if (bParam4)
	{
		iVar0 |= 40;
	}
	if (bParam5)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_1544(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_cylinder_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

var func_1545(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_1542(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_1546(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	_0xb56d41a694e42e86(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	_0x18262cafebb5fbe1(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_1632(&iParam1, 8192);
	}
	if (bParam3)
	{
		_0x2161278c6322f740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
	}
}

void func_1547(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = _create_volume_box_with_custom_name(vParam1, vParam4, vParam7, sParam10);
}

void func_1548(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (!does_entity_exist(iParam0) || is_entity_dead(iParam0))
	{
		return;
	}
	bVar0 = false;
	set_ped_relationship_group_hash(iParam0, _get_default_relationship_group_hash(iParam1));
	if (!bParam7)
	{
		if (func_2103(iParam1))
		{
			func_925(iParam0, 41788943);
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
			func_2104(iParam0, 0, 1);
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
			func_2105(iParam0, 0);
			bVar0 = true;
		}
		func_2106(iParam0, iParam2);
	}
	if (bVar0)
	{
		_update_ped_variation(iParam0, false, true, true, true, false);
	}
}

bool func_1549(int iParam0, int iParam1)
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

bool func_1550(int iParam0, int iParam1)
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

bool func_1551(int iParam0, int iParam1)
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
	if (!func_1549(iParam0, iVar0))
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

void func_1552(int iParam0)
{
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

int func_1553(vector3 vParam0, vector3 vParam3)
{
	return add_scenario_blocking_area((vParam0.x - vParam3.x), (vParam0.y - vParam3.y), (vParam0.z - vParam3.z), (vParam0.x + vParam3.x), (vParam0.y + vParam3.y), (vParam0.z + vParam3.z), 0, 15);
}

void func_1554()
{
	func_2107(2809.423f, -1181.394f, 46.32211f, 2f, 0, 0, 5);
	func_2107(2793.051f, -1181.463f, 46.79234f, 2f, 0, 0, 5);
	func_2107(2743.885f, -1153.268f, 48.48392f, 2f, 0, 0, 5);
	func_2107(2689.742f, -1135.479f, 49.55294f, 2f, 0, 0, 5);
	func_2107(2647.834f, -1135.841f, 50.09752f, 2f, 0, 0, 5);
	func_2107(2538.007f, -1130.99f, 49.06778f, 2f, 0, 0, 5);
	func_2107(2469.479f, -1131.055f, 47.27884f, 2f, 0, 0, 5);
	func_2107(2376.429f, -1130.674f, 45.46158f, 2f, 0, 0, 5);
	func_2107(2337.842f, -1106.939f, 44.84634f, 2f, 0, 0, 5);
	func_2107(2316.068f, -1080.862f, 42.60642f, 2f, 0, 0, 5);
}

void func_1555(char[4] cParam0)
{
	switch (func_33(cParam0))
	{
		case 0:
			if (get_clock_hours() >= 6)
			{
				_set_milliseconds_per_game_minute(9999999);
			}
			else
			{
				_set_milliseconds_per_game_minute(ceil((to_float(2000) * 0.5f)));
			}
			break;
		case 1:
			fVar0 = func_1261(&(iLocal_378[1]), func_1288(0), 0);
			if (iVar973 == 3)
			{
				if (get_clock_hours() >= 7)
				{
					_set_milliseconds_per_game_minute(9999999);
				}
				else
				{
					_set_milliseconds_per_game_minute(ceil((to_float(2000) * 0.5f)));
				}
			}
			else if (fVar0 > 900f)
			{
				if (get_clock_hours() >= 7)
				{
					_set_milliseconds_per_game_minute(9999999);
				}
				else
				{
					_set_milliseconds_per_game_minute(ceil((to_float(2000) * 0.5f)));
				}
			}
			else if (fVar0 > 750f)
			{
				if (get_clock_hours() >= 8 || !func_1287(cParam0, &Local_524))
				{
					_set_milliseconds_per_game_minute(9999999);
				}
				else
				{
					_set_milliseconds_per_game_minute(2000);
				}
			}
			else if (fVar0 > 600f)
			{
				if (get_clock_hours() >= 9 || !func_1287(cParam0, &Local_524))
				{
					_set_milliseconds_per_game_minute(9999999);
				}
				else
				{
					_set_milliseconds_per_game_minute(ceil((to_float(2000) * 0.5f)));
				}
			}
			else if (get_clock_hours() >= 9 || !func_1287(cParam0, &Local_524))
			{
				_set_milliseconds_per_game_minute(9999999);
			}
			else
			{
				_set_milliseconds_per_game_minute(ceil((to_float(2000) * 0.35f)));
			}
			break;
		case 2:
		case 3:
			if (get_clock_hours() >= 12)
			{
				_set_milliseconds_per_game_minute(9999999);
			}
			else
			{
				_set_milliseconds_per_game_minute(ceil((to_float(2000) * 0.5f)));
			}
			break;
		case 4:
		case 5:
		case 6:
			if (get_clock_hours() >= 16)
			{
				_set_milliseconds_per_game_minute(9999999);
			}
			else
			{
				_set_milliseconds_per_game_minute(500);
			}
			break;
		case 7:
		case 8:
			if (get_clock_hours() >= 19)
			{
				_set_milliseconds_per_game_minute(9999999);
			}
			break;
	}
}

void func_1556(float fParam0)
{
	func_2108(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_1557(char[4] cParam0)
{
	func_2052(0);
	if (func_33(cParam0) < 8)
	{
		if (func_33(cParam0) == 2 || func_33(cParam0) == 3)
		{
			if (func_803(Global_35, 1, 0, 0) == -160924582)
			{
				func_460(4);
			}
		}
		else if (func_33(cParam0) == 4 || func_33(cParam0) == 5)
		{
			func_2109(16);
			func_2109(32);
			func_2109(64);
		}
		if (is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false))
		{
			set_ped_reset_flag(Global_35, 200, true);
		}
		else
		{
			set_ped_max_move_blend_ratio(Global_35, 1f);
		}
		disable_control_action(0, -640622144, false);
		disable_control_action(0, -17122892, false);
		disable_control_action(0, -822242784, false);
		disable_control_action(0, -562475458, false);
		if (!_get_ped_crouch_movement(Global_35) && !get_ped_stealth_movement(Global_35))
		{
			disable_control_action(0, -620139643, false);
		}
		if ((is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false) || _0x3ab6c7b0bb0df4b1(Global_35, -1)) || is_task_move_network_active(Global_35))
		{
			func_2110();
			disable_control_action(0, -128997553, false);
			disable_control_action(0, -674562833, false);
			disable_control_action(0, -299367216, false);
			disable_control_action(0, -124244224, false);
			disable_control_action(0, 1618006066, false);
			disable_control_action(0, -1046962283, false);
			disable_control_action(0, -1304887797, false);
			disable_control_action(0, -1404316431, false);
			disable_control_action(0, -209515122, false);
			disable_control_action(0, 1934388793, false);
			disable_control_action(0, 1287709438, false);
			disable_control_action(0, -432665970, false);
			disable_control_action(0, 139329429, false);
			disable_control_action(0, 813679809, false);
		}
	}
}

void func_1558(char[4] cParam0)
{
	if (func_33(cParam0) < 8)
	{
		if (func_33(cParam0) == 5 || func_33(cParam0) == 6)
		{
			if (!_0xa24c1d341c6e0d53(0, 0, 0))
			{
				_0x8370d34bd2e60b73();
			}
		}
		else if (is_ped_in_vehicle(Global_35, &(iLocal_378[1]), false) || func_33(cParam0) == 3)
		{
			if (!_0xa24c1d341c6e0d53(0, 0, 0))
			{
				_0x1cfb749ad4317bde();
			}
			_0xd904f75dbd7ab865(&(iLocal_378[1]));
		}
		else if (!_0xa24c1d341c6e0d53(0, 0, 0))
		{
			_0x632be8d84846fa56();
		}
		if (func_172(&(iLocal_315[3]), 0))
		{
			_0xd904f75dbd7ab865(&(iLocal_315[3]));
		}
		if (((func_33(cParam0) == 5 && iVar1155 >= 2) || func_33(cParam0) == 6) || func_33(cParam0) == 7)
		{
			_disable_first_person_cam_this_frame();
		}
	}
}

void func_1559()
{
	iVar0 = iVar997;
	if (!_0x927b810e43e99932(&Local_940))
	{
		if (_does_anim_scene_exist(iVar456) && _is_anim_scene_started(iVar456, false))
		{
			func_2111();
		}
	}
	else
	{
		switch (iVar997)
		{
			case 0:
				if (_does_anim_scene_exist(iVar456) && _is_anim_scene_started(iVar456, false))
				{
					if (_get_anim_scene_time(iVar456) > 10f)
					{
						func_1907();
						iLocal_999 = 1;
					}
				}
				break;
			case 1:
				Local_940.f_30 = func_2112(3000f, 0.2f);
				if (_does_anim_scene_exist(iVar456) && _is_anim_scene_finished(iVar456, false))
				{
					func_1907();
					iLocal_999 = 2;
				}
				break;
			case 2:
				Local_940.f_30 = func_2112(3000f, 0.5f);
				if (func_2113())
				{
					func_1907();
					iLocal_999 = 3;
				}
				break;
			case 3:
				Local_940.f_30 = func_2112(5000f, 0.75f);
				if (func_1847() && Local_940.f_30 >= 0.75f)
				{
					func_1907();
					iLocal_999 = 4;
				}
				break;
			case 4:
				func_2114(Global_36, get_entity_coords(&(iLocal_315[1]), true, false), 1f);
				break;
		}
		if (iVar0 != iVar997)
		{
		}
		_0xac77757c05de9e5a(&Local_940);
	}
}

void func_1560(char* sParam0)
{
	if (is_ped_on_mount(&(iLocal_315[1])) && is_waypoint_playback_going_on_for_ped(&(iLocal_315[1]), 0))
	{
		if (is_ped_on_mount(&(iLocal_315[1])))
		{
			iVar2 = get_mount(&(iLocal_315[1]));
		}
		if (!is_entity_dead(iVar2))
		{
			if (does_rope_exist(Local_524.f_136))
			{
				vVar3 = { get_rope_last_vertex_coord(Local_524.f_136) };
			}
			else
			{
				vVar3 = { get_entity_coords(Global_35, false, false) };
			}
			iVar10 = get_ped_waypoint_progress(&(iLocal_315[1]));
			bVar11 = func_1908();
			if (waypoint_recording_get_closest_waypoint(sParam0, vVar3, &iVar9))
			{
				waypoint_recording_get_coord(sParam0, iVar9, &vVar6);
				if (func_393(vVar6))
				{
					vVar6 = { vVar3 };
				}
				if (get_ped_waypoint_progress(&(iLocal_315[1])) > 540)
				{
					fVar12 = 10f;
				}
				else if (get_ped_waypoint_progress(&(iLocal_315[1])) > 530)
				{
					fVar12 = 20f;
				}
				else if (get_ped_waypoint_progress(&(iLocal_315[1])) > 520)
				{
					fVar12 = 30f;
				}
				else
				{
					fVar12 = 40f;
				}
				fVar0 = 1.501f;
				fVar1 = 2.001f;
				if (bVar11)
				{
					if (iVar9 < iVar10)
					{
						fLocal_664 = func_1424(fVar661, fVar0, get_frame_time());
					}
					else
					{
						fLocal_664 = func_1424(fVar661, fVar1, get_frame_time());
					}
				}
				else if (iVar9 > iVar10 || func_1261(&(iLocal_315[1]), vVar6, 0) < fVar12)
				{
					fLocal_664 = func_1424(fVar661, fVar1, get_frame_time());
				}
				else
				{
					fLocal_664 = func_1424(fVar661, fVar0, get_frame_time());
				}
				func_2115(&(iLocal_315[1]), fVar661);
			}
		}
	}
}

void func_1561()
{
	fVar0 = Global_36.f_2;
	fVar1 = 500f;
	fVar2 = (fVar1 - (fVar0 * 2.25f));
	if (fVar2 < -200f)
	{
		fVar2 = -200f;
	}
	_0xc332c91388f5580b(fVar2);
}

float func_1562(float fParam0)
{
	if (!func_26(fParam0))
	{
		return 0f;
	}
	if (func_484(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_537() - fParam0->f_1);
}

void func_1563(char[4] cParam0)
{
	iVar16 = func_33(cParam0);
	iVar17 = func_132(iVar16);
	iVar18 = func_162(cParam0, iVar16);
	if (cParam0->f_8269.f_2504 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2504)
		{
			if (func_210(cParam0->f_8269[iVar19], 1048576))
			{
				if (func_2116(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1481(cParam0->f_8269[iVar19]);
				}
				else if (func_2117(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_220(cParam0->f_8269[iVar19]);
					if (iVar19 < (cParam0->f_8269.f_2504 - 1))
					{
						_copy_memory(cParam0->f_8269[iVar19], cParam0->f_8269[(cParam0->f_8269.f_2504 - 1)], 16);
						_copy_memory(cParam0->f_8269[cParam0->f_8269.f_2504], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2504 = (cParam0->f_8269.f_2504 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2505 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2505)
		{
			if (func_210(cParam0->f_8269.f_641[iVar19], 1048576))
			{
				if (func_2118(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2119(cParam0->f_8269.f_641[iVar19]);
					if (iVar19 < (cParam0->f_8269.f_2505 - 1))
					{
						_copy_memory(cParam0->f_8269.f_641[iVar19], cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1)], 16);
						_copy_memory(cParam0->f_8269.f_641[(cParam0->f_8269.f_2505 - 1)], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269.f_641[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2505 = (cParam0->f_8269.f_2505 - 1);
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2506 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2506)
		{
			if (func_210(cParam0->f_8269.f_1282[iVar19], 1048576))
			{
				if (func_2118(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_211(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_210(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2120(&(cParam0->f_8269));
						}
						if (iVar19 < (cParam0->f_8269.f_2506 - 1))
						{
							_copy_memory(cParam0->f_8269.f_1282[iVar19], cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1)], 16);
							_copy_memory(cParam0->f_8269.f_1282[(cParam0->f_8269.f_2506 - 1)], &uVar0, 16);
							iVar19 = (iVar19 - 1);
						}
						else
						{
							_copy_memory(cParam0->f_8269.f_1282[iVar19], &uVar0, 16);
						}
						cParam0->f_8269.f_2506 = (cParam0->f_8269.f_2506 - 1);
					}
				}
			}
			iVar19++;
		}
	}
	if (cParam0->f_8269.f_2507 > 0)
	{
		iVar19 = 0;
		while (iVar19 < cParam0->f_8269.f_2507)
		{
			if (func_210(cParam0->f_8269.f_2243[iVar19], 1048576))
			{
				if (func_2116(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2121(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_482(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2117(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2121(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_482(cParam0->f_8269.f_2243[iVar19], 2);
					if (iVar19 < (cParam0->f_8269.f_2507 - 1))
					{
						_copy_memory(cParam0->f_8269.f_2243[iVar19], cParam0->f_8269.f_2243[iVar19 + 1], 16);
						_copy_memory(cParam0->f_8269.f_2243[iVar19 + 1], &uVar0, 16);
						iVar19 = (iVar19 - 1);
					}
					else
					{
						_copy_memory(cParam0->f_8269.f_2243[iVar19], &uVar0, 16);
					}
					cParam0->f_8269.f_2507 = (cParam0->f_8269.f_2507 - 1);
				}
			}
			iVar19++;
		}
	}
}

bool func_1564(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 16777216))
	{
		return false;
	}
	if (!func_121(cParam0, func_33(cParam0), 2))
	{
		return false;
	}
	if (!Global_1935630->f_12)
	{
		return ((get_is_task_active(Global_35, 3) || func_1823(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1565()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_2052(0);
	func_2110();
}

void func_1566(var uParam0)
{
	if (func_501(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_501(uParam0, 1024);
	if (func_501(uParam0, 128) || bVar0)
	{
		if (func_501(uParam0, 4096))
		{
			if (!func_501(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_975(uParam0, 2048);
				return;
			}
		}
		else if (func_501(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_974(uParam0, 2048);
		}
		if (func_501(uParam0, 512))
		{
			if (func_502(uParam0->f_10))
			{
				if (func_905(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_2122(uParam0->f_10))
					{
						func_507(uParam0->f_10, 1);
						func_1245(uParam0->f_10, 0);
					}
				}
				else if ((func_2122(uParam0->f_10) && !bVar0) && !func_501(uParam0, 16384))
				{
					func_507(uParam0->f_10, 0);
					func_1245(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_905(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_905(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_501(uParam0, 512))
	{
		if (func_502(uParam0->f_10))
		{
			if (func_2122(uParam0->f_10))
			{
				func_507(uParam0->f_10, 0);
				func_1245(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1567(int iParam0)
{
	return (iParam0 < func_394() && iParam0 >= 0);
}

int func_1568(int iParam0)
{
	if (iParam0 <= -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (iVar0 == iParam0 || iVar0 == 8)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1569(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1570(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1567(iVar0))
	{
		return false;
	}
	iVar1 = func_1568(iParam2);
	if (!func_1569(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

void func_1571(char[4] cParam0)
{
	func_2123(cParam0);
	if (func_272(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_272(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_913(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_2124(cParam0);
	func_2125(cParam0, 67108864);
	func_2125(cParam0, 8192);
	func_915(cParam0, 4);
	func_915(cParam0, 512);
	func_915(cParam0, 65536);
	func_915(cParam0, 1024);
	func_915(cParam0, 262144);
	func_915(cParam0, 16777216);
	func_915(cParam0, 64);
	func_258(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_2126(cParam0, 1);
	if (func_120(cParam0, 4194304))
	{
		func_140(cParam0, func_33(cParam0), 1073741824);
	}
	func_258(cParam0, 4194304);
	func_258(cParam0, 8388608);
	if (!func_121(cParam0, func_33(cParam0), 2048))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	if (func_20() == 0)
	{
		func_21(8);
		func_79(1);
	}
	if (func_121(cParam0, func_33(cParam0), 64) || !func_115(cParam0))
	{
		func_40(0);
	}
	else
	{
		func_40(1);
	}
	_set_milliseconds_per_game_minute(2000);
	if (!func_8(cParam0, 131072))
	{
		set_everyone_ignore_player(get_player_index(), false);
	}
	func_540(&(cParam0->f_13106));
	func_213(&(cParam0->f_13112));
	func_2127(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_228(1);
	}
	if (func_946(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_946(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_946(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2128(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(cParam0, func_33(cParam0), 1))
	{
		func_222(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2129(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_2130(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_2131(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1572(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1573(char[4] cParam0)
{
	func_2088(cParam0);
}

void func_1574(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1475(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1575(char[4] cParam0)
{
	func_2132(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1576(char[4] cParam0)
{
	return true;
}

void func_1577(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1578(var uParam0, int iParam1)
{
	iVar0 = func_2133(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1579(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2134(cParam0, uParam1))
	{
		return 0;
	}
	if (func_502(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1566(uParam1);
	func_2135(uParam1);
	if (!bParam2)
	{
		func_2136(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2137(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2138(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2139(cParam0, uParam1);
	func_2140(uParam1);
	return 0;
}

bool func_1580(char[4] cParam0)
{
	return true;
}

int func_1581(int iParam0)
{
	iVar4 = -899457438;
	iVar5 = 0;
	while (_event_manager_is_event_pending(iVar4))
	{
		if (_event_manager_peek_event(iVar4, &vVar0))
		{
			switch (vVar0.x)
			{
				case -1203660660:
					if (vVar0.z == 2338895)
					{
						if (_is_app_active(1433015236))
						{
							_close_app_by_hash(1433015236);
						}
						iVar5 = 1;
					}
					break;
				case -1740156697:
					if (iVar5 != 1)
					{
						*iParam0 = func_2141(vVar0.z);
						iVar5 = 3;
					}
					break;
				case 922460030:
					iVar5 = 2;
					break;
				default:
					break;
			}
			_event_manager_pop_event(iVar4);
		}
	}
	return iVar5;
}

void func_1582(char[4] cParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, bool bParam9, bool bParam10)
{
	func_1316(cParam0, &uParam1, "", bParam9, bParam10);
}

bool func_1583(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_2142(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1529(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_2143(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_2091(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

void func_1584(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_859((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2144(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2145(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2146((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_859((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2144(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2145(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2147((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_859((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2144(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2145(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2148((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_859((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2144(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2145(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2149((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_859(uParam4->f_1, iParam12))
	{
		func_2144(&(uParam4->f_1), iParam12);
		if (func_2145(&(uParam4->f_1), iParam13))
		{
			func_2150(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_859((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2144(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2145(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2151((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_859((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2144(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2145(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2152((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_859((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2144(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2145(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2153((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_859((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2144(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2145(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2154((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_859((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2144(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2145(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2155((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_859((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2144(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2145(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2156((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_859((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2144(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2145(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2157((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1585(char[4] cParam0)
{
	iVar0 = func_2158(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1586(bool bParam0, bool bParam1)
{
	if (func_2159(255) == 4)
	{
		return;
	}
	if (func_393(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_283(0);
	}
	else
	{
		if (bParam1)
		{
			func_2160(0, 0, 0, 1);
		}
		func_284(0);
		func_2161(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2162(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2163(Global_1109400->f_389, 42);
	func_2164(Global_1109400->f_428, 42);
}

bool func_1587(bool bParam0, bool bParam1, float fParam2)
{
	if (bParam0)
	{
		return bParam1;
	}
	return fParam2;
}

int func_1588(bool bParam0, bool bParam1, bool bParam2)
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

var func_1589(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1590(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
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
	return _create_var_string(2, func_1895(sParam1));
}

struct<4> func_1591(int iParam0, int iParam1)
{
	Var0 = { func_2165(iParam0, iParam1) };
	Var0.f_3 = func_2166(iParam0, iParam1);
	return Var0;
}

bool func_1592(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_20() != -1)
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

int func_1593(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_1592(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = Global_1360165[iVar0];
		if (!is_entity_dead(iVar1) && iParam0 == iVar1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1594(int iParam0, bool bParam1)
{
	iVar0 = func_539(iParam0);
	if (bParam1)
	{
		if (!func_172(iVar0, 0))
		{
			return false;
		}
	}
	return is_ped_group_member(iVar0, func_2167(), 1);
}

void func_1595(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_539(iParam0);
	sVar1 = func_317(iParam0, 0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0))
	{
		return;
	}
	if (bParam1 && Global_1935630->f_12)
	{
		return;
	}
	if (bParam4 && !func_251(iParam0))
	{
		return;
	}
	if (!bParam1 && !func_1016(iParam0, 37, 1))
	{
		return;
	}
	if (does_group_exist(get_player_group(player_id())) || (!bParam1 && Global_1935630->f_12))
	{
		if (!Global_1935630->f_12)
		{
			set_ped_config_flag(Global_35, 155, bParam1);
		}
		if (bParam1)
		{
			if (!func_1594(iParam0, 0))
			{
				if (is_ped_in_group(iVar0))
				{
					remove_ped_from_group(iVar0);
				}
				func_2168(iParam0, bParam5);
			}
		}
		else
		{
			func_2169(iParam0);
		}
		if (bParam1)
		{
			_0x2917e634206b9e17(iVar0, iParam3);
		}
		if (bParam1)
		{
			func_983(iParam0, 37, 1);
		}
		else
		{
			func_981(iParam0, 37, 1);
		}
	}
}

int func_1596(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

float func_1597(int iParam0, int iParam1, bool bParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	if (!does_entity_exist(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return vdist2(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
	}
	return func_1619(get_entity_coords(iParam0, false, false), get_entity_coords(iParam1, false, false));
}

void func_1598(int iParam0)
{
	iVar0 = func_978(iParam0);
	if (!_is_ped_carrying(iVar0))
	{
		return;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = 0;
	while (iVar2 < get_itemset_size(iVar1))
	{
		iVar3 = _get_entity_from_item(get_indexed_item_in_itemset(iVar2, iVar1));
		if (!does_entity_exist(iVar3))
		{
		}
		else
		{
			if (!_0x88ad6cc10d8d35b2(iVar3))
			{
				set_entity_as_mission_entity(iVar3, true, true);
			}
			_0x0d0db2b6af19a987(&iVar3);
		}
		iVar2++;
	}
}

int func_1599(int iParam0, bool bParam1)
{
	if (!func_977(iParam0))
	{
		return 0;
	}
	if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_126) && bParam1)
	{
		(*Global_1360165)[iParam0]->f_126 = func_2170(iParam0);
	}
	return (*Global_1360165)[iParam0]->f_126;
}

void func_1600(int iParam0)
{
	if (!func_977(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1357549->f_1675[iVar0]->f_1 == iParam0)
		{
			Global_1357549->f_1675[iVar0]->f_1 = -1;
			(*Global_1360165)[iParam0]->f_127 = 0;
		}
		iVar0++;
	}
}

void func_1601(int iParam0, int iParam1)
{
	if (!func_977(iParam0))
	{
		return;
	}
	(*Global_1360165)[iParam0]->f_70.f_12 = iParam1;
}

int func_1602(int iParam0)
{
	iVar0 = 0;
	if (!func_977(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 3)
		{
			if (Global_1357549->f_1675[iVar1]->f_1 == iParam0)
			{
				(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
				return &(Global_1357549->f_1675[iVar1]);
			}
			iVar1++;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (&Global_1357549->f_1675[iVar1] != 0 && Global_1357549->f_1675[iVar1]->f_1 == -1)
		{
			iVar0 = &Global_1357549->f_1675[iVar1];
			Jump @165; //curOff = 150
		}
		iVar1++;
	}
	if (!func_977(iParam0))
	{
		if (iVar0 != 0)
		{
			Global_1357549->f_1675[iVar1]->f_1 = iParam0;
			(*Global_1360165)[iParam0]->f_126 = Global_1357549->f_1675[iVar1]->f_4;
		}
	}
	return iVar0;
}

bool func_1603(int iParam0, bool bParam1)
{
	if (does_entity_exist(iParam0))
	{
		if (bParam1)
		{
			return is_ped_dead_or_dying(iParam0, true);
		}
		else
		{
			return is_entity_dead(iParam0);
		}
	}
	return true;
}

int func_1604(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 1;
	}
	return (iParam0 * func_1604(iParam0, (iParam1 - 1)));
}

void func_1605(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_2171(vVar0, vVar3, 0f) };
	vVar9 = { func_2172(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

int func_1606(int iParam0)
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

int func_1607(int iParam0)
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

void func_1608(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1609(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2173(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1610(int iParam0)
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

Vector3 func_1611(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2492.773f, 108.2766f, 43.6764f;
				case 1:
					return 2488.923f, 99.4348f, 44.1764f;
				case 2:
					return 2483.66f, 101.1266f, 44.5314f;
				case 3:
					return 2464.193f, 104.611f, 44.5533f;
				case 4:
					return 2472.385f, 95.4498f, 45.0183f;
				case 5:
					return 2443.722f, 97.72f, 44.621f;
				case 6:
					return 2438.582f, 107.5153f, 44.2004f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2541.909f, 120.8359f, 43.1764f;
				case 1:
					return 2553.195f, 118.614f, 45.6764f;
				case 2:
					return 2546.16f, 109.7995f, 43.9264f;
				case 3:
					return 2542.483f, 112.8267f, 42.6764f;
				case 4:
					return 2561.907f, 111.1511f, 48.7644f;
				case 5:
					return 2568.38f, 111.0049f, 50.5144f;
				case 6:
					return 2570.877f, 94.331f, 51.2644f;
				case 7:
					return 2561.83f, 104.4801f, 48.7644f;
				case 8:
					return 2549.193f, 130.3612f, 44.3616f;
				case 9:
					return 2546.757f, 98.5438f, 44.4045f;
				case 10:
					return 2449.125f, 91.3018f, 45.4244f;
				case 11:
					return 2449.872f, 97.0041f, 44.6744f;
				case 12:
					return 2450.028f, 113.706f, 44.6744f;
				case 13:
					return 2442.495f, 113.0736f, 44.1744f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2131.95f, -959.5f, 40.53f;
				case 1:
					return 2136.25f, -950.6825f, 41.0956f;
				case 2:
					return 2132.368f, -955.201f, 40.6872f;
				case 3:
					return 2809.926f, -1179.527f, 46.4185f;
				case 4:
					return 2812.076f, -1178.092f, 46.6685f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2461.001f, 102.5337f, 44.7647f;
				case 1:
					return 2467.767f, 96.4055f, 44.755f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 3234.398f, -571.2939f, 41.7199f;
				case 1:
					return 3254.75f, -536.1957f, 42.2199f;
				case 2:
					return 3205.349f, -597.0358f, 41.9699f;
				case 3:
					return 3236.918f, -584.6777f, 42.2199f;
				case 4:
					return 3043.264f, -570.5253f, 150.199f;
				case 5:
					return 3186.817f, -547.2136f, 72.75f;
				case 6:
					return 3211.998f, -564.4701f, 60f;
				case 7:
					return 3217.915f, -544.7226f, 60f;
				case 8:
					return 3249.262f, -577.0595f, 42.1011f;
				case 9:
					return 3261.63f, -556.3365f, 42.3511f;
				case 10:
					return 3275.373f, -583.2616f, 42.3511f;
				case 11:
					return 3266.62f, -592.3184f, 42.3511f;
				case 12:
					return 3346.037f, -640.2173f, 44.3511f;
				case 13:
					return 3239.009f, -582.2754f, 41.9181f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2950.783f, 591.6876f, 43.2357f;
				case 1:
					return 2952.359f, 594.8611f, 43.4857f;
				case 2:
					return 2952.35f, 590.9327f, 43.2357f;
				case 3:
					return 2953.602f, 593.6982f, 43.9857f;
				case 4:
					return 2955.254f, 588.9653f, 43.513f;
				case 5:
					return 2955.275f, 591.772f, 44.263f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2504.699f, 110.1266f, 42.7537f;
				case 1:
					return 2506.112f, 112.2563f, 42.2537f;
				case 2:
					return 2505.654f, 103.3924f, 42.485f;
				case 3:
					return 2503.556f, 106.2195f, 42.485f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2950.281f, 1369.92f, 43.1f;
				case 1:
					return 2938.1f, 1371.882f, 43.21f;
				case 2:
					return 2950.017f, 1374.209f, 42.92f;
				case 3:
					return 2939.445f, 1375.944f, 42.99f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2773.678f, 1098.508f, 63.2513f;
				case 1:
					return 2770.347f, 1097.945f, 63.0013f;
				case 2:
					return 2771.667f, 1101.884f, 64.2513f;
				case 3:
					return 2768.646f, 1102.42f, 64.7513f;
				case 4:
					return 2770.143f, 1106.316f, 65.5744f;
				case 5:
					return 2767.951f, 1104.909f, 65.5744f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2820.123f, 922.2509f, 49.9655f;
				case 1:
					return 2820.439f, 928.5521f, 48.7155f;
				case 2:
					return 2819.593f, 941.4866f, 49.4655f;
				case 3:
					return 2818.562f, 940.9469f, 49.7155f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 2797.184f, 900.4041f, 60.9357f;
				case 1:
					return 2798.766f, 900.322f, 60.9357f;
				case 2:
					return 2797.114f, 900.4119f, 60.9357f;
				case 3:
					return 2798.791f, 900.3624f, 60.9357f;
				case 4:
					return 2797.139f, 900.4357f, 60.8527f;
				case 5:
					return 2798.752f, 900.2196f, 60.8528f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 2851.438f, 750.0361f, 57.8406f;
				case 1:
					return 2853.901f, 747.4171f, 58.0906f;
				case 2:
					return 2849.412f, 746.3897f, 59.0906f;
				case 3:
					return 2850.642f, 742.8531f, 59.3406f;
				case 4:
					return 2847.798f, 743.0367f, 59.8445f;
				case 5:
					return 2848.904f, 740.5884f, 60.5945f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return 2953.606f, 706.6326f, 47.6364f;
				case 1:
					return 2952.12f, 710.6807f, 48.1364f;
				case 2:
					return 2956.426f, 708.3488f, 47.3864f;
				case 3:
					return 2954.981f, 712.1777f, 47.8864f;
				case 4:
					return 2958.264f, 710.051f, 46.9558f;
				case 5:
					return 2956.835f, 713.2234f, 47.9558f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 2820.233f, 1239.817f, 56.7769f;
				case 1:
					return 2804.138f, 1220.311f, 54.5616f;
				case 2:
					return 2819.437f, 1242.418f, 58.1268f;
				case 3:
					return 2799.366f, 1223.1f, 56.252f;
				case 4:
					return 2817.73f, 1244.9f, 60.2979f;
				case 5:
					return 2796.917f, 1225.231f, 57.2979f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 2941.702f, 1356.195f, 43.1889f;
				case 1:
					return 3016.816f, 1439.715f, 45.6889f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 2872.436f, 1362.507f, 61.6111f;
				case 1:
					return 2868.271f, 1364.586f, 62.1111f;
				case 2:
					return 2872.56f, 1365.59f, 62.0024f;
				case 3:
					return 2870.305f, 1367.03f, 62.2524f;
				case 4:
					return 2874.137f, 1369.332f, 62.0024f;
				case 5:
					return 2870.735f, 1369.672f, 62.2524f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return 3254.53f, -541.9069f, 42.2131f;
				case 1:
					return 3254.484f, -543.1245f, 41.9631f;
				case 2:
					return 3252.867f, -540.5178f, 42.2131f;
				case 3:
					return 3252.923f, -536.371f, 42.2131f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 3202.749f, -602.0242f, 41.9181f;
				case 1:
					return 3204.941f, -595.712f, 41.9181f;
				case 2:
					return 3200.18f, -598.6732f, 41.9181f;
				case 3:
					return 3205.905f, -593.5021f, 41.9181f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 2542.513f, 124.8811f, 43.416f;
				case 1:
					return 2544.45f, 113.4694f, 43.666f;
				case 2:
					return 2541.218f, 136.5289f, 43.5664f;
				case 3:
					return 2544.204f, 92.3186f, 45.5674f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return 2461.478f, 105.724f, 44.3719f;
				case 1:
					return 2443.068f, 113.7278f, 44.1219f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1612(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 285.1905f;
				case 1:
					return 269.1905f;
				case 2:
					return 81.1905f;
				case 3:
					return 85.0462f;
				case 4:
					return 73.4389f;
				case 5:
					return 458.2047f;
				case 6:
					return 95.7688f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 459.1905f;
				case 1:
					return 475.1905f;
				case 2:
					return 457.1905f;
				case 3:
					return 447.1905f;
				case 4:
					return 60.5421f;
				case 5:
					return 88.5421f;
				case 6:
					return 54.5421f;
				case 7:
					return 74.5421f;
				case 8:
					return 95.3706f;
				case 9:
					return 75.3194f;
				case 10:
					return 279.1291f;
				case 11:
					return 269.1291f;
				case 12:
					return 227.1291f;
				case 13:
					return 229.1291f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 153.7f;
				case 1:
					return 155.8983f;
				case 2:
					return 169.0821f;
				case 3:
					return 31.2935f;
				case 4:
					return 35.2935f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -75.542f;
				case 1:
					return -93.1821f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 250.3324f;
				case 1:
					return 258.3324f;
				case 2:
					return 258.3324f;
				case 3:
					return 258.3324f;
				case 4:
					return -80.2557f;
				case 5:
					return 245.8313f;
				case 6:
					return 247.0313f;
				case 7:
					return 299.1568f;
				case 8:
					return 60.8582f;
				case 9:
					return 76.8582f;
				case 10:
					return 52.8582f;
				case 11:
					return 52.8582f;
				case 12:
					return -129.1418f;
				case 13:
					return 164.7797f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 63.3344f;
				case 1:
					return 47.3344f;
				case 2:
					return 59.3344f;
				case 3:
					return 51.3344f;
				case 4:
					return 57.8957f;
				case 5:
					return 41.8957f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 100.5511f;
				case 1:
					return 102.5511f;
				case 2:
					return 89.1229f;
				case 3:
					return 97.1229f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 154.15f;
				case 1:
					return 160.46f;
				case 2:
					return 154.71f;
				case 3:
					return 157.32f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 209.4868f;
				case 1:
					return 205.4868f;
				case 2:
					return 209.4868f;
				case 3:
					return 205.4868f;
				case 4:
					return 193.379f;
				case 5:
					return 197.379f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 303.2817f;
				case 1:
					return 171.2817f;
				case 2:
					return 287.2817f;
				case 3:
					return 333.2817f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -2f;
				case 1:
					return 4f;
				case 2:
					return -2f;
				case 3:
					return 4f;
				case 4:
					return 357.2209f;
				case 5:
					return 363.2209f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 330.5066f;
				case 1:
					return 336.5066f;
				case 2:
					return 330.5066f;
				case 3:
					return 320.5066f;
				case 4:
					return 335.7806f;
				case 5:
					return 325.7806f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -222f;
				case 1:
					return -234f;
				case 2:
					return -242f;
				case 3:
					return -242f;
				case 4:
					return 124.0861f;
				case 5:
					return 120.0861f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return 215.823f;
				case 1:
					return 243.823f;
				case 2:
					return 207.823f;
				case 3:
					return 239.823f;
				case 4:
					return 204.3489f;
				case 5:
					return -133.6511f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return 159.9767f;
				case 1:
					return 149.9767f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return 166.039f;
				case 1:
					return 164.039f;
				case 2:
					return 165.083f;
				case 3:
					return 165.083f;
				case 4:
					return 167.083f;
				case 5:
					return 167.083f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -34.9807f;
				case 1:
					return -208.9807f;
				case 2:
					return -40.9807f;
				case 3:
					return -6.9807f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return 328.4701f;
				case 1:
					return 176.4701f;
				case 2:
					return 240.4701f;
				case 3:
					return 256.4701f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return 99.6492f;
				case 1:
					return 91.6492f;
				case 2:
					return 118.0001f;
				case 3:
					return 430.4164f;
			}
			break;
		case 19:
			switch (iParam1)
			{
				case 0:
					return -116.5765f;
				case 1:
					return -116.5765f;
			}
			break;
	}
	return 0f;
}

void func_1613()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_392())
	{
		return;
	}
	func_2174(&(Global_40.f_40));
}

void func_1614()
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

bool func_1615()
{
	return !func_393(Global_1310720->f_1);
}

int func_1616()
{
	return Global_40.f_4283.f_1;
}

int func_1617()
{
	return Global_40.f_4283.f_4;
}

void func_1618(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2175())
	{
		fVar0 = func_1030(vParam0, Global_40.f_6);
	}
	if (func_2176(33554432))
	{
		if (!func_2177(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1030(vParam0, Global_40.f_2);
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

float func_1619(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1620()
{
	if (!func_191(&Global_1935630, 8192))
	{
		return;
	}
	if (func_82(32768))
	{
		return;
	}
	func_71(Global_1935630, 8192);
	fVar0 = 0f;
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2178(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2178(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2178(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2178(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2178(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2178(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2178(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2178(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2178(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_1815(10f, to_float(func_2178(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_1815(5f, to_float(func_2178(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_1815(25f, to_float(func_2179(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_1815(1f, to_float(func_2179(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_1815(6f, to_float(func_2179(64058978)))));
	fVar0 = (fVar0 + (3f * func_1815(1f, to_float(func_2179(795577402)))));
	iVar1 = func_2180();
	fVar0 = (fVar0 + (0.1111111f * func_1815(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_1815(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_1815(to_float(20), to_float(func_2181()))));
	if (func_2182(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2182(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2182(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2182(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2182(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_1814(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_1815(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_1815(5f, to_float(func_2179(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_1815(5f, to_float(func_2178(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1685(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1685(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1685(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1685(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1685(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1685(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2183(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_1815((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_1815(1f, to_float(func_2184(-2116919750)))));
	fVar5 = to_float(func_2185());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_1815(1f, to_float(func_2178(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1815(1f, to_float(func_2178(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1815(1f, to_float(func_2178(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1815(1f, to_float(func_2178(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_1815(5f, to_float(func_2179(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_1815(1f, to_float(func_2179(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_1815(1f, to_float(func_2179(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_1815(1f, to_float(func_2179(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1815(1f, to_float(func_2178(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1815(1f, to_float(func_2178(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1815(1f, to_float(func_2178(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1815(1f, to_float(func_2178(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1815(1f, to_float(func_2178(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_1815(1f, to_float(func_2178(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1815(1f, to_float(func_2178(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1815(1f, to_float(func_2178(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1815(1f, to_float(func_2178(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_1815(1f, to_float(func_2178(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2186(Var6);
	_0xe141f6b40b1e3683(&Var6, fVar0);
	if (fVar0 > fVar8)
	{
	}
	if (func_183(&Global_1898437))
	{
		iVar60 = 0;
		iVar61 = 0;
		while (iVar61 < &Global_1898329)
		{
			if (!func_183(Global_1898330[iVar61]))
			{
			}
			else
			{
				iVar62 = func_187(Global_1898330[iVar61]);
				if (iVar62 == 3 || iVar62 == 4)
				{
				}
				else if (iVar62 != 1 && iVar62 != 2)
				{
					func_2187(Global_1898330[iVar61]);
				}
				else
				{
					func_2188(iVar61, 0);
					if (func_188(Global_1898330[iVar61]) == 1)
					{
						iVar9[iVar60] = func_186(Global_1898330[iVar61]);
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
									iVar9[iVar60] = func_186((*Global_1347702)[&Global_40.f_450[iVar63]]->f_15);
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
										_0x51ec204a6e5b5a1a(func_186(&Global_1898437), &iVar9);
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

void func_1621(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		*uParam0 = (*uParam0 || iParam1);
	}
	else
	{
		*uParam0 = (*uParam0 - (*uParam0 && iParam1));
	}
}

void func_1622(int iParam0)
{
	if (!func_977(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2189(iParam0);
		if (iVar0 != 0)
		{
			(*Global_1360165)[iParam0]->f_1 = _create_persistent_character(iVar0);
			_0xfcc6db8dbe709bc8((*Global_1360165)[iParam0]->f_1);
		}
		else
		{
			(*Global_1360165)[iParam0]->f_1 = 0;
		}
	}
}

void func_1623(int iParam0)
{
	if (func_502(iParam0))
	{
		if (does_entity_exist(func_539(iParam0)))
		{
			func_699(iParam0, 67108864, 1);
			func_981(iParam0, 19, 1);
		}
	}
}

float func_1624(int iParam0)
{
	if (!func_977(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1625(int iParam0)
{
	iVar0 = func_539(iParam0);
	iVar1 = func_1015(iParam0, 0);
	func_2190(iParam0, iVar0);
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			_0xf008e0ba1fe1d644(1);
			bVar2 = true;
			set_entity_as_mission_entity(iVar0, true, true);
		}
		_0x7b204f88f6c3d287(iVar1);
		if (bVar2)
		{
			_0x7d4e70a67a651c71(1);
		}
	}
	_0xfcc6db8dbe709bc8(iVar1);
}

int func_1626(int iParam0)
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

char* func_1627(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_239(37, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1109400->f_12), get_length_of_literal_string(&(Global_1109400->f_12)));
		}
		else
		{
			return get_player_name(player_id());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!&Global_1225639->f_21[iParam0])
	{
		return sVar0;
	}
	if (func_239(37, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1108178)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1108178)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1225639->f_120[iParam0]));
}

char* func_1628(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1165(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1629(int iParam0)
{
	iParam0 = func_259(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_40.f_1095.f_1[iParam0]->f_372.f_1;
}

void func_1630(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_94(1356759001) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_1631(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

void func_1632(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

int func_1633(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_6;
	}
	return -15;
}

int func_1634(int iParam0, int iParam1)
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

void func_1635(int iParam0, bool bParam1)
{
	Global_1955569->f_1 = iParam0;
	if (bParam1)
	{
		func_2191(bParam1);
	}
}

void func_1636(int iParam0)
{
	_0x74bcceb233ad95b2(-156028329, iParam0);
}

char* func_1637(int iParam0)
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

bool func_1638(int iParam0)
{
	if (!func_1229(23, &vVar0))
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

bool func_1639(int iParam0, int iParam1, int iParam2)
{
	if (!func_1229(23, &Var0))
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

int func_1640(int iParam0)
{
	return iParam0;
}

int func_1641()
{
	iVar0 = func_1051();
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

int func_1642(int iParam0)
{
	if (!func_565(*iParam0, 0))
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

bool func_1643(int iParam0, var uParam1, bool bParam2)
{
	if (!func_565(iParam0, 0))
	{
		return false;
	}
	Var0 = { func_676(iParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_1088((386 + iVar29), 1);
		if (func_1089(iParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_1090(iParam0, &Var6, iVar5);
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

int func_1644(int iParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (!func_565(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_1091(iParam0, Param1, iParam5, bParam6) };
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return 0;
	}
	uVar4 = _0xc97e0d2302382211(func_998(bParam6), &Var0, 0);
	return uVar4;
}

struct<14> func_1645(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_1646(var uParam0, struct<4> Param1)
{
	if (_0xb881ca836cc4b6d4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_1647(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_998(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_1648(int iParam0)
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

float func_1649(int iParam0)
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
			return func_2192(iParam0);
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
			return func_2192(iParam0);
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
			return func_2192(iParam0);
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

bool func_1650(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_587(18);
		case 2:
			return func_587(20);
		case 1:
			return func_587(19);
		default:
			break;
	}
	return true;
}

int func_1651(int iParam0)
{
	return func_2193(&(Global_40.f_11095.f_11[iParam0]));
}

void func_1652(int iParam0, float fParam1, bool bParam2)
{
	if (func_20() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_587(31))
	{
		return;
	}
	iVar0 = func_1651(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	set_attribute_points(Global_35, iParam0, floor(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_1651(iParam0);
	if (func_2194(iParam0) && func_2195(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_2196(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_2197(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!is_radar_hidden() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_318(func_2198(iParam0), 0);
					}
					func_2199(iParam0, iVar2, iVar3);
					func_2200(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = get_game_timer();
}

char* func_1653(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_1654(int iParam0)
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

int func_1655()
{
	return func_2201(Global_40.f_12019);
}

int func_1656()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_1072(iVar1);
		if (func_340(iVar2, 1, 0) || func_1662(func_1661(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1657()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_2202(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1658()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_1667(_0x126cbebba46693cf(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1659()
{
	return _0x3a65f4844913a047(2103522376, 0);
}

int func_1660(int iParam0)
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

int func_1661(int iParam0)
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

bool func_1662(int iParam0)
{
	return (Global_40.f_12019 && iParam0) != 0;
}

char* func_1663(int iParam0)
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

int func_1664(int iParam0)
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

int func_1665(int iParam0)
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

char* func_1666(int iParam0)
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

bool func_1667(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

char* func_1668(int iParam0)
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
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		default:
			break;
	}
	return "";
}

char* func_1669(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		case 1:
			return "COL_RC_SEND";
		case 2:
			return "COL_RC_COLLECT";
		default:
			break;
	}
	return "";
}

bool func_1670(int iParam0)
{
	if (func_2203(iParam0) && func_340(iParam0, 1, 0))
	{
		return true;
	}
	else if (func_2204(iParam0) && func_2205(iParam0))
	{
		return true;
	}
	return false;
}

char* func_1671(int iParam0)
{
	if (!func_565(iParam0, 0))
	{
		return "";
	}
	return _get_label_text_by_hash(func_632(iParam0));
}

int func_1672(int iParam0)
{
	return Global_1898164->f_1[iParam0]->f_2;
}

void func_1673(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		_0xa0c683284df027c7(player_id(), 15, 1);
	}
	else
	{
		_0xa0c683284df027c7(player_id(), 15, 0);
		_0xa0c683284df027c7(player_id(), 1, 1);
	}
}

void func_1674(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (_databinding_get_array_count(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = _databinding_get_item_context_by_index(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0])
		{
			return;
		}
	}
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0]));
}

void func_1675(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 440, !bParam0);
}

void func_1676(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 439, !bParam0);
}

void func_1677(bool bParam0)
{
	if (!does_entity_exist(Global_35))
	{
		return;
	}
	if (is_entity_dead(Global_35) || is_ped_injured(Global_35))
	{
	}
	set_ped_config_flag(Global_35, 438, !bParam0);
}

void func_1678(bool bParam0)
{
	iVar0 = 398076311;
	if (bParam0)
	{
		_hide_hud_component(iVar0);
	}
	else
	{
		_display_hud_component(iVar0);
	}
}

void func_1679(bool bParam0)
{
	iVar0 = 50;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

void func_1680(bool bParam0)
{
	iVar0 = 49;
	iVar1 = player_id();
	if (bParam0)
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 1);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 1);
	}
	else
	{
		_0x0751d461f06e41ce(iVar1, iVar0, 0, 0);
		_0x0751d461f06e41ce(iVar1, iVar0, 1, 0);
	}
}

int func_1681(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_664(iParam0, 1)]);
}

void func_1682()
{
	if (!_unlock_is_unlocked(-1526891582))
	{
		func_2206();
		_unlock_set_unlocked(-1526891582, true);
		func_592(-916314281);
		func_638(-916314281, 1, 752097756);
		set_current_ped_weapon(Global_35, -916314281, true, 2, false, false);
		func_592(494733111);
		func_638(494733111, 1, 752097756);
		set_current_ped_weapon(Global_35, 494733111, true, 4, false, false);
	}
}

bool func_1683(int iParam0, var uParam1, var uParam2, int iParam3)
{
	iVar0 = func_998(0);
	*uParam1 = { func_1091(iParam0, func_1197(0), iParam3, 0) };
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

bool func_1684(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

int func_1685(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_1686(int iParam0)
{
	return _is_weapon_bow(iParam0);
}

int func_1687(var uParam0)
{
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_585(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_585(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_585(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_585(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_585(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1] && func_585(&(uParam0->f_1[iVar1]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

bool func_1688(int iParam0, int iParam1)
{
	iVar1 = func_664(func_2207(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (&Global_1946804->f_1497.f_1[iVar1] != 0 && &Global_1946804->f_1497.f_1[iVar1] != &Global_1946804->f_57[iVar1])
	{
		iVar0 = &Global_1946804->f_1497.f_1[iVar1];
		if (func_589(iVar0) == iParam0)
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	*iParam1 = 0;
	return false;
}

int func_1689(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == &Global_1946804->f_57[func_664(iParam1, 1)])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_1134(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + _0x31b2e7f2e3c58b89(iParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

bool func_1690(int iParam0)
{
	switch (iParam0)
	{
		case -1511777811:
			return true;
		case 103395732:
			return true;
		case -874127761:
			return true;
		case -635667748:
			return true;
		case 1613924106:
			return true;
		default:
			break;
	}
	return false;
}

int func_1691(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		case 1:
			return -649219937;
		case 2:
			return -858567048;
		case 3:
			return -718162726;
		case 4:
			return -1284282080;
		case 5:
			return -725003445;
		case 6:
			return -1445630104;
		case 7:
			return 580970876;
		case 8:
			return 967601061;
		case 9:
			return 1946030891;
		case 10:
			return -1511404982;
		case 11:
			return -944465290;
		case 12:
			return -1701098855;
		case 13:
			return 425319238;
		case 14:
			return 363594903;
		case 15:
			return -1217729597;
		case 16:
			return -1540119664;
		case 17:
			return 2100194981;
		case 18:
			return 446659922;
		case 19:
			return -390982951;
		case 20:
			return -1018798851;
		case 21:
			return -757567246;
		case 22:
			return -2054602073;
		case 23:
			return -378441099;
		case 24:
			return -585121677;
		case 25:
			return 1566949660;
		default:
			break;
	}
	return 0;
}

int func_1692(int iParam0)
{
	return func_2208(iParam0, -1);
}

bool func_1693(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

void func_1694(int iParam0)
{
	iVar0 = func_997(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);